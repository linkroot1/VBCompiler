#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "print_tree.h"

#pragma warning(disable : 4996)

TreeUnit *newTreeUnit(int parentNum, const char *label, const char *edgeLabel)
{
    if(label!=NULL && edgeLabel!=NULL && parentNum>=0)
    {
        TreeUnit *unit = (TreeUnit *)malloc(sizeof(TreeUnit));
        unit->label = (char *)malloc( sizeof(char)*(strlen(label)+1) );
        strcpy(unit->label,label);
		unit->edgeLabel = (char *)malloc( sizeof(char)*(strlen(edgeLabel)+1) );
        strcpy(unit->edgeLabel,edgeLabel);
        unit->parentNum = parentNum;
		unit->next = NULL;
        return unit;
    }
    return NULL;
}

void addTreeUnit(Tree *tree, TreeUnit *element)
{
    if(tree!=NULL && element!=NULL)
    {
        if(tree->begin==NULL)
        {
            tree->begin = element;
            tree->end = element;
            element->num = 1;
        }
        else
        {
            tree->end->next = element;
            element->num = tree->end->num+1;
            tree->end = element;
        }
    }
}



void print_node(int nodeNum, char *nodeName)
{
    printf("%d  [label=\"%s\"];\n",nodeNum,nodeName);
}

void print_edge(int numNode1, int numNode2, char* name)
{
    printf("%d->%d[label=\"%s\"];\n",numNode1,numNode2,name);
}

void printTree(ProgramItemList *pr)
{
    if(pr!=NULL)
    {
        Tree* tree = (Tree*)malloc(sizeof(Tree));
        tree->begin = NULL;
        tree->end = NULL;

		addTreeUnit(tree, newTreeUnit(0,"Program", ""));
		int rootNode = tree->end->num;


		programParse(pr, tree, rootNode);
        // programBlockParse(pr->end, tree, rootNode);

		printf("digraph Program {\n");

		TreeUnit *i_units = tree->begin;
		while(i_units!=NULL)
		{
			print_node(i_units->num,i_units->label);
			i_units = i_units->next;
		}

		printf("\n");
		TreeUnit *i_parent = tree->begin;

		while(i_parent!=NULL)
		{
			TreeUnit *i_child = tree->begin;
			while(i_child!=NULL)
			{
				if(i_parent->num==i_child->parentNum)
				{
					print_edge(i_parent->num, i_child->num,i_child->edgeLabel);
				}
				i_child = i_child->next;
			}
			i_parent = i_parent->next;
		}

		printf("\n}");
    }
	else
		printf("Tree error: null input");
}

//ToDO: Дописать

char* stmt_type_str(StmtType et)
{
	if (et == ST_IF_SINGLE) return "ST_IF_SINGLE";
	if (et == ST_DECL_SINGLE) return "ST_DECL_SINGLE";
	if (et == EXPR_SINGLE) return "EXPR_SINGLE";
	if (et == ST_DECL_MULTI) return "ST_DECL_MULTI";
	if (et == ST_WHILE_MULTI) return "ST_WHILE_MULTI";
	if (et == ST_DOLOOP_MULTI) return "ST_DOLOOP_MULTI";
	if (et == ST_FORLOOP_MULTI) return "ST_FORLOOP_MULTI";
	if (et == ST_FOREACHLOOP_MULTI) return "ST_FOREACHLOOP_MULTI";
	if (et == ST_SELECT_MULTI) return "ST_SELECT_MULTI";
	if (et == ST_IF_MULTI) return "ST_IF_MULTI";
	if (et == EXPR_MULTI) return "EXPR_MULTI";
	return "";
}

char* expr_type_str(ExprType et)
{
	if (et == ET_PLUS) return "+";
	if (et == ET_MINUS) return "-";
	if (et == ET_MULT) return "*";
	if (et == ET_DIV) return "/";
	if (et == ET_INTDIV) return "INT_DIV";
	if (et == ET_EQUAL) return "=";
	if (et == ET_LESSER) return "<";
	if (et == ET_GREATER) return ">";
	if (et == ET_EXP) return "^";
	if (et == ET_NOT_EQUAL) return "/=";
	if (et == ET_LESSER_EQUAL) return "<=";
	if (et == ET_GREATER_EQUAL) return ">=";
	if (et == ET_CONCAT) return "&";

	if (et == ET_ID) return "ET_ID";
	if (et == ET_ARRAY_OR_FUNC) return "ET_ARRAY_OR_FUNC";
	/*
	if (et == ET_FLOAT) return "ET_FLOAT";
	if (et == ET_STRING) return "ET_STRING";
	if (et == ET_CHARACTER) return "ET_CHARACTER";
	if (et == ET_BOOL) return "ET_BOOL";
	if (et == ET_CONCAT) return "&";
	if (et == ET_LOGIC_OR) return "OR";
	if (et == ET_LOGIC_AND) return "AND";
	if (et == ET_ASSIGN) return ":=";
	if (et == ET_NOT) return "NOT";*/
	return "";
}

