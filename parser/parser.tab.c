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
CaseStmt *createCaseStmt(ExpressionList *exprList, StmtList *stmtList);
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
  YYSYMBOL_STEP = 21,                      /* STEP  */
  YYSYMBOL_ELSEIF = 22,                    /* ELSEIF  */
  YYSYMBOL_SELECT = 23,                    /* SELECT  */
  YYSYMBOL_CASE = 24,                      /* CASE  */
  YYSYMBOL_IS = 25,                        /* IS  */
  YYSYMBOL_TO = 26,                        /* TO  */
  YYSYMBOL_IMPORTS = 27,                   /* IMPORTS  */
  YYSYMBOL_MODULE = 28,                    /* MODULE  */
  YYSYMBOL_FUNCTION = 29,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_DO = 31,                        /* DO  */
  YYSYMBOL_LOOP = 32,                      /* LOOP  */
  YYSYMBOL_UNTIL = 33,                     /* UNTIL  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_NEXT = 35,                      /* NEXT  */
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
#define YYLAST   2368

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  444

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
     273,   274,   275,   276,   277,   280,   281,   282,   283,   286,
     287,   288,   291,   292,   295,   296,   299,   300,   301,   302,
     305,   310,   311,   314,   315,   318,   319,   320,   321,   324,
     325,   326,   327,   328,   329,   332,   333,   336,   337,   340,
     341,   345,   346,   347,   348,   349,   350,   353,   354,   357,
     358,   359,   360,   361,   362,   366,   367,   371,   372,   373,
     374,   377,   378,   382,   383,   384,   385,   389,   390,   393,
     394,   395,   396,   397,   398,   399,   400,   403,   404,   407,
     410,   411,   415,   416,   419,   420,   423,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   469,   470,   471,   472,
     475,   476,   477,   478,   481,   482,   485,   486
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
  "DIM", "AS", "WHILE", "IF", "NEW", "STEP", "ELSEIF", "SELECT", "CASE",
  "IS", "TO", "IMPORTS", "MODULE", "FUNCTION", "RETURN", "DO", "LOOP",
  "UNTIL", "FOR", "NEXT", "OF", "IN", "EACH", "END_OF_LINE",
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

