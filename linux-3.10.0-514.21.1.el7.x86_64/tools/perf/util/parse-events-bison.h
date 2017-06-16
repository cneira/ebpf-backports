/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_PARSE_EVENTS_UTIL_PARSE_EVENTS_BISON_H_INCLUDED
# define YY_PARSE_EVENTS_UTIL_PARSE_EVENTS_BISON_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int parse_events_debug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PE_START_EVENTS = 258,
     PE_START_TERMS = 259,
     PE_VALUE = 260,
     PE_VALUE_SYM_HW = 261,
     PE_VALUE_SYM_SW = 262,
     PE_RAW = 263,
     PE_TERM = 264,
     PE_EVENT_NAME = 265,
     PE_NAME = 266,
     PE_MODIFIER_EVENT = 267,
     PE_MODIFIER_BP = 268,
     PE_NAME_CACHE_TYPE = 269,
     PE_NAME_CACHE_OP_RESULT = 270,
     PE_PREFIX_MEM = 271,
     PE_PREFIX_RAW = 272,
     PE_PREFIX_GROUP = 273,
     PE_ERROR = 274,
     PE_PMU_EVENT_PRE = 275,
     PE_PMU_EVENT_SUF = 276,
     PE_KERNEL_PMU_EVENT = 277
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 84 "util/parse-events.y"

	char *str;
	u64 num;
	struct list_head *head;
	struct parse_events_term *term;
	struct tracepoint_name {
		char *sys;
		char *event;
	} tracepoint_name;


/* Line 2058 of yacc.c  */
#line 91 "util/parse-events-bison.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int parse_events_parse (void *YYPARSE_PARAM);
#else
int parse_events_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int parse_events_parse (void *_data, void *scanner);
#else
int parse_events_parse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_PARSE_EVENTS_UTIL_PARSE_EVENTS_BISON_H_INCLUDED  */
