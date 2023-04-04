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
#line 4 "parser.y"

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
Function* createFunction(char* id_var_name, ExpressionList *arguments, StmtList *stmtList, ExpressionList *exprList);
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
DoLoopCondition *createDoLoopCondition(int *isUntil, Expression *expression);
ForLoopStmt *createForLoopStmt(char* counterVarName, VarType counterType, Expression* fromValue, Expression* toValue, Expression* stepValue, StmtList *stmtList);
ForEachLoopStmt *createForEachLoopStmt(char* counterVarName, VarType counterType, char* counterSourceName, StmtList *stmtList);
IfStmtMulti *createIfStmtMulti(Expression *expression, StmtList *thenStmtList, ElseIfList *elseIfList, StmtList *elseStmtList);
ElseIfList *createElseIfList(ElseIf *elseIf);
ElseIfList *appendElseIfList(ElseIfList *list, ElseIf *elseIf);
ElseIf *createElseIf(Expression *expression, StmtList *stmtList);
IfStmtSingle *createIfStmtSingle(Expression *expression, StmtList *thenStmtList, StmtList *elseStmtList);
SelectStmt *createSelectStmt(Expression *expression, CaseList *caseList);
CaseList *createCaseList(CaseStmt *caseStmt);
CaseList *appendCaseList(CaseList *list, CaseStmt *caseStmt);
CaseStmt *createCaseStmt(int *isIs, Expression *fromExpression, Expression *toExpression, StmtList *stmtList);
DeclStmtSingle *createDeclStmtSingle(int *isConst, char* id_var_name, VarType varType, Expression *expression);
DeclStmtMulti *createDeclStmtMulti(int *isConst, char* id_var_name, VarType varType, Expression *expression);
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
  YYSYMBOL_ENDL = 13,                      /* ENDL  */
  YYSYMBOL_SUB = 14,                       /* SUB  */
  YYSYMBOL_END = 15,                       /* END  */
  YYSYMBOL_CONST = 16,                     /* CONST  */
  YYSYMBOL_DIM = 17,                       /* DIM  */
  YYSYMBOL_AS = 18,                        /* AS  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_NEW = 21,                       /* NEW  */
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
  YYSYMBOL_STEP = 36,                      /* STEP  */
  YYSYMBOL_OF = 37,                        /* OF  */
  YYSYMBOL_IN = 38,                        /* IN  */
  YYSYMBOL_EACH = 39,                      /* EACH  */
  YYSYMBOL_END_OF_LINE = 40,               /* END_OF_LINE  */
  YYSYMBOL_ASSIGN_CONSTRUCT = 41,          /* ASSIGN_CONSTRUCT  */
  YYSYMBOL_ASSIGN_MULT = 42,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_ORD_DIV = 43,            /* ASSIGN_ORD_DIV  */
  YYSYMBOL_ASSIGN_INT_DIV = 44,            /* ASSIGN_INT_DIV  */
  YYSYMBOL_ASSIGN_ADD = 45,                /* ASSIGN_ADD  */
  YYSYMBOL_ASSIGN_SUB = 46,                /* ASSIGN_SUB  */
  YYSYMBOL_ASSIGN_LSHIFT = 47,             /* ASSIGN_LSHIFT  */
  YYSYMBOL_ASSIGN_RSHIFT = 48,             /* ASSIGN_RSHIFT  */
  YYSYMBOL_ASSIGN_CONCAT = 49,             /* ASSIGN_CONCAT  */
  YYSYMBOL_PRIVATE = 50,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 51,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 52,                    /* PUBLIC  */
  YYSYMBOL_FRIEND = 53,                    /* FRIEND  */
  YYSYMBOL_54_ = 54,                       /* '^'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_INT_DIV = 57,                   /* INT_DIV  */
  YYSYMBOL_58_ = 58,                       /* '+'  */
  YYSYMBOL_59_ = 59,                       /* '-'  */
  YYSYMBOL_UNARY_MINUS = 60,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 61,                /* UNARY_PLUS  */
  YYSYMBOL_62_ = 62,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 63,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 64,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 65,             /* MORE_OR_EQUAL  */
  YYSYMBOL_66_ = 66,                       /* '>'  */
  YYSYMBOL_67_ = 67,                       /* '<'  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '('  */
  YYSYMBOL_70_ = 70,                       /* ')'  */
  YYSYMBOL_THEN = 71,                      /* THEN  */
  YYSYMBOL_ELSE = 72,                      /* ELSE  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_74_ = 74,                       /* '{'  */
  YYSYMBOL_75_ = 75,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_root = 77,                      /* root  */
  YYSYMBOL_program_items_list = 78,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 79, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 80,              /* program_item  */
  YYSYMBOL_module = 81,                    /* module  */
  YYSYMBOL_functions_or_sub_list = 82,     /* functions_or_sub_list  */
  YYSYMBOL_function_or_sub = 83,           /* function_or_sub  */
  YYSYMBOL_function = 84,                  /* function  */
  YYSYMBOL_sub_bloc = 85,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 86,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 87,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 88, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 89,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 90,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 91,                 /* stmt_list  */
  YYSYMBOL_stmt = 92,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 93,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 94,           /* multi_line_stmt  */
  YYSYMBOL_stmt_ends = 95,                 /* stmt_ends  */
  YYSYMBOL_decl_stmt = 96,                 /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 97,     /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 98,                  /* var_name  */
  YYSYMBOL_var_name_singleline = 99,       /* var_name_singleline  */
  YYSYMBOL_access = 100,                   /* access  */
  YYSYMBOL_while_stmt = 101,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 102,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 103,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 104,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 105,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 106,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 107,              /* elseif_list  */
  YYSYMBOL_elseif = 108,                   /* elseif  */
  YYSYMBOL_if_stmt_single_line = 109,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 110,              /* select_stmt  */
  YYSYMBOL_case_list = 111,                /* case_list  */
  YYSYMBOL_case_stmt = 112,                /* case_stmt  */
  YYSYMBOL_expr_singleline = 113,          /* expr_singleline  */
  YYSYMBOL_expr_multiline = 114,           /* expr_multiline  */
  YYSYMBOL_basic_literal = 115,            /* basic_literal  */
  YYSYMBOL_basic_literal_value = 116,      /* basic_literal_value  */
  YYSYMBOL_arguments_multiline = 117,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 118,     /* arguments_singleline  */
  YYSYMBOL_arguments = 119,                /* arguments  */
  YYSYMBOL_expr_list = 120                 /* expr_list  */
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
#define YYLAST   1811

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  486

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,     2,     2,     2,     2,     2,    68,     2,
      69,    70,    55,    58,    73,    59,     2,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    62,    66,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    57,
      60,    61,    63,    64,    65,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   236,   236,   239,   240,   243,   244,   247,   248,   252,
     253,   254,   255,   259,   260,   263,   264,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   282,
     283,   284,   285,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   299,   300,   301,   305,   306,   307,   311,   312,
     316,   322,   323,   327,   328,   332,   333,   334,   337,   338,
     339,   340,   341,   342,   343,   344,   349,   350,   356,   357,
     358,   359,   360,   361,   365,   366,   367,   368,   369,   370,
     374,   377,   378,   382,   383,   384,   385,   386,   387,   393,
     394,   399,   400,   403,   404,   409,   410,   415,   420,   421,
     422,   423,   424,   425,   426,   427,   430,   431,   434,   435,
     437,   438,   443,   444,   447,   448,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   506,   507,   508,   509,   512,   513,   514,   515,   520,
     521,   522,   526,   527,   530,   531,   535,   536
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
  "DOUBLE", "STRING", "BOOLEAN", "IDENTIFIER", "ENDL", "SUB", "END",
  "CONST", "DIM", "AS", "WHILE", "IF", "NEW", "ELSEIF", "SELECT", "CASE",
  "IS", "TO", "IMPORTS", "MODULE", "FUNCTION", "RETURN", "DO", "LOOP",
  "UNTIL", "FOR", "NEXT", "STEP", "OF", "IN", "EACH", "END_OF_LINE",
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

