#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct lame_global_struct lame_global_flags;
struct lame_global_struct  ;
typedef enum TextEncoding { TENC_RAW = 0, TENC_LATIN1 = 1, TENC_UCS2 = 2, } TextEncoding;
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
typedef lame_global_flags *lame_t;
typedef enum sound_file_format_e { sf_unknown = 0, sf_raw = 1, sf_wave = 2, sf_aiff = 3, sf_mp1 = 4, sf_mp2 = 5, sf_mp3 = 6, sf_mp123 = 7, sf_ogg = 8, } sound_file_format;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int console_printf( char *, ... );
int error_printf( char *, ... );
int set_id3tag( lame_global_flags *, int , char * );
int id3_tag( lame_global_flags *, int , TextEncoding , char * );
int lame_version_print( FILE * );
int print_license( FILE * );
int usage( FILE *, char * );
int short_help( lame_global_flags *, FILE *, char * );
void wait_for( FILE *, int  );
int long_help( lame_global_flags *, FILE *, char *, int  );
void display_bitrate( FILE *, char *, int , int  );
int display_bitrates( FILE * );
void presets_longinfo_dm( FILE * );
int presets_set( lame_t , int , int , char *, char * );
void genre_list_handler( int , char *, void * );
int local_strcasecmp( char *, char * );
int filename_to_type( char * );
int resample_rate( double  );
int set_id3_albumart( lame_t , char * );
int parse_args( lame_global_flags *, int , char **, char *, char *, char **, int * );
char *get_lame_version( void );
FILE *popen( char *, char * );
int lame_set_num_channels( lame_global_flags *, int  );
void id3tag_v1_only( lame_t  );
void id3tag_v2_only( lame_t  );
int id3tag_set_albumart( lame_t , char *, unsigned int  );
int lame_set_scale_right( lame_global_flags *, float  );
int getchar( void );
int lame_set_decode_only( lame_global_flags *, int  );
void id3tag_init( lame_t  );
int __isoc99_sscanf( char *, char *, ... );
char *get_lame_os_bitness( void );
char *strncpy( char *, char *, unsigned int  );
int lame_set_error_protection( lame_global_flags *, int  );
FILE *fopen64( char *, char * );
char *get_lame_url( void );
void id3tag_set_comment( lame_t , char * );
int lame_set_decode_on_the_fly( lame_global_flags *, int  );
int lame_set_VBR_hard_min( lame_global_flags *, int  );
int lame_get_decode_only( lame_global_flags * );
int lame_set_strict_ISO( lame_global_flags *, int  );
int lame_set_useTemporal( lame_global_flags *, int  );
int lame_set_force_ms( lame_global_flags *, int  );
int lame_set_compression_ratio( lame_global_flags *, float  );
void free( void * );
int lame_set_VBR_quality( lame_global_flags *, float  );
int lame_set_disable_reservoir( lame_global_flags *, int  );
int fflush( FILE * );
int fseek( FILE *, void *, int  );
int lame_set_VBR_min_bitrate_kbps( lame_global_flags *, int  );
int lame_set_free_format( lame_global_flags *, int  );
int fclose( FILE * );
int lame_set_exp_nspsytune( lame_global_flags *, int  );
void *memcpy( void *, void *, unsigned int  );
unsigned int strlen( char * );
int lame_set_VBR( lame_global_flags *, void * );
int lame_get_bWriteVbrTag( lame_global_flags * );
void lame_set_msfix( lame_global_flags *, double  );
int lame_get_VBR( lame_global_flags * );
int lame_set_athaa_sensitivity( lame_global_flags *, float  );
char *strcpy( char *, char * );
void *ftell( FILE * );
int lame_set_out_samplerate( lame_global_flags *, int  );
int lame_set_asm_optimizations( lame_global_flags *, int , int  );
void id3tag_set_title( lame_t , char * );
int lame_set_brate( lame_global_flags *, int  );
int atoi( char * );
int lame_set_findReplayGain( lame_global_flags *, int  );
double atof( char * );
void id3tag_set_artist( lame_t , char * );
int lame_set_highpassfreq( lame_global_flags *, int  );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
int fprintf( FILE *, char *, ... );
int lame_set_VBR_mean_bitrate_kbps( lame_global_flags *, int  );
int lame_set_quality( lame_global_flags *, int  );
int lame_get_mode( lame_global_flags * );
void id3tag_set_year( lame_t , char * );
void id3tag_set_album( lame_t , char * );
void *malloc( unsigned int  );
void id3tag_set_pad( lame_t , unsigned int  );
int fputc( int , FILE * );
int lame_set_VBR_max_bitrate_kbps( lame_global_flags *, int  );
int lame_set_original( lame_global_flags *, int  );
void id3tag_pad_v2( lame_t  );
void id3tag_add_v2( lame_t  );
int lame_set_bWriteVbrTag( lame_global_flags *, int  );
char *strcat( char *, char * );
void id3tag_genre_list( void *, void * );
int lame_get_exp_nspsytune( lame_global_flags * );
int id3tag_set_track( lame_t , char * );
int lame_set_interChRatio( lame_global_flags *, float  );
int id3tag_set_genre( lame_t , char * );
int lame_set_preset( lame_global_flags *, int  );
int lame_get_free_format( lame_global_flags * );
int lame_set_emphasis( lame_global_flags *, int  );
int lame_set_mode( lame_global_flags *, void * );
int lame_set_experimentalY( lame_global_flags *, int  );
int lame_set_in_samplerate( lame_global_flags *, int  );
unsigned int fread( void *, unsigned int , unsigned int , FILE * );
int lame_set_VBR_q( lame_global_flags *, int  );
int lame_set_lowpassfreq( lame_global_flags *, int  );
int lame_set_scale_left( lame_global_flags *, float  );
int lame_get_brate( lame_global_flags * );
int lame_set_highpasswidth( lame_global_flags *, int  );
char *strdup( char * );
int id3tag_set_fieldvalue( lame_t , char * );
int lame_set_scale( lame_global_flags *, float  );
int tolower( int  );
int lame_set_copyright( lame_global_flags *, int  );
int lame_set_lowpasswidth( lame_global_flags *, int  );
int strcmp( char *, char * );
void id3tag_space_v1( lame_t  );
int lame_get_VBR_q( lame_global_flags * );
int pclose( FILE * );
int lame_get_VBR_mean_bitrate_kbps( lame_global_flags * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdout;
extern int bitrate_table[3][16];
extern sound_file_format input_format;
extern int swapbytes;
extern int silent;
extern int mp3_delay;
extern int mp3_delay_set;
extern float update_interval;
extern int disable_wav_header;
extern int print_clipping_info;
extern int in_signed;
extern int in_bitwidth;
extern int flush_write;
extern enum ByteOrder { ByteOrderLittleEndian = 0, ByteOrderBigEndian = 1, } in_endian;
extern Console_IO_t Console_IO;
extern int ignore_tag_errors;
extern int brhist;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
