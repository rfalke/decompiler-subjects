#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef __off64_t off_t;
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
typedef struct _HTPresentation HTPresentation;
typedef HTStream *HTConverter( HTPresentation *, HTParentAnchor *, HTStream * );
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
typedef enum  { mediaINT = 1, mediaEXT = 2, mediaCFG = 4, mediaUSR = 8, mediaSYS = 16, mediaOpt1 = 1, mediaOpt2 = 5, mediaOpt3 = 13, mediaOpt4 = 29, mediaALL = 31, } AcceptMedia;
typedef void *voidp;
typedef voidp gzFile;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void HTAlert( char * );
void HTProgress( char * );
void HTReadProgress( off_t , off_t  );
int HText_getNumOfLines( void );
void exit_immediately( int  );
FILE *TraceFP( void );
int LYGetNewline( void );
BOOLEAN LYMainLoop_pageDisplay( int  );
int HTCheckForInterrupt( void );
int HTLoadError( HTStream *, int , char * );
HTStream *HTSaveAndExecute( HTPresentation *, HTParentAnchor *, HTStream * );
int LYTestMailcapCommand( char *, char * );
void outofmem( char *, char * );
int HTInetStatus( char * );
int HTDoRead( int , void *, unsigned int  );
HTAtom *HTAtom_for( char * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
BOOLEAN HTList_removeObject( HTList *, void * );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
char *HTSACopy( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTSetPresentation( char *, char *, char *, double , double , double , long , AcceptMedia  );
void HTSetConversion( char *, char *, HTConverter *, float , float , float , long , AcceptMedia  );
void HTInitInput( int  );
int HTGetCharacter( void );
int half_match( char *, char * );
BOOLEAN failsMailcap( HTPresentation *, HTParentAnchor * );
HTPresentation *HTFindPresentation( HTFormat , HTFormat , HTPresentation *, HTParentAnchor * );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
void HTReorderPresentation( HTFormat , HTFormat  );
void HTFilterPresentations( void );
float HTStackValue( HTFormat , HTFormat , float , long  );
void HTDisplayPartial( void );
void HTFinishDisplayPartial( void );
int HTCopy( HTParentAnchor *, int , void *, HTStream * );
int HTFileCopy( FILE *, HTStream * );
int HTMemCopy( HTChunk *, HTStream * );
int HTGzFileCopy( gzFile , HTStream * );
char *LynxZError( int  );
int HTZzFileCopy( FILE *, HTStream * );
void HTCopyNoCR( HTParentAnchor *, int , HTStream * );
int HTParseSocket( HTFormat , HTFormat , HTParentAnchor *, int , HTStream * );
int HTParseFile( HTFormat , HTFormat , HTParentAnchor *, FILE *, HTStream * );
int HTParseMem( HTFormat , HTFormat , HTParentAnchor *, HTChunk *, HTStream * );
int HTCloseGzFile( gzFile  );
int HTParseGzFile( HTFormat , HTFormat , HTParentAnchor *, gzFile , HTStream * );
int HTParseZzFile( HTFormat , HTFormat , HTParentAnchor *, FILE *, HTStream * );
void NetToText_put_character( HTStream *, char  );
void NetToText_put_string( HTStream *, char * );
void NetToText_put_block( HTStream *, char *, int  );
void NetToText_free( HTStream * );
void NetToText_abort( HTStream *, HTError  );
HTStream *HTNetToText( HTStream * );
HTStream *HTErrorStream( void );
int *__errno_location( void );
int sprintf( char *, char *, ... );
int inflateReset( void * );
int inflateEnd( void * );
int gzclose( gzFile  );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
void perror( char * );
char *gettext( char * );
int inflate( void *, int  );
void free( void * );
int fflush( FILE * );
int fclose( FILE * );
char *gzerror( gzFile , int * );
int close( int  );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
int inflateInit_( void *, char *, int  );
int strncmp( char *, char *, unsigned int  );
int gzread( gzFile , voidp , unsigned int  );
unsigned int fread( void *, unsigned int , unsigned int , FILE * );
int ferror( FILE * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern HTParentAnchor *HTMainAnchor;
extern int display_lines;
extern HTAtom *WWW_SOURCE;
extern BOOLEAN display_partial;
extern int NumOfLines_partial;
extern BOOLEAN mustshow;
extern int LYAcceptMedia;
extern int partial_threshold;
extern BOOLEAN LYCancelDownload;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
extern HTList *HTPresentations;
extern HTPresentation *default_presentation;
extern int interrupted_in_htgetcharacter;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