#define YYPACT_NINF (-336)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     217,    33,    57,  -336,    18,    35,  -336,  -336,    78,  -336,
     217,  -336,  -336,    51,  -336,    50,  -336,  -336,  -336,  -336,
      84,  -336,   201,    50,    86,   100,   123,  -336,   241,  -336,
    -336,  -336,    95,   260,    61,  -336,    64,   111,  -336,   131,
     134,   113,   268,   -29,   -29,  -336,    71,    82,  -336,   126,
    -336,    90,     4,    96,   -29,   -29,  -336,    50,   142,   153,
     -35,   -32,  -336,  -336,    21,   109,   117,   422,   238,   173,
     156,  -336,   156,  -336,   238,   541,    50,    26,  -336,  -336,
    -336,  -336,   120,   193,   205,   205,   145,   145,   200,    63,
     145,    81,    23,   145,   145,   145,   156,  1079,  -336,    50,
    -336,  -336,  -336,    50,  -336,  -336,  -336,    50,  -336,    50,
    2152,  -336,  -336,  -336,  -336,  -336,   149,   238,    10,   216,
      50,   202,  1114,   712,   238,   752,   -28,  -336,    50,   161,
     222,     6,  2058,  1870,   145,   156,   156,   156,  2152,   145,
     145,   799,  1154,   225,   231,  2293,   182,   182,   145,   247,
    -336,   236,   236,   236,   236,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   199,   203,   142,  -336,  -336,  -336,
     839,    50,   248,   265,  1189,    50,   254,  1229,  -336,   145,
     236,   145,   238,   238,    46,   879,  1833,  2058,   145,   145,
     145,  2058,  2058,    13,  1269,    50,  1309,   238,   267,  2105,
      50,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
    -336,   209,   258,  1344,   236,    50,    50,   275,   919,    50,
     266,  2152,   -30,  2011,   243,   245,   238,   145,   278,  1384,
     145,   223,    88,    77,   405,   110,   110,   236,   236,  -336,
      13,   236,    50,   249,   238,   229,   236,   517,   405,   405,
     405,   405,   405,   405,   405,   405,   405,  2199,  2246,  2293,
     405,   110,   110,   110,   110,   110,   468,   468,   313,   129,
     129,    91,   -39,   182,   182,  -336,  -336,    50,   279,   236,
     236,    50,   285,  1419,   236,    50,   145,   246,  -336,   156,
     156,   237,  2152,  -336,   297,  1917,   387,   309,   145,    50,
     204,    -8,  -336,   145,    53,  -336,  -336,   236,   259,   295,
    -336,   236,    50,   236,    50,   307,   236,  2152,  -336,   145,
     145,   263,  -336,   387,  -336,  -336,  1964,  1459,   318,    50,
       7,   323,    50,  -336,   -27,   321,    14,  -336,   319,   336,
     236,   236,    50,  2152,  2152,   272,    50,  1499,  -336,  1459,
     334,    50,  -336,  1459,  1459,  -336,    50,   259,    50,   236,
     145,  1459,   335,  1534,  -336,  1459,  1574,  1799,  1459,     3,
     959,   -54,  1799,  -336,   337,  1609,   339,  1649,   259,   999,
      50,  1684,  -336,  -336,   341,  -336,   332,    50,    50,  1724,
     236,    50,  -336,  -336,  1039,   236,    50,   236,    50,  1759,
     236,   236,    50,   236
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,    72,    70,    69,    71,     0,     2,
       3,     4,     6,     0,     7,     0,    74,    73,     1,     5,
       0,    57,     0,     0,     0,     0,     0,    58,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,    14,     0,
       0,     0,     0,    59,    59,    10,     0,     0,    11,     0,
      60,     0,     0,     0,    59,    59,    12,     0,    40,     0,
      59,    59,    32,    34,     0,     0,     0,     0,     0,     0,
      59,    30,    59,    31,     0,     0,     0,     0,   150,   153,
     151,   152,   124,     0,     0,     0,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,    59,     0,    41,     0,
      43,    48,    46,     0,    51,    52,    53,     0,    45,     0,
      47,   107,   146,   149,   147,   148,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,   125,     0,    68,
       0,    65,     0,     0,     0,    59,    59,    59,    55,     0,
       0,     0,     0,     0,     0,   129,   109,   108,     0,     0,
      42,    44,    50,    49,    54,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,     0,    38,     0,    33,    40,    35,
       0,     0,     0,     0,     0,     0,     0,     0,   155,     0,
      25,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,   156,    59,     0,     0,    63,     0,     0,     0,     0,
       0,   100,     0,     0,   143,   145,   144,    82,    81,    80,
       0,    78,     0,     0,     0,     0,    26,   130,   136,   137,
     138,   139,   135,   134,   140,   141,   142,   128,   127,   126,
     115,   119,   120,   121,   117,   116,   132,   133,   122,   110,
     111,   131,   114,   112,   113,   118,    39,     0,     0,    19,
      27,     0,     0,     0,    21,     0,     0,     0,    67,    59,
      59,     0,    64,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,   104,    79,    77,     0,     0,
     123,    18,     0,    28,     0,     0,    23,   157,   154,     0,
       0,     0,    75,     0,   101,    90,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,   105,     0,     0,
      20,    22,     0,    61,    62,     0,     0,     0,    89,     0,
       0,     0,    94,     0,     0,   102,     0,     0,     0,    24,
       0,     0,     0,     0,    93,     0,     0,   106,     0,     0,
       0,     0,    99,    92,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    91,     0,    96,     0,     0,     0,     0,
      88,     0,    95,   103,     0,    84,     0,    87,     0,     0,
      83,    86,     0,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -336,  -336,  -336,  -336,   351,  -336,   329,    89,  -336,  -336,
      98,  -336,  -336,   251,   253,   -67,   -82,  -203,  -336,  -336,
     -23,   530,  -336,   280,    27,  -336,  -336,  -208,  -336,  -336,
    -336,    24,  -311,  -336,  -336,  -336,    22,   284,   -73,  -335,
    -336,  -197
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    28,    29,    30,    31,
      51,    60,    61,    62,    63,    97,    98,    99,   100,   101,
      22,    52,   102,   130,    32,   103,   104,   142,   105,   106,
     107,   341,   342,   108,   109,   344,   345,   110,   116,   111,
     127,   374
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   120,   262,   271,    50,   279,   371,    50,   122,    50,
      50,    50,    21,   378,   338,   150,    58,    78,    79,    80,
      81,   390,   186,   203,   418,   422,    82,    13,   326,   338,
     373,   139,   181,   182,    67,   143,   183,    13,    74,    89,
     150,    75,    21,   124,   185,    14,   140,    70,   -29,   198,
      72,   195,   326,   123,   125,   326,   194,    59,   197,   373,
      21,   144,   409,    59,   204,    21,   266,   375,   141,    15,
      16,    93,   346,   372,   214,   216,   151,   376,    18,    20,
     152,    94,    95,   427,   153,    50,   154,    17,   391,    21,
      96,    78,    79,    80,    81,   396,    23,   190,    34,   139,
      82,   343,   337,    84,    85,   200,    86,    87,    39,   205,
     338,    88,   150,    89,   140,   150,    27,    38,    90,    91,
      21,   135,    92,   253,    40,   136,   137,    27,    35,   264,
     265,    38,   150,   364,   150,    36,   155,    43,   269,    45,
      44,    48,    53,    46,   283,    93,    47,    54,    78,    79,
      80,    81,    65,    66,    56,    94,    95,    82,    55,    68,
     271,   180,   181,   182,    96,    69,   183,    57,   254,   339,
      89,   150,   258,    64,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   272,   273,   183,    76,   150,   277,   278,
     117,   323,   281,   331,    77,    50,   126,   286,   179,   180,
     181,   182,    93,   411,   183,   340,   128,    78,    79,    80,
      81,   349,    94,    95,    24,    25,    82,   129,   368,    84,
      85,    96,    86,    87,   134,   184,   338,    88,   188,    89,
      26,   191,   319,   320,    90,    91,   324,   201,    92,   202,
      27,   150,   217,   218,     1,     2,   112,   113,   114,   115,
       4,     5,     6,     7,    24,    37,     3,   183,   150,   347,
     220,    93,    78,    79,    80,    81,     4,     5,     6,     7,
      26,    94,    95,    24,    41,    27,   250,   255,   256,   251,
      96,    24,    49,   259,   284,   369,   316,   317,   321,    26,
       4,     5,     6,     7,   351,   325,   333,    26,   353,    27,
     387,   329,   356,   330,   336,   150,   350,   348,   352,     4,
       5,     6,     7,   361,   354,   362,   367,     4,     5,     6,
       7,   150,   403,   358,   150,   150,   406,   407,   365,   380,
     150,   381,   379,   150,   412,   150,   382,   388,   415,   150,
     385,   417,   392,   421,   395,   397,   389,   150,   398,   393,
     400,   394,   429,   404,   413,   433,   423,   150,   425,   399,
     432,    19,    42,   401,   370,   131,   377,   439,   405,   187,
     132,   133,   189,   408,   138,   410,     0,   145,   146,   147,
     177,   178,   179,   180,   181,   182,   419,     0,   183,     0,
      78,    79,    80,    81,     0,     0,     0,   430,     0,    82,
       0,     0,    84,    85,   434,   435,   270,     0,   437,     0,
       0,     0,    89,   440,     0,   441,     0,    90,   207,   443,
       0,     0,     0,   211,   212,    78,    79,    80,    81,     0,
       0,   155,   219,     0,    82,     0,    83,    84,    85,     0,
      86,    87,     0,     0,    93,    88,     0,    89,     0,     0,
       0,     0,    90,    91,    94,    95,    92,     0,     0,     0,
       0,    27,     0,    96,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,     0,    93,
     183,     0,     0,   261,     0,   263,     0,     0,     0,    94,
      95,     0,   274,   275,   276,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   176,   177,   178,   179,   180,   181,
     182,     0,     0,   183,    78,    79,    80,    81,     0,     0,
       0,   332,     0,    82,   335,   121,    84,    85,     0,    86,
      87,     0,     0,     0,    88,     0,    89,     0,     0,     0,
       0,    90,    91,     0,     0,    92,     0,     0,     0,     0,
      27,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      71,    73,   183,     0,     0,     0,     0,     0,    93,     0,
     118,     0,   119,     0,     0,     0,     0,     0,    94,    95,
     357,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,   366,     0,     0,     0,   148,   261,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   383,   384,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,     0,     0,     0,
     261,     0,     0,     0,     0,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   261,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,     0,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    82,     0,   193,    84,    85,     0,
      86,    87,     0,     0,   267,    88,     0,    89,     0,     0,
       0,     0,    90,    91,     0,     0,    92,     0,     0,   285,
       0,    27,     0,     0,     0,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    82,     0,   196,    84,    85,    93,
      86,    87,     0,     0,     0,    88,     0,    89,     0,    94,
      95,     0,    90,    91,     0,     0,    92,     0,    96,     0,
       0,    27,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,    93,
       0,    82,     0,     0,    84,    85,     0,    86,    87,    94,
      95,     0,    88,     0,    89,     0,     0,     0,    96,    90,
      91,   213,     0,    92,     0,     0,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   252,    84,    85,    93,    86,    87,   359,
     360,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   268,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   322,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,   420,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,   428,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,   438,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   149,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,   192,    84,
      85,     0,    86,    87,     0,     0,    93,    88,     0,    89,
       0,     0,     0,     0,    90,    91,    94,    95,    92,     0,
       0,     0,     0,     0,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,     0,    84,
      85,    93,    86,    87,     0,     0,     0,    88,     0,    89,
       0,    94,    95,     0,    90,    91,   215,     0,    92,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   257,    84,    85,     0,    86,    87,     0,
       0,    93,    88,     0,    89,     0,     0,     0,     0,    90,
      91,    94,    95,    92,     0,     0,     0,     0,     0,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   260,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,   280,     0,    92,     0,    96,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,   282,     0,    92,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,   318,    84,
      85,     0,    86,    87,     0,     0,    93,    88,     0,    89,
       0,     0,     0,     0,    90,    91,    94,    95,    92,     0,
       0,     0,     0,     0,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,   334,    84,
      85,    93,    86,    87,     0,     0,     0,    88,     0,    89,
       0,    94,    95,     0,    90,    91,     0,     0,    92,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   355,    84,    85,     0,    86,    87,     0,
       0,    93,    88,     0,    89,     0,     0,     0,     0,    90,
      91,    94,    95,    92,     0,     0,     0,     0,     0,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,     0,    27,     0,
       0,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   402,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,   414,    84,
      85,     0,    86,    87,     0,     0,    93,    88,     0,    89,
       0,     0,     0,     0,    90,    91,    94,    95,    92,     0,
       0,     0,     0,     0,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,   416,    84,
      85,    93,    86,    87,     0,     0,     0,    88,     0,    89,
       0,    94,    95,     0,    90,    91,     0,     0,    92,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   424,    84,    85,     0,    86,    87,     0,
       0,    93,    88,     0,    89,     0,     0,     0,     0,    90,
      91,    94,    95,    92,     0,     0,     0,     0,     0,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,   426,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,     0,    84,
      85,     0,    86,    87,     0,     0,    93,    88,     0,    89,
       0,     0,     0,     0,    90,    91,    94,    95,    92,   431,
       0,     0,     0,     0,     0,    96,     0,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    82,     0,     0,    84,
      85,    93,    86,    87,     0,     0,     0,    88,     0,    89,
       0,    94,    95,     0,    90,    91,     0,     0,    92,   436,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,     0,    86,    87,     0,
       0,    93,    88,     0,    89,     0,     0,     0,     0,    90,
      91,    94,    95,    92,   442,     0,     0,     0,     0,     0,
      96,     0,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    82,     0,     0,    84,    85,    93,    86,    87,     0,
       0,     0,    88,     0,    89,     0,    94,    95,     0,    90,
      91,     0,     0,    92,     0,    96,    78,    79,    80,    81,
       0,     0,     0,     0,     0,    82,     0,     0,    84,    85,
       0,     0,   270,     0,     0,     0,    93,     0,    89,     0,
       0,     0,     0,    90,     0,     0,    94,    95,     0,     0,
       0,     0,    21,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,   155,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,    96,
     156,   157,   158,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,   165,   166,   167,     0,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   155,     0,   183,     0,     0,     0,     0,
     206,     0,     0,     0,     0,     0,     0,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,     0,     0,     0,
       0,   165,   166,   167,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     155,     0,   183,     0,     0,     0,     0,   363,     0,     0,
       0,     0,     0,     0,   156,   157,   158,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,     0,   165,   166,
     167,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   155,     0,   183,
       0,     0,     0,     0,   386,     0,     0,     0,     0,     0,
       0,   156,   157,   158,   159,   160,   161,   162,   163,   164,
       0,     0,     0,     0,     0,   165,   166,   167,     0,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   155,     0,   183,     0,   328,     0,
       0,     0,     0,     0,     0,     0,     0,    21,   156,   157,
     158,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   165,   166,   167,     0,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   155,     0,   183,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,   156,   157,   158,   159,   160,
     161,   162,   163,   164,     0,     0,     0,     0,     0,   165,
     166,   167,     0,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   155,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,     0,   165,   166,   167,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   155,     0,   183,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   160,   161,   162,   163,   164,     0,     0,
       0,     0,     0,     0,   166,   167,     0,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   155,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,   167,     0,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   155,
       0,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   160,   161,   162,
     163,   164,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,     0,     0,   183
};

