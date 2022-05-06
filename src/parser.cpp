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
#line 1 "sql.y"

	#include <iostream>
	#include <string>
	#include <vector>
    #include <bits/stdc++.h>
	#include "node.h"
    #include "sql.h"
	extern int yylex();
	int yyerror(const char*);
    extern FILE* yyin;

#line 83 "src/parser.cpp"

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

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CREATE = 3,                     /* CREATE  */
  YYSYMBOL_TABLE = 4,                      /* TABLE  */
  YYSYMBOL_CHECK = 5,                      /* CHECK  */
  YYSYMBOL_PRIMARY = 6,                    /* PRIMARY  */
  YYSYMBOL_KEY = 7,                        /* KEY  */
  YYSYMBOL_FOREIGN = 8,                    /* FOREIGN  */
  YYSYMBOL_REFERENCES = 9,                 /* REFERENCES  */
  YYSYMBOL_CHAR = 10,                      /* CHAR  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_DECIMAL = 12,                   /* DECIMAL  */
  YYSYMBOL_OPEN_PAR = 13,                  /* OPEN_PAR  */
  YYSYMBOL_CLOSE_PAR = 14,                 /* CLOSE_PAR  */
  YYSYMBOL_SEMICOLON = 15,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 16,                     /* COMMA  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_LE = 21,                        /* LE  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_E = 23,                         /* E  */
  YYSYMBOL_NE = 24,                        /* NE  */
  YYSYMBOL_DESCRIBE = 25,                  /* DESCRIBE  */
  YYSYMBOL_DROP = 26,                      /* DROP  */
  YYSYMBOL_INSERT = 27,                    /* INSERT  */
  YYSYMBOL_INTO = 28,                      /* INTO  */
  YYSYMBOL_VALUES = 29,                    /* VALUES  */
  YYSYMBOL_DELETE = 30,                    /* DELETE  */
  YYSYMBOL_FROM = 31,                      /* FROM  */
  YYSYMBOL_WHERE = 32,                     /* WHERE  */
  YYSYMBOL_UPDATE = 33,                    /* UPDATE  */
  YYSYMBOL_SET = 34,                       /* SET  */
  YYSYMBOL_SELECT = 35,                    /* SELECT  */
  YYSYMBOL_HELP = 36,                      /* HELP  */
  YYSYMBOL_TABLES = 37,                    /* TABLES  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 39,                    /* STRING  */
  YYSYMBOL_NUMBER = 40,                    /* NUMBER  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_statements = 43,                /* statements  */
  YYSYMBOL_statement = 44,                 /* statement  */
  YYSYMBOL_create_stmt = 45,               /* create_stmt  */
  YYSYMBOL_primary_key = 46,               /* primary_key  */
  YYSYMBOL_foreign_keys = 47,              /* foreign_keys  */
  YYSYMBOL_foreign_key = 48,               /* foreign_key  */
  YYSYMBOL_columns = 49,                   /* columns  */
  YYSYMBOL_column = 50,                    /* column  */
  YYSYMBOL_definitions = 51,               /* definitions  */
  YYSYMBOL_definition = 52,                /* definition  */
  YYSYMBOL_attr_type = 53,                 /* attr_type  */
  YYSYMBOL_expr = 54,                      /* expr  */
  YYSYMBOL_or_expr = 55,                   /* or_expr  */
  YYSYMBOL_and_expr = 56,                  /* and_expr  */
  YYSYMBOL_condition = 57,                 /* condition  */
  YYSYMBOL_describe_stmt = 58,             /* describe_stmt  */
  YYSYMBOL_drop_stmt = 59,                 /* drop_stmt  */
  YYSYMBOL_insert_stmt = 60,               /* insert_stmt  */
  YYSYMBOL_list_values = 61,               /* list_values  */
  YYSYMBOL_list_value = 62,                /* list_value  */
  YYSYMBOL_delete_stmt = 63,               /* delete_stmt  */
  YYSYMBOL_sexpr = 64,                     /* sexpr  */
  YYSYMBOL_sor_expr = 65,                  /* sor_expr  */
  YYSYMBOL_sand_expr = 66,                 /* sand_expr  */
  YYSYMBOL_scond_b = 67,                   /* scond_b  */
  YYSYMBOL_diff_value = 68,                /* diff_value  */
  YYSYMBOL_diff_value_without_identifier = 69, /* diff_value_without_identifier  */
  YYSYMBOL_update_stmt = 70,               /* update_stmt  */
  YYSYMBOL_update_values = 71,             /* update_values  */
  YYSYMBOL_update_value = 72,              /* update_value  */
  YYSYMBOL_select_stmt = 73,               /* select_stmt  */
  YYSYMBOL_table_list = 74,                /* table_list  */
  YYSYMBOL_help_tables = 75                /* help_tables  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    78,    81,    82,    83,    84,    85,    86,
      87,    88,    91,   110,   117,   120,   121,   123,   128,   129,
     131,   135,   139,   145,   146,   152,   153,   154,   155,   156,
     162,   163,   164,   171,   176,   178,   179,   180,   181,   182,
     183,   184,   190,   205,   227,   240,   244,   250,   253,   257,
     268,   277,   278,   279,   286,   293,   298,   303,   308,   313,
     317,   321,   326,   331,   337,   340,   346,   353,   366,   375,
     376,   382,   395,   400,   409,   417
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CREATE", "TABLE",
  "CHECK", "PRIMARY", "KEY", "FOREIGN", "REFERENCES", "CHAR", "INT",
  "DECIMAL", "OPEN_PAR", "CLOSE_PAR", "SEMICOLON", "COMMA", "OR", "AND",
  "GE", "GT", "LE", "LT", "E", "NE", "DESCRIBE", "DROP", "INSERT", "INTO",
  "VALUES", "DELETE", "FROM", "WHERE", "UPDATE", "SET", "SELECT", "HELP",
  "TABLES", "IDENTIFIER", "STRING", "NUMBER", "FLOAT", "$accept",
  "statements", "statement", "create_stmt", "primary_key", "foreign_keys",
  "foreign_key", "columns", "column", "definitions", "definition",
  "attr_type", "expr", "or_expr", "and_expr", "condition", "describe_stmt",
  "drop_stmt", "insert_stmt", "list_values", "list_value", "delete_stmt",
  "sexpr", "sor_expr", "sand_expr", "scond_b", "diff_value",
  "diff_value_without_identifier", "update_stmt", "update_values",
  "update_value", "select_stmt", "table_list", "help_tables", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      13,     4,   -28,    16,   -11,    -2,    -5,     3,     8,     1,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,    43,
      55,    44,    45,    46,    51,   -44,    -7,   -44,    71,   -44,
     -44,    34,   -44,    72,    59,    58,    53,     3,    54,   -44,
      56,   -44,    76,    -8,    70,   -14,   -44,   -44,   -44,   -10,
      57,    79,   -44,    32,    -8,    31,    81,    80,    82,   -44,
      35,    53,    -8,    60,    -8,    86,    88,    89,    98,    -3,
     -44,   -44,   -44,     9,   -44,    90,   -26,   -26,   -26,   -26,
     -26,   -26,   -44,    -8,    -8,   -44,   -44,   -44,   -44,   -44,
      91,   -44,    92,    65,    68,    69,    -6,   103,    28,   -44,
      96,    32,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,    82,   -44,   -44,   -44,    99,   100,   101,    -6,    37,
     -44,    95,   102,   -44,   104,   106,   108,   -44,   -44,   -44,
     -44,   -44,   105,    78,    84,    85,    87,    93,    94,    -6,
      -6,     3,   -44,   115,    63,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   102,   -44,    64,   113,   114,   108,   -44,
       3,   -44,   -44,   117,   119,    97,   123,     3,   118,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,     0,    20,     0,    18,     0,     1,
       3,     0,    42,     0,     0,     0,     0,     0,     0,    75,
       0,    43,     0,     0,     0,     0,    69,    19,    73,     0,
       0,     0,    21,     0,     0,     0,     0,    51,    52,    55,
       0,     0,     0,     0,     0,     0,    28,    29,    23,     0,
      49,    47,    48,     0,    45,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    65,    66,    67,    71,    70,
       0,    74,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,    62,    63,    56,    64,    57,    60,    59,    61,
      58,    53,    54,    68,    72,     0,     0,     0,     0,     0,
      24,    30,    31,    34,     0,     0,     0,    44,    46,    25,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,    15,    41,    35,    36,    39,
      38,    40,    37,    32,    33,     0,     0,     0,     0,    14,
       0,    12,    16,     0,     0,     0,     0,     0,     0,    17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   128,   -44,   -44,   -44,   -20,    -1,   -37,   -44,
      73,   -44,    21,   -44,     2,     5,   -44,   -44,   -44,   -44,
      42,   -44,   -43,   -44,    61,    62,   -15,   107,   -44,   -44,
     109,   -44,   -44,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     9,    10,    11,    98,   144,   145,    26,    27,    51,
      52,    68,   120,   121,   122,   123,    12,    13,    14,    73,
      74,    15,    56,    57,    58,    59,   104,   105,    16,    45,
      46,    17,    49,    18
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    29,    61,    97,     1,    54,    63,   118,    19,    37,
      20,    75,   103,    85,    86,    87,     1,    22,    62,    90,
      21,    92,    64,   100,    38,   101,     2,     3,     4,    23,
      55,     5,   119,    24,     6,    50,     7,     8,     2,     3,
       4,    25,   125,     5,   126,    28,     6,    40,     7,     8,
      76,    77,    78,    79,    80,    81,   133,   134,   135,   136,
     137,   138,   106,   107,   108,   109,   110,    65,    66,    67,
      32,    70,    71,    72,    85,    86,    87,   157,   159,   158,
      37,    31,    33,    34,    35,    36,    39,    41,    42,    53,
      43,    44,    48,    60,    50,    69,    82,    83,    91,    93,
      84,    94,    95,    96,   102,   115,   113,   114,   116,   117,
     124,   127,   139,   129,   130,   131,   143,   141,   147,   146,
     140,   142,   156,   163,   148,   149,   160,   150,   165,   161,
     168,   164,   169,   151,   152,   166,   167,    30,   162,   132,
     155,   153,    99,   128,   111,   154,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      89
};

static const yytype_int16 yycheck[] =
{
      37,     0,    16,     6,     3,    13,    16,    13,     4,    16,
      38,    54,    38,    39,    40,    41,     3,    28,    32,    62,
       4,    64,    32,    14,    31,    16,    25,    26,    27,    31,
      38,    30,    38,    38,    33,    38,    35,    36,    25,    26,
      27,    38,    14,    30,    16,    37,    33,    13,    35,    36,
      19,    20,    21,    22,    23,    24,    19,    20,    21,    22,
      23,    24,    77,    78,    79,    80,    81,    10,    11,    12,
      15,    39,    40,    41,    39,    40,    41,    14,    14,    16,
      16,    38,    38,    38,    38,    34,    15,    15,    29,    13,
      32,    38,    38,    23,    38,    16,    15,    17,    38,    13,
      18,    13,    13,     5,    14,    40,    15,    15,    40,    40,
       7,    15,    17,    14,    14,    14,     8,    13,    40,    14,
      18,    15,     7,   160,    40,    40,    13,    40,     9,    15,
     167,    14,    14,    40,    40,    38,    13,     9,   158,   118,
     141,   139,    69,   101,    83,   140,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    26,    27,    30,    33,    35,    36,    43,
      44,    45,    58,    59,    60,    63,    70,    73,    75,     4,
      38,     4,    28,    31,    38,    38,    49,    50,    37,     0,
      44,    38,    15,    38,    38,    38,    34,    16,    31,    15,
      13,    15,    29,    32,    38,    71,    72,    50,    38,    74,
      38,    51,    52,    13,    13,    38,    64,    65,    66,    67,
      23,    16,    32,    16,    32,    10,    11,    12,    53,    16,
      39,    40,    41,    61,    62,    64,    19,    20,    21,    22,
      23,    24,    15,    17,    18,    39,    40,    41,    69,    72,
      64,    38,    64,    13,    13,    13,     5,     6,    46,    52,
      14,    16,    14,    38,    68,    69,    68,    68,    68,    68,
      68,    66,    67,    15,    15,    40,    40,    40,    13,    38,
      54,    55,    56,    57,     7,    14,    16,    15,    62,    14,
      14,    14,    54,    19,    20,    21,    22,    23,    24,    17,
      18,    13,    15,     8,    47,    48,    14,    40,    40,    40,
      40,    40,    40,    56,    57,    49,     7,    14,    16,    14,
      13,    15,    48,    50,    14,     9,    38,    13,    50,    14
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    44,    44,    44,    44,
      44,    44,    45,    45,    46,    47,    47,    48,    49,    49,
      50,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    58,    59,    60,    61,    61,    62,    62,    62,
      63,    64,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    69,    69,    69,    70,    71,
      71,    72,    73,    74,    74,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,    11,     9,     5,     1,     3,    10,     1,     3,
       1,     1,     3,     2,     4,     4,     4,     4,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     8,     1,     3,     1,     1,     1,
       6,     1,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     7,     1,
       3,     3,     7,     1,     3,     3
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
  case 12: /* create_stmt: CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key COMMA foreign_keys CLOSE_PAR SEMICOLON  */
