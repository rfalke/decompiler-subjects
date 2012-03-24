#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef enum  { NORECALL = 0, RECALL_URL = 1, RECALL_CMD = 2, RECALL_MAIL = 3, } RecallType;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef __off64_t off_t;
typedef char BOOLEAN;
typedef struct _domain_entry domain_entry;
typedef enum  { ACCEPT_ALWAYS = 0, REJECT_ALWAYS = 1, QUERY_USER = 2, } behaviour_t;
typedef enum  { INVCHECK_QUERY = 0, INVCHECK_STRICT = 1, INVCHECK_LOOSE = 2, } invcheck_behaviour_t;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
struct _domain_entry {
     char *domain;
     behaviour_t bv;
     invcheck_behaviour_t invcheck_bv;
     HTList *cookie_list;
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
typedef unsigned short LYKeymap_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int LYgetch_single( void );
int LYgetstr( char *, int , size_t , RecallType  );
void HTAlert( char * );
void HTAlwaysAlert( char *, char * );
void HTInfoMsg( char * );
void HTInfoMsg2( char *, char * );
void HTUserMsg( char * );
void HTUserMsg2( char *, char * );
void HTProgress( char * );
char *HTProgressUnits( int  );
char *sprint_bytes( char *, off_t , char * );
char *sprint_tbuf( char *, long  );
void HTReadProgress( off_t , off_t  );
int HTForcedPrompt( int , char *, int  );
int HTConfirmDefault( char *, int  );
BOOLEAN HTConfirm( char * );
BOOLEAN confirm_post_resub( char *, char *, int , int  );
char *HTPrompt( char *, char * );
char *HTPromptPassword( char * );
void HTPromptUsernameAndPassword( char *, char **, char **, BOOLEAN  );
BOOLEAN HTConfirmCookie( domain_entry *, char *, char *, char * );
int HTConfirmPostRedirect( char *, int  );
void LYSleepAlert( void );
void LYSleepDebug( void );
void LYSleepInfo( void );
void LYSleepMsg( void );
void LYSleepReplay( void );
void user_message( char *, char * );
FILE *TraceFP( void );
void LYwaddnstr( WINDOW *, char *, size_t  );
int LYstrCells( char * );
void LYclrtoeol( void );
void LYmove( int , int  );
void statusline( char * );
void LYstore_message2( char *, char * );
void LYstore_message( char * );
char *HTParse( char *, char *, int  );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
int sprintf( char *, char *, ... );
char *strchr( char *, char  );
char *strncpy( char *, char *, unsigned int  );
int toupper( int  );
char *strrchr( char *, char  );
char *gettext( char * );
int gettimeofday( void *, void * );
void free( void * );
int fflush( FILE * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
int printf( char *, ... );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
int fputc( int , FILE * );
int napms( int  );
long long __divdi3( long long , long long  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern BOOLEAN LYShowScrollbar;
extern int LYlines;
extern int LYcols;
extern BOOLEAN LYShowTransferRate;
extern BOOLEAN dump_output_immediately;
extern BOOLEAN dump_to_stderr;
extern char *LYTransferName;
extern int LYTransferRate;
extern int user_mode;
extern char *authentication_info[2];
extern char *proxyauth_info[2];
extern BOOLEAN crawl;
extern BOOLEAN traversal;
extern int AlertSecs;
extern int InfoSecs;
extern int MessageSecs;
extern int DebugSecs;
extern int ReplaySecs;
extern BOOLEAN LYSetCookies;
extern BOOLEAN LYAcceptAllCookies;
extern FILE *LYTraceLogFP;
extern WINDOW *LYwin;
extern BOOLEAN LYCursesON;
extern BOOLEAN mustshow;
extern LYKeymap_t keymap[661];
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
