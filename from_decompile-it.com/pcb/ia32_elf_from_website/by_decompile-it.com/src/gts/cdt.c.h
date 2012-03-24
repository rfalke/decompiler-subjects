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
typedef struct _GtsPointClass GtsPointClass;
typedef gint gboolean;
struct _GtsPointClass {
     GtsObjectClass parent_class;
     gboolean binary;
  } ;
typedef struct _GtsSegment GtsSegment;
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
struct _GtsSegment {
     GtsObject object;
     GtsVertex *v1;
     GtsVertex *v2;
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
typedef struct _GtsVertexClass GtsVertexClass;
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
typedef struct _GtsEdge GtsEdge;
struct _GtsEdge {
     GtsSegment segment;
     GSList *triangles;
  } ;
typedef struct _GtsFace GtsFace;
typedef struct _GtsTriangle GtsTriangle;
struct _GtsTriangle {
     GtsObject object;
     GtsEdge *e1;
     GtsEdge *e2;
     GtsEdge *e3;
  } ;
struct _GtsFace {
     GtsTriangle triangle;
     GSList *surfaces;
  } ;
typedef gint (*GtsFunc)( gpointer , gpointer  );
typedef struct _GtsConstraintClass GtsConstraintClass;
struct _GtsConstraintClass {
     GtsEdgeClass parent_class;
  } ;
typedef struct _GtsConstraint GtsConstraint;
struct _GtsConstraint {
     GtsEdge edge;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_object_attributes( GtsObject *, GtsObject * );
void gts_object_destroy( GtsObject * );
GtsObject *gts_object_new( GtsObjectClass * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
gdouble gts_point_orientation( GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_in_circle( GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint * );
GtsPointClass *gts_point_class( void );
GtsSegment *gts_vertices_are_connected( GtsVertex *, GtsVertex * );
GSList *gts_vertex_fan_oriented( GtsVertex *, GtsSurface * );
GSList *gts_vertex_neighbors( GtsVertex *, GSList *, GtsSurface * );
GSList *gts_vertex_triangles( GtsVertex *, GSList * );
GtsEdge *gts_edge_new( GtsEdgeClass *, GtsVertex *, GtsVertex * );
GtsEdgeClass *gts_edge_class( void );
GtsFace *gts_edge_is_boundary( GtsEdge *, GtsSurface * );
void gts_triangle_vertices( GtsTriangle *, GtsVertex **, GtsVertex **, GtsVertex ** );
GtsEdge *gts_triangle_edge_opposite( GtsTriangle *, GtsVertex * );
void gts_triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsVertex **, GtsVertex **, GtsEdge **, GtsEdge **, GtsEdge ** );
gdouble gts_triangle_orientation( GtsTriangle * );
gboolean gts_face_has_parent_surface( GtsFace *, GtsSurface * );
GtsFace *gts_face_new( GtsFaceClass *, GtsEdge *, GtsEdge *, GtsEdge * );
GtsFaceClass *gts_face_class( void );
void gts_surface_foreach_face( GtsSurface *, GtsFunc , gpointer  );
GSList *gts_surface_boundary( GtsSurface * );
void gts_surface_add_face( GtsSurface *, GtsFace * );
void gts_surface_remove_face( GtsSurface *, GtsFace * );
void triangle_barycenter( GtsTriangle *, GtsPoint * );
void gts_list_face_class_init( GtsFaceClass * );
GtsFaceClass *gts_list_face_class( void );
void gts_list_face_destroy( GtsObject * );
gpointer gts_object_is_from_class( gpointer , gpointer  );
GtsFace *gts_delaunay_check( GtsSurface * );
void delaunay_check( GtsTriangle *, gpointer * );
GtsConstraintClass *gts_constraint_class( void );
gboolean find_closest( gpointer , gpointer , gpointer  );
GtsFace *neighbor( GtsFace *, GtsEdge *, GtsSurface * );
GtsFace *point_locate( GtsPoint *, GtsPoint *, GtsFace *, GtsSurface * );
GtsFace *gts_point_locate( GtsPoint *, GtsSurface *, GtsFace * );
void remove_triangles( GtsEdge *, GtsSurface * );
void triangulate_polygon( GSList *, GtsSurface *, GtsFace * );
void swap_if_in_circle( GtsFace *, GtsVertex *, GtsVertex *, GtsVertex *, GtsEdge *, GtsEdge *, GtsEdge *, GtsSurface * );
GtsVertex *gts_delaunay_add_vertex_to_face( GtsSurface *, GtsVertex *, GtsFace * );
GtsVertex *gts_delaunay_add_vertex( GtsSurface *, GtsVertex *, GtsFace * );
void gts_delaunay_remove_vertex( GtsSurface *, GtsVertex * );
void gts_delaunay_remove_hull( GtsSurface * );
GSList *remove_intersected_edge( GtsSegment *, GtsEdge *, GtsFace *, GtsSurface *, GSList **, GSList ** );
GSList *gts_delaunay_add_constraint( GtsSurface *, GtsConstraint * );
void g_slist_free( GSList * );
GSList *g_slist_reverse( GSList * );
gpointer g_hash_table_find( GHashTable *, void *, gpointer  );
double exp( double  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
guint g_hash_table_size( GHashTable * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
void __stack_chk_fail( void );
void g_slist_free_1( GSList * );
double log( double  );
GSList *g_slist_concat( GSList *, GSList * );
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
