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
    ASSIGN_CONSTRUCT = 296,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 297,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 298,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 299,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 300,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 301,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 302,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 303,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 304,           /* ASSIGN_CONCAT  */
    PRIVATE = 305,                 /* PRIVATE  */
    PROTECTED = 306,               /* PROTECTED  */
    PUBLIC = 307,                  /* PUBLIC  */
    FRIEND = 308,                  /* FRIEND  */
    INT_DIV = 309,                 /* INT_DIV  */
    UNARY_MINUS = 310,             /* UNARY_MINUS  */
    UNARY_PLUS = 311,              /* UNARY_PLUS  */
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
#line 20 "Q:/Uni/tfiaimt/VBCompiler/parser/parser.y"

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
  YYSYMBOL_var_name_singleline = 99,       /* var_name_singleline  */
  YYSYMBOL_access = 100,                   /* access  */
  YYSYMBOL_while_stmt = 101,               /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 102,             /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 103,        /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 104,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 105,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 106,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 107,              /* elseif_list  */
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
#define YYLAST   1881

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  491

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
       0,   152,   152,   155,   156,   159,   160,   163,   164,   168,
     169,   170,   171,   175,   176,   179,   180,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   198,
     199,   200,   201,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   215,   216,   217,   221,   222,   223,   227,   228,
     232,   238,   239,   243,   244,   248,   249,   250,   253,   254,
     255,   256,   257,   258,   259,   260,   265,   266,   273,   274,
     275,   276,   277,   278,   282,   283,   284,   285,   286,   287,
     291,   294,   295,   299,   300,   301,   302,   303,   304,   312,
     313,   318,   319,   322,   323,   328,   329,   334,   339,   340,
     341,   342,   343,   344,   345,   346,   349,   350,   351,   352,
     355,   356,   361,   362,   365,   366,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   429,   430,   431,   432,   435,   436,   437,   438,   443,
     444,   445,   449,   450,   453,   454,   458,   459
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
  "ASSIGN_CONSTRUCT", "ASSIGN_MULT", "ASSIGN_ORD_DIV", "ASSIGN_INT_DIV",
  "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_LSHIFT", "ASSIGN_RSHIFT",
  "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC", "FRIEND", "'^'",
  "'*'", "'/'", "INT_DIV", "'+'", "'-'", "UNARY_MINUS", "UNARY_PLUS",
  "'='", "NOT_EQUAL", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "'>'", "'<'",
  "'&'", "'('", "')'", "THEN", "ELSE", "','", "'{'", "'}'", "$accept",
  "root", "program_items_list", "program_items_list_not_empty",
  "program_item", "module", "functions_and_sub_list", "function_or_sub",
  "function", "sub_bloc", "parameterlist_or_empty",
  "parameterlist_with_type", "parameterlist_without_type",
  "parameter_with_type", "parameter_without_type", "stmt_list", "stmt",
  "single_line_stmt", "multi_line_stmt", "stmt_ends", "decl_stmt",
  "decl_stmt_single_line", "var_name", "var_name_singleline", "access",
  "while_stmt", "do_loop_stmt", "do_loop_condition", "for_loop_stmt",
  "for_each_loop_stmt", "if_stmt_multi_line", "elseif_list",
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

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     180,    58,    87,   -14,    47,  -341,  -341,   105,  -341,   180,
    -341,  -341,    83,   114,   114,  -341,  -341,  -341,  -341,   143,
    -341,   122,    40,   114,  -341,   149,   169,   206,    18,  -341,
    -341,  -341,    73,   347,   154,  -341,   155,   201,   497,   241,
     244,   221,   104,    12,   238,  -341,  -341,   114,  -341,  -341,
     190,   155,  -341,   233,   253,   250,   203,    13,    48,  -341,
    -341,  -341,  -341,  -341,  -341,   205,   130,   130,   130,   130,
    -341,  1784,  -341,   -23,   680,    12,   114,  -341,   237,    56,
      57,   114,  -341,    25,  -341,    39,   147,  -341,    67,   255,
     255,  1733,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   207,  -341,   130,   155,   246,
     280,   280,   415,   415,   269,   415,    82,    92,  1306,   602,
    -341,   114,  -341,   114,  -341,   114,  -341,  -341,  -341,   114,
    -341,   114,  1799,   114,   224,   712,  -341,  -341,  -341,  -341,
     229,  -341,  -341,   757,   253,   287,  -341,  -341,   288,  -341,
     121,   232,  -341,  -341,  1813,   286,   286,   513,   255,   255,
     245,   245,   245,   245,   245,   245,  -341,  -341,  1784,  -341,
    -341,   258,   297,   306,    -3,     0,  1626,   114,  1661,   235,
     415,  1626,   114,   130,   130,   858,  1274,   310,   330,   130,
    1586,   317,   415,  -341,   122,   122,   122,   122,   122,  1310,
    1322,  1336,  1348,  1380,  1396,  1410,  1422,  1454,  1470,  1484,
    1496,  1528,   122,   114,   328,   415,   789,   290,   344,   903,
    -341,  -341,  -341,   415,   237,   237,   237,   324,   237,  1261,
     858,   858,   376,   114,  1626,   114,   150,   156,  1646,  1646,
     926,   947,   237,   350,  1606,   300,  -341,  1626,   114,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   826,  -341,  1626,   114,   342,   415,  -341,  -341,
     358,  1750,   307,   316,   321,   322,   415,   323,   237,   415,
    1784,   984,  1005,   374,   374,   130,   318,   858,  1784,   858,
      16,    16,   360,   362,   122,   122,    90,  -341,   332,   237,
     325,  -341,  -341,   187,   188,  1784,  1784,  1784,  1784,  1784,
    1784,  1784,  1784,  1784,  1784,  1784,  1784,  1784,   387,  1042,
     197,   198,  -341,  1626,   114,  -341,  -341,  -341,   363,  1544,
     370,  1799,  -341,  1558,   333,  -341,   392,   393,   345,   397,
       2,  1679,   463,    26,   579,    69,    20,  -341,   186,  -341,
    -341,  -341,   262,   385,  -341,   395,   401,  -341,   412,   402,
     403,   199,   200,   415,   415,  1784,   415,   415,  1784,   368,
    -341,  -341,   130,   237,   237,   487,   463,  -341,   413,   415,
    1274,     4,   421,  1274,     6,   415,   114,  1566,    99,   425,
    -341,   426,   427,   442,  -341,  -341,  -341,  -341,  -341,   428,
     429,  -341,  -341,  -341,  -341,   386,  1767,   399,   400,  -341,
    1697,   405,  1063,   443,   415,  1274,  -341,  1100,   444,  1274,
    1626,   114,   858,   415,   858,   415,   858,  -341,  -341,   262,
     114,  -341,  -341,   130,   130,   130,  1274,  1274,   450,  -341,
    1715,   406,  1121,   452,  -341,  1158,   858,   858,  1274,  1626,
     114,  1274,  1626,   114,  1274,    77,   858,    70,  1274,  1274,
    -341,  1274,  1274,   458,  -341,   461,  1274,  1274,   858,   858,
     858,   858,   262,   858,  1179,  -341,  1274,  1274,  -341,  -341,
    1274,  1274,  1274,  1274,   114,  1216,  -341,   858,  -341,  1237,
    -341
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
      51,     0,    53,     0,    56,     0,    60,    61,    62,     0,
      55,     0,    57,     0,     0,     0,   161,   164,   162,   163,
      48,    35,    39,     0,     0,     0,    43,    50,     0,    46,
       0,     0,   169,   141,   136,   130,   131,   132,   128,   129,
     133,   137,   138,   139,   135,   134,   140,   171,   177,   160,
      17,    82,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    54,    58,    59,    64,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,    21,    22,    32,    24,    25,     0,
       0,    68,    69,    70,    71,     0,     0,     0,    76,    99,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   113,     0,
       0,    27,    28,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,     0,   102,     0,     0,     0,   124,     0,
       0,   117,     0,     0,   116,     0,     0,     0,   107,   106,
     101,     0,     0,     0,   100,     0,   119,   118,     0,     0,
       0,     0,     0,     0,     0,    79,   109,   108,   105,   104,
     123,   122,   121,   120,     0,     0,    97,     0,    95,     0,
      96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -341,  -341,   476,  -341,   453,   449,  -341,  -341,
     414,   433,   440,   -78,   -71,   220,    85,  -216,  -341,   -13,
    -341,  -341,   389,   -98,    27,  -341,  -341,   202,  -341,  -341,
    -341,   152,  -341,  -341,   210,  -137,    80,  -109,  -217,  -340,
     396,   -42,   455,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      56,    57,    58,    59,    60,   119,   120,   121,   122,    38,
     123,   124,   172,   173,    32,   125,   126,   186,   127,   128,
     129,   381,   130,   131,   346,   347,   132,   133,   140,    72,
      45,    46,    47,    73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    88,   177,   179,   146,   182,   273,   274,   275,
      33,   277,   392,   175,   149,   226,   286,   105,   228,   413,
     374,   418,   150,    87,    54,   298,   414,    12,   414,    61,
      62,    63,    64,    37,    74,   389,    12,   144,   108,    15,
     345,   378,   110,   111,   345,   112,   113,   106,   379,   114,
     107,   147,    55,    82,    25,    26,    24,   116,    20,   227,
     117,   334,   229,   135,   375,   145,    87,   220,   143,    27,
      13,   235,    61,    62,    63,    64,   415,   221,   419,   148,
      24,   108,   353,   248,    67,    68,    83,    39,    84,   455,
       3,     4,     5,     6,   385,   118,   141,   142,   380,    14,
      16,   183,    40,   185,   187,    17,   265,   151,   194,   183,
     195,    19,   196,   472,   272,   184,   197,    20,   198,    53,
     212,    85,    20,   184,    71,   425,   377,    67,    68,    83,
      85,   188,   484,    61,    62,    63,    64,   152,   118,    20,
     107,   386,    65,   107,    20,   475,    71,    89,    90,    91,
      61,    62,    63,    64,    20,    23,   407,   408,   324,    65,
     286,    34,    24,   230,   231,   292,    71,   332,   236,   237,
     335,   293,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   339,   340,   168,    67,    68,
      24,   106,   176,   178,   107,   181,    24,    35,   190,    69,
     262,   391,   355,   356,   193,    67,    68,     1,     2,   390,
     345,   390,   359,   360,   399,   400,    69,    70,    36,   287,
     289,   290,   291,    43,    44,   294,   295,    24,    24,    48,
       3,     4,     5,     6,   303,   304,   388,    24,    24,    24,
      24,    61,    62,    63,    64,   136,   137,   138,   139,    52,
      65,   320,   321,    50,   401,   402,    51,   403,   404,    75,
     234,    77,    54,   238,   239,    61,    62,    63,    64,   244,
     411,    78,   247,    81,    86,   170,   421,   167,    66,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   171,   180,   213,   264,    67,    68,   217,   144,
     147,   193,   222,   271,   193,   441,   233,    69,    70,   280,
     361,   362,   288,   104,   450,   224,   453,    98,    99,   100,
     101,   102,   103,   104,   225,   193,   193,   223,   242,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   243,    95,    96,    97,   246,   323,    98,    99,
     100,   101,   102,   103,   104,   216,   331,   263,   269,   331,
     268,    25,    41,   219,   276,   341,   193,   193,   299,   457,
     302,   322,   325,   422,   424,   426,    27,   327,   328,    61,
      62,    63,    64,   329,   330,   333,   338,    24,    65,   349,
     342,   350,   283,   284,   352,   354,   285,     3,     4,     5,
       6,   357,   369,   363,   193,   240,   241,   446,   447,   365,
     366,   370,   371,   368,   372,   373,    20,   456,    61,    62,
      63,    64,   288,   393,   394,   387,   396,   108,   193,   193,
     395,   397,   398,   409,    67,    68,   468,   469,   405,   470,
     471,   416,   473,   331,   331,    69,   331,   331,   427,   428,
     281,   282,   406,   429,   430,   280,   288,   431,   432,   410,
     433,   434,   435,   439,   444,   420,    61,    62,    63,    64,
     460,   487,   464,    67,    68,    65,   437,   462,   478,   283,
     284,   479,   319,   285,   118,    18,    42,    49,    79,   134,
      61,    62,    63,    64,   440,    80,   384,   193,   351,    65,
     174,   348,   193,   449,   169,   452,    76,   343,   278,   344,
       0,    25,     0,    71,   365,   368,     0,     0,     0,     0,
       0,    67,    68,     0,     0,     0,    27,   193,     0,     0,
     193,     0,    69,   193,     0,     0,   193,    24,     0,   193,
       0,     0,     0,   193,   193,    67,    68,     3,     4,     5,
       6,   193,   193,     0,     0,     0,    69,     0,     0,   193,
       0,   193,   193,     0,     0,   193,   193,   193,   193,     0,
     193,    96,    97,     0,   193,    98,    99,   100,   101,   102,
     103,   104,    61,    62,    63,    64,     0,     0,     0,     0,
       0,   108,     0,     0,   382,   110,   111,     0,   112,   113,
     412,   379,   114,   417,     0,    61,    62,    63,    64,     0,
     116,     0,     0,   117,   108,     0,     0,   191,   110,   111,
       0,   112,   113,     0,     0,   114,     0,     0,     0,     0,
       0,     0,   192,   116,     0,   442,   117,    67,    68,   445,
       0,     0,   448,     0,   451,     0,   454,     0,   118,     0,
       0,   383,     0,     0,     0,     0,   458,   459,     0,     0,
      67,    68,     0,     0,     0,     0,   466,   467,     0,     0,
       0,   118,     0,     0,     0,     0,   474,     0,     0,     0,
       0,   476,   477,    61,    62,    63,    64,     0,   480,   481,
     482,   483,   108,   485,     0,   109,   110,   111,     0,   112,
     113,     0,     0,   114,     0,     0,     0,   489,     0,     0,
     115,   116,     0,     0,   117,    61,    62,    63,    64,     0,
      24,     0,     0,     0,   108,     0,     0,   214,   110,   111,
       0,   112,   113,     0,     0,   114,     0,     0,    67,    68,
       0,     0,   215,   116,     0,     0,   117,     0,     0,   118,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,     0,     0,     0,     0,     0,   108,
      67,    68,   218,   110,   111,     0,   112,   113,     0,     0,
     114,   118,     0,     0,     0,     0,     0,     0,   116,     0,
       0,   117,    61,    62,    63,    64,     0,    24,     0,     0,
       0,   108,     0,     0,   266,   110,   111,     0,   112,   113,
       0,     0,   114,     0,     0,    67,    68,     0,     0,   267,
     116,     0,     0,   117,     0,     0,   118,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,   108,     0,
       0,   318,   110,   111,     0,   112,   113,    67,    68,   114,
       0,     0,     0,     0,     0,     0,     0,   116,   118,     0,
     117,    61,    62,    63,    64,     0,    24,     0,     0,     0,
     108,     0,     0,     0,   110,   111,     0,   112,   113,     0,
       0,   114,     0,     0,    67,    68,     0,     0,     0,   116,
       0,     0,   117,     0,     0,   118,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
       0,     0,     0,     0,     0,   108,    67,    68,   270,   110,
     111,     0,   112,   113,     0,     0,   114,   118,     0,    61,
      62,    63,    64,     0,   116,     0,     0,   117,   108,     0,
       0,     0,   110,   111,     0,   112,   113,     0,     0,   114,
      61,    62,    63,    64,     0,     0,     0,   116,   296,   108,
     117,    67,    68,   110,   111,     0,   112,   113,     0,     0,
     114,     0,   118,     0,     0,     0,     0,     0,   116,   297,
       0,   117,     0,     0,    67,    68,     0,    61,    62,    63,
      64,     0,     0,     0,     0,   118,   108,     0,     0,   336,
     110,   111,     0,   112,   113,    67,    68,   114,    61,    62,
      63,    64,     0,     0,     0,   116,   118,   108,   117,     0,
     337,   110,   111,     0,   112,   113,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,   116,     0,     0,   117,
       0,     0,    67,    68,     0,    61,    62,    63,    64,     0,
       0,     0,     0,   118,   108,     0,     0,   358,   110,   111,
       0,   112,   113,    67,    68,   114,    61,    62,    63,    64,
       0,     0,     0,   116,   118,   108,   117,     0,   438,   110,
     111,     0,   112,   113,     0,     0,   114,     0,     0,     0,
       0,     0,     0,     0,   116,     0,     0,   117,     0,     0,
      67,    68,     0,    61,    62,    63,    64,     0,     0,     0,
       0,   118,   108,     0,     0,   443,   110,   111,     0,   112,
     113,    67,    68,   114,    61,    62,    63,    64,     0,     0,
       0,   116,   118,   108,   117,     0,   463,   110,   111,     0,
     112,   113,     0,     0,   114,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,   117,     0,     0,    67,    68,
       0,    61,    62,    63,    64,     0,     0,     0,     0,   118,
     108,     0,     0,   465,   110,   111,     0,   112,   113,    67,
      68,   114,    61,    62,    63,    64,     0,     0,     0,   116,
     118,   108,   117,     0,     0,   110,   111,     0,   112,   113,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,   117,   486,     0,    67,    68,     0,    61,
      62,    63,    64,     0,     0,     0,     0,   118,   108,     0,
       0,     0,   110,   111,     0,   112,   113,    67,    68,   114,
      61,    62,    63,    64,     0,     0,     0,   116,   118,   108,
     117,   488,     0,   110,   111,     0,   112,   113,     0,     0,
     114,     0,     0,     0,    61,    62,    63,    64,   116,     0,
       0,   117,   490,    65,    67,    68,     0,    61,    62,    63,
      64,     0,   278,     0,     0,   118,   108,     0,     0,     0,
     110,   111,     0,   112,   113,    67,    68,   114,     0,     0,
       0,   279,     0,     0,     0,   116,   118,     0,   117,    61,
      62,    63,    64,    61,    62,    63,    64,     0,    65,    67,
      68,     0,    65,     0,     0,    61,    62,    63,    64,     0,
      69,     0,    67,    68,    65,     0,     0,     0,     0,    61,
      62,    63,    64,   118,     0,     0,   189,     0,    65,     0,
     249,    61,    62,    63,    64,     0,     0,     0,     0,     0,
      65,     0,   250,     0,    67,    68,     0,     0,    67,    68,
       0,     0,     0,     0,     0,    69,   251,     0,     0,    69,
      67,    68,     0,    61,    62,    63,    64,     0,   252,     0,
       0,    69,    65,     0,    67,    68,     0,     0,     0,    61,
      62,    63,    64,     0,     0,    69,    67,    68,    65,     0,
       0,     0,     0,    61,    62,    63,    64,    69,     0,     0,
     253,     0,    65,     0,     0,    61,    62,    63,    64,     0,
       0,     0,     0,     0,    65,     0,   254,     0,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
     255,     0,     0,     0,    67,    68,     0,    61,    62,    63,
      64,     0,   256,     0,     0,    69,    65,     0,    67,    68,
       0,     0,     0,    61,    62,    63,    64,     0,     0,    69,
      67,    68,    65,     0,     0,     0,     0,    61,    62,    63,
      64,    69,     0,     0,   257,     0,    65,     0,     0,    61,
      62,    63,    64,     0,     0,     0,     0,     0,    65,     0,
     258,     0,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,   259,     0,     0,     0,    67,    68,
       0,    61,    62,    63,    64,     0,   260,     0,     0,    69,
      65,     0,    67,    68,     0,     0,     0,    61,    62,    63,
      64,     0,     0,    69,    67,    68,    65,     0,     0,     0,
       0,    61,    62,    63,    64,    69,     0,     0,   261,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,     0,    67,    68,     0,     0,
       0,     0,   423,     0,     0,     0,     0,    69,   367,     0,
       0,     0,    67,    68,     0,     0,    20,     0,     0,     0,
       0,     0,     0,    69,     0,     0,    67,    68,     0,     0,
     199,   200,   201,   202,   203,   204,   245,    69,   205,   206,
     207,   208,   209,   210,   211,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,   300,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   153,     0,     0,     0,
      92,    93,    94,    95,    96,    97,    20,     0,    98,    99,
     100,   101,   102,   103,   104,     0,   301,     0,     0,     0,
     199,   200,   201,   202,   203,   204,    20,     0,   205,   206,
     207,   208,   209,   210,   211,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   199,   200,   201,   202,   203,
     204,     0,     0,   205,   206,   207,   208,   209,   210,   211,
       0,     0,   232,    92,    93,    94,    95,    96,    97,     0,
       0,    98,    99,   100,   101,   102,   103,   104,     0,     0,
     376,   199,   200,   201,   202,   203,   204,     0,     0,   205,
     206,   207,   208,   209,   210,   211,     0,     0,   436,   199,
     200,   201,   202,   203,   204,     0,     0,   205,   206,   207,
     208,   209,   210,   211,     0,     0,   461,    92,    93,    94,
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
      13,    14,    66,   112,   113,    83,   115,   224,   225,   226,
      23,   228,   352,   111,    85,    18,   232,    40,    18,    15,
      18,    15,    86,    65,    12,   242,    22,     0,    22,     3,
       4,     5,     6,    15,    47,    15,     9,    12,    12,    53,
      24,    15,    16,    17,    24,    19,    20,    70,    22,    23,
      73,    12,    40,    40,    14,    15,    40,    31,    40,    62,
      34,   278,    62,    76,    62,    40,   108,   145,    81,    29,
      12,   180,     3,     4,     5,     6,    72,   148,    72,    40,
      40,    12,   299,   192,    58,    59,    73,    14,    40,   429,
      50,    51,    52,    53,    25,    69,    40,    40,    72,    12,
      53,    19,    29,   116,    12,     0,   215,    40,   121,    19,
     123,    28,   125,    36,   223,    33,   129,    40,   131,    15,
     133,    73,    40,    33,    44,    26,   342,    58,    59,    73,
      73,    39,   472,     3,     4,     5,     6,    70,    69,    40,
      73,    72,    12,    73,    40,    75,    66,    67,    68,    69,
       3,     4,     5,     6,    40,    12,   373,   374,   267,    12,
     376,    12,    40,   176,   177,    15,    86,   276,   181,   182,
     279,    15,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   283,   284,   107,    58,    59,
      40,    70,   112,   113,    73,   115,    40,    28,   118,    69,
     213,    15,    15,    15,   119,    58,    59,    27,    28,   346,
      24,   348,    15,    15,    15,    15,    69,    70,    12,   232,
     233,   234,   235,    69,    69,   238,   239,    40,    40,    28,
      50,    51,    52,    53,   247,   248,   345,    40,    40,    40,
      40,     3,     4,     5,     6,     8,     9,    10,    11,    28,
      12,   264,   265,    12,   363,   364,    12,   366,   367,    69,
     180,    28,    12,   183,   184,     3,     4,     5,     6,   189,
     379,    18,   192,    70,    69,    29,   385,    70,    40,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    12,    24,    70,   215,    58,    59,    69,    12,
      12,   216,    70,   223,   219,   414,    71,    69,    70,   229,
     323,   324,   232,    68,   423,    18,   425,    62,    63,    64,
      65,    66,    67,    68,    18,   240,   241,    69,    18,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,    12,    57,    58,    59,    29,   267,    62,    63,
      64,    65,    66,    67,    68,   135,   276,    29,    14,   279,
      70,    14,    15,   143,    40,   285,   281,   282,    18,   433,
      70,    29,    14,   386,   387,   388,    29,    70,    62,     3,
       4,     5,     6,    62,    62,    62,    12,    40,    12,    29,
      72,    29,    16,    17,    62,    70,    20,    50,    51,    52,
      53,    14,    69,    40,   319,   185,   186,   420,   421,   329,
      40,    19,    19,   333,    69,    18,    40,   430,     3,     4,
       5,     6,   342,    38,    29,   345,    14,    12,   343,   344,
      29,    29,    29,    20,    58,    59,   449,   450,    70,   452,
     453,    20,   455,   363,   364,    69,   366,   367,    23,    23,
     230,   231,   372,    26,    12,   375,   376,    29,    29,   379,
      74,    62,    62,    20,    20,   385,     3,     4,     5,     6,
      20,   484,    20,    58,    59,    12,    71,    71,    20,    16,
      17,    20,   262,    20,    69,     9,    33,    38,    55,    75,
       3,     4,     5,     6,   414,    55,   344,   412,   296,    12,
     111,   291,   417,   423,   108,   425,    51,   287,    21,   289,
      -1,    14,    -1,   433,   434,   435,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    29,   442,    -1,    -1,
     445,    -1,    69,   448,    -1,    -1,   451,    40,    -1,   454,
      -1,    -1,    -1,   458,   459,    58,    59,    50,    51,    52,
      53,   466,   467,    -1,    -1,    -1,    69,    -1,    -1,   474,
      -1,   476,   477,    -1,    -1,   480,   481,   482,   483,    -1,
     485,    58,    59,    -1,   489,    62,    63,    64,    65,    66,
      67,    68,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    -1,    19,    20,
     380,    22,    23,   383,    -1,     3,     4,     5,     6,    -1,
      31,    -1,    -1,    34,    12,    -1,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,   415,    34,    58,    59,   419,
      -1,    -1,   422,    -1,   424,    -1,   426,    -1,    69,    -1,
      -1,    72,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,   446,   447,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,   456,    -1,    -1,    -1,
      -1,   461,   462,     3,     4,     5,     6,    -1,   468,   469,
     470,   471,    12,   473,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    23,    -1,    -1,    -1,   487,    -1,    -1,
      30,    31,    -1,    -1,    34,     3,     4,     5,     6,    -1,
      40,    -1,    -1,    -1,    12,    -1,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    23,    -1,    -1,    58,    59,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,    69,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,
      58,    59,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    69,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,     3,     4,     5,     6,    -1,    40,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    58,    59,    -1,    -1,    30,
      31,    -1,    -1,    34,    -1,    -1,    69,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    15,    16,    17,    -1,    19,    20,    58,    59,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    69,    -1,
      34,     3,     4,     5,     6,    -1,    40,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    16,    17,    -1,    19,    20,    -1,
      -1,    23,    -1,    -1,    58,    59,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    -1,    69,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    12,    58,    59,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    69,    -1,     3,
       4,     5,     6,    -1,    31,    -1,    -1,    34,    12,    -1,
      -1,    -1,    16,    17,    -1,    19,    20,    -1,    -1,    23,
       3,     4,     5,     6,    -1,    -1,    -1,    31,    32,    12,
      34,    58,    59,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    69,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    34,    -1,    -1,    58,    59,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    69,    12,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    58,    59,    23,     3,     4,
       5,     6,    -1,    -1,    -1,    31,    69,    12,    34,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    58,    59,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    69,    12,    -1,    -1,    15,    16,    17,
      -1,    19,    20,    58,    59,    23,     3,     4,     5,     6,
      -1,    -1,    -1,    31,    69,    12,    34,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,
      58,    59,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    69,    12,    -1,    -1,    15,    16,    17,    -1,    19,
      20,    58,    59,    23,     3,     4,     5,     6,    -1,    -1,
      -1,    31,    69,    12,    34,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    58,    59,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    69,
      12,    -1,    -1,    15,    16,    17,    -1,    19,    20,    58,
      59,    23,     3,     4,     5,     6,    -1,    -1,    -1,    31,
      69,    12,    34,    -1,    -1,    16,    17,    -1,    19,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    -1,    58,    59,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    69,    12,    -1,
      -1,    -1,    16,    17,    -1,    19,    20,    58,    59,    23,
       3,     4,     5,     6,    -1,    -1,    -1,    31,    69,    12,
      34,    35,    -1,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    -1,    -1,     3,     4,     5,     6,    31,    -1,
      -1,    34,    35,    12,    58,    59,    -1,     3,     4,     5,
       6,    -1,    21,    -1,    -1,    69,    12,    -1,    -1,    -1,
      16,    17,    -1,    19,    20,    58,    59,    23,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    31,    69,    -1,    34,     3,
       4,     5,     6,     3,     4,     5,     6,    -1,    12,    58,
      59,    -1,    12,    -1,    -1,     3,     4,     5,     6,    -1,
      69,    -1,    58,    59,    12,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    69,    -1,    -1,    40,    -1,    12,    -1,
      40,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    40,    -1,    58,    59,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    69,    40,    -1,    -1,    69,
      58,    59,    -1,     3,     4,     5,     6,    -1,    40,    -1,
      -1,    69,    12,    -1,    58,    59,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    69,    58,    59,    12,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    69,    -1,    -1,
      40,    -1,    12,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    40,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      40,    -1,    -1,    -1,    58,    59,    -1,     3,     4,     5,
       6,    -1,    40,    -1,    -1,    69,    12,    -1,    58,    59,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    69,
      58,    59,    12,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    69,    -1,    -1,    40,    -1,    12,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,
      40,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    40,    -1,    -1,    -1,    58,    59,
      -1,     3,     4,     5,     6,    -1,    40,    -1,    -1,    69,
      12,    -1,    58,    59,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    69,    58,    59,    12,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    69,    -1,    -1,    40,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    58,    59,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    69,    40,    -1,
      -1,    -1,    58,    59,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    58,    59,    -1,    -1,
      54,    55,    56,    57,    58,    59,    40,    69,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    40,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    40,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    40,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    54,    55,    56,    57,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      -1,    -1,    71,    54,    55,    56,    57,    58,    59,    -1,
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
      29,    15,    82,    69,    69,   116,   117,   118,    28,    83,
      12,    12,    28,    15,    12,    40,    86,    87,    88,    89,
      90,     3,     4,     5,     6,    12,    40,    58,    59,    69,
      70,   112,   115,   119,    95,    69,   118,    28,    18,    87,
      88,    70,    40,    73,    40,    73,    69,   117,   119,   112,
     112,   112,    54,    55,    56,    57,    58,    59,    62,    63,
      64,    65,    66,    67,    68,    40,    70,    73,    12,    15,
      16,    17,    19,    20,    23,    30,    31,    34,    69,    91,
      92,    93,    94,    96,    97,   101,   102,   104,   105,   106,
     108,   109,   112,   113,    86,    95,     8,     9,    10,    11,
     114,    40,    40,    95,    12,    40,    89,    12,    40,    90,
     119,    40,    70,    70,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,    70,   112,   116,
      29,    12,    98,    99,    98,    99,   112,   113,   112,   113,
      24,   112,   113,    19,    33,    95,   103,    12,    39,    40,
     112,    15,    30,    92,    95,    95,    95,    95,    95,    54,
      55,    56,    57,    58,    59,    62,    63,    64,    65,    66,
      67,    68,    95,    70,    15,    30,    91,    69,    15,    91,
      89,    90,    70,    69,    18,    18,    18,    62,    18,    62,
      95,    95,    71,    71,   112,   113,    95,    95,   112,   112,
      91,    91,    18,    12,   112,    40,    29,   112,   113,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    95,    29,   112,   113,    15,    30,    70,    14,
      15,   112,   113,   114,   114,   114,    40,   114,    21,    40,
     112,    91,    91,    16,    17,    20,    93,    95,   112,    95,
      95,    95,    15,    15,    95,    95,    32,    32,   114,    18,
      40,    70,    70,    95,    95,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,    15,    91,
      95,    95,    29,   112,   113,    14,    70,    70,    62,    62,
      62,   112,   113,    62,   114,   113,    15,    15,    12,    99,
      99,   112,    72,    91,    91,    24,   110,   111,   110,    29,
      29,   103,    62,   114,    70,    15,    15,    14,    15,    15,
      15,    95,    95,    40,    40,   112,    40,    40,   112,    69,
      19,    19,    69,    18,    18,    62,    71,    93,    15,    22,
      72,   107,    15,    72,   107,    25,    72,   112,   113,    15,
     111,    15,   115,    38,    29,    29,    14,    29,    29,    15,
      15,   113,   113,   113,   113,    70,   112,   114,   114,    20,
     112,   113,    91,    15,    22,    72,    20,    91,    15,    72,
     112,   113,    95,    26,    95,    26,    95,    23,    23,    26,
      12,    29,    29,    74,    62,    62,    71,    71,    15,    20,
     112,   113,    91,    15,    20,    91,    95,    95,    91,   112,
     113,    91,   112,   113,    91,   115,    95,   119,    91,    91,
      20,    71,    71,    15,    20,    15,    91,    91,    95,    95,
      95,    95,    36,    95,    91,    75,    91,    91,    20,    20,
      91,    91,    91,    91,   115,    91,    35,    95,    35,    91,
      35
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
     106,   106,   106,   106,   106,   106,   107,   107,   107,   107,
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
       0,     2,     1,     0,     1,     1,     2,     1,     3,     5,
       6,     6,     7,     1,     3,     1,     1,     6,     9,     9,
       7,    10,    10,     7,    10,    10,     8,    11,    11,     8,
       9,     9,    10,     0,     1,     3,     2,     2,     1,     3,
       2,     2,     1,     3,     4,     1,     3,     4,     3,     5,
       1,     1,     2,     1,     2,     1,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     1,     2,     7,     7,
       7,     7,     5,     5,     6,     6,     4,     4,     2,    10,
       4,     4,     1,     1,     1,     1,     1,     2,     2,     6,
       6,     4,     5,     3,     3,    11,    13,    10,     7,     7,
       9,     9,     8,     8,    10,    10,     4,     4,     5,     5,
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

#line 2167 "parser.tab.c"

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

#line 463 "Q:/Uni/tfiaimt/VBCompiler/parser/parser.y"


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
