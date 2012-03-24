#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long UCode_t;
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
typedef struct _UCTransParams UCTransParams;
struct _UCTransParams {
     BOOLEAN transp;
     BOOLEAN do_cjk;
     BOOLEAN decode_utf8;
     BOOLEAN output_utf8;
     BOOLEAN use_raw_char_in;
     BOOLEAN strip_raw_char_in;
     BOOLEAN pass_160_173_raw;
     BOOLEAN do_8bitraw;
     BOOLEAN trans_to_uni;
     BOOLEAN trans_C0_to_uni;
     BOOLEAN repl_translated_C0;
     BOOLEAN trans_from_uni;
  } ;
typedef struct _HTStream HTStream;
struct _HTStream  ;
typedef void putc_func_t( HTStream *, char  );
typedef enum  { S_text = 0, S_attr = 1, S_attr_gap = 2, S_comment = 3, S_cro = 4, S_doctype = 5, S_dollar = 6, S_dollar_dq = 7, S_dollar_paren = 8, S_dollar_paren_dq = 9, S_dollar_paren_sq = 10, S_dollar_sq = 11, S_dquoted = 12, S_end = 13, S_entity = 14, S_equals = 15, S_ero = 16, S_esc = 17, S_esc_dq = 18, S_esc_sq = 19, S_exclamation = 20, S_in_kanji = 21, S_incro = 22, S_junk_tag = 23, S_litteral = 24, S_marked = 25, S_nonascii_text = 26, S_nonascii_text_dq = 27, S_nonascii_text_sq = 28, S_paren = 29, S_paren_dq = 30, S_paren_sq = 31, S_pcdata = 32, S_pi = 33, S_script = 34, S_sgmlatt = 35, S_sgmlele = 36, S_sgmlent = 37, S_squoted = 38, S_tag = 39, S_tag_gap = 40, S_tagname_slash = 41, S_value = 42, } sgml_state;
typedef struct _HTElement HTElement;
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
struct _HTElement {
     HTElement *next;
     HTTag *tag;
  } ;
typedef enum  { HTL_comm = 0, HTL_tag = 1, HTL_attrib = 2, HTL_attrval = 3, HTL_abracket = 4, HTL_entity = 5, HTL_href = 6, HTL_entire = 7, HTL_badseq = 8, HTL_badtag = 9, HTL_badattr = 10, HTL_sgmlspecial = 11, HTL_num_lexemes = 12, } HTlexeme;
typedef unsigned int size_t;
typedef struct {
     HTTag *tags;
     int number_of_tags;
     char **entity_names;
     size_t number_of_entities;
  } SGML_dtd;
