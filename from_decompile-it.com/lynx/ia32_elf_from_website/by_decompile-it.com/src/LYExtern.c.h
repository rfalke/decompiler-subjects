#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef char BOOLEAN;
typedef struct _lynx_list_item_type lynx_list_item_type;
struct _lynx_list_item_type {
     struct _lynx_list_item_type *next;
     char *name;
     char *command;
     int always_enabled;
     BOOLEAN override_primary_action;
     int pagelen;
  } ;
typedef struct _win_st WINDOW;
typedef unsigned long chtype;
typedef chtype attr_t;
struct pdat {
     short _pad_y;
     short _pad_x;
     short _pad_top;
     short _pad_left;
     short _pad_bottom;
     short _pad_right;
  } ;
typedef int wchar_t;
typedef struct {
     attr_t attr;
     wchar_t chars[5];
  } cchar_t;
struct _win_st {
     short _cury;
     short _curx;
     short _maxy;
     short _maxx;
     short _begy;
     short _begx;
     short _flags;
     attr_t _attrs;
     chtype _bkgd;
     _Bool _notimeout;
     _Bool _clear;
     _Bool _leaveok;
     _Bool _scroll;
     _Bool _idlok;
     _Bool _idcok;
     _Bool _immed;
     _Bool _sync;
     _Bool _use_keypad;
     int _delay;
     struct ldat *_line;
     short _regtop;
     short _regbottom;
     int _parx;
     int _pary;
     WINDOW *_parent;
     struct pdat  _pad;
     short _yoffset;
     cchar_t _bkgrnd;
  } ;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int LYhandlePopupList( int , int , int , char **, int , int , int , BOOLEAN  );
void HTInfoMsg( char * );
void HTUserMsg( char * );
FILE *TraceFP( void );
void start_curses( void );
void stop_curses( void );
int LYSystem( char * );
int match_item_by_name( lynx_list_item_type *, char *, BOOLEAN  );
void format( char **, char *, char * );
char *format_command( char *, char * );
char *lookup_external( char *, BOOLEAN  );
BOOLEAN run_external( char *, BOOLEAN  );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
int wmove( WINDOW *, int , int  );
void *calloc( unsigned int , unsigned int  );
char *gettext( char * );
void free( void * );
int fflush( FILE * );
int fprintf( FILE *, char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern WINDOW *LYwin;
extern BOOLEAN no_externals;
extern lynx_list_item_type *externals;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
