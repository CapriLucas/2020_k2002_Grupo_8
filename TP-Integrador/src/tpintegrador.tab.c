
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
#line 1 "tpintegrador.y"

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
#line 96 "tpintegrador.tab.c"

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
     STRUNION = 272,
     CALTIPO = 273,
     OPDESIGUAL = 274,
     OPERADORUNARIO = 275,
     ENUM = 276,
     IF = 277,
     ELSE = 278,
     SIZEOF = 279,
     SWITCH = 280,
     WHILE = 281,
     DO = 282,
     FOR = 283,
     RETURN = 284,
     CONTINUE = 285,
     GOTO = 286,
     BREAK = 287,
     CASE = 288,
     DEFAULT = 289,
     DIRECTIVA = 290,
     CNORECONOCIDO = 291,
     errorLexico = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 26 "tpintegrador.y"

char ccval[20]; // cadenas
double dval; // numeros reales/racionales
int ival; // numeros enteros
int tipo;



/* Line 214 of yacc.c  */
#line 178 "tpintegrador.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 190 "tpintegrador.tab.c"

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
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    44,    53,     2,
      45,    46,    42,    40,    50,    41,    49,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    52,
       2,     2,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     2,    55,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    25,    27,    33,    35,    39,    41,    45,    47,
      51,    53,    57,    59,    63,    67,    69,    73,    77,    81,
      83,    86,    91,    93,    98,   103,   107,   111,   114,   115,
     117,   121,   123,   125,   127,   129,   133,   135,   137,   139,
     141,   144,   147,   151,   155,   157,   160,   164,   166,   170,
     173,   174,   177,   184,   192,   193,   197,   203,   204,   206,
     213,   216,   218,   220,   222,   224,   226,   228,   231,   238,
     244,   245,   247,   250,   251,   253,   256,   258,   261,   268,
     274,   275,   278,   284,   292,   302,   306,   309,   312,   316,
     321,   325,   329,   330
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    -1,    57,    58,    -1,    72,    -1,    84,
      -1,    59,    -1,    37,    -1,     1,    -1,    60,    -1,    61,
      -1,    68,     8,    60,    -1,    62,    -1,    62,    38,    59,
      39,    61,    -1,    63,    -1,    62,     9,    63,    -1,    64,
      -1,    63,    10,    64,    -1,    65,    -1,    64,    11,    65,
      -1,    66,    -1,    65,    12,    66,    -1,    67,    -1,    66,
      40,    67,    -1,    66,    41,    67,    -1,    68,    -1,    67,
      42,    68,    -1,    67,    43,    68,    -1,    67,    44,    68,
      -1,    69,    -1,    13,    68,    -1,    24,    45,    14,    46,
      -1,    71,    -1,    69,    47,    59,    48,    -1,    69,    45,
      70,    46,    -1,    69,    49,     5,    -1,    69,    16,     5,
      -1,    69,    13,    -1,    -1,    60,    -1,    70,    50,    60,
      -1,     5,    -1,     3,    -1,     4,    -1,     6,    -1,    45,
      59,    46,    -1,    51,    -1,    73,    -1,    80,    -1,    83,
      -1,    14,    74,    -1,    77,    52,    -1,    42,    77,    52,
      -1,     5,    75,    52,    -1,    76,    -1,    75,    76,    -1,
      47,    59,    48,    -1,    78,    -1,    77,    50,    78,    -1,
       5,    79,    -1,    -1,     8,    61,    -1,    14,     5,    45,
      81,    46,    52,    -1,    14,    42,     5,    45,    81,    46,
      52,    -1,    -1,    14,    82,     5,    -1,    14,    82,     5,
      50,    81,    -1,    -1,    53,    -1,    14,     5,    45,    81,
      46,    84,    -1,    85,    51,    -1,    86,    -1,    90,    -1,
      92,    -1,    93,    -1,    94,    -1,    52,    -1,    59,    52,
      -1,    54,    87,    51,    88,    55,    51,    -1,    54,    87,
      88,    55,    51,    -1,    -1,    72,    -1,    87,    72,    -1,
      -1,    84,    -1,    89,    84,    -1,    84,    -1,    89,    84,
      -1,    22,    45,    59,    46,    84,    91,    -1,    25,    45,
      59,    46,    84,    -1,    -1,    23,    84,    -1,    26,    45,
      59,    46,    84,    -1,    27,    84,    26,    45,    59,    46,
      52,    -1,    28,    45,    95,    52,    95,    52,    95,    46,
      84,    -1,    29,    95,    52,    -1,    30,    52,    -1,    32,
      52,    -1,    31,     5,    52,    -1,    33,    61,    39,    84,
      -1,    34,    39,    84,    -1,     5,    39,    84,    -1,    -1,
      59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    74,    78,    79,    80,    81,    82,    87,
      90,    91,    95,    96,    98,    99,   101,   102,   104,   105,
     112,   113,   124,   125,   139,   141,   142,   143,   144,   148,
     149,   150,   154,   155,   156,   157,   158,   159,   162,   163,
     164,   166,   167,   168,   169,   170,   182,   183,   184,   185,
     188,   190,   191,   192,   194,   195,   197,   199,   200,   203,
     206,   207,   211,   212,   215,   216,   217,   220,   221,   224,
     233,   234,   235,   236,   237,   238,   241,   242,   245,   246,
     250,   251,   252,   255,   256,   257,   260,   261,   267,   268,
     271,   272,   276,   277,   278,   282,   283,   284,   285,   289,
     290,   291,   294,   295
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CENTERO", "CREAL", "ID", "LCADENA",
  "CCARACTER", "OPASIG", "OR", "AND", "OPIGUAL", "OPREL", "OPINCDEC",
  "T_DATO", "TCLASE", "FLECHA", "STRUNION", "CALTIPO", "OPDESIGUAL",
  "OPERADORUNARIO", "ENUM", "IF", "ELSE", "SIZEOF", "SWITCH", "WHILE",
  "DO", "FOR", "RETURN", "CONTINUE", "GOTO", "BREAK", "CASE", "DEFAULT",
  "DIRECTIVA", "CNORECONOCIDO", "errorLexico", "'?'", "':'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'('", "')'", "'['", "']'", "'.'", "','", "'\\n'",
  "';'", "'&'", "'{'", "'}'", "$accept", "input", "line", "expresion",
  "expresionAsignacion", "expresionCondicional", "expresionOr",
  "expresionAnd", "expresionIgualdad", "expresionRelacional",
  "expresionAditiva", "expresionMultiplicativa", "expresionUnaria",
  "expresionPostFijo", "listaArgumentos", "expresionPrimaria",
  "declaracion", "declaracionDeVariables", "declaracionDeVariablesPuntero",
  "listaArreglos", "arreglo", "listaVariablesSimples", "variableSimple",
  "inicializador", "declaracionDeFunciones", "opcionArgumentos",
  "referencia", "definicionDeFuncion", "sentencia", "sentenciaExpresion",
  "sentenciaCompuesta", "listaDeclaracionesOpcional",
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
     285,   286,   287,   288,   289,   290,   291,   292,    63,    58,
      43,    45,    42,    47,    37,    40,    41,    91,    93,    46,
      44,    10,    59,    38,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      73,    74,    74,    74,    75,    75,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    81,    81,    82,    82,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    88,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    93,    93,    93,    93,    94,
      94,    94,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     4,     1,     4,     4,     3,     3,     2,     0,     1,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     2,     3,     1,     3,     2,
       0,     2,     6,     7,     0,     3,     5,     0,     1,     6,
       2,     1,     1,     1,     1,     1,     1,     2,     6,     5,
       0,     1,     2,     0,     1,     2,     1,     2,     6,     5,
       0,     2,     5,     7,     9,     3,     2,     2,     3,     4,
       3,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     8,    42,    43,    41,    44,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     7,     0,    46,    76,    80,     3,     6,     9,
      10,    12,    14,    16,    18,    20,    22,    25,    29,    32,
       4,    47,    48,    49,     5,     0,    71,    72,    73,    74,
      75,     0,    41,    30,    60,     0,    50,     0,    57,     0,
       0,     0,     0,     0,     0,   102,   103,     0,    96,     0,
      97,     0,    25,     0,     0,    81,    83,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    38,     0,     0,    70,   101,     0,    64,     0,     0,
      54,    59,    60,     0,     0,    51,     0,     0,     0,     0,
       0,     0,    95,    98,     0,   100,    45,    46,    82,    86,
       0,     0,    15,     0,    17,    19,    21,    23,    24,    26,
      27,    28,    11,    36,    39,     0,     0,    35,    61,    67,
       0,     0,    53,    55,    64,    52,    60,    58,     0,    31,
       0,     0,     0,   102,    99,     0,     0,    87,     0,    34,
       0,    33,    68,     0,     0,    56,     0,    90,    89,    92,
       0,     0,     0,    79,    13,    40,    65,    62,    69,     0,
       0,    88,     0,   102,    78,    64,    63,    91,    93,     0,
      66,     0,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    27,    63,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,   135,    39,    40,    41,    56,    99,
     100,    57,    58,   101,    42,   140,   163,    43,   119,    45,
      46,    76,   120,   121,    47,   181,    48,    49,    50,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -135
