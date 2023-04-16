%define parse.error verbose
%{
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "../tree/tree_nodes.h"
#include "../tree/print_tree.h"
//#define PRINT_RULE


extern int yylineno;
extern FILE* yyin;

extern int yyparse();
extern int yylex();

void yyerror(const char* s);

// ----- declarations -----
Expression* createExpression(ExprType type, Expression *left, Expression *right);
Expression* createSimpleExpression(ExprType type, Value value);
Expression *createExpressionWithList(ExprType type, Value val, ExpressionList *exprList);
ExpressionList* createExpressionList(Expression *expr);
ExpressionList* appendExpressionToList(ExpressionList *list, Expression *expr);
ExpressionList* createArgumentList(Expression *expr);
ProgramItemList* createProgramItemsList(ProgramItemListNotEmpty *programItemListNotEmpty);
ProgramItemListNotEmpty* createProgramListNotEmpty(ProgramItem *programItem);
ProgramItemListNotEmpty* appendProgramToListNotEmpty(ProgramItemListNotEmpty *programItemListNotEmpty, ProgramItem *programItem);
ProgramItem* createProgramItem(Module *module, char *id_var_name);
Module* createModule(char *id_var_name, FunctionOrSubList *functionsAndSubList);
FunctionOrSubList* createFunctionOrSubList(FunctionOrSub *functionOrSub);
FunctionOrSubList* appendFunctionOrSubList(FunctionOrSubList *list, FunctionOrSub *functionOrSub);
FunctionOrSub* createFunctionOrSub(SubBloc *subBloc, Function *function);
Function* createFunction(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList);
SubBloc* createSubBloc(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList);
ParameterListOrEmpty* createParameterListOrEmpty(ParameterListWithType *parameterListWithType, ParameterListWithoutType *parameterListWithoutType);
ParameterListWithType *createParameterListWithType(ParameterWithType *parameterWithType);
ParameterListWithType *appendParameterListWithType(ParameterListWithType *list, ParameterWithType *parameterWithType);
ParameterListWithoutType *createParameterListWithoutType(ParameterWithoutType *parameterWithoutType);
ParameterListWithoutType *appendParameterListWithoutType(ParameterListWithoutType *list, ParameterWithoutType *parameterWithoutType);
ParameterWithType *createParameterWithType(char* id_var_name, VarType value);
ParameterWithoutType *createParameterWithoutType(char* id_var_name);
StmtList *createStmtList(Statement *statement);
StmtList *appendStmtList(StmtList *list, Statement *statement);
Statement *createStatement(StmtType type, StmtValue value);
StatementSingle *createStatementSingle(StmtType type, StmtSingleValue value);
StatementMulti *createStatementMulti(StmtType type, StmtMultiValue value);
WhileStmt *createWhileStmt(Expression *expression, StmtList *stmtList);
DoLoopStmt *createDoLoopStmt(DoLoopCondition *condition, StmtList *stmtList);
DoLoopCondition *createDoLoopCondition(int isUntil, Expression *expression);
ForLoopStmt *createForLoopStmt(char* counterVarName, VarType counterType, Expression* fromValue, Expression* toValue, Expression* stepValue, StmtList *stmtList);
ForEachLoopStmt *createForEachLoopStmt(char* counterVarName, VarType counterType, char* counterSourceName, StmtList *stmtList);
IfStmtMulti *createIfStmtMulti(Expression *expression, StmtList *thenStmtList, ElseIfList *elseIfList, StmtList *elseStmtList);
ElseIfList *createElseIfList(ElseIf *elseIf);
ElseIfList *appendElseIfList(ElseIfList *list, ElseIf *elseIf);
ElseIf *createElseIf(Expression *expression, StmtList *stmtList);
IfStmtSingle *createIfStmtSingle(Expression *expression, StatementSingle *thenStmt, StatementSingle *elseStmt);
SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList, StmtList * elseStmt);
CaseList *createCaseList(CaseStmt *caseStmt);
CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt);
CaseStmt *createCaseStmt(int isIs, Expression *expression, StmtList *stmtList);
DeclStmtSingle *createDeclStmtSingle(int isConst, VarNameSingle* id_var_name, VarType varType, Expression *expression);
DeclStmtMulti *createDeclStmtMulti(int isConst, VarNameSingle* id_var_name, VarType varType, Expression *expression);
VarNameSingle *createVarNameSingle(char* id_var_name, Expression *expression);
VarNameMulti *createVarNameMulti(char* id_var_name, Expression *expression);
ReturnStmt *createReturnStmt(Expression *expression);

ProgramItemList *root;
%}

%union {
	int bool_val;
	int int_val;
	double double_val;
	char* datetime_val;
	char* str_val;
	char* id_var_name;
	VarType vt;

	Expression *expression;
	ExpressionList *expressionList;
	ProgramItemList *programItemList;
	ProgramItemListNotEmpty *programListNotEmpty;
	ProgramItem *programItem;
	Module *module;
	FunctionOrSubList *functionOrSubList;
	FunctionOrSub *functionOrSub;
	Function *function;
	SubBloc *subBloc;
	ParameterListOrEmpty *parameterListOrEmpty;
	ParameterListWithType *parameterListWithType;
	ParameterListWithoutType *parameterListWithoutType;
	ParameterWithType *parameterWithType;
	ParameterWithoutType *parameterWithoutType;
	StmtList *stmtList;
	Statement *statement;
	StatementSingle *statementSingle;
	StatementMulti *statementMulti;
	WhileStmt *whileStmt;
	DoLoopStmt *doLoopStmt;
	DoLoopCondition *doLoopCondition;
	ForLoopStmt *forLoopStmt;
	ForEachLoopStmt *forEachLoopStmt;
	IfStmtMulti *ifStmtMulti;
	ElseIfList *elseIfList;
	ElseIf *elseIf;
	IfStmtSingle *ifStmtSingle;
	SelectStmt *selectStmt;
	CaseList *caseList;
	CaseStmt *caseStmt;
	DeclStmtSingle *declStmtSingle;
	DeclStmtMulti *declStmtMulti;
	VarNameSingle *varNameSingle;
	VarNameMulti *varNameMulti;
	ReturnStmt *returnStmt;
}

