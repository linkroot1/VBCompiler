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
  YYSYMBOL_AND = 53,                       /* AND  */
  YYSYMBOL_OR = 54,                        /* OR  */
  YYSYMBOL_XOR = 55,                       /* XOR  */
  YYSYMBOL_56_ = 56,                       /* '^'  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_NOT = 59,                       /* NOT  */
  YYSYMBOL_INT_DIV = 60,                   /* INT_DIV  */
  YYSYMBOL_61_ = 61,                       /* '+'  */
  YYSYMBOL_62_ = 62,                       /* '-'  */
  YYSYMBOL_UNARY_MINUS = 63,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 64,                /* UNARY_PLUS  */
  YYSYMBOL_65_ = 65,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 66,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 67,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 68,             /* MORE_OR_EQUAL  */
  YYSYMBOL_69_ = 69,                       /* '>'  */
  YYSYMBOL_70_ = 70,                       /* '<'  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_72_ = 72,                       /* '('  */
  YYSYMBOL_73_ = 73,                       /* ')'  */
  YYSYMBOL_74_ = 74,                       /* '{'  */
  YYSYMBOL_75_ = 75,                       /* '}'  */
  YYSYMBOL_THEN = 76,                      /* THEN  */
  YYSYMBOL_ELSE = 77,                      /* ELSE  */
  YYSYMBOL_78_ = 78,                       /* ','  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_root = 80,                      /* root  */
  YYSYMBOL_program_items_list = 81,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 82, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 83,              /* program_item  */
  YYSYMBOL_module = 84,                    /* module  */
  YYSYMBOL_functions_or_sub_list = 85,     /* functions_or_sub_list  */
  YYSYMBOL_function_or_sub = 86,           /* function_or_sub  */
  YYSYMBOL_function = 87,                  /* function  */
  YYSYMBOL_sub_bloc = 88,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 89,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 90,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 91, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 92,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 93,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 94,                 /* stmt_list  */
  YYSYMBOL_stmt = 95,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 96,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 97,           /* multi_line_stmt  */
  YYSYMBOL_return_stmt = 98,               /* return_stmt  */
  YYSYMBOL_stmt_ends = 99,                 /* stmt_ends  */
  YYSYMBOL_decl_stmt = 100,                /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 101,    /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 102,                 /* var_name  */
  YYSYMBOL_var_name_singleline = 103,      /* var_name_singleline  */
  YYSYMBOL_access = 104,                   /* access  */
  YYSYMBOL_while_stmt = 105,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 106,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 107,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 108,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 109,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 110,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 111,              /* elseif_list  */
  YYSYMBOL_elseif = 112,                   /* elseif  */
  YYSYMBOL_if_stmt_single_line = 113,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 114,              /* select_stmt  */
  YYSYMBOL_case_list = 115,                /* case_list  */
  YYSYMBOL_case_stmt = 116,                /* case_stmt  */
  YYSYMBOL_expr_singleline = 117,          /* expr_singleline  */
  YYSYMBOL_expr_multiline = 118,           /* expr_multiline  */
  YYSYMBOL_basic_literal = 119,            /* basic_literal  */
  YYSYMBOL_basic_literal_value = 120,      /* basic_literal_value  */
  YYSYMBOL_arguments_multiline = 121,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 122,     /* arguments_singleline  */
  YYSYMBOL_expr_list = 123                 /* expr_list  */
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
#define YYLAST   2161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   319


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
       2,     2,     2,     2,     2,     2,     2,     2,    71,     2,
      72,    73,    57,    61,    78,    62,     2,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      70,    65,    69,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      55,    59,    60,    63,    64,    66,    67,    68,    76,    77
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   237,   237,   240,   241,   244,   245,   248,   249,   253,
     254,   255,   256,   260,   261,   264,   265,   268,   269,   270,
     271,   275,   276,   277,   278,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   292,   293,   294,   298,   299,   300,
     304,   305,   309,   315,   316,   320,   321,   325,   326,   327,
     328,   331,   332,   333,   334,   335,   336,   337,   338,   341,
     344,   345,   351,   352,   353,   354,   355,   356,   360,   361,
     362,   363,   364,   365,   369,   372,   373,   377,   378,   379,
     380,   381,   382,   388,   389,   394,   395,   398,   399,   404,
     405,   410,   415,   416,   417,   418,   419,   420,   421,   422,
     425,   426,   429,   430,   432,   433,   438,   439,   442,   443,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   508,   509,   510,   511,   514,   515,   516,   517,
     522,   523,   524,   528,   529,   533,   534
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
  "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC", "FRIEND", "AND", "OR",
  "XOR", "'^'", "'*'", "'/'", "NOT", "INT_DIV", "'+'", "'-'",
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

