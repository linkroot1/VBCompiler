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
  YYSYMBOL_decl_stmt = 104,                /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 105,    /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 106,                 /* var_name  */
  YYSYMBOL_var_name_singleline = 107,      /* var_name_singleline  */
  YYSYMBOL_access = 108,                   /* access  */
  YYSYMBOL_while_stmt = 109,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 110,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 111,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 112,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 113,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 114,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 115,              /* elseif_list  */
  YYSYMBOL_elseif = 116,                   /* elseif  */
  YYSYMBOL_if_stmt_single_line = 117,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 118,              /* select_stmt  */
  YYSYMBOL_case_list = 119,                /* case_list  */
  YYSYMBOL_case_stmt = 120,                /* case_stmt  */
  YYSYMBOL_expr_singleline = 121,          /* expr_singleline  */
  YYSYMBOL_expr_multiline = 122,           /* expr_multiline  */
  YYSYMBOL_basic_literal = 123,            /* basic_literal  */
  YYSYMBOL_basic_literal_value = 124,      /* basic_literal_value  */
  YYSYMBOL_arguments_multiline = 125,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 126,     /* arguments_singleline  */
  YYSYMBOL_expr_list = 127                 /* expr_list  */
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
#define YYLAST   2385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  510

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
       0,   251,   251,   254,   257,   258,   261,   262,   263,   267,
     268,   269,   270,   274,   275,   278,   279,   282,   283,   284,
     285,   289,   290,   291,   292,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   306,   307,   308,   312,   313,   314,
     318,   319,   320,   321,   325,   331,   332,   336,   337,   341,
     342,   343,   344,   347,   348,   349,   350,   351,   352,   353,
     354,   357,   360,   361,   367,   368,   369,   370,   371,   372,
     376,   377,   378,   379,   380,   381,   385,   388,   389,   393,
     394,   395,   396,   397,   398,   404,   405,   410,   411,   414,
     415,   420,   421,   426,   431,   432,   433,   434,   435,   436,
     437,   438,   441,   442,   445,   446,   448,   449,   454,   455,
     456,   457,   460,   461,   464,   465,   466,   467,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   529,
     530,   531,   532,   535,   536,   537,   538,   543,   544,   545,
     549,   550,   554,   555
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
  "decl_stmt", "decl_stmt_single_line", "var_name", "var_name_singleline",
  "access", "while_stmt", "do_loop_stmt", "do_loop_condition",
  "for_loop_stmt", "for_each_loop_stmt", "if_stmt_multi_line",
  "elseif_list", "elseif", "if_stmt_single_line", "select_stmt",
  "case_list", "case_stmt", "expr_singleline", "expr_multiline",
  "basic_literal", "basic_literal_value", "arguments_multiline",
  "arguments_singleline", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-378)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,    53,    72,  -378,    64,    86,  -378,  -378,   111,  -378,
      95,  -378,  -378,   122,  -378,    96,  -378,  -378,  -378,  -378,
     143,  -378,   316,    96,   187,   185,   197,  -378,   126,  -378,
    -378,  -378,    85,   880,   140,  -378,   145,   192,  -378,   216,
     226,   218,   501,    20,    20,  -378,   167,   170,  -378,   220,
     239,     4,   246,   188,   -29,   -28,  -378,  -378,   193,    20,
      20,  -378,   253,   -22,   -19,   242,    96,  -378,    33,  -378,
      25,    96,   195,   196,  -378,  -378,  -378,  -378,   206,  -378,
    -378,   253,   441,   239,    29,  -378,  -378,   272,  -378,   691,
      96,    96,   209,   223,  -378,  -378,  -378,  -378,   229,   279,
     282,   282,   671,   671,   273,  1829,    56,    59,  1829,  1829,
    1829,   275,   885,  -378,    96,  -378,  -378,    96,  -378,    96,
    -378,  -378,  -378,    96,  -378,    96,  2188,    96,  -378,  -378,
    -378,   278,   921,   805,   845,  -378,   234,    75,  -378,  -378,
      96,   243,   298,   301,    34,    41,  2118,    96,  1848,   241,
     671,   247,  1829,  2214,  1829,  1829,   952,  1372,   305,   324,
    2284,   262,   262,  1829,  1950,   327,  -378,   302,   302,   302,
     302,   302,   401,   779,  1432,  1452,  1472,  1492,  1512,  1532,
    1552,  1572,  1592,  1612,  1632,  1652,  1672,  1692,  1712,  1732,
    1752,  1772,   302,    96,   317,   333,   996,   320,  1018,  -378,
    1829,  -378,  2214,   -33,   302,   671,   253,   253,   253,   311,
     253,   730,   952,   952,  1394,    96,  2118,    96,   304,  2022,
    1829,  1829,  1829,  1829,  1829,  1829,  1829,  1829,  1829,  1829,
    1829,  1829,  1829,  1829,  1829,  1829,  1829,  1829,  1829,  1829,
    2166,  2166,  1040,  1062,   253,   336,  1998,   280,  -378,    96,
    1829,  1926,  1829,  2236,  1829,  2262,  1829,  2284,  1829,  2310,
    1829,    94,  1829,    94,  1829,    94,  1829,    94,  1829,    94,
    1829,   136,  1829,   136,  1829,   512,  1829,   182,  1829,   182,
    1829,   162,  1829,   152,  1829,   262,  1829,   262,  1829,  -378,
     302,    96,    96,   343,    96,   330,   -21,   286,  -378,  1829,
    2046,   287,   312,   315,   318,   671,   326,   253,   671,  2214,
    1084,  1106,   350,   350,  1829,   288,   952,  2214,   952,    11,
      11,   118,   302,   302,    83,    96,   331,   253,   314,  -378,
    -378,   302,  2214,  2214,  2214,  2214,  2214,  2214,  2214,  2214,
    2214,  2214,  2214,  2214,  2214,  2214,  2214,  2214,  2214,  2214,
    2214,  2214,   302,   302,    96,   302,    96,   319,  -378,  -378,
    2214,  -378,  -378,   353,  1792,   356,  2188,  -378,  1812,   299,
    -378,   379,   381,   325,   383,    45,  1875,  1412,     9,   168,
     521,   127,  -378,   134,  -378,   302,   285,   371,  -378,   302,
     302,  -378,   671,   671,  2214,   671,   671,  2214,   332,  -378,
    -378,  1829,   253,   253,   624,  1412,  -378,   391,   671,    96,
       8,  -378,   392,    96,    12,   671,  2118,    96,   390,   236,
    -378,   395,   271,   389,   406,  -378,  -378,  -378,  -378,   341,
    2070,   365,   366,  -378,  1902,   345,   952,   408,    96,  -378,
    -378,   952,   410,    96,  2118,    96,   952,   952,  -378,    96,
    -378,    96,   285,    96,  1829,  1829,  1829,    96,    96,  1128,
    -378,   952,  1150,  -378,   952,   952,   952,  1372,  1372,   952,
     952,     1,   952,   106,   952,   952,   412,  1172,   413,  1194,
    1372,  1372,  1216,  1238,   285,   952,  1260,  -378,  1372,  1372,
    -378,   414,  -378,   417,   415,   416,    96,  1304,    96,  -378,
    -378,  -378,  -378,   952,    96,   302,  1336,   302,    96,   302
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,    82,    80,    79,    81,     0,     2,
       3,     4,     6,     0,     7,     0,    84,    83,     1,     5,
       0,    62,     0,     0,     0,     0,     0,    63,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,    14,     0,
       0,     0,     0,    25,    25,    10,     0,     0,    11,     0,
      44,     0,     0,     0,    26,    30,    34,    37,     0,    25,
      25,    12,     0,    28,    33,     0,     0,    29,     0,    32,
       0,     0,     0,     0,   169,   172,   170,   171,    40,    27,
      31,     0,     0,     0,     0,    35,    44,     0,    38,     0,
       0,     0,     0,    42,   173,   176,   174,   175,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,    47,    52,     0,    50,     0,
      57,    58,    59,     0,    49,     0,    51,     0,   118,    36,
      39,     0,     0,     0,     0,    41,     0,     0,   161,   136,
       0,    78,     0,     0,     0,    74,     0,     0,     0,     0,
       0,   135,     0,    61,     0,     0,     0,     0,     0,     0,
     140,   120,   119,     0,     0,     0,    46,    48,    54,    56,
      53,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,    43,
       0,   181,   182,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,   141,     0,   139,     0,   138,     0,   137,     0,   126,
       0,   130,     0,   131,     0,   132,     0,   128,     0,   127,
       0,   143,     0,   144,     0,   133,     0,   121,     0,   122,
       0,   142,     0,   125,     0,   123,     0,   124,     0,   129,
      17,     0,     0,     0,     0,     0,     0,     0,   180,     0,
       0,     0,     0,     0,     0,     0,    72,     0,     0,    73,
       0,     0,     0,     0,     0,   106,     0,    51,     0,     0,
       0,     0,    90,    89,     0,     0,     0,     0,     0,   158,
     160,    22,   165,   164,   163,   162,   150,   154,   155,   156,
     152,   151,   167,   168,   157,   145,   146,   166,   149,   147,
     148,   153,    18,    23,     0,    19,     0,     0,   177,   179,
     183,    77,    76,     0,     0,     0,     0,    68,     0,     0,
      69,     0,     0,    78,     0,    74,     0,     0,     0,     0,
       0,     0,   112,     0,    88,    87,     0,     0,   159,    24,
      20,   178,     0,     0,    70,     0,     0,    71,     0,    86,
      85,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,    64,    65,    66,    67,     0,
       0,     0,    72,    95,     0,     0,     0,     0,     0,   103,
      94,     0,     0,     0,     0,     0,     0,     0,   108,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,    98,     0,     0,     0,   115,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   116,     0,     0,     0,     0,     0,    75,   105,   104,
      97,     0,    96,     0,     0,     0,     0,     0,     0,   101,
     100,   110,   111,     0,     0,    93,     0,    91,     0,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,  -378,  -378,   429,  -378,   409,    78,  -378,  -378,
      68,   398,   399,    69,   -35,   -87,    24,  -209,  -378,  -378,
     -23,  -378,  -378,   340,   -98,   108,  -378,  -378,   119,  -378,
    -378,  -378,    73,  -305,  -378,  -378,   131,  -202,   385,   -95,
     -77,  -377,  -378,  -378,  -199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    12,    28,    29,    30,    31,
      53,    54,    55,    56,    57,   112,   113,   114,   115,   116,
      22,   117,   118,   142,   143,    32,   119,   120,   157,   121,
     122,   123,   410,   411,   124,   125,   381,   382,   126,   127,
      78,   128,   138,   139,   203
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   296,   132,   145,    93,   315,   297,   147,   149,   423,
      67,    69,    94,    95,    96,    97,    50,    79,   357,   321,
      80,    98,   437,   407,   100,   101,   442,   102,   103,   408,
     408,   104,    50,   408,   380,    88,   484,    86,   105,   106,
      21,    83,   107,    82,   298,    83,   196,   198,    89,   299,
      27,   208,   130,    68,    70,   217,   358,    52,   210,    51,
      68,   299,   403,    70,    87,    14,   108,   133,   134,   242,
     243,   158,    84,    52,   154,   471,   109,   110,    94,    95,
      96,    97,    52,   156,    15,   111,    52,   151,   155,   438,
     409,   167,   209,   443,   168,    21,   169,   159,    39,   211,
     170,   154,   171,   404,   192,   439,    38,   496,    13,   439,
     301,    18,    58,    40,   200,   155,    16,   204,    13,   220,
      38,     1,     2,   212,   213,   310,   311,    72,    73,   302,
     303,   304,   108,   306,     3,    21,   166,    85,    17,    24,
      37,   418,   109,   110,     4,     5,     6,     7,   421,    20,
     419,   152,   201,   129,    26,    23,   166,   422,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   326,   406,   239,
     290,    94,    95,    96,    97,     4,     5,     6,     7,   420,
      98,   420,   412,   100,   101,   487,   102,   103,   299,   408,
     104,   316,   318,   319,   320,   298,   315,   105,   106,    34,
     299,   107,   232,   233,   234,   235,   236,   237,   238,    36,
     367,   239,    35,   370,   374,   375,    43,   322,   323,    45,
     166,    44,   166,   237,   238,   108,   331,   239,    46,   378,
     369,   379,   236,   237,   238,   109,   110,   239,    47,    94,
      95,    96,    97,    59,   111,    48,    60,    61,    98,   413,
     387,   235,   236,   237,   238,   473,    62,   239,    65,    81,
     415,    74,    75,    76,    77,    66,   166,   166,   352,   353,
      71,   355,    90,    91,    94,    95,    96,    97,    94,    95,
      96,    97,    92,    98,    86,   417,   135,   151,    94,    95,
      96,    97,   140,   108,   141,   415,   150,   425,   426,   136,
     427,   428,   385,   109,   110,   137,   193,    94,    95,    96,
      97,   199,   111,   435,   163,   206,   151,   449,   207,   205,
     445,   215,   244,   218,   417,   431,   432,   417,   108,    24,
      25,   389,   108,   390,   166,   166,   245,   239,   109,   110,
     249,    27,   109,   110,    26,   291,   292,   111,   294,   459,
     305,   152,   451,   327,   462,    27,   354,   330,   356,   467,
     468,   108,   373,   359,   362,     4,     5,     6,     7,   377,
     363,   109,   110,   364,   477,   398,   365,   479,   480,   481,
     152,   201,   482,   483,   368,   486,   436,   488,   489,   386,
     441,   388,   392,   446,   447,   395,   391,   399,   497,   400,
     402,   401,   166,   166,    94,    95,    96,    97,   424,   429,
     433,   440,   448,   151,   452,   461,   506,   450,   453,   454,
     464,   465,   466,   455,   456,   458,   469,   460,   470,   463,
     472,   490,   492,   499,   474,   475,   500,   501,   502,    19,
     250,   144,    42,   384,    94,    95,    96,    97,   485,    63,
      64,   383,   414,    98,     0,    99,   100,   101,   108,   102,
     103,     0,     0,   104,     0,     0,     0,     0,   109,   110,
     105,   106,     0,   503,   107,   505,     0,   152,     0,     0,
      27,   507,     0,   166,     0,   509,   166,   146,   148,     0,
     153,   166,   166,   160,   161,   162,   164,     0,   108,     0,
       0,   166,     0,   166,   166,   166,   166,   166,   109,   110,
     166,     0,   166,   166,    24,    49,     0,   111,     0,     0,
       0,   166,   202,     0,    94,    95,    96,    97,     0,    26,
     166,     0,     0,    98,     0,   216,     0,   219,     0,   240,
     241,     0,     0,     0,     0,   415,     0,     0,   246,     0,
       4,     5,     6,     7,     0,     0,     0,   251,   253,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   273,   275,
     277,   279,   281,   283,   285,   287,   289,     0,   108,   233,
     234,   235,   236,   237,   238,   202,     0,   239,   109,   110,
     300,     0,     0,     0,     0,     0,   309,   111,     0,   317,
       0,     0,     0,   202,     0,   251,   253,   255,   257,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,     0,     0,    94,    95,    96,
      97,     0,     0,     0,     0,   332,   151,   333,     0,   334,
       0,   335,     0,   336,   307,   337,     0,   338,     0,   339,
       0,   340,     0,   341,     0,   342,     0,   343,     0,   344,
       0,   345,     0,   346,     0,   347,     0,   348,     0,   349,
       0,   350,     0,   351,    94,    95,    96,    97,     0,     0,
       0,   108,     0,    98,   360,     0,     0,     0,     0,     0,
     366,   109,   110,   366,    94,    95,    96,    97,     0,   376,
     152,     0,     0,    98,     0,   131,   100,   101,     0,   102,
     103,     0,     0,   104,     0,     0,     0,     0,     0,     0,
     105,   106,     0,     0,   107,     0,     0,     0,   108,     0,
      27,     0,     0,    94,    95,    96,    97,     0,   109,   110,
       0,     0,   151,     0,     0,     0,     0,   111,   108,   394,
     307,     0,     0,   397,     0,     0,     0,     0,   109,   110,
       0,     0,   317,     0,     0,   416,     0,   111,     0,   308,
       0,     0,     0,     0,     0,     0,     0,   366,   366,     0,
     366,   366,    94,    95,    96,    97,   430,   108,     0,   309,
     317,   151,     0,   434,     0,     0,     0,   109,   110,     0,
     444,     0,     0,     0,   416,     0,   152,   416,    94,    95,
      96,    97,     0,     0,     0,     0,     0,    98,   252,   195,
     100,   101,     0,   102,   103,     0,     0,   104,     0,     0,
       0,     0,     0,     0,   105,   106,   108,     0,   107,   202,
     394,   397,     0,     0,    27,     0,   109,   110,    94,    95,
      96,    97,     0,     0,     0,   152,     0,    98,     0,   197,
     100,   101,   108,   102,   103,     0,     0,   104,     0,     0,
       0,     0,   109,   110,   105,   106,     0,     0,   107,     0,
       0,   111,     0,     0,    27,     0,     0,     0,    94,    95,
      96,    97,     0,    24,    41,     0,     0,    98,     0,   165,
     100,   101,   108,   102,   103,     0,     0,   104,    26,     0,
       0,     0,   109,   110,   105,   106,     0,     0,   107,    27,
       0,   111,     0,     0,    94,    95,    96,    97,     0,     4,
       5,     6,     7,    98,     0,   194,   100,   101,     0,   102,
     103,     0,   108,   104,     0,     0,     0,     0,     0,     0,
     105,   106,   109,   110,   107,    94,    95,    96,    97,     0,
       0,   111,     0,     0,    98,     0,     0,   100,   101,     0,
     102,   103,     0,     0,   104,     0,     0,     0,   108,     0,
       0,   105,   106,     0,     0,   107,     0,     0,   109,   110,
       0,    27,     0,     0,     0,     0,     0,   111,     0,    94,
      95,    96,    97,     0,     0,     0,     0,     0,    98,   108,
     293,   100,   101,     0,   102,   103,     0,     0,   104,   109,
     110,    94,    95,    96,    97,   105,   106,     0,   111,   107,
      98,     0,   295,   100,   101,     0,   102,   103,     0,     0,
     104,     0,     0,    94,    95,    96,    97,   105,   106,     0,
       0,   107,    98,   108,     0,   100,   101,     0,   102,   103,
       0,     0,   104,   109,   110,    94,    95,    96,    97,   105,
     106,   324,   111,   107,    98,   108,     0,   100,   101,     0,
     102,   103,     0,     0,   104,   109,   110,    94,    95,    96,
      97,   105,   106,   325,   111,   107,    98,   108,   371,   100,
     101,     0,   102,   103,     0,     0,   104,   109,   110,    94,
      95,    96,    97,   105,   106,     0,   111,   107,    98,   108,
     372,   100,   101,     0,   102,   103,     0,     0,   104,   109,
     110,    94,    95,    96,    97,   105,   106,     0,   111,   107,
      98,   108,   476,   100,   101,     0,   102,   103,     0,     0,
     104,   109,   110,    94,    95,    96,    97,   105,   106,     0,
     111,   107,    98,   108,   478,   100,   101,     0,   102,   103,
       0,     0,   104,   109,   110,    94,    95,    96,    97,   105,
     106,     0,   111,   107,    98,   108,   491,   100,   101,     0,
     102,   103,     0,     0,   104,   109,   110,    94,    95,    96,
      97,   105,   106,     0,   111,   107,    98,   108,   493,   100,
     101,     0,   102,   103,     0,     0,   104,   109,   110,    94,
      95,    96,    97,   105,   106,     0,   111,   107,    98,   108,
     494,   100,   101,     0,   102,   103,     0,     0,   104,   109,
     110,    94,    95,    96,    97,   105,   106,     0,   111,   107,
      98,   108,   495,   100,   101,     0,   102,   103,     0,     0,
     104,   109,   110,    94,    95,    96,    97,   105,   106,     0,
     111,   107,    98,   108,     0,   100,   101,     0,   102,   103,
       0,     0,   104,   109,   110,     0,     0,     0,     0,   105,
     106,     0,   111,   107,   498,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,    94,    95,    96,
      97,     0,     0,     0,   111,     0,    98,   108,     0,   100,
     101,     0,   102,   103,     0,     0,   104,   109,   110,     0,
       0,     0,     0,   105,   106,     0,   111,   107,   504,    94,
      95,    96,    97,     0,     0,     0,     0,     0,    98,     0,
       0,   100,   101,     0,   102,   103,     0,     0,   104,     0,
       0,   108,     0,     0,     0,   105,   106,     0,     0,   107,
     508,   109,   110,     0,     0,    94,    95,    96,    97,     0,
     111,     0,     0,     0,    98,     0,     0,   100,   101,     0,
     102,   103,     0,   108,   104,     0,     0,    94,    95,    96,
      97,   105,   106,   109,   110,   107,   151,     0,     0,   312,
     313,     0,   111,   314,     0,    94,    95,    96,    97,     0,
       0,     0,     0,   105,   151,     0,     0,   312,   313,   108,
       0,   314,     0,    21,     0,    94,    95,    96,    97,   109,
     110,   105,     0,     0,   151,     0,     0,     0,   111,     0,
       0,   108,     0,     0,     0,    94,    95,    96,    97,     0,
       0,   109,   110,     0,   151,     0,     0,     0,     0,   108,
     152,   254,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   256,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   258,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   260,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   262,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   264,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   266,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   268,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   270,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   272,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   274,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   276,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   278,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   280,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   282,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   284,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   286,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   288,     0,     0,     0,    94,    95,    96,    97,   109,
     110,     0,     0,     0,   151,     0,     0,     0,   152,   108,
       0,   393,    94,    95,    96,    97,     0,     0,     0,   109,
     110,   151,     0,     0,     0,     0,     0,     0,   152,   108,
       0,   396,     0,     0,     0,     0,     0,     0,     0,   109,
     110,     0,     0,     0,     0,     0,     0,     0,   152,   108,
       0,     0,     0,   172,     0,     0,     0,     0,     0,   109,
     110,     0,     0,     0,     0,     0,   108,     0,   152,     0,
       0,     0,     0,     0,     0,     0,   109,   110,     0,     0,
     220,     0,   173,   174,   175,   152,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     0,     0,   191,     0,     0,     0,   172,   214,   221,
     222,   223,     0,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,     0,     0,
     239,     0,     0,     0,     0,   405,   173,   174,   175,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   220,     0,   191,     0,     0,
       0,     0,   457,     0,     0,     0,     0,     0,     0,   247,
     230,   231,   232,   233,   234,   235,   236,   237,   238,     0,
       0,   239,     0,     0,   221,   222,   223,     0,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   220,     0,   239,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,     0,     0,
       0,     0,   221,   222,   223,     0,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   172,     0,   239,     0,   329,   221,   222,   223,     0,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   220,     0,   239,     0,   248,
     173,   174,   175,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     0,
       0,   191,     0,   361,   221,   222,   223,     0,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   172,     0,   239,     0,   361,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   220,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,     0,     0,     0,     0,
     221,   222,   223,     0,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   220,
       0,   239,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   220,     0,   191,     0,     0,     0,     0,   221,   222,
     223,     0,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   220,     0,   239,
       0,   222,   223,     0,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   220,
       0,   239,     0,     0,     0,     0,     0,     0,   223,     0,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   220,     0,   239,     0,     0,
       0,     0,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,     0,     0,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,     0,     0,   239
};

