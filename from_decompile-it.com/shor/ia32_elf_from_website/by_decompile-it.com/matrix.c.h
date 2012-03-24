/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct quantum_reg_node_struct quantum_reg_node;
typedef struct quantum_reg_struct quantum_reg;
typedef struct quantum_density_op_struct quantum_density_op;
typedef struct quantum_matrix_struct quantum_matrix;
typedef long __off_t;
typedef void _IO_lock_t;
typedef long long __quad_t;
typedef __quad_t __off64_t;
typedef unsigned int size_t;
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct _IO_FILE FILE;
struct quantum_reg_node_struct {
     float _Complex amplitude;
     unsigned long long state;
  } ;
struct quantum_reg_struct {
     int width;
     int size;
     int hashw;
     quantum_reg_node *node;
     int *hash;
  } ;
struct quantum_density_op_struct {
     int num;
     float *prob;
     quantum_reg *reg;
  } ;
struct quantum_matrix_struct {
     int rows;
     int cols;
     float _Complex *t;
  } ;
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
     struct _IO_marker {
       struct _IO_marker  *_next;
       struct _IO_FILE  *_sbuf;
       int _pos;
    } *_markers;
     struct _IO_FILE  *_chain;
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
struct complex {
     double real;
     double imaginary;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int quantum_ipow( int a, int b );
int quantum_gcd( int u, int v );
void quantum_frac_approx( int *a, int *b, int width );
int quantum_getwidth( int n );
int quantum_inverse_mod( int n, int c );
float _Complex quantum_conj( float _Complex a );
static inline float quantum_real( float _Complex a );
static inline float quantum_imag( float _Complex a );
float quantum_prob( float _Complex a );
static inline float quantum_prob_inline( float _Complex a );
float _Complex quantum_cexp( float phi );
float quantum_get_decoherence( void );
void quantum_set_decoherence( float l );
void quantum_decohere( quantum_reg *reg );
quantum_density_op quantum_new_density_op( int num, float *prob, quantum_reg *reg );
quantum_density_op quantum_qureg2density_op( quantum_reg *reg );
void quantum_reduced_density_op( int pos, quantum_density_op *rho );
static inline float quantum_prob_inline( float _Complex a );
static inline float quantum_real( float _Complex a );
static inline float quantum_imag( float _Complex a );
quantum_matrix quantum_density_matrix( quantum_density_op *rho );
static inline void quantum_reconstruct_hash( quantum_reg *reg );
static inline void quantum_add_hash( unsigned long long a, int pos, quantum_reg *reg );
static inline unsigned int quantum_hash64( unsigned long long key, int width );
static inline int quantum_get_state( unsigned long long a, quantum_reg reg );
void quantum_print_density_matrix( quantum_density_op *rho );
void quantum_delete_density_op( quantum_density_op *rho );
float quantum_purity( quantum_density_op *rho );
void *quantum_error_handler( void *(*f)( int  ) );
char *quantum_strerr( int errno );
void quantum_error( int errno );
void quantum_exp_mod_n( int N, int x, int width_input, int width, quantum_reg *reg );
void quantum_cnot( int control, int target, quantum_reg *reg );
void quantum_toffoli( int control1, int control2, int target, quantum_reg *reg );
void quantum_unbounded_toffoli( int controlling, quantum_reg *reg, ... );
void quantum_sigma_x( int target, quantum_reg *reg );
void quantum_sigma_y( int target, quantum_reg *reg );
void quantum_sigma_z( int target, quantum_reg *reg );
void quantum_swaptheleads( int width, quantum_reg *reg );
void quantum_swaptheleads_omuln_controlled( int control, int width, quantum_reg *reg );
void quantum_gate1( int target, quantum_matrix m, quantum_reg *reg );
static inline void quantum_reconstruct_hash( quantum_reg *reg );
static inline void quantum_add_hash( unsigned long long a, int pos, quantum_reg *reg );
static inline unsigned int quantum_hash64( unsigned long long key, int width );
static inline int quantum_get_state( unsigned long long a, quantum_reg reg );
static inline float quantum_prob_inline( float _Complex a );
static inline float quantum_real( float _Complex a );
static inline float quantum_imag( float _Complex a );
void quantum_gate2( int target1, int target2, quantum_matrix m, quantum_reg *reg );
static inline int quantum_bitmask( unsigned long long a, int width, int *bits );
void quantum_hadamard( int target, quantum_reg *reg );
void quantum_walsh( int width, quantum_reg *reg );
void quantum_r_x( int target, float gamma, quantum_reg *reg );
void quantum_r_y( int target, float gamma, quantum_reg *reg );
void quantum_r_z( int target, float gamma, quantum_reg *reg );
void quantum_phase_scale( int target, float gamma, quantum_reg *reg );
void quantum_phase_kick( int target, float gamma, quantum_reg *reg );
void quantum_cond_phase( int control, int target, quantum_reg *reg );
void quantum_cond_phase_inv( int control, int target, quantum_reg *reg );
void quantum_cond_phase_kick( int control, int target, float gamma, quantum_reg *reg );
int quantum_gate_counter( int inc );
unsigned long quantum_memman( long change );
quantum_matrix quantum_new_matrix( int cols, int rows );
void quantum_delete_matrix( quantum_matrix *m );
void quantum_print_matrix( quantum_matrix m );
static inline float quantum_imag( float _Complex a );
static inline float quantum_real( float _Complex a );
quantum_matrix quantum_mmult( quantum_matrix A, quantum_matrix B );
double quantum_frand( void );
unsigned long long quantum_measure( quantum_reg reg );
static inline float quantum_prob_inline( float _Complex a );
static inline float quantum_real( float _Complex a );
static inline float quantum_imag( float _Complex a );
int quantum_bmeasure( int pos, quantum_reg *reg );
int quantum_bmeasure_bitpreserve( int pos, quantum_reg *reg );
void test_sum( int compare, int width, quantum_reg *reg );
void muxfa( int a, int b_in, int c_in, int c_out, int xlt_l, int L, int total, quantum_reg *reg );
void muxfa_inv( int a, int b_in, int c_in, int c_out, int xlt_l, int L, int total, quantum_reg *reg );
void muxha( int a, int b_in, int c_in, int xlt_l, int L, int total, quantum_reg *reg );
void muxha_inv( int a, int b_in, int c_in, int xlt_l, int L, int total, quantum_reg *reg );
void madd( int a, int a_inv, int width, quantum_reg *reg );
void madd_inv( int a, int a_inv, int width, quantum_reg *reg );
void addn( int N, int a, int width, quantum_reg *reg );
void addn_inv( int N, int a, int width, quantum_reg *reg );
void add_mod_n( int N, int a, int width, quantum_reg *reg );
void quantum_mu2char( unsigned long long mu, unsigned char *buf );
void quantum_int2char( int j, unsigned char *buf );
void quantum_double2char( double d, unsigned char *buf );
unsigned long long quantum_char2mu( unsigned char *buf );
int quantum_char2int( unsigned char *buf );
double quantum_char2double( unsigned char *buf );
void quantum_objcode_start( void );
void quantum_objcode_stop( void );
int quantum_objcode_put( unsigned char operation, ... );
int quantum_objcode_write( char *file );
void quantum_objcode_file( char *file );
void quantum_objcode_exit( char *file );
void quantum_objcode_run( char *file, quantum_reg *reg );
void emul( int a, int L, int width, quantum_reg *reg );
void muln( int N, int a, int ctl, int width, quantum_reg *reg );
void muln_inv( int N, int a, int ctl, int width, quantum_reg *reg );
void mul_mod_n( int N, int a, int ctl, int width, quantum_reg *reg );
void quantum_qec_set_status( int stype, int swidth );
void quantum_qec_get_status( int *ptype, int *pwidth );
void quantum_qec_encode( int type, int width, quantum_reg *reg );
void quantum_qec_decode( int type, int width, quantum_reg *reg );
int quantum_qec_counter( int inc, int frequency, quantum_reg *reg );
void quantum_sigma_x_ft( int target, quantum_reg *reg );
void quantum_cnot_ft( int control, int target, quantum_reg *reg );
void quantum_toffoli_ft( int control1, int control2, int target, quantum_reg *reg );
void quantum_qft( int width, quantum_reg *reg );
void quantum_qft_inv( int width, quantum_reg *reg );
void quantum_rk4( quantum_reg *reg, double t, double dt, quantum_reg (*H)( unsigned long long , double  ) );
double quantum_rk4a( quantum_reg *reg, double t, double *dt, double epsilon, quantum_reg (*H)( unsigned long long , double  ) );
static inline float quantum_real( float _Complex a );
static inline float quantum_imag( float _Complex a );
quantum_reg quantum_matrix2qureg( quantum_matrix *m, int width );
quantum_reg quantum_new_qureg( unsigned long long initval, int width );
quantum_reg quantum_new_qureg_size( int n, int width );
quantum_matrix quantum_qureg2matrix( quantum_reg reg );
void quantum_destroy_hash( quantum_reg *reg );
void quantum_delete_qureg( quantum_reg *reg );
void quantum_delete_qureg_hashpreserve( quantum_reg *reg );
void quantum_copy_qureg( quantum_reg *src, quantum_reg *dst );
void quantum_print_qureg( quantum_reg reg );
static inline float quantum_prob_inline( float _Complex a );
static inline float quantum_imag( float _Complex a );
static inline float quantum_real( float _Complex a );
void quantum_print_expn( quantum_reg reg );
void quantum_addscratch( int bits, quantum_reg *reg );
void quantum_print_hash( quantum_reg reg );
quantum_reg quantum_kronecker( quantum_reg *reg1, quantum_reg *reg2 );
quantum_reg quantum_state_collapse( int pos, int value, quantum_reg reg );
float _Complex quantum_dot_product( quantum_reg *reg1, quantum_reg *reg2 );
static inline void quantum_reconstruct_hash( quantum_reg *reg );
static inline void quantum_add_hash( unsigned long long a, int pos, quantum_reg *reg );
static inline unsigned int quantum_hash64( unsigned long long key, int width );
static inline int quantum_get_state( unsigned long long a, quantum_reg reg );
float _Complex quantum_dot_product_noconj( quantum_reg *reg1, quantum_reg *reg2 );
quantum_reg quantum_vectoradd( quantum_reg *reg1, quantum_reg *reg2 );
void quantum_vectoradd_inplace( quantum_reg *reg1, quantum_reg *reg2 );
quantum_reg quantum_matrix_qureg( quantum_reg (*A)( unsigned long long , double  ), double t, quantum_reg *reg );
void quantum_scalar_qureg( float _Complex r, quantum_reg *reg );
void quantum_print_timeop( int width, void (*f)( quantum_reg * ) );
int main( int argc, char **argv );
char *quantum_get_version( void );
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
static inline float quantum_imag( float _Complex a )
{
  float *p = &a;
  return p[1];
}
static inline float quantum_real( float _Complex a )
{
  float *p = &a;
  return p[0];
}