%type <expression> expr_singleline expr_multiline basic_literal_value;
%type <expressionList> expr_list arguments_singleline arguments_multiline;
%type <programItemList> program_items_list root;
%type <programListNotEmpty> program_items_list_not_empty;
%type <programItem> program_item;
%type <module> module;
%type <functionOrSubList> functions_or_sub_list;
%type <functionOrSub> function_or_sub;
%type <function> function;
%type <subBloc> sub_bloc;
%type <parameterListOrEmpty> parameterlist_or_empty;
%type <parameterListWithType> parameterlist_with_type;
%type <parameterListWithoutType> parameterlist_without_type;
%type <parameterWithType> parameter_with_type;
%type <parameterWithoutType> parameter_without_type;
%type <stmtList> stmt_list;
%type <statement> stmt;
%type <statementSingle> single_line_stmt;
%type <statementMulti> multi_line_stmt;
%type <whileStmt> while_stmt;
%type <doLoopStmt> do_loop_stmt;
%type <doLoopCondition> do_loop_condition;
%type <forLoopStmt> for_loop_stmt;
%type <forEachLoopStmt> for_each_loop_stmt;
%type <ifStmtMulti> if_stmt_multi_line;
%type <elseIfList> elseif_list;
%type <elseIf> elseif;
%type <ifStmtSingle> if_stmt_single_line;
%type <selectStmt> select_stmt;
%type <caseList> case_list;
%type <caseStmt> case_stmt;
%type <declStmtSingle> decl_stmt_single_line;
%type <declStmtMulti> decl_stmt;
%type <varNameSingle> var_name_singleline;
%type <varNameMulti> var_name;
%type stmt_ends;
%type <vt> basic_literal;
%type <returnStmt> return_stmt;

%token<int_val> INT_VALUE
%token<double_val> DOUBLE_VALUE
%token<str_val> STRING_VALUE
%token<bool_val> BOOLEAN_VALUE
%token<datetime_val> DATETIME_VALUE


%token<int_val> INT
%token<double_val> DOUBLE
%token<str_val> STRING
%token<bool_val> BOOLEAN
%token<id_var_name> IDENTIFIER

%token SUB
%token END
%token CONST
%token DIM
%token AS
%token WHILE
%token IF
%token NEW

%token ELSEIF
%token SELECT
%token CASE
%token IS
%token TO
%token IMPORTS
%token MODULE
%token FUNCTION
%token RETURN
%token DO
%token LOOP
%token UNTIL
%token FOR
%token NEXT
%token STEP
%token OF
%token IN
%token EACH

%token END_OF_LINE


%token ASSIGN_CONSTRUCT
%token ASSIGN_MULT
%token ASSIGN_ORD_DIV
%token ASSIGN_INT_DIV
%token ASSIGN_ADD
%token ASSIGN_SUB
%token ASSIGN_LSHIFT
%token ASSIGN_RSHIFT
%token ASSIGN_CONCAT

%token PRIVATE
%token PROTECTED
%token PUBLIC
%token FRIEND
%token BYVAL

%left AND
%left OR XOR
%left '^'
%left '*' '/'
%right NOT
%left INT_DIV
%left '+' '-'
%right UNARY_MINUS UNARY_PLUS
%left '=' NOT_EQUAL LESS_OR_EQUAL MORE_OR_EQUAL '>' '<'
%left '&' TO
%nonassoc '(' ')' '{' '}'

%precedence THEN
%precedence ELSE
%precedence IDENTIFIER

%start root

%%

//------------------programm Start-----------------------------
root: program_items_list {$$ = root = $1; printf("root 1\n");}
    ;

program_items_list: {$$ = 0; printf("program_items_list 1\n");}
                  |program_items_list_not_empty {$$ = createProgramItemsList($1); printf("program_items_list 2\n");}
                  ;

program_items_list_not_empty: program_item { $$ = createProgramListNotEmpty($1); printf("program_items_list_not_empty 1\n");}
                            | program_items_list_not_empty program_item { $$ = appendProgramToListNotEmpty($1,$2); printf("program_items_list_not_empty 2\n");}
                            ;

program_item: module {$$ = createProgramItem($1,0); printf("program_item 1\n");}
             | IMPORTS IDENTIFIER stmt_ends  {$$ =  createProgramItem(0,$2); printf("program_item 2\n");}
             ;


module: MODULE IDENTIFIER stmt_ends END MODULE stmt_ends {$$ = createModule($2,0); printf("module 1\n");}
      | MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends {$$ = createModule($2,$4); printf("module 2\n");}
      | access MODULE IDENTIFIER stmt_ends END MODULE stmt_ends {$$ = createModule($3,0); printf("module 3\n");}
      | access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends {$$ = createModule($3,$5); printf("module 4\n");}
      ;


