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
SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList, StmtList * elseStmt);
CaseList *createCaseList(CaseStmt *caseStmt);
CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt);
CaseStmt *createCaseStmt(int isIs, Expression *expression, StmtList *stmtList);
DeclStmt *createDeclStmt(int isConst, VarName* id_var_name, VarType varType, Expression *expression);
VarName *createVarName(char* id_var_name, Expression *expression);
VarName *createVarName(char* id_var_name, Expression *expression);
ReturnStmt *createReturnStmt(Expression *expression);

ProgramItemList *root;

#line 139 "parser.tab.c"

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
  YYSYMBOL_XOR = 54,                       /* XOR  */
  YYSYMBOL_OR = 55,                        /* OR  */
  YYSYMBOL_AND = 56,                       /* AND  */
  YYSYMBOL_NOT = 57,                       /* NOT  */
  YYSYMBOL_58_ = 58,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 59,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 60,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 61,             /* MORE_OR_EQUAL  */
  YYSYMBOL_62_ = 62,                       /* '>'  */
  YYSYMBOL_63_ = 63,                       /* '<'  */
  YYSYMBOL_SHIFT_LEFT = 64,                /* SHIFT_LEFT  */
  YYSYMBOL_SHIFT_RIGHT = 65,               /* SHIFT_RIGHT  */
  YYSYMBOL_66_ = 66,                       /* '&'  */
  YYSYMBOL_67_ = 67,                       /* '+'  */
  YYSYMBOL_68_ = 68,                       /* '-'  */
  YYSYMBOL_MOD = 69,                       /* MOD  */
  YYSYMBOL_INT_DIV = 70,                   /* INT_DIV  */
  YYSYMBOL_71_ = 71,                       /* '*'  */
  YYSYMBOL_72_ = 72,                       /* '/'  */
  YYSYMBOL_UNARY_MINUS = 73,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 74,                /* UNARY_PLUS  */
  YYSYMBOL_75_ = 75,                       /* '^'  */
  YYSYMBOL_76_ = 76,                       /* '('  */
  YYSYMBOL_77_ = 77,                       /* ')'  */
  YYSYMBOL_78_ = 78,                       /* '{'  */
  YYSYMBOL_79_ = 79,                       /* '}'  */
  YYSYMBOL_THEN = 80,                      /* THEN  */
  YYSYMBOL_ELSE = 81,                      /* ELSE  */
  YYSYMBOL_82_ = 82,                       /* ','  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_root = 84,                      /* root  */
  YYSYMBOL_program_items_list = 85,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 86, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 87,              /* program_item  */
  YYSYMBOL_module = 88,                    /* module  */
  YYSYMBOL_functions_or_sub_list = 89,     /* functions_or_sub_list  */
  YYSYMBOL_function_or_sub = 90,           /* function_or_sub  */
  YYSYMBOL_function = 91,                  /* function  */
  YYSYMBOL_sub_bloc = 92,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 93,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 94,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 95, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 96,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 97,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 98,                 /* stmt_list  */
  YYSYMBOL_stmt = 99,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 100,         /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 101,          /* multi_line_stmt  */
  YYSYMBOL_return_stmt = 102,              /* return_stmt  */
  YYSYMBOL_stmt_ends = 103,                /* stmt_ends  */
  YYSYMBOL_optEoL = 104,                   /* optEoL  */
  YYSYMBOL_decl_stmt = 105,                /* decl_stmt  */
  YYSYMBOL_var_name = 106,                 /* var_name  */
  YYSYMBOL_access = 107,                   /* access  */
  YYSYMBOL_while_stmt = 108,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 109,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 110,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 111,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 112,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 113,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 114,              /* elseif_list  */
  YYSYMBOL_elseif = 115,                   /* elseif  */
  YYSYMBOL_if_stmt_single_line = 116,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 117,              /* select_stmt  */
  YYSYMBOL_case_list = 118,                /* case_list  */
  YYSYMBOL_case_stmt = 119,                /* case_stmt  */
  YYSYMBOL_expr = 120,                     /* expr  */
  YYSYMBOL_basic_literal = 121,            /* basic_literal  */
  YYSYMBOL_basic_literal_value = 122,      /* basic_literal_value  */
  YYSYMBOL_arguments = 123,                /* arguments  */
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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1447

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
       2,     2,     2,     2,     2,     2,     2,     2,    66,     2,
      76,    77,    71,    67,    82,    68,     2,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,    58,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,    79,     2,     2,     2,     2,
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
      55,    56,    57,    59,    60,    61,    64,    65,    69,    70,
      73,    74,    80,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   240,   240,   243,   246,   247,   250,   251,   252,   256,
     257,   258,   259,   262,   263,   266,   267,   270,   271,   272,
     273,   276,   277,   278,   279,   282,   283,   284,   287,   288,
     291,   292,   295,   296,   297,   298,   301,   306,   307,   310,
     311,   314,   315,   316,   317,   320,   321,   322,   323,   324,
     325,   328,   331,   332,   335,   336,   340,   341,   342,   343,
     344,   345,   348,   349,   352,   353,   354,   355,   356,   357,
     361,   365,   366,   369,   370,   374,   375,   379,   382,   383,
     384,   385,   388,   389,   392,   395,   396,   400,   401,   404,
     405,   408,   409,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     442,   443,   444,   445,   448,   449,   450,   451,   454,   455,
     458,   459
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
  "XOR", "OR", "AND", "NOT", "'='", "NOT_EQUAL", "LESS_OR_EQUAL",
  "MORE_OR_EQUAL", "'>'", "'<'", "SHIFT_LEFT", "SHIFT_RIGHT", "'&'", "'+'",
  "'-'", "MOD", "INT_DIV", "'*'", "'/'", "UNARY_MINUS", "UNARY_PLUS",
  "'^'", "'('", "')'", "'{'", "'}'", "THEN", "ELSE", "','", "$accept",
  "root", "program_items_list", "program_items_list_not_empty",
  "program_item", "module", "functions_or_sub_list", "function_or_sub",
  "function", "sub_bloc", "parameterlist_or_empty",
  "parameterlist_with_type", "parameterlist_without_type",
  "parameter_with_type", "parameter_without_type", "stmt_list", "stmt",
  "single_line_stmt", "multi_line_stmt", "return_stmt", "stmt_ends",
  "optEoL", "decl_stmt", "var_name", "access", "while_stmt",
  "do_loop_stmt", "do_loop_condition", "for_loop_stmt",
  "for_each_loop_stmt", "if_stmt_multi_line", "elseif_list", "elseif",
  "if_stmt_single_line", "select_stmt", "case_list", "case_stmt", "expr",
  "basic_literal", "basic_literal_value", "arguments", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-285)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     193,     6,     7,  -285,    -7,    12,  -285,  -285,    20,  -285,
     193,  -285,  -285,    40,  -285,    49,  -285,  -285,  -285,  -285,
      65,  -285,   158,    49,    85,    77,    86,  -285,   349,  -285,
    -285,  -285,    16,   211,    35,  -285,    39,    93,  -285,   102,
     113,   101,   360,   -30,   -30,  -285,    53,    55,  -285,   107,
    -285,    68,     3,    75,   -30,   -30,  -285,    49,   136,   150,
     -34,   -33,  -285,  -285,    49,    92,    98,   318,   139,   167,
     151,  -285,   151,  -285,   498,    49,    49,  -285,  -285,  -285,
    -285,   117,   183,   188,   188,   340,   340,   181,   340,    -6,
      -1,   340,   340,   340,   151,   637,  -285,    49,  -285,  -285,
    -285,    49,  -285,  -285,  -285,    49,  -285,    49,  1276,  -285,
    -285,  -285,  -285,  -285,   129,   139,     4,   199,   184,   673,
     557,   597,   -26,  -285,    49,   137,   197,     0,  1206,  1077,
     340,  1276,   340,   340,   704,  1036,   198,   204,  1350,   142,
     142,   340,   208,  -285,   187,   187,   187,   187,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   146,   152,
     136,  -285,  -285,  -285,    49,   201,   214,   748,   203,   770,
    -285,   340,   187,   340,   139,   139,     1,   704,    87,  1206,
    1206,  1206,   792,   814,   139,   216,  1254,    49,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,  -285,   157,
     187,    49,    49,   222,    49,   209,  1276,   -32,  1158,   178,
     180,   139,   340,   836,   340,   166,   704,    -9,   187,   187,
      14,    49,   195,   139,   174,   187,   378,  1302,  1324,  1350,
    1372,    71,    71,    71,    71,    71,   421,   421,    89,    38,
      38,    52,     8,   142,   142,  -285,  -285,   187,   187,    49,
     187,    49,   340,   179,  -285,   151,   151,   182,  1276,   237,
    1104,  1058,   173,   314,    13,  -285,  -285,   187,   177,   227,
    -285,   187,   187,  1276,  -285,   340,   340,   191,  -285,  1058,
    -285,   240,   340,    49,   -11,  -285,   340,  1206,   243,    19,
    -285,   247,   263,  1276,  1276,   200,  -285,  1131,   704,   257,
      49,  -285,  1206,   704,  -285,    49,   177,    49,   340,    49,
     858,  -285,   704,   704,  1036,   704,    50,   704,   -17,   704,
     258,   880,  1036,   902,   177,   704,   924,  -285,  1036,  -285,
     266,   265,    49,   968,    49,  -285,  -285,   704,    49,   187,
    1000,   187,    49,   187
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,    67,    65,    64,    66,     0,     2,
       3,     4,     6,     0,     7,     0,    69,    68,     1,     5,
       0,    52,     0,     0,     0,     0,     0,    53,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,    14,     0,
       0,     0,     0,    54,    54,    10,     0,     0,    11,     0,
      55,     0,     0,     0,    54,    54,    12,     0,    36,     0,
      54,    54,    28,    30,     0,     0,     0,     0,     0,     0,
      54,    26,    54,    27,     0,     0,     0,   124,   127,   125,
     126,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,    37,     0,    39,    44,
      42,     0,    47,    48,    49,     0,    41,     0,    43,    93,
     120,   123,   121,   122,    32,     0,     0,     0,     0,     0,
       0,     0,    54,   111,     0,    63,     0,    60,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,   115,    95,
      94,     0,     0,    38,    40,    46,    45,    50,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,     0,    34,
       0,    29,    36,    31,     0,     0,     0,     0,     0,     0,
     129,     0,    21,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
      17,     0,     0,     0,     0,     0,   130,    54,     0,     0,
      58,     0,     0,     0,     0,    85,     0,     0,    74,    73,
       0,     0,     0,     0,     0,    22,   116,   114,   113,   112,
     101,   105,   106,   107,   103,   102,   118,   119,   108,    96,
      97,   117,   100,    98,    99,   104,    35,    18,    23,     0,
      19,     0,     0,     0,    62,    54,    54,     0,    59,     0,
       0,     0,     0,     0,     0,    89,    72,    71,     0,     0,
     109,    24,    20,   131,   128,     0,     0,     0,    70,     0,
      86,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      90,     0,     0,    56,    57,     0,    78,     0,     0,     0,
       0,    83,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    80,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,    61,    84,    79,
       0,     0,     0,     0,     0,    81,    88,     0,     0,    77,
       0,    75,     0,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -285,  -285,   279,  -285,   259,    33,  -285,  -285,
     -16,  -285,  -285,   185,   186,   -66,   -60,  -187,  -285,  -285,
     -23,   319,  -285,   206,    63,  -285,  -285,    54,  -285,  -285,
    -285,  -285,    -8,  -285,  -285,  -285,    11,   223,  -113,  -284,
    -285,   -21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    28,    29,    30,    31,
      51,    60,    61,    62,    63,    95,    96,    97,    98,    99,
      22,    52,   100,   126,    32,   101,   102,   135,   103,   104,
     105,   304,   305,   106,   107,   284,   285,   108,   114,   109,
     123,   227
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   235,   169,   319,   311,    50,    50,    50,   119,    50,
     302,   136,   132,    50,   283,    58,   170,   185,    14,    15,
      18,   231,    77,    78,    79,    80,   133,   308,    53,    39,
      27,    81,   132,    21,    67,   143,   309,   137,    65,    66,
      50,    74,   336,   306,    40,    16,   133,   -25,    70,    72,
     272,   180,   120,   121,   177,   179,    59,    59,   186,   143,
     352,    38,   347,    13,    17,   272,   134,    20,   192,   193,
     320,   229,   230,    13,   144,    38,    91,    23,   145,   165,
     166,   242,   146,   167,   147,   344,    92,    93,    21,    21,
      77,    78,    79,    80,   300,    94,   148,    34,    36,    81,
     325,   182,    83,    84,    35,   187,   234,   163,   164,   165,
     166,    43,   235,   167,    46,    44,    88,   143,   277,   143,
      45,   233,   164,   165,   166,    47,    21,   167,    48,    54,
     289,    55,   143,   143,    56,   158,   159,   160,   161,   162,
     163,   164,   165,   166,    91,    57,   167,   110,   111,   112,
     113,   220,    64,    68,    92,    93,   161,   162,   163,   164,
     165,   166,    69,    94,   167,   236,   237,   238,   239,    75,
     282,    24,    25,   143,   245,    76,    77,    78,    79,    80,
      77,    78,    79,    80,   115,    81,    26,   301,    83,    84,
      50,    85,    86,   122,   302,    87,   124,    27,   267,   268,
     125,   270,    88,    89,   130,   168,    90,     4,     5,     6,
       7,   172,   174,   183,   184,   194,   195,   167,   287,     1,
       2,   197,   143,   218,    24,    41,    27,   222,   219,   221,
      91,   224,     3,   243,   266,   269,   275,   271,   276,    26,
      92,    93,     4,     5,     6,     7,   291,   281,   292,    94,
      27,   290,   330,   288,   303,   298,   294,   334,   297,   316,
       4,     5,     6,     7,   312,   324,   341,   342,   315,   343,
     143,   346,   326,   348,   143,   327,   331,   349,   328,   353,
     318,   143,   143,   143,   323,   355,   143,   356,   143,    19,
     127,   360,    42,   143,   286,   310,   321,   332,     0,   333,
     143,   171,   335,   173,   337,     0,   339,   338,   128,   129,
       0,   131,     0,   345,   138,   139,   140,    77,    78,    79,
      80,    77,    78,    79,    80,     0,    81,     0,     0,   357,
      81,   359,    82,    83,    84,   361,    85,    86,   306,   363,
      87,     0,     0,    77,    78,    79,    80,    88,    89,     0,
       0,    90,    81,   189,     0,   190,   191,    27,     0,     0,
       0,     0,    24,    37,   196,     0,     0,     0,     0,     0,
       0,    91,     0,    24,    49,    91,     0,    26,     0,    71,
      73,    92,    93,     0,     0,    92,    93,     0,    26,   116,
      94,   117,     0,     0,    94,     0,     0,    91,     4,     5,
       6,     7,     0,     0,   226,     0,   228,    92,    93,     4,
       5,     6,     7,   141,     0,     0,    94,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   181,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,     0,   167,     0,   278,     0,   280,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   160,   161,   162,
     163,   164,   165,   166,     0,   293,   167,     0,     0,     0,
       0,    77,    78,    79,    80,   232,   307,     0,     0,     0,
      81,     0,   118,    83,    84,   244,    85,    86,   313,   314,
      87,     0,     0,     0,     0,   317,     0,    88,    89,   322,
       0,    90,   307,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,   273,     0,     0,     0,
       0,   226,     0,     0,     0,    91,     0,     0,     0,     0,
      77,    78,    79,    80,     0,    92,    93,     0,     0,    81,
       0,   176,    83,    84,    94,    85,    86,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,    89,     0,     0,
      90,     0,     0,     0,   295,   296,    27,     0,     0,     0,
      77,    78,    79,    80,     0,     0,     0,     0,     0,    81,
       0,   178,    83,    84,    91,    85,    86,     0,     0,    87,
       0,     0,     0,     0,    92,    93,    88,    89,     0,     0,
      90,     0,     0,    94,     0,     0,    27,     0,     0,     0,
      77,    78,    79,    80,     0,     0,     0,     0,     0,    81,
       0,   142,    83,    84,    91,    85,    86,     0,     0,    87,
       0,     0,     0,     0,    92,    93,    88,    89,     0,     0,
      90,     0,     0,    94,     0,     0,    77,    78,    79,    80,
       0,     0,     0,     0,     0,    81,     0,   175,    83,    84,
       0,    85,    86,     0,    91,    87,     0,     0,     0,     0,
       0,     0,    88,    89,    92,    93,    90,    77,    78,    79,
      80,     0,     0,    94,     0,     0,    81,     0,     0,    83,
      84,     0,    85,    86,     0,     0,    87,     0,     0,     0,
      91,     0,     0,    88,    89,     0,     0,    90,     0,     0,
      92,    93,     0,    27,     0,     0,     0,     0,     0,    94,
       0,    77,    78,    79,    80,     0,     0,     0,     0,     0,
      81,    91,   223,    83,    84,     0,    85,    86,     0,     0,
      87,    92,    93,    77,    78,    79,    80,    88,    89,     0,
      94,    90,    81,     0,   225,    83,    84,     0,    85,    86,
       0,     0,    87,     0,     0,    77,    78,    79,    80,    88,
      89,     0,     0,    90,    81,    91,     0,    83,    84,     0,
      85,    86,     0,     0,    87,    92,    93,    77,    78,    79,
      80,    88,    89,   240,    94,    90,    81,    91,     0,    83,
      84,     0,    85,    86,     0,     0,    87,    92,    93,    77,
      78,    79,    80,    88,    89,   241,    94,    90,    81,    91,
     279,    83,    84,     0,    85,    86,     0,     0,    87,    92,
      93,    77,    78,    79,    80,    88,    89,     0,    94,    90,
      81,    91,   340,    83,    84,     0,    85,    86,     0,     0,
      87,    92,    93,    77,    78,    79,    80,    88,    89,     0,
      94,    90,    81,    91,   350,    83,    84,     0,    85,    86,
       0,     0,    87,    92,    93,    77,    78,    79,    80,    88,
      89,     0,    94,    90,    81,    91,   351,    83,    84,     0,
      85,    86,     0,     0,    87,    92,    93,    77,    78,    79,
      80,    88,    89,     0,    94,    90,    81,    91,     0,    83,
      84,     0,    85,    86,     0,     0,    87,    92,    93,     0,
       0,     0,     0,    88,    89,     0,    94,    90,   354,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    77,    78,    79,    80,     0,     0,     0,    94,     0,
      81,    91,     0,    83,    84,     0,    85,    86,     0,     0,
      87,    92,    93,     0,     0,     0,     0,    88,    89,     0,
      94,    90,   358,    77,    78,    79,    80,     0,     0,     0,
       0,     0,    81,     0,     0,    83,    84,     0,    85,    86,
       0,     0,    87,     0,     0,    91,     0,     0,     0,    88,
      89,     0,     0,    90,   362,    92,    93,     0,     0,    77,
      78,    79,    80,     0,    94,     0,     0,     0,    81,     0,
       0,    83,    84,     0,    85,    86,     0,    91,    87,     0,
       0,    77,    78,    79,    80,    88,    89,    92,    93,    90,
      81,     0,     0,    83,    84,     0,    94,   234,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,   148,    92,    93,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,     0,   148,
       0,   149,   150,   151,    94,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,     0,   167,     0,     0,     0,   148,   188,   149,   150,
     151,     0,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,     0,     0,   167,
       0,     0,     0,   148,   299,   149,   150,   151,     0,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     0,     0,   167,     0,     0,     0,
       0,   329,   149,   150,   151,     0,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   148,     0,   167,     0,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,   150,   151,     0,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   148,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,   149,   150,
     151,     0,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   148,     0,   167,
     149,   150,   151,     0,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   148,
       0,   167,     0,     0,     0,     0,     0,   150,   151,     0,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   148,     0,   167,     0,     0,
     151,     0,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   148,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,     0,     0,   167,     0,     0,     0,     0,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,     0,   167
};