#line 92 "sql.y"
                { // i need to check whether the table exist 
			// if so then the raise an error
			// otherwise i need to create the table
            add_reference_attr((yyvsp[-2].refer_list),*(yyvsp[-8].string));
            
            raise_foreign_key((yyvsp[-6].cols),(yyvsp[-2].refer_list));
            raise_primary_key((yyvsp[-6].cols),(yyvsp[-4].string_array));
            create_table(*(yyvsp[-8].string),(yyvsp[-6].cols));

            // this is for deleting stuff
            for(col* column : *(yyvsp[-6].cols))
                delete column;
            delete (yyvsp[-6].cols);
            delete (yyvsp[-4].string_array);
            delete (yyvsp[-2].refer_list);

            
	}
#line 1272 "src/parser.cpp"
    break;

  case 13: /* create_stmt: CREATE TABLE IDENTIFIER OPEN_PAR definitions COMMA primary_key CLOSE_PAR SEMICOLON  */
#line 111 "sql.y"
    {
        raise_primary_key((yyvsp[-4].cols),(yyvsp[-2].string_array));
        create_table(*(yyvsp[-6].string),(yyvsp[-4].cols));
    }
#line 1281 "src/parser.cpp"
    break;

  case 14: /* primary_key: PRIMARY KEY OPEN_PAR columns CLOSE_PAR  */
