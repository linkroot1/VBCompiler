#include "tree_nodes.h"

typedef struct TreeUnit TreeUnit;
typedef struct Tree Tree;

struct TreeUnit
{
    char *label;
	char *edgeLabel;
    int num;
    int parentNum;
    TreeUnit *next;
};

struct Tree
{
    TreeUnit * begin;
    TreeUnit * end;
};

void printTree(ProgramList *pr);
void programParse(ProgramList *progList, Tree *tree, int parentNum);
void programItemParse(ProgramItem *prog, Tree *tree, int parentNum);
void parseFunctionOrSubList(FunctionOrSubList *fosl, Tree *tree, int parentNum);

void parseExpression(Expression *expr, Tree *tree, int parentNum);
void parseExpressionList(ExpressionList *exprList, Tree *tree, int parentNum);

void parseStatement(Statement *stmt, Tree *tree, int parentNum);
void parseStatementMulti(StatementMulti *stmtm, Tree *tree, int parentNum);
void parseStatementSingle(StatementSingle *stmtms, Tree *tree, int parentNum);
void parseStmtList(StmtList *stmtml, Tree *tree, int parentNum);
void parseFunction(Function *func, Tree *tree, int parentNum);
void parseFunctionOrSub(FunctionOrSub *fos, Tree *tree, int parentNum);
void parseModule(Module *mod, Tree *tree, int parentNum);
void parseModuleList(ModuleList *modl, Tree *tree, int parentNum);
void parseImports(Imports *import, Tree *tree, int parentNum);





