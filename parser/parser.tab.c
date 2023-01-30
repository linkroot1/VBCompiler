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
    NEW = 271,                     /* NEW  */
    ELSEIF = 272,                  /* ELSEIF  */
    SELECT = 273,                  /* SELECT  */
    CASE = 274,                    /* CASE  */
    IS = 275,                      /* IS  */
    TO = 276,                      /* TO  */
    IMPORTS = 277,                 /* IMPORTS  */
    MODULE = 278,                  /* MODULE  */
    FUNCTION = 279,                /* FUNCTION  */
    RETURN = 280,                  /* RETURN  */
    DO = 281,                      /* DO  */
    LOOP = 282,                    /* LOOP  */
    UNTIL = 283,                   /* UNTIL  */
    FOR = 284,                     /* FOR  */
    NEXT = 285,                    /* NEXT  */
    STEP = 286,                    /* STEP  */
    OF = 287,                      /* OF  */
    IN = 288,                      /* IN  */
    EACH = 289,                    /* EACH  */
    END_OF_LINE = 290,             /* END_OF_LINE  */
    UNARY_MINUS = 291,             /* UNARY_MINUS  */
    UNARY_PLUS = 292,              /* UNARY_PLUS  */
    ASSIGN_CONSTRUCT = 293,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 294,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 295,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 296,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 297,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 298,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 299,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 300,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 301,           /* ASSIGN_CONCAT  */
    PRIVATE = 302,                 /* PRIVATE  */
    PROTECTED = 303,               /* PROTECTED  */
    PUBLIC = 304,                  /* PUBLIC  */
    FRIEND = 305,                  /* FRIEND  */
    INT_DIV = 306,                 /* INT_DIV  */
    NOT_EQUAL = 307,               /* NOT_EQUAL  */
    LESS_OR_EQUAL = 308,           /* LESS_OR_EQUAL  */
    MORE_OR_EQUAL = 309,           /* MORE_OR_EQUAL  */
    THEN = 310,                    /* THEN  */
    ELSE = 311                     /* ELSE  */
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
  YYSYMBOL_NEW = 16,                       /* NEW  */
  YYSYMBOL_ELSEIF = 17,                    /* ELSEIF  */
  YYSYMBOL_SELECT = 18,                    /* SELECT  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_IS = 20,                        /* IS  */
  YYSYMBOL_TO = 21,                        /* TO  */
  YYSYMBOL_IMPORTS = 22,                   /* IMPORTS  */
  YYSYMBOL_MODULE = 23,                    /* MODULE  */
  YYSYMBOL_FUNCTION = 24,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_DO = 26,                        /* DO  */
  YYSYMBOL_LOOP = 27,                      /* LOOP  */
  YYSYMBOL_UNTIL = 28,                     /* UNTIL  */
  YYSYMBOL_FOR = 29,                       /* FOR  */
  YYSYMBOL_NEXT = 30,                      /* NEXT  */
  YYSYMBOL_STEP = 31,                      /* STEP  */
  YYSYMBOL_OF = 32,                        /* OF  */
  YYSYMBOL_IN = 33,                        /* IN  */
  YYSYMBOL_EACH = 34,                      /* EACH  */
  YYSYMBOL_END_OF_LINE = 35,               /* END_OF_LINE  */
  YYSYMBOL_UNARY_MINUS = 36,               /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 37,                /* UNARY_PLUS  */
  YYSYMBOL_ASSIGN_CONSTRUCT = 38,          /* ASSIGN_CONSTRUCT  */
  YYSYMBOL_ASSIGN_MULT = 39,               /* ASSIGN_MULT  */
  YYSYMBOL_ASSIGN_ORD_DIV = 40,            /* ASSIGN_ORD_DIV  */
  YYSYMBOL_ASSIGN_INT_DIV = 41,            /* ASSIGN_INT_DIV  */
  YYSYMBOL_ASSIGN_ADD = 42,                /* ASSIGN_ADD  */
  YYSYMBOL_ASSIGN_SUB = 43,                /* ASSIGN_SUB  */
  YYSYMBOL_ASSIGN_LSHIFT = 44,             /* ASSIGN_LSHIFT  */
  YYSYMBOL_ASSIGN_RSHIFT = 45,             /* ASSIGN_RSHIFT  */
  YYSYMBOL_ASSIGN_CONCAT = 46,             /* ASSIGN_CONCAT  */
  YYSYMBOL_PRIVATE = 47,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 48,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 49,                    /* PUBLIC  */
  YYSYMBOL_FRIEND = 50,                    /* FRIEND  */
  YYSYMBOL_51_ = 51,                       /* '^'  */
  YYSYMBOL_52_ = 52,                       /* '*'  */
  YYSYMBOL_53_ = 53,                       /* '/'  */
  YYSYMBOL_INT_DIV = 54,                   /* INT_DIV  */
  YYSYMBOL_55_ = 55,                       /* '+'  */
  YYSYMBOL_56_ = 56,                       /* '-'  */
  YYSYMBOL_57_ = 57,                       /* '='  */
  YYSYMBOL_NOT_EQUAL = 58,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_OR_EQUAL = 59,             /* LESS_OR_EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 60,             /* MORE_OR_EQUAL  */
  YYSYMBOL_61_ = 61,                       /* '>'  */
  YYSYMBOL_62_ = 62,                       /* '<'  */
  YYSYMBOL_63_ = 63,                       /* '&'  */
  YYSYMBOL_THEN = 64,                      /* THEN  */
  YYSYMBOL_ELSE = 65,                      /* ELSE  */
  YYSYMBOL_66_ = 66,                       /* '('  */
  YYSYMBOL_67_ = 67,                       /* ')'  */
  YYSYMBOL_68_ = 68,                       /* ','  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_root = 72,                      /* root  */
  YYSYMBOL_program_items_list = 73,        /* program_items_list  */
  YYSYMBOL_program_items_list_not_empty = 74, /* program_items_list_not_empty  */
  YYSYMBOL_program_item = 75,              /* program_item  */
  YYSYMBOL_module = 76,                    /* module  */
  YYSYMBOL_functions_and_sub_list = 77,    /* functions_and_sub_list  */
  YYSYMBOL_function_or_sub = 78,           /* function_or_sub  */
  YYSYMBOL_function = 79,                  /* function  */
  YYSYMBOL_sub_bloc = 80,                  /* sub_bloc  */
  YYSYMBOL_parameterlist_or_empty = 81,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist_with_type = 82,   /* parameterlist_with_type  */
  YYSYMBOL_parameterlist_without_type = 83, /* parameterlist_without_type  */
  YYSYMBOL_parameter_with_type = 84,       /* parameter_with_type  */
  YYSYMBOL_parameter_without_type = 85,    /* parameter_without_type  */
  YYSYMBOL_stmt_list = 86,                 /* stmt_list  */
  YYSYMBOL_stmt = 87,                      /* stmt  */
  YYSYMBOL_single_line_stmt = 88,          /* single_line_stmt  */
  YYSYMBOL_multi_line_stmt = 89,           /* multi_line_stmt  */
  YYSYMBOL_stmt_ends = 90,                 /* stmt_ends  */
  YYSYMBOL_decl_stmt = 91,                 /* decl_stmt  */
  YYSYMBOL_decl_stmt_single_line = 92,     /* decl_stmt_single_line  */
  YYSYMBOL_var_name = 93,                  /* var_name  */
  YYSYMBOL_access = 94,                    /* access  */
  YYSYMBOL_assign_stmt_singleline = 95,    /* assign_stmt_singleline  */
  YYSYMBOL_assign_stmt_multiline = 96,     /* assign_stmt_multiline  */
  YYSYMBOL_while_stmt = 97,                /* while_stmt  */
  YYSYMBOL_do_loop_stmt = 98,              /* do_loop_stmt  */
  YYSYMBOL_do_loop_condition = 99,         /* do_loop_condition  */
  YYSYMBOL_for_loop_stmt = 100,            /* for_loop_stmt  */
  YYSYMBOL_for_each_loop_stmt = 101,       /* for_each_loop_stmt  */
  YYSYMBOL_if_stmt_multi_line = 102,       /* if_stmt_multi_line  */
  YYSYMBOL_elseif_list = 103,              /* elseif_list  */
  YYSYMBOL_if_stmt_single_line = 104,      /* if_stmt_single_line  */
  YYSYMBOL_select_stmt = 105,              /* select_stmt  */
  YYSYMBOL_case_list = 106,                /* case_list  */
  YYSYMBOL_case_stmt = 107,                /* case_stmt  */
  YYSYMBOL_function_call_multiline = 108,  /* function_call_multiline  */
  YYSYMBOL_function_call_singleline = 109, /* function_call_singleline  */
  YYSYMBOL_expr = 110,                     /* expr  */
  YYSYMBOL_basic_literal = 111,            /* basic_literal  */
  YYSYMBOL_arguments_multiline = 112,      /* arguments_multiline  */
  YYSYMBOL_arguments_singleline = 113,     /* arguments_singleline  */
  YYSYMBOL_arguments = 114,                /* arguments  */
  YYSYMBOL_expr_list = 115                 /* expr_list  */
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
#define YYLAST   918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

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
       2,     2,     2,     2,     2,     2,     2,     2,    63,     2,
      66,    67,    52,    55,    68,    56,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    57,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    54,    58,    59,    60,
      64,    65
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
     234,   238,   239,   240,   241,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   257,   258,   265,   266,   267,   271,
     272,   273,   274,   275,   276,   280,   281,   285,   286,   287,
     288,   289,   290,   296,   297,   298,   299,   300,   301,   304,
     305,   310,   315,   316,   319,   320,   325,   326,   331,   336,
     337,   338,   339,   342,   343,   346,   347,   352,   355,   356,
     359,   360,   361,   362,   366,   370,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   395,   396,   397,   398,   402,   403,   404,   408,
     409,   412,   413,   417,   418
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
  "AS", "WHILE", "IF", "NEW", "ELSEIF", "SELECT", "CASE", "IS", "TO",
  "IMPORTS", "MODULE", "FUNCTION", "RETURN", "DO", "LOOP", "UNTIL", "FOR",
  "NEXT", "STEP", "OF", "IN", "EACH", "END_OF_LINE", "UNARY_MINUS",
  "UNARY_PLUS", "ASSIGN_CONSTRUCT", "ASSIGN_MULT", "ASSIGN_ORD_DIV",
  "ASSIGN_INT_DIV", "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_LSHIFT",
  "ASSIGN_RSHIFT", "ASSIGN_CONCAT", "PRIVATE", "PROTECTED", "PUBLIC",
  "FRIEND", "'^'", "'*'", "'/'", "INT_DIV", "'+'", "'-'", "'='",
  "NOT_EQUAL", "LESS_OR_EQUAL", "MORE_OR_EQUAL", "'>'", "'<'", "'&'",
  "THEN", "ELSE", "'('", "')'", "','", "'{'", "'}'", "$accept", "root",
  "program_items_list", "program_items_list_not_empty", "program_item",
  "module", "functions_and_sub_list", "function_or_sub", "function",
  "sub_bloc", "parameterlist_or_empty", "parameterlist_with_type",
  "parameterlist_without_type", "parameter_with_type",
  "parameter_without_type", "stmt_list", "stmt", "single_line_stmt",
  "multi_line_stmt", "stmt_ends", "decl_stmt", "decl_stmt_single_line",
  "var_name", "access", "assign_stmt_singleline", "assign_stmt_multiline",
  "while_stmt", "do_loop_stmt", "do_loop_condition", "for_loop_stmt",
  "for_each_loop_stmt", "if_stmt_multi_line", "elseif_list",
  "if_stmt_single_line", "select_stmt", "case_list", "case_stmt",
  "function_call_multiline", "function_call_singleline", "expr",
  "basic_literal", "arguments_multiline", "arguments_singleline",
  "arguments", "expr_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-185)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,    10,    16,   -23,    44,  -185,  -185,    97,  -185,    -8,
    -185,  -185,    90,   100,   100,  -185,  -185,  -185,  -185,   125,
    -185,   131,   482,   100,  -185,   126,   146,   168,    93,  -185,
    -185,  -185,   130,   487,   120,  -185,   123,   158,   175,   176,
     184,   183,    99,    30,    50,  -185,  -185,   100,  -185,  -185,
     132,   123,  -185,   188,   201,   209,   150,   -10,    -9,  -185,
    -185,  -185,  -185,  -185,  -185,   439,   439,   439,  -185,   824,
    -185,   -24,   545,    30,   100,  -185,   324,    27,    32,   100,
    -185,    83,  -185,    92,   -17,   824,   824,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     151,  -185,   439,    98,   202,   220,   220,   439,   439,   212,
     439,   115,    12,   654,  -185,   100,  -185,   100,  -185,  -185,
     100,   100,  -185,  -185,  -185,   100,  -185,   100,   177,   179,
     165,   571,   173,  -185,  -185,   597,   201,   236,  -185,  -185,
     245,  -185,   189,  -185,   836,   846,   846,   855,   410,   410,
     194,   194,   194,   194,   194,   194,  -185,  -185,   824,   117,
    -185,  -185,  -185,   196,   246,    -5,   488,   768,   439,   343,
     439,   439,   623,   100,   247,   259,   244,   439,  -185,   131,
     131,   131,   131,   131,   131,   262,   141,   100,   249,   439,
     663,   203,   266,   683,  -185,  -185,  -185,   123,  -185,  -185,
     824,   439,   324,   324,   174,   623,   193,   488,   253,   824,
     824,   692,   623,   324,   267,  -185,   358,   216,  -185,   219,
    -185,   824,   607,  -185,   378,   268,   439,  -185,  -185,   282,
     751,   240,   243,   324,   439,   824,   713,   102,   220,   220,
     439,   239,   623,     1,  -185,     7,   722,   248,   324,   284,
     290,    26,   297,   743,   287,  -185,   397,  -185,  -185,   316,
     329,   257,   824,   298,   419,   326,     0,   782,   235,   363,
     311,    77,  -185,  -185,  -185,   324,   304,  -185,    57,   134,
    -185,   332,  -185,   319,   439,   824,   439,   824,   280,  -185,
     219,   324,   324,   460,   235,  -185,   334,   439,   587,    -1,
     439,   100,   426,   337,  -185,   336,   352,  -185,  -185,   824,
     824,   281,   303,   306,  -185,   796,   752,   346,   439,   587,
     488,   623,   439,   623,  -185,   324,   100,   439,   439,   439,
     587,   350,  -185,   810,   772,   623,   587,   488,   587,    -7,
     623,    95,   587,  -185,   587,   354,   587,   623,   324,   623,
     272,  -185,   587,  -185,   587,   100,   561,  -185,   623,  -185,
     633,  -185
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    80,    78,    77,    79,     0,     2,     4,
       5,     7,     0,     0,     0,    82,    81,     1,     6,     0,
      64,     8,     0,     0,    65,     0,     0,     0,     0,    13,
      15,    16,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,    29,     0,   141,   142,     0,    10,    14,
       0,     0,    11,     0,    46,     0,     0,    30,    34,    38,
      41,   132,   135,   133,   134,     0,     0,     0,   140,   143,
     116,     0,     0,    29,     0,    12,     0,    32,    37,     0,
      33,     0,    36,     0,     0,   118,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    49,     0,    52,    54,
       0,     0,    58,    59,    60,     0,    51,     0,    63,    53,
       0,     0,    44,    31,    35,     0,     0,     0,    39,    46,
       0,    42,     0,   136,   127,   121,   122,   123,   119,   120,
     124,   128,   129,   130,   126,   125,   131,   138,   144,     0,
     114,   115,    17,    76,     0,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,    50,
      55,    56,    57,    62,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    43,   137,    84,    89,    85,
      83,     0,     0,     0,     0,     0,     0,     0,     0,    95,
      94,     0,     0,     0,     0,    19,     0,     0,    90,    87,
      88,    86,     0,    21,     0,     0,     0,    45,    25,     0,
       0,     0,    71,     0,     0,    72,     0,     0,     0,     0,
       0,   105,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,    26,    75,     0,
       0,     0,    68,     0,     0,     0,    73,     0,     0,     0,
       0,     0,   108,    93,    92,     0,     0,    20,     0,     0,
      27,     0,    22,     0,     0,    69,     0,    70,     0,    91,
      84,     0,     0,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,    28,    24,    66,
      67,     0,     0,    71,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,   101,     0,     0,     0,   113,     0,   110,     0,
       0,     0,   103,   100,     0,     0,   111,     0,     0,     0,
       0,    74,   104,   102,   112,     0,     0,    98,     0,    96,
       0,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,  -185,   370,  -185,   349,   345,  -185,  -185,
     313,   335,   338,   -74,   -80,   -86,     2,  -184,  -185,   -13,
    -185,  -185,  -101,   162,  -185,  -185,  -185,  -185,   142,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,   137,  -147,  -153,   -19,
     -72,    65,   106,   340,   -63
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    28,    29,    30,    31,
      56,    57,    58,    59,    60,   113,   114,   115,   116,    38,
     117,   118,   164,    32,   119,   120,   121,   122,   173,   123,
     124,   125,   299,   126,   127,   271,   272,   128,   129,    69,
      70,   160,   161,    47,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    22,    84,   141,   132,   165,   199,   138,   203,   317,
      33,   100,   198,   292,     1,     2,   318,    13,   142,   174,
     270,   170,   241,    14,   348,    80,    82,    15,    20,    61,
      62,    63,    64,   220,    72,   171,    24,    54,   218,     3,
       4,     5,     6,   101,   102,   190,   175,    85,    86,   193,
     143,   102,   204,    61,    62,    63,    64,   293,    81,    83,
     195,   131,   133,   194,   319,    55,   135,   134,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    66,    67,   158,   295,    65,   211,   303,   166,   167,
     136,   169,   100,    68,    16,    81,   270,    17,   172,   139,
      83,    45,   179,    37,   180,    66,    67,   181,   182,    53,
     241,   199,   183,    19,   184,   178,    45,    68,   137,   236,
      61,    62,    63,    64,   197,   102,   246,   140,    20,   170,
     231,   232,    23,    34,    20,    20,   253,   265,   266,    39,
     200,   247,    46,   171,    61,    62,    63,    64,   219,   207,
      20,   209,   210,   205,    40,   159,   269,    46,   216,   264,
     212,   261,    12,   102,    44,   351,    24,   221,   251,    35,
     224,    12,    66,    67,   222,    36,   276,    61,    62,    63,
      64,    48,   230,    50,    25,   235,    43,   278,   279,    44,
     233,    51,   178,   242,   243,   178,    66,    67,    73,    27,
     237,   101,   102,   305,   238,   239,    52,   256,   240,   234,
      24,    75,   316,   178,    76,   262,    54,    79,   157,   312,
     313,   267,     3,     4,     5,     6,   162,   163,    20,    66,
      67,   168,   187,   334,   185,   336,   186,   338,   178,   191,
     285,   287,   237,   136,   342,   200,   238,   239,   178,   346,
     240,   302,   139,   339,   350,   178,   196,    99,   352,   202,
     213,   354,   201,   356,   341,   309,   214,   310,   215,   217,
     227,   178,   360,   223,   235,   228,   355,   244,   315,   103,
     248,   320,   250,   105,   106,   251,   107,   108,   321,   323,
     109,   257,   255,    61,    62,    63,    64,   259,   111,   333,
     260,   112,   357,   337,   268,   275,   280,   335,   277,   285,
     287,   282,   289,   340,    61,    62,    63,    64,   178,    61,
      62,    63,    64,   288,   347,    65,   349,    61,    62,    63,
      64,   300,    61,    62,    63,    64,   178,   306,   178,   291,
     178,   307,   358,   308,   178,    66,    67,   311,   178,   314,
     327,   284,   178,   208,   178,   324,   178,   325,   178,   326,
     328,   332,   178,   329,   286,   343,    66,    67,   249,   353,
     103,    66,    67,   296,   105,   106,   301,   107,   108,    18,
     297,   109,    42,    49,    66,    67,   130,   273,   254,   111,
      77,    74,   112,    78,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   283,   304,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    61,    62,    63,    64,   290,     0,   298,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    61,    62,    63,    64,     0,   322,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    20,     0,    61,    62,    63,    64,    93,    94,    95,
      96,    97,    98,    99,    66,    67,   233,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       0,    25,    26,     0,    66,    67,    25,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,    27,     0,     0,     0,    66,    67,    24,     0,     0,
       0,     0,    24,    20,     0,     0,     0,     0,     0,     3,
       4,     5,     6,     0,     3,     4,     5,     6,     0,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   103,     0,     0,   104,   105,   106,     0,   107,
     108,     0,     0,   109,     0,     0,     0,     0,   103,     0,
     110,   111,   105,   106,   112,   107,   108,     0,   103,   109,
      24,   188,   105,   106,     0,   107,   108,   111,     0,   109,
     112,   359,     0,     0,   103,     0,   189,   111,   105,   106,
     112,   107,   108,     0,   103,   109,    24,   192,   105,   106,
       0,   107,   108,   111,   103,   109,   112,   252,   105,   106,
       0,   107,   108,   111,     0,   109,   112,     0,     0,     0,
     103,     0,    24,   111,   105,   106,   112,   107,   108,     0,
     103,   109,    24,     0,   105,   106,     0,   107,   108,   111,
       0,   109,   112,     0,     0,     0,     0,     0,    24,   111,
       0,   103,   112,   361,   176,   105,   106,     0,   107,   108,
     103,     0,   109,   225,   105,   106,     0,   107,   108,   177,
     111,   109,     0,   112,     0,     0,     0,     0,   226,   111,
     103,     0,   112,   229,   105,   106,     0,   107,   108,   103,
       0,   109,     0,   105,   106,     0,   107,   108,     0,   111,
     109,     0,   112,     0,     0,     0,     0,     0,   111,   245,
     103,   112,     0,   263,   105,   106,     0,   107,   108,   103,
       0,   109,     0,   105,   106,     0,   107,   108,     0,   111,
     109,     0,   112,     0,     0,     0,     0,     0,   111,   274,
     103,   112,     0,   281,   105,   106,     0,   107,   108,   103,
       0,   109,   331,   105,   106,     0,   107,   108,     0,   111,
     109,     0,   112,     0,     0,     0,     0,     0,   111,   103,
       0,   112,   345,   105,   106,     0,   107,   108,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,   112,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,   258,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   206,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   294,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     330,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   344,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      91,    92,    93,    94,    95,    96,    97,    98,    99
};

