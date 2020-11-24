
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\TpIntegrador.y"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int yylex ();
int yyerror (char*);
int yywrap(){
    return(1);
}



extern int yylineno;
// usar yylineno para las lineas en ts

FILE* yyin;
FILE* yyout;



/* Line 189 of yacc.c  */
#line 98 "TpIntegrador.tab.c"

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

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CENTERO = 258,
     CREAL = 259,
     ID = 260,
     LCADENA = 261,
     CCARACTER = 262,
     OPASIG = 263,
     OR = 264,
     AND = 265,
     OPIGUAL = 266,
     OPREL = 267,
     OPINCDEC = 268,
     T_DATO = 269,
     TCLASE = 270,
     FLECHA = 271,
     OPDESIGUAL = 272,
     OPERADORUNARIO = 273,
     IF = 274,
     ELSE = 275,
     SIZEOF = 276,
     SWITCH = 277,
     WHILE = 278,
     DO = 279,
     FOR = 280,
     RETURN = 281,
     CONTINUE = 282,
     GOTO = 283,
     BREAK = 284,
     CASE = 285,
     DEFAULT = 286,
     CNORECONOCIDO = 287,
     errorLexico = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 ".\\TpIntegrador.y"

char ccval[20]; // cadenas
struct yylval_Tokens
  {
      int tipo;
      int ival;
      double dval;
  } estructura;
struct yylval_TokenError
  {
      int linea;
      char nomError[20];
  } errorLex;