#define YYPACT_NINF (-360)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     214,    12,    19,   -10,    52,  -360,  -360,    71,  -360,   214,
    -360,  -360,    55,    84,    84,  -360,  -360,  -360,  -360,   102,
    -360,    95,   116,    84,  -360,   129,   124,   130,   156,  -360,
    -360,  -360,    51,   397,    80,    84,   111,   175,  -360,   199,
     206,   201,   279,    33,    95,    33,    84,   162,   164,    84,
     212,   226,   238,   178,     8,    11,  -360,  -360,   179,    95,
      33,    33,    95,    84,   286,    15,    30,    84,  -360,    63,
    -360,    83,    84,   181,   183,    95,  -360,  -360,  -360,  -360,
     186,  -360,  -360,   502,   226,   243,  -360,  -360,   255,  -360,
     653,    84,    84,   197,  -360,  -360,  -360,  -360,   202,   260,
     263,   263,   601,   601,   254,   730,    58,    -5,   730,   730,
     730,   329,   830,  -360,    84,  -360,  -360,    84,  -360,    84,
    -360,  -360,  -360,    84,  -360,    84,  2014,    84,  -360,  -360,
    -360,   253,   881,   757,   808,  -360,   176,  -360,  -360,    84,
     210,   266,   268,    -9,    -2,  1864,    84,   433,   222,   601,
     216,   730,  2033,   730,   730,   915,  1407,   282,   289,  2079,
     580,   580,   730,  1816,   291,  -360,    95,    95,    95,    95,
      95,  1443,  1447,  1484,  1488,  1525,  1529,  1566,  1570,  1607,
    1611,  1648,  1652,  1689,  1693,  1730,  1734,    95,    84,   277,
     293,   953,   284,   987,   730,  -360,  2033,    18,    95,   601,
     286,   286,   286,   275,   286,   241,   915,   915,   692,    84,
    1864,    84,   217,  1951,   730,   730,   730,   730,   730,   730,
     730,   730,   730,   730,   730,   730,   730,   730,   730,   730,
    1884,  1884,  1023,  1057,   286,   298,  1840,   246,  -360,    84,
     730,  2051,   730,  2067,   730,  2067,   730,  1758,   730,  2079,
     730,  2079,   730,  2090,   730,   580,   730,   580,   730,   245,
     730,   245,   730,   245,   730,   245,   730,   245,   730,   245,
     730,  -360,    95,    84,    84,   308,    84,   295,    46,   267,
    -360,   730,  1972,   269,   261,   262,   278,   601,   280,   286,
     601,  2033,  1093,  1127,   334,   334,   730,   270,   915,  2033,
     915,   114,   114,   100,    95,    95,   144,  -360,   283,   286,
     287,  -360,  -360,    95,  2033,  2033,  2033,  2033,  2033,  2033,
    2033,  2033,  2033,  2033,  2033,  2033,  2033,  2033,  2033,  2033,
      95,    95,    84,    95,    84,   288,  -360,  -360,  2033,  -360,
    -360,   313,  1771,   314,  2014,  -360,  1775,   285,  -360,   337,
     341,   290,   346,     2,  1903,  1412,    22,   142,    56,     6,
    -360,    16,  -360,   333,   328,  -360,    95,    95,  -360,   601,
     601,  2033,   601,   601,  2033,   296,  -360,  -360,   730,   286,
     286,   305,  1412,  -360,   352,   601,    84,    -4,  -360,   359,
      84,    -3,   601,    84,  1796,   173,   360,  -360,   361,   364,
     373,  -360,  -360,  -360,  -360,   318,  1993,   338,   339,  -360,
    1927,   317,   915,   379,    84,  -360,  -360,   915,   383,    84,
    1864,    84,   915,   601,   915,   601,   915,  -360,  -360,   333,
      84,   730,   730,   730,    84,    84,  1163,  -360,   915,  1197,
    -360,   915,   915,   915,  1407,  1864,    84,  1407,  1864,    84,
    1407,    77,   915,   115,   915,   915,   389,  1233,   390,  1267,
    1407,  1407,   915,   915,   915,   915,   333,   915,  1303,  -360,
    1407,  1407,  -360,   393,  -360,   394,  1407,  1407,  1407,  1407,
      84,  1337,  -360,  -360,  -360,   915,  -360,  1373,  -360
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    80,    78,    77,    79,     0,     2,     4,
       5,     7,     0,     0,     0,    82,    81,     1,     6,     0,
      60,     8,     0,     0,    61,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,    25,     9,    25,     0,     0,     0,     0,
       0,    42,     0,     0,    26,    30,    34,    37,     0,    10,
      25,    25,    11,     0,     0,    28,    33,     0,    29,     0,
      32,     0,     0,     0,     0,    12,   162,   165,   163,   164,
      40,    27,    31,     0,     0,     0,    35,    42,     0,    38,
       0,     0,     0,     0,   166,   169,   167,   168,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    45,    50,     0,    48,     0,
      55,    56,    57,     0,    47,     0,    49,     0,   119,    36,
      39,     0,     0,     0,     0,    41,     0,   158,   137,     0,
      76,     0,     0,     0,    72,     0,     0,     0,     0,     0,
     136,     0,    59,     0,     0,     0,     0,     0,     0,   141,
     121,   120,     0,     0,     0,    44,    46,    52,    54,    51,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,     0,   174,   175,     0,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,     0,
       0,   138,     0,   139,     0,   140,     0,   130,     0,   124,
       0,   125,     0,   126,     0,   122,     0,   123,     0,   127,
       0,   131,     0,   132,     0,   133,     0,   129,     0,   128,
       0,   134,    17,     0,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       0,    71,     0,     0,     0,     0,     0,   104,     0,    49,
       0,     0,     0,     0,    88,    87,     0,    85,     0,     0,
       0,   155,   157,    22,   159,   160,   161,   150,   144,   145,
     146,   142,   143,   147,   151,   152,   153,   149,   148,   154,
      18,    23,     0,    19,     0,     0,   170,   172,   176,    75,
      74,     0,     0,     0,     0,    66,     0,     0,    67,     0,
       0,    76,     0,    72,     0,     0,     0,     0,     0,     0,
     108,     0,    86,     0,     0,   156,    24,    20,   171,     0,
       0,    68,     0,     0,    69,     0,    84,    83,     0,     0,
       0,     0,     0,   105,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,    62,    63,    64,    65,     0,     0,     0,    70,    93,
       0,     0,     0,     0,     0,   101,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      96,     0,     0,     0,   118,     0,     0,   111,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,   112,     0,     0,     0,     0,     0,     0,     0,    73,
     103,   102,    95,     0,    94,     0,   117,   116,   115,   114,
       0,     0,    91,    99,    98,     0,    89,     0,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,  -360,  -360,   405,  -360,   382,   182,  -360,  -360,
      75,   366,   367,    74,    39,   -68,    -6,  -205,  -360,  -360,
     -14,  -360,  -360,   321,   -95,   140,  -360,  -360,   117,  -360,
    -360,  -360,    67,  -178,  -360,  -360,   125,  -128,   374,  -101,
    -188,  -359,  -360,  -360,  -189
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      53,    54,    55,    56,    57,   112,   113,   114,   115,   116,
      21,   117,   118,   141,   142,    32,   119,   120,   156,   121,
     122,   123,   387,   388,   124,   125,   359,   360,   126,   127,
      80,   128,   137,   138,   197
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   146,   148,   297,   399,   278,   144,   157,   202,    33,
     413,   418,   284,   285,   286,   204,   288,   385,   385,   380,
     396,    44,   132,   303,    13,    94,    95,    96,    97,   358,
     398,    14,    59,   158,    98,    62,   384,   100,   101,   358,
     102,   103,    15,   385,   104,    51,   308,    68,   211,    75,
      70,   105,   106,    83,    81,   107,   203,   279,    90,    94,
      95,    96,    97,   205,    39,   191,   193,   381,    98,    82,
     451,    17,    52,   414,   419,    84,   153,   133,   134,    40,
     392,   108,    19,   109,   110,   335,    69,   232,   233,    71,
     154,   280,   155,    69,   111,    87,   281,    20,   283,   386,
     166,   347,    85,   167,    16,   168,   165,   480,    71,   169,
      89,   170,   466,   187,    23,   108,    20,   109,   110,   336,
      58,   364,    88,    20,   281,   198,   165,   130,   111,    25,
      26,   206,   207,   393,    24,    73,    74,   358,   292,   293,
      12,    34,    36,    86,    27,    94,    95,    96,    97,    12,
     383,    35,    43,    24,    98,    24,   389,   100,   101,   129,
     102,   103,   153,   385,   104,     3,     4,     5,     6,    25,
      37,   105,   106,   280,   272,   107,   154,   297,   281,    94,
      95,    96,    97,    45,    27,   165,   345,   165,   150,   348,
     469,   407,   408,   281,   298,   300,   301,   302,   425,   352,
     353,   108,    46,   109,   110,     3,     4,     5,     6,   415,
      38,    47,    20,   415,   111,   194,   304,   305,    48,   390,
      94,    95,    96,    97,    38,   313,   165,   165,    49,   150,
     356,   397,   357,   397,    60,   108,    61,   109,   110,    63,
       1,     2,   453,    64,    94,    95,    96,    97,   151,   195,
      51,    67,    72,   150,    91,    84,    92,   395,    93,   330,
     331,   289,   333,     3,     4,     5,     6,    87,   401,   402,
     135,   403,   404,   139,   136,   140,   108,   149,   109,   110,
     290,   188,   199,   200,   411,   201,   165,   165,   212,   151,
     195,   421,    25,    50,    76,    77,    78,    79,   209,   234,
     108,   235,   109,   110,   239,   273,   274,    27,    94,    95,
      96,    97,   276,   151,   287,   309,   229,   150,   366,   312,
     367,   332,   446,   334,   449,   289,   341,   342,     3,     4,
       5,     6,    94,    95,    96,    97,    94,    95,    96,    97,
     337,   150,   340,   343,   436,   346,   351,   355,   363,   439,
     165,   165,   369,   372,   444,   376,   447,   375,   450,   377,
     365,   368,   378,   379,   108,   400,   109,   110,   162,   405,
     457,   409,   412,   459,   460,   461,   417,   151,   416,   422,
     424,   426,   427,   428,   468,   430,   470,   471,   108,   429,
     109,   110,   431,   435,   476,   477,   478,   479,   437,   481,
     438,   151,   440,   432,   433,   441,   442,   443,   472,   474,
      25,    41,   483,   484,    18,    42,   452,   487,    65,    66,
     454,   455,   143,   362,   391,    27,     0,   361,     0,     0,
     165,   462,   463,   165,   464,   465,    24,   467,   165,     0,
       0,   165,     0,     0,   165,     0,     3,     4,     5,     6,
       0,   165,     0,   165,   165,   165,     0,     0,     0,     0,
       0,     0,   165,     0,   165,   165,   485,     0,     0,     0,
     165,   165,   165,   165,     0,   165,   145,   147,     0,   152,
       0,   165,   159,   160,   161,   163,   171,   172,   173,   174,
     175,   176,     0,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,   186,    94,    95,    96,    97,   208,
     196,     0,     0,     0,    98,     0,    99,   100,   101,     0,
     102,   103,     0,   210,   104,   213,     0,   230,   231,     0,
       0,   105,   106,     0,     0,   107,   236,     0,     0,     0,
       0,    24,     0,     0,     0,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   108,     0,   109,   110,     0,     0,     0,   196,     0,
       0,     0,     0,   282,   111,     0,     0,     0,     0,   291,
       0,     0,   299,     0,     0,     0,   196,     0,   241,   243,
     245,   247,   249,   251,   253,   255,   257,   259,   261,   263,
     265,   267,   269,   271,    94,    95,    96,    97,     0,     0,
       0,     0,     0,    98,   314,     0,   315,     0,   316,     0,
     317,     0,   318,     0,   319,     0,   320,     0,   321,     0,
     322,     0,   323,     0,   324,     0,   325,     0,   326,     0,
     327,     0,   328,     0,   329,   223,   224,   225,   226,   227,
     228,   229,     0,     0,     0,   338,    94,    95,    96,    97,
     108,   344,   109,   110,   344,    98,     0,   131,   100,   101,
     354,   102,   103,   111,     0,   104,     0,     0,     0,     0,
       0,     0,   105,   106,     0,     0,   107,     0,     0,     0,
       0,     0,    24,     0,     0,    94,    95,    96,    97,     0,
       0,     0,     0,     0,   150,     0,     0,   294,   295,     0,
       0,   296,   108,     0,   109,   110,   371,     0,     0,     0,
     374,   105,     0,     0,     0,   111,     0,     0,     0,   299,
       0,    20,   394,    94,    95,    96,    97,     0,     0,     0,
       0,     0,   150,   344,   344,     0,   344,   344,     0,     0,
       0,   108,   406,   109,   110,   291,   299,     0,     0,   410,
      94,    95,    96,    97,   151,     0,   420,     0,     0,    98,
       0,   190,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,     0,     0,     0,     0,   105,   106,     0,   108,
     107,   109,   110,     0,     0,     0,    24,   445,     0,   448,
       0,     0,   151,     0,     0,   196,   371,   374,     0,     0,
       0,    94,    95,    96,    97,     0,   108,     0,   109,   110,
      98,     0,   192,   100,   101,     0,   102,   103,     0,   111,
     104,     0,     0,    94,    95,    96,    97,   105,   106,     0,
       0,   107,    98,     0,   164,   100,   101,    24,   102,   103,
       0,     0,   104,     0,     0,     0,     0,     0,     0,   105,
     106,     0,     0,   107,     0,     0,     0,   108,     0,   109,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,     0,    94,    95,    96,    97,     0,   108,
       0,   109,   110,    98,     0,   189,   100,   101,     0,   102,
     103,     0,   111,   104,     0,     0,     0,     0,     0,     0,
     105,   106,     0,     0,   107,     0,     0,     0,    94,    95,
      96,    97,     0,     0,     0,     0,     0,    98,     0,     0,
     100,   101,     0,   102,   103,     0,     0,   104,     0,     0,
     108,     0,   109,   110,   105,   106,     0,     0,   107,     0,
       0,     0,     0,   111,    24,     0,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,   275,   100,   101,
       0,   102,   103,     0,   108,   104,   109,   110,     0,     0,
       0,     0,   105,   106,     0,     0,   107,   111,     0,     0,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
       0,   277,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,   108,     0,   109,   110,   105,   106,     0,     0,
     107,     0,     0,     0,     0,   111,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,     0,   100,   101,
       0,   102,   103,     0,     0,   104,   108,     0,   109,   110,
       0,     0,   105,   106,   306,     0,   107,     0,     0,   111,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
       0,     0,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,   108,     0,   109,   110,   105,   106,   307,     0,
     107,     0,     0,     0,     0,   111,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,   349,   100,   101,
       0,   102,   103,     0,     0,   104,   108,     0,   109,   110,
       0,     0,   105,   106,     0,     0,   107,     0,     0,   111,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
       0,   350,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,   108,     0,   109,   110,   105,   106,     0,     0,
     107,     0,     0,     0,     0,   111,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,   456,   100,   101,
       0,   102,   103,     0,     0,   104,   108,     0,   109,   110,
       0,     0,   105,   106,     0,     0,   107,     0,     0,   111,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
       0,   458,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,   108,     0,   109,   110,   105,   106,     0,     0,
     107,     0,     0,     0,     0,   111,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,   473,   100,   101,
       0,   102,   103,     0,     0,   104,   108,     0,   109,   110,
       0,     0,   105,   106,     0,     0,   107,     0,     0,   111,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
       0,   475,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,   108,     0,   109,   110,   105,   106,     0,     0,
     107,     0,     0,     0,     0,   111,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,     0,   100,   101,
       0,   102,   103,     0,     0,   104,   108,     0,   109,   110,
       0,     0,   105,   106,     0,     0,   107,   482,     0,   111,
      94,    95,    96,    97,     0,     0,     0,     0,     0,    98,
       0,     0,   100,   101,     0,   102,   103,     0,     0,   104,
       0,     0,   108,     0,   109,   110,   105,   106,     0,     0,
     107,   486,     0,     0,     0,   111,    94,    95,    96,    97,
       0,     0,     0,     0,     0,    98,     0,     0,   100,   101,
       0,   102,   103,     0,     0,   104,   108,     0,   109,   110,
       0,     0,   105,   106,     0,     0,   107,   488,     0,   111,
      94,    95,    96,    97,     0,    94,    95,    96,    97,    98,
       0,     0,   100,   101,   150,   102,   103,   294,   295,   104,
       0,   296,   108,     0,   109,   110,   105,   106,     0,     0,
     107,   105,     0,     0,     0,   111,    94,    95,    96,    97,
      94,    95,    96,    97,     0,   150,     0,     0,     0,   150,
       0,     0,     0,     0,     0,     0,   108,     0,   109,   110,
       0,   108,     0,   109,   110,     0,     0,     0,     0,   111,
       0,     0,   240,     0,   151,     0,   242,    94,    95,    96,
      97,    94,    95,    96,    97,     0,   150,     0,     0,     0,
     150,     0,   108,     0,   109,   110,   108,     0,   109,   110,
       0,     0,     0,     0,     0,   151,     0,     0,     0,   151,
       0,     0,     0,   244,     0,     0,     0,   246,    94,    95,
      96,    97,    94,    95,    96,    97,     0,   150,     0,     0,
       0,   150,     0,   108,     0,   109,   110,   108,     0,   109,
     110,     0,     0,     0,     0,     0,   151,     0,     0,     0,
     151,     0,     0,     0,   248,     0,     0,     0,   250,    94,
      95,    96,    97,    94,    95,    96,    97,     0,   150,     0,
       0,     0,   150,     0,   108,     0,   109,   110,   108,     0,
     109,   110,     0,     0,     0,     0,     0,   151,     0,     0,
       0,   151,     0,     0,     0,   252,     0,     0,     0,   254,
      94,    95,    96,    97,    94,    95,    96,    97,     0,   150,
       0,     0,     0,   150,     0,   108,     0,   109,   110,   108,
       0,   109,   110,     0,     0,     0,     0,     0,   151,     0,
       0,     0,   151,     0,     0,     0,   256,     0,     0,     0,
     258,    94,    95,    96,    97,    94,    95,    96,    97,     0,
     150,     0,     0,     0,   150,     0,   108,     0,   109,   110,
     108,     0,   109,   110,     0,     0,     0,     0,     0,   151,
       0,     0,     0,   151,     0,     0,     0,   260,     0,     0,
       0,   262,    94,    95,    96,    97,    94,    95,    96,    97,
       0,   150,     0,     0,     0,   150,     0,   108,     0,   109,
     110,   108,     0,   109,   110,     0,     0,     0,     0,     0,
     151,     0,     0,     0,   151,     0,     0,     0,   264,     0,
       0,     0,   266,    94,    95,    96,    97,    94,    95,    96,
      97,     0,   150,     0,     0,     0,   150,     0,   108,     0,
     109,   110,   108,     0,   109,   110,     0,     0,     0,     0,
       0,   151,     0,     0,     0,   151,     0,     0,     0,   268,
       0,     0,     0,   270,    94,    95,    96,    97,    94,    95,
      96,    97,     0,   150,     0,     0,     0,   150,     0,   108,
       0,   109,   110,   108,     0,   109,   110,     0,     0,     0,
       0,     0,   151,     0,     0,     0,   151,     0,     0,     0,
     370,     0,     0,     0,   373,   218,   219,     0,   220,   221,
     222,   423,     0,   223,   224,   225,   226,   227,   228,   229,
     108,     0,   109,   110,   108,    20,   109,   110,     0,     0,
       0,     0,     0,   151,     0,     0,     0,   151,     0,   171,
     172,   173,   174,   175,   176,   237,   177,   178,   179,     0,
       0,   180,   181,   182,   183,   184,   185,   186,     0,   214,
     215,   216,   217,   218,   219,     0,   220,   221,   222,   310,
       0,   223,   224,   225,   226,   227,   228,   229,     0,   238,
       0,     0,     0,   214,   215,   216,   217,   218,   219,     0,
     220,   221,   222,    20,     0,   223,   224,   225,   226,   227,
     228,   229,     0,   311,     0,     0,     0,   171,   172,   173,
     174,   175,   176,    20,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   214,   215,   216,
     217,   218,   219,     0,   220,   221,   222,     0,     0,   223,
     224,   225,   226,   227,   228,   229,   214,   215,   216,   217,
     218,   219,     0,   220,   221,   222,     0,     0,   223,   224,
     225,   226,   227,   228,   229,     0,     0,     0,     0,   382,
     171,   172,   173,   174,   175,   176,     0,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,   186,     0,
       0,     0,     0,   434,   214,   215,   216,   217,   218,   219,
       0,   220,   221,   222,     0,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   238,   171,   172,   173,   174,   175,
     176,     0,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,     0,   339,   214,   215,   216,   217,
     218,   219,     0,   220,   221,   222,     0,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   339,   171,   172,   173,
     174,   175,   176,     0,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   214,   215,   216,   217,
     218,   219,     0,   220,   221,   222,     0,     0,   223,   224,
     225,   226,   227,   228,   229,   215,   216,   217,   218,   219,
       0,   220,   221,   222,     0,     0,   223,   224,   225,   226,
     227,   228,   229,   217,   218,   219,     0,   220,   221,   222,
       0,     0,   223,   224,   225,   226,   227,   228,   229,   220,
     221,   222,     0,     0,   223,   224,   225,   226,   227,   228,
     229,   221,   222,     0,     0,   223,   224,   225,   226,   227,
     228,   229
};

