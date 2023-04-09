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
Function* createFunction(char* id_var_name, ExpressionList *arguments, StmtList *stmtList, Expression *exprList);
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

ProgramItemList *root;

#line 138 "parser.tab.c"

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
  YYSYMBOL_53_ = 53,                       /* '^'  */
  YYSYMBOL_54_ = 54,                       /* '*'  */
  YYSYMBOL_55_ = 55,                       /* '/'  */
  YYSYMBOL_INT_DIV = 56,                   /* INT_DIV  */
  YYSYMBOL_57_ = 57,                       /* '+'  */
  YYSYMBOL_58_ = 58,                       /* '-'  */
  YYSYMBOL_UNARY_MINUS = 59,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 60,                /* UNARY_PLUS  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 62,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 63,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 64,             /* MORE_OR_EQUAL  */
  YYSYMBOL_65_ = 65,                       /* '>'  */
  YYSYMBOL_66_ = 66,                       /* '<'  */
  YYSYMBOL_67_ = 67,                       /* '&'  */
  YYSYMBOL_68_ = 68,                       /* '('  */
  YYSYMBOL_69_ = 69,                       /* ')'  */
  YYSYMBOL_THEN = 70,                      /* THEN  */
  YYSYMBOL_ELSE = 71,                      /* ELSE  */
  YYSYMBOL_72_ = 72,                       /* ','  */
  YYSYMBOL_73_ = 73,                       /* '{'  */
  YYSYMBOL_74_ = 74,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 75,                  /* $accept  */
  YYSYMBOL_root = 76,                      /* root  */
  YYSYMBOL_program_items_list = 77,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 78, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 79,              /* program_item  */
  YYSYMBOL_module = 80,                    /* module  */
  YYSYMBOL_functions_or_sub_list = 81,     /* functions_or_sub_list  */
  YYSYMBOL_function_or_sub = 82,           /* function_or_sub  */
  YYSYMBOL_function = 83,                  /* function  */
  YYSYMBOL_sub_bloc = 84,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 85,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 86,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 87, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 88,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 89,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 90,                 /* stmt_list  */
  YYSYMBOL_stmt = 91,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 92,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 93,           /* multi_line_stmt  */
  YYSYMBOL_stmt_ends = 94,                 /* stmt_ends  */
  YYSYMBOL_decl_stmt = 95,                 /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 96,     /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 97,                  /* var_name  */
  YYSYMBOL_var_name_singleline = 98,       /* var_name_singleline  */
  YYSYMBOL_access = 99,                    /* access  */
  YYSYMBOL_while_stmt = 100,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 101,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 102,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 103,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 104,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 105,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 106,              /* elseif_list  */
  YYSYMBOL_elseif = 107,                   /* elseif  */
  YYSYMBOL_if_stmt_single_line = 108,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 109,              /* select_stmt  */
  YYSYMBOL_case_list = 110,                /* case_list  */
  YYSYMBOL_case_stmt = 111,                /* case_stmt  */
  YYSYMBOL_expr_singleline = 112,          /* expr_singleline  */
  YYSYMBOL_expr_multiline = 113,           /* expr_multiline  */
  YYSYMBOL_basic_literal = 114,            /* basic_literal  */
  YYSYMBOL_basic_literal_value = 115,      /* basic_literal_value  */
  YYSYMBOL_arguments_multiline = 116,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 117,     /* arguments_singleline  */
  YYSYMBOL_arguments = 118,                /* arguments  */
  YYSYMBOL_expr_list = 119                 /* expr_list  */
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
#define YYLAST   1787

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  490

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
       2,     2,     2,     2,     2,     2,     2,     2,    67,     2,
      68,    69,    54,    57,    72,    58,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,    61,    65,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,    74,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    56,    59,
      60,    62,    63,    64,    70,    71
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   231,   231,   234,   235,   238,   239,   242,   243,   247,
     248,   249,   250,   254,   255,   258,   259,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   277,
     278,   279,   280,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   294,   295,   296,   300,   301,   302,   306,   307,
     311,   317,   318,   322,   323,   327,   328,   329,   332,   333,
     334,   335,   336,   337,   338,   339,   344,   345,   351,   352,
     353,   354,   355,   356,   360,   361,   362,   363,   364,   365,
     369,   372,   373,   377,   378,   379,   380,   381,   382,   388,
     389,   394,   395,   398,   399,   404,   405,   410,   415,   416,
     417,   418,   419,   420,   421,   422,   425,   426,   429,   430,
     432,   433,   438,   439,   442,   443,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   501,   502,   503,   504,   507,   508,   509,   510,   515,
     516,   517,   521,   522,   525,   526,   530,   531
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
  "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC", "FRIEND", "'^'",
  "'*'", "'/'", "INT_DIV", "'+'", "'-'", "UNARY_MINUS", "UNARY_PLUS",
  "'='", "NOT_EQUAL", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "'>'", "'<'",
  "'&'", "'('", "')'", "THEN", "ELSE", "','", "'{'", "'}'", "$accept",
  "root", "program_items_list", "program_items_list_not_empty",
  "program_item", "module", "functions_or_sub_list", "function_or_sub",
  "function", "sub_bloc", "parameterlist_or_empty",
  "parameterlist_with_type", "parameterlist_without_type",
  "parameter_with_type", "parameter_without_type", "stmt_list", "stmt",
  "single_line_stmt", "multi_line_stmt", "stmt_ends", "decl_stmt",
  "decl_stmt_single_line", "var_name", "var_name_singleline", "access",
  "while_stmt", "do_loop_stmt", "do_loop_condition", "for_loop_stmt",
  "for_each_loop_stmt", "if_stmt_multi_line", "elseif_list", "elseif",
  "if_stmt_single_line", "select_stmt", "case_list", "case_stmt",
  "expr_singleline", "expr_multiline", "basic_literal",
  "basic_literal_value", "arguments_multiline", "arguments_singleline",
  "arguments", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-352)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     185,    19,    80,   -20,    64,  -352,  -352,   100,  -352,   185,
    -352,  -352,   115,   114,   114,  -352,  -352,  -352,  -352,   151,
    -352,   162,   495,   114,  -352,   204,   176,   205,    13,  -352,
    -352,  -352,   123,   559,   154,   114,   160,   220,   382,   219,
     221,   222,    95,     0,   162,   215,  -352,  -352,   114,   114,
    -352,   164,   160,   114,   230,   241,   249,   190,   -10,    -6,
    -352,  -352,  -352,  -352,  -352,  -352,   194,   523,   523,   523,
     523,  -352,  1668,  -352,    48,   633,   162,     0,   114,   162,
     114,   175,    50,    52,   114,  -352,    91,  -352,    96,   328,
    -352,    60,   179,   179,  1617,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   195,  -352,
     523,   160,   235,   253,   253,   677,   677,   245,   677,    66,
       8,   332,   738,  -352,   114,  -352,   114,  -352,   114,  -352,
    -352,  -352,   114,  -352,   114,  1683,   114,   202,   707,   162,
    -352,  -352,  -352,  -352,   207,  -352,  -352,   775,   241,   262,
    -352,  -352,   265,  -352,    21,   209,  -352,  -352,  1697,  1709,
    1709,  1720,   179,   179,   214,   214,   214,   214,   214,   214,
    -352,  -352,  1668,  -352,  -352,   218,   270,   273,     2,    20,
    1528,   114,  1563,   223,   677,  1528,   114,   523,   523,   546,
    1222,   274,   280,   523,  1488,   266,   677,  -352,   162,   162,
     162,   162,   162,   362,   819,  1266,  1282,  1303,  1323,  1340,
    1353,  1370,  1383,  1400,  1413,  1430,   162,   114,   281,   677,
     797,   239,   297,   856,  -352,  -352,  -352,   677,   175,   175,
     175,   277,   175,  1262,   546,   546,  1242,   114,  1528,   114,
     117,   119,  1548,  1548,   878,   900,   175,   295,  1508,   244,
    -352,  1528,   114,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   834,  -352,  1528,   114,
     289,   677,  -352,  -352,   305,  1634,   251,   260,   261,   263,
     677,   269,   175,   677,  1668,   937,   957,   311,   311,   523,
     255,   546,  1668,   546,    65,    65,   313,   314,   162,   162,
     134,  -352,   278,   175,   290,  -352,  -352,   125,   126,  1668,
    1668,  1668,  1668,  1668,  1668,  1668,  1668,  1668,  1668,  1668,
    1668,  1668,   330,   994,   130,   132,  -352,  1528,   114,  -352,
    -352,  -352,   321,  1443,   323,  1683,  -352,  1460,   296,  -352,
     351,   352,   308,   360,    24,  1581,   399,    39,   485,    70,
     186,  -352,   191,  -352,  -352,  -352,   247,   350,  -352,   363,
     364,  -352,   375,   366,   370,   135,   136,   677,   677,  1668,
     677,   677,  1668,   337,  -352,  -352,   523,   175,   175,    44,
     399,  -352,   380,   677,  1222,    -3,  -352,   388,  1222,     7,
     677,   114,  1468,   118,   386,  -352,   387,   391,   405,  -352,
    -352,  -352,  -352,  -352,   398,   400,  -352,  -352,  -352,  -352,
     354,  1651,   376,   383,  -352,  1599,   377,  1014,   427,  1222,
    -352,  -352,  1051,   429,  1222,  1528,   114,   546,   677,   546,
     677,   546,  -352,  -352,   247,   114,  -352,  -352,   523,   523,
     523,  1222,  1222,   430,  -352,  1071,   431,  -352,  1108,   546,
     546,  1222,  1528,   114,  1222,  1528,   114,  1222,    -9,   546,
      73,  1222,  1222,  -352,   432,  -352,   433,  1222,  1222,   546,
     546,   546,   546,   247,   546,  1128,  -352,  -352,  -352,  1222,
    1222,  1222,  1222,   114,  1165,  -352,   546,  -352,  1185,  -352
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    86,    84,    83,    85,     0,     2,     4,
       5,     7,     0,     0,     0,    88,    87,     1,     6,     0,
      66,     8,     0,     0,    67,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     9,     0,   174,   175,     0,     0,
      14,     0,     0,     0,     0,    50,     0,     0,    34,    38,
      42,    45,   165,   168,   166,   167,   142,     0,     0,     0,
       0,   173,   176,   125,     0,     0,    10,    33,     0,    11,
       0,     0,    36,    41,     0,    37,     0,    40,     0,     0,
     143,     0,   127,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   172,
       0,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,    53,     0,    56,     0,    62,
      63,    64,     0,    55,     0,    57,     0,     0,     0,    12,
     161,   164,   162,   163,    48,    35,    39,     0,     0,     0,
      43,    50,     0,    46,     0,     0,   169,   141,   136,   130,
     131,   132,   128,   129,   133,   137,   138,   139,   135,   134,
     140,   171,   177,   160,    17,    82,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    54,    59,
      61,    58,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,    44,    47,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,    49,    29,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,    77,     0,     0,     0,     0,     0,
     110,     0,    57,     0,     0,     0,     0,     0,    94,    93,
       0,    91,     0,     0,     0,   157,   159,     0,     0,   152,
     146,   147,   148,   144,   145,   149,   153,   154,   155,   151,
     150,   156,     0,     0,     0,     0,    26,     0,     0,    30,
      81,    80,     0,     0,     0,     0,    72,     0,     0,    73,
       0,     0,    82,     0,    78,     0,     0,     0,     0,     0,
       0,   114,     0,    18,    19,    92,     0,     0,   158,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    74,
       0,     0,    75,     0,    90,    89,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,    21,
      22,    32,    24,    25,     0,     0,    68,    69,    70,    71,
       0,     0,     0,    76,    99,     0,     0,     0,     0,     0,
     107,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,     0,     0,    27,    28,     0,     0,
       0,     0,     0,     0,   103,     0,     0,   102,     0,     0,
       0,   124,     0,     0,   117,     0,     0,   116,     0,     0,
       0,   109,   108,   101,     0,   100,     0,   119,   118,     0,
       0,     0,     0,     0,     0,     0,    79,   105,   104,   123,
     122,   121,   120,     0,     0,    97,     0,    95,     0,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,  -352,  -352,   444,  -352,   421,   417,  -352,  -352,
     381,   408,   409,   -70,   -75,   246,   138,  -232,  -352,   -13,
    -352,  -352,   355,  -111,   206,  -352,  -352,   166,  -352,  -352,
    -352,   128,  -351,  -352,  -352,   178,  -172,    92,  -101,  -223,
    -348,   367,   -41,   422,   -65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      57,    58,    59,    60,    61,   122,   123,   124,   125,    38,
     126,   127,   176,   177,    32,   128,   129,   190,   130,   131,
     132,   385,   386,   133,   134,   350,   351,   135,   136,   144,
      73,    46,    47,    48,    74
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    91,   179,   290,   277,   278,   279,   397,   281,
      33,   418,    55,   153,   181,   183,   150,   186,   383,   230,
     191,   423,    44,   302,   154,    90,   473,    37,   383,    85,
      20,    13,    15,    87,   420,    75,    76,   232,   420,    56,
      79,   378,    62,    63,    64,    65,   192,    62,    63,    64,
      65,   111,    20,   382,   113,   114,    66,   115,   116,   338,
     383,   117,    86,   231,   282,   138,    88,   139,   419,   119,
      90,   147,   120,    62,    63,    64,    65,   225,   424,   224,
     357,   233,   111,   239,   187,   379,   458,   108,   349,   145,
     109,   146,    14,   110,   390,   252,    68,    69,   188,   155,
      17,    68,    69,   148,    24,    20,   189,   121,   151,    54,
     384,   198,    70,   199,   381,   200,    16,   109,   269,   201,
     110,   202,    86,   216,    88,   483,   276,    68,    69,   156,
     149,   296,   110,   297,    20,   152,    39,    72,   121,   359,
     360,   391,    19,   430,   363,   110,   364,   476,   290,   404,
     405,    40,   187,    20,   412,   413,    24,    20,    24,    72,
      92,    93,    94,    23,    24,    24,   188,   234,   235,    24,
     328,    24,   240,   241,    24,    24,   343,   344,   395,   336,
     395,    72,   339,   140,   141,   142,   143,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     394,    24,   172,    35,   266,   396,    12,   180,   182,   349,
     185,     1,     2,   194,   349,    12,    34,    36,    62,    63,
      64,    65,    43,   291,   293,   294,   295,    66,    45,   298,
     299,    51,    77,    52,     3,     4,     5,     6,   307,   308,
     101,   102,   103,   104,   105,   106,   107,    49,   393,    53,
      62,    63,    64,    65,    67,   324,   325,    80,    81,    84,
     197,    55,    89,   174,   171,   175,   406,   407,   184,   408,
     409,   217,    68,    69,   148,   221,   238,   151,   226,   242,
     243,   107,   416,    70,    71,   248,   227,   228,   251,   426,
     229,   246,   247,   237,   250,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   272,   267,
     273,   268,   303,   306,   365,   366,   280,   326,   329,   275,
     331,   332,   333,   342,   334,   284,   346,   453,   292,   456,
     337,    62,    63,    64,    65,    62,    63,    64,    65,   356,
      66,   353,   354,   361,    66,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   197,   358,
     367,   197,   370,   327,   373,    62,    63,    64,    65,   374,
     375,   193,   335,   460,    66,   335,   376,   377,   427,   429,
     431,   345,   197,   197,   220,    68,    69,   398,   401,    68,
      69,   399,   400,   223,   402,    25,    70,    71,   403,   414,
      70,   253,    62,    63,    64,    65,   410,   421,   432,   433,
      27,    66,   449,   450,   287,   288,   434,   435,   289,    68,
      69,    24,   459,   197,   197,   369,   436,   438,   437,   372,
      70,     3,     4,     5,     6,   244,   245,   439,   292,   469,
     470,   392,   471,   472,   440,   474,   444,   442,   447,   463,
     465,   477,   478,    18,    42,    50,    68,    69,   137,   335,
     335,   197,   335,   335,    82,    83,   355,    70,   411,   178,
     486,   284,   292,   352,    78,   415,   389,     0,   173,     0,
     285,   286,   425,     0,     0,   197,   197,     0,    62,    63,
      64,    65,     0,     0,     0,     0,     0,   111,     0,   387,
     113,   114,     0,   115,   116,     0,   383,   117,    25,    26,
       0,     0,   323,     0,     0,   119,     0,     0,   120,     0,
     452,     0,   455,    27,     0,     0,    62,    63,    64,    65,
      72,   369,   372,     0,    24,    66,     0,   347,     0,   348,
       0,     0,    68,    69,     3,     4,     5,     6,     0,    62,
      63,    64,    65,   121,     0,   197,   388,     0,   111,     0,
     197,   113,   114,     0,   115,   116,     0,     0,   117,     0,
       0,     0,    25,    41,     0,     0,   119,     0,     0,   120,
      68,    69,     0,   197,     0,    24,   197,    27,     0,   197,
       0,    70,   197,     0,     0,   197,     0,     0,    24,   197,
     197,     0,     0,    68,    69,   197,   197,     0,     3,     4,
       5,     6,     0,   197,   121,     0,     0,   197,   197,   197,
     197,     0,   197,     0,     0,     0,   197,     0,     0,     0,
     417,     0,     0,     0,   422,     0,    62,    63,    64,    65,
       0,     0,     0,     0,     0,   111,     0,   112,   113,   114,
       0,   115,   116,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,   119,     0,   445,   120,     0,     0,     0,
     448,     0,    24,   451,     0,   454,     0,   457,     0,     0,
      62,    63,    64,    65,     0,     0,     0,   461,   462,   111,
      68,    69,     0,     0,     0,   467,   468,     0,     0,     0,
       0,   121,     0,     0,     0,   475,     0,     0,     0,     0,
      62,    63,    64,    65,     0,   479,   480,   481,   482,   111,
     484,   218,   113,   114,     0,   115,   116,     0,     0,   117,
       0,     0,   488,     0,    68,    69,   219,   119,     0,     0,
     120,    62,    63,    64,    65,   121,    24,     0,     0,     0,
     111,     0,   195,   113,   114,     0,   115,   116,     0,     0,
     117,     0,     0,     0,    68,    69,     0,   196,   119,     0,
       0,   120,     0,     0,     0,   121,     0,     0,    62,    63,
      64,    65,     0,     0,     0,     0,     0,   111,     0,   222,
     113,   114,     0,   115,   116,    68,    69,   117,     0,     0,
      62,    63,    64,    65,     0,   119,   121,     0,   120,   111,
       0,   270,   113,   114,    24,   115,   116,     0,     0,   117,
       0,     0,    62,    63,    64,    65,   271,   119,     0,     0,
     120,    66,    68,    69,     0,     0,     0,    62,    63,    64,
      65,     0,     0,   121,     0,     0,   111,     0,   322,   113,
     114,     0,   115,   116,    68,    69,   117,     0,   254,    62,
      63,    64,    65,     0,   119,   121,     0,   120,   111,     0,
     274,   113,   114,    24,   115,   116,    68,    69,   117,     0,
       0,    62,    63,    64,    65,     0,   119,    70,     0,   120,
     111,    68,    69,   113,   114,     0,   115,   116,     0,     0,
     117,     0,   121,    62,    63,    64,    65,     0,   119,   300,
       0,   120,   111,    68,    69,   113,   114,     0,   115,   116,
       0,     0,   117,     0,   121,     0,     0,     0,     0,     0,
     119,   301,     0,   120,     0,    68,    69,     0,     0,     0,
      62,    63,    64,    65,     0,     0,   121,     0,     0,   111,
       0,   340,   113,   114,     0,   115,   116,    68,    69,   117,
      62,    63,    64,    65,     0,     0,     0,   119,   121,   111,
     120,   341,   113,   114,     0,   115,   116,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
     120,     0,     0,     0,    68,    69,     0,    62,    63,    64,
      65,     0,     0,     0,     0,   121,   111,     0,   362,   113,
     114,     0,   115,   116,    68,    69,   117,    62,    63,    64,
      65,     0,     0,     0,   119,   121,   111,   120,   443,   113,
     114,     0,   115,   116,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,   119,     0,     0,   120,     0,     0,
       0,    68,    69,     0,    62,    63,    64,    65,     0,     0,
       0,     0,   121,   111,     0,   446,   113,   114,     0,   115,
     116,    68,    69,   117,    62,    63,    64,    65,     0,     0,
       0,   119,   121,   111,   120,   464,   113,   114,     0,   115,
     116,     0,     0,   117,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,   120,     0,     0,     0,    68,    69,
       0,    62,    63,    64,    65,     0,     0,     0,     0,   121,
     111,     0,   466,   113,   114,     0,   115,   116,    68,    69,
     117,    62,    63,    64,    65,     0,     0,     0,   119,   121,
     111,   120,     0,   113,   114,     0,   115,   116,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,   120,   485,     0,     0,    68,    69,     0,    62,    63,
      64,    65,     0,     0,     0,     0,   121,   111,     0,     0,
     113,   114,     0,   115,   116,    68,    69,   117,    62,    63,
      64,    65,     0,     0,     0,   119,   121,   111,   120,   487,
     113,   114,     0,   115,   116,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,   120,   489,
       0,     0,    68,    69,     0,    62,    63,    64,    65,     0,
       0,     0,     0,   121,   111,     0,     0,   113,   114,     0,
     115,   116,    68,    69,   117,    62,    63,    64,    65,     0,
       0,     0,   119,   121,    66,   120,     0,   287,   288,     0,
       0,   289,     0,     0,     0,    62,    63,    64,    65,    62,
      63,    64,    65,     0,    66,     0,     0,     0,    66,    68,
      69,    20,   282,     0,     0,    62,    63,    64,    65,     0,
     121,     0,     0,     0,    66,     0,     0,     0,     0,    68,
      69,   283,     0,     0,     0,   255,    62,    63,    64,    65,
      70,     0,     0,     0,     0,    66,     0,     0,     0,    68,
      69,   256,     0,    68,    69,     0,    62,    63,    64,    65,
      70,     0,     0,     0,    70,    66,     0,     0,     0,    68,
      69,     0,   257,    62,    63,    64,    65,     0,     0,     0,
      70,     0,    66,     0,     0,     0,    62,    63,    64,    65,
      68,    69,   258,     0,     0,    66,     0,     0,     0,     0,
       0,    70,     0,    62,    63,    64,    65,     0,     0,   259,
      68,    69,    66,     0,     0,     0,    62,    63,    64,    65,
       0,    70,   260,     0,     0,    66,     0,    68,    69,     0,
       0,     0,     0,    62,    63,    64,    65,     0,    70,   261,
      68,    69,    66,     0,     0,     0,    62,    63,    64,    65,
       0,    70,   262,     0,     0,    66,     0,    68,    69,     0,
       0,     0,     0,    62,    63,    64,    65,     0,    70,   263,
      68,    69,    66,     0,     0,     0,    62,    63,    64,    65,
       0,    70,   264,     0,     0,    66,     0,    68,    69,     0,
       0,     0,     0,    62,    63,    64,    65,     0,    70,   265,
      68,    69,    66,     0,     0,     0,     0,     0,     0,     0,
       0,    70,   368,     0,     0,     0,     0,    68,    69,     0,
       0,     0,     0,   428,     0,     0,     0,     0,    70,   371,
      68,    69,     0,     0,     0,     0,     0,    20,     0,     0,
       0,    70,     0,     0,     0,     0,     0,    68,    69,     0,
       0,   203,   204,   205,   206,   207,   208,   249,    70,   209,
     210,   211,   212,   213,   214,   215,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   304,     0,   101,
     102,   103,   104,   105,   106,   107,     0,   157,     0,     0,
       0,    95,    96,    97,    98,    99,   100,    20,     0,   101,
     102,   103,   104,   105,   106,   107,     0,   305,     0,     0,
       0,   203,   204,   205,   206,   207,   208,    20,     0,   209,
     210,   211,   212,   213,   214,   215,     0,     0,     0,     0,
       0,    95,    96,    97,    98,    99,   100,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   203,   204,   205,   206,
     207,   208,     0,     0,   209,   210,   211,   212,   213,   214,
     215,     0,     0,   236,    95,    96,    97,    98,    99,   100,
       0,     0,   101,   102,   103,   104,   105,   106,   107,     0,
       0,   380,   203,   204,   205,   206,   207,   208,     0,     0,
     209,   210,   211,   212,   213,   214,   215,     0,     0,   441,
      95,    96,    97,    98,    99,   100,     0,     0,   101,   102,
     103,   104,   105,   106,   107,     0,   157,   203,   204,   205,
     206,   207,   208,     0,     0,   209,   210,   211,   212,   213,
     214,   215,     0,   330,    95,    96,    97,    98,    99,   100,
       0,     0,   101,   102,   103,   104,   105,   106,   107,     0,
     330,    95,    96,    97,    98,    99,   100,     0,     0,   101,
     102,   103,   104,   105,   106,   107,   203,   204,   205,   206,
     207,   208,     0,     0,   209,   210,   211,   212,   213,   214,
     215,    96,    97,    98,    99,   100,     0,     0,   101,   102,
     103,   104,   105,   106,   107,    98,    99,   100,     0,     0,
     101,   102,   103,   104,   105,   106,   107,    99,   100,     0,
       0,   101,   102,   103,   104,   105,   106,   107
};

