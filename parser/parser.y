%define parse.error verbose


%{
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "../tree/tree_nodes.h"
#include "../tree/print_tree.h"


extern int yylineno;
extern FILE* yyin;

extern int yyparse();
extern int yylex();

// ----- declarations -----
Expression* createExpression(ExprType type, Expression *left, Expression *right);
Expression* createSimpleExpression(ExprType type, Value value);
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
Function* createFunction(char* id_var_name, ExpressionList *arguments, StmtList *stmtList, ExpressionList *exprList);
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
DoLoopCondition *createDoLoopCondition(int *isUntil, Expression *expression);
ForLoopStmt *createForLoopStmt(char* counterVarName, VarType counterType, Expression* fromValue, Expression* toValue, Expression* stepValue, StmtList *stmtList);
ForEachLoopStmt *createForEachLoopStmt(char* counterVarName, VarType counterType, char* counterSourceName, StmtList *stmtList);
IfStmtMulti *createIfStmtMulti(Expression *expression, StmtList *thenStmtList, ElseIfList *elseIfList, StmtList *elseStmtList);
ElseIfList *createElseIfList(ElseIf *elseIf);
ElseIfList *appendElseIfList(ElseIfList *list, ElseIf *elseIf);
ElseIf *createElseIf(Expression *expression, StmtList *stmtList);
IfStmtSingle *createIfStmtSingle(Expression *expression, StmtList *thenStmtList, StmtList *elseStmtList);
SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList);
CaseList *createCaseList(CaseStmt *caseStmt);
CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt);
CaseStmt *createCaseStmt(int *isIs, Expression *fromExpression, Expression *toExpression, StmtList *stmtList);
DeclStmtSingle *createDeclStmtSingle(int *isConst, char* id_var_name, VarType varType, Expression *expression);
DeclStmtMulti *createDeclStmtMulti(int *isConst, char* id_var_name, VarType varType, Expression *expression);
VarNameSingle *createVarNameSingle(char* id_var_name, Expression *expression);
VarNameMulti *createVarNameMulti(char* id_var_name, Expression *expression);

%}

%union {
	int bool_val;
	int int_val;
	//bin and hex
	double double_val;
	char* datetime_val;//time_t
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
}

%type <expression> expr_singleline expr_multiline basic_literal_value arguments_singleline arguments_multiline;
%type <expressionList> expr_list arguments;
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
%type <stmtEnds> stmt_ends;
%type <vt> basic_literal;

%token<int_val> INT_VALUE
%token<double_val> DOUBLE_VALUE
%token<str_val> STRING_VALUE
%token<bool_val> BOOLEAN_VALUE
%token<id_name> IDENTIFIER_VALUE
%token<datetime_val> DATETIME_VALUE


%token<int_val> INT
%token<double_val> DOUBLE
%token<str_val> STRING
%token<bool_val> BOOLEAN
%token<id_var_name> IDENTIFIER


%token ENDL

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


%left '^'
%left '*' '/'
%left INT_DIV
%left '+' '-'
%right UNARY_MINUS UNARY_PLUS
%left '=' NOT_EQUAL LESS_OR_EQUAL MORE_OR_EQUAL '>' '<'
%left '&'
%nonassoc '(' ')'

%precedence THEN
%precedence ELSE
%precedence IDENTIFIER

/*
%type access
%type program_items_list
%type program_items_list_not_empty
%type program_item
%type stmt_ends
%type stmt
%type single_line_stmt
%type multi_line_stmt
%type decl_stmt
%type var_name
%type var_name_singleline
%type while_stmt
%type if_stmt_multi_line
%type if_stmt_single_line
%type elseif_list
%type select_stmt
%type case_stmt
%type expr_singleline
%type basic_literal
%type arguments
%type expr_list
%type module
%type stmt_list
%type functions_or_sub_list
%type function_or_sub
%type function
%type sub_bloc
%type parameterlist_or_empty
%type parameterlist_with_type
%type parameterlist_without_type
%type parameter_with_type
%type parameter_without_type
%type arguments_singleline
%type arguments_multiline
%type do_loop_stmt
%type do_loop_condition
%type for_loop_stmt
%type for_each_loop_stmt
%type decl_stmt_single_line
%type basic_literal_value
%type expr_multiline
*/

