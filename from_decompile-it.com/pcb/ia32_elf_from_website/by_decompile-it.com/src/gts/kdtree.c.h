#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _GSList GSList;
typedef void *gpointer;
struct _GSList {
     gpointer data;
     GSList *next;
  } ;
typedef struct _GNode GNode;
struct _GNode {
     gpointer data;
     GNode *next;
     GNode *prev;
     GNode *parent;
     GNode *children;
  } ;
typedef struct _GtsBBox GtsBBox;
typedef struct _GtsObject GtsObject;
typedef struct _GtsObjectClass GtsObjectClass;
typedef struct _GtsObjectClassInfo GtsObjectClassInfo;
typedef char gchar;
typedef unsigned int guint;
typedef void (*GtsObjectClassInitFunc)( GtsObjectClass * );
typedef void (*GtsObjectInitFunc)( GtsObject * );
typedef void (*GtsArgSetFunc)( GtsObject * );
typedef void (*GtsArgGetFunc)( GtsObject * );
struct _GtsObjectClassInfo {
     gchar name[40];
     guint object_size;
     guint class_size;
     GtsObjectClassInitFunc class_init_func;
     GtsObjectInitFunc object_init_func;
     GtsArgSetFunc arg_set_func;
     GtsArgGetFunc arg_get_func;
  } ;
typedef struct _GtsFile GtsFile;
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
typedef struct _GString GString;
typedef unsigned int gsize;
struct _GString {
     gchar *str;
     gsize len;
     gsize allocated_len;
  } ;
enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, };
typedef enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, } GtsTokenType;
typedef int gint;
struct _GtsFile {
     FILE *fp;
     gchar *s;
     gchar *s1;
     guint line;
     guint pos;
     GString *token;
     GtsTokenType type;
     gchar *error;
     guint curline;
     guint curpos;
     guint scope;
     guint scope_max;
     gint next_token;
     gchar *delimiters;
     gchar *comments;
     gchar *tokens;
  } ;
typedef struct _GtsColor GtsColor;
typedef float gfloat;
struct _GtsColor {
     gfloat r;
     gfloat g;
     gfloat b;
  } ;
struct _GtsObjectClass {
     GtsObjectClassInfo info;
     GtsObjectClass *parent_class;
     void (*clone)( GtsObject *, GtsObject * );
     void (*destroy)( GtsObject * );
     void (*read)( GtsObject **, GtsFile * );
     void (*write)( GtsObject *, FILE * );
     GtsColor (*color)( GtsObject * );
     void (*attributes)( GtsObject *, GtsObject * );
  } ;
typedef unsigned int guint32;
struct _GtsObject {
     GtsObjectClass *klass;
     gpointer reserved;
     guint32 flags;
  } ;
typedef double gdouble;
struct _GtsBBox {
     GtsObject object;
     gpointer bounded;
     gdouble x1;
     gdouble y1;
     gdouble z1;
     gdouble x2;
     gdouble y2;
     gdouble z2;
  } ;
typedef struct _GPtrArray GPtrArray;
struct _GPtrArray {
     gpointer *pdata;
     guint len;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int compare_x( void *, void * );
int compare_y( void *, void * );
int compare_z( void *, void * );
GSList *gts_kdtree_range( GNode *, GtsBBox *, int (*)( void *, void * ) );
GNode *gts_kdtree_new( GPtrArray *, int (*)( void *, void * ) );
void qsort( void *, unsigned int , unsigned int , void * );
GNode *g_node_prepend( GNode *, GNode * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
GSList *g_slist_concat( GSList *, GSList * );
GNode *g_node_new( gpointer  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