static const yytype_int16 yycheck[] =
{
      13,    14,    67,   114,   236,   228,   229,   230,   356,   232,
      23,    14,    12,    88,   115,   116,    86,   118,    21,    17,
      12,    14,    35,   246,    89,    66,    35,    14,    21,    39,
      39,    12,    52,    39,   385,    48,    49,    17,   389,    39,
      53,    17,     3,     4,     5,     6,    38,     3,     4,     5,
       6,    12,    39,    14,    15,    16,    12,    18,    19,   282,
      21,    22,    72,    61,    20,    78,    72,    80,    71,    30,
     111,    84,    33,     3,     4,     5,     6,   152,    71,   149,
     303,    61,    12,   184,    18,    61,   434,    39,    23,    39,
      69,    39,    12,    72,    24,   196,    57,    58,    32,    39,
       0,    57,    58,    12,    39,    39,   119,    68,    12,    14,
      71,   124,    68,   126,   346,   128,    52,    69,   219,   132,
      72,   134,    72,   136,    72,   473,   227,    57,    58,    69,
      39,    14,    72,    14,    39,    39,    13,    45,    68,    14,
      14,    71,    27,    25,    14,    72,    14,    74,   380,    14,
      14,    28,    18,    39,   377,   378,    39,    39,    39,    67,
      68,    69,    70,    12,    39,    39,    32,   180,   181,    39,
     271,    39,   185,   186,    39,    39,   287,   288,   350,   280,
     352,    89,   283,     8,     9,    10,    11,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      14,    39,   110,    27,   217,    14,     0,   115,   116,    23,
     118,    26,    27,   121,    23,     9,    12,    12,     3,     4,
       5,     6,    68,   236,   237,   238,   239,    12,    68,   242,
     243,    12,    68,    12,    49,    50,    51,    52,   251,   252,
      61,    62,    63,    64,    65,    66,    67,    27,   349,    27,
       3,     4,     5,     6,    39,   268,   269,    27,    17,    69,
     122,    12,    68,    28,    69,    12,   367,   368,    23,   370,
     371,    69,    57,    58,    12,    68,   184,    12,    69,   187,
     188,    67,   383,    68,    69,   193,    68,    17,   196,   390,
      17,    17,    12,    70,    28,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,    69,    28,
      13,   219,    17,    69,   327,   328,    39,    28,    13,   227,
      69,    61,    61,    12,    61,   233,    71,   428,   236,   430,
      61,     3,     4,     5,     6,     3,     4,     5,     6,    61,
      12,    28,    28,    13,    12,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   220,    69,
      39,   223,    39,   271,    68,     3,     4,     5,     6,    18,
      18,    39,   280,   438,    12,   283,    68,    17,   391,   392,
     393,   289,   244,   245,   138,    57,    58,    37,    13,    57,
      58,    28,    28,   147,    28,    13,    68,    69,    28,    19,
      68,    39,     3,     4,     5,     6,    69,    19,    22,    22,
      28,    12,   425,   426,    15,    16,    25,    12,    19,    57,
      58,    39,   435,   285,   286,   333,    28,    73,    28,   337,
      68,    49,    50,    51,    52,   189,   190,    61,   346,   452,
     453,   349,   455,   456,    61,   458,    19,    70,    19,    19,
      19,    19,    19,     9,    33,    38,    57,    58,    77,   367,
     368,   323,   370,   371,    56,    56,   300,    68,   376,   114,
     483,   379,   380,   295,    52,   383,   348,    -1,   111,    -1,
     234,   235,   390,    -1,    -1,   347,   348,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    22,    13,    14,
      -1,    -1,   266,    -1,    -1,    30,    -1,    -1,    33,    -1,
     428,    -1,   430,    28,    -1,    -1,     3,     4,     5,     6,
     438,   439,   440,    -1,    39,    12,    -1,   291,    -1,   293,
      -1,    -1,    57,    58,    49,    50,    51,    52,    -1,     3,
       4,     5,     6,    68,    -1,   417,    71,    -1,    12,    -1,
     422,    15,    16,    -1,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    13,    14,    -1,    -1,    30,    -1,    -1,    33,
      57,    58,    -1,   445,    -1,    39,   448,    28,    -1,   451,
      -1,    68,   454,    -1,    -1,   457,    -1,    -1,    39,   461,
     462,    -1,    -1,    57,    58,   467,   468,    -1,    49,    50,
      51,    52,    -1,   475,    68,    -1,    -1,   479,   480,   481,
     482,    -1,   484,    -1,    -1,    -1,   488,    -1,    -1,    -1,
     384,    -1,    -1,    -1,   388,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,   419,    33,    -1,    -1,    -1,
     424,    -1,    39,   427,    -1,   429,    -1,   431,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,   441,   442,    12,
      57,    58,    -1,    -1,    -1,   449,   450,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,   469,   470,   471,   472,    12,
     474,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,   486,    -1,    57,    58,    29,    30,    -1,    -1,
      33,     3,     4,     5,     6,    68,    39,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    57,    58,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    68,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    -1,    18,    19,    57,    58,    22,    -1,    -1,
       3,     4,     5,     6,    -1,    30,    68,    -1,    33,    12,
      -1,    14,    15,    16,    39,    18,    19,    -1,    -1,    22,
      -1,    -1,     3,     4,     5,     6,    29,    30,    -1,    -1,
      33,    12,    57,    58,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    68,    -1,    -1,    12,    -1,    14,    15,
      16,    -1,    18,    19,    57,    58,    22,    -1,    39,     3,
       4,     5,     6,    -1,    30,    68,    -1,    33,    12,    -1,
      14,    15,    16,    39,    18,    19,    57,    58,    22,    -1,
      -1,     3,     4,     5,     6,    -1,    30,    68,    -1,    33,
      12,    57,    58,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    -1,    68,     3,     4,     5,     6,    -1,    30,    31,
      -1,    33,    12,    57,    58,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,    -1,    57,    58,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    68,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    18,    19,    57,    58,    22,
       3,     4,     5,     6,    -1,    -1,    -1,    30,    68,    12,
      33,    14,    15,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    57,    58,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    68,    12,    -1,    14,    15,
      16,    -1,    18,    19,    57,    58,    22,     3,     4,     5,
       6,    -1,    -1,    -1,    30,    68,    12,    33,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      -1,    57,    58,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    68,    12,    -1,    14,    15,    16,    -1,    18,
      19,    57,    58,    22,     3,     4,     5,     6,    -1,    -1,
      -1,    30,    68,    12,    33,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    57,    58,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    68,
      12,    -1,    14,    15,    16,    -1,    18,    19,    57,    58,
      22,     3,     4,     5,     6,    -1,    -1,    -1,    30,    68,
      12,    33,    -1,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    34,    -1,    -1,    57,    58,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    68,    12,    -1,    -1,
      15,    16,    -1,    18,    19,    57,    58,    22,     3,     4,
       5,     6,    -1,    -1,    -1,    30,    68,    12,    33,    34,
      15,    16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    34,
      -1,    -1,    57,    58,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    68,    12,    -1,    -1,    15,    16,    -1,
      18,    19,    57,    58,    22,     3,     4,     5,     6,    -1,
      -1,    -1,    30,    68,    12,    33,    -1,    15,    16,    -1,
      -1,    19,    -1,    -1,    -1,     3,     4,     5,     6,     3,
       4,     5,     6,    -1,    12,    -1,    -1,    -1,    12,    57,
      58,    39,    20,    -1,    -1,     3,     4,     5,     6,    -1,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    57,
      58,    39,    -1,    -1,    -1,    39,     3,     4,     5,     6,
      68,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    57,
      58,    39,    -1,    57,    58,    -1,     3,     4,     5,     6,
      68,    -1,    -1,    -1,    68,    12,    -1,    -1,    -1,    57,
      58,    -1,    39,     3,     4,     5,     6,    -1,    -1,    -1,
      68,    -1,    12,    -1,    -1,    -1,     3,     4,     5,     6,
      57,    58,    39,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    68,    -1,     3,     4,     5,     6,    -1,    -1,    39,
      57,    58,    12,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    68,    39,    -1,    -1,    12,    -1,    57,    58,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    68,    39,
      57,    58,    12,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    68,    39,    -1,    -1,    12,    -1,    57,    58,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    68,    39,
      57,    58,    12,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    68,    39,    -1,    -1,    12,    -1,    57,    58,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    68,    39,
      57,    58,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    39,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    68,    39,
      57,    58,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    53,    54,    55,    56,    57,    58,    39,    68,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    39,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    39,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    39,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    70,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      -1,    70,    53,    54,    55,    56,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    70,
      53,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    53,    54,    55,
      56,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    53,    54,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    53,    54,    55,    56,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    53,    54,    55,    56,
      57,    58,    -1,    -1,    61,    62,    63,    64,    65,    66,
      67,    54,    55,    56,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    56,    57,    58,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    49,    50,    51,    52,    76,    77,    78,
      79,    80,    99,    12,    12,    52,    52,     0,    79,    27,
      39,    94,    94,    12,    39,    13,    14,    28,    81,    82,
      83,    84,    99,    94,    12,    27,    12,    14,    94,    13,
      28,    14,    81,    68,    94,    68,   116,   117,   118,    27,
      82,    12,    12,    27,    14,    12,    39,    85,    86,    87,
      88,    89,     3,     4,     5,     6,    12,    39,    57,    58,
      68,    69,   112,   115,   119,    94,    94,    68,   118,    94,
      27,    17,    86,    87,    69,    39,    72,    39,    72,    68,
     117,   119,   112,   112,   112,    53,    54,    55,    56,    57,
      58,    61,    62,    63,    64,    65,    66,    67,    39,    69,
      72,    12,    14,    15,    16,    18,    19,    22,    29,    30,
      33,    68,    90,    91,    92,    93,    95,    96,   100,   101,
     103,   104,   105,   108,   109,   112,   113,    85,    94,    94,
       8,     9,    10,    11,   114,    39,    39,    94,    12,    39,
      88,    12,    39,    89,   119,    39,    69,    69,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,    69,   112,   116,    28,    12,    97,    98,    97,    98,
     112,   113,   112,   113,    23,   112,   113,    18,    32,    94,
     102,    12,    38,    39,   112,    14,    29,    91,    94,    94,
      94,    94,    94,    53,    54,    55,    56,    57,    58,    61,
      62,    63,    64,    65,    66,    67,    94,    69,    14,    29,
      90,    68,    14,    90,    88,    89,    69,    68,    17,    17,
      17,    61,    17,    61,    94,    94,    70,    70,   112,   113,
      94,    94,   112,   112,    90,    90,    17,    12,   112,    39,
      28,   112,   113,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    94,    28,   112,   113,
      14,    29,    69,    13,    14,   112,   113,   114,   114,   114,
      39,   114,    20,    39,   112,    90,    90,    15,    16,    19,
      92,    94,   112,    94,    94,    94,    14,    14,    94,    94,
      31,    31,   114,    17,    39,    69,    69,    94,    94,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,    14,    90,    94,    94,    28,   112,   113,    13,
      69,    69,    61,    61,    61,   112,   113,    61,   114,   113,
      14,    14,    12,    98,    98,   112,    71,    90,    90,    23,
     110,   111,   110,    28,    28,   102,    61,   114,    69,    14,
      14,    13,    14,    14,    14,    94,    94,    39,    39,   112,
      39,    39,   112,    68,    18,    18,    68,    17,    17,    61,
      70,    92,    14,    21,    71,   106,   107,    14,    71,   106,
      24,    71,   112,   113,    14,   111,    14,   115,    37,    28,
      28,    13,    28,    28,    14,    14,   113,   113,   113,   113,
      69,   112,   114,   114,    19,   112,   113,    90,    14,    71,
     107,    19,    90,    14,    71,   112,   113,    94,    25,    94,
      25,    94,    22,    22,    25,    12,    28,    28,    73,    61,
      61,    70,    70,    14,    19,    90,    14,    19,    90,    94,
      94,    90,   112,   113,    90,   112,   113,    90,   115,    94,
     119,    90,    90,    19,    14,    19,    14,    90,    90,    94,
      94,    94,    94,    35,    94,    90,    74,    19,    19,    90,
      90,    90,    90,   115,    90,    34,    94,    34,    90,    34
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    88,    88,
      89,    90,    90,    91,    91,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    98,    98,    99,    99,    99,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   115,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     6,
       7,     7,     8,     1,     3,     1,     1,     6,     9,     9,
       7,    10,    10,     7,    10,    10,     8,    11,    11,     8,
       9,     9,    10,     0,     1,     3,     2,     2,     1,     3,
       2,     2,     1,     3,     4,     1,     3,     4,     3,     5,
       1,     1,     2,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     1,     2,     7,     7,
       7,     7,     5,     5,     6,     6,     4,     4,     2,    10,
       4,     4,     1,     1,     1,     1,     1,     2,     2,     6,
       6,     4,     5,     3,     3,    11,    13,    10,     7,     7,
       9,     9,     8,     8,    10,    10,     1,     2,     4,     4,
       4,     6,     7,     7,     1,     2,     4,     4,     5,     5,
       6,     6,     6,     6,     4,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     4,     3,     2,     1,     1,     1,     3
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
#line 231 "parser.y"
                         {(yyval.programItemList) = root = (yyvsp[0].programItemList);}
#line 2088 "parser.tab.c"
    break;

  case 3: /* program_items_list: %empty  */
#line 234 "parser.y"
                    {(yyval.programItemList) = 0;}
#line 2094 "parser.tab.c"
    break;

  case 4: /* program_items_list: program_items_list_not_empty  */
#line 235 "parser.y"
                                                {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty));}