static const yytype_int16 yycheck[] =
{
      23,   188,   115,    14,   288,    39,    39,    39,    74,    39,
      21,    12,    18,    39,    23,    12,    12,    17,    12,    12,
       0,    20,     3,     4,     5,     6,    32,    14,    44,    13,
      39,    12,    18,    39,    57,    95,    23,    38,    54,    55,
      39,    64,   326,    24,    28,    52,    32,    77,    82,    82,
      82,    77,    75,    76,   120,   121,    53,    53,    58,   119,
     344,    28,    79,     0,    52,    82,    89,    27,   134,   135,
      81,   184,   185,    10,    97,    42,    57,    12,   101,    71,
      72,   194,   105,    75,   107,    35,    67,    68,    39,    39,
       3,     4,     5,     6,   281,    76,    25,    12,    12,    12,
      81,   124,    15,    16,    27,   128,    19,    69,    70,    71,
      72,    76,   299,    75,    12,    76,    29,   177,   231,   179,
      27,   187,    70,    71,    72,    12,    39,    75,    27,    76,
     243,    76,   192,   193,    27,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    57,    77,    75,     8,     9,    10,
      11,   174,    77,    17,    67,    68,    67,    68,    69,    70,
      71,    72,    12,    76,    75,   188,   189,   190,   191,    77,
     236,    13,    14,   233,   197,    77,     3,     4,     5,     6,
       3,     4,     5,     6,    17,    12,    28,    14,    15,    16,
      39,    18,    19,    76,    21,    22,    13,    39,   221,   222,
      12,   224,    29,    30,    23,    76,    33,    49,    50,    51,
      52,    12,    28,    76,    17,    17,    12,    75,   241,    26,
      27,    13,   282,    77,    13,    14,    39,    13,    76,    28,
      57,    28,    39,    17,    77,    13,    58,    28,    58,    28,
      67,    68,    49,    50,    51,    52,   269,    81,   271,    76,
      39,    77,   318,    58,    81,    18,    77,   323,    76,    19,
      49,    50,    51,    52,    37,    22,   332,   333,    77,   335,
     330,   337,    25,   339,   334,    12,    19,    19,    78,   345,
     303,   341,   342,   343,   307,    19,   346,    22,   348,    10,
      84,   357,    33,   353,   240,   284,   304,   320,    -1,   322,
     360,   116,   325,   117,   327,    -1,   329,   328,    85,    86,
      -1,    88,    -1,   336,    91,    92,    93,     3,     4,     5,
       6,     3,     4,     5,     6,    -1,    12,    -1,    -1,   352,
      12,   354,    14,    15,    16,   358,    18,    19,    24,   362,
      22,    -1,    -1,     3,     4,     5,     6,    29,    30,    -1,
      -1,    33,    12,   130,    -1,   132,   133,    39,    -1,    -1,
      -1,    -1,    13,    14,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    13,    14,    57,    -1,    28,    -1,    60,
      61,    67,    68,    -1,    -1,    67,    68,    -1,    28,    70,
      76,    72,    -1,    -1,    76,    -1,    -1,    57,    49,    50,
      51,    52,    -1,    -1,   181,    -1,   183,    67,    68,    49,
      50,    51,    52,    94,    -1,    -1,    76,    -1,    -1,    -1,
      -1,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   122,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    -1,   232,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,    66,    67,    68,
      69,    70,    71,    72,    -1,   272,    75,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,   186,   283,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,   196,    18,    19,   295,   296,
      22,    -1,    -1,    -1,    -1,   302,    -1,    29,    30,   306,
      -1,    33,   309,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,   328,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    67,    68,    -1,    -1,    12,
      -1,    14,    15,    16,    76,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      33,    -1,    -1,    -1,   275,   276,    39,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    57,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    67,    68,    29,    30,    -1,    -1,
      33,    -1,    -1,    76,    -1,    -1,    39,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    57,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    67,    68,    29,    30,    -1,    -1,
      33,    -1,    -1,    76,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    57,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    67,    68,    33,     3,     4,     5,
       6,    -1,    -1,    76,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      57,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
      67,    68,    -1,    39,    -1,    -1,    -1,    -1,    -1,    76,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    57,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    67,    68,     3,     4,     5,     6,    29,    30,    -1,
      76,    33,    12,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    -1,    -1,     3,     4,     5,     6,    29,
      30,    -1,    -1,    33,    12,    57,    -1,    15,    16,    -1,
      18,    19,    -1,    -1,    22,    67,    68,     3,     4,     5,
       6,    29,    30,    31,    76,    33,    12,    57,    -1,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    67,    68,     3,
       4,     5,     6,    29,    30,    31,    76,    33,    12,    57,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    22,    67,
      68,     3,     4,     5,     6,    29,    30,    -1,    76,    33,
      12,    57,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    67,    68,     3,     4,     5,     6,    29,    30,    -1,
      76,    33,    12,    57,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    67,    68,     3,     4,     5,     6,    29,
      30,    -1,    76,    33,    12,    57,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    22,    67,    68,     3,     4,     5,
       6,    29,    30,    -1,    76,    33,    12,    57,    -1,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    67,    68,    -1,
      -1,    -1,    -1,    29,    30,    -1,    76,    33,    34,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,     3,     4,     5,     6,    -1,    -1,    -1,    76,    -1,
      12,    57,    -1,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    67,    68,    -1,    -1,    -1,    -1,    29,    30,    -1,
      76,    33,    34,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    -1,    -1,    57,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    67,    68,    -1,    -1,     3,
       4,     5,     6,    -1,    76,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    18,    19,    -1,    57,    22,    -1,
      -1,     3,     4,     5,     6,    29,    30,    67,    68,    33,
      12,    -1,    -1,    15,    16,    -1,    76,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    25,
      -1,    54,    55,    56,    76,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      -1,    -1,    75,    -1,    -1,    -1,    25,    80,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    25,    80,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    80,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    25,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    25,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    25,    -1,    75,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    25,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    25,    -1,    75,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    25,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    39,    49,    50,    51,    52,    84,    85,
      86,    87,    88,   107,    12,    12,    52,    52,     0,    87,
      27,    39,   103,    12,    13,    14,    28,    39,    89,    90,
      91,    92,   107,   103,    12,    27,    12,    14,    90,    13,
      28,    14,    89,    76,    76,    27,    12,    12,    27,    14,
      39,    93,   104,    93,    76,    76,    27,    77,    12,    53,
      94,    95,    96,    97,    77,    93,    93,   103,    17,    12,
      82,   104,    82,   104,   103,    77,    77,     3,     4,     5,
       6,    12,    14,    15,    16,    18,    19,    22,    29,    30,
      33,    57,    67,    68,    76,    98,    99,   100,   101,   102,
     105,   108,   109,   111,   112,   113,   116,   117,   120,   122,
       8,     9,    10,    11,   121,    17,   104,   104,    14,    98,
     103,   103,    76,   123,    13,    12,   106,   106,   120,   120,
      23,   120,    18,    32,   103,   110,    12,    38,   120,   120,
     120,   104,    14,    99,   103,   103,   103,   103,    25,    54,
      55,    56,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    75,    76,   121,
      12,    96,    12,    97,    28,    14,    14,    98,    14,    98,
      77,   104,   103,    76,    17,    17,    58,   103,    80,   120,
     120,   120,    98,    98,    17,    12,   120,    13,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,    77,    76,
     103,    28,    13,    14,    28,    14,   120,   124,   120,   121,
     121,    20,   104,    98,    19,   100,   103,   103,   103,   103,
      31,    31,   121,    17,   104,   103,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,    77,   103,   103,    13,
     103,    28,    82,   104,    77,    58,    58,   121,   120,    14,
     120,    81,    98,    23,   118,   119,   110,   103,    58,   121,
      77,   103,   103,   120,    77,   104,   104,    76,    18,    80,
     100,    14,    21,    81,   114,   115,    24,   120,    14,    23,
     119,   122,    37,   120,   120,    77,    19,   120,   103,    14,
      81,   115,   120,   103,    22,    81,    25,    12,    78,    80,
      98,    19,   103,   103,    98,   103,   122,   103,   124,   103,
      14,    98,    98,    98,    35,   103,    98,    79,    98,    19,
      14,    14,   122,    98,    34,    19,    22,   103,    34,   103,
      98,   103,    34,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    86,    86,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     108,   109,   109,   110,   110,   111,   111,   112,   113,   113,
     113,   113,   114,   114,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   122,   122,   122,   122,   123,   123,
     124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     5,
       6,     6,     7,     1,     2,     1,     1,     9,    10,    10,
      11,     9,    10,    10,    11,     0,     3,     3,     1,     4,
       1,     4,     3,     5,     4,     6,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       2,     2,     1,     2,     0,     1,     7,     7,     4,     5,
       2,    10,     4,     1,     1,     1,     1,     1,     2,     2,
       6,     5,     5,     3,     3,    12,    14,    11,     7,    10,
       8,    11,     1,     2,     5,     4,     6,     7,    11,     1,
       2,     4,     5,     1,     2,     2,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       1,     2,     4,     4,     4,     2,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     2,
       1,     3
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
#line 240 "parser.y"
                         {(yyval.programItemList) = root = (yyvsp[0].programItemList); printf("root 1\n");}
#line 1978 "parser.tab.c"
    break;

  case 3: /* program_items_list: program_items_list_not_empty  */
#line 243 "parser.y"
                                                 {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty)); printf("program_items_list 2\n");}
