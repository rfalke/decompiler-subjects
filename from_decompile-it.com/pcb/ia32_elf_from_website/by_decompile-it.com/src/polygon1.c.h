#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct heap_struct heap_t;
typedef double cost_t;
struct heap_element {
     cost_t cost;
     void *data;
  } ;
struct heap_struct {
     struct heap_element *element;
     int size;
     int max;
  } ;
typedef struct BoxType BoxType;
typedef int LocationType;
struct BoxType {
     LocationType X1;
     LocationType Y1;
     LocationType X2;
     LocationType Y2;
  } ;
typedef struct VNODE VNODE;
struct {
     unsigned int bits_at_0;
  } ;
typedef struct CVCList CVCList;
struct CVCList {
     double angle;
     VNODE *parent;
     CVCList *prev;
     CVCList *next;
     CVCList *head;
     char poly;
     char side;
     char __pad[2];
  } ;
typedef int vertex[2];
typedef vertex Vector;
struct VNODE {
     VNODE *next;
     VNODE *prev;
     VNODE *shared;
     struct {
       unsigned int bits_at_0;
    } Flags;
     CVCList *cvc_prev;
     CVCList *cvc_next;
     Vector point;
  } ;
enum  { FORW = 0, BACKW = 1, };
typedef enum  { FORW = 0, BACKW = 1, } DIRECTION;
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
typedef int (*J_Rule)( char , VNODE *, DIRECTION * );
typedef int BOOLp;
typedef struct PLINE PLINE;
typedef struct rtree rtree_t;
struct rtree {
     struct rtree_node *root;
     int size;
  } ;
struct {
     unsigned int bits_at_0;
  } ;
struct PLINE {
     int xmin;
     int ymin;
     int xmax;
     int ymax;
     PLINE *next;
     VNODE head;
     unsigned int Count;
     double area;
     rtree_t *tree;
     struct {
       unsigned int bits_at_0;
    } Flags;
  } ;
typedef struct POLYAREA POLYAREA;
struct POLYAREA {
     POLYAREA *f;
     POLYAREA *b;
     PLINE *contours;
  } ;
typedef int __jmp_buf[6];
typedef struct {
     unsigned long __val[32];
  } __sigset_t;
struct __jmp_buf_tag {
     __jmp_buf __jmpbuf;
     int __mask_was_saved;
     __sigset_t __saved_mask;
  } ;
typedef struct __jmp_buf_tag  jmp_buf[1];
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
enum  { FORW = 0, BACKW = 1, };
typedef int (*S_Rule)( VNODE *, DIRECTION * );
enum  { FORW = 0, BACKW = 1, };
struct seg {
     BoxType box;
     VNODE *v;
     PLINE *p;
  } ;
typedef char Boolean;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int heap_is_empty( heap_t * );
void *heap_remove_smallest( heap_t * );
void heap_insert( heap_t *, cost_t , void * );
void heap_destroy( heap_t ** );
heap_t *heap_create( void );
int seg_in_region( BoxType *, void * );
int UniteS_Rule( VNODE *, DIRECTION * );
int IsectS_Rule( VNODE *, DIRECTION * );
int SubS_Rule( VNODE *, DIRECTION * );
int XorS_Rule( VNODE *, DIRECTION * );
int IsectJ_Rule( char , VNODE *, DIRECTION * );
int UniteJ_Rule( char , VNODE *, DIRECTION * );
int XorJ_Rule( char , VNODE *, DIRECTION * );
int SubJ_Rule( char , VNODE *, DIRECTION * );
int jump( VNODE **, DIRECTION *, J_Rule  );
int flip_cb( BoxType *, void * );
BOOLp inside_sector( VNODE *, int * );
int vect_inters2( int *, int *, int *, int *, int *, int * );
BOOLp poly_ChkContour( PLINE * );
void poly_InclVertex( VNODE *, VNODE * );
void poly_ExclVertex( VNODE * );
void poly_ClrContour( PLINE * );
POLYAREA *poly_Create( void );
CVCList *insert_descriptor( VNODE *, char , char , CVCList * );
CVCList *add_descriptors( PLINE *, char , CVCList * );
int poly_InsideContour( PLINE *, int * );
int poly_ContourInContour( PLINE *, PLINE * );
BOOLp poly_Valid( POLYAREA * );
BOOLp poly_CheckInside( POLYAREA *, int * );
BOOLp poly_M_CheckInside( POLYAREA *, int * );
void poly_InvContour( PLINE * );
int crossing( BoxType *, void * );
int get_seg( BoxType *, void * );
PLINE *poly_NewContour( int * );
VNODE *poly_CreateNode( int * );
VNODE *node_add( VNODE *, int *, int * );
void *make_edge_tree( PLINE * );
BOOLp poly_CopyContour( PLINE **, PLINE * );
BOOLp poly_Copy1( POLYAREA *, POLYAREA * );
BOOLp poly_M_Copy0( POLYAREA **, POLYAREA * );
BOOLp poly_Copy0( POLYAREA **, POLYAREA * );
void poly_PreContour( PLINE *, BOOLp  );
void poly_DelContour( PLINE ** );
void poly_FreeContours( PLINE ** );
void poly_Free( POLYAREA ** );
int intersect( jmp_buf *, POLYAREA *, POLYAREA *, int  );
void M_POLYAREA_intersect( jmp_buf *, POLYAREA *, POLYAREA *, int  );
void PutContour( jmp_buf *, PLINE *, POLYAREA **, PLINE **, PLINE * );
void Collect1( jmp_buf *, VNODE *, DIRECTION , POLYAREA **, PLINE **, J_Rule  );
void Collect( jmp_buf *, PLINE *, POLYAREA **, PLINE **, S_Rule , J_Rule  );
void M_POLYAREA_Collect( jmp_buf *, POLYAREA *, POLYAREA **, PLINE **, int , BOOLp  );
int adjust_tree( rtree_t *, struct seg * );
int seg_in_seg( BoxType *, void * );
int heap_it( BoxType *, void * );
BOOLp M_POLYAREA_label( POLYAREA *, POLYAREA *, BOOLp  );
BOOLp Touching( POLYAREA *, POLYAREA * );
void InsertHoles( jmp_buf *, POLYAREA *, PLINE ** );
int poly_AndSubtract_free( POLYAREA *, POLYAREA *, POLYAREA **, POLYAREA ** );
int poly_Boolean_free( POLYAREA *, POLYAREA *, POLYAREA **, int  );
int poly_Boolean( POLYAREA *, POLYAREA *, POLYAREA **, int  );
int r_search( rtree_t *, BoxType *, int (*)( BoxType *, void * ), int (*)( BoxType *, void * ), void * );
Boolean r_delete_entry( rtree_t *, BoxType * );
void r_destroy_tree( rtree_t ** );
void r_insert_entry( rtree_t *, BoxType *, int  );
rtree_t *r_create_tree( BoxType **, int , int  );
void __longjmp_chk( void *[1], int  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
int _setjmp( void *[1] );
void *malloc( unsigned int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern Vector vect_zero;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
