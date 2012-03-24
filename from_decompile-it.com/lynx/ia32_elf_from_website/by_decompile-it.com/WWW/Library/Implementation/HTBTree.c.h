#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef int (*HTComparer)( void *, void * );
typedef struct _HTBTree_element HTBTElement;
struct _HTBTree_element {
     void *object;
     struct _HTBTree_element *up;
     struct _HTBTree_element *left;
     int left_depth;
     struct _HTBTree_element *right;
     int right_depth;
  } ;
typedef struct _HTBTree_top HTBTree;
struct _HTBTree_top {
     HTComparer compare;
     struct _HTBTree_element *top;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void outofmem( char *, char * );
HTBTree *HTBTree_new( HTComparer  );
void HTBTElement_free( HTBTElement * );
void HTBTree_free( HTBTree * );
void HTBTElementAndObject_free( HTBTElement * );
void HTBTreeAndObject_free( HTBTree * );
void *HTBTree_search( HTBTree *, void * );
void HTBTree_add( HTBTree *, void * );
void free( void * );
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