static const yytype_int16 yycheck[] =
{
      23,    74,   199,   206,    39,   213,    14,    39,    75,    39,
      39,    39,    39,   348,    22,    97,    12,     3,     4,     5,
       6,    14,    12,    17,    21,    79,    12,     0,    82,    22,
     341,    18,    71,    72,    57,    12,    75,    10,    17,    25,
     122,    64,    39,    17,   117,    12,    33,    82,    77,    77,
      82,   124,    82,    76,    77,    82,   123,    53,   125,   370,
      39,    38,   397,    53,    58,    39,    20,    14,    91,    12,
      52,    57,   280,    81,   141,   142,    99,    24,     0,    28,
     103,    67,    68,   418,   107,    39,   109,    52,    81,    39,
      76,     3,     4,     5,     6,    81,    12,   120,    12,    18,
      12,    24,    14,    15,    16,   128,    18,    19,    13,   132,
      22,    23,   194,    25,    33,   197,    39,    28,    30,    31,
      39,    58,    34,   190,    29,    62,    63,    39,    28,   202,
     203,    42,   214,   336,   216,    12,    26,    76,   205,    28,
      76,    28,    44,    12,   217,    57,    12,    76,     3,     4,
       5,     6,    54,    55,    28,    67,    68,    12,    76,    17,
     363,    70,    71,    72,    76,    12,    75,    77,   191,    81,
      25,   253,   195,    77,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   206,   207,    75,    77,   269,   211,   212,
      17,   258,   215,   266,    77,    39,    76,   220,    69,    70,
      71,    72,    57,   400,    75,   272,    13,     3,     4,     5,
       6,   284,    67,    68,    13,    14,    12,    12,    14,    15,
      16,    76,    18,    19,    24,    76,    22,    23,    12,    25,
      29,    29,   255,   256,    30,    31,   259,    76,    34,    17,
      39,   323,    17,    12,    27,    28,     8,     9,    10,    11,
      49,    50,    51,    52,    13,    14,    39,    75,   340,   282,
      13,    57,     3,     4,     5,     6,    49,    50,    51,    52,
      29,    67,    68,    13,    14,    39,    77,    29,    13,    76,
      76,    13,    14,    29,    17,    81,    77,    29,    13,    29,
      49,    50,    51,    52,   317,    29,    18,    29,   321,    39,
     367,    58,   325,    58,    81,   387,    77,    58,    29,    49,
      50,    51,    52,    76,    29,    18,   339,    49,    50,    51,
      52,   403,   389,    77,   406,   407,   393,   394,    19,   352,
     412,   354,    37,   415,   401,   417,    29,    19,   405,   421,
      77,   408,    19,   410,    23,    26,   369,   429,    12,   372,
      78,   374,   419,    19,    19,    23,    19,   439,    19,   382,
      19,    10,    33,   386,   340,    85,   344,   434,   391,   118,
      86,    87,   119,   396,    90,   398,    -1,    93,    94,    95,
      67,    68,    69,    70,    71,    72,   409,    -1,    75,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,   420,    -1,    12,
      -1,    -1,    15,    16,   427,   428,    19,    -1,   431,    -1,
      -1,    -1,    25,   436,    -1,   438,    -1,    30,   134,   442,
      -1,    -1,    -1,   139,   140,     3,     4,     5,     6,    -1,
      -1,    26,   148,    -1,    12,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    57,    23,    -1,    25,    -1,    -1,
      -1,    -1,    30,    31,    67,    68,    34,    -1,    -1,    -1,
      -1,    39,    -1,    76,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    57,
      75,    -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    67,
      68,    -1,   208,   209,   210,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    66,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,     3,     4,     5,     6,    -1,    -1,
      -1,   267,    -1,    12,   270,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    23,    -1,    25,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      60,    61,    75,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    67,    68,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    96,   343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359,   360,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
     376,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   400,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    -1,   204,    23,    -1,    25,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,   219,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    57,
      18,    19,    -1,    -1,    -1,    23,    -1,    25,    -1,    67,
      68,    -1,    30,    31,    -1,    -1,    34,    -1,    76,    -1,
      -1,    39,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    57,
      -1,    12,    -1,    -1,    15,    16,    -1,    18,    19,    67,
      68,    -1,    23,    -1,    25,    -1,    -1,    -1,    76,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,   329,
     330,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    35,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    35,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    35,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    57,    23,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    67,    68,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    57,    18,    19,    -1,    -1,    -1,    23,    -1,    25,
      -1,    67,    68,    -1,    30,    31,    32,    -1,    34,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    57,    23,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,    67,    68,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    32,    -1,    34,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    32,    -1,    34,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    57,    23,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    67,    68,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    57,    18,    19,    -1,    -1,    -1,    23,    -1,    25,
      -1,    67,    68,    -1,    30,    31,    -1,    -1,    34,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    57,    23,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,    67,    68,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,    -1,    39,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    57,    23,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    67,    68,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    57,    18,    19,    -1,    -1,    -1,    23,    -1,    25,
      -1,    67,    68,    -1,    30,    31,    -1,    -1,    34,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    57,    23,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,    67,    68,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    -1,    18,    19,    -1,    -1,    57,    23,    -1,    25,
      -1,    -1,    -1,    -1,    30,    31,    67,    68,    34,    35,
      -1,    -1,    -1,    -1,    -1,    76,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,
      16,    57,    18,    19,    -1,    -1,    -1,    23,    -1,    25,
      -1,    67,    68,    -1,    30,    31,    -1,    -1,    34,    35,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    -1,    18,    19,    -1,
      -1,    57,    23,    -1,    25,    -1,    -1,    -1,    -1,    30,
      31,    67,    68,    34,    35,    -1,    -1,    -1,    -1,    -1,
      76,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    57,    18,    19,    -1,
      -1,    -1,    23,    -1,    25,    -1,    67,    68,    -1,    30,
      31,    -1,    -1,    34,    -1,    76,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,
      -1,    -1,    19,    -1,    -1,    -1,    57,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    26,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      26,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    26,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    26,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    26,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    26,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    26,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    26,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    26,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    28,    39,    49,    50,    51,    52,    84,    85,
      86,    87,    88,   107,    12,    12,    52,    52,     0,    87,
      28,    39,   103,    12,    13,    14,    29,    39,    89,    90,
      91,    92,   107,   103,    12,    28,    12,    14,    90,    13,
      29,    14,    89,    76,    76,    28,    12,    12,    28,    14,
      39,    93,   104,    93,    76,    76,    28,    77,    12,    53,
      94,    95,    96,    97,    77,    93,    93,   103,    17,    12,
      82,   104,    82,   104,    17,   103,    77,    77,     3,     4,
       5,     6,    12,    14,    15,    16,    18,    19,    23,    25,
      30,    31,    34,    57,    67,    68,    76,    98,    99,   100,
     101,   102,   105,   108,   109,   111,   112,   113,   116,   117,
     120,   122,     8,     9,    10,    11,   121,    17,   104,   104,
     121,    14,    98,   103,    17,   103,    76,   123,    13,    12,
     106,   106,   120,   120,    24,    58,    62,    63,   120,    18,
      33,   103,   110,    12,    38,   120,   120,   120,   104,    14,
      99,   103,   103,   103,   103,    26,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    54,    55,    56,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    75,    76,   121,    12,    96,    12,    97,
     103,    29,    14,    14,    98,   121,    14,    98,    77,   104,
     103,    76,    17,    17,    58,   103,    80,   120,   104,   104,
     104,   120,   120,    32,    98,    32,    98,    17,    12,   120,
      13,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
      77,    76,    14,    98,   103,    29,    13,    14,   103,    29,
      14,   120,   124,   120,   121,   121,    20,   104,    14,    98,
      19,   100,   103,   103,   120,   120,   120,   103,   103,   110,
      32,   103,    32,   121,    17,   104,   103,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,    77,    29,    14,   103,
     103,    13,    14,    98,   103,    29,    82,   104,    77,    58,
      58,   121,   120,    18,    14,   120,    81,    14,    22,    81,
      98,   114,   115,    24,   118,   119,   110,   103,    58,   121,
      77,   103,    29,   103,    29,    14,   103,   120,    77,   104,
     104,    76,    18,    80,   100,    19,   120,   103,    14,    81,
     114,    14,    81,   115,   124,    14,    24,   119,   122,    37,
     103,   103,    29,   120,   120,    77,    80,    98,    19,   103,
      14,    81,    19,   103,   103,    23,    81,    26,    12,   103,
      78,   103,    14,    98,    19,   103,    98,    98,   103,   122,
     103,   124,    98,    19,    14,    98,    14,    98,    21,   103,
      35,    98,    79,    19,    14,    19,    14,   122,    35,    98,
     103,    35,    19,    23,   103,   103,    35,   103,    35,    98,
     103,   103,    35,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    86,    86,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    93,
      93,    93,    94,    94,    95,    95,    96,    96,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   109,
     109,   110,   110,   111,   111,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   121,   121,
     122,   122,   122,   122,   123,   123,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     5,
       6,     6,     7,     1,     2,     1,     1,     9,    11,    10,
      12,    10,    12,    11,    13,     9,    10,    10,    11,     0,
       3,     3,     1,     4,     1,     4,     3,     5,     4,     6,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     2,     2,     1,     1,     2,     0,
       1,     7,     7,     4,     5,     2,    10,     4,     1,     1,
       1,     1,     1,     2,     2,     6,     5,     5,     4,     5,
       4,     3,     3,    12,    11,    14,    13,    11,    10,     7,
       6,    10,     9,     8,     7,    11,    10,     1,     2,     5,
       4,     6,     7,    11,     1,     2,     4,     1,     2,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     5,     1,     2,     4,     4,     4,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     2,     1,     3
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
#line 2192 "parser.tab.c"
    break;

  case 3: /* program_items_list: program_items_list_not_empty  */
#line 243 "parser.y"
                                                 {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty)); printf("program_items_list 2\n");}