%start root

%%

//------------------programm Start-----------------------------
root: program_items_list {$$ /*= root*/ = $1;}
    ;

program_items_list: {$$ = 0;}
                  |program_items_list_not_empty {$$ = createProgramItemsList($1);}
                  ;

program_items_list_not_empty: program_item { $$ = createProgramListNotEmpty($1); }
                            | program_items_list_not_empty program_item { $$ = appendProgramToListNotEmpty($1,$2); }
                            ;

program_item: module {$$ = createProgramItem($1,0);}
             | IMPORTS IDENTIFIER stmt_ends  {$$ =  createProgramItem(0,$2);}
             ;


module: MODULE IDENTIFIER stmt_ends END MODULE {$$ = createModule($2,0);}
      | MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE {$$ = createModule($2,$4);}
      | access MODULE IDENTIFIER stmt_ends END MODULE {$$ = createModule($3,0);}
      | access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE {$$ = createModule($3,$5);}
      ;


functions_or_sub_list: function_or_sub {$$ = createFunctionOrSubList($1);}
                     | functions_or_sub_list stmt_ends function_or_sub {$$ = appendFunctionOrSubList($1,$3);}
                     ;

function_or_sub: function {$$ = createFunctionOrSub(0,$1);}
               | sub_bloc {$$ = createFunctionOrSub($1,0);}
               ;

function: FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION {$$ = createFunction($2,$3,0,0);}
        | FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION {$$ = createFunction($2,$3,0,$6);}
        | FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION {$$ = createFunction($2,$3,0,$6);}
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION {$$ = createFunction($2,$3,$5,0);}
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION {$$ = createFunction($2,$3,$5,$7);}
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION {$$ = createFunction($2,$3,$5,$7);}
        | access FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION {$$ = createFunction($3,$4,0,0,0);}
        | access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION {$$ = createFunction($3,$4,0,$7);}
        | access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION {$$ = createFunction($3,$4,0,$7);}
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION {$$ = createFunction($3,$4,$6,0);}
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION {$$ = createFunction($3,$4,$6,$8);}
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION {$$ = createFunction($3,$4,$6,$8);}
        ;


sub_bloc: SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends END SUB {$$ = createSubBloc($2,$4,0);}
        | SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends stmt_list END SUB {$$ = createSubBloc($2,$4,$7);}
        | access SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends END SUB {$$ = createSubBloc($3,$5,0);}
        | access SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends stmt_list END SUB {$$ = createSubBloc($3,$5,$8);}
        ;

parameterlist_or_empty:  {$$ = 0;}
                      | parameterlist_with_type {$$ = createParameterListWithType($1, 0);}
                      | END_OF_LINE parameterlist_with_type END_OF_LINE {$$ = createParameterListWithType($2, 0);}
                      | END_OF_LINE parameterlist_with_type {$$ = createParameterListWithType($2, 0);}
                      | parameterlist_with_type END_OF_LINE {$$ = createParameterListWithType($1, 0);}
                      | parameterlist_without_type {$$ = createParameterListWithType(0, $1);}
                      | END_OF_LINE parameterlist_without_type END_OF_LINE {$$ = createParameterListWithType(0, $2);}
                      | parameterlist_without_type END_OF_LINE {$$ = createParameterListWithType(0, $1);}
                      | END_OF_LINE parameterlist_without_type {$$ = createParameterListWithType(0, $2);}
                      ;

parameterlist_with_type: parameter_with_type {$$ = createParameterListWithType($1);}
                       | parameterlist_with_type ',' parameter_with_type {$$ = appendParameterListWithType($1,$3);}
                       | parameterlist_with_type ',' END_OF_LINE parameter_with_type {$$ = appendParameterListWithType($1,$4);}
                       ;


parameterlist_without_type: parameter_without_type {$$ = createParameterListWithoutType($1);}
                          | parameterlist_without_type ',' parameter_without_type {$$ = appendParameterListWithoutType($1,$3);}
                          | parameterlist_without_type ',' END_OF_LINE parameter_without_type {$$ = appendParameterListWithoutType($1,$4);}
                          ;

