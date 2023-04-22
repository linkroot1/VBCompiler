%define parse.error verbose
%{
#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

extern int yylineno;
extern FILE* yyin;

extern int yyparse();
extern int yylex();

void yyerror(const char* s);
%}

%union {
	int int_val;
	char* id_var_name;
}

%type <expression> expr_singleline basic_literal_value;
%type <statement> stmt root;
%type stmt_ends optEoL;

%token<int_val> INT_VALUE

%token<id_var_name> IDENTIFIER

%token END_OF_LINE

%left '='
%left '>' '<'

%left '+' '-'
%left '*' '/'
%right UNARY_MINUS UNARY_PLUS
%left '^'

%precedence IDENTIFIER

%start root

%%

root: stmt {printf("root 1\n");}
    ;
	
stmt: expr_singleline stmt_ends {printf("stmt 2\n");}
    ;		   
	
stmt_ends: END_OF_LINE {printf("stmt_ends 1\n");}
    | stmt_ends END_OF_LINE {printf("stmt_ends 2\n");}
    ;
	
optEoL: /*empty*/
	  | END_OF_LINE {printf("optEoL 1\n");}
	  ;
	
expr_singleline: basic_literal_value {printf("expr_single 0\n");}
    | '-' expr_singleline	%prec UNARY_MINUS {printf("expr_single 1\n");}
    | '+' expr_singleline	%prec UNARY_PLUS {printf("expr_single 2\n");}
    | expr_singleline '+' optEoL expr_singleline {printf("expr_single 3\n");}
    | expr_singleline '-' optEoL expr_singleline {printf("expr_single 4\n");}
    | expr_singleline '*' optEoL expr_singleline {printf("expr_single 5\n");}
    | expr_singleline '/' optEoL expr_singleline {printf("expr_single 6\n");}
    | expr_singleline '=' optEoL expr_singleline {printf("expr_single 8\n");}
    | expr_singleline '<' optEoL expr_singleline {printf("expr_single 9\n");}
    | expr_singleline '>' optEoL expr_singleline {printf("expr_single 10\n");}
    | expr_singleline '^' optEoL expr_singleline {printf("expr_single 11\n");}
    | IDENTIFIER {printf("expr_single 17\n");}
    ;

basic_literal_value: INT_VALUE {printf("basic_literal_value int\n");}
                   ;				   
%%
int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();
    }
    else {
        yyerror("not found file");
    }
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);	
}