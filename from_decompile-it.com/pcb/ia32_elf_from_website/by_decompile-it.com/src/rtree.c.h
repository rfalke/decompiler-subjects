#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct BoxType BoxType;
typedef int LocationType;
struct BoxType {
     LocationType X1;
     LocationType Y1;
     LocationType X2;
     LocationType Y2;
  } ;
struct {
     unsigned int bits_at_0;
  } ;
typedef struct {
     BoxType *bptr;
     BoxType bounds;
  } Rentry;
union {
     struct rtree_node {
       BoxType box;
       struct rtree_node *parent;
       struct {
         unsigned int bits_at_0;
      } flags;
       union {
         struct rtree_node  *kids[7];
         Rentry rects[7];
      } u;
    } *kids[7];
     Rentry rects[7];
  } ;
struct rtree_node  ;
typedef struct {
     int (*check_it)( BoxType *, void * );
     int (*found_it)( BoxType *, void * );
     void *closure;
  } r_arg;
typedef struct rtree rtree_t;
struct rtree {
     struct rtree_node *root;
     int size;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void adjust_bounds( struct rtree_node * );
int __r_search( struct rtree_node *, BoxType *, r_arg * );
int r_search( rtree_t *, BoxType *, int (*)( BoxType *, void * ), int (*)( BoxType *, void * ), void * );
int r_region_is_empty( rtree_t *, BoxType * );
int __r_sub( struct rtree_node *, BoxType *, BoxType *, jmp_buf * );
void r_substitute( rtree_t *, BoxType *, BoxType * );
int __r_region_is_empty_rect_in_reg( BoxType *, void * );
Boolean __r_delete( struct rtree_node *, BoxType * );
Boolean r_delete_entry( rtree_t *, BoxType * );
void __r_destroy_tree( struct rtree_node * );
void r_destroy_tree( rtree_t ** );
struct rtree_node  *find_clusters( struct rtree_node * );
void __r_insert_node( struct rtree_node *, BoxType *, int , Boolean  );
void r_insert_entry( rtree_t *, BoxType *, int  );
rtree_t *r_create_tree( BoxType **, int , int  );
void __longjmp_chk( void *[1], int  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
int _setjmp( void *[1] );
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
