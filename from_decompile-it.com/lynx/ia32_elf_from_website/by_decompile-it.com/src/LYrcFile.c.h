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
typedef struct {
     char *name;
     int value;
  } Config_Enum;
typedef enum  { CONF_NIL = 0, CONF_ARRAY = 1, CONF_BOOL = 2, CONF_FUN = 3, CONF_INT = 4, CONF_ENUM = 5, CONF_LIS = 6, CONF_MBM = 7, CONF_STR = 8, } Conf_Types;
struct config_type {
     char *name;
     int enabled;
     Conf_Types type;
     long value;
     char **strings;
     Config_Enum *table;
     void (*write_it)( FILE *, struct config_type * );
     char *note;
  } ;
typedef char BOOLEAN;
typedef struct config_type Config_Type;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYSkipBlanks( char * );
void LYTrimLeading( char * );
void LYTrimTrailing( char * );
char *LYSafeGets( char **, FILE * );
FILE *TraceFP( void );
int LYindex2MBM( int  );
void set_default_bookmark_page( char * );
BOOLEAN LYCloseInput( FILE * );
BOOLEAN LYCloseOutput( FILE * );
void LYAddPathToHome( char *, size_t , char * );
FILE *LYNewTxtFile( char * );
void LYCloseTempFP( FILE * );
BOOLEAN getBool( char * );
char *LYputEnum( Config_Enum *, int  );
BOOLEAN LYgetEnum( Config_Enum *, char *, int * );
int get_assume_charset( char * );
void put_assume_charset( FILE *, struct config_type * );
int get_display_charset( char * );
void put_display_charset( FILE *, struct config_type * );
int get_editor( char * );
void put_editor( FILE *, struct config_type * );
int get_tagsoup( char * );
void put_tagsoup( FILE *, struct config_type * );
Config_Type *lookup_config( char * );
int _f( char * );
int _read_rc( int  );
void read_rc( FILE * );
void write_list( FILE *, char * );
void explain_keypad_mode( FILE * );
int save_rc( FILE * );
BOOLEAN will_save_rc( char * );
int enable_lynxrc( char * );
int UCGetLYhndl_byAnyName( char * );
void LYConfigCookies( void );
void HTSwitchDTD( int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
int fputs( char *, FILE * );
int sprintf( char *, char *, ... );
char *strchr( char *, char  );
int toupper( int  );
FILE *fopen64( char *, char * );
char *gettext( char * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
int fputc( int , FILE * );
int sscanf( char *, char *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern char *editor;
extern int Old_DTD;
extern char *bookmark_page;
extern int LYShowColor;
extern char *MBM_A_subbookmark[26];
extern char *MBM_A_subdescript[26];
extern int LYrcShowColor;
extern BOOLEAN system_editor;
extern Config_Enum tbl_keypad_mode[7];
extern int current_char_set;
extern char *LYchar_set_names[61];
extern int LYNumCharsets;
extern LYUCcharset LYCharSet_UC[60];
extern int UCLYhndl_for_unspec;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
