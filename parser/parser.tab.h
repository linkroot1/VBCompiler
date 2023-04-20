/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */
#include "../tree/tree_nodes.h"

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    DATETIME_VALUE = 262,          /* DATETIME_VALUE  */
    INT = 263,                     /* INT  */
    DOUBLE = 264,                  /* DOUBLE  */
    STRING = 265,                  /* STRING  */
    BOOLEAN = 266,                 /* BOOLEAN  */
    IDENTIFIER = 267,              /* IDENTIFIER  */
    SUB = 268,                     /* SUB  */
    END = 269,                     /* END  */
    CONST = 270,                   /* CONST  */
    DIM = 271,                     /* DIM  */
    AS = 272,                      /* AS  */
    WHILE = 273,                   /* WHILE  */
    IF = 274,                      /* IF  */
    NEW = 275,                     /* NEW  */
    ELSEIF = 276,                  /* ELSEIF  */
    SELECT = 277,                  /* SELECT  */
    CASE = 278,                    /* CASE  */
    IS = 279,                      /* IS  */
    TO = 280,                      /* TO  */
    IMPORTS = 281,                 /* IMPORTS  */
    MODULE = 282,                  /* MODULE  */
    FUNCTION = 283,                /* FUNCTION  */
    RETURN = 284,                  /* RETURN  */
    DO = 285,                      /* DO  */
    LOOP = 286,                    /* LOOP  */
    UNTIL = 287,                   /* UNTIL  */
    FOR = 288,                     /* FOR  */
    NEXT = 289,                    /* NEXT  */
    STEP = 290,                    /* STEP  */
    OF = 291,                      /* OF  */
    IN = 292,                      /* IN  */
    EACH = 293,                    /* EACH  */
    END_OF_LINE = 294,             /* END_OF_LINE  */
    ASSIGN_CONSTRUCT = 295,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 296,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 297,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 298,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 299,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 300,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 301,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 302,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 303,           /* ASSIGN_CONCAT  */
    PRIVATE = 304,                 /* PRIVATE  */
    PROTECTED = 305,               /* PROTECTED  */
    PUBLIC = 306,                  /* PUBLIC  */
    FRIEND = 307,                  /* FRIEND  */
    BYVAL = 308,                   /* BYVAL  */
    XOR = 309,                     /* XOR  */
    OR = 310,                      /* OR  */
    AND = 311,                     /* AND  */
    NOT = 312,                     /* NOT  */
    NOT_EQUAL = 313,               /* NOT_EQUAL  */
    LESS_OR_EQUAL = 314,           /* LESS_OR_EQUAL  */
    MORE_OR_EQUAL = 315,           /* MORE_OR_EQUAL  */
    SHIFT_LEFT = 316,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 317,             /* SHIFT_RIGHT  */
    MOD = 318,                     /* MOD  */
    INT_DIV = 319,                 /* INT_DIV  */
    UNARY_MINUS = 320,             /* UNARY_MINUS  */
    UNARY_PLUS = 321,              /* UNARY_PLUS  */
    THEN = 322,                    /* THEN  */
    ELSE = 323                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 71 "parser.y"

	int bool_val;
	int int_val;
	double double_val;
	char* datetime_val;
	char* str_val;
	char* id_var_name;
	VarType vt;

	Expression *expression;
	ExpressionList *expressionList;
	ProgramItemList *programItemList;
	ProgramItemListNotEmpty *programListNotEmpty;
	ProgramItem *programItem;
	Module *module;
	FunctionOrSubList *functionOrSubList;
	FunctionOrSub *functionOrSub;
	Function *function;
	SubBloc *subBloc;
	ParameterListOrEmpty *parameterListOrEmpty;
	ParameterListWithType *parameterListWithType;
	ParameterListWithoutType *parameterListWithoutType;
	ParameterWithType *parameterWithType;
	ParameterWithoutType *parameterWithoutType;
	StmtList *stmtList;
	Statement *statement;
	StatementSingle *statementSingle;
	StatementMulti *statementMulti;
	WhileStmt *whileStmt;
	DoLoopStmt *doLoopStmt;
	DoLoopCondition *doLoopCondition;
	ForLoopStmt *forLoopStmt;
	ForEachLoopStmt *forEachLoopStmt;
	IfStmtMulti *ifStmtMulti;
	ElseIfList *elseIfList;
	ElseIf *elseIf;
	IfStmtSingle *ifStmtSingle;
	SelectStmt *selectStmt;
	CaseList *caseList;
	CaseStmt *caseStmt;
	DeclStmtSingle *declStmtSingle;
	DeclStmtMulti *declStmtMulti;
	VarNameSingle *varNameSingle;
	VarNameMulti *varNameMulti;
	ReturnStmt *returnStmt;

#line 179 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
