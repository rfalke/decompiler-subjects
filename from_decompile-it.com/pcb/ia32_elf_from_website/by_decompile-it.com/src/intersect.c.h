#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef int LocationType;
typedef struct {
     LocationType left;
     LocationType right;
     int covered;
     int area;
  } SegmentTreeNode;
typedef struct {
     SegmentTreeNode *nodes;
     int size;
  } SegmentTree;
typedef unsigned int Cardinal;
typedef struct BoxType *BoxTypePtr;
struct BoxType {
     LocationType X1;
     LocationType Y1;
     LocationType X2;
     LocationType Y2;
  } ;
struct {
     Cardinal BoxN;
     Cardinal BoxMax;
     BoxTypePtr Box;
  } ;
typedef struct {
     Cardinal BoxN;
     Cardinal BoxMax;
     BoxTypePtr Box;
  } *BoxListTypePtr;
struct {
     Cardinal BoxN;
     Cardinal BoxMax;
     BoxTypePtr Box;
  } ;
typedef unsigned int size_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void insertSegment( SegmentTree *, int , LocationType , LocationType  );
void deleteSegment( SegmentTree *, int , LocationType , LocationType  );
int compareleft( void *, void * );
int compareright( void *, void * );
int comparepos( void *, void * );
double ComputeUnionArea( BoxListTypePtr  );
double ComputeIntersectionArea( BoxListTypePtr  );
void *MyCalloc( size_t , size_t , char * );
void qsort( void *, unsigned int , unsigned int , void * );
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
