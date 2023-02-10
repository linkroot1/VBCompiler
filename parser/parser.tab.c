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
#line 5 "parser.y"

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
    INT_VALUE = 258,               /* INT_VALUE  */
    DOUBLE_VALUE = 259,            /* DOUBLE_VALUE  */
    STRING_VALUE = 260,            /* STRING_VALUE  */
    BOOLEAN_VALUE = 261,           /* BOOLEAN_VALUE  */
    IDENTIFIER_VALUE = 262,        /* IDENTIFIER_VALUE  */
    INT = 263,                     /* INT  */
    DOUBLE = 264,                  /* DOUBLE  */
    STRING = 265,                  /* STRING  */
    BOOLEAN = 266,                 /* BOOLEAN  */
    IDENTIFIER = 267,              /* IDENTIFIER  */
    ENDL = 268,                    /* ENDL  */
    SUB = 269,                     /* SUB  */
    END = 270,                     /* END  */
    CONST = 271,                   /* CONST  */
    DIM = 272,                     /* DIM  */
    AS = 273,                      /* AS  */
    WHILE = 274,                   /* WHILE  */
    IF = 275,                      /* IF  */
    NEW = 276,                     /* NEW  */
    ELSEIF = 277,                  /* ELSEIF  */
    SELECT = 278,                  /* SELECT  */
    CASE = 279,                    /* CASE  */
    IS = 280,                      /* IS  */
    TO = 281,                      /* TO  */
    IMPORTS = 282,                 /* IMPORTS  */
    MODULE = 283,                  /* MODULE  */
    FUNCTION = 284,                /* FUNCTION  */
    RETURN = 285,                  /* RETURN  */
    DO = 286,                      /* DO  */
    LOOP = 287,                    /* LOOP  */
    UNTIL = 288,                   /* UNTIL  */
    FOR = 289,                     /* FOR  */
    NEXT = 290,                    /* NEXT  */
    STEP = 291,                    /* STEP  */
    OF = 292,                      /* OF  */
    IN = 293,                      /* IN  */
    EACH = 294,                    /* EACH  */
    END_OF_LINE = 295,             /* END_OF_LINE  */
    UNARY_MINUS = 296,             /* UNARY_MINUS  */
    UNARY_PLUS = 297,              /* UNARY_PLUS  */
    ASSIGN_CONSTRUCT = 298,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 299,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 300,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 301,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 302,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 303,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 304,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 305,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 306,           /* ASSIGN_CONCAT  */
    PRIVATE = 307,                 /* PRIVATE  */
    PROTECTED = 308,               /* PROTECTED  */
    PUBLIC = 309,                  /* PUBLIC  */
    FRIEND = 310,                  /* FRIEND  */
    INT_DIV = 311,                 /* INT_DIV  */
    NOT_EQUAL = 312,               /* NOT_EQUAL  */
    LESS_OR_EQUAL = 313,           /* LESS_OR_EQUAL  */
    MORE_OR_EQUAL = 314,           /* MORE_OR_EQUAL  */
    THEN = 315,                    /* THEN  */
    ELSE = 316                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "parser.y"

	bool bool_val;
	int int_val;
	//bin and hex
	double double_val;
	char* datetime_val;//time_t
	char* str_val;
	char* id_var_name;