//WIP
parameter_with_type: IDENTIFIER AS basic_literal {$$ = createParameterWithType($1,$3);}
                   | IDENTIFIER AS basic_literal '(' ')'  {$$ = createParameterWithType($1,$3);}
                   ;


parameter_without_type: IDENTIFIER {$$ = createParameterWithoutType($1);}
                      ;


/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */

stmt_list: stmt { $$ = createStmtList($1); }
         | stmt_list stmt { $$ = appendStmtList($1,$2); }
         ;


stmt: multi_line_stmt {$$ = createStatement(ST_MULTI, (StmtValue){.statementMulti=$1});}
    | single_line_stmt stmt_ends {$$ = createStatement(ST_SINGLE, (StmtValue){.statementSingle=$1});}
    ;


single_line_stmt: if_stmt_single_line {$$ = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=$1});}
				| decl_stmt_single_line {$$ = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=$1});}
				| expr_singleline {$$ = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=$1});}
                ;

multi_line_stmt: if_stmt_multi_line stmt_ends {$$ = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=$1});}
               | decl_stmt stmt_ends {$$ = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=$1});}
               | expr_multiline stmt_ends {$$ = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=$1});}
               | while_stmt stmt_ends {$$ = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=$1});}
			   | do_loop_stmt {$$ = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=$1});}
			   | for_loop_stmt {$$ = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=$1});}
			   | for_each_loop_stmt {$$ = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=$1});}
               | select_stmt stmt_ends {$$ = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=$1});}
               ;



stmt_ends: END_OF_LINE { }
    | stmt_ends END_OF_LINE { }
    ;



//-------------------------Declaration stmt
decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(1, $2, $4, $7);}
         | CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(1, $2, $4, $7);}
         | DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, $4, $7);}
         | DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, $4, $7);}
         | DIM var_name '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, 0, $5);}
         | DIM var_name_singleline '=' END_OF_LINE expr_multiline {$$ = createDeclStmtMulti(0, $2, 0, $5);}
         ;


decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline {$$ = createDeclStmtSingle(1, $2, $4, $6);}
					 | DIM var_name_singleline AS basic_literal '=' expr_singleline {$$ = createDeclStmtSingle(0, $2, $4, $6);}
					 | DIM var_name_singleline AS basic_literal {$$ = createDeclStmtSingle(0, $2, $4, 0);}
				 	 | DIM var_name_singleline '=' expr_singleline {$$ = createDeclStmtSingle(0, $2, 0, $4);}
					 | DIM var_name_singleline {$$ = createDeclStmtSingle(0, $2, 0, 0);}
                     | DIM var_name_singleline '=' NEW basic_literal'('')' '{' expr_list '}' {}//How to make an array
					 ;


var_name: IDENTIFIER'(' expr_multiline ')' {$$ = createVarNameMulti($1, $3);}
		;

var_name_singleline: IDENTIFIER'(' expr_singleline ')' {$$ = createVarNameSingle($1, $3);}
        | IDENTIFIER {$$ = createVarNameSingle($1, 0);}
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
do_loop_stmt: DO do_loop_condition stmt_list LOOP {$$ = createDoLoopStmt($2, $3);}
			| DO stmt_ends stmt_list LOOP do_loop_condition {$$ = createDoLoopStmt($5, $3);}
			;

do_loop_condition: UNTIL expr_singleline stmt_ends {$$ = createDoLoopCondition(1, $2);} //How do distinguish?
				 | WHILE expr_singleline stmt_ends {$$ = createDoLoopCondition(0, $2);}
				 ;


//-------------------------FOR LOOP stmt
for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT {$$ = createForLoopStmt($2, $4, $6, $8, 0, $10);}
			 | FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT {$$ = createForLoopStmt($2, $4, $6, $8, $10, $12);}
			 ;


//-------------------------FOR EACH LOOP stmt
for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT {$$ = createForEachLoopStmt($3, $5, $7, $9);}


//-------------------------IF/ELSE stmt

if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, 0);}
                  | IF expr_singleline THEN stmt_ends stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, 0);}
				  | IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, $7);}
				  | IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_list END IF {$$ = createIfStmtMulti($2, $5, 0, $7);}
                  | IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF {$$ = createIfStmtMulti($2, $5, $6, 0);}
                  | IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF {$$ = createIfStmtMulti($2, $5, $6, 0);}
				  | IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF {$$ = createIfStmtMulti($2, $5, $6, $8);}
				  | IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF {$$ = createIfStmtMulti($2, $5, $6, $8);}
                  ;