static const yytype_int16 yycheck[] =
{
      23,   200,    89,   101,    81,   214,    39,   102,   103,   386,
      39,    39,     3,     4,     5,     6,    12,    39,    39,   218,
      39,    12,    14,    14,    15,    16,    14,    18,    19,    21,
      21,    22,    12,    21,    23,    70,    35,    12,    29,    30,
      39,    12,    33,    66,    77,    12,   133,   134,    71,    82,
      39,    17,    87,    82,    82,   150,    77,    53,    17,    39,
      82,    82,    17,    82,    39,    12,    57,    90,    91,   156,
     157,    12,    39,    53,    18,   452,    67,    68,     3,     4,
       5,     6,    53,   106,    12,    76,    53,    12,    32,    81,
      81,   114,    58,    81,   117,    39,   119,    38,    13,    58,
     123,    18,   125,    58,   127,   410,    28,   484,     0,   414,
     205,     0,    44,    28,    39,    32,    52,   140,    10,    25,
      42,    26,    27,   146,   147,   212,   213,    59,    60,   206,
     207,   208,    57,   210,    39,    39,   112,    68,    52,    13,
      14,    14,    67,    68,    49,    50,    51,    52,    14,    27,
      23,    76,    77,    84,    28,    12,   132,    23,    64,    65,
      66,    67,    68,    69,    70,    71,    72,   244,   377,    75,
     193,     3,     4,     5,     6,    49,    50,    51,    52,   381,
      12,   383,    14,    15,    16,    79,    18,    19,    82,    21,
      22,   214,   215,   216,   217,    77,   405,    29,    30,    12,
      82,    33,    66,    67,    68,    69,    70,    71,    72,    12,
     305,    75,    27,   308,   312,   313,    76,   240,   241,    27,
     196,    76,   198,    71,    72,    57,   249,    75,    12,   316,
     307,   318,    70,    71,    72,    67,    68,    75,    12,     3,
       4,     5,     6,    76,    76,    27,    76,    27,    12,    81,
     327,    69,    70,    71,    72,   454,    17,    75,    12,    17,
      24,     8,     9,    10,    11,    77,   242,   243,   291,   292,
      77,   294,    77,    77,     3,     4,     5,     6,     3,     4,
       5,     6,    76,    12,    12,   380,    77,    12,     3,     4,
       5,     6,    13,    57,    12,    24,    23,   392,   393,    76,
     395,   396,   325,    67,    68,    76,    28,     3,     4,     5,
       6,    77,    76,   408,    39,    17,    12,    81,    17,    76,
     415,    80,    17,    76,   419,   402,   403,   422,    57,    13,
      14,   354,    57,   356,   310,   311,    12,    75,    67,    68,
      13,    39,    67,    68,    28,    28,    13,    76,    28,   436,
      39,    76,    81,    17,   441,    39,    13,    77,    28,   446,
     447,    57,    12,    77,    77,    49,    50,    51,    52,    81,
      58,    67,    68,    58,   461,    76,    58,   464,   465,   466,
      76,    77,   469,   470,    58,   472,   409,   474,   475,    58,
     413,    77,    39,   416,   417,    39,    77,    18,   485,    18,
      17,    76,   378,   379,     3,     4,     5,     6,    37,    77,
      19,    19,    22,    12,    25,   438,   503,    22,    12,    78,
     443,   444,   445,    58,    58,    80,   449,    19,   451,    19,
     453,    19,    19,    19,   457,   458,    19,    22,    22,    10,
      39,   101,    33,   324,     3,     4,     5,     6,   471,    51,
      51,   320,   379,    12,    -1,    14,    15,    16,    57,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    67,    68,
      29,    30,    -1,   496,    33,   498,    -1,    76,    -1,    -1,
      39,   504,    -1,   459,    -1,   508,   462,   102,   103,    -1,
     105,   467,   468,   108,   109,   110,   111,    -1,    57,    -1,
      -1,   477,    -1,   479,   480,   481,   482,   483,    67,    68,
     486,    -1,   488,   489,    13,    14,    -1,    76,    -1,    -1,
      -1,   497,   137,    -1,     3,     4,     5,     6,    -1,    28,
     506,    -1,    -1,    12,    -1,   150,    -1,   152,    -1,   154,
     155,    -1,    -1,    -1,    -1,    24,    -1,    -1,   163,    -1,
      49,    50,    51,    52,    -1,    -1,    -1,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    57,    67,
      68,    69,    70,    71,    72,   200,    -1,    75,    67,    68,
     205,    -1,    -1,    -1,    -1,    -1,   211,    76,    -1,   214,
      -1,    -1,    -1,   218,    -1,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,   250,    12,   252,    -1,   254,
      -1,   256,    -1,   258,    20,   260,    -1,   262,    -1,   264,
      -1,   266,    -1,   268,    -1,   270,    -1,   272,    -1,   274,
      -1,   276,    -1,   278,    -1,   280,    -1,   282,    -1,   284,
      -1,   286,    -1,   288,     3,     4,     5,     6,    -1,    -1,
      -1,    57,    -1,    12,   299,    -1,    -1,    -1,    -1,    -1,
     305,    67,    68,   308,     3,     4,     5,     6,    -1,   314,
      76,    -1,    -1,    12,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    33,    -1,    -1,    -1,    57,    -1,
      39,    -1,    -1,     3,     4,     5,     6,    -1,    67,    68,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    76,    57,   364,
      20,    -1,    -1,   368,    -1,    -1,    -1,    -1,    67,    68,
      -1,    -1,   377,    -1,    -1,   380,    -1,    76,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,   393,    -1,
     395,   396,     3,     4,     5,     6,   401,    57,    -1,   404,
     405,    12,    -1,   408,    -1,    -1,    -1,    67,    68,    -1,
     415,    -1,    -1,    -1,   419,    -1,    76,   422,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    12,    39,    14,
      15,    16,    -1,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    57,    -1,    33,   454,
     455,   456,    -1,    -1,    39,    -1,    67,    68,     3,     4,
       5,     6,    -1,    -1,    -1,    76,    -1,    12,    -1,    14,
      15,    16,    57,    18,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    67,    68,    29,    30,    -1,    -1,    33,    -1,
      -1,    76,    -1,    -1,    39,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    13,    14,    -1,    -1,    12,    -1,    14,
      15,    16,    57,    18,    19,    -1,    -1,    22,    28,    -1,
      -1,    -1,    67,    68,    29,    30,    -1,    -1,    33,    39,
      -1,    76,    -1,    -1,     3,     4,     5,     6,    -1,    49,
      50,    51,    52,    12,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    57,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    67,    68,    33,     3,     4,     5,     6,    -1,
      -1,    76,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      18,    19,    -1,    -1,    22,    -1,    -1,    -1,    57,    -1,
      -1,    29,    30,    -1,    -1,    33,    -1,    -1,    67,    68,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    76,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    57,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    22,    67,
      68,     3,     4,     5,     6,    29,    30,    -1,    76,    33,
      12,    -1,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    -1,    -1,     3,     4,     5,     6,    29,    30,    -1,
      -1,    33,    12,    57,    -1,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    67,    68,     3,     4,     5,     6,    29,
      30,    31,    76,    33,    12,    57,    -1,    15,    16,    -1,
      18,    19,    -1,    -1,    22,    67,    68,     3,     4,     5,
       6,    29,    30,    31,    76,    33,    12,    57,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    67,    68,     3,
       4,     5,     6,    29,    30,    -1,    76,    33,    12,    57,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    22,    67,
      68,     3,     4,     5,     6,    29,    30,    -1,    76,    33,
      12,    57,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    67,    68,     3,     4,     5,     6,    29,    30,    -1,
      76,    33,    12,    57,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    67,    68,     3,     4,     5,     6,    29,
      30,    -1,    76,    33,    12,    57,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    22,    67,    68,     3,     4,     5,
       6,    29,    30,    -1,    76,    33,    12,    57,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    67,    68,     3,
       4,     5,     6,    29,    30,    -1,    76,    33,    12,    57,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    22,    67,
      68,     3,     4,     5,     6,    29,    30,    -1,    76,    33,
      12,    57,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      22,    67,    68,     3,     4,     5,     6,    29,    30,    -1,
      76,    33,    12,    57,    -1,    15,    16,    -1,    18,    19,
      -1,    -1,    22,    67,    68,    -1,    -1,    -1,    -1,    29,
      30,    -1,    76,    33,    34,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,     3,     4,     5,
       6,    -1,    -1,    -1,    76,    -1,    12,    57,    -1,    15,
      16,    -1,    18,    19,    -1,    -1,    22,    67,    68,    -1,
      -1,    -1,    -1,    29,    30,    -1,    76,    33,    34,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    -1,    18,    19,    -1,    -1,    22,    -1,
      -1,    57,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,
      34,    67,    68,    -1,    -1,     3,     4,     5,     6,    -1,
      76,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,
      18,    19,    -1,    57,    22,    -1,    -1,     3,     4,     5,
       6,    29,    30,    67,    68,    33,    12,    -1,    -1,    15,
      16,    -1,    76,    19,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    29,    12,    -1,    -1,    15,    16,    57,
      -1,    19,    -1,    39,    -1,     3,     4,     5,     6,    67,
      68,    29,    -1,    -1,    12,    -1,    -1,    -1,    76,    -1,
      -1,    57,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    67,    68,    -1,    12,    -1,    -1,    -1,    -1,    57,
      76,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,     3,     4,     5,     6,    67,
      68,    -1,    -1,    -1,    12,    -1,    -1,    -1,    76,    57,
      -1,    39,     3,     4,     5,     6,    -1,    -1,    -1,    67,
      68,    12,    -1,    -1,    -1,    -1,    -1,    -1,    76,    57,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    57,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    57,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      25,    -1,    54,    55,    56,    76,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    -1,    -1,    -1,    25,    80,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    80,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    25,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      -1,    75,    -1,    -1,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    25,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    25,    -1,    75,    -1,    77,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    25,    -1,    75,    -1,    77,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      -1,    75,    -1,    77,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    25,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    25,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    25,
      -1,    75,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    25,    -1,    75,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    25,    -1,    75,
      -1,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    25,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    25,    -1,    75,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    27,    39,    49,    50,    51,    52,    84,    85,
      86,    87,    88,   108,    12,    12,    52,    52,     0,    87,
      27,    39,   103,    12,    13,    14,    28,    39,    89,    90,
      91,    92,   108,   103,    12,    27,    12,    14,    90,    13,
      28,    14,    89,    76,    76,    27,    12,    12,    27,    14,
      12,    39,    53,    93,    94,    95,    96,    97,    93,    76,
      76,    27,    17,    94,    95,    12,    77,    39,    82,    39,
      82,    77,    93,    93,     8,     9,    10,    11,   123,    39,
      39,    17,   103,    12,    39,    96,    12,    39,    97,   103,
      77,    77,    76,   123,     3,     4,     5,     6,    12,    14,
      15,    16,    18,    19,    22,    29,    30,    33,    57,    67,
      68,    76,    98,    99,   100,   101,   102,   104,   105,   109,
     110,   112,   113,   114,   117,   118,   121,   122,   124,    96,
      97,    14,    98,   103,   103,    77,    76,    76,   125,   126,
      13,    12,   106,   107,   106,   107,   121,   122,   121,   122,
      23,    12,    76,   121,    18,    32,   103,   111,    12,    38,
     121,   121,   121,    39,   121,    14,    99,   103,   103,   103,
     103,   103,    25,    54,    55,    56,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    75,   103,    28,    14,    14,    98,    14,    98,    77,
      39,    77,   121,   127,   103,    76,    17,    17,    17,    58,
      17,    58,   103,   103,    80,    80,   121,   122,    76,   121,
      25,    54,    55,    56,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    75,
     121,   121,    98,    98,    17,    12,   121,    39,    77,    13,
      39,   121,    39,   121,    39,   121,    39,   121,    39,   121,
      39,   121,    39,   121,    39,   121,    39,   121,    39,   121,
      39,   121,    39,   121,    39,   121,    39,   121,    39,   121,
      39,   121,    39,   121,    39,   121,    39,   121,    39,   121,
     103,    28,    13,    14,    28,    14,   127,    39,    77,    82,
     121,   122,   123,   123,   123,    39,   123,    20,    39,   121,
      98,    98,    15,    16,    19,   100,   103,   121,   103,   103,
     103,   127,   103,   103,    31,    31,   123,    17,    39,    77,
      77,   103,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   103,   103,    13,   103,    28,    39,    77,    77,
     121,    77,    77,    58,    58,    58,   121,   122,    58,   123,
     122,    14,    14,    12,   107,   107,   121,    81,    98,    98,
      23,   119,   120,   119,   111,   103,    58,   123,    77,   103,
     103,    77,    39,    39,   121,    39,    39,   121,    76,    18,
      18,    76,    17,    17,    58,    80,   100,    14,    21,    81,
     115,   116,    14,    81,   115,    24,   121,   122,    14,    23,
     120,    14,    23,   124,    37,   122,   122,   122,   122,    77,
     121,   123,   123,    19,   121,   122,   103,    14,    81,   116,
      19,   103,    14,    81,   121,   122,   103,   103,    22,    81,
      22,    81,    25,    12,    78,    58,    58,    80,    80,    98,
      19,   103,    98,    19,   103,   103,   103,    98,    98,   103,
     103,   124,   103,   127,   103,   103,    14,    98,    14,    98,
      98,    98,    98,    98,    35,   103,    98,    79,    98,    98,
      19,    14,    19,    14,    14,    14,   124,    98,    34,    19,
      19,    22,    22,   103,    34,   103,    98,   103,    34,   103
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    86,    86,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    97,    98,    98,    99,    99,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   107,   107,   108,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   119,   119,   120,   120,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   123,   123,   124,   124,   124,   124,   125,   125,   125,
     126,   126,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     2,     1,     5,
       6,     6,     7,     1,     2,     1,     1,     9,    10,    10,
      11,     9,    10,    10,    11,     0,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     3,     4,     1,     3,     4,
       3,     5,     4,     6,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       2,     2,     1,     2,     7,     7,     7,     7,     5,     5,
       6,     6,     4,     4,     2,    10,     4,     4,     1,     1,
       1,     1,     1,     2,     2,     6,     6,     5,     5,     3,
       3,    12,    14,    11,     7,     7,    10,    10,     8,     8,
      11,    11,     1,     2,     5,     5,     4,     6,     7,     7,
      11,    11,     1,     2,     4,     4,     5,     5,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     3,     3,     3,
       2,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       4,     2,     4,     4,     4,     4,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     4,
       3,     2,     1,     3
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
#line 251 "parser.y"
                         {(yyval.programItemList) = root = (yyvsp[0].programItemList); printf("root 1\n");}
#line 2229 "parser.tab.c"
    break;

  case 3: /* program_items_list: program_items_list_not_empty  */
#line 254 "parser.y"
                                                 {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty)); printf("program_items_list 2\n");}
