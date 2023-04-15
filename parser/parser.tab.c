/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "parser.y"

#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "../tree/tree_nodes.h"
#include "../tree/print_tree.h"
//#define PRINT_RULE


extern int yylineno;
extern FILE* yyin;

extern int yyparse();
extern int yylex();

void yyerror(const char* s);

// ----- declarations -----
Expression* createExpression(ExprType type, Expression *left, Expression *right);
Expression* createSimpleExpression(ExprType type, Value value);
Expression *createExpressionWithList(ExprType type, Value val, ExpressionList *exprList);
ExpressionList* createExpressionList(Expression *expr);
ExpressionList* appendExpressionToList(ExpressionList *list, Expression *expr);
ExpressionList* createArgumentList(Expression *expr);
ProgramItemList* createProgramItemsList(ProgramItemListNotEmpty *programItemListNotEmpty);
ProgramItemListNotEmpty* createProgramListNotEmpty(ProgramItem *programItem);
ProgramItemListNotEmpty* appendProgramToListNotEmpty(ProgramItemListNotEmpty *programItemListNotEmpty, ProgramItem *programItem);
ProgramItem* createProgramItem(Module *module, char *id_var_name);
Module* createModule(char *id_var_name, FunctionOrSubList *functionsAndSubList);
FunctionOrSubList* createFunctionOrSubList(FunctionOrSub *functionOrSub);
FunctionOrSubList* appendFunctionOrSubList(FunctionOrSubList *list, FunctionOrSub *functionOrSub);
FunctionOrSub* createFunctionOrSub(SubBloc *subBloc, Function *function);
Function* createFunction(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList);
SubBloc* createSubBloc(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList);
ParameterListOrEmpty* createParameterListOrEmpty(ParameterListWithType *parameterListWithType, ParameterListWithoutType *parameterListWithoutType);
ParameterListWithType *createParameterListWithType(ParameterWithType *parameterWithType);
ParameterListWithType *appendParameterListWithType(ParameterListWithType *list, ParameterWithType *parameterWithType);
ParameterListWithoutType *createParameterListWithoutType(ParameterWithoutType *parameterWithoutType);
ParameterListWithoutType *appendParameterListWithoutType(ParameterListWithoutType *list, ParameterWithoutType *parameterWithoutType);
ParameterWithType *createParameterWithType(char* id_var_name, VarType value);
ParameterWithoutType *createParameterWithoutType(char* id_var_name);
StmtList *createStmtList(Statement *statement);
StmtList *appendStmtList(StmtList *list, Statement *statement);
Statement *createStatement(StmtType type, StmtValue value);
StatementSingle *createStatementSingle(StmtType type, StmtSingleValue value);
StatementMulti *createStatementMulti(StmtType type, StmtMultiValue value);
WhileStmt *createWhileStmt(Expression *expression, StmtList *stmtList);
DoLoopStmt *createDoLoopStmt(DoLoopCondition *condition, StmtList *stmtList);
DoLoopCondition *createDoLoopCondition(int isUntil, Expression *expression);
ForLoopStmt *createForLoopStmt(char* counterVarName, VarType counterType, Expression* fromValue, Expression* toValue, Expression* stepValue, StmtList *stmtList);
ForEachLoopStmt *createForEachLoopStmt(char* counterVarName, VarType counterType, char* counterSourceName, StmtList *stmtList);
IfStmtMulti *createIfStmtMulti(Expression *expression, StmtList *thenStmtList, ElseIfList *elseIfList, StmtList *elseStmtList);
ElseIfList *createElseIfList(ElseIf *elseIf);
ElseIfList *appendElseIfList(ElseIfList *list, ElseIf *elseIf);
ElseIf *createElseIf(Expression *expression, StmtList *stmtList);
IfStmtSingle *createIfStmtSingle(Expression *expression, StatementSingle *thenStmt, StatementSingle *elseStmt);
SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList);
CaseList *createCaseList(CaseStmt *caseStmt);
CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt);
CaseStmt *createCaseStmt(int isIs, Expression *fromExpression, Expression *toExpression, StmtList *stmtList);
DeclStmtSingle *createDeclStmtSingle(int isConst, VarNameSingle* id_var_name, VarType varType, Expression *expression);
DeclStmtMulti *createDeclStmtMulti(int isConst, VarNameSingle* id_var_name, VarType varType, Expression *expression);
VarNameSingle *createVarNameSingle(char* id_var_name, Expression *expression);
VarNameMulti *createVarNameMulti(char* id_var_name, Expression *expression);
ReturnStmt *createReturnStmt(Expression *expression);

ProgramItemList *root;

