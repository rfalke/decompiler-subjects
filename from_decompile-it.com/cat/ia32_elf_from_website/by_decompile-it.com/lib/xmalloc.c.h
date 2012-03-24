#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void *xnmalloc( size_t , size_t  );
void *xnrealloc( void *, size_t , size_t  );
void *x2nrealloc( void *, size_t *, size_t  );
char *xcharalloc( size_t  );
void *xmalloc( size_t  );
void *xrealloc( void *, size_t  );
void *x2realloc( void *, size_t * );
void *xzalloc( size_t  );
void *xcalloc( size_t , size_t  );
void *xmemdup( void *, size_t  );
char *xstrdup( char * );
void xalloc_die( void );
void *realloc( void *, unsigned int  );
void *calloc( unsigned int , unsigned int  );
void *memset( void *, int , unsigned int  );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
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
