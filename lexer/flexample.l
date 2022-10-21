%option noyywrap
%option never-interactive
%{
#include <stdio.h>

%}
%x STRING_LITERAL
%x COMMENT
%x DATETIME

%%



AddHandler {printf("\nReserved keyword AddHandler: \n");}
Alias {printf("\nReserved keyword Alias: \n");}
AddressOf {printf("\nReserved keyword AddressOf: \n");}
And {printf("\nReserved keyword And: \n");}
AndAlso {printf("\nReserved keyword AndAlso: \n");}
As {printf("\nReserved keyword As: \n");}
Boolean {printf("\nReserved keyword Boolean: \n");}
ByRef {printf("\nReserved keyword ByRef: \n");}
Byte {printf("\nReserved keyword Byte: \n");}
ByVal {printf("\nReserved keyword ByVal: \n");}
Call {printf("\nReserved keyword Call: \n");}
Case {printf("\nReserved keyword Case: \n");}
Catch {printf("\nReserved keyword Catch: \n");}
CBool {printf("\nReserved keyword CBool: \n");}
CByte {printf("\nReserved keyword CByte: \n");}
CChar {printf("\nReserved keyword CChar: \n");}
CDate {printf("\nReserved keyword CDate: \n");}
CDbl {printf("\nReserved keyword CDbl: \n");}
CDec {printf("\nReserved keyword CDec: \n");}
Char {printf("\nReserved keyword Char: \n");}
CInt {printf("\nReserved keyword CInt: \n");}
Class {printf("\nReserved keyword Class: \n");}
CLng {printf("\nReserved keyword CLng: \n");}
CObj {printf("\nReserved keyword CObj: \n");}
Const {printf("\nReserved keyword Const: \n");}
Continue {printf("\nReserved keyword Continue: \n");}
CSByte {printf("\nReserved keyword CSByte: \n");}
CShort {printf("\nReserved keyword CShort: \n");}
CSng {printf("\nReserved keyword CSng: \n");}
CStr {printf("\nReserved keyword CStr: \n");}
CType {printf("\nReserved keyword CType: \n");}
CUInt {printf("\nReserved keyword CUInt: \n");}
CULng {printf("\nReserved keyword CULng: \n");}
CUShort {printf("\nReserved keyword CUShort: \n");}
Date {printf("\nReserved keyword Date: \n");}
Decimal {printf("\nReserved keyword Decimal: \n");}
Declare {printf("\nReserved keyword Declare: \n");}
Default {printf("\nReserved keyword Default: \n");}
Delegate {printf("\nReserved keyword Delegate: \n");}
Dim {printf("\nReserved keyword Dim: \n");}
DirectCast {printf("\nReserved keyword DirectCast: \n");}
Do {printf("\nReserved keyword Do: \n");}
Double {printf("\nReserved keyword Double: \n");}
Each {printf("\nReserved keyword Each: \n");}
Else {printf("\nReserved keyword Else: \n");}
ElseIf {printf("\nReserved keyword ElseIf: \n");}
End {printf("\nReserved keyword End: \n");}
EndIf {printf("\nReserved keyword EndIf: \n");}
Enum {printf("\nReserved keyword Enum: \n");}
Erase {printf("\nReserved keyword Erase: \n");}
Error {printf("\nReserved keyword Error: \n");}
Event {printf("\nReserved keyword Event: \n");}
Exit {printf("\nReserved keyword Exit: \n");}
Finally {printf("\nReserved keyword Finally: \n");}
For {printf("\nReserved keyword For: \n");}
Friend {printf("\nReserved keyword Friend: \n");}
Function {printf("\nReserved keyword Function: \n");}
Get {printf("\nReserved keyword Get: \n");}
GetType {printf("\nReserved keyword GetType: \n");}
GetXMLNamespace {printf("\nReserved keyword: \n");}
Global {printf("\nReserved keyword GetXMLNamespace: \n");}
GoSub {printf("\nReserved keyword GoSub: \n");}
GoTo {printf("\nReserved keyword GoTo: \n");}
Handles {printf("\nReserved keyword Handles: \n");}
If {printf("\nReserved keyword If: \n");}
Implements {printf("\nReserved keyword Implements: \n");}
Imports {printf("\nReserved keyword Imports: \n");}
In {printf("\nReserved keyword In: \n");}
Inherits {printf("\nReserved keyword Inherits: \n");}
Integer {printf("\nReserved keyword Integer: \n");}
Interface {printf("\nReserved keyword Interface: \n");}
Is {printf("\nReserved keyword Is: \n");}
IsNot {printf("\nReserved keyword IsNot: \n");}
Let {printf("\nReserved keyword Let: \n");}
Lib {printf("\nReserved keyword Lib: \n");}
Like {printf("\nReserved keyword Like: \n");}
Long {printf("\nReserved keyword Long: \n");}
Loop {printf("\nReserved keyword Loop: \n");}
Me {printf("\nReserved keyword Me: \n");}
Mod {printf("\nReserved keyword Mod: \n");}
Module {printf("\nReserved keyword Module: \n");}
MustInherit {printf("\nReserved keyword MustInherit: \n");}
MustOverride {printf("\nReserved keyword MustOverride: \n");}
MyBase {printf("\nReserved keyword MyBase: \n");}
MyClass {printf("\nReserved keyword MyClass: \n");}
NameOf {printf("\nReserved keyword NameOf: \n");}
Namespace {printf("\nReserved keyword Namespace: \n");}
Narrowing {printf("\nReserved keyword Narrowing: \n");}
New {printf("\nReserved keyword New: \n");}
Next {printf("\nReserved keyword Next: \n");}
Not {printf("\nReserved keyword Not: \n");}
Nothing {printf("\nReserved keyword Nothing: \n");}
NotInheritable {printf("\nReserved keyword NotInheritable: \n");}
NotOverridable {printf("\nReserved keyword NotOverridable: \n");}
Object {printf("\nReserved keyword Object: \n");}
Of {printf("\nReserved keyword Of: \n");}
On {printf("\nReserved keyword On: \n");}
Operator {printf("\nReserved keyword Operator: \n");}
Option {printf("\nReserved keyword Option: \n");}
Optional {printf("\nReserved keyword Optional: \n");}
Or {printf("\nReserved keyword Or: \n");}
OrElse {printf("\nReserved keyword OrElse: \n");}
Out {printf("\nReserved keyword Out: \n");}
Overloads {printf("\nReserved keyword Overloads: \n");}
Overridable {printf("\nReserved keyword Overridable: \n");}
Overrides {printf("\nReserved keyword Overrides: \n");}
ParamArray {printf("\nReserved keyword ParamArray: \n");}
Partial {printf("\nReserved keyword Partial: \n");}
Private {printf("\nReserved keyword Private: \n");}
Property {printf("\nReserved keyword Property: \n");}
Protected {printf("\nReserved keyword Protected: \n");}
Public {printf("\nReserved keyword Public: \n");}
RaiseEvent {printf("\nReserved keyword RaiseEvent: \n");}
ReadOnly {printf("\nReserved keyword ReadOnly: \n");}
ReDim {printf("\nReserved keyword ReDim: \n");}
REM {printf("\nReserved keyword REM: \n");}
RemoveHandler {printf("\nReserved keyword RemoveHandler: \n");}
Resume {printf("\nReserved keyword Resume: \n");}
Return {printf("\nReserved keyword Return: \n");}
SByte {printf("\nReserved keyword SByte: \n");}
Select {printf("\nReserved keyword Select: \n");}
Set {printf("\nReserved keyword Set: \n");}
Shadows {printf("\nReserved keyword Shadows: \n");}
Shared {printf("\nReserved keyword Shared: \n");}
Short {printf("\nReserved keyword Short: \n");}
Single {printf("\nReserved keyword Single: \n");}
Static {printf("\nReserved keyword Static: \n");}
Step {printf("\nReserved keyword Step: \n");}
Stop {printf("\nReserved keyword Stop: \n");}
String {printf("\nReserved keyword String: \n");}
Structure {printf("\nReserved keyword Structure: \n");}
Sub {printf("\nReserved keyword Sub: \n");}
SyncLock {printf("\nReserved keyword SyncLock: \n");}
Then {printf("\nReserved keyword Then: \n");}
Throw {printf("\nReserved keyword Throw: \n");}
To {printf("\nReserved keyword To: \n");}
Try {printf("\nReserved keyword Try: \n");}
TryCast {printf("\nReserved keyword TryCast: \n");}
TypeOf {printf("\nReserved keyword TypeOf: \n");}
Is {printf("\nReserved keyword Is: \n");}
UInteger {printf("\nReserved keyword UInteger: \n");}
ULong {printf("\nReserved keyword ULong: \n");}
UShort {printf("\nReserved keyword UShort: \n");}
Using {printf("\nReserved keyword Using: \n");}
Variant {printf("\nReserved keyword Variant: \n");}
Wend {printf("\nReserved keyword Wend: \n");}
When {printf("\nReserved keyword When: \n");}
While {printf("\nReserved keyword While: \n");}
Widening {printf("\nReserved keyword Widening: \n");}
With {printf("\nReserved keyword With: \n");}
WithEvents {printf("\nReserved keyword WithEvents: \n");}
WriteOnly {printf("\nReserved keyword WriteOnly: \n");}
Xor {printf("\nReserved keyword Xor: \n");}
#Const {printf("\nReserved keyword #Const: \n");}
#Else {printf("\nReserved keyword #Else: \n");}
#ElseIf {printf("\nReserved keyword #ElseIf: \n");}
#End {printf("\nReserved keyword #End: \n");}
#If {printf("\nReserved keyword #If: \n");}

