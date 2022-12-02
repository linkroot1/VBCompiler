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
STMT: DeclSTMT
    | ExecSTMT
    | CaseSTMT

//-------------------------Declaration STMT
DeclStmt: access Sub NAME STMT End Sub
        | Const NAME As type '=' VAL
        | Dim NAME
        | Dim NAME As type
        | Dim NAME '=' VAL
        | Dim NAME As type '=' VAL


//-----------------------------------------Executable Statements
ExecStmt: AssignSTMT
        | WhileSTMT
        | IfSTMT
        | SelectSTMT
        | ExecSTMT ExecSTMT


//-------------------------Assignment STMT
AssignStmt: VAR '=' VAL
          | VAR '=' math //(<--??)



//-------------------------While/for STMT
WhileStmt: While EXPR STMT End While


//-------------------------If/Else STMT
//������� ��������� ��������� ������
IfStmt: If EXPR Then STMT
      | If EXPR Then STMT Else STMT End If
      | If EXPR Then STMT             Else STMT End If
      | If EXPR Then STMT ElseIf_list Else STMT End If


ElseIf_list: ElseIf EXPR Then STMT
           | ElseIf_list ElseIf EXPR Then STMT


//--------------------------Select STMT
SelectStmt: Select Case VAR CaseSTMT End Select


CaseStmt: Case EXPR STMT
        | Case Is EXPR STMT
        | Case EXPR To EXPR STMT
        | Case Else STMT
        | CaseSTMT CaseSTMT


//---------------------------EXPRession
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

FunctionLiteral: Identifier '(' EXPR ')'

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