#define YYPACT_NINF (-349)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     121,     6,    13,   -27,   -16,  -349,  -349,    33,  -349,   121,
    -349,  -349,    37,    69,    69,  -349,  -349,  -349,  -349,    54,
    -349,   101,   189,    69,  -349,   134,   165,   150,    91,  -349,
    -349,  -349,    10,   229,   140,  -349,   147,   199,    82,   218,
     221,   225,   102,     4,   154,  -349,  -349,    69,  -349,  -349,
     185,   147,  -349,   237,   248,   263,   207,   -12,    27,  -349,
    -349,  -349,  -349,  -349,  -349,   228,   243,   243,   243,   243,
    -349,  1714,  -349,   -20,   637,     4,    69,  -349,   295,    41,
      64,    69,  -349,    24,  -349,    87,   202,  -349,   -19,   449,
     449,  1663,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   239,  -349,   243,   147,   269,
     296,   296,   565,   565,   290,   565,   105,    23,   314,   470,
    -349,    69,  -349,    69,  -349,    69,  -349,  -349,  -349,    69,
    -349,    69,  1729,    69,   251,   682,  -349,  -349,  -349,  -349,
     258,  -349,  -349,   714,   248,   334,  -349,  -349,   335,  -349,
     125,   278,  -349,  -349,  1743,   357,   357,   835,   449,   449,
     284,   284,   284,   284,   284,   284,  -349,  -349,  1714,  -349,
    -349,   286,   338,   340,   -10,    -7,   339,    69,  1609,   282,
     565,   339,    69,   243,   243,   826,  1252,   341,   345,   243,
    1554,   332,   565,  -349,   101,   101,   101,   101,   101,   543,
    1312,  1324,  1350,  1354,  1374,  1394,  1398,  1424,  1436,  1456,
    1468,  1494,   101,    69,   333,   565,   759,   294,   353,   858,
    -349,  -349,  -349,   565,   295,   295,   295,   328,   295,   669,
     826,   826,  1273,    69,   339,    69,   104,   152,  1594,  1594,
     902,   925,   295,   363,  1574,   301,  -349,   339,    69,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   782,  -349,   339,    69,   355,   565,  -349,  -349,
     368,  1680,   315,   324,   325,   327,   565,   330,   295,   565,
    1714,   962,   983,   376,   376,   243,   358,   826,  1714,   826,
      83,    83,   370,   371,   101,   101,   142,  -349,   350,   295,
     361,  -349,  -349,   196,   216,  1714,  1714,  1714,  1714,  1714,
    1714,  1714,  1714,  1714,  1714,  1714,  1714,  1714,   413,  1020,
     217,   222,  -349,   339,    69,  -349,  -349,  -349,   392,  1498,
     393,  1729,  -349,  1518,   365,  -349,   418,   421,   374,   426,
      -4,  1627,  1292,    26,    71,    67,   141,  -349,   186,  -349,
    -349,  -349,   326,   408,  -349,   420,   425,  -349,   441,   429,
     432,   223,   230,   565,   565,  1714,   565,   565,  1714,   394,
    -349,  -349,   243,   295,   295,  1007,  1292,  -349,   442,   565,
    1252,    -3,  -349,   445,  1252,    25,   565,    69,  1534,    75,
     448,  -349,   454,   446,   456,  -349,  -349,  -349,  -349,  -349,
     450,   452,  -349,  -349,  -349,  -349,   404,  1697,   422,   430,
    -349,  1645,   412,  1041,   471,  1252,  -349,  -349,  1078,   474,
    1252,   339,    69,   826,   565,   826,   565,   826,  -349,  -349,
     326,    69,  -349,  -349,   243,   243,   243,  1252,  1252,   475,
    -349,  1099,   476,  -349,  1136,   826,   826,  1252,   339,    69,
    1252,   339,    69,  1252,   238,   826,   249,  1252,  1252,  -349,
     477,  -349,   478,  1252,  1252,   826,   826,   826,   826,   326,
     826,  1157,  -349,  -349,  -349,  1252,  1252,  1252,  1252,    69,
    1194,  -349,   826,  -349,  1215,  -349
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    86,    84,    83,    85,     0,     2,     4,
       5,     7,     0,     0,     0,    88,    87,     1,     6,     0,
      66,     8,     0,     0,    67,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,    33,     0,   174,   175,     0,    10,    14,
       0,     0,    11,     0,    50,     0,     0,    34,    38,    42,
      45,   165,   168,   166,   167,   142,     0,     0,     0,     0,
     173,   176,   125,     0,     0,    33,     0,    12,     0,    36,
      41,     0,    37,     0,    40,     0,     0,   143,     0,   127,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,     0,   142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,    53,     0,    56,     0,    62,    63,    64,     0,
      55,     0,    57,     0,     0,     0,   161,   164,   162,   163,
      48,    35,    39,     0,     0,     0,    43,    50,     0,    46,
       0,     0,   169,   141,   136,   130,   131,   132,   128,   129,
     133,   137,   138,   139,   135,   134,   140,   171,   177,   160,
      17,    82,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    54,    59,    61,    58,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
      44,    47,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,    49,    29,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
      77,     0,     0,     0,     0,     0,   110,     0,    57,     0,
       0,     0,     0,     0,    94,    93,     0,    91,     0,     0,
       0,   157,   159,     0,     0,   152,   146,   147,   148,   144,
     145,   149,   153,   154,   155,   151,   150,   156,     0,     0,
       0,     0,    26,     0,     0,    30,    81,    80,     0,     0,
       0,     0,    72,     0,     0,    73,     0,     0,    82,     0,
      78,     0,     0,     0,     0,     0,     0,   114,     0,    18,
      19,    92,     0,     0,   158,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,    75,     0,
      90,    89,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,    21,    22,    32,    24,    25,
       0,     0,    68,    69,    70,    71,     0,     0,     0,    76,
      99,     0,     0,     0,     0,     0,   107,    98,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,    27,    28,     0,     0,     0,     0,     0,     0,
     103,     0,     0,   102,     0,     0,     0,   124,     0,     0,
     117,     0,     0,   116,     0,     0,     0,   109,   108,   101,
       0,   100,     0,   119,   118,     0,     0,     0,     0,     0,
       0,     0,    79,   105,   104,   123,   122,   121,   120,     0,
       0,    97,     0,    95,     0,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -349,  -349,  -349,  -349,   490,  -349,   469,   465,  -349,  -349,
     431,   466,   468,   -56,   -70,   180,   109,  -229,  -349,   -13,
    -349,  -349,   396,   -94,   250,  -349,  -349,   209,  -349,  -349,
    -349,   181,   -85,  -349,  -349,   233,  -131,    84,   265,  -219,
    -348,   401,   -52,   479,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      56,    57,    58,    59,    60,   119,   120,   121,   122,    38,
     123,   124,   172,   173,    32,   125,   126,   186,   127,   128,
     129,   381,   382,   130,   131,   346,   347,   132,   133,   140,
      72,    45,    46,    47,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    88,   286,   393,   273,   274,   275,   226,   277,
      33,   228,   414,    87,   374,   149,    54,   175,    13,   379,
     105,   151,   150,   298,    39,    14,    15,   146,    82,    61,
      62,    63,    64,    17,    74,   187,   144,    16,   108,    40,
     419,   378,   110,   111,    55,   112,   113,   379,   379,   114,
     106,   152,   227,   107,   107,   229,    87,   116,   375,   334,
     117,    83,   188,   135,   145,    19,    23,    84,   143,   415,
      61,    62,    63,    64,    61,    62,    63,    64,   221,   108,
     353,   141,   454,   108,    67,    68,   383,   110,   111,   220,
     112,   113,   386,   379,   114,   118,    25,   420,   380,   147,
      85,   426,   116,   185,   142,   117,    37,   345,   194,    20,
     195,    27,   196,   377,    83,    20,   197,    53,   198,   292,
     212,   479,    24,    24,   183,    67,    68,   148,    71,    67,
      68,    20,     3,     4,     5,     6,   118,    85,   184,   387,
     118,    24,    20,   384,    24,    20,    34,   286,     1,     2,
      71,    89,    90,    91,   408,   409,   390,    61,    62,    63,
      64,   183,    36,   230,   231,   345,    65,   293,   236,   237,
      71,     3,     4,     5,     6,   184,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   339,
     340,   168,    24,    35,    66,   106,   176,   178,   107,   181,
     262,   392,   190,    25,    26,    61,    62,    63,    64,    43,
     345,   355,    67,    68,    65,   391,    44,   391,    27,   287,
     289,   290,   291,    69,    70,   294,   295,    48,   193,    24,
      50,   356,   359,    51,   303,   304,    24,   360,   400,     3,
       4,     5,     6,    25,    41,   401,    61,    62,    63,    64,
      12,   320,   321,    52,    75,    65,    24,    24,    27,    12,
      67,    68,    24,    24,   234,    77,    78,   238,   239,    24,
      24,    69,    70,   244,   469,    54,   247,    81,    20,     3,
       4,     5,     6,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   416,    86,   170,   264,
     416,    67,    68,   136,   137,   138,   139,   271,   171,   167,
     361,   362,    69,   280,   180,   216,   288,    61,    62,    63,
      64,   213,   107,   219,   472,   193,    65,   217,   193,    61,
      62,    63,    64,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   144,   147,   222,   193,
     193,   323,   104,   233,   189,   223,   224,   243,   225,   242,
     331,   246,   263,   331,   268,   240,   241,   269,   276,   341,
     456,   302,    67,    68,   423,   425,   427,   177,   179,    20,
     182,   299,   325,    69,   322,   327,   328,   329,   338,   330,
     193,   193,   333,   199,   200,   201,   202,   203,   204,   349,
     350,   205,   206,   207,   208,   209,   210,   211,   445,   446,
     281,   282,   352,   365,    95,    96,    97,   368,   455,    98,
      99,   100,   101,   102,   103,   104,   288,   357,   193,   388,
     342,   354,   363,   366,   369,   465,   466,   370,   467,   468,
     371,   470,   319,   372,   373,   235,   394,   331,   331,   395,
     331,   331,   193,   193,   396,   397,   407,   248,   398,   280,
     288,   399,   410,   411,   406,   417,   482,   343,   431,   344,
     421,   428,   430,    61,    62,    63,    64,   429,   434,   432,
     265,   433,   108,   438,   435,   191,   110,   111,   272,   112,
     113,   440,   436,   114,   443,   459,   461,   473,   474,    18,
     192,   116,    42,    49,   117,   351,   134,   174,   448,   169,
     451,    98,    99,   100,   101,   102,   103,   104,    71,   365,
     368,    79,   193,    80,   348,   385,     0,   193,    67,    68,
      76,     0,   324,     0,     0,     0,     0,     0,     0,   118,
       0,   332,     0,     0,   335,     0,    61,    62,    63,    64,
     193,     0,     0,   193,     0,    65,   193,     0,     0,   193,
     413,     0,   193,     0,   418,     0,   193,   193,    61,    62,
      63,    64,   193,   193,     0,     0,     0,   108,     0,     0,
     193,     0,     0,   249,   193,   193,   193,   193,     0,   193,
       0,     0,     0,   193,     0,   441,     0,     0,     0,     0,
     444,    67,    68,   447,     0,   450,     0,   453,     0,     0,
     389,     0,    69,     0,     0,     0,     0,   457,   458,     0,
       0,     0,     0,    67,    68,   463,   464,     0,   402,   403,
       0,   404,   405,     0,   118,   471,     0,     0,     0,     0,
      61,    62,    63,    64,   412,   475,   476,   477,   478,   108,
     480,   422,   109,   110,   111,     0,   112,   113,     0,     0,
     114,     0,   484,     0,     0,     0,     0,   115,   116,     0,
       0,   117,    61,    62,    63,    64,     0,    24,     0,     0,
       0,    65,     0,     0,     0,    61,    62,    63,    64,   449,
     278,   452,     0,     0,   108,    67,    68,   214,   110,   111,
       0,   112,   113,     0,     0,   114,   118,     0,     0,   279,
       0,     0,   215,   116,     0,     0,   117,    61,    62,    63,
      64,     0,    24,     0,     0,     0,   108,    67,    68,   218,
     110,   111,     0,   112,   113,     0,     0,   114,    69,     0,
      67,    68,     0,     0,     0,   116,     0,     0,   117,     0,
       0,   118,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,     0,     0,     0,     0,
       0,   108,    67,    68,   266,   110,   111,     0,   112,   113,
       0,     0,   114,   118,     0,    61,    62,    63,    64,   267,
     116,     0,     0,   117,   108,     0,     0,   318,   110,   111,
       0,   112,   113,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,   117,    67,    68,     0,
       0,     0,    24,     0,     0,     0,     0,     0,   118,    61,
      62,    63,    64,     0,     0,     0,     0,     0,   108,     0,
      67,    68,   110,   111,     0,   112,   113,     0,     0,   114,
       0,   118,     0,     0,     0,     0,     0,   116,     0,     0,
     117,    61,    62,    63,    64,     0,    24,     0,     0,     0,
     108,     0,     0,   270,   110,   111,     0,   112,   113,     0,
       0,   114,     0,     0,    67,    68,     0,     0,     0,   116,
       0,     0,   117,    96,    97,   118,     0,    98,    99,   100,
     101,   102,   103,   104,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,   108,     0,    67,    68,   110,   111,
       0,   112,   113,     0,     0,   114,     0,   118,    61,    62,
      63,    64,     0,   116,   296,     0,   117,   108,     0,     0,
       0,   110,   111,     0,   112,   113,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,   116,   297,     0,   117,
      67,    68,     0,     0,     0,    61,    62,    63,    64,     0,
       0,   118,     0,     0,   108,     0,     0,   336,   110,   111,
       0,   112,   113,    67,    68,   114,    61,    62,    63,    64,
       0,     0,     0,   116,   118,   108,   117,     0,   337,   110,
     111,     0,   112,   113,     0,     0,   114,     0,     0,     0,
      61,    62,    63,    64,   116,     0,     0,   117,     0,    65,
      67,    68,     0,    61,    62,    63,    64,     0,   278,     0,
       0,   118,   108,     0,     0,   358,   110,   111,     0,   112,
     113,    67,    68,   114,    61,    62,    63,    64,     0,     0,
       0,   116,   118,   108,   117,     0,   439,   110,   111,     0,
     112,   113,     0,     0,   114,    67,    68,     0,     0,     0,
       0,     0,   116,     0,     0,   117,    69,     0,    67,    68,
       0,    61,    62,    63,    64,     0,     0,     0,     0,   118,
     108,     0,     0,   442,   110,   111,     0,   112,   113,    67,
      68,   114,    61,    62,    63,    64,     0,     0,     0,   116,
     118,   108,   117,     0,   460,   110,   111,     0,   112,   113,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,   117,     0,     0,    67,    68,     0,    61,
      62,    63,    64,     0,     0,     0,     0,   118,   108,     0,
       0,   462,   110,   111,     0,   112,   113,    67,    68,   114,
      61,    62,    63,    64,     0,     0,     0,   116,   118,   108,
     117,     0,     0,   110,   111,     0,   112,   113,     0,     0,
     114,     0,     0,     0,     0,     0,     0,     0,   116,     0,
       0,   117,   481,     0,    67,    68,     0,    61,    62,    63,
      64,     0,     0,     0,     0,   118,   108,     0,     0,     0,
     110,   111,     0,   112,   113,    67,    68,   114,    61,    62,
      63,    64,     0,     0,     0,   116,   118,   108,   117,   483,
       0,   110,   111,     0,   112,   113,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,   117,
     485,     0,    67,    68,     0,    61,    62,    63,    64,     0,
       0,     0,     0,   118,   108,     0,     0,     0,   110,   111,
       0,   112,   113,    67,    68,   114,    61,    62,    63,    64,
       0,     0,     0,   116,   118,    65,   117,     0,     0,   283,
     284,     0,     0,   285,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,    65,     0,     0,     0,   283,   284,
      67,    68,   285,    20,     0,    61,    62,    63,    64,     0,
       0,   118,     0,     0,    65,     0,     0,    61,    62,    63,
      64,    67,    68,     0,     0,     0,    65,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
      67,    68,   250,    61,    62,    63,    64,    61,    62,    63,
      64,    69,    65,     0,   251,     0,    65,     0,     0,     0,
      67,    68,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    69,    67,    68,     0,     0,    65,     0,     0,     0,
     252,     0,     0,    69,   253,     0,     0,    61,    62,    63,
      64,    61,    62,    63,    64,     0,    65,     0,    67,    68,
      65,     0,    67,    68,   254,     0,     0,     0,     0,    69,
       0,     0,     0,    69,     0,     0,     0,    61,    62,    63,
      64,     0,    67,    68,   255,     0,    65,     0,   256,    61,
      62,    63,    64,    69,     0,     0,     0,     0,    65,     0,
       0,     0,    67,    68,     0,     0,    67,    68,     0,    61,
      62,    63,    64,    69,   257,     0,     0,    69,    65,     0,
       0,    61,    62,    63,    64,     0,   258,     0,     0,     0,
      65,     0,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    67,    68,   259,    61,    62,    63,
      64,    61,    62,    63,    64,    69,    65,     0,   260,     0,
      65,     0,     0,     0,    67,    68,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    69,    67,    68,     0,     0,
      65,     0,     0,     0,   261,     0,     0,    69,   364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,     0,     0,    67,    68,   367,     0,
     424,     0,     0,    69,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,    20,     0,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,   199,   200,
     201,   202,   203,   204,   245,     0,   205,   206,   207,   208,
     209,   210,   211,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,   300,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   153,     0,     0,     0,    92,    93,
      94,    95,    96,    97,    20,     0,    98,    99,   100,   101,
     102,   103,   104,     0,   301,     0,     0,     0,    92,    93,
      94,    95,    96,    97,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   199,   200,   201,   202,   203,   204,     0,
       0,   205,   206,   207,   208,   209,   210,   211,     0,     0,
     232,    92,    93,    94,    95,    96,    97,     0,     0,    98,
      99,   100,   101,   102,   103,   104,     0,     0,   376,   199,
     200,   201,   202,   203,   204,     0,     0,   205,   206,   207,
     208,   209,   210,   211,     0,     0,   437,    92,    93,    94,
      95,    96,    97,     0,     0,    98,    99,   100,   101,   102,
     103,   104,     0,   153,   199,   200,   201,   202,   203,   204,
       0,     0,   205,   206,   207,   208,   209,   210,   211,     0,
     326,    92,    93,    94,    95,    96,    97,     0,     0,    98,
      99,   100,   101,   102,   103,   104,     0,   326,    92,    93,
      94,    95,    96,    97,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   199,   200,   201,   202,   203,   204,     0,
       0,   205,   206,   207,   208,   209,   210,   211,    93,    94,
      95,    96,    97,     0,     0,    98,    99,   100,   101,   102,
     103,   104
};