#line 140 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_VALUE = 3,                  /* INT_VALUE  */
  YYSYMBOL_DOUBLE_VALUE = 4,               /* DOUBLE_VALUE  */
  YYSYMBOL_STRING_VALUE = 5,               /* STRING_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 6,              /* BOOLEAN_VALUE  */
  YYSYMBOL_DATETIME_VALUE = 7,             /* DATETIME_VALUE  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_DOUBLE = 9,                     /* DOUBLE  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 11,                   /* BOOLEAN  */
  YYSYMBOL_IDENTIFIER = 12,                /* IDENTIFIER  */
  YYSYMBOL_SUB = 13,                       /* SUB  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_DIM = 16,                       /* DIM  */
  YYSYMBOL_AS = 17,                        /* AS  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_NEW = 20,                       /* NEW  */
  YYSYMBOL_ELSEIF = 21,                    /* ELSEIF  */
  YYSYMBOL_SELECT = 22,                    /* SELECT  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_IS = 24,                        /* IS  */
  YYSYMBOL_TO = 25,                        /* TO  */
  YYSYMBOL_IMPORTS = 26,                   /* IMPORTS  */
  YYSYMBOL_MODULE = 27,                    /* MODULE  */
  YYSYMBOL_FUNCTION = 28,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 29,                    /* RETURN  */
  YYSYMBOL_DO = 30,                        /* DO  */
  YYSYMBOL_LOOP = 31,                      /* LOOP  */
  YYSYMBOL_UNTIL = 32,                     /* UNTIL  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_NEXT = 34,                      /* NEXT  */
  YYSYMBOL_STEP = 35,                      /* STEP  */
  YYSYMBOL_OF = 36,                        /* OF  */
  YYSYMBOL_IN = 37,                        /* IN  */
  YYSYMBOL_EACH = 38,                      /* EACH  */
  YYSYMBOL_END_OF_LINE = 39,               /* END_OF_LINE  */
  YYSYMBOL_ASSIGN_CONSTRUCT = 40,          /* ASSIGN_CONSTRUCT  */
  YYSYMBOL_ASSIGN_MULT = 41,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_ORD_DIV = 42,            /* ASSIGN_ORD_DIV  */
  YYSYMBOL_ASSIGN_INT_DIV = 43,            /* ASSIGN_INT_DIV  */
  YYSYMBOL_ASSIGN_ADD = 44,                /* ASSIGN_ADD  */
  YYSYMBOL_ASSIGN_SUB = 45,                /* ASSIGN_SUB  */
  YYSYMBOL_ASSIGN_LSHIFT = 46,             /* ASSIGN_LSHIFT  */
  YYSYMBOL_ASSIGN_RSHIFT = 47,             /* ASSIGN_RSHIFT  */
  YYSYMBOL_ASSIGN_CONCAT = 48,             /* ASSIGN_CONCAT  */
  YYSYMBOL_PRIVATE = 49,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 50,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 51,                    /* PUBLIC  */
  YYSYMBOL_FRIEND = 52,                    /* FRIEND  */
  YYSYMBOL_BYVAL = 53,                     /* BYVAL  */
  YYSYMBOL_AND = 54,                       /* AND  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_XOR = 56,                       /* XOR  */
  YYSYMBOL_57_ = 57,                       /* '^'  */
  YYSYMBOL_58_ = 58,                       /* '*'  */
  YYSYMBOL_59_ = 59,                       /* '/'  */
  YYSYMBOL_NOT = 60,                       /* NOT  */
  YYSYMBOL_INT_DIV = 61,                   /* INT_DIV  */
  YYSYMBOL_62_ = 62,                       /* '+'  */
  YYSYMBOL_63_ = 63,                       /* '-'  */
  YYSYMBOL_UNARY_MINUS = 64,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 65,                /* UNARY_PLUS  */
  YYSYMBOL_66_ = 66,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 67,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 68,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 69,             /* MORE_OR_EQUAL  */
  YYSYMBOL_70_ = 70,                       /* '>'  */
  YYSYMBOL_71_ = 71,                       /* '<'  */
  YYSYMBOL_72_ = 72,                       /* '&'  */
  YYSYMBOL_73_ = 73,                       /* '('  */
  YYSYMBOL_74_ = 74,                       /* ')'  */
  YYSYMBOL_75_ = 75,                       /* '{'  */
  YYSYMBOL_76_ = 76,                       /* '}'  */
  YYSYMBOL_THEN = 77,                      /* THEN  */
  YYSYMBOL_ELSE = 78,                      /* ELSE  */
  YYSYMBOL_79_ = 79,                       /* ','  */
  YYSYMBOL_YYACCEPT = 80,                  /* $accept  */
  YYSYMBOL_root = 81,                      /* root  */
  YYSYMBOL_program_items_list = 82,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 83, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 84,              /* program_item  */
  YYSYMBOL_module = 85,                    /* module  */
  YYSYMBOL_functions_or_sub_list = 86,     /* functions_or_sub_list  */
  YYSYMBOL_function_or_sub = 87,           /* function_or_sub  */
  YYSYMBOL_function = 88,                  /* function  */
  YYSYMBOL_sub_bloc = 89,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 90,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 91,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 92, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 93,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 94,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 95,                 /* stmt_list  */
  YYSYMBOL_stmt = 96,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 97,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 98,           /* multi_line_stmt  */
  YYSYMBOL_return_stmt = 99,               /* return_stmt  */
  YYSYMBOL_stmt_ends = 100,                /* stmt_ends  */
  YYSYMBOL_decl_stmt = 101,                /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 102,    /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 103,                 /* var_name  */
  YYSYMBOL_var_name_singleline = 104,      /* var_name_singleline  */
  YYSYMBOL_access = 105,                   /* access  */
  YYSYMBOL_while_stmt = 106,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 107,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 108,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 109,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 110,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 111,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 112,              /* elseif_list  */
  YYSYMBOL_elseif = 113,                   /* elseif  */
  YYSYMBOL_if_stmt_single_line = 114,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 115,              /* select_stmt  */
  YYSYMBOL_case_list = 116,                /* case_list  */
  YYSYMBOL_case_stmt = 117,                /* case_stmt  */
  YYSYMBOL_expr_singleline = 118,          /* expr_singleline  */
  YYSYMBOL_expr_multiline = 119,           /* expr_multiline  */
  YYSYMBOL_basic_literal = 120,            /* basic_literal  */
  YYSYMBOL_basic_literal_value = 121,      /* basic_literal_value  */
  YYSYMBOL_arguments_multiline = 122,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 123,     /* arguments_singleline  */
  YYSYMBOL_expr_list = 124                 /* expr_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2076

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  496

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,     2,
      73,    74,    58,    62,    79,    63,     2,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      71,    66,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,    76,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    60,    61,    64,    65,    67,    68,    69,    77,
      78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   238,   238,   241,   242,   245,   246,   249,   250,   254,
     255,   256,   257,   261,   262,   265,   266,   269,   270,   271,
     272,   276,   277,   278,   279,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   293,   294,   295,   299,   300,   301,
     305,   306,   307,   308,   312,   318,   319,   323,   324,   328,
     329,   330,   331,   334,   335,   336,   337,   338,   339,   340,
     341,   344,   347,   348,   354,   355,   356,   357,   358,   359,
     363,   364,   365,   366,   367,   368,   372,   375,   376,   380,
     381,   382,   383,   384,   385,   391,   392,   397,   398,   401,
     402,   407,   408,   413,   418,   419,   420,   421,   422,   423,
     424,   425,   428,   429,   432,   433,   435,   436,   441,   442,
     445,   446,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   511,   512,   513,   514,   517,   518,
     519,   520,   525,   526,   527,   531,   532,   536,   537
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_VALUE",
  "DOUBLE_VALUE", "STRING_VALUE", "BOOLEAN_VALUE", "DATETIME_VALUE", "INT",
  "DOUBLE", "STRING", "BOOLEAN", "IDENTIFIER", "SUB", "END", "CONST",
  "DIM", "AS", "WHILE", "IF", "NEW", "ELSEIF", "SELECT", "CASE", "IS",
  "TO", "IMPORTS", "MODULE", "FUNCTION", "RETURN", "DO", "LOOP", "UNTIL",
  "FOR", "NEXT", "STEP", "OF", "IN", "EACH", "END_OF_LINE",
  "ASSIGN_CONSTRUCT", "ASSIGN_MULT", "ASSIGN_ORD_DIV", "ASSIGN_INT_DIV",
  "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_LSHIFT", "ASSIGN_RSHIFT",
  "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC", "FRIEND", "BYVAL",
  "AND", "OR", "XOR", "'^'", "'*'", "'/'", "NOT", "INT_DIV", "'+'", "'-'",
  "UNARY_MINUS", "UNARY_PLUS", "'='", "NOT_EQUAL", "LESS_OR_EQUAL",
  "MORE_OR_EQUAL", "'>'", "'<'", "'&'", "'('", "')'", "'{'", "'}'", "THEN",
  "ELSE", "','", "$accept", "root", "program_items_list",
  "program_items_list_not_empty", "program_item", "module",
  "functions_or_sub_list", "function_or_sub", "function", "sub_bloc",
  "parameterlist_or_empty", "parameterlist_with_type",
  "parameterlist_without_type", "parameter_with_type",
  "parameter_without_type", "stmt_list", "stmt", "single_line_stmt",
  "multi_line_stmt", "return_stmt", "stmt_ends", "decl_stmt",
  "decl_stmt_single_line", "var_name", "var_name_singleline", "access",
  "while_stmt", "do_loop_stmt", "do_loop_condition", "for_loop_stmt",
  "for_each_loop_stmt", "if_stmt_multi_line", "elseif_list", "elseif",
  "if_stmt_single_line", "select_stmt", "case_list", "case_stmt",
  "expr_singleline", "expr_multiline", "basic_literal",
  "basic_literal_value", "arguments_multiline", "arguments_singleline",
  "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-364)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     382,    28,    47,    69,    76,  -364,  -364,    87,  -364,   382,
    -364,  -364,   113,   112,   112,  -364,  -364,  -364,  -364,   129,
    -364,   114,   110,   112,  -364,   151,   142,   160,   293,  -364,
    -364,  -364,    54,   205,   116,   112,   117,   156,  -364,   174,
     175,   170,   346,    26,   114,    26,   112,   131,   132,   112,
     180,   192,    -6,   198,   137,     5,     9,  -364,  -364,   143,
     114,    26,    26,   114,   112,   184,    19,    22,   196,   112,
    -364,    44,  -364,    27,   112,   147,   150,   114,  -364,  -364,
    -364,  -364,   164,  -364,  -364,   184,   632,   192,    11,  -364,
    -364,   204,  -364,   746,   112,   112,   165,   168,  -364,  -364,
    -364,  -364,   173,   230,   235,   235,   694,   694,   228,  1689,
      73,    24,  1689,  1689,  1689,   443,   709,  -364,   112,  -364,
    -364,   112,  -364,   112,  -364,  -364,  -364,   112,  -364,   112,
    1928,   112,  -364,  -364,  -364,   224,   872,   798,   820,  -364,
     179,   257,  -364,  -364,   112,   185,   247,   250,    -9,    -3,
     618,   112,  1793,   193,   694,   200,  1689,  1947,  1689,  1689,
     892,  1396,   267,   274,  1993,   349,   349,  1689,  1732,   275,
    -364,   114,   114,   114,   114,   114,   997,  1069,  1141,  1213,
    1458,  1478,  1490,  1504,  1520,  1542,  1567,  1582,  1586,  1604,
    1608,  1648,   114,   112,   262,   278,   944,   264,   964,  -364,
    1689,  -364,  1947,   -28,   114,   694,   184,   184,   184,   254,
     184,   277,   892,   892,  1416,   112,   618,   112,   273,  1865,
    1689,  1689,  1689,  1689,  1689,  1689,  1689,  1689,  1689,  1689,
    1689,  1689,  1689,  1689,  1689,  1689,  1774,  1774,  1016,  1036,
     184,   281,  1753,   221,  -364,   112,  1689,  1965,  1689,  1981,
    1689,  1981,  1689,   459,  1689,  1993,  1689,  1993,  1689,  2004,
    1689,   349,  1689,   349,  1689,   229,  1689,   229,  1689,   229,
    1689,   229,  1689,   229,  1689,   229,  1689,  -364,   114,   112,
     112,   287,   112,   276,    15,   231,  -364,  1689,  1886,   236,
     237,   248,   249,   694,   252,   184,   694,  1947,  1088,  1108,
     290,   290,  1689,   244,   892,  1947,   892,    29,    29,    68,
     114,   114,    88,   112,   263,   184,   239,  -364,  -364,   114,
    1947,  1947,  1947,  1947,  1947,  1947,  1947,  1947,  1947,  1947,
    1947,  1947,  1947,  1947,  1947,  1947,   114,   114,   112,   114,
     112,   258,  -364,  -364,  1947,  -364,  -364,   284,  1670,   289,
    1928,  -364,  1685,   261,  -364,   320,   323,   279,   331,    20,
    1817,  1438,    12,   152,   172,   102,  -364,   120,  -364,   114,
     223,   312,  -364,   114,   114,  -364,   694,   694,  1947,   694,
     694,  1947,   280,  -364,  -364,  1689,   184,   184,   593,  1438,
    -364,   334,   694,   112,    -2,  -364,   336,   112,    -1,   694,
     112,  1711,     4,   335,  -364,   340,   333,   352,  -364,  -364,
    -364,  -364,   291,  1907,   301,   302,  -364,  1841,   292,   892,
     351,   112,  -364,  -364,   892,   357,   112,   618,   112,   892,
     694,   892,   694,   892,  -364,  -364,   223,   112,  1689,  1689,
    1689,   112,   112,  1160,  -364,   892,  1180,  -364,   892,   892,
     892,  1396,   618,   112,  1396,   618,   112,  1396,    64,   892,
      35,   892,   892,   359,  1232,   365,  1252,  1396,  1396,   892,
     892,   892,   892,   223,   892,  1304,  -364,  1396,  1396,  -364,
     366,  -364,   370,  1396,  1396,  1396,  1396,   112,  1324,  -364,
    -364,  -364,   892,  -364,  1376,  -364
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    82,    80,    79,    81,     0,     2,     4,
       5,     7,     0,     0,     0,    84,    83,     1,     6,     0,
      62,     8,     0,     0,    63,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,    25,     9,    25,     0,     0,     0,     0,
       0,    44,     0,     0,     0,    26,    30,    34,    37,     0,
      10,    25,    25,    11,     0,     0,    28,    33,     0,     0,
      29,     0,    32,     0,     0,     0,     0,    12,   164,   167,
     165,   166,    40,    27,    31,     0,     0,     0,     0,    35,
      44,     0,    38,     0,     0,     0,     0,    42,   168,   171,
     169,   170,   138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    47,
      52,     0,    50,     0,    57,    58,    59,     0,    49,     0,
      51,     0,   121,    36,    39,     0,     0,     0,     0,    41,
       0,     0,   160,   139,     0,    78,     0,     0,     0,    74,
       0,     0,     0,     0,     0,   138,     0,    61,     0,     0,
       0,     0,     0,     0,   143,   123,   122,     0,     0,     0,
      46,    48,    54,    56,    53,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,    43,
       0,   176,   177,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,     0,     0,   140,     0,   141,
       0,   142,     0,   132,     0,   126,     0,   127,     0,   128,
       0,   124,     0,   125,     0,   129,     0,   133,     0,   134,
       0,   135,     0,   131,     0,   130,     0,   136,    17,     0,
       0,     0,     0,     0,     0,     0,   175,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,    73,     0,     0,
       0,     0,     0,   106,     0,    51,     0,     0,     0,     0,
      90,    89,     0,     0,     0,     0,     0,   157,   159,    22,
     161,   162,   163,   152,   146,   147,   148,   144,   145,   149,
     153,   154,   155,   151,   150,   156,    18,    23,     0,    19,
       0,     0,   172,   174,   178,    77,    76,     0,     0,     0,
       0,    68,     0,     0,    69,     0,     0,    78,     0,    74,
       0,     0,     0,     0,     0,     0,   110,     0,    88,    87,
       0,     0,   158,    24,    20,   173,     0,     0,    70,     0,
       0,    71,     0,    86,    85,     0,     0,     0,     0,     0,
     107,     0,     0,     0,     0,   102,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,    64,    65,
      66,    67,     0,     0,     0,    72,    95,     0,     0,     0,
       0,     0,   103,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,   109,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,    98,     0,     0,
       0,   120,     0,     0,   113,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   114,     0,
       0,     0,     0,     0,     0,     0,    75,   105,   104,    97,
       0,    96,     0,   119,   118,   117,   116,     0,     0,    93,
     101,   100,     0,    91,     0,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -364,  -364,  -364,  -364,   362,  -364,   342,    80,  -364,  -364,
      57,   338,   347,     7,   -20,   -68,    10,  -209,  -364,  -364,
     -14,  -364,  -364,   295,  -102,   139,  -364,  -364,    93,  -364,
    -364,  -364,    48,  -244,  -364,  -364,    84,  -238,   356,  -105,
     -75,  -363,  -364,  -364,  -196
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      54,    55,    56,    57,    58,   116,   117,   118,   119,   120,
      21,   121,   122,   146,   147,    32,   123,   124,   161,   125,
     126,   127,   394,   395,   128,   129,   365,   366,   130,   131,
      82,   132,   142,   143,   203
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   151,   153,   149,   284,   303,    51,   406,   208,    33,
      97,   285,   420,   425,   210,    98,    99,   100,   101,   392,
     392,    44,   309,    87,   102,   136,   391,   104,   105,   432,
     106,   107,    60,   392,   108,    63,   162,   387,    51,    90,
      13,   109,   110,    20,    70,   111,   286,    53,    72,   217,
      77,   287,   364,    92,   341,    86,    87,   209,    83,    14,
      93,    84,   163,   211,    53,    52,    91,    39,    24,   196,
     198,   134,   112,   458,   113,   114,   421,   426,    89,    53,
     137,   138,    40,    88,    71,   115,   388,    17,    73,   342,
     393,   158,   238,   239,   287,   133,   160,    53,    71,   473,
     289,    73,    59,    20,   171,   159,   158,   172,    38,   173,
     487,   476,    20,   174,   287,   175,   403,   192,    75,    76,
     159,    15,    38,    25,    26,   364,   170,   404,    16,   404,
     204,   290,   291,   292,   405,   294,   212,   213,    27,    12,
      19,    23,   286,   364,   298,   299,   170,   287,    12,    24,
     422,    20,   390,    24,   422,    98,    99,   100,   101,     3,
       4,     5,     6,    34,   102,   314,   396,   104,   105,    35,
     106,   107,    36,   392,   108,    98,    99,   100,   101,   278,
     303,   109,   110,    46,   102,   111,    47,    48,   351,    43,
      45,   354,    78,    79,    80,    81,   399,    49,   358,   359,
     304,   306,   307,   308,    61,    62,   170,    64,   170,    65,
      68,    69,   112,    85,   113,   114,    90,    74,    25,    41,
     353,    94,   310,   311,    95,   115,    98,    99,   100,   101,
     397,   319,   112,    27,   113,   114,   362,    96,   363,   139,
     371,   140,   460,   144,    24,   115,   141,   145,   170,   170,
     400,   154,   193,   199,     3,     4,     5,     6,   205,   402,
      98,    99,   100,   101,   206,   336,   337,   207,   339,   155,
     215,   408,   409,   218,   410,   411,    98,    99,   100,   101,
      98,    99,   100,   101,   240,   155,   241,   418,   245,   155,
     279,   280,   282,   293,   428,   318,   200,   295,   315,   369,
     338,   235,   357,   347,   340,   343,    25,    37,   170,   170,
     346,   414,   415,   372,   348,   349,   296,   112,   352,   113,
     114,    27,   361,   376,   373,   453,   374,   456,   379,   370,
     156,   201,   375,   112,   382,   113,   114,   112,   383,   113,
     114,   384,     3,     4,     5,     6,   156,   201,   386,   407,
     156,   443,   385,   416,   412,   423,   446,   434,   436,    25,
      50,   451,   435,   454,   437,   457,   438,   439,   440,   442,
     444,    18,   170,   170,    27,    42,   447,   464,   479,   419,
     466,   467,   468,   424,   481,   490,   429,   431,   433,   491,
      66,   475,   367,   477,   478,     3,     4,     5,     6,    67,
     148,   483,   484,   485,   486,   368,   488,   445,     1,     2,
       0,   398,   448,   449,   450,   229,   230,   231,   232,   233,
     234,   235,     0,   459,   494,     0,     0,   461,   462,     0,
       0,     3,     4,     5,     6,     0,     0,     0,   469,   470,
       0,   471,   472,     0,   474,     0,    98,    99,   100,   101,
       0,     0,     0,   170,     0,   155,   170,     0,     0,     0,
       0,   170,   150,   152,   170,   157,     0,   170,   164,   165,
     166,   168,     0,   492,   170,     0,   170,   170,   170,     0,
       0,     0,   167,     0,     0,   170,     0,   170,   170,     0,
       0,     0,     0,   170,   170,   170,   170,   202,   170,     0,
       0,     0,     0,   112,   170,   113,   114,     0,     0,     0,
     216,     0,   219,     0,   236,   237,   156,   224,   225,     0,
     226,   227,   228,   242,     0,   229,   230,   231,   232,   233,
     234,   235,   247,   249,   251,   253,   255,   257,   259,   261,
     263,   265,   267,   269,   271,   273,   275,   277,     0,     0,
       0,     0,     0,     0,     0,     0,   202,     0,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   297,     0,     0,
     305,     0,     0,     0,   202,     0,   247,   249,   251,   253,
     255,   257,   259,   261,   263,   265,   267,   269,   271,   273,
     275,   277,     0,     0,     0,     0,    98,    99,   100,   101,
       0,     0,   320,     0,   321,   155,   322,     0,   323,     0,
     324,     0,   325,   295,   326,     0,   327,     0,   328,     0,
     329,     0,   330,     0,   331,     0,   332,     0,   333,     0,
     334,     0,   335,     0,     0,    98,    99,   100,   101,     0,
       0,     0,     0,   344,   102,     0,   103,   104,   105,   350,
     106,   107,   350,   112,   108,   113,   114,    20,   360,     0,
       0,   109,   110,     0,     0,   111,   156,     0,     0,     0,
       0,    24,   176,   177,   178,   179,   180,   181,     0,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,   190,
     191,     0,   112,     0,   113,   114,     0,    98,    99,   100,
     101,     0,     0,     0,   378,   115,   102,     0,   381,     0,
       0,     0,    98,    99,   100,   101,     0,   305,     0,     0,
     401,   102,     0,   169,   104,   105,     0,   106,   107,     0,
       0,   108,   350,   350,     0,   350,   350,     0,   109,   110,
       0,   413,   111,     0,   297,   305,     0,     0,   417,    98,
      99,   100,   101,     0,   112,   427,   113,   114,   102,     0,
     135,   104,   105,     0,   106,   107,     0,   115,   108,   112,
       0,   113,   114,     0,     0,   109,   110,     0,     0,   111,
       0,     0,   115,     0,     0,    24,   452,     0,   455,     0,
       0,     0,     0,     0,   202,   378,   381,     0,     0,     0,
       0,    98,    99,   100,   101,     0,   112,     0,   113,   114,
     102,     0,   195,   104,   105,     0,   106,   107,     0,   115,
     108,     0,     0,    98,    99,   100,   101,   109,   110,     0,
       0,   111,   102,     0,   197,   104,   105,    24,   106,   107,
       0,     0,   108,     0,     0,     0,     0,     0,     0,   109,
     110,     0,     0,   111,     0,     0,     0,     0,   112,    24,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,    98,    99,   100,   101,     0,
     112,     0,   113,   114,   102,     0,   194,   104,   105,     0,
     106,   107,     0,   115,   108,    98,    99,   100,   101,     0,
       0,   109,   110,     0,   102,   111,     0,   104,   105,     0,
     106,   107,     0,     0,   108,     0,     0,     0,     0,     0,
       0,   109,   110,     0,     0,   111,     0,     0,     0,     0,
       0,    24,   112,     0,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,    98,    99,   100,
     101,     0,   112,     0,   113,   114,   102,     0,   281,   104,
     105,     0,   106,   107,     0,   115,   108,    98,    99,   100,
     101,     0,     0,   109,   110,     0,   102,   111,   283,   104,
     105,     0,   106,   107,     0,     0,   108,     0,     0,     0,
       0,     0,     0,   109,   110,     0,     0,   111,     0,     0,
      98,    99,   100,   101,   112,     0,   113,   114,     0,   155,
       0,     0,     0,     0,     0,     0,     0,   115,     0,    98,
      99,   100,   101,     0,   112,     0,   113,   114,   102,     0,
       0,   104,   105,     0,   106,   107,   246,   115,   108,    98,
      99,   100,   101,     0,     0,   109,   110,   312,   102,   111,
       0,   104,   105,     0,   106,   107,     0,   112,   108,   113,
     114,     0,     0,     0,     0,   109,   110,   313,     0,   111,
     156,     0,    98,    99,   100,   101,   112,     0,   113,   114,
       0,   155,     0,     0,     0,     0,     0,     0,     0,   115,
       0,    98,    99,   100,   101,     0,   112,     0,   113,   114,
     102,     0,   355,   104,   105,     0,   106,   107,   248,   115,
     108,    98,    99,   100,   101,     0,     0,   109,   110,     0,
     102,   111,   356,   104,   105,     0,   106,   107,     0,   112,
     108,   113,   114,     0,     0,     0,     0,   109,   110,     0,
       0,   111,   156,     0,    98,    99,   100,   101,   112,     0,
     113,   114,     0,   155,     0,     0,     0,     0,     0,     0,
       0,   115,     0,    98,    99,   100,   101,     0,   112,     0,
     113,   114,   102,     0,   463,   104,   105,     0,   106,   107,
     250,   115,   108,    98,    99,   100,   101,     0,     0,   109,
     110,     0,   102,   111,   465,   104,   105,     0,   106,   107,
       0,   112,   108,   113,   114,     0,     0,     0,     0,   109,
     110,     0,     0,   111,   156,     0,    98,    99,   100,   101,
     112,     0,   113,   114,     0,   155,     0,     0,     0,     0,
       0,     0,     0,   115,     0,    98,    99,   100,   101,     0,
     112,     0,   113,   114,   102,     0,   480,   104,   105,     0,
     106,   107,   252,   115,   108,    98,    99,   100,   101,     0,
       0,   109,   110,     0,   102,   111,   482,   104,   105,     0,
     106,   107,     0,   112,   108,   113,   114,     0,     0,     0,
       0,   109,   110,     0,     0,   111,   156,     0,     0,     0,
       0,     0,   112,     0,   113,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,    98,    99,   100,
     101,     0,   112,     0,   113,   114,   102,     0,     0,   104,
     105,     0,   106,   107,     0,   115,   108,    98,    99,   100,
     101,     0,     0,   109,   110,     0,   102,   111,   489,   104,
     105,     0,   106,   107,     0,     0,   108,     0,     0,     0,
       0,     0,     0,   109,   110,     0,     0,   111,   493,     0,
       0,     0,     0,     0,   112,     0,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,    98,
      99,   100,   101,     0,   112,     0,   113,   114,   102,     0,
       0,   104,   105,     0,   106,   107,     0,   115,   108,    98,
      99,   100,   101,     0,     0,   109,   110,     0,   102,   111,
     495,   104,   105,     0,   106,   107,     0,     0,   108,    98,
      99,   100,   101,     0,     0,   109,   110,     0,   155,   111,
       0,   300,   301,     0,     0,   302,   112,     0,   113,   114,
       0,    98,    99,   100,   101,   109,     0,     0,     0,   115,
     155,     0,     0,   300,   301,    20,   112,   302,   113,   114,
       0,    98,    99,   100,   101,     0,     0,   109,     0,   115,
     155,     0,     0,     0,     0,     0,   112,     0,   113,   114,
       0,    98,    99,   100,   101,     0,     0,     0,     0,   156,
     155,     0,     0,    98,    99,   100,   101,   254,   112,     0,
     113,   114,   155,     0,     0,     0,     0,    98,    99,   100,
     101,   156,     0,     0,     0,     0,   155,   256,   112,     0,
     113,   114,     0,    98,    99,   100,   101,     0,     0,   258,
       0,   156,   155,     0,     0,     0,     0,     0,   112,     0,
     113,   114,     0,   260,     0,    98,    99,   100,   101,     0,
     112,   156,   113,   114,   155,     0,     0,     0,     0,   262,
       0,     0,     0,   156,   112,     0,   113,   114,     0,     0,
      98,    99,   100,   101,     0,     0,     0,   156,     0,   155,
     112,   264,   113,   114,     0,    98,    99,   100,   101,    98,
      99,   100,   101,   156,   155,     0,     0,     0,   155,     0,
       0,     0,   112,     0,   113,   114,   266,    98,    99,   100,
     101,    98,    99,   100,   101,   156,   155,     0,     0,     0,
     155,   268,     0,     0,     0,   270,     0,   112,     0,   113,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,   112,   272,   113,   114,   112,   274,   113,   114,
       0,    98,    99,   100,   101,   156,     0,     0,     0,   156,
     155,     0,     0,     0,   112,     0,   113,   114,   112,     0,
     113,   114,     0,    98,    99,   100,   101,   156,     0,     0,
       0,   156,   155,     0,     0,     0,     0,   276,    98,    99,
     100,   101,    98,    99,   100,   101,     0,   155,     0,     0,
       0,   155,     0,     0,     0,     0,     0,     0,   112,   377,
     113,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,   380,     0,     0,     0,     0,     0,
     112,     0,   113,   114,     0,     0,   430,     0,     0,     0,
       0,     0,     0,   156,     0,   112,     0,   113,   114,   112,
      20,   113,   114,     0,     0,     0,     0,     0,   156,     0,
       0,     0,   156,     0,     0,   176,   177,   178,   179,   180,
     181,   243,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,   190,   191,     0,     0,   220,   221,   222,   223,
     224,   225,   316,   226,   227,   228,     0,     0,   229,   230,
     231,   232,   233,   234,   235,     0,   244,   220,   221,   222,
     223,   224,   225,    20,   226,   227,   228,     0,     0,   229,
     230,   231,   232,   233,   234,   235,     0,   317,   220,   221,
     222,   223,   224,   225,     0,   226,   227,   228,     0,     0,
     229,   230,   231,   232,   233,   234,   235,   176,   177,   178,
     179,   180,   181,     0,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,   190,   191,     0,     0,     0,     0,
     214,   220,   221,   222,   223,   224,   225,     0,   226,   227,
     228,     0,     0,   229,   230,   231,   232,   233,   234,   235,
       0,     0,     0,     0,   389,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,   190,   191,     0,     0,     0,     0,   441,   220,
     221,   222,   223,   224,   225,     0,   226,   227,   228,     0,
       0,   229,   230,   231,   232,   233,   234,   235,     0,   244,
     176,   177,   178,   179,   180,   181,     0,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,   190,   191,     0,
     345,   220,   221,   222,   223,   224,   225,     0,   226,   227,
     228,     0,     0,   229,   230,   231,   232,   233,   234,   235,
       0,   345,   176,   177,   178,   179,   180,   181,     0,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   220,   221,   222,   223,   224,   225,     0,   226,   227,
     228,     0,     0,   229,   230,   231,   232,   233,   234,   235,
     221,   222,   223,   224,   225,     0,   226,   227,   228,     0,
       0,   229,   230,   231,   232,   233,   234,   235,   223,   224,
     225,     0,   226,   227,   228,     0,     0,   229,   230,   231,
     232,   233,   234,   235,   226,   227,   228,     0,     0,   229,
     230,   231,   232,   233,   234,   235,   227,   228,     0,     0,
     229,   230,   231,   232,   233,   234,   235
};

static const yytype_int16 yycheck[] =
{
      14,   106,   107,   105,   200,   214,    12,   370,    17,    23,
      85,    39,    14,    14,    17,     3,     4,     5,     6,    21,
      21,    35,   218,    12,    12,    93,    14,    15,    16,    25,
      18,    19,    46,    21,    22,    49,    12,    17,    12,    12,
      12,    29,    30,    39,    39,    33,    74,    53,    39,   154,
      64,    79,    23,    73,    39,    69,    12,    66,    39,    12,
      74,    39,    38,    66,    53,    39,    39,    13,    39,   137,
     138,    91,    60,   436,    62,    63,    78,    78,    71,    53,
      94,    95,    28,    39,    79,    73,    66,     0,    79,    74,
      78,    18,   160,   161,    79,    88,   110,    53,    79,    35,
     205,    79,    45,    39,   118,    32,    18,   121,    28,   123,
     473,    76,    39,   127,    79,   129,    14,   131,    61,    62,
      32,    52,    42,    13,    14,    23,   116,   365,    52,   367,
     144,   206,   207,   208,    14,   210,   150,   151,    28,     0,
      27,    12,    74,    23,   212,   213,   136,    79,     9,    39,
     394,    39,   361,    39,   398,     3,     4,     5,     6,    49,
      50,    51,    52,    12,    12,   240,    14,    15,    16,    27,
      18,    19,    12,    21,    22,     3,     4,     5,     6,   193,
     389,    29,    30,    27,    12,    33,    12,    12,   293,    73,
      73,   296,     8,     9,    10,    11,    24,    27,   300,   301,
     214,   215,   216,   217,    73,    73,   196,    27,   198,    17,
      12,    74,    60,    17,    62,    63,    12,    74,    13,    14,
     295,    74,   236,   237,    74,    73,     3,     4,     5,     6,
      78,   245,    60,    28,    62,    63,   304,    73,   306,    74,
     315,    73,   438,    13,    39,    73,    73,    12,   238,   239,
      78,    23,    28,    74,    49,    50,    51,    52,    73,   364,
       3,     4,     5,     6,    17,   279,   280,    17,   282,    12,
      77,   376,   377,    73,   379,   380,     3,     4,     5,     6,
       3,     4,     5,     6,    17,    12,    12,   392,    13,    12,
      28,    13,    28,    39,   399,    74,    39,    20,    17,   313,
      13,    72,    12,    66,    28,    74,    13,    14,   298,   299,
      74,   386,   387,    74,    66,    66,    39,    60,    66,    62,
      63,    28,    78,    39,   338,   430,   340,   432,    39,    66,
      73,    74,    74,    60,    73,    62,    63,    60,    18,    62,
      63,    18,    49,    50,    51,    52,    73,    74,    17,    37,
      73,   419,    73,    19,    74,    19,   424,    22,    25,    13,
      14,   429,    22,   431,    12,   433,    75,    66,    66,    77,
      19,     9,   362,   363,    28,    33,    19,   445,    19,   393,
     448,   449,   450,   397,    19,    19,   400,   401,   402,    19,
      52,   459,   308,   461,   462,    49,    50,    51,    52,    52,
     105,   469,   470,   471,   472,   312,   474,   421,    26,    27,
      -1,   363,   426,   427,   428,    66,    67,    68,    69,    70,
      71,    72,    -1,   437,   492,    -1,    -1,   441,   442,    -1,
      -1,    49,    50,    51,    52,    -1,    -1,    -1,   452,   453,
      -1,   455,   456,    -1,   458,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,   443,    -1,    12,   446,    -1,    -1,    -1,
      -1,   451,   106,   107,   454,   109,    -1,   457,   112,   113,
     114,   115,    -1,   487,   464,    -1,   466,   467,   468,    -1,
      -1,    -1,    39,    -1,    -1,   475,    -1,   477,   478,    -1,
      -1,    -1,    -1,   483,   484,   485,   486,   141,   488,    -1,
      -1,    -1,    -1,    60,   494,    62,    63,    -1,    -1,    -1,
     154,    -1,   156,    -1,   158,   159,    73,    58,    59,    -1,
      61,    62,    63,   167,    -1,    66,    67,    68,    69,    70,
      71,    72,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,
      -1,   205,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
     214,    -1,    -1,    -1,   218,    -1,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,   246,    -1,   248,    12,   250,    -1,   252,    -1,
     254,    -1,   256,    20,   258,    -1,   260,    -1,   262,    -1,
     264,    -1,   266,    -1,   268,    -1,   270,    -1,   272,    -1,
     274,    -1,   276,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,   287,    12,    -1,    14,    15,    16,   293,
      18,    19,   296,    60,    22,    62,    63,    39,   302,    -1,
      -1,    29,    30,    -1,    -1,    33,    73,    -1,    -1,    -1,
      -1,    39,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    -1,    60,    -1,    62,    63,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,   348,    73,    12,    -1,   352,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,   361,    -1,    -1,
     364,    12,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    22,   376,   377,    -1,   379,   380,    -1,    29,    30,
      -1,   385,    33,    -1,   388,   389,    -1,    -1,   392,     3,
       4,     5,     6,    -1,    60,   399,    62,    63,    12,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    73,    22,    60,
      -1,    62,    63,    -1,    -1,    29,    30,    -1,    -1,    33,
      -1,    -1,    73,    -1,    -1,    39,   430,    -1,   432,    -1,
      -1,    -1,    -1,    -1,   438,   439,   440,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    60,    -1,    62,    63,
      12,    -1,    14,    15,    16,    -1,    18,    19,    -1,    73,
      22,    -1,    -1,     3,     4,     5,     6,    29,    30,    -1,
      -1,    33,    12,    -1,    14,    15,    16,    39,    18,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    60,    39,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      60,    -1,    62,    63,    12,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    73,    22,     3,     4,     5,     6,    -1,
      -1,    29,    30,    -1,    12,    33,    -1,    15,    16,    -1,
      18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,     3,     4,     5,
       6,    -1,    60,    -1,    62,    63,    12,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    73,    22,     3,     4,     5,
       6,    -1,    -1,    29,    30,    -1,    12,    33,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
       3,     4,     5,     6,    60,    -1,    62,    63,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,     3,
       4,     5,     6,    -1,    60,    -1,    62,    63,    12,    -1,
      -1,    15,    16,    -1,    18,    19,    39,    73,    22,     3,
       4,     5,     6,    -1,    -1,    29,    30,    31,    12,    33,
      -1,    15,    16,    -1,    18,    19,    -1,    60,    22,    62,
      63,    -1,    -1,    -1,    -1,    29,    30,    31,    -1,    33,
      73,    -1,     3,     4,     5,     6,    60,    -1,    62,    63,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,     3,     4,     5,     6,    -1,    60,    -1,    62,    63,
      12,    -1,    14,    15,    16,    -1,    18,    19,    39,    73,
      22,     3,     4,     5,     6,    -1,    -1,    29,    30,    -1,
      12,    33,    14,    15,    16,    -1,    18,    19,    -1,    60,
      22,    62,    63,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    73,    -1,     3,     4,     5,     6,    60,    -1,
      62,    63,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,     3,     4,     5,     6,    -1,    60,    -1,
      62,    63,    12,    -1,    14,    15,    16,    -1,    18,    19,
      39,    73,    22,     3,     4,     5,     6,    -1,    -1,    29,
      30,    -1,    12,    33,    14,    15,    16,    -1,    18,    19,
      -1,    60,    22,    62,    63,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    73,    -1,     3,     4,     5,     6,
      60,    -1,    62,    63,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,     3,     4,     5,     6,    -1,
      60,    -1,    62,    63,    12,    -1,    14,    15,    16,    -1,
      18,    19,    39,    73,    22,     3,     4,     5,     6,    -1,
      -1,    29,    30,    -1,    12,    33,    14,    15,    16,    -1,
      18,    19,    -1,    60,    22,    62,    63,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    33,    73,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,     3,     4,     5,
       6,    -1,    60,    -1,    62,    63,    12,    -1,    -1,    15,
      16,    -1,    18,    19,    -1,    73,    22,     3,     4,     5,
       6,    -1,    -1,    29,    30,    -1,    12,    33,    34,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,     3,
       4,     5,     6,    -1,    60,    -1,    62,    63,    12,    -1,
      -1,    15,    16,    -1,    18,    19,    -1,    73,    22,     3,
       4,     5,     6,    -1,    -1,    29,    30,    -1,    12,    33,
      34,    15,    16,    -1,    18,    19,    -1,    -1,    22,     3,
       4,     5,     6,    -1,    -1,    29,    30,    -1,    12,    33,
      -1,    15,    16,    -1,    -1,    19,    60,    -1,    62,    63,
      -1,     3,     4,     5,     6,    29,    -1,    -1,    -1,    73,
      12,    -1,    -1,    15,    16,    39,    60,    19,    62,    63,
      -1,     3,     4,     5,     6,    -1,    -1,    29,    -1,    73,
      12,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,    63,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    73,
      12,    -1,    -1,     3,     4,     5,     6,    39,    60,    -1,
      62,    63,    12,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    73,    -1,    -1,    -1,    -1,    12,    39,    60,    -1,
      62,    63,    -1,     3,     4,     5,     6,    -1,    -1,    39,
      -1,    73,    12,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    63,    -1,    39,    -1,     3,     4,     5,     6,    -1,
      60,    73,    62,    63,    12,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    73,    60,    -1,    62,    63,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    73,    -1,    12,
      60,    39,    62,    63,    -1,     3,     4,     5,     6,     3,
       4,     5,     6,    73,    12,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    60,    -1,    62,    63,    39,     3,     4,     5,
       6,     3,     4,     5,     6,    73,    12,    -1,    -1,    -1,
      12,    39,    -1,    -1,    -1,    39,    -1,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    60,    39,    62,    63,    60,    39,    62,    63,
      -1,     3,     4,     5,     6,    73,    -1,    -1,    -1,    73,
      12,    -1,    -1,    -1,    60,    -1,    62,    63,    60,    -1,
      62,    63,    -1,     3,     4,     5,     6,    73,    -1,    -1,
      -1,    73,    12,    -1,    -1,    -1,    -1,    39,     3,     4,
       5,     6,     3,     4,     5,     6,    -1,    12,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    60,    39,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    62,    63,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    60,    -1,    62,    63,    60,
      39,    62,    63,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    73,    -1,    -1,    54,    55,    56,    57,    58,
      59,    39,    61,    62,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    -1,    -1,    54,    55,    56,    57,
      58,    59,    39,    61,    62,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    -1,    74,    54,    55,    56,
      57,    58,    59,    39,    61,    62,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    -1,    74,    54,    55,
      56,    57,    58,    59,    -1,    61,    62,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72,    54,    55,    56,
      57,    58,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    54,    55,    56,    57,    58,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    54,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    -1,    74,
      54,    55,    56,    57,    58,    59,    -1,    61,    62,    63,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    -1,
      74,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      -1,    74,    54,    55,    56,    57,    58,    59,    -1,    61,
      62,    63,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    54,    55,    56,    57,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      55,    56,    57,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    57,    58,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    61,    62,    63,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    62,    63,    -1,    -1,
      66,    67,    68,    69,    70,    71,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    49,    50,    51,    52,    81,    82,    83,
      84,    85,   105,    12,    12,    52,    52,     0,    84,    27,
      39,   100,   100,    12,    39,    13,    14,    28,    86,    87,
      88,    89,   105,   100,    12,    27,    12,    14,    87,    13,
      28,    14,    86,    73,   100,    73,    27,    12,    12,    27,
      14,    12,    39,    53,    90,    91,    92,    93,    94,    90,
     100,    73,    73,   100,    27,    17,    91,    92,    12,    74,
      39,    79,    39,    79,    74,    90,    90,   100,     8,     9,
      10,    11,   120,    39,    39,    17,   100,    12,    39,    93,
      12,    39,    94,   100,    74,    74,    73,   120,     3,     4,
       5,     6,    12,    14,    15,    16,    18,    19,    22,    29,
      30,    33,    60,    62,    63,    73,    95,    96,    97,    98,
      99,   101,   102,   106,   107,   109,   110,   111,   114,   115,
     118,   119,   121,    93,    94,    14,    95,   100,   100,    74,
      73,    73,   122,   123,    13,    12,   103,   104,   103,   104,
     118,   119,   118,   119,    23,    12,    73,   118,    18,    32,
     100,   108,    12,    38,   118,   118,   118,    39,   118,    14,
      96,   100,   100,   100,   100,   100,    54,    55,    56,    57,
      58,    59,    61,    62,    63,    66,    67,    68,    69,    70,
      71,    72,   100,    28,    14,    14,    95,    14,    95,    74,
      39,    74,   118,   124,   100,    73,    17,    17,    17,    66,
      17,    66,   100,   100,    77,    77,   118,   119,    73,   118,
      54,    55,    56,    57,    58,    59,    61,    62,    63,    66,
      67,    68,    69,    70,    71,    72,   118,   118,    95,    95,
      17,    12,   118,    39,    74,    13,    39,   118,    39,   118,
      39,   118,    39,   118,    39,   118,    39,   118,    39,   118,
      39,   118,    39,   118,    39,   118,    39,   118,    39,   118,
      39,   118,    39,   118,    39,   118,    39,   118,   100,    28,
      13,    14,    28,    14,   124,    39,    74,    79,   118,   119,
     120,   120,   120,    39,   120,    20,    39,   118,    95,    95,
      15,    16,    19,    97,   100,   118,   100,   100,   100,   124,
     100,   100,    31,    31,   120,    17,    39,    74,    74,   100,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   100,   100,    13,   100,
      28,    39,    74,    74,   118,    74,    74,    66,    66,    66,
     118,   119,    66,   120,   119,    14,    14,    12,   104,   104,
     118,    78,    95,    95,    23,   116,   117,   116,   108,   100,
      66,   120,    74,   100,   100,    74,    39,    39,   118,    39,
      39,   118,    73,    18,    18,    73,    17,    17,    66,    77,
      97,    14,    21,    78,   112,   113,    14,    78,   112,    24,
      78,   118,   119,    14,   117,    14,   121,    37,   119,   119,
     119,   119,    74,   118,   120,   120,    19,   118,   119,   100,
      14,    78,   113,    19,   100,    14,    78,   118,   119,   100,
      25,   100,    25,   100,    22,    22,    25,    12,    75,    66,
      66,    77,    77,    95,    19,   100,    95,    19,   100,   100,
     100,    95,   118,   119,    95,   118,   119,    95,   121,   100,
     124,   100,   100,    14,    95,    14,    95,    95,    95,   100,
     100,   100,   100,    35,   100,    95,    76,    95,    95,    19,
      14,    19,    14,    95,    95,    95,    95,   121,    95,    34,
      19,    19,   100,    34,    95,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    80,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      93,    93,    93,    93,    94,    95,    95,    96,    96,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   104,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     6,
       7,     7,     8,     1,     2,     1,     1,     9,    10,    10,
      11,     9,    10,    10,    11,     0,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     3,     4,     1,     3,     4,
       3,     5,     4,     6,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       2,     2,     1,     2,     7,     7,     7,     7,     5,     5,
       6,     6,     4,     4,     2,    10,     4,     4,     1,     1,
       1,     1,     1,     2,     2,     6,     6,     5,     5,     3,
       3,    11,    13,    10,     7,     7,    10,    10,     8,     8,
      11,    11,     1,     2,     5,     5,     4,     6,     7,     7,
       1,     2,     4,     4,     5,     5,     6,     6,     6,     6,
       4,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       3,     3,     3,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     4,
       2,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     4,     3,     2,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* root: program_items_list  */
