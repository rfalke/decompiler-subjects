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
typedef gdouble GtsVector4[4];
typedef GtsVector4 GtsMatrix;
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
enum  { GTS_OUT = -1, GTS_ON = 0, GTS_IN = 1, };
typedef enum  { GTS_OUT = -1, GTS_ON = 0, GTS_IN = 1, } GtsIntersect;
typedef struct _GtsTriangle GtsTriangle;
typedef struct _GtsEdge GtsEdge;
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
typedef struct _GNode GNode;
struct _GNode {
     gpointer data;
     GNode *next;
     GNode *prev;
     GNode *parent;
     GNode *children;
  } ;
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
void point_class_init( GtsObjectClass * );
gint sortp( gpointer *, guint  );
void gts_point_transform( GtsPoint *, GtsMatrix * );
gdouble gts_point_distance2( GtsPoint *, GtsPoint * );
gdouble gts_point_segment_distance2( GtsPoint *, GtsSegment * );
void gts_point_set( GtsPoint *, gdouble , gdouble , gdouble  );
void gts_point_segment_closest( GtsPoint *, GtsSegment *, GtsPoint * );
gint gts_point_orientation_sos( GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_orientation( GtsPoint *, GtsPoint *, GtsPoint * );
gint gts_point_orientation_3d_sos( GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_orientation_3d( GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint * );
GtsIntersect gts_point_is_in_triangle( GtsPoint *, GtsTriangle * );
GtsPoint *gts_segment_triangle_intersection( GtsSegment *, GtsTriangle *, gboolean , GtsPointClass * );
gdouble gts_point_triangle_distance2( GtsPoint *, GtsTriangle * );
gdouble gts_point_triangle_distance( GtsPoint *, GtsTriangle * );
gdouble gts_point_segment_distance( GtsPoint *, GtsSegment * );
gdouble gts_point_distance( GtsPoint *, GtsPoint * );
gdouble gts_point_in_sphere( GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_in_circle( GtsPoint *, GtsPoint *, GtsPoint *, GtsPoint * );
gdouble gts_point_in_triangle_circle( GtsPoint *, GtsTriangle * );
GtsPointClass *gts_point_class( void );
gboolean gts_point_is_inside_surface( GtsPoint *, GNode *, gboolean  );
void gts_point_triangle_closest( GtsPoint *, GtsTriangle *, GtsPoint * );
void point_write( GtsObject *, FILE * );
void point_read( GtsObject **, GtsFile * );
void gts_triangle_vertices( GtsTriangle *, GtsVertex **, GtsVertex **, GtsVertex ** );
void gts_triangle_vertices_edges( GtsTriangle *, GtsEdge *, GtsVertex **, GtsVertex **, GtsVertex **, GtsEdge **, GtsEdge **, GtsEdge ** );
GSList *gts_bb_tree_stabbed( GNode *, GtsPoint * );
guint gts_file_read( GtsFile *, gpointer , guint , guint  );
void gts_file_error( GtsFile *, gchar *, ... );
void gts_file_next_token( GtsFile * );
double orient2d( double *, double *, double * );
double orient3d( double *, double *, double *, double * );
double incircle( double *, double *, double *, double * );
double insphere( double *, double *, double *, double *, double * );
void g_slist_free( GSList * );
int __fprintf_chk( void *, int , char *, ... );
double strtod( char *, char ** );
double sqrt( double  );
void g_return_if_fail_warning( char *, char *, char * );
unsigned int fwrite( void *, unsigned int , unsigned int , void * );
void __stack_chk_fail( void );
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