static const yytype_int16 yycheck[] =
{
      13,    14,    66,   232,   352,   224,   225,   226,    18,   228,
      23,    18,    15,    65,    18,    85,    12,   111,    12,    22,
      40,    40,    86,   242,    14,    12,    53,    83,    40,     3,
       4,     5,     6,     0,    47,    12,    12,    53,    12,    29,
      15,    15,    16,    17,    40,    19,    20,    22,    22,    23,
      70,    70,    62,    73,    73,    62,   108,    31,    62,   278,
      34,    73,    39,    76,    40,    28,    12,    40,    81,    72,
       3,     4,     5,     6,     3,     4,     5,     6,   148,    12,
     299,    40,   430,    12,    58,    59,    15,    16,    17,   145,
      19,    20,    25,    22,    23,    69,    14,    72,    72,    12,
      73,    26,    31,   116,    40,    34,    15,    24,   121,    40,
     123,    29,   125,   342,    73,    40,   129,    15,   131,    15,
     133,   469,    40,    40,    19,    58,    59,    40,    44,    58,
      59,    40,    50,    51,    52,    53,    69,    73,    33,    72,
      69,    40,    40,    72,    40,    40,    12,   376,    27,    28,
      66,    67,    68,    69,   373,   374,    15,     3,     4,     5,
       6,    19,    12,   176,   177,    24,    12,    15,   181,   182,
      86,    50,    51,    52,    53,    33,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   283,
     284,   107,    40,    28,    40,    70,   112,   113,    73,   115,
     213,    15,   118,    14,    15,     3,     4,     5,     6,    69,
      24,    15,    58,    59,    12,   346,    69,   348,    29,   232,
     233,   234,   235,    69,    70,   238,   239,    28,   119,    40,
      12,    15,    15,    12,   247,   248,    40,    15,    15,    50,
      51,    52,    53,    14,    15,    15,     3,     4,     5,     6,
       0,   264,   265,    28,    69,    12,    40,    40,    29,     9,
      58,    59,    40,    40,   180,    28,    18,   183,   184,    40,
      40,    69,    70,   189,    36,    12,   192,    70,    40,    50,
      51,    52,    53,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   381,    69,    29,   215,
     385,    58,    59,     8,     9,    10,    11,   223,    12,    70,
     323,   324,    69,   229,    24,   135,   232,     3,     4,     5,
       6,    70,    73,   143,    75,   216,    12,    69,   219,     3,
       4,     5,     6,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,    12,    12,    70,   240,
     241,   267,    68,    71,    40,    69,    18,    12,    18,    18,
     276,    29,    29,   279,    70,   185,   186,    14,    40,   285,
     434,    70,    58,    59,   387,   388,   389,   112,   113,    40,
     115,    18,    14,    69,    29,    70,    62,    62,    12,    62,
     281,   282,    62,    54,    55,    56,    57,    58,    59,    29,
      29,    62,    63,    64,    65,    66,    67,    68,   421,   422,
     230,   231,    62,   329,    57,    58,    59,   333,   431,    62,
      63,    64,    65,    66,    67,    68,   342,    14,   319,   345,
      72,    70,    40,    40,    69,   448,   449,    19,   451,   452,
      19,   454,   262,    69,    18,   180,    38,   363,   364,    29,
     366,   367,   343,   344,    29,    14,   372,   192,    29,   375,
     376,    29,    20,   379,    70,    20,   479,   287,    12,   289,
     386,    23,    26,     3,     4,     5,     6,    23,    74,    29,
     215,    29,    12,    71,    62,    15,    16,    17,   223,    19,
      20,    20,    62,    23,    20,    20,    20,    20,    20,     9,
      30,    31,    33,    38,    34,   296,    75,   111,   424,   108,
     426,    62,    63,    64,    65,    66,    67,    68,   434,   435,
     436,    55,   413,    55,   291,   344,    -1,   418,    58,    59,
      51,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,   276,    -1,    -1,   279,    -1,     3,     4,     5,     6,
     441,    -1,    -1,   444,    -1,    12,   447,    -1,    -1,   450,
     380,    -1,   453,    -1,   384,    -1,   457,   458,     3,     4,
       5,     6,   463,   464,    -1,    -1,    -1,    12,    -1,    -1,
     471,    -1,    -1,    40,   475,   476,   477,   478,    -1,   480,
      -1,    -1,    -1,   484,    -1,   415,    -1,    -1,    -1,    -1,
     420,    58,    59,   423,    -1,   425,    -1,   427,    -1,    -1,
     345,    -1,    69,    -1,    -1,    -1,    -1,   437,   438,    -1,
      -1,    -1,    -1,    58,    59,   445,   446,    -1,   363,   364,
      -1,   366,   367,    -1,    69,   455,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,   379,   465,   466,   467,   468,    12,
     470,   386,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,   482,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,     3,     4,     5,     6,    -1,    40,    -1,    -1,
      -1,    12,    -1,    -1,    -1,     3,     4,     5,     6,   424,
      21,   426,    -1,    -1,    12,    58,    59,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    23,    69,    -1,    -1,    40,
      -1,    -1,    30,    31,    -1,    -1,    34,     3,     4,     5,
       6,    -1,    40,    -1,    -1,    -1,    12,    58,    59,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    23,    69,    -1,
      58,    59,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      -1,    69,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    58,    59,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    69,    -1,     3,     4,     5,     6,    30,
      31,    -1,    -1,    34,    12,    -1,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    58,    59,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    69,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      58,    59,    16,    17,    -1,    19,    20,    -1,    -1,    23,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,     3,     4,     5,     6,    -1,    40,    -1,    -1,    -1,
      12,    -1,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    23,    -1,    -1,    58,    59,    -1,    -1,    -1,    31,
      -1,    -1,    34,    58,    59,    69,    -1,    62,    63,    64,
      65,    66,    67,    68,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    58,    59,    16,    17,
      -1,    19,    20,    -1,    -1,    23,    -1,    69,     3,     4,
       5,     6,    -1,    31,    32,    -1,    34,    12,    -1,    -1,
      -1,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,
      58,    59,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    69,    -1,    -1,    12,    -1,    -1,    15,    16,    17,
      -1,    19,    20,    58,    59,    23,     3,     4,     5,     6,
      -1,    -1,    -1,    31,    69,    12,    34,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
       3,     4,     5,     6,    31,    -1,    -1,    34,    -1,    12,
      58,    59,    -1,     3,     4,     5,     6,    -1,    21,    -1,
      -1,    69,    12,    -1,    -1,    15,    16,    17,    -1,    19,
      20,    58,    59,    23,     3,     4,     5,     6,    -1,    -1,
      -1,    31,    69,    12,    34,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    58,    59,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    69,    -1,    58,    59,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    69,
      12,    -1,    -1,    15,    16,    17,    -1,    19,    20,    58,
      59,    23,     3,     4,     5,     6,    -1,    -1,    -1,    31,
      69,    12,    34,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    58,    59,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    69,    12,    -1,
      -1,    15,    16,    17,    -1,    19,    20,    58,    59,    23,
       3,     4,     5,     6,    -1,    -1,    -1,    31,    69,    12,
      34,    -1,    -1,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    58,    59,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    69,    12,    -1,    -1,    -1,
      16,    17,    -1,    19,    20,    58,    59,    23,     3,     4,
       5,     6,    -1,    -1,    -1,    31,    69,    12,    34,    35,
      -1,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    58,    59,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    69,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    20,    58,    59,    23,     3,     4,     5,     6,
      -1,    -1,    -1,    31,    69,    12,    34,    -1,    -1,    16,
      17,    -1,    -1,    20,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    16,    17,
      58,    59,    20,    40,    -1,     3,     4,     5,     6,    -1,
      -1,    69,    -1,    -1,    12,    -1,    -1,     3,     4,     5,
       6,    58,    59,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    40,     3,     4,     5,     6,     3,     4,     5,
       6,    69,    12,    -1,    40,    -1,    12,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    69,    58,    59,    -1,    -1,    12,    -1,    -1,    -1,
      40,    -1,    -1,    69,    40,    -1,    -1,     3,     4,     5,
       6,     3,     4,     5,     6,    -1,    12,    -1,    58,    59,
      12,    -1,    58,    59,    40,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    69,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    58,    59,    40,    -1,    12,    -1,    40,     3,
       4,     5,     6,    69,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    58,    59,    -1,    -1,    58,    59,    -1,     3,
       4,     5,     6,    69,    40,    -1,    -1,    69,    12,    -1,
      -1,     3,     4,     5,     6,    -1,    40,    -1,    -1,    -1,
      12,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    58,    59,    40,     3,     4,     5,
       6,     3,     4,     5,     6,    69,    12,    -1,    40,    -1,
      12,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    69,    58,    59,    -1,    -1,
      12,    -1,    -1,    -1,    40,    -1,    -1,    69,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    58,    59,    40,    -1,
      26,    -1,    -1,    69,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    54,    55,
      56,    57,    58,    59,    40,    -1,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    40,    -1,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    40,    -1,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      71,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    -1,    -1,    71,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    -1,    -1,    71,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    54,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    54,    55,
      56,    57,    58,    59,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    28,    50,    51,    52,    53,    77,    78,    79,
      80,    81,   100,    12,    12,    53,    53,     0,    80,    28,
      40,    95,    95,    12,    40,    14,    15,    29,    82,    83,
      84,    85,   100,    95,    12,    28,    12,    15,    95,    14,
      29,    15,    82,    69,    69,   117,   118,   119,    28,    83,
      12,    12,    28,    15,    12,    40,    86,    87,    88,    89,
      90,     3,     4,     5,     6,    12,    40,    58,    59,    69,
      70,   113,   116,   120,    95,    69,   119,    28,    18,    87,
      88,    70,    40,    73,    40,    73,    69,   118,   120,   113,
     113,   113,    54,    55,    56,    57,    58,    59,    62,    63,
      64,    65,    66,    67,    68,    40,    70,    73,    12,    15,
      16,    17,    19,    20,    23,    30,    31,    34,    69,    91,
      92,    93,    94,    96,    97,   101,   102,   104,   105,   106,
     109,   110,   113,   114,    86,    95,     8,     9,    10,    11,
     115,    40,    40,    95,    12,    40,    89,    12,    40,    90,
     120,    40,    70,    70,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,    70,   113,   117,
      29,    12,    98,    99,    98,    99,   113,   114,   113,   114,
      24,   113,   114,    19,    33,    95,   103,    12,    39,    40,
     113,    15,    30,    92,    95,    95,    95,    95,    95,    54,
      55,    56,    57,    58,    59,    62,    63,    64,    65,    66,
      67,    68,    95,    70,    15,    30,    91,    69,    15,    91,
      89,    90,    70,    69,    18,    18,    18,    62,    18,    62,
      95,    95,    71,    71,   113,   114,    95,    95,   113,   113,
      91,    91,    18,    12,   113,    40,    29,   113,   114,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    95,    29,   113,   114,    15,    30,    70,    14,
      15,   113,   114,   115,   115,   115,    40,   115,    21,    40,
     113,    91,    91,    16,    17,    20,    93,    95,   113,    95,
      95,    95,    15,    15,    95,    95,    32,    32,   115,    18,
      40,    70,    70,    95,    95,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,    15,    91,
      95,    95,    29,   113,   114,    14,    70,    70,    62,    62,
      62,   113,   114,    62,   115,   114,    15,    15,    12,    99,
      99,   113,    72,    91,    91,    24,   111,   112,   111,    29,
      29,   103,    62,   115,    70,    15,    15,    14,    15,    15,
      15,    95,    95,    40,    40,   113,    40,    40,   113,    69,
      19,    19,    69,    18,    18,    62,    71,    93,    15,    22,
      72,   107,   108,    15,    72,   107,    25,    72,   113,   114,
      15,   112,    15,   116,    38,    29,    29,    14,    29,    29,
      15,    15,   114,   114,   114,   114,    70,   113,   115,   115,
      20,   113,   114,    91,    15,    72,   108,    20,    91,    15,
      72,   113,   114,    95,    26,    95,    26,    95,    23,    23,
      26,    12,    29,    29,    74,    62,    62,    71,    71,    15,
      20,    91,    15,    20,    91,    95,    95,    91,   113,   114,
      91,   113,   114,    91,   116,    95,   120,    91,    91,    20,
      15,    20,    15,    91,    91,    95,    95,    95,    95,    36,
      95,    91,    75,    20,    20,    91,    91,    91,    91,   116,
      91,    35,    95,    35,    91,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    88,    88,    88,    89,    89,
      90,    91,    91,    92,    92,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    95,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    97,    97,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   115,   115,   116,   116,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     5,
       6,     6,     7,     1,     3,     1,     1,     6,     9,     9,
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
#line 236 "parser.y"
                         {(yyval.programItemList) = root = (yyvsp[0].programItemList);}
#line 2095 "parser.tab.c"
    break;

  case 3: /* program_items_list: %empty  */
#line 239 "parser.y"
                    {(yyval.programItemList) = 0;}
#line 2101 "parser.tab.c"
    break;

  case 4: /* program_items_list: program_items_list_not_empty  */
#line 240 "parser.y"
                                                {(yyval.programItemList) = createProgramItemsList((yyvsp[0].programListNotEmpty));}
#line 2107 "parser.tab.c"
    break;

  case 5: /* program_items_list_not_empty: program_item  */
#line 243 "parser.y"
                                           { (yyval.programListNotEmpty) = createProgramListNotEmpty((yyvsp[0].programItem)); }
#line 2113 "parser.tab.c"
    break;

  case 6: /* program_items_list_not_empty: program_items_list_not_empty program_item  */
#line 244 "parser.y"
                                                                        { (yyval.programListNotEmpty) = appendProgramToListNotEmpty((yyvsp[-1].programListNotEmpty),(yyvsp[0].programItem)); }
#line 2119 "parser.tab.c"
    break;

  case 7: /* program_item: module  */
#line 247 "parser.y"
                     {(yyval.programItem) = createProgramItem((yyvsp[0].module),0);}
#line 2125 "parser.tab.c"
    break;

  case 8: /* program_item: IMPORTS IDENTIFIER stmt_ends  */
#line 248 "parser.y"
                                             {(yyval.programItem) =  createProgramItem(0,(yyvsp[-1].id_var_name));}
#line 2131 "parser.tab.c"
    break;

  case 9: /* module: MODULE IDENTIFIER stmt_ends END MODULE  */
#line 252 "parser.y"
                                               {(yyval.module) = createModule((yyvsp[-3].id_var_name),0);}
#line 2137 "parser.tab.c"
    break;

  case 10: /* module: MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 253 "parser.y"
                                                                     {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList));}
#line 2143 "parser.tab.c"
    break;

  case 11: /* module: access MODULE IDENTIFIER stmt_ends END MODULE  */
#line 254 "parser.y"
                                                      {(yyval.module) = createModule((yyvsp[-3].id_var_name),0);}
#line 2149 "parser.tab.c"
    break;

  case 12: /* module: access MODULE IDENTIFIER stmt_ends functions_or_sub_list END MODULE  */
#line 255 "parser.y"
                                                                            {(yyval.module) = createModule((yyvsp[-4].id_var_name),(yyvsp[-2].functionOrSubList));}
#line 2155 "parser.tab.c"
    break;

  case 13: /* functions_or_sub_list: function_or_sub  */
#line 259 "parser.y"
                                       {(yyval.functionOrSubList) = createFunctionOrSubList((yyvsp[0].functionOrSub));}
#line 2161 "parser.tab.c"
    break;

  case 14: /* functions_or_sub_list: functions_or_sub_list stmt_ends function_or_sub  */
#line 260 "parser.y"
                                                                       {(yyval.functionOrSubList) = appendFunctionOrSubList((yyvsp[-2].functionOrSubList),(yyvsp[0].functionOrSub));}
#line 2167 "parser.tab.c"
    break;

  case 15: /* function_or_sub: function  */
#line 263 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub(0,(yyvsp[0].function));}
#line 2173 "parser.tab.c"
    break;

  case 16: /* function_or_sub: sub_bloc  */
#line 264 "parser.y"
                          {(yyval.functionOrSub) = createFunctionOrSub((yyvsp[0].subBloc),0);}
#line 2179 "parser.tab.c"
    break;

  case 17: /* function: FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION  */
#line 267 "parser.y"
                                                               {(yyval.function) = createFunction((yyvsp[-4].id_var_name),(yyvsp[-3].expressionList),0,0);}
#line 2185 "parser.tab.c"
    break;

  case 18: /* function: FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION  */
#line 268 "parser.y"
                                                                                                {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2191 "parser.tab.c"
    break;

  case 19: /* function: FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION  */
#line 269 "parser.y"
                                                                                               {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2197 "parser.tab.c"
    break;

  case 20: /* function: FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION  */
#line 270 "parser.y"
                                                                         {(yyval.function) = createFunction((yyvsp[-5].id_var_name),(yyvsp[-4].expressionList),(yyvsp[-2].stmtList),0);}
#line 2203 "parser.tab.c"
    break;

  case 21: /* function: FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION  */
#line 271 "parser.y"
                                                                                                          {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2209 "parser.tab.c"
    break;

  case 22: /* function: FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION  */
#line 272 "parser.y"
                                                                                                         {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2215 "parser.tab.c"
    break;

  case 23: /* function: access FUNCTION IDENTIFIER arguments stmt_ends END FUNCTION  */
#line 273 "parser.y"
                                                                      {(yyval.function) = createFunction((yyvsp[-4].id_var_name),(yyvsp[-3].expressionList),0,0,0);}
#line 2221 "parser.tab.c"
    break;

  case 24: /* function: access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_singleline stmt_ends END FUNCTION  */
#line 274 "parser.y"
                                                                                                       {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2227 "parser.tab.c"
    break;

  case 25: /* function: access FUNCTION IDENTIFIER arguments stmt_ends RETURN expr_multiline stmt_ends END FUNCTION  */
#line 275 "parser.y"
                                                                                                      {(yyval.function) = createFunction((yyvsp[-7].id_var_name),(yyvsp[-6].expressionList),0,(yyvsp[-3].expression));}
#line 2233 "parser.tab.c"
    break;

  case 26: /* function: access FUNCTION IDENTIFIER arguments stmt_ends stmt_list END FUNCTION  */
#line 276 "parser.y"
                                                                                {(yyval.function) = createFunction((yyvsp[-5].id_var_name),(yyvsp[-4].expressionList),(yyvsp[-2].stmtList),0);}
#line 2239 "parser.tab.c"
    break;

  case 27: /* function: access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_singleline stmt_ends END FUNCTION  */
#line 277 "parser.y"
                                                                                                                 {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2245 "parser.tab.c"
    break;

  case 28: /* function: access FUNCTION IDENTIFIER arguments stmt_ends stmt_list RETURN expr_multiline stmt_ends END FUNCTION  */
#line 278 "parser.y"
                                                                                                                {(yyval.function) = createFunction((yyvsp[-8].id_var_name),(yyvsp[-7].expressionList),(yyvsp[-5].stmtList),(yyvsp[-3].expression));}
#line 2251 "parser.tab.c"
    break;

  case 29: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB  */
#line 282 "parser.y"
                                                                        {(yyval.subBloc) = createSubBloc((yyvsp[-6].id_var_name),(yyvsp[-4].parameterListOrEmpty),0);}
#line 2257 "parser.tab.c"
    break;

  case 30: /* sub_bloc: SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB  */
#line 283 "parser.y"
                                                                                  {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),(yyvsp[-2].stmtList));}
#line 2263 "parser.tab.c"
    break;

  case 31: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends END SUB  */
#line 284 "parser.y"
                                                                               {(yyval.subBloc) = createSubBloc((yyvsp[-6].id_var_name),(yyvsp[-4].parameterListOrEmpty),0);}
#line 2269 "parser.tab.c"
    break;

  case 32: /* sub_bloc: access SUB IDENTIFIER '(' parameterlist_or_empty ')' stmt_ends stmt_list END SUB  */
#line 285 "parser.y"
                                                                                         {(yyval.subBloc) = createSubBloc((yyvsp[-7].id_var_name),(yyvsp[-5].parameterListOrEmpty),(yyvsp[-2].stmtList));}
#line 2275 "parser.tab.c"
    break;

  case 33: /* parameterlist_or_empty: %empty  */
#line 288 "parser.y"
                         {(yyval.parameterListOrEmpty) = 0;}
#line 2281 "parser.tab.c"
    break;

  case 34: /* parameterlist_or_empty: parameterlist_with_type  */
#line 289 "parser.y"
                                                {(yyval.parameterListOrEmpty) = createParameterListWithType((yyvsp[0].parameterListWithType), 0);}
#line 2287 "parser.tab.c"
    break;

  case 35: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type END_OF_LINE  */
#line 290 "parser.y"
                                                                        {(yyval.parameterListOrEmpty) = createParameterListWithType((yyvsp[-1].parameterListWithType), 0);}
#line 2293 "parser.tab.c"
    break;

  case 36: /* parameterlist_or_empty: END_OF_LINE parameterlist_with_type  */
#line 291 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListWithType((yyvsp[0].parameterListWithType), 0);}
#line 2299 "parser.tab.c"
    break;

  case 37: /* parameterlist_or_empty: parameterlist_with_type END_OF_LINE  */
#line 292 "parser.y"
                                                            {(yyval.parameterListOrEmpty) = createParameterListWithType((yyvsp[-1].parameterListWithType), 0);}
#line 2305 "parser.tab.c"
    break;

  case 38: /* parameterlist_or_empty: parameterlist_without_type  */
#line 293 "parser.y"
                                                   {(yyval.parameterListOrEmpty) = createParameterListWithType(0, (yyvsp[0].parameterListWithoutType));}
#line 2311 "parser.tab.c"
    break;

  case 39: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type END_OF_LINE  */
#line 294 "parser.y"
                                                                           {(yyval.parameterListOrEmpty) = createParameterListWithType(0, (yyvsp[-1].parameterListWithoutType));}
#line 2317 "parser.tab.c"
    break;

  case 40: /* parameterlist_or_empty: parameterlist_without_type END_OF_LINE  */
#line 295 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListWithType(0, (yyvsp[-1].parameterListWithoutType));}
#line 2323 "parser.tab.c"
    break;

  case 41: /* parameterlist_or_empty: END_OF_LINE parameterlist_without_type  */
#line 296 "parser.y"
                                                               {(yyval.parameterListOrEmpty) = createParameterListWithType(0, (yyvsp[0].parameterListWithoutType));}
#line 2329 "parser.tab.c"
    break;

  case 42: /* parameterlist_with_type: parameter_with_type  */
#line 299 "parser.y"
                                             {(yyval.parameterListWithType) = createParameterListWithType((yyvsp[0].parameterWithType));}
#line 2335 "parser.tab.c"
    break;

  case 43: /* parameterlist_with_type: parameterlist_with_type ',' parameter_with_type  */
#line 300 "parser.y"
                                                                         {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-2].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2341 "parser.tab.c"
    break;

  case 44: /* parameterlist_with_type: parameterlist_with_type ',' END_OF_LINE parameter_with_type  */
#line 301 "parser.y"
                                                                                     {(yyval.parameterListWithType) = appendParameterListWithType((yyvsp[-3].parameterListWithType),(yyvsp[0].parameterWithType));}
#line 2347 "parser.tab.c"
    break;

  case 45: /* parameterlist_without_type: parameter_without_type  */
#line 305 "parser.y"
                                                   {(yyval.parameterListWithoutType) = createParameterListWithoutType((yyvsp[0].parameterWithoutType));}
#line 2353 "parser.tab.c"
    break;

  case 46: /* parameterlist_without_type: parameterlist_without_type ',' parameter_without_type  */
#line 306 "parser.y"
                                                                                  {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-2].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2359 "parser.tab.c"
    break;

  case 47: /* parameterlist_without_type: parameterlist_without_type ',' END_OF_LINE parameter_without_type  */
#line 307 "parser.y"
                                                                                              {(yyval.parameterListWithoutType) = appendParameterListWithoutType((yyvsp[-3].parameterListWithoutType),(yyvsp[0].parameterWithoutType));}
#line 2365 "parser.tab.c"
    break;

  case 48: /* parameter_with_type: IDENTIFIER AS basic_literal  */
#line 311 "parser.y"
                                                 {(yyval.parameterWithType) = createParameterWithType((yyvsp[-2].id_var_name),(yyvsp[0].vt));}
#line 2371 "parser.tab.c"
    break;

  case 49: /* parameter_with_type: IDENTIFIER AS basic_literal '(' ')'  */
#line 312 "parser.y"
                                                          {(yyval.parameterWithType) = createParameterWithType((yyvsp[-4].id_var_name),(yyvsp[-2].vt));}
#line 2377 "parser.tab.c"
    break;

  case 50: /* parameter_without_type: IDENTIFIER  */
#line 316 "parser.y"
                                   {(yyval.parameterWithoutType) = createParameterWithoutType((yyvsp[0].id_var_name));}
#line 2383 "parser.tab.c"
    break;

  case 51: /* stmt_list: stmt  */
#line 322 "parser.y"
                { (yyval.stmtList) = createStmtList((yyvsp[0].statement)); }
#line 2389 "parser.tab.c"
    break;

  case 52: /* stmt_list: stmt_list stmt  */
#line 323 "parser.y"
                          { (yyval.stmtList) = appendStmtList((yyvsp[-1].stmtList),(yyvsp[0].statement)); }
#line 2395 "parser.tab.c"
    break;

  case 53: /* stmt: multi_line_stmt  */
#line 327 "parser.y"
                      {(yyval.statement) = createStatement(ST_MULTI, (StmtValue){.statementMulti=(yyvsp[0].statementMulti)});}
#line 2401 "parser.tab.c"
    break;

  case 54: /* stmt: single_line_stmt stmt_ends  */
#line 328 "parser.y"
                                 {(yyval.statement) = createStatement(ST_SINGLE, (StmtValue){.statementSingle=(yyvsp[-1].statementSingle)});}
#line 2407 "parser.tab.c"
    break;

  case 55: /* single_line_stmt: if_stmt_single_line  */
#line 332 "parser.y"
                                      {(yyval.statementSingle) = createStatementSingle(ST_IF_SINGLE, (StmtSingleValue){.ifStmtSingle=(yyvsp[0].ifStmtSingle)});}
#line 2413 "parser.tab.c"
    break;

  case 56: /* single_line_stmt: decl_stmt_single_line  */
#line 333 "parser.y"
                                                        {(yyval.statementSingle) = createStatementSingle(ST_DECL_SINGLE, (StmtSingleValue){.declStmtSingle=(yyvsp[0].declStmtSingle)});}
#line 2419 "parser.tab.c"
    break;

  case 57: /* single_line_stmt: expr_singleline  */
#line 334 "parser.y"
                                                  {(yyval.statementSingle) = createStatementSingle(EXPR_SINGLE, (StmtSingleValue){.expression=(yyvsp[0].expression)});}
#line 2425 "parser.tab.c"
    break;

  case 58: /* multi_line_stmt: if_stmt_multi_line stmt_ends  */
#line 337 "parser.y"
                                              {(yyval.statementMulti) = createStatementMulti(ST_IF_MULTI, (StmtMultiValue){.ifStmtMulti=(yyvsp[-1].ifStmtMulti)});}
#line 2431 "parser.tab.c"
    break;

  case 59: /* multi_line_stmt: decl_stmt stmt_ends  */
#line 338 "parser.y"
                                     {(yyval.statementMulti) = createStatementMulti(ST_DECL_MULTI, (StmtMultiValue){.declStmtMulti=(yyvsp[-1].declStmtMulti)});}
#line 2437 "parser.tab.c"
    break;

  case 60: /* multi_line_stmt: expr_multiline stmt_ends  */
#line 339 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(EXPR_MULTI, (StmtMultiValue){.expression=(yyvsp[-1].expression)});}
#line 2443 "parser.tab.c"
    break;

  case 61: /* multi_line_stmt: while_stmt stmt_ends  */
#line 340 "parser.y"
                                      {(yyval.statementMulti) = createStatementMulti(ST_WHILE_MULTI, (StmtMultiValue){.whileStmt=(yyvsp[-1].whileStmt)});}
#line 2449 "parser.tab.c"
    break;

  case 62: /* multi_line_stmt: do_loop_stmt  */
#line 341 "parser.y"
                                          {(yyval.statementMulti) = createStatementMulti(ST_DOLOOP_MULTI, (StmtMultiValue){.doLoopStmt=(yyvsp[0].doLoopStmt)});}
#line 2455 "parser.tab.c"
    break;

  case 63: /* multi_line_stmt: for_loop_stmt  */
#line 342 "parser.y"
                                           {(yyval.statementMulti) = createStatementMulti(ST_FORLOOP_MULTI, (StmtMultiValue){.forLoopStmt=(yyvsp[0].forLoopStmt)});}
#line 2461 "parser.tab.c"
    break;

  case 64: /* multi_line_stmt: for_each_loop_stmt  */
#line 343 "parser.y"
                                                {(yyval.statementMulti) = createStatementMulti(ST_FOREACHLOOP_MULTI, (StmtMultiValue){.forEachLoopStmt=(yyvsp[0].forEachLoopStmt)});}
#line 2467 "parser.tab.c"
    break;

  case 65: /* multi_line_stmt: select_stmt stmt_ends  */
#line 344 "parser.y"
                                       {(yyval.statementMulti) = createStatementMulti(ST_SELECT_MULTI, (StmtMultiValue){.selectStmt=(yyvsp[-1].selectStmt)});}
#line 2473 "parser.tab.c"
    break;

  case 66: /* stmt_ends: END_OF_LINE  */
#line 349 "parser.y"
                       { }
#line 2479 "parser.tab.c"
    break;

  case 67: /* stmt_ends: stmt_ends END_OF_LINE  */
#line 350 "parser.y"
                            { }
#line 2485 "parser.tab.c"
    break;

  case 68: /* decl_stmt: CONST var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 356 "parser.y"
                                                                          {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2491 "parser.tab.c"
    break;

  case 69: /* decl_stmt: CONST var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 357 "parser.y"
                                                                                     {(yyval.declStmtMulti) = createDeclStmtMulti(1, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2497 "parser.tab.c"
    break;

  case 70: /* decl_stmt: DIM var_name AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 358 "parser.y"
                                                                        {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameMulti), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2503 "parser.tab.c"
    break;

  case 71: /* decl_stmt: DIM var_name_singleline AS basic_literal '=' END_OF_LINE expr_multiline  */
#line 359 "parser.y"
                                                                                   {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-5].varNameSingle), (yyvsp[-3].vt), (yyvsp[0].expression));}
#line 2509 "parser.tab.c"
    break;

  case 72: /* decl_stmt: DIM var_name '=' END_OF_LINE expr_multiline  */
#line 360 "parser.y"
                                                       {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameMulti), 0, (yyvsp[0].expression));}
