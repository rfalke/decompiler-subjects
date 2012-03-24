#include "timestatus.c.h"
void ts_calc_times( timestatus_t *tstime, int sample_freq, int frameNum, int totalframes, int framesize )
{
  double fp7;
  if ( frameNum > 0 && ( ( tstime->elapsed_time < 0.000000000000 ) & 255 ) )
  {
    tstime->estimated_time = ( tstime->elapsed_time * (double)( totalframes ) ) / (double)( frameNum );
    tstime->speed_index = (double)( framesize * frameNum ) / ( tstime->elapsed_time * (double)( sample_freq ) );
  }
  else
  {
    tstime->estimated_time = 0.000000000000;
    tstime->speed_index = 0.000000000000;
  }
  return;
}
void ts_time_decompose( unsigned long time_in_sec, char padded_char )
{
  unsigned long hour = time_in_sec / 3600;
  unsigned int min = (/*HI*/int)( ( (/*HI*/int)( time_in_sec * -2004318071 ) >> 5 ) * -2004318071 ) >> 5;
  unsigned int sec;
  min = ( (/*HI*/int)( time_in_sec * -2004318071 ) >> 5 ) - ( min * 60 );
  sec = __MOD(time_in_sec,60);
  if ( hour == 0 )
  {
    console_printf( "   %2u:%02u%c", min, sec, padded_char );
  }
  else
  if ( hour <= 99 )
  {
    console_printf( "%2lu:%02u:%02u%c", hour, min, sec, padded_char );
  }
  else
  {
    console_printf( "%6lu h%c", hour, padded_char );
  }
  return;
}
void timestatus( lame_global_flags *gfp )
{
  int edx;
  double fp1;
  double fp2;
  double fp7;
  static timestatus_t real_time;
  static timestatus_t proc_time;
  static int init;
  int percent;
  double tmx, delta;
  int samp_rate = lame_get_out_samplerate( &gfp );
  int frameNum = lame_get_frameNum( &gfp );
  int totalframes = lame_get_totalframes( &gfp );
  int framesize = lame_get_framesize( &gfp );
  if ( totalframes < frameNum )
    totalframes = frameNum;
  if ( frameNum == 0 )
  {
    real_time.last_time = GetRealTime( );
    proc_time.last_time = GetCPUTime( );
    real_time.elapsed_time = 0.000000000000;
    proc_time.elapsed_time = 0.000000000000;
  }
  tmx = GetRealTime( );
  delta = tmx - real_time.last_time;
  if ( ( 0.000000000000 < delta ) & 255 )
    delta = 0.000000000000;
  real_time.elapsed_time += delta;
  real_time.last_time = tmx;
  tmx = GetCPUTime( );
  delta = tmx - proc_time.last_time;
  if ( ( 0.000000000000 < delta ) & 255 )
    delta = 0.000000000000;
  proc_time.elapsed_time += delta;
  proc_time.last_time = tmx;
  if ( frameNum == 0 && init == 0 )
  {
    console_printf( "\r    Frame          |  CPU time/estim | REAL time/estim | play/CPU |    ETA \n     0/       ( 0%%)|    0:00/     :  |    0:00/     :  |         x|     :  \r" );
    init = 1;
  }
  else
  {
    if ( frameNum > 0 )
      init = 0;
    ts_calc_times( &real_time, samp_rate, frameNum, totalframes, framesize );
    ts_calc_times( &proc_time, samp_rate, frameNum, totalframes, framesize );
    if ( frameNum < totalframes )
      percent = (int)( ( ( (double)( frameNum ) * 100.000000000000 ) / (double)( totalframes ) ) + 0.500000000000 );
    else
      percent = 100;
    console_printf( "\r%6i/%-6i", frameNum, totalframes );
    console_printf( percent <= 99 ? " (%2d%%)|" : "(%3.3d%%)|", percent );
    ts_time_decompose( (long long)( proc_time.elapsed_time ), '/' );
    ts_time_decompose( (long long)( proc_time.estimated_time ), '|' );
    ts_time_decompose( (long long)( real_time.elapsed_time ), '/' );
    ts_time_decompose( (long long)( real_time.estimated_time ), '|' );
    console_printf( "%#9.5gx|", proc_time.speed_index );
    ts_time_decompose( (long long)( real_time.estimated_time - real_time.elapsed_time ), ' ' );
  }
  return;
}
void timestatus_finish( void )
{
  console_printf( "\n" );
  return;
}
void encoder_progress_begin( lame_global_flags *gf, char *inPath, char *outPath )
{
  int eax;
  if ( silent <= 9 )
  {
    lame_print_config( &gf );
    console_printf( "Encoding %s%s to %s\n", "&lt;stdin&gt;", "&lt;stdin&gt;" + strlen( inPath ) <= 65 ? "" : "\n     ", "&lt;stdout&gt;" );
    console_printf( "Encoding as %g kHz ", (double)( lame_get_out_samplerate( &gf ) ) * 0.001000000000 );
  {
    static char *mode_names[2][4] = { { "stereo", "j-stereo", "dual-ch", "single-ch" }, { "stereo", "force-ms", "dual-ch", "single-ch" } };
    switch ( lame_get_VBR( &gf ) )
    {
    case 2:
      console_printf( "%s MPEG-%u%s Layer III VBR(q=%g) qval=%i\n", mode_names[0][ lame_get_mode( &gf ) + ( lame_get_force_ms( &gf ) << 2 ) ], 2 - lame_get_version( &gf ), lame_get_mode( &gf ) <= 15999 ? ".5" : "", lame_get_VBR_quality( &gf ), lame_get_quality( &gf ) );
      break;
    case 1:
    case 4:
      console_printf( "%s MPEG-%u%s Layer III VBR(q=%g)\n", mode_names[0][ lame_get_mode( &gf ) + ( lame_get_force_ms( &gf ) << 2 ) ], 2 - lame_get_version( &gf ), lame_get_mode( &gf ) <= 15999 ? ".5" : "", lame_get_VBR_quality( &gf ) );
      break;
    case 3:
      console_printf( "%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n", mode_names[0][ lame_get_mode( &gf ) + ( lame_get_force_ms( &gf ) << 2 ) ], 2 - lame_get_version( &gf ), lame_get_mode( &gf ) <= 15999 ? ".5" : "", (double)( (int)( ( lame_get_compression_ratio( &gf ) * 10.000000000000 ) + 0.500000000000 ) ) * 0.100000000000, lame_get_VBR_mean_bitrate_kbps( &gf ), lame_get_quality( &gf ) );
      break;
    default:
      console_printf( "%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n", mode_names[0][ lame_get_mode( &gf ) + ( lame_get_force_ms( &gf ) << 2 ) ], 2 - lame_get_version( &gf ), lame_get_mode( &gf ) <= 15999 ? ".5" : "", (double)( (int)( ( lame_get_compression_ratio( &gf ) * 10.000000000000 ) + 0.500000000000 ) ) * 0.100000000000, lame_get_brate( &gf ), lame_get_quality( &gf ) );
      break;
    }
    if ( silent < -9 )
    {
      lame_print_internals( &gf );
    }
  }
  }
  return;
}
void encoder_progress( lame_global_flags *gf )
{
  double fp7;
  if ( silent <= 0 )
  {
    int frames = lame_get_frameNum( &gf );
    if ( ( update_interval <= 0 ) & 255 )
    {
      if ( ( __MOD(frames,100) ) == 0 )
        goto B6;
    }
    else
    {
      static double last_time;
      if ( frames && frames != 9 )
      {
        double act = GetRealTime( );
        double dif = act - last_time;
        if ( ( ( dif >= 0.000000000000 ) & 255 ) == 0 || ( ( update_interval < dif ) & 255 ) == 0 )
          goto B8;
      }
B8:;
      last_time = GetRealTime( );
    }
B6:;
    if ( brhist )
      brhist_jump_back( );
    timestatus( &gf );
    if ( brhist )
      brhist_disp( &gf );
    console_flush( );
  }
  return;
}
void encoder_progress_end( lame_global_flags *gf )
{
  if ( silent <= 0 )
  {
    if ( brhist )
      brhist_jump_back( );
    timestatus( &gf );
    if ( brhist )
      brhist_disp( &gf );
    timestatus_finish( );
  }
  return;
}
void decoder_progress( mp3data_struct *mp3data )
{
  int edx;
  static int last;
  console_printf( "\rFrame#%6i/%-6i %3i kbps", mp3data->framenum, mp3data->totalframes, mp3data->bitrate );
  if ( mp3data->mode == 1 )
  {
    int curr = mp3data->mode_ext;
    if ( curr & 1 )
    {
    }
    else
    {
    }
    if ( curr & 2 )
    {
      if ( last & 2 )
      {
      }
      else
      {
      }
    }
    else
    if ( last & 2 )
    {
    }
    else
    {
    }
    console_printf( "  %s  %c", "LMSR", " MS " );
    last = curr;
  }
  else
  {
    console_printf( "         " );
    last = 0;
  }
  console_printf( "        " );
  return;
}
void decoder_progress_finish( void )
{
  console_printf( "\n" );
  return;
}
#if 0
#endif