#line 2235 "parser.tab.c"
    break;

  case 4: /* program_items_list_not_empty: program_item  */
#line 257 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); printf("program_items_list_not_empty 1\n");}
#line 2241 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 258 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); printf("program_items_list_not_empty 2\n");}
#line 2247 "parser.tab.c"
    break;

  case 6: /* program_item: module  */
#line 261 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0); printf("program_item 1\n");}
#line 2253 "parser.tab.c"
    break;

  case 7: /* program_item: IMPORTS IDENTIFIER  */
#line 262 "parser.y"
                                  {(yyval.programItem) =  createProgramItem(0,(yyvsp[0].id_var_name)); printf("program_item 2\n");}
#line 2259 "parser.tab.c"
    break;

  case 8: /* program_item: END_OF_LINE  */
#line 263 "parser.y"
                           {(yyval.programItem) =  createProgramItem(0,0); printf("program_item 3\n");}
#line 2265 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE  */
#line 267 "parser.y"
                                               {(yyval.module) = createModule((yyvsp[-3].id_var_name),0); printf("module 1\n");}
#line 2271 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 268 "parser.y"
                                                                     {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList)); printf("module 2\n");}
#line 2277 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE  */
#line 269 "parser.y"
                                                      {(yyval.module) = createModule((yyvsp[-3].id_var_name),0); printf("module 3\n");}
