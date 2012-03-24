#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
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
typedef struct _tag HTTag;
typedef struct {
     char *name;
     char type;
     char __pad[3];
  } attr;
typedef attr *AttrList;
typedef struct {
     char *name;
     AttrList list;
  } AttrType;
typedef enum  { SGML_EMPTY = 0, SGML_LITTERAL = 1, SGML_CDATA = 2, SGML_SCRIPT = 3, SGML_RCDATA = 4, SGML_MIXED = 5, SGML_ELEMENT = 6, SGML_PCDATA = 7, } SGMLContent;
typedef int TagClass;
typedef int TagFlags;
struct _tag {
     char *name;
     int name_len;
     BOOLEAN can_justify;
     AttrList attributes;
     int number_of_attributes;
     AttrType *attr_types;
     SGMLContent contents;
     TagClass tagclass;
     TagClass contains;
     TagClass icontains;
     TagClass contained;
     TagClass icontained;
     TagClass canclose;
     TagFlags flags;
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
char *LYstrncpy( char *, char *, int  );
void HTAlert( char * );
void HTProgress( char * );
BOOLEAN HTConfirm( char * );
char *HTPrompt( char *, char * );
char *HTPromptPassword( char * );
FILE *TraceFP( void );
char *LYGetEnv( char * );
void LYAddPathToHome( char *, size_t , char * );
char *LYNewsPost( char *, BOOLEAN  );
HTStructured *HTML_new( HTParentAnchor *, HTFormat , HTStream * );
int HTLoadError( HTStream *, int , char * );
char *HTStrip( char * );
char *HTParse( char *, char *, int  );
char *HTEscape( char *, unsigned char  );
int HTDoConnect( char *, char *, int , int * );
HTAtom *HTAtom_for( char * );
char *HTAnchor_messageID( HTParentAnchor * );
BOOLEAN HTAnchor_setMessageID( HTParentAnchor *, char * );
HTList *HTList_new( void );
void HTList_delete( HTList * );
void HTList_appendObject( HTList *, void * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTInitInput( int  );
int HTGetCharacter( void );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
void HTmmdecode( char **, char * );
int HTrjis( char **, char * );
void free_NNTP_AuthInfo( void );
void load_NNTP_AuthInfo( void );
void HTSetNewsHost( char * );
BOOLEAN initialize( void );
int response( char * );
BOOLEAN match( char *, char * );
NNTPAuthResult HTHandleAuthInfo( char * );
char *author_name( char * );
char *author_address( char * );
void start_anchor( char * );
void start_link( char *, char * );
void start_list( int  );
void write_anchor( char *, char * );
void write_anchors( char * );
void abort_socket( void );
BOOLEAN valid_header( char * );
void post_article( char * );
char *decode_mime( char ** );
int read_article( HTParentAnchor * );
int read_list( char * );
int read_group( char *, int , int  );
int HTLoadNews( char *, HTParentAnchor *, HTFormat , HTStream * );
void HTClearNNTPAuthInfo( void );
int sprintf( char *, char *, ... );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
int write( int , void *, unsigned int  );
int toupper( int  );
char *fgets( char *, int , FILE * );
FILE *fopen64( char *, char * );
char *strrchr( char *, char  );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
int fclose( FILE * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int close( int  );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
char *strncat( char *, char *, unsigned int  );
int remove( char * );
void __stack_chk_fail( void );
char *strtok( char *, char * );
char *strcat( char *, char * );
int sscanf( char *, char *, ... );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN dump_output_immediately;
extern HTAtom *WWW_SOURCE;
extern BOOLEAN mustshow;
extern BOOLEAN scan_for_buried_news_references;
extern BOOLEAN LYListNewsNumbers;
extern BOOLEAN LYListNewsDates;
extern BOOLEAN keep_mime_headers;
extern BOOLEAN WWW_TraceFlag;
extern int interrupted_in_htgetcharacter;
extern int HTNewsChunkSize;
extern int HTNewsMaxChunk;
extern char *HTNewsHost;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
