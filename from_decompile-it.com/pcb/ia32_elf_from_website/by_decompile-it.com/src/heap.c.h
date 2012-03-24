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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void heap_free( heap_t *, void (*)( void * ) );
void __downheap( heap_t *, int  );
void *heap_remove_smallest( heap_t * );
void *heap_replace( heap_t *, cost_t , void * );
void heap_insert( heap_t *, cost_t , void * );
void heap_destroy( heap_t ** );
heap_t *heap_create( void );
void *realloc( void *, unsigned int  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
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