#line 238 "parser.y"
                         {(yyval.programItemList) = root = (yyvsp[0].programItemList); printf("root 1\n");}
#line 2158 "parser.tab.c"
    break;

  case 3: /* program_items_list: %empty  */
#line 241 "parser.y"
                    {(yyval.programItemList) = 0; printf("program_items_list 1\n");}
#line 2164 "parser.tab.c"
    break;

  case 4: /* program_items_list: program_items_list_not_empty  */
#line 242 "parser.y"
                                                {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty)); printf("program_items_list 2\n");}
#line 2170 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_item  */
#line 245 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); printf("program_items_list_not_empty 1\n");}
#line 2176 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 246 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); printf("program_items_list_not_empty 2\n");}
#line 2182 "parser.tab.c"
    break;

  case 7: /* program_item: module  */
#line 249 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0); printf("program_item 1\n");}
#line 2188 "parser.tab.c"
    break;

  case 8: /* program_item: IMPORTS IDENTIFIER stmt_ends  */
#line 250 "parser.y"
                                             {(yyval.programItem) =  createProgramItem(0,(yyvsp[-1].id_var_name)); printf("program_item 2\n");}
#line 2194 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE stmt_ends  */
#line 254 "parser.y"
                                                         {(yyval.module) = createModule((yyvsp[-4].id_var_name),0); printf("module 1\n");}
