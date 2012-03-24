#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct __dirstream DIR;
struct __dirstream  ;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void exit_tmp( void );
void exit_db( void );
void exit_msg( void );
void print_warning( char *, ... );
void print_done( void );
int sprintf( char *, char *, ... );
int system( char * );
DIR *opendir( char * );
int chdir( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
int fprintf( void *, char *, ... );
void __stack_chk_fail( void );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int VERBOSE;
extern char TMPDIR[2048];
extern char TMPDB[2048];
extern char TMP_GISMAN[2048];
extern char TMP_DESCR[2048];
extern char TMP_INFO[2048];
extern char TMP_DEPS[2048];
extern char TMP_BUGS[2048];
extern char TMP_AUTHORS[2048];
extern char TMP_NULL[2048];
extern char TMP_HTML[2048];
extern int TMPCLEAN;
extern int TMPDBCLEAN;
extern char CWD[2048];
extern int ERROR;
extern int WARNINGS;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