#line 2100 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_item  */
#line 238 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); }
#line 2106 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 239 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); }
#line 2112 "parser.tab.c"
    break;

  case 7: /* program_item: module  */
#line 242 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0);}
#line 2118 "parser.tab.c"
    break;

  case 8: /* program_item: IMPORTS IDENTIFIER stmt_ends  */
#line 243 "parser.y"
                                             {(yyval.programItem) =  createProgramItem(0,(yyvsp[-1].id_var_name));}
#line 2124 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE stmt_ends  */
#line 247 "parser.y"
                                                         {(yyval.module) = createModule((yyvsp[-4].id_var_name),0);}
#line 2130 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends  */
#line 248 "parser.y"
                                                                               {(yyval.module) = createModule((yyvsp[-5].id_var_name),(yyvsp[-3].functionOrSubList));}
#line 2136 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE stmt_ends  */
#line 249 "parser.y"
                                                                {(yyval.module) = createModule((yyvsp[-4].id_var_name),0);}
#line 2142 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE stmt_ends  */
#line 250 "parser.y"
                                                                                      {(yyval.module) = createModule((yyvsp[-5].id_var_name),(yyvsp[-3].functionOrSubList));}
#line 2148 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 254 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub));}
#line 2154 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list stmt_ends function_or_sub  */
#line 255 "parser.y"
                                                                       {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-2].functionOrSubList),(yyvsp[0].functionOrSub));}
