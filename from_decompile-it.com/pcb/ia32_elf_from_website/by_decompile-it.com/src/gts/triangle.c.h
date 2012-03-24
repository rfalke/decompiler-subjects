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
typedef struct _GtsPoint GtsPoint;
typedef double gdouble;
struct _GtsPoint {
     GtsObject object;
     gdouble x;
     gdouble y;
     gdouble z;
  } ;
typedef struct _GtsPointClass GtsPointClass;
typedef gint gboolean;
struct _GtsPointClass {
     GtsObjectClass parent_class;
     gboolean binary;
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
struct _GtsVertexClass {
     GtsPointClass parent_class;
     void (*intersection_attributes)( GtsVertex *, GtsObject *, GtsObject * );
  } ;
typedef struct _GtsEdge GtsEdge;
typedef struct _GtsSegment GtsSegment;
struct _GtsSegment {
     GtsObject object;
     GtsVertex *v1;
     GtsVertex *v2;
  } ;
struct _GtsEdge {
     GtsSegment segment;
     GSList *triangles;
  } ;
typedef struct _GtsEdgeClass GtsEdgeClass;
typedef struct _GtsSegmentClass GtsSegmentClass;
struct _GtsSegmentClass {
     GtsObjectClass parent_class;
  } ;
struct _GtsEdgeClass {
     GtsSegmentClass parent_class;
  } ;
typedef struct _GtsTriangle GtsTriangle;
struct _GtsTriangle {
     GtsObject object;
     GtsEdge *e1;
     GtsEdge *e2;
     GtsEdge *e3;
  } ;
typedef struct _GtsTriangleClass GtsTriangleClass;
struct _GtsTriangleClass {
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
GtsPoint *gts_point_new( GtsPointClass *, gdouble , gdouble , gdouble  );
gdouble gts_point_orientation( GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_orientation_3d( GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_distance( GtsPoint *, GtsPoint * );
GtsVertex *gts_vertex_new( GtsVertexClass *, gdouble , gdouble , gdouble  );
GtsVertexClass *gts_vertex_class( void );
GtsEdge *gts_edge_new( GtsEdgeClass *, GtsVertex *, GtsVertex * );
GtsEdgeClass *gts_edge_class( void );
void triangle_class_init( GtsObjectClass * );
void triangle_init( GtsTriangle * );
void gts_triangle_interpolate_height( GtsTriangle *, GtsPoint * );
void gts_triangle_vertices( GtsTriangle *, GtsVertex **, GtsVertex **, GtsVertex ** );
GtsTriangle *gts_triangle_use_edges( GtsEdge *, GtsEdge *, GtsEdge * );
GtsTriangle *gts_triangle_is_duplicate( GtsTriangle * );
gboolean gts_triangle_is_ok( GtsTriangle * );
GtsEdge *gts_triangles_common_edge( GtsTriangle *, GtsTriangle * );
guint gts_triangle_neighbor_number( GtsTriangle * );
void gts_triangle_revert( GtsTriangle * );
GtsEdge *gts_triangle_edge_opposite( GtsTriangle *, GtsVertex * );
GtsVertex *triangle_use_vertices( GtsTriangle *, GtsVertex *, GtsVertex * );
gboolean gts_triangles_are_folded( GSList *, GtsVertex *, GtsVertex *, gdouble  );
void gts_triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsVertex **, GtsVertex **, GtsEdge **, GtsEdge **, GtsEdge ** );
GtsObject *gts_triangle_is_stabbed( GtsTriangle *, GtsPoint *, gdouble * );
gdouble gts_triangle_orientation( GtsTriangle * );
gboolean gts_triangles_are_compatible( GtsTriangle *, GtsTriangle *, GtsEdge * );
GtsVertex *gts_triangle_vertex_opposite( GtsTriangle *, GtsEdge * );
GtsPoint *gts_triangle_circumcircle_center( GtsTriangle *, GtsPointClass * );
GSList *gts_triangle_neighbors( GtsTriangle * );
void gts_triangle_set( GtsTriangle *, GtsEdge *, GtsEdge *, GtsEdge * );
GSList *gts_triangles_from_edges( GSList * );
void gts_triangle_normal( GtsTriangle *, gdouble *, gdouble *, gdouble * );
gdouble gts_triangle_area( GtsTriangle * );
gdouble gts_triangle_perimeter( GtsTriangle * );
gdouble gts_triangle_quality( GtsTriangle * );
gdouble gts_triangles_angle( GtsTriangle *, GtsTriangle * );
GtsTriangle *gts_triangle_new( GtsTriangleClass *, GtsEdge *, GtsEdge *, GtsEdge * );
GtsTriangleClass *gts_triangle_class( void );
GtsTriangle *gts_triangle_enclosing( GtsTriangleClass *, GSList *, gdouble  );
void triangle_destroy( GtsObject * );
GSList *g_slist_remove( GSList *, gconstpointer  );
void g_hash_table_destroy( GHashTable * );
int __fprintf_chk( void *, int , char *, ... );
void g_hash_table_insert( GHashTable *, gpointer , gpointer  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
double sqrt( double  );
GHashTable *g_hash_table_new( void *, void * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
void __stack_chk_fail( void );
double atan2( double , double  );
gpointer g_hash_table_lookup( GHashTable *, gconstpointer  );
void g_assertion_message( char *, char *, int , char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern gboolean gts_allow_floating_edges;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
