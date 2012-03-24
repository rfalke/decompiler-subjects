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
typedef enum  { UIP_UNKNOWN = -1, UIP_HISTORY = 0, UIP_DOWNLOAD_OPTIONS = 1, UIP_PRINT_OPTIONS = 2, UIP_SHOWINFO = 3, UIP_LIST_PAGE = 4, UIP_VLINKS = 5, UIP_LYNXCFG = 6, UIP_OPTIONS_MENU = 7, UIP_DIRED_MENU = 8, UIP_PERMIT_OPTIONS = 9, UIP_UPLOAD_OPTIONS = 10, UIP_ADDRLIST_PAGE = 11, UIP_CONFIG_DEF = 12, UIP_TRACELOG = 13, UIP_INSTALL = 14, } UIP_t;
typedef struct {
     char *str;
     int len;
  } bstring;
typedef char BOOLEAN;
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
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef long __blksize_t;
typedef __quad_t __blkcnt64_t;
typedef long __time_t;
struct timespec {
     __time_t tv_sec;
     long tv_nsec;
  } ;
typedef __u_quad_t __ino64_t;
struct stat {
     __dev_t st_dev;
     unsigned short __pad1;
     __ino_t __st_ino;
     __mode_t st_mode;
     __nlink_t st_nlink;
     __uid_t st_uid;
     __gid_t st_gid;
     __dev_t st_rdev;
     unsigned short __pad2;
     __off64_t st_size;
     __blksize_t st_blksize;
     __blkcnt64_t st_blocks;
     struct timespec  st_atim;
     struct timespec  st_mtim;
     struct timespec  st_ctim;
     __ino64_t st_ino;
  } ;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef enum  { ppUnknown = 0, ppBZIP2 = 1, ppCHMOD = 2, ppCOMPRESS = 3, ppCOPY = 4, ppCSWING = 5, ppGZIP = 6, ppINFLATE = 7, ppINSTALL = 8, ppMKDIR = 9, ppMV = 10, ppRLOGIN = 11, ppRM = 12, ppRMDIR = 13, ppSETFONT = 14, ppTAR = 15, ppTELNET = 16, ppTN3270 = 17, ppTOUCH = 18, ppUNCOMPRESS = 19, ppUNZIP = 20, ppUUDECODE = 21, ppZCAT = 22, ppZIP = 23, pp_Last = 24, } ProgramPaths;
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
typedef int __pid_t;
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
typedef struct _lynx_list_item_type lynx_list_item_type;
struct _lynx_list_item_type {
     struct _lynx_list_item_type *next;
     char *name;
     char *command;
     int always_enabled;
     BOOLEAN override_primary_action;
     int pagelen;
  } ;
struct dired_menu {
     int cond;
     char *sfx;
     char *link;
     char *rest;
     char *href;
     struct dired_menu *next;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
int LYgetch_single( void );
int LYgetstr( char *, int , size_t , RecallType  );
void HTAlert( char * );
BOOLEAN HTConfirm( char * );
void LYSleepAlert( void );
FILE *TraceFP( void );
void handle_LYK_CHDIR( void );
void start_curses( void );
void stop_curses( void );
void LYmove( int , int  );
void LYrefresh( void );
void lynx_stop_reverse( void );
char *strip_trailing_slash( char * );
void statusline( char * );
BOOLEAN LYisAbsPath( char * );
BOOLEAN LYisRootPath( char * );
UrlTypes is_url( char * );
char *Home_Dir( void );
char *LYPathLeaf( char * );
FILE *LYOpenTemp( char *, char *, char * );
void LYCloseTempFP( FILE * );
int LYRemoveTemp( char * );
void LYRegisterUIPage( char *, UIP_t  );
char *wwwName( char * );
void LYLocalFileToURL( char **, char * );
FILE *InternalPageFP( char *, int  );
void BeginInternalPage( FILE *, char *, char * );
void EndInternalPage( FILE * );
void LYTrimPathSep( char * );
void LYAddPathSep( char ** );
char *LYLastPathSep( char * );
void LYAddHtmlSep( char ** );
int LYCopyFile( char *, char * );
int LYSystem( char * );
void LYpop( DocInfo * );
int LYUpload( char * );
void LYexit( int  );
void outofmem( char *, char * );
void LYEntify( char **, BOOLEAN  );
BOOLEAN cannot_stat( char * );
BOOLEAN ok_stat( char *, struct stat * );
BOOLEAN ok_lstat( char *, struct stat * );
BOOLEAN ok_file_or_dir( struct stat * );
int LYExecv( char *, char **, char * );
int make_directory( char * );
int remove_file( char * );
int remove_directory( char * );
int touch_file( char * );
int move_file( char *, char * );
BOOLEAN not_already_exists( char * );
BOOLEAN dir_has_same_owner( struct stat *, int  );
int remove_tagged( void );
int modify_tagged( char * );
int modify_name( char * );
int modify_location( char * );
int local_modify( DocInfo *, char ** );
int create_file( char * );
int create_directory( char * );
int local_create( DocInfo * );
int remove_single( char * );
int local_remove( DocInfo * );
long permit_bits( char * );
int permit_location( char *, char *, char ** );
void tagflag( int , int  );
void showtags( HTList * );
char *DirectoryOf( char * );
char *match_op( char *, char * );
char *build_command( char *, char *, char * );
int local_dired( DocInfo * );
int dired_options( DocInfo *, char ** );
char *get_filename( char *, char *, size_t  );
void clear_tags( void );
void add_menu_item( char * );
void reset_dired_menu( void );
char *render_item( char *, char *, char *, char *, int , BOOLEAN  );
char *HTParse( char *, char *, int  );
char *HTRelative( char *, char * );
char *HTEscape( char *, unsigned char  );
char *HTUnEscape( char * );
char *HTUnEscapeSome( char *, char * );
char *HTURLPath_toFile( char *, BOOLEAN , BOOLEAN  );
char *HTnameOfFile_WWW( char *, BOOLEAN , BOOLEAN  );
char *HTGetProgramPath( ProgramPaths  );
void *HTList_removeLastObject( HTList * );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTAddToCmd( char **, char *, int , char * );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
char *HTAA_GidToName( int  );
int *__errno_location( void );
int sprintf( char *, char *, ... );
int mkdir( char *, __mode_t  );
int waddch( WINDOW *, unsigned long  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int rename( char *, char * );
FILE *fopen64( char *, char * );
char *strrchr( char *, char  );
int chmod( char *, __mode_t  );
char *gettext( char * );
void free( void * );
int fclose( FILE * );
int execv( char *, char [0] );
unsigned int strlen( char * );
__pid_t waitpid( __pid_t , int *, int  );
char *strcpy( char *, char * );
int printf( char *, ... );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
int remove( char * );
void __stack_chk_fail( void );
int rmdir( char * );
__pid_t fork( void );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
int lstat64( char *, void * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern BOOLEAN LYShowScrollbar;
extern int LYlines;
extern int LYcols;
extern LinkInfo links[1024];
extern int nlinks;
extern BOOLEAN LYforce_no_cache;
extern BOOLEAN no_dotfiles;
extern BOOLEAN show_dotfiles;
extern HTList *tagged;
extern BOOLEAN LYShowCursor;
extern WINDOW *LYwin;
extern BOOLEAN LYCursesON;
extern BOOLEAN no_change_exec_perms;
extern BOOLEAN mustshow;
extern lynx_list_item_type *uploaders;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
