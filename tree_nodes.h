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



typedef enum StmtType StmtType;
typedef enum ExprType ExprType;


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