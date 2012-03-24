#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef enum  { NORECALL = 0, RECALL_URL = 1, RECALL_CMD = 2, RECALL_MAIL = 3, } RecallType;
typedef struct {
     char *str;
     int len;
  } bstring;
typedef char BOOLEAN;
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
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
char *LYstrncpy( char *, char *, int  );
int LYgetstr( char *, int , size_t , RecallType  );
char *LYno_attr_char_case_strstr( char *, char * );
char *LYno_attr_char_strstr( char *, char * );
void HTInfoMsg( char * );
void HTAddSearchQuery( char * );
void www_user_search( int , DocInfo *, char *, int  );
char *LYGetHiliteStr( int , int  );
void LYhighlight( int , int , char * );
void statusline( char * );
BOOLEAN link_has_target( int , char * );
int check_next_target_in_links( int *, char * );
int check_prev_target_in_links( int *, char * );
BOOLEAN textsearch( DocInfo *, char *, int , int  );
int HTList_count( HTList * );
void *HTList_objectAt( HTList *, int  );
char *HTSACopy( char **, char * );
void *memset( void *, int , unsigned int  );
char *gettext( char * );
void free( void * );
unsigned int strlen( char * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern HTList *search_queries;
extern LinkInfo links[1024];
extern int nlinks;
extern BOOLEAN case_sensitive;
extern int display_lines;
extern int www_search_result;
extern BOOLEAN mustshow;
extern char *checked_box;
extern char *checked_radio;
extern char *unchecked_box;
extern char *unchecked_radio;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
