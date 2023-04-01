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
    IDENTIFIER_VALUE = 262,        /* IDENTIFIER_VALUE  */
    DATETIME_VALUE = 263,          /* DATETIME_VALUE  */
    INT = 264,                     /* INT  */
    DOUBLE = 265,                  /* DOUBLE  */
    STRING = 266,                  /* STRING  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    IDENTIFIER = 268,              /* IDENTIFIER  */
    ENDL = 269,                    /* ENDL  */
    SUB = 270,                     /* SUB  */
    END = 271,                     /* END  */
    CONST = 272,                   /* CONST  */
    DIM = 273,                     /* DIM  */
    AS = 274,                      /* AS  */
    WHILE = 275,                   /* WHILE  */
    IF = 276,                      /* IF  */
    NEW = 277,                     /* NEW  */
    ELSEIF = 278,                  /* ELSEIF  */
    SELECT = 279,                  /* SELECT  */
    CASE = 280,                    /* CASE  */
    IS = 281,                      /* IS  */
    TO = 282,                      /* TO  */
    IMPORTS = 283,                 /* IMPORTS  */
    MODULE = 284,                  /* MODULE  */
    FUNCTION = 285,                /* FUNCTION  */
    RETURN = 286,                  /* RETURN  */
    DO = 287,                      /* DO  */
    LOOP = 288,                    /* LOOP  */
    UNTIL = 289,                   /* UNTIL  */
    FOR = 290,                     /* FOR  */
    NEXT = 291,                    /* NEXT  */
    STEP = 292,                    /* STEP  */
    OF = 293,                      /* OF  */
    IN = 294,                      /* IN  */
    EACH = 295,                    /* EACH  */
    END_OF_LINE = 296,             /* END_OF_LINE  */
    ASSIGN_CONSTRUCT = 297,        /* ASSIGN_CONSTRUCT  */
    ASSIGN_MULT = 298,             /* ASSIGN_MULT  */
    ASSIGN_ORD_DIV = 299,          /* ASSIGN_ORD_DIV  */
    ASSIGN_INT_DIV = 300,          /* ASSIGN_INT_DIV  */
    ASSIGN_ADD = 301,              /* ASSIGN_ADD  */
    ASSIGN_SUB = 302,              /* ASSIGN_SUB  */
    ASSIGN_LSHIFT = 303,           /* ASSIGN_LSHIFT  */
    ASSIGN_RSHIFT = 304,           /* ASSIGN_RSHIFT  */
    ASSIGN_CONCAT = 305,           /* ASSIGN_CONCAT  */
    PRIVATE = 306,                 /* PRIVATE  */
    PROTECTED = 307,               /* PROTECTED  */
    PUBLIC = 308,                  /* PUBLIC  */
    FRIEND = 309,                  /* FRIEND  */
    INT_DIV = 310,                 /* INT_DIV  */
    UNARY_MINUS = 311,             /* UNARY_MINUS  */
    UNARY_PLUS = 312,              /* UNARY_PLUS  */
    NOT_EQUAL = 313,               /* NOT_EQUAL  */
    LESS_OR_EQUAL = 314,           /* LESS_OR_EQUAL  */
    MORE_OR_EQUAL = 315,           /* MORE_OR_EQUAL  */
    THEN = 316,                    /* THEN  */
    ELSE = 317                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 67 "parser.y"

	int bool_val;
	int int_val;
	//bin and hex
	double double_val;
	char* datetime_val;//time_t
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

#line 173 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