#line 2198 "parser.tab.c"
    break;

  case 4: /* program_items_list_not_empty: program_item  */
#line 246 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); printf("program_items_list_not_empty 1\n");}
#line 2204 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 247 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); printf("program_items_list_not_empty 2\n");}
#line 2210 "parser.tab.c"
    break;

  case 6: /* program_item: module  */
#line 250 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0); printf("program_item 1\n");}
#line 2216 "parser.tab.c"
    break;

  case 7: /* program_item: IMPORTS IDENTIFIER  */
#line 251 "parser.y"
                                  {(yyval.programItem) =  createProgramItem(0,(yyvsp[0].id_var_name)); printf("program_item 2\n");}
#line 2222 "parser.tab.c"
    break;

  case 8: /* program_item: END_OF_LINE  */
#line 252 "parser.y"
                           {(yyval.programItem) =  createProgramItem(0,0); printf("program_item 3\n");}
#line 2228 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE  */
#line 256 "parser.y"
                                               {(yyval.module) = createModule((yyvsp[-3].id_var_name),0); printf("module 1\n");}
#line 2234 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 257 "parser.y"
                                                                     {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList)); printf("module 2\n");}
#line 2240 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE  */
#line 258 "parser.y"
                                                      {(yyval.module) = createModule((yyvsp[-3].id_var_name),0); printf("module 3\n");}
#line 2246 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 259 "parser.y"
                                                                            {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList)); printf("module 4\n");}