static const yytype_int16 yycheck[] =
{
      14,   102,   103,   208,   363,   194,   101,    12,    17,    23,
      14,    14,   200,   201,   202,    17,   204,    21,    21,    17,
      14,    35,    90,   212,    12,     3,     4,     5,     6,    23,
      14,    12,    46,    38,    12,    49,    14,    15,    16,    23,
      18,    19,    52,    21,    22,    12,   234,    39,   149,    63,
      39,    29,    30,    67,    39,    33,    65,    39,    72,     3,
       4,     5,     6,    65,    13,   133,   134,    65,    12,    39,
     429,     0,    39,    77,    77,    12,    18,    91,    92,    28,
      24,    59,    27,    61,    62,    39,    78,   155,   156,    78,
      32,    73,   106,    78,    72,    12,    78,    39,   199,    77,
     114,   289,    39,   117,    52,   119,   112,   466,    78,   123,
      71,   125,    35,   127,    12,    59,    39,    61,    62,    73,
      45,   309,    39,    39,    78,   139,   132,    88,    72,    13,
      14,   145,   146,    77,    39,    60,    61,    23,   206,   207,
       0,    12,    12,    69,    28,     3,     4,     5,     6,     9,
     355,    27,    72,    39,    12,    39,    14,    15,    16,    85,
      18,    19,    18,    21,    22,    49,    50,    51,    52,    13,
      14,    29,    30,    73,   188,    33,    32,   382,    78,     3,
       4,     5,     6,    72,    28,   191,   287,   193,    12,   290,
      75,   379,   380,    78,   208,   209,   210,   211,    25,   294,
     295,    59,    27,    61,    62,    49,    50,    51,    52,   387,
      28,    12,    39,   391,    72,    39,   230,   231,    12,    77,
       3,     4,     5,     6,    42,   239,   232,   233,    27,    12,
     298,   359,   300,   361,    72,    59,    72,    61,    62,    27,
      26,    27,   431,    17,     3,     4,     5,     6,    72,    73,
      12,    73,    73,    12,    73,    12,    73,   358,    72,   273,
     274,    20,   276,    49,    50,    51,    52,    12,   369,   370,
      73,   372,   373,    13,    72,    12,    59,    23,    61,    62,
      39,    28,    72,    17,   385,    17,   292,   293,    72,    72,
      73,   392,    13,    14,     8,     9,    10,    11,    76,    17,
      59,    12,    61,    62,    13,    28,    13,    28,     3,     4,
       5,     6,    28,    72,    39,    17,    71,    12,   332,    73,
     334,    13,   423,    28,   425,    20,    65,    65,    49,    50,
      51,    52,     3,     4,     5,     6,     3,     4,     5,     6,
      73,    12,    73,    65,   412,    65,    12,    77,    65,   417,
     356,   357,    39,    39,   422,    18,   424,    72,   426,    18,
      73,    73,    72,    17,    59,    37,    61,    62,    39,    73,
     438,    19,   386,   441,   442,   443,   390,    72,    19,   393,
     394,   395,    22,    22,   452,    12,   454,   455,    59,    25,
      61,    62,    74,    76,   462,   463,   464,   465,    19,   467,
     414,    72,    19,    65,    65,   419,   420,   421,    19,    19,
      13,    14,    19,    19,     9,    33,   430,   485,    52,    52,
     434,   435,   101,   306,   357,    28,    -1,   302,    -1,    -1,
     436,   445,   446,   439,   448,   449,    39,   451,   444,    -1,
      -1,   447,    -1,    -1,   450,    -1,    49,    50,    51,    52,
      -1,   457,    -1,   459,   460,   461,    -1,    -1,    -1,    -1,
      -1,    -1,   468,    -1,   470,   471,   480,    -1,    -1,    -1,
     476,   477,   478,   479,    -1,   481,   102,   103,    -1,   105,
      -1,   487,   108,   109,   110,   111,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,     3,     4,     5,     6,    76,
     136,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    -1,
      18,    19,    -1,   149,    22,   151,    -1,   153,   154,    -1,
      -1,    29,    30,    -1,    -1,    33,   162,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    59,    -1,    61,    62,    -1,    -1,    -1,   194,    -1,
      -1,    -1,    -1,   199,    72,    -1,    -1,    -1,    -1,   205,
      -1,    -1,   208,    -1,    -1,    -1,   212,    -1,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,   240,    -1,   242,    -1,   244,    -1,
     246,    -1,   248,    -1,   250,    -1,   252,    -1,   254,    -1,
     256,    -1,   258,    -1,   260,    -1,   262,    -1,   264,    -1,
     266,    -1,   268,    -1,   270,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,   281,     3,     4,     5,     6,
      59,   287,    61,    62,   290,    12,    -1,    14,    15,    16,
     296,    18,    19,    72,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      -1,    19,    59,    -1,    61,    62,   342,    -1,    -1,    -1,
     346,    29,    -1,    -1,    -1,    72,    -1,    -1,    -1,   355,
      -1,    39,   358,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,   369,   370,    -1,   372,   373,    -1,    -1,
      -1,    59,   378,    61,    62,   381,   382,    -1,    -1,   385,
       3,     4,     5,     6,    72,    -1,   392,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    59,
      33,    61,    62,    -1,    -1,    -1,    39,   423,    -1,   425,
      -1,    -1,    72,    -1,    -1,   431,   432,   433,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    59,    -1,    61,    62,
      12,    -1,    14,    15,    16,    -1,    18,    19,    -1,    72,
      22,    -1,    -1,     3,     4,     5,     6,    29,    30,    -1,
      -1,    33,    12,    -1,    14,    15,    16,    39,    18,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    59,
      -1,    61,    62,    12,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    72,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    33,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      15,    16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,
      59,    -1,    61,    62,    29,    30,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    72,    39,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    59,    22,    61,    62,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    33,    72,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    59,    -1,    61,    62,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    72,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    59,    -1,    61,    62,
      -1,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    72,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    59,    -1,    61,    62,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    72,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    59,    -1,    61,    62,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,    72,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    59,    -1,    61,    62,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    72,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    59,    -1,    61,    62,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,    72,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    59,    -1,    61,    62,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    72,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    59,    -1,    61,    62,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,    72,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    59,    -1,    61,    62,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    72,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    59,    -1,    61,    62,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    72,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    59,    -1,    61,    62,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    -1,    72,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    59,    -1,    61,    62,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    72,
       3,     4,     5,     6,    -1,     3,     4,     5,     6,    12,
      -1,    -1,    15,    16,    12,    18,    19,    15,    16,    22,
      -1,    19,    59,    -1,    61,    62,    29,    30,    -1,    -1,
      33,    29,    -1,    -1,    -1,    72,     3,     4,     5,     6,
       3,     4,     5,     6,    -1,    12,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,
      -1,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    39,    -1,    72,    -1,    39,     3,     4,     5,
       6,     3,     4,     5,     6,    -1,    12,    -1,    -1,    -1,
      12,    -1,    59,    -1,    61,    62,    59,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    39,     3,     4,
       5,     6,     3,     4,     5,     6,    -1,    12,    -1,    -1,
      -1,    12,    -1,    59,    -1,    61,    62,    59,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    39,    -1,    -1,    -1,    39,     3,
       4,     5,     6,     3,     4,     5,     6,    -1,    12,    -1,
      -1,    -1,    12,    -1,    59,    -1,    61,    62,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    39,    -1,    -1,    -1,    39,
       3,     4,     5,     6,     3,     4,     5,     6,    -1,    12,
      -1,    -1,    -1,    12,    -1,    59,    -1,    61,    62,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      39,     3,     4,     5,     6,     3,     4,     5,     6,    -1,
      12,    -1,    -1,    -1,    12,    -1,    59,    -1,    61,    62,
      59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    39,     3,     4,     5,     6,     3,     4,     5,     6,
      -1,    12,    -1,    -1,    -1,    12,    -1,    59,    -1,    61,
      62,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    72,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    39,     3,     4,     5,     6,     3,     4,     5,
       6,    -1,    12,    -1,    -1,    -1,    12,    -1,    59,    -1,
      61,    62,    59,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    72,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    39,     3,     4,     5,     6,     3,     4,
       5,     6,    -1,    12,    -1,    -1,    -1,    12,    -1,    59,
      -1,    61,    62,    59,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    39,    57,    58,    -1,    60,    61,
      62,    25,    -1,    65,    66,    67,    68,    69,    70,    71,
      59,    -1,    61,    62,    59,    39,    61,    62,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    72,    -1,    53,
      54,    55,    56,    57,    58,    39,    60,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    39,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    73,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    39,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    73,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    39,    60,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    76,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    76,    53,    54,    55,    56,    57,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    73,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    73,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    73,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    54,    55,    56,    57,    58,
      -1,    60,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    56,    57,    58,    -1,    60,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    60,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    49,    50,    51,    52,    80,    81,    82,
      83,    84,   104,    12,    12,    52,    52,     0,    83,    27,
      39,    99,    99,    12,    39,    13,    14,    28,    85,    86,
      87,    88,   104,    99,    12,    27,    12,    14,    86,    13,
      28,    14,    85,    72,    99,    72,    27,    12,    12,    27,
      14,    12,    39,    89,    90,    91,    92,    93,    89,    99,
      72,    72,    99,    27,    17,    90,    91,    73,    39,    78,
      39,    78,    73,    89,    89,    99,     8,     9,    10,    11,
     119,    39,    39,    99,    12,    39,    92,    12,    39,    93,
      99,    73,    73,    72,     3,     4,     5,     6,    12,    14,
      15,    16,    18,    19,    22,    29,    30,    33,    59,    61,
      62,    72,    94,    95,    96,    97,    98,   100,   101,   105,
     106,   108,   109,   110,   113,   114,   117,   118,   120,    92,
      93,    14,    94,    99,    99,    73,    72,   121,   122,    13,
      12,   102,   103,   102,   103,   117,   118,   117,   118,    23,
      12,    72,   117,    18,    32,    99,   107,    12,    38,   117,
     117,   117,    39,   117,    14,    95,    99,    99,    99,    99,
      99,    53,    54,    55,    56,    57,    58,    60,    61,    62,
      65,    66,    67,    68,    69,    70,    71,    99,    28,    14,
      14,    94,    14,    94,    39,    73,   117,   123,    99,    72,
      17,    17,    17,    65,    17,    65,    99,    99,    76,    76,
     117,   118,    72,   117,    53,    54,    55,    56,    57,    58,
      60,    61,    62,    65,    66,    67,    68,    69,    70,    71,
     117,   117,    94,    94,    17,    12,   117,    39,    73,    13,
      39,   117,    39,   117,    39,   117,    39,   117,    39,   117,
      39,   117,    39,   117,    39,   117,    39,   117,    39,   117,
      39,   117,    39,   117,    39,   117,    39,   117,    39,   117,
      39,   117,    99,    28,    13,    14,    28,    14,   123,    39,
      73,    78,   117,   118,   119,   119,   119,    39,   119,    20,
      39,   117,    94,    94,    15,    16,    19,    96,    99,   117,
      99,    99,    99,   123,    99,    99,    31,    31,   119,    17,
      39,    73,    73,    99,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
      99,    99,    13,    99,    28,    39,    73,    73,   117,    73,
      73,    65,    65,    65,   117,   118,    65,   119,   118,    14,
      14,    12,   103,   103,   117,    77,    94,    94,    23,   115,
     116,   115,   107,    65,   119,    73,    99,    99,    73,    39,
      39,   117,    39,    39,   117,    72,    18,    18,    72,    17,
      17,    65,    76,    96,    14,    21,    77,   111,   112,    14,
      77,   111,    24,    77,   117,   118,    14,   116,    14,   120,
      37,   118,   118,   118,   118,    73,   117,   119,   119,    19,
     117,   118,    99,    14,    77,   112,    19,    99,    14,    77,
     117,   118,    99,    25,    99,    25,    99,    22,    22,    25,
      12,    74,    65,    65,    76,    76,    94,    19,    99,    94,
      19,    99,    99,    99,    94,   117,   118,    94,   117,   118,
      94,   120,    99,   123,    99,    99,    14,    94,    14,    94,
      94,    94,    99,    99,    99,    99,    35,    99,    94,    75,
      94,    94,    19,    14,    19,    14,    94,    94,    94,    94,
     120,    94,    34,    19,    19,    99,    34,    94,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    90,    91,    91,    91,
      92,    92,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   119,   120,   120,   120,   120,
     121,   121,   121,   122,   122,   123,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     6,
       7,     7,     8,     1,     2,     1,     1,     9,    10,    10,
      11,     9,    10,    10,    11,     0,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     3,     4,     1,     3,     4,
       3,     5,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     2,     2,
       1,     2,     7,     7,     7,     7,     5,     5,     6,     6,
       4,     4,     2,    10,     4,     4,     1,     1,     1,     1,
       1,     2,     2,     6,     6,     4,     5,     3,     3,    11,
      13,    10,     7,     7,    10,    10,     8,     8,    11,    11,
       1,     2,     5,     5,     4,     6,     7,     7,     1,     2,
       4,     4,     5,     5,     6,     6,     6,     6,     4,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     3,     3,
       3,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     4,     2,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     4,     3,     2,     1,     3
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
#line 237 "parser.y"
                         {(yyval.programItemList) = root = (yyvsp[0].programItemList); printf("root 1\n");}
#line 2171 "parser.tab.c"
    break;

  case 3: /* program_items_list: %empty  */
#line 240 "parser.y"
                    {(yyval.programItemList) = 0; printf("program_items_list 1\n");}
#line 2177 "parser.tab.c"
    break;

  case 4: /* program_items_list: program_items_list_not_empty  */
#line 241 "parser.y"
                                                {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty)); printf("program_items_list 2\n");}
