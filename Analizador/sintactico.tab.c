/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ALPHNAME = 258,
     SYMB = 259,
     CLASS = 260,
     LIT = 261,
     ISS = 262,
     ALPH = 263,
     STAND1 = 264,
     STAND2 = 265,
     NAT = 266,
     EB = 267,
     CURR = 268,
     SIG = 269,
     NL = 270
   };
#endif
#define ALPHNAME 258
#define SYMB 259
#define CLASS 260
#define LIT 261
#define ISS 262
#define ALPH 263
#define STAND1 264
#define STAND2 265
#define NAT 266
#define EB 267
#define CURR 268
#define SIG 269
#define NL 270




/* Copy the first part of user declarations.  */
#line 1 "sintactico.y"

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
int Dibujar=0, Recursion=0,MaxRecursion;

char *Lexema[100], *Token[100];

int SubIndice=0, SubIndiceMax, NumLineas=1, EstadoScanner=0, NumDer, SubTipo, op1=0, op2=0, varias=0, aument1 = 0, aument2 = 0;

extern char* yytext;
extern FILE *yyin;

int yyerror(char *s);
int yylex();

int Derivaciones();
int DibujarTablaDeTokens();
int ArbolDeDerivacion();



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 139 "sintactico.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   38

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  16
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  16
/* YYNRULES -- Number of rules. */
#define YYNRULES  33
/* YYNRULES -- Number of states. */
#define YYNSTATES  46

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   270

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    16,    19,    21,
      26,    28,    30,    31,    33,    35,    37,    39,    43,    47,
      51,    53,    55,    57,    60,    62,    64,    67,    69,    74,
      78,    82,    84,    85
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      17,     0,    -1,    18,    15,    -1,    23,    15,    -1,    28,
      15,    -1,    22,    -1,    29,    -1,     1,    15,    -1,    15,
      -1,     8,    19,    20,    21,    -1,     3,    -1,     7,    -1,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    19,
      20,    21,    -1,     8,    19,    20,    -1,     8,    20,    21,
      -1,    24,    -1,    26,    -1,    25,    -1,    24,    25,    -1,
       4,    -1,    27,    -1,    26,    27,    -1,     5,    -1,    13,
      30,    20,    31,    -1,    30,    20,    31,    -1,    13,    30,
      20,    -1,    14,    -1,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    30,    30,    31,    32,    33,    34,    35,    36,    39,
      42,    45,    46,    49,    50,    51,    52,    55,    56,    57,
      62,    63,    66,    67,    70,    73,    74,    77,    80,    83,
      84,    87,    88,    91
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALPHNAME", "SYMB", "CLASS", "LIT", "ISS", 
  "ALPH", "STAND1", "STAND2", "NAT", "EB", "CURR", "SIG", "NL", "$accept", 
  "axioma", "alphabet_clause", "alphabet_name", "op1", "seg", 
  "alphabet_clause_error", "special_names_paragraph_clauses", "aux1", 
  "symbolic_characters_clause", "aux2", "class_clause", 
  "currency_sign_clause", "currency_sign_clause_error", "op2", "literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    16,    17,    17,    17,    17,    17,    17,    17,    18,
      19,    20,    20,    21,    21,    21,    21,    22,    22,    22,
      23,    23,    24,    24,    25,    26,    26,    27,    28,    29,
      29,    30,    30,    31
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     2,     1,     4,
       1,     1,     0,     1,     1,     1,     1,     3,     3,     3,
       1,     1,     1,     2,     1,     1,     2,     1,     4,     3,
       3,     1,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,    10,    24,    27,    12,    32,    31,     8,     0,
       0,    12,     5,     0,    20,    22,    21,    25,     0,     6,
      12,     7,    11,    12,     0,    12,     1,     2,     0,     3,
      23,    26,     4,     0,    18,    13,    14,    15,    16,    19,
      30,    17,    33,    29,     9,    28
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     9,    10,    11,    24,    39,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -20
static const yysigned_char yypact[] =
{
      -1,   -14,   -20,   -20,   -20,    16,    -4,   -20,   -20,    11,
       1,    14,   -20,     3,    24,   -20,    25,   -20,    17,   -20,
      14,   -20,   -20,    14,    15,    14,   -20,   -20,    15,   -20,
     -20,   -20,   -20,    23,    15,   -20,   -20,   -20,   -20,   -20,
      23,   -20,   -20,   -20,   -20,   -20
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -20,   -20,   -20,    26,    -3,   -19,   -20,   -20,   -20,    19,
     -20,    18,   -20,   -20,    29,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -33
static const yysigned_char yytable[] =
{
       1,    21,     2,     3,     4,   -32,   -32,     5,    28,    41,
       7,    26,     6,     7,     8,    44,    27,    33,    29,     2,
      34,    22,    40,    22,    35,    36,    37,    38,     3,    42,
       4,    23,    32,    30,    31,    25,     0,     0,    45
};

static const yysigned_char yycheck[] =
{
       1,    15,     3,     4,     5,     6,     7,     8,    11,    28,
      14,     0,    13,    14,    15,    34,    15,    20,    15,     3,
      23,     7,    25,     7,     9,    10,    11,    12,     4,     6,
       5,     5,    15,    14,    16,     6,    -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     1,     3,     4,     5,     8,    13,    14,    15,    17,
      18,    19,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    15,     7,    19,    20,    30,     0,    15,    20,    15,
      25,    27,    15,    20,    20,     9,    10,    11,    12,    21,
      20,    21,     6,    31,    21,    31
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 30 "sintactico.y"
    {printf("\n CADENA VALIDA \n"); Derivaciones(1);DibujarTablaDeTokens();ArbolDeDerivacion(1);op1=0;op2=0;varias=0;printf("\n\nINGRESE UNA CADENA: "); yyparse();;}
    break;

  case 3:
#line 31 "sintactico.y"
    {printf("\n CADENA VALIDA \n"); Derivaciones(2);DibujarTablaDeTokens();ArbolDeDerivacion(2);op1=0;op2=0;varias=0;printf("\n\nINGRESE UNA CADENA: ") ;yyparse();;}
    break;

  case 4:
#line 32 "sintactico.y"
    {printf("\n CADENA VALIDA \n"); Derivaciones(3);DibujarTablaDeTokens();ArbolDeDerivacion(3);op1=0;op2=0;varias=0;printf("\n\nINGRESE UNA CADENA: ") ; yyparse();;}
    break;

  case 5:
#line 33 "sintactico.y"
    {yyerrok;;}
    break;

  case 6:
#line 34 "sintactico.y"
    {yyerrok;;}
    break;

  case 7:
#line 35 "sintactico.y"
    {yyerrok; printf("\n\nINGRESE UNA CADENA: ");yyparse();;}
    break;

  case 8:
#line 36 "sintactico.y"
    {printf("\n CADENA VALIDA \n"); printf("\n\nINGRESE UNA CADENA: "); yyparse();;}
    break;

  case 11:
#line 45 "sintactico.y"
    {op1 = 1;;}
    break;

  case 13:
#line 49 "sintactico.y"
    {varias = 1;;}
    break;

  case 14:
#line 50 "sintactico.y"
    {varias = 2;;}
    break;

  case 15:
#line 51 "sintactico.y"
    {varias = 3;;}
    break;

  case 16:
#line 52 "sintactico.y"
    {varias = 4;;}
    break;

  case 17:
#line 55 "sintactico.y"
    {yyerrok; printf("\n\n ERROR LEXICO: Falta terminal 'ALPHABET' \n\n");yyparse();;}
    break;

  case 18:
#line 56 "sintactico.y"
    {yyerrok; printf("\n\n ERROR LEXICO: Falta terminal 'STANDARD1|STANDARD1|NATIVE|EBCDIC' \n\n");yyparse();;}
    break;

  case 19:
#line 57 "sintactico.y"
    {yyerrok; printf("\n\n ERROR LEXICO: Falta terminal 'ALPHABET_NAME' \n\n");yyparse();;}
    break;

  case 20:
#line 62 "sintactico.y"
    {varias = 5;;}
    break;

  case 21:
#line 63 "sintactico.y"
    {varias = 6;;}
    break;

  case 24:
#line 70 "sintactico.y"
    {aument1++;;}
    break;

  case 27:
#line 77 "sintactico.y"
    {aument2++;;}
    break;

  case 29:
#line 83 "sintactico.y"
    {yyerrok; printf("\n\n ERROR LEXICO: Falta terminal 'CURRENCY' \n\n");yyparse();;}
    break;

  case 30:
#line 84 "sintactico.y"
    {yyerrok; printf("\n\n ERROR LEXICO: Falta terminal 'LITERAL' \n\n");yyparse();;}
    break;

  case 31:
#line 87 "sintactico.y"
    {op2 = 1;;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 1156 "sintactico.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 94 "sintactico.y"


/* Rutina de error */
int yyerror (char *msg) {
         if(EstadoScanner==1){	 
         printf("\n Error en la linea %d \n", NumLineas);}
	 printf("\n CADENA INVALIDA: %s ***\n ", msg);
	       
}

/* La llamada a la accion principal */
FILE *yyin;

int main(int argc, char *argv[])
           {
           FILE *ArchEnt;
           if (argc == 2)
                {
                 ArchEnt=fopen(argv[1], "rt");
                 if (!ArchEnt) {
                           fprintf(stderr, "No se encuentra el archivo %s \n", argv[1]);
                           exit(1);
           }
           yyin=ArchEnt;
           EstadoScanner=1;
           }
	   printf("\nINGRESE UNA CADENA: ");                                                      
           yyparse();                                                      
           return 0;
}                                

/* Llamada a funcion de finalizacion */
int yywrap() { 
        EstadoScanner=2;
	printf("Finalizacion de analisis\n");
	return 1;
}

int Derivaciones(int NumDer) {

	printf("\n  ------------------------------ DERIVACIONES -------------------------------  \n");

	switch (NumDer) {

	case 1: 
	printf("\n axioma --> alphabet_clause \n");
	printf("\n alphabet_clause --> ALPH alphabet_name op1 seg \n");
	printf("\n alphabet_name --> ALPHNAME \n");
		if(op1==1){
			printf("\n op1 --> ISS \n");
	}

		if(varias==1){
			printf("\n seg --> STAND1 \n");
	}

		if(varias==2){
			printf("\n seg --> STAND2 \n");
	}

		if(varias==3){
			printf("\n seg --> NAT \n");
	}

		if(varias==4){
			printf("\n seg --> EB \n");
	}
	break;

	case 2: 
	printf("\n axioma --> special_names_paragraph_clauses \n");
	printf("\n special_names_paragraph_clauses: aux1 | aux2 \n"); 
		if(varias == 5){
			printf("\n aux1 --> symbolic_characters_clause | aux1 symbolic_characters_clause \n"); 
			printf("\n symbolic_characters_clause: SYMB \n"); 
	}
		if(varias == 6){
			printf("\n aux2 --> class_clause | aux2 class_clause \n"); 
			printf("\n class_clause: CLASS \n"); 
	}              
	break;

	case 3:
	printf("\n axioma --> currency_sign_clause \n");
	printf("\n currency_sign_clause --> CURR op2 op1 literal \n");
		if(op1==1){
			printf("\n op1 --> ISS \n");
	}
		if(op2==1){
			printf("\n op2 --> SIG \n");
	}
	printf("\n literal --> LIT \n");
	break;

	default: 
	break;
	}

	return (0) ;
}

/* Llamada a funci�n que dibuja la tabla */

int DibujarTablaDeTokens(){
	int ContAuxT,ContAuxK;
	int LargoToken,LargoIzq,LargoDer;

	printf("\n===============================TABLA DE SIMBOLOS===============================\n");
	printf("|                LEXEMAS               |                 TOKENS               |\n");
	printf("---------------------------------------+---------------------------------------\n");

	for (ContAuxK=0;ContAuxK<SubIndiceMax;ContAuxK++){
		LargoToken=38-strlen(Lexema[ContAuxK]);
		if ((LargoToken & 1)==0){
			LargoIzq=LargoToken/2;
		}else{
			LargoIzq=(LargoToken+1)/2;
		}
		LargoDer=LargoToken-LargoIzq;
		printf("|");
		for (ContAuxT=0;ContAuxT<LargoIzq;ContAuxT++){
			printf(" ");
		}
		printf("%s",Lexema[ContAuxK]);
		for (ContAuxT=0;ContAuxT<LargoDer;ContAuxT++){
			printf(" ");
		}
		printf("|");
	
		LargoToken=38-strlen(Token[ContAuxK]);
		if ((LargoToken & 1)==0){
			LargoIzq=LargoToken/2;
		}else{
			LargoIzq=(LargoToken+1)/2;
		}
		LargoDer=LargoToken-LargoIzq;
		for (ContAuxT=0;ContAuxT<LargoIzq;ContAuxT++){
			printf(" ");
		}
		printf("%s",Token[ContAuxK]);
		for (ContAuxT=0;ContAuxT<LargoDer;ContAuxT++){
			printf(" ");
		}
		printf("|\n");
	}
	printf("===============================================================================\n\n\n");
	return 0;
}

/* Llamada a funci�n que dibuja el �rbol */

int ArbolDeDerivacion(int SubTipo){

	printf("\n ----------------------------ARBOL DE DERIVACION---------------------------- \n");
        printf("\n                                   axioma                                    \n");
        printf("\n                                     |                                       \n");

	switch(SubTipo){

	case 1: 
	printf("\n                              alphabet_clause                                \n");

	if(op1==1 && varias==1){

	printf("\n                                     |                                       \n");
	printf("\n                      ---------------+--------------------------------       \n");
	printf("\n                     |               |               |               |       \n");
	printf("\n                 ALPHABET     alphabet_name         op2             seg      \n");
	printf("\n                                     |               |               |       \n");
	printf("\n                                     +--------------------------------       \n");
	printf("\n                                     |               |               |       \n");
	printf("\n                    	        ALPHABET_NAME	      ISS          STANDARD1   \n");
	}

	else{
		if(varias==1){

	printf("\n                                      |                                       \n");
	printf("\n                      ----------------+----------------                       \n");
	printf("\n                      |               |               |                       \n");
	printf("\n                  ALPHABET     alphabet_name         seg                      \n");
	printf("\n                                      |               |                       \n");
	printf("\n                                      +----------------                       \n");
	printf("\n                                      |               |                       \n");
	printf("\n                    	         ALPHABET_NAME	     STANDARD1                  \n");
		}
	}
	
	if(op1==1 && varias==2){

	printf("\n                                      |                                       \n");
	printf("\n                      ----------------+--------------------------------       \n");
	printf("\n                      |               |               |               |       \n");
	printf("\n                  ALPHABET     alphabet_name         op2             seg      \n");
	printf("\n                                      |               |               |       \n");
	printf("\n                                      +--------------------------------       \n");
	printf("\n                                      |               |               |       \n");
	printf("\n                    	         ALPHABET_NAME	       ISS         STANDARD2    \n");
	}
	else{
		if(varias==2){
	printf("\n                                      |                                       \n");
	printf("\n                      ----------------+----------------                       \n");
	printf("\n                      |               |               |                       \n");
	printf("\n                  ALPHABET     alphabet_name         seg                      \n");
	printf("\n                                      |               |                       \n");
	printf("\n                                      +----------------                       \n");
	printf("\n                                      |               |                       \n");
	printf("\n                    		ALPHABET_NAME	     STANDARD2                  \n");
		}
	}
	
	if(op1==1 && varias==3){

	printf("                                      |                                         ");
	printf("                      ----------------+--------------------------------         ");
	printf("                      |               |               |               |         ");
	printf("                  ALPHABET     alphabet_name         op2             seg        ");
	printf("                                      |               |               |         ");
	printf("                                      +--------------------------------         ");
	printf("                                      |               |               |         ");
	printf("                    	      ALPHABET_NAME	     ISS           NATIVE       ");
	}
	else{
		if(varias==3){

	printf("\n                                      |                                       \n");
	printf("\n                      ----------------+----------------                       \n");
	printf("\n                      |               |               |                       \n");
	printf("\n                  ALPHABET     alphabet_name         seg                      \n");
	printf("\n                                      |               |                       \n");
	printf("\n                                      +----------------                       \n");
	printf("\n                                      |               |                       \n");
	printf("\n                    		 ALPHABET_NAME	      NATIVE                    \n");
		}
	}

	if(op1==1 && varias==4){

	printf("\n                                      |                                       \n");
	printf("\n                      ----------------+--------------------------------       \n");
	printf("\n                      |               |               |               |       \n");
	printf("\n                  ALPHABET     alphabet_name         op2             seg      \n");
	printf("\n                                      |               |               |       \n");
	printf("\n                                      +--------------------------------       \n");
	printf("\n                                      |               |               |       \n");
	printf("\n                    		 ALPHABET_NAME	       ISS           EBCDIC     \n");
	}
	else{
		if(varias==4){

	printf("\n                                      |                                       \n");
	printf("\n                      ----------------+----------------                       \n");
	printf("\n                      |               |               |                       \n");
	printf("\n                  ALPHABET     alphabet_name         seg                      \n");
	printf("\n                                      |               |                       \n");
	printf("\n                                      +----------------                       \n");
	printf("\n                                      |               |                       \n");
	printf("\n                    		 ALPHABET_NAME	      EBCDIC                    \n");
		}
	}
	break;
	
	case 2: 
	printf("\n                          special_names_paragraph_clauses                     \n");
	printf("\n                                        |                                     \n");
	
 	if(varias==5){
	printf("\n                                        |                                     \n");
	printf("\n                                       aux1                                   \n");
	do{
		aument1= aument1 - 1;
	
	printf("\n                                        |                                     \n");
	printf("\n                                     SYMBOLIC                                 \n");
	
			
	}while(aument1!=0);

	}

	if(varias==6){
	printf("\n                                        |                                     \n");
	printf("\n                                       aux2                                   \n");
	do{
		aument2= aument2 - 1;
	
	printf("\n                                        |                                     \n");
	printf("\n                                      CLASS                                   \n");
	
			
	}while(aument2!=0);

	}
	break;

	case 3: 
	printf("\n                          special_names_paragraph_clauses                     \n");
	
	if(op1==1 && op2==1){

	printf("\n                                        |                                     \n");
	printf("\n                        ----------------+--------------------------------     \n");
	printf("\n                        |               |               |               |     \n");
	printf("\n                    CURRENCY     	 op2             op1           LITERAL  \n");
	printf("\n                                        |               |                     \n");
	printf("\n                                        +---------------+                     \n");
	printf("\n                                        |               |                     \n");
	printf("\n                    			 SIGN	         ISS                    \n");
	}
	else{
		if(op2==1){

	printf("\n                                        |                                     \n");
	printf("\n                        ----------------+----------------                     \n");
	printf("\n                        |               |               |                     \n");
	printf("\n                    CURRENCY     	 op2             LITERAL                \n");
	printf("\n                                        |                                     \n");
	printf("\n                                        +                                     \n");
	printf("\n                                        |                                     \n");
	printf("\n                    			 SIGN	                                \n");
	}
	}
	
	if(op1==1){

	printf("\n                                        |                                     \n");
	printf("\n                        ----------------+----------------                     \n");
	printf("\n                        |               |               |                     \n");
	printf("\n                    CURRENCY     	 op2             LITERAL                \n");
	printf("\n                                        |                                     \n");
	printf("\n                                        +                                     \n");
	printf("\n                                        |                                     \n");
	printf("\n                    			 ISS	                                \n");
	}

	if(op1==0 && op2==0){

	printf("\n                                        |                                     \n");
	printf("\n                        ----------------+----------------                     \n");
	printf("\n                        |                               |                     \n");
	printf("\n                    CURRENCY     	              LITERAL                   \n");
	}
	
	break;
	}

	return(0);
}


