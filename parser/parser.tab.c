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
#line 5 "Q:/Uni/tfiaimt/VBCompiler/parser/parser.y"

#include <stdio.h>
#include <stdlib.h>

#include "TreeNodes/root.h"

extern int yylineno;
extern FILE* yyin;

extern RootNode * rootNode;

int yyparse();
int yylex();

#line 86 "parser.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    DOUBLE = 259,                  /* DOUBLE  */
    STRING = 260,                  /* STRING  */
    BOOLEAN = 261,                 /* BOOLEAN  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    ENDL = 263,                    /* ENDL  */
    SUB = 264,                     /* SUB  */
    END = 265,                     /* END  */
    CONST = 266,                   /* CONST  */
    DIM = 267,                     /* DIM  */
    AS = 268,                      /* AS  */
    WHILE = 269,                   /* WHILE  */
    IF = 270,                      /* IF  */
    ELSEIF = 271,                  /* ELSEIF  */
    SELECT = 272,                  /* SELECT  */
    CASE = 273,                    /* CASE  */
    IS = 274,                      /* IS  */
    TO = 275,                      /* TO  */
    IMPORTS = 276,                 /* IMPORTS  */
    MODULE = 277,                  /* MODULE  */
    FUNCTION = 278,                /* FUNCTION  */
    RETURN = 279,                  /* RETURN  */
    DO = 280,                      /* DO  */
    LOOP = 281,                    /* LOOP  */
    UNTIL = 282,                   /* UNTIL  */
    FOR = 283,                     /* FOR  */
    NEXT = 284,                    /* NEXT  */
    STEP = 285,                    /* STEP  */
    OF = 286,                      /* OF  */
    IN = 287,                      /* IN  */
    EACH = 288,                    /* EACH  */
    END_OF_LINE = 289,             /* END_OF_LINE  */
    UNARY_MINUS = 290,             /* UNARY_MINUS  */
    UNARY_PLUS = 291,              /* UNARY_PLUS  */
    ASSIGN_CONSTRUCT = 292,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 293,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 294,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 295,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 296,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 297,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 298,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 299,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 300,           /* ASSIGN_CONCAT  */
    PRIVATE = 301,                 /* PRIVATE  */
    PROTECTED = 302,               /* PROTECTED  */
    PUBLIC = 303,                  /* PUBLIC  */
    FRIEND = 304,                  /* FRIEND  */
    INT_DIV = 305,                 /* INT_DIV  */
    NOT_EQUAL = 306,               /* NOT_EQUAL  */
    LESS_OR_EQUAL = 307,           /* LESS_OR_EQUAL  */
    MORE_OR_EQUAL = 308,           /* MORE_OR_EQUAL  */
    THEN = 309,                    /* THEN  */
    ELSE = 310                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "Q:/Uni/tfiaimt/VBCompiler/parser/parser.y"

	bool bool_val;
	int int_val;
	//bin and hex
	double double_val;
	char* datetime_val;//time_t
	char* str_val;
	char* id_var_name;

