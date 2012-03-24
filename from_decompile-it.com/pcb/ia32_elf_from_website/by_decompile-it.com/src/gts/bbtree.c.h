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
typedef struct _GtsFace GtsFace;
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
struct _GtsFace {
     GtsTriangle triangle;
     GSList *surfaces;
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
typedef struct _GNode GNode;
struct _GNode {
     gpointer data;
     GNode *next;
     GNode *prev;
     GNode *parent;
     GNode *children;
  } ;
typedef void (*GtsBBTreeTraverseFunc)( GtsBBox *, GtsBBox *, gpointer  );
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
typedef struct _GtsBBoxClass GtsBBoxClass;
struct _GtsBBoxClass {
     GtsObjectClass parent_class;
  } ;
typedef GtsPoint *(*GtsBBoxClosestFunc)( GtsPoint *, gpointer  );
typedef gint (*GtsFunc)( gpointer , gpointer  );
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void gts_object_destroy( GtsObject * );
GtsObject *gts_object_new( GtsObjectClass * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
GtsObjectClass *gts_object_class( void );
gdouble gts_point_distance2( GtsPoint *, GtsPoint * );
gdouble gts_point_distance( GtsPoint *, GtsPoint * );
GtsPointClass *gts_point_class( void );
GtsFace *gts_edge_is_boundary( GtsEdge *, GtsSurface * );
void gts_triangle_vertices( GtsTriangle *, GtsVertex **, GtsVertex **, GtsVertex ** );
gdouble gts_triangle_area( GtsTriangle * );
void bbox_init( GtsBBox * );
void bbox_foreach_vertex( GtsPoint *, GtsBBox * );
gboolean gts_bboxes_are_overlapping( GtsBBox *, GtsBBox * );
void gts_bb_tree_traverse_overlapping( GNode *, GNode *, GtsBBTreeTraverseFunc , gpointer  );
gboolean gts_bb_tree_is_overlapping( GNode *, GtsBBox * );
gboolean gts_bbox_is_stabbed( GtsBBox *, GtsPoint * );
void gts_bbox_point_distance2( GtsBBox *, GtsPoint *, gdouble *, gdouble * );
gdouble gts_bbox_diagonal2( GtsBBox * );
void gts_bbox_set( GtsBBox *, gpointer , gdouble , gdouble , gdouble , gdouble , gdouble , gdouble  );
void gts_bb_tree_surface_boundary_distance( GNode *, GtsSurface *, gdouble (*)( GtsPoint *, gpointer  ), gdouble , GtsRange * );
void gts_bb_tree_surface_distance( GNode *, GtsSurface *, GtsBBoxDistFunc , gdouble , GtsRange * );
GtsBBox *gts_bbox_new( GtsBBoxClass *, gpointer , gdouble , gdouble , gdouble , gdouble , gdouble , gdouble  );
GtsBBox *gts_bbox_points( GtsBBoxClass *, GSList * );
GtsBBox *gts_bbox_bboxes( GtsBBoxClass *, GSList * );
GtsBBox *gts_bbox_segment( GtsBBoxClass *, GtsSegment * );
GtsBBox *gts_bbox_triangle( GtsBBoxClass *, GtsTriangle * );
void bb_tree_free( GNode *, gboolean  );
gdouble bb_tree_min_max( GNode *, GtsPoint *, gdouble , GSList ** );
GSList *gts_bb_tree_point_closest_bboxes( GNode *, GtsPoint * );
GtsPoint *gts_bb_tree_point_closest( GNode *, GtsPoint *, GtsBBoxClosestFunc , gdouble * );
gdouble gts_bb_tree_point_distance( GNode *, GtsPoint *, GtsBBoxDistFunc , GtsBBox ** );
void gts_bb_tree_segment_distance( GNode *, GtsSegment *, gdouble (*)( GtsPoint *, gpointer  ), gdouble , GtsRange * );
void surface_distance_foreach_boundary( GtsEdge *, gpointer * );
void gts_bb_tree_triangle_distance( GNode *, GtsTriangle *, GtsBBoxDistFunc , gdouble , GtsRange * );
void surface_distance_foreach_triangle( GtsTriangle *, gpointer * );
void gts_bb_tree_destroy( GNode *, gboolean  );
GSList *gts_bb_tree_overlap( GNode *, GtsBBox * );
GSList *gts_bb_tree_stabbed( GNode *, GtsPoint * );
gboolean gts_bbox_overlaps_segment( GtsBBox *, GtsSegment * );
gboolean gts_bbox_overlaps_triangle( GtsBBox *, GtsTriangle * );
void gts_bbox_draw( GtsBBox *, FILE * );
void gts_bb_tree_draw( GNode *, guint , FILE * );
GtsBBox *gts_bbox_surface( GtsBBoxClass *, GtsSurface * );
GtsBBoxClass *gts_bbox_class( void );
void prepend_triangle_bbox( GtsTriangle *, GSList ** );
GNode *gts_bb_tree_new( GSList * );
GNode *gts_bb_tree_surface( GtsSurface * );
void gts_range_add_value( GtsRange *, gdouble  );
void gts_range_init( GtsRange * );
void gts_range_update( GtsRange * );
void gts_surface_foreach_face( GtsSurface *, GtsFunc , gpointer  );
void gts_surface_foreach_edge( GtsSurface *, GtsFunc , gpointer  );
void gts_surface_foreach_vertex( GtsSurface *, GtsFunc , gpointer  );
int triBoxOverlap( double *, double *, double (*)[3] );
void g_slist_free( GSList * );
int __fprintf_chk( void *, int , char *, ... );
GNode *g_node_prepend( GNode *, GNode * );
double sqrt( double  );
guint g_node_depth( GNode * );
GSList *g_slist_prepend( GSList *, gpointer  );
void g_return_if_fail_warning( char *, char *, char * );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
void __stack_chk_fail( void );
void g_slist_free_1( GSList * );
GSList *g_slist_concat( GSList *, GSList * );
GNode *g_node_new( gpointer  );
void g_node_destroy( GNode * );
GSList *g_slist_nth( GSList *, guint  );
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
