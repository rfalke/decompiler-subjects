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
typedef struct _GtsSegment GtsSegment;
typedef struct _GtsVertex GtsVertex;
typedef struct _GtsPoint GtsPoint;
typedef double gdouble;
struct _GtsPoint {
     GtsObject object;
     gdouble x;
     gdouble y;
     gdouble z;
  } ;
typedef struct _GSList GSList;
struct _GSList {
     gpointer data;
     GSList *next;
  } ;
struct _GtsVertex {
     GtsPoint p;
     GSList *segments;
  } ;
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
typedef struct _GtsEdgeClass GtsEdgeClass;
typedef struct _GtsSegmentClass GtsSegmentClass;
struct _GtsSegmentClass {
     GtsObjectClass parent_class;
  } ;
struct _GtsEdgeClass {
     GtsSegmentClass parent_class;
  } ;
typedef struct _GtsFace GtsFace;
struct _GtsFace {
     GtsTriangle triangle;
     GSList *surfaces;
  } ;
typedef gint gboolean;
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
typedef struct _GtsVertexClass GtsVertexClass;
typedef struct _GtsPointClass GtsPointClass;
struct _GtsPointClass {
     GtsObjectClass parent_class;
     gboolean binary;
  } ;
struct _GtsVertexClass {
     GtsPointClass parent_class;
     void (*intersection_attributes)( GtsVertex *, GtsObject *, GtsObject * );
  } ;
struct _GtsSurface {
     GtsObject object;
     GHashTable *faces;
     GtsFaceClass *face_class;
     GtsEdgeClass *edge_class;
     GtsVertexClass *vertex_class;
     gboolean keep_faces;
  } ;
typedef struct _GList GList;
struct _GList {
     gpointer data;
     GList *next;
     GList *prev;
  } ;
typedef void *gconstpointer;
typedef void (*GFunc)( gpointer , gpointer  );
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_object_reset_reserved( GtsObject * );
void gts_object_destroy( GtsObject * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
GtsSegment *gts_vertices_are_connected( GtsVertex *, GtsVertex * );
GSList *gts_vertex_triangles( GtsVertex *, GSList * );
void edge_class_init( GtsObjectClass * );
void edge_init( GtsEdge * );
void triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsEdge **, GtsEdge ** );
GtsEdge *next_edge( GtsTriangle *, GtsEdge *, GtsEdge * );
void triangle_next( GtsEdge *, GtsEdge * );
guint gts_edge_is_contact( GtsEdge * );
void gts_edge_replace( GtsEdge *, GtsEdge * );
GtsEdgeClass *gts_edge_class( void );
void edge_destroy( GtsObject * );
void gts_edge_remove( GtsEdge * );
void edge_clone( GtsObject *, GtsObject * );
GtsFace *gts_edge_has_any_parent_surface( GtsEdge * );
gboolean gts_edge_belongs_to_tetrahedron( GtsEdge * );
gboolean gts_edge_manifold_faces( GtsEdge *, GtsSurface *, GtsFace **, GtsFace ** );
guint gts_edge_face_number( GtsEdge *, GtsSurface * );
GtsFace *gts_edge_is_boundary( GtsEdge *, GtsSurface * );
GtsFace *gts_edge_has_parent_surface( GtsEdge *, GtsSurface * );
GSList *gts_edges_from_vertices( GSList *, GtsSurface * );
GtsEdge *gts_edge_is_duplicate( GtsEdge * );
GList *gts_edges_merge( GList * );
void gts_edge_swap( GtsEdge *, GtsSurface * );
GtsTriangle *gts_triangle_use_edges( GtsEdge *, GtsEdge *, GtsEdge * );
GtsTriangle *gts_triangle_is_duplicate( GtsTriangle * );
void gts_triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsVertex **, GtsVertex **, GtsEdge **, GtsEdge **, GtsEdge ** );
gboolean gts_face_has_parent_surface( GtsFace *, GtsSurface * );
GtsFace *gts_face_new( GtsFaceClass *, GtsEdge *, GtsEdge *, GtsEdge * );
GtsFaceClass *gts_face_class( void );
void gts_surface_add_face( GtsSurface *, GtsFace * );
void gts_surface_remove_face( GtsSurface *, GtsFace * );
GtsSegment *gts_segment_new( GtsSegmentClass *, GtsVertex *, GtsVertex * );
GtsSegmentClass *gts_segment_class( void );
GSList *g_slist_remove( GSList *, gconstpointer  );
void g_slist_free( GSList * );
void g_hash_table_destroy( GHashTable * );
void g_hash_table_insert( GHashTable *, gpointer , gpointer  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
GHashTable *g_hash_table_new( void *, void * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
GList *g_list_remove_link( GList *, GList * );
GSList *g_slist_find( GSList *, gconstpointer  );
void g_list_free_1( GList * );
void g_slist_foreach( GSList *, GFunc , gpointer  );
void __stack_chk_fail( void );
gpointer g_hash_table_lookup( GHashTable *, gconstpointer  );
void g_assertion_message( char *, char *, int , char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern gboolean gts_allow_floating_edges;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