functions_or_sub_list: function_or_sub {$$ = createFunctionOrSubList($1); printf("functions_or_sub_list 1\n");}
                     | functions_or_sub_list function_or_sub {$$ = appendFunctionOrSubList($1,$2); printf("functions_or_sub_list 2\n");}
                     ;

function_or_sub: function {$$ = createFunctionOrSub(0,$1); printf("function_or_sub 1\n");}
               | sub_bloc {$$ = createFunctionOrSub($1,0); printf("function_or_sub 2\n");}
               ;

function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends {$$ = createFunction($2,$4,0); printf("function 1\n");}
        | FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends {$$ = createFunction($2,$4,$7); printf("function 4\n");}
        | access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends {$$ = createFunction($3,$5,0); printf("function 7\n");}
        | access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends {$$ = createFunction($3,$5,$8); printf("function 10\n");}
        ;


sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends {$$ = createSubBloc($2,$4,0);}
        | SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends {$$ = createSubBloc($2,$4,$7);}
        | access SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends END SUB stmt_ends {$$ = createSubBloc($3,$5,0);}
        | access SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends stmt_list END SUB stmt_ends {$$ = createSubBloc($3,$5,$8);}
        ;

parameterlist_or_empty:  {$$ = 0;}
                      | parameterlist_with_type {$$ = createParameterListOrEmpty($1, 0);}
                      | END_OF_LINE parameterlist_with_type END_OF_LINE {$$ = createParameterListOrEmpty($2, 0);}
                      | END_OF_LINE parameterlist_with_type {$$ = createParameterListOrEmpty($2, 0);}
                      | parameterlist_with_type END_OF_LINE {$$ = createParameterListOrEmpty($1, 0);}
                      | parameterlist_without_type {$$ = createParameterListOrEmpty(0, $1);}
                      | END_OF_LINE parameterlist_without_type END_OF_LINE {$$ = createParameterListOrEmpty(0, $2);}
                      | parameterlist_without_type END_OF_LINE {$$ = createParameterListOrEmpty(0, $1);}
                      | END_OF_LINE parameterlist_without_type {$$ = createParameterListOrEmpty(0, $2);}
                      ;

parameterlist_with_type: parameter_with_type {$$ = createParameterListWithType($1);}
                       | parameterlist_with_type ',' parameter_with_type {$$ = appendParameterListWithType($1,$3);}
                       | parameterlist_with_type ',' END_OF_LINE parameter_with_type {$$ = appendParameterListWithType($1,$4);}
                       ;


parameterlist_without_type: parameter_without_type {$$ = createParameterListWithoutType($1);}
                          | parameterlist_without_type ',' parameter_without_type {$$ = appendParameterListWithoutType($1,$3);}
                          | parameterlist_without_type ',' END_OF_LINE parameter_without_type {$$ = appendParameterListWithoutType($1,$4);}
                          ;


parameter_with_type: IDENTIFIER AS basic_literal {$$ = createParameterWithType($1,$3);}
                   | IDENTIFIER AS basic_literal '(' ')'  {$$ = createParameterWithType($1,$3);}
                   | BYVAL IDENTIFIER AS basic_literal {$$ = createParameterWithType($2,$4);}
                   | BYVAL IDENTIFIER AS basic_literal '(' ')' {$$ = createParameterWithType($2,$4);}
                   ;


parameter_without_type: IDENTIFIER {$$ = createParameterWithoutType($1);}
                      ;


/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */

stmt_list: stmt { $$ = createStmtList($1); printf("stmt_list 1\n");}
         | stmt_list stmt { $$ = appendStmtList($1,$2); printf("stmt_list 2\n");}
         ;


stmt: multi_line_stmt {$$ = createStatement(ST_MULTI, (StmtValue){.statementMulti=$1}); printf("stmt 1\n");}
    | single_line_stmt stmt_ends {$$ = createStatement(ST_SINGLE, (StmtValue){.statementSingle=$1}); printf("stmt 2\n");}
    ;


single_line_stmt: if_stmt_single_line {$$ = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=$1}); printf("single_line_stmt 1\n");}
				| decl_stmt_single_line {$$ = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=$1}); printf("single_line_stmt 2\n");}
				| expr_singleline {$$ = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=$1}); printf("single_line_stmt 3\n");}
				| return_stmt {$$ = createStatementSingle(ST_RETURN, (StmtSingleValue){.returnStmt=$1}); printf("single_line_stmt 4\n");}
                ;

multi_line_stmt: if_stmt_multi_line stmt_ends {$$ = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=$1}); printf("multi_line_stmt 1\n");}
               | decl_stmt stmt_ends {$$ = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=$1}); printf("multi_line_stmt 2\n");}
               | expr_multiline stmt_ends {$$ = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=$1}); printf("multi_line_stmt 3\n");}
               | while_stmt stmt_ends {$$ = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=$1}); printf("multi_line_stmt 4\n");}
			   | do_loop_stmt {$$ = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=$1}); printf("multi_line_stmt 5\n");}
			   | for_loop_stmt {$$ = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=$1}); printf("multi_line_stmt 6\n");}
			   | for_each_loop_stmt {$$ = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=$1}); printf("multi_line_stmt 7\n");}
               | select_stmt stmt_ends {$$ = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=$1}); printf("multi_line_stmt 8\n");}
               ;

return_stmt: RETURN expr_singleline {$$ = createReturnStmt($2); printf("return_stmt 1\n");}
		   ;

stmt_ends: END_OF_LINE { }
    | stmt_ends END_OF_LINE { }
    ;