#line 1984 "parser.tab.c"
    break;

  case 4: /* program_items_list_not_empty: program_item  */
#line 246 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); printf("program_items_list_not_empty 1\n");}
#line 1990 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 247 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); printf("program_items_list_not_empty 2\n");}
#line 1996 "parser.tab.c"
    break;

  case 6: /* program_item: module  */
#line 250 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0); printf("program_item 1\n");}
#line 2002 "parser.tab.c"
    break;

  case 7: /* program_item: IMPORTS IDENTIFIER  */
#line 251 "parser.y"
                                  {(yyval.programItem) =  createProgramItem(0,(yyvsp[0].id_var_name)); printf("program_item 2\n");}
#line 2008 "parser.tab.c"
    break;

  case 8: /* program_item: END_OF_LINE  */
#line 252 "parser.y"
                           {(yyval.programItem) =  createProgramItem(0,0); printf("program_item 3\n");}
#line 2014 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE  */
#line 256 "parser.y"
                                               {(yyval.module) = createModule((yyvsp[-3].id_var_name),0); printf("module 1\n");}
#line 2020 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 257 "parser.y"
                                                                     {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList)); printf("module 2\n");}
#line 2026 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE  */
#line 258 "parser.y"
                                                      {(yyval.module) = createModule((yyvsp[-3].id_var_name),0); printf("module 3\n");}