#line 2183 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_item  */
#line 244 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); printf("program_items_list_not_empty 1\n");}
#line 2189 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 245 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); printf("program_items_list_not_empty 2\n");}
#line 2195 "parser.tab.c"
    break;

  case 7: /* program_item: module  */
#line 248 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0); printf("program_item 1\n");}
#line 2201 "parser.tab.c"
    break;

  case 8: /* program_item: IMPORTS IDENTIFIER stmt_ends  */
#line 249 "parser.y"
                                             {(yyval.programItem) =  createProgramItem(0,(yyvsp[-1].id_var_name)); printf("program_item 2\n");}
#line 2207 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE stmt_ends  */
#line 253 "parser.y"
                                                         {(yyval.module) = createModule((yyvsp[-4].id_var_name),0); printf("module 1\n");}
#line 2213 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends  */
#line 254 "parser.y"
                                                                               {(yyval.module) = createModule((yyvsp[-5].id_var_name),(yyvsp[-3].functionOrSubList)); printf("module 2\n");}
#line 2219 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE stmt_ends  */
#line 255 "parser.y"
                                                                {(yyval.module) = createModule((yyvsp[-4].id_var_name),0); printf("module 3\n");}
#line 2225 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends  */
#line 256 "parser.y"
                                                                                      {(yyval.module) = createModule((yyvsp[-5].id_var_name),(yyvsp[-3].functionOrSubList)); printf("module 4\n");}
