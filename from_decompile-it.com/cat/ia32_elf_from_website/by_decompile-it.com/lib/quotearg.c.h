#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
struct quoting_options {
     enum quoting_style { literal_quoting_style = 0, shell_quoting_style = 1, shell_always_quoting_style = 2, c_quoting_style = 3, escape_quoting_style = 4, locale_quoting_style = 5, clocale_quoting_style = 6, } style;
     unsigned int quote_these_too[8];
  } ;
typedef unsigned int size_t;
typedef int wchar_t;
typedef unsigned int wint_t;
struct slotvec {
     size_t size;
     char *val;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
struct quoting_options  *clone_quoting_options( struct quoting_options * );
int set_char_quoting( struct quoting_options *, char , int  );
char *gettext_quote( char *, enum quoting_style   );
size_t quotearg_buffer_restyled( char *, size_t , char *, size_t , enum quoting_style  , struct quoting_options * );
size_t quotearg_buffer( char *, size_t , char *, size_t , struct quoting_options * );
char *quotearg_alloc( char *, size_t , struct quoting_options * );
void quotearg_free( void );
char *quotearg_n_options( int , char *, size_t , struct quoting_options * );
char *quotearg_n( int , char * );
char *quotearg( char * );
struct quoting_options  quoting_options_from_style( enum quoting_style   );
char *quotearg_n_style( int , enum quoting_style  , char * );
char *quotearg_n_style_mem( int , enum quoting_style  , char *, size_t  );
char *quotearg_style( enum quoting_style  , char * );
char *quotearg_char( char *, char  );
char *quotearg_colon( char * );
char *xcharalloc( size_t  );
void *xrealloc( void *, size_t  );
void *xmemdup( void *, size_t  );
void xalloc_die( void );
void abort( void );
int *__errno_location( void );
int memcmp( void *, void *, unsigned int  );
unsigned int __ctype_get_mb_cur_max( void );
void *memset( void *, int , unsigned int  );
unsigned int mbrtowc( wchar_t *, char *, unsigned int , void * );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
int mbsinit( void * );
unsigned int strlen( char * );
int iswprint( wint_t  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