#line 117 "sql.y"
                                                   {  (yyval.string_array)=(yyvsp[-1].string_array);  }
#line 1287 "src/parser.cpp"
    break;

  case 15: /* foreign_keys: foreign_key  */
#line 120 "sql.y"
                          { (yyval.refer_list)=new reference_list;(yyval.refer_list)->push_back((yyvsp[0].refer)); }
#line 1293 "src/parser.cpp"
    break;

  case 16: /* foreign_keys: foreign_keys COMMA foreign_key  */
#line 121 "sql.y"
                                                   { (yyvsp[-2].refer_list)->push_back((yyvsp[0].refer)); (yyval.refer_list)=(yyvsp[-2].refer_list);  }
#line 1299 "src/parser.cpp"
    break;

  case 17: /* foreign_key: FOREIGN KEY OPEN_PAR column CLOSE_PAR REFERENCES IDENTIFIER OPEN_PAR column CLOSE_PAR  */
#line 124 "sql.y"
                { (yyval.refer)=new reference(*(yyvsp[-3].string),*(yyvsp[-1].string),*(yyvsp[-6].string)); delete (yyvsp[-3].string); delete (yyvsp[-1].string);delete (yyvsp[-6].string); }
#line 1305 "src/parser.cpp"
    break;

  case 18: /* columns: column  */