#line 2515 "parser.tab.c"
    break;

  case 73: /* decl_stmt: DIM var_name_singleline '=' END_OF_LINE expr_multiline  */
#line 361 "parser.y"
                                                                  {(yyval.declStmtMulti) = createDeclStmtMulti(0, (yyvsp[-3].varNameSingle), 0, (yyvsp[0].expression));}
#line 2521 "parser.tab.c"
    break;

  case 74: /* decl_stmt_single_line: CONST var_name_singleline AS basic_literal '=' expr_singleline  */
#line 365 "parser.y"
                                                                                      {(yyval.declStmtSingle) = createDeclStmtSingle(1, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression));}
#line 2527 "parser.tab.c"
    break;

  case 75: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal '=' expr_singleline  */
#line 366 "parser.y"
                                                                                                        {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-4].varNameSingle), (yyvsp[-2].vt), (yyvsp[0].expression));}
#line 2533 "parser.tab.c"
    break;

  case 76: /* decl_stmt_single_line: DIM var_name_singleline AS basic_literal  */
#line 367 "parser.y"
                                                                                    {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), (yyvsp[0].vt), 0);}
#line 2539 "parser.tab.c"
    break;

  case 77: /* decl_stmt_single_line: DIM var_name_singleline '=' expr_singleline  */