#line 2283 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 270 "parser.y"
                                                                            {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList)); printf("module 4\n");}
#line 2289 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 274 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub)); printf("functions_or_sub_list 1\n");}
#line 2295 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list function_or_sub  */
#line 275 "parser.y"
                                                             {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-1].functionOrSubList),(yyvsp[0].functionOrSub)); printf("functions_or_sub_list 2\n");}
#line 2301 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 278 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function)); printf("function_or_sub 1\n");}
#line 2307 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 279 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0); printf("function_or_sub 2\n");}
#line 2313 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 282 "parser.y"
                                                                                              {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 1\n");}
#line 2319 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 283 "parser.y"
                                                                                                        {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 4\n");}
#line 2325 "parser.tab.c"
    break;

  case 19: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END FUNCTION stmt_ends  */
#line 284 "parser.y"
                                                                                                     {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0); printf("function 7\n");}
#line 2331 "parser.tab.c"
    break;

  case 20: /* function: access FUNCTION IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END FUNCTION stmt_ends  */
#line 285 "parser.y"
                                                                                                               {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList)); printf("function 10\n");}
#line 2337 "parser.tab.c"
    break;

  case 21: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 289 "parser.y"
                                                                                    {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2343 "parser.tab.c"
    break;

  case 22: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 290 "parser.y"
                                                                                              {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2349 "parser.tab.c"
    break;

  case 23: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB stmt_ends  */
#line 291 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),0);}
#line 2355 "parser.tab.c"
    break;

  case 24: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB stmt_ends  */
#line 292 "parser.y"
                                                                                                   {(yyval.subBloc) = createSubBloc((yyvsp[-8].id_var_name),(yyvsp[-6].parameterListOrEmpty),(yyvsp[-3].stmtList));}
#line 2361 "parser.tab.c"
    break;

  case 25: /* parameterlist_or_empty: %empty  */
#line 295 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2367 "parser.tab.c"
    break;

  case 26: /* parameterlist_or_empty: parameterlist_with_type  */
#line 296 "parser.y"
                                                {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2373 "parser.tab.c"
    break;

  case 27: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type END_OF_LINE  */
#line 297 "parser.y"
                                                                        {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2379 "parser.tab.c"
    break;

  case 28: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type  */
#line 298 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[0].parameterListWithType), 0);}
#line 2385 "parser.tab.c"
    break;

  case 29: /* parameterlist_or_empty: parameterlist_with_type END_OF_LINE  */
#line 299 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListOrEmpty((yyvsp[-1].parameterListWithType), 0);}
#line 2391 "parser.tab.c"
    break;

  case 30: /* parameterlist_or_empty: parameterlist_without_type  */
#line 300 "parser.y"
                                                   {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2397 "parser.tab.c"
    break;

  case 31: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type END_OF_LINE  */
#line 301 "parser.y"
                                                                           {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2403 "parser.tab.c"
    break;

  case 32: /* parameterlist_or_empty: parameterlist_without_type END_OF_LINE  */
#line 302 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[-1].parameterListWithoutType));}
#line 2409 "parser.tab.c"
    break;

  case 33: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type  */
#line 303 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListOrEmpty(0, (yyvsp[0].parameterListWithoutType));}
#line 2415 "parser.tab.c"
    break;

  case 34: /* parameterlist_with_type: parameter_with_type  */
#line 306 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2421 "parser.tab.c"
    break;

  case 35: /* parameterlist_with_type: parameterlist_with_type ',' parameter_with_type  */
#line 307 "parser.y"
                                                                         {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-2].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2427 "parser.tab.c"
    break;

  case 36: /* parameterlist_with_type: parameterlist_with_type ',' END_OF_LINE parameter_with_type  */
#line 308 "parser.y"
                                                                                     {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2433 "parser.tab.c"
    break;

  case 37: /* parameterlist_without_type: parameter_without_type  */
#line 312 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2439 "parser.tab.c"
    break;

  case 38: /* parameterlist_without_type: parameterlist_without_type ',' parameter_without_type  */
#line 313 "parser.y"
                                                                                  {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-2].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2445 "parser.tab.c"
    break;

  case 39: /* parameterlist_without_type: parameterlist_without_type ',' END_OF_LINE parameter_without_type  */
#line 314 "parser.y"
                                                                                              {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2451 "parser.tab.c"
    break;

  case 40: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 318 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2457 "parser.tab.c"
    break;

  case 41: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 319 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2463 "parser.tab.c"
    break;

  case 42: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal  */
#line 320 "parser.y"
                                                       {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2469 "parser.tab.c"
    break;

  case 43: /* parameter_with_type: BYVAL IDENTIFIER AS basic_literal '(' ')'  */
#line 321 "parser.y"
                                                               {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2475 "parser.tab.c"
    break;

  case 44: /* parameter_without_type: IDENTIFIER  */
#line 325 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2481 "parser.tab.c"
    break;

  case 45: /* stmt_list: stmt  */
#line 331 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); printf("stmt_list 1\n");}
#line 2487 "parser.tab.c"
    break;

  case 46: /* stmt_list: stmt_list stmt  */
#line 332 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); printf("stmt_list 2\n");}
#line 2493 "parser.tab.c"
    break;

  case 47: /* stmt: multi_line_stmt  */
#line 336 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)}); printf("stmt 1\n");}
#line 2499 "parser.tab.c"
    break;

  case 48: /* stmt: single_line_stmt stmt_ends  */
#line 337 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)}); printf("stmt 2\n");}
#line 2505 "parser.tab.c"
    break;

  case 49: /* single_line_stmt: if_stmt_single_line  */
#line 341 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)}); printf("single_line_stmt 1\n");}
#line 2511 "parser.tab.c"
    break;

  case 50: /* single_line_stmt: decl_stmt_single_line  */
#line 342 "parser.y"
                                                        {(yyval.statementSingle) = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmtSingle)}); printf("single_line_stmt 2\n");}
#line 2517 "parser.tab.c"
    break;

  case 51: /* single_line_stmt: expr_singleline  */
#line 343 "parser.y"
                                                  {(yyval.statementSingle) = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=(yyvsp[0].expression)}); printf("single_line_stmt 3\n");}
#line 2523 "parser.tab.c"
    break;

  case 52: /* single_line_stmt: return_stmt  */
#line 344 "parser.y"
                                              {(yyval.statementSingle) = createStatementSingle(ST_RETURN, (StmtSingleValue){.returnStmt=(yyvsp[0].returnStmt)}); printf("single_line_stmt 4\n");}
#line 2529 "parser.tab.c"
    break;

  case 53: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 347 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)}); printf("multi_line_stmt 1\n");}
#line 2535 "parser.tab.c"
    break;

  case 54: /* multi_line_stmt: decl_stmt stmt_ends  */
#line 348 "parser.y"
                                     {(yyval.statementMulti) = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=(yyvsp[-1].declStmtMulti)}); printf("multi_line_stmt 2\n");}
