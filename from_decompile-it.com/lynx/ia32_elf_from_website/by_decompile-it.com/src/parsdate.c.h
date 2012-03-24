#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long __time_t;
typedef __time_t time_t;
typedef enum _MERIDIAN { MERam = 0, MERpm = 1, MER24 = 2, } MERIDIAN;
typedef enum _DSTMODE { DSTon = 0, DSToff = 1, DSTmaybe = 2, } DSTMODE;
typedef struct _TIMEINFO TIMEINFO;
struct _TIMEINFO {
     time_t time;
     long usec;
     long tzone;
  } ;
typedef union {
     time_t Number;
     enum _MERIDIAN  Meridian;
  } YYSTYPE;
typedef struct _TABLE TABLE;
struct _TABLE {
     char *name;
     int type;
     time_t value;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void date_error( char * );
time_t ToSeconds( time_t , time_t , time_t , MERIDIAN  );
time_t Convert( time_t , time_t , time_t , time_t , time_t , time_t , MERIDIAN , DSTMODE  );
time_t DSTcorrect( time_t , time_t  );
time_t RelativeMonth( time_t , time_t  );
int LookupWord( char *, int  );
int date_lex( void );
int GetTimeInfo( TIMEINFO * );
time_t parsedate( char *, TIMEINFO * );
int yygrowstack( void );
int date_parse( void );
void *realloc( void *, unsigned int  );
void *localtime( void * );
void *memset( void *, int , unsigned int  );
int gettimeofday( void *, void * );
short **__ctype_b_loc( void );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int tolower( int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int yynerrs;
extern int yyerrflag;
extern int yychar;
extern short *yyssp;
extern YYSTYPE *yyvsp;
extern YYSTYPE yyval;
extern YYSTYPE yylval;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