elseif_list: elseif {$$ = createElseIfList($1);}
           | elseif_list elseif {$$ = appendElseIfList($1, $2);}
           ;

elseif: ELSEIF expr_multiline THEN stmt_list {$$ = createElseIf($2, $4);}
      | ELSEIF expr_singleline THEN stmt_list {$$ = createElseIf($2, $4);}

if_stmt_single_line: IF expr_singleline THEN single_line_stmt  {$$ = createIfStmtSingle($2, $4, 0);}
                   | IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  {$$ = createIfStmtSingle($2, $4, $6);}
                   ;


//--------------------------SELECT stmt
select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT {$$ = createSelectStmt($3, $5);}
           | SELECT CASE expr_multiline stmt_ends case_list END SELECT {$$ = createSelectStmt($3, $5);}
           ;

case_list: case_stmt {$$ = createCaseList($1);}
		| case_list case_stmt {$$ = appendCaseList($1, $2);}
		;

case_stmt: CASE expr_multiline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, 0, $4);}
        | CASE expr_singleline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, 0, $4);}
        | CASE IS expr_multiline stmt_ends stmt_list {$$ = createCaseStmt(1, $3, 0, $5);}
        | CASE IS expr_singleline stmt_ends stmt_list {$$ = createCaseStmt(1, $3, 0, $5);}
        | CASE expr_multiline TO expr_multiline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, $4, $6);}
        | CASE expr_multiline TO expr_singleline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, $4, $6);}
        | CASE expr_singleline TO expr_multiline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, $4, $6);}
        | CASE expr_singleline TO expr_singleline stmt_ends stmt_list {$$ = createCaseStmt(0, $2, $4, $6);}
        | CASE ELSE stmt_ends stmt_list {$$ = createCaseStmt(0, 0, 0, $4);}
        ;



//---------------------------EXPRession
expr_singleline: basic_literal_value {$$ = $1;}
    | '-' expr_singleline	%prec UNARY_MINUS {$$ = createExpression(ET_MINUS, 0, $2);}
    | '+' expr_singleline	%prec UNARY_PLUS {$$ = createExpression(ET_PLUS, 0, $2);}
    | expr_singleline '+' expr_singleline {$$ = createExpression(ET_PLUS, $1, $3); }
    | expr_singleline '-' expr_singleline {$$ = createExpression(ET_MINUS, $1, $3); }
    | expr_singleline '*' expr_singleline {$$ = createExpression(ET_MULT, $1, $3);}
    | expr_singleline '/' expr_singleline {$$ = createExpression(ET_DIV, $1, $3);}
    | expr_singleline INT_DIV expr_singleline {$$ = createExpression(ET_INTDIV, $1, $3);}
    | expr_singleline '=' expr_singleline {$$ = createExpression(ET_EQUAL, $1, $3);}
    | expr_singleline '<' expr_singleline {$$ = createExpression(ET_LESSER, $1, $3);}
    | expr_singleline '>' expr_singleline {$$ = createExpression(ET_GREATER, $1, $3);}
    | expr_singleline '^' expr_singleline {$$ = createExpression(ET_EXP, $1, $3);}
    | expr_singleline NOT_EQUAL expr_singleline {$$ = createExpression(ET_NOT_EQUAL, $1, $3);}
    | expr_singleline LESS_OR_EQUAL expr_singleline {$$ = createExpression(ET_LESSER_EQUAL, $1, $3);}
    | expr_singleline MORE_OR_EQUAL expr_singleline {$$ = createExpression(ET_GREATER_EQUAL, $1, $3);}
    | expr_singleline '&' expr_singleline {$$ = createExpression(ET_CONCAT, $1, $3);}
    | '(' expr_singleline ')' {$$ = createExpression(0, 0, $2);}
    | IDENTIFIER {$$ = createSimpleExpression(ET_ID, (Value){.string_val=$1});}
    | IDENTIFIER arguments_singleline {$$ = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=$1}, $2);}
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
              ;


