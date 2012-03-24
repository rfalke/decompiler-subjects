#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef union {
     double constant;
     long variable;
     int operatr;
  } storage_type;
typedef struct {
     enum kind_list { CONSTANT = 0, VARIABLE = 1, OPERATOR = 2, } kind;
     int level;
     storage_type token;
  } token_type;
typedef struct complexs complexs;
struct complexs {
     double re;
     double im;
  } ;
typedef struct _IO_FILE FILE;
struct _IO_marker {
     struct _IO_marker *_next;
     struct _IO_FILE *_sbuf;
     int _pos;
  } ;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int min_level( token_type *, int  );
char *skip_space( char * );
char *get_string( char *, int  );
void error_huge( void );
void warning( char * );
void error( char * );
void check_err( void );
void error_bug( char * );
int var_is_const( long , double * );
int my_strlcpy( char *, char *, int  );
int calc( int *, double *, int , double  );
void elim_loop( token_type *, int * );
int get_constant( token_type *, int , double * );
int parse_complex( token_type *, int , complexs * );
int complex_root_simp( token_type *, int * );
void approximate_complex_roots( token_type *, int * );
void rect_to_polar( double , double , double *, double * );
int roots_cmd( char * );
int complex_fixup( complexs * );
complexs complex_mult( complexs , complexs  );
complexs complex_pow( complexs , complexs  );
double fmod( double , double  );
int *__errno_location( void );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
double strtod( char *, char ** );
void pow( void *, void *, void *, void * );
short **__ctype_b_loc( void );
double cos( double  );
void __stack_chk_fail( void );
double atan2( double , double  );
void *memmove( void *, void *, unsigned int  );
double sin( double  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int n_tokens;
extern char prompt_str[80];
extern FILE *gfp;
extern int approximate_roots;
extern int domain_check;
extern int repeat_flag;
extern int precision;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