#line 2541 "parser.tab.c"
    break;

  case 55: /* multi_line_stmt: expr_multiline stmt_ends  */
#line 349 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=(yyvsp[-1].expression)}); printf("multi_line_stmt 3\n");}
#line 2547 "parser.tab.c"
    break;

  case 56: /* multi_line_stmt: while_stmt stmt_ends  */
#line 350 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)}); printf("multi_line_stmt 4\n");}
#line 2553 "parser.tab.c"
    break;

  case 57: /* multi_line_stmt: do_loop_stmt  */
#line 351 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)}); printf("multi_line_stmt 5\n");}
#line 2559 "parser.tab.c"
    break;

  case 58: /* multi_line_stmt: for_loop_stmt  */
#line 352 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)}); printf("multi_line_stmt 6\n");}
#line 2565 "parser.tab.c"
    break;

  case 59: /* multi_line_stmt: for_each_loop_stmt  */
#line 353 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)}); printf("multi_line_stmt 7\n");}
#line 2571 "parser.tab.c"
    break;

  case 60: /* multi_line_stmt: select_stmt stmt_ends  */
#line 354 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)}); printf("multi_line_stmt 8\n");}
#line 2577 "parser.tab.c"
    break;

  case 61: /* return_stmt: RETURN expr_singleline  */
