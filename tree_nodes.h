#pragma once

typedef struct StatementMulti StatementMulti;
typedef struct StatementSingle StatementSingle;
typedef struct Statement Statement;
typedef struct StmtList StmtList;
typedef struct Function Function;
typedef struct FunctionOrSub FunctionOrSub;
typedef struct FunctionOrSubList FunctionOrSubList;
typedef struct Module Module;
typedef struct Expression Expression;
typedef struct ExpressionList ExpressionList;
typedef struct ProgramItem ProgramItem;
typedef struct ProgramItemList;
typedef struct ProgramItemListNotEmpty;
typedef struct ParameterListOrEmpty;
typedef struct ParameterListWithType;
typedef struct WhileStmt;
typedef struct DoLoopStmt;
typedef struct DoLoopCondition;
typedef struct IfStmtMulti;
typedef struct ElseIfList;
typedef struct ElseIf;
typedef struct ForEachLoopStmt;
typedef struct SelectStmt;
typedef struct CaseList;
typedef struct CaseStmt;
typedef struct IfStmtSingle;
typedef struct DeclStmtSingle;
typedef struct VarNameSingle;
typedef struct VarNameMulti;





typedef enum StmtType StmtType;
typedef enum ExprType ExprType;
typedef enum VarType VarType;


typedef union StmtValue StmtValue;
typedef union StmtMultiValue StmtMultiValue;
typedef union StmtSingleValue StmtSingleValue;

union StmtValue
{
	StatementMulti* statementMulti;
	StatementSingle* statementSingle;
};

union StmtMultiValue
{
	DeclStmtMulti* declStmtMulti;
	WhileStmt* whileStmt;
	DoLoopStmt* doLoopStmt;
	IfStmtMulti* ifStmtMulti;
	ForEachLoopStmt* forEachLoopStmt;
	SelectStmt* selectStmt;
	Expression* expression;

};


union StmtSingleValue
{

	IfStmtSingle* ifStmtSingle;
	DeclStmtSingle* declStmtSingle;
	Expression* expression;


};


enum StmtType
{
	ST_MULTI,
	ST_SINGLE
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
	ET_ARRAY_OR_FUNC
};


struct StatementMulti
{

	enum StmtMultiType type;
	union StmtMultiValue value;

};


struct StatementSingle
{
	enum StmtSingleType type;
	union StmtSingleValue value;
};


struct Statement
{
	enum StmtType type;
	union StmtValue value;
};


struct StmtList
{

	Statement* begin;
	Statement* end;

};


struct Function
{

	char* id_var_name;
	Arguments* arguments;
	StmtList* stmtList;
	ExpressionList* exprList;
};


struct FunctionOrSub
{
	SubBloc subBloc;
	Function function;
};


struct FunctionOrSubList
{
	FunctionOrSub* begin;
	FunctionOrSub* end;

};



struct Module
{
	char* id_var_name;
	FunctionsAndSubList* functionsAndSubList;

};




struct ExpressionList
{
	Expression* begin;
	Expression* end;
};

struct Expression
{
	int isType;
	enum ExprType type;

	Value value;

	Expression* left;
	Expression* right;


	ExpressionList* exprList; // expression has expression list

	Expression* nextInList; // expression is part of list
};



struct ProgramItem
{
	int isModule;
	Module* module;

	int isImport;
	char* id_var_name;


};



struct ProgramItemListNotEmpty
{

	ProgramItem* begin;
	ProgramItem* end;

};



struct ProgramItemList
{

	ProgramItemListNotEmpty* begin;
	ProgramItemListNotEmpty* end;

};


struct SubBloc
{

	char* id_var_name;
	ParameterListOrEmpty* arguments;
	StmtList* stmtList;

};

//ToDo: Доделать

struct ParameterListOrEmpty
{

	ParameterListWithType* parameterListWithType
	ParameterListWithoutType* parameterListWithoutType

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

};

struct ParameterWithoutType
{

	char* id_var_name;

};


struct DeclStmtMulti
{
	int isConst;
	char* id_var_name;
	enum VarType varType;
	Expression* expression;

};




struct WhileStmt
{
	Expression* expression;
	StmtList* stmtList;

};


struct DoLoopStmt
{
	DoLoopCondition* doLoopCondition;
	Expression* expression;

};

struct DoLoopCondition
{
	bool* isUntil;
	Expression* expression;

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

};

struct ForEachLoopStmt
{

	char* counterVarName;
	enum VarType counterType;
	char* counterSourceName;
	StmtList* stmtList;

};

struct SelectStmt
{

	Expression* expression;
	CaseList* caseList;

};

struct CaseList
{

	CaseStmt* begin;
	CaseStmt* end;

};


struct CaseStmt
{

	bool* isIs;
	Expression* fromExpression;
	Expression* toExpression;
	StmtList* stmtList;

};


struct IfStmtSingle
{

	Expression* expression;
	StmtList* thenStmtList;
	StmtList* elseStmtList;

};


struct DeclStmtSingle
{

	bool* isConst;
	char* id_var_name;
	enum VarType varType;
	Expression* expression;

};

struct VarNameSingle
{

	char* id_var_name;
	Expression* expression;

};


struct VarNameMulti
{

	char* id_var_name;
	Expression* expression;

};

