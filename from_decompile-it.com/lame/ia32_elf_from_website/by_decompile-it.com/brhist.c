#include "brhist.c.h"
static struct {
   int vbr_bitrate_min_index;
   int vbr_bitrate_max_index;
   int kbps[14];
   int hist_printed_lines;
   char bar_asterisk[513];
   char bar_percent[513];
   char bar_coded[513];
   char bar_space[513];
} brhist;
int calculate_index( int *array, int len, int value )
{
  int eax;
  int i = 0;
  for ( ; i < len; i++ )
  {
    if ( array[ i ] == value )
    {
      return i;
    }
    // i++;
  }
}
int brhist_init( lame_global_flags *gf, int bitrate_kbps_min, int bitrate_kbps_max )
{
  brhist.hist_printed_lines = 0;
  lame_bitrate_kbps( &gf, ebp_20 );
  brhist.vbr_bitrate_min_index = calculate_index( &brhist.kbps[0], 14, bitrate_kbps_min );
  brhist.vbr_bitrate_max_index = calculate_index( &brhist.kbps[0], 14, bitrate_kbps_max );
  if ( brhist.vbr_bitrate_min_index > 13 || brhist.vbr_bitrate_max_index > 13 )
  {
    error_printf( "lame internal error: VBR min %d kbps or VBR max %d kbps not allowed.\n", bitrate_kbps_min, bitrate_kbps_max );
  }
  memset( &brhist.bar_asterisk[0], 42, 512 );
  memset( &brhist.bar_percent[0], 37, 512 );
  memset( &brhist.bar_space[0], 45, 512 );
  memset( &brhist.bar_coded[0], 45, 512 );
  return 0;
}
int digits( unsigned int number )
{
  int ret = 1;
  if ( number > 0x5f5e0ff )
  {
    ret += 8;
    number /= 0x5f5e100;
  }
  if ( number > 9999 )
  {
    ret += 4;
    number /= 10000;
  }
  if ( number > 99 )
  {
    ret += 2;
    number /= 100;
  }
  if ( number > 9 )
  {
    ret++;
  }
  return ret;
}
void brhist_disp_line( int i, int br_hist_TOT, int br_hist_LR, int full, int frames )
{
  int eax;
  char brppt[14];
  int barlen_TOT;
  int barlen_LR;
  int ppt = 0;
  int res = digits( frames ) + 8;
  if ( full )
  {
    barlen_TOT = ( full + ( br_hist_TOT * ( Console_IO.disp_width - res ) ) + -1 ) / full;
    barlen_LR = ( full + ( br_hist_LR * ( Console_IO.disp_width - res ) ) + -1 ) / full;
  }
  else
  {
    barlen_TOT = barlen_LR = 0;
  }
  if ( frames > 0 )
    ppt = ( ( br_hist_TOT * 1000 ) + ( frames / 2 ) ) / frames;
  sprintf( brppt, " [%*i]", digits( frames ), br_hist_TOT );
  if ( Console_IO.str_clreoln[0] )
    console_printf( "\n%3d%s %.*s%.*s%s", brhist.kbps[ i ], brppt[0], barlen_LR, brhist.bar_percent[0], barlen_TOT - barlen_LR, brhist.bar_asterisk[0], Console_IO.str_clreoln[0] );
  else
    console_printf( "\n%3d%s %.*s%.*s%*s", brhist.kbps[ i ], brppt[0], barlen_LR, brhist.bar_percent[0], barlen_TOT - barlen_LR, brhist.bar_asterisk[0], Console_IO.disp_width - res - barlen_TOT, "" );
  brhist.hist_printed_lines++;
  return;
}
void progress_line( lame_global_flags *gf, int full, int frames )
{
  int edx;
  char rst[20];
  int barlen_TOT, barlen_COD, barlen_RST;
  int res;
  float time_in_sec;
  unsigned int hour, min, sec;
  int fsize;
  int srate;
  *(int*)&rst[0] = 0;
  *(int*)&rst[2] = 0;
  *(int*)&rst[6] = 0;
  *(int*)&rst[10] = 0;
  *(int*)&rst[14] = 0;
  rst[18] = 0;
  barlen_TOT = 0;
  barlen_COD = 0;
  barlen_RST = 0;
  res = 1;
  time_in_sec = 0.0;
  fsize = lame_get_framesize( &gf );
  srate = lame_get_out_samplerate( &gf );
  if ( full < frames )
    full = frames;
  if ( srate > 0 )
  {
    time_in_sec = (double)( full - frames );
    time_in_sec *= (double)( fsize );
    time_in_sec /= (double)( srate );
  }
  hour = (long long)( time_in_sec / 3600.000000000000 );
  time_in_sec -= (double)( (long long)( hour * 3600 ) );
  min = (long long)( time_in_sec / 60.000000000000 );
  time_in_sec -= (double)( (long long)( min * 60 ) );
  sec = (long long)( time_in_sec );
  if ( full )
  {
    if ( hour )
    {
      sprintf( rst, "%*d:%02u:%02u", digits( hour ), (int)hour, min, sec );
      res += digits( hour ) + 6;
    }
    else
    {
      sprintf( rst, "%02u:%02u", min, sec );
      res += 5;
    }
    barlen_TOT = ( ( full * ( ( Console_IO.disp_width - res ) + 1 ) ) + -1 ) / full;
    barlen_COD = ( full + ( frames * ( Console_IO.disp_width - res ) ) + -1 ) / full;
    barlen_RST = barlen_TOT - barlen_COD;
    if ( barlen_RST == 0 )
      sprintf( rst, "%.*s", res + -1, &brhist.bar_coded[0] );
  }
  else
  {
    barlen_TOT = barlen_COD = barlen_RST = 0;
  }
  if ( Console_IO.str_clreoln[0] )
    console_printf( "\n%.*s%s%.*s%s", barlen_COD, brhist.bar_coded[0], rst[0], barlen_RST, brhist.bar_space[0], Console_IO.str_clreoln[0] );
  else
    console_printf( "\n%.*s%s%.*s%*s", barlen_COD, brhist.bar_coded[0], rst[0], barlen_RST, brhist.bar_space[0], Console_IO.disp_width - res - barlen_TOT, "" );
  brhist.hist_printed_lines++;
  return;
}
int stats_value( double x )
{
  double fp7;
  if ( ( x < 0.000000000000 ) & 255 )
  {
    console_printf( " %5.1f", x );
  }
  return 0;
(x << 32) = ebp_12; // XXX
}
int stats_head( double x, char *txt )
{
  double fp7;
  if ( ( x < 0.000000000000 ) & 255 )
  {
    console_printf( txt );
  }
  return 0;
(x << 32) = ebp_12; // XXX
}
void stats_line( double *stat )
{
  int n = 1;
  console_printf( "\n   kbps     " );
  n += 12;
  n += stats_head( stat[1], "  mono" );
  n += stats_head( stat[2], "   IS " );
  n += stats_head( stat[3], "   LR " );
  n += stats_head( stat[4], "   MS " );
  console_printf( " %%    " );
  n += 6;
  n += stats_head( stat[5], " long " );
  n += stats_head( stat[6], "switch" );
  n += stats_head( stat[7], " short" );
  n += stats_head( stat[8], " mixed" );
  n += console_printf( " %%" );
  if ( Console_IO.str_clreoln[0] )
    console_printf( "%s", Console_IO.str_clreoln[0] );
  else
    console_printf( "%*s", Console_IO.disp_width - n, "" );
  brhist.hist_printed_lines++;
  n = 1;
  console_printf( "\n  %5.1f     ", stat[0] );
  n += 12;
  n += stats_value( stat[1] );
  n += stats_value( stat[2] );
  n += stats_value( stat[3] );
  n += stats_value( stat[4] );
  console_printf( "      " );
  n += 6;
  n += stats_value( stat[5] );
  n += stats_value( stat[6] );
  n += stats_value( stat[7] );
  n += stats_value( stat[8] );
  if ( Console_IO.str_clreoln[0] )
  {
    console_printf( "%s", Console_IO.str_clreoln[0] );
  }
  else
  {
    console_printf( "%*s", Console_IO.disp_width - n, "" );
  }
  brhist.hist_printed_lines++;
  return;
}
void brhist_disp( lame_global_flags *gf )
{
  int i, lines_used = 0;
  int br_hist[14];
  int br_sm_hist[14][4];
  int st_mode[4];
  int bl_type[6];
  int frames;
  int most_often;
  double sum = 0.000000000000;
  double stat[9] = { };
  int st_frames = 0;
  brhist.hist_printed_lines = 0;
  lame_bitrate_stereo_mode_hist( &gf, br_sm_hist[0] );
  lame_bitrate_hist( &gf, br_hist );
  lame_stereo_mode_hist( &gf, st_mode );
  lame_block_type_hist( &gf, bl_type );
  frames = most_often = 0;
  i = 0;
  for ( ; i <= 13; i++ )
  {
    frames += br_hist[ i ];
    sum += (double)( brhist.kbps[ i ] * br_hist[ i ] );
    if ( most_often < br_hist[ i ] )
      most_often = br_hist[ i ];
    if ( br_hist[ i ] )
      lines_used++;
    // i++;
  }
  i = 0;
  for ( ; i <= 13;  )
  {
    int show = br_hist[ i ];
    show = 0;
    if ( show || ( brhist.vbr_bitrate_min_index <= i && i <= brhist.vbr_bitrate_max_index ) )
      brhist_disp_line( i, br_hist[ i ], br_sm_hist[ i ][0], most_often, frames );
    i++;
  }
  i = 0;
  for ( ; i <= 3; i++ )
  {
    st_frames += st_mode[ i ];
    // i++;
  }
  if ( frames > 0 )
  {
    stat[0] = sum / (double)( frames );
    stat[1] = ( (double)( frames - st_frames ) * 100.000000000000 ) / (double)( frames );
  }
  if ( st_frames > 0 )
  {
    stat[2] = 0.000000000000;
    stat[3] = ( (double)( st_mode[0] ) * 100.000000000000 ) / (double)( st_frames );
    stat[4] = ( (double)( st_mode[2] ) * 100.000000000000 ) / (double)( st_frames );
  }
  if ( bl_type[5] > 0 )
  {
    stat[5] = ( (double)( bl_type[0] ) * 100.000000000000 ) / (double)( bl_type[5] );
    stat[6] = ( (double)( bl_type[3] + bl_type[1] ) * 100.000000000000 ) / (double)( bl_type[5] );
    stat[7] = ( (double)( bl_type[2] ) * 100.000000000000 ) / (double)( bl_type[5] );
    stat[8] = ( (double)( bl_type[4] ) * 100.000000000000 ) / (double)( bl_type[5] );
  }
  progress_line( &gf, lame_get_totalframes( &gf ), frames );
  stats_line( stat );
  return;
}
void brhist_jump_back( void )
{
  console_up( brhist.hist_printed_lines );
  brhist.hist_printed_lines = 0;
  return;
}
#if 0
#endif
