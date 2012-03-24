#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef __off64_t off_t;
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
typedef int __pid_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void HTAlert( char * );
void HTUserMsg( char * );
void HTReadProgress( off_t , off_t  );
BOOLEAN HTConfirm( char * );
char *HTLoadedDocumentURL( void );
char *HTLoadedDocumentBookmark( void );
BOOLEAN HText_AreDifferent( HTParentAnchor *, char * );
BOOLEAN exec_ok( char *, char *, int  );
FILE *TraceFP( void );
char *LYGetEnv( char * );
void LYLocalFileToURL( char **, char * );
char *trimPoundSelector( char * );
void LYTrimHtmlSep( char * );
void outofmem( char *, char * );
void remember_alloced( void * );
void add_environment_value( char * );
void add_lynxcgi_environment( char * );
BOOLEAN can_exec_cgi( char *, char * );
int LYLoadCGI( char *, HTParentAnchor *, HTFormat , HTStream * );
char *HTUnEscape( char * );
int HTLoadFile( char *, HTParentAnchor *, HTFormat , HTStream * );
HTAtom *HTAtom_for( char * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
void trace_bstring( bstring * );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
int fileno( FILE * );
int *__errno_location( void );
char *strerror( int  );
void *realloc( void *, unsigned int  );
char *strchr( char *, char  );
int write( int , void *, unsigned int  );
void _exit( int  );
char *strrchr( char *, char  );
int read( int , void *, unsigned int  );
char *gettext( char * );
void free( void * );
int fflush( FILE * );
int dup2( int , int  );
unsigned int strlen( char * );
__pid_t waitpid( __pid_t , int *, int  );
char *strcpy( char *, char * );
int printf( char *, ... );
int close( int  );
int fprintf( FILE *, char *, ... );
int execve( char *, char [0], char [0] );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int puts( char * );
__pid_t fork( void );
int strncmp( char *, char *, unsigned int  );
int pipe( int [2] );
int strcmp( char *, char * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stdin;
extern struct _IO_FILE  *stderr;
extern HTParentAnchor *HTMainAnchor;
extern BOOLEAN is_www_index;
extern int user_mode;
extern BOOLEAN no_bookmark_exec;
extern char *language;
extern char *pref_charset;
extern BOOLEAN no_lynxcgi;
extern char *LYCgiDocumentRoot;
extern BOOLEAN keep_mime_headers;
extern BOOLEAN reloading;
extern char *HTLibraryVersion;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