#line 2032 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 259 "parser.y"
                                                                            {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList)); printf("module 4\n");}
#line 2038 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 262 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub)); printf("functions_or_sub_list 1\n");}
#line 2044 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list function_or_sub  */
#line 263 "parser.y"
                                                             {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-1].functionOrSubList),(yyvsp[0].functionOrSub)); printf("functions_or_sub_list 2\n");}
#line 2050 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 266 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function)); printf("function_or_sub 1\n");}
#line 2056 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 267 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0); printf("function_or_sub 2\n");}
#line 2062 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 270 "parser.y"
                                                                                              {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 1\n");}
#line 2068 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 271 "parser.y"
                                                                                                        {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 4\n");}
#line 2074 "parser.tab.c"
    break;

  case 19: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 272 "parser.y"
                                                                                                     {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 7\n");}
#line 2080 "parser.tab.c"
    break;

  case 20: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 273 "parser.y"
                                                                                                               {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 10\n");}
#line 2086 "parser.tab.c"
    break;

  case 21: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 276 "parser.y"
                                                                                    {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2092 "parser.tab.c"
    break;

  case 22: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 277 "parser.y"
                                                                                              {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2098 "parser.tab.c"
    break;

  case 23: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 278 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2104 "parser.tab.c"
    break;

  case 24: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 279 "parser.y"
                                                                                                   {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2110 "parser.tab.c"
    break;

  case 25: /* parameterlist_or_empty: %empty  */
#line 282 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2116 "parser.tab.c"
    break;

  case 26: /* parameterlist_or_empty: optEoL parameterlist_with_type optEoL  */
#line 283 "parser.y"
                                                              {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2122 "parser.tab.c"
    break;

  case 27: /* parameterlist_or_empty: optEoL parameterlist_without_type optEoL  */
#line 284 "parser.y"
                                                                 {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2128 "parser.tab.c"
    break;

  case 28: /* parameterlist_with_type: parameter_with_type  */
#line 287 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2134 "parser.tab.c"
    break;

  case 29: /* parameterlist_with_type: parameterlist_with_type ',' optEoL parameter_with_type  */
#line 288 "parser.y"
                                                                                {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2140 "parser.tab.c"
    break;

  case 30: /* parameterlist_without_type: parameter_without_type  */
#line 291 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2146 "parser.tab.c"
    break;

  case 31: /* parameterlist_without_type: parameterlist_without_type ',' optEoL parameter_without_type  */
#line 292 "parser.y"
                                                                                         {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2152 "parser.tab.c"
    break;

  case 32: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 295 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2158 "parser.tab.c"
    break;

  case 33: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 296 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2164 "parser.tab.c"
    break;

  case 34: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal  */
#line 297 "parser.y"
                                                       {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2170 "parser.tab.c"
    break;

  case 35: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal '(' ')'  */
#line 298 "parser.y"
                                                               {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2176 "parser.tab.c"
    break;

  case 36: /* parameter_without_type: IDENTIFIER  */
#line 301 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2182 "parser.tab.c"
    break;

  case 37: /* stmt_list: stmt  */
#line 306 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); printf("stmt_list 1\n");}
#line 2188 "parser.tab.c"
    break;

  case 38: /* stmt_list: stmt_list stmt  */
#line 307 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); printf("stmt_list 2\n");}
#line 2194 "parser.tab.c"
    break;

  case 39: /* stmt: multi_line_stmt  */
#line 310 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)}); printf("stmt 1\n");}
#line 2200 "parser.tab.c"
    break;

  case 40: /* stmt: single_line_stmt stmt_ends  */
#line 311 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)}); printf("stmt 2\n");}
#line 2206 "parser.tab.c"
    break;

  case 41: /* single_line_stmt: if_stmt_single_line  */
#line 314 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)}); printf("single_line_stmt 1\n");}
#line 2212 "parser.tab.c"
    break;

  case 42: /* single_line_stmt: decl_stmt  */
#line 315 "parser.y"
                                            {(yyval.statementSingle) = createStatementSingle(ST_DECL, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmt)}); printf("single_line_stmt 2\n");}
#line 2218 "parser.tab.c"
    break;

  case 43: /* single_line_stmt: expr  */
#line 316 "parser.y"
                                       {(yyval.statementSingle) = createStatementSingle(EXPR, (StmtSingleValue){.expression=(yyvsp[0].expression)}); printf("single_line_stmt 3\n");}
#line 2224 "parser.tab.c"
    break;

  case 44: /* single_line_stmt: return_stmt  */
#line 317 "parser.y"
                                              {(yyval.statementSingle) = createStatementSingle(ST_RETURN, (StmtSingleValue){.returnStmt=(yyvsp[0].returnStmt)}); printf("single_line_stmt 4\n");}
#line 2230 "parser.tab.c"
    break;

  case 45: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 320 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)}); printf("multi_line_stmt 1\n");}
#line 2236 "parser.tab.c"
    break;

  case 46: /* multi_line_stmt: while_stmt stmt_ends  */
#line 321 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)}); printf("multi_line_stmt 4\n");}
#line 2242 "parser.tab.c"
    break;

  case 47: /* multi_line_stmt: do_loop_stmt  */
#line 322 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)}); printf("multi_line_stmt 5\n");}
#line 2248 "parser.tab.c"
    break;

  case 48: /* multi_line_stmt: for_loop_stmt  */
#line 323 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)}); printf("multi_line_stmt 6\n");}
#line 2254 "parser.tab.c"
    break;

  case 49: /* multi_line_stmt: for_each_loop_stmt  */
#line 324 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)}); printf("multi_line_stmt 7\n");}
#line 2260 "parser.tab.c"
    break;

  case 50: /* multi_line_stmt: select_stmt stmt_ends  */
#line 325 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)}); printf("multi_line_stmt 8\n");}
#line 2266 "parser.tab.c"
    break;

  case 51: /* return_stmt: RETURN expr  */
#line 328 "parser.y"
                         {(yyval.returnStmt) = createReturnStmt((yyvsp[0].expression)); printf("return_stmt 1\n");}
#line 2272 "parser.tab.c"
    break;

  case 52: /* stmt_ends: END_OF_LINE  */
#line 331 "parser.y"
                       {printf("stmt_ends 1\n");}
#line 2278 "parser.tab.c"
    break;

  case 53: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 332 "parser.y"
                            {printf("stmt_ends 2\n");}
#line 2284 "parser.tab.c"
    break;

  case 55: /* optEoL: END_OF_LINE  */
#line 336 "parser.y"
                        {printf("optEoL 1\n");}
#line 2290 "parser.tab.c"
    break;

  case 56: /* decl_stmt: CONST var_name AS basic_literal '=' optEoL expr  */
#line 340 "parser.y"
                                                           {(yyval.declStmt) = createDeclStmt(1, (yyvsp[-5].varName), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt 1\n");}
#line 2296 "parser.tab.c"
    break;

  case 57: /* decl_stmt: DIM var_name AS basic_literal '=' optEoL expr  */
#line 341 "parser.y"
                                                         {(yyval.declStmt) = createDeclStmt(0, (yyvsp[-5].varName), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt 2\n");}
#line 2302 "parser.tab.c"
    break;

  case 58: /* decl_stmt: DIM var_name AS basic_literal  */
#line 342 "parser.y"
                                                 {(yyval.declStmt) = createDeclStmt(0, (yyvsp[-2].varName), (yyvsp[0].vt), 0); printf("decl_stmt 3\n");}
#line 2308 "parser.tab.c"
    break;

  case 59: /* decl_stmt: DIM var_name '=' optEoL expr  */
#line 343 "parser.y"
                                        {(yyval.declStmt) = createDeclStmt(0, (yyvsp[-3].varName), 0, (yyvsp[0].expression)); printf("decl_stmt 4\n");}
#line 2314 "parser.tab.c"
    break;

  case 60: /* decl_stmt: DIM var_name  */
#line 344 "parser.y"
                        {(yyval.declStmt) = createDeclStmt(0, (yyvsp[0].varName), 0, 0); printf("decl_stmt 5\n");}
#line 2320 "parser.tab.c"
    break;

  case 61: /* decl_stmt: DIM var_name '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 345 "parser.y"
                                                                      { printf("decl_stmt 6 (bad) \n");}
#line 2326 "parser.tab.c"
    break;

  case 62: /* var_name: IDENTIFIER '(' expr ')'  */
#line 348 "parser.y"
                                 {(yyval.varName) = createVarName((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name 1\n");}
#line 2332 "parser.tab.c"
    break;

  case 63: /* var_name: IDENTIFIER  */
#line 349 "parser.y"
                             {(yyval.varName) = createVarName((yyvsp[0].id_var_name), 0); printf("var_name 2\n");}
#line 2338 "parser.tab.c"
    break;

  case 70: /* while_stmt: WHILE expr stmt_ends stmt_list END WHILE  */
#line 361 "parser.y"
                                                     {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2344 "parser.tab.c"
    break;

  case 71: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP stmt_ends  */
#line 365 "parser.y"
                                                           {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-3].doLoopCondition), (yyvsp[-2].stmtList)); printf("do_loop_stmt 1\n"); }
#line 2350 "parser.tab.c"
    break;

  case 72: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 366 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));printf("do_loop_stmt 2\n"); }
#line 2356 "parser.tab.c"
    break;

  case 73: /* do_loop_condition: UNTIL expr stmt_ends  */
#line 369 "parser.y"
                                        {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression)); printf("do_loop_condition UNTIL\n");}
#line 2362 "parser.tab.c"
    break;

  case 74: /* do_loop_condition: WHILE expr stmt_ends  */
#line 370 "parser.y"
                                                        {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression)); printf("do_loop_condition WHILE\n");}
#line 2368 "parser.tab.c"
    break;

  case 75: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT stmt_ends  */
#line 374 "parser.y"
                                                                                                                                 {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-10].id_var_name), (yyvsp[-8].vt), (yyvsp[-6].expression), (yyvsp[-4].expression), 0, (yyvsp[-2].stmtList));}
#line 2374 "parser.tab.c"
    break;

  case 76: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT stmt_ends  */
#line 375 "parser.y"
                                                                                                                                                                      {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-12].id_var_name), (yyvsp[-10].vt), (yyvsp[-8].expression), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2380 "parser.tab.c"
    break;

  case 77: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT stmt_ends  */
#line 379 "parser.y"
                                                                                                          {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-8].id_var_name), (yyvsp[-6].vt), (yyvsp[-4].id_var_name), (yyvsp[-2].stmtList));}
