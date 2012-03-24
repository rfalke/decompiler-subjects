/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
typedef struct _IO_FILE FILE;
typedef long __time_t;
typedef int __ssize_t;
typedef __ssize_t ssize_t;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef long __blksize_t;
typedef __quad_t __blkcnt64_t;
typedef __u_quad_t __ino64_t;
typedef void (*argmatch_exit_fn)( void );
typedef struct {
     _Bool negative;
     long value;
     size_t digits;
  } textint;
typedef struct {
     long year;
     long month;
     long day;
     long hour;
     long minutes;
     long seconds;
     long ns;
  } relative_time;
typedef struct {
     char *name;
     int type;
     int value;
  } table;
typedef struct {
     char *input;
     long day_ordinal;
     int day_number;
     int local_isdst;
     long time_zone;
     int meridian;
     textint year;
     long month;
     long day;
     long hour;
     long minutes;
     struct timespec {
       __time_t tv_sec;
       long tv_nsec;
    } seconds;
     relative_time rel;
     _Bool timespec_seen;
     _Bool rels_seen;
     size_t dates_seen;
     size_t days_seen;
     size_t local_zones_seen;
     size_t dsts_seen;
     size_t times_seen;
     size_t zones_seen;
     table local_time_zone_table[3];
  } parser_control;
typedef union YYSTYPE YYSTYPE;
typedef short yytype_int16;
typedef __time_t time_t;
typedef unsigned char yytype_uint8;
typedef char yytype_int8;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef int ptrdiff_t;
typedef struct {
     int __count;
     union {
       unsigned int __wch;
       char __wchb[4];
    } __value;
  } __mbstate_t;
typedef __mbstate_t mbstate_t;
typedef long __suseconds_t;
typedef long long intmax_t;
typedef int wchar_t;
typedef struct {
     char *dir_start;
     char *dir_end;
     int flags;
     char *width_start;
     char *width_end;
     size_t width_arg_index;
     char *precision_start;
     char *precision_end;
     size_t precision_arg_index;
     char conversion;
     size_t arg_index;
  } char_directive;
typedef struct {
     size_t count;
     char_directive *dir;
     size_t max_width_length;
     size_t max_precision_length;
  } char_directives;
typedef enum  { TYPE_NONE = 0, TYPE_SCHAR = 1, TYPE_UCHAR = 2, TYPE_SHORT = 3, TYPE_USHORT = 4, TYPE_INT = 5, TYPE_UINT = 6, TYPE_LONGINT = 7, TYPE_ULONGINT = 8, TYPE_LONGLONGINT = 9, TYPE_ULONGLONGINT = 10, TYPE_DOUBLE = 11, TYPE_LONGDOUBLE = 12, TYPE_CHAR = 13, TYPE_WIDE_CHAR = 14, TYPE_STRING = 15, TYPE_WIDE_STRING = 16, TYPE_POINTER = 17, TYPE_COUNT_SCHAR_POINTER = 18, TYPE_COUNT_SHORT_POINTER = 19, TYPE_COUNT_INT_POINTER = 20, TYPE_COUNT_LONGINT_POINTER = 21, TYPE_COUNT_LONGLONGINT_POINTER = 22, } arg_type;
typedef unsigned int wint_t;
typedef struct {
     arg_type type;
     union {
       char a_schar;
       unsigned char a_uchar;
       short a_short;
       unsigned short a_ushort;
       int a_int;
       unsigned int a_uint;
       long a_longint;
       unsigned long a_ulongint;
       long long a_longlongint;
       unsigned long long a_ulonglongint;
       float a_float;
       double a_double;
       double long a_longdouble;
       int a_char;
       wint_t a_wide_char;
       char *a_string;
       wchar_t *a_wide_string;
       void *a_pointer;
       char *a_count_schar_pointer;
       short *a_count_short_pointer;
       int *a_count_int_pointer;
       long *a_count_longint_pointer;
       long long *a_count_longlongint_pointer;
    } a;
  } argument;
typedef struct {
     size_t count;
     argument *arg;
  } arguments;
typedef unsigned short fpucw_t;
typedef union {
     double long value;
     unsigned int word[3];
  } memory_double;