#line 2200 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends  */
#line 255 "parser.y"
                                                                               {(yyval.module) = createModule((yyvsp[-5].id_var_name),(yyvsp[-3].functionOrSubList)); printf("module 2\n");}
#line 2206 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE stmt_ends  */
#line 256 "parser.y"
                                                                {(yyval.module) = createModule((yyvsp[-4].id_var_name),0); printf("module 3\n");}
#line 2212 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends  */
#line 257 "parser.y"
                                                                                      {(yyval.module) = createModule((yyvsp[-5].id_var_name),(yyvsp[-3].functionOrSubList)); printf("module 4\n");}
#line 2218 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 261 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub)); printf("functions_or_sub_list 1\n");}
#line 2224 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list function_or_sub  */
#line 262 "parser.y"
                                                             {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-1].functionOrSubList),(yyvsp[0].functionOrSub)); printf("functions_or_sub_list 2\n");}
#line 2230 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 265 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function)); printf("function_or_sub 1\n");}
#line 2236 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 266 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0); printf("function_or_sub 2\n");}
#line 2242 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 269 "parser.y"
                                                                                              {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 1\n");}
#line 2248 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 270 "parser.y"
                                                                                                        {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 4\n");}
#line 2254 "parser.tab.c"
    break;

  case 19: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 271 "parser.y"
                                                                                                     {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 7\n");}
#line 2260 "parser.tab.c"
    break;

  case 20: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 272 "parser.y"
                                                                                                               {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 10\n");}
#line 2266 "parser.tab.c"
    break;

  case 21: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 276 "parser.y"
                                                                                    {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2272 "parser.tab.c"
    break;

  case 22: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 277 "parser.y"
                                                                                              {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2278 "parser.tab.c"
    break;

  case 23: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 278 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2284 "parser.tab.c"
    break;

  case 24: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 279 "parser.y"
                                                                                                   {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2290 "parser.tab.c"
    break;

  case 25: /* parameterlist_or_empty: %empty  */
#line 282 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2296 "parser.tab.c"
    break;

  case 26: /* parameterlist_or_empty: parameterlist_with_type  */
#line 283 "parser.y"
                                                {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2302 "parser.tab.c"
    break;

  case 27: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type END_OF_LINE  */
#line 284 "parser.y"
                                                                        {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2308 "parser.tab.c"
    break;

  case 28: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type  */
#line 285 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2314 "parser.tab.c"
    break;

  case 29: /* parameterlist_or_empty: parameterlist_with_type END_OF_LINE  */
#line 286 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2320 "parser.tab.c"
    break;

  case 30: /* parameterlist_or_empty: parameterlist_without_type  */
#line 287 "parser.y"
                                                   {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2326 "parser.tab.c"
    break;

  case 31: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type END_OF_LINE  */
#line 288 "parser.y"
                                                                           {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2332 "parser.tab.c"
    break;

  case 32: /* parameterlist_or_empty: parameterlist_without_type END_OF_LINE  */
#line 289 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2338 "parser.tab.c"
    break;

  case 33: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type  */
#line 290 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2344 "parser.tab.c"
    break;

  case 34: /* parameterlist_with_type: parameter_with_type  */
#line 293 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2350 "parser.tab.c"
    break;

  case 35: /* parameterlist_with_type: parameterlist_with_type ',' parameter_with_type  */
#line 294 "parser.y"
                                                                         {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-2].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2356 "parser.tab.c"
    break;

  case 36: /* parameterlist_with_type: parameterlist_with_type ',' END_OF_LINE parameter_with_type  */
#line 295 "parser.y"
                                                                                     {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2362 "parser.tab.c"
    break;

  case 37: /* parameterlist_without_type: parameter_without_type  */
#line 299 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2368 "parser.tab.c"
    break;

  case 38: /* parameterlist_without_type: parameterlist_without_type ',' parameter_without_type  */
#line 300 "parser.y"
                                                                                  {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-2].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2374 "parser.tab.c"
    break;

  case 39: /* parameterlist_without_type: parameterlist_without_type ',' END_OF_LINE parameter_without_type  */
#line 301 "parser.y"
                                                                                              {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2380 "parser.tab.c"
    break;

  case 40: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 305 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2386 "parser.tab.c"
    break;

  case 41: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 306 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2392 "parser.tab.c"
    break;

  case 42: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal  */
#line 307 "parser.y"
                                                       {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2398 "parser.tab.c"
    break;

  case 43: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal '(' ')'  */
#line 308 "parser.y"
                                                               {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2404 "parser.tab.c"
    break;

  case 44: /* parameter_without_type: IDENTIFIER  */
#line 312 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2410 "parser.tab.c"
    break;

  case 45: /* stmt_list: stmt  */
#line 318 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); printf("stmt_list 1\n");}
#line 2416 "parser.tab.c"
    break;

  case 46: /* stmt_list: stmt_list stmt  */
#line 319 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); printf("stmt_list 2\n");}
#line 2422 "parser.tab.c"
    break;

  case 47: /* stmt: multi_line_stmt  */
#line 323 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)}); printf("stmt 1\n");}
#line 2428 "parser.tab.c"
    break;

  case 48: /* stmt: single_line_stmt stmt_ends  */
#line 324 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)}); printf("stmt 2\n");}
#line 2434 "parser.tab.c"
    break;

  case 49: /* single_line_stmt: if_stmt_single_line  */
#line 328 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)}); printf("single_line_stmt 1\n");}
#line 2440 "parser.tab.c"
    break;

  case 50: /* single_line_stmt: decl_stmt_single_line  */
#line 329 "parser.y"
                                                        {(yyval.statementSingle) = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmtSingle)}); printf("single_line_stmt 2\n");}
#line 2446 "parser.tab.c"
    break;

  case 51: /* single_line_stmt: expr_singleline  */
#line 330 "parser.y"
                                                  {(yyval.statementSingle) = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=(yyvsp[0].expression)}); printf("single_line_stmt 3\n");}
#line 2452 "parser.tab.c"
    break;

  case 52: /* single_line_stmt: return_stmt  */
#line 331 "parser.y"
                                              {(yyval.statementSingle) = createStatementSingle(ST_RETURN, (StmtSingleValue){.returnStmt=(yyvsp[0].returnStmt)}); printf("single_line_stmt 4\n");}
#line 2458 "parser.tab.c"
    break;

  case 53: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 334 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)}); printf("multi_line_stmt 1\n");}
#line 2464 "parser.tab.c"
    break;

  case 54: /* multi_line_stmt: decl_stmt stmt_ends  */
#line 335 "parser.y"
                                     {(yyval.statementMulti) = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=(yyvsp[-1].declStmtMulti)}); printf("multi_line_stmt 2\n");}
#line 2470 "parser.tab.c"
    break;

  case 55: /* multi_line_stmt: expr_multiline stmt_ends  */
#line 336 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=(yyvsp[-1].expression)}); printf("multi_line_stmt 3\n");}
#line 2476 "parser.tab.c"
    break;

  case 56: /* multi_line_stmt: while_stmt stmt_ends  */
#line 337 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)}); printf("multi_line_stmt 4\n");}
#line 2482 "parser.tab.c"
    break;

  case 57: /* multi_line_stmt: do_loop_stmt  */
#line 338 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)}); printf("multi_line_stmt 5\n");}
#line 2488 "parser.tab.c"
    break;

  case 58: /* multi_line_stmt: for_loop_stmt  */
#line 339 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)}); printf("multi_line_stmt 6\n");}
#line 2494 "parser.tab.c"
    break;

  case 59: /* multi_line_stmt: for_each_loop_stmt  */
#line 340 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)}); printf("multi_line_stmt 7\n");}
#line 2500 "parser.tab.c"
    break;

  case 60: /* multi_line_stmt: select_stmt stmt_ends  */
#line 341 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)}); printf("multi_line_stmt 8\n");}
#line 2506 "parser.tab.c"
    break;

  case 61: /* return_stmt: RETURN expr_singleline  */
#line 344 "parser.y"
                                    {(yyval.returnStmt) = createReturnStmt((yyvsp[0].expression)); printf("return_stmt 1\n");}
#line 2512 "parser.tab.c"
    break;

  case 62: /* stmt_ends: END_OF_LINE  */
#line 347 "parser.y"
                       { }
#line 2518 "parser.tab.c"
    break;

  case 63: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 348 "parser.y"
                            { }
#line 2524 "parser.tab.c"
    break;

  case 64: /* decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 354 "parser.y"
                                                                          {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 1\n");}
#line 2530 "parser.tab.c"
    break;

  case 65: /* decl_stmt: CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 355 "parser.y"
                                                                                     {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 2\n");}
#line 2536 "parser.tab.c"
    break;

  case 66: /* decl_stmt: DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 356 "parser.y"
                                                                        {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 3\n");}
#line 2542 "parser.tab.c"
    break;

  case 67: /* decl_stmt: DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 357 "parser.y"
                                                                                   {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 4\n");}
#line 2548 "parser.tab.c"
    break;

  case 68: /* decl_stmt: DIM var_name '=' END_OF_LINE expr_multiline  */
#line 358 "parser.y"
                                                       {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameMulti), 0, (yyvsp[0].expression)); printf("decl_stmt_multi 5\n");}
#line 2554 "parser.tab.c"
    break;

  case 69: /* decl_stmt: DIM var_name_singleline '=' END_OF_LINE expr_multiline  */
#line 359 "parser.y"
                                                                  {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameSingle), 0, (yyvsp[0].expression)); printf("decl_stmt_multi 6\n");}
