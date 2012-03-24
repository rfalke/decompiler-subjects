#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef __off64_t off_t;
typedef char BOOLEAN;
typedef struct sockaddr_storage SockA;
typedef unsigned short sa_family_t;
struct sockaddr_storage {
     sa_family_t ss_family;
     unsigned long __ss_align;
     char __ss_padding[120];
  } ;
struct hostent {
     char *h_name;
     char **h_aliases;
     int h_addrtype;
     int h_length;
     char **h_addr_list;
  } ;
typedef unsigned int size_t;
typedef long __time_t;
typedef long __suseconds_t;
struct timeval {
     __time_t tv_sec;
     __suseconds_t tv_usec;
  } ;
typedef void (*__sighandler_t)( int  );
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
struct _IO_FILE {
     int _flags;
     char *_IO_read_ptr;
     char *_IO_read_end;
     char *_IO_read_base;
     char *_IO_write_base;
     char *_IO_write_ptr;
     char *_IO_write_end;
     char *_IO_buf_base;
     char *_IO_buf_end;
     char *_IO_save_base;
     char *_IO_backup_base;
     char *_IO_save_end;
     struct _IO_marker *_markers;
     struct _IO_FILE *_chain;
     int _fileno;
     int _flags2;
     __off_t _old_offset;
     unsigned short _cur_column;
     char _vtable_offset;
     char _shortbuf[1];
     _IO_lock_t *_lock;
     __off64_t _offset;
     void *__pad1;
     void *__pad2;
     void *__pad3;
     void *__pad4;
     size_t __pad5;
     int _mode;
     char _unused2[40];
  } ;
typedef int __pid_t;
typedef long __fd_mask;
typedef struct {
     __fd_mask fds_bits[32];
  } fd_set;
typedef struct {
     struct hostent  h;
     char rest[128];
  } AlignedHOSTENT;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void HTAlert( char * );
void HTProgress( char * );
void HTReadProgress( off_t , off_t  );
FILE *TraceFP( void );
int LYConsoleInputFD( BOOLEAN  );
int HTCheckForInterrupt( void );
char *HTParse( char *, char *, int  );
int HTInetStatus( char * );
char *HTInetString( SockA * );
BOOLEAN valid_hostname( char * );
void quench( int  );
void dump_hostent( char *, struct hostent * );
size_t fill_rehostent( char *, size_t , struct hostent * );
unsigned int readit( int , char *, unsigned int  );
struct hostent  *LYGetHostByName( char * );
struct addrinfo {
     int ai_flags;
     int ai_family;
     int ai_socktype;
     int ai_protocol;
     socklen_t ai_addrlen;
     struct sockaddr *ai_addr;
     char *ai_canonname;
     struct addrinfo *ai_next;
  } *HTGetAddrInfo( char *, int  );
void get_host_details( void );
char *HTHostName( void );
BOOLEAN HTWasInterrupted( int * );
void set_timeout( struct timeval * );
int HTDoConnect( char *, char *, int , int * );
int HTDoRead( int , void *, unsigned int  );
char *HTSACopy( char **, char * );
char *HTSprintf0( char **, char *, ... );
int *__errno_location( void );
int sigemptyset( void * );
int sprintf( char *, char *, ... );
int connect( int , void *, unsigned int  );
char *strerror( int  );
void freeaddrinfo( void * );
__sighandler_t signal( int , __sighandler_t  );
char *strchr( char *, char  );
int write( int , void *, unsigned int  );
void *memset( void *, int , unsigned int  );
void _exit( int  );
char *strrchr( char *, char  );
int read( int , void *, unsigned int  );
char *gettext( char * );
void free( void * );
int fflush( FILE * );
int ioctl( int , void *, ... );
int socket( int , int , int  );
short **__ctype_b_loc( void );
int isatty( int  );
int getaddrinfo( char *, char *, void *, void * );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
char *gai_strerror( int  );
__pid_t waitpid( __pid_t , int *, int  );
char *strcpy( char *, char * );
int select( int , fd_set *, fd_set *, fd_set *, void * );
int close( int  );
int fprintf( FILE *, char *, ... );
time_t time( void * );
int sigprocmask( int , void *, void * );
void __stack_chk_fail( void );
int gethostname( char *, unsigned int  );
int sigaddset( void *, int  );
int getnameinfo( void *, unsigned int , char *, unsigned int , char *, unsigned int , unsigned int  );
__pid_t fork( void );
int pipe( int [2] );
int kill( __pid_t , int  );
void *gethostbyname( char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern BOOLEAN no_suspend;
extern BOOLEAN mustshow;
extern int connect_timeout;
extern int reading_timeout;
extern int lynx_nsl_status;
extern BOOLEAN WWW_TraceFlag;
extern int WWW_TraceMask;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
