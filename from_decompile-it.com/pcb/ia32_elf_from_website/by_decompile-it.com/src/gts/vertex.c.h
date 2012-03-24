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
typedef struct _GtsVertexClass GtsVertexClass;
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
typedef struct _GtsEdge GtsEdge;
struct _GtsEdge {
     GtsSegment segment;
     GSList *triangles;
  } ;
typedef struct _GtsTriangle GtsTriangle;
struct _GtsTriangle {
     GtsObject object;
     GtsEdge *e1;
     GtsEdge *e2;
     GtsEdge *e3;
  } ;
typedef struct _GList GList;
struct _GList {
     gpointer data;
     GList *next;
     GList *prev;
  } ;
typedef struct _GtsSurface GtsSurface;
typedef struct _GHashTable GHashTable;
struct _GHashTable  ;
typedef struct _GtsFaceClass GtsFaceClass;
typedef struct _GtsTriangleClass GtsTriangleClass;
struct _GtsTriangleClass {
     GtsObjectClass parent_class;
  } ;
struct _GtsFaceClass {
     GtsTriangleClass parent_class;
  } ;
typedef struct _GtsEdgeClass GtsEdgeClass;
typedef struct _GtsSegmentClass GtsSegmentClass;
struct _GtsSegmentClass {
     GtsObjectClass parent_class;
  } ;
struct _GtsEdgeClass {
     GtsSegmentClass parent_class;
  } ;
struct _GtsSurface {
     GtsObject object;
     GHashTable *faces;
     GtsFaceClass *face_class;
     GtsEdgeClass *edge_class;
     GtsVertexClass *vertex_class;
     gboolean keep_faces;
  } ;
typedef struct _GtsFace GtsFace;
struct _GtsFace {
     GtsTriangle triangle;
     GSList *surfaces;
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
typedef struct _GtsBBoxClass GtsBBoxClass;
struct _GtsBBoxClass {
     GtsObjectClass parent_class;
  } ;
typedef void *gconstpointer;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_object_destroy( GtsObject * );
GtsObject *gts_object_clone( GtsObject * );
GtsObject *gts_object_new( GtsObjectClass * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
void gts_point_set( GtsPoint *, gdouble , gdouble , gdouble  );
GtsPointClass *gts_point_class( void );
void vertex_class_init( GtsVertexClass * );
void vertex_init( GtsVertex * );
void gts_vertex_normal_class_init( GtsVertexClass * );
GtsSegment *gts_vertices_are_connected( GtsVertex *, GtsVertex * );
gboolean gts_vertex_is_unattached( GtsVertex * );
void gts_vertex_replace( GtsVertex *, GtsVertex * );
GtsEdge *replace_vertex( GtsTriangle *, GtsEdge *, GtsVertex *, GtsVertex * );
void triangle_next( GtsEdge *, GtsVertex *, GtsVertex * );
GList *gts_vertices_merge( GList *, gdouble , gboolean (*)( GtsVertex *, GtsVertex * ) );
GSList *gts_vertices_from_segments( GSList * );
GtsVertex *gts_vertex_new( GtsVertexClass *, gdouble , gdouble , gdouble  );
GtsVertexClass *gts_vertex_class( void );
GtsVertexClass *gts_color_vertex_class( void );
GtsVertexClass *gts_vertex_normal_class( void );
void vertex_clone( GtsObject *, GtsObject * );
void vertex_destroy( GtsObject * );
GSList *edge_fan_list( GtsVertex *, GtsSurface *, GtsFace *, GtsEdge *, GtsFace * );
GSList *gts_vertex_fan_oriented( GtsVertex *, GtsSurface * );
gboolean gts_vertex_is_boundary( GtsVertex *, GtsSurface * );
GSList *gts_vertex_neighbors( GtsVertex *, GSList *, GtsSurface * );
GSList *gts_vertex_faces( GtsVertex *, GtsSurface *, GSList * );
GSList *gts_vertex_triangles( GtsVertex *, GSList * );
guint gts_vertex_is_contact( GtsVertex *, gboolean  );
void vertex_normal_attributes( GtsVertex *, GtsObject *, GtsObject * );
GtsEdgeClass *gts_edge_class( void );
GtsFace *gts_edge_is_boundary( GtsEdge *, GtsSurface * );
GtsFace *gts_edge_has_parent_surface( GtsEdge *, GtsSurface * );
void gts_triangle_vertices( GtsTriangle *, GtsVertex **, GtsVertex **, GtsVertex ** );
void gts_triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsVertex **, GtsVertex **, GtsEdge **, GtsEdge **, GtsEdge ** );
GtsTriangleClass *gts_triangle_class( void );
gboolean gts_face_has_parent_surface( GtsFace *, GtsSurface * );
GtsFaceClass *gts_face_class( void );
GSList *gts_kdtree_range( GNode *, GtsBBox *, int (*)( void *, void * ) );
GNode *gts_kdtree_new( GPtrArray *, int (*)( void *, void * ) );
GtsBBox *gts_bbox_new( GtsBBoxClass *, gpointer , gdouble , gdouble , gdouble , gdouble , gdouble , gdouble  );
GtsBBoxClass *gts_bbox_class( void );
GSList *g_slist_remove( GSList *, gconstpointer  );
void g_slist_free( GSList * );
void g_hash_table_destroy( GHashTable * );
void g_hash_table_insert( GHashTable *, gpointer , gpointer  );
void g_ptr_array_add( GPtrArray *, gpointer  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
gpointer *g_ptr_array_free( GPtrArray *, gboolean  );
GHashTable *g_hash_table_new( void *, void * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
GList *g_list_remove_link( GList *, GList * );
GSList *g_slist_find( GSList *, gconstpointer  );
void g_list_free_1( GList * );
void __stack_chk_fail( void );
gpointer g_hash_table_lookup( GHashTable *, gconstpointer  );
void g_assertion_message( char *, char *, int , char *, char * );
GPtrArray *g_ptr_array_new( void );
void g_node_destroy( GNode * );
void g_log( gchar *, void *, gchar *, ... );
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
