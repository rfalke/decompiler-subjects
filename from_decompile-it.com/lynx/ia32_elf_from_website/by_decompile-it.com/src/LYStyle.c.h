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
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
typedef struct _tag HTTag;
typedef char BOOLEAN;
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
typedef struct {
     HTTag *tags;
     int number_of_tags;
     char **entity_names;
     size_t number_of_entities;
  } SGML_dtd;
struct {
     char *name;
     int style;
     int *set_hash;
  } ;
struct {
     int color;
     char *type;
  } ;
typedef struct _hashbucket bucket;
struct _hashbucket {
     char *name;
     int code;
     int color;
     int mono;
     int cattr;
     struct _hashbucket *next;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
void LYLowerCase( char * );
char *LYRemoveBlanks( char * );
char *LYSkipBlanks( char * );
void LYTrimTrailing( char * );
char *LYSafeGets( char **, FILE * );
void exit_immediately( int  );
FILE *TraceFP( void );
int string_to_attr( char * );
void setStyle( int , int , int , int  );
void setHashStyle( int , int , int , int , char * );
char *LYgetTableString( int  );
void LYnormalColor( void );
void LYFreeStringList( HTList * );
BOOLEAN LYCloseInput( FILE * );
int check_color( char *, int  );
FILE *LYOpenCFG( char *, char *, char * );
void strtolower( char * );
void LYTrimHead( char * );
void LYTrimTail( char * );
char *TrimLowercase( char * );
void parse_either( char *, int , int *, int * );
void parse_attributes( char *, char *, char *, int , char * );
void parse_style( char * );
void style_deleteStyleList( void );
void free_colorstylestuff( void );
void initialise_default_stylesheet( void );
void style_initialiseHashTable( void );
void parse_userstyles( void );
void HStyle_addStyle( char * );
int style_readFromFileREC( char *, char * );
int style_readFromFile( char * );
void TrimColorClass( char *, char *, int * );
void FastTrimColorClass( char *, int , char *, char **, int * );
void cache_tag_styles( void );
unsigned int *RefCachedStyle( int , int  );
BOOLEAN ValidCachedStyle( int , int  );
unsigned int GetCachedStyle( int , int  );
void SetCachedStyle( int , int , unsigned int  );
void ResetCachedStyles( void );
void FreeCachedStyles( void );
int hash_code( char * );
HTTag *SGMLFindTag( SGML_dtd *, char * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSprintf0( char **, char *, ... );
int sprintf( char *, char *, ... );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
void *memset( void *, int , unsigned int  );
char *gettext( char * );
void free( void * );
int init_pair( short , short , short  );
unsigned int strlen( char * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void __stack_chk_fail( void );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern int LYcols;
extern int display_lines;
extern int COLORS;
extern int COLOR_PAIRS;
extern BOOLEAN LYCursesON;
extern int lynx_has_color;
extern int default_fg;
extern int default_bg;
extern BOOLEAN default_color_reset;
extern bucket hashStyles[8193];
extern int s_a;
extern int s_aedit;
extern int s_aedit_arr;
extern int s_aedit_pad;
extern int s_aedit_sel;
extern int s_alert;
extern int s_alink;
extern int s_curedit;
extern int s_forw_backw;
extern int s_hot_paste;
extern int s_menu_active;
extern int s_menu_bg;
extern int s_menu_entry;
extern int s_menu_frame;
extern int s_menu_number;
extern int s_menu_sb;
extern int s_normal;
extern int s_prompt_edit;
extern int s_prompt_edit_arr;
extern int s_prompt_edit_pad;
extern int s_prompt_sel;
extern int s_status;
extern int s_title;
extern int s_whereis;
extern int s_sb_aa;
extern int s_sb_bar;
extern int s_sb_bg;
extern int s_sb_naa;
extern int cached_tag_styles[118];
extern SGML_dtd HTML_dtd;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
