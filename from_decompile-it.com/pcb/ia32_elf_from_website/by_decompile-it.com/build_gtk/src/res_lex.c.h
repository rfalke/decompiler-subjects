#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef struct yy_buffer_state *YY_BUFFER_STATE;
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
typedef size_t yy_size_t;
struct yy_buffer_state {
     FILE *yy_input_file;
     char *yy_ch_buf;
     char *yy_buf_pos;
     yy_size_t yy_buf_size;
     int yy_n_chars;
     int yy_is_our_buffer;
     int yy_is_interactive;
     int yy_at_bol;
     int yy_bs_lineno;
     int yy_bs_column;
     int yy_fill_buffer;
     int yy_buffer_status;
  } ;
typedef short int16_t;
typedef int16_t flex_int16_t;
typedef int int32_t;
typedef int32_t flex_int32_t;
typedef int yy_state_type;
typedef union YYSTYPE YYSTYPE;
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
void *mymemset( void *, int , size_t  );
int res_parse_getchars( char *, int  );
void res_flush_buffer( YY_BUFFER_STATE  );
void res_delete_buffer( YY_BUFFER_STATE  );
void respop_buffer_state( void );
int reslex_destroy( void );
void yy_fatal_error( char * );
void resensure_buffer_stack( void );
void respush_buffer_state( YY_BUFFER_STATE  );
void res_switch_to_buffer( YY_BUFFER_STATE  );
YY_BUFFER_STATE res_scan_buffer( char *, yy_size_t  );
YY_BUFFER_STATE res_scan_bytes( char *, int  );
YY_BUFFER_STATE res_scan_string( char * );
void res_init_buffer( YY_BUFFER_STATE , FILE * );
YY_BUFFER_STATE res_create_buffer( FILE *, int  );
void resrestart( FILE * );
int reslex( void );
int fileno( void * );
int *__errno_location( void );
int __fprintf_chk( void *, int , char *, ... );
void *realloc( void *, unsigned int  );
void free( void * );
int isatty( int  );
unsigned int strlen( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
void *malloc( unsigned int  );
char *__strdup( char * );
void exit( int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdin;
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern int resleng;
extern FILE *resin;
extern FILE *resout;
extern int reslineno;
extern char *restext;
extern int res_flex_debug;
extern YYSTYPE reslval;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