#line 128 "sql.y"
               {  (yyval.string_array)=new std::vector<std::string*>(); (yyval.string_array)->push_back((yyvsp[0].string));  }
#line 1311 "src/parser.cpp"
    break;

  case 19: /* columns: columns COMMA column  */
#line 129 "sql.y"
                                {  (yyvsp[-2].string_array)->push_back((yyvsp[0].string));(yyval.string_array)=(yyvsp[-2].string_array);  }
#line 1317 "src/parser.cpp"
    break;

  case 20: /* column: IDENTIFIER  */
#line 131 "sql.y"
                  { (yyval.string)=(yyvsp[0].string);}
#line 1323 "src/parser.cpp"
    break;

  case 21: /* definitions: definition  */
#line 135 "sql.y"
                       { 
           (yyval.cols)=new col_list;
           (yyval.cols)->push_back((yyvsp[0].column));
           }
#line 1332 "src/parser.cpp"
    break;

  case 22: /* definitions: definitions COMMA definition  */
#line 139 "sql.y"
                                               { 
            (yyvsp[-2].cols)->push_back((yyvsp[0].column));
            (yyval.cols)=(yyvsp[-2].cols);
        }
#line 1341 "src/parser.cpp"
    break;

  case 23: /* definition: IDENTIFIER attr_type  */