#line 2560 "parser.tab.c"
    break;

  case 70: /* decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline  */
#line 363 "parser.y"
                                                                                      {(yyval.declStmtSingle) = createDeclStmtSingle(1, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression)); printf("decl_stmt_single 1\n");}
#line 2566 "parser.tab.c"
    break;

  case 71: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal '=' expr_singleline  */
#line 364 "parser.y"
                                                                                                        {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression)); printf("decl_stmt_single 2\n");}
#line 2572 "parser.tab.c"
    break;

  case 72: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal  */
#line 365 "parser.y"
                                                                                    {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), (yyvsp[0].vt), 0); printf("decl_stmt_single 3\n");}
#line 2578 "parser.tab.c"
    break;

  case 73: /* decl_stmt_single_line: DIM var_name_singleline '=' expr_singleline  */
#line 366 "parser.y"
                                                                                       {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), 0, (yyvsp[0].expression)); printf("decl_stmt_single 4\n");}
#line 2584 "parser.tab.c"
    break;

  case 74: /* decl_stmt_single_line: DIM var_name_singleline  */
#line 367 "parser.y"
                                                                   {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[0].varNameSingle), 0, 0); printf("decl_stmt_single 5\n");}
#line 2590 "parser.tab.c"
    break;

  case 75: /* decl_stmt_single_line: DIM var_name_singleline '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 368 "parser.y"
                                                                                             { printf("decl_stmt_single 6 (bad) \n");}
#line 2596 "parser.tab.c"
    break;

  case 76: /* var_name: IDENTIFIER '(' expr_multiline ')'  */