#line 2252 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 262 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub)); printf("functions_or_sub_list 1\n");}
#line 2258 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list function_or_sub  */
#line 263 "parser.y"
                                                             {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-1].functionOrSubList),(yyvsp[0].functionOrSub)); printf("functions_or_sub_list 2\n");}
#line 2264 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 266 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function)); printf("function_or_sub 1\n");}
#line 2270 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 267 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0); printf("function_or_sub 2\n");}
#line 2276 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 270 "parser.y"
                                                                                              {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0,0); printf("function 1\n");}
#line 2282 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' AS basic_literal stmt_ends END FUNCTION stmt_ends  */
#line 271 "parser.y"
                                                                                                                       {(yyval.function) = createFunction((yyvsp[-9].id_var_name),(yyvsp[-7].parameterListOrEmpty),0,(yyvsp[-4].vt)); printf("function 1,5\n");}
#line 2288 "parser.tab.c"
    break;

  case 19: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 272 "parser.y"
                                                                                                        {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList),0); printf("function 4\n");}
#line 2294 "parser.tab.c"
    break;

  case 20: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' AS basic_literal stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 273 "parser.y"
                                                                                                                         {(yyval.function) = createFunction((yyvsp[-10].id_var_name),(yyvsp[-8].parameterListOrEmpty),(yyvsp[-3].stmtList),(yyvsp[-5].vt)); printf("function 4,5\n");}
#line 2300 "parser.tab.c"
    break;

  case 21: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 274 "parser.y"
                                                                                                     {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0,0); printf("function 7\n");}
#line 2306 "parser.tab.c"
    break;

  case 22: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' AS basic_literal stmt_ends END FUNCTION stmt_ends  */
#line 275 "parser.y"
                                                                                                                      {(yyval.function) = createFunction((yyvsp[-9].id_var_name),(yyvsp[-7].parameterListOrEmpty),0,(yyvsp[-4].vt)); printf("function 7,5\n");}
#line 2312 "parser.tab.c"
    break;

  case 23: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 276 "parser.y"
                                                                                                               {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList),0); printf("function 10\n");}
#line 2318 "parser.tab.c"
    break;

  case 24: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' AS basic_literal stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 277 "parser.y"
                                                                                                                                {(yyval.function) = createFunction((yyvsp[-10].id_var_name),(yyvsp[-8].parameterListOrEmpty),(yyvsp[-3].stmtList),(yyvsp[-5].vt)); printf("function 10,5\n");}
#line 2324 "parser.tab.c"
    break;

  case 25: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 280 "parser.y"
                                                                                    {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2330 "parser.tab.c"
    break;

  case 26: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 281 "parser.y"
                                                                                              {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2336 "parser.tab.c"
    break;

  case 27: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 282 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2342 "parser.tab.c"
    break;

  case 28: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 283 "parser.y"
                                                                                                   {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2348 "parser.tab.c"
    break;

  case 29: /* parameterlist_or_empty: %empty  */
#line 286 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2354 "parser.tab.c"
    break;

  case 30: /* parameterlist_or_empty: optEoL parameterlist_with_type optEoL  */
#line 287 "parser.y"
                                                              {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2360 "parser.tab.c"
    break;

  case 31: /* parameterlist_or_empty: optEoL parameterlist_without_type optEoL  */
#line 288 "parser.y"
                                                                 {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2366 "parser.tab.c"
    break;

  case 32: /* parameterlist_with_type: parameter_with_type  */
#line 291 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2372 "parser.tab.c"
    break;

  case 33: /* parameterlist_with_type: parameterlist_with_type ',' optEoL parameter_with_type  */
#line 292 "parser.y"
                                                                                {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2378 "parser.tab.c"
    break;

  case 34: /* parameterlist_without_type: parameter_without_type  */
#line 295 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2384 "parser.tab.c"
    break;

  case 35: /* parameterlist_without_type: parameterlist_without_type ',' optEoL parameter_without_type  */
#line 296 "parser.y"
                                                                                         {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2390 "parser.tab.c"
    break;

  case 36: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 299 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2396 "parser.tab.c"
    break;

  case 37: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 300 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2402 "parser.tab.c"
    break;

  case 38: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal  */
#line 301 "parser.y"
                                                       {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2408 "parser.tab.c"
    break;

  case 39: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal '(' ')'  */
#line 302 "parser.y"
                                                               {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2414 "parser.tab.c"
    break;

  case 40: /* parameter_without_type: IDENTIFIER  */
#line 305 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2420 "parser.tab.c"
    break;

  case 41: /* stmt_list: stmt  */
#line 310 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); printf("stmt_list 1\n");}
#line 2426 "parser.tab.c"
    break;

  case 42: /* stmt_list: stmt_list stmt  */
#line 311 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); printf("stmt_list 2\n");}
#line 2432 "parser.tab.c"
    break;

  case 43: /* stmt: multi_line_stmt  */
#line 314 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)}); printf("stmt 1\n");}
#line 2438 "parser.tab.c"
    break;

  case 44: /* stmt: single_line_stmt stmt_ends  */
#line 315 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)}); printf("stmt 2\n");}
#line 2444 "parser.tab.c"
    break;

  case 45: /* single_line_stmt: if_stmt_single_line  */
#line 318 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)}); printf("single_line_stmt 1\n");}
#line 2450 "parser.tab.c"
    break;

  case 46: /* single_line_stmt: decl_stmt  */
#line 319 "parser.y"
                                            {(yyval.statementSingle) = createStatementSingle(ST_DECL, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmt)}); printf("single_line_stmt 2\n");}
#line 2456 "parser.tab.c"
    break;

  case 47: /* single_line_stmt: expr  */
#line 320 "parser.y"
                                       {(yyval.statementSingle) = createStatementSingle(EXPR, (StmtSingleValue){.expression=(yyvsp[0].expression)}); printf("single_line_stmt 3\n");}
#line 2462 "parser.tab.c"
    break;

  case 48: /* single_line_stmt: return_stmt  */
#line 321 "parser.y"
                                              {(yyval.statementSingle) = createStatementSingle(ST_RETURN, (StmtSingleValue){.returnStmt=(yyvsp[0].returnStmt)}); printf("single_line_stmt 4\n");}
#line 2468 "parser.tab.c"
    break;

  case 49: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 324 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)}); printf("multi_line_stmt 1\n");}
#line 2474 "parser.tab.c"
    break;

  case 50: /* multi_line_stmt: while_stmt stmt_ends  */
#line 325 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)}); printf("multi_line_stmt 4\n");}
#line 2480 "parser.tab.c"
    break;

  case 51: /* multi_line_stmt: do_loop_stmt  */
#line 326 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)}); printf("multi_line_stmt 5\n");}
#line 2486 "parser.tab.c"
    break;

  case 52: /* multi_line_stmt: for_loop_stmt  */
#line 327 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)}); printf("multi_line_stmt 6\n");}
#line 2492 "parser.tab.c"
    break;

  case 53: /* multi_line_stmt: for_each_loop_stmt  */
#line 328 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)}); printf("multi_line_stmt 7\n");}
#line 2498 "parser.tab.c"
    break;

  case 54: /* multi_line_stmt: select_stmt stmt_ends  */
#line 329 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)}); printf("multi_line_stmt 8\n");}
#line 2504 "parser.tab.c"
    break;

  case 55: /* return_stmt: RETURN expr  */
#line 332 "parser.y"
                         {(yyval.returnStmt) = createReturnStmt((yyvsp[0].expression)); printf("return_stmt 1\n");}
#line 2510 "parser.tab.c"
    break;

  case 56: /* return_stmt: RETURN  */
#line 333 "parser.y"
                            {(yyval.returnStmt) = createReturnStmt(0); printf("return_stmt 2\n");}
#line 2516 "parser.tab.c"
    break;

  case 57: /* stmt_ends: END_OF_LINE  */
#line 336 "parser.y"
                       {printf("stmt_ends 1\n");}
#line 2522 "parser.tab.c"
    break;

  case 58: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 337 "parser.y"
                            {printf("stmt_ends 2\n");}
#line 2528 "parser.tab.c"
    break;

  case 60: /* optEoL: END_OF_LINE  */
#line 341 "parser.y"
                        {printf("optEoL 1\n");}
#line 2534 "parser.tab.c"
    break;

  case 61: /* decl_stmt: CONST var_name AS basic_literal '=' optEoL expr  */
#line 345 "parser.y"
                                                           {(yyval.declStmt) = createDeclStmt(1, (yyvsp[-5].varName), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt 1\n");}
#line 2540 "parser.tab.c"
    break;

  case 62: /* decl_stmt: DIM var_name AS basic_literal '=' optEoL expr  */
#line 346 "parser.y"
                                                         {(yyval.declStmt) = createDeclStmt(0, (yyvsp[-5].varName), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt 2\n");}
#line 2546 "parser.tab.c"
    break;

  case 63: /* decl_stmt: DIM var_name AS basic_literal  */
#line 347 "parser.y"
                                                 {(yyval.declStmt) = createDeclStmt(0, (yyvsp[-2].varName), (yyvsp[0].vt), 0); printf("decl_stmt 3\n");}
#line 2552 "parser.tab.c"
    break;

  case 64: /* decl_stmt: DIM var_name '=' optEoL expr  */
#line 348 "parser.y"
                                        {(yyval.declStmt) = createDeclStmt(0, (yyvsp[-3].varName), 0, (yyvsp[0].expression)); printf("decl_stmt 4\n");}
#line 2558 "parser.tab.c"
    break;

  case 65: /* decl_stmt: DIM var_name  */
#line 349 "parser.y"
                        {(yyval.declStmt) = createDeclStmt(0, (yyvsp[0].varName), 0, 0); printf("decl_stmt 5\n");}
#line 2564 "parser.tab.c"
    break;

  case 66: /* decl_stmt: DIM var_name '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 350 "parser.y"
                                                                      { printf("decl_stmt 6 (bad) \n");}
#line 2570 "parser.tab.c"
    break;

  case 67: /* var_name: IDENTIFIER '(' expr ')'  */
#line 353 "parser.y"
                                 {(yyval.varName) = createVarName((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name 1\n");}
#line 2576 "parser.tab.c"
    break;

  case 68: /* var_name: IDENTIFIER  */
#line 354 "parser.y"
                             {(yyval.varName) = createVarName((yyvsp[0].id_var_name), 0); printf("var_name 2\n");}
#line 2582 "parser.tab.c"
    break;

  case 75: /* while_stmt: WHILE expr stmt_ends stmt_list END WHILE  */
#line 366 "parser.y"
                                                     {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2588 "parser.tab.c"
    break;

  case 76: /* while_stmt: WHILE expr stmt_ends END WHILE  */
#line 367 "parser.y"
                                                   {(yyval.whileStmt) = createWhileStmt((yyvsp[-3].expression), 0);}
#line 2594 "parser.tab.c"
    break;

  case 77: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP stmt_ends  */
#line 371 "parser.y"
                                                           {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-3].doLoopCondition), (yyvsp[-2].stmtList)); printf("do_loop_stmt 1\n"); }
#line 2600 "parser.tab.c"
    break;

  case 78: /* do_loop_stmt: DO do_loop_condition LOOP stmt_ends  */
#line 372 "parser.y"
                                                             {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-2].doLoopCondition), 0); printf("do_loop_stmt 2\n"); }
#line 2606 "parser.tab.c"
    break;

  case 79: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 373 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));printf("do_loop_stmt 3\n"); }
#line 2612 "parser.tab.c"
    break;

  case 80: /* do_loop_stmt: DO stmt_ends LOOP do_loop_condition  */
#line 374 "parser.y"
                                                              {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), 0);printf("do_loop_stmt 4\n"); }
