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
typedef struct _DocAddress DocAddress;
struct _DocAddress {
   char *address;
   bstring *post_data;
   char *post_content_type;
   char *bookmark;
   BOOLEAN isHEAD;
   BOOLEAN safe;
   char __pad[2];
} ;
typedef struct _HTAtom HTAtom;
struct _HTAtom {
   HTAtom *next;
   char *name;
} ;
typedef struct _HTList HTList;
struct _HTList {
   void *object;
   HTList *next;
} ;
typedef void (*__sighandler_t)( int  );
typedef struct _lynx_list_item_type lynx_list_item_type;
struct _lynx_list_item_type {
   struct _lynx_list_item_type *next;
   char *name;
   char *command;
   int always_enabled;
   BOOLEAN override_primary_action;
   int pagelen;
} ;
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
char *LYstrncpy( char *, char *, int  );
int LYgetch( void );
char *LYRemoveBlanks( char * );
int LYgetstr( char *, int , size_t , RecallType  );
FILE *LYPipeToMailer( void );
BOOLEAN LYSystemMail( void );
void HTAlert( char * );
void HTInfoMsg( char * );
void HTUserMsg( char * );
int HTConfirmDefault( char *, int  );
void LYSleepMsg( void );
char *HText_getTitle( void );
char *HText_getSugFname( void );
char *HText_getLastModified( void );
char *HText_getDate( void );
void print_wwwfile_to_fd( FILE *, BOOLEAN , BOOLEAN  );
char *HText_getContentBase( void );
char *HText_getContentLocation( void );
int HTisDocumentSource( void );
BOOLEAN HTLoadedDocumentEightbit( void );
FILE *TraceFP( void );
void start_curses( void );
void stop_curses( void );
void LYwaddnstr( WINDOW *, char *, size_t  );
void LYmove( int , int  );
void statusline( char * );
UrlTypes is_url( char * );
BOOLEAN LYCloseOutput( FILE * );
BOOLEAN LYCanReadFile( char * );
void HTAddSugFilename( char * );
void change_sug_filename( char * );
char *LYPathLeaf( char * );
FILE *LYNewTxtFile( char * );
FILE *LYAppendToTxtFile( char * );
FILE *LYOpenTemp( char *, char *, char * );
void LYCloseTempFP( FILE * );
int LYRemoveTemp( char * );
BOOLEAN LYValidateFilename( char *, char * );
int LYValidateOutput( char * );
void LYLocalFileToURL( char **, char * );
FILE *InternalPageFP( char *, int  );
void BeginInternalPage( FILE *, char *, char * );
void EndInternalPage( FILE * );
int LYSystem( char * );
void LYpop( DocInfo * );
void set_environ( int , char *, char * );
char *suggested_filename( DocInfo * );
void SetupFilename( char *, char * );
int RecallFilename( char *, BOOLEAN *, int *, int *, int  );
BOOLEAN confirm_by_pages( char *, int , int  );
void send_file_to_file( DocInfo *, char *, char * );
void send_file_to_mail( DocInfo *, char *, char * );
void send_file_to_printer( DocInfo *, char *, char *, int  );
void send_file_to_screen( DocInfo *, char *, BOOLEAN  );
int printfile( DocInfo * );
char *subject_translate8bit( char * );
int print_options( char **, char *, int  );
char *GetFileName( void );
void outofmem( char *, char * );
void printlist( FILE *, BOOLEAN  );
BOOLEAN LYUCTranslateBackFormData( char **, int , int , BOOLEAN  );
BOOLEAN HTLoadAbsolute( DocAddress * );
HTFormat HTFileFormat( char *, HTAtom **, char ** );
CompressFileType HTCompressFileType( char *, char *, int * );
HTAtom *HTAtom_for( char * );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
int HTCountCommandArgs( char * );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
int fputs( char *, FILE * );
int *__errno_location( void );
FILE *popen( char *, char * );
__sighandler_t signal( int , __sighandler_t  );
void *calloc( unsigned int , unsigned int  );
int toupper( int  );
char *strrchr( char *, char  );
char *gettext( char * );
void free( void * );
int fflush( FILE * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int printf( char *, ... );
int atoi( char * );
int putenv( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void __stack_chk_fail( void );
int fputc( int , FILE * );
char *strcat( char *, char * );
int strcmp( char *, char * );
int pclose( FILE * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int LYlines;
extern BOOLEAN LYforce_no_cache;
extern int keypad_mode;
extern int user_mode;
extern BOOLEAN no_dotfiles;
extern BOOLEAN no_mail;
extern BOOLEAN local_host_only;
extern BOOLEAN show_dotfiles;
extern char *personal_mail_address;
extern BOOLEAN LYPreparsedSource;
extern BOOLEAN no_disk_save;
extern BOOLEAN no_shell;
extern WINDOW *LYwin;
extern char *lynx_save_space;
extern BOOLEAN no_print;
extern BOOLEAN mustshow;
extern lynx_list_item_type *printers;
extern int outgoing_mail_charset;
extern BOOLEAN LYPrependBaseToSource;
extern BOOLEAN LYPrependCharsetToSource;
extern HTList *sug_filenames;
extern BOOLEAN LYHaveCJKCharacterSet;
extern int current_char_set;
extern LYUCcharset LYCharSet_UC[60];
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
