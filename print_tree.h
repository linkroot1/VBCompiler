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

char* stmt_type_str(StmtType et);
char* expr_type_str(ExprType et);
char* variable_type_str(VarType et);

void programParse(ProgramList *progList, Tree *tree, int parentNum);
void parceProgramItemsListNotEmpty(*, Tree* tree, int parentNum);
void programItemParse(ProgramItem *prog, Tree *tree, int parentNum);
void parseModule(Module* mod, Tree* tree, int parentNum);
void parseFunctionOrSubList(FunctionOrSubList* fosl, Tree* tree, int parentNum);
void parseFunctionOrSub(FunctionOrSub *fos, Tree *tree, int parentNum);
void parseFunction(Function *func, Tree *tree, int parentNum);
void parceSubBlock(*, Tree* tree, int parentNum);
void parceParameterListOrEmpty(*, Tree* tree, int parentNum);
void parceParameterListWithType(*, Tree* tree, int parentNum);
void parceParameterListWithoutType(*, Tree* tree, int parentNum);
void parceParameterWithType(*, Tree* tree, int parentNum);
void parceParameterWithoutType(*, Tree* tree, int parentNum);
void parseStmtList(StmtList *stmtml, Tree *tree, int parentNum);
void parseStatement(Statement *stmt, Tree *tree, int parentNum);
void parseStatementSingle(StatementSingle *stmtms, Tree *tree, int parentNum);
void parseStatementMulti(StatementMulti *stmtm, Tree *tree, int parentNum);
void parceDeclarationStatementMulti(*, Tree* tree, int parentNum);
void parceDeclarationStatementSingle(*, Tree* tree, int parentNum);
void parceVarNameMulti(*, Tree* tree, int parentNum);
void parceVarNameSingle(*, Tree* tree, int parentNum);
//void parceAccess(*, Tree* tree, int parentNum);
void parseWhileStatement(WhileStatement* whileStmt, Tree* tree, int parentNum);
void parseDoLoopStatement(DoLoopStmt* doLoopStmt, Tree* tree, int parentNum);
void parceDoLoopCondition(DoLoopCondition* condition, Tree* tree, int parentNum);
void parseForLoopStatement(ForLoopStmt* forLoopStmt, Tree* tree, int parentNum);
void parseForEachLoopStatement(ForEachLoopStmt* forEachLoopStmt, Tree* tree, int parentNum);
void parceIfStatementMulti(*, Tree* tree, int parentNum);
void parceElseIfList(*, Tree* tree, int parentNum);
void parceElseIf(*, Tree* tree, int parentNum);
void parceIfStatementSingle(*, Tree* tree, int parentNum);
void parseSelectStatement(SelectStmt* selectStmt, Tree* tree, int parentNum);
void parseCaseList(CaseList* caseList, Tree* tree, int parentNum);
void parseCaseStatement(CaseStmt* caseStmt, Tree* tree, int parentNum);
void parseExpression(Expression *expr, Tree *tree, int parentNum);
void parceBasicLiteralValue(*, Tree* tree, int parentNum);
void parseExpressionList(ExpressionList *exprList, Tree *tree, int parentNum);

//void parseModuleList(ModuleList *modl, Tree *tree, int parentNum);
//void parseImports(Imports *import, Tree *tree, int parentNum);





