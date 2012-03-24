#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _HText HText;
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
typedef struct _line HTLine;
typedef struct {
     unsigned int bits_at_0;
  } HTStyleChange;
struct _line {
     struct _line *next;
     struct _line *prev;
     unsigned short offset;
     unsigned short size;
     HTStyleChange *styles;
     unsigned short numstyles;
     char data[1];
     char __pad[1];
  } ;
typedef struct {
     HTLine base;
     char data[1026];
     char __pad[2];
  } HTLineTemp;
typedef struct _TextAnchor TextAnchor;
typedef struct _FormInfo FormInfo;
typedef struct _OptionType OptionType;
struct _OptionType {
     char *name;
     char *cp_submit_value;
     int value_cs;
     struct _OptionType *next;
  } ;
struct _FormInfo {
     char *name;
     int number;
     int type;
     char *value;
     char *orig_value;
     int size;
     unsigned int maxlength;
     int group;
     int num_value;
     int hrange;
     int lrange;
     OptionType *select_list;
     char *submit_action;
     int submit_method;
     char *submit_enctype;
     char *submit_title;
     BOOLEAN no_cache;
     char *cp_submit_value;
     char *orig_submit_value;
     int size_l;
     int disabled;
     int name_cs;
     int value_cs;
     char *accept_cs;
  } ;
typedef struct {
     char *hl_text;
     short hl_x;
     char __pad[2];
  } HiliteInfo;
typedef struct {
     HiliteInfo *hl_info;
     HiliteInfo hl_base;
     short hl_len;
     char __pad[2];
  } HiliteList;
typedef struct _HTAnchor HTAnchor;
struct _HTAnchor {
     HTParentAnchor0 *parent;
  } ;
typedef HTAtom HTLinkType;
typedef struct {
     HTParentAnchor0 *parent;
     char *tag;
     HTAnchor *dest;
     HTLinkType *type;
     HTList _add_children_notag;
     HTList _add_sources;
  } HTChildAnchor;
struct _TextAnchor {
     struct _TextAnchor *next;
     struct _TextAnchor *prev;
     int sgml_offset;
     int number;
     int line_num;
     short line_pos;
     short extent;
     BOOLEAN show_anchor;
     BOOLEAN inUnderline;
     BOOLEAN expansion_anch;
     char link_type;
     FormInfo *input_field;
     HiliteList lites;
     HTChildAnchor *anchor;
  } ;
typedef struct _HTStyle HTStyle;
typedef long HTFont;
typedef int HTCoord;
typedef int HTColor;
typedef struct {
     short kind;
     HTCoord position;
  } HTTabStop;
struct _HTStyle {
     struct _HTStyle *next;
     char *name;
     int id;
     char *SGMLTag;
     HTFont font;
     HTCoord fontSize;
     HTColor color;
     int superscript;
     HTAnchor *anchor;
     HTCoord indent1st;
     HTCoord leftIndent;
     HTCoord rightIndent;
     short alignment;
     HTCoord lineHt;
     HTCoord descentLine;
     HTTabStop *tabs;
     BOOLEAN wordWrap;
     BOOLEAN freeFormat;
     HTCoord spaceBefore;
     HTCoord spaceAfter;
     int paraFlags;
  } ;
typedef struct _STable_info STable_info;
struct _STable_info  ;
typedef enum  { NOKANJI = 0, EUC = 1, SJIS = 2, JIS = 3, } HTkcode;
typedef enum  { DET_SJIS = 0, DET_EUC = 1, DET_NOTYET = 2, DET_MIXED = 3, } eDetectedKCode;
typedef enum  { SJIS_state_neutral = 0, SJIS_state_in_kanji = 1, SJIS_state_has_bad_code = 2, } eSJIS_status;
typedef enum  { EUC_state_neutral = 0, EUC_state_in_kanji = 1, EUC_state_in_kana = 2, EUC_state_has_bad_code = 3, } eEUC_status;
typedef enum  { S_text = 0, S_esc = 1, S_dollar = 2, S_paren = 3, S_nonascii_text = 4, S_dollar_paren = 5, S_jisx0201_text = 6, } eGridState;
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
typedef struct _HTPool HTPool;
typedef HTStyleChange pool_data;
struct _HTPool {
     pool_data data[2042];
     struct _HTPool *prev;
     int used;
  } ;
struct _HText {
     HTParentAnchor *node_anchor;
     HTLine *last_line;
     HTLineTemp temp_line[2];
     int Lines;
     TextAnchor *first_anchor;
     TextAnchor *last_anchor;
     TextAnchor *last_anchor_before_stbl;
     TextAnchor *last_anchor_before_split;
     HTList *forms;
     int last_anchor_number;
     BOOLEAN source;
     BOOLEAN toolbar;
     HTList *tabs;
     HTList *hidden_links;
     int hiddenlinkflag;
     BOOLEAN no_cache;
     char LastChar;
     BOOLEAN IgnoreExcess;
     HTStyle *style;
     int display_on_the_fly;
     int top_of_screen;
     HTLine *top_of_screen_line;
     HTLine *next_line;
     unsigned int permissible_split;
     BOOLEAN in_line_1;
     BOOLEAN stale;
     BOOLEAN page_has_target;
     BOOLEAN has_utf8;
     BOOLEAN had_utf8;
     int first_lineno_last_disp_partial;
     int last_lineno_last_disp_partial;
     STable_info *stbl;
     HTList *enclosed_stbl;
     HTkcode kcode;
     HTkcode specified_kcode;
     eDetectedKCode detected_kcode;
     eSJIS_status SJIS_status;
     eEUC_status EUC_status;
     eGridState state;
     int kanji_buf;
     int in_sjis;
     int halted;
     BOOLEAN have_8bit_chars;
     LYUCcharset *UCI;
     int UCLYhndl;
     UCTransParams T;
     HTStream *target;
     HTStreamClass targetClass;
     HTPool *pool;
     BOOLEAN clickable_images;
     BOOLEAN pseudo_inline_alts;
     BOOLEAN verbose_img;
     BOOLEAN raw_mode;
     BOOLEAN historical_comments;
     BOOLEAN minimal_comments;
     BOOLEAN soft_dquotes;
     short old_dtd;
     short keypad_mode;
     short disp_lines;
     short disp_cols;
  } ;