#line 368 "parser.y"
                                                                                       {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[-2].varNameSingle), 0, (yyvsp[0].expression));}
#line 2545 "parser.tab.c"
    break;

  case 78: /* decl_stmt_single_line: DIM var_name_singleline  */
#line 369 "parser.y"
                                                                   {(yyval.declStmtSingle) = createDeclStmtSingle(0, (yyvsp[0].varNameSingle), 0, 0);}
#line 2551 "parser.tab.c"
    break;

  case 79: /* decl_stmt_single_line: DIM var_name_singleline '=' NEW basic_literal '(' ')' '{' expr_list '}'  */
#line 370 "parser.y"
                                                                                             {}
#line 2557 "parser.tab.c"
    break;

  case 80: /* var_name: IDENTIFIER '(' expr_multiline ')'  */
#line 374 "parser.y"
                                           {(yyval.varNameMulti) = createVarNameMulti((yyvsp[-3].id_var_name), (yyvsp[-1].expression));}
#line 2563 "parser.tab.c"
    break;

  case 81: /* var_name_singleline: IDENTIFIER '(' expr_singleline ')'  */
#line 377 "parser.y"
                                                       {(yyval.varNameSingle) = createVarNameSingle((yyvsp[-3].id_var_name), (yyvsp[-1].expression));}
