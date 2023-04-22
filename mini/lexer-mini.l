%option nounistd
%option noyywrap
%option case-insensitive

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parcer-mini.tab.h"

#pragma warning(disable : 4996)
#define YY_DECL int yylex()

int result = 0;

%}
%x STRING_LITERAL

%%
%{
	char buf[100000];
	memset(buf, '\0', 100000);
%}

"+"                 { return '+'; }
"-"                 { return '-'; }
"*"                 { return '*'; }
"/"                 { return '/'; }
"="                 { return '='; }
"<"                 { return '<'; }
">"                 { return '>'; }
"^"                 { return '^'; }

([0-9]([0-9]+)?)  {yylval.int_val = atoi(yytext); return INT_VALUE;}

\"[^"]*\" {printf("\nString const: %s\n", yytext);}

([a-zA-Z_])([a-zA-Z_0-9])* {yylval.id_var_name = (char *) malloc(strlen(yytext)+1); strcpy(yylval.id_var_name, yytext); return IDENTIFIER;}

\n+  {return END_OF_LINE;}

<<EOF>> { static int once = 0; return once++ ? 0 : END_OF_LINE;}
%%