#line 2386 "parser.tab.c"
    break;

  case 78: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list END IF  */
#line 382 "parser.y"
                                                            {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 1\n");}
#line 2392 "parser.tab.c"
    break;

  case 79: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 383 "parser.y"
                                                                                                     {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 2\n");}
#line 2398 "parser.tab.c"
    break;

  case 80: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list elseif_list END IF  */
#line 384 "parser.y"
                                                                        {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 3\n");}
#line 2404 "parser.tab.c"
    break;

  case 81: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 385 "parser.y"
                                                                                                                 {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 4\n");}
#line 2410 "parser.tab.c"
    break;

  case 82: /* elseif_list: elseif  */
#line 388 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf)); printf("elseif_list 1\n");}
#line 2416 "parser.tab.c"
    break;

  case 83: /* elseif_list: elseif_list elseif  */
#line 389 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf)); printf("elseif_list 2\n");}
#line 2422 "parser.tab.c"
    break;

  case 84: /* elseif: ELSEIF expr THEN stmt_ends stmt_list  */
#line 392 "parser.y"
                                             {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 1\n");}
#line 2428 "parser.tab.c"
    break;

  case 85: /* if_stmt_single_line: IF expr THEN single_line_stmt  */
#line 395 "parser.y"
                                                    {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0); printf("if_stmt_single 1\n");}
#line 2434 "parser.tab.c"
    break;

  case 86: /* if_stmt_single_line: IF expr THEN single_line_stmt ELSE single_line_stmt  */
#line 396 "parser.y"
                                                                          {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle)); printf("if_stmt_single 2\n");}
#line 2440 "parser.tab.c"
    break;

  case 87: /* select_stmt: SELECT CASE expr stmt_ends case_list END SELECT  */
#line 400 "parser.y"
                                                             {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList), 0); printf("select_stmt 2\n");}
