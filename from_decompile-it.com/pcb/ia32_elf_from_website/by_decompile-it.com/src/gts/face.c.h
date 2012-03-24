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
typedef gint gboolean;
typedef struct _GtsTriangle GtsTriangle;
typedef struct _GtsEdge GtsEdge;
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
typedef struct _GtsTriangleClass GtsTriangleClass;
struct _GtsTriangleClass {
     GtsObjectClass parent_class;
  } ;
typedef struct _GtsFaceClass GtsFaceClass;
struct _GtsFaceClass {
     GtsTriangleClass parent_class;
  } ;
typedef struct _GtsFace GtsFace;
struct _GtsFace {
     GtsTriangle triangle;
     GSList *surfaces;
  } ;
typedef struct _GtsSurface GtsSurface;
typedef struct _GHashTable GHashTable;
struct _GHashTable  ;
typedef struct _GtsEdgeClass GtsEdgeClass;
typedef struct _GtsSegmentClass GtsSegmentClass;
struct _GtsSegmentClass {
     GtsObjectClass parent_class;
  } ;
struct _GtsEdgeClass {
     GtsSegmentClass parent_class;
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
typedef gint (*GtsFunc)( gpointer , gpointer  );
typedef void *gconstpointer;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
GtsObject *gts_object_new( GtsObjectClass * );
gpointer gts_object_class_new( GtsObjectClass *, GtsObjectClassInfo * );
gboolean gts_triangles_are_compatible( GtsTriangle *, GtsTriangle *, GtsEdge * );
void gts_triangle_set( GtsTriangle *, GtsEdge *, GtsEdge *, GtsEdge * );
GtsTriangleClass *gts_triangle_class( void );
void face_class_init( GtsFaceClass * );
void face_init( GtsFace * );
gboolean gts_face_has_parent_surface( GtsFace *, GtsSurface * );
GtsFace *gts_face_new( GtsFaceClass *, GtsEdge *, GtsEdge *, GtsEdge * );
GtsFaceClass *gts_face_class( void );
guint gts_face_neighbor_number( GtsFace *, GtsSurface * );
void face_clone( GtsObject *, GtsObject * );
void face_destroy( GtsObject * );
gboolean triangle_is_incompatible( GtsTriangle *, GtsEdge *, GtsSurface * );
gboolean gts_face_is_compatible( GtsFace *, GtsSurface * );
GSList *gts_faces_from_edges( GSList *, GtsSurface * );
void gts_face_foreach_neighbor( GtsFace *, GtsSurface *, GtsFunc , gpointer  );
GSList *gts_face_neighbors( GtsFace *, GtsSurface * );
void gts_surface_remove_face( GtsSurface *, GtsFace * );
void g_hash_table_destroy( GHashTable * );
void g_hash_table_insert( GHashTable *, gpointer , gpointer  );
void g_assertion_message_expr( char *, char *, int , char *, char * );
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
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
