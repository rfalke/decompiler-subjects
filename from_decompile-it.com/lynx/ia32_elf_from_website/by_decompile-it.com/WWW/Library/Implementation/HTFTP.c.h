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
typedef struct _HTBTree_element HTBTElement;
typedef struct _connection connection;
struct _connection {
     struct _connection *next;
     unsigned long addr;
     int socket;
     BOOLEAN binary;
     char __pad[3];
  } ;
typedef enum  { GENERIC_SERVER = 0, MACHTEN_SERVER = 1, UNIX_SERVER = 2, VMS_SERVER = 3, CMS_SERVER = 4, DCTS_SERVER = 5, TCPC_SERVER = 6, PETER_LEWIS_SERVER = 7, NCSA_SERVER = 8, WINDOWS_NT_SERVER = 9, WINDOWS_2K_SERVER = 10, MS_WINDOWS_SERVER = 11, MSDOS_SERVER = 12, APPLESHARE_SERVER = 13, NETPRESENZ_SERVER = 14, DLS_SERVER = 15, } eServerType;
typedef struct _EntryInfo EntryInfo;
struct _EntryInfo {
     char *filename;
     char *linkname;
     char *type;
     char *date;
     unsigned int size;
     BOOLEAN display;
     char __pad[3];
  } ;
typedef struct sockaddr_storage SockA;
typedef unsigned short sa_family_t;
struct sockaddr_storage {
     sa_family_t ss_family;
     unsigned long __ss_align;
     char __ss_padding[120];
  } ;
typedef long __time_t;
typedef __time_t time_t;
typedef long __fd_mask;
typedef struct {
     __fd_mask fds_bits[32];
  } fd_set;
typedef unsigned short PortNumber;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void LYLowerCase( char * );
char *LYSkipBlanks( char * );
char *LYSkipNonBlanks( char * );
void LYTrimTrailing( char * );
char *LYstrstr( char *, char * );
void HTAlert( char * );
void HTProgress( char * );
void HTReadProgress( off_t , off_t  );
char *HTPromptPassword( char * );
FILE *TraceFP( void );
char *LYGetEnv( char * );
int HTCheckForInterrupt( void );
HTStructured *HTML_new( HTParentAnchor *, HTFormat , HTStream * );
int HTLoadError( HTStream *, int , char * );
void outofmem( char *, char * );
char *HTParse( char *, char *, int  );
char *HTUnEscape( char * );
HTFormat HTFileFormat( char *, HTAtom **, char ** );
HTFormat HTCharsetFormat( HTFormat , HTParentAnchor *, int  );
CompressFileType HTCompressFileType( char *, char *, int * );
void HTDirEntry( HTStructured *, char *, char * );
BOOLEAN HTDirTitles( HTStructured *, HTParentAnchor *, HTFormat , BOOLEAN  );
HTBTree *HTBTree_new( HTComparer  );
void HTBTreeAndObject_free( HTBTree * );
void HTBTree_add( HTBTree *, void * );
HTBTElement *HTBTree_next( HTBTree *, HTBTElement * );
char *HTVMS_name( char *, char * );
int next_data_char( void );
int close_connection( connection * );
void init_help_message_cache( void );
void help_message_cache_add( char * );
char *help_message_cache_non_empty( void );
char *help_message_cache_contents( void );
int write_cmd( char * );
BOOLEAN find_response( HTList * );
int response( char * );
int send_cmd_1( char * );
int send_cmd_2( char *, char * );
int set_mac_binary( eServerType  );
void get_ftp_pwd( eServerType *, BOOLEAN * );
void set_unix_dirstyle( eServerType *, BOOLEAN * );
int get_connection( char *, HTParentAnchor * );
void reset_master_socket( void );
void set_master_socket( int  );
int close_master_socket( void );
int get_listen_socket( void );
void set_years_and_date( void );
void free_entryinfo_struct_contents( EntryInfo * );
BOOLEAN is_ls_date( char * );
void parse_eplf_line( char *, EntryInfo * );
void parse_ls_line( char *, EntryInfo * );
void parse_dls_line( char *, EntryInfo *, char ** );
void parse_vms_dir_entry( char *, EntryInfo * );
void parse_ms_windows_dir_entry( char *, EntryInfo * );
void parse_cms_dir_entry( char *, EntryInfo * );
EntryInfo *parse_dir_entry( char *, BOOLEAN *, char ** );
int compare_EntryInfo_structs( EntryInfo *, EntryInfo * );
int read_directory( HTParentAnchor *, char *, HTFormat , HTStream * );
int setup_connection( char *, HTParentAnchor * );
int HTFTPLoad( char *, HTParentAnchor *, HTFormat , HTStream * );
void HTClearFTPPassword( void );
int HTInetStatus( char * );
char *HTInetString( SockA * );
char *HTHostName( void );
int HTDoConnect( char *, char *, int , int * );
int HTDoRead( int , void *, unsigned int  );
HTChunk *HTChunkCreate( int  );
void HTChunkClear( HTChunk * );
void HTChunkFree( HTChunk * );
void HTChunkPutc( HTChunk *, char  );
void HTChunkTerminate( HTChunk * );
HTAtom *HTAtom_for( char * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
void HTInitInput( int  );
int HTGetCharacter( void );
int HTParseSocket( HTFormat , HTFormat , HTParentAnchor *, int , HTStream * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
char *strerror( int  );
int getsockname( int , void *, void * );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
char *strncpy( char *, char *, unsigned int  );
int write( int , void *, unsigned int  );
int listen( int , int  );
int toupper( int  );
void *memset( void *, int , unsigned int  );
char *strrchr( char *, char  );
char *gettext( char * );
void free( void * );
int accept( int , void *, void * );
int socket( int , int , int  );
short **__ctype_b_loc( void );
time_t mktime( void * );
unsigned short ntohs( unsigned short  );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
char *ctime( void * );
int bind( int , void *, unsigned int  );
int atoi( char * );
int close( int  );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
time_t time( void * );
char *strncat( char *, char *, unsigned int  );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
char *strtok( char *, char * );
int getnameinfo( void *, unsigned int , char *, unsigned int , char *, unsigned int , unsigned int  );
char *strcat( char *, char * );
int sscanf( char *, char *, ... );
int strncmp( char *, char *, unsigned int  );
int getpeername( int , void *, void * );
int tolower( int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern char *personal_mail_address;
extern HTAtom *WWW_SOURCE;
extern BOOLEAN mustshow;
extern char *anonftp_password;
extern HTList *broken_ftp_epsv;
extern HTList *broken_ftp_retr;
extern BOOLEAN ftp_local_passive;
extern int HTfileSortMethod;
extern BOOLEAN WWW_TraceFlag;
extern int interrupted_in_htgetcharacter;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