typedef void *HTError;
typedef struct _HTStructured HTStructured;
struct _HTStructured  ;
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
typedef struct _HT_tagspec HT_tagspec;
typedef enum  { HTML_A = 0, HTML_ABBR = 1, HTML_ACRONYM = 2, HTML_ADDRESS = 3, HTML_APPLET = 4, HTML_AREA = 5, HTML_AU = 6, HTML_AUTHOR = 7, HTML_B = 8, HTML_BANNER = 9, HTML_BASE = 10, HTML_BASEFONT = 11, HTML_BDO = 12, HTML_BGSOUND = 13, HTML_BIG = 14, HTML_BLINK = 15, HTML_BLOCKQUOTE = 16, HTML_BODY = 17, HTML_BODYTEXT = 18, HTML_BQ = 19, HTML_BR = 20, HTML_BUTTON = 21, HTML_CAPTION = 22, HTML_CENTER = 23, HTML_CITE = 24, HTML_CODE = 25, HTML_COL = 26, HTML_COLGROUP = 27, HTML_COMMENT = 28, HTML_CREDIT = 29, HTML_DD = 30, HTML_DEL = 31, HTML_DFN = 32, HTML_DIR = 33, HTML_DIV = 34, HTML_DL = 35, HTML_DLC = 36, HTML_DT = 37, HTML_EM = 38, HTML_EMBED = 39, HTML_FIELDSET = 40, HTML_FIG = 41, HTML_FN = 42, HTML_FONT = 43, HTML_FORM = 44, HTML_FRAME = 45, HTML_FRAMESET = 46, HTML_H1 = 47, HTML_H2 = 48, HTML_H3 = 49, HTML_H4 = 50, HTML_H5 = 51, HTML_H6 = 52, HTML_HEAD = 53, HTML_HR = 54, HTML_HTML = 55, HTML_HY = 56, HTML_I = 57, HTML_IFRAME = 58, HTML_IMG = 59, HTML_INPUT = 60, HTML_INS = 61, HTML_ISINDEX = 62, HTML_KBD = 63, HTML_KEYGEN = 64, HTML_LABEL = 65, HTML_LEGEND = 66, HTML_LH = 67, HTML_LI = 68, HTML_LINK = 69, HTML_LISTING = 70, HTML_MAP = 71, HTML_MARQUEE = 72, HTML_MATH = 73, HTML_MENU = 74, HTML_META = 75, HTML_NEXTID = 76, HTML_NOFRAMES = 77, HTML_NOTE = 78, HTML_OBJECT = 79, HTML_OL = 80, HTML_OPTION = 81, HTML_OVERLAY = 82, HTML_P = 83, HTML_PARAM = 84, HTML_PLAINTEXT = 85, HTML_PRE = 86, HTML_Q = 87, HTML_S = 88, HTML_SAMP = 89, HTML_SCRIPT = 90, HTML_SELECT = 91, HTML_SHY = 92, HTML_SMALL = 93, HTML_SPAN = 94, HTML_SPOT = 95, HTML_STRIKE = 96, HTML_STRONG = 97, HTML_STYLE = 98, HTML_SUB = 99, HTML_SUP = 100, HTML_TAB = 101, HTML_TABLE = 102, HTML_TBODY = 103, HTML_TD = 104, HTML_TEXTAREA = 105, HTML_TEXTFLOW = 106, HTML_TFOOT = 107, HTML_TH = 108, HTML_THEAD = 109, HTML_TITLE = 110, HTML_TR = 111, HTML_TT = 112, HTML_U = 113, HTML_UL = 114, HTML_VAR = 115, HTML_WBR = 116, HTML_XMP = 117, HTML_ALT_OBJECT = 118, } HTMLElement;
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
typedef struct _HTStreamClass HTStreamClass;
struct _HTStreamClass {
     char *name;
     void (*_free)( HTStream * );
     void (*_abort)( HTStream *, HTError  );
     void (*put_character)( HTStream *, char  );
     void (*put_string)( HTStream *, char * );
     void (*put_block)( HTStream *, char *, int  );
  } ;
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
void LYLowerCase( char * );
void LYUpperCase( char * );
FILE *TraceFP( void );
void LYDoCSI( char *, char *, char ** );
void outofmem( char *, char * );
char *HTMLGetEntityName( UCode_t  );
UCode_t HTMLGetEntityUCValue( char * );
BOOLEAN LYCheckForCSI( HTParentAnchor *, char ** );
BOOLEAN LYCommentHacks( HTParentAnchor *, char * );
int UCTransUniChar( long , int  );
int UCTransUniCharStr( char *, int , long , int , int  );
UCode_t UCTransJPToUni( char *, int , int  );
UCode_t UCTransToUni( char , int  );
int UCTransCharStr( char *, int , char , int , int , int  );
int UCGetLYhndl_byMIME( char * );
void UCSetTransParams( UCTransParams *, int , LYUCcharset *, int , LYUCcharset * );
void UCTransParams_clear( UCTransParams * );
BOOLEAN UCPutUtf8_charstring( HTStream *, putc_func_t *, long  );
UCode_t UCGetUniFromUtf8String( char ** );
void fake_put_character( void *, char  );
char *state_name( sgml_state  );
HTElement *pool_alloc( void );
void pool_free( HTElement * );
void HTMLSRC_apply_markup( HTStream *, HTlexeme , BOOLEAN  );
void set_chartrans_handling( HTStream *, HTParentAnchor *, int  );
void change_chartrans_handling( HTStream * );
void handle_attribute_name( HTStream *, char * );
void handle_attribute_value( HTStream *, char * );
BOOLEAN put_special_unicodes( HTStream *, UCode_t  );
void put_pretty_entity( HTStream *, int  );
void put_pretty_number( HTStream * );
void handle_entity( HTStream *, char  );
void handle_comment( HTStream * );
void handle_identifier( HTStream * );
void handle_doctype( HTStream * );
void handle_marked( HTStream * );
void handle_processing_instruction( HTStream * );
void handle_sgmlent( HTStream * );
void handle_sgmlele( HTStream * );
void handle_sgmlatt( HTStream * );
BOOLEAN element_valid_within( HTTag *, HTTag *, BOOLEAN  );
canclose_t can_close( HTTag *, HTTag * );
void do_close_stacked( HTStream * );
int is_on_stack( HTStream *, HTTag * );
void end_element( HTStream *, HTTag * );
void start_element( HTStream * );
HTTag *SGMLFindTag( SGML_dtd *, char * );
void SGML_free( HTStream * );
void SGML_abort( HTStream *, HTError  );
void transform_tag( HTStream *, HTChunk * );
BOOLEAN ignore_when_empty( HTTag * );
void discard_empty( HTStream * );
BOOLEAN end_if_prettysrc( HTStream *, HTChunk *, char  );
void SGML_character( HTStream *, char  );
void SGML_string( HTStream *, char * );
void SGML_write( HTStream *, char *, int  );
HTStream *SGML_new( SGML_dtd *, HTParentAnchor *, HTStructured * );
void JISx0201TO0208_EUC( unsigned char , unsigned char , unsigned char *, unsigned char * );
int IS_SJIS_STR( unsigned char * );
unsigned char *SJIS_TO_JIS1( unsigned char , unsigned char , unsigned char * );
unsigned char *JIS_TO_SJIS1( unsigned char , unsigned char , unsigned char * );
unsigned char *EUC_TO_SJIS1( unsigned char , unsigned char , unsigned char * );
void JISx0201TO0208_SJIS( unsigned char , unsigned char *, unsigned char * );
unsigned char *SJIS_TO_EUC1( unsigned char , unsigned char , unsigned char * );
unsigned char *SJIS_TO_EUC( unsigned char *, unsigned char * );
unsigned char *EUC_TO_SJIS( unsigned char *, unsigned char * );
unsigned char *EUC_TO_JIS( unsigned char *, unsigned char *, char *, char * );
unsigned char *repairJIStoEUC( unsigned char *, unsigned char ** );
unsigned char *TO_EUC( unsigned char *, unsigned char * );
int is_EUC_JP( unsigned char * );
void TO_SJIS( unsigned char *, unsigned char * );
void TO_JIS( unsigned char *, unsigned char * );
void HTStartAnchor( HTStructured *, char *, char * );
HTChunk *HTChunkCreate( int  );
void HTChunkFree( HTChunk * );
void HTChunkPutc( HTChunk *, char  );
void HTChunkPutUtf8Char( HTChunk *, UCode_t  );
void HTChunkTerminate( HTChunk * );
void HTChunkPuts( HTChunk *, char * );
LYUCcharset *HTAnchor_getUCInfoStage( HTParentAnchor *, int  );
int HTAnchor_getUCLYhndl( HTParentAnchor *, int  );
LYUCcharset *HTAnchor_setUCInfoStage( HTParentAnchor *, int , int , int  );
LYUCcharset *HTAnchor_copyUCInfoStage( HTParentAnchor *, int , int , int  );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
void HTSAFree_extra( char * );
char *HTSACopy_extra( char **, char * );
char *HTSprintf0( char **, char *, ... );
int sprintf( char *, char *, ... );
void *calloc( unsigned int , unsigned int  );
char *strncpy( char *, char *, unsigned int  );
int toupper( int  );
void *memset( void *, int , unsigned int  );
void free( void * );
int fflush( FILE * );
short **__ctype_b_loc( void );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int sscanf( char *, char *, ... );
int strncmp( char *, char *, unsigned int  );
int tolower( int  );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN historical_comments;
extern BOOLEAN minimal_comments;
extern BOOLEAN soft_dquotes;
extern int Old_DTD;
extern BOOLEAN LYPreparsedSource;
extern BOOLEAN LYxhtml_parsing;
extern int current_char_set;
extern int LYlowest_eightbit[60];
extern LYUCcharset LYCharSet_UC[60];
extern int current_tag_style;
extern BOOLEAN force_current_tag_style;
extern BOOLEAN force_classname;
extern char *forced_classname;
extern BOOLEAN psrc_convert_string;
extern BOOLEAN psrc_view;
extern BOOLEAN sgml_in_psrc_was_initialized;
extern BOOLEAN mark_htext_as_source;
extern HT_tagspec *lexeme_start[12];
extern HT_tagspec *lexeme_end[12];
extern int tagname_transform;
extern int attrname_transform;
extern int LATIN1;
extern int UTF8_handle;
extern HTStreamClass SGMLParser;
extern HTCJKlang HTCJK;
extern BOOLEAN HTPassEightBitRaw;
extern BOOLEAN HTPassEightBitNum;
extern BOOLEAN HTPassHighCtrlRaw;
extern BOOLEAN HTPassHighCtrlNum;
extern HTTag HTTag_unrecognized;
extern char class_string[256];
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