typedef struct _HTBTree_element HTBTElement;
typedef struct _DocAddress DocAddress;
struct _DocAddress {
     char *address;
     bstring *post_data;
     char *post_content_type;
     char *bookmark;
     BOOLEAN isHEAD;
     BOOLEAN safe;
     char __pad[2];
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
void *HText_pool_calloc( HText *, unsigned int  );
FILE *TraceFP( void );
int LYRemoveTemp( char * );
void outofmem( char *, char * );
void ImageMapList_free( HTList * );
int UCGetLYhndl_byMIME( char * );
char *HTParse( char *, char *, int  );
char *HTParseAnchor( char * );
HTBTree *HTBTree_new( HTComparer  );
void HTBTree_free( HTBTree * );
void *HTBTree_search( HTBTree *, void * );
void HTBTree_add( HTBTree *, void * );
HTBTElement *HTBTree_next( HTBTree *, HTBTElement * );
void HTChunkFree( HTChunk * );
unsigned short HASH_FUNCTION( char * );
HTParentAnchor0 *HTParentAnchor0_new( char *, unsigned short  );
HTParentAnchor *HTParentAnchor_new( HTParentAnchor0 * );
HTChildAnchor *HTChildAnchor_new( HTParentAnchor0 * );
HTChildAnchor *HText_pool_ChildAnchor_new( HTParentAnchor * );
BOOLEAN HTSEquivalent( char *, char * );
BOOLEAN HTBEquivalent( bstring *, bstring * );
int compare_anchors( void *, void * );
HTChildAnchor *HTAnchor_findNamedChild( HTParentAnchor0 *, char * );
HTChildAnchor *HTAnchor_addChild( HTParentAnchor * );
HTChildAnchor *HTAnchor_findChildAndLink( HTParentAnchor *, char *, char *, HTLinkType * );
HTParentAnchor *HTAnchor_findAddress( DocAddress * );
HTParentAnchor0 *HTAnchor_findAddress_in_adult_table( DocAddress * );
HTParentAnchor *HTAnchor_findSimpleAddress( char * );
BOOLEAN HTAnchor_link( HTChildAnchor *, HTAnchor *, HTLinkType * );
void deleteLinks( HTChildAnchor * );
BOOLEAN HTAnchor_delete( HTParentAnchor0 * );
void HTAnchor_delete_links( HTParentAnchor * );
void HTParentAnchor_free( HTParentAnchor * );
void HTAnchor_clearSourceCache( HTParentAnchor * );
HTParentAnchor *HTAnchor_parent( HTAnchor * );
char *HTAnchor_address( HTAnchor * );
void HTAnchor_setIndex( HTParentAnchor *, char * );
void HTAnchor_setPrompt( HTParentAnchor *, char * );
void HTAnchor_setStyle( HTParentAnchor *, char * );
void HTAnchor_setTitle( HTParentAnchor *, char * );
void HTAnchor_appendTitle( HTParentAnchor *, char * );
void HTAnchor_setBookmark( HTParentAnchor *, char * );
void HTAnchor_setOwner( HTParentAnchor *, char * );
void HTAnchor_setRevTitle( HTParentAnchor *, char * );
void HTAnchor_setCitehost( HTParentAnchor *, char * );
BOOLEAN HTAnchor_setMessageID( HTParentAnchor *, char * );
BOOLEAN HTAnchor_setSubject( HTParentAnchor *, char * );
HTList *HTAnchor_methods( HTParentAnchor * );
void HTAnchor_setPhysical( HTParentAnchor *, char * );
LYUCcharset *HTAnchor_getUCInfoStage( HTParentAnchor *, int  );
int HTAnchor_getUCLYhndl( HTParentAnchor *, int  );
LYUCcharset *HTAnchor_setUCInfoStage( HTParentAnchor *, int , int , int  );
LYUCcharset *HTAnchor_copyUCInfoStage( HTParentAnchor *, int , int , int  );
HTList *HTList_new( void );
void HTList_delete( HTList * );
void HTList_linkObject( HTList *, void *, HTList * );
BOOLEAN HTList_unlinkObject( HTList *, void * );
void *HTList_unlinkLastObject( HTList * );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTSABCopy( bstring **, char *, int  );
void HTSABFree( bstring ** );
void *calloc( unsigned int , unsigned int  );
FILE *fopen64( char *, char * );
void free( void * );
int fclose( FILE * );
void *memcpy( void *, void *, unsigned int  );
int fprintf( FILE *, char *, ... );
int remove( char * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern HTLinkType *HTInternalLink;
extern LYUCcharset LYCharSet_UC[60];
extern int UCLYhndl_for_unspec;
extern int UCLYhndl_for_unrec;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