#line 145 "sql.y"
                                 { (yyvsp[0].column)->column_name=*(yyvsp[-1].string); (yyval.column)=(yyvsp[0].column); delete (yyvsp[-1].string); }
#line 1347 "src/parser.cpp"
    break;

  case 24: /* definition: IDENTIFIER attr_type CHECK expr  */
#line 146 "sql.y"
                                                  { (yyvsp[-2].column)->column_name=*(yyvsp[-3].string);
			(yyvsp[-2].column)->conditions=(yyvsp[0].condition); 
			(yyval.column)=(yyvsp[-2].column);
			delete (yyvsp[-3].string);
			}
#line 1357 "src/parser.cpp"
    break;

  case 25: /* attr_type: CHAR OPEN_PAR NUMBER CLOSE_PAR  */
#line 152 "sql.y"
                                                { (yyval.column)=new col(CHAR,(yyvsp[-1].ival),""); }
#line 1363 "src/parser.cpp"
    break;

  case 26: /* attr_type: INT OPEN_PAR NUMBER CLOSE_PAR  */
#line 153 "sql.y"
                                               { (yyval.column)=new col(INT,(yyvsp[-1].ival),""); }
#line 1369 "src/parser.cpp"
    break;

  case 27: /* attr_type: DECIMAL OPEN_PAR NUMBER CLOSE_PAR  */
#line 154 "sql.y"
                                                   { (yyval.column)=new col(DECIMAL,(yyvsp[-1].ival),""); }
#line 1375 "src/parser.cpp"
    break;

  case 28: /* attr_type: INT  */
#line 155 "sql.y"
                     { (yyval.column)=new col(INT,8,""); }
#line 1381 "src/parser.cpp"
    break;

  case 29: /* attr_type: DECIMAL  */
#line 156 "sql.y"
                         { (yyval.column)=new col(DECIMAL,8,""); }
#line 1387 "src/parser.cpp"
    break;

  case 30: /* expr: or_expr  */
#line 162 "sql.y"
              { (yyval.condition)=(yyvsp[0].condition);}
#line 1393 "src/parser.cpp"
    break;

  case 31: /* or_expr: and_expr  */
#line 163 "sql.y"
                 { (yyval.condition)=(yyvsp[0].condition);}
#line 1399 "src/parser.cpp"
    break;

  case 32: /* or_expr: or_expr OR and_expr  */
#line 164 "sql.y"
                                {  
		(yyval.condition)=new cond(OR,-1,"");
		(yyval.condition)->left=(yyvsp[-2].condition);
		(yyval.condition)->right=(yyvsp[0].condition);
		}
#line 1409 "src/parser.cpp"
    break;

  case 33: /* and_expr: and_expr AND condition  */
#line 171 "sql.y"
                                {
		(yyval.condition)=new cond(AND,-1,"");
		(yyval.condition)->left=(yyvsp[-2].condition);
		(yyval.condition)->right=(yyvsp[0].condition);
		}
#line 1419 "src/parser.cpp"
    break;

  case 34: /* and_expr: condition  */
#line 176 "sql.y"
                    { (yyval.condition)=(yyvsp[0].condition);}
#line 1425 "src/parser.cpp"
    break;

  case 35: /* condition: IDENTIFIER GE NUMBER  */