#line 2160 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 258 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function));}
#line 2166 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 259 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0);}
#line 2172 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION  */
#line 262 "parser.y"
                                                               {(yyval.function) = createFunction((yyvsp[-4].id_var_name),(yyvsp[-3].expressionList),0,0);}
#line 2178 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION  */
#line 263 "parser.y"
                                                                                                {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2184 "parser.tab.c"
    break;

  case 19: /* function: FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION  */
#line 264 "parser.y"
                                                                                               {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2190 "parser.tab.c"
    break;

  case 20: /* function: FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION  */
#line 265 "parser.y"
                                                                         {(yyval.function) = createFunction((yyvsp[-5].id_var_name),(yyvsp[-4].expressionList),(yyvsp[-2].stmtList),0);}
#line 2196 "parser.tab.c"
    break;

  case 21: /* function: FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION  */
#line 266 "parser.y"
                                                                                                          {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2202 "parser.tab.c"
    break;

  case 22: /* function: FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION  */
#line 267 "parser.y"
                                                                                                         {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2208 "parser.tab.c"
    break;

  case 23: /* function: access FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION  */
#line 268 "parser.y"
                                                                      {(yyval.function) = createFunction((yyvsp[-4].id_var_name),(yyvsp[-3].expressionList),0,0);}
#line 2214 "parser.tab.c"
    break;

  case 24: /* function: access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION  */
#line 269 "parser.y"
                                                                                                       {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2220 "parser.tab.c"
    break;

  case 25: /* function: access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION  */
#line 270 "parser.y"
                                                                                                      {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2226 "parser.tab.c"
    break;

  case 26: /* function: access FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION  */
#line 271 "parser.y"
                                                                                {(yyval.function) = createFunction((yyvsp[-5].id_var_name),(yyvsp[-4].expressionList),(yyvsp[-2].stmtList),0);}
#line 2232 "parser.tab.c"
    break;

  case 27: /* function: access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION  */
#line 272 "parser.y"
                                                                                                                 {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2238 "parser.tab.c"
    break;

  case 28: /* function: access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION  */
#line 273 "parser.y"
                                                                                                                {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2244 "parser.tab.c"
    break;

  case 29: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB  */
#line 277 "parser.y"
                                                                          {(yyval.subBloc) = createSubBloc((yyvsp[-6].id_var_name),(yyvsp[-4].parameterListOrEmpty),0);}
#line 2250 "parser.tab.c"
    break;

  case 30: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB  */
#line 278 "parser.y"
                                                                                    {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),(yyvsp[-2].stmtList));}
#line 2256 "parser.tab.c"
    break;

  case 31: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB  */
#line 279 "parser.y"
                                                                               {(yyval.subBloc) = createSubBloc((yyvsp[-6].id_var_name),(yyvsp[-4].parameterListOrEmpty),0);}
#line 2262 "parser.tab.c"
    break;

  case 32: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB  */
#line 280 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),(yyvsp[-2].stmtList));}
#line 2268 "parser.tab.c"
    break;

  case 33: /* parameterlist_or_empty: %empty  */
#line 283 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2274 "parser.tab.c"
    break;

  case 34: /* parameterlist_or_empty: parameterlist_with_type  */
#line 284 "parser.y"
                                                {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2280 "parser.tab.c"
    break;

  case 35: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type END_OF_LINE  */
#line 285 "parser.y"
                                                                        {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2286 "parser.tab.c"
    break;

  case 36: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type  */
#line 286 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2292 "parser.tab.c"
    break;

  case 37: /* parameterlist_or_empty: parameterlist_with_type END_OF_LINE  */
#line 287 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2298 "parser.tab.c"
    break;

  case 38: /* parameterlist_or_empty: parameterlist_without_type  */
#line 288 "parser.y"
                                                   {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2304 "parser.tab.c"
    break;

  case 39: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type END_OF_LINE  */
#line 289 "parser.y"
                                                                           {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2310 "parser.tab.c"
    break;

  case 40: /* parameterlist_or_empty: parameterlist_without_type END_OF_LINE  */
#line 290 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2316 "parser.tab.c"
    break;

  case 41: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type  */
#line 291 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2322 "parser.tab.c"
    break;

  case 42: /* parameterlist_with_type: parameter_with_type  */
#line 294 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2328 "parser.tab.c"
    break;

  case 43: /* parameterlist_with_type: parameterlist_with_type ',' parameter_with_type  */
#line 295 "parser.y"
                                                                         {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-2].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2334 "parser.tab.c"
    break;

  case 44: /* parameterlist_with_type: parameterlist_with_type ',' END_OF_LINE parameter_with_type  */
#line 296 "parser.y"
                                                                                     {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2340 "parser.tab.c"
    break;

  case 45: /* parameterlist_without_type: parameter_without_type  */
#line 300 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2346 "parser.tab.c"
    break;

  case 46: /* parameterlist_without_type: parameterlist_without_type ',' parameter_without_type  */
#line 301 "parser.y"
                                                                                  {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-2].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2352 "parser.tab.c"
    break;

  case 47: /* parameterlist_without_type: parameterlist_without_type ',' END_OF_LINE parameter_without_type  */
#line 302 "parser.y"
                                                                                              {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2358 "parser.tab.c"
    break;

  case 48: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 306 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2364 "parser.tab.c"
    break;

  case 49: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 307 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2370 "parser.tab.c"
    break;

  case 50: /* parameter_without_type: IDENTIFIER  */
#line 311 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2376 "parser.tab.c"
    break;

  case 51: /* stmt_list: stmt  */
#line 317 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); }
#line 2382 "parser.tab.c"
    break;

  case 52: /* stmt_list: stmt_list stmt  */
#line 318 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); }
#line 2388 "parser.tab.c"
    break;

  case 53: /* stmt: multi_line_stmt  */
#line 322 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)});}
#line 2394 "parser.tab.c"
    break;

  case 54: /* stmt: single_line_stmt stmt_ends  */
#line 323 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)});}
#line 2400 "parser.tab.c"
    break;

  case 55: /* single_line_stmt: if_stmt_single_line  */
#line 327 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)});}
#line 2406 "parser.tab.c"
    break;

  case 56: /* single_line_stmt: decl_stmt_single_line  */
#line 328 "parser.y"
                                                        {(yyval.statementSingle) = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmtSingle)});}
#line 2412 "parser.tab.c"
    break;

  case 57: /* single_line_stmt: expr_singleline  */
#line 329 "parser.y"
                                                  {(yyval.statementSingle) = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=(yyvsp[0].expression)});}
#line 2418 "parser.tab.c"
    break;

  case 58: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 332 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)});}
#line 2424 "parser.tab.c"
    break;

  case 59: /* multi_line_stmt: decl_stmt stmt_ends  */
#line 333 "parser.y"
                                     {(yyval.statementMulti) = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=(yyvsp[-1].declStmtMulti)});}
#line 2430 "parser.tab.c"
    break;

  case 60: /* multi_line_stmt: expr_multiline stmt_ends  */
#line 334 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=(yyvsp[-1].expression)});}
#line 2436 "parser.tab.c"
    break;

  case 61: /* multi_line_stmt: while_stmt stmt_ends  */
#line 335 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)});}
#line 2442 "parser.tab.c"
    break;

  case 62: /* multi_line_stmt: do_loop_stmt  */
#line 336 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)});}
#line 2448 "parser.tab.c"
    break;

  case 63: /* multi_line_stmt: for_loop_stmt  */
#line 337 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)});}
#line 2454 "parser.tab.c"
    break;

  case 64: /* multi_line_stmt: for_each_loop_stmt  */
#line 338 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)});}
#line 2460 "parser.tab.c"
    break;

  case 65: /* multi_line_stmt: select_stmt stmt_ends  */
#line 339 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)});}
#line 2466 "parser.tab.c"
    break;

  case 66: /* stmt_ends: END_OF_LINE  */
#line 344 "parser.y"
                       { }
#line 2472 "parser.tab.c"
    break;

  case 67: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 345 "parser.y"
                            { }
#line 2478 "parser.tab.c"
    break;

  case 68: /* decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 351 "parser.y"
                                                                          {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2484 "parser.tab.c"
    break;

  case 69: /* decl_stmt: CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 352 "parser.y"
                                                                                     {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2490 "parser.tab.c"
    break;

  case 70: /* decl_stmt: DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 353 "parser.y"
                                                                        {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2496 "parser.tab.c"
    break;

  case 71: /* decl_stmt: DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 354 "parser.y"
                                                                                   {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2502 "parser.tab.c"
    break;

  case 72: /* decl_stmt: DIM var_name '=' END_OF_LINE expr_multiline  */
#line 355 "parser.y"
                                                       {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameMulti), 0, (yyvsp[0].expression));}
