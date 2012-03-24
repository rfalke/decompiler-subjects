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
typedef struct _HTPresentation HTPresentation;
typedef struct _HTAtom HTAtom;
struct _HTAtom {
     HTAtom *next;
     char *name;
  } ;
typedef HTStream *HTConverter( HTPresentation *, HTParentAnchor *, HTStream * );
typedef __off64_t off_t;
typedef char BOOLEAN;
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
     HTParentAnchor *anchor;
     FILE *fp;
     char *filename;
     HTChunk *chunk;
     HTChunk *last_chunk;
     HTStreamClass *actions;
     HTStream *target;
     int status;
  } ;
struct MailcapEntry {
     char *contenttype;
     char *command;
     char *testcommand;
     int needsterminal;
     int copiousoutput;
     int needtofree;
     char *label;
     char *printcommand;
     char *nametemplate;
     float quality;
     long maxbytes;
  } ;
typedef enum  { mediaINT = 1, mediaEXT = 2, mediaCFG = 4, mediaUSR = 8, mediaSYS = 16, mediaOpt1 = 1, mediaOpt2 = 5, mediaOpt3 = 13, mediaOpt4 = 29, mediaALL = 31, } AcceptMedia;
struct cmdlist_s {
     char *cmd;
     int result;
     struct cmdlist_s *next;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void LYLowerCase( char * );
char *LYRemoveBlanks( char * );
char *LYSkipBlanks( char * );
char *LYSkipNonBlanks( char * );
char *LYSkipCBlanks( char * );
void LYTrimLeading( char * );
char *LYTrimNewline( char * );
void LYTrimTrailing( char * );
char *LYSafeGets( char **, FILE * );
void exit_immediately( int  );
FILE *TraceFP( void );
BOOLEAN LYisAbsPath( char * );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCanReadFile( char * );
char *LYAbsOrHomePath( char ** );
BOOLEAN IsOurFile( char * );
FILE *LYOpenTemp( char *, char *, char * );
void LYCloseTemp( char * );
int LYRemoveTemp( char * );
int LYSystem( char * );
char *LYgetXDisplay( void );
HTStream *HTMLToPlain( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTMLParsedPresent( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTMLToC( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTMLPresent( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTSaveToFile( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTCompressed( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTDumpToStdout( HTPresentation *, HTParentAnchor *, HTStream * );
void HTFormatInit( void );
void HTPreparsedFormatInit( void );
char *GetCommand( char *, char ** );
char *Cleanse( char * );
void TrimCommand( char * );
int ProcessMailcapEntry( FILE *, struct MailcapEntry *, AcceptMedia  );
char *LYSkipQuoted( char * );
char *LYSkipToken( char * );
char *LYSkipValue( char * );
char *LYCopyValue( char * );
char *LYGetContentType( char *, char * );
BOOLEAN LYMailcapUsesPctS( char * );
int BuildCommand( HTChunk *, char *, char *, char * );
int LYTestMailcapCommand( char *, char * );
char *LYMakeMailcapCommand( char *, char *, char * );
int RememberTestResult( int , char *, int  );
int PassesTest( struct MailcapEntry * );
int ProcessMailcapFile( char *, AcceptMedia  );
int ExitWithError( char * );
int HTLoadTypesConfigFile( char *, AcceptMedia  );
void HTFileInit( void );
int HTGetLine( char *, int , FILE * );
void HTGetWord( char *, char *, char , char  );
int HTLoadExtensionsConfigFile( char * );
void outofmem( char *, char * );
void HTSetSuffix5( char *, char *, char *, char *, double  );
HTChunk *HTChunkCreate( int  );
void HTChunkFree( HTChunk * );
void HTChunkPutc( HTChunk *, char  );
void HTChunkTerminate( HTChunk * );
void HTChunkPuts( HTChunk *, char * );
HTStream *HTPlainPresent( HTPresentation *, HTParentAnchor *, HTStream * );
HTAtom *HTAtom_for( char * );
HTList *HTList_reverse( HTList * );
HTList *HTList_appendList( HTList *, HTList * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTSetPresentation( char *, char *, char *, double , double , double , long , AcceptMedia  );
void HTSetConversion( char *, char *, HTConverter *, float , float , float , long , AcceptMedia  );
void HTReorderPresentation( HTFormat , HTFormat  );
void HTFilterPresentations( void );
HTStream *HTMIMEConvert( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTMIMERedirect( HTPresentation *, HTParentAnchor *, HTStream * );
HTStream *HTWSRCConvert( HTPresentation *, HTParentAnchor *, HTStream * );
void *realloc( void *, unsigned int  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
FILE *fopen64( char *, char * );
char *gettext( char * );
int ungetc( int , FILE * );
void free( void * );
unsigned int strlen( char * );
int fgetc( FILE * );
int feof( FILE * );
void *atol( char * );
double atof( char * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
char *strcat( char *, char * );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN LYPreparsedSource;
extern char *personal_type_map;
extern char *global_type_map;
extern char *global_extension_map;
extern char *personal_extension_map;
extern char *XLoadImageCommand;
extern BOOLEAN LYUseBuiltinSuffixes;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
extern HTList *HTPresentations;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