#line 2569 "parser.tab.c"
    break;

  case 82: /* var_name_singleline: IDENTIFIER  */
#line 378 "parser.y"
                     {(yyval.varNameSingle) = createVarNameSingle((yyvsp[0].id_var_name), 0);}
#line 2575 "parser.tab.c"
    break;

  case 89: /* while_stmt: WHILE expr_multiline stmt_ends stmt_list END WHILE  */
#line 393 "parser.y"
                                                               {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2581 "parser.tab.c"
    break;

  case 90: /* while_stmt: WHILE expr_singleline stmt_ends stmt_list END WHILE  */
#line 394 "parser.y"
                                                                {(yyval.whileStmt) = createWhileStmt((yyvsp[-4].expression), (yyvsp[-2].stmtList));}
#line 2587 "parser.tab.c"
    break;

  case 91: /* do_loop_stmt: DO do_loop_condition stmt_list LOOP  */
#line 399 "parser.y"
                                                  {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[-2].doLoopCondition), (yyvsp[-1].stmtList));}
#line 2593 "parser.tab.c"
    break;

  case 92: /* do_loop_stmt: DO stmt_ends stmt_list LOOP do_loop_condition  */
#line 400 "parser.y"
                                                                        {(yyval.doLoopStmt) = createDoLoopStmt((yyvsp[0].doLoopCondition), (yyvsp[-2].stmtList));}
#line 2599 "parser.tab.c"
    break;

  case 93: /* do_loop_condition: UNTIL expr_singleline stmt_ends  */
#line 403 "parser.y"
                                                   {(yyval.doLoopCondition) = createDoLoopCondition(1, (yyvsp[-1].expression));}
#line 2605 "parser.tab.c"
    break;

  case 94: /* do_loop_condition: WHILE expr_singleline stmt_ends  */
#line 404 "parser.y"
                                                                   {(yyval.doLoopCondition) = createDoLoopCondition(0, (yyvsp[-1].expression));}
#line 2611 "parser.tab.c"
    break;

  case 95: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value stmt_ends stmt_list NEXT  */
#line 409 "parser.y"
                                                                                                                       {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-9].id_var_name), (yyvsp[-7].vt), (yyvsp[-5].expression), (yyvsp[-3].expression), 0, (yyvsp[-1].stmtList));}