#line 2508 "parser.tab.c"
    break;

  case 73: /* decl_stmt: DIM var_name_singleline '=' END_OF_LINE expr_multiline  */
#line 356 "parser.y"
                                                                  {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameSingle), 0, (yyvsp[0].expression));}
#line 2514 "parser.tab.c"
    break;

  case 74: /* decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline  */
#line 360 "parser.y"
                                                                                      {(yyval.declStmtSingle) = createDeclStmtSingle(1, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression));}
#line 2520 "parser.tab.c"
    break;

  case 75: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal '=' expr_singleline  */
#line 361 "parser.y"
                                                                                                        {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression));}
#line 2526 "parser.tab.c"
    break;

  case 76: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal  */
#line 362 "parser.y"
                                                                                    {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), (yyvsp[0].vt), 0);}
#line 2532 "parser.tab.c"
    break;

  case 77: /* decl_stmt_single_line: DIM var_name_singleline '=' expr_singleline  */
#line 363 "parser.y"
                                                                                       {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), 0, (yyvsp[0].expression));}
#line 2538 "parser.tab.c"
    break;

  case 78: /* decl_stmt_single_line: DIM var_name_singleline  */
#line 364 "parser.y"
                                                                   {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[0].varNameSingle), 0, 0);}
#line 2544 "parser.tab.c"
    break;

  case 79: /* decl_stmt_single_line: DIM var_name_singleline '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 365 "parser.y"
                                                                                             {}
#line 2550 "parser.tab.c"
    break;

  case 80: /* var_name: IDENTIFIER '(' expr_multiline ')'  */
