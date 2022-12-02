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

%token INT
%token INT2
%token INT16
%token STRING
%token BOOLEAN
%token Identifier

%type

%union {

}



%%

/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */
stmt: DeclStmt
    | ExecStmt
    | CaseStmt

//-------------------------Declaration stmt
DeclStmt: access Sub name stmt End Sub
        | Const name As type '=' val
        | Dim name
        | Dim name As type
        | Dim name '=' val
        | Dim name As type '=' val


//-----------------------------------------Executable Statements
ExecStmt: AssignStmt
        | WhileStmt
        | IfStmt
        | SelectStmt
        | ExecStmt ExecStmt


//-------------------------Assignment stmt
AssignStmt: var '=' val
          | var '=' math //(<--??)



//-------------------------While/for stmt
WhileStmt: While expr stmt End While


//-------------------------If/Else stmt
//Сделать обработку переводов строки
IfStmt: If expr Then stmt
      | If expr Then stmt Else stmt End If
      | If expr Then stmt             Else stmt End If
      | If expr Then stmt ElseIf_list Else stmt End If


ElseIf_list: ElseIf expr Then stmt
           | ElseIf_list ElseIf expr Then stmt


//--------------------------Select stmt
SelectStmt: Select Case var CaseStmt End Select


CaseStmt: Case expr stmt
        | Case Is expr stmt
        | Case expr To expr stmt
        | Case Else stmt
        | CaseStmt CaseStmt


//---------------------------Expression
expr: Operand
          |expr '+' expr
          | expr '-' expr
          | expr '*' expr
          | expr '/' expr
          | expr '=' expr
          | expr '<' expr
          | expr '>' expr
          | expr '^' expr
          | expr '\' expr
          | expr '<>' expr
          | expr '>=' expr
          | expr '<=' expr
          | expr '&' expr


Operand: BasicLiteral
       | FunctionLiteral


BasicLiteral: INT
            | STRING
            | BOOLEAN

FunctionLiteral: Identifier '(' expr ')'

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
