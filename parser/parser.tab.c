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
    THEN = 271,                    /* THEN  */
    ELSE = 272,                    /* ELSE  */
    ELSEIF = 273,                  /* ELSEIF  */
    SELECT = 274,                  /* SELECT  */
    CASE = 275,                    /* CASE  */
    IS = 276,                      /* IS  */
    TO = 277,                      /* TO  */
    IMPORTS = 278,                 /* IMPORTS  */
    MODULE = 279,                  /* MODULE  */
    FUNCTION = 280,                /* FUNCTION  */
    RETURN = 281,                  /* RETURN  */
    DO = 282,                      /* DO  */
    LOOP = 283,                    /* LOOP  */
    UNTIL = 284,                   /* UNTIL  */
    FOR = 285,                     /* FOR  */
    NEXT = 286,                    /* NEXT  */
    STEP = 287,                    /* STEP  */
    OF = 288,                      /* OF  */
    IN = 289,                      /* IN  */
    EACH = 290,                    /* EACH  */
    END_OF_LINE = 291,             /* END_OF_LINE  */
    UNARY_MINUS = 292,             /* UNARY_MINUS  */
    UNARY_PLUS = 293,              /* UNARY_PLUS  */
    ASSIGN_CONSTRUCT = 294,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 295,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 296,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 297,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 298,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 299,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 300,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 301,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 302,           /* ASSIGN_CONCAT  */
    PRIVATE = 303,                 /* PRIVATE  */
    PROTECTED = 304,               /* PROTECTED  */
    PUBLIC = 305,                  /* PUBLIC  */
    FRIEND = 306,                  /* FRIEND  */
    INT_DIV = 307,                 /* INT_DIV  */
    NOT_EQUAL = 308,               /* NOT_EQUAL  */
    LESS_OR_EQUAL = 309,           /* LESS_OR_EQUAL  */
    MORE_OR_EQUAL = 310,           /* MORE_OR_EQUAL  */
    TEST = 311                     /* TEST  */
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