static const yytype_int16 yypact[] =
{
    -135,   167,  -135,  -135,  -135,  -135,   -31,  -135,    98,    10,
     -34,   -28,   -23,   -20,   103,   -13,    98,   -14,    48,     6,
      98,    35,  -135,    98,  -135,  -135,    12,  -135,    31,  -135,
    -135,    -2,    84,    85,    83,    36,    13,    89,   129,  -135,
    -135,  -135,  -135,  -135,  -135,    54,  -135,  -135,  -135,  -135,
    -135,   103,  -135,  -135,    23,    94,  -135,   -17,  -135,    98,
      96,    98,    98,    31,    86,    98,  -135,    62,  -135,    63,
    -135,    78,  -135,   103,    72,  -135,    15,  -135,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,  -135,
     114,    98,    98,   116,  -135,  -135,    98,   110,    98,   -38,
    -135,  -135,    19,    21,   121,  -135,    92,    93,    95,   100,
      99,   102,  -135,  -135,   103,  -135,  -135,   103,  -135,   101,
     104,   103,    84,   112,    85,    83,    36,    13,    13,  -135,
    -135,  -135,  -135,  -135,  -135,   -16,   113,  -135,  -135,   105,
     118,   117,  -135,  -135,   110,  -135,   152,  -135,   103,  -135,
     103,   103,    98,    98,  -135,   111,   124,   122,    98,  -135,
      98,  -135,  -135,   164,   202,  -135,   136,   161,  -135,  -135,
     139,   134,   137,  -135,  -135,  -135,   153,  -135,  -135,   135,
     103,  -135,   150,    98,  -135,   110,  -135,  -135,  -135,   163,
    -135,   103,  -135
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,     0,   -85,   -18,  -135,   132,   131,   133,
     138,    -3,     4,  -135,  -135,  -135,   -22,  -135,  -135,  -135,
     123,   158,   119,  -135,  -135,  -134,  -135,  -135,    -1,  -135,
    -135,  -135,   108,  -135,  -135,  -135,  -135,  -135,  -135,   -60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      44,    28,    71,   132,    75,   111,   134,    78,    51,    98,
     166,    59,    53,    64,   142,    54,    66,    60,     4,     5,
       6,     7,    61,    74,    72,    62,     9,    96,     8,     9,
     159,    96,    65,   104,   160,   105,    79,    10,    68,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      95,   190,    55,    69,   118,    85,    86,    87,    70,   106,
      23,   108,   109,    24,   144,    66,   117,    25,    97,    26,
      98,   104,   115,   145,    73,   175,    83,    84,   138,   123,
     127,   128,    72,    77,    72,    72,    72,    72,    72,   129,
     130,   131,   136,   171,    80,    82,    81,    88,   141,   102,
      72,     4,     5,    52,     7,    94,     4,     5,     6,     7,
     107,     8,   110,   154,   112,   113,     8,   114,   116,   133,
     157,   137,    11,   189,   139,    10,   146,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   148,   149,
     174,   150,    89,    23,   152,    90,   151,   167,    23,   168,
     169,   158,   170,    66,   153,    25,   -84,    26,   162,   156,
      96,   161,    72,   178,   164,   165,   172,     2,     3,   176,
       4,     5,     6,     7,    91,   173,    92,   -85,    93,   187,
       8,     9,   179,    66,   180,   182,   183,   186,   184,    10,
     192,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   188,   185,    22,     4,     5,     6,     7,   191,
     122,   124,    23,   103,   125,     8,     0,     0,    24,    25,
     126,    26,   143,   147,    10,   155,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,   177,     0,    26
};

