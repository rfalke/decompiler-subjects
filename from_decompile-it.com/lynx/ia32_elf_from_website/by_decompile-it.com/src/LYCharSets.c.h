#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef char BOOLEAN;
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
typedef struct {
     char *name;
     unsigned short code;
     char __pad[2];
  } UC_entity_info;
typedef struct _names_pairs names_pairs;
struct _names_pairs {
     char *fullname;
     char *MIMEname;
  } ;
typedef enum  { NOKANJI = 0, EUC = 1, SJIS = 2, JIS = 3, } HTkcode;
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
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void ena_csi( BOOLEAN  );
void LYTrimTrailing( char * );
FILE *TraceFP( void );
void HTMLSetCharacterHandling( int  );
void Set_HTCJK( char *, char * );
void HTMLSetRawModeDefault( int  );
void HTMLSetUseDefaultRawMode( int , BOOLEAN  );
void HTMLSetHaveCJKCharacterSet( int  );
void HTMLSetDisplayCharsetMatchLocale( int  );
int UCGetLYhndl_byAnyName( char * );
UCode_t HTMLGetEntityUCValue( char * );
void HTMLUseCharacterSet( int  );
int LYCharSetsDeclared( void );
int UCGetLYhndl_byMIME( char * );
void UCInit( void );
int safeUCGetLYhndl_byMIME( char * );
int strncasecomp( char *, char *, int  );
int fprintf( FILE *, char *, ... );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN LYRawMode;
extern BOOLEAN LYUseDefaultRawMode;
extern char *UCAssume_MIMEcharset;
extern BOOLEAN UCForce8bitTOUPPER;
extern BOOLEAN LYDefaultRawMode;
extern BOOLEAN LYHaveCJKCharacterSet;
extern BOOLEAN DisplayCharsetMatchLocale;
extern HTkcode kanji_code;
extern int current_char_set;
extern char **p_entity_values;
extern char *LYchar_set_names[61];
extern int LYlowest_eightbit[60];
extern LYUCcharset LYCharSet_UC[60];
extern int UCLYhndl_for_unspec;
extern int LATIN1;
extern int UCInitialized;
/* Warning:  conflicting decls for LYCharSets */
extern char **LYCharSets[60];
extern HTCJKlang HTCJK;
extern BOOLEAN HTPassEightBitRaw;
extern BOOLEAN HTPassEightBitNum;
extern BOOLEAN HTPassHighCtrlRaw;
extern BOOLEAN HTPassHighCtrlNum;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