#line 2618 "parser.tab.c"
    break;

  case 81: /* do_loop_condition: UNTIL expr stmt_ends  */
#line 377 "parser.y"
                                        {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression)); printf("do_loop_condition UNTIL\n");}
#line 2624 "parser.tab.c"
    break;

  case 82: /* do_loop_condition: WHILE expr stmt_ends  */
#line 378 "parser.y"
                                                        {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression)); printf("do_loop_condition WHILE\n");}
#line 2630 "parser.tab.c"
    break;

  case 83: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT stmt_ends  */
#line 382 "parser.y"
                                                                                                                                 {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-10].id_var_name), (yyvsp[-8].vt), (yyvsp[-6].expression), (yyvsp[-4].expression), 0, (yyvsp[-2].stmtList));}
#line 2636 "parser.tab.c"
    break;

  case 84: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends NEXT stmt_ends  */
#line 383 "parser.y"
                                                                                                                                   {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-9].id_var_name), (yyvsp[-7].vt), (yyvsp[-5].expression), (yyvsp[-3].expression), 0, 0);}
#line 2642 "parser.tab.c"
    break;

  case 85: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT stmt_ends  */
#line 384 "parser.y"
                                                                                                                                                                      {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-12].id_var_name), (yyvsp[-10].vt), (yyvsp[-8].expression), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2648 "parser.tab.c"
    break;

  case 86: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends NEXT stmt_ends  */
#line 385 "parser.y"
                                                                                                                                                            {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-11].id_var_name), (yyvsp[-9].vt), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), 0);}
#line 2654 "parser.tab.c"
    break;

  case 87: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT stmt_ends  */
#line 389 "parser.y"
                                                                                                          {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-8].id_var_name), (yyvsp[-6].vt), (yyvsp[-4].id_var_name), (yyvsp[-2].stmtList));}
#line 2660 "parser.tab.c"
    break;

  case 88: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends NEXT stmt_ends  */
#line 390 "parser.y"
                                                                                                                {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-7].id_var_name), (yyvsp[-5].vt), (yyvsp[-3].id_var_name), 0);}
#line 2666 "parser.tab.c"
    break;

  case 89: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list END IF  */
#line 393 "parser.y"
                                                            {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 1\n");}
#line 2672 "parser.tab.c"
    break;

  case 90: /* if_stmt_multi_line: IF expr THEN stmt_ends END IF  */
#line 394 "parser.y"
                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-4].expression), 0, 0, 0); printf("if_stmt_multi 1,5\n");}
#line 2678 "parser.tab.c"
    break;

  case 91: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 395 "parser.y"
                                                                                                     {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 2\n");}
#line 2684 "parser.tab.c"
    break;

  case 92: /* if_stmt_multi_line: IF expr THEN stmt_ends ELSE stmt_ends stmt_list END IF  */
#line 396 "parser.y"
                                                                                           {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-7].expression), 0, 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 2,5\n");}