basic_literal: INT {$$ = VT_INTEGER;}
            | STRING {$$ = VT_STRING;}
            | BOOLEAN {$$ = VT_BOOLEAN;}
            | DOUBLE {$$ = VT_DOUBLE;}
            ;

basic_literal_value: INT_VALUE {$$ = createSimpleExpression(VT_INTEGER, (Value){.int_val = $1});}
                   | STRING_VALUE {$$ = createSimpleExpression(VT_STRING, (Value){.string_val=$1});}
                   | BOOLEAN_VALUE {$$ = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=$1});}
                   | DOUBLE_VALUE {$$ = createSimpleExpression(VT_DOUBLE, (Value){.double_val=$1});}
                   ;



arguments_multiline: '(' END_OF_LINE expr_list ')' {$$ = createExpression(0, 0, $3);}
                   | '(' END_OF_LINE expr_list END_OF_LINE ')' {$$ = createExpression(0, 0, $3);}
                   | '(' expr_list END_OF_LINE ')' {$$ = createExpression(0, 0, $2);}
                   ;


arguments_singleline: '(' expr_list ')' {$$ = createExpression(0, 0, $2);}
                    | '(' ')' {$$ = 0;}
                    ;

arguments: arguments_multiline {$$ = createExpressionList($1);}
        | arguments_singleline {$$ = createExpressionList($1);}
        ;


expr_list: expr_singleline {$$ = createExpressionList($1);}
         | expr_list ',' expr_singleline {$$ = appendExpressionToList($1,$3);}
         ;


%%


int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();
        fclose(yyin);
		/*

		freopen("./gen_tree/tree_img.txt", "w", stdout);
		printTree(root);
		fclose(stdout);
		fclose (yyin);*/
    }
    else {
        yyerror("not found file");
    }
}

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
	list->end->nextInList = list;
	list->end = programItem;

	return list;
}


ProgramItem *createProgramItem(Module *module, char *id_var_name)
{
	ProgramItem *result = (ProgramItem *)malloc(sizeof(ProgramItem));

	result->isImport = id_var_name != 0;
	result->id_var_name=id_var_name;
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

Function *createFunction(char* id_var_name, ExpressionList *arguments, StmtList *stmtList, ExpressionList *exprList)
{
	Function *result = (Function *)malloc(sizeof(Function));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;
	result->exprList = exprList;

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
DoLoopCondition *createDoLoopCondition(int *isUntil, Expression *expression)
{
	DoLoopCondition *result = (DoLoopCondition *)malloc(sizeof(DoLoopCondition));

	result->isUntil = isUntil;
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

IfStmtSingle *createIfStmtSingle(Expression *expression, StmtList *thenStmtList, StmtList *elseStmtList)
{
	IfStmtSingle *result = (IfStmtSingle *)malloc(sizeof(IfStmtSingle));

	result->expression = expression;
	result->thenStmtList = thenStmtList;
	result->elseStmtList = elseStmtList;

	return result;
}

SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList)
{
	SelectStmt *result = (SelectStmt*)malloc(sizeof(SelectStmt));

	result->expression = expression;
	result->caseList = caseList;

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

CaseStmt *createCaseStmt(int *isIs, Expression *fromExpression, Expression *toExpression, StmtList *stmtList)
{
	CaseStmt *result = (CaseStmt *)malloc(sizeof(CaseStmt));

	result->isIs = isIs;
	result->fromExpression = fromExpression;
	result->toExpression = toExpression;
	result->stmtList = stmtList;
	
	result->nextInList = 0;

	return result;
}

//WIP
DeclStmtSingle *createDeclStmtSingle(int *isConst, char* id_var_name, VarType varType, Expression *expression)
{
	DeclStmtSingle *result = (DeclStmtSingle*)malloc(sizeof(DeclStmtSingle));

	result->isConst = isConst;
	result->id_var_name = id_var_name;
	result->varType = varType;
	result->expression = expression;

	return result;
}

DeclStmtMulti *createDeclStmtMulti(int *isConst, char* id_var_name, VarType varType, Expression *expression)
{
	DeclStmtMulti *result = (DeclStmtMulti*)malloc(sizeof(DeclStmtMulti));

	result->isConst = isConst;
	result->id_var_name = id_var_name;
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
