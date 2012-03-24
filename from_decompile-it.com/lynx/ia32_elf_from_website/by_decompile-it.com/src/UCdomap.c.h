#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
struct unipair_str {
     unsigned short unicode;
     char *replace_str;
  } ;
struct unimapdesc_str {
     unsigned short entry_ct;
     struct unipair_str *entries;
     int isdefault;
     int trydefault;
  } ;
typedef void *iconv_t;
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
typedef char BOOLEAN;
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
struct UC_charset {
     char *MIMEname;
     char *LYNXname;
     unsigned char *unicount;
     unsigned short *unitable;
     int num_uni;
     struct unimapdesc_str  replacedesc;
     int uc_status;
     int LYhndl;
     int GN;
     int lowest_eight;
     int enc;
     int codepage;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
FILE *TraceFP( void );
void set_inverse_transl( int  );
unsigned short *set_translate( int  );
int UC_valid_UC_charset( int  );
void UC_con_set_trans( int , int , int  );
int con_insert_unipair( unsigned short , unsigned short , int  );
int con_insert_unipair_str( unsigned short , char *, int  );
void con_clear_unimap( int  );
void con_clear_unimap_str( int  );
void con_set_default_unimap( void );
int UC_con_set_unimap( int , int  );
int UC_con_set_unimap_str( unsigned short , struct unipair_str *, int  );
int conv_uni_to_pc( long , int  );
int conv_uni_to_str( char *, int , long , int  );
void UCconsole_map_init( void );
int UCTransUniChar( long , int  );
int UCTransUniCharStr( char *, int , long , int , int  );
int UC_MapGN( int , int  );
int UCTransChar( char , int , int  );
UCode_t UCTransJPToUni( char *, int , int  );
UCode_t UCTransToUni( char , int  );
int UCReverseTransChar( char , int , int  );
int UCTransCharStr( char *, int , char , int , int , int  );
int UC_FindGN_byMIME( char * );
int getLYhndl_byCP( char *, char * );
int UCGetLYhndl_byMIME( char * );
void UCreset_allocated_LYCharSets( void );
char **UC_setup_LYCharSets_repl( int , unsigned int  );
int UC_Register_with_LYCharSets( int , char *, char *, int  );
void UC_Charset_Setup( char *, char *, unsigned char *, unsigned short *, int , struct unimapdesc_str , int , int , int  );
int UC_NoUctb_Register_with_LYCharSets( char *, char *, int , int , int  );
void UC_Charset_NoUctb_Setup( char *, char *, int , int , int , int  );
void UCInit( void );
int safeUCGetLYhndl_byMIME( char * );
void LYFindLocaleCharset( void );
HTAtom *HTAtom_for( char * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
iconv_t iconv_open( char *, char * );
char *strncpy( char *, char *, unsigned int  );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
unsigned int iconv( iconv_t , char **, int *, char **, int * );
int fprintf( FILE *, char *, ... );
char *nl_langinfo( void * );
void *malloc( unsigned int  );
int iconv_close( iconv_t  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN LYLocaleCharset;
extern int current_char_set;
extern char *LYchar_set_names[61];
extern int LYlowest_eightbit[60];
extern int LYNumCharsets;
extern LYUCcharset LYCharSet_UC[60];
extern int LATIN1;
extern int US_ASCII;
extern int TRANSPARENT;
extern int UCNumCharsets;
extern int UCInitialized;
extern int linedrawing_char_set;
extern char **LYCharSets[60];
extern char *SevenBitApproximations[];
extern int UTF8_handle;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