#line 2690 "parser.tab.c"
    break;

  case 93: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list elseif_list END IF  */
#line 397 "parser.y"
                                                                        {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 3\n");}
#line 2696 "parser.tab.c"
    break;

  case 94: /* if_stmt_multi_line: IF expr THEN stmt_ends elseif_list END IF  */
#line 398 "parser.y"
                                                              {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), 0, (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 3,5\n");}
#line 2702 "parser.tab.c"
    break;

  case 95: /* if_stmt_multi_line: IF expr THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 399 "parser.y"
                                                                                                                 {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 4\n");}
#line 2708 "parser.tab.c"
    break;

  case 96: /* if_stmt_multi_line: IF expr THEN stmt_ends elseif_list ELSE stmt_ends stmt_list END IF  */
#line 400 "parser.y"
                                                                                                       {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), 0, (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 4\n");}
#line 2714 "parser.tab.c"
    break;

  case 97: /* elseif_list: elseif  */
#line 403 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf)); printf("elseif_list 1\n");}
#line 2720 "parser.tab.c"
    break;

  case 98: /* elseif_list: elseif_list elseif  */
#line 404 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf)); printf("elseif_list 2\n");}
#line 2726 "parser.tab.c"
    break;

  case 99: /* elseif: ELSEIF expr THEN stmt_ends stmt_list  */
#line 407 "parser.y"
                                             {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 1\n");}
#line 2732 "parser.tab.c"
    break;

  case 100: /* if_stmt_single_line: IF expr THEN single_line_stmt  */
#line 410 "parser.y"
                                                    {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0); printf("if_stmt_single 1\n");}
#line 2738 "parser.tab.c"
    break;

  case 101: /* if_stmt_single_line: IF expr THEN single_line_stmt ELSE single_line_stmt  */
#line 411 "parser.y"
                                                                          {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle)); printf("if_stmt_single 2\n");}
#line 2744 "parser.tab.c"
    break;

  case 102: /* select_stmt: SELECT CASE expr stmt_ends case_list END SELECT  */
#line 415 "parser.y"
                                                             {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList), 0); printf("select_stmt 2\n");}
#line 2750 "parser.tab.c"
    break;

  case 103: /* select_stmt: SELECT CASE expr stmt_ends case_list CASE ELSE stmt_ends stmt_list END SELECT  */
#line 416 "parser.y"
                                                                                                   {(yyval.selectStmt) = createSelectStmt((yyvsp[-8].expression), (yyvsp[-6].caseList), (yyvsp[-2].stmtList)); printf("select_stmt 4\n");}
#line 2756 "parser.tab.c"
    break;

  case 104: /* case_list: case_stmt  */
#line 419 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt)); printf("case_list 1\n");}
#line 2762 "parser.tab.c"
    break;

  case 105: /* case_list: case_list case_stmt  */
#line 420 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt)); printf("case_list 2\n");}
#line 2768 "parser.tab.c"
    break;

  case 106: /* case_stmt: CASE expr_list stmt_ends stmt_list  */
#line 423 "parser.y"
                                              {(yyval.caseStmt) = createCaseStmt((yyvsp[-2].expressionList), (yyvsp[0].stmtList)); printf("case_stmt 1\n");}
#line 2774 "parser.tab.c"
    break;

  case 107: /* expr: basic_literal_value  */
#line 427 "parser.y"
                          {(yyval.expression) = (yyvsp[0].expression); printf("expr 0\n");}
#line 2780 "parser.tab.c"
    break;

  case 108: /* expr: '-' expr  */
#line 428 "parser.y"
                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression)); printf("expr 1\n");}
#line 2786 "parser.tab.c"
    break;

  case 109: /* expr: '+' expr  */
#line 429 "parser.y"
                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression)); printf("expr 2\n");}
#line 2792 "parser.tab.c"
    break;

  case 110: /* expr: expr '+' optEoL expr  */
#line 430 "parser.y"
                           {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression));  printf("expr 3\n");}
#line 2798 "parser.tab.c"
    break;

  case 111: /* expr: expr '-' optEoL expr  */
#line 431 "parser.y"
                           {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression));  printf("expr 4\n");}
#line 2804 "parser.tab.c"
    break;

  case 112: /* expr: expr '*' optEoL expr  */
