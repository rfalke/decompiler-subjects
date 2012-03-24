#define __MOD(a,b) a % b
/*****************************************************************************************/
/******                                                                             ******/
/******                            Structure Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
typedef struct {
     double last_time;
     double elapsed_time;
     double estimated_time;
     double speed_index;
  } timestatus_t;
typedef struct lame_global_struct lame_global_flags;
struct lame_global_struct  ;
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
/*****************************************************************************************/
/******                                                                             ******/
/******                          Function Prototypes                                ******/
/******                                                                             ******/
/*****************************************************************************************/
int console_printf( char *, ... );
void console_flush( void );
double GetCPUTime( void );
double GetRealTime( void );
void ts_calc_times( timestatus_t *, int , int , int , int  );
void ts_time_decompose( unsigned long , char  );
void timestatus( lame_global_flags * );
void timestatus_finish( void );
void encoder_progress_begin( lame_global_flags *, char *, char * );
void encoder_progress( lame_global_flags * );
void encoder_progress_end( lame_global_flags * );
void decoder_progress( mp3data_struct * );
void decoder_progress_finish( void );
void brhist_disp( lame_global_flags * );
void brhist_jump_back( void );
float lame_get_compression_ratio( lame_global_flags * );
unsigned int strlen( char * );
void lame_print_config( lame_global_flags * );
int lame_get_VBR( lame_global_flags * );
int lame_get_quality( lame_global_flags * );
int lame_get_framesize( lame_global_flags * );
int lame_get_mode( lame_global_flags * );
int lame_get_totalframes( lame_global_flags * );
int lame_get_version( lame_global_flags * );
int lame_get_frameNum( lame_global_flags * );
void lame_print_internals( lame_global_flags * );
float lame_get_VBR_quality( lame_global_flags * );
int lame_get_out_samplerate( lame_global_flags * );
int lame_get_force_ms( lame_global_flags * );
int lame_get_brate( lame_global_flags * );
int strcmp( char *, char * );
int lame_get_VBR_mean_bitrate_kbps( lame_global_flags * );
/*****************************************************************************************/
/******                                                                             ******/
/******                        Forward Var Declarations                             ******/
/******                                                                             ******/
/*****************************************************************************************/
extern int silent;
extern float update_interval;
extern int brhist;
/*****************************************************************************************/
/******                                                                             ******/
/******                      Inline Function Definitions                            ******/
/******                                                                             ******/
/*****************************************************************************************/