//-------------------------Declaration stmt
decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(1, $2, $4, $7); printf("decl_stmt_multi 1\n");}
         | CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(1, $2, $4, $7); printf("decl_stmt_multi 2\n");}
         | DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, $4, $7); printf("decl_stmt_multi 3\n");}
         | DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, $4, $7); printf("decl_stmt_multi 4\n");}
         | DIM var_name '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, 0, $5); printf("decl_stmt_multi 5\n");}
         | DIM var_name_singleline '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, 0, $5); printf("decl_stmt_multi 6\n");}
         ;


decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline {$$ = createDeclStmtSingle(1, $2, $4, $6); printf("decl_stmt_single 1\n");}
					 | DIM var_name_singleline AS basic_literal '=' expr_singleline {$$ = createDeclStmtSingle(0, $2, $4, $6); printf("decl_stmt_single 2\n");}
					 | DIM var_name_singleline AS basic_literal {$$ = createDeclStmtSingle(0, $2, $4, 0); printf("decl_stmt_single 3\n");}
				 	 | DIM var_name_singleline '=' expr_singleline {$$ = createDeclStmtSingle(0, $2, 0, $4); printf("decl_stmt_single 4\n");}
					 | DIM var_name_singleline {$$ = createDeclStmtSingle(0, $2, 0, 0); printf("decl_stmt_single 5\n");}
                     | DIM var_name_singleline '=' NEW basic_literal'('')' '{' expr_list '}' { printf("decl_stmt_single 6 (bad) \n");}//How to make an array
					 ;


var_name: IDENTIFIER'(' expr_multiline ')' {$$ = createVarNameMulti($1, $3); printf("var_name_multi 1\n");}
		;

var_name_singleline: IDENTIFIER'(' expr_singleline ')' {$$ = createVarNameSingle($1, $3); printf("var_name_single 1\n");}
				   | IDENTIFIER {$$ = createVarNameSingle($1, 0); printf("var_name_single 1\n");}
				   ;

//WIP
access: PUBLIC
	  | PROTECTED
	  | FRIEND
	  | PRIVATE
	  | PROTECTED FRIEND
	  | PRIVATE FRIEND
	  ;



//-------------------------WHILE stmt
while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE {$$ = createWhileStmt($2, $4);}
          | WHILE expr_singleline stmt_ends stmt_list END WHILE {$$ = createWhileStmt($2, $4);}
         ;


//-------------------------DO stmt (можно ввести сюда и мультилайновые случаи)
do_loop_stmt: DO do_loop_condition stmt_list LOOP stmt_ends{$$ = createDoLoopStmt($2, $3); printf("do_loop_stmt 1\n"); }
			| DO stmt_ends stmt_list LOOP do_loop_condition {$$ = createDoLoopStmt($5, $3);printf("do_loop_stmt 2\n"); }
			;

do_loop_condition: UNTIL expr_singleline stmt_ends {$$ = createDoLoopCondition(1, $2); printf("do_loop_condition UNTIL\n");} //How do distinguish?
				 | WHILE expr_singleline stmt_ends {$$ = createDoLoopCondition(0, $2); printf("do_loop_condition WHILE\n");}
				 ;


//-------------------------FOR LOOP stmt
for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT stmt_ends {$$ = createForLoopStmt($2, $4, $6, $8, 0, $10);}
			 | FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT stmt_ends {$$ = createForLoopStmt($2, $4, $6, $8, $10, $12);}
			 ;


//-------------------------FOR EACH LOOP stmt
for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT stmt_ends {$$ = createForEachLoopStmt($3, $5, $7, $9);}


//-------------------------IF/ELSE stmt

if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, 0); printf("if_stmt_multi 1\n");}
                  | IF expr_singleline THEN stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, 0); printf("if_stmt_multi 2\n");}
				  | IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, $8); printf("if_stmt_multi 3\n");}
				  | IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, $8); printf("if_stmt_multi 4\n");}
                  | IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF {$$ = createIfStmtMulti($2, $5, $6, 0); printf("if_stmt_multi 5\n");}
                  | IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF {$$ = createIfStmtMulti($2, $5, $6, 0); printf("if_stmt_multi 6\n");}
				  | IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, $6, $9); printf("if_stmt_multi 7\n");}
				  | IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, $6, $9); printf("if_stmt_multi 8\n");}
                  ;

elseif_list: elseif {$$ = createElseIfList($1); printf("elseif_list 1\n");}
           | elseif_list elseif {$$ = appendElseIfList($1, $2); printf("elseif_list 2\n");}
           ;

elseif: ELSEIF expr_multiline THEN stmt_ends stmt_list {$$ = createElseIf($2, $5); printf("elseif 1\n");}
      | ELSEIF expr_singleline THEN stmt_ends stmt_list {$$ = createElseIf($2, $5); printf("elseif 2\n");}

if_stmt_single_line: IF expr_singleline THEN single_line_stmt  {$$ = createIfStmtSingle($2, $4, 0); printf("if_stmt_single 1\n");}
                   | IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  {$$ = createIfStmtSingle($2, $4, $6); printf("if_stmt_single 2\n");}
                   ;


//--------------------------SELECT stmt
select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT {$$ = createSelectStmt($3, $5, 0); printf("select_stmt 1\n");}
           | SELECT CASE expr_multiline stmt_ends case_list END SELECT {$$ = createSelectStmt($3, $5, 0); printf("select_stmt 2\n");}
		   | SELECT CASE expr_singleline stmt_ends case_list CASE ELSE stmt_ends stmt_list END SELECT {$$ = createSelectStmt($3, $5, $9); printf("select_stmt 3\n");}
           | SELECT CASE expr_multiline stmt_ends case_list CASE ELSE stmt_ends stmt_list END SELECT {$$ = createSelectStmt($3, $5, $9); printf("select_stmt 4\n");}
           ;