#line 432 "parser.y"
                           {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 5\n");}
#line 2810 "parser.tab.c"
    break;

  case 113: /* expr: expr '/' optEoL expr  */
#line 433 "parser.y"
                           {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 6\n");}
#line 2816 "parser.tab.c"
    break;

  case 114: /* expr: expr INT_DIV optEoL expr  */
#line 434 "parser.y"
                               {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 7\n");}
#line 2822 "parser.tab.c"
    break;

  case 115: /* expr: expr '=' optEoL expr  */
#line 435 "parser.y"
                           {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 8\n");}
#line 2828 "parser.tab.c"
    break;

  case 116: /* expr: expr '<' optEoL expr  */
#line 436 "parser.y"
                           {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 9\n");}
#line 2834 "parser.tab.c"
    break;

  case 117: /* expr: expr '>' optEoL expr  */
#line 437 "parser.y"
                           {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 10\n");}
#line 2840 "parser.tab.c"
    break;

  case 118: /* expr: expr '^' optEoL expr  */
#line 438 "parser.y"
                           {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 11\n");}
#line 2846 "parser.tab.c"
    break;

  case 119: /* expr: expr NOT_EQUAL optEoL expr  */
#line 439 "parser.y"
                                 {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 12\n");}
#line 2852 "parser.tab.c"
    break;

  case 120: /* expr: expr LESS_OR_EQUAL optEoL expr  */
#line 440 "parser.y"
                                     {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 13\n");}
#line 2858 "parser.tab.c"
    break;

  case 121: /* expr: expr MORE_OR_EQUAL optEoL expr  */
#line 441 "parser.y"
                                     {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 14\n");}
#line 2864 "parser.tab.c"
    break;

  case 122: /* expr: expr '&' optEoL expr  */
#line 442 "parser.y"
                           {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 15\n");}
#line 2870 "parser.tab.c"
    break;

  case 123: /* expr: '(' optEoL expr optEoL ')'  */
#line 443 "parser.y"
                                 {(yyval.expression) = createExpression(ET_PARENTHESIS, 0, (yyvsp[-2].expression)); printf("expr 16\n");}
#line 2876 "parser.tab.c"
    break;

  case 124: /* expr: IDENTIFIER  */
#line 444 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)}); printf("expr 17\n");}
#line 2882 "parser.tab.c"
    break;

  case 125: /* expr: IDENTIFIER arguments  */
#line 445 "parser.y"
                           {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList)); printf("expr 18\n");}
#line 2888 "parser.tab.c"
    break;

  case 126: /* expr: expr AND optEoL expr  */
#line 446 "parser.y"
                           {(yyval.expression) = createExpression(ET_AND, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 19\n");}
#line 2894 "parser.tab.c"
    break;

  case 127: /* expr: expr OR optEoL expr  */
#line 447 "parser.y"
                          {(yyval.expression) = createExpression(ET_OR, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 20\n");}
#line 2900 "parser.tab.c"
    break;

  case 128: /* expr: expr XOR optEoL expr  */
#line 448 "parser.y"
                           {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 21\n");}
#line 2906 "parser.tab.c"
    break;

  case 129: /* expr: NOT expr  */
#line 449 "parser.y"
               {(yyval.expression) = createExpression(ET_NOT, 0, (yyvsp[0].expression)); printf("expr 22\n");}
#line 2912 "parser.tab.c"
    break;

  case 130: /* expr: expr TO optEoL expr  */
#line 450 "parser.y"
                              {(yyval.expression) = createExpression(ET_TO, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 23\n");}
#line 2918 "parser.tab.c"
    break;

  case 131: /* expr: expr MOD optEoL expr  */
#line 451 "parser.y"
                               {(yyval.expression) = createExpression(ET_MOD, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 24\n");}
#line 2924 "parser.tab.c"
    break;

  case 132: /* expr: expr SHIFT_LEFT optEoL expr  */
#line 452 "parser.y"
                                      {(yyval.expression) = createExpression(ET_SHIFT_L, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 25\n");}
#line 2930 "parser.tab.c"
    break;

  case 133: /* expr: expr SHIFT_RIGHT optEoL expr  */
#line 453 "parser.y"
                                       {(yyval.expression) = createExpression(ET_SHIFT_R, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 26\n");}
#line 2936 "parser.tab.c"
    break;

  case 134: /* expr: expr ASSIGN_SUB optEoL expr  */
#line 454 "parser.y"
                                      {(yyval.expression) = createExpression(ET_ASSIGN_SUB, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 27\n");}
#line 2942 "parser.tab.c"
    break;

  case 135: /* expr: expr ASSIGN_ADD optEoL expr  */
#line 455 "parser.y"
                                      {(yyval.expression) = createExpression(ET_ASSIGN_ADD, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 28\n");}
#line 2948 "parser.tab.c"
    break;

  case 136: /* expr: expr ASSIGN_CONSTRUCT optEoL expr  */
#line 456 "parser.y"
                                            {(yyval.expression) = createExpression(ET_ASSIGN_CONSTRUCT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 29\n");}
#line 2954 "parser.tab.c"
    break;

  case 137: /* expr: expr ASSIGN_MULT optEoL expr  */
#line 457 "parser.y"
                                       {(yyval.expression) = createExpression(ET_ASSIGN_MULT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 30\n");}
#line 2960 "parser.tab.c"
    break;

  case 138: /* expr: expr ASSIGN_ORD_DIV optEoL expr  */
#line 458 "parser.y"
                                          {(yyval.expression) = createExpression(ET_ASSIGN_ORD_DIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 31\n");}
#line 2966 "parser.tab.c"
    break;

  case 139: /* expr: expr ASSIGN_INT_DIV optEoL expr  */
#line 459 "parser.y"
                                          {(yyval.expression) = createExpression(ET_ASSIGN_INT_DIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 32\n");}
#line 2972 "parser.tab.c"
    break;

  case 140: /* expr: expr ASSIGN_LSHIFT optEoL expr  */
#line 460 "parser.y"
                                         {(yyval.expression) = createExpression(ET_ASSIGN_LSHIFT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 33\n");}
#line 2978 "parser.tab.c"
    break;

  case 141: /* expr: expr ASSIGN_RSHIFT optEoL expr  */
#line 461 "parser.y"
                                         {(yyval.expression) = createExpression(ET_ASSIGN_RSHIFT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 34\n");}
#line 2984 "parser.tab.c"
    break;

  case 142: /* expr: expr ASSIGN_CONCAT optEoL expr  */
#line 462 "parser.y"
                                         {(yyval.expression) = createExpression(ET_ASSIGN_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr 35\n");}
#line 2990 "parser.tab.c"
    break;

  case 143: /* expr: IS '=' optEoL expr  */
#line 463 "parser.y"
                         {(yyval.expression) = createExpression(ET_IS_EQUAL, 0, (yyvsp[0].expression)); printf("expr 36\n");}
#line 2996 "parser.tab.c"
    break;

  case 144: /* expr: IS '<' optEoL expr  */
#line 464 "parser.y"
                         {(yyval.expression) = createExpression(ET_IS_LESSER, 0, (yyvsp[0].expression)); printf("expr 37\n");}
#line 3002 "parser.tab.c"
    break;

  case 145: /* expr: IS '>' optEoL expr  */
#line 465 "parser.y"
                         {(yyval.expression) = createExpression(ET_IS_GREATER, 0, (yyvsp[0].expression)); printf("expr 38\n");}
#line 3008 "parser.tab.c"
    break;

  case 146: /* basic_literal: INT  */
#line 469 "parser.y"
                   {(yyval.vt) = VT_INTEGER; printf("basic_literal int\n");}
#line 3014 "parser.tab.c"
    break;

  case 147: /* basic_literal: STRING  */
#line 470 "parser.y"
                     {(yyval.vt) = VT_STRING; printf("basic_literal str\n");}
#line 3020 "parser.tab.c"
    break;

  case 148: /* basic_literal: BOOLEAN  */
#line 471 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN; printf("basic_literal bool\n");}
#line 3026 "parser.tab.c"
    break;

  case 149: /* basic_literal: DOUBLE  */
#line 472 "parser.y"
                     {(yyval.vt) = VT_DOUBLE; printf("basic_literal double\n");}
#line 3032 "parser.tab.c"
    break;

  case 150: /* basic_literal_value: INT_VALUE  */
#line 475 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)}); printf("basic_literal_value int\n");}
#line 3038 "parser.tab.c"
    break;

  case 151: /* basic_literal_value: STRING_VALUE  */
#line 476 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)}); printf("basic_literal_value str\n");}
#line 3044 "parser.tab.c"
    break;

  case 152: /* basic_literal_value: BOOLEAN_VALUE  */
#line 477 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)}); printf("basic_literal_value bool\n");}
#line 3050 "parser.tab.c"
    break;

  case 153: /* basic_literal_value: DOUBLE_VALUE  */
#line 478 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)}); printf("basic_literal_value double\n");}
#line 3056 "parser.tab.c"
    break;

  case 154: /* arguments: '(' optEoL expr_list optEoL ')'  */
#line 481 "parser.y"
                                           {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3062 "parser.tab.c"
    break;

  case 155: /* arguments: '(' ')'  */
#line 482 "parser.y"
                              {(yyval.expressionList) = 0;}
#line 3068 "parser.tab.c"
    break;

  case 156: /* expr_list: expr  */
#line 485 "parser.y"
                {(yyval.expressionList) = createExpressionList((yyvsp[0].expression)); printf("expr_list 1\n");}
#line 3074 "parser.tab.c"
    break;

  case 157: /* expr_list: expr_list ',' expr  */
#line 486 "parser.y"
                              {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression)); printf("expr_list 2\n");}
#line 3080 "parser.tab.c"
    break;


#line 3084 "parser.tab.c"

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

#line 489 "parser.y"


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

Function *createFunction(char* id_var_name, ParameterListOrEmpty *arguments, StmtList *stmtList, VarType varType)
{
	Function *result = (Function *)malloc(sizeof(Function));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->varType = varType;
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

CaseStmt *createCaseStmt(ExpressionList *exprList, StmtList *stmtList)
{
	CaseStmt *result = (CaseStmt *)malloc(sizeof(CaseStmt));

	result->exprList = exprList;
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