#line 2617 "parser.tab.c"
    break;

  case 96: /* for_loop_stmt: FOR IDENTIFIER AS basic_literal '=' basic_literal_value TO basic_literal_value STEP basic_literal_value stmt_ends stmt_list NEXT  */
#line 410 "parser.y"
                                                                                                                                                            {(yyval.forLoopStmt) = createForLoopStmt((yyvsp[-11].id_var_name), (yyvsp[-9].vt), (yyvsp[-7].expression), (yyvsp[-5].expression), (yyvsp[-3].expression), (yyvsp[-1].stmtList));}
#line 2623 "parser.tab.c"
    break;

  case 97: /* for_each_loop_stmt: FOR EACH IDENTIFIER AS basic_literal IN IDENTIFIER stmt_ends stmt_list NEXT  */
#line 415 "parser.y"
                                                                                                {(yyval.forEachLoopStmt) = createForEachLoopStmt((yyvsp[-7].id_var_name), (yyvsp[-5].vt), (yyvsp[-3].id_var_name), (yyvsp[-1].stmtList));}
#line 2629 "parser.tab.c"
    break;

  case 98: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list END IF  */
#line 420 "parser.y"
                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0);}
#line 2635 "parser.tab.c"
    break;

  case 99: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list END IF  */
#line 421 "parser.y"
                                                                       {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-5].expression), (yyvsp[-2].stmtList), 0, 0);}
#line 2641 "parser.tab.c"
    break;

  case 100: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list ELSE stmt_list END IF  */
#line 422 "parser.y"
                                                                                                     {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-7].expression), (yyvsp[-4].stmtList), 0, (yyvsp[-2].stmtList));}
#line 2647 "parser.tab.c"
    break;

  case 101: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list ELSE stmt_list END IF  */
#line 423 "parser.y"
                                                                                                      {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-7].expression), (yyvsp[-4].stmtList), 0, (yyvsp[-2].stmtList));}
#line 2653 "parser.tab.c"
    break;

  case 102: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list END IF  */
#line 424 "parser.y"
                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0);}
#line 2659 "parser.tab.c"
    break;

  case 103: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list END IF  */
#line 425 "parser.y"
                                                                                   {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-6].expression), (yyvsp[-3].stmtList), (yyvsp[-2].elseIfList), 0);}
#line 2665 "parser.tab.c"
    break;

  case 104: /* if_stmt_multi_line: IF expr_multiline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF  */
#line 426 "parser.y"
                                                                                                                 {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), (yyvsp[-4].elseIfList), (yyvsp[-2].stmtList));}
#line 2671 "parser.tab.c"
    break;

  case 105: /* if_stmt_multi_line: IF expr_singleline THEN stmt_ends stmt_list elseif_list ELSE stmt_list END IF  */
#line 427 "parser.y"
                                                                                                                  {(yyval.ifStmtMulti) = createIfStmtMulti((yyvsp[-8].expression), (yyvsp[-5].stmtList), (yyvsp[-4].elseIfList), (yyvsp[-2].stmtList));}
#line 2677 "parser.tab.c"
    break;

  case 106: /* elseif_list: elseif  */
#line 430 "parser.y"
                    {(yyval.elseIfList) = createElseIfList((yyvsp[0].elseIf));}
#line 2683 "parser.tab.c"
    break;

  case 107: /* elseif_list: elseif_list elseif  */
#line 431 "parser.y"
                                {(yyval.elseIfList) = appendElseIfList((yyvsp[-1].elseIfList), (yyvsp[0].elseIf));}
#line 2689 "parser.tab.c"
    break;

  case 108: /* elseif: ELSEIF expr_multiline THEN stmt_list  */