case_list: case_stmt {$$ = createCaseList($1); printf("case_list 1\n");}
		| case_list case_stmt {$$ = appendCaseList($1, $2); printf("case_list 2\n");}
		;

case_stmt: CASE expr_multiline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, $4); printf("case_stmt 1\n");}
		 | CASE expr_singleline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, $4); printf("case_stmt 2\n");}
         | CASE IS expr_multiline stmt_ends stmt_list {$$ = createCaseStmt(1, $3, $5); printf("case_stmt 3\n");}
         | CASE IS expr_singleline stmt_ends stmt_list {$$ = createCaseStmt(1, $3, $5); printf("case_stmt 4\n");}
         ;



//---------------------------EXPRession
expr_singleline: basic_literal_value {$$ = $1; printf("expr_single 1\n");}
    | '-' expr_singleline	%prec UNARY_MINUS {$$ = createExpression(ET_MINUS, 0, $2); printf("expr_single 1\n");}
    | '+' expr_singleline	%prec UNARY_PLUS {$$ = createExpression(ET_PLUS, 0, $2); printf("expr_single 2\n");}
    | expr_singleline '+' expr_singleline {$$ = createExpression(ET_PLUS, $1, $3);  printf("expr_single 3\n");}
    | expr_singleline '-' expr_singleline {$$ = createExpression(ET_MINUS, $1, $3);  printf("expr_single 4\n");}
    | expr_singleline '*' expr_singleline {$$ = createExpression(ET_MULT, $1, $3); printf("expr_single 5\n");}
    | expr_singleline '/' expr_singleline {$$ = createExpression(ET_DIV, $1, $3); printf("expr_single 6\n");}
    | expr_singleline INT_DIV expr_singleline {$$ = createExpression(ET_INTDIV, $1, $3); printf("expr_single 7\n");}
    | expr_singleline '=' expr_singleline {$$ = createExpression(ET_EQUAL, $1, $3); printf("expr_single 8\n");}
    | expr_singleline '<' expr_singleline {$$ = createExpression(ET_LESSER, $1, $3); printf("expr_single 9\n");}
    | expr_singleline '>' expr_singleline {$$ = createExpression(ET_GREATER, $1, $3); printf("expr_single 10\n");}
    | expr_singleline '^' expr_singleline {$$ = createExpression(ET_EXP, $1, $3); printf("expr_single 11\n");}
    | expr_singleline NOT_EQUAL expr_singleline {$$ = createExpression(ET_NOT_EQUAL, $1, $3); printf("expr_single 12\n");}
    | expr_singleline LESS_OR_EQUAL expr_singleline {$$ = createExpression(ET_LESSER_EQUAL, $1, $3); printf("expr_single 13\n");}
    | expr_singleline MORE_OR_EQUAL expr_singleline {$$ = createExpression(ET_GREATER_EQUAL, $1, $3); printf("expr_single 14\n");}
    | expr_singleline '&' expr_singleline {$$ = createExpression(ET_CONCAT, $1, $3); printf("expr_single 15\n");}
    | '(' expr_singleline ')' {$$ = createExpression(0, 0, $2); printf("expr_single 16\n");}
    | IDENTIFIER {$$ = createSimpleExpression(ET_ID, (Value){.string_val=$1}); printf("expr_single 17\n");}
    | IDENTIFIER arguments_singleline {$$ = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=$1}, $2); printf("expr_single 18\n");}
    | expr_singleline AND expr_singleline {$$ = createExpression(ET_AND, $1, $3); printf("expr_single 19\n");}
    | expr_singleline OR expr_singleline {$$ = createExpression(ET_OR, $1, $3); printf("expr_single 20\n");}
    | expr_singleline XOR expr_singleline {$$ = createExpression(ET_XOR, $1, $3); printf("expr_single 21\n");}
    | NOT expr_singleline {$$ = createExpression(ET_NOT, 0, $2); printf("expr_single 22\n");}
	| expr_singleline TO expr_singleline {$$ = createExpression(ET_TO, $1, $3); printf("expr_single 23\n");}
    ;

expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline {$$ = createExpression(ET_PLUS, $1, $4); }
              | expr_singleline '-' END_OF_LINE expr_singleline {$$ = createExpression(ET_MINUS, $1, $4); }
              | expr_singleline '*' END_OF_LINE expr_singleline {$$ = createExpression(ET_MULT, $1, $4);}
              | expr_singleline '/' END_OF_LINE expr_singleline {$$ = createExpression(ET_DIV, $1, $4);}
              | expr_singleline INT_DIV END_OF_LINE expr_singleline {$$ = createExpression(ET_INTDIV, $1, $4);}
              | expr_singleline '=' END_OF_LINE expr_singleline {$$ = createExpression(ET_EQUAL, $1, $4);}
              | expr_singleline '<' END_OF_LINE expr_singleline {$$ = createExpression(ET_LESSER, $1, $4);}
              | expr_singleline '>' END_OF_LINE expr_singleline {$$ = createExpression(ET_GREATER, $1, $4);}
              | expr_singleline '^' END_OF_LINE expr_singleline {$$ = createExpression(ET_EXP, $1, $4);}
              | expr_singleline NOT_EQUAL END_OF_LINE expr_singleline {$$ = createExpression(ET_NOT_EQUAL, $1, $4);}
              | expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline  {$$ = createExpression(ET_LESSER_EQUAL, $1, $4);}
              | expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline {$$ = createExpression(ET_GREATER_EQUAL, $1, $4);}
              | expr_singleline '&' END_OF_LINE expr_singleline {$$ = createExpression(ET_CONCAT, $1, $4);}
              | '(' END_OF_LINE expr_singleline ')' {$$ = createExpression(0, 0, $3);}
              | '(' END_OF_LINE expr_singleline END_OF_LINE ')' {$$ = createExpression(0, 0, $3);}
              | '(' expr_singleline END_OF_LINE ')' {$$ = createExpression(0, 0, $2);}
              | IDENTIFIER arguments_multiline {$$ = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=$1}, $2);}
			  | expr_singleline AND END_OF_LINE expr_singleline {$$ = createExpression(ET_AND, $1, $4);}
			  | expr_singleline OR END_OF_LINE expr_singleline {$$ = createExpression(ET_OR, $1, $4);}
			  | expr_singleline XOR END_OF_LINE expr_singleline {$$ = createExpression(ET_XOR, $1, $4);}
			  | expr_singleline TO END_OF_LINE expr_singleline {$$ = createExpression(ET_TO, $1, $4);}
              ;


basic_literal: INT {$$ = VT_INTEGER; printf("basic_literal int\n");}
            | STRING {$$ = VT_STRING; printf("basic_literal str\n");}
            | BOOLEAN {$$ = VT_BOOLEAN; printf("basic_literal bool\n");}
            | DOUBLE {$$ = VT_DOUBLE; printf("basic_literal double\n");}
            ;

basic_literal_value: INT_VALUE {$$ = createSimpleExpression(VT_INTEGER, (Value){.int_val = $1}); printf("basic_literal_value int\n");}
                   | STRING_VALUE {$$ = createSimpleExpression(VT_STRING, (Value){.string_val=$1}); printf("basic_literal_value str\n");}
                   | BOOLEAN_VALUE {$$ = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=$1}); printf("basic_literal_value bool\n");}
                   | DOUBLE_VALUE {$$ = createSimpleExpression(VT_DOUBLE, (Value){.double_val=$1}); printf("basic_literal_value double\n");}
                   ;



arguments_multiline: '(' END_OF_LINE expr_list ')' {$$ = $3;}
                   | '(' END_OF_LINE expr_list END_OF_LINE ')' {$$ = $3;}
                   | '(' expr_list END_OF_LINE ')' {$$ = $2;}
                   ;


arguments_singleline: '(' expr_list ')' {$$ = $2;}
                    | '(' ')' {$$ = 0;}
                    ;


expr_list: expr_singleline {$$ = createExpressionList($1); printf("expr_list 1\n");}
         | expr_list ',' expr_singleline {$$ = appendExpressionToList($1,$3); printf("expr_list 2\n");}
         ;


%%


int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();	

		freopen("../tree/tree_img.txt", "w", stdout);
		printTree(root);
		fclose(stdout);
		fclose (yyin);
    }
    else {
        yyerror("not found file");
    }
	
	//return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}

/*void printRule(char* ruleString){

	#ifdef PRINT_RULE
    fprintf("\n %s \n", ruleString);
    #endif
}*/

// ------------------------------  Expression ------------------------------
Expression *createExpression(ExprType type, Expression *left, Expression *right)
{
	Expression *result = (Expression *)malloc(sizeof(Expression));

	result->type = type;

	result->left = left;
	result->right = right;

	result->exprList = 0;
	result->nextInList = 0;

	return result;
}

Expression *createSimpleExpression(ExprType type, Value value)
{
	Expression *result = (Expression *)malloc(sizeof(Expression));

	result->isType = type != 0;
	result->type = type;
	result->value = value;

	result->exprList = 0;
	result->right = 0;
	result->left = 0;
	result->nextInList = 0;

	return result;
}

ExpressionList *createExpressionList(Expression *expr)
{
	ExpressionList *result = (ExpressionList *)malloc(sizeof(ExpressionList));

	result->begin = expr;
	result->end = expr;

	return result;
}

ExpressionList *appendExpressionToList(ExpressionList *list, Expression *expr)
{
	list->end->nextInList = expr;
	list->end = expr;

	return list;
}
/*
ExpressionList *createArgumentList(Expression *expr)
{
	ExpressionList *result = (ExpressionList *)malloc(sizeof(ExpressionList));

	result->begin = expr;
	result->end = expr;

	return result;
}
*/

ProgramItemList *createProgramItemsList(ProgramItemListNotEmpty *programItemListNotEmpty)
{
	ProgramItemList *result = (ProgramItemList *)malloc(sizeof(ProgramItemList));

	result->begin = programItemListNotEmpty;
	result->end = programItemListNotEmpty;

	return result;
}

ProgramItemListNotEmpty *createProgramListNotEmpty(ProgramItem *programItem)
{
	ProgramItemListNotEmpty *result = (ProgramItemListNotEmpty *)malloc(sizeof(ProgramItemListNotEmpty));

	result->begin = programItem;
	result->end = programItem;
	
	result->nextInList = 0;

	return result;
}

ProgramItemListNotEmpty *appendProgramToListNotEmpty(ProgramItemListNotEmpty *list, ProgramItem *programItem)
{
	list->end->nextInList = programItem;
	list->end = programItem;

	return list;
}


