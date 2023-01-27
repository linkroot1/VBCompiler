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

%token SUB
%token END
%token CONST
%token DIM
%token AS
%token WHILE
%token IF

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

%token PRIVATE
%token PROTECTED
%token PUBLIC
%token FRIEND

%left '^'
%left '*' '/'
%left INT_DIV
%left '+' '-'
%left '=' NOT_EQUAL LESS_OR_EQUAL MORE_OR_EQUAL '>' '<'
%left '&'

%precedence THEN
%precedence ELSE

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
%type assign_stmt
%type while_stmt
%type if_stmt_multi_line
%type if_stmt_single_line
%type elseif_list
%type select_stmt
%type case_stmt
%type expr
%type basic_literal
%type arguments
%type expr_list
%type module
%type stmt_list
%type functions_and_sub_list
%type function_or_sub
%type function
%type sub_bloc
%type parameterlist_or_empty
%type parameterlist_with_type
%type parameterlist_without_type
%type parameter_with_type
%type parameter_without_type
%type function_call_multiline
%type function_call_singleline
%type arguments_singleline
%type arguments_multiline
%type function_calls
%type do_loop_stmt
%type do_loop_condition
%type for_loop_stmt
%type for_each_loop_stmt
%type decl_stmt_single_line

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

program_item: module
             | IMPORTS IDENTIFIER stmt_ends
             ;


module: MODULE IDENTIFIER stmt_ends END MODULE
      | MODULE IDENTIFIER stmt_ends functions_and_sub_list END MODULE
      | access MODULE IDENTIFIER stmt_ends END MODULE
      | access MODULE IDENTIFIER stmt_ends functions_and_sub_list END MODULE
      ;


functions_and_sub_list: function_or_sub
                      | functions_and_sub_list stmt_ends function_or_sub
                      ;

function_or_sub: function
               | sub_bloc
               ;

function: FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends RETURN expr END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr END FUNCTION
        ;


sub_bloc: SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends END SUB
        | SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends stmt_list END SUB
        | access SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends END SUB
        | access SUB IDENTIFIER '('parameterlist_or_empty')' stmt_ends stmt_list END SUB
        ;

parameterlist_or_empty:
                      | parameterlist_with_type
                      | END_OF_LINE parameterlist_with_type END_OF_LINE
                      | END_OF_LINE parameterlist_with_type
                      | parameterlist_with_type END_OF_LINE
                      | parameterlist_without_type
                      | END_OF_LINE parameterlist_without_type END_OF_LINE
                      | parameterlist_without_type END_OF_LINE
                      | END_OF_LINE parameterlist_without_type
                      ;

parameterlist_with_type: parameter_with_type
                       | parameterlist_with_type ',' parameter_with_type
                       | parameterlist_with_type ',' END_OF_LINE parameter_with_type
                       ;


parameterlist_without_type: parameter_without_type
                          | parameterlist_without_type ',' parameter_without_type
                          | parameterlist_without_type ',' END_OF_LINE parameter_without_type
                          ;


parameter_with_type: IDENTIFIER AS basic_literal
                   | IDENTIFIER AS basic_literal '(' ')'
                   ;


parameter_without_type: IDENTIFIER
                      ;


/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */

stmt_list: stmt
         | stmt_list stmt
         ;


stmt: multi_line_stmt
    | single_line_stmt stmt_ends
    ;


single_line_stmt: if_stmt_single_line
				| decl_stmt_single_line
                ;

multi_line_stmt: decl_stmt stmt_ends
               | assign_stmt stmt_ends
               | while_stmt stmt_ends
			   | do_loop_stmt
			   | for_loop_stmt
			   | for_each_loop_stmt
               | select_stmt stmt_ends
               | if_stmt_multi_line stmt_ends
               ;



stmt_ends: END_OF_LINE
    | stmt_ends END_OF_LINE
    ;




//-------------------------Declaration stmt
decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr
         | DIM var_name AS basic_literal '=' END_OF_LINE expr
         | DIM var_name '=' END_OF_LINE expr
         ;
		
		
decl_stmt_single_line: access SUB var_name stmt_list END SUB
					| CONST var_name AS basic_literal '=' expr
					| DIM var_name AS basic_literal '=' expr
					| DIM var_name AS basic_literal
					| DIM var_name '=' expr
					| DIM var_name
					;


var_name: IDENTIFIER'(' expr ')'
        | IDENTIFIER
		;


access: PUBLIC
	  | PROTECTED
	  | FRIEND
	  | PRIVATE
	  | PROTECTED FRIEND
	  | PRIVATE FRIEND
	  ;



//-------------------------Assignment stmt
assign_stmt: IDENTIFIER '=' expr
          | IDENTIFIER '=' IDENTIFIER
          | IDENTIFIER '=' function_calls
          ;


//-------------------------WHILE stmt
while_stmt: WHILE expr stmt_ends stmt_list END WHILE
         ;
		 
		 
//-------------------------DO stmt
do_loop_stmt: DO do_loop_condition stmt_ends stmt_list LOOP
			| DO stmt_ends stmt_list LOOP do_loop_condition
			;

do_loop_condition: UNTIL expr
				 | WHILE expr
				 ;
				 
				 
//-------------------------FOR LOOP stmt (needs work)
for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal TO basic_literal stmt_ends stmt_list NEXT
			 | FOR IDENTIFIER AS basic_literal '=' basic_literal TO basic_literal STEP basic_literal stmt_ends stmt_list NEXT
			 ;
			 
			 
//-------------------------FOR EACH LOOP stmt (needs work) 
for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT


//-------------------------IF/ELSE stmt

if_stmt_multi_line: IF expr THEN stmt_ends stmt_list END IF
				  | IF expr THEN stmt_ends stmt_list ELSE stmt_list END IF
                  | IF expr THEN stmt_ends stmt_list elseif_list END IF
				  | IF expr THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF
                  ;

elseif_list: ELSEIF expr THEN stmt_list
           | elseif_list ELSEIF expr THEN stmt_list
           ;

if_stmt_single_line: IF expr THEN single_line_stmt
                   | IF expr THEN single_line_stmt ELSE single_line_stmt
                   ;


//--------------------------SELECT stmt
select_stmt: SELECT CASE expr stmt_ends case_list END SELECT
          ;

case_list: case_stmt
		| case_list case_stmt
		;

case_stmt: CASE expr stmt_ends stmt_list
        | CASE IS expr stmt_ends stmt_list
        | CASE expr TO expr stmt_ends stmt_list
        | CASE ELSE stmt_ends stmt_list
        ;

//------------------Call Function stmt
function_call_multiline: IDENTIFIER arguments_multiline
                       ;


function_call_singleline: IDENTIFIER arguments_singleline
                        ;

function_calls: function_call_multiline
              | function_call_singleline
              ;



//---------------------------EXPRession
expr: basic_literal
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

basic_literal: INT
            | STRING
            | BOOLEAN
            | DOUBLE
            ;


arguments_multiline: '(' END_OF_LINE expr_list ')'
                   | '(' END_OF_LINE expr_list END_OF_LINE ')'
                   | '(' expr_list END_OF_LINE ')'
                   ;


arguments_singleline: '(' expr_list ')'
                    | '(' ')'
                    ;

arguments: arguments_multiline
        | arguments_singleline
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