char* variable_type_str(VarType et)
{
	if (et == VT_INTEGER) return "INTEGER";
	if (et == VT_DOUBLE) return "DOUBLE";
	if (et == VT_BOOLEAN) return "BOOLEAN";
	if (et == VT_STRING) return "STRING";
	return "";
}

/*
//Sample
void parce(*, Tree* tree, int parentNum)
{

}*/

void programParse(ProgramItemList* progList, Tree* tree, int parentNum) 
{
	if (progList != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "Root", ""));
		int currentIter = tree->end->num;

		ProgramItemListNotEmpty* ds = progList->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parceProgramItemsListNotEmpty(ds, tree, currentIter);
		}
	}
}

void parceProgramItemsListNotEmpty(ProgramItemListNotEmpty* programItemListNotEmpty, Tree* tree, int parentNum)
{
	if (programItemListNotEmpty != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ProgramItemListNotEmpty", ""));
		int currentIter = tree->end->num;

		ProgramItem* ds = programItemListNotEmpty->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			programItemParse(ds, tree, currentIter);
		}
	}
}

void programItemParse(ProgramItem* prog, Tree* tree, int parentNum)
{
	if (prog != NULL)
	{
		if (prog->isImport)
		{
			addTreeUnit(tree, newTreeUnit(parentNum, "ProgramItem", "IMPORT" + *(prog->id_var_name)));
			int currentIter = tree->end->num;
		}
		else
		{
			addTreeUnit(tree, newTreeUnit(parentNum, "ProgramItem", ""));
			int currentIter = tree->end->num;
			parseModule(prog->module, tree, currentIter);
		}
	}
}

void parseModule(Module* mod, Tree* tree, int parentNum)
{
	if (mod != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "Module", mod->id_var_name));
		int currentIter = tree->end->num;

		parseFunctionOrSubList(mod->functionOrSubList, tree, currentIter);
	}
}

void parseFunctionOrSubList(FunctionOrSubList* fosl, Tree* tree, int parentNum)
{
	if (fosl != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "FunctionOrSubList", ""));
		int currentIter = tree->end->num;

		FunctionOrSub* ds = fosl->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parseFunctionOrSub(ds, tree, currentIter);
		}
	}
}

void parseFunctionOrSub(FunctionOrSub* fos, Tree* tree, int parentNum)
{
	if (fos != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "FunctionOrSub", ""));
		int currentIter = tree->end->num;

		parseFunction(fos->function, tree, currentIter);
		parceSubBlock(fos->subBloc, tree, currentIter);
	}
}

void parseFunction(Function* func, Tree* tree, int parentNum)
{
	if (func != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "Function", func->id_var_name));
		int currentIter = tree->end->num;

		parceParameterListOrEmpty(func->arguments, tree, currentIter);
		parseStatementList(func->stmtList, tree, currentIter);
		parseExpression(func->expression, tree, currentIter);
	}
}

void parceSubBlock(SubBloc* subBlock, Tree* tree, int parentNum)
{
	if (subBlock != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "SubBlock", subBlock->id_var_name));
		int currentIter = tree->end->num;

		parceParameterListOrEmpty(subBlock->arguments, tree, currentIter);
		parseStatementList(subBlock->stmtList, tree, currentIter);
	}
}

void parceParameterListOrEmpty(ParameterListOrEmpty* parameterListOrEmpty, Tree* tree, int parentNum)
{
	if (parameterListOrEmpty != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ParameterListOrEmpty", ""));
		int currentIter = tree->end->num;

		parceParameterListWithType(parameterListOrEmpty->parameterListWithType, tree, currentIter);
		parceParameterListWithoutType(parameterListOrEmpty->parameterListWithoutType, tree, currentIter);
	}
}

void parceParameterListWithType(ParameterListWithType* parameterListWithType, Tree* tree, int parentNum)
{
	if (parameterListWithType != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ParameterListWithType", ""));
		int currentIter = tree->end->num;

		ParameterWithType* ds = parameterListWithType->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parceParameterWithType(ds, tree, currentIter);
		}
	}
}

