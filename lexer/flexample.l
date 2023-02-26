%option noyywrap
%option caseless
%option never-interactive
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

As {return yytokentype::AS;}
Boolean {return yytokentype::BOOLEAN;}
Case {return yytokentype::CASE;}
Const {return yytokentype::CONST;}
Dim {return yytokentype::DIM;}
Do {return yytokentype::DO;}
Double {return yytokentype::DOUBLE;}
Else {return yytokentype::ELSE;}
ElseIf {return yytokentype::ELSEIF;}
End {return yytokentype::END;}
EndIf {return yytokentype::ENDIF;}
For {return yytokentype::FOR;}
Friend {return yytokentype::FRIEND;}
Function {return yytokentype::FUNCTION;}
Integer {return yytokentype::INT;}
Module {return yytokentype::MODULE;}
Private {return yytokentype::PRIVATE;}
Protected {return yytokentype::PROTECTED;}
Public {return yytokentype::PUBLIC;}
Return {return yytokentype::RETURN;}
Select {return yytokentype::SELECT;}
Sub {return yytokentype::SUB;}
Then {return yytokentype::THEN;}
While {return yytokentype::WHILE;}

\= {return yytokentype::ASSIGN_EQUALS;}
\+ {return yytokentype::ARITHMETIC_PLUS;}
\- {return yytokentype::ARITHMETIC_MINUS;}
\^ {return yytokentype::EXPONENT;}
\* {return yytokentype::MULT;}
\/ {return yytokentype::ORD_DIVISION;}
\\ {return yytokentype::INT_DIVISION;}
\< {return yytokentype::LESS;}
\> {return yytokentype::MORE;}
\>\= {return yytokentype::LESS_OR_EQUAL;}
\<\= {return yytokentype::MORE_OR_EQUAL;}
\<\> {return yytokentype::NOT_EQUAL;}
\& {return yytokentype::CONCAT;}
\^\= {return yytokentype::ASSIGN_CONSTRUCT;}
\*\= {return yytokentype::ASSIGN_MULT;}
\/\= {return yytokentype::ASSIGN_ORD_DIV;}
\\\= {return yytokentype::ASSIGN_INT_DIV;}
\+\= {return yytokentype::ASSIGN_ADD;}
\-\= {return yytokentype::ASSIGN_SUB;}
\>\>= {return yytokentype::ASSIGN_LSHIFT;}
\<\<= {return yytokentype::ASSIGN_RSHIFT;}
\&\= {return yytokentype::ASSIGN_CONCAT;}

\' {BEGIN(COMMENT);}
<COMMENT>[^\n]+
<COMMENT>\n {BEGIN(INITIAL);}
<COMMENT><<EOF>> {BEGIN(INITIAL);}

# {BEGIN(DATETIME);}
<DATETIME>[^#\n]+  { strcat(buf, yytext); }
<DATETIME># {BEGIN(INITIAL); yylval.string_const=(char *)malloc(strlen(buf)+1); strcpy(yylval.datetime_val, buf); return yytokentype::DATETIME_VALUE;}



\" { buf[0] = 0; BEGIN(STRING_LITERAL);}
<STRING_LITERAL>[^"]+		{ strcat(buf, yytext); }
<STRING_LITERAL>""			{ strcat(buf, "\""); }
<STRING_LITERAL><<EOF>>		{  printf("\nError: unterminated string literal\n"); yyterminate();}
<STRING_LITERAL>\"			{  BEGIN(INITIAL); yylval.str_val=(char *)malloc(strlen(buf)+1); strcpy(yylval.str_val, buf); return yytokentype::STRING_VALUE;}

([+-]?[0-9](([Ee][+-])?([0-9]|_)+)?) {remove_substr(yytext, "_"); yylval.int_val = atoi(yytext); return yytokentype::INT_VALUE;}
([+-]?(&H)([0-9]+(([0-9]|_)+[0-9]+)*)) {remove_substr(yytext, "_"); remove_substr(yytext, "&H");  result = HextoDeci(yytext); return yytokentype::INT_VALUE;}
([+-]?(&B)([0-9]+(([0-9]|_)+[0-9]+)*)) {remove_substr(yytext, "_"); remove_substr(yytext, "&B"); result = BintoDeci(yytext); return yytokentype::INT_VALUE;}
[-+]?([0-9]+(\.[0-9]*)?|\.[0-9]+)([eE][-+]?[0-9]+)? {yylval.double_val = atof(yytext); return yytokentype::DOUBLE_VALUE;}

\"[^"]*\" {printf("\nString const: %s\n", yytext);}



True {yylval.bool_val = 1; return yytokentype::BOOLEAN_VALUE}
False {yylval.bool_val = 0; return yytokentype::BOOLEAN_VALUE}
\n+  {return yytokentype::END_OF_LINE;}

([a-zA-Z_])([a-zA-Z_0-9])* {yylval.id_name = yytext; return yytokentype::IDENTIFIER_VALUE}
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
