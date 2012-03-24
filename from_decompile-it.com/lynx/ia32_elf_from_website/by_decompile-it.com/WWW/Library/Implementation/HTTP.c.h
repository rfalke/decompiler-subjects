#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef __off64_t off_t;
typedef char BOOLEAN;
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
typedef struct _HTAtom HTAtom;
struct _HTAtom {
     HTAtom *next;
     char *name;
  } ;
typedef HTAtom *HTFormat;
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
struct _HTStream {
     HTStreamClass *isa;
  } ;
typedef enum  { ppUnknown = 0, ppBZIP2 = 1, ppCHMOD = 2, ppCOMPRESS = 3, ppCOPY = 4, ppCSWING = 5, ppGZIP = 6, ppINFLATE = 7, ppINSTALL = 8, ppMKDIR = 9, ppMV = 10, ppRLOGIN = 11, ppRM = 12, ppRMDIR = 13, ppSETFONT = 14, ppTAR = 15, ppTELNET = 16, ppTN3270 = 17, ppTOUCH = 18, ppUNCOMPRESS = 19, ppUNZIP = 20, ppUUDECODE = 21, ppZCAT = 22, ppZIP = 23, pp_Last = 24, } ProgramPaths;
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
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
typedef struct {
     char *name;
     int value;
  } Config_Enum;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void LYLowerCase( char * );
char *LYSkipBlanks( char * );
void HTAlert( char * );
void HTProgress( char * );
void HTReadProgress( off_t , off_t  );
BOOLEAN HTConfirm( char * );
char *HTLoadedDocumentURL( void );
FILE *TraceFP( void );
int HTCheckForInterrupt( void );
void HTFormatInit( void );
void outofmem( char *, char * );
char *LYAddCookieHeader( char *, char *, int , BOOLEAN  );
char *HTParsePort( char *, int * );
char *HTParse( char *, char *, int  );
void strip_userid( char * );
BOOLEAN acceptEncoding( int  );
int HTLoadHTTP( char *, HTParentAnchor *, HTFormat , HTStream * );
HTFormat HTFileFormat( char *, HTAtom **, char ** );
char *HTGetProgramPath( ProgramPaths  );
int HTDoConnect( char *, char *, int , int * );
int HTDoRead( int , void *, unsigned int  );
HTAtom *HTAtom_for( char * );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTSABCopy0( bstring **, char * );
void HTSABCat( bstring **, char *, int  );
void HTSABCat0( bstring **, char * );
void HTSABFree( bstring ** );
bstring *HTBprintf( bstring **, char *, ... );
void trace_bstring( bstring * );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
HTStream *HTErrorStream( void );
char *HTAA_composeAuth( char *, int , char *, BOOLEAN  );
BOOLEAN HTAA_shouldRetryWithAuth( char *, int , int , BOOLEAN  );
int *__errno_location( void );
int sprintf( char *, char *, ... );
void *realloc( void *, unsigned int  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int write( int , void *, unsigned int  );
FILE *fopen64( char *, char * );
char *gettext( char * );
void free( void * );
int fclose( FILE * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
int close( int  );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int sscanf( char *, char *, ... );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern BOOLEAN LYUserSpecifiedURL;
extern BOOLEAN dump_output_immediately;
extern char *personal_mail_address;
extern char *authentication_info[2];
extern char *proxyauth_info[2];
extern BOOLEAN traversal;
extern BOOLEAN LYNoRefererHeader;
extern BOOLEAN LYNoRefererForThis;
extern char *LYRequestReferer;
extern char *language;
extern char *pref_charset;
extern int dump_server_status;
extern char *LYUserAgent;
extern BOOLEAN mustshow;
extern int LYAcceptEncoding;
extern BOOLEAN LYNoFromHeader;
extern BOOLEAN LYPrependBaseToSource;
extern Config_Enum tbl_preferred_encoding[7];
extern BOOLEAN keep_mime_headers;
extern int HTNoDataOK;
extern BOOLEAN using_proxy;
extern BOOLEAN reloading;
extern BOOLEAN permanent_redirection;
extern BOOLEAN redirect_post_content;
extern BOOLEAN no_url_redirection;
extern char *http_error_file;
extern char *HTAppName;
extern char *HTAppVersion;
extern char *HTLibraryVersion;
extern BOOLEAN WWW_TraceFlag;
extern HTList *HTPresentations;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
