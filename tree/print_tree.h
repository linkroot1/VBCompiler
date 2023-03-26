#include "tree_nodes.h"

typedef struct TreeUnit TreeUnit;
typedef struct Tree Tree;

struct TreeUnit
{
    char *label;
	char *edgeLabel;
    int num;
    int parentNum;
    TreeUnit *next;
};

struct Tree
{
    TreeUnit * begin;
    TreeUnit * end;
};

void printTree(ProgramItemList *pr);

char* stmt_type_str(StmtType et);
char* expr_type_str(ExprType et);
char* variable_type_str(VarType et);

void programParse(ProgramItemList* progList, Tree* tree, int parentNum);
void parceProgramItemsListNotEmpty(ProgramItemListNotEmpty* programItemListNotEmpty, Tree* tree, int parentNum);
void programItemParse(ProgramItem* prog, Tree* tree, int parentNum);
void parseModule(Module* mod, Tree* tree, int parentNum);
void parseFunctionOrSubList(FunctionOrSubList* fosl, Tree* tree, int parentNum);
void parseFunctionOrSub(FunctionOrSub* fos, Tree* tree, int parentNum);
void parseFunction(Function *func, Tree *tree, int parentNum);
void parceSubBlock(SubBloc* subBlock, Tree* tree, int parentNum);
void parceParameterListOrEmpty(ParameterListOrEmpty* parameterListOrEmpty, Tree* tree, int parentNum);
void parceParameterListWithType(ParameterListWithType* parameterListWithType, Tree* tree, int parentNum);
void parceParameterListWithoutType(ParameterListWithoutType* parameterListWithoutType, Tree* tree, int parentNum);
void parceParameterWithType(ParameterWithType* parameterWithType, Tree* tree, int parentNum);
void parceParameterWithoutType(ParameterWithoutType* parameterWithoutType, Tree* tree, int parentNum);
void parseStatementList(StmtList* stmtList, Tree* tree, int parentNum);
void parseStatement(Statement* stmt, Tree* tree, int parentNum);
void parseStatementSingle(StatementSingle* stmt, Tree* tree, int parentNum);
void parseStatementMulti(StatementSingle* stmt, Tree* tree, int parentNum);
void parceDeclarationStatementMulti(DeclStmtMulti* declStmtMulti, Tree* tree, int parentNum);
void parceDeclarationStatementSingle(DeclStmtSingle* declStmtMulti, Tree* tree, int parentNum);
void parceVarNameMulti(VarNameMulti* varNameMulti, Tree* tree, int parentNum);
void parceVarNameSingle(VarNameSingle* varNameSingle, Tree* tree, int parentNum);
//void parceAccess(*, Tree* tree, int parentNum);
void parseWhileStatement(WhileStmt* whileStmt, Tree* tree, int parentNum);
void parseDoLoopStatement(DoLoopStmt* doLoopStmt, Tree* tree, int parentNum);
void parceDoLoopCondition(DoLoopCondition* condition, Tree* tree, int parentNum);
void parseForLoopStatement(ForLoopStmt* forLoopStmt, Tree* tree, int parentNum);
void parseForEachLoopStatement(ForEachLoopStmt* forEachLoopStmt, Tree* tree, int parentNum);
void parceIfStatementMulti(IfStmtMulti* ifStmtMulti, Tree* tree, int parentNum);
void parceElseIfList(ElseIfList* elseIfList, Tree* tree, int parentNum);
void parceElseIf(ElseIf* elseIf, Tree* tree, int parentNum);
void parceIfStatementSingle(IfStmtSingle* ifStmtSingle, Tree* tree, int parentNum);
void parseSelectStatement(SelectStmt* selectStmt, Tree* tree, int parentNum);
void parseCaseList(CaseList* caseList, Tree* tree, int parentNum);
void parseCaseStatement(CaseStmt* caseStmt, Tree* tree, int parentNum);
void parseExpression(Expression* expr, Tree* tree, int parentNum);
//void parceBasicLiteralValue(*, Tree* tree, int parentNum);
void parseExpressionList(ExpressionList* exprList, Tree* tree, int parentNum);
void parseStmtEnds(StmtEnds* end, Tree* tree, int parentNum);

//void parseModuleList(ModuleList *modl, Tree *tree, int parentNum);
//void parseImports(Imports *import, Tree *tree, int parentNum);





