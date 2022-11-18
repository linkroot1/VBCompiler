%error-verbose

%{
#include <stdio.h>
#include <stdlib.h>

#include "TreeNodes/Root.h"

extern int yylineno;
extern FILE* yyin;

extern RootNode * rootNode;

int yyparse();
int yylex();

void yyerror(char const *s) {
    fprintf(stderr, "Error: %s on line %d\n", s, yylineno);
    exit(1);
}
%}

%union {

}

%%

/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */



//-------------------------While/for stmt




//-------------------------If/Else stmt
//Сделать обработку переводов строки
IfStmt: If expr Then stmt
      | If expr Then stmt Else stmt End If
      | If expr Then stmt             Else stmt End If
      | If expr Then stmt ElseIf_list Else stmt End If



//--------------------------Switch stmt



%%

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