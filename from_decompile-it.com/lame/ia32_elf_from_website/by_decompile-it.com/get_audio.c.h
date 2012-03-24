#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef unsigned int size_t;
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
typedef struct lame_global_struct lame_global_flags;
struct lame_global_struct  ;
typedef struct IFF_AIFF_struct IFF_AIFF;
typedef struct blockAlign_struct blockAlign;
struct blockAlign_struct {
     unsigned long offset;
     unsigned long blockSize;
  } ;
struct IFF_AIFF_struct {
     short numChannels;
     unsigned long numSampleFrames;
     short sampleSize;
     double sampleRate;
     unsigned long sampleType;
     blockAlign blkAlgn;
  } ;
typedef enum sound_file_format_e { sf_unknown = 0, sf_raw = 1, sf_wave = 2, sf_aiff = 3, sf_mp1 = 4, sf_mp2 = 5, sf_mp3 = 6, sf_mp123 = 7, sf_ogg = 8, } sound_file_format;
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
typedef struct hip_global_struct hip_global_flags;
struct hip_global_struct  ;
typedef hip_global_flags *hip_t;
typedef struct get_audio_global_data get_audio_global_data;
struct get_audio_global_data {
     int count_samples_carefully;
     int pcmbitwidth;
     int pcmswapbytes;
     int pcm_is_unsigned_8bit;
     unsigned int num_samples_read;
     FILE *musicin;
     hip_t hip;
  } ;
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int console_printf( char *, ... );
int error_printf( char *, ... );
size_t min_size_t( size_t , size_t  );
int fskip( FILE *, long , int  );
FILE *init_outfile( char *, int  );
void init_infile( lame_global_flags *, char *, int *, int * );
void close_infile( void );
int get_audio( lame_global_flags *, int (*)[1152] );
int get_audio16( lame_global_flags *, short (*)[1152] );
int get_audio_common( lame_global_flags *, int (*)[1152], short (*)[1152] );
int read_samples_mp3( lame_global_flags *, FILE *, short (*)[1152] );
int WriteWaveHeader( FILE *, int , int , int , int  );
int unpack_read_samples( int , int , int , int *, FILE * );
int read_samples_pcm( FILE *, int *, int  );
int parse_wave_header( lame_global_flags *, FILE * );
int aiff_check2( IFF_AIFF * );
long make_even_number_of_bytes_in_length( long  );
int parse_aiff_header( lame_global_flags *, FILE * );
int parse_file_header( lame_global_flags *, FILE * );
void CloseSndFile( sound_file_format , FILE * );
FILE *OpenSndFile( lame_global_flags *, char *, int *, int * );
int check_aid( unsigned char * );
int is_syncword_mp123( void * );
int lame_decode_initfile( FILE *, mp3data_struct *, int *, int * );
int lame_decode_fromfile( FILE *, short *, short *, mp3data_struct * );
int is_mpeg_file_format( int  );
int lame_set_stream_binary_mode( FILE * );
off_t lame_get_file_size( char * );
int Read16BitsLowHigh( FILE * );
int Read16BitsHighLow( FILE * );
void Write16BitsLowHigh( FILE *, int  );
int Read32Bits( FILE * );
int Read32BitsHighLow( FILE * );
void Write32BitsLowHigh( FILE *, int  );
double ReadIeeeExtendedHighLow( FILE * );
int fileno( FILE * );
int lame_get_in_samplerate( lame_global_flags * );
int lame_set_num_channels( lame_global_flags *, int  );
int memcmp( void *, void *, unsigned int  );
unsigned long lame_get_num_samples( lame_global_flags * );
void *memset( void *, int , unsigned int  );
FILE *fopen64( char *, char * );
int hip_decode1_headers( hip_t , char *, unsigned int , short [0], short [0], mp3data_struct * );
int fseek( FILE *, void *, int  );
int fclose( FILE * );
void *ftell( FILE * );
int lame_get_framesize( lame_global_flags * );
unsigned int fwrite( void *, unsigned int , unsigned int , FILE * );
void __stack_chk_fail( void );
int lame_get_num_channels( lame_global_flags * );
hip_t hip_decode_init( void );
int lame_set_num_samples( lame_global_flags *, unsigned int  );
int hip_decode_exit( hip_t  );
int lame_set_in_samplerate( lame_global_flags *, int  );
unsigned int fread( void *, unsigned int , unsigned int , FILE * );
int ferror( FILE * );
int hip_decode1_headersB( hip_t , char *, unsigned int , short [0], short [0], mp3data_struct *, int *, int * );
int strcmp( char *, char * );
void exit( int  );
int fstat64( int , void * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern struct _IO_FILE  *stdin;
extern struct _IO_FILE  *stdout;
extern sound_file_format input_format;
extern int swapbytes;
extern int silent;
extern mp3data_struct mp3input_data;
extern int in_signed;
extern int in_bitwidth;
extern enum ByteOrder { ByteOrderLittleEndian = 0, ByteOrderBigEndian = 1, } in_endian;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
