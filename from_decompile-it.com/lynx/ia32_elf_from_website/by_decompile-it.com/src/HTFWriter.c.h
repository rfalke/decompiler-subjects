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
typedef struct _HTStream HTStream;
typedef struct _HTStreamClass HTStreamClass;
typedef void *HTError;
struct _HTStreamClass {
     char *name;
     void (*_free)( HTStream * );
     void (*_abort)( HTStream *, HTError  );
     void (*put_character)( HTStream *, char  );
     void (*put_string)( HTStream *, char * );
     void (*put_block)( HTStream *, char *, int  );
  } ;
typedef struct _HTAtom HTAtom;
struct _HTAtom {
     HTAtom *next;
     char *name;
  } ;
typedef HTAtom *HTFormat;
typedef struct _HTParentAnchor HTParentAnchor;
typedef struct _HTParentAnchor0 HTParentAnchor0;
typedef struct _HTBTree_top HTBTree;
typedef int (*HTComparer)( void *, void * );
struct _HTBTree_element {
     void *object;
     struct _HTBTree_element *up;
     struct _HTBTree_element *left;
     int left_depth;
     struct _HTBTree_element *right;
     int right_depth;
  } ;
struct _HTBTree_top {
     HTComparer compare;
     struct _HTBTree_element *top;
  } ;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef char BOOLEAN;
struct _HTParentAnchor0 {
     HTParentAnchor0 *parent;
     char *address;
     HTParentAnchor *info;
     HTBTree *children;
     HTList sources;
     HTList _add_adult;
     short adult_hash;
     BOOLEAN underway;
     char __pad[1];
  } ;
typedef struct _HyperDoc HyperDoc;
struct _HyperDoc  ;
typedef struct {
     char *str;
     int len;
  } bstring;
typedef struct _HTChunk HTChunk;
struct _HTChunk {
     int size;
     int growby;
     int allocated;
     char *data;
     int failok;
     HTChunk *next;
  } ;
typedef struct _UCAnchorInfo UCAnchorInfo;
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
struct _UCStageInfo {
     int lock;
     int LYhndl;
     LYUCcharset C;
  } ;
struct _UCAnchorInfo {
     struct _UCStageInfo  s[4];
  } ;
struct _HTParentAnchor {
     HTParentAnchor0 *parent;
     HTList children_notag;
     HyperDoc *document;
     char *address;
     bstring *post_data;
     char *post_content_type;
     char *bookmark;
     HTFormat format;
     char *charset;
     BOOLEAN isIndex;
     char *isIndexAction;
     char *isIndexPrompt;
     char *title;
     char *owner;
     char *RevTitle;
     char *citehost;
     char *style;
     HTList *methods;
     void *protocol;
     char *physical;
     BOOLEAN isISMAPScript;
     BOOLEAN isHEAD;
     BOOLEAN safe;
     char *source_cache_file;
     HTChunk *source_cache_chunk;
     char *FileCache;
     char *SugFname;
     char *cache_control;
     BOOLEAN no_cache;
     BOOLEAN inBASE;
     char *content_type_params;
     char *content_type;
     char *content_language;
     char *content_encoding;
     char *content_base;
     char *content_disposition;
     char *content_location;
     char *content_md5;
     char *message_id;
     char *subject;
     int content_length;
     char *date;
     char *expires;
     char *last_modified;
     char *ETag;
     char *server;
     UCAnchorInfo *UCStages;
     HTList *imaps;
  } ;
struct _HTStream {
     HTStreamClass *isa;
     FILE *fp;
     char *end_command;
     char *remove_command;
     char *viewer_command;
     HTFormat input_format;
     HTFormat output_format;
     HTParentAnchor *anchor;
     HTStream *sink;
  } ;
typedef struct _HTPresentation HTPresentation;
typedef HTStream *HTConverter( HTPresentation *, HTParentAnchor *, HTStream * );
typedef __off64_t off_t;
struct _HTPresentation {
     HTAtom *rep;
     HTAtom *rep_out;
     HTConverter *converter;
     char *command;
     char *testcommand;
     float quality;
     float secs;
     float secs_per_byte;
     off_t maxbytes;
     BOOLEAN get_accept;
     int accept_opt;
  } ;
