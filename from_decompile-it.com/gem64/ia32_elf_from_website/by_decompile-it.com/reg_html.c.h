#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct __dirstream DIR;
struct __dirstream  ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void exit_db( void );
void print_error( int , char *, ... );
void print_warning( char *, ... );
int insert_str( char *, int , char ** );
int delete_str( int , char ** );
int find_pos( char *, char **, int  );
void new_ext_html( char *, char *, char **, int , int , int  );
void delete_ext_html( char *, char *, char ** );
void register_html( char *, char *, int , int , int  );
void deregister_html( char *, char * );
int restore_html( char * );
int *__errno_location( void );
int sprintf( char *, char *, ... );
char *strerror( int  );
void rewind( void * );
int __isoc99_sscanf( char *, char *, ... );
char *strchr( char *, char  );
void *calloc( unsigned int , unsigned int  );
char *strncpy( char *, char *, unsigned int  );
char *fgets( char *, int , void * );
char *strrchr( char *, char  );
void *readdir( DIR * );
void free( void * );
int fflush( void * );
int mkstemp( char * );
DIR *opendir( char * );
int fclose( void * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
void *fopen( char *, char * );
char *strcpy( char *, char * );
int closedir( DIR * );
int fprintf( void *, char *, ... );
char *strstr( char *, char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int strcmp( char *, char * );
int atexit( void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int VERBOSE;
extern char TMP_NULL[2048];
extern char TMP_HTML[2048];
extern int FORCE;
extern int UPGRADE;
extern char HTML_CMD[2048];
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
