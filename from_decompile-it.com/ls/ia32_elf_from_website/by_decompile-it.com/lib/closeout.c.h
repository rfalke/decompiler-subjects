/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __ino64_t;
typedef __ino64_t ino_t;
typedef __u_quad_t __dev_t;
typedef __dev_t dev_t;
typedef unsigned int size_t;
typedef struct {
     unsigned long __val[32];
  } __sigset_t;
typedef __sigset_t sigset_t;
typedef void (*__sighandler_t)( int  );
typedef int __pid_t;
typedef unsigned int __uid_t;
typedef union sigval sigval_t;
typedef long __clock_t;
typedef struct siginfo siginfo_t;
typedef struct __dirstream DIR;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned long long uintmax_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef unsigned int __gid_t;
typedef long __blksize_t;
typedef __quad_t __blkcnt64_t;
typedef long __time_t;
typedef __off64_t off_t;
typedef __mode_t mode_t;
typedef void *V;
typedef __time_t time_t;
typedef long __suseconds_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;
typedef long __off_t;
typedef void _IO_lock_t;
typedef struct _IO_FILE FILE;
typedef struct {
     int __count;
     union {
       unsigned int __wch;
       char __wchb[4];
    } __value;
  } __mbstate_t;
typedef __mbstate_t mbstate_t;
typedef int wchar_t;
typedef struct hash_table Hash_table;
typedef int __sig_atomic_t;
typedef __sig_atomic_t sig_atomic_t;
typedef int __jmp_buf[6];
typedef struct __jmp_buf_tag {
     __jmp_buf __jmpbuf;
     int __mask_was_saved;
     __sigset_t __saved_mask;
  } jmp_buf[1];
typedef int (*qsortFunc)( V , V  );
typedef void (*argmatch_exit_fn)( void );
typedef int __ssize_t;
typedef __ssize_t ssize_t;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef int ptrdiff_t;
typedef struct hash_tuning Hash_tuning;
typedef size_t (*Hash_hasher)( void *, size_t  );
typedef _Bool (*Hash_comparator)( void *, void * );
typedef void (*Hash_data_freer)( void * );
typedef _Bool (*Hash_processor)( void *, void * );
typedef enum strtol_error { LONGINT_OK = 0, LONGINT_OVERFLOW = 1, LONGINT_INVALID_SUFFIX_CHAR = 2, LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3, LONGINT_INVALID = 4, } strtol_error;
typedef long long intmax_t;
typedef int (*comparison_function)( void *, void * );
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
enum indicator_no { C_LEFT = 0, C_RIGHT = 1, C_END = 2, C_NORM = 3, C_FILE = 4, C_DIR = 5, C_LINK = 6, C_FIFO = 7, C_SOCK = 8, C_BLK = 9, C_CHR = 10, C_MISSING = 11, C_ORPHAN = 12, C_EXEC = 13, C_DOOR = 14, C_SETUID = 15, C_SETGID = 16, C_STICKY = 17, C_OTHER_WRITABLE = 18, C_STICKY_OTHER_WRITABLE = 19, } ;
union sigval {
     int sival_int;
     void *sival_ptr;
  } ;
struct siginfo {
     int si_signo;
     int si_errno;
     int si_code;
     union {
       int _pad[29];
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
      } _kill;
       struct {
         int si_tid;
         int si_overrun;
         sigval_t si_sigval;
      } _timer;
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
         sigval_t si_sigval;
      } _rt;
       struct {
         __pid_t si_pid;
         __uid_t si_uid;
         int si_status;
         __clock_t si_utime;
         __clock_t si_stime;
      } _sigchld;
       struct {
         void *si_addr;
      } _sigfault;
       struct {
         long si_band;
         int si_fd;
      } _sigpoll;
    } _sifields;
  } ;
struct __dirstream  ;
enum filetype { unknown = 0, fifo = 1, chardev = 2, directory = 3, blockdev = 4, normal = 5, symbolic_link = 6, sock = 7, whiteout = 8, arg_directory = 9, } ;
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
struct hash_table  ;
enum format { long_format = 0, one_per_line = 1, many_per_line = 2, horizontal = 3, with_commas = 4, } ;
enum time_style { full_iso_time_style = 0, long_iso_time_style = 1, iso_time_style = 2, locale_time_style = 3, } ;
enum time_type { time_mtime = 0, time_ctime = 1, time_atime = 2, time_numtypes = 3, } ;
enum sort_type { sort_none = -1, sort_name = 0, sort_extension = 1, sort_size = 2, sort_version = 3, sort_time = 4, sort_numtypes = 5, } ;
enum indicator_style { none = 0, slash = 1, file_type = 2, classify = 3, } ;
enum Dereference_symlink { DEREF_UNDEFINED = 1, DEREF_NEVER = 2, DEREF_COMMAND_LINE_ARGUMENTS = 3, DEREF_COMMAND_LINE_SYMLINK_TO_DIR = 4, DEREF_ALWAYS = 5, } ;
enum color_type { color_never = 0, color_always = 1, color_if_tty = 2, } ;
enum quoting_style { literal_quoting_style = 0, shell_quoting_style = 1, shell_always_quoting_style = 2, c_quoting_style = 3, escape_quoting_style = 4, locale_quoting_style = 5, clocale_quoting_style = 6, } ;
struct hash_tuning {
     float shrink_threshold;
     float shrink_factor;
     float growth_threshold;
     float growth_factor;
     _Bool is_n_buckets;
     char __pad[3];
  } ;