#line 2446 "parser.tab.c"
    break;

  case 88: /* select_stmt: SELECT CASE expr stmt_ends case_list CASE ELSE stmt_ends stmt_list END SELECT  */
#line 401 "parser.y"
                                                                                                   {(yyval.selectStmt) = createSelectStmt((yyvsp[-8].expression), (yyvsp[-6].caseList), (yyvsp[-2].stmtList)); printf("select_stmt 4\n");}
#line 2452 "parser.tab.c"
    break;

  case 89: /* case_list: case_stmt  */
#line 404 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt)); printf("case_list 1\n");}
#line 2458 "parser.tab.c"
    break;

  case 90: /* case_list: case_list case_stmt  */
#line 405 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt)); printf("case_list 2\n");}
#line 2464 "parser.tab.c"
    break;

  case 91: /* case_stmt: CASE expr stmt_ends stmt_list  */
#line 408 "parser.y"
                                         {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), (yyvsp[0].stmtList)); printf("case_stmt 2\n");}
#line 2470 "parser.tab.c"
    break;

  case 92: /* case_stmt: CASE IS expr stmt_ends stmt_list  */
#line 409 "parser.y"
                                            {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), (yyvsp[0].stmtList)); printf("case_stmt 4\n");}
#line 2476 "parser.tab.c"
    break;

  case 93: /* expr: basic_literal_value  */
