%option noyywrap
%option caseless
%option never-interactive
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define YY_DECL int yylex()

int val(char c);
void remove_substr(char* str, const char* substr);
int HextoDeci(char *str);
int BintoDeci(char *str);

int result = 111;

%}
%x STRING_LITERAL
%x COMMENT
%x DATETIME


%%
%{
	char buf[100000];
	memset(buf, '\0', 100000);
%}

As {return AS;}
Boolean {return BOOLEAN;}
Case {return CASE;}
Const {return CONST;}
Dim {return DIM;}
Do {return DO;}
Double {return DOUBLE;}
Else {return ELSE;}
ElseIf {return ELSEIF;}
End {return END;}
EndIf {return ENDIF;}
For {return FOR;}
Friend {return FRIEND;}
Function {return FUNCTION;}
Integer {return INT;}
Module {return MODULE;}
Private {return PRIVATE;}
Protected {return PROTECTED;}
Public {return PUBLIC;}
Return {return RETURN;}
Select {return SELECT;}
Sub {return SUB;}
Then {return THEN;}
While {return WHILE;}

\= {return ASSIGN_EQUALS;}
\+ {return ARITHMETIC_PLUS;}
\- {return ARITHMETIC_MINUS;}
\^ {return EXPONENT;}
\* {return MULT;}
\/ {return ORD_DIVISION;}
\\ {return INT_DIVISION;}
\< {return LESS;}
\> {return MORE;}
\>\= {return LESS_OR_EQUAL;}
\<\= {return MORE_OR_EQUAL;}
\<\> {return NOT_EQUAL;}
\& {return CONCAT;}
\^\= {return ASSIGN_CONSTRUCT;}
\*\= {return ASSIGN_MULT;}
\/\= {return ASSIGN_ORD_DIV;}
\\\= {return ASSIGN_INT_DIV;}
\+\= {return ASSIGN_ADD;}
\-\= {return ASSIGN_SUB;}
\>\>= {return ASSIGN_LSHIFT;}
\<\<= {return ASSIGN_RSHIFT;}
\&\= {return ASSIGN_CONCAT;}

\' {BEGIN(COMMENT);}
<COMMENT>[^\n]+
<COMMENT>\n {BEGIN(INITIAL);}
<COMMENT><<EOF>> {BEGIN(INITIAL);}

# {BEGIN(DATETIME);}
<DATETIME>[^#\n]+  { strcat(buf, yytext); }
<DATETIME># {BEGIN(INITIAL); yylval.string_const=(char *)malloc(strlen(buf)+1); strcpy(yylval.datetime_val, buf); return DATETIME_VALUE;}



\" { buf[0] = 0; BEGIN(STRING_LITERAL);}
<STRING_LITERAL>[^"]+		{ strcat(buf, yytext); }
<STRING_LITERAL>""			{ strcat(buf, "\""); }
<STRING_LITERAL><<EOF>>		{  printf("\nError: unterminated string literal\n"); yyterminate();}
<STRING_LITERAL>\"			{  BEGIN(INITIAL); yylval.str_val=(char *)malloc(strlen(buf)+1); strcpy(yylval.str_val, buf); return STRING_VALUE;}

([+-]?[0-9](([Ee][+-])?([0-9]|_)+)?) {remove_substr(yytext, "_"); yylval.int_val = atoi(yytext); return INT_VALUE;}
([+-]?(&H)([0-9]+(([0-9]|_)+[0-9]+)*)) {remove_substr(yytext, "_"); remove_substr(yytext, "&H");  result = HextoDeci(yytext); return INT_VALUE;}
([+-]?(&B)([0-9]+(([0-9]|_)+[0-9]+)*)) {remove_substr(yytext, "_"); remove_substr(yytext, "&B"); result = BintoDeci(yytext); return INT_VALUE;}
[-+]?([0-9]+(\.[0-9]*)?|\.[0-9]+)([eE][-+]?[0-9]+)? {yylval.double_val = atof(yytext); return DOUBLE_VALUE;}

\"[^"]*\" {printf("\nString const: %s\n", yytext);}



True {yylval.bool_val = 1; return BOOLEAN_VALUE;}
False {yylval.bool_val = 0; return BOOLEAN_VALUE;}
\n+  {return END_OF_LINE;}

([a-zA-Z_])([a-zA-Z_0-9])* {yylval.id_name = yytext; return IDENTIFIER_VALUE;}
%%

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int BintoDeci(char *str)
{
	short i;
    int res = 0;

    for (i = 0; i < sizeof(long) * 8 && str[i]; ++i)
    {
        res <<= 1;
        res |= (str[i] - '0');
    }
    return res;
}

int HextoDeci(char *str)
{
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;


    for (i = len - 1; i >= 0; i--)
    {


        if (val(str[i]) >= 16)
        {
           printf("Invalid Number");
           return -1;
        }
 
        num += val(str[i]) * power;
        power = power * 16;
    }
 
    return num;
}


void remove_substr(char* str, const char* substr)
{
    char* begin = str;
    char* end = str;
    char* cur;
    const char* sub;

    while (*end)
    {
        for (sub = substr, cur = end; *sub && *cur && *sub == *cur; ++cur, ++sub);

        if (*sub == 0)
        {
            end = cur;
        }

        if (begin != end)
        {
            *begin = *end;
        }

        if (*sub != 0)
        {
            begin++;
            end++;
        }
    }
    *begin = 0;



}

// void main(int argc, char** argv){
//     yyin = fopen(argv[1], "r");
//     yylex();
//     return;
// }