#line 2231 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 260 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub)); printf("functions_or_sub_list 1\n");}
#line 2237 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list function_or_sub  */
#line 261 "parser.y"
                                                             {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-1].functionOrSubList),(yyvsp[0].functionOrSub)); printf("functions_or_sub_list 2\n");}
#line 2243 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 264 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function)); printf("function_or_sub 1\n");}
#line 2249 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 265 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0); printf("function_or_sub 2\n");}
#line 2255 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 268 "parser.y"
                                                                                              {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 1\n");}
#line 2261 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 269 "parser.y"
                                                                                                        {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 4\n");}
#line 2267 "parser.tab.c"
    break;

  case 19: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 270 "parser.y"
                                                                                                     {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 7\n");}
#line 2273 "parser.tab.c"
    break;

  case 20: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 271 "parser.y"
                                                                                                               {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 10\n");}
#line 2279 "parser.tab.c"
    break;

  case 21: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 275 "parser.y"
                                                                                    {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2285 "parser.tab.c"
    break;

  case 22: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 276 "parser.y"
                                                                                              {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2291 "parser.tab.c"
    break;

  case 23: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 277 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2297 "parser.tab.c"
    break;

  case 24: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 278 "parser.y"
                                                                                                   {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2303 "parser.tab.c"
    break;

  case 25: /* parameterlist_or_empty: %empty  */
#line 281 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2309 "parser.tab.c"
    break;

  case 26: /* parameterlist_or_empty: parameterlist_with_type  */
#line 282 "parser.y"
                                                {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2315 "parser.tab.c"
    break;

  case 27: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type END_OF_LINE  */
#line 283 "parser.y"
                                                                        {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2321 "parser.tab.c"
    break;

  case 28: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type  */
#line 284 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2327 "parser.tab.c"
    break;

  case 29: /* parameterlist_or_empty: parameterlist_with_type END_OF_LINE  */
#line 285 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2333 "parser.tab.c"
    break;

  case 30: /* parameterlist_or_empty: parameterlist_without_type  */
#line 286 "parser.y"
                                                   {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2339 "parser.tab.c"
    break;

  case 31: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type END_OF_LINE  */
#line 287 "parser.y"
                                                                           {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2345 "parser.tab.c"
    break;

  case 32: /* parameterlist_or_empty: parameterlist_without_type END_OF_LINE  */
#line 288 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2351 "parser.tab.c"
    break;

  case 33: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type  */
#line 289 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2357 "parser.tab.c"
    break;

  case 34: /* parameterlist_with_type: parameter_with_type  */
#line 292 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2363 "parser.tab.c"
    break;

  case 35: /* parameterlist_with_type: parameterlist_with_type ',' parameter_with_type  */
#line 293 "parser.y"
                                                                         {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-2].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2369 "parser.tab.c"
    break;

  case 36: /* parameterlist_with_type: parameterlist_with_type ',' END_OF_LINE parameter_with_type  */
#line 294 "parser.y"
                                                                                     {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2375 "parser.tab.c"
    break;

  case 37: /* parameterlist_without_type: parameter_without_type  */
#line 298 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2381 "parser.tab.c"
    break;

  case 38: /* parameterlist_without_type: parameterlist_without_type ',' parameter_without_type  */
#line 299 "parser.y"
                                                                                  {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-2].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2387 "parser.tab.c"
    break;

  case 39: /* parameterlist_without_type: parameterlist_without_type ',' END_OF_LINE parameter_without_type  */
#line 300 "parser.y"
                                                                                              {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2393 "parser.tab.c"
    break;

  case 40: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 304 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2399 "parser.tab.c"
    break;

  case 41: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 305 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2405 "parser.tab.c"
    break;

  case 42: /* parameter_without_type: IDENTIFIER  */
#line 309 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2411 "parser.tab.c"
    break;

  case 43: /* stmt_list: stmt  */
#line 315 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); printf("stmt_list 1\n");}
#line 2417 "parser.tab.c"
    break;

  case 44: /* stmt_list: stmt_list stmt  */
#line 316 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); printf("stmt_list 2\n");}
#line 2423 "parser.tab.c"
    break;

  case 45: /* stmt: multi_line_stmt  */
#line 320 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)}); printf("stmt 1\n");}
#line 2429 "parser.tab.c"
    break;

  case 46: /* stmt: single_line_stmt stmt_ends  */
#line 321 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)}); printf("stmt 2\n");}
#line 2435 "parser.tab.c"
    break;

  case 47: /* single_line_stmt: if_stmt_single_line  */
#line 325 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)}); printf("single_line_stmt 1\n");}
#line 2441 "parser.tab.c"
    break;

  case 48: /* single_line_stmt: decl_stmt_single_line  */
#line 326 "parser.y"
                                                        {(yyval.statementSingle) = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmtSingle)}); printf("single_line_stmt 2\n");}
#line 2447 "parser.tab.c"
    break;

  case 49: /* single_line_stmt: expr_singleline  */
#line 327 "parser.y"
                                                  {(yyval.statementSingle) = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=(yyvsp[0].expression)}); printf("single_line_stmt 3\n");}
#line 2453 "parser.tab.c"
    break;

  case 50: /* single_line_stmt: return_stmt  */
#line 328 "parser.y"
                                              {(yyval.statementSingle) = createStatementSingle(ST_RETURN, (StmtSingleValue){.returnStmt=(yyvsp[0].returnStmt)}); printf("single_line_stmt 4\n");}
#line 2459 "parser.tab.c"
    break;

  case 51: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 331 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)}); printf("multi_line_stmt 1\n");}
#line 2465 "parser.tab.c"
    break;

  case 52: /* multi_line_stmt: decl_stmt stmt_ends  */
#line 332 "parser.y"
                                     {(yyval.statementMulti) = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=(yyvsp[-1].declStmtMulti)}); printf("multi_line_stmt 2\n");}
#line 2471 "parser.tab.c"
    break;

  case 53: /* multi_line_stmt: expr_multiline stmt_ends  */
#line 333 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=(yyvsp[-1].expression)}); printf("multi_line_stmt 3\n");}
#line 2477 "parser.tab.c"
    break;

  case 54: /* multi_line_stmt: while_stmt stmt_ends  */
#line 334 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)}); printf("multi_line_stmt 4\n");}
#line 2483 "parser.tab.c"
    break;

  case 55: /* multi_line_stmt: do_loop_stmt  */
#line 335 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)}); printf("multi_line_stmt 5\n");}
#line 2489 "parser.tab.c"
    break;

  case 56: /* multi_line_stmt: for_loop_stmt  */
#line 336 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)}); printf("multi_line_stmt 6\n");}
#line 2495 "parser.tab.c"
    break;

  case 57: /* multi_line_stmt: for_each_loop_stmt  */
#line 337 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)}); printf("multi_line_stmt 7\n");}
#line 2501 "parser.tab.c"
    break;

  case 58: /* multi_line_stmt: select_stmt stmt_ends  */
#line 338 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)}); printf("multi_line_stmt 8\n");}
#line 2507 "parser.tab.c"
    break;

  case 59: /* return_stmt: RETURN expr_singleline  */
#line 341 "parser.y"
                                    {(yyval.returnStmt) = createReturnStmt((yyvsp[0].expression)); printf("return_stmt 1\n");}
#line 2513 "parser.tab.c"
    break;

  case 60: /* stmt_ends: END_OF_LINE  */
#line 344 "parser.y"
                       { }
#line 2519 "parser.tab.c"
    break;

  case 61: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 345 "parser.y"
                            { }
#line 2525 "parser.tab.c"
    break;

  case 62: /* decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 351 "parser.y"
                                                                          {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 1\n");}
#line 2531 "parser.tab.c"
    break;

  case 63: /* decl_stmt: CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 352 "parser.y"
                                                                                     {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 2\n");}
#line 2537 "parser.tab.c"
    break;

  case 64: /* decl_stmt: DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 353 "parser.y"
                                                                        {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 3\n");}
#line 2543 "parser.tab.c"
    break;

  case 65: /* decl_stmt: DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 354 "parser.y"
                                                                                   {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 4\n");}
#line 2549 "parser.tab.c"
    break;

  case 66: /* decl_stmt: DIM var_name '=' END_OF_LINE expr_multiline  */
#line 355 "parser.y"
                                                       {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameMulti), 0, (yyvsp[0].expression)); printf("decl_stmt_multi 5\n");}