#line 369 "parser.y"
                                           {(yyval.varNameMulti) = createVarNameMulti((yyvsp[-3].id_var_name), (yyvsp[-1].expression));}
#line 2556 "parser.tab.c"
    break;

  case 81: /* var_name_singleline: IDENTIFIER '(' expr_singleline ')'  */
#line 372 "parser.y"
                                                       {(yyval.varNameSingle) = createVarNameSingle((yyvsp[-3].id_var_name), (yyvsp[-1].expression));}
#line 2562 "parser.tab.c"
    break;

  case 82: /* var_name_singleline: IDENTIFIER  */
#line 373 "parser.y"
                     {(yyval.varNameSingle) = createVarNameSingle((yyvsp[0].id_var_name), 0);}
#line 2568 "parser.tab.c"
    break;

  case 89: /* while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE  */
#line 388 "parser.y"
                                                               {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2574 "parser.tab.c"
    break;

  case 90: /* while_stmt: WHILE expr_singleline stmt_ends stmt_list END WHILE  */
#line 389 "parser.y"
                                                                {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2580 "parser.tab.c"
    break;

  case 91: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP  */
#line 394 "parser.y"
                                                  {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-2].doLoopCondition), (yyvsp[-1].stmtList));}
#line 2586 "parser.tab.c"
    break;

  case 92: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 395 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));}
