#include "get_audio.c.h"
static get_audio_global_data global;
static int IFF_ID_FORM;
static int IFF_ID_AIFF;
static int IFF_ID_AIFC;
static int IFF_ID_COMM;
static int IFF_ID_SSND;
static int IFF_ID_MPEG;
static int IFF_ID_NONE;
static int IFF_ID_2CBE;
static int IFF_ID_2CLE;
static int WAV_ID_RIFF;
static int WAV_ID_WAVE;
static int WAV_ID_FMT;
static int WAV_ID_DATA;
static short WAVE_FORMAT_PCM;
static short WAVE_FORMAT_EXTENSIBLE;
size_t min_size_t( size_t a, size_t b )
{
  int eax;
  return max( b, a );
}
enum ByteOrder  machine_byte_order( void )
{
  long one = 1;
  return one/*.1_1of4*/ == 0;
}
int fskip( FILE *fp, long offset, int whence )
{
  char buffer[4096];
{
  int fd = fileno( fp );
  struct stat file_stat;
  if ( fstat64( fd, &file_stat.st_dev ) == 0 && ( file_stat.st_mode & 61440 ) == 4096 )
  {
    if ( whence != 1 || offset < 0 )
    {
    }
    else
    for ( ; offset > 0;  )
    {
      size_t bytes_to_skip = min_size_t( 4096, offset );
      size_t read = fread( buffer, 1, bytes_to_skip, fp );
      if ( read == 0 )
      {
      }
      else
      {
        offset -= (int)read;
      }
    }
  }
  else
  {
    if ( fseek( fp, &offset, whence ) == 0 )
    {
    }
    else
    if ( whence != 1 || offset < 0 )
    {
      if ( silent <= 9 )
        error_printf( "fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute &lt;stderr&gt;.\n" );
    }
    else
    for ( ; offset > 0;  )
    {
      size_t bytes_to_skip = min_size_t( 4096, offset );
      size_t read = fread( buffer, 1, bytes_to_skip, fp );
      if ( read == 0 )
      {
      }
      else
      {
        offset -= (int)read;
      }
    }
  }
  return 0;
}
}
FILE *init_outfile( char *outPath, int decode )
{
  FILE *outf;
  if ( strcmp( outPath, ebp_36 ) == 0 )
  {
    outf = stdout;
    lame_set_stream_binary_mode( outf );
  }
  else
  {
    outf = fopen64( outPath, "w+b" );
    return outf;
  }
  return outf;
}
void init_infile( lame_global_flags *gfp, char *inPath, int *enc_delay, int *enc_padding )
{
  global.count_samples_carefully = 0;
  global.num_samples_read = 0;
  global.pcmbitwidth = in_bitwidth;
  global.pcmswapbytes = swapbytes;
  global.pcm_is_unsigned_8bit = in_signed != 1;
  global.musicin = OpenSndFile( &gfp, inPath, enc_delay, enc_padding );
  return;
}
void close_infile( void )
{
  CloseSndFile( input_format, global.musicin );
  return;
}
void SwapBytesInWords( short *ptr, int short_words )
{
  unsigned long val;
  unsigned long *p = (unsigned long*)ptr;
  for ( ; short_words > 1; p++ )
  {
    val = p[0];
    p[0] = ( ( val << 8 ) & -16711936 ) | ( ( val >> 8 ) & 0xff00ff );
    short_words += -2;
    // p++;
  }
  ptr = (short*)p;
  for ( ; short_words > 0; ptr++ )
  {
    val = ptr[0];
    ptr[0] = ( (unsigned short)( val >> 8 ) & 255 ) | ( val << 8 );
    short_words += -1;
    // ptr++;
  }
  return;
}
int get_audio( lame_global_flags *gfp, int (*buffer)[1152] )
{
  return get_audio_common( &gfp, buffer, ebp_16 );
}
int get_audio16( lame_global_flags *gfp, short (*buffer)[1152] )
{
  return get_audio_common( &gfp, 0, buffer );
}
int get_audio_common( lame_global_flags *gfp, int (*buffer)[1152], short (*buffer16)[1152] )
{
  int eax;
  int num_channels = lame_get_num_channels( &gfp );
  int insamp[2304];
  short buf_tmp16[2][1152];
  int samples_read;
  int framesize = lame_get_framesize( &gfp );
  int samples_to_read = framesize;
  unsigned int remaining, tmp_num_samples = lame_get_num_samples( &gfp );
  int i;
  int *p;
  if ( global.count_samples_carefully )
  {
    remaining = tmp_num_samples - ( global.num_samples_read <= tmp_num_samples ? tmp_num_samples : global.num_samples_read );
    if ( remaining < framesize && tmp_num_samples )
      samples_to_read = remaining;
  }
  if ( is_mpeg_file_format( input_format ) )
  {
    if ( buffer[0][0] )
    {
      samples_read = read_samples_mp3( &gfp, global.musicin, buf_tmp16 );
    }
    else
    {
      samples_read = read_samples_mp3( &gfp, global.musicin, buffer16 );
    }
    if ( samples_read < 0 )
    {
      return samples_read;
    }
  }
  else
  {
    samples_read = read_samples_pcm( global.musicin, insamp, samples_to_read * num_channels );
    if ( samples_read < 0 )
    {
      return samples_read;
    }
    p = &insamp[ samples_read ];
    samples_read /= num_channels;
    if ( buffer[0][0] )
    {
      if ( num_channels == 2 )
      {
        i = samples_read;
        while ( i += -1, i >= 0 )
        {
          p = &p[ -1 ];
          buffer[1][ i ] = p[0];
          p = &p[ -1 ];
          buffer[0][ i ] = p[0];
        }
      }
      else
      if ( num_channels == 1 )
      {
        memset( buffer[1], 0, samples_read << 2 );
        i = samples_read;
        while ( i += -1, i >= 0 )
        {
          p = &p[ -1 ];
          buffer[0][ i ] = p[0];
        }
      }
    }
    else
    if ( num_channels == 2 )
    {
      i = samples_read;
      while ( i += -1, i >= 0 )
      {
        p = &p[ -1 ];
        buffer16[1][ i ] = p[0] >> 16;
        p = &p[ -1 ];
        buffer16[0][ i ] = p[0] >> 16;
      }
    }
    else
    if ( num_channels == 1 )
    {
      memset( buffer16[1], 0, samples_read * 2 );
      i = samples_read;
      while ( i += -1, i >= 0 )
      {
        p = &p[ -1 ];
        buffer16[0][ i ] = p[0] >> 16;
      }
    }
  }
  if ( is_mpeg_file_format( input_format ) && buffer )
  {
    i = samples_read;
    while ( i += -1, i >= 0 )
    {
      buffer[0][ i ] = buf_tmp16[0][ i ] << 16;
    }
    if ( num_channels == 2 )
    {
      i = samples_read;
      while ( i += -1, i >= 0 )
      {
        buffer[1][ i ] = buf_tmp16[0][ i + 1152 ] << 16;
      }
    }
    else
    if ( num_channels == 1 )
      memset( buffer[1], 0, samples_read << 2 );
  }
  if ( tmp_num_samples != -1 )
    global.num_samples_read += samples_read;
  return samples_read;
}
int read_samples_mp3( lame_global_flags *gfp, FILE *musicin, short (*mpg123pcm)[1152] )
{
  int eax;
  static char type_name[9] = { 'M', 'P', '3', ' ', 'f', 'i', 'l', 'e' };
  int out = lame_decode_fromfile( musicin, (int)( mpg123pcm[0] ), mpg123pcm[1], &mp3input_data );
  if ( out < 0 )
  {
    memset( (int)( mpg123pcm[0] ), 0, 4608 );
  }
  if ( mp3input_data.stereo != lame_get_num_channels( &gfp ) )
  {
    if ( silent <= 9 )
      error_printf( "Error: number of channels has changed in %s - not supported\n", type_name[0] );
    out = -1;
  }
  if ( mp3input_data.samplerate != lame_get_in_samplerate( &gfp ) )
  {
    if ( silent <= 9 )
      error_printf( "Error: sample frequency has changed in %s - not supported\n", type_name[0] );
    out = -1;
  }
  return out;
}
int WriteWaveHeader( FILE *fp, int pcmbytes, int freq, int channels, int bits )
{
  int bytes = ( bits + 7 < 0 ? bits + 7 : bits + 14 ) >> 3;
  fwrite( "RIFF", 1, 4, fp );
  Write32BitsLowHigh( fp, pcmbytes + 36 );
  fwrite( "WAVEfmt ", 2, 4, fp );
  Write32BitsLowHigh( fp, 16 );
  Write16BitsLowHigh( fp, 1 );
  Write16BitsLowHigh( fp, channels );
  Write32BitsLowHigh( fp, freq );
  Write32BitsLowHigh( fp, bytes * freq * channels );
  Write16BitsLowHigh( fp, channels * bytes );
  Write16BitsLowHigh( fp, bits );
  fwrite( "data", 1, 4, fp );
  Write32BitsLowHigh( fp, pcmbytes );
  return 0;
}
int unpack_read_samples( int samples_to_read, int bytes_per_sample, int swap_order, int *sample_buffer, FILE *pcm_in )
{
  size_t samples_read;
  int i;
  int *op;
  unsigned char *ip = (unsigned char*)sample_buffer;
  int b = 32;
  samples_read = fread( sample_buffer, bytes_per_sample, samples_to_read, pcm_in );
  op = &sample_buffer[ samples_read ];
  if ( swap_order == 0 )
  {
    if ( bytes_per_sample == 1 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ip[ i ] << ( b + -8 );
      }
    }
    if ( bytes_per_sample == 2 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ip[ i ] << ( b + -16 ) ) | ( ip[ i + 1 ] << ( b + -8 ) );
      }
    }
    if ( bytes_per_sample == 3 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ip[ i ] << ( b + -24 ) ) | ( ip[ i + 1 ] << ( b + -16 ) ) | ( ip[ i + 2 ] << ( b + -8 ) );
      }
    }
    if ( bytes_per_sample == 4 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ip[ i ] << ( b + -32 ) ) | ( ip[ i + 1 ] << ( b + -24 ) ) | ( ip[ i + 2 ] << ( b + -16 ) ) | ( ip[ i + 3 ] << ( b + -8 ) );
      }
    }
  }
  else
  {
    if ( bytes_per_sample == 1 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ( ip[ i ] ^ -128 ) << ( b + -8 ) ) | ( 127 << ( b + -16 ) );
      }
    }
    if ( bytes_per_sample == 2 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ip[ i ] << ( b + -8 ) ) | ( ip[ i + 1 ] << ( b + -16 ) );
      }
    }
    if ( bytes_per_sample == 3 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ip[ i ] << ( b + -8 ) ) | ( ip[ i + 1 ] << ( b + -16 ) ) | ( ip[ i + 2 ] << ( b + -24 ) );
      }
    }
    if ( bytes_per_sample == 4 )
    {
      i = samples_read * bytes_per_sample;
      while ( i -= bytes_per_sample, i >= 0 )
      {
        op = &op[ -1 ];
        op[0] = ( ip[ i ] << ( b + -8 ) ) | ( ip[ i + 1 ] << ( b + -16 ) ) | ( ip[ i + 2 ] << ( b + -24 ) ) | ( ip[ i + 3 ] << ( b + -32 ) );
      }
    }
  }
  return (int)samples_read;
}
int read_samples_pcm( FILE *musicin, int *sample_buffer, int samples_to_read )
{
  int samples_read;
  int swap_byte_order;
  switch ( global.pcmbitwidth )
  {
  case 16:
  case 24:
  case 32:
    if ( in_signed == 0 )
    {
      error_printf( "Unsigned input only supported with bitwidth 8\n" );
      exit( 1 );
    }
    swap_byte_order = in_endian != ByteOrderLittleEndian;
    if ( global.pcmswapbytes )
      swap_byte_order = swap_byte_order == 0;
    samples_read = unpack_read_samples( samples_to_read, ( global.pcmbitwidth < 0 ? global.pcmbitwidth : global.pcmbitwidth + 7 ) >> 3, swap_byte_order, sample_buffer, musicin );
    break;
  case 8:
    samples_read = unpack_read_samples( samples_to_read, 1, global.pcm_is_unsigned_8bit, sample_buffer, musicin );
    break;
  default:
    if ( silent <= 9 )
      error_printf( "Only 8, 16, 24 and 32 bit input files supported \n" );
    exit( 1 );
    break;
  }
  if ( ferror( musicin ) == 0 )
  {
    return samples_read;
  }
  if ( silent <= 9 )
    error_printf( "Error reading input file\n" );
  exit( 1 );
}
int parse_wave_header( lame_global_flags *gfp, FILE *sf )
{
  int format_tag = 0;
  int channels = 0;
  int block_align = 0;
  int bits_per_sample = 0;
  int samples_per_sec = 0;
  int avg_bytes_per_sec = 0;
  int is_wav = 0;
  long data_length = 0, file_length, subSize = 0;
  int loop_sanity = 0;
  file_length = Read32BitsHighLow( sf );
  if ( Read32BitsHighLow( sf ) != 1463899717 )
  {
  }
  loop_sanity = 0;
  for ( ; loop_sanity <= 19;  )
  {
    int type = Read32BitsHighLow( sf );
    if ( type == 1718449184 )
    {
      subSize = Read32Bits( sf );
      if ( subSize <= 15 )
      {
        break;
      }
      format_tag = Read16BitsLowHigh( sf );
      subSize += -2;
      channels = Read16BitsLowHigh( sf );
      subSize += -2;
      samples_per_sec = Read32Bits( sf );
      subSize += -4;
      avg_bytes_per_sec = Read32Bits( sf );
      subSize += -4;
      block_align = Read16BitsLowHigh( sf );
      subSize += -2;
      bits_per_sample = Read16BitsLowHigh( sf );
      subSize += -2;
      if ( subSize > 9 && format_tag == -2 )
      {
        Read16BitsLowHigh( sf );
        Read16BitsLowHigh( sf );
        Read32Bits( sf );
        format_tag = Read16BitsLowHigh( sf );
        subSize += -10;
      }
      if ( subSize > 0 && fskip( sf, subSize, 1 ) )
      {
        break;
      }
    }
    else
    {
      if ( type == 1684108385 )
      {
        data_length = subSize = Read32Bits( sf );
        is_wav = 1;
        break;
      }
      else
      {
        subSize = Read32Bits( sf );
        if ( fskip( sf, subSize, 1 ) )
        {
          break;
        }
      }
    }
    loop_sanity++;
  }
  if ( is_wav == 0 )
  {
  }
  if ( format_tag != 1 )
  {
    if ( silent <= 9 )
      error_printf( "Unsupported data format: 0x%04X\n", format_tag );
  }
  else
  {
    if ( lame_set_num_channels( &gfp, channels ) == -1 )
    {
      if ( silent <= 9 )
        error_printf( "Unsupported number of channels: %u\n", channels );
    }
    else
    {
      lame_set_in_samplerate( &gfp, samples_per_sec );
      global.pcmbitwidth = bits_per_sample;
      global.pcm_is_unsigned_8bit = 1;
      lame_set_num_samples( &gfp, data_length / ( channels * ( ( bits_per_sample + 7 < 0 ? bits_per_sample + 7 : bits_per_sample + 14 ) >> 3 ) ) );
    }
  }
  return 0;
}
int aiff_check2( IFF_AIFF *pcm_aiff_data )
{
  if ( pcm_aiff_data->sampleType != 1397968452 )
  {
    if ( silent <= 9 )
      error_printf( "ERROR: input sound data is not PCM\n" );
  }
  else
  if ( pcm_aiff_data->sampleSize + -8 > 24 || ( ( 1 << ( pcm_aiff_data->sampleSize + -8 ) ) & 0x1010101 ) == 0 )
  {
    if ( silent <= 9 )
      error_printf( "ERROR: input sound data is not 8, 16, 24 or 32 bits\n" );
  }
  else
  if ( pcm_aiff_data->numChannels != 1 && pcm_aiff_data->numChannels != 2 )
  {
    if ( silent <= 9 )
      error_printf( "ERROR: input sound data is not mono or stereo\n" );
  }
  else
  if ( pcm_aiff_data->blkAlgn.blockSize == 0 )
  {
  }
  if ( silent <= 9 )
    error_printf( "ERROR: block size of input sound data is not 0 bytes\n" );
  return 0;
}
long make_even_number_of_bytes_in_length( long x )
{
  int eax;
  return x;
}
int parse_aiff_header( lame_global_flags *gfp, FILE *sf )
{
  long chunkSize = 0, subSize = 0, typeID = 0, dataType = 0x4e4f4e45;
  IFF_AIFF aiff_info;
  int seen_comm_chunk = 0, seen_ssnd_chunk = 0;
  long pcm_data_pos = -1;
  memset( &aiff_info.numChannels, 0, 32 );
  chunkSize = Read32BitsHighLow( sf );
  typeID = Read32BitsHighLow( sf );
  if ( typeID != 1095321158 && typeID != 1095321155 )
  {
  }
  do
  {
    if ( chunkSize > 0 )
    {
      long ckSize;
      int type = Read32BitsHighLow( sf );
      chunkSize += -4;
      if ( type == 1129270605 )
      {
        seen_comm_chunk = seen_ssnd_chunk + 1;
        subSize = Read32BitsHighLow( sf );
        ckSize = make_even_number_of_bytes_in_length( subSize );
        chunkSize -= ckSize;
        aiff_info.numChannels = Read16BitsHighLow( sf );
        ckSize += -2;
        aiff_info.numSampleFrames = Read32BitsHighLow( sf );
        ckSize += -4;
        aiff_info.sampleSize = Read16BitsHighLow( sf );
        ckSize += -2;
        aiff_info.sampleRate = ReadIeeeExtendedHighLow( sf );
        ckSize += -10;
        if ( typeID == 1095321155 )
        {
          dataType = Read32BitsHighLow( sf );
          ckSize += -4;
        }
        if ( fskip( sf, ckSize, 1 ) )
        {
          break;
        }
      }
      else
      {
        if ( type == 1397968452 )
        {
          seen_ssnd_chunk = 1;
          subSize = Read32BitsHighLow( sf );
          ckSize = make_even_number_of_bytes_in_length( subSize );
          chunkSize -= ckSize;
          aiff_info.blkAlgn.offset = Read32BitsHighLow( sf );
          ckSize += -4;
          aiff_info.blkAlgn.blockSize = Read32BitsHighLow( sf );
          ckSize += -4;
          aiff_info.sampleType = 1397968452;
          if ( seen_comm_chunk > 0 )
          {
            if ( fskip( sf, aiff_info.blkAlgn.offset, 1 ) )
            {
              break;
            }
          }
          else
          {
            pcm_data_pos = ftell( sf );
            if ( pcm_data_pos >= 0 )
              pcm_data_pos += aiff_info.blkAlgn.offset;
            if ( fskip( sf, ckSize, 1 ) )
            {
              break;
            }
          }
        }
        else
        {
          subSize = Read32BitsHighLow( sf );
          ckSize = make_even_number_of_bytes_in_length( subSize );
          chunkSize -= ckSize;
        }
      }
    }
    if ( dataType == 1936684916 )
      global.pcmswapbytes = swapbytes;
    else
    if ( dataType == 1953984371 )
      global.pcmswapbytes = swapbytes == 0;
    else
    if ( dataType == 1313820229 )
      global.pcmswapbytes = swapbytes == 0;
    else
    {
      break;
    }
    if ( seen_comm_chunk && ( seen_ssnd_chunk > 0 || aiff_info.numSampleFrames == 0 ) )
    {
      if ( aiff_check2( &aiff_info ) )
      {
        break;
      }
      if ( lame_set_num_channels( &gfp, aiff_info.numChannels ) == -1 )
      {
        if ( silent <= 9 )
          error_printf( "Unsupported number of channels: %u\n", aiff_info.numChannels );
        break;
      }
      else
      {
        lame_set_in_samplerate( &gfp, (int)( aiff_info.sampleRate ) );
        lame_set_num_samples( &gfp, aiff_info.numSampleFrames );
        global.pcmbitwidth = aiff_info.sampleSize;
        global.pcm_is_unsigned_8bit = 0;
        if ( pcm_data_pos < 0 || fseek( sf, &pcm_data_pos, 0 ) == 0 )
        {
          break;
        }
        if ( silent <= 9 )
          error_printf( "Can't rewind stream to audio data position\n" );
        break;
      }
    }
    else
    {
      break;
    }
  }
  while ( fskip( sf, ckSize, 1 ) );
  return 0;
}
int parse_file_header( lame_global_flags *gfp, FILE *sf )
{
  int type = Read32BitsHighLow( sf );
  global.count_samples_carefully = 0;
  global.pcm_is_unsigned_8bit = in_signed != 1;
  if ( type == 1380533830 )
  {
    int ret = parse_wave_header( &gfp, sf );
    if ( ret > 0 )
    {
      global.count_samples_carefully = 1;
      return 3;
    }
    if ( ret < 0 && silent <= 9 )
      error_printf( "Warning: corrupt or unsupported WAVE format\n" );
  }
  else
  if ( type == 1179603533 )
  {
    int ret = parse_aiff_header( &gfp, sf );
    if ( ret > 0 )
    {
      global.count_samples_carefully = 1;
      return 3;
    }
    if ( ret < 0 && silent <= 9 )
      error_printf( "Warning: corrupt or unsupported AIFF format\n" );
  }
  else
  if ( silent <= 9 )
    error_printf( "Warning: unsupported audio format\n" );
  return 3;
}
void CloseSndFile( sound_file_format input, FILE *musicin )
{
  if ( fclose( musicin ) == 0 )
  {
    return;
  }
  if ( silent <= 9 )
    error_printf( "Could not close audio input file\n" );
  exit( 2 );
}
FILE *OpenSndFile( lame_global_flags *gfp, char *inPath, int *enc_delay, int *enc_padding )
{
  int edx;
  double fp7;
  FILE *musicin;
  lame_set_num_samples( &gfp, ebp_68 );
  if ( strcmp( inPath, "-" ) == 0 )
  {
    musicin = stdin;
    lame_set_stream_binary_mode( musicin );
  }
  else
  {
    musicin = fopen64( inPath, "rb" );
    if ( musicin == 0 )
    {
      if ( silent <= 9 )
        error_printf( "Could not find \"%s\".\n", inPath );
      exit( 1 );
    }
  }
  if ( is_mpeg_file_format( input_format ) )
  {
    if ( lame_decode_initfile( musicin, &mp3input_data, enc_delay, enc_padding ) == -1 )
    {
      if ( silent <= 9 )
        error_printf( "Error reading headers in mp3 input file %s.\n", inPath );
      exit( 1 );
    }
    else
    {
      if ( lame_set_num_channels( &gfp, mp3input_data.stereo ) == -1 )
      {
        if ( silent <= 9 )
          error_printf( "Unsupported number of channels: %ud\n", mp3input_data.stereo );
        exit( 1 );
      }
      else
      {
        lame_set_in_samplerate( &gfp, mp3input_data.samplerate );
        lame_set_num_samples( &gfp, mp3input_data.nsamp );
      }
    }
  }
  else
  if ( input_format == sf_ogg )
  {
    if ( silent <= 9 )
      error_printf( "sorry, vorbis support in LAME is deprecated.\n" );
    exit( 1 );
  }
  else
  {
    if ( input_format == sf_raw )
    {
      if ( silent <= 9 )
      {
        console_printf( "Assuming raw pcm input file" );
        if ( swapbytes )
          console_printf( " : Forcing byte-swapping\n" );
        else
          console_printf( "\n" );
      }
      global.pcmswapbytes = swapbytes;
    }
    else
    {
      input_format = parse_file_header( &gfp, musicin );
    }
  }
  if ( input_format == sf_unknown )
  {
    exit( 1 );
  }
  if ( lame_get_num_samples( &gfp ) == -1 && stdin != musicin )
  {
    double flen = (double)( lame_get_file_size( inPath ) );
    if ( ( flen >= 0.000000000000 ) & 255 )
    {
      if ( is_mpeg_file_format( input_format ) == 0 )
      {
        lame_set_num_samples( &gfp, (long long)( flen / (double)( lame_get_num_channels( &gfp ) * 2 ) ) );
      }
      if ( mp3input_data.bitrate > 0 )
      {
        double totalseconds = ( flen * 8.000000000000 ) / ( (double)( mp3input_data.bitrate ) * 1000.000000000000 );
        unsigned long tmp_num_samples = (long long)( totalseconds * (double)( lame_get_in_samplerate( &gfp ) ) );
        lame_set_num_samples( &gfp, tmp_num_samples );
        mp3input_data.nsamp = tmp_num_samples;
      }
    }
  }
  return musicin;
}
int check_aid( unsigned char *header )
{
  return memcmp( header, ebp_20, ebp_20 ) == 0;
}
int is_syncword_mp123( void *headerptr )
{
  static char abl2[16] = { 0, 7, 7, 7, 0, 7, 0, 0, 0, 0, 0, 8, 8, 8, 8, 8 };
  unsigned char *p = (unsigned char*)headerptr;
  if ( p[0] != -1 )
  {
  }
  if ( ( p[1] & 224 ) != 224 )
  {
  }
  if ( ( p[1] & 24 ) == 8 )
  {
  }
  switch ( p[1] & 6 )
  {
  default:
    break;
  case 2:
    if ( input_format != sf_mp3 && input_format != sf_mp123 )
    {
    }
    input_format = sf_mp3;
    break;
  case 4:
    if ( input_format != sf_mp2 && input_format != sf_mp123 )
    {
    }
    input_format = sf_mp2;
    break;
  case 6:
    if ( input_format != sf_mp1 && input_format != sf_mp123 )
    {
    }
    input_format = sf_mp1;
    break;
  }
  if ( ( p[1] & 6 ) == 0 )
  {
  }
  if ( ( p[2] & 240 ) == 240 )
  {
  }
  if ( ( p[2] & 12 ) == 12 )
  {
  }
  if ( ( p[1] & 24 ) == 24 && ( p[1] & 6 ) == 4 && ( ( abl2[ p[2] >> 4 ] >> (unsigned char)( p[3] >> 6 ) ) & 1 ) )
  {
  }
  if ( ( __MOD(p[3],4) ) == 2 )
  {
  }
  return 1;
}
int lame_decode_initfile( FILE *fd, mp3data_struct *mp3data, int *enc_delay, int *enc_padding )
{
  unsigned char buf[100];
  int ret;
  size_t len;
  int aid_header;
  short pcm_l[1152], pcm_r[1152];
  int freeformat = 0;
  memset( mp3data, 0, 40 );
  if ( global.hip )
    hip_decode_exit( &global.hip );
  global.hip = hip_decode_init( );
  len = 4;
  if ( len != fread( buf, 1, len, fd ) )
  {
  }
  else
  {
    if ( buf[0] == 'I' && buf[1] == 'D' && buf[2] == '3' )
    {
      if ( silent <= 9 )
        console_printf( "ID3v2 found. Be aware that the ID3 tag is currently lost when transcoding.\n" );
      len = 6;
      if ( len != fread( buf, 1, len, fd ) )
      {
      }
      else
      {
        buf[2] = buf[2] & 127;
        buf[3] = buf[3] & 127;
        buf[4] = buf[4] & 127;
        buf[5] = buf[5] & 127;
        len = ( ( ( ( ( buf[2] << 7 ) + buf[3] ) << 7 ) + buf[4] ) << 7 ) + buf[5];
        fskip( fd, len, 1 );
        len = 4;
        if ( len != fread( buf, 1, len, fd ) )
        {
        }
      }
    }
    aid_header = check_aid( buf );
    if ( aid_header )
    {
      if ( fread( buf, 1, 2, fd ) != 2 )
      {
      }
      else
      {
        aid_header = buf[0] + ( buf[1] << 8 );
        if ( silent <= 9 )
          console_printf( "Album ID found.  length=%i \n", aid_header );
        fskip( fd, aid_header + -6, 1 );
        if ( len != fread( buf, 1, len, fd ) )
        {
        }
      }
    }
    len = 4;
    do
    {
      if ( is_syncword_mp123( buf ) == 0 )
      {
        unsigned int i = 0;
        for ( ; i < len + -1; i++ )
        {
          buf[ i ] = buf[ i + 1 ];
          // i++;
        }
      }
      else
      {
        if ( ( buf[2] & 240 ) == 0 )
        {
          if ( silent <= 9 )
            console_printf( "Input file is freeformat.\n" );
          freeformat = 1;
        }
        ret = hip_decode1_headersB( &global.hip, buf, len, pcm_l, pcm_r, mp3data, enc_delay, enc_padding );
        if ( ret == -1 )
        {
        }
        else
        {
          do
          {
            if ( mp3data->header_parsed == 0 )
            {
              len = fread( buf, 1, 100, fd );
              if ( len != 100 )
              {
              }
              else
              {
                ret = hip_decode1_headersB( &global.hip, buf, len, pcm_l, pcm_r, mp3data, enc_delay, enc_padding );
              }
            }
            else
            {
              if ( mp3data->bitrate == 0 && freeformat == 0 )
              {
                if ( silent <= 9 )
                  error_printf( "fail to sync...\n" );
                lame_decode_initfile( fd, mp3data, enc_delay, enc_padding );
              }
              else
              {
                if ( mp3data->totalframes <= 0 )
                  mp3data->nsamp = -1;
              }
            }
          }
          while ( ret != -1 );
        }
      }
    }
    while ( fread( &buf[ len + -1 ], 1, 1, fd ) != 1 );
  }
  return 0;
}
int lame_decode_fromfile( FILE *fd, short *pcm_l, short *pcm_r, mp3data_struct *mp3data )
{
  int eax;
  int ret = 0;
  size_t len = 0;
  unsigned char buf[1024];
  ret = hip_decode1_headers( &global.hip, buf, len, pcm_l, pcm_r, mp3data );
  if ( ret )
  {
  }
  else
  {
    do
    {
      len = fread( buf, 1, 1024, fd );
      if ( len == 0 )
      {
        ret = hip_decode1_headers( &global.hip, buf, len, pcm_l, pcm_r, mp3data );
        if ( ret <= 0 )
        {
          hip_decode_exit( &global.hip );
          global.hip = 0;
        }
        else
        {
        }
      }
      else
      {
        ret = hip_decode1_headers( &global.hip, buf, len, pcm_l, pcm_r, mp3data );
        if ( ret == -1 )
        {
          hip_decode_exit( &global.hip );
          global.hip = 0;
        }
        else
      }
    }
    while ( ret > 0 );
  }
  return -1;
}
int is_mpeg_file_format( int input_file_format )
{
  switch ( input_file_format )
  {
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  default:
    break;
  }
  return -1;
}
#if 0
#endif
