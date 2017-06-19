
/*  A Bison parser, made from lps.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	ID	258
#define	NUM	259
#define	ADDOP	260
#define	MULOP	261
#define	RELOP	262
#define	LOGOP	263
#define	START	264
#define	DO	265
#define	ELSE	266
#define	IF	267
#define	ENDI	268
#define	INT	269
#define	PUT	270
#define	PROG	271
#define	GET	272
#define	REAL	273
#define	THEN	274
#define	VAR	275
#define	LOOP	276
#define	ENDL	277
#define	UNTIL	278
#define	ENDP	279
#define	DOT	280
#define	SEMICOL	281
#define	COL	282
#define	COMMA	283
#define	LPAR	284
#define	RPAR	285
#define	ASSIGNOP	286

#line 1 "lps.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef enum { TRUE =1 ,FALSE=0} bool;
typedef enum { INTEGER , FLOAT ,ERROR} Type;
typedef struct number {
  int ival;
  float fval;
  Type type;
} number;



extern FILE *yyout,*yyin;
extern int lineCounter;
extern char* yytext;
void insertToSymbolTable(const char * id,number num);
void updateSymbol(const char * id, number rhs);
number GetValueFromSymbol(const char* id);
number operatorMUL(number lhs, char opr,number rhs);
number operatorADD(number lhs, char opr,number rhs);
bool evaluate_bool(number lhs,char opr, number rhs);
void printExpression(number num);
int yylex();
void yyerror(char* s){
        fprintf(stderr, "%s ,at line %d\n", s, lineCounter);
}


#line 33 "lps.y"
typedef union {
 number num;
 char id[16];
 char opr;
 bool boolean;
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		92
#define	YYFLAG		-32768
#define	YYNTBASE	32

#define YYTRANSLATE(x) ((unsigned)(x) <= 286 ? yytranslate[x] : 43)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     9,    18,    26,    32,    36,    39,    41,    45,    49,
    51,    57,    62,    66,    69,    73,    76,    78,    80,    82,
    86,    90,    91,    95,    98,   101,   104,   107,   115,   123,
   129,   135,   139,   145,   151,   155,   161,   167,   171,   173,
   177,   179,   181,   185,   188,   190,   194,   197,   199,   201,
   203,   207,   211
};

static const short yyrhs[] = {    16,
     3,    26,    33,     9,    36,    24,    25,     0,    16,     3,
    26,    33,     9,    36,    24,     1,     0,    16,     3,    26,
    33,     9,    36,     1,     0,    16,     3,    26,    33,     1,
     0,    16,     3,     1,     0,    16,     1,     0,     1,     0,
    20,    34,    26,     0,    20,    34,     1,     0,     1,     0,
    34,    28,     3,    27,    35,     0,    34,    28,     3,     1,
     0,    34,    28,     1,     0,    34,     1,     0,     3,    27,
    35,     0,     3,     1,     0,     1,     0,    14,     0,    18,
     0,    36,    37,    26,     0,    36,    37,     1,     0,     0,
     3,    31,    40,     0,     3,     1,     0,    15,    40,     0,
    17,     3,     0,    17,     1,     0,    12,    38,    19,    36,
    11,    36,    13,     0,    12,    38,    19,    36,    11,    36,
     1,     0,    12,    38,    19,    36,    13,     0,    12,    38,
    19,    36,     1,     0,    12,    38,     1,     0,    21,    38,
    10,    36,    22,     0,    21,    38,    10,    36,     1,     0,
    21,    38,     1,     0,    10,    36,    23,    38,    22,     0,
    10,    36,    23,    38,     1,     0,    10,    36,     1,     0,
     1,     0,    40,    39,    40,     0,     7,     0,     8,     0,
    40,     5,    41,     0,    40,     1,     0,    41,     0,    41,
     6,    42,     0,    41,     1,     0,    42,     0,     3,     0,
     4,     0,    29,    40,    30,     0,    29,    40,     1,     0,
     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    57,    58,    59,    60,    61,    62,    63,    65,    66,    67,
    69,    70,    71,    72,    73,    74,    75,    77,    78,    80,
    81,    82,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    97,    98,    99,   100,   102,
   104,   105,   108,   109,   110,   112,   113,   114,   116,   117,
   118,   119,   120
};

static const char * const yytname[] = {   "$","error","$undefined.","ID","NUM",
"ADDOP","MULOP","RELOP","LOGOP","START","DO","ELSE","IF","ENDI","INT","PUT",
"PROG","GET","REAL","THEN","VAR","LOOP","ENDL","UNTIL","ENDP","DOT","SEMICOL",
"COL","COMMA","LPAR","RPAR","ASSIGNOP","Program","Declarations","DeclList","Type",
"StmtList","Statement","BoolExp","Case","Expression","Term","Factor",""
};
#endif

static const short yyr1[] = {     0,
    32,    32,    32,    32,    32,    32,    32,    33,    33,    33,
    34,    34,    34,    34,    34,    34,    34,    35,    35,    36,
    36,    36,    37,    37,    37,    37,    37,    37,    37,    37,
    37,    37,    37,    37,    37,    37,    37,    37,    37,    38,
    39,    39,    40,    40,    40,    41,    41,    41,    42,    42,
    42,    42,    42
};

static const short yyr2[] = {     0,
     8,     8,     7,     5,     3,     2,     1,     3,     3,     1,
     5,     4,     3,     2,     3,     2,     1,     1,     1,     3,
     3,     0,     3,     2,     2,     2,     2,     7,     7,     5,
     5,     3,     5,     5,     3,     5,     5,     3,     1,     3,
     1,     1,     3,     2,     1,     3,     2,     1,     1,     1,
     3,     3,     1
};

static const short yydefact[] = {     0,
     7,     0,     6,     0,     5,     0,    10,     0,     0,    17,
     0,     0,     4,    22,    16,     0,     9,     8,     0,     0,
    18,    19,    15,    13,     0,    39,     0,    22,     0,     0,
     0,     0,     0,     0,    12,     0,    24,     0,     0,    53,
    49,    50,     0,     0,     0,     0,    48,     0,    27,    26,
     0,     2,     1,    21,    20,    11,     0,    38,     0,     0,
    32,    22,    44,     0,    41,    42,     0,    47,     0,    35,
    22,     0,    52,    51,     0,     0,     0,    46,     0,    37,
    36,    31,    22,    30,    34,    33,     0,    29,    28,     0,
     0,     0
};

static const short yydefgoto[] = {    90,
     9,    12,    23,    20,    34,    44,    67,    45,    46,    47
};

static const short yypact[] = {     4,
-32768,    98,-32768,    38,-32768,     2,-32768,   138,    69,-32768,
    15,    24,-32768,-32768,-32768,    65,   117,-32768,   147,    70,
-32768,-32768,-32768,-32768,    35,     7,     1,-32768,    25,    25,
   151,    25,    50,    40,-32768,    65,-32768,    25,    85,-32768,
-32768,-32768,    25,    71,   118,     5,-32768,    55,-32768,-32768,
    66,-32768,-32768,-32768,-32768,-32768,    58,-32768,    25,     3,
-32768,-32768,-32768,    25,-32768,-32768,    25,-32768,    25,-32768,
-32768,    52,    18,-32768,   121,    39,   108,-32768,    95,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   134,-32768,-32768,    17,
    21,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,   -18,   -28,-32768,    -2,-32768,   -29,   -27,    -1
};


#define	YYLAST		155


static const short yytable[] = {    39,
    48,    37,     7,    73,     1,    68,    -3,    64,    57,   -45,
    69,   -45,   -45,    60,   -45,    15,    91,    56,   -44,     2,
    92,     8,   -44,   -45,    17,    40,   -45,    41,    42,    51,
   -45,    38,    74,    75,   -45,    35,    76,    77,     5,    68,
    54,    16,    79,   -43,    69,   -43,   -43,   -44,   -43,    18,
    52,    19,    80,    43,    87,    63,    72,   -43,    63,    64,
   -43,    36,    64,     6,   -43,    55,    70,    78,   -43,    13,
    26,    61,    27,    81,    53,    71,     0,    14,    21,    28,
   -25,    29,    22,   -23,    30,    58,    31,    27,     0,    62,
    32,     0,     0,    33,    28,    85,    29,    27,     3,    30,
     4,    31,     0,     0,    28,    32,    29,    59,    63,    30,
     0,    31,    64,     0,     0,    32,    86,   -40,    63,     0,
     0,    82,    64,    27,    65,    66,   -40,     0,     0,   -40,
    28,    83,    29,    84,    88,    30,    27,    31,    10,     0,
    11,    32,   -14,    28,   -14,    29,    89,    24,    30,    25,
    31,    49,     0,    50,    32
};

static const short yycheck[] = {    28,
    30,     1,     1,     1,     1,     1,     0,     5,    38,     5,
     6,     7,     8,    43,    10,     1,     0,    36,     1,    16,
     0,    20,     5,    19,     1,     1,    22,     3,     4,    32,
    26,    31,    30,    62,    30,     1,    64,    67,     1,     1,
     1,    27,    71,     5,     6,     7,     8,    30,    10,    26,
     1,    28,     1,    29,    83,     1,    59,    19,     1,     5,
    22,    27,     5,    26,    26,    26,     1,    69,    30,     1,
     1,     1,     3,    22,    25,    10,    -1,     9,    14,    10,
    26,    12,    18,    26,    15,     1,    17,     3,    -1,    19,
    21,    -1,    -1,    24,    10,     1,    12,     3,     1,    15,
     3,    17,    -1,    -1,    10,    21,    12,    23,     1,    15,
    -1,    17,     5,    -1,    -1,    21,    22,    10,     1,    -1,
    -1,     1,     5,     3,     7,     8,    19,    -1,    -1,    22,
    10,    11,    12,    13,     1,    15,     3,    17,     1,    -1,
     3,    21,    26,    10,    28,    12,    13,     1,    15,     3,
    17,     1,    -1,     3,    21
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 57 "lps.y"
{ number progname; insertToSymbolTable(yyvsp[-6].id,progname); ;
    break;}
case 2:
#line 58 "lps.y"
{ yyerror("Missing '.' at end of program.");;
    break;}
case 3:
#line 59 "lps.y"
{ yyerror("Missing 'endp' at end of program.");;
    break;}
case 4:
#line 60 "lps.y"
{ yyerror("undefined reference to 'start'.");;
    break;}
case 5:
#line 61 "lps.y"
{yyerror("missing semi colon after program name.");;
    break;}
case 6:
#line 62 "lps.y"
{yyerror("illegal program name.");;
    break;}
case 7:
#line 63 "lps.y"
{yyerror("program must start with token 'prog'.");;
    break;}
case 9:
#line 66 "lps.y"
{ yyerror("Expected semicolon after declaration.");;
    break;}
case 10:
#line 67 "lps.y"
{ yyerror("token 'var' was expected.");;
    break;}
case 11:
#line 69 "lps.y"
{ insertToSymbolTable(yyvsp[-2].id,yyvsp[0].num);;
    break;}
case 12:
#line 70 "lps.y"
{ yyerror("Expected colon after identifier.");;
    break;}
case 13:
#line 71 "lps.y"
{ yyerror("expected identifier after ','");;
    break;}
case 14:
#line 72 "lps.y"
{ yyerror("expected ',' after declaration list");;
    break;}
case 15:
#line 73 "lps.y"
{ insertToSymbolTable(yyvsp[-2].id,yyvsp[0].num);;
    break;}
case 16:
#line 74 "lps.y"
{ yyerror("expected colon after identifier");;
    break;}
case 17:
#line 75 "lps.y"
{ yyerror("Expected identifier after 'var'");;
    break;}
case 18:
#line 77 "lps.y"
{ yyval.num.type = INTEGER;;
    break;}
case 19:
#line 78 "lps.y"
{ yyval.num.type = FLOAT;;
    break;}
case 20:
#line 80 "lps.y"
{;
    break;}
case 21:
#line 81 "lps.y"
{ yyerror("Expected semicolon after statement.");;
    break;}
case 22:
#line 82 "lps.y"
{;
    break;}
case 23:
#line 84 "lps.y"
{ updateSymbol(yyvsp[-2].id,yyvsp[0].num); ;
    break;}
case 24:
#line 85 "lps.y"
{yyerror("Expected symbol '<=' after identifier.");;
    break;}
case 25:
#line 86 "lps.y"
{ printExpression(yyvsp[0].num);;
    break;}
case 26:
#line 87 "lps.y"
{ number one ={1,1,GetValueFromSymbol(yyvsp[0].id).type}; updateSymbol(yyvsp[0].id,one);;
    break;}
case 27:
#line 88 "lps.y"
{yyerror("expected identifier after 'get'.");;
    break;}
case 28:
#line 89 "lps.y"
{;
    break;}
case 29:
#line 90 "lps.y"
{yyerror("expected 'endi' at end of statement");;
    break;}
case 30:
#line 91 "lps.y"
{ ;
    break;}
case 31:
#line 92 "lps.y"
{ yyerror("Expected 'endi' or 'else' at end of statement");;
    break;}
case 32:
#line 93 "lps.y"
{ yyerror("Missing 'then' after 'if' ");;
    break;}
case 33:
#line 94 "lps.y"
{ ;
    break;}
case 34:
#line 95 "lps.y"
{ yyerror("Expected 'endl' at end of statement"); ;
    break;}
case 35:
#line 96 "lps.y"
{ yyerror("Expected 'do' after 'loop'");;
    break;}
case 36:
#line 97 "lps.y"
{ ;
    break;}
case 37:
#line 98 "lps.y"
{ yyerror("Expected 'endl' at end of statement");;
    break;}
case 38:
#line 99 "lps.y"
{yyerror("Expected 'until' after 'do'");;
    break;}
case 39:
#line 100 "lps.y"
{yyerror("undefined beginning of a statement");;
    break;}
case 40:
#line 102 "lps.y"
{ yyval.boolean = evaluate_bool(yyvsp[-2].num,yyvsp[-1].opr,yyvsp[0].num); fprintf(stdout,"evaluated %s\n",yyval.boolean==TRUE?"true":"false");;
    break;}
case 41:
#line 104 "lps.y"
{yyval.opr=yyvsp[0].opr;;
    break;}
case 42:
#line 105 "lps.y"
{yyval.opr=yyvsp[0].opr;;
    break;}
case 43:
#line 108 "lps.y"
{ yyval.num=operatorADD(yyvsp[-2].num,yyvsp[-1].opr,yyvsp[0].num);;
    break;}
case 44:
#line 109 "lps.y"
{yyerror("Expected '+' or '-' after expression.");;
    break;}
case 45:
#line 110 "lps.y"
{ yyval.num=yyvsp[0].num;;
    break;}
case 46:
#line 112 "lps.y"
{yyval.num = operatorMUL(yyvsp[-2].num,yyvsp[-1].opr,yyvsp[0].num); ;
    break;}
case 47:
#line 113 "lps.y"
{yyerror("Expected '*','/' or 'mod' after term.");;
    break;}
case 48:
#line 114 "lps.y"
{ yyval.num = yyvsp[0].num;;
    break;}
case 49:
#line 116 "lps.y"
{ yyval.num = GetValueFromSymbol(yyvsp[0].id);;
    break;}
case 50:
#line 117 "lps.y"
{yyval.num = yyvsp[0].num;;
    break;}
case 51:
#line 118 "lps.y"
{ yyval.num = yyvsp[-1].num;;
    break;}
case 52:
#line 119 "lps.y"
{yyerror("missing closing parenthesis.");;
    break;}
case 53:
#line 120 "lps.y"
{yyerror("Expected an identifier or a number.");;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}

#line 123 "lps.y"
