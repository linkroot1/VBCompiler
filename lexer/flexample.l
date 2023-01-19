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


AddHandler 			//{printf("\nReserved keyword AddHandler: \n");}
Alias 			//{printf("\nReserved keyword Alias: \n");}
AddressOf 			//{printf("\nReserved keyword AddressOf: \n");}
And 			//{printf("\nReserved keyword And: \n");}
AndAlso 			//{printf("\nReserved keyword AndAlso: \n");}
As {return yytokentype::AS;} 			//{printf("\nReserved keyword As: \n");}
Boolean {return yytokentype::BOOLEAN;} 			//{printf("\nReserved keyword Boolean: \n");}
ByRef 			//{printf("\nReserved keyword ByRef: \n");}
Byte 			//{printf("\nReserved keyword Byte: \n");}
ByVal 			//{printf("\nReserved keyword ByVal: \n");}
Call 			//{printf("\nReserved keyword Call: \n");}
Case {return yytokentype::CASE;} 			//{printf("\nReserved keyword Case: \n");}
Catch 			//{printf("\nReserved keyword Catch: \n");}
CBool 			//{printf("\nReserved keyword CBool: \n");}
CByte 			//{printf("\nReserved keyword CByte: \n");}
CChar 			//{printf("\nReserved keyword CChar: \n");}
CDate 			//{printf("\nReserved keyword CDate: \n");}
CDbl 			//{printf("\nReserved keyword CDbl: \n");}
CDec 			//{printf("\nReserved keyword CDec: \n");}
Char 			//{printf("\nReserved keyword Char: \n");}
CInt 			//{printf("\nReserved keyword CInt: \n");}
Class 			//{printf("\nReserved keyword Class: \n");}
CLng 			//{printf("\nReserved keyword CLng: \n");}
CObj 			//{printf("\nReserved keyword CObj: \n");}
Const {return yytokentype::CONST;} 			//{printf("\nReserved keyword Const: \n");}
Continue 			//{printf("\nReserved keyword Continue: \n");}
CSByte 			//{printf("\nReserved keyword CSByte: \n");}
CShort 			//{printf("\nReserved keyword CShort: \n");}
CSng 			//{printf("\nReserved keyword CSng: \n");}
CStr 			//{printf("\nReserved keyword CStr: \n");}
CType 			//{printf("\nReserved keyword CType: \n");}
CUInt 			//{printf("\nReserved keyword CUInt: \n");}
CULng 			//{printf("\nReserved keyword CULng: \n");}
CUShort 			//{printf("\nReserved keyword CUShort: \n");}
Date 			//{printf("\nReserved keyword Date: \n");}
Decimal 			//{printf("\nReserved keyword Decimal: \n");}
Declare 			//{printf("\nReserved keyword Declare: \n");}
Default 			//{printf("\nReserved keyword Default: \n");}
Delegate 			//{printf("\nReserved keyword Delegate: \n");}
Dim {return yytokentype::DIM;} 			//{printf("\nReserved keyword Dim: \n");}
DirectCast 			//{printf("\nReserved keyword DirectCast: \n");}
Do 			//{printf("\nReserved keyword Do: \n");}
Double {return yytokentype::DOUBLE;} 			//{printf("\nReserved keyword Double: \n");}
Each 			//{printf("\nReserved keyword Each: \n");}
Else {return yytokentype::ELSE;} 			//{printf("\nReserved keyword Else: \n");}
ElseIf {return yytokentype::ELSEIF;} 			//{printf("\nReserved keyword ElseIf: \n");}
End {return yytokentype::END;} 			//{printf("\nReserved keyword End: \n");}
EndIf {return yytokentype::ENDIF;} 			//{printf("\nReserved keyword EndIf: \n");}
Enum 			//{printf("\nReserved keyword Enum: \n");}
Erase 			//{printf("\nReserved keyword Erase: \n");}
Error 			//{printf("\nReserved keyword Error: \n");}
Event 			//{printf("\nReserved keyword Event: \n");}
Exit 			//{printf("\nReserved keyword Exit: \n");}
Finally 			//{printf("\nReserved keyword Finally: \n");}
For {return yytokentype::FOR;} 			//{printf("\nReserved keyword For: \n");}
Friend 			//{printf("\nReserved keyword Friend: \n");}
Function {return yytokentype::SELECT;}
Get 			//{printf("\nReserved keyword Get: \n");}
GetType 			//{printf("\nReserved keyword GetType: \n");}
GetXMLNamespace 			//{printf("\nReserved keyword: \n");}
Global 			//{printf("\nReserved keyword GetXMLNamespace: \n");}
GoSub 			//{printf("\nReserved keyword GoSub: \n");}
GoTo 			//{printf("\nReserved keyword GoTo: \n");}
Handles 			//{printf("\nReserved keyword Handles: \n");}
If 			//{printf("\nReserved keyword If: \n");}
Implements 			//{printf("\nReserved keyword Implements: \n");}
Imports 			//{printf("\nReserved keyword Imports: \n");}
In 			//{printf("\nReserved keyword In: \n");}
Inherits 			//printf("\nReserved keyword Inherits: \n");}
Integer 			//{printf("\nReserved keyword Integer: \n");}
Interface 			//{printf("\nReserved keyword Interface: \n");}
Is 			//{printf("\nReserved keyword Is: \n");}
IsNot 			//{printf("\nReserved keyword IsNot: \n");}
Let 			//{printf("\nReserved keyword Let: \n");}
Lib 			//{printf("\nReserved keyword Lib: \n");}
Like 			//{printf("\nReserved keyword Like: \n");}
Long 			//{printf("\nReserved keyword Long: \n");}
Loop 			//{printf("\nReserved keyword Loop: \n");}
Me 			//{printf("\nReserved keyword Me: \n");}
Mod 			//{printf("\nReserved keyword Mod: \n");}
Module {return yytokentype::MODULE;}
MustInherit 			//{printf("\nReserved keyword MustInherit: \n");}
MustOverride 			//{printf("\nReserved keyword MustOverride: \n");}
MyBase 			//{printf("\nReserved keyword MyBase: \n");}
MyClass 			//{printf("\nReserved keyword MyClass: \n");}
NameOf 			//{printf("\nReserved keyword NameOf: \n");}
Namespace 			//{printf("\nReserved keyword Namespace: \n");}
Narrowing 			//{printf("\nReserved keyword Narrowing: \n");}
New 			//{printf("\nReserved keyword New: \n");}
Next 			//{printf("\nReserved keyword Next: \n");}
Not 			//{printf("\nReserved keyword Not: \n");}
Nothing 			//{printf("\nReserved keyword Nothing: \n");}
NotInheritable 			//{printf("\nReserved keyword NotInheritable: \n");}
NotOverridable 			//{printf("\nReserved keyword NotOverridable: \n");}
Object 			//{printf("\nReserved keyword Object: \n");}
Of 			//{printf("\nReserved keyword Of: \n");}
On 			//{printf("\nReserved keyword On: \n");}
Operator 			//printf("\nReserved keyword Operator: \n");}
Option 			//{printf("\nReserved keyword Option: \n");}
Optional 			//{printf("\nReserved keyword Optional: \n");}
Or 			//{printf("\nReserved keyword Or: \n");}
OrElse 			//{printf("\nReserved keyword OrElse: \n");}
Out 			//{printf("\nReserved keyword Out: \n");}
Overloads 			//{printf("\nReserved keyword Overloads: \n");}
Overridable 			//{printf("\nReserved keyword Overridable: \n");}
Overrides 			//{printf("\nReserved keyword Overrides: \n");}
ParamArray 			//{printf("\nReserved keyword ParamArray: \n");}
Partial 			//{printf("\nReserved keyword Partial: \n");}
Private 			//{printf("\nReserved keyword Private: \n");}
Property 			//{printf("\nReserved keyword Property: \n");}
Protected 			//{printf("\nReserved keyword Protected: \n");}
Public 			//{printf("\nReserved keyword Public: \n");}
RaiseEvent 			//{printf("\nReserved keyword RaiseEvent: \n");}
ReadOnly 			//{printf("\nReserved keyword ReadOnly: \n");}
ReDim 			//{printf("\nReserved keyword ReDim: \n");}
REM 			//{printf("\nReserved keyword REM: \n");}
RemoveHandler 			//{printf("\nReserved keyword RemoveHandler: \n");}
Resume 			//{printf("\nReserved keyword Resume: \n");}
Return {return yytokentype::RETURN;}
SByte 			//{printf("\nReserved keyword SByte: \n");}
Select {return yytokentype::SELECT;} 			//{printf("\nReserved keyword Select: \n");}
Set 			//{printf("\nReserved keyword Set: \n");}
Shadows 			//{printf("\nReserved keyword Shadows: \n");}
Shared 			//{printf("\nReserved keyword Shared: \n");}
Short 			//{printf("\nReserved keyword Short: \n");}
Single 			//{printf("\nReserved keyword Single: \n");}
Static 			//{printf("\nReserved keyword Static: \n");}
Step 			//{printf("\nReserved keyword Step: \n");}
Stop 			//{printf("\nReserved keyword Stop: \n");}
String 			//{printf("\nReserved keyword String: \n");}
Structure 			//{printf("\nReserved keyword Structure: \n");}
Sub {return yytokentype::SUB;} 			//{printf("\nReserved keyword Sub: \n");}
SyncLock 			//{printf("\nReserved keyword SyncLock: \n");}
Then {return yytokentype::THEN;} 			//{printf("\nReserved keyword Then: \n");}
Throw 			//{printf("\nReserved keyword Throw: \n");}
To 			//{printf("\nReserved keyword To: \n");}
Try 			//{printf("\nReserved keyword Try: \n");}
TryCast 			//{printf("\nReserved keyword TryCast: \n");}
TypeOf 			//{printf("\nReserved keyword TypeOf: \n");}
Is 			//{printf("\nReserved keyword Is: \n");}
UInteger 			//{printf("\nReserved keyword UInteger: \n");}
ULong 			//{printf("\nReserved keyword ULong: \n");}
UShort 			//{printf("\nReserved keyword UShort: \n");}
Using 			//{printf("\nReserved keyword Using: \n");}
Variant 			//{printf("\nReserved keyword Variant: \n");}
Wend 			//{printf("\nReserved keyword Wend: \n");}
When 			//{printf("\nReserved keyword When: \n");}
While {return yytokentype::WHILE;} 			//{printf("\nReserved keyword While: \n");}
Widening 			//{printf("\nReserved keyword Widening: \n");}
With 			//{printf("\nReserved keyword With: \n");}
WithEvents 			//{printf("\nReserved keyword WithEvents: \n");}
WriteOnly 			//{printf("\nReserved keyword WriteOnly: \n");}
Xor 			//{printf("\nReserved keyword Xor: \n");}
#Const 			//{printf("\nReserved keyword #Const: \n");}
#Else 			//{printf("\nReserved keyword #Else: \n");}
#ElseIf 			//{printf("\nReserved keyword #ElseIf: \n");}
#End 			//{printf("\nReserved keyword #End: \n");}
#If 			//{printf("\nReserved keyword #If: \n");}

