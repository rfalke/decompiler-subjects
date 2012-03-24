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
typedef struct mtspacebox mtspacebox_t;
typedef struct BoxType BoxType;
typedef int LocationType;
struct BoxType {
     LocationType X1;
     LocationType Y1;
     LocationType X2;
     LocationType Y2;
  } ;
typedef int BDimension;
struct mtspacebox {
     BoxType box;
     BDimension keepaway;
  } ;
typedef struct vector_struct vector_t;
struct vector_struct  ;
typedef union {
     vector_t *v;
     heap_t *h;
  } heap_or_vector;
typedef struct cheap_point CheapPointType;
struct cheap_point {
     LocationType X;
     LocationType Y;
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
typedef char Boolean;
struct query_closure {
     BoxType *cbox;
     heap_or_vector checking;
     heap_or_vector touching;
     CheapPointType *desired;
     BDimension radius;
     BDimension keepaway;
     jmp_buf env;
     Boolean touch_is_vec;
     char __pad[3];
  } ;
typedef struct rtree rtree_t;
struct rtree {
     struct rtree_node *root;
     int size;
  } ;
typedef struct mtspace mtspace_t;
struct mtspace {
     rtree_t *ftree;
     rtree_t *etree;
     rtree_t *otree;
  } ;
enum  { FIXED = 0, ODD = 1, EVEN = 2, };
typedef enum  { FIXED = 0, ODD = 1, EVEN = 2, } mtspace_type_t;
typedef struct vetting vetting_t;
struct vetting {
     heap_or_vector untested;
     heap_or_vector no_fix;
     heap_or_vector no_hi;
     heap_or_vector hi_candidate;
     BDimension radius;
     BDimension keepaway;
     CheapPointType desired;
  } ;
enum  { FIXED = 0, ODD = 1, EVEN = 2, };
typedef void *vector_element_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int heap_is_empty( heap_t * );
void heap_free( heap_t *, void (*)( void * ) );
void *heap_remove_smallest( heap_t * );
void heap_insert( heap_t *, cost_t , void * );
void heap_destroy( heap_t ** );
heap_t *heap_create( void );
mtspacebox_t *mtspace_create_box( BoxType *, BDimension  );
void append( struct query_closure *, BoxType * );
void qloop( struct query_closure *, rtree_t *, heap_or_vector , Boolean  );
void mtspace_remove( mtspace_t *, BoxType *, mtspace_type_t , BDimension  );
int query_one( BoxType *, void * );
void mtsFreeWork( vetting_t ** );
vetting_t *mtspace_query_rect( mtspace_t *, BoxType *, BDimension , BDimension , vetting_t *, vector_t *, vector_t *, vector_t *, Boolean , Boolean , CheapPointType * );
int mts_remove_one( BoxType *, void * );
void mtspace_add( mtspace_t *, BoxType *, mtspace_type_t , BDimension  );
void mtspace_destroy( mtspace_t ** );
mtspace_t *mtspace_create( void );
int r_search( rtree_t *, BoxType *, int (*)( BoxType *, void * ), int (*)( BoxType *, void * ), void * );
Boolean r_delete_entry( rtree_t *, BoxType * );
void r_destroy_tree( rtree_t ** );
void r_insert_entry( rtree_t *, BoxType *, int  );
rtree_t *r_create_tree( BoxType **, int , int  );
int vector_is_empty( vector_t * );
vector_element_t vector_remove_last( vector_t * );
void vector_append( vector_t *, vector_element_t  );
void vector_destroy( vector_t ** );
vector_t *vector_create( void );
void __longjmp_chk( void *[1], int  );
void free( void * );
int _setjmp( void *[1] );
void *malloc( unsigned int  );
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
