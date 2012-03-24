#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef struct _HTStructured HTStructured;
typedef struct _HTStructuredClass HTStructuredClass;
struct _HTStructuredClass {
     char *name;
     void (*_free)( HTStructured * );
     void (*_abort)( HTStructured *, HTError  );
     void (*put_character)( HTStructured *, char  );
     void (*put_string)( HTStructured *, char * );
     void (*put_block)( HTStructured *, char *, int  );
     int (*start_element)( HTStructured *, int , BOOLEAN *, char **, int , char ** );
     int (*end_element)( HTStructured *, int , char ** );
     int (*put_entity)( HTStructured *, int  );
  } ;
struct _HTStructured {
     HTStructuredClass *isa;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void HTAlert( char * );
void HTProgress( char * );
FILE *TraceFP( void );
HTStructured *HTML_new( HTParentAnchor *, HTFormat , HTStream * );
char *HTUnEscape( char * );
int HTDoConnect( char *, char *, int , int * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTInitInput( int  );
int HTGetCharacter( void );
BOOLEAN initialize( void );
void start_anchor( char * );
int response( char *, char *, HTParentAnchor *, HTFormat , HTStream * );
int HTLoadFinger( char *, HTParentAnchor *, HTFormat , HTStream * );
char *strchr( char *, char  );
int write( int , void *, unsigned int  );
char *gettext( char * );
void free( void * );
unsigned int strlen( char * );
int atoi( char * );
int close( int  );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
char *strtok( char *, char * );
int strncmp( char *, char *, unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN mustshow;
extern BOOLEAN WWW_TraceFlag;
extern int interrupted_in_htgetcharacter;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