#line 199 "parser.tab.c"

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
  YYSYMBOL_THEN = 16,                      /* THEN  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 18,                    /* ELSEIF  */
  YYSYMBOL_SELECT = 19,                    /* SELECT  */
  YYSYMBOL_CASE = 20,                      /* CASE  */
  YYSYMBOL_IS = 21,                        /* IS  */
  YYSYMBOL_TO = 22,                        /* TO  */
  YYSYMBOL_IMPORTS = 23,                   /* IMPORTS  */
  YYSYMBOL_MODULE = 24,                    /* MODULE  */
  YYSYMBOL_FUNCTION = 25,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_LOOP = 28,                      /* LOOP  */
  YYSYMBOL_UNTIL = 29,                     /* UNTIL  */
  YYSYMBOL_FOR = 30,                       /* FOR  */
  YYSYMBOL_NEXT = 31,                      /* NEXT  */
  YYSYMBOL_STEP = 32,                      /* STEP  */
  YYSYMBOL_OF = 33,                        /* OF  */
  YYSYMBOL_IN = 34,                        /* IN  */
  YYSYMBOL_EACH = 35,                      /* EACH  */
  YYSYMBOL_END_OF_LINE = 36,               /* END_OF_LINE  */
  YYSYMBOL_UNARY_MINUS = 37,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 38,                /* UNARY_PLUS  */
  YYSYMBOL_ASSIGN_CONSTRUCT = 39,          /* ASSIGN_CONSTRUCT  */
  YYSYMBOL_ASSIGN_MULT = 40,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_ORD_DIV = 41,            /* ASSIGN_ORD_DIV  */
  YYSYMBOL_ASSIGN_INT_DIV = 42,            /* ASSIGN_INT_DIV  */
  YYSYMBOL_ASSIGN_ADD = 43,                /* ASSIGN_ADD  */
  YYSYMBOL_ASSIGN_SUB = 44,                /* ASSIGN_SUB  */
  YYSYMBOL_ASSIGN_LSHIFT = 45,             /* ASSIGN_LSHIFT  */
  YYSYMBOL_ASSIGN_RSHIFT = 46,             /* ASSIGN_RSHIFT  */
  YYSYMBOL_ASSIGN_CONCAT = 47,             /* ASSIGN_CONCAT  */
  YYSYMBOL_PRIVATE = 48,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 49,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 50,                    /* PUBLIC  */
  YYSYMBOL_FRIEND = 51,                    /* FRIEND  */
  YYSYMBOL_52_ = 52,                       /* '^'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_INT_DIV = 55,                   /* INT_DIV  */
  YYSYMBOL_56_ = 56,                       /* '+'  */
  YYSYMBOL_57_ = 57,                       /* '-'  */
  YYSYMBOL_58_ = 58,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 59,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 60,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 61,             /* MORE_OR_EQUAL  */
  YYSYMBOL_62_ = 62,                       /* '>'  */
  YYSYMBOL_63_ = 63,                       /* '<'  */
  YYSYMBOL_64_ = 64,                       /* '&'  */
  YYSYMBOL_TEST = 65,                      /* TEST  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ')'  */
  YYSYMBOL_68_ = 68,                       /* ','  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_root = 70,                      /* root  */
  YYSYMBOL_program_items_list = 71,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 72, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 73,              /* program_item  */
  YYSYMBOL_module = 74,                    /* module  */
  YYSYMBOL_functions_and_sub_list = 75,    /* functions_and_sub_list  */
  YYSYMBOL_function_or_sub = 76,           /* function_or_sub  */
  YYSYMBOL_function = 77,                  /* function  */
  YYSYMBOL_sub_bloc = 78,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 79,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 80,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 81, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 82,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 83,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 84,                 /* stmt_list  */
  YYSYMBOL_stmt = 85,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 86,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 87,           /* multi_line_stmt  */
  YYSYMBOL_stmt_ends = 88,                 /* stmt_ends  */
  YYSYMBOL_decl_stmt = 89,                 /* decl_stmt  */
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
#define YYLAST   1153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


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
       2,     2,     2,     2,     2,     2,     2,     2,    64,     2,
      66,    67,    53,    56,    68,    57,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,    58,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    52,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    55,    59,    60,
      61,    65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   146,   146,   149,   150,   153,   154,   157,   158,   162,
     163,   164,   165,   169,   170,   173,   174,   177,   178,   179,
     180,   181,   182,   183,   184,   188,   189,   190,   191,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   205,   206,
     207,   211,   212,   213,   217,   218,   222,   228,   229,   233,
     234,   238,   239,   242,   243,   244,   245,   246,   247,   248,
     249,   254,   255,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   274,   275,   279,   280,   281,   282,   283,   284,
     290,   291,   292,   297,   302,   303,   306,   307,   312,   313,
     318,   323,   324,   325,   326,   330,   331,   335,   336,   340,
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
  "AS", "WHILE", "IF", "THEN", "ELSE", "ELSEIF", "SELECT", "CASE", "IS",
  "TO", "IMPORTS", "MODULE", "FUNCTION", "RETURN", "DO", "LOOP", "UNTIL",
  "FOR", "NEXT", "STEP", "OF", "IN", "EACH", "END_OF_LINE", "UNARY_MINUS",
  "UNARY_PLUS", "ASSIGN_CONSTRUCT", "ASSIGN_MULT", "ASSIGN_ORD_DIV",
  "ASSIGN_INT_DIV", "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_LSHIFT",
  "ASSIGN_RSHIFT", "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC",
  "FRIEND", "'^'", "'*'", "'/'", "INT_DIV", "'+'", "'-'", "'='",
  "NOT_EQUAL", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "'>'", "'<'", "'&'",
  "TEST", "'('", "')'", "','", "$accept", "root", "program_items_list",
  "program_items_list_not_empty", "program_item", "module",
  "functions_and_sub_list", "function_or_sub", "function", "sub_bloc",
  "parameterlist_or_empty", "parameterlist_with_type",
  "parameterlist_without_type", "parameter_with_type",
  "parameter_without_type", "stmt_list", "stmt", "single_line_stmt",
  "multi_line_stmt", "stmt_ends", "decl_stmt", "var_name", "access",
  "assign_stmt", "while_stmt", "do_loop_stmt", "do_loop_condition",
  "for_loop_stmt", "for_each_loop_stmt", "if_stmt_multi_line",
  "elseif_list", "if_stmt_single_line", "select_stmt", "case_list",
  "case_stmt", "function_call_multiline", "function_call_singleline",
  "function_calls", "expr", "basic_literal", "arguments_multiline",
  "arguments_singleline", "arguments", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     410,    78,    85,    58,    62,  -192,  -192,   110,  -192,   410,
    -192,  -192,    99,    98,    98,  -192,  -192,  -192,  -192,   130,
    -192,   103,   173,    98,  -192,   139,   120,   143,    -3,  -192,
    -192,  -192,    10,   387,    89,  -192,    91,   127,   338,   151,
     159,   144,    13,     9,     0,  -192,  -192,    98,  -192,  -192,
     101,    91,  -192,   146,   150,   167,   108,   -24,   -15,  -192,
    -192,  -192,  -192,  -192,  -192,   197,   197,   197,  -192,  1076,
    -192,   -16,   294,     9,    98,  -192,   125,    59,    68,    98,
    -192,    79,  -192,    80,    29,  1076,  1076,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     109,  -192,   197,   119,   154,   178,   178,   197,   197,   175,
     197,    97,    11,  -192,   437,  -192,    98,  -192,    98,   187,
      98,    98,  -192,  -192,  -192,    98,  -192,    98,   138,   365,
     121,  -192,  -192,   462,   150,   190,  -192,  -192,   199,  -192,
     140,  -192,   935,   996,   996,   524,   211,   211,   152,   152,
     152,   152,   152,   152,  -192,  -192,  1076,   115,  -192,   148,
     191,     2,  1014,   971,   197,   890,   197,   197,   541,    98,
     202,   210,   193,   197,  -192,   103,   103,   178,   103,   103,
     103,   103,    98,   195,   197,   489,   158,   217,   586,  -192,
    -192,  -192,    91,  -192,  -192,  -192,  1076,   197,   125,   125,
      96,   541,    -6,  1014,   206,  1076,  1076,   596,   541,   125,
     214,  -192,   903,   876,   514,  -192,   918,   208,   197,  -192,
    -192,   225,  -192,  -192,  1060,   177,   179,   197,  1076,   643,
     197,   221,   541,    70,  -192,     8,   652,   182,   125,   216,
     699,   233,   709,   219,  -192,   958,  -192,  -192,   137,   156,
    1076,   232,   984,    -1,   392,    37,    18,  -192,  -192,  -192,
     125,   222,  -192,   239,  -192,   241,  -192,   230,   197,  1076,
     197,  1076,  -192,    -1,  -192,   245,   876,   197,    14,    98,
     197,  1089,   243,  -192,   254,   256,  -192,  -192,  -192,  1076,
    1076,  -192,   756,  1033,   252,   876,   197,   541,  1014,   197,
     541,  -192,   125,    98,   263,   876,  -192,   766,  1046,   876,
     541,  1014,   876,    -7,   541,  -192,   876,   264,   876,   876,
     541,   125,   541,   811,  -192,   876,   876,    98,   821,  -192,
     541,  -192,   866,  -192
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
       0,     0,     0,    52,     0,    47,     0,    49,     0,     0,
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
      25,     0,   106,   107,     0,     0,    68,     0,    70,     0,
       0,    97,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,    26,    72,     0,     0,
      69,     0,     0,     0,     0,     0,     0,   100,    85,    84,
       0,     0,    20,     0,    27,     0,    22,     0,     0,    65,
       0,    67,    83,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,    63,    28,    24,    64,
      66,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,     0,    93,     0,     0,   105,
       0,     0,   102,     0,     0,    92,    95,     0,     0,   103,
       0,     0,     0,     0,    94,    96,   104,     0,     0,    90,
       0,    88,     0,    89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,   272,  -192,   249,   246,  -192,  -192,
     213,   234,   236,   -54,   -75,    51,     3,  -191,  -192,   -13,
    -192,   -93,    17,  -192,  -192,  -192,    52,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,    32,  -192,  -192,  -192,   -19,   -74,
     100,   102,   242,   231
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      56,    57,    58,    59,    60,   114,   115,   116,   117,    38,
     118,   160,   119,   120,   121,   122,   169,   123,   124,   125,
     278,   126,   127,   256,   257,   193,   194,   195,    69,    70,
      45,    46,    47,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,   130,    61,    62,    63,    64,    37,   139,   230,
      33,   231,    80,   161,   230,   199,    54,    12,   170,    39,
     100,    82,   166,    53,   294,   321,    12,   136,   282,    20,
      20,   295,   296,    20,    72,    40,    65,   167,   255,    32,
      61,    62,    63,    64,    81,    55,   171,    85,    86,    20,
      32,   101,   102,    83,   279,    32,    66,    67,   280,   113,
     200,   129,   274,   190,   113,   140,   133,    68,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   189,   231,   156,   213,    13,   134,   137,   162,   163,
     255,   165,    14,    66,    67,   131,   141,   102,   168,    61,
      62,    63,    64,   175,   132,   176,    24,   178,   179,    15,
      17,   166,   180,    16,   181,   135,   138,   174,    61,    62,
      63,    64,   192,    19,   225,   226,   167,    81,    61,    62,
      63,    64,   227,    20,    20,   237,    83,    23,   196,    24,
      61,    62,    63,    64,    35,   203,    34,   205,   206,   201,
      36,    48,    66,    67,   212,    43,   208,    44,    50,    61,
      62,    63,    64,    76,   261,   216,    51,    73,    52,   214,
      75,    66,    67,   268,    54,    79,   155,   157,   224,   158,
     185,   228,    25,    26,   188,   159,   284,   186,   174,   232,
     233,   174,   270,    66,    67,   164,   177,   134,    27,   245,
      61,    62,    63,    64,   198,   182,   137,   191,   250,    24,
     174,   252,    66,    67,   197,   209,    99,   210,   211,   207,
     215,     3,     4,     5,     6,   219,   220,   238,   313,   269,
     271,   234,   174,   244,   246,   248,   281,   249,   253,   174,
     260,   262,   264,   174,   266,   174,   272,   327,   286,   289,
     287,   290,   229,    66,    67,   288,   285,   174,   293,   236,
     291,   298,   301,   303,   240,   242,   297,   306,   300,    93,
      94,    95,    96,    97,    98,    99,   302,   308,   315,   324,
     311,    18,    42,   254,    49,   310,   128,   258,   283,    77,
     314,    78,   222,    74,   223,   174,    84,     0,   320,     0,
     322,   103,     0,     0,   104,   105,   106,     0,   107,   108,
     174,     0,   174,   109,   330,   174,     0,     0,     0,   174,
     110,   111,   174,     0,   112,     0,   174,   292,   174,   174,
      24,   174,     0,     0,     0,   174,     0,     0,     0,     0,
       0,     0,     3,     4,     5,     6,   307,    25,   309,     0,
       0,   312,     0,     0,     0,     0,   316,     0,     0,   113,
       0,   319,     0,    27,     0,   323,     0,     0,     0,   325,
       0,   326,   103,   328,    24,   183,   105,   106,     0,   107,
     108,   332,     0,     0,   109,     0,     3,     4,     5,     6,
       0,   184,   111,     0,     0,   112,    25,    41,     0,   103,
       0,    24,   275,   105,   106,     0,   107,   108,     0,   276,
     277,   109,    27,     3,     4,     5,     6,     0,     0,   111,
       0,     0,   112,    24,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     1,     2,     3,     4,     5,     6,     0,
       3,     4,     5,     6,   103,     0,     0,   172,   105,   106,
       0,   107,   108,     0,     0,     0,   109,   113,     3,     4,
       5,     6,     0,   173,   111,     0,     0,   112,     0,   103,
       0,     0,   187,   105,   106,     0,   107,   108,     0,     0,
       0,   109,     0,     0,     0,     3,     4,     5,     6,   111,
       0,     0,   112,     0,     0,     0,   103,     0,    24,   217,
     105,   106,   113,   107,   108,     0,     0,     0,   109,     0,
       3,     4,     5,     6,     0,   218,   111,     0,     0,   112,
       0,   103,     0,     0,   241,   105,   106,   113,   107,   108,
       0,     0,     0,   109,     0,     0,     0,     3,     4,     5,
       6,   111,     0,     0,   112,     0,     0,     0,   103,     0,
      24,     0,   105,   106,   113,   107,   108,     0,     0,     0,
     109,     0,     3,     4,     5,     6,     0,     0,   111,     0,
       0,   112,     0,     0,     0,     0,     0,    24,     0,   113,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     3,
       4,     5,     6,   103,     0,     0,   221,   105,   106,     0,
     107,   108,     0,   103,     0,   109,   113,   105,   106,     0,
     107,   108,     0,   111,     0,   109,   112,     0,     0,     0,
       0,     0,     0,   111,   235,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     0,     0,
     103,   113,     0,   251,   105,   106,     0,   107,   108,   103,
       0,   113,   109,   105,   106,     0,   107,   108,     0,     0,
     111,   109,     0,   112,     0,     0,     0,     0,     0,   111,
     259,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     4,     5,     6,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     0,     0,   103,     0,   113,   263,
     105,   106,     0,   107,   108,     0,   103,   113,   109,   265,
     105,   106,     0,   107,   108,     0,   111,     0,   109,   112,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     0,     0,     0,     0,     0,     0,     3,     4,     5,
       6,     0,     0,   103,   113,     0,   304,   105,   106,     0,
     107,   108,     0,   103,   113,   109,   317,   105,   106,     0,
     107,   108,     0,   111,     0,   109,   112,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,   103,     0,
       0,   113,   105,   106,     0,   107,   108,     0,   103,     0,
     109,   113,   105,   106,     0,   107,   108,     0,   111,     0,
     109,   112,   329,     0,     0,     0,     0,     0,   111,     0,
       0,   112,   331,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     0,     0,     0,     0,     0,     0,     3,
       4,     5,     6,   103,     0,     0,   113,   105,   106,     0,
     107,   108,     0,   103,     0,   109,   113,   105,   106,     0,
     107,   108,     0,   111,     0,   109,   112,   333,     0,     0,
     204,     0,     0,   111,     0,     0,   112,     0,     0,     0,
       0,     0,     0,   239,     3,     4,     5,     6,     0,     0,
       0,     0,     0,     0,     3,     4,     5,     6,   243,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   267,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,     0,     0,     0,     0,   202,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   305,
      20,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,   318,     0,     0,     0,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,     0,     0,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   299,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    20,     0,   247,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99
};