struct _IO_FILE {
     int _flags;
     char *_IO_read_ptr;
     char *_IO_read_end;
     char *_IO_read_base;
     char *_IO_write_base;
     char *_IO_write_ptr;
     char *_IO_write_end;
     char *_IO_buf_base;
     char *_IO_buf_end;
     char *_IO_save_base;
     char *_IO_backup_base;
     char *_IO_save_end;
     struct _IO_marker {
       struct _IO_marker  *_next;
       struct _IO_FILE  *_sbuf;
       int _pos;
    } *_markers;
     struct _IO_FILE  *_chain;
     int _fileno;
     int _flags2;
     __off_t _old_offset;
     unsigned short _cur_column;
     char _vtable_offset;
     char _shortbuf[1];
     _IO_lock_t *_lock;
     __off64_t _offset;
     void *__pad1;
     void *__pad2;
     void *__pad3;
     void *__pad4;
     size_t __pad5;
     int _mode;
     char _unused2[40];
  } ;
enum Time_spec { TIME_SPEC_DATE = 0, TIME_SPEC_SECONDS = 1, TIME_SPEC_NS = 2, TIME_SPEC_HOURS = 3, TIME_SPEC_MINUTES = 4, } ;
union YYSTYPE {
     long intval;
     textint textintval;
     struct timespec  timespec;
     relative_time rel;
  } ;
enum quoting_style { literal_quoting_style = 0, shell_quoting_style = 1, shell_always_quoting_style = 2, c_quoting_style = 3, escape_quoting_style = 4, locale_quoting_style = 5, clocale_quoting_style = 6, } ;
struct complex {
     double real;
     double imaginary;
  } ;
struct stat {
     __dev_t st_dev;
     unsigned short __pad1;
     __ino_t __st_ino;
     __mode_t st_mode;
     __nlink_t st_nlink;
     __uid_t st_uid;
     __gid_t st_gid;
     __dev_t st_rdev;
     unsigned short __pad2;
     __off64_t st_size;
     __blksize_t st_blksize;
     __blkcnt64_t st_blocks;
     struct timespec  st_atim;
     struct timespec  st_mtim;
     struct timespec  st_ctim;
     __ino64_t st_ino;
  } ;
struct tm {
     int tm_sec;
     int tm_min;
     int tm_hour;
     int tm_mday;
     int tm_mon;
     int tm_year;
     int tm_wday;
     int tm_yday;
     int tm_isdst;
     long tm_gmtoff;
     char *tm_zone;
  } ;
struct option {
     char *name;
     int has_arg;
     int *flag;
     int val;
  } ;
union yyalloc {
     yytype_int16 yyss;
     YYSTYPE yyvs;
  } ;
struct timeval {
     __time_t tv_sec;
     __suseconds_t tv_usec;
  } ;
struct quoting_options {
     enum quoting_style  style;
     unsigned int quote_these_too[8];
  } ;