/* Line 214 of yacc.c  */
#line 184 "TpIntegrador.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 196 "TpIntegrador.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    41,    49,     2,
      42,    43,    39,    37,    47,    38,    46,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    48,
       2,     2,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    18,
      20,    22,    26,    28,    34,    36,    40,    42,    46,    48,
      52,    54,    58,    60,    64,    68,    70,    74,    78,    82,
      84,    87,    92,    94,    99,   104,   108,   112,   115,   116,
     118,   122,   124,   126,   128,   130,   132,   136,   138,   140,
     142,   144,   147,   150,   154,   158,   160,   163,   167,   169,
     173,   176,   177,   180,   187,   195,   196,   198,   202,   206,
     211,   212,   214,   221,   224,   226,   228,   230,   232,   234,
     236,   239,   246,   252,   253,   255,   258,   259,   261,   264,
     266,   269,   276,   282,   283,   286,   292,   300,   310,   314,
     317,   320,   324,   329,   333,   337,   338
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    -1,    53,    54,    -1,    69,    -1,    82,
      -1,    55,    -1,    33,    -1,     1,    34,    -1,    56,    -1,
      57,    -1,    64,     8,    56,    -1,    58,    -1,    58,    35,
      55,    36,    57,    -1,    59,    -1,    58,     9,    59,    -1,
      60,    -1,    59,    10,    60,    -1,    61,    -1,    60,    11,
      61,    -1,    62,    -1,    61,    12,    62,    -1,    63,    -1,
      62,    37,    63,    -1,    62,    38,    63,    -1,    64,    -1,
      63,    39,    64,    -1,    63,    40,    64,    -1,    63,    41,
      64,    -1,    65,    -1,    13,    64,    -1,    21,    42,    14,
      43,    -1,    68,    -1,    65,    44,    55,    45,    -1,     5,
      42,    66,    43,    -1,    65,    46,     5,    -1,    65,    16,
       5,    -1,    65,    13,    -1,    -1,    67,    -1,    66,    47,
      67,    -1,    56,    -1,     5,    -1,     3,    -1,     4,    -1,
       6,    -1,    42,    55,    43,    -1,    34,    -1,    70,    -1,
      77,    -1,    81,    -1,    14,    71,    -1,    74,    48,    -1,
      39,    74,    48,    -1,     5,    72,    48,    -1,    73,    -1,
      72,    73,    -1,    44,    55,    45,    -1,    75,    -1,    74,
      47,    75,    -1,     5,    76,    -1,    -1,     8,    57,    -1,
      14,     5,    42,    78,    43,    48,    -1,    14,    39,     5,
      42,    78,    43,    48,    -1,    -1,    79,    -1,    79,    47,
      78,    -1,    14,    80,     5,    -1,    14,    39,    80,     5,
      -1,    -1,    49,    -1,    14,     5,    42,    78,    43,    82,
      -1,    83,    34,    -1,    84,    -1,    88,    -1,    90,    -1,
      91,    -1,    92,    -1,    48,    -1,    55,    48,    -1,    50,
      85,    34,    86,    51,    34,    -1,    50,    85,    86,    51,
      34,    -1,    -1,    69,    -1,    85,    69,    -1,    -1,    82,
      -1,    87,    82,    -1,    82,    -1,    87,    82,    -1,    19,
      42,    55,    43,    82,    89,    -1,    22,    42,    55,    43,
      82,    -1,    -1,    20,    82,    -1,    23,    42,    55,    43,
      82,    -1,    24,    82,    23,    42,    55,    43,    48,    -1,
      25,    42,    93,    48,    93,    48,    93,    43,    82,    -1,
      26,    93,    48,    -1,    27,    48,    -1,    29,    48,    -1,
      28,     5,    48,    -1,    30,    57,    36,    82,    -1,    31,
      36,    82,    -1,     5,    36,    82,    -1,    -1,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    81,    85,    86,    87,    88,    96,   103,
     106,   107,   111,   112,   114,   115,   117,   118,   120,   121,
     128,   129,   140,   141,   155,   157,   166,   167,   168,   172,
     181,   182,   186,   196,   197,   204,   205,   206,   209,   210,
     211,   213,   229,   230,   231,   232,   233,   250,   251,   252,
     253,   257,   265,   266,   267,   275,   276,   279,   282,   283,
     286,   294,   295,   299,   310,   323,   324,   325,   329,   337,
     349,   350,   353,   362,   363,   364,   365,   366,   367,   370,
     371,   374,   375,   379,   380,   381,   384,   385,   386,   389,
     390,   396,   397,   400,   401,   405,   406,   407,   411,   412,
     413,   414,   418,   419,   420,   423,   424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CENTERO", "CREAL", "ID", "LCADENA",
  "CCARACTER", "OPASIG", "OR", "AND", "OPIGUAL", "OPREL", "OPINCDEC",
  "T_DATO", "TCLASE", "FLECHA", "OPDESIGUAL", "OPERADORUNARIO", "IF",
  "ELSE", "SIZEOF", "SWITCH", "WHILE", "DO", "FOR", "RETURN", "CONTINUE",
  "GOTO", "BREAK", "CASE", "DEFAULT", "CNORECONOCIDO", "errorLexico",
  "'\\n'", "'?'", "':'", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'",
  "'['", "']'", "'.'", "','", "';'", "'&'", "'{'", "'}'", "$accept",
  "input", "line", "expresion", "expresionAsignacion",
  "expresionCondicional", "expresionOr", "expresionAnd",
  "expresionIgualdad", "expresionRelacional", "expresionAditiva",
  "expresionMultiplicativa", "expresionUnaria", "expresionPostFijo",
  "listaArgumentos", "expresionAsignacionBis", "expresionPrimaria",
  "declaracion", "declaracionDeVariables", "declaracionDeVariablesPuntero",
  "listaArreglos", "arreglo", "listaVariablesSimples", "variableSimple",
  "inicializador", "declaracionDeFunciones", "opcionArgumentos",
  "argumentoSimple", "referencia", "definicionDeFuncion", "sentencia",
  "sentenciaExpresion", "sentenciaCompuesta", "listaDeclaracionesOpcional",
  "listaSentenciasOpcional", "listaSentencias", "sentenciaSeleccion",
  "elseSent", "sentenciaIteracion", "sentenciaSalto", "sentenciaEtiqueta",
  "expresionOpc", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    10,    63,    58,    43,    45,    42,
      47,    37,    40,    41,    91,    93,    46,    44,    59,    38,
     123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    54,    54,    54,    54,    54,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    71,    71,    71,    72,    72,    73,    74,    74,
      75,    76,    76,    77,    77,    78,    78,    78,    79,    79,
      80,    80,    81,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    85,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    91,    91,
      91,    91,    92,    92,    92,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     4,     1,     4,     4,     3,     3,     2,     0,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     2,     3,     3,     1,     2,     3,     1,     3,
       2,     0,     2,     6,     7,     0,     1,     3,     3,     4,
       0,     1,     6,     2,     1,     1,     1,     1,     1,     1,
       2,     6,     5,     0,     1,     2,     0,     1,     2,     1,
       2,     6,     5,     0,     2,     5,     7,     9,     3,     2,
       2,     3,     4,     3,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,    43,    44,    42,    45,     0,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,     0,     7,    47,     0,    79,    83,     3,     6,     9,
      10,    12,    14,    16,    18,    20,    22,    25,    29,    32,
       4,    48,    49,    50,     5,     0,    74,    75,    76,    77,
      78,     8,     0,    38,    42,    30,    61,     0,    51,     0,
      58,     0,     0,     0,     0,     0,     0,   105,   106,     0,
      99,     0,   100,     0,    25,     0,     0,    84,    86,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,     0,    73,   104,    41,     0,    39,
       0,    65,     0,     0,    55,    60,    61,     0,     0,    52,
       0,     0,     0,     0,     0,     0,    98,   101,     0,   103,
      46,    47,    85,    89,     0,     0,    15,     0,    17,    19,
      21,    23,    24,    26,    27,    28,    11,    36,     0,    35,
      34,     0,    62,    70,     0,    66,     0,    54,    56,    65,
      53,    61,    59,     0,    31,     0,     0,     0,   105,   102,
       0,     0,    90,     0,    33,    40,    70,    71,     0,     0,
      65,    57,     0,    93,    92,    95,     0,     0,     0,    82,
      13,     0,    68,    63,    72,    67,     0,     0,    91,     0,
     105,    81,    69,    64,    94,    96,     0,     0,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    27,    65,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    98,    99,    39,    40,    41,    58,
     103,   104,    59,    60,   105,    42,   144,   145,   168,    43,
     123,    45,    46,    78,   124,   125,    47,   188,    48,    49,
      50,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
    -142,   178,  -142,   -20,  -142,  -142,   -27,  -142,    15,     1,
     -16,    10,    12,    20,   242,    26,    15,    -6,    40,    21,
      15,    34,  -142,  -142,    15,  -142,    -4,  -142,    23,  -142,
    -142,     8,    62,    64,    61,    -5,    19,    68,     9,  -142,
    -142,  -142,  -142,  -142,  -142,    43,  -142,  -142,  -142,  -142,
    -142,  -142,   242,    15,    36,  -142,    -3,    74,  -142,     2,
    -142,    15,    66,    15,    15,    23,    73,    15,  -142,    49,
    -142,    50,  -142,    48,  -142,   242,    56,  -142,   210,  -142,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,  -142,    95,    15,    96,  -142,  -142,  -142,    -9,  -142,
      15,    90,    15,   -13,  -142,  -142,     4,    18,   100,  -142,
      63,    65,    67,    69,    71,    59,  -142,  -142,   242,  -142,
    -142,   242,  -142,    58,    60,   242,    62,    78,    64,    61,
      -5,    19,    19,  -142,  -142,  -142,  -142,  -142,    70,  -142,
    -142,    15,  -142,   -12,    75,    72,    76,  -142,  -142,    90,
    -142,   108,  -142,   242,  -142,   242,   242,    15,    15,  -142,
      77,    86,    79,    15,  -142,  -142,    80,  -142,   117,   272,
      90,  -142,    82,   103,  -142,  -142,    84,    83,    98,  -142,
    -142,   128,  -142,  -142,  -142,  -142,    87,   242,  -142,    88,
      15,  -142,  -142,  -142,  -142,  -142,    91,   242,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,     0,   -46,   -18,  -142,    57,    81,    55,
      85,   -38,     3,  -142,  -142,    -2,  -142,   -22,  -142,  -142,
    -142,    37,    89,    33,  -142,  -142,  -141,  -142,   -24,  -142,
      -1,  -142,  -142,  -142,    22,  -142,  -142,  -142,  -142,  -142,
    -142,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -89
