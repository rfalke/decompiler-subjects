#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef void (*__sighandler_t)( int  );
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
typedef char BOOLEAN;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void cleanup_sig( int  );
void cleanup_files( void );
void cleanup( void );
void reset_signals( void );
void exit_immediately( int  );
void LYCloseTracelog( void );
void stop_curses( void );
void LYclrtoeol( void );
void LYmove( int , int  );
void LYrefresh( void );
void lynx_stop_all_colors( void );
void LYCleanupTemp( void );
void dump_traversal_history( void );
void LYStoreCookies( char * );
__sighandler_t signal( int , __sighandler_t  );
char *gettext( char * );
void free( void * );
int fflush( FILE * );
int printf( char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int LYlines;
extern BOOLEAN dump_output_immediately;
extern char *lynx_temp_space;
extern BOOLEAN traversal;
extern BOOLEAN persistent_cookies;
extern char *LYCookieSaveFile;
extern BOOLEAN LYCursesON;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