struct slotvec {
     size_t size;
     char *val;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void usage( int status );
static inline void emit_bug_reporting_address( void );
_Bool batch_convert( char *input_filename, char *format );
int main( int argc, char **argv );
static inline struct timespec  get_stat_mtime( struct stat  *st );
_Bool show_date( char *format, struct timespec  when );
void digits_to_date_time( parser_control *pc, textint text_int );
void yydestruct( char *yymsg, int yytype, YYSTYPE *yyvaluep, parser_control *pc );
int yyparse( parser_control *pc );
long time_zone_hhmm( textint s, long mm );
int to_hour( long hours, int meridian );
long to_year( textint textyear );
table *lookup_zone( parser_control *pc, char *name );
table *lookup_word( parser_control *pc, char *word );
int yylex( YYSTYPE *lvalp, parser_control *pc );
int yyerror( parser_control *pc, char *s );
_Bool mktime_ok( struct tm  *tm0, struct tm  *tm1, time_t t );
char *get_tz( char *tzbuf );
_Bool get_date( struct timespec  *result, char *p, struct timespec  *now );
void version_etc_va( FILE *stream, char *command_name, char *package, char *version, va_list authors );
void version_etc( FILE *stream, char *command_name, char *package, char *version, ... );
void xalloc_die( void );
void __argmatch_die( void );
ptrdiff_t argmatch( char *arg, char **arglist, char *vallist, size_t valsize );
void argmatch_invalid( char *context, char *value, ptrdiff_t problem );
void argmatch_valid( char **arglist, char *vallist, size_t valsize );
ptrdiff_t __xargmatch_internal( char *context, char *arg, char **arglist, char *vallist, size_t valsize, argmatch_exit_fn exit_fn );
char *argmatch_to_argument( char *value, char **arglist, char *vallist, size_t valsize );
void close_stdout_set_file_name( char *file );
void close_stdout( void );
void fwrite_lowcase( FILE *fp, char *src, size_t len );
void fwrite_uppcase( FILE *fp, char *src, size_t len );
size_t strftime_case_( _Bool upcase, FILE *s, char *format, struct tm  *tp, int ut, int ns );
int iso_week_days( int yday, int wday );
size_t fprintftime( FILE *s, char *format, struct tm  *tp, int ut, int ns );
void gettime( struct timespec  *ts );
char *imaxtostr( intmax_t i, char *buf );
int year( struct tm  *tm, int *digit_pair, size_t n, unsigned int syntax_bits );
int posix_time_parse( struct tm  *tm, char *s, unsigned int syntax_bits );
_Bool posixtime( time_t *p, char *s, unsigned int syntax_bits );
char *quote_n( int n, char *name );
char *quote( char *name );
struct quoting_options  *clone_quoting_options( struct quoting_options  *o );
enum quoting_style  get_quoting_style( struct quoting_options  *o );
void set_quoting_style( struct quoting_options  *o, enum quoting_style  s );
int set_char_quoting( struct quoting_options  *o, char c, int i );
char *gettext_quote( char *msgid, enum quoting_style  s );
size_t quotearg_buffer_restyled( char *buffer, size_t buffersize, char *arg, size_t argsize, enum quoting_style  quoting_style, struct quoting_options  *o );
size_t quotearg_buffer( char *buffer, size_t buffersize, char *arg, size_t argsize, struct quoting_options  *o );
char *quotearg_alloc( char *arg, size_t argsize, struct quoting_options  *o );
void quotearg_free( void );
char *quotearg_n_options( int n, char *arg, size_t argsize, struct quoting_options  *options );
char *quotearg_n( int n, char *arg );
char *quotearg( char *arg );
struct quoting_options  quoting_options_from_style( enum quoting_style  style );
char *quotearg_n_style( int n, enum quoting_style  s, char *arg );
char *quotearg_n_style_mem( int n, enum quoting_style  s, char *arg, size_t argsize );
char *quotearg_style( enum quoting_style  s, char *arg );
char *quotearg_char( char *arg, char ch );
char *quotearg_colon( char *arg );
int settime( struct timespec  *ts );
int rpl_vfprintf( FILE *fp, char *format, va_list args );
static inline void *xnmalloc( size_t n, size_t s );
static inline void *xnrealloc( void *p, size_t n, size_t s );
static inline void *x2nrealloc( void *p, size_t *pn, size_t s );
static inline char *xcharalloc( size_t n );
void *xmalloc( size_t n );
void *xrealloc( void *p, size_t n );
void *x2realloc( void *p, size_t *pn );
void *xzalloc( size_t s );
void *xcalloc( size_t n, size_t s );
void *xmemdup( void *p, size_t s );
char *xstrdup( char *string );
void fseterr( FILE *fp );
int close_stream( FILE *stream );
int is_infinitel( double long x );
char *vasnprintf( char *resultbuf, size_t *lengthp, char *format, va_list args );
static inline size_t xsum4( size_t size1, size_t size2, size_t size3, size_t size4 );
static inline size_t xmax( size_t size1, size_t size2 );
static inline size_t xsum( size_t size1, size_t size2 );
int rpl_isnanl( double long x );
int printf_fetchargs( va_list args, arguments *a );
int printf_parse( char *format, char_directives *d, arguments *a );
static inline size_t xsum( size_t size1, size_t size2 );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
static relative_time RELATIVE_TIME_0;
static yytype_uint8 yytranslate[277];
static yytype_uint8 yyr1[81];
static yytype_uint8 yyr2[81];
static yytype_uint8 yydefact[98];
static yytype_int8 yydefgoto[20];
static yytype_int8 yypact[98];
static yytype_int8 yypgoto[20];
static yytype_uint8 yytable[97];
static yytype_int8 yycheck[97];
static yytype_uint8 yystos[98];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