#line 2555 "parser.tab.c"
    break;

  case 67: /* decl_stmt: DIM var_name_singleline '=' END_OF_LINE expr_multiline  */
#line 356 "parser.y"
                                                                  {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameSingle), 0, (yyvsp[0].expression)); printf("decl_stmt_multi 6\n");}
#line 2561 "parser.tab.c"
    break;

  case 68: /* decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline  */
#line 360 "parser.y"
                                                                                      {(yyval.declStmtSingle) = createDeclStmtSingle(1, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression)); printf("decl_stmt_single 1\n");}
#line 2567 "parser.tab.c"
    break;

  case 69: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal '=' expr_singleline  */
#line 361 "parser.y"
                                                                                                        {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression)); printf("decl_stmt_single 2\n");}
#line 2573 "parser.tab.c"
    break;

  case 70: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal  */
#line 362 "parser.y"
                                                                                    {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), (yyvsp[0].vt), 0); printf("decl_stmt_single 3\n");}
#line 2579 "parser.tab.c"
    break;

  case 71: /* decl_stmt_single_line: DIM var_name_singleline '=' expr_singleline  */
#line 363 "parser.y"
                                                                                       {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), 0, (yyvsp[0].expression)); printf("decl_stmt_single 4\n");}
#line 2585 "parser.tab.c"
    break;

  case 72: /* decl_stmt_single_line: DIM var_name_singleline  */
#line 364 "parser.y"
                                                                   {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[0].varNameSingle), 0, 0); printf("decl_stmt_single 5\n");}
#line 2591 "parser.tab.c"
    break;

  case 73: /* decl_stmt_single_line: DIM var_name_singleline '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 365 "parser.y"
                                                                                             { printf("decl_stmt_single 6 (bad) \n");}
#line 2597 "parser.tab.c"
    break;

  case 74: /* var_name: IDENTIFIER '(' expr_multiline ')'  */
