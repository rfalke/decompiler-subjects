#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct {
     unsigned long ClassID;
     unsigned long ClassProt;
     FILE *Console_fp;
     FILE *Error_fp;
     FILE *Report_fp;
     int disp_width;
     int disp_height;
     char str_up[10];
     char str_clreoln[10];
     char str_emph[10];
     char str_norm[10];
     char Console_buff[2048];
     int Console_file_type;
  } Console_IO_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int my_console_printing( FILE *, char *, va_list  );
int my_error_printing( FILE *, char *, va_list  );
int my_report_printing( FILE *, char *, va_list  );
void apply_termcap_settings( Console_IO_t * );
int init_console( Console_IO_t * );
void deinit_console( Console_IO_t * );
int frontend_open_console( void );
void frontend_close_console( void );
void frontend_debugf( char *, va_list  );
void frontend_msgf( char *, va_list  );
void frontend_errorf( char *, va_list  );
int console_printf( char *, ... );
int error_printf( char *, ... );
int report_printf( char *, ... );
void console_flush( void );
void error_flush( void );
void report_flush( void );
void console_up( int  );
void set_debug_file( char * );
int fputs( char *, FILE * );
char *getenv( char * );
void *memset( void *, int , unsigned int  );
FILE *fopen64( char *, char * );
int tgetent( char *, char * );
int fflush( FILE * );
int fclose( FILE * );
void *memcpy( void *, void *, unsigned int  );
char *strcpy( char *, char * );
int setvbuf( FILE *, char *, int , unsigned int  );
void __stack_chk_fail( void );
int tgetnum( char * );
int vfprintf( FILE *, char *, void * );
char *tgetstr( char *, char ** );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern Console_IO_t Console_IO;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
