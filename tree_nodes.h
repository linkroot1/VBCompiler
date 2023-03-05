#pragma once

typedef struct StatementMulti StatementMulti;
typedef struct StatementSingle StatementSingle;
typedef struct Statement Statement;
typedef struct StmtList StmtList;
typedef struct Function Function;
typedef struct FunctionOrSub FunctionOrSub;
typedef struct FunctionOrSubList FunctionOrSubList;
typedef struct Module Module;
typedef struct ModuleList ModuleList;
typedef struct Imports Imports;
typedef struct Expression Expression;
typedef struct ExpressionList ExpressionList;
typedef struct ProgramList ProgramList;
typedef struct ProgramItem ProgramItem;


typedef enum StmtType StmtType;


typedef union StmtValue StmtValue;

union StmtValue
{
	StatementMulti* statementMulti;
	StatementSingle* statementSingle;
};

enum StmtType
{
	ST_MULTI,
	ST_SINGLE
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


struct ModuleList
{
	Module* begin;
	Module* end;
};



struct Imports
{
	char* id_var_name;
};





struct ExpressionList
{
	Expression* begin;
	Expression* end;
};

struct Expression
{

};

struct ProgramList
{

	ProgramItem* begin;
	ProgramItem* end;

};


struct ProgramItem
{



};



//ToDo: Доделать