#line 372 "parser.y"
                                           {(yyval.varNameMulti) = createVarNameMulti((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name_multi 1\n");}
#line 2602 "parser.tab.c"
    break;

  case 77: /* var_name_singleline: IDENTIFIER '(' expr_singleline ')'  */
#line 375 "parser.y"
                                                       {(yyval.varNameSingle) = createVarNameSingle((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name_single 1\n");}
#line 2608 "parser.tab.c"
    break;

  case 78: /* var_name_singleline: IDENTIFIER  */
#line 376 "parser.y"
                                                {(yyval.varNameSingle) = createVarNameSingle((yyvsp[0].id_var_name), 0); printf("var_name_single 1\n");}
#line 2614 "parser.tab.c"
    break;

  case 85: /* while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE  */
#line 391 "parser.y"
                                                               {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2620 "parser.tab.c"
    break;

  case 86: /* while_stmt: WHILE expr_singleline stmt_ends stmt_list END WHILE  */
#line 392 "parser.y"
                                                                {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2626 "parser.tab.c"
    break;

  case 87: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP stmt_ends  */
#line 397 "parser.y"
                                                           {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-3].doLoopCondition), (yyvsp[-2].stmtList)); printf("do_loop_stmt 1\n"); }
#line 2632 "parser.tab.c"
    break;

  case 88: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 398 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));printf("do_loop_stmt 2\n"); }
#line 2638 "parser.tab.c"
    break;

  case 89: /* do_loop_condition: UNTIL expr_singleline stmt_ends  */
#line 401 "parser.y"
                                                   {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression)); printf("do_loop_condition UNTIL\n");}
#line 2644 "parser.tab.c"
    break;

  case 90: /* do_loop_condition: WHILE expr_singleline stmt_ends  */
#line 402 "parser.y"
                                                                   {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression)); printf("do_loop_condition WHILE\n");}
#line 2650 "parser.tab.c"
    break;

  case 91: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT  */
#line 407 "parser.y"
                                                                                                                       {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-9].id_var_name), (yyvsp[-7].vt), (yyvsp[-5].expression), (yyvsp[-3].expression), 0, (yyvsp[-1].stmtList));}
#line 2656 "parser.tab.c"
    break;

  case 92: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT  */
#line 408 "parser.y"
                                                                                                                                                            {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-11].id_var_name), (yyvsp[-9].vt), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].stmtList));}
#line 2662 "parser.tab.c"
    break;

  case 93: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT  */
#line 413 "parser.y"
                                                                                                {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-7].id_var_name), (yyvsp[-5].vt), (yyvsp[-3].id_var_name), (yyvsp[-1].stmtList));}
#line 2668 "parser.tab.c"
    break;

  case 94: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF  */
#line 418 "parser.y"
                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 1\n");}
#line 2674 "parser.tab.c"
    break;

  case 95: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list END IF  */
