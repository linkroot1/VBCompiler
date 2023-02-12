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

%token<int_val> INT_VALUE
%token<double_val> DOUBLE_VALUE
%token<str_val> STRING_VALUE
%token<bool_val> BOOLEAN_VALUE
%token<id_name> IDENTIFIER_VALUE


%token INT
%token DOUBLE
%token STRING
%token BOOLEAN
%token IDENTIFIER

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
%nonassoc '(' ')'

%precedence THEN
%precedence ELSE
%precedence IDENTIFIER

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
%type functions_and_sub_list
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
        | FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION
        | FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION
        | access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION
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
				| expr_singleline
                ;

multi_line_stmt: decl_stmt stmt_ends
               | while_stmt stmt_ends
			   | do_loop_stmt
			   | for_loop_stmt
			   | for_each_loop_stmt
               | select_stmt stmt_ends
               | if_stmt_multi_line stmt_ends
               | expr_multiline stmt_ends
               ;



stmt_ends: END_OF_LINE
    | stmt_ends END_OF_LINE
    ;




//-------------------------Declaration stmt
decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline
         | CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline
         | DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline
         | DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline
         | DIM var_name '=' END_OF_LINE expr_multiline
         | DIM var_name_singleline '=' END_OF_LINE expr_multiline
         ;


decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline
					 | DIM var_name_singleline AS basic_literal '=' expr_singleline
					 | DIM var_name_singleline AS basic_literal
				 	 | DIM var_name_singleline '=' expr_singleline
					 | DIM var_name_singleline
                     | DIM var_name_singleline '=' NEW basic_literal'('')' '{' expr_list '}'
					 ;


var_name: IDENTIFIER'(' expr_multiline ')'
		;

var_name_singleline: IDENTIFIER'(' expr_singleline ')'
        | IDENTIFIER
		;


access: PUBLIC
	  | PROTECTED
	  | FRIEND
	  | PRIVATE
	  | PROTECTED FRIEND
	  | PRIVATE FRIEND
	  ;





//-------------------------WHILE stmt
while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE
          | WHILE expr_singleline stmt_ends stmt_list END WHILE
         ;


//-------------------------DO stmt (можно ввести сюда и мультилайновые случаи)
do_loop_stmt: DO do_loop_condition stmt_ends stmt_list LOOP
			| DO stmt_ends stmt_list LOOP do_loop_condition
			;

do_loop_condition: UNTIL expr_singleline
				 | WHILE expr_singleline
				 ;


//-------------------------FOR LOOP stmt
for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT
			 | FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT
			 ;


//-------------------------FOR EACH LOOP stmt
for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT


//-------------------------IF/ELSE stmt

if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF
                  | IF expr_singleline THEN stmt_ends stmt_list END IF
				  | IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_list END IF
				  | IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_list END IF
                  | IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF
                  | IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF
				  | IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF
				  | IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF
                  ;

elseif_list: ELSEIF expr_multiline THEN stmt_list
           | ELSEIF expr_singleline THEN stmt_list
           | elseif_list ELSEIF expr_multiline THEN stmt_list
           | elseif_list ELSEIF expr_singleline THEN stmt_list
           ;

if_stmt_single_line: IF expr_singleline THEN single_line_stmt
                   | IF expr_singleline THEN single_line_stmt ELSE single_line_stmt
                   ;


//--------------------------SELECT stmt
select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT
           | SELECT CASE expr_multiline stmt_ends case_list END SELECT
           ;

case_list: case_stmt
		| case_list case_stmt
		;

case_stmt: CASE expr_multiline stmt_ends stmt_list
        | CASE expr_singleline stmt_ends stmt_list
        | CASE IS expr_multiline stmt_ends stmt_list
        | CASE IS expr_singleline stmt_ends stmt_list
        | CASE expr_multiline TO expr_multiline stmt_ends stmt_list
        | CASE expr_multiline TO expr_singleline stmt_ends stmt_list
        | CASE expr_singleline TO expr_multiline stmt_ends stmt_list
        | CASE expr_singleline TO expr_singleline stmt_ends stmt_list
        | CASE ELSE stmt_ends stmt_list
        ;






//---------------------------EXPRession
expr_singleline: basic_literal_value
    | '-' expr_singleline	%prec UNARY_MINUS
    | '+' expr_singleline	%prec UNARY_PLUS
    | expr_singleline '+' expr_singleline
    | expr_singleline '-' expr_singleline
    | expr_singleline '*' expr_singleline
    | expr_singleline '/' expr_singleline
    | expr_singleline INT_DIV expr_singleline
    | expr_singleline '=' expr_singleline
    | expr_singleline '<' expr_singleline
    | expr_singleline '>' expr_singleline
    | expr_singleline '^' expr_singleline
    | expr_singleline NOT_EQUAL expr_singleline
    | expr_singleline LESS_OR_EQUAL expr_singleline
    | expr_singleline MORE_OR_EQUAL expr_singleline
    | expr_singleline '&' expr_singleline
    | '(' expr_singleline ')'
    | IDENTIFIER
    | IDENTIFIER arguments_singleline
    ;




expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline
              | expr_singleline '-' END_OF_LINE expr_singleline
              | expr_singleline '*' END_OF_LINE expr_singleline
              | expr_singleline '/' END_OF_LINE expr_singleline
              | expr_singleline INT_DIV END_OF_LINE expr_singleline
              | expr_singleline '=' END_OF_LINE expr_singleline
              | expr_singleline '<' END_OF_LINE expr_singleline
              | expr_singleline '>' END_OF_LINE expr_singleline
              | expr_singleline '^' END_OF_LINE expr_singleline
              | expr_singleline NOT_EQUAL END_OF_LINE expr_singleline
              | expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline
              | expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline
              | expr_singleline '&' END_OF_LINE expr_singleline
              | '(' END_OF_LINE expr_singleline ')'
              | '(' END_OF_LINE expr_singleline END_OF_LINE ')'
              | '(' expr_singleline END_OF_LINE ')'
              | IDENTIFIER arguments_multiline
              ;

basic_literal: INT
            | STRING
            | BOOLEAN
            | DOUBLE
            ;

basic_literal_value: INT_VALUE
                   | STRING_VALUE
                   | BOOLEAN_VALUE
                   | DOUBLE_VALUE
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


expr_list: expr_singleline
         | expr_list ',' expr_singleline
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
