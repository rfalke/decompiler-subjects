#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef char BOOLEAN;
typedef struct _HTAtom HTAtom;
struct _HTAtom {
     HTAtom *next;
     char *name;
  } ;
typedef enum  { cftNone = 0, cftCompress = 1, cftGzip = 2, cftBzip2 = 3, cftDeflate = 4, } CompressFileType;
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
     BOOLEAN had_cr;
     HTStream *sink;
  } ;
typedef struct _HTPresentation HTPresentation;
typedef HTStream *HTConverter( HTPresentation *, HTParentAnchor *, HTStream * );
typedef long long __quad_t;
typedef __quad_t __off64_t;
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
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void LYLowerCase( char * );
void HTAlert( char * );
FILE *TraceFP( void );
time_t LYmktime( char *, BOOLEAN  );
void outofmem( char *, char * );
void Set_HTCJK( char *, char * );
void LYParseRefreshURL( char *, char **, char ** );
void LYSetCookie( char *, char *, char * );
int UCGetLYhndl_byMIME( char * );
BOOLEAN UCCanTranslateFromTo( int , int  );
HTFormat HTFileFormat( char *, HTAtom **, char ** );
char *HTCompressTypeToSuffix( CompressFileType  );
char *HTCompressTypeToEncoding( CompressFileType  );
CompressFileType HTEncodingToCompressType( char * );
CompressFileType HTContentTypeToCompressType( char * );
HTAtom *HTAtom_for( char * );
LYUCcharset *HTAnchor_getUCInfoStage( HTParentAnchor *, int  );
int HTAnchor_getUCLYhndl( HTParentAnchor *, int  );
LYUCcharset *HTAnchor_setUCInfoStage( HTParentAnchor *, int , int , int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
void HTMIME_TrimDoubleQuotes( char * );
BOOLEAN content_is_compressed( HTStream * );
void dequote( char * );
char *UncompressedContentType( HTStream *, CompressFileType  );
int pumpData( HTStream * );
int dispatchField( HTStream * );
void HTMIME_put_character( HTStream *, char  );
void HTMIME_put_string( HTStream *, char * );
void HTMIME_write( HTStream *, char *, int  );
void HTMIME_free( HTStream * );
void HTMIME_abort( HTStream *, HTError  );
HTStream *HTMIMEConvert( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTNetMIME( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTMIMERedirect( HTPresentation *, HTParentAnchor *, HTStream * );
void HTmmdec_base64( char **, char * );
void HTmmdec_quote( char **, char * );
void HTmmdecode( char **, char * );
int HTrjis( char **, char * );
int HTmaybekanji( int , int  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int toupper( int  );
char *strrchr( char *, char  );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int atoi( char * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void *malloc( unsigned int  );
int strncmp( char *, char *, unsigned int  );
int tolower( int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int current_char_set;
extern char *LYchar_set_names[61];
extern int UCLYhndl_for_unspec;
extern int UCLYhndl_for_unrec;
extern char *redirecting_url;
extern BOOLEAN permanent_redirection;
extern HTCJKlang HTCJK;
extern BOOLEAN HTPassEightBitRaw;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