#line 419 "parser.y"
                                                                       {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 2\n");}
#line 2680 "parser.tab.c"
    break;

  case 96: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 420 "parser.y"
                                                                                                               {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 3\n");}
#line 2686 "parser.tab.c"
    break;

  case 97: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 421 "parser.y"
                                                                                                                {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 4\n");}
#line 2692 "parser.tab.c"
    break;

  case 98: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF  */
#line 422 "parser.y"
                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 5\n");}
#line 2698 "parser.tab.c"
    break;

  case 99: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF  */
#line 423 "parser.y"
                                                                                   {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 6\n");}
#line 2704 "parser.tab.c"
    break;

  case 100: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 424 "parser.y"
                                                                                                                           {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 7\n");}
#line 2710 "parser.tab.c"
    break;

  case 101: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 425 "parser.y"
                                                                                                                            {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 8\n");}
#line 2716 "parser.tab.c"
    break;

  case 102: /* elseif_list: elseif  */
#line 428 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf)); printf("elseif_list 1\n");}
#line 2722 "parser.tab.c"
    break;

  case 103: /* elseif_list: elseif_list elseif  */
#line 429 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf)); printf("elseif_list 2\n");}
#line 2728 "parser.tab.c"
    break;

  case 104: /* elseif: ELSEIF expr_multiline THEN stmt_ends stmt_list  */
#line 432 "parser.y"
                                                       {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 1\n");}
#line 2734 "parser.tab.c"
    break;

  case 105: /* elseif: ELSEIF expr_singleline THEN stmt_ends stmt_list  */
#line 433 "parser.y"
                                                        {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 2\n");}
#line 2740 "parser.tab.c"
    break;

  case 106: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt  */
#line 435 "parser.y"
                                                               {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0); printf("if_stmt_single 1\n");}
#line 2746 "parser.tab.c"
    break;

  case 107: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  */
#line 436 "parser.y"
                                                                                     {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle)); printf("if_stmt_single 2\n");}
#line 2752 "parser.tab.c"
    break;

  case 108: /* select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT  */
#line 441 "parser.y"
                                                                        {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2758 "parser.tab.c"
    break;

  case 109: /* select_stmt: SELECT CASE expr_multiline stmt_ends case_list END SELECT  */
#line 442 "parser.y"
                                                                       {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2764 "parser.tab.c"
    break;

  case 110: /* case_list: case_stmt  */
#line 445 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt));}
#line 2770 "parser.tab.c"
    break;

  case 111: /* case_list: case_list case_stmt  */
#line 446 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt));}
#line 2776 "parser.tab.c"
    break;

  case 112: /* case_stmt: CASE expr_multiline stmt_ends stmt_list  */
#line 449 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2782 "parser.tab.c"
    break;

  case 113: /* case_stmt: CASE expr_singleline stmt_ends stmt_list  */
#line 450 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2788 "parser.tab.c"
    break;

  case 114: /* case_stmt: CASE IS expr_multiline stmt_ends stmt_list  */
#line 451 "parser.y"
                                                     {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2794 "parser.tab.c"
    break;

  case 115: /* case_stmt: CASE IS expr_singleline stmt_ends stmt_list  */
#line 452 "parser.y"
                                                      {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2800 "parser.tab.c"
    break;

  case 116: /* case_stmt: CASE expr_multiline TO expr_multiline stmt_ends stmt_list  */
#line 453 "parser.y"
                                                                    {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2806 "parser.tab.c"
    break;

  case 117: /* case_stmt: CASE expr_multiline TO expr_singleline stmt_ends stmt_list  */
#line 454 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2812 "parser.tab.c"
    break;

  case 118: /* case_stmt: CASE expr_singleline TO expr_multiline stmt_ends stmt_list  */
#line 455 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2818 "parser.tab.c"
    break;

  case 119: /* case_stmt: CASE expr_singleline TO expr_singleline stmt_ends stmt_list  */
#line 456 "parser.y"
                                                                      {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2824 "parser.tab.c"
    break;

  case 120: /* case_stmt: CASE ELSE stmt_ends stmt_list  */
#line 457 "parser.y"
                                        {(yyval.caseStmt) = createCaseStmt(0, 0, 0, (yyvsp[0].stmtList));}
#line 2830 "parser.tab.c"
    break;

  case 121: /* expr_singleline: basic_literal_value  */
#line 463 "parser.y"
                                     {(yyval.expression) = (yyvsp[0].expression); printf("expr_single 1\n");}
#line 2836 "parser.tab.c"
    break;

  case 122: /* expr_singleline: '-' expr_singleline  */
#line 464 "parser.y"
                                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression)); printf("expr_single 1\n");}
#line 2842 "parser.tab.c"
    break;

  case 123: /* expr_singleline: '+' expr_singleline  */
#line 465 "parser.y"
                                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression)); printf("expr_single 2\n");}
#line 2848 "parser.tab.c"
    break;

  case 124: /* expr_singleline: expr_singleline '+' expr_singleline  */
#line 466 "parser.y"
                                          {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));  printf("expr_single 3\n");}
#line 2854 "parser.tab.c"
    break;

  case 125: /* expr_singleline: expr_singleline '-' expr_singleline  */
#line 467 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));  printf("expr_single 4\n");}
#line 2860 "parser.tab.c"
    break;

  case 126: /* expr_singleline: expr_singleline '*' expr_singleline  */
#line 468 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 5\n");}
#line 2866 "parser.tab.c"
    break;

  case 127: /* expr_singleline: expr_singleline '/' expr_singleline  */
#line 469 "parser.y"
                                          {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 6\n");}
#line 2872 "parser.tab.c"
    break;

  case 128: /* expr_singleline: expr_singleline INT_DIV expr_singleline  */
#line 470 "parser.y"
                                              {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 7\n");}
#line 2878 "parser.tab.c"
    break;

  case 129: /* expr_singleline: expr_singleline '=' expr_singleline  */
#line 471 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 8\n");}
#line 2884 "parser.tab.c"
    break;

  case 130: /* expr_singleline: expr_singleline '<' expr_singleline  */
#line 472 "parser.y"
                                          {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 9\n");}
#line 2890 "parser.tab.c"
    break;

  case 131: /* expr_singleline: expr_singleline '>' expr_singleline  */
#line 473 "parser.y"
                                          {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 10\n");}
#line 2896 "parser.tab.c"
    break;

  case 132: /* expr_singleline: expr_singleline '^' expr_singleline  */
#line 474 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 11\n");}
#line 2902 "parser.tab.c"
    break;

  case 133: /* expr_singleline: expr_singleline NOT_EQUAL expr_singleline  */
#line 475 "parser.y"
                                                {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 12\n");}
#line 2908 "parser.tab.c"
    break;

  case 134: /* expr_singleline: expr_singleline LESS_OR_EQUAL expr_singleline  */
#line 476 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 13\n");}
#line 2914 "parser.tab.c"
    break;

  case 135: /* expr_singleline: expr_singleline MORE_OR_EQUAL expr_singleline  */
#line 477 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 14\n");}
#line 2920 "parser.tab.c"
    break;

  case 136: /* expr_singleline: expr_singleline '&' expr_singleline  */
#line 478 "parser.y"
                                          {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 15\n");}
#line 2926 "parser.tab.c"
    break;

  case 137: /* expr_singleline: '(' expr_singleline ')'  */
#line 479 "parser.y"
                              {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression)); printf("expr_single 16\n");}
#line 2932 "parser.tab.c"
    break;

  case 138: /* expr_singleline: IDENTIFIER  */
#line 480 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)}); printf("expr_single 17\n");}
#line 2938 "parser.tab.c"
    break;

  case 139: /* expr_singleline: IDENTIFIER arguments_singleline  */
#line 481 "parser.y"
                                      {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList)); printf("expr_single 18\n");}
#line 2944 "parser.tab.c"
    break;

  case 140: /* expr_singleline: expr_singleline AND expr_singleline  */
#line 482 "parser.y"
                                          {(yyval.expression) = createExpression(ET_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 19\n");}
#line 2950 "parser.tab.c"
    break;

  case 141: /* expr_singleline: expr_singleline OR expr_singleline  */
#line 483 "parser.y"
                                         {(yyval.expression) = createExpression(ET_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 20\n");}
#line 2956 "parser.tab.c"
    break;

  case 142: /* expr_singleline: expr_singleline XOR expr_singleline  */
#line 484 "parser.y"
                                          {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 21\n");}
#line 2962 "parser.tab.c"
    break;

  case 143: /* expr_singleline: NOT expr_singleline  */
#line 485 "parser.y"
                          {(yyval.expression) = createExpression(ET_NOT, 0, (yyvsp[0].expression)); printf("expr_single 22\n");}
#line 2968 "parser.tab.c"
    break;

  case 144: /* expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline  */
#line 488 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2974 "parser.tab.c"
    break;

  case 145: /* expr_multiline: expr_singleline '-' END_OF_LINE expr_singleline  */
#line 489 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2980 "parser.tab.c"
    break;

  case 146: /* expr_multiline: expr_singleline '*' END_OF_LINE expr_singleline  */
#line 490 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2986 "parser.tab.c"
    break;

  case 147: /* expr_multiline: expr_singleline '/' END_OF_LINE expr_singleline  */
#line 491 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2992 "parser.tab.c"
    break;

  case 148: /* expr_multiline: expr_singleline INT_DIV END_OF_LINE expr_singleline  */
#line 492 "parser.y"
                                                                    {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2998 "parser.tab.c"
    break;

  case 149: /* expr_multiline: expr_singleline '=' END_OF_LINE expr_singleline  */
#line 493 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3004 "parser.tab.c"
    break;

  case 150: /* expr_multiline: expr_singleline '<' END_OF_LINE expr_singleline  */
#line 494 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3010 "parser.tab.c"
    break;

  case 151: /* expr_multiline: expr_singleline '>' END_OF_LINE expr_singleline  */
#line 495 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3016 "parser.tab.c"
    break;

  case 152: /* expr_multiline: expr_singleline '^' END_OF_LINE expr_singleline  */
#line 496 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3022 "parser.tab.c"
    break;

  case 153: /* expr_multiline: expr_singleline NOT_EQUAL END_OF_LINE expr_singleline  */
#line 497 "parser.y"
                                                                      {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3028 "parser.tab.c"
    break;

  case 154: /* expr_multiline: expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline  */
#line 498 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3034 "parser.tab.c"
    break;

  case 155: /* expr_multiline: expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline  */
#line 499 "parser.y"
                                                                          {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3040 "parser.tab.c"
    break;

  case 156: /* expr_multiline: expr_singleline '&' END_OF_LINE expr_singleline  */
#line 500 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3046 "parser.tab.c"
    break;

  case 157: /* expr_multiline: '(' END_OF_LINE expr_singleline ')'  */
#line 501 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression));}
#line 3052 "parser.tab.c"
    break;

  case 158: /* expr_multiline: '(' END_OF_LINE expr_singleline END_OF_LINE ')'  */
#line 502 "parser.y"
                                                                {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 3058 "parser.tab.c"
    break;

  case 159: /* expr_multiline: '(' expr_singleline END_OF_LINE ')'  */
#line 503 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 3064 "parser.tab.c"
    break;

  case 160: /* expr_multiline: IDENTIFIER arguments_multiline  */
#line 504 "parser.y"
                                               {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList));}
#line 3070 "parser.tab.c"
    break;

  case 161: /* expr_multiline: expr_singleline AND END_OF_LINE expr_singleline  */
#line 505 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_AND, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3076 "parser.tab.c"
    break;

  case 162: /* expr_multiline: expr_singleline OR END_OF_LINE expr_singleline  */
#line 506 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_OR, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3082 "parser.tab.c"
    break;

  case 163: /* expr_multiline: expr_singleline XOR END_OF_LINE expr_singleline  */
#line 507 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3088 "parser.tab.c"
    break;

  case 164: /* basic_literal: INT  */
#line 511 "parser.y"
                   {(yyval.vt) = VT_INTEGER; printf("basic_literal int\n");}
#line 3094 "parser.tab.c"
    break;

  case 165: /* basic_literal: STRING  */
#line 512 "parser.y"
                     {(yyval.vt) = VT_STRING; printf("basic_literal str\n");}
#line 3100 "parser.tab.c"
    break;

  case 166: /* basic_literal: BOOLEAN  */
#line 513 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN; printf("basic_literal bool\n");}
#line 3106 "parser.tab.c"
    break;

  case 167: /* basic_literal: DOUBLE  */
#line 514 "parser.y"
                     {(yyval.vt) = VT_DOUBLE; printf("basic_literal double\n");}
#line 3112 "parser.tab.c"
    break;

  case 168: /* basic_literal_value: INT_VALUE  */
#line 517 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)}); printf("basic_literal_value int\n");}
#line 3118 "parser.tab.c"
    break;

  case 169: /* basic_literal_value: STRING_VALUE  */
#line 518 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)}); printf("basic_literal_value str\n");}
#line 3124 "parser.tab.c"
    break;

  case 170: /* basic_literal_value: BOOLEAN_VALUE  */
#line 519 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)}); printf("basic_literal_value bool\n");}
#line 3130 "parser.tab.c"
    break;

  case 171: /* basic_literal_value: DOUBLE_VALUE  */
#line 520 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)}); printf("basic_literal_value double\n");}
#line 3136 "parser.tab.c"
    break;

  case 172: /* arguments_multiline: '(' END_OF_LINE expr_list ')'  */
#line 525 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3142 "parser.tab.c"
    break;

  case 173: /* arguments_multiline: '(' END_OF_LINE expr_list END_OF_LINE ')'  */
#line 526 "parser.y"
                                                               {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3148 "parser.tab.c"
    break;

  case 174: /* arguments_multiline: '(' expr_list END_OF_LINE ')'  */
#line 527 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3154 "parser.tab.c"
    break;

  case 175: /* arguments_singleline: '(' expr_list ')'  */
#line 531 "parser.y"
                                        {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3160 "parser.tab.c"
    break;

  case 176: /* arguments_singleline: '(' ')'  */
#line 532 "parser.y"
                              {(yyval.expressionList) = 0;}
#line 3166 "parser.tab.c"
    break;

  case 177: /* expr_list: expr_singleline  */
#line 536 "parser.y"
                           {(yyval.expressionList) = createExpressionList((yyvsp[0].expression)); printf("expr_list 1\n");}
#line 3172 "parser.tab.c"
    break;

  case 178: /* expr_list: expr_list ',' expr_singleline  */
#line 537 "parser.y"
                                         {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression)); printf("expr_list 2\n");}
#line 3178 "parser.tab.c"
    break;


#line 3182 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 541 "parser.y"



int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();	

		freopen("../tree/tree_img.txt", "w", stdout);
		printTree(root);
		fclose(stdout);
		fclose (yyin);
    }
    else {
        yyerror("not found file");
    }
	
	//return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}

/*void printRule(char* ruleString){

	#ifdef PRINT_RULE
    fprintf("\n %s \n", ruleString);
    #endif
}*/

// ------------------------------  Expression ------------------------------
Expression *createExpression(ExprType type, Expression *left, Expression *right)
{
	Expression *result = (Expression *)malloc(sizeof(Expression));

	result->type = type;

	result->left = left;
	result->right = right;

	result->exprList = 0;
	result->nextInList = 0;

	return result;
}

Expression *createSimpleExpression(ExprType type, Value value)
{
	Expression *result = (Expression *)malloc(sizeof(Expression));

	result->isType = type != 0;
	result->type = type;
	result->value = value;

	result->exprList = 0;
	result->right = 0;
	result->left = 0;
	result->nextInList = 0;

	return result;
}

ExpressionList *createExpressionList(Expression *expr)
{
	ExpressionList *result = (ExpressionList *)malloc(sizeof(ExpressionList));

	result->begin = expr;
	result->end = expr;

	return result;
}

ExpressionList *appendExpressionToList(ExpressionList *list, Expression *expr)
{
	list->end->nextInList = expr;
	list->end = expr;

	return list;
}
/*
ExpressionList *createArgumentList(Expression *expr)
{
	ExpressionList *result = (ExpressionList *)malloc(sizeof(ExpressionList));

	result->begin = expr;
	result->end = expr;

	return result;
}
*/

ProgramItemList *createProgramItemsList(ProgramItemListNotEmpty *programItemListNotEmpty)
{
	ProgramItemList *result = (ProgramItemList *)malloc(sizeof(ProgramItemList));

	result->begin = programItemListNotEmpty;
	result->end = programItemListNotEmpty;

	return result;
}

ProgramItemListNotEmpty *createProgramListNotEmpty(ProgramItem *programItem)
{
	ProgramItemListNotEmpty *result = (ProgramItemListNotEmpty *)malloc(sizeof(ProgramItemListNotEmpty));

	result->begin = programItem;
	result->end = programItem;
	
	result->nextInList = 0;

	return result;
}

ProgramItemListNotEmpty *appendProgramToListNotEmpty(ProgramItemListNotEmpty *list, ProgramItem *programItem)
{
	list->end->nextInList = programItem;
	list->end = programItem;

	return list;
}


ProgramItem *createProgramItem(Module *module, char *id_var_name)
{
	ProgramItem *result = (ProgramItem *)malloc(sizeof(ProgramItem));

	result->isImport = id_var_name != 0;
	result->id_var_name = id_var_name;
	result->module = module;
	
	result->nextInList = 0;

	return result;
}


Module *createModule(char *id_var_name, FunctionOrSubList *functionOrSubList)
{
	Module *result = (Module *)malloc(sizeof(Module));

	result->id_var_name = id_var_name;
	result->functionOrSubList = functionOrSubList;

	return result;
}

FunctionOrSubList *createFunctionOrSubList(FunctionOrSub *functionOrSub)
{
	FunctionOrSubList *result = (FunctionOrSubList *)malloc(sizeof(FunctionOrSubList));

	result->begin = functionOrSub;
	result->end = functionOrSub;
	return result;
}


FunctionOrSubList *appendFunctionOrSubList(FunctionOrSubList *list, FunctionOrSub *functionOrSub)
{
	list->end->nextInList = functionOrSub;
	list->end = functionOrSub;
	return list;
}

FunctionOrSub *createFunctionOrSub(SubBloc *subBloc, Function *function)
{
	FunctionOrSub *result = (FunctionOrSub *)malloc(sizeof(FunctionOrSub));

	result->subBloc = subBloc;
	result->function=function;
	
	result->nextInList = 0;

	return result;
}

Function *createFunction(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList)
{
	Function *result = (Function *)malloc(sizeof(Function));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;

	return result;
}

SubBloc *createSubBloc(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList)
{
	SubBloc *result = (SubBloc *)malloc(sizeof(SubBloc));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;

	return result;
}

//WIP
ParameterListOrEmpty *createParameterListOrEmpty(ParameterListWithType *parameterListWithType, ParameterListWithoutType *parameterListWithoutType)
{
	ParameterListOrEmpty *result = (ParameterListOrEmpty *)malloc(sizeof(ParameterListOrEmpty));

	result->parameterListWithType = parameterListWithType;
	result->parameterListWithoutType = parameterListWithoutType;

	return result;
}

ParameterListWithType *createParameterListWithType(ParameterWithType *parameterWithType)
{
	ParameterListWithType *result = (ParameterListWithType*)malloc(sizeof(ParameterListWithType));

	result->begin = parameterWithType;
	result->end = parameterWithType;
	return result;
}

ParameterListWithType *appendParameterListWithType(ParameterListWithType *list, ParameterWithType *parameterWithType)
{
	list->end->nextInList = parameterWithType;
	list->end = parameterWithType;
	return list;
}

ParameterListWithoutType *createParameterListWithoutType(ParameterWithoutType *parameterWithoutType)
{
	ParameterListWithoutType *result = (ParameterListWithoutType*)malloc(sizeof(ParameterListWithoutType));

	result->begin = parameterWithoutType;
	result->end = parameterWithoutType;
	return result;
}

ParameterListWithoutType *appendParameterListWithoutType(ParameterListWithoutType *list, ParameterWithoutType *parameterWithoutType)
{
	list->end->nextInList = parameterWithoutType;
	list->end = parameterWithoutType;
	return list;
}

ParameterWithType *createParameterWithType(char* id_var_name, VarType basic_literal)
{
	ParameterWithType *result = (ParameterWithType *)malloc(sizeof(ParameterWithType));

	result->id_var_name = id_var_name;
	result->basic_literal = basic_literal;
	
	result->nextInList = 0;

	return result;
}

ParameterWithoutType *createParameterWithoutType(char* id_var_name)
{
	ParameterWithoutType *result = (ParameterWithoutType *)malloc(sizeof(ParameterWithoutType));

	result->id_var_name = id_var_name;
	
	result->nextInList = 0;

	return result;
}

StmtList *createStmtList(Statement *statement)
{
	StmtList *result = (StmtList *)malloc(sizeof(StmtList));

	result->begin = statement;
	result->end = statement;

	return result;
}

StmtList *appendStmtList(StmtList *list, Statement *statement)
{
	list->end->nextInList = statement;
	list->end = statement;

	return list;
}

Statement *createStatement(StmtType type, StmtValue value)
{
	Statement *result = (Statement *)malloc(sizeof(Statement));

	result->type = type;
	result->value = value;
	
	result->nextInList = 0;

	return result;
}

StatementSingle *createStatementSingle(StmtType type, StmtSingleValue value)
{
	StatementSingle *result = (StatementSingle *)malloc(sizeof(StatementSingle));

	result->type = type;
	result->value = value;

	return result;
}

StatementMulti *createStatementMulti(StmtType type, StmtMultiValue value)
{
	StatementMulti *result = (StatementMulti *)malloc(sizeof(StatementMulti));

	result->type = type;
	result->value = value;

	return result;
}

WhileStmt *createWhileStmt(Expression *expression, StmtList *stmtList)
{
	WhileStmt *result = (WhileStmt *)malloc(sizeof(WhileStmt));

	result->expression = expression;
	result->stmtList = stmtList;

	return result;
}

DoLoopStmt *createDoLoopStmt(DoLoopCondition *condition, StmtList *stmtList)
{
	DoLoopStmt *result = (DoLoopStmt *)malloc(sizeof(DoLoopStmt));

	result->condition = condition;
	result->stmtList = stmtList;

	return result;
}

//WIP
DoLoopCondition *createDoLoopCondition(int isUntil, Expression *expression)
{
	DoLoopCondition *result = (DoLoopCondition *)malloc(sizeof(DoLoopCondition));

	if (isUntil)
		result->isUntil = 1;
	else
		result->isUntil = 0;
	result->expression = expression;

	return result;
}

ForLoopStmt *createForLoopStmt(char* counterVarName, VarType counterType, Expression* fromValue, Expression* toValue, Expression* stepValue, StmtList *stmtList)
{
	ForLoopStmt *result = (ForLoopStmt *)malloc(sizeof(ForLoopStmt));

	result->counterVarName = counterVarName;
	result->counterType = counterType;
	result->fromValue = fromValue;
	result->toValue = toValue;
	result->stepValue = stepValue;
	result->stmtList = stmtList;

	return result;
}

ForEachLoopStmt *createForEachLoopStmt(char* counterVarName, VarType counterType, char* counterSourceName, StmtList *stmtList)
{
	ForEachLoopStmt *result = (ForEachLoopStmt *)malloc(sizeof(ForEachLoopStmt));

	result->counterVarName = counterVarName;
	result->counterType = counterType;
	result->counterSourceName = counterSourceName;
	result->stmtList = stmtList;

	return result;
}

IfStmtMulti *createIfStmtMulti(Expression *expression, StmtList *thenStmtList, ElseIfList *elseIfList, StmtList *elseStmtList)
{
	IfStmtMulti *result = (IfStmtMulti *)malloc(sizeof(IfStmtMulti));

	result->expression = expression;
	result->thenStmtList = thenStmtList;
	result->elseIfList = elseIfList;
	result->elseStmtList = elseStmtList;

	return result;
}

ElseIfList *createElseIfList(ElseIf *elseIf)
{
	ElseIfList *result = (ElseIfList *)malloc(sizeof(ElseIfList));

	result->begin = elseIf;
	result->end = elseIf;

	return result;
}

ElseIfList *appendElseIfList(ElseIfList *list, ElseIf *elseIf)
{
	list->end->nextInList = elseIf;
	list->end = elseIf;

	return list;
}

ElseIf *createElseIf(Expression *expression, StmtList *stmtList)
{
	ElseIf *result = (ElseIf*)malloc(sizeof(ElseIf));

	result->expression = expression;
	result->stmtList = stmtList;
	
	result->nextInList = 0;

	return result;
}

IfStmtSingle *createIfStmtSingle(Expression *expression, StatementSingle *thenStmt, StatementSingle *elseStmt)
{
	IfStmtSingle *result = (IfStmtSingle *)malloc(sizeof(IfStmtSingle));

	result->expression = expression;
	result->thenStmt = thenStmt;
	result->elseStmt = elseStmt;

	return result;
}

SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList)
{
	SelectStmt *result = (SelectStmt*)malloc(sizeof(SelectStmt));

	result->expression = expression;
	result->caseList = caseList;

	return result;
}

CaseList *createCaseList(CaseStmt *caseStmt)
{
	CaseList *result = (CaseList *)malloc(sizeof(CaseList));

	result->begin = caseStmt;
	result->end = caseStmt;

	return result;
}

CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt)
{
	list->end->nextInList = caseStmt;
	list->end = caseStmt;

	return list;
}

CaseStmt *createCaseStmt(int isIs, Expression *fromExpression, Expression *toExpression, StmtList *stmtList)
{
	CaseStmt *result = (CaseStmt *)malloc(sizeof(CaseStmt));

	if (isIs)
		result->isIs = 1;
	else
		result->isIs = 0;
	result->fromExpression = fromExpression;
	result->toExpression = toExpression;
	result->stmtList = stmtList;
	
	result->nextInList = 0;

	return result;
}

//WIP
DeclStmtSingle *createDeclStmtSingle(int isConst, VarNameSingle* varName, VarType varType, Expression *expression)
{
	DeclStmtSingle *result = (DeclStmtSingle*)malloc(sizeof(DeclStmtSingle));

	if (isConst)
		result->isConst = 1;
	else
		result->isConst = 0;
	result->varName = varName;
	result->varType = varType;
	result->expression = expression;

	return result;
}

DeclStmtMulti *createDeclStmtMulti(int isConst, VarNameSingle* varName, VarType varType, Expression *expression)
{
	DeclStmtMulti *result = (DeclStmtMulti*)malloc(sizeof(DeclStmtMulti));

	if (isConst)
		result->isConst = 1;
	else
		result->isConst = 0;
	result->varName = varName;
	result->varType = varType;
	result->expression = expression;

	return result;
}

VarNameSingle *createVarNameSingle(char* id_var_name, Expression *expression)
{
	VarNameSingle *result = (VarNameSingle *)malloc(sizeof(VarNameSingle));

	result->id_var_name = id_var_name;
	result->expression = expression;

	return result;
}

VarNameMulti *createVarNameMulti(char* id_var_name, Expression *expression)
{
	VarNameMulti *result = (VarNameMulti *)malloc(sizeof(VarNameMulti));

	result->id_var_name = id_var_name;
	result->expression = expression;

	return result;
}

Expression *createExpressionWithList(ExprType type, Value value, ExpressionList *exprList)
{
	Expression *result = (Expression *)malloc(sizeof(Expression));

	result->type = type;
	result->value = value;
	result->exprList = exprList;

	result->right = 0;
	result->left = 0;
	result->nextInList = 0;

	return result;
}

ReturnStmt *createReturnStmt(Expression *expression)
{
	ReturnStmt *result = (ReturnStmt *)malloc(sizeof(ReturnStmt));
	
	result->expression = expression;

	return result;
}