#line 198 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_DOUBLE = 4,                     /* DOUBLE  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_BOOLEAN = 6,                    /* BOOLEAN  */
  YYSYMBOL_IDENTIFIER = 7,                 /* IDENTIFIER  */
  YYSYMBOL_ENDL = 8,                       /* ENDL  */
  YYSYMBOL_SUB = 9,                        /* SUB  */
  YYSYMBOL_END = 10,                       /* END  */
  YYSYMBOL_CONST = 11,                     /* CONST  */
  YYSYMBOL_DIM = 12,                       /* DIM  */
  YYSYMBOL_AS = 13,                        /* AS  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSEIF = 16,                    /* ELSEIF  */
  YYSYMBOL_SELECT = 17,                    /* SELECT  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_IS = 19,                        /* IS  */
  YYSYMBOL_TO = 20,                        /* TO  */
  YYSYMBOL_IMPORTS = 21,                   /* IMPORTS  */
  YYSYMBOL_MODULE = 22,                    /* MODULE  */
  YYSYMBOL_FUNCTION = 23,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_DO = 25,                        /* DO  */
  YYSYMBOL_LOOP = 26,                      /* LOOP  */
  YYSYMBOL_UNTIL = 27,                     /* UNTIL  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_NEXT = 29,                      /* NEXT  */
  YYSYMBOL_STEP = 30,                      /* STEP  */
  YYSYMBOL_OF = 31,                        /* OF  */
  YYSYMBOL_IN = 32,                        /* IN  */
  YYSYMBOL_EACH = 33,                      /* EACH  */
  YYSYMBOL_END_OF_LINE = 34,               /* END_OF_LINE  */
  YYSYMBOL_UNARY_MINUS = 35,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 36,                /* UNARY_PLUS  */
  YYSYMBOL_ASSIGN_CONSTRUCT = 37,          /* ASSIGN_CONSTRUCT  */
  YYSYMBOL_ASSIGN_MULT = 38,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_ORD_DIV = 39,            /* ASSIGN_ORD_DIV  */
  YYSYMBOL_ASSIGN_INT_DIV = 40,            /* ASSIGN_INT_DIV  */
  YYSYMBOL_ASSIGN_ADD = 41,                /* ASSIGN_ADD  */
  YYSYMBOL_ASSIGN_SUB = 42,                /* ASSIGN_SUB  */
  YYSYMBOL_ASSIGN_LSHIFT = 43,             /* ASSIGN_LSHIFT  */
  YYSYMBOL_ASSIGN_RSHIFT = 44,             /* ASSIGN_RSHIFT  */
  YYSYMBOL_ASSIGN_CONCAT = 45,             /* ASSIGN_CONCAT  */
  YYSYMBOL_PRIVATE = 46,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 47,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 48,                    /* PUBLIC  */
  YYSYMBOL_FRIEND = 49,                    /* FRIEND  */
  YYSYMBOL_50_ = 50,                       /* '^'  */
  YYSYMBOL_51_ = 51,                       /* '*'  */
  YYSYMBOL_52_ = 52,                       /* '/'  */
  YYSYMBOL_INT_DIV = 53,                   /* INT_DIV  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 57,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 58,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 59,             /* MORE_OR_EQUAL  */
  YYSYMBOL_60_ = 60,                       /* '>'  */
  YYSYMBOL_61_ = 61,                       /* '<'  */
  YYSYMBOL_62_ = 62,                       /* '&'  */
  YYSYMBOL_THEN = 63,                      /* THEN  */
  YYSYMBOL_ELSE = 64,                      /* ELSE  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_root = 69,                      /* root  */
  YYSYMBOL_program_items_list = 70,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 71, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 72,              /* program_item  */
  YYSYMBOL_module = 73,                    /* module  */
  YYSYMBOL_functions_and_sub_list = 74,    /* functions_and_sub_list  */
  YYSYMBOL_function_or_sub = 75,           /* function_or_sub  */
  YYSYMBOL_function = 76,                  /* function  */
  YYSYMBOL_sub_bloc = 77,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 78,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 79,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 80, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 81,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 82,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 83,                 /* stmt_list  */
  YYSYMBOL_stmt = 84,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 85,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 86,           /* multi_line_stmt  */
  YYSYMBOL_stmt_ends = 87,                 /* stmt_ends  */
  YYSYMBOL_decl_stmt = 88,                 /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 89,     /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 90,                  /* var_name  */
  YYSYMBOL_access = 91,                    /* access  */
  YYSYMBOL_assign_stmt = 92,               /* assign_stmt  */
  YYSYMBOL_while_stmt = 93,                /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 94,              /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 95,         /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 96,             /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 97,        /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 98,        /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 99,               /* elseif_list  */
  YYSYMBOL_if_stmt_single_line = 100,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 101,              /* select_stmt  */
  YYSYMBOL_case_list = 102,                /* case_list  */
  YYSYMBOL_case_stmt = 103,                /* case_stmt  */
  YYSYMBOL_function_call_multiline = 104,  /* function_call_multiline  */
  YYSYMBOL_function_call_singleline = 105, /* function_call_singleline  */
  YYSYMBOL_function_calls = 106,           /* function_calls  */
  YYSYMBOL_expr = 107,                     /* expr  */
  YYSYMBOL_basic_literal = 108,            /* basic_literal  */
  YYSYMBOL_arguments_multiline = 109,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 110,     /* arguments_singleline  */
  YYSYMBOL_arguments = 111,                /* arguments  */
  YYSYMBOL_expr_list = 112                 /* expr_list  */
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
#define YYLAST   1091

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   310


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
       2,     2,     2,     2,     2,     2,     2,     2,    62,     2,
      65,    66,    51,    54,    67,    55,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    56,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    53,    57,    58,    59,    63,
      64
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   144,   144,   147,   148,   151,   152,   155,   156,   160,
     161,   162,   163,   167,   168,   171,   172,   175,   176,   177,
     178,   179,   180,   181,   182,   186,   187,   188,   189,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   203,   204,
     205,   209,   210,   211,   215,   216,   220,   226,   227,   231,
     232,   236,   237,   240,   241,   242,   243,   244,   245,   246,
     247,   252,   253,   260,   261,   262,   266,   267,   268,   269,
     270,   271,   275,   276,   280,   281,   282,   283,   284,   285,
     291,   292,   293,   298,   303,   304,   307,   308,   313,   314,
     319,   324,   325,   326,   327,   330,   331,   334,   335,   340,
     343,   344,   347,   348,   349,   350,   354,   358,   361,   362,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   386,   387,   388,   389,
     393,   394,   395,   399,   400,   403,   404,   408,   409
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "DOUBLE",
  "STRING", "BOOLEAN", "IDENTIFIER", "ENDL", "SUB", "END", "CONST", "DIM",
  "AS", "WHILE", "IF", "ELSEIF", "SELECT", "CASE", "IS", "TO", "IMPORTS",
  "MODULE", "FUNCTION", "RETURN", "DO", "LOOP", "UNTIL", "FOR", "NEXT",
  "STEP", "OF", "IN", "EACH", "END_OF_LINE", "UNARY_MINUS", "UNARY_PLUS",
  "ASSIGN_CONSTRUCT", "ASSIGN_MULT", "ASSIGN_ORD_DIV", "ASSIGN_INT_DIV",
  "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_LSHIFT", "ASSIGN_RSHIFT",
  "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC", "FRIEND", "'^'",
  "'*'", "'/'", "INT_DIV", "'+'", "'-'", "'='", "NOT_EQUAL",
  "LESS_OR_EQUAL", "MORE_OR_EQUAL", "'>'", "'<'", "'&'", "THEN", "ELSE",
  "'('", "')'", "','", "$accept", "root", "program_items_list",
  "program_items_list_not_empty", "program_item", "module",
  "functions_and_sub_list", "function_or_sub", "function", "sub_bloc",
  "parameterlist_or_empty", "parameterlist_with_type",
  "parameterlist_without_type", "parameter_with_type",
  "parameter_without_type", "stmt_list", "stmt", "single_line_stmt",
  "multi_line_stmt", "stmt_ends", "decl_stmt", "decl_stmt_single_line",
  "var_name", "access", "assign_stmt", "while_stmt", "do_loop_stmt",
  "do_loop_condition", "for_loop_stmt", "for_each_loop_stmt",
  "if_stmt_multi_line", "elseif_list", "if_stmt_single_line",
  "select_stmt", "case_list", "case_stmt", "function_call_multiline",
  "function_call_singleline", "function_calls", "expr", "basic_literal",
  "arguments_multiline", "arguments_singleline", "arguments", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-199)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     315,    23,    25,    -6,    51,  -199,  -199,   103,  -199,   315,
    -199,  -199,    59,    76,    76,  -199,  -199,  -199,  -199,   104,
    -199,    82,   154,    76,  -199,   112,    98,   134,    11,  -199,
    -199,  -199,   114,   224,    87,  -199,    88,   133,   466,   150,
     159,   146,    84,    20,   128,  -199,  -199,    76,  -199,  -199,
     105,    88,  -199,   149,   161,   165,   109,    -5,    72,  -199,
    -199,  -199,  -199,  -199,  -199,    32,    32,    32,  -199,   991,
    -199,   -16,   445,    20,    76,  -199,   155,    75,    83,    76,
    -199,    21,  -199,    90,   -14,   991,   991,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
     118,  -199,    32,   123,   164,   185,   185,    32,    32,   177,
      32,    12,    16,   533,  -199,    76,  -199,    76,  -199,   188,
      76,    76,  -199,  -199,  -199,    76,  -199,    76,   132,   471,
     142,  -199,  -199,   558,   161,   202,  -199,  -199,   203,  -199,
     145,  -199,  1003,  1013,  1013,  1022,  1029,  1029,   152,   152,
     152,   152,   152,   152,  -199,  -199,   991,     9,  -199,   147,
     216,    28,   913,   935,    32,   166,    32,    32,   634,    76,
     217,   228,   213,    32,  -199,    82,    82,   185,    82,    82,
      82,    82,    76,   218,    32,   584,   173,   233,   659,  -199,
    -199,  -199,    88,  -199,  -199,  -199,   991,    32,   155,   155,
     409,   634,    81,   913,   220,   991,   991,   684,   634,   155,
     231,  -199,   323,   934,   609,  -199,   336,   222,    32,  -199,
    -199,   239,  -199,  -199,   374,   193,   195,    32,   991,   709,
     185,   185,    32,   190,   634,     6,  -199,    17,   734,   201,
     155,   238,   759,   253,   784,   240,  -199,   349,  -199,  -199,
     413,   417,   991,   251,   255,    29,   949,   541,   307,     3,
      15,  -199,  -199,  -199,   155,   237,  -199,   267,  -199,   269,
    -199,   257,    32,   991,    32,   991,  -199,   155,   155,    32,
     541,  -199,   268,    32,   934,     1,    32,    76,   477,   265,
    -199,   264,   279,  -199,  -199,  -199,   991,   991,   232,   234,
    -199,   963,   809,   276,    32,   934,   913,   634,    32,   634,
    -199,   155,    76,    32,    32,   934,   281,  -199,   977,   834,
     634,   934,   913,   934,    65,   634,   934,  -199,   934,   283,
     934,   634,   155,   634,   859,   934,  -199,   934,    76,   884,
    -199,   634,  -199,   909,  -199
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    77,    75,    74,    76,     0,     2,     4,
       5,     7,     0,     0,     0,    79,    78,     1,     6,     0,
      61,     8,     0,     0,    62,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   135,   136,     0,    10,    14,
       0,     0,    11,     0,    46,     0,     0,    30,    34,    38,
      41,   126,   129,   127,   128,     0,     0,     0,   134,   137,
     110,     0,     0,    29,     0,    12,     0,    32,    37,     0,
      33,     0,    36,     0,     0,   112,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    49,     0,    52,     0,
       0,     0,    56,    57,    58,     0,    51,     0,     0,     0,
      44,    31,    35,     0,     0,     0,    39,    46,     0,    42,
       0,   130,   121,   115,   116,   117,   113,   114,   118,   122,
     123,   124,   120,   119,   125,   132,   138,     0,    17,    73,
       0,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    50,    53,     0,    54,    55,
      60,    59,     0,     0,     0,     0,     0,     0,     0,    40,
      43,   131,    81,   108,   109,    82,    80,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    86,     0,     0,     0,
       0,    19,     0,     0,     0,    21,     0,     0,     0,    45,
      25,     0,   106,   107,     0,     0,    69,     0,    70,     0,
       0,     0,     0,    97,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,    26,    72,
       0,     0,    65,     0,     0,    71,     0,     0,     0,     0,
       0,   100,    85,    84,     0,     0,    20,     0,    27,     0,
      22,     0,     0,    67,     0,    68,    83,     0,     0,     0,
       0,    98,     0,     0,     0,     0,     0,     0,     0,     0,
     101,     0,     0,    66,    28,    24,    63,    64,     0,    69,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,   105,     0,   102,     0,     0,    95,    92,     0,     0,
     103,     0,     0,     0,     0,    96,    94,   104,     0,     0,
      90,     0,    88,     0,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,  -199,  -199,   292,  -199,   271,   270,  -199,  -199,
     229,   252,   260,   -79,   -78,   -28,     8,  -198,  -199,   -13,
    -199,  -199,   -87,   113,  -199,  -199,  -199,    69,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,    52,  -199,  -199,  -199,   -19,
     -73,   124,   136,   275,   274
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      56,    57,    58,    59,    60,   113,   114,   115,   116,    38,
     117,   118,   160,   119,   120,   121,   122,   169,   123,   124,
     125,   285,   126,   127,   260,   261,   193,   194,   195,    69,
      70,    45,    46,    47,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,   136,   130,   233,   139,    61,    62,    63,    64,
      33,   303,    61,    62,    63,    64,   192,   304,   100,   161,
     140,    37,   286,   170,   259,   289,   166,    54,   134,    80,
      13,   166,    14,   259,    72,    61,    62,    63,    64,   167,
      24,   199,   278,    15,   167,    20,    20,    85,    86,   171,
     101,   102,   141,   102,    55,   135,   189,    66,    67,   281,
     190,   129,    81,    66,    67,   305,   133,   287,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    19,   233,   156,   200,   279,    66,    67,   162,   163,
     213,   165,   230,   231,    53,   332,   232,   137,   168,    20,
      16,   185,   175,    17,   176,   188,    82,   178,   179,   131,
      20,    23,   180,    12,   181,    20,    24,   132,    20,    34,
      35,   174,    12,    39,   138,   225,   226,     3,     4,     5,
       6,    61,    62,    63,    64,    32,   239,    40,   196,    83,
     207,    36,    81,   254,   255,   203,    32,   205,   206,   201,
      83,    32,    43,    44,   212,    48,   208,    50,    61,    62,
      63,    64,    65,    25,    26,   216,    51,   265,    52,   214,
      73,    75,    54,   229,    76,    79,   204,    27,   224,   157,
     238,   228,    66,    67,   155,   242,   244,   158,    24,   234,
     235,   291,   159,   174,    68,   164,   174,   177,   182,   247,
       3,     4,     5,     6,   298,   299,   258,   186,   252,   134,
     137,   191,   197,   256,    99,   174,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   198,
     209,   273,   275,    25,    41,   210,   211,   174,   324,   219,
     288,   215,   220,   236,   240,   246,   174,    27,   248,   250,
     174,   251,   174,   296,   257,   297,   302,   264,    24,   338,
     228,   266,   268,   270,   301,   276,   174,   306,   277,   292,
       3,     4,     5,     6,   307,   309,   293,   319,   294,   321,
     295,   323,   310,   300,   311,   318,   312,   326,   313,   322,
     314,   317,   330,   320,   273,   275,   327,   334,   336,   325,
     335,    18,   128,   337,    42,   339,   262,    77,    49,   331,
     174,   333,   290,   343,   103,    78,   222,   282,   105,   106,
       0,   107,   108,   283,   109,   341,    74,   174,   223,   174,
       0,   174,   111,   241,   174,   112,     1,     2,   174,    84,
       0,     0,   174,   174,     0,   174,   245,   174,     0,     0,
       0,   174,     0,     3,     4,     5,     6,     0,     0,   271,
       0,     3,     4,     5,     6,     0,     0,     0,     0,     0,
       0,   284,     0,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    61,    62,    63,    64,    61,    62,    63,    64,
      61,    62,    63,    64,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     0,     0,
     249,     0,     0,   227,     0,     0,     0,   272,     0,     0,
       0,   274,   103,     0,     0,   104,   105,   106,     0,   107,
     108,     0,   109,    66,    67,     0,     0,    66,    67,   110,
     111,    66,    67,   112,     0,    25,     0,     0,   103,    24,
       0,   183,   105,   106,     0,   107,   108,     0,   109,    27,
       0,     3,     4,     5,     6,   184,   111,   308,     0,   112,
      24,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,    20,     3,     4,     5,     6,     0,     3,     4,     5,
       6,     0,     0,     0,     0,     0,     0,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     103,     0,     0,   172,   105,   106,     0,   107,   108,     0,
     109,     0,   230,   231,     0,     0,   232,   173,   111,     0,
       0,   112,     0,     0,     0,   103,     0,     0,   187,   105,
     106,     0,   107,   108,     0,   109,     0,     0,     0,     3,
       4,     5,     6,   111,     0,     0,   112,     3,     4,     5,
       6,   103,    24,     0,   217,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     3,     4,     5,     6,   218,   111,
       0,     0,   112,     0,     0,     0,   103,     0,     0,   243,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,     0,     0,
       0,   103,     0,    24,     0,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
       0,     0,   112,     0,     0,     0,   103,     0,    24,   221,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,     0,     0,
       0,   103,     0,     0,     0,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
     237,     0,   112,     0,     0,     0,   103,     0,     0,   253,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,     0,     0,
       0,   103,     0,     0,     0,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
     263,     0,   112,     0,     0,     0,   103,     0,     0,   267,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,     0,     0,
       0,   103,     0,     0,   269,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
       0,     0,   112,     0,     0,     0,   103,     0,     0,   316,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,     0,     0,
       0,   103,     0,     0,   329,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
       0,     0,   112,     0,     0,     0,   103,     0,     0,     0,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,   340,     0,
       0,   103,     0,     0,     0,   105,   106,     0,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
       0,     0,   112,   342,     0,     0,   103,     0,     0,     0,
     105,   106,     0,   107,   108,     0,   109,     0,     0,     0,
       3,     4,     5,     6,   111,     0,     0,   112,   344,     0,
       0,   103,     0,     0,     0,   105,   106,    20,   107,   108,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
       0,     0,   112,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     0,     0,     0,     0,
       3,     4,     5,     6,     0,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   202,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   280,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   315,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     328,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    93,    94,    95,    96,    97,
      98,    99
};

