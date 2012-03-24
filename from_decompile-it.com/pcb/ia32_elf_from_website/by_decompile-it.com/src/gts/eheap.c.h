#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct _GtsEHeap GtsEHeap;
typedef struct _GPtrArray GPtrArray;
typedef void *gpointer;
typedef unsigned int guint;
struct _GPtrArray {
     gpointer *pdata;
     guint len;
  } ;
typedef double gdouble;
typedef gdouble (*GtsKeyFunc)( gpointer , gpointer  );
typedef int gint;
typedef gint gboolean;
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
typedef unsigned int gsize;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void sift_down( GtsEHeap *, guint  );
void gts_eheap_randomized( GtsEHeap *, gboolean  );
gdouble gts_eheap_key( GtsEHeap *, gpointer  );
guint gts_eheap_size( GtsEHeap * );
void gts_eheap_freeze( GtsEHeap * );
void gts_eheap_foreach( GtsEHeap *, GFunc , gpointer  );
void gts_eheap_thaw( GtsEHeap * );
void gts_eheap_update( GtsEHeap * );
gpointer gts_eheap_top( GtsEHeap *, gdouble * );
void sift_up( GtsEHeap *, guint  );
void gts_eheap_destroy( GtsEHeap * );
gpointer gts_eheap_remove_top( GtsEHeap *, gdouble * );
gpointer gts_eheap_remove( GtsEHeap *, GtsEHeapPair * );
GtsEHeapPair *gts_eheap_insert_with_key( GtsEHeap *, gpointer , gdouble  );
GtsEHeapPair *gts_eheap_insert( GtsEHeap *, gpointer  );
GtsEHeap *gts_eheap_new( GtsKeyFunc , gpointer  );
void g_free( gpointer  );
gpointer g_ptr_array_remove_index( GPtrArray *, guint  );
gpointer g_malloc( gsize  );
void g_ptr_array_add( GPtrArray *, gpointer  );
gpointer *g_ptr_array_free( GPtrArray *, gboolean  );
void g_return_if_fail_warning( char *, char *, char * );
int rand( void );
GPtrArray *g_ptr_array_new( void );
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