#line 204 "parser.tab.c"

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
  YYSYMBOL_INT_VALUE = 3,                  /* INT_VALUE  */
  YYSYMBOL_DOUBLE_VALUE = 4,               /* DOUBLE_VALUE  */
  YYSYMBOL_STRING_VALUE = 5,               /* STRING_VALUE  */
  YYSYMBOL_BOOLEAN_VALUE = 6,              /* BOOLEAN_VALUE  */
  YYSYMBOL_IDENTIFIER_VALUE = 7,           /* IDENTIFIER_VALUE  */
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
  YYSYMBOL_UNARY_MINUS = 41,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 42,                /* UNARY_PLUS  */
  YYSYMBOL_ASSIGN_CONSTRUCT = 43,          /* ASSIGN_CONSTRUCT  */
  YYSYMBOL_ASSIGN_MULT = 44,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_ORD_DIV = 45,            /* ASSIGN_ORD_DIV  */
  YYSYMBOL_ASSIGN_INT_DIV = 46,            /* ASSIGN_INT_DIV  */
  YYSYMBOL_ASSIGN_ADD = 47,                /* ASSIGN_ADD  */
  YYSYMBOL_ASSIGN_SUB = 48,                /* ASSIGN_SUB  */
  YYSYMBOL_ASSIGN_LSHIFT = 49,             /* ASSIGN_LSHIFT  */
  YYSYMBOL_ASSIGN_RSHIFT = 50,             /* ASSIGN_RSHIFT  */
  YYSYMBOL_ASSIGN_CONCAT = 51,             /* ASSIGN_CONCAT  */
  YYSYMBOL_PRIVATE = 52,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 53,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 54,                    /* PUBLIC  */
  YYSYMBOL_FRIEND = 55,                    /* FRIEND  */
  YYSYMBOL_56_ = 56,                       /* '^'  */
  YYSYMBOL_57_ = 57,                       /* '*'  */
  YYSYMBOL_58_ = 58,                       /* '/'  */
  YYSYMBOL_INT_DIV = 59,                   /* INT_DIV  */
  YYSYMBOL_60_ = 60,                       /* '+'  */
  YYSYMBOL_61_ = 61,                       /* '-'  */
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
  YYSYMBOL_functions_and_sub_list = 82,    /* functions_and_sub_list  */
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
  YYSYMBOL_access = 99,                    /* access  */
  YYSYMBOL_while_stmt = 100,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 101,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 102,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 103,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 104,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 105,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 106,              /* elseif_list  */
  YYSYMBOL_if_stmt_single_line = 107,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 108,              /* select_stmt  */
  YYSYMBOL_case_list = 109,                /* case_list  */
  YYSYMBOL_case_stmt = 110,                /* case_stmt  */
  YYSYMBOL_function_call_multiline = 111,  /* function_call_multiline  */
  YYSYMBOL_function_call_singleline = 112, /* function_call_singleline  */
  YYSYMBOL_expr = 113,                     /* expr  */
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
#define YYLAST   1082

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  353

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
      69,    70,    57,    60,    73,    61,     2,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    62,    66,     2,     2,     2,     2,     2,     2,     2,
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
      55,    59,    63,    64,    65,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   153,   153,   156,   157,   160,   161,   164,   165,   169,
     170,   171,   172,   176,   177,   180,   181,   184,   185,   186,
     187,   188,   189,   190,   191,   195,   196,   197,   198,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   212,   213,
     214,   218,   219,   220,   224,   225,   229,   235,   236,   240,
     241,   245,   246,   247,   250,   251,   252,   253,   254,   255,
     256,   257,   262,   263,   270,   271,   272,   276,   277,   278,
     279,   280,   281,   285,   286,   290,   291,   292,   293,   294,
     295,   303,   308,   309,   312,   313,   318,   319,   324,   329,
     330,   331,   332,   335,   336,   339,   340,   345,   348,   349,
     352,   353,   354,   355,   359,   363,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   392,   393,   394,   395,
     398,   399,   400,   401,   406,   407,   408,   412,   413,   416,
     417,   421,   422
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
  "DOUBLE_VALUE", "STRING_VALUE", "BOOLEAN_VALUE", "IDENTIFIER_VALUE",
  "INT", "DOUBLE", "STRING", "BOOLEAN", "IDENTIFIER", "ENDL", "SUB", "END",
  "CONST", "DIM", "AS", "WHILE", "IF", "NEW", "ELSEIF", "SELECT", "CASE",
  "IS", "TO", "IMPORTS", "MODULE", "FUNCTION", "RETURN", "DO", "LOOP",
  "UNTIL", "FOR", "NEXT", "STEP", "OF", "IN", "EACH", "END_OF_LINE",
  "UNARY_MINUS", "UNARY_PLUS", "ASSIGN_CONSTRUCT", "ASSIGN_MULT",
  "ASSIGN_ORD_DIV", "ASSIGN_INT_DIV", "ASSIGN_ADD", "ASSIGN_SUB",
  "ASSIGN_LSHIFT", "ASSIGN_RSHIFT", "ASSIGN_CONCAT", "PRIVATE",
  "PROTECTED", "PUBLIC", "FRIEND", "'^'", "'*'", "'/'", "INT_DIV", "'+'",
  "'-'", "'='", "NOT_EQUAL", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "'>'",
  "'<'", "'&'", "'('", "')'", "THEN", "ELSE", "','", "'{'", "'}'",
  "$accept", "root", "program_items_list", "program_items_list_not_empty",
  "program_item", "module", "functions_and_sub_list", "function_or_sub",
  "function", "sub_bloc", "parameterlist_or_empty",
  "parameterlist_with_type", "parameterlist_without_type",
  "parameter_with_type", "parameter_without_type", "stmt_list", "stmt",
  "single_line_stmt", "multi_line_stmt", "stmt_ends", "decl_stmt",
  "decl_stmt_single_line", "var_name", "access", "while_stmt",
  "do_loop_stmt", "do_loop_condition", "for_loop_stmt",
  "for_each_loop_stmt", "if_stmt_multi_line", "elseif_list",
  "if_stmt_single_line", "select_stmt", "case_list", "case_stmt",
  "function_call_multiline", "function_call_singleline", "expr",
  "basic_literal", "basic_literal_value", "arguments_multiline",
  "arguments_singleline", "arguments", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-260)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,    20,    27,    29,    39,  -260,  -260,   118,  -260,   127,
    -260,  -260,   109,   110,   110,  -260,  -260,  -260,  -260,   139,
    -260,   112,   147,   110,  -260,   141,   143,   160,     9,  -260,
    -260,  -260,    17,   312,   106,  -260,   116,   146,   433,   174,
     178,   167,   105,    14,   137,  -260,  -260,   110,  -260,  -260,
     134,   116,  -260,   176,   187,   196,   140,     1,     2,  -260,
    -260,  -260,  -260,  -260,  -260,   116,    47,    47,    47,    47,
    -260,  -260,  -260,   995,  -260,   -15,   524,    14,   110,  -260,
      92,    16,    58,   110,  -260,    26,  -260,    74,  -260,  -260,
       3,   995,   995,   965,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,   148,  -260,    47,
     116,   193,   212,   212,    47,    47,   202,    47,    64,    23,
     804,  -260,   110,  -260,   110,  -260,   110,  -260,  -260,  -260,
     110,  -260,   110,  -260,  -260,   170,   721,  -260,  -260,  -260,
    -260,   173,  -260,  -260,   747,   187,   237,  -260,  -260,   238,
    -260,   181,  -260,  -260,   635,  1005,  1005,  1014,   256,   256,
     191,   191,   191,   191,   191,   191,  -260,  -260,   995,  -260,
     186,   243,    -2,   651,   901,    47,   582,    47,    47,   773,
     110,   245,   254,   240,    47,  -260,   112,   112,   112,   112,
     112,   110,   242,    47,   813,   205,   263,   833,  -260,  -260,
    -260,    47,    92,    92,   289,   773,   203,   651,   257,   995,
     995,   842,   773,    92,   267,  -260,   595,   757,  -260,   608,
     258,    47,  -260,  -260,   282,   980,   227,   235,    92,    47,
     995,   863,   231,   212,   212,    47,   230,   773,     4,  -260,
      77,   872,   246,    92,   274,   293,   893,   280,  -260,   621,
    -260,  -260,   123,   406,   244,   995,   295,   278,   294,     5,
     917,   216,   499,    87,    12,  -260,  -260,  -260,   241,   290,
    -260,  -260,   302,  -260,   301,    47,   995,    47,   995,   262,
    -260,   -33,    92,    92,     8,   216,  -260,   314,    47,   737,
       0,    47,   110,   664,   313,  -260,   311,   333,  -260,  -260,
     995,   995,   272,   291,   292,  -260,   933,   902,   331,    47,
     737,   651,   773,    47,   773,  -260,   241,   110,    47,    47,
      47,   737,   335,  -260,   949,   922,   773,   737,   651,   737,
     129,   773,    61,   737,  -260,   737,   337,   737,   773,   241,
     773,   570,  -260,   737,  -260,   737,   110,   599,  -260,   773,
    -260,   783,  -260
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    78,    76,    75,    77,     0,     2,     4,
       5,     7,     0,     0,     0,    80,    79,     1,     6,     0,
      62,     8,     0,     0,    63,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   139,   140,     0,    10,    14,
       0,     0,    11,     0,    46,     0,     0,    30,    34,    38,
      41,   130,   133,   131,   132,   125,     0,     0,     0,     0,
     138,   124,   107,   141,   106,     0,     0,    29,     0,    12,
       0,    32,    37,     0,    33,     0,    36,     0,   104,   105,
       0,   109,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,    49,     0,    52,     0,    56,    57,    58,
       0,    51,     0,    61,    53,     0,     0,   126,   129,   127,
     128,    44,    31,    35,     0,     0,     0,    39,    46,     0,
      42,     0,   134,   123,   118,   112,   113,   114,   110,   111,
     115,   119,   120,   121,   117,   116,   122,   136,   142,    17,
      74,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    50,    54,    55,    60,
      59,     0,     0,     0,     0,     0,     0,     0,    40,    43,
     135,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      84,     0,     0,     0,     0,    19,     0,     0,    21,     0,
       0,     0,    45,    25,     0,     0,     0,    69,     0,     0,
      70,     0,     0,     0,     0,     0,    95,     0,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
      26,    73,     0,     0,     0,    66,     0,     0,     0,    71,
       0,     0,     0,     0,     0,    98,    83,    82,     0,     0,
      20,    27,     0,    22,     0,     0,    67,     0,    68,     0,
      81,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,    28,    24,
      64,    65,     0,     0,    69,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,   103,     0,   100,
       0,     0,     0,    93,    90,     0,     0,   101,     0,     0,
       0,     0,    72,    94,    92,   102,     0,     0,    88,     0,
      86,     0,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,  -260,  -260,   350,  -260,   327,   323,  -260,  -260,
     285,   308,   330,   -64,   -70,   286,  -116,  -200,  -260,   -13,
    -260,  -260,  -111,   157,  -260,  -260,   128,  -260,  -260,  -260,
    -260,  -260,  -260,  -260,   122,    94,   -73,   275,  -195,  -259,
     -46,    -6,   336,   -61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      56,    57,    58,    59,    60,   120,   121,   122,   123,    38,
     124,   125,   171,    32,   126,   127,   180,   128,   129,   130,
     290,   131,   132,   264,   265,    71,    72,    73,   141,    74,
      45,    89,    47,    75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,   172,   134,   185,    90,   236,   226,   227,   296,
      33,    61,    62,    63,    64,   308,   203,   150,   242,    88,
      65,   147,   309,   283,    37,   107,    54,   294,   263,   228,
      46,    39,    13,   254,    76,   181,   263,   108,   145,    14,
     109,    84,    86,   151,    24,    46,    40,   134,   269,    20,
      61,    62,    63,    64,    55,   108,   142,   330,   109,    65,
     204,   286,   182,   134,    88,   136,   146,   284,    67,    68,
     144,   134,   310,   152,    85,    87,   109,    69,   185,   199,
     346,   185,   198,   177,    15,   236,   148,   303,   304,    85,
      61,    62,    63,    64,    16,   185,   177,   178,   143,    65,
     137,   138,   139,   140,    20,   179,   134,    67,    68,   186,
     178,   187,   291,   188,   149,   185,    69,   189,    17,   190,
      53,   134,   258,   259,   134,   185,    61,    62,    63,    64,
     185,    87,   134,   134,   109,    65,   342,    19,   134,   134,
      61,    62,    63,    64,   134,    20,   185,    67,    68,    65,
      20,    23,    24,    34,     1,     2,    69,    12,   134,   292,
     205,    25,    26,   275,   134,   339,    12,   212,   134,    20,
     133,    35,    36,   134,    48,    43,    27,    66,   217,     3,
       4,     5,     6,    67,    68,    44,    50,    24,   134,   134,
      51,   185,    69,   237,   238,    52,   281,    67,    68,     3,
       4,     5,     6,    77,    79,    80,    69,    70,    54,   185,
      83,   185,   134,   185,   133,   232,   134,   185,   167,   233,
     234,   185,   169,   235,   170,   185,   175,   185,   232,   185,
     133,   185,   233,   234,   134,   185,   235,   134,   133,   134,
     191,   134,   195,    20,    61,    62,    63,    64,   134,   145,
     148,   200,   134,   134,   134,   201,   134,   332,   134,   106,
     134,   202,   134,   213,   134,   134,   214,   134,   134,   215,
     134,   218,   134,   133,   134,   222,   134,   223,   134,   312,
     314,    61,    62,    63,    64,   243,   239,   248,   133,   252,
      65,   133,    61,    62,    63,    64,   250,   253,   326,   133,
     257,    65,   261,   270,   331,   133,   133,   271,   268,   273,
     228,   133,   282,   279,   280,   338,   298,   340,   100,   101,
     102,   103,   104,   105,   106,   133,    25,    41,   297,   229,
     299,   133,   302,   349,   305,   133,   315,   316,    67,    68,
     133,    27,    91,    92,    93,   317,   318,    69,    70,    67,
      68,   323,    24,   319,   320,   334,   133,   344,    69,    18,
      42,    49,   135,    81,     3,     4,     5,     6,   266,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,     0,   133,   168,    82,   295,    78,     0,   173,
     174,     0,   176,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,   133,     0,   133,     0,   133,    61,
      62,    63,    64,     0,     0,   133,     0,     0,    65,   133,
     133,   133,   194,   133,     0,   133,     0,   133,     0,   133,
     197,   133,   133,     0,   133,   133,     0,   133,     0,   133,
       0,   133,     0,   133,     0,   133,   277,    25,     0,     0,
     207,     0,   209,   210,     0,     0,     0,     0,     0,   216,
       0,     0,    27,     0,     0,   211,    67,    68,   219,     0,
       0,     0,     0,    24,     0,    69,   225,     0,     0,   230,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     0,
       0,   231,     0,     0,     0,     0,   249,     0,   241,     0,
       0,     0,     0,   246,   255,     0,     0,     0,     0,     0,
     260,   110,     0,     0,   287,   112,   113,     0,   114,   115,
       0,   288,   116,   262,     0,     0,     0,   276,   278,     0,
     118,     0,     0,   119,     0,     0,   110,     0,   293,   111,
     112,   113,     0,   114,   115,     0,     0,   116,     0,     0,
     300,     0,   301,     0,   117,   118,     0,     0,   119,   230,
       0,     0,     0,   306,    24,     0,   311,     0,     0,     0,
       0,   289,     0,     0,     0,   307,     0,     0,     0,     0,
       0,     0,   110,     0,   324,     0,   112,   113,   328,   114,
     115,     0,     0,   116,   276,   278,   325,   208,   327,     0,
     329,   118,     0,     0,   119,   348,     0,   333,     0,     0,
     244,   110,   337,     0,     0,   112,   113,   341,   114,   115,
       0,   343,   116,   247,   345,     0,   347,     0,     0,     0,
     118,     0,     0,   119,   350,   351,   274,     0,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     313,    20,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    20,     0,     0,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   110,     0,     0,   192,   112,   113,     0,
     114,   115,     0,     0,   116,     0,     0,     0,     0,   110,
       0,   193,   118,   112,   113,   119,   114,   115,     0,   110,
     116,    24,   196,   112,   113,     0,   114,   115,   118,   110,
     116,   119,   245,   112,   113,     0,   114,   115,   118,     0,
     116,   119,     0,     0,     0,   110,     0,    24,   118,   112,
     113,   119,   114,   115,     0,   110,   116,    24,     0,   112,
     113,     0,   114,   115,   118,     0,   116,   119,     0,     0,
       0,     0,     0,    24,   118,     0,   110,   119,   352,   183,
     112,   113,     0,   114,   115,   110,     0,   116,   220,   112,
     113,     0,   114,   115,   184,   118,   116,     0,   119,     0,
       0,     0,     0,   221,   118,   110,     0,   119,   224,   112,
     113,     0,   114,   115,   110,     0,   116,     0,   112,   113,
       0,   114,   115,     0,   118,   116,     0,   119,     0,     0,
       0,     0,     0,   118,   240,   110,   119,     0,   256,   112,
     113,     0,   114,   115,   110,     0,   116,     0,   112,   113,
       0,   114,   115,     0,   118,   116,     0,   119,     0,     0,
       0,     0,     0,   118,   267,   110,   119,     0,   272,   112,
     113,     0,   114,   115,   110,     0,   116,   322,   112,   113,
       0,   114,   115,     0,   118,   116,     0,   119,     0,     0,
       0,     0,     0,   118,   110,     0,   119,   336,   112,   113,
       0,   114,   115,     0,     0,   116,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,   119,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,   206,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     0,     0,   285,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     0,     0,   321,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,     0,     0,
     335,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,     0,   153,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
     251,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    98,    99,   100,   101,   102,   103,
     104,   105,   106
};