void parceParameterListWithoutType(ParameterListWithoutType* parameterListWithoutType, Tree* tree, int parentNum)
{
	if (parameterListWithoutType != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ParameterListWithoutType", ""));
		int currentIter = tree->end->num;

		ParameterWithoutType* ds = parameterListWithoutType->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parceParameterWithoutType(ds, tree, currentIter);
		}
	}
}

void parceParameterWithType(ParameterWithType* parameterWithType, Tree* tree, int parentNum)
{
	if (parameterWithType != NULL)
	{
		char* type;
		switch (parameterWithType->basic_literal)
		{
		case VT_INTEGER:
			type = "int";
			break;
		case VT_STRING:
			type = "string";
			break;
		case VT_BOOLEAN:
			type = "bool";
			break;
		case VT_DOUBLE:
			type = "double";
			break;
		default:
			type = "";
		}

		addTreeUnit(tree, newTreeUnit(parentNum, "ParameterWithType", type + *(parameterWithType->id_var_name)));
		int currentIter = tree->end->num;
	}
}

void parceParameterWithoutType(ParameterWithoutType* parameterWithoutType, Tree* tree, int parentNum)
{
	if (parameterWithoutType != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ParameterWithoutType", parameterWithoutType->id_var_name));
		int currentIter = tree->end->num;
	}
}

void parseStatementList(StmtList* stmtList, Tree* tree, int parentNum)
{
	if (stmtList != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "StmtList", ""));
		int currentIter = tree->end->num;

		Statement* ds = stmtList->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parseStatement(ds, tree, currentIter);
		}
	}
}

void parseStatement(Statement* stmt, Tree* tree, int parentNum)
{
	if (stmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, stmt_type_str(stmt->type), "Statement"));
		int currentIter = tree->end->num;

		switch (stmt->type)
		{
		case ST_SINGLE:
			parseStatementSingle(stmt->value.statementSingle, tree, currentIter);
			break;

		case ST_MULTI:
			parseStatementMulti(stmt->value.statementMulti, tree, currentIter);
			break;
		}
	}
}

void parseStatementSingle(StatementSingle* stmt, Tree* tree, int parentNum)
{
	if (stmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, stmt_type_str(stmt->type), "StatementSingle"));
		int currentIter = tree->end->num;

		switch (stmt->type)
		{
		case ST_IF_SINGLE:
			parceIfStatementSingle(stmt->value.ifStmtSingle, tree, currentIter);
			break;
		case ST_DECL_SINGLE:
			parceDeclarationStatementSingle(stmt->value.declStmtSingle, tree, currentIter);
			break;
		case EXPR_SINGLE:
			parseExpression(stmt->value.expression, tree, currentIter);
			break;
		}
	}
}

void parseStatementMulti(StatementMulti* stmt, Tree* tree, int parentNum)
{
	if (stmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, stmt_type_str(stmt->type), "StatementMulti"));
		int currentIter = tree->end->num;

		switch (stmt->type)
		{
		case ST_IF_MULTI:
			parceIfStatementMulti(stmt->value.ifStmtMulti, tree, currentIter);
			break;
		case ST_DECL_MULTI:
			parceDeclarationStatementMulti(stmt->value.declStmtMulti, tree, currentIter);
			break;
		case EXPR_MULTI:
			parseExpression(stmt->value.expression, tree, currentIter);
			break;
		case ST_WHILE_MULTI:
			parseWhileStatement(stmt->value.whileStmt, tree, currentIter);
			break;
		case ST_DOLOOP_MULTI:
			parseDoLoopStatement(stmt->value.doLoopStmt, tree, currentIter);
			break;
		case ST_FORLOOP_MULTI:
			parseForLoopStatement(stmt->value.forLoopStmt, tree, currentIter);
			break;
		case ST_FOREACHLOOP_MULTI:
			parseForEachLoopStatement(stmt->value.forEachLoopStmt, tree, currentIter);
			break;
		case ST_SELECT_MULTI:
			parseSelectStatement(stmt->value.selectStmt, tree, currentIter);
			break;
		}
	}
}

