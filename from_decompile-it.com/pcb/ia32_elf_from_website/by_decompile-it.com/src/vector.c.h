#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef void *vector_element_t;
typedef struct vector_struct vector_t;
struct vector_struct {
     vector_element_t *element;
     int size;
     int max;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
vector_element_t vector_remove( vector_t *, int  );
vector_element_t vector_remove_last( vector_t * );
void vector_insert_many( vector_t *, int , vector_element_t *, int  );
void vector_insert( vector_t *, int , vector_element_t  );
void vector_append_many( vector_t *, vector_element_t *, int  );
void vector_append_vector( vector_t *, vector_t * );
void vector_append( vector_t *, vector_element_t  );
void vector_destroy( vector_t ** );
vector_t *vector_create( void );
vector_t *vector_duplicate( vector_t * );
void *realloc( void *, unsigned int  );
void *calloc( unsigned int , unsigned int  );
void free( void * );
void *memcpy( void *, void *, unsigned int  );
void *malloc( unsigned int  );
void *memmove( void *, void *, unsigned int  );
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