struct complex {
     double real;
     double imaginary;
  } ;
struct dev_ino {
     ino_t st_ino;
     dev_t st_dev;
  } ;
struct obstack {
     long chunk_size;
     struct _obstack_chunk {
       char *limit;
       struct _obstack_chunk  *prev;
       char contents[4];
    } *chunk;
     char *object_base;
     char *next_free;
     char *chunk_limit;
     union {
       int tempint;
       void *tempptr;
    } temp;
     int alignment_mask;
     struct _obstack_chunk  *(*chunkfun)( void *, long  );
     void (*freefun)( void *, struct _obstack_chunk * );
     void *extra_arg;
     unsigned int bits_at_40;
  } ;
struct pending {
     char *name;
     char *realname;
     _Bool command_line_arg;
     struct pending  *next;
  } ;
struct sigaction {
     union {
       __sighandler_t sa_handler;
       void (*sa_sigaction)( int , siginfo_t *, void * );
    } __sigaction_handler;
     __sigset_t sa_mask;
     int sa_flags;
     void (*sa_restorer)( void );
  } ;
struct winsize {
     unsigned short ws_row;
     unsigned short ws_col;
     unsigned short ws_xpixel;
     unsigned short ws_ypixel;
  } ;
struct ignore_pattern {
     char *pattern;
     struct ignore_pattern  *next;
  } ;
struct color_ext_type {
     struct bin_str {
       size_t len;
       char *string;
    } ext;
     struct bin_str  seq;
     struct color_ext_type  *next;
  } ;
struct __dirstream  ;
struct dirent {
     __ino64_t d_ino;
     __off64_t d_off;
     unsigned short d_reclen;
     unsigned char d_type;
     char d_name[256];
     char __pad[1];
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
     struct timespec {
       __time_t tv_sec;
       long tv_nsec;
    } st_atim;
     struct timespec  st_mtim;
     struct timespec  st_ctim;
     __ino64_t st_ino;
  } ;
