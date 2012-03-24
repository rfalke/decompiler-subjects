#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
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
     struct _IO_marker *_markers;
     struct _IO_FILE *_chain;
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
struct option {
     char *name;
     int has_arg;
     int *flag;
     int val;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void usage( int  );
void emit_bug_reporting_address( void );
void next_line_num( void );
_Bool simple_cat( char *, size_t  );
_Bool cat( char *, size_t , char *, size_t , _Bool , _Bool , _Bool , _Bool , _Bool , _Bool  );
void write_pending( char *, char ** );
int main( int , char ** );
void *ptr_align( void *, size_t  );
size_t full_write( int , void *, size_t  );
void version_etc( FILE *, char *, char *, char *, ... );
void close_stdout( void );
char *quote( char * );
size_t safe_read( int , void *, size_t  );
void *xmalloc( size_t  );
int getpagesize( void );
int *__errno_location( void );
int open64( char *, int , ... );
int fputs_unlocked( char *, void * );
char *stpcpy( char *, char * );
char *bindtextdomain( char *, char * );
char *gettext( char * );
void free( void * );
int getopt_long( int , void *, char *, void *, int * );
int ioctl( int , void *, ... );
char *setlocale( int , char * );
int printf( char *, ... );
int close( int  );
int fprintf( void *, char *, ... );
void error( int , int , char *, ... );
void *memmove( void *, void *, unsigned int  );
char *textdomain( char * );
int strcmp( char *, char * );
void exit( int  );
int atexit( void * );
int fstat64( int , void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern int optind;
extern char *program_name;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