static const yytype_int16 yycheck[] =
{
      13,    14,    81,    76,   202,    83,     3,     4,     5,     6,
      23,    10,     3,     4,     5,     6,     7,    16,    34,   106,
      34,    10,    19,     7,    18,    10,    14,     7,     7,    34,
       7,    14,     7,    18,    47,     3,     4,     5,     6,    27,
      34,    13,    13,    49,    27,    34,    34,    66,    67,    33,
      66,    67,    66,    67,    34,    34,   135,    54,    55,   257,
     138,    74,    67,    54,    55,    64,    79,    64,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    22,   280,   102,    56,    56,    54,    55,   107,   108,
     177,   110,    11,    12,    10,    30,    15,     7,   111,    34,
      49,   129,   115,     0,   117,   133,    34,   120,   121,    34,
      34,     7,   125,     0,   127,    34,    34,    34,    34,     7,
      22,   113,     9,     9,    34,   198,   199,    46,    47,    48,
      49,     3,     4,     5,     6,    22,   209,    23,   157,    67,
     168,     7,    67,   230,   231,   164,    33,   166,   167,   162,
      67,    38,    65,    65,   173,    22,   169,     7,     3,     4,
       5,     6,    34,     9,    10,   184,     7,   240,    22,   182,
      65,    22,     7,   201,    13,    66,    10,    23,   197,    56,
     208,   200,    54,    55,    66,   213,   214,    23,    34,   202,
     203,   264,     7,   185,    66,    18,   188,     9,    66,   218,
      46,    47,    48,    49,   277,   278,   234,    65,   227,     7,
       7,    66,    65,   232,    62,   207,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    13,
      13,   250,   251,     9,    10,     7,    23,   229,   311,    66,
     259,    23,     9,    23,    13,    23,   238,    23,     9,    56,
     242,    56,   244,   272,    64,   274,   284,    56,    34,   332,
     279,    23,     9,    23,   283,    14,   258,   286,    13,    32,
      46,    47,    48,    49,   287,   288,     9,   305,     9,   307,
      23,   309,    17,    15,    20,   304,     7,   315,    56,   308,
      56,    15,   320,   306,   313,   314,    15,   325,    15,   312,
     328,     9,    73,   331,    33,   333,   237,    55,    38,   322,
     302,   324,   260,   341,     7,    55,   192,    10,    11,    12,
      -1,    14,    15,    16,    17,   338,    51,   319,   192,   321,
      -1,   323,    25,    10,   326,    28,    21,    22,   330,    65,
      -1,    -1,   334,   335,    -1,   337,    10,   339,    -1,    -1,
      -1,   343,    -1,    46,    47,    48,    49,    -1,    -1,    10,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     3,     4,     5,     6,     3,     4,     5,     6,
       3,     4,     5,     6,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      66,    -1,    -1,    34,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    34,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    17,    54,    55,    -1,    -1,    54,    55,    24,
      25,    54,    55,    28,    -1,     9,    -1,    -1,     7,    34,
      -1,    10,    11,    12,    -1,    14,    15,    -1,    17,    23,
      -1,    46,    47,    48,    49,    24,    25,    20,    -1,    28,
      34,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    34,    46,    47,    48,    49,    -1,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       7,    -1,    -1,    10,    11,    12,    -1,    14,    15,    -1,
      17,    -1,    11,    12,    -1,    -1,    15,    24,    25,    -1,
      -1,    28,    -1,    -1,    -1,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    46,
      47,    48,    49,    25,    -1,    -1,    28,    46,    47,    48,
      49,     7,    34,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    46,    47,    48,    49,    24,    25,
      -1,    -1,    28,    -1,    -1,    -1,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    -1,    -1,
      -1,     7,    -1,    34,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      -1,    -1,    28,    -1,    -1,    -1,     7,    -1,    34,    10,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      26,    -1,    28,    -1,    -1,    -1,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      26,    -1,    28,    -1,    -1,    -1,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    -1,    -1,
      -1,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      -1,    -1,    28,    -1,    -1,    -1,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    -1,    -1,
      -1,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      -1,    -1,    28,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    29,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      -1,    -1,    28,    29,    -1,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      46,    47,    48,    49,    25,    -1,    -1,    28,    29,    -1,
      -1,     7,    -1,    -1,    -1,    11,    12,    34,    14,    15,
      -1,    17,    -1,    -1,    -1,    46,    47,    48,    49,    25,
      -1,    -1,    28,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    56,    57,    58,    59,    60,
      61,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    22,    46,    47,    48,    49,    69,    70,    71,
      72,    73,    91,     7,     7,    49,    49,     0,    72,    22,
      34,    87,    87,     7,    34,     9,    10,    23,    74,    75,
      76,    77,    91,    87,     7,    22,     7,    10,    87,     9,
      23,    10,    74,    65,    65,   109,   110,   111,    22,    75,
       7,     7,    22,    10,     7,    34,    78,    79,    80,    81,
      82,     3,     4,     5,     6,    34,    54,    55,    66,   107,
     108,   112,    87,    65,   111,    22,    13,    79,    80,    66,
      34,    67,    34,    67,   112,   107,   107,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      34,    66,    67,     7,    10,    11,    12,    14,    15,    17,
      24,    25,    28,    83,    84,    85,    86,    88,    89,    91,
      92,    93,    94,    96,    97,    98,   100,   101,    78,    87,
     108,    34,    34,    87,     7,    34,    81,     7,    34,    82,
      34,    66,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,    66,   107,    56,    23,     7,
      90,    90,   107,   107,    18,   107,    14,    27,    87,    95,
       7,    33,    10,    24,    84,    87,    87,     9,    87,    87,
      87,    87,    66,    10,    24,    83,    65,    10,    83,    81,
      82,    66,     7,   104,   105,   106,   107,    65,    13,    13,
      56,    87,    63,   107,    10,   107,   107,    83,    87,    13,
       7,    23,   107,    90,    87,    23,   107,    10,    24,    66,
       9,    10,   109,   110,   107,   108,   108,    34,   107,    83,
      11,    12,    15,    85,    87,    87,    23,    26,    83,   108,
      13,    10,    83,    10,    83,    10,    23,   107,     9,    66,
      56,    56,   107,    10,    90,    90,   107,    64,    83,    18,
     102,   103,    95,    26,    56,   108,    23,    10,     9,    10,
      23,    10,    34,   107,    34,   107,    14,    13,    13,    56,
      63,    85,    10,    16,    64,    99,    19,    64,   107,    10,
     103,   108,    32,     9,     9,    23,   107,   107,   108,   108,
      15,   107,    83,    10,    16,    64,   107,    87,    20,    87,
      17,    20,     7,    56,    56,    63,    10,    15,   107,    83,
      87,    83,   107,    83,   108,    87,    83,    15,    63,    10,
      83,    87,    30,    87,    83,    83,    15,    83,   108,    83,
      29,    87,    29,    83,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    73,    74,    74,    75,    75,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    93,    94,    94,    95,    95,    96,    96,
      97,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     102,   102,   103,   103,   103,   103,   104,   105,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   108,   108,
     109,   109,   109,   110,   110,   111,   111,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     5,
       6,     6,     7,     1,     3,     1,     1,     6,     8,     7,
       9,     7,     9,     8,    10,     8,     9,     9,    10,     0,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     3,
       4,     1,     3,     4,     3,     5,     1,     1,     2,     1,
       2,     1,     1,     2,     2,     2,     1,     1,     1,     2,
       2,     1,     2,     7,     7,     5,     6,     6,     6,     4,
       4,     2,     4,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     6,     5,     5,     2,     2,    11,    13,
      10,     7,     9,     8,    10,     4,     5,     4,     6,     7,
       1,     2,     4,     5,     6,     4,     2,     2,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       4,     5,     4,     3,     2,     1,     1,     1,     3
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

#line 1937 "parser.tab.c"

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

#line 411 "Q:/Uni/tfiaimt/VBCompiler/parser/parser.y"


void yyerror(char const *s) {
    fprintf(stderr, "Error: %s on line %d\n", s, yylineno);
    exit(1);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        yyparse();
        fclose(yyin);
    }
    else {
        yyerror("not found file");
    }
}
