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
typedef char BOOLEAN;
typedef struct {
     char *str;
     int len;
  } bstring;
typedef struct {
     char *title;
     char *address;
     bstring *post_data;
     char *post_content_type;
     char *bookmark;
     BOOLEAN isHEAD;
     BOOLEAN safe;
     int link;
     int line;
     BOOLEAN internal_link;
     char *style;
  } DocInfo;
typedef struct {
     DocInfo hdoc;
     int intern_seq_start;
  } HistInfo;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void cleanup( void );
void LYTrimTrailing( char * );
char *LYSafeGets( char **, FILE * );
void exit_immediately( int  );
FILE *TraceFP( void );
void stop_curses( void );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCloseOutput( FILE * );
FILE *LYNewTxtFile( char * );
FILE *LYAppendToTxtFile( char * );
void final_perror( char *, BOOLEAN  );
void exit_with_perror( char * );
BOOLEAN lookup_link( char * );
void add_to_table( char * );
void add_to_traverse_list( char *, char * );
void dump_traversal_history( void );
void add_to_reject_list( char * );
BOOLEAN lookup_reject( char * );
char *HTSprintf0( char **, char *, ... );
int *__errno_location( void );
FILE *fopen64( char *, char * );
void perror( char * );
char *gettext( char * );
void free( void * );
unsigned int strlen( char * );
int fprintf( FILE *, char *, ... );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int nhist;
extern HistInfo *history;
extern BOOLEAN LYCursesON;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