void parceDeclarationStatementMulti(DeclStmtMulti* declStmtMulti, Tree* tree, int parentNum)
{
	if (declStmtMulti != NULL)
	{
		if (declStmtMulti->isConst)
			addTreeUnit(tree, newTreeUnit(parentNum, "DeclStmtMulti", "const" + declStmtMulti->varType + *(declStmtMulti->varName->id_var_name)));
		else
			addTreeUnit(tree, newTreeUnit(parentNum, "DeclStmtMulti", declStmtMulti->varType + declStmtMulti->varName));

		int currentIter = tree->end->num;

		parseExpression(declStmtMulti->expression, tree, currentIter);
	}
}

void parceDeclarationStatementSingle(DeclStmtSingle* declStmtSingle, Tree* tree, int parentNum)
{
	if (declStmtSingle != NULL)
	{
		if (declStmtSingle->isConst)
			addTreeUnit(tree, newTreeUnit(parentNum, "DeclStmtSingle", "const" + declStmtSingle->varType + *(declStmtSingle->varName->id_var_name)));
		else
			addTreeUnit(tree, newTreeUnit(parentNum, "DeclStmtSingle", declStmtSingle->varType + declStmtSingle->varName));

		int currentIter = tree->end->num;

		parseExpression(declStmtSingle->expression, tree, currentIter);
		parseExpression(declStmtSingle->expression, tree, currentIter);
	}
}

void parceVarNameMulti(VarNameMulti* varNameMulti, Tree* tree, int parentNum)
{
	if (varNameMulti != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "VarNameMulti", varNameMulti->id_var_name));
		int currentIter = tree->end->num;

		parseExpression(varNameMulti->expression, tree, currentIter);
	}
}

void parceVarNameSingle(VarNameSingle* varNameSingle, Tree* tree, int parentNum)
{
	if (varNameSingle != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "VarNameSingle", varNameSingle->id_var_name));
		int currentIter = tree->end->num;

		parseExpression(varNameSingle->expression, tree, currentIter);
	}
}
/*
void parceAccess(*, Tree* tree, int parentNum)
{

}
*/
void parseWhileStatement(WhileStmt* whileStmt, Tree* tree, int parentNum)
{
    if (whileStmt != NULL)
    {
        addTreeUnit(tree, newTreeUnit(parentNum, "WhileStatement", ""));
        int currentIter = tree->end->num;

        parseExpression(whileStmt->expression, tree, currentIter);
        parseStatementList(whileStmt->stmtList, tree, currentIter);
    }
}

void parseDoLoopStatement(DoLoopStmt* doLoopStmt, Tree* tree, int parentNum)
{
	if (doLoopStmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "DoLoopStatement", ""));
		int currentIter = tree->end->num;

		parceDoLoopCondition(doLoopStmt->condition, tree, currentIter);;
		parseStatementList(doLoopStmt->stmtList, tree, currentIter);
	}
}

void parceDoLoopCondition(DoLoopCondition* condition, Tree* tree, int parentNum)
{
	if (condition != NULL)
	{
		if (condition->isUntil)
			addTreeUnit(tree, newTreeUnit(parentNum, "DoLoopCondition", "Until"));
		else
			addTreeUnit(tree, newTreeUnit(parentNum, "DoLoopCondition", "While"));
				
		int currentIter = tree->end->num;

		parseExpression(condition->expression, tree, currentIter);
	}
}

void parseForLoopStatement(ForLoopStmt* forLoopStmt, Tree* tree, int parentNum)
{
	if (forLoopStmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ForLoopStatement", ""));
		int currentIter = tree->end->num;

		parseExpression(forLoopStmt->fromValue, tree, currentIter);
		parseExpression(forLoopStmt->toValue, tree, currentIter);
		parseExpression(forLoopStmt->stepValue, tree, currentIter);
		parseStatementList(forLoopStmt->stmtList, tree, currentIter);
	}
}

void parseForEachLoopStatement(ForEachLoopStmt* forEachLoopStmt, Tree* tree, int parentNum)
{
	if (forEachLoopStmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ForEachLoopStatement", ""));
		int currentIter = tree->end->num;

		parseStatementList(forEachLoopStmt->stmtList, tree, currentIter);
	}
}

void parceIfStatementMulti(IfStmtMulti* ifStmtMulti, Tree* tree, int parentNum)
{
	if (ifStmtMulti != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "IfStatementMulti", ""));
		int currentIter = tree->end->num;

		parseExpression(ifStmtMulti->expression, tree, currentIter);
		parseStatementList(ifStmtMulti->thenStmtList, tree, currentIter);
		parceElseIfList(ifStmtMulti->elseIfList, tree, currentIter);
		parseStatementList(ifStmtMulti->elseStmtList, tree, currentIter);
	}
}