static const yytype_int16 yycheck[] =
{
      13,    14,    76,     3,     4,     5,     6,    10,    83,    15,
      23,   202,    36,   106,    15,    13,     7,     0,     7,     9,
      36,    36,    14,    10,    10,    32,     9,    81,    10,    36,
      36,    17,    18,    36,    47,    25,    36,    29,    20,    22,
       3,     4,     5,     6,    68,    36,    35,    66,    67,    36,
      33,    67,    68,    68,    17,    38,    56,    57,    21,    65,
      58,    74,   253,   138,    65,    36,    79,    67,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   135,   273,   102,   177,     7,     7,     7,   107,   108,
      20,   110,     7,    56,    57,    36,    67,    68,   111,     3,
       4,     5,     6,   116,    36,   118,    36,   120,   121,    51,
       0,    14,   125,    51,   127,    36,    36,   114,     3,     4,
       5,     6,     7,    24,   198,   199,    29,    68,     3,     4,
       5,     6,    36,    36,    36,   209,    68,     7,   157,    36,
       3,     4,     5,     6,    24,   164,     7,   166,   167,   162,
       7,    24,    56,    57,   173,    66,   169,    66,     7,     3,
       4,     5,     6,    13,   238,   184,     7,    66,    24,   182,
      24,    56,    57,    36,     7,    67,    67,    58,   197,    25,
     129,   200,     9,    10,   133,     7,   260,    66,   185,   202,
     203,   188,    36,    56,    57,    20,     9,     7,    25,   218,
       3,     4,     5,     6,    13,    67,     7,    67,   227,    36,
     207,   230,    56,    57,    66,    13,    64,     7,    25,   168,
      25,    48,    49,    50,    51,    67,     9,    13,   302,   248,
     249,    25,   229,    25,     9,    58,   255,    58,    17,   236,
      58,    25,     9,   240,    25,   242,    14,   321,     9,   268,
       9,   270,   201,    56,    57,    25,    34,   254,   277,   208,
      15,   280,    19,     7,   213,   214,   279,    15,   281,    58,
      59,    60,    61,    62,    63,    64,    22,   296,    15,    15,
     299,     9,    33,   232,    38,   298,    73,   235,   256,    55,
     303,    55,   192,    51,   192,   292,    65,    -1,   311,    -1,
     313,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
     307,    -1,   309,    19,   327,   312,    -1,    -1,    -1,   316,
      26,    27,   319,    -1,    30,    -1,   323,   276,   325,   326,
      36,   328,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,   295,     9,   297,    -1,
      -1,   300,    -1,    -1,    -1,    -1,   305,    -1,    -1,    65,
      -1,   310,    -1,    25,    -1,   314,    -1,    -1,    -1,   318,
      -1,   320,     7,   322,    36,    10,    11,    12,    -1,    14,
      15,   330,    -1,    -1,    19,    -1,    48,    49,    50,    51,
      -1,    26,    27,    -1,    -1,    30,     9,    10,    -1,     7,
      -1,    36,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    25,    48,    49,    50,    51,    -1,    -1,    27,
      -1,    -1,    30,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    23,    24,    48,    49,    50,    51,    -1,
      48,    49,    50,    51,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    -1,    -1,    -1,    19,    65,    48,    49,
      50,    51,    -1,    26,    27,    -1,    -1,    30,    -1,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    48,    49,    50,    51,    27,
      -1,    -1,    30,    -1,    -1,    -1,     7,    -1,    36,    10,
      11,    12,    65,    14,    15,    -1,    -1,    -1,    19,    -1,
      48,    49,    50,    51,    -1,    26,    27,    -1,    -1,    30,
      -1,     7,    -1,    -1,    10,    11,    12,    65,    14,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    48,    49,    50,
      51,    27,    -1,    -1,    30,    -1,    -1,    -1,     7,    -1,
      36,    -1,    11,    12,    65,    14,    15,    -1,    -1,    -1,
      19,    -1,    48,    49,    50,    51,    -1,    -1,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    65,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    48,
      49,    50,    51,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    -1,     7,    -1,    19,    65,    11,    12,    -1,
      14,    15,    -1,    27,    -1,    19,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
       7,    65,    -1,    10,    11,    12,    -1,    14,    15,     7,
      -1,    65,    19,    11,    12,    -1,    14,    15,    -1,    -1,
      27,    19,    -1,    30,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    -1,    -1,     7,    -1,    65,    10,
      11,    12,    -1,    14,    15,    -1,     7,    65,    19,    10,
      11,    12,    -1,    14,    15,    -1,    27,    -1,    19,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,     7,    65,    -1,    10,    11,    12,    -1,
      14,    15,    -1,     7,    65,    19,    10,    11,    12,    -1,
      14,    15,    -1,    27,    -1,    19,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,     7,    -1,
      -1,    65,    11,    12,    -1,    14,    15,    -1,     7,    -1,
      19,    65,    11,    12,    -1,    14,    15,    -1,    27,    -1,
      19,    30,    31,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,     7,    -1,    -1,    65,    11,    12,    -1,
      14,    15,    -1,     7,    -1,    19,    65,    11,    12,    -1,
      14,    15,    -1,    27,    -1,    19,    30,    31,    -1,    -1,
      10,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    10,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    10,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    16,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    16,
      36,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    16,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    22,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    36,    -1,    67,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    24,    48,    49,    50,    51,    70,    71,    72,
      73,    74,    91,     7,     7,    51,    51,     0,    73,    24,
      36,    88,    88,     7,    36,     9,    10,    25,    75,    76,
      77,    78,    91,    88,     7,    24,     7,    10,    88,     9,
      25,    10,    75,    66,    66,   109,   110,   111,    24,    76,
       7,     7,    24,    10,     7,    36,    79,    80,    81,    82,
      83,     3,     4,     5,     6,    36,    56,    57,    67,   107,
     108,   112,    88,    66,   111,    24,    13,    80,    81,    67,
      36,    68,    36,    68,   112,   107,   107,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      36,    67,    68,     7,    10,    11,    12,    14,    15,    19,
      26,    27,    30,    65,    84,    85,    86,    87,    89,    91,
      92,    93,    94,    96,    97,    98,   100,   101,    79,    88,
     108,    36,    36,    88,     7,    36,    82,     7,    36,    83,
      36,    67,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,    67,   107,    58,    25,     7,
      90,    90,   107,   107,    20,   107,    14,    29,    88,    95,
       7,    35,    10,    26,    85,    88,    88,     9,    88,    88,
      88,    88,    67,    10,    26,    84,    66,    10,    84,    82,
      83,    67,     7,   104,   105,   106,   107,    66,    13,    13,
      58,    88,    16,   107,    10,   107,   107,    84,    88,    13,
       7,    25,   107,    90,    88,    25,   107,    10,    26,    67,
       9,    10,   109,   110,   107,   108,   108,    36,   107,    84,
      15,    86,    88,    88,    25,    28,    84,   108,    13,    10,
      84,    10,    84,    10,    25,   107,     9,    67,    58,    58,
     107,    10,   107,    17,    84,    20,   102,   103,    95,    28,
      58,   108,    25,    10,     9,    10,    25,    10,    36,   107,
      36,   107,    14,    16,    86,    10,    17,    18,    99,    17,
      21,   107,    10,   103,   108,    34,     9,     9,    25,   107,
     107,    15,    84,   107,    10,    17,    18,    88,   107,    22,
      88,    19,    22,     7,    10,    16,    15,    84,   107,    84,
      88,   107,    84,   108,    88,    15,    84,    10,    16,    84,
      88,    32,    88,    84,    15,    84,    84,   108,    84,    31,
      88,    31,    84,    31
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    81,    82,    82,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    89,    89,
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
       2,     1,     2,     6,     7,     6,     7,     6,     4,     5,
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

#line 1947 "parser.tab.c"

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