ProgramItem *createProgramItem(Module *module, char *id_var_name)
{
	ProgramItem *result = (ProgramItem *)malloc(sizeof(ProgramItem));

	result->isImport = id_var_name != 0;
	result->id_var_name = id_var_name;
	result->module = module;
	
	result->nextInList = 0;

	return result;
}


Module *createModule(char *id_var_name, FunctionOrSubList *functionOrSubList)
{
	Module *result = (Module *)malloc(sizeof(Module));

	result->id_var_name = id_var_name;
	result->functionOrSubList = functionOrSubList;

	return result;
}

FunctionOrSubList *createFunctionOrSubList(FunctionOrSub *functionOrSub)
{
	FunctionOrSubList *result = (FunctionOrSubList *)malloc(sizeof(FunctionOrSubList));

	result->begin = functionOrSub;
	result->end = functionOrSub;
	return result;
}


FunctionOrSubList *appendFunctionOrSubList(FunctionOrSubList *list, FunctionOrSub *functionOrSub)
{
	list->end->nextInList = functionOrSub;
	list->end = functionOrSub;
	return list;
}

FunctionOrSub *createFunctionOrSub(SubBloc *subBloc, Function *function)
{
	FunctionOrSub *result = (FunctionOrSub *)malloc(sizeof(FunctionOrSub));

	result->subBloc = subBloc;
	result->function=function;
	
	result->nextInList = 0;

	return result;
}

Function *createFunction(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList)
{
	Function *result = (Function *)malloc(sizeof(Function));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;

	return result;
}

SubBloc *createSubBloc(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList)
{
	SubBloc *result = (SubBloc *)malloc(sizeof(SubBloc));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;

	return result;
}

//WIP
ParameterListOrEmpty *createParameterListOrEmpty(ParameterListWithType *parameterListWithType, ParameterListWithoutType *parameterListWithoutType)
{
	ParameterListOrEmpty *result = (ParameterListOrEmpty *)malloc(sizeof(ParameterListOrEmpty));

	result->parameterListWithType = parameterListWithType;
	result->parameterListWithoutType = parameterListWithoutType;

	return result;
}

ParameterListWithType *createParameterListWithType(ParameterWithType *parameterWithType)
{
	ParameterListWithType *result = (ParameterListWithType*)malloc(sizeof(ParameterListWithType));

	result->begin = parameterWithType;
	result->end = parameterWithType;
	return result;
}

ParameterListWithType *appendParameterListWithType(ParameterListWithType *list, ParameterWithType *parameterWithType)
{
	list->end->nextInList = parameterWithType;
	list->end = parameterWithType;
	return list;
}

ParameterListWithoutType *createParameterListWithoutType(ParameterWithoutType *parameterWithoutType)
{
	ParameterListWithoutType *result = (ParameterListWithoutType*)malloc(sizeof(ParameterListWithoutType));

	result->begin = parameterWithoutType;
	result->end = parameterWithoutType;
	return result;
}

ParameterListWithoutType *appendParameterListWithoutType(ParameterListWithoutType *list, ParameterWithoutType *parameterWithoutType)
{
	list->end->nextInList = parameterWithoutType;
	list->end = parameterWithoutType;
	return list;
}

ParameterWithType *createParameterWithType(char* id_var_name, VarType basic_literal)
{
	ParameterWithType *result = (ParameterWithType *)malloc(sizeof(ParameterWithType));

	result->id_var_name = id_var_name;
	result->basic_literal = basic_literal;
	
	result->nextInList = 0;

	return result;
}

ParameterWithoutType *createParameterWithoutType(char* id_var_name)
{
	ParameterWithoutType *result = (ParameterWithoutType *)malloc(sizeof(ParameterWithoutType));

	result->id_var_name = id_var_name;
	
	result->nextInList = 0;

	return result;
}

StmtList *createStmtList(Statement *statement)
{
	StmtList *result = (StmtList *)malloc(sizeof(StmtList));

	result->begin = statement;
	result->end = statement;

	return result;
}

StmtList *appendStmtList(StmtList *list, Statement *statement)
{
	list->end->nextInList = statement;
	list->end = statement;

	return list;
}

Statement *createStatement(StmtType type, StmtValue value)
{
	Statement *result = (Statement *)malloc(sizeof(Statement));

	result->type = type;
	result->value = value;
	
	result->nextInList = 0;

	return result;
}

StatementSingle *createStatementSingle(StmtType type, StmtSingleValue value)
{
	StatementSingle *result = (StatementSingle *)malloc(sizeof(StatementSingle));

	result->type = type;
	result->value = value;

	return result;
}

StatementMulti *createStatementMulti(StmtType type, StmtMultiValue value)
{
	StatementMulti *result = (StatementMulti *)malloc(sizeof(StatementMulti));

	result->type = type;
	result->value = value;

	return result;
}

WhileStmt *createWhileStmt(Expression *expression, StmtList *stmtList)
{
	WhileStmt *result = (WhileStmt *)malloc(sizeof(WhileStmt));

	result->expression = expression;
	result->stmtList = stmtList;

	return result;
}

DoLoopStmt *createDoLoopStmt(DoLoopCondition *condition, StmtList *stmtList)
{
	DoLoopStmt *result = (DoLoopStmt *)malloc(sizeof(DoLoopStmt));

	result->condition = condition;
	result->stmtList = stmtList;

	return result;
}

