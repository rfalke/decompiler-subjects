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
typedef struct {
     char *hl_text;
     short hl_x;
     char __pad[2];
  } HiliteInfo;
typedef struct {
     HiliteInfo *hl_info;
     HiliteInfo hl_base;
     short hl_len;
     char __pad[2];
  } HiliteList;
typedef struct _OptionType OptionType;
struct _OptionType {
     char *name;
     char *cp_submit_value;
     int value_cs;
     struct _OptionType *next;
  } ;
struct _FormInfo {
     char *name;
     int number;
     int type;
     char *value;
     char *orig_value;
     int size;
     unsigned int maxlength;
     int group;
     int num_value;
     int hrange;
     int lrange;
     OptionType *select_list;
     char *submit_action;
     int submit_method;
     char *submit_enctype;
     char *submit_title;
     BOOLEAN no_cache;
     char *cp_submit_value;
     char *orig_submit_value;
     int size_l;
     int disabled;
     int name_cs;
     int value_cs;
     char *accept_cs;
  } ;
typedef struct {
     char *lname;
     char *target;
     char *l_hightext;
     char *l_hightext2;
     int l_hightext2_offset;
     BOOLEAN inUnderline;
     int lx;
     int ly;
     int type;
     int sgml_offset;
     int anchor_number;
     int anchor_line_num;
     HiliteList list;
     struct _FormInfo *l_form;
  } LinkInfo;
typedef unsigned short LYKeymap_t;
typedef struct _LYUCcharset LYUCcharset;
struct _LYUCcharset {
     int UChndl;
     char *MIMEname;
     int enc;
     int codepage;
     int repertoire;
     int codepoints;
     int cpranges;
     int like8859;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void cleanup_sig( int  );
void edit_temporary_file( char *, char *, char * );
char *LYstrncpy( char *, char *, int  );
int LYgetch( void );
int LYgetstr( char *, int , size_t , RecallType  );
char *LYSafeGets( char **, FILE * );
void terminate_letter( int  );
void SafeHTUnEscape( char * );
void remove_tildes( char * );
void comma_append( char **, char * );
void extract_field( char **, char *, char * );
void extract_subject( char *, char * );
void extract_body( char **, char * );
BOOLEAN trim_comma( char * );
BOOLEAN convert_explorer( char * );
int header_prompt( char *, char **, unsigned int  );
void show_addresses( char * );
FILE *LYPipeToMailer( void );
void mailform( char *, char *, char *, char * );
void mailmsg( int , char *, char *, char * );
void reply_by_mail( char *, char *, char *, char * );
BOOLEAN LYSystemMail( void );
void HTAlert( char * );
void HTInfoMsg( char * );
BOOLEAN HTConfirm( char * );
void LYSleepMsg( void );
void print_wwwfile_to_fd( FILE *, BOOLEAN , BOOLEAN  );
void user_message( char *, char * );
int HTisDocumentSource( void );
char *HTLoadedDocumentURL( void );
void exit_immediately( int  );
FILE *TraceFP( void );
void LYwaddnstr( WINDOW *, char *, size_t  );
void LYclear( void );
void LYmove( int , int  );
void LYrefresh( void );
char *LYGetHiliteStr( int , int  );
void statusline( char * );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCloseOutput( FILE * );
FILE *LYNewTxtFile( char * );
FILE *LYAppendToTxtFile( char * );
FILE *LYOpenTemp( char *, char *, char * );
void LYCloseTempFP( FILE * );
int LYRemoveTemp( char * );
char *HTUnEscape( char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
int scrollok( WINDOW *, int  );
int fputs( char *, FILE * );
int sprintf( char *, char *, ... );
FILE *popen( char *, char * );
__sighandler_t signal( int , __sighandler_t  );
char *strchr( char *, char  );
char *strncpy( char *, char *, unsigned int  );
FILE *fopen64( char *, char * );
void perror( char * );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
int fputc( int , FILE * );
unsigned int fread( void *, unsigned int , unsigned int , FILE * );
int strcmp( char *, char * );
int pclose( FILE * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN term_letter;
extern int LYlines;
extern LinkInfo links[1024];
extern char *LynxSigFile;
extern char *system_mail;
extern char *system_mail_flags;
extern BOOLEAN no_editor;
extern char *personal_mail_address;
extern char *editor;
extern BOOLEAN traversal;
extern int LYStatusLine;
extern BOOLEAN LYNoCc;
extern BOOLEAN LYPreparsedSource;
extern WINDOW *LYwin;
extern BOOLEAN mustshow;
extern LYKeymap_t keymap[661];
extern BOOLEAN LYHaveCJKCharacterSet;
extern int current_char_set;
extern LYUCcharset LYCharSet_UC[60];
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
