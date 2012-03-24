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
typedef struct _domain_entry domain_entry;
typedef enum  { ACCEPT_ALWAYS = 0, REJECT_ALWAYS = 1, QUERY_USER = 2, } behaviour_t;
typedef enum  { INVCHECK_QUERY = 0, INVCHECK_STRICT = 1, INVCHECK_LOOSE = 2, } invcheck_behaviour_t;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
struct _domain_entry {
     char *domain;
     behaviour_t bv;
     invcheck_behaviour_t invcheck_bv;
     HTList *cookie_list;
  } ;
typedef char BOOLEAN;
typedef struct _cookie cookie;
typedef long __time_t;
typedef __time_t time_t;
struct _cookie {
     char *lynxID;
     char *name;
     char *value;
     int version;
     char *comment;
     char *commentURL;
     char *domain;
     int port;
     char *PortList;
     char *path;
     int pathlen;
     int flags;
     time_t expires;
     BOOLEAN quoted;
     char __pad[3];
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
typedef unsigned short LYKeymap_t;
struct {
     char *s;
     size_t n;
  } ;
struct {
     char **domain;
     int flag;
     int once;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
int LYgetch_single( void );
char *LYSkipCBlanks( char * );
char *LYTrimNewline( char * );
char *LYstrsep( char **, char * );
char *LYstrstr( char *, char * );
char *LYSafeGets( char **, FILE * );
void HTAlert( char * );
void HTAlwaysAlert( char *, char * );
void HTUserMsg( char * );
void HTUserMsg2( char *, char * );
void HTProgress( char * );
int HTForcedPrompt( int , char *, int  );
BOOLEAN HTConfirm( char * );
BOOLEAN HTConfirmCookie( domain_entry *, char *, char *, char * );
void LYSleepMsg( void );
void exit_immediately( int  );
FILE *TraceFP( void );
time_t LYmktime( char *, BOOLEAN  );
void statusline( char * );
UrlTypes is_url( char * );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCloseOutput( FILE * );
FILE *LYNewTxtFile( char * );
void outofmem( char *, char * );
void LYEntify( char **, BOOLEAN  );
void MemAllocCopy( char **, char *, char * );
cookie *newCookie( void );
void freeCookie( cookie * );
BOOLEAN host_matches( char *, char * );
BOOLEAN port_matches( int , char * );
int ignore_trailing_slash( char * );
BOOLEAN is_prefix( char *, char * );
domain_entry *find_domain_entry( char * );
void store_cookie( cookie *, char *, char * );
char *scan_cookie_sublist( char *, char *, int , HTList *, char *, BOOLEAN  );
char *alloc_attr_value( char *, char * );
unsigned int parse_attribute( unsigned int , cookie *, int *, char *, int , char *, char *, char *, int  );
void LYProcessSetCookies( char *, char *, char *, char *, char *, int  );
void LYSetCookie( char *, char *, char * );
char *LYAddCookieHeader( char *, char *, int , BOOLEAN  );
void LYLoadCookies( char * );
FILE *NewCookieFile( char * );
void LYStoreCookies( char * );
int LYHandleCookies( char *, HTParentAnchor *, HTFormat , HTStream * );
void cookie_domain_flag_set( char *, int  );
void LYConfigCookies( void );
char *HTParse( char *, char *, int  );
HTAtom *HTAtom_for( char * );
HTList *HTList_new( void );
void HTList_delete( HTList * );
void HTList_appendObject( HTList *, void * );
void HTList_insertObjectAt( HTList *, void *, int  );
BOOLEAN HTList_removeObject( HTList *, void * );
int HTList_count( HTList * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
FILE *fopen64( char *, char * );
char *strrchr( char *, char  );
char *gettext( char * );
void *strtol( char *, char **, int  );
void free( void * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *ctime( void * );
void *atol( char * );
int atoi( char * );
int fprintf( FILE *, char *, ... );
time_t time( void * );
void __stack_chk_fail( void );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern char *helpfilepath;
extern BOOLEAN LYSetCookies;
extern BOOLEAN mustshow;
extern int cookie_noprompt;
extern int max_cookies_buffer;
extern int max_cookies_domain;
extern int max_cookies_global;
extern char *LYCookieSAcceptDomains;
extern char *LYCookieSRejectDomains;
extern char *LYCookieSStrictCheckDomains;
extern char *LYCookieSLooseCheckDomains;
extern char *LYCookieSQueryCheckDomains;
extern BOOLEAN LYForceSSLCookiesSecure;
extern char *LYCookieAcceptDomains;
extern char *LYCookieRejectDomains;
extern char *LYCookieStrictCheckDomains;
extern char *LYCookieLooseCheckDomains;
extern char *LYCookieQueryCheckDomains;
extern LYKeymap_t keymap[661];
extern int HTNoDataOK;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
