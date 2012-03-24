#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef enum  { LYK_UNKNOWN = 0, LYK_COMMAND = 1, LYK_1 = 2, LYK_2 = 3, LYK_3 = 4, LYK_4 = 5, LYK_5 = 6, LYK_6 = 7, LYK_7 = 8, LYK_8 = 9, LYK_9 = 10, LYK_SOURCE = 11, LYK_RELOAD = 12, LYK_QUIT = 13, LYK_ABORT = 14, LYK_NEXT_PAGE = 15, LYK_PREV_PAGE = 16, LYK_UP_TWO = 17, LYK_DOWN_TWO = 18, LYK_UP_HALF = 19, LYK_DOWN_HALF = 20, LYK_REFRESH = 21, LYK_HOME = 22, LYK_END = 23, LYK_FIRST_LINK = 24, LYK_LAST_LINK = 25, LYK_PREV_LINK = 26, LYK_NEXT_LINK = 27, LYK_LPOS_PREV_LINK = 28, LYK_LPOS_NEXT_LINK = 29, LYK_FASTBACKW_LINK = 30, LYK_FASTFORW_LINK = 31, LYK_UP_LINK = 32, LYK_DOWN_LINK = 33, LYK_RIGHT_LINK = 34, LYK_LEFT_LINK = 35, LYK_HISTORY = 36, LYK_PREV_DOC = 37, LYK_NEXT_DOC = 38, LYK_ACTIVATE = 39, LYK_SUBMIT = 40, LYK_GOTO = 41, LYK_ECGOTO = 42, LYK_HELP = 43, LYK_DWIMHELP = 44, LYK_INDEX = 45, LYK_NOCACHE = 46, LYK_INTERRUPT = 47, LYK_MAIN_MENU = 48, LYK_OPTIONS = 49, LYK_INDEX_SEARCH = 50, LYK_WHEREIS = 51, LYK_PREV = 52, LYK_NEXT = 53, LYK_COMMENT = 54, LYK_EDIT = 55, LYK_INFO = 56, LYK_PRINT = 57, LYK_ADD_BOOKMARK = 58, LYK_DEL_BOOKMARK = 59, LYK_VIEW_BOOKMARK = 60, LYK_VLINKS = 61, LYK_SHELL = 62, LYK_DOWNLOAD = 63, LYK_TRACE_TOGGLE = 64, LYK_TRACE_LOG = 65, LYK_IMAGE_TOGGLE = 66, LYK_INLINE_TOGGLE = 67, LYK_HEAD = 68, LYK_DO_NOTHING = 69, LYK_TOGGLE_HELP = 70, LYK_JUMP = 71, LYK_KEYMAP = 72, LYK_LIST = 73, LYK_TOOLBAR = 74, LYK_HISTORICAL = 75, LYK_MINIMAL = 76, LYK_SOFT_DQUOTES = 77, LYK_RAW_TOGGLE = 78, LYK_COOKIE_JAR = 79, LYK_F_LINK_NUM = 80, LYK_CLEAR_AUTH = 81, LYK_SWITCH_DTD = 82, LYK_ELGOTO = 83, LYK_CHANGE_LINK = 84, LYK_DWIMEDIT = 85, LYK_EDIT_TEXTAREA = 86, LYK_GROW_TEXTAREA = 87, LYK_INSERT_FILE = 88, LYK_EXTERN_LINK = 89, LYK_EXTERN_PAGE = 90, LYK_DIRED_MENU = 91, LYK_CREATE = 92, LYK_REMOVE = 93, LYK_MODIFY = 94, LYK_TAG_LINK = 95, LYK_UPLOAD = 96, LYK_INSTALL = 97, LYK_CHG_CENTER = 98, LYK_CHDIR = 99, LYK_SHIFT_LEFT = 100, LYK_SHIFT_RIGHT = 101, LYK_LINEWRAP_TOGGLE = 102, LYK_PASTE_URL = 103, LYK_TO_CLIPBOARD = 104, LYK_NESTED_TABLES = 105, } LYKeymapCode;
typedef char BOOLEAN;
typedef unsigned short LYKeymap_t;
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
typedef struct {
     int code;
     LYKeymap_t map;
     LYKeymap_t save;
  } ANY_KEYS;
struct {
     int code;
     char *name;
  } ;
typedef struct {
     LYKeymapCode code;
     char *name;
     char *doc;
  } Kcmd;
struct {
     int key;
     char *name;
  } ;
struct emap {
     char *name;
     int code;
     char *descr;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int map_string_to_keysym( char *, int * );
void HTAlert( char * );
HTList *LYcommandList( void );
Kcmd *LYKeycodeToKcmd( LYKeymapCode  );
Kcmd *LYStringToKcmd( char * );
char *LYKeycodeToString( int , BOOLEAN  );
int LYStringToKeycode( char * );
char *pretty_html( int  );
char *format_binding( LYKeymap_t *, int  );
void print_binding( HTStream *, int , BOOLEAN  );
int lacname_to_lac( char * );
int lecname_to_lec( char * );
int lkcstring_to_lkc( char * );
int LYLoadKeymap( char *, HTParentAnchor *, HTFormat , HTStream * );
int remap( char *, char *, BOOLEAN  );
void set_any_keys( ANY_KEYS *, int  );
void reset_any_keys( ANY_KEYS *, int  );
void set_vms_keys( void );
void set_vi_keys( void );
void reset_vi_keys( void );
void set_emacs_keys( void );
void reset_emacs_keys( void );
void set_numbers_as_arrows( void );
void reset_numbers_as_arrows( void );
char *key_for_func( int  );
char *fmt_keys( int , int  );
int best_reverse_keymap( int  );
char *key_for_func_ext( int , int  );
BOOLEAN LYisNonAlnumKeyname( int , int  );
int LYReverseKeymap( int  );
int LYKeyForEditAction( int  );
int LYEditKeyForAction( int , int * );
HTAtom *HTAtom_for( char * );
HTList *HTList_new( void );
void HTList_addObject( HTList *, void * );
int strcasecomp( char *, char * );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSprintf( char **, char *, ... );
char *HTSprintf0( char **, char *, ... );
HTStream *HTStreamStack( HTFormat , HTFormat , HTStream *, HTParentAnchor * );
int sprintf( char *, char *, ... );
char *strchr( char *, char  );
char *gettext( char * );
void *strtol( char *, char **, int  );
void free( void * );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
char *strcpy( char *, char * );
int sscanf( char *, char *, ... );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN lynx_edit_mode;
extern BOOLEAN no_dired_support;
extern BOOLEAN prev_lynx_edit_mode;
extern BOOLEAN LYUseMouse;
extern LYKeymap_t keymap[661];
extern LYKeymap_t key_override[661];
extern int escape_bound;
extern int current_char_set;
extern int LYlowest_eightbit[60];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
