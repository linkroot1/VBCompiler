#pragma once

typedef struct ProgramItemList ProgramItemList;
typedef struct ProgramItemListNotEmpty ProgramItemListNotEmpty;
typedef struct ProgramItem ProgramItem;
typedef struct Module Module;
typedef struct FunctionOrSubList FunctionOrSubList;
typedef struct FunctionOrSub FunctionOrSub;
typedef struct Function Function;
typedef struct SubBloc SubBloc;
typedef struct ParameterListOrEmpty ParameterListOrEmpty;
typedef struct ParameterListWithType ParameterListWithType;
typedef struct ParameterListWithoutType ParameterListWithoutType;;
typedef struct ParameterWithType ParameterWithType;
typedef struct ParameterWithoutType ParameterWithoutType;
typedef struct StmtList StmtList;
typedef struct Statement Statement;
typedef struct StatementSingle StatementSingle;
typedef struct StatementMulti StatementMulti;
typedef struct DeclStmt DeclStmt;
typedef struct VarName VarName;
typedef struct WhileStmt WhileStmt;
typedef struct DoLoopStmt DoLoopStmt;
typedef struct DoLoopCondition DoLoopCondition;
typedef struct ForLoopStmt ForLoopStmt;
typedef struct ForEachLoopStmt ForEachLoopStmt;
typedef struct IfStmtMulti IfStmtMulti;
typedef struct ElseIfList ElseIfList;
typedef struct ElseIf ElseIf;
typedef struct IfStmtSingle IfStmtSingle;
typedef struct SelectStmt SelectStmt;
typedef struct CaseList CaseList;
typedef struct CaseStmt CaseStmt;
typedef struct Expression Expression;
typedef struct ExpressionList ExpressionList;
typedef struct ReturnStmt ReturnStmt;


typedef enum StmtType StmtType;
typedef enum ExprType ExprType;
typedef enum VarType VarType;

typedef union StmtValue StmtValue;
typedef union StmtMultiValue StmtMultiValue;
typedef union StmtSingleValue StmtSingleValue;
typedef union Value Value;


//----------------- Unions
union StmtValue
{
	StatementSingle* statementSingle;
	StatementMulti* statementMulti;
};

union Value
{
	int int_val;
	double double_val;
	char char_val;
	char* string_val;
};

union StmtSingleValue
{
	IfStmtSingle* ifStmtSingle;
	DeclStmt* declStmtSingle;
	Expression* expression;
	ReturnStmt* returnStmt;
};

union StmtMultiValue
{
	IfStmtMulti* ifStmtMulti;
	DeclStmt* declStmtMulti;
	Expression* expression;
	WhileStmt* whileStmt;
	DoLoopStmt* doLoopStmt;
	ForLoopStmt* forLoopStmt;
	ForEachLoopStmt* forEachLoopStmt;
	SelectStmt* selectStmt;
};


//----------------- Enums
enum StmtType
{
	ST_MULTI,
	ST_SINGLE,
	ST_IF_SINGLE,
	ST_IF_MULTI,
	ST_DECL,
	EXPR,
	ST_WHILE,
	ST_DOLOOP,
	ST_FORLOOP,
	ST_FOREACHLOOP,
	ST_SELECT,
	ST_RETURN
};



enum VarType
{
	VT_INTEGER,
	VT_STRING,
	VT_BOOLEAN,
	VT_DOUBLE
};

enum ExprType
{
	DUD0,
	DUD1,
	DUD2,
	DUD3,
	ET_EQUAL,
	ET_NOT_EQUAL,
	ET_LESSER,
	ET_GREATER,
	ET_LESSER_EQUAL,
	ET_GREATER_EQUAL,
	ET_PLUS,
	ET_MINUS,
	ET_CONCAT,
	ET_MULT,
	ET_DIV,
	ET_INTDIV,
	ET_EXP,
	ET_ID,
	ET_ARRAY_OR_FUNC,
	ET_AND,
	ET_OR,
	ET_XOR,
	ET_NOT,
	ET_TO,
	ET_MOD,
	ET_SHIFT_L,
	ET_SHIFT_R,
	ET_PARENTHESIS,
	ET_ASSIGN_SUB,
	ET_ASSIGN_ADD,
	ET_ASSIGN_CONSTRUCT,
	ET_ASSIGN_MULT,
	ET_ASSIGN_ORD_DIV,
	ET_ASSIGN_INT_DIV,
	ET_ASSIGN_LSHIFT,
	ET_ASSIGN_RSHIFT,
	ET_ASSIGN_CONCAT,
	ET_IS_EQUAL,
	ET_IS_LESSER,
	ET_IS_GREATER
};



