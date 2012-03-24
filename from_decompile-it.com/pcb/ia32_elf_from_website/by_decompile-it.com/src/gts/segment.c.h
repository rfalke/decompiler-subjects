#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
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
typedef void *gpointer;
typedef unsigned int guint32;
struct _GtsObject {
     GtsObjectClass *klass;
     gpointer reserved;
     guint32 flags;
  } ;
typedef double gdouble;
typedef struct _GtsPoint GtsPoint;
struct _GtsPoint {
     GtsObject object;
     gdouble x;
     gdouble y;
     gdouble z;
  } ;
typedef struct _GtsVertex GtsVertex;
typedef struct _GSList GSList;
struct _GSList {
     gpointer data;
     GSList *next;
  } ;
struct _GtsVertex {
     GtsPoint p;
     GSList *segments;
  } ;
typedef struct _GtsVertexClass GtsVertexClass;
typedef struct _GtsPointClass GtsPointClass;
typedef gint gboolean;
struct _GtsPointClass {
     GtsObjectClass parent_class;
     gboolean binary;
  } ;
struct _GtsVertexClass {
     GtsPointClass parent_class;
     void (*intersection_attributes)( GtsVertex *, GtsObject *, GtsObject * );
  } ;
typedef struct _GtsSegment GtsSegment;
struct _GtsSegment {
     GtsObject object;
     GtsVertex *v1;
     GtsVertex *v2;
  } ;
enum  { GTS_OUT = -1, GTS_ON = 0, GTS_IN = 1, };
typedef enum  { GTS_OUT = -1, GTS_ON = 0, GTS_IN = 1, } GtsIntersect;
typedef struct _GtsSegmentClass GtsSegmentClass;
struct _GtsSegmentClass {
     GtsObjectClass parent_class;
  } ;
typedef void *gconstpointer;
typedef struct _GHashTable GHashTable;
struct _GHashTable  ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_object_destroy( GtsObject * );
GtsObject *gts_object_new( GtsObjectClass * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
GtsObjectClass *gts_object_class( void );
gdouble gts_point_orientation( GtsPoint *, GtsPoint *, GtsPoint * );
GtsVertex *gts_vertex_new( GtsVertexClass *, gdouble , gdouble , gdouble  );
void segment_class_init( GtsObjectClass * );
void segment_init( GtsSegment * );
GtsSegment *gts_segment_is_duplicate( GtsSegment * );
gboolean gts_segment_is_ok( GtsSegment * );
GSList *gts_segments_from_vertices( GSList * );
GtsVertex *gts_segment_midvertex( GtsSegment *, GtsVertexClass * );
GtsIntersect gts_segments_are_intersecting( GtsSegment *, GtsSegment * );
GtsSegment *gts_segment_new( GtsSegmentClass *, GtsVertex *, GtsVertex * );
GtsSegmentClass *gts_segment_class( void );
void segment_destroy( GtsObject * );
GSList *g_slist_remove( GSList *, gconstpointer  );
void g_hash_table_destroy( GHashTable * );
void g_hash_table_insert( GHashTable *, gpointer , gpointer  );
GHashTable *g_hash_table_new( void *, void * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
void __stack_chk_fail( void );
gpointer g_hash_table_lookup( GHashTable *, gconstpointer  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern gboolean gts_allow_floating_vertices;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