static const yytype_int16 yytable[] =
{
      44,    28,    73,   115,    77,   100,    56,    97,   172,    52,
       9,    55,   100,    66,    51,    53,    68,    80,     4,     5,
      54,     7,    91,    74,    76,    92,    61,   166,     8,   185,
      23,   102,    85,    86,   140,   147,    11,   167,   141,   101,
      57,   102,    70,    81,   136,    71,   149,   131,   132,   108,
     109,    96,    62,    93,    63,    94,   122,    24,    87,    88,
      89,   110,    64,   112,   113,   108,   150,    68,    67,    72,
      75,    79,    82,    84,   119,    83,    90,    95,    53,   106,
     111,   127,   142,    74,   118,    74,    74,    74,    74,    74,
     133,   134,   135,   138,   177,    97,   114,   116,   117,   120,
     137,   139,   146,    74,   143,   151,   153,   158,   154,   -87,
     155,   161,   156,   157,   163,   164,   100,   159,   169,   170,
     179,   171,   182,   187,   162,   186,   196,   189,   178,   167,
     -88,   190,   191,   192,   197,   193,   195,   126,   129,   165,
     148,   152,   181,   160,     0,   180,   107,     0,     0,     0,
       0,     0,   173,     0,   174,   175,     0,   176,    68,     0,
       0,     0,     0,   128,     0,     0,    74,     0,   184,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       0,     4,     5,     6,     7,     0,   194,     0,     0,     0,
      68,     8,     9,     0,     0,     0,   198,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,    23,     4,     5,     6,     7,     0,     0,     0,
      24,     0,     0,     8,     9,     0,    25,     0,    26,    10,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,   121,     4,     5,     6,     7,     0,
       0,     0,    24,     0,     0,     8,     0,     0,    25,     0,
      26,    10,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     4,     5,     6,     7,     0,
       0,     0,     0,     0,    24,     8,     0,     0,     0,     0,
      25,    10,    26,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
     183,     0,    26
};