#line 434 "parser.y"
                                             {(yyval.elseIf) = createElseIf((yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2695 "parser.tab.c"
    break;

  case 109: /* elseif: ELSEIF expr_singleline THEN stmt_list  */
#line 435 "parser.y"
                                              {(yyval.elseIf) = createElseIf((yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2701 "parser.tab.c"
    break;

  case 110: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt  */
#line 437 "parser.y"
                                                               {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-2].expression), (yyvsp[0].statementSingle), 0);}
#line 2707 "parser.tab.c"
    break;

  case 111: /* if_stmt_single_line: IF expr_singleline THEN single_line_stmt ELSE single_line_stmt  */
#line 438 "parser.y"
                                                                                     {(yyval.ifStmtSingle) = createIfStmtSingle((yyvsp[-4].expression), (yyvsp[-2].statementSingle), (yyvsp[0].statementSingle));}
#line 2713 "parser.tab.c"
    break;

  case 112: /* select_stmt: SELECT CASE expr_singleline stmt_ends case_list END SELECT  */
#line 443 "parser.y"
                                                                        {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2719 "parser.tab.c"
    break;

  case 113: /* select_stmt: SELECT CASE expr_multiline stmt_ends case_list END SELECT  */
#line 444 "parser.y"
                                                                       {(yyval.selectStmt) = createSelectStmt((yyvsp[-4].expression), (yyvsp[-2].caseList));}
#line 2725 "parser.tab.c"
    break;

  case 114: /* case_list: case_stmt  */
#line 447 "parser.y"
                     {(yyval.caseList) = createCaseList((yyvsp[0].caseStmt));}
#line 2731 "parser.tab.c"
    break;

  case 115: /* case_list: case_list case_stmt  */
#line 448 "parser.y"
                                      {(yyval.caseList) = appendCaseList((yyvsp[-1].caseList), (yyvsp[0].caseStmt));}
#line 2737 "parser.tab.c"
    break;

  case 116: /* case_stmt: CASE expr_multiline stmt_ends stmt_list  */
#line 451 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2743 "parser.tab.c"
    break;

  case 117: /* case_stmt: CASE expr_singleline stmt_ends stmt_list  */
#line 452 "parser.y"
                                                   {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2749 "parser.tab.c"
    break;

  case 118: /* case_stmt: CASE IS expr_multiline stmt_ends stmt_list  */
#line 453 "parser.y"
                                                     {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2755 "parser.tab.c"
    break;

  case 119: /* case_stmt: CASE IS expr_singleline stmt_ends stmt_list  */
#line 454 "parser.y"
                                                      {(yyval.caseStmt) = createCaseStmt(1, (yyvsp[-2].expression), 0, (yyvsp[0].stmtList));}
#line 2761 "parser.tab.c"
    break;

  case 120: /* case_stmt: CASE expr_multiline TO expr_multiline stmt_ends stmt_list  */
#line 455 "parser.y"
                                                                    {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2767 "parser.tab.c"
    break;

  case 121: /* case_stmt: CASE expr_multiline TO expr_singleline stmt_ends stmt_list  */
#line 456 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2773 "parser.tab.c"
    break;

  case 122: /* case_stmt: CASE expr_singleline TO expr_multiline stmt_ends stmt_list  */
#line 457 "parser.y"
                                                                     {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2779 "parser.tab.c"
    break;

  case 123: /* case_stmt: CASE expr_singleline TO expr_singleline stmt_ends stmt_list  */
#line 458 "parser.y"
                                                                      {(yyval.caseStmt) = createCaseStmt(0, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].stmtList));}
#line 2785 "parser.tab.c"
    break;

  case 124: /* case_stmt: CASE ELSE stmt_ends stmt_list  */
#line 459 "parser.y"
                                        {(yyval.caseStmt) = createCaseStmt(0, 0, 0, (yyvsp[0].stmtList));}
#line 2791 "parser.tab.c"
    break;

  case 125: /* expr_singleline: basic_literal_value  */
#line 465 "parser.y"
                                     {(yyval.expression) = (yyvsp[0].expression);}
#line 2797 "parser.tab.c"
    break;

  case 126: /* expr_singleline: '-' expr_singleline  */
#line 466 "parser.y"
                                                  {(yyval.expression) = createExpression(ET_MINUS, 0, (yyvsp[0].expression));}
#line 2803 "parser.tab.c"
    break;

  case 127: /* expr_singleline: '+' expr_singleline  */
#line 467 "parser.y"
                                                 {(yyval.expression) = createExpression(ET_PLUS, 0, (yyvsp[0].expression));}
#line 2809 "parser.tab.c"
    break;

  case 128: /* expr_singleline: expr_singleline '+' expr_singleline  */
#line 468 "parser.y"
                                          {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2815 "parser.tab.c"
    break;

  case 129: /* expr_singleline: expr_singleline '-' expr_singleline  */
#line 469 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 2821 "parser.tab.c"
    break;

  case 130: /* expr_singleline: expr_singleline '*' expr_singleline  */
#line 470 "parser.y"
                                          {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2827 "parser.tab.c"
    break;

  case 131: /* expr_singleline: expr_singleline '/' expr_singleline  */
#line 471 "parser.y"
                                          {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2833 "parser.tab.c"
    break;

  case 132: /* expr_singleline: expr_singleline INT_DIV expr_singleline  */
#line 472 "parser.y"
                                              {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2839 "parser.tab.c"
    break;

  case 133: /* expr_singleline: expr_singleline '=' expr_singleline  */
#line 473 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2845 "parser.tab.c"
    break;

  case 134: /* expr_singleline: expr_singleline '<' expr_singleline  */
#line 474 "parser.y"
                                          {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2851 "parser.tab.c"
    break;

  case 135: /* expr_singleline: expr_singleline '>' expr_singleline  */
#line 475 "parser.y"
                                          {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2857 "parser.tab.c"
    break;

  case 136: /* expr_singleline: expr_singleline '^' expr_singleline  */
#line 476 "parser.y"
                                          {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2863 "parser.tab.c"
    break;

  case 137: /* expr_singleline: expr_singleline NOT_EQUAL expr_singleline  */
#line 477 "parser.y"
                                                {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2869 "parser.tab.c"
    break;

  case 138: /* expr_singleline: expr_singleline LESS_OR_EQUAL expr_singleline  */
#line 478 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2875 "parser.tab.c"
    break;

  case 139: /* expr_singleline: expr_singleline MORE_OR_EQUAL expr_singleline  */
#line 479 "parser.y"
                                                    {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2881 "parser.tab.c"
    break;

  case 140: /* expr_singleline: expr_singleline '&' expr_singleline  */
#line 480 "parser.y"
                                          {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-2].expression), (yyvsp[0].expression));}
#line 2887 "parser.tab.c"
    break;

  case 141: /* expr_singleline: '(' expr_singleline ')'  */
#line 481 "parser.y"
                              {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression));}
#line 2893 "parser.tab.c"
    break;

  case 142: /* expr_singleline: IDENTIFIER  */
#line 482 "parser.y"
                 {(yyval.expression) = createSimpleExpression(ET_ID, (Value){.string_val=(yyvsp[0].id_var_name)});}
#line 2899 "parser.tab.c"
    break;

  case 143: /* expr_singleline: IDENTIFIER arguments_singleline  */
#line 483 "parser.y"
                                      {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expression));}
#line 2905 "parser.tab.c"
    break;

  case 144: /* expr_multiline: expr_singleline '+' END_OF_LINE expr_singleline  */
#line 486 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_PLUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2911 "parser.tab.c"
    break;

  case 145: /* expr_multiline: expr_singleline '-' END_OF_LINE expr_singleline  */
#line 487 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MINUS, (yyvsp[-3].expression), (yyvsp[0].expression)); }
#line 2917 "parser.tab.c"
    break;

  case 146: /* expr_multiline: expr_singleline '*' END_OF_LINE expr_singleline  */
#line 488 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_MULT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2923 "parser.tab.c"
    break;

  case 147: /* expr_multiline: expr_singleline '/' END_OF_LINE expr_singleline  */
#line 489 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_DIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2929 "parser.tab.c"
    break;

  case 148: /* expr_multiline: expr_singleline INT_DIV END_OF_LINE expr_singleline  */
#line 490 "parser.y"
                                                                    {(yyval.expression) = createExpression(ET_INTDIV, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2935 "parser.tab.c"
    break;

  case 149: /* expr_multiline: expr_singleline '=' END_OF_LINE expr_singleline  */
#line 491 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2941 "parser.tab.c"
    break;

  case 150: /* expr_multiline: expr_singleline '<' END_OF_LINE expr_singleline  */
#line 492 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_LESSER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2947 "parser.tab.c"
    break;

  case 151: /* expr_multiline: expr_singleline '>' END_OF_LINE expr_singleline  */
#line 493 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_GREATER, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2953 "parser.tab.c"
    break;

  case 152: /* expr_multiline: expr_singleline '^' END_OF_LINE expr_singleline  */
#line 494 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_EXP, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2959 "parser.tab.c"
    break;

  case 153: /* expr_multiline: expr_singleline NOT_EQUAL END_OF_LINE expr_singleline  */
#line 495 "parser.y"
                                                                      {(yyval.expression) = createExpression(ET_NOT_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2965 "parser.tab.c"
    break;

  case 154: /* expr_multiline: expr_singleline LESS_OR_EQUAL END_OF_LINE expr_singleline  */
#line 496 "parser.y"
                                                                           {(yyval.expression) = createExpression(ET_LESSER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2971 "parser.tab.c"
    break;

  case 155: /* expr_multiline: expr_singleline MORE_OR_EQUAL END_OF_LINE expr_singleline  */
#line 497 "parser.y"
                                                                          {(yyval.expression) = createExpression(ET_GREATER_EQUAL, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2977 "parser.tab.c"
    break;

  case 156: /* expr_multiline: expr_singleline '&' END_OF_LINE expr_singleline  */
#line 498 "parser.y"
                                                                {(yyval.expression) = createExpression(ET_CONCAT, (yyvsp[-3].expression), (yyvsp[0].expression));}
#line 2983 "parser.tab.c"
    break;

  case 157: /* expr_multiline: '(' END_OF_LINE expr_singleline ')'  */
#line 499 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expression));}
#line 2989 "parser.tab.c"
    break;

  case 158: /* expr_multiline: '(' END_OF_LINE expr_singleline END_OF_LINE ')'  */
#line 500 "parser.y"
                                                                {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 2995 "parser.tab.c"
    break;

  case 159: /* expr_multiline: '(' expr_singleline END_OF_LINE ')'  */
#line 501 "parser.y"
                                                    {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expression));}
#line 3001 "parser.tab.c"
    break;

  case 160: /* expr_multiline: IDENTIFIER arguments_multiline  */
#line 502 "parser.y"
                                               {(yyval.expression) = createExpressionWithList(ET_ARRAY_OR_FUNC, (Value){.string_val=(yyvsp[-1].id_var_name)}, (yyvsp[0].expression));}
#line 3007 "parser.tab.c"
    break;

  case 161: /* basic_literal: INT  */
#line 506 "parser.y"
                   {(yyval.vt) = VT_INTEGER;}
#line 3013 "parser.tab.c"
    break;

  case 162: /* basic_literal: STRING  */
#line 507 "parser.y"
                     {(yyval.vt) = VT_STRING;}
#line 3019 "parser.tab.c"
    break;

  case 163: /* basic_literal: BOOLEAN  */
#line 508 "parser.y"
                      {(yyval.vt) = VT_BOOLEAN;}
#line 3025 "parser.tab.c"
    break;

  case 164: /* basic_literal: DOUBLE  */
#line 509 "parser.y"
                     {(yyval.vt) = VT_DOUBLE;}
#line 3031 "parser.tab.c"
    break;

  case 165: /* basic_literal_value: INT_VALUE  */
#line 512 "parser.y"
                               {(yyval.expression) = createSimpleExpression(VT_INTEGER, (Value){.int_val = (yyvsp[0].int_val)});}
#line 3037 "parser.tab.c"
    break;

  case 166: /* basic_literal_value: STRING_VALUE  */
#line 513 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_STRING, (Value){.string_val=(yyvsp[0].str_val)});}
#line 3043 "parser.tab.c"
    break;

  case 167: /* basic_literal_value: BOOLEAN_VALUE  */
#line 514 "parser.y"
                                   {(yyval.expression) = createSimpleExpression(VT_BOOLEAN, (Value){.int_val=(yyvsp[0].bool_val)});}
#line 3049 "parser.tab.c"
    break;

  case 168: /* basic_literal_value: DOUBLE_VALUE  */
#line 515 "parser.y"
                                  {(yyval.expression) = createSimpleExpression(VT_DOUBLE, (Value){.double_val=(yyvsp[0].double_val)});}
#line 3055 "parser.tab.c"
    break;

  case 169: /* arguments_multiline: '(' END_OF_LINE expr_list ')'  */
#line 520 "parser.y"
                                                   {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expressionList));}
#line 3061 "parser.tab.c"
    break;

  case 170: /* arguments_multiline: '(' END_OF_LINE expr_list END_OF_LINE ')'  */
#line 521 "parser.y"
                                                               {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expressionList));}
#line 3067 "parser.tab.c"
    break;

  case 171: /* arguments_multiline: '(' expr_list END_OF_LINE ')'  */
#line 522 "parser.y"
                                                   {(yyval.expression) = createExpression(0, 0, (yyvsp[-2].expressionList));}
#line 3073 "parser.tab.c"
    break;

  case 172: /* arguments_singleline: '(' expr_list ')'  */
#line 526 "parser.y"
                                        {(yyval.expression) = createExpression(0, 0, (yyvsp[-1].expressionList));}
#line 3079 "parser.tab.c"
    break;

  case 173: /* arguments_singleline: '(' ')'  */
#line 527 "parser.y"
                              {(yyval.expression) = 0;}
#line 3085 "parser.tab.c"
    break;

  case 174: /* arguments: arguments_multiline  */
#line 530 "parser.y"
                               {(yyval.expressionList) = createExpressionList((yyvsp[0].expression));}
#line 3091 "parser.tab.c"
    break;

  case 175: /* arguments: arguments_singleline  */
#line 531 "parser.y"
                               {(yyval.expressionList) = createExpressionList((yyvsp[0].expression));}
#line 3097 "parser.tab.c"
    break;

  case 176: /* expr_list: expr_singleline  */
#line 535 "parser.y"
                           {(yyval.expressionList) = createExpressionList((yyvsp[0].expression));}
#line 3103 "parser.tab.c"
    break;

  case 177: /* expr_list: expr_list ',' expr_singleline  */
#line 536 "parser.y"
                                         {(yyval.expressionList) = appendExpressionToList((yyvsp[-2].expressionList),(yyvsp[0].expression));}
#line 3109 "parser.tab.c"
    break;


#line 3113 "parser.tab.c"

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

#line 540 "parser.y"



int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();
        fclose(yyin);
		

		freopen("../gen_tree/tree_img.txt", "w", stdout);
		printTree(root);
		fclose(stdout);
		fclose (yyin);
    }
    else {
        yyerror("not found file");
    }
  
	return 0;
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
	list->end->nextInList = list;
	list->end = programItem;

	return list;
}


ProgramItem *createProgramItem(Module *module, char *id_var_name)
{
	ProgramItem *result = (ProgramItem *)malloc(sizeof(ProgramItem));

	result->isImport = id_var_name != 0;
	result->id_var_name=id_var_name;
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

Function *createFunction(char* id_var_name, ExpressionList *arguments, StmtList *stmtList, ExpressionList *exprList)
{
	Function *result = (Function *)malloc(sizeof(Function));

	result->id_var_name = id_var_name;
	result->arguments = arguments;
	result->stmtList = stmtList;
	result->exprList = exprList;

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
DoLoopCondition *createDoLoopCondition(int *isUntil, Expression *expression)
{
	DoLoopCondition *result = (DoLoopCondition *)malloc(sizeof(DoLoopCondition));

	result->isUntil = isUntil;
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

IfStmtSingle *createIfStmtSingle(Expression *expression, StmtList *thenStmtList, StmtList *elseStmtList)
{
	IfStmtSingle *result = (IfStmtSingle *)malloc(sizeof(IfStmtSingle));

	result->expression = expression;
	result->thenStmtList = thenStmtList;
	result->elseStmtList = elseStmtList;

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

CaseStmt *createCaseStmt(int *isIs, Expression *fromExpression, Expression *toExpression, StmtList *stmtList)
{
	CaseStmt *result = (CaseStmt *)malloc(sizeof(CaseStmt));

	result->isIs = isIs;
	result->fromExpression = fromExpression;
	result->toExpression = toExpression;
	result->stmtList = stmtList;
	
	result->nextInList = 0;

	return result;
}

//WIP
DeclStmtSingle *createDeclStmtSingle(int *isConst, char* id_var_name, VarType varType, Expression *expression)
{
	DeclStmtSingle *result = (DeclStmtSingle*)malloc(sizeof(DeclStmtSingle));

	result->isConst = isConst;
	result->id_var_name = id_var_name;
	result->varType = varType;
	result->expression = expression;

	return result;
}

DeclStmtMulti *createDeclStmtMulti(int *isConst, char* id_var_name, VarType varType, Expression *expression)
{
	DeclStmtMulti *result = (DeclStmtMulti*)malloc(sizeof(DeclStmtMulti));

	result->isConst = isConst;
	result->id_var_name = id_var_name;
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
