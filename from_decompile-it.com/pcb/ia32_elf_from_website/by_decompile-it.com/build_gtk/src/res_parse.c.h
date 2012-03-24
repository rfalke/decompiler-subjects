#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct Resource Resource;
typedef struct ResourceVal ResourceVal;
struct ResourceVal {
     char *name;
     char *value;
     struct Resource *subres;
  } ;
struct Resource {
     struct Resource *parent;
     void *user_ptr;
     int flags;
     int c;
     ResourceVal *v;
  } ;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
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
typedef unsigned char yytype_uint8;
typedef char yytype_int8;
typedef struct _IO_FILE FILE;
typedef union YYSTYPE YYSTYPE;
union YYSTYPE {
     int ival;
     char *sval;
     Resource *rval;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void dump_res( Resource *, int  );
int reserror( char * );
Resource *resource_subres( Resource *, char * );
char *resource_value( Resource *, char * );
void resource_add_val( Resource *, char *, char *, Resource * );
Resource *resource_create( Resource * );
int res_parse_getchars( char *, int  );
unsigned int yytnamerr( char *, char * );
unsigned int yysyntax_error( char *, int , int  );
int resparse( void );
Resource *resource_parse( char *, char ** );
int reslex( void );
int __fprintf_chk( void *, int , char *, ... );
void *realloc( void *, unsigned int  );
int __printf_chk( int , char *, ... );
char *stpcpy( char *, char * );
void perror( char * );
void free( void * );
int fclose( void * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
void *fopen( char *, char * );
int fgetc( void * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern int reschar;
extern int resnerrs;
extern YYSTYPE reslval;
extern int res_lineno;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