#line 178 "sql.y"
                                 { (yyval.condition)=new cond(GE,(yyvsp[0].ival),*(yyvsp[-2].string)); delete (yyvsp[-2].string); }
#line 1431 "src/parser.cpp"
    break;

  case 36: /* condition: IDENTIFIER GT NUMBER  */
#line 179 "sql.y"
                                       { (yyval.condition)=new cond(GT,(yyvsp[0].ival),*(yyvsp[-2].string)); delete (yyvsp[-2].string); }
#line 1437 "src/parser.cpp"
    break;

  case 37: /* condition: IDENTIFIER NE NUMBER  */
#line 180 "sql.y"
                                       { (yyval.condition)=new cond(NE,(yyvsp[0].ival),*(yyvsp[-2].string));	delete (yyvsp[-2].string); }
#line 1443 "src/parser.cpp"
    break;

  case 38: /* condition: IDENTIFIER LT NUMBER  */
#line 181 "sql.y"
                                       { (yyval.condition)=new cond(LT,(yyvsp[0].ival),*(yyvsp[-2].string));	delete (yyvsp[-2].string); }
#line 1449 "src/parser.cpp"
    break;

  case 39: /* condition: IDENTIFIER LE NUMBER  */
#line 182 "sql.y"
                                       { (yyval.condition)=new cond(LE,(yyvsp[0].ival),*(yyvsp[-2].string));	delete (yyvsp[-2].string); }
#line 1455 "src/parser.cpp"
    break;

  case 40: /* condition: IDENTIFIER E NUMBER  */
#line 183 "sql.y"
                                       { (yyval.condition)=new cond(E,(yyvsp[0].ival),*(yyvsp[-2].string)); 	delete (yyvsp[-2].string); }
#line 1461 "src/parser.cpp"
    break;

  case 41: /* condition: OPEN_PAR expr CLOSE_PAR  */
#line 184 "sql.y"
                                          { (yyval.condition)=(yyvsp[-1].condition);}
#line 1467 "src/parser.cpp"
    break;

  case 42: /* describe_stmt: DESCRIBE IDENTIFIER SEMICOLON  */
#line 191 "sql.y"
             {
                if(check_table(*(yyvsp[-1].string))==true)
                {
                    col_list* cols=get_table(*(yyvsp[-1].string));
                    display_table(cols);
                    for(col* column : *cols)
                        delete column;
                    delete cols;
                    
                }
                else
                    yyerror("The Table Does not exists");
             }
#line 1485 "src/parser.cpp"
    break;

  case 43: /* drop_stmt: DROP TABLE IDENTIFIER SEMICOLON  */
#line 206 "sql.y"
         {
                if(check_table(*(yyvsp[-1].string))==true)
                    {
                        drop_table(*(yyvsp[-1].string));
                        std::cout<<"Table Dropped successfully\n";
                    }
                else
                    yyerror("The Table Does not exists");

         }
#line 1500 "src/parser.cpp"
    break;

  case 44: /* insert_stmt: INSERT INTO IDENTIFIER VALUES OPEN_PAR list_values CLOSE_PAR SEMICOLON  */
#line 227 "sql.y"
                                                                                   {
				if(check_table(*(yyvsp[-5].string))==true)
                {
                        insert_into_table(*(yyvsp[-5].string),(yyvsp[-2].literals_list));
                        std::cout<<"Inserted successfully\n";
                }
                else
                    yyerror("The Table Does not exists");

			}
#line 1515 "src/parser.cpp"
    break;

  case 45: /* list_values: list_value  */
#line 240 "sql.y"
                       {
				(yyval.literals_list)=new values_list();
				(yyval.literals_list)->push_back((yyvsp[0].literal));
			}
#line 1524 "src/parser.cpp"
    break;

  case 46: /* list_values: list_values COMMA list_value  */
#line 245 "sql.y"
                        {
				(yyvsp[-2].literals_list)->push_back((yyvsp[0].literal));
                (yyval.literals_list)=(yyvsp[-2].literals_list);
			}
#line 1533 "src/parser.cpp"
    break;

  case 47: /* list_value: NUMBER  */
#line 250 "sql.y"
                   {
				(yyval.literal)=new Values(std::to_string((yyvsp[0].ival)),INT);
			}