\" { BEGIN(STRING_LITERAL);}
<STRING_LITERAL>[^"]+		{yylval.str_val = yytext;}//{ printf("\nString literal: %s\n", yytext); }
<STRING_LITERAL>""			{yylval.str_val = "\n";}//{  printf("\nString literal: \"\n");}
<STRING_LITERAL><<EOF>>		{  printf("\nError: unterminated string literal\n"); yyterminate();}//Error
<STRING_LITERAL>\"			{  BEGIN(INITIAL);}

\= {return yytokentype::ASSIGN_EQUALS;} 			//{printf("\nAssignment operator: \n");}
\+ {return yytokentype::ARITHMETIC_PLUS;} 			//{printf("\nAddition operator: \n");}
\- {return yytokentype::ARITHMETIC_MINUS;} 			//{printf("\nSubtraction operator: \n");}
\^ {return yytokentype::EXPONENT;} 			//{printf("\nExponentiation operator: \n");}
\* {return yytokentype::MULT;}
\/ {return yytokentype::ORD_DIVISION;} 			//{printf("\nOrdinary division operator: \n");}
\\ {return yytokentype::INT_DIVISION;} 			//{printf("\nInteger division operator: \n");}
\< {return yytokentype::LESS;} 			//{printf("\nLess operator: \n");}
\> {return yytokentype::MORE;} 			//{printf("\nMore operator: \n");}
\>\= {return yytokentype::LESS_OR_EQUAL;} 			//{printf("\nMore or equal operator: \n");}
\<\= {return yytokentype::MORE_OR_EQUAL;} 			//{printf("\nLess or equal operator: \n");}
\<\> {return yytokentype::NOT_EQUAL;} 			//{printf("\nNot equal operator: \n");}
\& {return yytokentype::CONCAT;} 			//{printf("\nConcathenation operator: \n");}
\^\= {return yytokentype::ASSIGN_CONSTRUCT;} 			//{printf("\nAssignment after construction operator: \n");}
\*\= {return yytokentype::ASSIGN_MULT;} 			//{printf("\nAssignment after multiplication operator: \n");}
\/\= {return yytokentype::ASSIGN_ORD_DIV;} 			//{printf("\nAssignment after division the operator: \n");}
\\\= {return yytokentype::ASSIGN_INT_DIV;} 			//{printf("\nAssignment after integer division operator: \n");}
\+\= {return yytokentype::ASSIGN_ADD;} 			//{printf("\nAssignment after addition operator: \n");}
\-\= {return yytokentype::ASSIGN_SUB;} 			//{printf("\nAssignment after subtraction operator: \n");}
\>\>= {return yytokentype::ASSIGN_LSHIFT;} 			//{printf("\nAssignment after a shift to the right operator: \n");}
\<\<= {return yytokentype::ASSIGN_RSHIFT;} 			//{printf("\nAssignment after left shift operator: \n");}
\&\= {return yytokentype::ASSIGN_CONCAT;} 			//{printf("\nAssignment after concatenation of two values operator: \n");}




\' {BEGIN(COMMENT);}
<COMMENT>[^\n]+  //{printf("\nComment: %s\n", yytext);}
<COMMENT>\n {BEGIN(INITIAL);}
<COMMENT><<EOF>> {BEGIN(INITIAL);}

# {BEGIN(DATETIME);}
<DATETIME>[^#\n]+  {yylval.datetime_val = yytext;}//{printf("\nDatetime: %s\n", yytext); }
<DATETIME># {BEGIN(INITIAL);}


([+-]?[0-9](([Ee][+-])?([0-9]|_)+)?) {remove_substr(yytext, "_"); yylval.int_val = atoi(yytext);}//printf("\nInteger const: %d\n", atoi(yytext));}
([+-]?(&H)([0-9]+(([0-9]|_)+[0-9]+)*)) {remove_substr(yytext, "_"); remove_substr(yytext, "&H");  result = HextoDeci(yytext); printf("\nInteger16 const: %d\n", result);}
([+-]?(&B)([0-9]+(([0-9]|_)+[0-9]+)*)) {remove_substr(yytext, "_"); remove_substr(yytext, "&B"); result = BintoDeci(yytext); printf("\nInteger2 const: %d\n", result);}
[-+]?([0-9]+(\.[0-9]*)?|\.[0-9]+)([eE][-+]?[0-9]+)? {yylval.double_val = atof(yytext);}//printf("\nSingle/double const: %f\n", atof(yytext));}
\"[^"]*\" {printf("\nString const: %s\n", yytext);}
True {yylval.bool_val = 1;}//{printf("\nBoolean const true: %d\n", 1);}
False {yylval.bool_val = 0;}//{printf("\nBoolean const false: %d\n", 0);}
\n+  {printf("\nEnd of line:");}



([a-zA-Z_])([a-zA-Z_0-9])* {yylval.id_name = yytext;}//{ printf("\nIdentifier: %s\n", yytext);}
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

void main(int argc, char** argv){
    yyin = fopen(argv[1], "r");
    yylex();
    return;
}
