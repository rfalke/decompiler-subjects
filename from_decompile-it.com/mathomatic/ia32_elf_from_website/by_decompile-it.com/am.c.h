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
typedef struct _IO_FILE FILE;
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
typedef char sign_array_type[64];
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
void exit_program( int  );
void init_gvars( void );
int found_var( token_type *, int , long  );
int solved_equation( int  );
int var_in_equation( int , long  );
int min_level( token_type *, int  );
int level_plus_count( token_type *, int , int  );
int level1_plus_count( token_type *, int  );
int var_count( token_type *, int  );
int no_vars( token_type *, int , long * );
int exp_contains_nan( token_type *, int  );
int exp_contains_infinity( token_type *, int  );
int isdelimiter( int  );
int strcmp_tospace( char *, char * );
int is_all( char * );
char *skip_space( char * );
char *skip_param( char * );
long decstrtol( char *, char ** );
void free_result_str( void );
int return_result( int  );
char *get_string( char *, int  );
int get_yes_no( void );
int get_expr( token_type *, int * );
void copy_espace( int , int  );
void error_huge( void );
void subst_var_with_exp( token_type *, int *, token_type *, int , long  );
int alloc_espace( int  );
void clean_up( void );
void get_screen_size( void );
void warning( char * );
int check_divide_by_zero( double  );
int alloc_next_espace( void );
void error( char * );
int extra_characters( char * );
int prompt_var( long * );
int current_not_defined( void );
int not_defined( int  );
int get_default_en( char * );
int get_range( char **, int *, int * );
int get_range_eol( char **, int *, int * );
int next_espace( void );
void check_err( void );
void error_bug( char * );
void clear_all( void );
int init_mem( void );
char *parse_var2( long *, char * );
int my_strlcpy( char *, char *, int  );
void set_error_level( char * );
void str_tolower( char * );
char *parse_expr( token_type *, int *, char * );
void set_color( int  );
void default_color( void );
int list_sub( int  );
int *__errno_location( void );
void __longjmp_chk( void *[1], int  );
int __fprintf_chk( void *, int , char *, ... );
int __printf_chk( int , char *, ... );
char *fgets( char *, int , void * );
void *strtol( char *, char **, int  );
void free( void * );
int ioctl( int , void *, ... );
short **__ctype_b_loc( void );
int fclose( void * );
int __finite( double  );
char *readline( char * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int __isnan( double  );
int strncasecmp( char *, char *, unsigned int  );
void *memmove( void *, void *, unsigned int  );
void add_history( char * );
int strcmp( char *, char * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdin;
extern struct _IO_FILE  *stdout;
extern struct _IO_FILE  *stderr;
extern int n_tokens;
extern int cur_equation;
extern token_type *tlhs;
extern int screen_columns;
extern int screen_rows;
extern int readline_enabled;
extern char prompt_str[80];
extern FILE *default_out;
extern FILE *gfp;
extern jmp_buf jmp_save;
extern int quiet_mode;
extern int abort_flag;
extern int n_equations;
extern token_type *lhs[100];
extern token_type *rhs[100];
extern int n_lhs[100];
extern int n_rhs[100];
extern token_type *trhs;
extern token_type *tes;
extern token_type *scratch;
extern token_type zero_token;
extern token_type one_token;
extern int approximate_roots;
extern int debug_level;
extern int domain_check;
extern int partial_flag;
extern int symb_flag;
extern int high_prec;
extern int input_column;
extern int sign_cmp_flag;
extern char *var_names[8000];
extern char *last_history_string;
extern sign_array_type sign_array;
extern int echo_input;
extern int repeat_flag;
extern char *result_str;
extern int result_en;
extern char *error_str;
extern char *warning_str;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
