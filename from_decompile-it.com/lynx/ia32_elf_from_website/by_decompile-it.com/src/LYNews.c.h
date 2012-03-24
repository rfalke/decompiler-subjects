#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef enum  { NORECALL = 0, RECALL_URL = 1, RECALL_CMD = 2, RECALL_MAIL = 3, } RecallType;
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
typedef char BOOLEAN;
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
typedef void (*__sighandler_t)( int  );
typedef unsigned short LYKeymap_t;
typedef enum  { NOKANJI = 0, EUC = 1, SJIS = 2, JIS = 3, } HTkcode;
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void cleanup_sig( int  );
void edit_temporary_file( char *, char *, char * );
char *LYstrncpy( char *, char *, int  );
char *LYSkipCBlanks( char * );
char *LYTrimNewline( char * );
int LYgetstr( char *, int , size_t , RecallType  );
char *LYSafeGets( char **, FILE * );
void HTAlert( char * );
void HTInfoMsg( char * );
void HTUserMsg( char * );
int HTConfirmDefault( char *, int  );
BOOLEAN HTConfirm( char * );
char *HText_getTitle( void );
void print_wwwfile_to_fd( FILE *, BOOLEAN , BOOLEAN  );
void user_message( char *, char * );
FILE *TraceFP( void );
void LYwaddnstr( WINDOW *, char *, size_t  );
void LYclear( void );
void LYmove( int , int  );
void LYrefresh( void );
char *LYGetEnv( char * );
void statusline( char * );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCloseOutput( FILE * );
FILE *LYAppendToTxtFile( char * );
FILE *LYOpenTemp( char *, char *, char * );
void LYCloseTempFP( FILE * );
int LYRemoveTemp( char * );
BOOLEAN message_has_content( char *, BOOLEAN * );
char *LYNewsPost( char *, BOOLEAN  );
void terminate_message( int  );
int UCGetLYhndl_byMIME( char * );
char *HTUnEscape( char * );
unsigned char *TO_EUC( unsigned char *, unsigned char * );
void TO_SJIS( unsigned char *, unsigned char * );
void TO_JIS( unsigned char *, unsigned char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
int scrollok( WINDOW *, int  );
int fputs( char *, FILE * );
int sprintf( char *, char *, ... );
int waddch( WINDOW *, unsigned long  );
__sighandler_t signal( int , __sighandler_t  );
char *strchr( char *, char  );
FILE *fopen64( char *, char * );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void __stack_chk_fail( void );
int fputc( int , FILE * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int LYlines;
extern int nhist;
extern BOOLEAN LYforce_no_cache;
extern char *LynxSigFile;
extern BOOLEAN no_editor;
extern BOOLEAN no_newspost;
extern char *personal_mail_address;
extern char *editor;
extern int LYStatusLine;
extern WINDOW *LYwin;
extern BOOLEAN mustshow;
extern BOOLEAN term_message;
extern LYKeymap_t keymap[661];
extern HTkcode kanji_code;
extern int current_char_set;
extern HTCJKlang HTCJK;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