#line 357 "parser.y"
                                    {(yyval.returnStmt) = createReturnStmt((yyvsp[0].expression)); printf("return_stmt 1\n");}
#line 2583 "parser.tab.c"
    break;

  case 62: /* stmt_ends: END_OF_LINE  */
#line 360 "parser.y"
                       {printf("stmt_ends 1\n");}
#line 2589 "parser.tab.c"
    break;

  case 63: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 361 "parser.y"
                            {printf("stmt_ends 2\n");}
#line 2595 "parser.tab.c"
    break;

  case 64: /* decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 367 "parser.y"
                                                                          {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 1\n");}
#line 2601 "parser.tab.c"
    break;

  case 65: /* decl_stmt: CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 368 "parser.y"
                                                                                     {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 2\n");}
#line 2607 "parser.tab.c"
    break;

  case 66: /* decl_stmt: DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 369 "parser.y"
                                                                        {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 3\n");}
#line 2613 "parser.tab.c"
    break;

  case 67: /* decl_stmt: DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 370 "parser.y"
                                                                                   {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression)); printf("decl_stmt_multi 4\n");}
#line 2619 "parser.tab.c"
    break;

  case 68: /* decl_stmt: DIM var_name '=' END_OF_LINE expr_multiline  */
#line 371 "parser.y"
                                                       {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameMulti), 0, (yyvsp[0].expression)); printf("decl_stmt_multi 5\n");}
#line 2625 "parser.tab.c"
    break;

  case 69: /* decl_stmt: DIM var_name_singleline '=' END_OF_LINE expr_multiline  */
#line 372 "parser.y"
                                                                  {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameSingle), 0, (yyvsp[0].expression)); printf("decl_stmt_multi 6\n");}
#line 2631 "parser.tab.c"
    break;

  case 70: /* decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline  */
#line 376 "parser.y"
                                                                                      {(yyval.declStmtSingle) = createDeclStmtSingle(1, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression)); printf("decl_stmt_single 1\n");}
#line 2637 "parser.tab.c"
    break;

  case 71: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal '=' expr_singleline  */
#line 377 "parser.y"
                                                                                                        {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression)); printf("decl_stmt_single 2\n");}
#line 2643 "parser.tab.c"
    break;

  case 72: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal  */
#line 378 "parser.y"
                                                                                    {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), (yyvsp[0].vt), 0); printf("decl_stmt_single 3\n");}
#line 2649 "parser.tab.c"
    break;

  case 73: /* decl_stmt_single_line: DIM var_name_singleline '=' expr_singleline  */
#line 379 "parser.y"
                                                                                       {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), 0, (yyvsp[0].expression)); printf("decl_stmt_single 4\n");}
#line 2655 "parser.tab.c"
    break;

  case 74: /* decl_stmt_single_line: DIM var_name_singleline  */
#line 380 "parser.y"
                                                                   {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[0].varNameSingle), 0, 0); printf("decl_stmt_single 5\n");}
#line 2661 "parser.tab.c"
    break;

  case 75: /* decl_stmt_single_line: DIM var_name_singleline '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 381 "parser.y"
                                                                                             { printf("decl_stmt_single 6 (bad) \n");}
#line 2667 "parser.tab.c"
    break;

  case 76: /* var_name: IDENTIFIER '(' expr_multiline ')'  */
#line 385 "parser.y"
                                           {(yyval.varNameMulti) = createVarNameMulti((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name_multi 1\n");}
#line 2673 "parser.tab.c"
    break;

  case 77: /* var_name_singleline: IDENTIFIER '(' expr_singleline ')'  */
#line 388 "parser.y"
                                                       {(yyval.varNameSingle) = createVarNameSingle((yyvsp[-3].id_var_name), (yyvsp[-1].expression)); printf("var_name_single 1\n");}
#line 2679 "parser.tab.c"
    break;

  case 78: /* var_name_singleline: IDENTIFIER  */
#line 389 "parser.y"
                                                {(yyval.varNameSingle) = createVarNameSingle((yyvsp[0].id_var_name), 0); printf("var_name_single 1\n");}
#line 2685 "parser.tab.c"
    break;

  case 85: /* while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE  */
#line 404 "parser.y"
                                                               {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2691 "parser.tab.c"
    break;

  case 86: /* while_stmt: WHILE expr_singleline stmt_ends stmt_list END WHILE  */
#line 405 "parser.y"
                                                                {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2697 "parser.tab.c"
    break;

  case 87: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP stmt_ends  */
#line 410 "parser.y"
                                                           {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-3].doLoopCondition), (yyvsp[-2].stmtList)); printf("do_loop_stmt 1\n"); }
#line 2703 "parser.tab.c"
    break;

  case 88: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 411 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));printf("do_loop_stmt 2\n"); }
#line 2709 "parser.tab.c"
    break;

  case 89: /* do_loop_condition: UNTIL expr_singleline stmt_ends  */
#line 414 "parser.y"
                                                   {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression)); printf("do_loop_condition UNTIL\n");}
#line 2715 "parser.tab.c"
    break;

  case 90: /* do_loop_condition: WHILE expr_singleline stmt_ends  */
#line 415 "parser.y"
                                                                   {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression)); printf("do_loop_condition WHILE\n");}
#line 2721 "parser.tab.c"
    break;

  case 91: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT stmt_ends  */
#line 420 "parser.y"
                                                                                                                                 {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-10].id_var_name), (yyvsp[-8].vt), (yyvsp[-6].expression), (yyvsp[-4].expression), 0, (yyvsp[-2].stmtList));}
#line 2727 "parser.tab.c"
    break;

  case 92: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT stmt_ends  */
#line 421 "parser.y"
                                                                                                                                                                      {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-12].id_var_name), (yyvsp[-10].vt), (yyvsp[-8].expression), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2733 "parser.tab.c"
    break;

  case 93: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT stmt_ends  */
#line 426 "parser.y"
                                                                                                          {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-8].id_var_name), (yyvsp[-6].vt), (yyvsp[-4].id_var_name), (yyvsp[-2].stmtList));}
#line 2739 "parser.tab.c"
    break;

  case 94: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF  */
#line 431 "parser.y"
                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 1\n");}
#line 2745 "parser.tab.c"
    break;

  case 95: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list END IF  */
#line 432 "parser.y"
                                                                       {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0); printf("if_stmt_multi 2\n");}
#line 2751 "parser.tab.c"
    break;

  case 96: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 433 "parser.y"
                                                                                                               {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 3\n");}
#line 2757 "parser.tab.c"
    break;

  case 97: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_ends stmt_list END IF  */
#line 434 "parser.y"
                                                                                                                {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), 0, (yyvsp[-2].stmtList)); printf("if_stmt_multi 4\n");}