//----------------- Structs
struct ProgramItemList
{
	ProgramItemListNotEmpty* begin;
	ProgramItemListNotEmpty* end;
};

struct ProgramItemListNotEmpty
{
	ProgramItem* begin;
	ProgramItem* end;

	ProgramItemListNotEmpty* nextInList;
};

struct ProgramItem
{
	int* isImport;
	Module* module;
	char* id_var_name;

	ProgramItem* nextInList;
};

struct Module
{
	char* id_var_name;
	FunctionOrSubList* functionOrSubList;
};

struct FunctionOrSubList
{
	FunctionOrSub* begin;
	FunctionOrSub* end;
};

struct FunctionOrSub
{
	SubBloc* subBloc;
	Function* function;

	FunctionOrSub* nextInList;
};

struct Function
{
	char* id_var_name;
	ParameterListOrEmpty* arguments;
	enum VarType varType;
	StmtList* stmtList;
};

struct SubBloc
{
	char* id_var_name;
	ParameterListOrEmpty* arguments;
	StmtList* stmtList;
};

struct ParameterListOrEmpty
{
	ParameterListWithType* parameterListWithType;
	ParameterListWithoutType* parameterListWithoutType;
};

struct ParameterListWithType
{
	ParameterWithType* begin;
	ParameterWithType* end;
};

struct ParameterListWithoutType
{
	ParameterWithoutType* begin;
	ParameterWithoutType* end;
};

struct ParameterWithType
{
	char* id_var_name;
	enum VarType basic_literal;

	ParameterWithType* nextInList;
};

struct ParameterWithoutType
{
	char* id_var_name;

	ParameterWithoutType* nextInList;
};

struct StmtList
{
	Statement* begin;
	Statement* end;
};

struct Statement
{
	enum StmtType type;
	union StmtValue value;

	Statement* nextInList;
};

struct StatementSingle
{
	enum StmtType type;
	union StmtSingleValue value;
};

struct StatementMulti
{
	enum StmtType type;
	union StmtMultiValue value;
};

struct DeclStmt
{
	int* isConst;
	VarName* varName;
	enum VarType varType;
	Expression* expression;
};

struct VarName
{
	char* id_var_name;
	Expression* expression;
};

struct WhileStmt
{
	Expression* expression;
	StmtList* stmtList;
};


struct DoLoopStmt
{
	DoLoopCondition* condition;
	StmtList* stmtList;
};

struct DoLoopCondition
{
	int* isUntil;
	Expression* expression;
};

struct ForLoopStmt
{
	char* counterVarName;
	enum VarType counterType;
	Expression* fromValue;
	Expression* toValue;
	Expression* stepValue;
	StmtList* stmtList;
};

struct ForEachLoopStmt
{
	char* counterVarName;
	enum VarType counterType;
	char* counterSourceName;
	StmtList* stmtList;
};

struct IfStmtMulti
{
	Expression* expression;
	StmtList* thenStmtList;
	ElseIfList* elseIfList;
	StmtList* elseStmtList;
};

struct ElseIfList
{
	ElseIf* begin;
	ElseIf* end;
};

struct ElseIf
{
	Expression* expression;
	StmtList* stmtList;

	ElseIf* nextInList;
};

struct IfStmtSingle
{
	Expression* expression;
	StatementSingle* thenStmt;
	StatementSingle* elseStmt;
};

struct SelectStmt
{
	Expression* expression;
	CaseList* caseList;
	StmtList* elseStmt;
};

struct CaseList
{
	CaseStmt* begin;
	CaseStmt* end;
};

struct CaseStmt
{
	ExpressionList* exprList;
	StmtList* stmtList;

	CaseStmt* nextInList;
};

struct Expression
{
	int isType;
	enum ExprType type;

	Value value;

	Expression* left;
	Expression* right;

	ExpressionList* exprList;

	Expression* nextInList;
};

struct ExpressionList
{
	Expression* begin;
	Expression* end;
};

struct ReturnStmt
{
	Expression* expression;
};
