%error-verbose

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

%token INT
%token DOUBLE
%token STRING
%token BOOLEAN
%token IDENTIFIER
%token ENDL

%type

%union {

}

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

program_item : stmt
             | IMPORTS IDENTIFIER
             ;


/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */
stmt: decl_stmt
    | exec_stmt
	| stmt stmt
    ;


//-------------------------Declaration stmt
decl_stmt: ACCESS SUB name stmt END SUB
        | CONST name AS type '=' val
        | DIM name
        | DIM name AS type
        | DIM name '=' val
        | DIM name AS type '=' val
        ;

//-----------------------------------------Executable Statements
exec_stmt: assign_stmt
        | while_stmt
        | if_stmt
        | select_stmt
		| case_stmt
        | exec_stmt exec_stmt
        ;

//-------------------------Assignment stmt
assign_stmt: IDENTIFIER '=' expr
          | IDENTIFIER '=' IDENTIFIER //...
          ;


//-------------------------WHILE/for stmt
while_stmt: WHILE expr stmt END WHILE
         ;

//-------------------------IF/ELSE stmt
//Сделать обработку переводов строки
if_stmt: IF expr THEN stmt
      | IF expr THEN stmt ELSE stmt END IF
      | IF expr THEN stmt elseif_list ELSE stmt END IF
      ;

elseif_list: ELSEIF expr THEN stmt
           | elseif_list ELSEIF expr THEN stmt
           ;

//--------------------------SELECT stmt
select_stmt: SELECT CASE expr case_stmt END SELECT
          ;

case_stmt: CASE expr stmt
        | CASE IS expr stmt
        | CASE expr TO expr stmt
        | CASE ELSE stmt
        | case_stmt case_stmt
        ;

//---------------------------EXPRession
expr: operand
    | expr '+' expr		{$$ = $1 + $3;}
    | expr '-' expr		{$$ = $1 - $3;}
    | '-' expr			{$$ = -$1;}
    | expr '*' expr		{$$ = $1 * $3;}
    | expr '/' expr		{$$ = $1 / $3;}
    | expr '=' expr		{$$ = $1 == $3;} //?
    | expr '<' expr		{$$ = $1 < $3;}
    | expr '>' expr		{$$ = $1 > $3;}
    | expr '^' expr		{$$ = $1 ^ $3;}
    | expr '\\' expr	//?
    | expr '<>' expr	{$$ = $1 <> $3;}
    | expr '>=' expr	{$$ = $1 >= $3;}
    | expr '<=' expr	{$$ = $1 <= $3;}
    | expr '&' expr		{$$ = $1 && $3;}
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