#line 2763 "parser.tab.c"
    break;

  case 98: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF  */
#line 435 "parser.y"
                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 5\n");}
#line 2769 "parser.tab.c"
    break;

  case 99: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF  */
#line 436 "parser.y"
                                                                                   {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0); printf("if_stmt_multi 6\n");}
#line 2775 "parser.tab.c"
    break;

  case 100: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 437 "parser.y"
                                                                                                                           {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 7\n");}
#line 2781 "parser.tab.c"
    break;

  case 101: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_ends stmt_list END IF  */
#line 438 "parser.y"
                                                                                                                            {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-9].expression), (yyvsp[-6].stmtList), (yyvsp[-5].elseIfList), (yyvsp[-2].stmtList)); printf("if_stmt_multi 8\n");}
#line 2787 "parser.tab.c"
    break;

  case 102: /* elseif_list: elseif  */
#line 441 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf)); printf("elseif_list 1\n");}
#line 2793 "parser.tab.c"
    break;

  case 103: /* elseif_list: elseif_list elseif  */
#line 442 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf)); printf("elseif_list 2\n");}
#line 2799 "parser.tab.c"
    break;

  case 104: /* elseif: ELSEIF expr_multiline THEN stmt_ends stmt_list  */
#line 445 "parser.y"
                                                       {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 1\n");}
#line 2805 "parser.tab.c"
    break;

  case 105: /* elseif: ELSEIF expr_singleline THEN stmt_ends stmt_list  */
#line 446 "parser.y"
                                                        {(yyval.elseIf) = createElseIf((yyvsp[-3].expression), (yyvsp[0].stmtList)); printf("elseif 2\n");}
#line 2811 "parser.tab.c"
    break;

  case 106: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt  */
#line 448 "parser.y"
                                                               {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0); printf("if_stmt_single 1\n");}
#line 2817 "parser.tab.c"
    break;

  case 107: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  */
#line 449 "parser.y"
                                                                                     {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle)); printf("if_stmt_single 2\n");}
#line 2823 "parser.tab.c"
    break;

  case 108: /* select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT  */
#line 454 "parser.y"
                                                                        {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList), 0); printf("select_stmt 1\n");}
#line 2829 "parser.tab.c"
    break;

  case 109: /* select_stmt: SELECT CASE expr_multiline stmt_ends case_list END SELECT  */
#line 455 "parser.y"
                                                                       {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList), 0); printf("select_stmt 2\n");}
#line 2835 "parser.tab.c"
    break;

  case 110: /* select_stmt: SELECT CASE expr_singleline stmt_ends case_list CASE ELSE stmt_ends stmt_list END SELECT  */
#line 456 "parser.y"
                                                                                                              {(yyval.selectStmt) = createSelectStmt((yyvsp[-8].expression), (yyvsp[-6].caseList), (yyvsp[-2].stmtList)); printf("select_stmt 3\n");}
#line 2841 "parser.tab.c"
    break;

  case 111: /* select_stmt: SELECT CASE expr_multiline stmt_ends case_list CASE ELSE stmt_ends stmt_list END SELECT  */
#line 457 "parser.y"
                                                                                                     {(yyval.selectStmt) = createSelectStmt((yyvsp[-8].expression), (yyvsp[-6].caseList), (yyvsp[-2].stmtList)); printf("select_stmt 4\n");}
#line 2847 "parser.tab.c"
    break;

  case 112: /* case_list: case_stmt  */
#line 460 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt)); printf("case_list 1\n");}
#line 2853 "parser.tab.c"
    break;

  case 113: /* case_list: case_list case_stmt  */
#line 461 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt)); printf("case_list 2\n");}
#line 2859 "parser.tab.c"
    break;

  case 114: /* case_stmt: CASE expr_multiline stmt_ends stmt_list  */
#line 464 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), (yyvsp[0].stmtList)); printf("case_stmt 1\n");}
#line 2865 "parser.tab.c"
    break;

  case 115: /* case_stmt: CASE expr_singleline stmt_ends stmt_list  */
#line 465 "parser.y"
                                                            {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), (yyvsp[0].stmtList)); printf("case_stmt 2\n");}
#line 2871 "parser.tab.c"
    break;

  case 116: /* case_stmt: CASE IS expr_multiline stmt_ends stmt_list  */
#line 466 "parser.y"
                                                      {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), (yyvsp[0].stmtList)); printf("case_stmt 3\n");}
#line 2877 "parser.tab.c"
    break;

  case 117: /* case_stmt: CASE IS expr_singleline stmt_ends stmt_list  */
#line 467 "parser.y"
                                                       {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), (yyvsp[0].stmtList)); printf("case_stmt 4\n");}
#line 2883 "parser.tab.c"
    break;

  case 118: /* expr_singleline: basic_literal_value  */
#line 473 "parser.y"
                                     {(yyval.expression) = (yyvsp[0].expression); printf("expr_single 0\n");}
#line 2889 "parser.tab.c"
    break;

  case 119: /* expr_singleline: '-' expr_singleline  */
#line 474 "parser.y"
                                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression)); printf("expr_single 1\n");}
#line 2895 "parser.tab.c"
    break;

  case 120: /* expr_singleline: '+' expr_singleline  */
#line 475 "parser.y"
                                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression)); printf("expr_single 2\n");}
#line 2901 "parser.tab.c"
    break;

  case 121: /* expr_singleline: expr_singleline '+' expr_singleline  */
#line 476 "parser.y"
                                          {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression));  printf("expr_single 3\n");}
#line 2907 "parser.tab.c"
    break;

  case 122: /* expr_singleline: expr_singleline '-' expr_singleline  */
#line 477 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression));  printf("expr_single 4\n");}
#line 2913 "parser.tab.c"
    break;

  case 123: /* expr_singleline: expr_singleline '*' expr_singleline  */
#line 478 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 5\n");}
#line 2919 "parser.tab.c"
    break;

  case 124: /* expr_singleline: expr_singleline '/' expr_singleline  */