struct fileinfo {
     char *name;
     char *linkname;
     struct stat  stat;
     enum filetype  filetype;
     mode_t linkmode;
     char *scontext;
     _Bool stat_ok;
     _Bool linkok;
     _Bool have_acl;
     char __pad[1];
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
struct timeval {
     __time_t tv_sec;
     __suseconds_t tv_usec;
  } ;
struct quoting_options  ;
struct column_info {
     _Bool valid_len;
     size_t line_len;
     size_t *col_arr;
  } ;
struct hash_table  ;
struct option {
     char *name;
     int has_arg;
     int *flag;
     int val;
  } ;
struct hash_table {
     struct hash_entry {
       void *data;
       struct hash_entry  *next;
    } *bucket;
     struct hash_entry  *bucket_limit;
     size_t n_buckets;
     size_t n_buckets_used;
     size_t n_entries;
     Hash_tuning *tuning;
     Hash_hasher hasher;
     Hash_comparator comparator;
     Hash_data_freer data_freer;
     struct hash_entry  *free_entry_list;
  } ;
struct lconv {
     char *decimal_point;
     char *thousands_sep;
     char *grouping;
     char *int_curr_symbol;
     char *currency_symbol;
     char *mon_decimal_point;
     char *mon_thousands_sep;
     char *mon_grouping;
     char *positive_sign;
     char *negative_sign;
     char int_frac_digits;
     char frac_digits;
     char p_cs_precedes;
     char p_sep_by_space;
     char n_cs_precedes;
     char n_sep_by_space;
     char p_sign_posn;
     char n_sign_posn;
     char int_p_cs_precedes;
     char int_p_sep_by_space;
     char int_n_cs_precedes;
     char int_n_sep_by_space;
     char int_p_sign_posn;
     char int_n_sign_posn;
     char __pad[2];
  } ;
struct userid {
     union {
       uid_t u;
       gid_t g;
    } id;
     struct userid  *next;
     char name[];
  } ;
struct passwd {
     char *pw_name;
     char *pw_passwd;
     __uid_t pw_uid;
     __gid_t pw_gid;
     char *pw_gecos;
     char *pw_dir;
     char *pw_shell;
  } ;
struct group {
     char *gr_name;
     char *gr_passwd;
     __gid_t gr_gid;
     char **gr_mem;
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
int main( int argc, char **argv );
void usage( int status );
char *areadlink_with_size( char *file, size_t size );
int gnu_mbswidth( char *string, int flags );
int mbsnwidth( char *string, size_t nbytes, int flags );
void version_etc_va( FILE *stream, char *command_name, char *package, char *version, va_list authors );
void version_etc( FILE *stream, char *command_name, char *package, char *version, ... );
void xalloc_die( void );
ptrdiff_t argmatch( char *arg, char **arglist, char *vallist, size_t valsize );
void argmatch_invalid( char *context, char *value, ptrdiff_t problem );
void argmatch_valid( char **arglist, char *vallist, size_t valsize );
ptrdiff_t __xargmatch_internal( char *context, char *arg, char **arglist, char *vallist, size_t valsize, argmatch_exit_fn exit_fn );
char *argmatch_to_argument( char *value, char **arglist, char *vallist, size_t valsize );
char *last_component( char *name );
char *base_name( char *name );
size_t base_len( char *name );
void close_stdout_set_file_name( char *file );
void close_stdout( void );
int file_has_acl( char *name, struct stat  *sb );
void strmode( mode_t mode, char *str );
void filemodestring( struct stat  *statp, char *str );
char *mfile_name_concat( char *dir, char *abase, char **base_in_result );
char *file_name_concat( char *dir, char *abase, char **base_in_result );
_Bool hard_locale( int category );
size_t hash_get_n_buckets( Hash_table *table );
size_t hash_get_n_buckets_used( Hash_table *table );
size_t hash_get_n_entries( Hash_table *table );
size_t hash_get_max_bucket_length( Hash_table *table );
_Bool hash_table_ok( Hash_table *table );
void hash_print_statistics( Hash_table *table, FILE *stream );
void *hash_lookup( Hash_table *table, void *entry );
void *hash_get_first( Hash_table *table );
void *hash_get_next( Hash_table *table, void *entry );
size_t hash_get_entries( Hash_table *table, void **buffer, size_t buffer_size );
size_t hash_do_for_each( Hash_table *table, Hash_processor processor, void *processor_data );
size_t hash_string( char *string, size_t n_buckets );
void hash_reset_tuning( Hash_tuning *tuning );
Hash_table *hash_initialize( size_t candidate, Hash_tuning *tuning, Hash_hasher hasher, Hash_comparator comparator, Hash_data_freer data_freer );
void hash_clear( Hash_table *table );
void hash_free( Hash_table *table );
_Bool hash_rehash( Hash_table *table, size_t candidate );
void *hash_insert( Hash_table *table, void *entry );
void *hash_delete( Hash_table *table, void *entry );
char *human_readable( uintmax_t n, char *buf, int opts, uintmax_t from_block_size, uintmax_t to_block_size );
enum strtol_error  human_options( char *spec, int *opts, uintmax_t *block_size );
char *getuser( uid_t uid );
uid_t *getuidbyname( char *user );
char *getgroup( gid_t gid );
gid_t *getgidbyname( char *group );
char *imaxtostr( intmax_t i, char *buf );
void mpsort( void **base, size_t n, comparison_function cmp );
char *quote_n( int n, char *name );
char *quote( char *name );
struct quoting_options  *clone_quoting_options( struct quoting_options  *o );
enum quoting_style  get_quoting_style( struct quoting_options  *o );
void set_quoting_style( struct quoting_options  *o, enum quoting_style  s );
int set_char_quoting( struct quoting_options  *o, char c, int i );
size_t quotearg_buffer( char *buffer, size_t buffersize, char *arg, size_t argsize, struct quoting_options  *o );
char *quotearg_alloc( char *arg, size_t argsize, struct quoting_options  *o );
void quotearg_free( void );
char *quotearg_n( int n, char *arg );
char *quotearg( char *arg );
char *quotearg_n_style( int n, enum quoting_style  s, char *arg );
char *quotearg_n_style_mem( int n, enum quoting_style  s, char *arg, size_t argsize );
char *quotearg_style( enum quoting_style  s, char *arg );
char *quotearg_char( char *arg, char ch );
char *quotearg_colon( char *arg );
size_t nstrftime( char *s, size_t maxsize, char *format, struct tm  *tp, int ut, int ns );
char *umaxtostr( uintmax_t i, char *buf );
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
void xstrtol_fatal( enum strtol_error  err, int opt_idx, char c, struct option  *long_options, char *arg );
strtol_error xstrtoul( char *s, char **ptr, int strtol_base, unsigned long *val, char *valid_suffixes );
void fseterr( FILE *fp );
char *xstrndup( char *string, size_t n );
strtol_error xstrtoumax( char *s, char **ptr, int strtol_base, uintmax_t *val, char *valid_suffixes );
int close_stream( FILE *stream );
char *vasnprintf( char *resultbuf, size_t *lengthp, char *format, va_list args );
int rpl_isnanl( double long x );
int printf_fetchargs( va_list args, arguments *a );
int printf_parse( char *format, char_directives *d, arguments *a );
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
#if 0
#endif
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
static char *file_name;
extern int exit_failure;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