#line 2592 "parser.tab.c"
    break;

  case 93: /* do_loop_condition: UNTIL expr_singleline stmt_ends  */
#line 398 "parser.y"
                                                   {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression));}
#line 2598 "parser.tab.c"
    break;

  case 94: /* do_loop_condition: WHILE expr_singleline stmt_ends  */
#line 399 "parser.y"
                                                                   {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression));}
#line 2604 "parser.tab.c"
    break;

  case 95: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT  */
#line 404 "parser.y"
                                                                                                                       {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-9].id_var_name), (yyvsp[-7].vt), (yyvsp[-5].expression), (yyvsp[-3].expression), 0, (yyvsp[-1].stmtList));}
#line 2610 "parser.tab.c"
    break;

  case 96: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT  */
#line 405 "parser.y"
                                                                                                                                                            {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-11].id_var_name), (yyvsp[-9].vt), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].stmtList));}
#line 2616 "parser.tab.c"
    break;

  case 97: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT  */
#line 410 "parser.y"
                                                                                                {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-7].id_var_name), (yyvsp[-5].vt), (yyvsp[-3].id_var_name), (yyvsp[-1].stmtList));}
#line 2622 "parser.tab.c"
    break;

  case 98: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF  */
#line 415 "parser.y"
                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0);}
#line 2628 "parser.tab.c"
    break;

  case 99: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list END IF  */
#line 416 "parser.y"
                                                                       {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0);}
#line 2634 "parser.tab.c"
    break;

  case 100: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_list END IF  */
#line 417 "parser.y"
                                                                                                     {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-7].expression), (yyvsp[-4].stmtList), 0, (yyvsp[-2].stmtList));}
#line 2640 "parser.tab.c"
    break;

  case 101: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_list END IF  */
#line 418 "parser.y"
                                                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-7].expression), (yyvsp[-4].stmtList), 0, (yyvsp[-2].stmtList));}
#line 2646 "parser.tab.c"
    break;

  case 102: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF  */
#line 419 "parser.y"
                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0);}
#line 2652 "parser.tab.c"
    break;

  case 103: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF  */
#line 420 "parser.y"
                                                                                   {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0);}
#line 2658 "parser.tab.c"
    break;

  case 104: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF  */
#line 421 "parser.y"
                                                                                                                 {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), (yyvsp[-4].elseIfList), (yyvsp[-2].stmtList));}
#line 2664 "parser.tab.c"
    break;

  case 105: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF  */
#line 422 "parser.y"
                                                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), (yyvsp[-4].elseIfList), (yyvsp[-2].stmtList));}
#line 2670 "parser.tab.c"
    break;

  case 106: /* elseif_list: elseif  */
#line 425 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf));}
#line 2676 "parser.tab.c"
    break;

  case 107: /* elseif_list: elseif_list elseif  */
#line 426 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf));}
#line 2682 "parser.tab.c"
    break;

  case 108: /* elseif: ELSEIF expr_multiline THEN stmt_list  */
