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
typedef char *__gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef struct {
     int header_parsed;
     int stereo;
     int samplerate;
     int bitrate;
     int mode;
     int mode_ext;
     int framesize;
     unsigned long nsamp;
     int totalframes;
     int framenum;
  } mp3data_struct;
typedef lame_global_flags *lame_t;
typedef enum sound_file_format_e { sf_unknown = 0, sf_raw = 1, sf_wave = 2, sf_aiff = 3, sf_mp1 = 4, sf_mp2 = 5, sf_mp3 = 6, sf_mp123 = 7, sf_ogg = 8, } sound_file_format;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int parse_args_from_string( lame_global_flags *, char *, char *, char * );
FILE *init_files( lame_global_flags *, char *, char *, int *, int * );
int lame_decoder( lame_global_flags *, FILE *, int , char *, char *, int *, int * );
void print_lame_tag_leading_info( lame_global_flags * );
void print_trailing_info( lame_global_flags * );
int write_xing_frame( lame_global_flags *, FILE * );
int lame_encoder( lame_global_flags *, FILE *, int , char *, char * );
void brhist_init_package( lame_global_flags * );
void parse_nogap_filenames( int , char *, char *, char * );
int main( int , char ** );
int frontend_open_console( void );
void frontend_close_console( void );
void frontend_debugf( char *, va_list  );
void frontend_msgf( char *, va_list  );
void frontend_errorf( char *, va_list  );
int console_printf( char *, ... );
int error_printf( char *, ... );
void console_flush( void );
FILE *init_outfile( char *, int  );
void init_infile( lame_global_flags *, char *, int *, int * );
void close_infile( void );
int get_audio( lame_global_flags *, int (*)[1152] );
int get_audio16( lame_global_flags *, short (*)[1152] );
int WriteWaveHeader( FILE *, int , int , int , int  );
int usage( FILE *, char * );
int display_bitrates( FILE * );
int parse_args( lame_global_flags *, int , char **, char *, char *, char **, int * );
void Write16BitsLowHigh( FILE *, int  );
void WriteBytes( FILE *, char *, int  );
void WriteBytesSwapped( FILE *, char *, int  );
void encoder_progress_begin( lame_global_flags *, char *, char * );
void encoder_progress( lame_global_flags * );
void encoder_progress_end( lame_global_flags * );
void decoder_progress( mp3data_struct * );
void decoder_progress_finish( void );
int brhist_init( lame_global_flags *, int , int  );
int lame_get_in_samplerate( lame_global_flags * );
int lame_get_RadioGain( lame_global_flags * );
int lame_get_noclipGainChange( lame_global_flags * );
unsigned int lame_get_id3v2_tag( lame_t , char *, unsigned int  );
char *getenv( char * );
char *strncpy( char *, char *, unsigned int  );
unsigned long lame_get_num_samples( lame_global_flags * );
int lame_set_debugf( lame_global_flags *, void * );
float lame_get_noclipScale( lame_global_flags * );
int lame_get_VBR_max_bitrate_kbps( lame_global_flags * );
void *memset( void *, int , unsigned int  );
int lame_encode_buffer_int( lame_global_flags *, int [0], int [0], int , char *, int  );
int lame_get_VBR_min_bitrate_kbps( lame_global_flags * );
void lame_set_write_id3tag_automatic( lame_global_flags *, int  );
int lame_get_decode_only( lame_global_flags * );
unsigned int lame_get_lametag_frame( lame_global_flags *, char *, unsigned int  );
void free( void * );
int lame_close( lame_global_flags * );
int lame_set_nogap_total( lame_global_flags *, int  );
int fflush( FILE * );
int lame_get_encoder_delay( lame_global_flags * );
int fseek( FILE *, void *, int  );
int fclose( FILE * );
int lame_set_errorf( lame_global_flags *, void * );
int lame_init_bitstream( lame_global_flags * );
int lame_get_decode_on_the_fly( lame_global_flags * );
unsigned int strlen( char * );
int lame_get_bWriteVbrTag( lame_global_flags * );
int lame_set_nogap_currentindex( lame_global_flags *, int  );
char *strcpy( char *, char * );
int lame_encode_flush( lame_global_flags *, char *, int  );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
char *strncat( char *, char *, unsigned int  );
int lame_set_msgf( lame_global_flags *, void * );
void *malloc( unsigned int  );
void __stack_chk_fail( void );
int lame_encode_flush_nogap( lame_global_flags *, char *, int  );
int lame_get_num_channels( lame_global_flags * );
int lame_get_version( lame_global_flags * );
int lame_init_params( lame_global_flags * );
char *strcat( char *, char * );
unsigned int lame_get_id3v1_tag( lame_t , char *, unsigned int  );
int lame_get_findReplayGain( lame_global_flags * );
int lame_get_out_samplerate( lame_global_flags * );
lame_global_flags *lame_init( void );
int strcmp( char *, char * );
void exit( int  );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stderr;
extern sound_file_format input_format;
extern int swapbytes;
extern int silent;
extern int mp3_delay;
extern int mp3_delay_set;
extern float update_interval;
extern int disable_wav_header;
extern mp3data_struct mp3input_data;
extern int print_clipping_info;
extern int flush_write;
extern int brhist;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
