#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct lame_global_struct lame_global_flags;
struct lame_global_struct  ;
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
typedef struct {
     unsigned long ClassID;
     unsigned long ClassProt;
     FILE *Console_fp;
     FILE *Error_fp;
     FILE *Report_fp;
     int disp_width;
     int disp_height;
     char str_up[10];
     char str_clreoln[10];
     char str_emph[10];
     char str_norm[10];
     char Console_buff[2048];
     int Console_file_type;
  } Console_IO_t;
struct {
     int vbr_bitrate_min_index;
     int vbr_bitrate_max_index;
     int kbps[14];
     int hist_printed_lines;
     char bar_asterisk[513];
     char bar_percent[513];
     char bar_coded[513];
     char bar_space[513];
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int console_printf( char *, ... );
int error_printf( char *, ... );
void console_up( int  );
int calculate_index( int *, int , int  );
int brhist_init( lame_global_flags *, int , int  );
int digits( unsigned int  );
void brhist_disp_line( int , int , int , int , int  );
void progress_line( lame_global_flags *, int , int  );
int stats_value( double  );
int stats_head( double , char * );
void stats_line( double * );
void brhist_disp( lame_global_flags * );
void brhist_jump_back( void );
int sprintf( char *, char *, ... );
void lame_stereo_mode_hist( lame_global_flags *, int [4] );
void lame_bitrate_hist( lame_global_flags *, int [14] );
void *memset( void *, int , unsigned int  );
void lame_bitrate_stereo_mode_hist( lame_global_flags *, int [4] );
void lame_block_type_hist( lame_global_flags *, int [6] );
void lame_bitrate_kbps( lame_global_flags *, int [14] );
int lame_get_framesize( lame_global_flags * );
int lame_get_totalframes( lame_global_flags * );
void __stack_chk_fail( void );
int lame_get_out_samplerate( lame_global_flags * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern Console_IO_t Console_IO;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