static const yytype_int16 yycheck[] =
{
      13,    14,   113,    76,   120,    66,   206,   202,   203,   268,
      23,     3,     4,     5,     6,    15,    18,    87,   213,    65,
      12,    85,    22,    18,    15,    40,    12,    15,    24,    21,
      36,    14,    12,   228,    47,    12,    24,    70,    12,    12,
      73,    40,    40,    40,    40,    51,    29,   120,   243,    40,
       3,     4,     5,     6,    40,    70,    40,   316,    73,    12,
      62,   261,    39,   136,   110,    78,    40,    62,    60,    61,
      83,   144,    72,    70,    73,    73,    73,    69,   194,   149,
     339,   197,   146,    19,    55,   285,    12,   282,   283,    73,
       3,     4,     5,     6,    55,   211,    19,    33,    40,    12,
       8,     9,    10,    11,    40,   118,   179,    60,    61,   122,
      33,   124,    25,   126,    40,   231,    69,   130,     0,   132,
      15,   194,   233,   234,   197,   241,     3,     4,     5,     6,
     246,    73,   205,   206,    73,    12,    75,    28,   211,   212,
       3,     4,     5,     6,   217,    40,   262,    60,    61,    12,
      40,    12,    40,    12,    27,    28,    69,     0,   231,    72,
     173,    14,    15,    40,   237,    36,     9,   180,   241,    40,
      76,    28,    12,   246,    28,    69,    29,    40,   191,    52,
      53,    54,    55,    60,    61,    69,    12,    40,   261,   262,
      12,   307,    69,   206,   207,    28,   257,    60,    61,    52,
      53,    54,    55,    69,    28,    18,    69,    70,    12,   325,
      70,   327,   285,   329,   120,    12,   289,   333,    70,    16,
      17,   337,    29,    20,    12,   341,    24,   343,    12,   345,
     136,   347,    16,    17,   307,   351,    20,   310,   144,   312,
      70,   314,    69,    40,     3,     4,     5,     6,   321,    12,
      12,    70,   325,   326,   327,    69,   329,   318,   331,    68,
     333,    18,   335,    18,   337,   338,    12,   340,   341,    29,
     343,    29,   345,   179,   347,    70,   349,    14,   351,   292,
     293,     3,     4,     5,     6,    18,    29,    29,   194,    62,
      12,   197,     3,     4,     5,     6,    14,    62,   311,   205,
      69,    12,    72,    29,   317,   211,   212,    14,    62,    29,
      21,   217,    18,    69,    19,   328,    14,   330,    62,    63,
      64,    65,    66,    67,    68,   231,    14,    15,    38,    40,
      29,   237,    70,   346,    20,   241,    23,    26,    60,    61,
     246,    29,    67,    68,    69,    12,    74,    69,    70,    60,
      61,    20,    40,    62,    62,    20,   262,    20,    69,     9,
      33,    38,    77,    55,    52,    53,    54,    55,   240,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,   289,   109,    55,   264,    51,    -1,   114,
     115,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,    -1,   310,    -1,   312,    -1,   314,     3,
       4,     5,     6,    -1,    -1,   321,    -1,    -1,    12,   325,
     326,   327,   136,   329,    -1,   331,    -1,   333,    -1,   335,
     144,   337,   338,    -1,   340,   341,    -1,   343,    -1,   345,
      -1,   347,    -1,   349,    -1,   351,    40,    14,    -1,    -1,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,   184,
      -1,    -1,    29,    -1,    -1,   179,    60,    61,   193,    -1,
      -1,    -1,    -1,    40,    -1,    69,   201,    -1,    -1,   204,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,   205,    -1,    -1,    -1,    -1,   221,    -1,   212,    -1,
      -1,    -1,    -1,   217,   229,    -1,    -1,    -1,    -1,    -1,
     235,    12,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    23,   237,    -1,    -1,    -1,   252,   253,    -1,
      31,    -1,    -1,    34,    -1,    -1,    12,    -1,   263,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,
     275,    -1,   277,    -1,    30,    31,    -1,    -1,    34,   284,
      -1,    -1,    -1,   288,    40,    -1,   291,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,   309,    -1,    16,    17,   313,    19,
      20,    -1,    -1,    23,   319,   320,   310,    15,   312,    -1,
     314,    31,    -1,    -1,    34,    35,    -1,   321,    -1,    -1,
      15,    12,   326,    -1,    -1,    16,    17,   331,    19,    20,
      -1,   335,    23,    15,   338,    -1,   340,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,   349,    15,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      26,    40,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    40,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    12,    -1,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    12,
      -1,    30,    31,    16,    17,    34,    19,    20,    -1,    12,
      23,    40,    15,    16,    17,    -1,    19,    20,    31,    12,
      23,    34,    15,    16,    17,    -1,    19,    20,    31,    -1,
      23,    34,    -1,    -1,    -1,    12,    -1,    40,    31,    16,
      17,    34,    19,    20,    -1,    12,    23,    40,    -1,    16,
      17,    -1,    19,    20,    31,    -1,    23,    34,    -1,    -1,
      -1,    -1,    -1,    40,    31,    -1,    12,    34,    35,    15,
      16,    17,    -1,    19,    20,    12,    -1,    23,    15,    16,
      17,    -1,    19,    20,    30,    31,    23,    -1,    34,    -1,
      -1,    -1,    -1,    30,    31,    12,    -1,    34,    15,    16,
      17,    -1,    19,    20,    12,    -1,    23,    -1,    16,    17,
      -1,    19,    20,    -1,    31,    23,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    31,    32,    12,    34,    -1,    15,    16,
      17,    -1,    19,    20,    12,    -1,    23,    -1,    16,    17,
      -1,    19,    20,    -1,    31,    23,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    31,    32,    12,    34,    -1,    15,    16,
      17,    -1,    19,    20,    12,    -1,    23,    15,    16,    17,
      -1,    19,    20,    -1,    31,    23,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    31,    12,    -1,    34,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    -1,    71,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    -1,    71,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    -1,    71,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    -1,
      71,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    60,    61,    62,    63,    64,    65,
      66,    67,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,    28,    52,    53,    54,    55,    77,    78,    79,
      80,    81,    99,    12,    12,    55,    55,     0,    80,    28,
      40,    95,    95,    12,    40,    14,    15,    29,    82,    83,
      84,    85,    99,    95,    12,    28,    12,    15,    95,    14,
      29,    15,    82,    69,    69,   116,   117,   118,    28,    83,
      12,    12,    28,    15,    12,    40,    86,    87,    88,    89,
      90,     3,     4,     5,     6,    12,    40,    60,    61,    69,
      70,   111,   112,   113,   115,   119,    95,    69,   118,    28,
      18,    87,    88,    70,    40,    73,    40,    73,   116,   117,
     119,   113,   113,   113,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    40,    70,    73,
      12,    15,    16,    17,    19,    20,    23,    30,    31,    34,
      91,    92,    93,    94,    96,    97,   100,   101,   103,   104,
     105,   107,   108,   111,   112,    86,    95,     8,     9,    10,
      11,   114,    40,    40,    95,    12,    40,    89,    12,    40,
      90,    40,    70,    70,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,    70,   113,    29,
      12,    98,    98,   113,   113,    24,   113,    19,    33,    95,
     102,    12,    39,    15,    30,    92,    95,    95,    95,    95,
      95,    70,    15,    30,    91,    69,    15,    91,    89,    90,
      70,    69,    18,    18,    62,    95,    71,   113,    15,   113,
     113,    91,    95,    18,    12,    29,   113,    95,    29,   113,
      15,    30,    70,    14,    15,   113,   114,   114,    21,    40,
     113,    91,    12,    16,    17,    20,    93,    95,    95,    29,
      32,    91,   114,    18,    15,    15,    91,    15,    29,   113,
      14,    70,    62,    62,   114,   113,    15,    69,    98,    98,
     113,    72,    91,    24,   109,   110,   102,    32,    62,   114,
      29,    14,    15,    29,    15,    40,   113,    40,   113,    69,
      19,   119,    18,    18,    62,    71,    93,    15,    22,    72,
     106,    25,    72,   113,    15,   110,   115,    38,    14,    29,
     113,   113,    70,   114,   114,    20,   113,    91,    15,    22,
      72,   113,    95,    26,    95,    23,    26,    12,    74,    62,
      62,    71,    15,    20,   113,    91,    95,    91,   113,    91,
     115,    95,   119,    91,    20,    71,    15,    91,    95,    36,
      95,    91,    75,    91,    20,    91,   115,    91,    35,    95,
      35,    91,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    88,    88,    88,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    98,    98,    99,    99,    99,    99,    99,
      99,   100,   101,   101,   102,   102,   103,   103,   104,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   109,   109,
     110,   110,   110,   110,   111,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   114,
     115,   115,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     5,
       6,     6,     7,     1,     3,     1,     1,     6,     8,     7,
       9,     7,     9,     8,    10,     8,     9,     9,    10,     0,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     3,
       4,     1,     3,     4,     3,     5,     1,     1,     2,     1,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     2,
       2,     1,     1,     2,     7,     7,     5,     6,     6,     4,
       4,     2,    10,     4,     1,     1,     1,     1,     1,     2,
       2,     6,     5,     5,     2,     2,    11,    13,    10,     7,
       9,     8,    10,     4,     5,     4,     6,     7,     1,     2,
       4,     5,     6,     4,     2,     2,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     4,     3,     2,     1,
       1,     1,     3
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

#line 1956 "parser.tab.c"

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

#line 424 "parser.y"


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