#line 369 "parser.y"
                                           {(yyval.varNameMulti) = createVarNameMulti((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name_multi 1\n");}
#line 2603 "parser.tab.c"
    break;

  case 75: /* var_name_singleline: IDENTIFIER '(' expr_singleline ')'  */
#line 372 "parser.y"
                                                       {(yyval.varNameSingle) = createVarNameSingle((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name_single 1\n");}
#line 2609 "parser.tab.c"
    break;

  case 76: /* var_name_singleline: IDENTIFIER  */
#line 373 "parser.y"
                                                {(yyval.varNameSingle) = createVarNameSingle((yyvsp[0].id_var_name), 0); printf("var_name_single 1\n");}
#line 2615 "parser.tab.c"
    break;

  case 83: /* while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE  */
#line 388 "parser.y"
                                                               {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2621 "parser.tab.c"
    break;

  case 84: /* while_stmt: WHILE expr_singleline stmt_ends stmt_list END WHILE  */
#line 389 "parser.y"
                                                                {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2627 "parser.tab.c"
    break;

  case 85: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP  */
#line 394 "parser.y"
                                                  {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-2].doLoopCondition), (yyvsp[-1].stmtList));}
#line 2633 "parser.tab.c"
    break;

  case 86: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 395 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));}
#line 2639 "parser.tab.c"
    break;

  case 87: /* do_loop_condition: UNTIL expr_singleline stmt_ends  */
#line 398 "parser.y"
                                                   {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression));}
#line 2645 "parser.tab.c"
    break;

  case 88: /* do_loop_condition: WHILE expr_singleline stmt_ends  */
#line 399 "parser.y"
                                                                   {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression));}
#line 2651 "parser.tab.c"
    break;

  case 89: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT  */
#line 404 "parser.y"
                                                                                                                       {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-9].id_var_name), (yyvsp[-7].vt), (yyvsp[-5].expression), (yyvsp[-3].expression), 0, (yyvsp[-1].stmtList));}
#line 2657 "parser.tab.c"
    break;

  case 90: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT  */
#line 405 "parser.y"
                                                                                                                                                            {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-11].id_var_name), (yyvsp[-9].vt), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].stmtList));}
#line 2663 "parser.tab.c"
    break;

  case 91: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT  */
#line 410 "parser.y"
                                                                                                {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-7].id_var_name), (yyvsp[-5].vt), (yyvsp[-3].id_var_name), (yyvsp[-1].stmtList));}
#line 2669 "parser.tab.c"
    break;

  case 92: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF  */
#line 415 "parser.y"
                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 1\n");}
#line 2675 "parser.tab.c"
    break;

  case 93: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list END IF  */
