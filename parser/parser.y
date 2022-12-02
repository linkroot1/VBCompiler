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

%token Sub
%token End
%token Const
%token As
%token Dim
%token While
%token If
%token Then
%token Else
%token ElseIf
%token Select
%token Case
%token Is
%token To
%token NL

%type

%union {

}



%%

/* -------------------------------- Statements ------------------------------------------------------------------------------------------------------------------------ */
STMT: DeclStmt
    | ExecStmt
    | CaseStmt

//-------------------------Declaration STMT
DeclStmt: access Sub NAME STMT End Sub NL
        | Const NAME As type '=' VAL NL
        | Dim NAME NL
        | Dim NAME As type NL
        | Dim NAME '=' VAL NL
        | Dim NAME As type '=' VAL NL


//-----------------------------------------Executable Statements
ExecStmt: AssignStmt
        | WhileStmt
        | IfStmt
        | SelectStmt
        | ExecStmt ExecStmt


//-------------------------Assignment STMT
AssignStmt: VAR '=' VAL NL
          | VAR '=' math //(<--??)



//-------------------------While/for STMT
WhileStmt: While EXPR NL STMT End While NL


//-------------------------If/Else STMT
//Сделать обработку переводов строки
IfStmt: If EXPR Then NL STMT
      | If EXPR Then NL STMT Else NL STMT End If NL
      | If EXPR Then NL STMT             Else NL STMT End If NL
      | If EXPR Then NL STMT ElseIf_list Else NL STMT End If NL


ElseIf_list: ElseIf EXPR Then NL STMT
           | ElseIf_list ElseIf EXPR Then STMT


//--------------------------Select STMT
SelectStmt: Select Case VAR NL CaseStmt End Select NL


CaseStmt: Case EXPR STMT NL
        | Case Is EXPR STMT NL
        | Case EXPR To EXPR STMT NL
        | Case Else STMT NL
        | CaseStmt CaseStmt


//---------------------------Expression
EXPR: Operand
          |EXPR '+' EXPR
          | EXPR '-' EXPR
          | EXPR '*' EXPR
          | EXPR '/' EXPR
          | EXPR '=' EXPR
          | EXPR '<' EXPR
          | EXPR '>' EXPR
          | EXPR '^' EXPR
          | EXPR '\' EXPR
          | EXPR '<>' EXPR
          | EXPR '>=' EXPR
          | EXPR '<=' EXPR
          | EXPR '&' EXPR


Operand: BasicLiteral
       | FunctionLiteral


BasicLiteral: INT
            | STRING
            | BOOLEAN

FunctionLiteral: IDENTIFIER '(' EXPR ')'

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