void parceElseIfList(ElseIfList* elseIfList, Tree* tree, int parentNum)
{
	if (elseIfList != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ElseIfList", ""));
		int currentIter = tree->end->num;

		ElseIf* ds = elseIfList->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parceElseIf(ds, tree, currentIter);
		}
	}
}

void parceElseIf(ElseIf* elseIf, Tree* tree, int parentNum)
{
	if (elseIf != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ElseIf", ""));
		int currentIter = tree->end->num;

		parseExpression(elseIf->expression, tree, currentIter);
		parseStatementList(elseIf->stmtList, tree, currentIter);
	}
}

void parceIfStatementSingle(IfStmtSingle* ifStmtSingle, Tree* tree, int parentNum)
{
	if (ifStmtSingle != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "IfStatementSingle", ""));
		int currentIter = tree->end->num;

		parseExpression(ifStmtSingle->expression, tree, currentIter);
		parseStatementSingle(ifStmtSingle->thenStmt, tree, currentIter);
		parseStatementSingle(ifStmtSingle->elseStmt, tree, currentIter);
	}
}

void parseSelectStatement(SelectStmt* selectStmt, Tree* tree, int parentNum)
{
	if (selectStmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "SelectStatement", ""));
		int currentIter = tree->end->num;

		parseExpression(selectStmt->expression, tree, currentIter);
		parseCaseStatement(selectStmt->caseList, tree, currentIter);
	}
}

void parseCaseList(CaseList* caseList, Tree* tree, int parentNum)
{
	if (caseList != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "CaseStatementList", ""));
		int currentIter = tree->end->num;

		CaseStmt* ds = caseList->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parseCaseStatement(ds, tree, currentIter);
		}
	}
}

void parseCaseStatement(CaseStmt* caseStmt, Tree* tree, int parentNum)
{
	if (caseStmt != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "CaseStatement", ""));
		int currentIter = tree->end->num;

		parseExpression(caseStmt->fromExpression, tree, currentIter);
		parseExpression(caseStmt->toExpression, tree, currentIter);
		parseStatementList(caseStmt->stmtList, tree, currentIter);
	}
}

void parseExpression(Expression* expr, Tree* tree, int parentNum)
{
	if (expr != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, expr_type_str(expr->type), "Expression"));
		int currentIter = tree->end->num;

		char buf[51];
		switch (expr->type)
		{
		case VT_INTEGER:
		case VT_BOOLEAN:

			sprintf(buf, "%d", expr->value.int_val);

			addTreeUnit(tree, newTreeUnit(currentIter, buf, expr_type_str(expr->type)));
			break;

		case VT_DOUBLE:

			sprintf(buf, "%f", expr->value.double_val);

			addTreeUnit(tree, newTreeUnit(currentIter, buf, "float"));
			break;

		case VT_STRING:
		case ET_ID:
			//case ET_LENGTH_ARR_ATTR:

			addTreeUnit(tree,
				newTreeUnit(currentIter, expr->value.string_val, expr_type_str(expr->type)));
			break;

		case ET_ARRAY_OR_FUNC:
			addTreeUnit(tree, newTreeUnit(currentIter, expr->value.string_val, expr_type_str(expr->type)));
			parseExpressionList(expr->exprList, tree, currentIter);

			break;

			/*case ET_CHARACTER:
				buf[0] = expr->value.char_val; buf[1] = '\0';
				addTreeUnit(tree, newTreeUnit(currentIter, buf, "character"));
				break;*/

		default:

			if (expr->left != NULL) {
				parseExpression(expr->left, tree, currentIter);
			}

			if (expr->right != NULL) {
				parseExpression(expr->right, tree, currentIter);
			}
		}

		//if(prog->exprList!=NULL)
		//{
		//	parseExpressionList(prog->exprList, tree, currentIter);
		//}
	}
}
/*
* Are these just expressions?
void parceBasicLiteralValue(*, Tree* tree, int parentNum)
{

}
 
void parceArgumen(*, Tree* tree, int parentNum)
{

}
*/
void parseExpressionList(ExpressionList* exprList, Tree* tree, int parentNum)
{
	if (exprList != NULL)
	{
		addTreeUnit(tree, newTreeUnit(parentNum, "ExpressionList", ""));
		int currentIter = tree->end->num;

		Expression* ds = exprList->begin;
		for (; ds != NULL; ds = ds->nextInList)
		{
			parseExpression(ds, tree, currentIter);
		}
	}
}