static const yytype_int16 yycheck[] =
{
       1,     1,    20,    67,    26,     8,     5,    53,   149,    36,
      14,     8,     8,    14,    34,    42,    16,     9,     3,     4,
       5,     6,    13,    20,    24,    16,    42,    39,    13,   170,
      34,    44,    37,    38,    43,    48,    21,    49,    47,    42,
      39,    44,    48,    35,    90,     5,    42,    85,    86,    47,
      48,    52,    42,    44,    42,    46,    78,    42,    39,    40,
      41,    61,    42,    63,    64,    47,    48,    67,    42,    48,
      36,    48,    10,    12,    75,    11,     8,    34,    42,     5,
      14,    81,   100,    80,    36,    82,    83,    84,    85,    86,
      87,    88,    89,    93,   158,   141,    23,    48,    48,    43,
       5,     5,   102,   100,    14,     5,    43,    48,    43,    51,
      43,    51,    43,    42,    36,    45,     8,   118,    43,    47,
      34,    45,     5,    20,   125,    43,   190,    43,    51,    49,
      51,    48,    34,     5,    43,    48,    48,    80,    83,   141,
     103,   108,   166,   121,    -1,   163,    57,    -1,    -1,    -1,
      -1,    -1,   153,    -1,   155,   156,    -1,   157,   158,    -1,
      -1,    -1,    -1,    82,    -1,    -1,   163,    -1,   169,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,     3,     4,     5,     6,    -1,   187,    -1,    -1,    -1,
     190,    13,    14,    -1,    -1,    -1,   197,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    33,    34,     3,     4,     5,     6,    -1,    -1,    -1,
      42,    -1,    -1,    13,    14,    -1,    48,    -1,    50,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,     3,     4,     5,     6,    -1,
      -1,    -1,    42,    -1,    -1,    13,    -1,    -1,    48,    -1,
      50,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    42,    13,    -1,    -1,    -1,    -1,
      48,    19,    50,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,     0,     1,     3,     4,     5,     6,    13,    14,
      19,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    33,    34,    42,    48,    50,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    68,
      69,    70,    77,    81,    82,    83,    84,    88,    90,    91,
      92,    34,    36,    42,     5,    64,     5,    39,    71,    74,
      75,    42,    42,    42,    42,    55,    82,    42,    55,    93,
      48,     5,    48,    57,    64,    36,    55,    69,    85,    48,
       9,    35,    10,    11,    12,    37,    38,    39,    40,    41,
       8,    13,    16,    44,    46,    34,    82,    56,    66,    67,
       8,    42,    44,    72,    73,    76,     5,    74,    47,    48,
      55,    14,    55,    55,    23,    93,    48,    48,    36,    82,
      43,    34,    69,    82,    86,    87,    59,    55,    60,    61,
      62,    63,    63,    64,    64,    64,    56,     5,    55,     5,
      43,    47,    57,    14,    78,    79,    55,    48,    73,    42,
      48,     5,    75,    43,    43,    43,    43,    42,    48,    82,
      86,    51,    82,    36,    45,    67,    39,    49,    80,    43,
      47,    45,    78,    82,    82,    82,    55,    93,    51,    34,
      57,    80,     5,    48,    82,    78,    43,    20,    89,    43,
      48,    34,     5,    48,    82,    48,    93,    43,    82
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 7:

/* Line 1455 of yacc.c  */
#line 88 ".\\TpIntegrador.y"
    {
                char *cadena = (char *)malloc((strlen((yyvsp[(1) - (1)].errorLex).nomError) + 1) * sizeof(char *));
                strcpy(cadena,(yyvsp[(1) - (1)].errorLex).nomError); 
                int linea = (yyvsp[(1) - (1)].errorLex).linea;
                listaErroresLexicos = agregarErrorLexico(listaErroresLexicos, cadena , linea);

        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 96 ".\\TpIntegrador.y"
    {listaErroresSintacticos=agregarErrorSintactico(listaErroresSintacticos,yylineno);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 141 ".\\TpIntegrador.y"
    {  if((yyvsp[(1) - (3)].estructura).tipo==(yyvsp[(3) - (3)].estructura).tipo) { 
                                                        if((yyvsp[(1) - (3)].estructura).tipo==1){
                                                        (yyval.estructura).ival=(yyvsp[(1) - (3)].estructura).ival+(yyvsp[(3) - (3)].estructura).ival;
                                                        printf("El resultado es: %d\n",(yyval.estructura).ival);
                                                        }else{
                                                        (yyval.estructura).dval=(yyvsp[(1) - (3)].estructura).dval+(yyvsp[(3) - (3)].estructura).dval;
                                                        printf("El resultado es: %f\n",(yyval.estructura).dval);
                                                        }
                                                           } else {
                                                                printf("Error semantico en la linea %d Los operandos son de distinto tipo \n",yylineno);
                                                                printf("Tipo1 = %d. Tipo2 = %d. \n",(yyvsp[(1) - (3)].estructura).tipo,(yyvsp[(3) - (3)].estructura).tipo);
                                                                }
                                                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 157 ".\\TpIntegrador.y"
    {
                    if((yyvsp[(1) - (1)].estructura).tipo==1){
                    (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;
                    (yyval.estructura).ival=(yyvsp[(1) - (1)].estructura).ival;
                    }else{
                        (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;
                        (yyval.estructura).dval=(yyvsp[(1) - (1)].estructura).dval;
                        }
                                        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 172 ".\\TpIntegrador.y"
    {
                    if((yyvsp[(1) - (1)].estructura).tipo==1){
                    (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;
                    (yyval.estructura).ival=(yyvsp[(1) - (1)].estructura).ival;
                    }else{
                        (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;
                        (yyval.estructura).dval=(yyvsp[(1) - (1)].estructura).dval;
                        }
                                        ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 186 ".\\TpIntegrador.y"
    {

                    if((yyvsp[(1) - (1)].estructura).tipo==1){
                    (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;
                    (yyval.estructura).ival=(yyvsp[(1) - (1)].estructura).ival;
                    }else{
                        (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;
                        (yyval.estructura).dval=(yyvsp[(1) - (1)].estructura).dval;
                        }
                                        ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 197 ".\\TpIntegrador.y"
    {
                    char *id = (char *)malloc((strlen((yyvsp[(1) - (4)].ccval)) + 1) * sizeof(char *));
                    strcpy(id,(yyvsp[(1) - (4)].ccval));
                    int linea = yylineno;
                    comprobarInvocacionFuncion(listaFunciones,listaParametrosAux,id,linea);
                    listaParametrosAux = NULL;
                ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 213 ".\\TpIntegrador.y"
    {
                                        char *id = (char *)malloc((strlen((yyvsp[(1) - (1)].ccval)) + 1) * sizeof(char *));
                                        strcpy(id,(yyvsp[(1) - (1)].ccval));
                                        variableAux = buscarVariable(listaVariables, id);
                                        char *tipo = (char *)malloc((strlen(variableAux->tipoVar) + 1) * sizeof(char *));
                                        if(variableAux == NULL){
                                                strcpy(tipo,"undefined");
                                        }
                                        else{
                                                strcpy(tipo,variableAux->tipoVar);

                                        }
                                        listaParametrosAux = agregarVariable(listaParametrosAux,id,tipo);
                                        variableAux = NULL;
                                        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 229 ".\\TpIntegrador.y"
    {strcpy((yyval.ccval),(yyvsp[(1) - (1)].ccval));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 230 ".\\TpIntegrador.y"
    {(yyval.estructura).ival=(yyvsp[(1) - (1)].estructura).ival; (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 231 ".\\TpIntegrador.y"
    {(yyval.estructura).dval=(yyvsp[(1) - (1)].estructura).dval; (yyval.estructura).tipo=(yyvsp[(1) - (1)].estructura).tipo;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 257 ".\\TpIntegrador.y"
    {
                                        strcat((yyvsp[(1) - (2)].ccval),(yyvsp[(2) - (2)].ccval));
                                        int linea = yylineno;
                                        listaVariables = pasarVariablesDeAux(listaVariables,listaVariablesAux, (yyvsp[(1) - (2)].ccval),linea);
                                        listaVariablesAux = destroyListaVar(listaVariablesAux);
        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 265 ".\\TpIntegrador.y"
    {strcpy((yyval.ccval), "");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 266 ".\\TpIntegrador.y"
    {strcpy((yyval.ccval), "*");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 267 ".\\TpIntegrador.y"
    {
                                        strcpy((yyval.ccval), " arreglo");
                                        char *cadena = (char *)malloc((strlen((yyvsp[(1) - (3)].ccval)) + 1) * sizeof(char *));
                                        strcpy(cadena,(yyvsp[(1) - (3)].ccval));
                                        listaVariablesAux = agregarVariable(listaVariablesAux,cadena," ");
        
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 286 ".\\TpIntegrador.y"
    {
                                        char *cadena = (char *)malloc((strlen((yyvsp[(1) - (2)].ccval)) + 1) * sizeof(char *));
                                        strcpy(cadena,(yyvsp[(1) - (2)].ccval));
                                        listaVariablesAux = agregarVariable(listaVariablesAux,cadena,"not yet");
                                        strcpy((yyval.ccval), (yyvsp[(1) - (2)].ccval));
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 299 ".\\TpIntegrador.y"
    {
                                        char *id = (char *)malloc((strlen((yyvsp[(2) - (6)].ccval)) + 1) * sizeof(char *));
                                        strcpy(id,(yyvsp[(2) - (6)].ccval));
                                        char *tipo = (char *)malloc((strlen((yyvsp[(1) - (6)].ccval)) + 1) * sizeof(char *));
                                        strcpy(tipo,(yyvsp[(1) - (6)].ccval));
                                        int cantidad = contarParametros(listaParametrosAux);
                                        int linea = yylineno;
                                        listaFunciones = validarFuncionYAgregarla(listaFunciones,listaParametrosAux, id,tipo,cantidad,linea);
                                        listaParametrosAux = NULL;
                                        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 310 ".\\TpIntegrador.y"
    {
                                        char *id = (char *)malloc((strlen((yyvsp[(3) - (7)].ccval)) + 1) * sizeof(char *));
                                        strcpy(id,(yyvsp[(3) - (7)].ccval));
                                        strcat((yyvsp[(1) - (7)].ccval),"*");
                                        char *tipo = (char *)malloc((strlen((yyvsp[(1) - (7)].ccval)) + 1) * sizeof(char *));
                                        strcpy(tipo,(yyvsp[(1) - (7)].ccval));
                                        int cantidad = contarParametros(listaParametrosAux);
                                        int linea = yylineno;
                                        listaFunciones = validarFuncionYAgregarla(listaFunciones,listaParametrosAux, id,tipo,cantidad,linea);
                                        listaParametrosAux = NULL;
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 329 ".\\TpIntegrador.y"
    {
                                        char *id = (char *)malloc((strlen((yyvsp[(3) - (3)].ccval)) + 1) * sizeof(char *));
                                        strcpy(id,(yyvsp[(3) - (3)].ccval));
                                        char *tipo = (char *)malloc((strlen((yyvsp[(1) - (3)].ccval)) + 1) * sizeof(char *));
                                        strcpy(tipo,(yyvsp[(1) - (3)].ccval));
                                        listaParametrosAux = agregarVariable(listaParametrosAux,id,tipo);
        
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 337 ".\\TpIntegrador.y"
    {
                                        char *id = (char *)malloc((strlen((yyvsp[(4) - (4)].ccval)) + 1) * sizeof(char *));
                                        strcpy(id,(yyvsp[(4) - (4)].ccval));
                                        strcat((yyvsp[(1) - (4)].ccval),"*");
                                        char *tipo = (char *)malloc((strlen((yyvsp[(1) - (4)].ccval)) + 1) * sizeof(char *));
                                        strcpy(tipo,(yyvsp[(1) - (4)].ccval));
                                        listaParametrosAux = agregarVariable(listaParametrosAux,id,tipo);

;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 353 ".\\TpIntegrador.y"
    {printf ("\nSe encontro la funcion %s de tipo %s\n ", (yyvsp[(2) - (6)].ccval), (yyvsp[(1) - (6)].ccval));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 374 ".\\TpIntegrador.y"
    {printf("Sentencia compuesta encontrada.\n"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 375 ".\\TpIntegrador.y"
    {printf("Sentencia compuesta encontrada.\n"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 396 ".\\TpIntegrador.y"
    {printf("Sentencia de seleccion If encontrada.\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 397 ".\\TpIntegrador.y"
    {printf("Sentencia de seleccion switch encontrada.\n"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 401 ".\\TpIntegrador.y"
    {printf("Sentencia de seleccion If-Else encontrada.\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 405 ".\\TpIntegrador.y"
    {printf("Sentencia de Iteracion while encontrada.\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 406 ".\\TpIntegrador.y"
    {printf("Sentencia de Iteracion do while encontrada.\n"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 407 ".\\TpIntegrador.y"
    {printf("Sentencia de Iteracion for encontrada.\n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 411 ".\\TpIntegrador.y"
    {printf("Sentencia de salto return encontrada.\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 412 ".\\TpIntegrador.y"
    {printf("Sentencia de salto continue encontrada.\n"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 413 ".\\TpIntegrador.y"
    {printf("Sentencia de salto break encontrada.\n"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 414 ".\\TpIntegrador.y"
    {printf("Sentencia de salto goto encontrada.\n"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 418 ".\\TpIntegrador.y"
    {printf("Sentencia de etiqueta case encontrada.\n"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 419 ".\\TpIntegrador.y"
    {printf("Sentencia de etiqueta default encontrada.\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1959 "TpIntegrador.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 429 ".\\TpIntegrador.y"



int yyerror (char *mensajeError){  //tambien ver como hay que manerjarlo en el archivo de salida o si es necesario (todavia no me fije)
        fprintf(yyout, "Se encontro un error sintatico\n ", mensajeError);
}


//La TS es global no hace falta ingresarla en putVariable

int main (){


yyin = fopen("Entrada.c","r");
yyout= fopen("Salida.txt", "w");
yyparse();
mostrarListaErroresLexicos(listaErroresLexicos);
printf("\n\n\n");
mostrarListaErroresSemanticos(listaErroresSemanticos);
printf("\n\n\n");
mostrarListaErroresSintacticos(listaErroresSintacticos);
printf("\n\n\n");
mostrarListaVariables(listaVariables);
mostrarListaFunciones(listaFunciones);




}