static const yytype_int16 yycheck[] =
{
       1,     1,    20,    88,    26,    65,    91,     9,    39,    47,
     144,    45,     8,    14,    52,     5,    16,    45,     3,     4,
       5,     6,    45,    23,    20,    45,    14,     8,    13,    14,
      46,     8,    45,    50,    50,    52,    38,    22,    52,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      51,   185,    42,     5,    76,    42,    43,    44,    52,    59,
      45,    61,    62,    51,    45,    65,    51,    52,    45,    54,
      47,    50,    73,    52,    39,   160,    40,    41,    96,    79,
      83,    84,    78,    52,    80,    81,    82,    83,    84,    85,
      86,    87,    92,   153,    10,    12,    11,     8,    98,     5,
      96,     3,     4,     5,     6,    51,     3,     4,     5,     6,
      14,    13,    26,   114,    52,    52,    13,    39,    46,     5,
     121,     5,    24,   183,    14,    22,     5,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    46,    46,
     158,    46,    13,    45,    45,    16,    46,   148,    45,   150,
     151,    39,   152,   153,    52,    52,    55,    54,    53,    55,
       8,    48,   158,   164,    46,    48,    55,     0,     1,     5,
       3,     4,     5,     6,    45,    51,    47,    55,    49,   180,
      13,    14,    46,   183,    23,    46,    52,    52,    51,    22,
     191,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    52,    50,    37,     3,     4,     5,     6,    46,
      78,    80,    45,    55,    81,    13,    -1,    -1,    51,    52,
      82,    54,    99,   104,    22,   117,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,     0,     1,     3,     4,     5,     6,    13,    14,
      22,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    37,    45,    51,    52,    54,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    71,
      72,    73,    80,    83,    84,    85,    86,    90,    92,    93,
      94,    39,     5,    68,     5,    42,    74,    77,    78,    45,
      45,    45,    45,    59,    84,    45,    59,    95,    52,     5,
      52,    61,    68,    39,    59,    72,    87,    52,     9,    38,
      10,    11,    12,    40,    41,    42,    43,    44,     8,    13,
      16,    45,    47,    49,    51,    84,     8,    45,    47,    75,
      76,    79,     5,    77,    50,    52,    59,    14,    59,    59,
      26,    95,    52,    52,    39,    84,    46,    51,    72,    84,
      88,    89,    63,    59,    64,    65,    66,    67,    67,    68,
      68,    68,    60,     5,    60,    70,    59,     5,    61,    14,
      81,    59,    52,    76,    45,    52,     5,    78,    46,    46,
      46,    46,    45,    52,    84,    88,    55,    84,    39,    46,
      50,    48,    53,    82,    46,    48,    81,    84,    84,    84,
      59,    95,    55,    51,    61,    60,     5,    52,    84,    46,
      23,    91,    46,    52,    51,    50,    52,    84,    52,    95,
      81,    46,    84
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
#line 81 "tpintegrador.y"
    {printf("Se encontro un error lexico en la linea %d\n ", yylineno);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "tpintegrador.y"
    {printf("\nSe encontro un error sintactico en la linea %d. Imposible emparejar por alguna produccion\n", yylineno);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 125 "tpintegrador.y"
    {  if((yyvsp[(1) - (3)].tipo)==(yyvsp[(3) - (3)].tipo)) { 
                                                        if((yyvsp[(1) - (3)].tipo)==1){
                                                        (yyval.ival)=(yyvsp[(1) - (3)].ival)+(yyvsp[(3) - (3)].ival);
                                                        printf("El resultado es: %d\n",(yyval.ival));
                                                        }
                                                        else{
                                                        (yyval.dval)=(yyvsp[(1) - (3)].dval)+(yyvsp[(3) - (3)].dval);
                                                        printf("El resultado es: %f\n",(yyval.dval));
                                                        }
                                                           } else {
                                                                printf("Error semantico en la linea . Los operandos son de distinto tipo \n");
                                                                }
                                                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 141 "tpintegrador.y"
    {(yyval.ival)=(yyvsp[(1) - (1)].ival);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 148 "tpintegrador.y"
    {(yyval.ival)=(yyvsp[(1) - (1)].ival);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 154 "tpintegrador.y"
    {(yyval.ival)=(yyvsp[(1) - (1)].ival);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 167 "tpintegrador.y"
    {(yyval.ival)=(yyvsp[(1) - (1)].ival);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 188 "tpintegrador.y"
    {printf(" de tipo %s%s.\n", (yyvsp[(1) - (2)].ccval),(yyvsp[(2) - (2)].ccval));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 190 "tpintegrador.y"
    {strcpy((yyval.ccval), "");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 191 "tpintegrador.y"
    {strcpy((yyval.ccval), "*");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 192 "tpintegrador.y"
    {strcpy((yyval.ccval), "");printf ("\nSe encontro la variable arreglo %s", (yyvsp[(1) - (3)].ccval));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 199 "tpintegrador.y"
    {printf ("\nSe encontro la variable %s", (yyval.ccval));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 203 "tpintegrador.y"
    {strcpy((yyval.ccval), (yyvsp[(1) - (2)].ccval));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 211 "tpintegrador.y"
    {printf ("\nSe encontro la funcion %s de tipo %s\n", (yyvsp[(2) - (6)].ccval), (yyvsp[(1) - (6)].ccval));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 212 "tpintegrador.y"
    {printf ("\nSe encontro la funcion %s de tipo %s*\n", (yyvsp[(3) - (7)].ccval), (yyvsp[(1) - (7)].ccval));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 224 "tpintegrador.y"
    {printf ("\nSe encontro la funcion %s de tipo %s\n ", (yyvsp[(2) - (6)].ccval), (yyvsp[(1) - (6)].ccval));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 245 "tpintegrador.y"
    {printf("Sentencia compuesta encontrada.\n"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 246 "tpintegrador.y"
    {printf("Sentencia compuesta encontrada.\n"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 267 "tpintegrador.y"
    {printf("Sentencia de seleccion If encontrada.\n"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 268 "tpintegrador.y"
    {printf("Sentencia de seleccion switch encontrada.\n"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 272 "tpintegrador.y"
    {printf("Sentencia de seleccion If-Else encontrada.\n"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 276 "tpintegrador.y"
    {printf("Sentencia de Iteracion while encontrada.\n"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 277 "tpintegrador.y"
    {printf("Sentencia de Iteracion do while encontrada.\n"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 278 "tpintegrador.y"
    {printf("Sentencia de Iteracion for encontrada.\n"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 282 "tpintegrador.y"
    {printf("Sentencia de salto return encontrada.\n"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 283 "tpintegrador.y"
    {printf("Sentencia de salto continue encontrada.\n"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 284 "tpintegrador.y"
    {printf("Sentencia de salto break encontrada.\n"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 285 "tpintegrador.y"
    {printf("Sentencia de salto goto encontrada.\n"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 289 "tpintegrador.y"
    {printf("Sentencia de etiqueta case encontrada.\n"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 290 "tpintegrador.y"
    {printf("Sentencia de etiqueta default encontrada.\n"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1802 "tpintegrador.tab.c"
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
#line 300 "tpintegrador.y"



int yyerror (char *mensajeError){  //tambien ver como hay que manerjarlo en el archivo de salida o si es necesario (todavia no me fije)
        fprintf(yyout, "Se encontro un error sintatico\n ", mensajeError);
}


//La TS es global no hace falta ingresarla en putVariable

int main (){
//funciones y menu
TS = inicializarTS();
TS = putVariable(TS,"hola","int");
printListVar();
yyin = fopen("Entrada.c","r");
yyout= fopen("Salida.txt", "w");
yyparse();


}