#line 413 "parser.y"
                          {(yyval.expression) = (yyvsp[0].expression); printf("expr 0\n");}
#line 2482 "parser.tab.c"
    break;

  case 94: /* expr: '-' expr  */
#line 414 "parser.y"
                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression)); printf("expr 1\n");}
#line 2488 "parser.tab.c"
    break;

  case 95: /* expr: '+' expr  */
#line 415 "parser.y"
                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression)); printf("expr 2\n");}
#line 2494 "parser.tab.c"
    break;

  case 96: /* expr: expr '+' optEoL expr  */
#line 416 "parser.y"
                           {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression));  printf("expr 3\n");}
#line 2500 "parser.tab.c"
    break;

  case 97: /* expr: expr '-' optEoL expr  */
#line 417 "parser.y"
                           {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression));  printf("expr 4\n");}
#line 2506 "parser.tab.c"
    break;

  case 98: /* expr: expr '*' optEoL expr  */
#line 418 "parser.y"
                           {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 5\n");}
#line 2512 "parser.tab.c"
    break;

  case 99: /* expr: expr '/' optEoL expr  */
#line 419 "parser.y"
                           {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 6\n");}
#line 2518 "parser.tab.c"
    break;

  case 100: /* expr: expr INT_DIV optEoL expr  */
#line 420 "parser.y"
                               {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 7\n");}
#line 2524 "parser.tab.c"
    break;

  case 101: /* expr: expr '=' optEoL expr  */
#line 421 "parser.y"
                           {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 8\n");}
#line 2530 "parser.tab.c"
    break;

  case 102: /* expr: expr '<' optEoL expr  */
#line 422 "parser.y"
                           {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 9\n");}
#line 2536 "parser.tab.c"
    break;

  case 103: /* expr: expr '>' optEoL expr  */
#line 423 "parser.y"
                           {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 10\n");}
#line 2542 "parser.tab.c"
    break;

  case 104: /* expr: expr '^' optEoL expr  */
#line 424 "parser.y"
                           {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 11\n");}
#line 2548 "parser.tab.c"
    break;

  case 105: /* expr: expr NOT_EQUAL optEoL expr  */
#line 425 "parser.y"
                                 {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 12\n");}
#line 2554 "parser.tab.c"
    break;

  case 106: /* expr: expr LESS_OR_EQUAL optEoL expr  */
#line 426 "parser.y"
                                     {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 13\n");}
#line 2560 "parser.tab.c"
    break;

  case 107: /* expr: expr MORE_OR_EQUAL optEoL expr  */
#line 427 "parser.y"
                                     {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 14\n");}
#line 2566 "parser.tab.c"
    break;

  case 108: /* expr: expr '&' optEoL expr  */
#line 428 "parser.y"
                           {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 15\n");}
#line 2572 "parser.tab.c"
    break;

  case 109: /* expr: '(' optEoL expr optEoL ')'  */
#line 429 "parser.y"
                                 {(yyval.expression) = createExpression(ET_PARENTHESIS, 0, (yyvsp[-2].expression)); printf("expr 16\n");}
#line 2578 "parser.tab.c"
    break;

  case 110: /* expr: IDENTIFIER  */
#line 430 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)}); printf("expr 17\n");}
#line 2584 "parser.tab.c"
    break;

  case 111: /* expr: IDENTIFIER arguments  */
#line 431 "parser.y"
                           {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList)); printf("expr 18\n");}
#line 2590 "parser.tab.c"
    break;

  case 112: /* expr: expr AND optEoL expr  */
#line 432 "parser.y"
                           {(yyval.expression) = createExpression(ET_AND, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 19\n");}
#line 2596 "parser.tab.c"
    break;

  case 113: /* expr: expr OR optEoL expr  */
#line 433 "parser.y"
                          {(yyval.expression) = createExpression(ET_OR, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 20\n");}
#line 2602 "parser.tab.c"
    break;

  case 114: /* expr: expr XOR optEoL expr  */
#line 434 "parser.y"
                           {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 21\n");}
#line 2608 "parser.tab.c"
    break;

  case 115: /* expr: NOT expr  */
#line 435 "parser.y"
               {(yyval.expression) = createExpression(ET_NOT, 0, (yyvsp[0].expression)); printf("expr 22\n");}
#line 2614 "parser.tab.c"
    break;

  case 116: /* expr: expr TO optEoL expr  */
#line 436 "parser.y"
                              {(yyval.expression) = createExpression(ET_TO, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 23\n");}
#line 2620 "parser.tab.c"
    break;

  case 117: /* expr: expr MOD optEoL expr  */
#line 437 "parser.y"
                               {(yyval.expression) = createExpression(ET_MOD, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 24\n");}
#line 2626 "parser.tab.c"
    break;

  case 118: /* expr: expr SHIFT_LEFT optEoL expr  */
#line 438 "parser.y"
                                      {(yyval.expression) = createExpression(ET_SHIFT_L, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 25\n");}
#line 2632 "parser.tab.c"
    break;

  case 119: /* expr: expr SHIFT_RIGHT optEoL expr  */
#line 439 "parser.y"
                                       {(yyval.expression) = createExpression(ET_SHIFT_R, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 26\n");}
#line 2638 "parser.tab.c"
    break;

  case 120: /* basic_literal: INT  */
#line 442 "parser.y"
                   {(yyval.vt) = VT_INTEGER; printf("basic_literal int\n");}
#line 2644 "parser.tab.c"
    break;

  case 121: /* basic_literal: STRING  */
#line 443 "parser.y"
                     {(yyval.vt) = VT_STRING; printf("basic_literal str\n");}
#line 2650 "parser.tab.c"
    break;

  case 122: /* basic_literal: BOOLEAN  */
#line 444 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN; printf("basic_literal bool\n");}
#line 2656 "parser.tab.c"
    break;

  case 123: /* basic_literal: DOUBLE  */
#line 445 "parser.y"
                     {(yyval.vt) = VT_DOUBLE; printf("basic_literal double\n");}
#line 2662 "parser.tab.c"
    break;

  case 124: /* basic_literal_value: INT_VALUE  */
#line 448 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)}); printf("basic_literal_value int\n");}
#line 2668 "parser.tab.c"
    break;

  case 125: /* basic_literal_value: STRING_VALUE  */
#line 449 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)}); printf("basic_literal_value str\n");}
#line 2674 "parser.tab.c"
    break;

  case 126: /* basic_literal_value: BOOLEAN_VALUE  */
#line 450 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)}); printf("basic_literal_value bool\n");}
#line 2680 "parser.tab.c"
    break;

  case 127: /* basic_literal_value: DOUBLE_VALUE  */
#line 451 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)}); printf("basic_literal_value double\n");}
#line 2686 "parser.tab.c"
    break;

  case 128: /* arguments: '(' optEoL expr_list optEoL ')'  */
#line 454 "parser.y"
                                           {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 2692 "parser.tab.c"
    break;

  case 129: /* arguments: '(' ')'  */
#line 455 "parser.y"
                              {(yyval.expressionList) = 0;}
#line 2698 "parser.tab.c"
    break;

  case 130: /* expr_list: expr  */
#line 458 "parser.y"
                {(yyval.expressionList) = createExpressionList((yyvsp[0].expression)); printf("expr_list 1\n");}
#line 2704 "parser.tab.c"
    break;

  case 131: /* expr_list: expr_list ',' expr  */
#line 459 "parser.y"
                              {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression)); printf("expr_list 2\n");}
#line 2710 "parser.tab.c"
    break;


#line 2714 "parser.tab.c"

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

#line 462 "parser.y"


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
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}

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

SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList, StmtList * elseStmt)
{
	SelectStmt *result = (SelectStmt*)malloc(sizeof(SelectStmt));

	result->expression = expression;
	result->caseList = caseList;
	result->elseStmt = elseStmt;

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

CaseStmt *createCaseStmt(int isIs, Expression *expression, StmtList *stmtList)
{
	CaseStmt *result = (CaseStmt *)malloc(sizeof(CaseStmt));

	if (isIs)
		result->isIs = 1;
	else
		result->isIs = 0;
	result->expression = expression;
	result->stmtList = stmtList;

	result->nextInList = 0;

	return result;
}

DeclStmt *createDeclStmt(int isConst, VarName* varName, VarType varType, Expression *expression)
{
	DeclStmt *result = (DeclStmt*)malloc(sizeof(DeclStmt));

	if (isConst)
		result->isConst = 1;
	else
		result->isConst = 0;
	result->varName = varName;
	result->varType = varType;
	result->expression = expression;

	return result;
}

VarName *createVarName(char* id_var_name, Expression *expression)
{
	VarName *result = (VarName *)malloc(sizeof(VarName));

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
