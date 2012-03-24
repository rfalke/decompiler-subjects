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
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
int LYgetstr( char *, int , size_t , RecallType  );
void HTAlert( char * );
void HTInfoMsg( char * );
FILE *TraceFP( void );
void start_curses( void );
void stop_curses( void );
void statusline( char * );
BOOLEAN LYCanWriteFile( char * );
void HTAddSugFilename( char * );
void change_sug_filename( char * );
char *LYPathLeaf( char * );
char *LYAddPathToSave( char * );
void LYRelaxFilePermissions( char * );
void LYCloseTempFP( FILE * );
void LYRegisterUIPage( char *, UIP_t  );
BOOLEAN LYValidateFilename( char *, char * );
int LYValidateOutput( char * );
void LYLocalFileToURL( char **, char * );
FILE *InternalPageFP( char *, int  );
void BeginInternalPage( FILE *, char *, char * );
void EndInternalPage( FILE * );
int LYCopyFile( char *, char * );
int LYSystem( char * );
void LYDownload( char * );
int SuffixIs( char *, char * );
int LYdownload_options( char **, char * );
char *HTUnEscape( char * );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
int HTCountCommandArgs( char * );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
int fputs( char *, FILE * );
char *strncpy( char *, char *, unsigned int  );
char *gettext( char * );
void free( void * );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int atoi( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void __stack_chk_fail( void );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN lynx_edit_mode;
extern BOOLEAN LYforce_no_cache;
extern int user_mode;
extern BOOLEAN no_dotfiles;
extern BOOLEAN show_dotfiles;
extern BOOLEAN no_disk_save;
extern BOOLEAN no_download;
extern char *lynx_save_space;
extern BOOLEAN mustshow;
extern lynx_list_item_type *downloaders;
extern HTList *sug_filenames;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
