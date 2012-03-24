#include "main.c.h"
int parse_args_from_string( lame_global_flags *gfp, char *p, char *inPath, char *outPath )
{
  int eax;
  char *q;
  char *f;
  char *r[128];
  int c = 0;
  int ret;
  if ( p == 0 || p[0] == 0 )
  {
  }
  f = q = malloc( ( strlen( p ) + 1 ) * sizeof( char ) );
  strcpy( q, p );
  r[ c ] = "lhama";
  c++;
  while ( 1 )
  {
    r[ c ] = q;
    c++;
    for ( ; q[0] != ' ' && q[0]; q++ )
    {
      // q++;
    }
    if ( q[0] == 0 )
    {
      r[ c ] = 0;
      ret = parse_args( &gfp, c, r, inPath, outPath, 0, 0 );
      free( f );
      return ret;
    }
    q[0] = 0;
    q++;
  }
}
FILE *init_files( lame_global_flags *gf, char *inPath, char *outPath, int *enc_delay, int *enc_padding )
{
  int eax;
  FILE *outf;
  if ( strcmp( "-", outPath ) && strcmp( inPath, outPath ) == 0 )
  {
    error_printf( "Input file and Output file are the same. Abort.\n" );
  }
  init_infile( &gf, inPath, enc_delay, enc_padding );
  outf = init_outfile( outPath, lame_get_decode_only( &gf ) );
  if ( outf == 0 )
  {
    error_printf( "Can't init outfile '%s'\n", outPath );
  }
  return outf;
}
int lame_decoder( lame_global_flags *gfp, FILE *outf, int skip_start, char *inPath, char *outPath, int *enc_delay, int *enc_padding )
{
  int eax;
  int edx;
  double fp7;
  short Buffer[2][1152];
  int iread;
  int skip_end = 0;
  double wavsize;
  int i;
  void (*WriteFunction)( FILE *, char *, int  );
  int tmp_num_channels = lame_get_num_channels( &gfp );
  if ( silent <= 9 )
  {
    console_printf( "\rinput:  %s%s(%g kHz, %i channel%s, ", "&lt;stdin&gt;", "  ", (double)( lame_get_in_samplerate( &gfp ) ) / 1000.000000000000, tmp_num_channels, "" );
  }
  switch ( input_format )
  {
  case sf_mp123:
    error_printf( "Internal error.  Aborting." );
    exit( -1 );
    break;
  case sf_mp3:
    if ( skip_start == 0 )
    {
      if ( enc_delay[0] >= 0 || enc_padding[0] >= 0 )
      {
        if ( enc_delay[0] >= 0 )
          skip_start = enc_delay[0] + 529;
        if ( enc_padding[0] >= 0 )
          skip_end = enc_padding[0] + -529;
      }
      else
      {
        skip_start = lame_get_encoder_delay( &gfp ) + 529;
      }
    }
    else
      skip_start += 529;
    if ( silent <= 9 )
    {
      console_printf( "MPEG-%u%s Layer %s", 2 - lame_get_version( &gfp ), lame_get_version( &gfp ) <= 15999 ? ".5" : "", "III" );
    }
    else
    {
    }
    break;
  case sf_mp2:
    skip_start += 241;
    if ( silent <= 9 )
    {
      console_printf( "MPEG-%u%s Layer %s", 2 - lame_get_version( &gfp ), lame_get_version( &gfp ) <= 15999 ? ".5" : "", "II" );
    }
    else
    {
    }
    break;
  case sf_mp1:
    skip_start += 241;
    if ( silent <= 9 )
    {
      console_printf( "MPEG-%u%s Layer %s", 2 - lame_get_version( &gfp ), lame_get_version( &gfp ) <= 15999 ? ".5" : "", "I" );
    }
    break;
  case sf_raw:
    if ( silent <= 9 )
      console_printf( "raw PCM data" );
    mp3input_data.nsamp = lame_get_num_samples( &gfp );
    mp3input_data.framesize = 1152;
    skip_start = 0;
    break;
  case sf_wave:
    if ( silent <= 9 )
      console_printf( "Microsoft WAVE" );
    mp3input_data.nsamp = lame_get_num_samples( &gfp );
    mp3input_data.framesize = 1152;
    skip_start = 0;
    break;
  case sf_aiff:
    if ( silent <= 9 )
      console_printf( "SGI/Apple AIFF" );
    mp3input_data.nsamp = lame_get_num_samples( &gfp );
    mp3input_data.framesize = 1152;
    skip_start = 0;
    break;
  case sf_unknown:
    if ( silent <= 9 )
      console_printf( "unknown" );
    mp3input_data.nsamp = lame_get_num_samples( &gfp );
    mp3input_data.framesize = 1152;
    skip_start = 0;
    break;
  }
  if ( silent <= 9 )
  {
    console_printf( ")\noutput: %s%s(16 bit, Microsoft WAVE)\n", "&lt;stdout&gt;", "  " );
    if ( skip_start > 0 )
      console_printf( "skipping initial %i samples (encoder+decoder delay)\n", skip_start );
    if ( skip_end > 0 )
      console_printf( "skipping final %i samples (encoder padding-decoder delay)\n", skip_end );
  }
  if ( disable_wav_header == 0 )
  {
    WriteWaveHeader( outf, 0x7fffffff, lame_get_in_samplerate( &gfp ), tmp_num_channels, 16 );
  }
  wavsize = (double)( 0 - ( skip_start + skip_end ) );
  WriteFunction = &WriteBytes;
  mp3input_data.totalframes = (long long)( mp3input_data.nsamp ) / mp3input_data.framesize;
  do
  {
    iread = get_audio16( &gfp, Buffer );
    if ( iread >= 0 )
    {
      mp3input_data.framenum += iread / mp3input_data.framesize;
      wavsize += (double)( iread );
      if ( silent <= 0 )
      {
        decoder_progress( &mp3input_data );
        console_flush( );
      }
      i = iread <= skip_start ? skip_start : iread;
      skip_start -= i;
      if ( skip_end > 1152 && mp3input_data.totalframes < mp3input_data.framenum + 2 )
      {
        iread += 1152 - skip_end;
        skip_end = 1152;
        while ( i < iread )
        {
          if ( disable_wav_header )
          {
            WriteFunction( outf, &Buffer[0][ i ], 2 );
            if ( tmp_num_channels == 2 )
              WriteFunction( outf, &Buffer[0][ i + 1152 ], 2 );
          }
          else
          {
            Write16BitsLowHigh( outf, Buffer[0][ i ] );
            if ( tmp_num_channels == 2 )
              Write16BitsLowHigh( outf, Buffer[0][ i + 1152 ] );
          }
          i++;
        }
        if ( flush_write == 1 )
          fflush( outf );
      }
      else
      {
        if ( mp3input_data.framenum == mp3input_data.totalframes && iread )
        {
          iread -= skip_end;
        }
      }
    }
  }
  while ( iread > 0 );
  i = tmp_num_channels * 2;
  if ( ( (int)wavsize <= 0 ) & 255 )
  {
    if ( silent <= 9 )
      error_printf( "WAVE file contains 0 PCM samples\n" );
    wavsize = 0.000000000000;
  }
  else
  if ( ( wavsize < (double)( (long long)( (long long)4294967248 / i ) ) ) & 255 )
  {
    if ( silent <= 9 )
      error_printf( "Very huge WAVE file, can't set filesize accordingly\n" );
    wavsize = 4294967248.000000000000;
  }
  else
    wavsize *= (double)( i );
  if ( disable_wav_header == 0 && strcmp( "-", outPath ) && fseek( outf, 0, 0 ) == 0 )
  {
    WriteWaveHeader( outf, (int)( wavsize ), lame_get_in_samplerate( &gfp ), tmp_num_channels, 16 );
  }
  fclose( outf );
  if ( silent <= 0 )
  {
    decoder_progress_finish( );
  }
  return 0;
}
void print_lame_tag_leading_info( lame_global_flags *gf )
{
  if ( lame_get_bWriteVbrTag( &gf ) )
  {
    console_printf( "Writing LAME Tag..." );
  }
  return;
}
void print_trailing_info( lame_global_flags *gf )
{
  double fp7;
  if ( lame_get_bWriteVbrTag( &gf ) )
    console_printf( "done\n" );
  if ( lame_get_findReplayGain( &gf ) )
  {
    int RadioGain = lame_get_RadioGain( &gf );
    console_printf( "ReplayGain: %s%.1fdB\n", "", (double)( RadioGain ) / 10.000000000000 );
    if ( RadioGain > 510 || RadioGain < -510 )
      error_printf( "WARNING: ReplayGain exceeds the -51dB to +51dB range. Such a result is too\n         high to be stored in the header.\n" );
  }
  if ( print_clipping_info && lame_get_decode_on_the_fly( &gf ) )
  {
    float noclipGainChange = (double)( lame_get_noclipGainChange( &gf ) ) / 10.000000000000;
    float noclipScale = lame_get_noclipScale( &gf );
    if ( ( noclipGainChange < 0 ) & 255 )
    {
      console_printf( "WARNING: clipping occurs at the current gain. Set your decoder to decrease\n         the  gain  by  at least %.1fdB or encode again ", noclipGainChange );
      if ( ( noclipScale < 0 ) & 255 )
      {
        console_printf( "using  --scale %.2f\n", noclipScale );
        console_printf( "         or less (the value under --scale is approximate).\n" );
      }
      else
      {
        console_printf( "using --scale &lt;arg&gt;\n         (For   a   suggestion  on  the  optimal  value  of  &lt;arg&gt;  encode\n         with  --scale 1  first)\n" );
      }
    }
    else
    if ( ( noclipGainChange < -0.100000000000 ) & 255 )
    {
      console_printf( "\nThe waveform does not clip and is less than 0.1dB away from full scale.\n" );
    }
    else
    {
      console_printf( "\nThe waveform does not clip and is at least %.1fdB away from full scale.\n", -( noclipGainChange ) );
    }
  }
  return;
}
int write_xing_frame( lame_global_flags *gf, FILE *outf )
{
  int eax;
  unsigned char mp3buffer[147456];
  size_t imp3 = lame_get_lametag_frame( &gf, mp3buffer, 0x24000 );
  size_t owrite;
  if ( imp3 > 0x24000 )
  {
    error_printf( "Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n", 147456, imp3 );
  }
  else
  if ( imp3 == 0 )
  {
  }
  else
  {
    owrite = fwrite( mp3buffer, 1, imp3, outf );
    if ( owrite != imp3 )
    {
      error_printf( "Error writing LAME-tag \n" );
    }
    else
    {
      if ( flush_write == 1 )
        fflush( outf );
    }
  }
  return (int)imp3;
}
int lame_encoder( lame_global_flags *gf, FILE *outf, int nogap, char *inPath, char *outPath )
{
  unsigned char mp3buffer[147456];
  int Buffer[2][1152];
  int iread, imp3, owrite, id3v2_size;
  encoder_progress_begin( &gf, inPath, outPath );
  imp3 = lame_get_id3v2_tag( &gf, mp3buffer, 0x24000 );
  if ( imp3 > 0x24000 )
  {
    encoder_progress_end( &gf );
    error_printf( "Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n", 147456, imp3 );
  }
  else
  {
    owrite = fwrite( mp3buffer, 1, imp3, outf );
    if ( owrite != imp3 )
    {
      encoder_progress_end( &gf );
      error_printf( "Error writing ID3v2 tag \n" );
    }
    else
    {
      if ( flush_write == 1 )
        fflush( outf );
      id3v2_size = imp3;
      do
      {
        iread = get_audio( &gf, Buffer );
        if ( iread >= 0 )
        {
          encoder_progress( &gf );
          imp3 = lame_encode_buffer_int( &gf, Buffer[0], Buffer[1], iread, mp3buffer, 0x24000 );
          if ( imp3 < 0 )
          {
            if ( imp3 == -1 )
              error_printf( "mp3 buffer is not big enough... \n" );
            else
              error_printf( "mp3 internal error:  error code=%i\n", imp3 );
          }
          else
          {
            owrite = fwrite( mp3buffer, 1, imp3, outf );
            if ( owrite != imp3 )
            {
              error_printf( "Error writing mp3 output \n" );
            }
          }
        }
        if ( flush_write == 1 )
          fflush( outf );
      }
      while ( iread > 0 );
      if ( nogap )
      {
        imp3 = lame_encode_flush_nogap( &gf, mp3buffer, 0x24000 );
      }
      else
      {
        imp3 = lame_encode_flush( &gf, mp3buffer, 0x24000 );
      }
      if ( imp3 < 0 )
      {
        if ( imp3 == -1 )
          error_printf( "mp3 buffer is not big enough... \n" );
        else
          error_printf( "mp3 internal error:  error code=%i\n", imp3 );
      }
      else
      {
        encoder_progress_end( &gf );
        owrite = fwrite( mp3buffer, 1, imp3, outf );
        if ( owrite != imp3 )
        {
          error_printf( "Error writing mp3 output \n" );
        }
        else
        {
          if ( flush_write == 1 )
            fflush( outf );
          imp3 = lame_get_id3v1_tag( &gf, mp3buffer, 0x24000 );
          if ( imp3 > 0x24000 )
            error_printf( "Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n", 147456, imp3 );
          else
          if ( imp3 > 0 )
          {
            owrite = fwrite( mp3buffer, 1, imp3, outf );
            if ( owrite != imp3 )
            {
              error_printf( "Error writing ID3v1 tag \n" );
            }
            else
            if ( flush_write == 1 )
              fflush( outf );
          }
          if ( silent <= 0 )
            print_lame_tag_leading_info( &gf );
          if ( fseek( outf, &id3v2_size, 0 ) )
            error_printf( "fatal error: can't update LAME-tag frame!\n" );
          else
            write_xing_frame( &gf, outf );
          if ( silent <= 0 )
            print_trailing_info( &gf );
        }
      }
    }
  }
  return 0;
}
void brhist_init_package( lame_global_flags *gf )
{
  if ( brhist )
  {
    if ( brhist_init( &gf, lame_get_VBR_min_bitrate_kbps( &gf ), lame_get_VBR_max_bitrate_kbps( &gf ) ) )
    {
      brhist = 0;
    }
  }
  else
  {
    brhist_init( &gf, 128, 128 );
  }
  return;
}
void parse_nogap_filenames( int nogapout, char *inPath, char *outPath, char *outdir )
{
  char *slasher;
  size_t n;
  strcpy( outPath, outdir );
  if ( nogapout == 0 )
  {
    strncpy( outPath, inPath, 4093 );
    n = strlen( outPath );
    if ( outPath[ n + -3 ] == 'w' && outPath[ n + -2 ] == 'a' && outPath[ n + -1 ] == 'v' && outPath[ n + -4 ] == '.' )
    {
      outPath[ n + -3 ] = 'm';
      outPath[ n + -2 ] = 'p';
      outPath[ n + -1 ] = '3';
    }
    else
    {
      outPath[ n ] = '.';
      outPath[ n + 1 ] = 'm';
      outPath[ n + 2 ] = 'p';
      outPath[ n + 3 ] = '3';
      outPath[ n + 4 ] = 0;
    }
  }
  else
  {
    slasher = inPath;
    slasher += 4093;
    for ( ; slasher[0] != '/' && slasher[0] != '\\' && slasher != inPath && slasher[0] != ':';  )
    {
      slasher = &slasher[ -1 ];
    }
    if ( slasher != inPath && ( *(char*)(outPath + strlen( outPath ) + -1) == '/' || *(char*)(outPath + strlen( outPath ) + -1) == '\\' || *(char*)(outPath + strlen( outPath ) + -1) == ':' ) )
      slasher++;
    else
    if ( slasher == inPath && *(char*)(outPath + strlen( outPath ) + -1) != '/' && *(char*)(outPath + strlen( outPath ) + -1) != '\\' && *(char*)(outPath + strlen( outPath ) + -1) != ':' )
      strcat( outPath, "/" );
    strncat( outPath, slasher, 4093 );
    n = strlen( outPath );
    if ( outPath[ n + -3 ] == 'w' && outPath[ n + -2 ] == 'a' && outPath[ n + -1 ] == 'v' && outPath[ n + -4 ] == '.' )
    {
      outPath[ n + -3 ] = 'm';
      outPath[ n + -2 ] = 'p';
      outPath[ n + -1 ] = '3';
    }
    else
    {
      outPath[ n ] = '.';
      outPath[ n + 1 ] = 'm';
      outPath[ n + 2 ] = 'p';
      outPath[ n + 3 ] = '3';
      outPath[ n + 4 ] = 0;
    }
  }
  return;
}
int main( int argc, char **argv )
{
  int eax;
  double fp7;
  int ret;
  lame_global_flags *gf;
  char outPath[4097];
  char nogapdir[4097];
  char inPath[4097];
  int enc_delay = -1;
  int enc_padding = -1;
  int nogapout = 0;
  int max_nogap = 200;
  char nogap_inPath_[200][4097] = { };
  char *nogap_inPath[200];
  int i = 0;
  FILE *outf;
  for ( ; i <= 199; i++ )
  {
    nogap_inPath[ i ] = nogap_inPath_[ i ];
    // i++;
  }
  memset( inPath, 0, 4097 );
  frontend_open_console( );
  input_format = sf_unknown;
  gf = lame_init( );
  if ( gf == 0 )
  {
    error_printf( "fatal error during initialization\n" );
    frontend_close_console( );
  }
  else
  {
    lame_set_errorf( &gf, &frontend_errorf );
    lame_set_debugf( &gf, &frontend_debugf );
    lame_set_msgf( &gf, &frontend_msgf );
    if ( argc <= 1 )
    {
      usage( stderr, argv[0] );
      lame_close( &gf );
      frontend_close_console( );
    }
    else
    {
      parse_args_from_string( &gf, getenv( "LAMEOPT" ), inPath, outPath );
      ret = parse_args( &gf, argc, argv, inPath, outPath, nogap_inPath, &max_nogap );
      if ( ret < 0 )
      {
        lame_close( &gf );
        frontend_close_console( );
      }
      else
      {
        if ( ( 0.000000000000 < update_interval ) & 255 )
          update_interval = 2.000000000000;
        if ( outPath[0] && max_nogap > 0 )
        {
          strncpy( nogapdir, outPath, 4097 );
          nogapout = 1;
        }
        if ( max_nogap > 0 )
        {
          parse_nogap_filenames( nogapout, nogap_inPath[0], outPath, nogapdir );
          outf = init_files( &gf, nogap_inPath[0], outPath, &enc_delay, &enc_padding );
        }
        else
        {
          outf = init_files( &gf, inPath, outPath, &enc_delay, &enc_padding );
        }
        if ( outf == 0 )
        {
          lame_close( &gf );
          frontend_close_console( );
        }
        else
        {
          lame_set_write_id3tag_automatic( &gf, 0 );
          i = lame_init_params( &gf );
          if ( i < 0 )
          {
            if ( i == -1 )
              display_bitrates( stderr );
            error_printf( "fatal error during initialization\n" );
            lame_close( &gf );
            frontend_close_console( );
          }
          else
          {
            if ( silent > 0 )
              brhist = 0;
            if ( lame_get_decode_only( &gf ) )
            {
              if ( mp3_delay_set )
                lame_decoder( &gf, outf, mp3_delay, inPath, outPath, &enc_delay, &enc_padding );
              else
                lame_decoder( &gf, outf, 0, inPath, outPath, &enc_delay, &enc_padding );
            }
            else
            if ( max_nogap > 0 )
            {
              i = 0;
              for ( ; i < max_nogap;  )
              {
                int use_flush_nogap = i != max_nogap + -1;
                if ( i > 0 )
                {
                  parse_nogap_filenames( nogapout, nogap_inPath[ i ], outPath, nogapdir );
                  outf = init_files( &gf, nogap_inPath[ i ], outPath, &enc_delay, &enc_padding );
                  lame_init_bitstream( &gf );
                }
                brhist_init_package( &gf );
                lame_set_nogap_total( &gf, max_nogap );
                lame_set_nogap_currentindex( &gf, i );
                ret = lame_encoder( &gf, outf, use_flush_nogap, nogap_inPath[ i ], outPath );
                fclose( outf );
                close_infile( );
                i++;
              }
            }
            else
            {
              brhist_init_package( &gf );
              ret = lame_encoder( &gf, outf, 0, inPath, outPath );
              fclose( outf );
              close_infile( );
            }
            lame_close( &gf );
            frontend_close_console( );
          }
        }
      }
    }
  }
  return ret;
}
#if 0
#endif
