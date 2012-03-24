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
typedef char BOOLEAN;
typedef unsigned int __mode_t;
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
int LYgetstr( char *, int , size_t , RecallType  );
void HTAlert( char * );
void HTInfoMsg( char * );
FILE *TraceFP( void );
void start_curses( void );
void stop_curses( void );
void statusline( char * );
BOOLEAN LYCanWriteFile( char * );
void LYCloseTempFP( FILE * );
void LYRegisterUIPage( char *, UIP_t  );
int LYValidateOutput( char * );
void LYLocalFileToURL( char **, char * );
FILE *InternalPageFP( char *, int  );
void BeginInternalPage( FILE *, char *, char * );
void EndInternalPage( FILE * );
void LYTrimPathSep( char * );
int LYSystem( char * );
int LYUpload( char * );
int LYUpload_options( char **, char * );
char *HTnameOfFile_WWW( char *, BOOLEAN , BOOLEAN  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
int HTCountCommandArgs( char * );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
int fputs( char *, FILE * );
char *strchr( char *, char  );
int chmod( char *, __mode_t  );
char *gettext( char * );
void free( void * );
char *strcpy( char *, char * );
int atoi( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void __stack_chk_fail( void );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN LYforce_no_cache;
extern BOOLEAN mustshow;
extern lynx_list_item_type *uploaders;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
