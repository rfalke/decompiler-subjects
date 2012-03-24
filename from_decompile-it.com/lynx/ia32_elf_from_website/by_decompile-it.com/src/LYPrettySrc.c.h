#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HT_tagspec HT_tagspec;
typedef enum  { HTML_A = 0, HTML_ABBR = 1, HTML_ACRONYM = 2, HTML_ADDRESS = 3, HTML_APPLET = 4, HTML_AREA = 5, HTML_AU = 6, HTML_AUTHOR = 7, HTML_B = 8, HTML_BANNER = 9, HTML_BASE = 10, HTML_BASEFONT = 11, HTML_BDO = 12, HTML_BGSOUND = 13, HTML_BIG = 14, HTML_BLINK = 15, HTML_BLOCKQUOTE = 16, HTML_BODY = 17, HTML_BODYTEXT = 18, HTML_BQ = 19, HTML_BR = 20, HTML_BUTTON = 21, HTML_CAPTION = 22, HTML_CENTER = 23, HTML_CITE = 24, HTML_CODE = 25, HTML_COL = 26, HTML_COLGROUP = 27, HTML_COMMENT = 28, HTML_CREDIT = 29, HTML_DD = 30, HTML_DEL = 31, HTML_DFN = 32, HTML_DIR = 33, HTML_DIV = 34, HTML_DL = 35, HTML_DLC = 36, HTML_DT = 37, HTML_EM = 38, HTML_EMBED = 39, HTML_FIELDSET = 40, HTML_FIG = 41, HTML_FN = 42, HTML_FONT = 43, HTML_FORM = 44, HTML_FRAME = 45, HTML_FRAMESET = 46, HTML_H1 = 47, HTML_H2 = 48, HTML_H3 = 49, HTML_H4 = 50, HTML_H5 = 51, HTML_H6 = 52, HTML_HEAD = 53, HTML_HR = 54, HTML_HTML = 55, HTML_HY = 56, HTML_I = 57, HTML_IFRAME = 58, HTML_IMG = 59, HTML_INPUT = 60, HTML_INS = 61, HTML_ISINDEX = 62, HTML_KBD = 63, HTML_KEYGEN = 64, HTML_LABEL = 65, HTML_LEGEND = 66, HTML_LH = 67, HTML_LI = 68, HTML_LINK = 69, HTML_LISTING = 70, HTML_MAP = 71, HTML_MARQUEE = 72, HTML_MATH = 73, HTML_MENU = 74, HTML_META = 75, HTML_NEXTID = 76, HTML_NOFRAMES = 77, HTML_NOTE = 78, HTML_OBJECT = 79, HTML_OL = 80, HTML_OPTION = 81, HTML_OVERLAY = 82, HTML_P = 83, HTML_PARAM = 84, HTML_PLAINTEXT = 85, HTML_PRE = 86, HTML_Q = 87, HTML_S = 88, HTML_SAMP = 89, HTML_SCRIPT = 90, HTML_SELECT = 91, HTML_SHY = 92, HTML_SMALL = 93, HTML_SPAN = 94, HTML_SPOT = 95, HTML_STRIKE = 96, HTML_STRONG = 97, HTML_STYLE = 98, HTML_SUB = 99, HTML_SUP = 100, HTML_TAB = 101, HTML_TABLE = 102, HTML_TBODY = 103, HTML_TD = 104, HTML_TEXTAREA = 105, HTML_TEXTFLOW = 106, HTML_TFOOT = 107, HTML_TH = 108, HTML_THEAD = 109, HTML_TITLE = 110, HTML_TR = 111, HTML_TT = 112, HTML_U = 113, HTML_UL = 114, HTML_VAR = 115, HTML_WBR = 116, HTML_XMP = 117, HTML_ALT_OBJECT = 118, } HTMLElement;
typedef char BOOLEAN;
struct _HT_tagspec {
     struct _HT_tagspec *next;
     int style;
     char *class_name;
     HTMLElement element;
     BOOLEAN *present;
     char **value;
     BOOLEAN start;
     char __pad[3];
  } ;
typedef enum  { HTL_comm = 0, HTL_tag = 1, HTL_attrib = 2, HTL_attrval = 3, HTL_abracket = 4, HTL_entity = 5, HTL_href = 6, HTL_entire = 7, HTL_badseq = 8, HTL_badtag = 9, HTL_badattr = 10, HTL_sgmlspecial = 11, HTL_num_lexemes = 12, } HTlexeme;
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
typedef unsigned int size_t;
typedef struct {
     HTTag *tags;
     int number_of_tags;
     char **entity_names;
     size_t number_of_entities;
  } SGML_dtd;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
void exit_immediately( int  );
FILE *TraceFP( void );
int hash_code_lowercase_on_fly( char * );
int hash_code_aggregate_char( char , int  );
int hash_code_aggregate_lower_str( char *, int  );
int html_src_tag_index( char * );
void append_close_tag( char *, HT_tagspec **, HT_tagspec ** );
void append_open_tag( char *, char *, HT_tagspec **, HT_tagspec ** );
int html_src_parse_tagspec( char *, HTlexeme , BOOLEAN , BOOLEAN  );
void html_src_clean_item( HTlexeme  );
void html_src_clean_data( void );
void html_src_on_lynxcfg_reload( void );
void failed_init( char *, int  );
void HTMLSRC_init_caches( BOOLEAN  );
HTTag *SGMLFindTag( SGML_dtd *, char * );
char *HTSACopy( char **, char * );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
char *gettext( char * );
void free( void * );
short **__ctype_b_loc( void );
int fprintf( FILE *, char *, ... );
void __stack_chk_fail( void );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern char *HTL_tagspecs[12];
extern HT_tagspec *lexeme_start[12];
extern HT_tagspec *lexeme_end[12];
extern SGML_dtd HTML_dtd;
extern HTTag HTTag_unrecognized;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