//WIP
DoLoopCondition *createDoLoopCondition(int isUntil, Expression *expression)
{
	DoLoopCondition *result = (DoLoopCondition *)malloc(sizeof(DoLoopCondition));

	if (isUntil)
		result->isUntil = 1;
	else
		result->isUntil = 0;
	result->expression = expression;

	return result;
}

ForLoopStmt *createForLoopStmt(char* counterVarName, VarType counterType, Expression* fromValue, Expression* toValue, Expression* stepValue, StmtList *stmtList)
{
	ForLoopStmt *result = (ForLoopStmt *)malloc(sizeof(ForLoopStmt));

	result->counterVarName = counterVarName;
	result->counterType = counterType;
	result->fromValue = fromValue;
	result->toValue = toValue;
	result->stepValue = stepValue;
	result->stmtList = stmtList;

	return result;
}

ForEachLoopStmt *createForEachLoopStmt(char* counterVarName, VarType counterType, char* counterSourceName, StmtList *stmtList)
{
	ForEachLoopStmt *result = (ForEachLoopStmt *)malloc(sizeof(ForEachLoopStmt));

	result->counterVarName = counterVarName;
	result->counterType = counterType;
	result->counterSourceName = counterSourceName;
	result->stmtList = stmtList;

	return result;
}

IfStmtMulti *createIfStmtMulti(Expression *expression, StmtList *thenStmtList, ElseIfList *elseIfList, StmtList *elseStmtList)
{
	IfStmtMulti *result = (IfStmtMulti *)malloc(sizeof(IfStmtMulti));

	result->expression = expression;
	result->thenStmtList = thenStmtList;
	result->elseIfList = elseIfList;
	result->elseStmtList = elseStmtList;

	return result;
}

ElseIfList *createElseIfList(ElseIf *elseIf)
{
	ElseIfList *result = (ElseIfList *)malloc(sizeof(ElseIfList));

	result->begin = elseIf;
	result->end = elseIf;

	return result;
}

ElseIfList *appendElseIfList(ElseIfList *list, ElseIf *elseIf)
{
	list->end->nextInList = elseIf;
	list->end = elseIf;

	return list;
}

ElseIf *createElseIf(Expression *expression, StmtList *stmtList)
{
	ElseIf *result = (ElseIf*)malloc(sizeof(ElseIf));

	result->expression = expression;
	result->stmtList = stmtList;
	
	result->nextInList = 0;

	return result;
}

IfStmtSingle *createIfStmtSingle(Expression *expression, StatementSingle *thenStmt, StatementSingle *elseStmt)
{
	IfStmtSingle *result = (IfStmtSingle *)malloc(sizeof(IfStmtSingle));

	result->expression = expression;
	result->thenStmt = thenStmt;
	result->elseStmt = elseStmt;

	return result;
}

SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList, StmtList * elseStmt)
{
	SelectStmt *result = (SelectStmt*)malloc(sizeof(SelectStmt));

	result->expression = expression;
	result->caseList = caseList;
	result->elseStmt = elseStmt;

	return result;
}

CaseList *createCaseList(CaseStmt *caseStmt)
{
	CaseList *result = (CaseList *)malloc(sizeof(CaseList));

	result->begin = caseStmt;
	result->end = caseStmt;

	return result;
}

CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt)
{
	list->end->nextInList = caseStmt;
	list->end = caseStmt;

	return list;
}

CaseStmt *createCaseStmt(int isIs, Expression *expression, StmtList *stmtList)
{
	CaseStmt *result = (CaseStmt *)malloc(sizeof(CaseStmt));

	if (isIs)
		result->isIs = 1;
	else
		result->isIs = 0;
	result->expression = expression;
	result->stmtList = stmtList;
	
	result->nextInList = 0;

	return result;
}

//WIP
DeclStmtSingle *createDeclStmtSingle(int isConst, VarNameSingle* varName, VarType varType, Expression *expression)
{
	DeclStmtSingle *result = (DeclStmtSingle*)malloc(sizeof(DeclStmtSingle));

	if (isConst)
		result->isConst = 1;
	else
		result->isConst = 0;
	result->varName = varName;
	result->varType = varType;
	result->expression = expression;

	return result;
}

DeclStmtMulti *createDeclStmtMulti(int isConst, VarNameSingle* varName, VarType varType, Expression *expression)
{
	DeclStmtMulti *result = (DeclStmtMulti*)malloc(sizeof(DeclStmtMulti));

	if (isConst)
		result->isConst = 1;
	else
		result->isConst = 0;
	result->varName = varName;
	result->varType = varType;
	result->expression = expression;

	return result;
}

VarNameSingle *createVarNameSingle(char* id_var_name, Expression *expression)
{
	VarNameSingle *result = (VarNameSingle *)malloc(sizeof(VarNameSingle));

	result->id_var_name = id_var_name;
	result->expression = expression;

	return result;
}

VarNameMulti *createVarNameMulti(char* id_var_name, Expression *expression)
{
	VarNameMulti *result = (VarNameMulti *)malloc(sizeof(VarNameMulti));

	result->id_var_name = id_var_name;
	result->expression = expression;

	return result;
}

Expression *createExpressionWithList(ExprType type, Value value, ExpressionList *exprList)
{
	Expression *result = (Expression *)malloc(sizeof(Expression));

	result->type = type;
	result->value = value;
	result->exprList = exprList;

	result->right = 0;
	result->left = 0;
	result->nextInList = 0;

	return result;
}

ReturnStmt *createReturnStmt(Expression *expression)
{
	ReturnStmt *result = (ReturnStmt *)malloc(sizeof(ReturnStmt));
	
	result->expression = expression;

	return result;
}
