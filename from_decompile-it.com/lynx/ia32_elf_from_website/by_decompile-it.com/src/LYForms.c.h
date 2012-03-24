#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _EditFieldData EditFieldData;
typedef char BOOLEAN;
struct _EditFieldData {
     int sx;
     int sy;
     int dspwdth;
     int strlen;
     int maxlen;
     char pad;
     BOOLEAN hidden;
     BOOLEAN dirty;
     BOOLEAN panon;
     int xpan;
     int pos;
     int margin;
     int current_modifiers;
     int mark;
     char buffer[1024];
     int offset2col[2048];
     int col2offset[2048];
  } ;
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
     char *str;
     int len;
  } bstring;
typedef struct {
     char *title;
     char *address;
     bstring *post_data;
     char *post_content_type;
     char *bookmark;
     BOOLEAN isHEAD;
     BOOLEAN safe;
     int link;
     int line;
     BOOLEAN internal_link;
     char *style;
  } DocInfo;
typedef struct _win_st WINDOW;
typedef unsigned long chtype;
typedef chtype attr_t;
struct pdat {
     short _pad_y;
     short _pad_x;
     short _pad_top;
     short _pad_left;
     short _pad_bottom;
     short _pad_right;
  } ;
typedef int wchar_t;
typedef struct {
     attr_t attr;
     wchar_t chars[5];
  } cchar_t;
struct _win_st {
     short _cury;
     short _curx;
     short _maxy;
     short _maxx;
     short _begy;
     short _begx;
     short _flags;
     attr_t _attrs;
     chtype _bkgd;
     _Bool _notimeout;
     _Bool _clear;
     _Bool _leaveok;
     _Bool _scroll;
     _Bool _idlok;
     _Bool _idcok;
     _Bool _immed;
     _Bool _sync;
     _Bool _use_keypad;
     int _delay;
     struct ldat *_line;
     short _regtop;
     short _regbottom;
     int _parx;
     int _pary;
     WINDOW *_parent;
     struct pdat  _pad;
     short _yoffset;
     cchar_t _bkgrnd;
  } ;
typedef unsigned int size_t;
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
typedef struct {
     char *lname;
     char *target;
     char *l_hightext;
     char *l_hightext2;
     int l_hightext2_offset;
     BOOLEAN inUnderline;
     int lx;
     int ly;
     int type;
     int sgml_offset;
     int anchor_number;
     int anchor_line_num;
     HiliteList list;
     struct _FormInfo *l_form;
  } LinkInfo;
typedef unsigned short LYKeymap_t;
typedef enum  { NOCJK = 0, JAPANESE = 1, CHINESE = 2, KOREAN = 3, TAIPEI = 4, } HTCJKlang;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int peek_mouse_levent( void );
int get_mouse_link( void );
int peek_mouse_link( void );
int LYgetch( void );
int LYgetch_input( void );
void LYTrimTrailing( char * );
void LYSetupEdit( EditFieldData *, char *, int , int  );
int LYEditInsert( EditFieldData *, unsigned char *, int , int , BOOLEAN  );
int LYEdit1( EditFieldData *, int , int , BOOLEAN  );
void LYRefreshEdit( EditFieldData * );
int LYhandlePopupList( int , int , int , char **, int , int , int , BOOLEAN  );
void HTAlert( char * );
void HTInfoMsg( char * );
void HTUserMsg( char * );
int HTConfirmDefault( char *, int  );
int HText_SubmitForm( FormInfo *, DocInfo *, char *, char * );
void HText_ResetForm( FormInfo * );
void HText_activateRadioButton( FormInfo * );
void LYwaddnstr( WINDOW *, char *, size_t  );
int LYstrCells( char * );
void LYmove( int , int  );
void lynx_start_radio_color( void );
void lynx_stop_radio_color( void );
void LYSetHilite( int , char * );
void statusline( char * );
void get_clip_release( void );
char *get_clip_grab( void );
int put_clip( char * );
char **options_list( OptionType * );
int change_form_link_ex( int , DocInfo *, BOOLEAN *, BOOLEAN , BOOLEAN , BOOLEAN  );
int change_form_link( int , DocInfo *, BOOLEAN *, BOOLEAN , BOOLEAN  );
void LYSetLastTFPos( int  );
int form_getstr( int , BOOLEAN , BOOLEAN  );
void show_formlink_statusline( FormInfo *, int  );
char *key_for_func_ext( int , int  );
int EditBinding( int  );
int strncasecomp( char *, char *, int  );
char *HTSACopy( char **, char * );
char *HTSACat( char **, char * );
char *HTSprintf0( char **, char *, ... );
void *calloc( unsigned int , unsigned int  );
char *gettext( char * );
void free( void * );
int getmouse( void * );
unsigned int strlen( char * );
void __stack_chk_fail( void );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN LYShowScrollbar;
extern int LYcols;
extern LinkInfo links[1024];
extern int nlinks;
extern BOOLEAN LYforce_no_cache;
extern BOOLEAN LYtrimInputFields;
extern int user_mode;
extern BOOLEAN no_editor;
extern BOOLEAN no_file_url;
extern BOOLEAN no_mail;
extern char *editor;
extern BOOLEAN no_title;
extern BOOLEAN enable_scrollback;
extern BOOLEAN textfields_need_activation;
extern WINDOW *LYwin;
extern BOOLEAN mustshow;
extern BOOLEAN textfield_prompt_at_left_edge;
extern char *checked_box;
extern char *checked_radio;
extern char *unchecked_box;
extern char *unchecked_radio;
extern char star_string[1025];
extern LYKeymap_t keymap[661];
extern int current_char_set;
extern int LYlowest_eightbit[60];
extern BOOLEAN reloading;
extern HTCJKlang HTCJK;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
