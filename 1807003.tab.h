
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     HEADER = 260,
     MAIN = 261,
     DEFINE = 262,
     CHAR = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     LONG = 267,
     IF = 268,
     ELSE = 269,
     ELSE_IF = 270,
     GOE = 271,
     LOE = 272,
     TWO_EQ = 273,
     NOT_EQ = 274,
     GT = 275,
     LT = 276,
     EQ = 277,
     LB = 278,
     RB = 279,
     LP = 280,
     RP = 281,
     END = 282,
     COL = 283,
     DASH = 284,
     COMA = 285,
     QT = 286,
     NOT = 287,
     OR = 288,
     AND = 289,
     PLUS = 290,
     MINUS = 291,
     MULT = 292,
     DIV = 293,
     MOD = 294,
     POW = 295,
     FACT = 296,
     INC = 297,
     DEC = 298,
     LOGICAL_OR = 299,
     LOGICAL_AND = 300,
     XOR = 301,
     VOID = 302,
     RETURN = 303,
     CASE = 304,
     BREAK = 305,
     CONTINUE = 306,
     SWITCH = 307,
     SCANF = 308,
     PRINTF = 309,
     DEFAULT = 310,
     IFX = 311,
     ELIFX = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 18 "1807003.y"

        int number;
        char *string;



/* Line 1676 of yacc.c  */
#line 116 "1807003.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