static const yytype_int16 yycheck[] =
{
      13,    14,    65,    83,    76,   106,   159,    81,    13,    10,
      23,    35,   159,    13,    22,    23,    17,     7,    35,     7,
      19,    14,   206,     7,    31,    35,    35,    50,    35,     3,
       4,     5,     6,   186,    47,    28,    35,     7,   185,    47,
      48,    49,    50,    67,    68,   131,    34,    66,    67,   135,
      67,    68,    57,     3,     4,     5,     6,    57,    68,    68,
     140,    74,    35,   137,    65,    35,    79,    35,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    55,    56,   102,   268,    35,   172,    10,   107,   108,
       7,   110,    35,    67,    50,    68,    19,     0,   111,     7,
      68,    36,   115,    10,   117,    55,    56,   120,   121,    10,
     294,   264,   125,    23,   127,   113,    51,    67,    35,   205,
       3,     4,     5,     6,     7,    68,   212,    35,    35,    14,
     202,   203,     7,     7,    35,    35,   222,   238,   239,     9,
     159,   213,    36,    28,     3,     4,     5,     6,     7,   168,
      35,   170,   171,   166,    24,    57,   242,    51,   177,    57,
     173,   233,     0,    68,    66,    70,    35,   186,    66,    23,
     189,     9,    55,    56,   187,     7,   248,     3,     4,     5,
       6,    23,   201,     7,     9,   204,    66,   250,   251,    66,
      16,     7,   190,   206,   207,   193,    55,    56,    66,    24,
       7,    67,    68,   275,    11,    12,    23,   226,    15,    35,
      35,    23,   298,   211,    13,   234,     7,    67,    67,   291,
     292,   240,    47,    48,    49,    50,    24,     7,    35,    55,
      56,    19,    67,   319,    57,   321,    57,   323,   236,    66,
     259,   260,     7,     7,   330,   264,    11,    12,   246,   335,
      15,   270,     7,   325,   340,   253,    67,    63,   344,    13,
      13,   347,    66,   349,   327,   284,     7,   286,    24,     7,
      67,   269,   358,    24,   293,     9,   348,    24,   297,     7,
      13,   300,    66,    11,    12,    66,    14,    15,   301,   302,
      18,     9,    24,     3,     4,     5,     6,    57,    26,   318,
      57,    29,    30,   322,    65,    57,     9,   320,    24,   328,
     329,    24,    14,   326,     3,     4,     5,     6,   316,     3,
       4,     5,     6,    66,   337,    35,   339,     3,     4,     5,
       6,    20,     3,     4,     5,     6,   334,    33,   336,    13,
     338,     9,   355,    24,   342,    55,    56,    67,   346,    15,
      69,    35,   350,    10,   352,    18,   354,    21,   356,     7,
      57,    15,   360,    57,    35,    15,    55,    56,    10,    15,
       7,    55,    56,    10,    11,    12,    65,    14,    15,     9,
      17,    18,    33,    38,    55,    56,    73,   245,    10,    26,
      55,    51,    29,    55,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    10,   271,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     3,     4,     5,     6,     7,    -1,    65,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     3,     4,     5,     6,    -1,    21,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    35,    -1,     3,     4,     5,     6,    57,    58,    59,
      60,    61,    62,    63,    55,    56,    16,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,     9,    10,    -1,    55,    56,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    55,    56,    35,    -1,    -1,
      -1,    -1,    35,    35,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    -1,    47,    48,    49,    50,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,     7,    -1,
      25,    26,    11,    12,    29,    14,    15,    -1,     7,    18,
      35,    10,    11,    12,    -1,    14,    15,    26,    -1,    18,
      29,    30,    -1,    -1,     7,    -1,    25,    26,    11,    12,
      29,    14,    15,    -1,     7,    18,    35,    10,    11,    12,
      -1,    14,    15,    26,     7,    18,    29,    10,    11,    12,
      -1,    14,    15,    26,    -1,    18,    29,    -1,    -1,    -1,
       7,    -1,    35,    26,    11,    12,    29,    14,    15,    -1,
       7,    18,    35,    -1,    11,    12,    -1,    14,    15,    26,
      -1,    18,    29,    -1,    -1,    -1,    -1,    -1,    35,    26,
      -1,     7,    29,    30,    10,    11,    12,    -1,    14,    15,
       7,    -1,    18,    10,    11,    12,    -1,    14,    15,    25,
      26,    18,    -1,    29,    -1,    -1,    -1,    -1,    25,    26,
       7,    -1,    29,    10,    11,    12,    -1,    14,    15,     7,
      -1,    18,    -1,    11,    12,    -1,    14,    15,    -1,    26,
      18,    -1,    29,    -1,    -1,    -1,    -1,    -1,    26,    27,
       7,    29,    -1,    10,    11,    12,    -1,    14,    15,     7,
      -1,    18,    -1,    11,    12,    -1,    14,    15,    -1,    26,
      18,    -1,    29,    -1,    -1,    -1,    -1,    -1,    26,    27,
       7,    29,    -1,    10,    11,    12,    -1,    14,    15,     7,
      -1,    18,    10,    11,    12,    -1,    14,    15,    -1,    26,
      18,    -1,    29,    -1,    -1,    -1,    -1,    -1,    26,     7,
      -1,    29,    10,    11,    12,    -1,    14,    15,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    67,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    23,    47,    48,    49,    50,    72,    73,    74,
      75,    76,    94,     7,     7,    50,    50,     0,    75,    23,
      35,    90,    90,     7,    35,     9,    10,    24,    77,    78,
      79,    80,    94,    90,     7,    23,     7,    10,    90,     9,
      24,    10,    77,    66,    66,   112,   113,   114,    23,    78,
       7,     7,    23,    10,     7,    35,    81,    82,    83,    84,
      85,     3,     4,     5,     6,    35,    55,    56,    67,   110,
     111,   115,    90,    66,   114,    23,    13,    82,    83,    67,
      35,    68,    35,    68,   115,   110,   110,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      35,    67,    68,     7,    10,    11,    12,    14,    15,    18,
      25,    26,    29,    86,    87,    88,    89,    91,    92,    95,
      96,    97,    98,   100,   101,   102,   104,   105,   108,   109,
      81,    90,   111,    35,    35,    90,     7,    35,    84,     7,
      35,    85,    35,    67,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,    67,   110,    57,
     112,   113,    24,     7,    93,    93,   110,   110,    19,   110,
      14,    28,    90,    99,     7,    34,    10,    25,    87,    90,
      90,    90,    90,    90,    90,    57,    57,    67,    10,    25,
      86,    66,    10,    86,    84,    85,    67,     7,   108,   109,
     110,    66,    13,    13,    57,    90,    64,   110,    10,   110,
     110,    86,    90,    13,     7,    24,   110,     7,   108,     7,
     109,   110,    90,    24,   110,    10,    25,    67,     9,    10,
     110,   111,   111,    16,    35,   110,    86,     7,    11,    12,
      15,    88,    90,    90,    24,    27,    86,   111,    13,    10,
      66,    66,    10,    86,    10,    24,   110,     9,    67,    57,
      57,   111,   110,    10,    57,    93,    93,   110,    65,    86,
      19,   106,   107,    99,    27,    57,   111,    24,   115,   115,
       9,    10,    24,    10,    35,   110,    35,   110,    66,    14,
       7,    13,    13,    57,    64,    88,    10,    17,    65,   103,
      20,    65,   110,    10,   107,   111,    33,     9,    24,   110,
     110,    67,   111,   111,    15,   110,    86,    10,    17,    65,
     110,    90,    21,    90,    18,    21,     7,    69,    57,    57,
      64,    10,    15,   110,    86,    90,    86,   110,    86,   111,
      90,   115,    86,    15,    64,    10,    86,    90,    31,    90,
      86,    70,    86,    15,    86,   111,    86,    30,    90,    30,
      86,    30
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    83,    83,    83,    84,    84,    85,    86,    86,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    98,    98,    99,    99,   100,   100,   101,   102,
     102,   102,   102,   103,   103,   104,   104,   105,   106,   106,
     107,   107,   107,   107,   108,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   112,   112,   112,   113,
     113,   114,   114,   115,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     3,     5,
       6,     6,     7,     1,     3,     1,     1,     6,     8,     7,
       9,     7,     9,     8,    10,     8,     9,     9,    10,     0,
       1,     3,     2,     2,     1,     3,     2,     2,     1,     3,
       4,     1,     3,     4,     3,     5,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     2,     2,     1,     1,     2,     7,     7,     5,     6,
       6,     4,     4,     2,    10,     4,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     6,     5,     5,     2,     2,    11,    13,    10,     7,
       9,     8,    10,     4,     5,     4,     6,     7,     1,     2,
       4,     5,     6,     4,     2,     2,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     4,     5,     4,     3,
       2,     1,     1,     1,     3
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

#line 1915 "parser.tab.c"

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

#line 420 "Q:/Uni/tfiaimt/VBCompiler/parser/parser.y"


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