#line 416 "parser.y"
                                                                       {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 2\n");}
#line 2681 "parser.tab.c"
    break;

  case 94: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 417 "parser.y"
                                                                                                               {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 3\n");}
#line 2687 "parser.tab.c"
    break;

  case 95: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 418 "parser.y"
                                                                                                                {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 4\n");}
#line 2693 "parser.tab.c"
    break;

  case 96: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF  */
#line 419 "parser.y"
                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 5\n");}
#line 2699 "parser.tab.c"
    break;

  case 97: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF  */
#line 420 "parser.y"
                                                                                   {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 6\n");}
#line 2705 "parser.tab.c"
    break;

  case 98: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 421 "parser.y"
                                                                                                                           {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 7\n");}
#line 2711 "parser.tab.c"
    break;

  case 99: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 422 "parser.y"
                                                                                                                            {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 8\n");}
#line 2717 "parser.tab.c"
    break;

  case 100: /* elseif_list: elseif  */
#line 425 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf)); printf("elseif_list 1\n");}
#line 2723 "parser.tab.c"
    break;

  case 101: /* elseif_list: elseif_list elseif  */
#line 426 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf)); printf("elseif_list 2\n");}
#line 2729 "parser.tab.c"
    break;

  case 102: /* elseif: ELSEIF expr_multiline THEN stmt_ends stmt_list  */
#line 429 "parser.y"
                                                       {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 1\n");}
#line 2735 "parser.tab.c"
    break;

  case 103: /* elseif: ELSEIF expr_singleline THEN stmt_ends stmt_list  */
#line 430 "parser.y"
                                                        {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 2\n");}
#line 2741 "parser.tab.c"
    break;

  case 104: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt  */
#line 432 "parser.y"
                                                               {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0); printf("if_stmt_single 1\n");}
#line 2747 "parser.tab.c"
    break;

  case 105: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  */
#line 433 "parser.y"
                                                                                     {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle)); printf("if_stmt_single 2\n");}
#line 2753 "parser.tab.c"
    break;

  case 106: /* select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT  */
#line 438 "parser.y"
                                                                        {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2759 "parser.tab.c"
    break;

  case 107: /* select_stmt: SELECT CASE expr_multiline stmt_ends case_list END SELECT  */
#line 439 "parser.y"
                                                                       {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2765 "parser.tab.c"
    break;

  case 108: /* case_list: case_stmt  */
#line 442 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt));}
#line 2771 "parser.tab.c"
    break;

  case 109: /* case_list: case_list case_stmt  */
#line 443 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt));}
#line 2777 "parser.tab.c"
    break;

  case 110: /* case_stmt: CASE expr_multiline stmt_ends stmt_list  */
#line 446 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2783 "parser.tab.c"
    break;

  case 111: /* case_stmt: CASE expr_singleline stmt_ends stmt_list  */
#line 447 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2789 "parser.tab.c"
    break;

  case 112: /* case_stmt: CASE IS expr_multiline stmt_ends stmt_list  */
#line 448 "parser.y"
                                                     {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2795 "parser.tab.c"
    break;

  case 113: /* case_stmt: CASE IS expr_singleline stmt_ends stmt_list  */
#line 449 "parser.y"
                                                      {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2801 "parser.tab.c"
    break;

  case 114: /* case_stmt: CASE expr_multiline TO expr_multiline stmt_ends stmt_list  */
#line 450 "parser.y"
                                                                    {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2807 "parser.tab.c"
    break;

  case 115: /* case_stmt: CASE expr_multiline TO expr_singleline stmt_ends stmt_list  */
#line 451 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2813 "parser.tab.c"
    break;

  case 116: /* case_stmt: CASE expr_singleline TO expr_multiline stmt_ends stmt_list  */
#line 452 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2819 "parser.tab.c"
    break;

  case 117: /* case_stmt: CASE expr_singleline TO expr_singleline stmt_ends stmt_list  */
#line 453 "parser.y"
                                                                      {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2825 "parser.tab.c"
    break;

  case 118: /* case_stmt: CASE ELSE stmt_ends stmt_list  */
#line 454 "parser.y"
                                        {(yyval.caseStmt) = createCaseStmt(0, 0, 0, (yyvsp[0].stmtList));}
#line 2831 "parser.tab.c"
    break;

  case 119: /* expr_singleline: basic_literal_value  */
#line 460 "parser.y"
                                     {(yyval.expression) = (yyvsp[0].expression); printf("expr_single 1\n");}
#line 2837 "parser.tab.c"
    break;

  case 120: /* expr_singleline: '-' expr_singleline  */
#line 461 "parser.y"
                                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression)); printf("expr_single 1\n");}
#line 2843 "parser.tab.c"
    break;

  case 121: /* expr_singleline: '+' expr_singleline  */
#line 462 "parser.y"
                                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression)); printf("expr_single 2\n");}
#line 2849 "parser.tab.c"
    break;

  case 122: /* expr_singleline: expr_singleline '+' expr_singleline  */
#line 463 "parser.y"
                                          {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));  printf("expr_single 3\n");}
#line 2855 "parser.tab.c"
    break;

  case 123: /* expr_singleline: expr_singleline '-' expr_singleline  */
#line 464 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));  printf("expr_single 4\n");}
#line 2861 "parser.tab.c"
    break;

  case 124: /* expr_singleline: expr_singleline '*' expr_singleline  */
#line 465 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 5\n");}
#line 2867 "parser.tab.c"
    break;

  case 125: /* expr_singleline: expr_singleline '/' expr_singleline  */
#line 466 "parser.y"
                                          {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 6\n");}
#line 2873 "parser.tab.c"
    break;

  case 126: /* expr_singleline: expr_singleline INT_DIV expr_singleline  */
#line 467 "parser.y"
                                              {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 7\n");}
#line 2879 "parser.tab.c"
    break;

  case 127: /* expr_singleline: expr_singleline '=' expr_singleline  */
#line 468 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 8\n");}
#line 2885 "parser.tab.c"
    break;

  case 128: /* expr_singleline: expr_singleline '<' expr_singleline  */
#line 469 "parser.y"
                                          {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 9\n");}
#line 2891 "parser.tab.c"
    break;

  case 129: /* expr_singleline: expr_singleline '>' expr_singleline  */
#line 470 "parser.y"
                                          {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 10\n");}
#line 2897 "parser.tab.c"
    break;

  case 130: /* expr_singleline: expr_singleline '^' expr_singleline  */
#line 471 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 11\n");}
#line 2903 "parser.tab.c"
    break;

  case 131: /* expr_singleline: expr_singleline NOT_EQUAL expr_singleline  */
#line 472 "parser.y"
                                                {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 12\n");}
#line 2909 "parser.tab.c"
    break;

  case 132: /* expr_singleline: expr_singleline LESS_OR_EQUAL expr_singleline  */
#line 473 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 13\n");}
#line 2915 "parser.tab.c"
    break;

  case 133: /* expr_singleline: expr_singleline MORE_OR_EQUAL expr_singleline  */
#line 474 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 14\n");}
#line 2921 "parser.tab.c"
    break;

  case 134: /* expr_singleline: expr_singleline '&' expr_singleline  */
#line 475 "parser.y"
                                          {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 15\n");}
#line 2927 "parser.tab.c"
    break;

  case 135: /* expr_singleline: '(' expr_singleline ')'  */
#line 476 "parser.y"
                              {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression)); printf("expr_single 16\n");}
#line 2933 "parser.tab.c"
    break;

  case 136: /* expr_singleline: IDENTIFIER  */
#line 477 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)}); printf("expr_single 17\n");}
#line 2939 "parser.tab.c"
    break;

  case 137: /* expr_singleline: IDENTIFIER arguments_singleline  */
#line 478 "parser.y"
                                      {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList)); printf("expr_single 18\n");}
#line 2945 "parser.tab.c"
    break;

  case 138: /* expr_singleline: expr_singleline AND expr_singleline  */
#line 479 "parser.y"
                                          {(yyval.expression) = createExpression(ET_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 19\n");}
#line 2951 "parser.tab.c"
    break;

  case 139: /* expr_singleline: expr_singleline OR expr_singleline  */
#line 480 "parser.y"
                                         {(yyval.expression) = createExpression(ET_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 20\n");}
#line 2957 "parser.tab.c"
    break;

  case 140: /* expr_singleline: expr_singleline XOR expr_singleline  */
#line 481 "parser.y"
                                          {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 21\n");}
#line 2963 "parser.tab.c"
    break;

  case 141: /* expr_singleline: NOT expr_singleline  */
#line 482 "parser.y"
                          {(yyval.expression) = createExpression(ET_NOT, 0, (yyvsp[0].expression)); printf("expr_single 22\n");}
#line 2969 "parser.tab.c"
    break;

  case 142: /* expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline  */
#line 485 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2975 "parser.tab.c"
    break;

  case 143: /* expr_multiline: expr_singleline '-' END_OF_LINE expr_singleline  */
#line 486 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2981 "parser.tab.c"
    break;

  case 144: /* expr_multiline: expr_singleline '*' END_OF_LINE expr_singleline  */
#line 487 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2987 "parser.tab.c"
    break;

  case 145: /* expr_multiline: expr_singleline '/' END_OF_LINE expr_singleline  */
#line 488 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2993 "parser.tab.c"
    break;

  case 146: /* expr_multiline: expr_singleline INT_DIV END_OF_LINE expr_singleline  */
#line 489 "parser.y"
                                                                    {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2999 "parser.tab.c"
    break;

  case 147: /* expr_multiline: expr_singleline '=' END_OF_LINE expr_singleline  */
#line 490 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3005 "parser.tab.c"
    break;

  case 148: /* expr_multiline: expr_singleline '<' END_OF_LINE expr_singleline  */
#line 491 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3011 "parser.tab.c"
    break;

  case 149: /* expr_multiline: expr_singleline '>' END_OF_LINE expr_singleline  */
#line 492 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3017 "parser.tab.c"
    break;

  case 150: /* expr_multiline: expr_singleline '^' END_OF_LINE expr_singleline  */
#line 493 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3023 "parser.tab.c"
    break;

  case 151: /* expr_multiline: expr_singleline NOT_EQUAL END_OF_LINE expr_singleline  */
#line 494 "parser.y"
                                                                      {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3029 "parser.tab.c"
    break;

  case 152: /* expr_multiline: expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline  */
#line 495 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3035 "parser.tab.c"
    break;

  case 153: /* expr_multiline: expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline  */
#line 496 "parser.y"
                                                                          {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3041 "parser.tab.c"
    break;

  case 154: /* expr_multiline: expr_singleline '&' END_OF_LINE expr_singleline  */
#line 497 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3047 "parser.tab.c"
    break;

  case 155: /* expr_multiline: '(' END_OF_LINE expr_singleline ')'  */
#line 498 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression));}
#line 3053 "parser.tab.c"
    break;

  case 156: /* expr_multiline: '(' END_OF_LINE expr_singleline END_OF_LINE ')'  */
#line 499 "parser.y"
                                                                {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 3059 "parser.tab.c"
    break;

  case 157: /* expr_multiline: '(' expr_singleline END_OF_LINE ')'  */
#line 500 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 3065 "parser.tab.c"
    break;

  case 158: /* expr_multiline: IDENTIFIER arguments_multiline  */
#line 501 "parser.y"
                                               {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList));}
#line 3071 "parser.tab.c"
    break;

  case 159: /* expr_multiline: expr_singleline AND END_OF_LINE expr_singleline  */
#line 502 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_AND, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3077 "parser.tab.c"
    break;

  case 160: /* expr_multiline: expr_singleline OR END_OF_LINE expr_singleline  */
#line 503 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_OR, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3083 "parser.tab.c"
    break;

  case 161: /* expr_multiline: expr_singleline XOR END_OF_LINE expr_singleline  */
#line 504 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 3089 "parser.tab.c"
    break;

  case 162: /* basic_literal: INT  */
#line 508 "parser.y"
                   {(yyval.vt) = VT_INTEGER; printf("basic_literal int\n");}
#line 3095 "parser.tab.c"
    break;

  case 163: /* basic_literal: STRING  */
#line 509 "parser.y"
                     {(yyval.vt) = VT_STRING; printf("basic_literal str\n");}
#line 3101 "parser.tab.c"
    break;

  case 164: /* basic_literal: BOOLEAN  */
#line 510 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN; printf("basic_literal bool\n");}
#line 3107 "parser.tab.c"
    break;

  case 165: /* basic_literal: DOUBLE  */
#line 511 "parser.y"
                     {(yyval.vt) = VT_DOUBLE; printf("basic_literal double\n");}
#line 3113 "parser.tab.c"
    break;

  case 166: /* basic_literal_value: INT_VALUE  */
#line 514 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)}); printf("basic_literal_value int\n");}
#line 3119 "parser.tab.c"
    break;

  case 167: /* basic_literal_value: STRING_VALUE  */
#line 515 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)}); printf("basic_literal_value str\n");}
#line 3125 "parser.tab.c"
    break;

  case 168: /* basic_literal_value: BOOLEAN_VALUE  */
#line 516 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)}); printf("basic_literal_value bool\n");}
#line 3131 "parser.tab.c"
    break;

  case 169: /* basic_literal_value: DOUBLE_VALUE  */
#line 517 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)}); printf("basic_literal_value double\n");}
#line 3137 "parser.tab.c"
    break;

  case 170: /* arguments_multiline: '(' END_OF_LINE expr_list ')'  */
#line 522 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3143 "parser.tab.c"
    break;

  case 171: /* arguments_multiline: '(' END_OF_LINE expr_list END_OF_LINE ')'  */
#line 523 "parser.y"
                                                               {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3149 "parser.tab.c"
    break;

  case 172: /* arguments_multiline: '(' expr_list END_OF_LINE ')'  */
#line 524 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3155 "parser.tab.c"
    break;

  case 173: /* arguments_singleline: '(' expr_list ')'  */
#line 528 "parser.y"
                                        {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3161 "parser.tab.c"
    break;

  case 174: /* arguments_singleline: '(' ')'  */
#line 529 "parser.y"
                              {(yyval.expressionList) = 0;}
#line 3167 "parser.tab.c"
    break;

  case 175: /* expr_list: expr_singleline  */
#line 533 "parser.y"
                           {(yyval.expressionList) = createExpressionList((yyvsp[0].expression)); printf("expr_list 1\n");}
#line 3173 "parser.tab.c"
    break;

  case 176: /* expr_list: expr_list ',' expr_singleline  */
#line 534 "parser.y"
                                         {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression)); printf("expr_list 2\n");}
#line 3179 "parser.tab.c"
    break;


#line 3183 "parser.tab.c"

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

#line 538 "parser.y"



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