typedef enum  { ppUnknown = 0, ppBZIP2 = 1, ppCHMOD = 2, ppCOMPRESS = 3, ppCOPY = 4, ppCSWING = 5, ppGZIP = 6, ppINFLATE = 7, ppINSTALL = 8, ppMKDIR = 9, ppMV = 10, ppRLOGIN = 11, ppRM = 12, ppRMDIR = 13, ppSETFONT = 14, ppTAR = 15, ppTELNET = 16, ppTN3270 = 17, ppTOUCH = 18, ppUNCOMPRESS = 19, ppUNZIP = 20, ppUUDECODE = 21, ppZCAT = 22, ppZIP = 23, pp_Last = 24, } ProgramPaths;
typedef unsigned int __mode_t;
typedef unsigned short LYKeymap_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int LYgetch_single( void );
char *LYRemoveBlanks( char * );
void HTAlert( char * );
void HTInfoMsg2( char *, char * );
void HTProgress( char * );
void user_message( char *, char * );
void exit_immediately( int  );
FILE *TraceFP( void );
void start_curses( void );
void stop_curses( void );
void LYrefresh( void );
void lynx_force_repaint( void );
void statusline( char * );
UrlTypes is_url( char * );
BOOLEAN LYCanReadFile( char * );
BOOLEAN LYCachedTemp( char *, char ** );
FILE *LYOpenTemp( char *, char *, char * );
FILE *LYOpenTempRewrite( char *, char *, char * );
void LYCloseTempFP( FILE * );
int LYRemoveTemp( char * );
void LYRenamedTemp( char *, char * );
void LYLocalFileToURL( char **, char * );
int LYSystem( char * );
void LYstore_message2( char *, char * );
char *key_for_func( int  );
void HTFWriter_error( HTStream *, char * );
void HTFWriter_put_character( HTStream *, char  );
void HTFWriter_put_string( HTStream *, char * );
void HTFWriter_write( HTStream *, char *, int  );
void HTFWriter_free( HTStream * );
void HTFWriter_abort( HTStream *, HTError  );
HTStream *HTFWriter_new( FILE * );
char *mailcap_substitute( HTParentAnchor *, HTPresentation *, char * );
HTStream *HTSaveAndExecute( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTSaveToFile( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTCompressed( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTDumpToStdout( HTPresentation *, HTParentAnchor *, HTStream * );
BOOLEAN LYMailcapUsesPctS( char * );
char *LYMakeMailcapCommand( char *, char *, char * );
void outofmem( char *, char * );
void LYStoreCookies( char * );
char *HTFileSuffix( HTAtom *, char * );
CompressFileType HTEncodingToCompressType( char * );
int HTLoadFile( char *, HTParentAnchor *, HTFormat , HTStream * );
char *HTGetProgramPath( ProgramPaths  );
HTStream *HTPlainPresent( HTPresentation *, HTParentAnchor *, HTStream * );
HTAtom *HTAtom_for( char * );
int HTAnchor_getUCLYhndl( HTParentAnchor *, int  );
LYUCcharset *HTAnchor_copyUCInfoStage( HTParentAnchor *, int , int , int  );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
int fputs( char *, FILE * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
char *strerror( int  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int chmod( char *, __mode_t  );
char *gettext( char * );
void free( void * );
int fflush( FILE * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
int unlink( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
int remove( char * );
void __stack_chk_fail( void );
char *strcat( char *, char * );
int strncmp( char *, char *, unsigned int  );
int _IO_putc( char , void * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern BOOLEAN local_exec;
extern BOOLEAN local_exec_on_local_files;
extern BOOLEAN LYJumpFileURL;
extern BOOLEAN dump_output_immediately;
extern BOOLEAN no_exec;
extern BOOLEAN traversal;
extern BOOLEAN persistent_cookies;
extern char *LYCookieSaveFile;
extern BOOLEAN no_disk_save;
extern BOOLEAN no_download;
extern BOOLEAN override_no_download;
extern BOOLEAN LYCancelledFetch;
extern BOOLEAN mustshow;
extern BOOLEAN LYPrependBaseToSource;
extern BOOLEAN LYPrependCharsetToSource;
extern LYKeymap_t keymap[661];
extern BOOLEAN LYCancelDownload;
extern char *WWW_Download_File;
extern HTFormat HTOutputFormat;
extern BOOLEAN WWW_TraceFlag;
extern HTList *HTPresentations;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
