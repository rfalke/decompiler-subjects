#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef char BOOLEAN;
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef struct {
     char *hostname;
     int portnumber;
     BOOLEAN IsProxy;
     HTList *setups;
     HTList *realms;
  } HTAAServer;
typedef HTList HTAssocList;
typedef struct {
     HTAAServer *server;
     char *ctemplate;
     HTList *valid_schemes;
     HTAssocList **scheme_specifics;
     BOOLEAN retry;
     char __pad[3];
  } HTAASetup;
typedef enum  { HTAA_UNKNOWN = 0, HTAA_NONE = 1, HTAA_BASIC = 2, HTAA_PUBKEY = 3, HTAA_KERBEROS_V4 = 4, HTAA_KERBEROS_V5 = 5, HTAA_MAX_SCHEMES = 6, } HTAAScheme;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void HTAlert( char * );
BOOLEAN HTConfirm( char * );
void HTPromptUsernameAndPassword( char *, char **, char **, BOOLEAN  );
FILE *TraceFP( void );
void outofmem( char *, char * );
char *HTParse( char *, char *, int  );
HTList *HTList_new( void );
void HTList_delete( HTList * );
void HTList_addObject( HTList *, void * );
BOOLEAN HTList_removeObject( HTList *, void * );
int HTList_count( HTList * );
int HTList_indexOf( HTList *, void * );
void *HTList_objectAt( HTList *, int  );
int strcasecomp( char *, char * );
char *HTSACopy( char **, char * );
char *HTNextField( char ** );
char *HTSprintf0( char **, char *, ... );
void HTAAForwardAuth_set( char *, char * );
void HTAAForwardAuth_reset( void );
HTAAServer *HTAAServer_new( char *, int , BOOLEAN  );
void HTAAServer_delete( HTAAServer * );
HTAAServer *HTAAServer_lookup( char *, int , BOOLEAN  );
HTAASetup *HTAASetup_lookup( char *, int , char *, BOOLEAN  );
HTAASetup *HTAASetup_new( HTAAServer *, char *, HTList *, HTAssocList ** );
void HTAASetup_delete( HTAASetup * );
void HTAASetup_updateSpecifics( HTAASetup *, HTAssocList ** );
HTAARealm *HTAARealm_lookup( HTList *, char * );
HTAARealm *HTAARealm_new( HTList *, char *, char *, char * );
char *compose_auth_string( HTAAScheme , HTAASetup *, BOOLEAN  );
HTAAScheme HTAA_selectScheme( HTAASetup * );
void free_HTAAGlobals( void );
char *HTAA_composeAuth( char *, int , char *, BOOLEAN  );
BOOLEAN HTAA_shouldRetryWithAuth( char *, int , int , BOOLEAN  );
void HTClearHTTPAuthInfo( void );
void HTAssocList_delete( HTAssocList * );
char *HTAssocList_lookup( HTAssocList *, char * );
int HTUU_encode( unsigned char *, unsigned int , char * );
HTAAScheme HTAAScheme_enum( char * );
char *HTAAScheme_name( HTAAScheme  );
BOOLEAN HTAA_templateMatch( char *, char * );
char *HTAA_makeProtectionTemplate( char * );
HTList *HTAA_parseArgList( char * );
void HTAA_setupReader( char *, int , int  );
char *HTAA_getUnfoldedLine( void );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
char *gettext( char * );
void free( void * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int fprintf( FILE *, char *, ... );
char *strcat( char *, char * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN using_proxy;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