#line 479 "parser.y"
                                          {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 6\n");}
#line 2925 "parser.tab.c"
    break;

  case 125: /* expr_singleline: expr_singleline INT_DIV expr_singleline  */
#line 480 "parser.y"
                                              {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 7\n");}
#line 2931 "parser.tab.c"
    break;

  case 126: /* expr_singleline: expr_singleline '=' expr_singleline  */
#line 481 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 8\n");}
#line 2937 "parser.tab.c"
    break;

  case 127: /* expr_singleline: expr_singleline '<' expr_singleline  */
#line 482 "parser.y"
                                          {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 9\n");}
#line 2943 "parser.tab.c"
    break;

  case 128: /* expr_singleline: expr_singleline '>' expr_singleline  */
#line 483 "parser.y"
                                          {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 10\n");}
#line 2949 "parser.tab.c"
    break;

  case 129: /* expr_singleline: expr_singleline '^' expr_singleline  */
#line 484 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 11\n");}
#line 2955 "parser.tab.c"
    break;

  case 130: /* expr_singleline: expr_singleline NOT_EQUAL expr_singleline  */
#line 485 "parser.y"
                                                {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 12\n");}
#line 2961 "parser.tab.c"
    break;

  case 131: /* expr_singleline: expr_singleline LESS_OR_EQUAL expr_singleline  */
#line 486 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 13\n");}
#line 2967 "parser.tab.c"
    break;

  case 132: /* expr_singleline: expr_singleline MORE_OR_EQUAL expr_singleline  */
#line 487 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 14\n");}
#line 2973 "parser.tab.c"
    break;

  case 133: /* expr_singleline: expr_singleline '&' expr_singleline  */
#line 488 "parser.y"
                                          {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 15\n");}
#line 2979 "parser.tab.c"
    break;

  case 134: /* expr_singleline: '(' expr_singleline ')'  */
#line 489 "parser.y"
                              {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression)); printf("expr_single 16\n");}
#line 2985 "parser.tab.c"
    break;

  case 135: /* expr_singleline: IDENTIFIER  */
#line 490 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)}); printf("expr_single 17\n");}
#line 2991 "parser.tab.c"
    break;

  case 136: /* expr_singleline: IDENTIFIER arguments_singleline  */
#line 491 "parser.y"
                                      {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList)); printf("expr_single 18\n");}
#line 2997 "parser.tab.c"
    break;

  case 137: /* expr_singleline: expr_singleline AND expr_singleline  */
#line 492 "parser.y"
                                          {(yyval.expression) = createExpression(ET_AND, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 19\n");}
#line 3003 "parser.tab.c"
    break;

  case 138: /* expr_singleline: expr_singleline OR expr_singleline  */
#line 493 "parser.y"
                                         {(yyval.expression) = createExpression(ET_OR, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 20\n");}
#line 3009 "parser.tab.c"
    break;

  case 139: /* expr_singleline: expr_singleline XOR expr_singleline  */
#line 494 "parser.y"
                                          {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 21\n");}
#line 3015 "parser.tab.c"
    break;

  case 140: /* expr_singleline: NOT expr_singleline  */
#line 495 "parser.y"
                          {(yyval.expression) = createExpression(ET_NOT, 0, (yyvsp[0].expression)); printf("expr_single 22\n");}
#line 3021 "parser.tab.c"
    break;

  case 141: /* expr_singleline: expr_singleline TO expr_singleline  */
#line 496 "parser.y"
                                             {(yyval.expression) = createExpression(ET_TO, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 23\n");}
#line 3027 "parser.tab.c"
    break;

  case 142: /* expr_singleline: expr_singleline MOD expr_singleline  */
#line 497 "parser.y"
                                              {(yyval.expression) = createExpression(ET_MOD, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 24\n");}
#line 3033 "parser.tab.c"
    break;

  case 143: /* expr_singleline: expr_singleline SHIFT_LEFT expr_singleline  */
#line 498 "parser.y"
                                                     {(yyval.expression) = createExpression(ET_SHIFT_L, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 25\n");}
#line 3039 "parser.tab.c"
    break;

  case 144: /* expr_singleline: expr_singleline SHIFT_RIGHT expr_singleline  */
#line 499 "parser.y"
                                                      {(yyval.expression) = createExpression(ET_SHIFT_R, (yyvsp[-2].expression), (yyvsp[0].expression)); printf("expr_single 26\n");}
#line 3045 "parser.tab.c"
    break;

  case 145: /* expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline  */
#line 502 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 1\n");}
#line 3051 "parser.tab.c"
    break;

  case 146: /* expr_multiline: expr_singleline '-' END_OF_LINE expr_singleline  */
#line 503 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 2\n");}
#line 3057 "parser.tab.c"
    break;

  case 147: /* expr_multiline: expr_singleline '*' END_OF_LINE expr_singleline  */
#line 504 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 3\n");}
#line 3063 "parser.tab.c"
    break;

  case 148: /* expr_multiline: expr_singleline '/' END_OF_LINE expr_singleline  */
#line 505 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 4\n");}
#line 3069 "parser.tab.c"
    break;

  case 149: /* expr_multiline: expr_singleline INT_DIV END_OF_LINE expr_singleline  */
#line 506 "parser.y"
                                                                    {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 5\n");}
#line 3075 "parser.tab.c"
    break;

  case 150: /* expr_multiline: expr_singleline '=' END_OF_LINE expr_singleline  */
#line 507 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 6\n");}
#line 3081 "parser.tab.c"
    break;

  case 151: /* expr_multiline: expr_singleline '<' END_OF_LINE expr_singleline  */
#line 508 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 7\n");}
#line 3087 "parser.tab.c"
    break;

  case 152: /* expr_multiline: expr_singleline '>' END_OF_LINE expr_singleline  */
#line 509 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 8\n");}
#line 3093 "parser.tab.c"
    break;

  case 153: /* expr_multiline: expr_singleline '^' END_OF_LINE expr_singleline  */
#line 510 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 9\n");}
#line 3099 "parser.tab.c"
    break;

  case 154: /* expr_multiline: expr_singleline NOT_EQUAL END_OF_LINE expr_singleline  */
#line 511 "parser.y"
                                                                      {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 10\n");}
#line 3105 "parser.tab.c"
    break;

  case 155: /* expr_multiline: expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline  */
#line 512 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 11\n");}
#line 3111 "parser.tab.c"
    break;

  case 156: /* expr_multiline: expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline  */
#line 513 "parser.y"
                                                                          {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 12\n");}
#line 3117 "parser.tab.c"
    break;

  case 157: /* expr_multiline: expr_singleline '&' END_OF_LINE expr_singleline  */
#line 514 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 13\n");}
#line 3123 "parser.tab.c"
    break;

  case 158: /* expr_multiline: '(' END_OF_LINE expr_singleline ')'  */
#line 515 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression)); printf("expr_multi 14\n");}
#line 3129 "parser.tab.c"
    break;

  case 159: /* expr_multiline: '(' END_OF_LINE expr_singleline END_OF_LINE ')'  */
#line 516 "parser.y"
                                                                {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression)); printf("expr_multi 15\n");}
#line 3135 "parser.tab.c"
    break;

  case 160: /* expr_multiline: '(' expr_singleline END_OF_LINE ')'  */
#line 517 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression)); printf("expr_multi 16\n");}
#line 3141 "parser.tab.c"
    break;

  case 161: /* expr_multiline: IDENTIFIER arguments_multiline  */
#line 518 "parser.y"
                                               {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expressionList)); printf("expr_multi 17\n");}
#line 3147 "parser.tab.c"
    break;

  case 162: /* expr_multiline: expr_singleline AND END_OF_LINE expr_singleline  */
#line 519 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_AND, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 18\n");}
#line 3153 "parser.tab.c"
    break;

  case 163: /* expr_multiline: expr_singleline OR END_OF_LINE expr_singleline  */
#line 520 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_OR, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 19\n");}
#line 3159 "parser.tab.c"
    break;

  case 164: /* expr_multiline: expr_singleline XOR END_OF_LINE expr_singleline  */
#line 521 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_XOR, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 20\n");}
#line 3165 "parser.tab.c"
    break;

  case 165: /* expr_multiline: expr_singleline TO END_OF_LINE expr_singleline  */
#line 522 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_TO, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 21\n");}
#line 3171 "parser.tab.c"
    break;

  case 166: /* expr_multiline: expr_singleline MOD END_OF_LINE expr_singleline  */
#line 523 "parser.y"
                                                                            {(yyval.expression) = createExpression(ET_MOD, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_multi 22\n");}
#line 3177 "parser.tab.c"
    break;

  case 167: /* expr_multiline: expr_singleline SHIFT_LEFT END_OF_LINE expr_singleline  */
#line 524 "parser.y"
                                                                                   {(yyval.expression) = createExpression(ET_SHIFT_L, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_single 23\n");}
#line 3183 "parser.tab.c"
    break;

  case 168: /* expr_multiline: expr_singleline SHIFT_RIGHT END_OF_LINE expr_singleline  */
#line 525 "parser.y"
                                                                                    {(yyval.expression) = createExpression(ET_SHIFT_R, (yyvsp[-3].expression), (yyvsp[0].expression)); printf("expr_single 24\n");}
#line 3189 "parser.tab.c"
    break;

  case 169: /* basic_literal: INT  */
#line 529 "parser.y"
                   {(yyval.vt) = VT_INTEGER; printf("basic_literal int\n");}
#line 3195 "parser.tab.c"
    break;

  case 170: /* basic_literal: STRING  */
#line 530 "parser.y"
                     {(yyval.vt) = VT_STRING; printf("basic_literal str\n");}
#line 3201 "parser.tab.c"
    break;

  case 171: /* basic_literal: BOOLEAN  */
#line 531 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN; printf("basic_literal bool\n");}
#line 3207 "parser.tab.c"
    break;

  case 172: /* basic_literal: DOUBLE  */
#line 532 "parser.y"
                     {(yyval.vt) = VT_DOUBLE; printf("basic_literal double\n");}
#line 3213 "parser.tab.c"
    break;

  case 173: /* basic_literal_value: INT_VALUE  */
#line 535 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)}); printf("basic_literal_value int\n");}
#line 3219 "parser.tab.c"
    break;

  case 174: /* basic_literal_value: STRING_VALUE  */
#line 536 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)}); printf("basic_literal_value str\n");}
#line 3225 "parser.tab.c"
    break;

  case 175: /* basic_literal_value: BOOLEAN_VALUE  */
#line 537 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)}); printf("basic_literal_value bool\n");}
#line 3231 "parser.tab.c"
    break;

  case 176: /* basic_literal_value: DOUBLE_VALUE  */
#line 538 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)}); printf("basic_literal_value double\n");}
#line 3237 "parser.tab.c"
    break;

  case 177: /* arguments_multiline: '(' END_OF_LINE expr_list ')'  */
#line 543 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3243 "parser.tab.c"
    break;

  case 178: /* arguments_multiline: '(' END_OF_LINE expr_list END_OF_LINE ')'  */
#line 544 "parser.y"
                                                               {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3249 "parser.tab.c"
    break;

  case 179: /* arguments_multiline: '(' expr_list END_OF_LINE ')'  */
#line 545 "parser.y"
                                                   {(yyval.expressionList) = (yyvsp[-2].expressionList);}
#line 3255 "parser.tab.c"
    break;

  case 180: /* arguments_singleline: '(' expr_list ')'  */
#line 549 "parser.y"
                                        {(yyval.expressionList) = (yyvsp[-1].expressionList);}
#line 3261 "parser.tab.c"
    break;

  case 181: /* arguments_singleline: '(' ')'  */
#line 550 "parser.y"
                              {(yyval.expressionList) = 0;}
#line 3267 "parser.tab.c"
    break;

  case 182: /* expr_list: expr_singleline  */
#line 554 "parser.y"
                           {(yyval.expressionList) = createExpressionList((yyvsp[0].expression)); printf("expr_list 1\n");}
#line 3273 "parser.tab.c"
    break;

  case 183: /* expr_list: expr_list ',' expr_singleline  */
#line 555 "parser.y"
                                         {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression)); printf("expr_list 2\n");}
#line 3279 "parser.tab.c"
    break;


#line 3283 "parser.tab.c"

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

#line 559 "parser.y"



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