#line 1541 "src/parser.cpp"
    break;

  case 48: /* list_value: FLOAT  */
#line 254 "sql.y"
                        {
				(yyval.literal)=new Values(std::to_string((yyvsp[0].fval)),DECIMAL);
			}
#line 1549 "src/parser.cpp"
    break;

  case 49: /* list_value: STRING  */
#line 258 "sql.y"
                        {
				(yyval.literal)=new Values(*(yyvsp[0].string),CHAR);
			}
#line 1557 "src/parser.cpp"
    break;

  case 50: /* delete_stmt: DELETE FROM IDENTIFIER WHERE sexpr SEMICOLON  */
#line 269 "sql.y"
           {
				if(check_table(*(yyvsp[-3].string))==true)
                        delete_from_table(*(yyvsp[-3].string),(yyvsp[-1].scond));
                else
                    yyerror("The Table Does not exists");
           }
#line 1568 "src/parser.cpp"
    break;

  case 51: /* sexpr: sor_expr  */
#line 277 "sql.y"
              {(yyval.scond)=(yyvsp[0].scond);}
#line 1574 "src/parser.cpp"
    break;

  case 52: /* sor_expr: sand_expr  */
#line 278 "sql.y"
                   {  (yyval.scond)=(yyvsp[0].scond); }
#line 1580 "src/parser.cpp"
    break;

  case 53: /* sor_expr: sor_expr OR sand_expr  */
#line 279 "sql.y"
                                {
         (yyval.scond)=new select_cond();
         (yyval.scond)->left=(yyvsp[-2].scond);
         (yyval.scond)->right=(yyvsp[0].scond);
         (yyval.scond)->relation_type=OR;
        }
#line 1591 "src/parser.cpp"
    break;

  case 54: /* sand_expr: sand_expr AND scond_b  */
#line 287 "sql.y"
        {  
            (yyval.scond)=new select_cond();
            (yyval.scond)->left =(yyvsp[-2].scond);
            (yyval.scond)->right=(yyvsp[0].scond);
            (yyval.scond)->relation_type=AND;
        }
#line 1602 "src/parser.cpp"
    break;

  case 55: /* sand_expr: scond_b  */
#line 294 "sql.y"
        {
            (yyval.scond)=(yyvsp[0].scond);
        }
#line 1610 "src/parser.cpp"
    break;

  case 56: /* scond_b: IDENTIFIER GE diff_value  */
#line 298 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),GE,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);

        }
#line 1620 "src/parser.cpp"
    break;

  case 57: /* scond_b: IDENTIFIER GT diff_value  */
#line 303 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),GT,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);

        }
#line 1630 "src/parser.cpp"
    break;

  case 58: /* scond_b: IDENTIFIER NE diff_value  */
#line 308 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),NE,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        
        }
#line 1640 "src/parser.cpp"
    break;

  case 59: /* scond_b: IDENTIFIER LT diff_value  */
#line 313 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),LT,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        }
#line 1649 "src/parser.cpp"
    break;

  case 60: /* scond_b: IDENTIFIER LE diff_value  */
#line 317 "sql.y"
                                 {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),LE,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        }
#line 1658 "src/parser.cpp"
    break;

  case 61: /* scond_b: IDENTIFIER E diff_value  */
