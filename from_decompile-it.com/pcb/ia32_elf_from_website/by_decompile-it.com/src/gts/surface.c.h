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
typedef struct _GtsTriangle GtsTriangle;
typedef struct _GtsEdge GtsEdge;
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
struct _GtsEdge {
     GtsSegment segment;
     GSList *triangles;
  } ;
struct _GtsTriangle {
     GtsObject object;
     GtsEdge *e1;
     GtsEdge *e2;
     GtsEdge *e3;
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
typedef gint (*GtsFunc)( gpointer , gpointer  );
typedef struct _GNode GNode;
struct _GNode {
     gpointer data;
     GNode *next;
     GNode *prev;
     GNode *parent;
     GNode *children;
  } ;
typedef struct _GtsRange GtsRange;
struct _GtsRange {
     gdouble min;
     gdouble max;
     gdouble sum;
     gdouble sum2;
     gdouble mean;
     gdouble stddev;
     guint n;
  } ;
typedef gdouble (*GtsBBoxDistFunc)( GtsPoint *, gpointer  );
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
typedef struct _GtsBBoxClass GtsBBoxClass;
struct _GtsBBoxClass {
     GtsObjectClass parent_class;
  } ;
enum  { GTS_NONE = 256, GTS_INT = 512, GTS_UINT = 1024, GTS_FLOAT = 2048, GTS_DOUBLE = 4096, GTS_STRING = 8192, GTS_FILE = 16384, GTS_ERROR = 32768, };
typedef struct _GtsEHeap GtsEHeap;
typedef struct _GPtrArray GPtrArray;
struct _GPtrArray {
     gpointer *pdata;
     guint len;
  } ;
typedef gdouble (*GtsKeyFunc)( gpointer , gpointer  );
struct _GtsEHeap {
     GPtrArray *elts;
     GtsKeyFunc func;
     gpointer data;
     gboolean frozen;
     gboolean randomized;
  } ;
typedef void (*GFunc)( gpointer , gpointer  );
typedef struct _GtsEHeapPair GtsEHeapPair;
struct _GtsEHeapPair {
     gpointer data;
     gdouble key;
     guint pos;
  } ;
typedef struct _GtsSurfaceClass GtsSurfaceClass;
struct _GtsSurfaceClass {
     GtsObjectClass parent_class;
     void (*add_face)( GtsSurface *, GtsFace * );
     void (*remove_face)( GtsSurface *, GtsFace * );
  } ;
typedef struct _GtsSurfaceTraverse GtsSurfaceTraverse;
typedef struct _GtsFifo GtsFifo;
struct _GtsFifo  ;
struct _GtsSurfaceTraverse {
     GtsFifo *q;
     GtsSurface *s;
  } ;
typedef struct _GtsSurfaceQualityStats GtsSurfaceQualityStats;
struct _GtsSurfaceQualityStats {
     GtsRange face_quality;
     GtsRange face_area;
     GtsRange edge_length;
     GtsRange edge_angle;
     GtsSurface *parent;
  } ;
typedef struct _GtsSurfaceStats GtsSurfaceStats;
struct _GtsSurfaceStats {
     guint n_faces;
     guint n_incompatible_faces;
     guint n_duplicate_faces;
     guint n_duplicate_edges;
     guint n_boundary_edges;
     guint n_non_manifold_edges;
     GtsRange edges_per_vertex;
     GtsRange faces_per_edge;
     GtsSurface *parent;
  } ;
typedef GtsVertex *(*GtsRefineFunc)( GtsEdge *, GtsVertexClass *, gpointer  );
typedef gboolean (*GtsStopFunc)( gdouble , guint , gpointer  );
typedef GtsVertex *(*GtsCoarsenFunc)( GtsEdge *, GtsVertexClass *, gpointer  );
typedef void *gconstpointer;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_object_reset_reserved( GtsObject * );
void gts_object_destroy( GtsObject * );
GtsObject *gts_object_new( GtsObjectClass * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
GtsObjectClass *gts_object_class( void );
gdouble gts_point_distance2( GtsPoint *, GtsPoint * );
gdouble gts_point_triangle_distance( GtsPoint *, GtsTriangle * );
gdouble gts_point_segment_distance( GtsPoint *, GtsSegment * );
gdouble gts_point_distance( GtsPoint *, GtsPoint * );
void gts_vertex_replace( GtsVertex *, GtsVertex * );
GtsVertex *gts_vertex_new( GtsVertexClass *, gdouble , gdouble , gdouble  );
GtsVertexClass *gts_vertex_class( void );
gboolean gts_vertex_is_boundary( GtsVertex *, GtsSurface * );
GSList *gts_vertex_triangles( GtsVertex *, GSList * );
GtsEdge *gts_edge_new( GtsEdgeClass *, GtsVertex *, GtsVertex * );
void gts_edge_replace( GtsEdge *, GtsEdge * );
GtsEdgeClass *gts_edge_class( void );
gboolean gts_edge_belongs_to_tetrahedron( GtsEdge * );
guint gts_edge_face_number( GtsEdge *, GtsSurface * );
GtsFace *gts_edge_is_boundary( GtsEdge *, GtsSurface * );
GtsFace *gts_edge_has_parent_surface( GtsEdge *, GtsSurface * );
GtsEdge *gts_edge_is_duplicate( GtsEdge * );
void gts_triangle_vertices( GtsTriangle *, GtsVertex **, GtsVertex **, GtsVertex ** );
GtsTriangle *gts_triangle_use_edges( GtsEdge *, GtsEdge *, GtsEdge * );
GtsTriangle *gts_triangle_is_duplicate( GtsTriangle * );
GtsEdge *gts_triangle_edge_opposite( GtsTriangle *, GtsVertex * );
gboolean gts_triangles_are_folded( GSList *, GtsVertex *, GtsVertex *, gdouble  );
void gts_triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsVertex **, GtsVertex **, GtsEdge **, GtsEdge **, GtsEdge ** );
gboolean gts_triangles_are_compatible( GtsTriangle *, GtsTriangle *, GtsEdge * );
gdouble gts_triangle_area( GtsTriangle * );
gdouble gts_triangle_quality( GtsTriangle * );
gdouble gts_triangles_angle( GtsTriangle *, GtsTriangle * );
gboolean gts_face_has_parent_surface( GtsFace *, GtsSurface * );
GtsFace *gts_face_new( GtsFaceClass *, GtsEdge *, GtsEdge *, GtsEdge * );
GtsFaceClass *gts_face_class( void );
gboolean gts_face_is_compatible( GtsFace *, GtsSurface * );
void gts_face_foreach_neighbor( GtsFace *, GtsSurface *, GtsFunc , gpointer  );
void gts_bb_tree_surface_boundary_distance( GNode *, GtsSurface *, gdouble (*)( GtsPoint *, gpointer  ), gdouble , GtsRange * );
void gts_bb_tree_surface_distance( GNode *, GtsSurface *, GtsBBoxDistFunc , gdouble , GtsRange * );
GtsBBox *gts_bbox_segment( GtsBBoxClass *, GtsSegment * );
GtsBBox *gts_bbox_triangle( GtsBBoxClass *, GtsTriangle * );
void gts_bb_tree_destroy( GNode *, gboolean  );
GtsBBoxClass *gts_bbox_class( void );
GNode *gts_bb_tree_new( GSList * );
void gts_file_error( GtsFile *, gchar *, ... );
void gts_file_next_token( GtsFile * );
void gts_file_first_token_after( GtsFile *, GtsTokenType  );
guint gts_eheap_size( GtsEHeap * );
void gts_eheap_freeze( GtsEHeap * );
void gts_eheap_foreach( GtsEHeap *, GFunc , gpointer  );
void gts_eheap_thaw( GtsEHeap * );
void gts_eheap_destroy( GtsEHeap * );
gpointer gts_eheap_remove_top( GtsEHeap *, gdouble * );
gpointer gts_eheap_remove( GtsEHeap *, GtsEHeapPair * );
GtsEHeapPair *gts_eheap_insert_with_key( GtsEHeap *, gpointer , gdouble  );
GtsEHeapPair *gts_eheap_insert( GtsEHeap *, gpointer  );
GtsEHeap *gts_eheap_new( GtsKeyFunc , gpointer  );
GtsSurface *gts_surface_new( GtsSurfaceClass *, GtsFaceClass *, GtsEdgeClass *, GtsVertexClass * );
void surface_class_init( GtsSurfaceClass * );
void foreach_face( GtsFace *, gpointer , gpointer * );
void number_foreach( gpointer , guint * );
gboolean gts_coarsen_stop_cost( gdouble , guint , gdouble * );
gboolean gts_coarsen_stop_number( gdouble , guint , guint * );
void gts_range_add_value( GtsRange *, gdouble  );
void gts_range_reset( GtsRange * );
void gts_range_init( GtsRange * );
GSList *edge_triangles( GtsEdge *, GtsEdge * );
void closed_foreach_edge( GtsEdge *, gpointer * );
void manifold_foreach_edge( GtsEdge *, gpointer * );
void non_manifold_edges( GtsEdge *, gpointer * );
void surface_boundary( GtsEdge *, gpointer * );
GtsFace *gts_surface_traverse_next( GtsSurfaceTraverse *, guint * );
void push_neighbor( GtsFace *, gpointer * );
GtsSurfaceTraverse *gts_surface_traverse_new( GtsSurface *, GtsFace * );
void build_list_boundary( GtsEdge *, GSList ** );
void build_list_face( GtsTriangle *, GSList ** );
guint gts_surface_face_number( GtsSurface * );
void center_of_mass_foreach_face( GtsTriangle *, gpointer * );
void volume_foreach_face( GtsTriangle *, gdouble * );
void center_of_area_foreach_face( GtsTriangle *, gpointer * );
void sum_area( GtsFace *, gdouble * );
void foreach_edge_copy( GtsSegment *, GtsEdgeClass * );
void foreach_vertex_copy( GtsPoint *, GtsVertexClass * );
gboolean foreach_face_remove( GtsFace *, gpointer , gpointer * );
void destroy_foreach_face( GtsFace *, GtsSurface * );
void create_array_tessellate( GtsFace *, GPtrArray * );
GtsVertex *unit_sphere_arc_midvertex( GtsSegment *, GtsVertexClass * );
void gts_range_update( GtsRange * );
void create_heap_coarsen( GtsEdge *, GtsEHeap * );
void create_heap_refine( GtsEdge *, GtsEHeap * );
gdouble edge_length2( GtsEdge * );
gdouble edge_length2_inverse( GtsSegment * );
guint gts_surface_foreach_face_remove( GtsSurface *, GtsFunc , gpointer  );
void gts_surface_foreach_face( GtsSurface *, GtsFunc , gpointer  );
void gts_surface_traverse_destroy( GtsSurfaceTraverse * );
gdouble gts_surface_center_of_area( GtsSurface *, gdouble * );
gdouble gts_surface_center_of_mass( GtsSurface *, gdouble * );
gdouble gts_surface_volume( GtsSurface * );
void gts_surface_merge( GtsSurface *, GtsSurface * );
gdouble gts_surface_area( GtsSurface * );
void gts_surface_foreach_edge( GtsSurface *, GtsFunc , gpointer  );
GSList *gts_surface_split( GtsSurface * );
GSList *gts_surface_boundary( GtsSurface * );
void gts_surface_distance( GtsSurface *, GtsSurface *, gdouble , GtsRange *, GtsRange * );
guint gts_surface_edge_number( GtsSurface * );
gboolean gts_surface_is_orientable( GtsSurface * );
gboolean gts_surface_is_closed( GtsSurface * );
gboolean gts_surface_is_manifold( GtsSurface * );
void gts_surface_quality_stats( GtsSurface *, GtsSurfaceQualityStats * );
void gts_surface_foreach_vertex( GtsSurface *, GtsFunc , gpointer  );
guint gts_surface_vertex_number( GtsSurface * );
GtsSurface *gts_surface_copy( GtsSurface *, GtsSurface * );
void gts_surface_stats( GtsSurface *, GtsSurfaceStats * );
void edge_foreach_face( GtsTriangle *, gpointer , gpointer * );
void vertex_foreach_face( GtsTriangle *, gpointer , gpointer * );
void gts_surface_add_face( GtsSurface *, GtsFace * );
void traverse_manifold( GtsTriangle *, GtsSurface * );
void merge_foreach_face( GtsFace *, GtsSurface * );
void foreach_face_copy( GtsTriangle *, GtsSurface * );
void gts_surface_tessellate( GtsSurface *, GtsRefineFunc , gpointer  );
GtsSurface *gts_surface_generate_sphere( GtsSurface *, guint  );
void gts_surface_refine( GtsSurface *, GtsKeyFunc , gpointer , GtsRefineFunc , gpointer , GtsStopFunc , gpointer  );
void gts_surface_write_oogl_boundary( GtsSurface *, FILE * );
void write_edge_oogl_boundary( GtsSegment *, gpointer * );
void gts_surface_write_vtk( GtsSurface *, FILE * );
void write_face_vtk( GtsTriangle *, FILE * );
void write_vertex_vtk( GtsPoint *, gpointer * );
void gts_surface_write_oogl( GtsSurface *, FILE * );
void gts_range_print( GtsRange *, FILE * );
void surface_write( GtsObject *, FILE * );
void write_face_oogl( GtsTriangle *, FILE * );
void write_vertex_oogl( GtsPoint *, gpointer * );
void gts_surface_write( GtsSurface *, FILE * );
void write_face( GtsTriangle *, gpointer * );
void write_edge( GtsSegment *, gpointer * );
void write_vertex( GtsPoint *, gpointer * );
void gts_surface_print_stats( GtsSurface *, FILE * );
void quality_foreach_face( GtsTriangle *, GtsSurfaceQualityStats * );
void quality_foreach_edge( GtsSegment *, GtsSurfaceQualityStats * );
void stats_foreach_face( GtsTriangle *, GtsSurfaceStats * );
void stats_foreach_edge( GtsEdge *, GtsSurfaceStats * );
void stats_foreach_vertex( GtsVertex *, GtsSurfaceStats * );
guint gts_surface_read( GtsSurface *, GtsFile * );
void gts_surface_remove_face( GtsSurface *, GtsFace * );
void traverse_remaining( GtsFace *, gpointer * );
void traverse_boundary( GtsEdge *, gpointer * );
GtsSurfaceClass *gts_surface_class( void );
void surface_destroy( GtsObject * );
void surface_init( GtsSurface * );
void orientable_foreach_edge( GtsEdge *, gpointer * );
gboolean gts_edge_collapse_is_valid( GtsEdge * );
gboolean gts_edge_collapse_creates_fold( GtsEdge *, GtsVertex *, gdouble  );
void gts_surface_coarsen( GtsSurface *, GtsKeyFunc , gpointer , GtsCoarsenFunc , gpointer , GtsStopFunc , gpointer , gdouble  );
GtsSegment *gts_segment_is_duplicate( GtsSegment * );
GtsVertex *gts_segment_midvertex( GtsSegment *, GtsVertexClass * );
void gts_fifo_destroy( GtsFifo * );
gpointer gts_fifo_pop( GtsFifo * );
void gts_fifo_push( GtsFifo *, gpointer  );
GtsFifo *gts_fifo_new( void );
void g_free( gpointer  );
GSList *g_slist_remove( GSList *, gconstpointer  );
void g_slist_free( GSList * );
void g_hash_table_destroy( GHashTable * );
int __fprintf_chk( void *, int , char *, ... );
void g_hash_table_insert( GHashTable *, gpointer , gpointer  );
gpointer g_malloc( gsize  );
gboolean g_hash_table_remove( GHashTable *, gconstpointer  );
void g_ptr_array_add( GPtrArray *, gpointer  );
void *strtol( char *, char **, int  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
GSList *g_slist_append( GSList *, gpointer  );
double sqrt( double  );
gpointer *g_ptr_array_free( GPtrArray *, gboolean  );
guint g_hash_table_size( GHashTable * );
GHashTable *g_hash_table_new( void *, void * );
void g_hash_table_foreach( GHashTable *, void *, gpointer  );
GSList *g_slist_prepend( GSList *, gpointer  );
double cos( double  );
void g_return_if_fail_warning( char *, char *, char * );
GSList *g_slist_find( GSList *, gconstpointer  );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
guint g_slist_length( GSList * );
void __stack_chk_fail( void );
int fputc( int , void * );
gpointer g_hash_table_lookup( GHashTable *, gconstpointer  );
void g_assertion_message( char *, char *, int , char *, char * );
GPtrArray *g_ptr_array_new( void );
guint g_hash_table_foreach_remove( GHashTable *, void *, gpointer  );
int strcmp( char *, char * );
void g_log( gchar *, void *, gchar *, ... );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern gboolean gts_allow_floating_vertices;
extern gboolean gts_allow_floating_edges;
extern gboolean gts_allow_floating_faces;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