\" { BEGIN(STRING_LITERAL);}
<STRING_LITERAL>[^"]+   { printf("\nString literal: %s\n", yytext); }
<STRING_LITERAL>""             {  printf("\nString literal: \"\n");}
<STRING_LITERAL><<EOF>>            {  BEGIN(INITIAL);}
<STRING_LITERAL>\"             {  BEGIN(INITIAL);}

\= {printf("\nAssignment operator: \n");}
\+ {printf("\nAddition operator: \n");}
\- {printf("\nSubtraction operator: \n");}
\^ {printf("\nExponentiation operator: \n");}
\/ {printf("\nOrdinary division operator: \n");}
\\ {printf("\nInteger division operator: \n");}
\< {printf("\nLess operator: \n");}
\> {printf("\nMore operator: \n");}
\>\= {printf("\nMore or equal operator: \n");}
\<\= {printf("\nLess or equal operator: \n");}
\<\> {printf("\nNot equal operator: \n");}
\& {printf("\nConcathenation operator: \n");}
\^\= {printf("\nAssignment after construction operator: \n");}
\*\= {printf("\nAssignment after multiplication operator: \n");}
\/\= {printf("\nAssignment after division the operator: \n");}
\\\= {printf("\nAssignment after integer division operator: \n");}
\+\= {printf("\nAssignment after addition operator: \n");}
\-\= {printf("\nAssignment after subtraction operator: \n");}
\>\>= {printf("\nAssignment after a shift to the right operator: \n");}
\<\<= {printf("\nAssignment after left shift operator: \n");}
\&\= {printf("\nAssignment after concatenation of two values operator: \n");}




\' {BEGIN(COMMENT);}
<COMMENT>[^\n]+  {printf("\nComment: %s\n", yytext);}
<COMMENT>\n {BEGIN(INITIAL);}
<COMMENT><<EOF>> {BEGIN(INITIAL);}

# {BEGIN(DATETIME);}
<DATETIME>[^#\n]+  {printf("\Datetime: %s\n", yytext); }
<DATETIME># {BEGIN(INITIAL);}

([+-]?[0-9](([Ee][+-])?([0-9]|_)+)?)|([+-]?(&H|&B)([0-9]+(([0-9]|_)+[0-9]+)*)) {printf("\nInteger const: %s\n", yytext);}
[-+]?([0-9]+(\.[0-9]*)?|\.[0-9]+)([eE][-+]?[0-9]+)? {printf("\nSingle/double const: %s\n",  yytext);}
\"[^"]*\" {printf("\nString const: %s\n", yytext);}
True {printf("\nBoolean const true: %s\n", yytext);}
False {printf("\nBoolean const false: %s\n", yytext);}
\n  {printf("\nEnd of line:");}



([a-zA-Z_])([a-zA-Z_0-9])* { printf("\nIdentifier: %s\n", yytext);}
%%

void main(int argc, char** argv){
    yyin = fopen(argv[1], "r");
    yylex();
    return;
}
