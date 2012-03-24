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
typedef char BOOLEAN;
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
typedef struct _HTList HTList;
struct _HTList {
     void *object;
     HTList *next;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
BOOLEAN editor_can_position( void );
int edit_current_file( char *, int , int  );
void edit_temporary_file( char *, char *, char * );
void HTAlert( char * );
void HTAlwaysAlert( char *, char * );
void HTUserMsg( char * );
void HTUserMsg2( char *, char * );
FILE *TraceFP( void );
void start_curses( void );
void stop_curses( void );
void statusline( char * );
BOOLEAN LYisLocalFile( char * );
void LYFixCursesOn( char * );
BOOLEAN LYCanReadFile( char * );
char *trimPoundSelector( char * );
int LYSystem( char * );
char *HTParse( char *, char *, int  );
char *HTUnEscape( char * );
char *HTSACopy( char **, char * );
char *HTSprintf0( char **, char *, ... );
void HTAddXpand( char **, char *, int , char * );
void HTAddParam( char **, char *, int , char * );
void HTEndParam( char **, char *, int  );
int *__errno_location( void );
int sprintf( char *, char *, ... );
char *strerror( int  );
char *strchr( char *, char  );
char *gettext( char * );
void free( void * );
int fprintf( FILE *, char *, ... );
char *strstr( char *, char * );
int remove( char * );
void __stack_chk_fail( void );
unsigned int sleep( unsigned int  );
int strncmp( char *, char *, unsigned int  );
int strcmp( char *, char * );
int stat64( char *, void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern LinkInfo links[1024];
extern int nlinks;
extern HTList *positionable_editor;
extern char *editor;
extern int MessageSecs;
extern FILE *LYTraceLogFP;
extern BOOLEAN mustshow;
extern BOOLEAN WWW_TraceFlag;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
