#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
typedef struct {
     unsigned long f;
     unsigned char t[8];
  } FlagType;
typedef struct {
     int mask;
     char *name;
     int nlen;
     int object_types;
  } FlagBitsType;
struct {
     char *ptr;
     int len;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void *mymemset( void *, int , size_t  );
int mem_any_set( unsigned char *, int  );
int error_ignore( char * );
char *alloc_buf( int  );
void grow_layer_list( int  );
char *common_flags_to_string( FlagType , int , FlagBitsType *, int  );
char *pcbflags_to_string( FlagType  );
char *flags_to_string( FlagType , int  );
FlagType common_string_to_flags( char *, int (*)( char * ), FlagBitsType *, int  );
FlagType string_to_pcbflags( char *, int (*)( char * ) );
FlagType string_to_flags( char *, int (*)( char * ) );
void *realloc( void *, unsigned int  );
void *calloc( unsigned int , unsigned int  );
short **__ctype_b_loc( void );
unsigned int strlen( char * );
char *strcpy( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int __sprintf_chk( char *, int , unsigned int , char *, ... );
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
