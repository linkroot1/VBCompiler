//%error-verbose
%define parse.error verbose

//разделить stmt на single_line_stmt и multi_line_stmt и переработать в соответствии с этими stmt if_stmt и while_stmt
%{
#include <stdio.h>
#include <stdlib.h>

#include "TreeNodes/root.h"

extern int yylineno;
extern FILE* yyin;

extern RootNode * rootNode;

int yyparse();
int yylex();
%}

%union {
	bool bool_val;
	int int_val;
	//bin and hex
	double double_val;
	char* datetime_val;//time_t
	char* str_val;
	char* id_var_name;
}

%token<int_val> INT
%token<double_val> DOUBLE
%token<str_val> STRING
%token<bool_val> BOOLEAN
%token<id_name> IDENTIFIER

%token ENDL

%token ACCESS //no ACCESS in lex
%token SUB
%token END
%token CONST
%token DIM
%token AS
%token WHILE
%token IF
%token THEN
%token ELSE
%token ELSEIF
%token SELECT
%token CASE
%token IS
%token TO
%token IMPORTS


%token END_OF_LINE


%right UNARY_MINUS
%right UNARY_PLUS

%token ASSIGN_CONSTRUCT
%token ASSIGN_MULT
%token ASSIGN_ORD_DIV
%token ASSIGN_INT_DIV
%token ASSIGN_ADD
%token ASSIGN_SUB
%token ASSIGN_LSHIFT
%token ASSIGN_RSHIFT
%token ASSIGN_CONCAT

%left '^'
%left '*' '/'
%left INT_DIV
%left '+' '-'
%left '=' NOT_EQUAL LESS_OR_EQUAL MORE_OR_EQUAL '>' '<'
%left '&'


%type program_items_list
%type program_items_list_not_empty
%type program_item
%type stmt_ends
%type stmt
%type decl_stmt
%type var_name
%type exec_stmt
%type assign_stmt
%type while_stmt
%type if_stmt
%type elseif_list
%type select_stmt
%type case_stmt
%type expr
%type operand
%type basic_literal
%type function_literal
%type arguments
%type expr_list


%start root

%%

//------------------programm Start-----------------------------
root: program_items_list
    ;

program_items_list:
                  |program_items_list_not_empty
                  ;

program_items_list_not_empty: program_item
                            | program_items_list_not_empty program_item
                            ;

program_item: stmt
             | IMPORTS IDENTIFIER stmt_ends
             ;


/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */

stmt_ends: END_OF_LINE
    | stmt_ends END_OF_LINE
    ;



stmt: decl_stmt stmt_ends
    | exec_stmt stmt_ends
    ;


//-------------------------Declaration stmt
decl_stmt: ACCESS SUB var_name stmt END SUB
        | CONST var_name AS basic_literal '=' expr
        | DIM var_name AS basic_literal '=' expr
        | DIM var_name AS basic_literal
        | DIM var_name '=' expr
        | DIM var_name
        ;


var_name: IDENTIFIER'('expr')'
        | IDENTIFIER




//-----------------------------------------Executable Statements
exec_stmt: assign_stmt
        | while_stmt
        | if_stmt
        | select_stmt
        ;

//-------------------------Assignment stmt
assign_stmt: IDENTIFIER '=' expr
          | IDENTIFIER '=' IDENTIFIER //...
          ;


//-------------------------WHILE/for stmt
while_stmt: WHILE expr stmt_ends stmt END WHILE
         ;

//-------------------------IF/ELSE stmt
//Сделать обработку переводов строки
if_stmt: IF expr THEN stmt
      | IF expr THEN stmt_ends stmt ELSE stmt END IF
      | IF expr THEN stmt_ends stmt elseif_list ELSE stmt END IF
      ;

elseif_list: ELSEIF expr THEN stmt
           | elseif_list ELSEIF expr THEN stmt
           ;

//--------------------------SELECT stmt
select_stmt: SELECT CASE expr stmt_ends case_list END SELECT
          ;

case_list: case_stmt
		| case_list case_stmt
		;

case_stmt: CASE expr stmt
        | CASE IS expr stmt
        | CASE expr TO expr stmt
        | CASE ELSE stmt
        ;

//---------------------------EXPRession („оделать приоритет операций)
expr: operand
    | '-' expr	%prec UNARY_MINUS
    | '+' expr	%prec UNARY_PLUS
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | expr INT_DIV expr
    | expr '=' expr
    | expr '<' expr
    | expr '>' expr
    | expr '^' expr
    | expr NOT_EQUAL expr
    | expr LESS_OR_EQUAL expr
    | expr MORE_OR_EQUAL expr
    | expr '&' expr
    ;

operand: basic_literal
       | function_literal
       ;

basic_literal: INT
            | STRING
            | BOOLEAN
            | DOUBLE
            ;

function_literal: IDENTIFIER arguments
               ;

arguments: '(' expr_list ')' //<-- ??
         | '(' ')'
         ;

expr_list: expr
        | expr_list ',' expr
        ;
%%

void yyerror(char const *s) {
    fprintf(stderr, "Error: %s on line %d\n", s, yylineno);
    exit(1);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();
        fclose(yyin);
    }
    else {
        yyerror("not found file");
    }
}