#line 429 "parser.y"
                                             {(yyval.elseIf) = createElseIf((yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2688 "parser.tab.c"
    break;

  case 109: /* elseif: ELSEIF expr_singleline THEN stmt_list  */
#line 430 "parser.y"
                                              {(yyval.elseIf) = createElseIf((yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2694 "parser.tab.c"
    break;

  case 110: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt  */
#line 432 "parser.y"
                                                               {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0);}
#line 2700 "parser.tab.c"
    break;

  case 111: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  */
#line 433 "parser.y"
                                                                                     {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle));}
#line 2706 "parser.tab.c"
    break;

  case 112: /* select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT  */
#line 438 "parser.y"
                                                                        {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2712 "parser.tab.c"
    break;

  case 113: /* select_stmt: SELECT CASE expr_multiline stmt_ends case_list END SELECT  */
#line 439 "parser.y"
                                                                       {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2718 "parser.tab.c"
    break;

  case 114: /* case_list: case_stmt  */
#line 442 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt));}
#line 2724 "parser.tab.c"
    break;

  case 115: /* case_list: case_list case_stmt  */
#line 443 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt));}
#line 2730 "parser.tab.c"
    break;

  case 116: /* case_stmt: CASE expr_multiline stmt_ends stmt_list  */
#line 446 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2736 "parser.tab.c"
    break;

  case 117: /* case_stmt: CASE expr_singleline stmt_ends stmt_list  */
#line 447 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2742 "parser.tab.c"
    break;

  case 118: /* case_stmt: CASE IS expr_multiline stmt_ends stmt_list  */
#line 448 "parser.y"
                                                     {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2748 "parser.tab.c"
    break;

  case 119: /* case_stmt: CASE IS expr_singleline stmt_ends stmt_list  */
#line 449 "parser.y"
                                                      {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2754 "parser.tab.c"
    break;

  case 120: /* case_stmt: CASE expr_multiline TO expr_multiline stmt_ends stmt_list  */
#line 450 "parser.y"
                                                                    {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2760 "parser.tab.c"
    break;

  case 121: /* case_stmt: CASE expr_multiline TO expr_singleline stmt_ends stmt_list  */
#line 451 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2766 "parser.tab.c"
    break;

  case 122: /* case_stmt: CASE expr_singleline TO expr_multiline stmt_ends stmt_list  */
#line 452 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2772 "parser.tab.c"
    break;

  case 123: /* case_stmt: CASE expr_singleline TO expr_singleline stmt_ends stmt_list  */
#line 453 "parser.y"
                                                                      {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2778 "parser.tab.c"
    break;

  case 124: /* case_stmt: CASE ELSE stmt_ends stmt_list  */
#line 454 "parser.y"
                                        {(yyval.caseStmt) = createCaseStmt(0, 0, 0, (yyvsp[0].stmtList));}
#line 2784 "parser.tab.c"
    break;

  case 125: /* expr_singleline: basic_literal_value  */
#line 460 "parser.y"
                                     {(yyval.expression) = (yyvsp[0].expression);}
#line 2790 "parser.tab.c"
    break;

  case 126: /* expr_singleline: '-' expr_singleline  */
#line 461 "parser.y"
                                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression));}
#line 2796 "parser.tab.c"
    break;

  case 127: /* expr_singleline: '+' expr_singleline  */
#line 462 "parser.y"
                                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression));}
#line 2802 "parser.tab.c"
    break;

  case 128: /* expr_singleline: expr_singleline '+' expr_singleline  */
#line 463 "parser.y"
                                          {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2808 "parser.tab.c"
    break;

  case 129: /* expr_singleline: expr_singleline '-' expr_singleline  */
#line 464 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2814 "parser.tab.c"
    break;

  case 130: /* expr_singleline: expr_singleline '*' expr_singleline  */
#line 465 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2820 "parser.tab.c"
    break;

  case 131: /* expr_singleline: expr_singleline '/' expr_singleline  */
#line 466 "parser.y"
                                          {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2826 "parser.tab.c"
    break;

  case 132: /* expr_singleline: expr_singleline INT_DIV expr_singleline  */
#line 467 "parser.y"
                                              {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2832 "parser.tab.c"
    break;

  case 133: /* expr_singleline: expr_singleline '=' expr_singleline  */
#line 468 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2838 "parser.tab.c"
    break;

  case 134: /* expr_singleline: expr_singleline '<' expr_singleline  */
#line 469 "parser.y"
                                          {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2844 "parser.tab.c"
    break;

  case 135: /* expr_singleline: expr_singleline '>' expr_singleline  */
#line 470 "parser.y"
                                          {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2850 "parser.tab.c"
    break;

  case 136: /* expr_singleline: expr_singleline '^' expr_singleline  */
#line 471 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2856 "parser.tab.c"
    break;

  case 137: /* expr_singleline: expr_singleline NOT_EQUAL expr_singleline  */
#line 472 "parser.y"
                                                {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2862 "parser.tab.c"
    break;

  case 138: /* expr_singleline: expr_singleline LESS_OR_EQUAL expr_singleline  */
#line 473 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2868 "parser.tab.c"
    break;

  case 139: /* expr_singleline: expr_singleline MORE_OR_EQUAL expr_singleline  */
#line 474 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2874 "parser.tab.c"
    break;

  case 140: /* expr_singleline: expr_singleline '&' expr_singleline  */
#line 475 "parser.y"
                                          {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2880 "parser.tab.c"
    break;

  case 141: /* expr_singleline: '(' expr_singleline ')'  */
#line 476 "parser.y"
                              {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression));}
#line 2886 "parser.tab.c"
    break;

  case 142: /* expr_singleline: IDENTIFIER  */
#line 477 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)});}
#line 2892 "parser.tab.c"
    break;

  case 143: /* expr_singleline: IDENTIFIER arguments_singleline  */
#line 478 "parser.y"
                                      {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList));}
#line 2898 "parser.tab.c"
    break;

  case 144: /* expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline  */
#line 481 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2904 "parser.tab.c"
    break;

  case 145: /* expr_multiline: expr_singleline '-' END_OF_LINE expr_singleline  */
#line 482 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2910 "parser.tab.c"
    break;

  case 146: /* expr_multiline: expr_singleline '*' END_OF_LINE expr_singleline  */
#line 483 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2916 "parser.tab.c"
    break;

  case 147: /* expr_multiline: expr_singleline '/' END_OF_LINE expr_singleline  */
#line 484 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2922 "parser.tab.c"
    break;

  case 148: /* expr_multiline: expr_singleline INT_DIV END_OF_LINE expr_singleline  */
#line 485 "parser.y"
                                                                    {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2928 "parser.tab.c"
    break;

  case 149: /* expr_multiline: expr_singleline '=' END_OF_LINE expr_singleline  */
#line 486 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2934 "parser.tab.c"
    break;

  case 150: /* expr_multiline: expr_singleline '<' END_OF_LINE expr_singleline  */
#line 487 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2940 "parser.tab.c"
    break;

  case 151: /* expr_multiline: expr_singleline '>' END_OF_LINE expr_singleline  */
#line 488 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2946 "parser.tab.c"
    break;

  case 152: /* expr_multiline: expr_singleline '^' END_OF_LINE expr_singleline  */
#line 489 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2952 "parser.tab.c"
    break;

  case 153: /* expr_multiline: expr_singleline NOT_EQUAL END_OF_LINE expr_singleline  */
#line 490 "parser.y"
                                                                      {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2958 "parser.tab.c"
    break;

  case 154: /* expr_multiline: expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline  */
#line 491 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2964 "parser.tab.c"
    break;

  case 155: /* expr_multiline: expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline  */
#line 492 "parser.y"
                                                                          {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2970 "parser.tab.c"
    break;

  case 156: /* expr_multiline: expr_singleline '&' END_OF_LINE expr_singleline  */
#line 493 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2976 "parser.tab.c"
    break;

  case 157: /* expr_multiline: '(' END_OF_LINE expr_singleline ')'  */
#line 494 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression));}
#line 2982 "parser.tab.c"
    break;

  case 158: /* expr_multiline: '(' END_OF_LINE expr_singleline END_OF_LINE ')'  */
#line 495 "parser.y"
                                                                {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 2988 "parser.tab.c"
    break;

  case 159: /* expr_multiline: '(' expr_singleline END_OF_LINE ')'  */
#line 496 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 2994 "parser.tab.c"
    break;

  case 160: /* expr_multiline: IDENTIFIER arguments_multiline  */
#line 497 "parser.y"
                                               {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList));}
#line 3000 "parser.tab.c"
    break;

  case 161: /* basic_literal: INT  */
#line 501 "parser.y"
                   {(yyval.vt) = VT_INTEGER;}
#line 3006 "parser.tab.c"
    break;

  case 162: /* basic_literal: STRING  */
#line 502 "parser.y"
                     {(yyval.vt) = VT_STRING;}
#line 3012 "parser.tab.c"
    break;

  case 163: /* basic_literal: BOOLEAN  */
#line 503 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN;}
#line 3018 "parser.tab.c"
    break;

  case 164: /* basic_literal: DOUBLE  */
#line 504 "parser.y"
                     {(yyval.vt) = VT_DOUBLE;}
#line 3024 "parser.tab.c"
    break;

  case 165: /* basic_literal_value: INT_VALUE  */
#line 507 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)});}
#line 3030 "parser.tab.c"
    break;

  case 166: /* basic_literal_value: STRING_VALUE  */
#line 508 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)});}
#line 3036 "parser.tab.c"
    break;

  case 167: /* basic_literal_value: BOOLEAN_VALUE  */
#line 509 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)});}
#line 3042 "parser.tab.c"
    break;

  case 168: /* basic_literal_value: DOUBLE_VALUE  */
#line 510 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)});}
#line 3048 "parser.tab.c"
    break;

  case 169: /* arguments_multiline: '(' END_OF_LINE expr_list ')'  */
#line 515 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3054 "parser.tab.c"
    break;

  case 170: /* arguments_multiline: '(' END_OF_LINE expr_list END_OF_LINE ')'  */
#line 516 "parser.y"
                                                               {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3060 "parser.tab.c"
    break;

  case 171: /* arguments_multiline: '(' expr_list END_OF_LINE ')'  */
#line 517 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3066 "parser.tab.c"
    break;

  case 172: /* arguments_singleline: '(' expr_list ')'  */
#line 521 "parser.y"
                                        {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3072 "parser.tab.c"
    break;

  case 173: /* arguments_singleline: '(' ')'  */
#line 522 "parser.y"
                              {(yyval.expressionList) = 0;}
#line 3078 "parser.tab.c"
    break;

  case 174: /* arguments: arguments_multiline  */
#line 525 "parser.y"
                               {(yyval.expressionList) = (yyvsp[0].expressionList);}
#line 3084 "parser.tab.c"
    break;

  case 175: /* arguments: arguments_singleline  */
#line 526 "parser.y"
                                {(yyval.expressionList) = (yyvsp[0].expressionList);}
#line 3090 "parser.tab.c"
    break;

  case 176: /* expr_list: expr_singleline  */
#line 530 "parser.y"
                           {(yyval.expressionList) = createExpressionList((yyvsp[0].expression));}
#line 3096 "parser.tab.c"
    break;

  case 177: /* expr_list: expr_list ',' expr_singleline  */
#line 531 "parser.y"
                                         {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression));}
#line 3102 "parser.tab.c"
    break;


#line 3106 "parser.tab.c"

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

#line 535 "parser.y"



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

Function *createFunction(char* id_var_name, ExpressionList *arguments, StmtList *stmtList, Expression *expression)
{
	Function *result = (Function *)malloc(sizeof(Function));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;
	result->expression = expression;

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