#line 322 "sql.y"
        {
            (yyval.scond)=new select_cond(*(yyvsp[-2].string),E,(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
            delete (yyvsp[0].literal);
        }
#line 1667 "src/parser.cpp"
    break;

  case 62: /* scond_b: OPEN_PAR sexpr CLOSE_PAR  */
#line 327 "sql.y"
        {
            (yyval.scond)=(yyvsp[-1].scond);
        }
#line 1675 "src/parser.cpp"
    break;

  case 63: /* diff_value: IDENTIFIER  */
#line 332 "sql.y"
          {  
                (yyval.literal)=new Values();
                (yyval.literal)->data=*(yyvsp[0].string);
                (yyval.literal)->type=IDENTIFIER;
          }
#line 1685 "src/parser.cpp"
    break;

  case 64: /* diff_value: diff_value_without_identifier  */
#line 337 "sql.y"
                                          { (yyval.literal)=(yyvsp[0].literal); }
#line 1691 "src/parser.cpp"
    break;

  case 65: /* diff_value_without_identifier: STRING  */
#line 341 "sql.y"
          {  
                (yyval.literal)=new Values();
                (yyval.literal)->data=*(yyvsp[0].string);
                (yyval.literal)->type=CHAR;    
          }
#line 1701 "src/parser.cpp"
    break;

  case 66: /* diff_value_without_identifier: NUMBER  */
#line 347 "sql.y"
          {

                (yyval.literal)=new Values();
                (yyval.literal)->data=std::to_string((yyvsp[0].ival));
                (yyval.literal)->type=INT;    
          }
#line 1712 "src/parser.cpp"
    break;

  case 67: /* diff_value_without_identifier: FLOAT  */
#line 354 "sql.y"
          {

                (yyval.literal)=new Values();
                (yyval.literal)->data=std::to_string((yyvsp[0].fval));
                (yyval.literal)->type=DECIMAL;    
          }
#line 1723 "src/parser.cpp"
    break;

  case 68: /* update_stmt: UPDATE IDENTIFIER SET update_values WHERE sexpr SEMICOLON  */
#line 367 "sql.y"
           {
				if(check_table(*(yyvsp[-5].string))==true)
                        update_table(*(yyvsp[-5].string),(yyvsp[-3].list_sets),(yyvsp[-1].scond));
                else
                    yyerror("The Table Does not exists");
           }
#line 1734 "src/parser.cpp"
    break;

  case 69: /* update_values: update_value  */
#line 375 "sql.y"
                           { (yyval.list_sets)=new update_sets; (yyval.list_sets)->push_back((yyvsp[0].update_set_val)); }
#line 1740 "src/parser.cpp"
    break;

  case 70: /* update_values: update_values COMMA update_value  */
#line 377 "sql.y"
             {
                (yyvsp[-2].list_sets)->push_back((yyvsp[0].update_set_val));
                (yyval.list_sets)=(yyvsp[-2].list_sets);
             }
#line 1749 "src/parser.cpp"
    break;

  case 71: /* update_value: IDENTIFIER E diff_value_without_identifier  */
#line 383 "sql.y"
            {
                update_set * new_set= new update_set(*(yyvsp[-2].string),(yyvsp[0].literal)->data,(yyvsp[0].literal)->type);
                delete (yyvsp[0].literal);
                (yyval.update_set_val)=new_set;
            }
#line 1759 "src/parser.cpp"
    break;

  case 72: /* select_stmt: SELECT columns FROM table_list WHERE sexpr SEMICOLON  */
#line 396 "sql.y"
           {
              select_from_tables((yyvsp[-5].string_array),(yyvsp[-3].string_array),(yyvsp[-1].scond));  
           }
#line 1767 "src/parser.cpp"
    break;

  case 73: /* table_list: IDENTIFIER  */
#line 401 "sql.y"
          { 
                std::vector<std::string*>* strings=new std::vector<std::string*>;
                if(check_table(*(yyvsp[0].string)))
                    strings->push_back((yyvsp[0].string));
                else 
                    yyerror("The table does not exists");
                (yyval.string_array)=strings;
          }
#line 1780 "src/parser.cpp"
    break;

  case 74: /* table_list: table_list COMMA IDENTIFIER  */
#line 409 "sql.y"
                                        {
                if(check_table(*(yyvsp[0].string)))
                    (yyvsp[-2].string_array)->push_back((yyvsp[0].string));
                else 
                    yyerror("The table does not exists");
                (yyval.string_array)=(yyvsp[-2].string_array);
          }
#line 1792 "src/parser.cpp"
    break;

  case 75: /* help_tables: HELP TABLES SEMICOLON  */
#line 418 "sql.y"
           {
                help_tables();
           }
#line 1800 "src/parser.cpp"
    break;


#line 1804 "src/parser.cpp"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 423 "sql.y"





int yyerror(char const *s)
{
	std::cout<<"[ERROR] : "<<s;
	exit(0);
}


int main(int argc,char* argv[])
{
    /* yydebug=1; */
    yyin=fopen("test.txt","r");
	yyparse();
    fclose(yyin);
	return 0;
}


