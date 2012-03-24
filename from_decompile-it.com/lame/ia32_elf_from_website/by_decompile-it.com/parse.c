#include "parse.c.h"
sound_file_format input_format;
int swapbytes;
int silent;
int ignore_tag_errors;
int brhist;
float update_interval;
int mp3_delay;
int mp3_delay_set;
int disable_wav_header;
mp3data_struct mp3input_data;
int print_clipping_info;
int in_signed;
enum ByteOrder  in_endian;
int in_bitwidth;
int flush_write;
int set_id3tag( lame_global_flags *gfp, int type, char *str )
{
  switch ( type + -97 )
  {
  case 0:
    id3tag_set_artist( &gfp, str );
    break;
  case 19:
    id3tag_set_title( &gfp, str );
    break;
  case 11:
    id3tag_set_album( &gfp, str );
    break;
  case 6:
    id3tag_set_genre( &gfp, str );
    break;
  case 2:
    id3tag_set_comment( &gfp, str );
    break;
  case 13:
    id3tag_set_track( &gfp, str );
    break;
  case 24:
    id3tag_set_year( &gfp, str );
    break;
  case 21:
    id3tag_set_fieldvalue( &gfp, str );
    break;
  default:
    break;
  }
  return 0;
}
int id3_tag( lame_global_flags *gfp, int type, TextEncoding enc, char *str )
{
  void *x = 0;
  int result;
  x = (void*)strdup( str );
  result = set_id3tag( &gfp, type, (char*)x );
  free( x );
  return result;
}
int lame_version_print( FILE *fp )
{
  char *b = get_lame_os_bitness( );
  char *v = get_lame_version( );
  char *u = get_lame_url( );
  size_t lenb = strlen( b );
  size_t lenv = strlen( v );
  size_t lenu = strlen( u );
  size_t lw = 80;
  size_t sw = 16;
  if ( sw + lenu + lenv + lenb <= lw || lw < lenu + 2 )
  {
    if ( lenb )
    {
      fprintf( fp, "LAME %s version %s (%s)\n\n", b, v, u );
    }
    fprintf( fp, "LAME version %s (%s)\n\n", v, u );
  }
  else
  if ( lenb )
  {
    fprintf( fp, "LAME %s version %s\n%*s(%s)\n\n", b, v, ( lw - lenu ) + -2, "", u );
  }
  fprintf( fp, "LAME version %s\n%*s(%s)\n\n", v, ( lw - lenu ) + -2, "", u );
  return 0;
}
int print_license( FILE *fp )
{
  lame_version_print( fp );
  fwrite( "Can I use LAME in my commercial program?\n\nYes, you can, under the restrictions of the LGPL.  In particular, you\ncan include a compiled version of the LAME library (for example,\nlame.dll) with a commercial program.  Some notable requirements of\nthe LGPL:\n\n", 1, 255, fp );
  fwrite( "1. In your program, you cannot include any source code from LAME, with\n   the exception of files whose only purpose is to describe the library\n   interface (such as lame.h).\n\n", 1, 175, fp );
  fwrite( "2. Any modifications of LAME must be released under the LGPL.\n   The LAME project (www.mp3dev.org) would appreciate being\n   notified of any modifications.\n\n", 1, 157, fp );
  fwrite( "3. You must give prominent notice that your program is:\n      A. using LAME (including version number)\n      B. LAME is under the LGPL\n      C. Provide a copy of the LGPL.  (the file COPYING contains the LGPL)\n      D. Provide a copy of LAME source, or a pointer where the LAME\n         source can be obtained (such as www.mp3dev.org)\n   An example of prominent notice would be an \"About the LAME encoding engine\"\n   button in some pull down menu within the executable of your program.\n\n", 1, 487, fp );
  fwrite( "4. If you determine that distribution of LAME requires a patent license,\n   you must obtain such license.\n\n\n", 1, 108, fp );
  fwrite( "*** IMPORTANT NOTE ***\n\nThe decoding functions provided in LAME use the mpglib decoding engine which\nis under the GPL.  They may not be used by any program not released under the\nGPL unless you obtain such permission from the MPG123 project (www.mpg123.de).\n\n", 1, 259, fp );
  return 0;
}
int usage( FILE *fp, char *ProgramName )
{
  lame_version_print( fp );
  fprintf( fp, "usage: %s [options] &lt;infile&gt; [outfile]\n\n    &lt;infile&gt; and/or &lt;outfile&gt; can be \"-\", which means stdin/stdout.\n\nTry:\n     \"%s --help\"           for general usage information\n or:\n     \"%s --preset help\"    for information on suggested predefined settings\n or:\n     \"%s --longhelp\"\n  or \"%s -?\"              for a complete options list\n\n", ProgramName, ProgramName, ProgramName, ProgramName, ProgramName );
  return 0;
}
int short_help( lame_global_flags *gfp, FILE *fp, char *ProgramName )
{
  lame_version_print( fp );
  fprintf( fp, "usage: %s [options] &lt;infile&gt; [outfile]\n\n    &lt;infile&gt; and/or &lt;outfile&gt; can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", ProgramName );
  fprintf( fp, "OPTIONS:\n    -b bitrate      set the bitrate, default 128 kbps\n    -h              higher quality, but a little slower.  Recommended.\n    -f              fast mode (lower quality)\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n", lame_get_VBR_q( &gfp ) );
  fwrite( "    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n\n", 1, 321, fp );
  fwrite( "    --longhelp      full list of options\n\n    --license       print License information\n\n", 1, 89, fp );
  return 0;
}
void wait_for( FILE *fp, int lessmode )
{
  if ( lessmode )
  {
    fflush( fp );
    getchar( );
  }
  else
    fputc( 10, fp );
  fputc( 10, fp );
  return;
}
int long_help( lame_global_flags *gfp, FILE *fp, char *ProgramName, int lessmode )
{
  lame_version_print( fp );
  fprintf( fp, "usage: %s [options] &lt;infile&gt; [outfile]\n\n    &lt;infile&gt; and/or &lt;outfile&gt; can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n", ProgramName );
  fwrite( "OPTIONS:\n  Input options:\n    --scale &lt;arg&gt;   scale input (multiply PCM data) by &lt;arg&gt;\n    --scale-l &lt;arg&gt; scale channel 0 (left) input (multiply PCM data) by &lt;arg&gt;\n    --scale-r &lt;arg&gt; scale channel 1 (right) input (multiply PCM data) by &lt;arg&gt;\n    --mp1input      input file is a MPEG Layer I   file\n    --mp2input      input file is a MPEG Layer II  file\n    --mp3input      input file is a MPEG Layer III file\n    --nogap &lt;file1&gt; &lt;file2&gt; &lt;...&gt;\n                    gapless encoding for a set of contiguous files\n    --nogapout &lt;dir&gt;\n                    output dir for gapless encoding (must precede --nogap)\n    --nogaptags     allow the use of VBR tags in gapless encoding\n", 1, 675, fp );
  fwrite( "\n  Input options for RAW PCM:\n    -r              input is raw pcm\n    -x              force byte-swapping of input\n    -s sfreq        sampling frequency of input file (kHz) - default 44.1 kHz\n    --bitwidth w    input bit width is w (default 16)\n    --signed        input is signed (default)\n    --unsigned      input is unsigned\n    --little-endian input is little-endian (default)\n    --big-endian    input is big-endian\n", 1, 425, fp );
  wait_for( fp, lessmode );
  fwrite( "  Operational options:\n    -a              downmix from stereo to mono file for mono encoding\n    -m &lt;mode&gt;       (j)oint, (s)imple, (f)orce, (d)dual-mono, (m)ono\n                    default is (j) or (s) depending on bitrate\n                    joint  = joins the best possible of MS and LR stereo\n                    simple = force LR stereo on all frames\n                    force  = force MS stereo on all frames.\n    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n    --comp  &lt;arg&gt;   choose bitrate to achive a compression ratio of &lt;arg&gt;\n", 1, 812, fp );
  fwrite( "    --replaygain-fast   compute RG fast but slightly inaccurately (default)\n    --replaygain-accurate   compute RG more accurately and find the peak sample\n    --noreplaygain  disable ReplayGain analysis\n    --clipdetect    enable --replaygain-accurate and print a message whether\n                    clipping occurs and how far the waveform is from full scale\n", 1, 361, fp );
  fwrite( "    --flush         flush output stream as soon as possible\n    --freeformat    produce a free format bitstream\n    --decode        input=mp3 file, output=wav\n    -t              disable writing wav header when using --decode\n", 1, 226, fp );
  wait_for( fp, lessmode );
  fwrite( "  Verbosity:\n    --disptime &lt;arg&gt;print progress report every arg seconds\n    -S              don't print progress report, VBR histograms\n    --nohist        disable VBR histogram display\n    --silent        don't print anything on screen\n    --quiet         don't print anything on screen\n    --brief         print more useful information\n    --verbose       print a lot of useful information\n\n", 1, 394, fp );
  fwrite( "  Noise shaping & psycho acoustic algorithms:\n    -q &lt;arg&gt;        &lt;arg&gt; = 0...9.  Default  -q 5 \n                    -q 0:  Highest quality, very slow \n                    -q 9:  Poor quality, but fast \n    -h              Same as -q 2.   Recommended.\n    -f              Same as -q 7.   Fast, ok quality\n", 1, 305, fp );
  wait_for( fp, lessmode );
  fwrite( "  CBR (constant bitrate, the default) options:\n    -b &lt;bitrate&gt;    set the bitrate in kbps, default 128 kbps\n    --cbr           enforce use of constant bitrate\n\n  ABR options:\n    --abr &lt;bitrate&gt; specify average bitrate desired (instead of quality)\n\n", 1, 251, fp );
  fprintf( fp, "  VBR options:\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n    -v              the same as -V 4\n    --vbr-old       use old variable bitrate (VBR) routine\n    --vbr-new       use new variable bitrate (VBR) routine (default)\n", lame_get_VBR_q( &gfp ) );
  fwrite( "    -b &lt;bitrate&gt;    specify minimum allowed bitrate, default  32 kbps\n    -B &lt;bitrate&gt;    specify maximum allowed bitrate, default 320 kbps\n    -F              strictly enforce the -b option, for use with players that\n                    do not support low bitrate mp3\n    -t              disable writing LAME Tag\n    -T              enable and force writing LAME Tag\n", 1, 368, fp );
  wait_for( fp, lessmode );
  fwrite( "  PSY related:\n", 1, 15, fp );
  fwrite( "    --temporal-masking x   x=0 disables, x=1 enables temporal masking effect\n    --nssafejoint   M/S switching criterion\n    --nsmsfix &lt;arg&gt; M/S switching tuning [effective 0-3.5]\n    --interch x     adjust inter-channel masking ratio\n    --ns-bass x     adjust masking for sfbs  0 -  6 (long)  0 -  5 (short)\n    --ns-alto x     adjust masking for sfbs  7 - 13 (long)  6 - 10 (short)\n    --ns-treble x   adjust masking for sfbs 14 - 21 (long) 11 - 12 (short)\n", 1, 460, fp );
  fwrite( "    --ns-sfb21 x    change ns-treble by x dB for sfb21\n", 1, 55, fp );
  wait_for( fp, lessmode );
  fwrite( "  experimental switches:\n    -Y              lets LAME ignore noise in sfb21, like in CBR\n", 1, 90, fp );
  wait_for( fp, lessmode );
  fwrite( "  MP3 header/stream options:\n    -e &lt;emp&gt;        de-emphasis n/5/c  (obsolete)\n    -c              mark as copyright\n    -o              mark as non-original\n    -p              error protection.  adds 16 bit checksum to every frame\n                    (the checksum is computed correctly)\n    --nores         disable the bit reservoir\n    --strictly-enforce-ISO   comply as much as possible to ISO MPEG spec\n\n", 1, 410, fp );
  fprintf( fp, "  Filter options:\n  --lowpass &lt;freq&gt;        frequency(kHz), lowpass filter cutoff above freq\n  --lowpass-width &lt;freq&gt;  frequency(kHz) - default 15%% of lowpass freq\n  --highpass &lt;freq&gt;       frequency(kHz), highpass filter cutoff below freq\n  --highpass-width &lt;freq&gt; frequency(kHz) - default 15%% of highpass freq\n" );
  fwrite( "  --resample &lt;sfreq&gt;  sampling frequency of output file(kHz)- default=automatic\n", 1, 80, fp );
  wait_for( fp, lessmode );
  fwrite( "  ID3 tag options:\n    --tt &lt;title&gt;    audio/song title (max 30 chars for version 1 tag)\n    --ta &lt;artist&gt;   audio/song artist (max 30 chars for version 1 tag)\n    --tl &lt;album&gt;    audio/song album (max 30 chars for version 1 tag)\n    --ty &lt;year&gt;     audio/song year of issue (1 to 9999)\n    --tc &lt;comment&gt;  user-defined text (max 30 chars for v1 tag, 28 for v1.1)\n    --tn &lt;track[/total]&gt;   audio/song track number and (optionally) the total\n                           number of tracks on the original recording. (track\n                           and total each 1 to 255. just the track number\n                           creates v1.1 tag, providing a total forces v2.0).\n    --tg &lt;genre&gt;    audio/song genre (name or number in list)\n    --ti &lt;file&gt;     audio/song albumArt (jpeg/png/gif file, 128KB max, v2.3)\n    --tv &lt;id=value&gt; user-defined frame specified by id and value (v2.3 tag)\n", 1, 886, fp );
  fwrite( "    --add-id3v2     force addition of version 2 tag\n    --id3v1-only    add only a version 1 tag\n    --id3v2-only    add only a version 2 tag\n    --space-id3v1   pad version 1 tag with spaces instead of nulls\n    --pad-id3v2     same as '--pad-id3v2-size 128'\n    --pad-id3v2-size &lt;value&gt; adds version 2 tag, pad with extra &lt;value&gt; bytes\n    --genre-list    print alphabetically sorted ID3 genre list and exit\n    --ignore-tag-errors  ignore errors in values passed for tags\n\n", 1, 476, fp );
  fwrite( "    Note: A version 2 tag will NOT be added unless one of the input fields\n    won't fit in a version 1 tag (e.g. the title string is longer than 30\n    characters), or the '--add-id3v2' or '--id3v2-only' options are used,\n    or output is redirected to stdout.\n\nMisc:\n    --license       print License information\n\n", 1, 316, fp );
  wait_for( fp, lessmode );
  fwrite( "  Platform specific:\n    --noasm &lt;instructions&gt; disable assembly optimizations for mmx/3dnow/sse\n", 1, 97, fp );
  wait_for( fp, lessmode );
  display_bitrates( fp );
  return 0;
}
void display_bitrate( FILE *fp, char *version, int d, int indx )
{
  int i;
  int nBitrates = 14;
  if ( d == 4 )
    nBitrates = 8;
  fprintf( fp, "\nMPEG-%-3s layer III sample frequencies (kHz):  %2d  %2d  %g\nbitrates (kbps):", version, (long long)32 / d, (long long)48 / d, 44.100000000000 / (double)( d ) );
  i = 1;
  for ( ; i <= nBitrates; i++ )
  {
    fprintf( fp, " %2i", bitrate_table[0][ i + ( indx << 4 ) ] );
    // i++;
  }
  fputc( 10, fp );
  return;
}
int display_bitrates( FILE *fp )
{
  display_bitrate( fp, ebp_20, ebp_20, ebp_16 );
  display_bitrate( fp, "2", 2, 0 );
  display_bitrate( fp, "2.5", 4, 0 );
  fputc( 10, fp );
  fflush( fp );
  return 0;
}
void presets_longinfo_dm( FILE *msgfp )
{
  fwrite( "\nThe --preset switches are aliases over LAME settings.\n\n\n", 1, 57, msgfp );
  fwrite( "To activate these presets:\n\n   For VBR modes (generally highest quality):\n\n", 1, 75, msgfp );
  fwrite( "     \"--preset medium\" This preset should provide near transparency\n                             to most people on most music.\n\n     \"--preset standard\" This preset should generally be transparent\n                             to most people on most music and is already\n                             quite high in quality.\n\n", 1, 323, msgfp );
  fwrite( "     \"--preset extreme\" If you have extremely good hearing and similar\n                             equipment, this preset will generally provide\n                             slightly higher quality than the \"standard\"\n                             mode.\n\n", 1, 255, msgfp );
  fwrite( "   For CBR 320kbps (highest quality possible from the --preset switches):\n\n     \"--preset insane\"  This preset will usually be overkill for most\n                             people and most situations, but if you must\n                             have the absolute highest quality with no\n                             regard to filesize, this is the way to go.\n\n", 1, 362, msgfp );
  fwrite( "   For ABR modes (high quality per given bitrate but not as high as VBR):\n\n     \"--preset &lt;kbps&gt;\"  Using this preset will usually give you good\n                             quality at a specified bitrate. Depending on the\n                             bitrate entered, this preset will determine the\n", 1, 299, msgfp );
  fwrite( "                             optimal settings for that particular situation.\n                             While this approach works, it is not nearly as\n                             flexible as VBR, and usually will not attain the\n                             same level of quality as VBR at higher bitrates.\n\n", 1, 310, msgfp );
  fwrite( "The following options are also available for the corresponding profiles:\n\n   &lt;fast&gt;        standard\n   &lt;fast&gt;        extreme\n                 insane\n   &lt;cbr&gt; (ABR Mode) - The ABR Mode is implied. To use it,\n                      simply specify a bitrate. For example:\n                      \"--preset 185\" activates this\n                      preset and uses 185 as an average kbps.\n\n", 1, 383, msgfp );
  fwrite( "   \"fast\" - Enables the fast VBR mode for a particular profile.\n\n", 1, 65, msgfp );
  fwrite( "   \"cbr\"  - If you use the ABR mode (read above) with a significant\n            bitrate such as 80, 96, 112, 128, 160, 192, 224, 256, 320,\n            you can use the \"cbr\" option to force CBR mode encoding\n            instead of the standard abr mode. ABR does provide higher\n            quality but CBR may be useful in situations such as when\n            streaming an mp3 over the internet may be important.\n\n", 1, 412, msgfp );
  fwrite( "    For example:\n\n    \"--preset fast standard &lt;input file&gt; &lt;output file&gt;\"\n or \"--preset cbr 192 &lt;input file&gt; &lt;output file&gt;\"\n or \"--preset 172 &lt;input file&gt; &lt;output file&gt;\"\n or \"--preset extreme &lt;input file&gt; &lt;output file&gt;\"\n\n\n", 1, 222, msgfp );
  fwrite( "A few aliases are also available for ABR mode:\nphone =&gt; 16kbps/mono        phon+/lw/mw-eu/sw =&gt; 24kbps/mono\nmw-us =&gt; 40kbps/mono        voice =&gt; 56kbps/mono\nfm/radio/tape =&gt; 112kbps    hifi =&gt; 160kbps\ncd =&gt; 192kbps               studio =&gt; 256kbps\n", 1, 247, msgfp );
  return;
}
int presets_set( lame_t gfp, int fast, int cbr, char *preset_name, char *ProgramName )
{
  int mono = 0;
  if ( strcmp( preset_name, "help" ) == 0 && fast <= 0 && cbr <= 0 )
  {
    lame_version_print( stdout );
    presets_longinfo_dm( stdout );
  }
  if ( strcmp( preset_name, "phone" ) == 0 )
  {
    preset_name = "16";
    mono = 1;
  }
  if ( strcmp( preset_name, "phon+" ) == 0 || strcmp( preset_name, "lw" ) == 0 || strcmp( preset_name, "mw-eu" ) == 0 || strcmp( preset_name, "sw" ) == 0 )
  {
    preset_name = "24";
    mono = 1;
  }
  if ( strcmp( preset_name, "mw-us" ) == 0 )
  {
    preset_name = "40";
    mono = 1;
  }
  if ( strcmp( preset_name, "voice" ) == 0 )
  {
    preset_name = "56";
    mono = 1;
  }
  if ( strcmp( preset_name, "fm" ) == 0 )
    preset_name = "112";
  if ( strcmp( preset_name, "radio" ) == 0 || strcmp( preset_name, "tape" ) == 0 )
    preset_name = "112";
  if ( strcmp( preset_name, "hifi" ) == 0 )
    preset_name = "160";
  if ( strcmp( preset_name, "cd" ) == 0 )
    preset_name = "192";
  if ( strcmp( preset_name, "studio" ) == 0 )
    preset_name = "256";
  if ( strcmp( preset_name, "medium" ) == 0 )
  {
    lame_set_VBR_q( &gfp, 4 );
    if ( fast > 0 )
      lame_set_VBR( &gfp, 4 );
    else
      lame_set_VBR( &gfp, 2 );
  }
  else
  {
    if ( strcmp( preset_name, "standard" ) == 0 )
    {
      lame_set_VBR_q( &gfp, 2 );
      if ( fast > 0 )
        lame_set_VBR( &gfp, 4 );
      else
        lame_set_VBR( &gfp, 2 );
    }
    else
    {
      if ( strcmp( preset_name, "extreme" ) == 0 )
      {
        lame_set_VBR_q( &gfp, 0 );
        if ( fast > 0 )
          lame_set_VBR( &gfp, 4 );
        else
          lame_set_VBR( &gfp, 2 );
      }
      else
      {
        if ( strcmp( preset_name, "insane" ) == 0 && fast <= 0 )
        {
          lame_set_preset( &gfp, 1003 );
        }
        if ( atoi( preset_name ) > 0 && fast <= 0 )
        {
          if ( atoi( preset_name ) > 7 && atoi( preset_name ) <= 320 )
          {
            lame_set_preset( &gfp, atoi( preset_name ) );
            if ( cbr == 1 )
              lame_set_VBR( &gfp, 0 );
            if ( mono == 1 )
              lame_set_mode( &gfp, 3 );
          }
          else
          {
            lame_version_print( Console_IO.Error_fp );
            error_printf( "Error: The bitrate specified is out of the valid range for this preset\n\nWhen using this mode you must enter a value between \"32\" and \"320\"\n\nFor further information try: \"%s --preset help\"\n", ProgramName );
          }
        }
        else
        {
          lame_version_print( Console_IO.Error_fp );
          error_printf( "Error: You did not enter a valid profile and/or options with --preset\n\nAvailable profiles are:\n\n   &lt;fast&gt;        medium\n   &lt;fast&gt;        standard\n   &lt;fast&gt;        extreme\n                 insane\n          &lt;cbr&gt; (ABR Mode) - The ABR Mode is implied. To use it,\n                             simply specify a bitrate. For example:\n                             \"--preset 185\" activates this\n                             preset and uses 185 as an average kbps.\n\n" );
          error_printf( "    Some examples:\n\n or \"%s --preset fast standard &lt;input file&gt; &lt;output file&gt;\"\n or \"%s --preset cbr 192 &lt;input file&gt; &lt;output file&gt;\"\n or \"%s --preset 172 &lt;input file&gt; &lt;output file&gt;\"\n or \"%s --preset extreme &lt;input file&gt; &lt;output file&gt;\"\n\nFor further information try: \"%s --preset help\"\n", ProgramName, ProgramName, ProgramName );
        }
      }
    }
  }
  return -1;
}
void genre_list_handler( int num, char *name, void *cookie )
{
  console_printf( "%3d %s\n", num, name );
  return;
}
int local_strcasecmp( char *s1, char *s2 )
{
  unsigned char c1;
  unsigned char c2;
  do
  {
    c1 = tolower( s1[0] );
    c2 = tolower( s2[0] );
    if ( c1 == 0 )
      break;
    s1++;
    s2++;
  }
  while ( c2 == c1 );
  return c1 - c2;
}
int filename_to_type( char *FileName )
{
  size_t len = strlen( FileName );
  if ( len <= 3 )
  {
  }
  FileName = &FileName[ len + -4 ];
  if ( local_strcasecmp( FileName, ".mpg" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".mp1" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".mp2" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".mp3" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".wav" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".aif" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".raw" ) == 0 )
  {
  }
  if ( local_strcasecmp( FileName, ".ogg" ) == 0 )
  {
  }
  return 0;
}
int resample_rate( double freq )
{
  double fp7;
  if ( ( freq >= 1000.000000000000 ) & 255 )
    freq *= 0.001000000000;
  switch ( (int)( freq ) + -8 )
  {
  case 0:
    break;
  case 3:
    break;
  case 4:
    break;
  case 8:
    break;
  case 14:
    break;
  case 16:
    break;
  case 24:
    break;
  case 36:
    break;
  case 40:
    break;
  default:
    error_printf( "Illegal resample frequency: %.3f kHz\n", freq, ebp_24, ebp_20, ebp_18 );
    break;
  }
  return 0;
}
int set_id3_albumart( lame_t gfp, char *file_name )
{
  int eax;
  int ret = -1;
  FILE *fpi = 0;
  char *albumart = 0;
  if ( file_name == 0 )
  {
  }
  fpi = fopen64( file_name, "rb" );
  if ( fpi == 0 )
    ret = 1;
  else
  {
    size_t size;
    fseek( fpi, 0, 2 );
    size = ftell( fpi );
    fseek( fpi, 0, 0 );
    albumart = malloc( ( size ) * sizeof( char ) );
    if ( albumart == 0 )
      ret = 2;
    else
    {
      if ( size != fread( albumart, 1, size, fpi ) )
        ret = 3;
      else
      {
        ret = 0;
      }
      free( albumart );
    }
    fclose( fpi );
  }
  switch ( ret )
  {
  case 1:
    error_printf( "Could not find: '%s'.\n", file_name );
    return ret;
    break;
  case 2:
    error_printf( "Insufficient memory for reading the albumart.\n" );
    return ret;
    break;
  case 3:
    error_printf( "Read error: '%s'.\n", file_name );
    return ret;
    break;
  case 4:
    error_printf( "Unsupported image: '%s'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n", file_name );
    return ret;
    break;
  default:
    return ret;
    break;
  }
}
int parse_args( lame_global_flags *gfp, int argc, char **argv, char *inPath, char *outPath, char **nogap_inPath, int *num_nogap )
{
  int eax;
  double fp7;
  int input_file = 0;
  int i;
  int autoconvert = 0;
  double val;
  int nogap = 0;
  int nogap_tags = 0;
  char *ProgramName = argv[0];
  int count_nogap = 0;
  int noreplaygain = 0;
  int id3tag_mode = 0;
  inPath[0] = 0;
  outPath[0] = 0;
  silent = 0;
  ignore_tag_errors = 0;
  brhist = 1;
  mp3_delay = 0;
  mp3_delay_set = 0;
  print_clipping_info = 0;
  disable_wav_header = 0;
  id3tag_init( &gfp );
  i = 0;
  do
  {
    i++;
    if ( i < argc )
    {
      char c;
      char *token = argv[ i ];
      char *arg;
      char *nextArg;
      int argUsed;
      token++;
      if ( ( token[0] == '-' ) & 255 )
      {
        argUsed = 0;
        nextArg = i + 1 < argc ? argv[ i + 1 ] : "";
        if ( token[0] == 0 )
        {
          input_file = 1;
          if ( inPath[0] == 0 )
            strncpy( inPath, argv[ i ], 4097 );
          else
          if ( outPath[0] == 0 )
            strncpy( outPath, argv[ i ], 4097 );
        }
        if ( token[0] == '-' )
        {
          token++;
          if ( local_strcasecmp( token, "resample" ) == 0 )
          {
            argUsed = 1;
            lame_set_out_samplerate( &gfp, resample_rate( atof( nextArg ) ) );
          }
          else
          {
            if ( local_strcasecmp( token, "vbr-old" ) == 0 )
              lame_set_VBR( &gfp, 2 );
            else
            {
              if ( local_strcasecmp( token, "vbr-new" ) == 0 )
                lame_set_VBR( &gfp, 4 );
              else
              {
                if ( local_strcasecmp( token, "vbr-mtrh" ) == 0 )
                  lame_set_VBR( &gfp, 4 );
                else
                {
                  if ( local_strcasecmp( token, "cbr" ) == 0 )
                    lame_set_VBR( &gfp, 0 );
                  else
                  {
                    if ( local_strcasecmp( token, "abr" ) == 0 )
                    {
                      argUsed = 1;
                      lame_set_VBR( &gfp, 3 );
                      lame_set_VBR_mean_bitrate_kbps( &gfp, atoi( nextArg ) );
                      if ( lame_get_VBR_mean_bitrate_kbps( &gfp ) > 7999 )
                      {
                        lame_set_VBR_mean_bitrate_kbps( &gfp, ( lame_get_VBR_mean_bitrate_kbps( &gfp ) + 500 ) / 1000 );
                      }
                      lame_set_VBR_mean_bitrate_kbps( &gfp, lame_get_VBR_mean_bitrate_kbps( &gfp ) <= 319 ? lame_get_VBR_mean_bitrate_kbps( &gfp ) : 320 );
                      lame_set_VBR_mean_bitrate_kbps( &gfp, 8 );
                    }
                    else
                    {
                      if ( local_strcasecmp( token, "r3mix" ) == 0 )
                        lame_set_preset( &gfp, 1000 );
                      else
                      {
                        if ( local_strcasecmp( token, "bitwidth" ) == 0 )
                        {
                          argUsed = 1;
                          in_bitwidth = atoi( nextArg );
                        }
                        else
                        {
                          if ( local_strcasecmp( token, "signed" ) == 0 )
                            in_signed = 1;
                          else
                          {
                            if ( local_strcasecmp( token, "unsigned" ) == 0 )
                              in_signed = 0;
                            else
                            {
                              if ( local_strcasecmp( token, "little-endian" ) == 0 )
                                in_endian = ByteOrderLittleEndian;
                              else
                              {
                                if ( local_strcasecmp( token, "big-endian" ) == 0 )
                                  in_endian = ByteOrderBigEndian;
                                else
                                {
                                  if ( local_strcasecmp( token, "mp1input" ) == 0 )
                                    input_format = sf_mp1;
                                  else
                                  {
                                    if ( local_strcasecmp( token, "mp2input" ) == 0 )
                                      input_format = sf_mp2;
                                    else
                                    {
                                      if ( local_strcasecmp( token, "mp3input" ) == 0 )
                                        input_format = sf_mp3;
                                      else
                                      {
                                        if ( local_strcasecmp( token, "ogginput" ) == 0 )
                                        {
                                          error_printf( "sorry, vorbis support in LAME is deprecated.\n" );
                                          break;
                                        }
                                        if ( local_strcasecmp( token, "phone" ) == 0 )
                                        {
                                          if ( presets_set( &gfp, 0, 0, token, ProgramName ) < 0 )
                                          {
                                            break;
                                          }
                                          error_printf( "Warning: --phone is deprecated, use --preset phone instead!" );
                                        }
                                        else
                                        {
                                          if ( local_strcasecmp( token, "voice" ) == 0 )
                                          {
                                            if ( presets_set( &gfp, 0, 0, token, ProgramName ) < 0 )
                                            {
                                              break;
                                            }
                                            error_printf( "Warning: --voice is deprecated, use --preset voice instead!" );
                                          }
                                          else
                                          {
                                            if ( local_strcasecmp( token, "decode" ) == 0 )
                                              lame_set_decode_only( &gfp, 1 );
                                            else
                                            {
                                              if ( local_strcasecmp( token, "flush" ) == 0 )
                                                flush_write = 1;
                                              else
                                              {
                                                if ( local_strcasecmp( token, "decode-mp3delay" ) == 0 )
                                                {
                                                  mp3_delay = atoi( nextArg );
                                                  mp3_delay_set = 1;
                                                  argUsed = 1;
                                                }
                                                else
                                                {
                                                  if ( local_strcasecmp( token, "nores" ) == 0 )
                                                    lame_set_disable_reservoir( &gfp, 1 );
                                                  else
                                                  {
                                                    if ( local_strcasecmp( token, "strictly-enforce-ISO" ) == 0 )
                                                      lame_set_strict_ISO( &gfp, 1 );
                                                    else
                                                    {
                                                      if ( local_strcasecmp( token, "scale" ) == 0 )
                                                      {
                                                        argUsed = 1;
                                                        lame_set_scale( &gfp, (float)( atof( nextArg ) ) );
                                                      }
                                                      else
                                                      {
                                                        if ( local_strcasecmp( token, "scale-l" ) == 0 )
                                                        {
                                                          argUsed = 1;
                                                          lame_set_scale_left( &gfp, (float)( atof( nextArg ) ) );
                                                        }
                                                        else
                                                        {
                                                          if ( local_strcasecmp( token, "scale-r" ) == 0 )
                                                          {
                                                            argUsed = 1;
                                                            lame_set_scale_right( &gfp, (float)( atof( nextArg ) ) );
                                                          }
                                                          else
                                                          {
                                                            if ( local_strcasecmp( token, "noasm" ) == 0 )
                                                            {
                                                              argUsed = 1;
                                                              if ( strcmp( nextArg, "mmx" ) == 0 )
                                                                lame_set_asm_optimizations( &gfp, 1, 0 );
                                                              if ( strcmp( nextArg, "3dnow" ) == 0 )
                                                                lame_set_asm_optimizations( &gfp, 2, 0 );
                                                              if ( strcmp( nextArg, "sse" ) == 0 )
                                                                lame_set_asm_optimizations( &gfp, 3, 0 );
                                                            }
                                                            else
                                                            {
                                                              if ( local_strcasecmp( token, "freeformat" ) == 0 )
                                                                lame_set_free_format( &gfp, 1 );
                                                              else
                                                              {
                                                                if ( local_strcasecmp( token, "replaygain-fast" ) == 0 )
                                                                  lame_set_findReplayGain( &gfp, 1 );
                                                                else
                                                                {
                                                                  if ( local_strcasecmp( token, "replaygain-accurate" ) == 0 )
                                                                  {
                                                                    lame_set_decode_on_the_fly( &gfp, 1 );
                                                                    lame_set_findReplayGain( &gfp, 1 );
                                                                  }
                                                                  else
                                                                  {
                                                                    if ( local_strcasecmp( token, "noreplaygain" ) == 0 )
                                                                    {
                                                                      noreplaygain = 1;
                                                                      lame_set_findReplayGain( &gfp, 0 );
                                                                    }
                                                                    else
                                                                    {
                                                                      if ( local_strcasecmp( token, "clipdetect" ) == 0 )
                                                                      {
                                                                        print_clipping_info = 1;
                                                                        lame_set_decode_on_the_fly( &gfp, 1 );
                                                                      }
                                                                      else
                                                                      {
                                                                        if ( local_strcasecmp( token, "nohist" ) == 0 )
                                                                          brhist = 0;
                                                                        else
                                                                        {
                                                                          if ( local_strcasecmp( token, "tt" ) == 0 )
                                                                          {
                                                                            argUsed = 1;
                                                                            id3_tag( &gfp, 116, 0, nextArg );
                                                                          }
                                                                          else
                                                                          {
                                                                            if ( local_strcasecmp( token, "ta" ) == 0 )
                                                                            {
                                                                              argUsed = 1;
                                                                              id3_tag( &gfp, 97, 0, nextArg );
                                                                            }
                                                                            else
                                                                            {
                                                                              if ( local_strcasecmp( token, "tl" ) == 0 )
                                                                              {
                                                                                argUsed = 1;
                                                                                id3_tag( &gfp, 108, 0, nextArg );
                                                                              }
                                                                              else
                                                                              {
                                                                                if ( local_strcasecmp( token, "ty" ) == 0 )
                                                                                {
                                                                                  argUsed = 1;
                                                                                  id3_tag( &gfp, 121, 0, nextArg );
                                                                                }
                                                                                else
                                                                                {
                                                                                  if ( local_strcasecmp( token, "tc" ) == 0 )
                                                                                  {
                                                                                    argUsed = 1;
                                                                                    id3_tag( &gfp, 99, 0, nextArg );
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    if ( local_strcasecmp( token, "tn" ) == 0 )
                                                                                    {
                                                                                      int ret = id3_tag( &gfp, 110, 0, nextArg );
                                                                                      argUsed = 1;
                                                                                      if ( ret && ignore_tag_errors == 0 )
                                                                                      {
                                                                                        if ( id3tag_mode == 1 )
                                                                                        {
                                                                                          error_printf( "The track number has to be between 1 and 255 for ID3v1.\n" );
                                                                                          break;
                                                                                        }
                                                                                        if ( id3tag_mode != 2 && silent <= 9 )
                                                                                          error_printf( "The track number has to be between 1 and 255 for ID3v1, ignored for ID3v1.\n" );
                                                                                      }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      if ( local_strcasecmp( token, "tg" ) == 0 )
                                                                                      {
                                                                                        int ret = id3_tag( &gfp, 103, 0, nextArg );
                                                                                        argUsed = 1;
                                                                                        if ( ret && ignore_tag_errors == 0 )
                                                                                        {
                                                                                          if ( ret == -1 )
                                                                                          {
                                                                                            error_printf( "Unknown ID3v1 genre number: '%s'.\n", nextArg );
                                                                                            break;
                                                                                          }
                                                                                          if ( ret == -2 )
                                                                                          {
                                                                                            if ( id3tag_mode == 1 )
                                                                                            {
                                                                                              error_printf( "Unknown ID3v1 genre: '%s'.\n", nextArg );
                                                                                              break;
                                                                                            }
                                                                                            if ( id3tag_mode != 2 && silent <= 9 )
                                                                                              error_printf( "Unknown ID3v1 genre: '%s'.  Setting ID3v1 genre to 'Other'\n", nextArg );
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            error_printf( "Internal error.\n" );
                                                                                            break;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        if ( local_strcasecmp( token, "tv" ) == 0 )
                                                                                        {
                                                                                          argUsed = 1;
                                                                                          if ( id3_tag( &gfp, 118, 0, nextArg ) && silent <= 9 )
                                                                                            error_printf( "Invalid field value: '%s'. Ignored\n", nextArg );
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          if ( local_strcasecmp( token, "ti" ) == 0 )
                                                                                          {
                                                                                            argUsed = 1;
                                                                                            if ( set_id3_albumart( &gfp, nextArg ) && ignore_tag_errors == 0 )
                                                                                            {
                                                                                              break;
                                                                                            }
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            if ( local_strcasecmp( token, "ignore-tag-errors" ) == 0 )
                                                                                              ignore_tag_errors = 1;
                                                                                            else
                                                                                            {
                                                                                              if ( local_strcasecmp( token, "add-id3v2" ) == 0 )
                                                                                                id3tag_add_v2( &gfp );
                                                                                              else
                                                                                              {
                                                                                                if ( local_strcasecmp( token, "id3v1-only" ) == 0 )
                                                                                                {
                                                                                                  id3tag_v1_only( &gfp );
                                                                                                  id3tag_mode = 1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  if ( local_strcasecmp( token, "id3v2-only" ) == 0 )
                                                                                                  {
                                                                                                    id3tag_v2_only( &gfp );
                                                                                                    id3tag_mode = 2;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    if ( local_strcasecmp( token, "space-id3v1" ) == 0 )
                                                                                                      id3tag_space_v1( &gfp );
                                                                                                    else
                                                                                                    {
                                                                                                      if ( local_strcasecmp( token, "pad-id3v2" ) == 0 )
                                                                                                        id3tag_pad_v2( &gfp );
                                                                                                      else
                                                                                                      {
                                                                                                        if ( local_strcasecmp( token, "pad-id3v2-size" ) == 0 )
                                                                                                        {
                                                                                                          int n = atoi( nextArg );
                                                                                                          n = n <= 0x1f400 ? 0x1f400 : n;
                                                                                                          n = (unsigned char)( ( n < 0 ) ^ 1 ) ? 0 : n;
                                                                                                          id3tag_set_pad( &gfp, n );
                                                                                                          argUsed = 1;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          if ( local_strcasecmp( token, "genre-list" ) == 0 )
                                                                                                          {
                                                                                                            id3tag_genre_list( &genre_list_handler, 0 );
                                                                                                            break;
                                                                                                          }
                                                                                                          if ( local_strcasecmp( token, "lowpass" ) == 0 )
                                                                                                          {
                                                                                                            val = atof( nextArg );
                                                                                                            argUsed = 1;
                                                                                                            if ( ( 0.000000000000 < val ) & 255 )
                                                                                                              lame_set_lowpassfreq( &gfp, -1 );
                                                                                                            else
                                                                                                            {
                                                                                                              if ( ( ( 0.001000000000 < val ) & 255 ) || ( ( val < 50000.000000000000 ) & 255 ) )
                                                                                                              {
                                                                                                                error_printf( "Must specify lowpass with --lowpass freq, freq &gt;= 0.001 kHz\n" );
                                                                                                                break;
                                                                                                              }
                                                                                                              lame_set_lowpassfreq( &gfp, (int)( ( val * 1.000000000000 ) + 0.500000000000 ) );
                                                                                                            }
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            if ( local_strcasecmp( token, "lowpass-width" ) == 0 )
                                                                                                            {
                                                                                                              val = atof( nextArg );
                                                                                                              argUsed = 1;
                                                                                                              if ( ( ( 0.001000000000 < val ) & 255 ) || ( ( val < 50000.000000000000 ) & 255 ) )
                                                                                                              {
                                                                                                                error_printf( "Must specify lowpass width with --lowpass-width freq, freq &gt;= 0.001 kHz\n" );
                                                                                                                break;
                                                                                                              }
                                                                                                              lame_set_lowpasswidth( &gfp, (int)( ( val * 1.000000000000 ) + 0.500000000000 ) );
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              if ( local_strcasecmp( token, "highpass" ) == 0 )
                                                                                                              {
                                                                                                                val = atof( nextArg );
                                                                                                                argUsed = 1;
                                                                                                                if ( ( 0.000000000000 < val ) & 255 )
                                                                                                                  lame_set_highpassfreq( &gfp, -1 );
                                                                                                                else
                                                                                                                {
                                                                                                                  if ( ( ( 0.001000000000 < val ) & 255 ) || ( ( val < 50000.000000000000 ) & 255 ) )
                                                                                                                  {
                                                                                                                    error_printf( "Must specify highpass with --highpass freq, freq &gt;= 0.001 kHz\n" );
                                                                                                                    break;
                                                                                                                  }
                                                                                                                  lame_set_highpassfreq( &gfp, (int)( ( val * 1.000000000000 ) + 0.500000000000 ) );
                                                                                                                }
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                if ( local_strcasecmp( token, "highpass-width" ) == 0 )
                                                                                                                {
                                                                                                                  val = atof( nextArg );
                                                                                                                  argUsed = 1;
                                                                                                                  if ( ( ( 0.001000000000 < val ) & 255 ) || ( ( val < 50000.000000000000 ) & 255 ) )
                                                                                                                  {
                                                                                                                    error_printf( "Must specify highpass width with --highpass-width freq, freq &gt;= 0.001 kHz\n" );
                                                                                                                    break;
                                                                                                                  }
                                                                                                                  lame_set_highpasswidth( &gfp, (int)( val ) );
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                  if ( local_strcasecmp( token, "comp" ) == 0 )
                                                                                                                  {
                                                                                                                    argUsed = 1;
                                                                                                                    val = atof( nextArg );
                                                                                                                    if ( ( 1.000000000000 < val ) & 255 )
                                                                                                                    {
                                                                                                                      error_printf( "Must specify compression ratio &gt;= 1.0\n" );
                                                                                                                      break;
                                                                                                                    }
                                                                                                                    lame_set_compression_ratio( &gfp, (float)( val ) );
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    if ( local_strcasecmp( token, "notemp" ) == 0 )
                                                                                                                      lame_set_useTemporal( &gfp, 0 );
                                                                                                                    else
                                                                                                                    {
                                                                                                                      if ( local_strcasecmp( token, "interch" ) == 0 )
                                                                                                                      {
                                                                                                                        argUsed = 1;
                                                                                                                        lame_set_interChRatio( &gfp, (float)( atof( nextArg ) ) );
                                                                                                                      }
                                                                                                                      else
                                                                                                                      {
                                                                                                                        if ( local_strcasecmp( token, "temporal-masking" ) == 0 )
                                                                                                                        {
                                                                                                                          argUsed = 1;
                                                                                                                          lame_set_useTemporal( &gfp, atoi( nextArg ) != 0 );
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                          if ( local_strcasecmp( token, "nspsytune" ) )
                                                                                                                          {
                                                                                                                            if ( local_strcasecmp( token, "nssafejoint" ) == 0 )
                                                                                                                            {
                                                                                                                              lame_set_exp_nspsytune( &gfp, lame_get_exp_nspsytune( &gfp ) | 2 );
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                              if ( local_strcasecmp( token, "nsmsfix" ) == 0 )
                                                                                                                              {
                                                                                                                                argUsed = 1;
                                                                                                                                lame_set_msfix( &gfp, atof( nextArg ) );
                                                                                                                              }
                                                                                                                              else
                                                                                                                              {
                                                                                                                                if ( local_strcasecmp( token, "ns-bass" ) == 0 )
                                                                                                                                {
                                                                                                                                  argUsed = 1;
                                                                                                                                {
                                                                                                                                  double d = atof( nextArg );
                                                                                                                                  int k = (int)( d * 4.000000000000 );
                                                                                                                                  if ( k < -32 )
                                                                                                                                    k = -32;
                                                                                                                                  if ( k > 31 )
                                                                                                                                    k = 31;
                                                                                                                                  if ( k < 0 )
                                                                                                                                    k += 64;
                                                                                                                                  lame_set_exp_nspsytune( &gfp, lame_get_exp_nspsytune( &gfp ) | ( k << 2 ) );
                                                                                                                                }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                  if ( local_strcasecmp( token, "ns-alto" ) == 0 )
                                                                                                                                  {
                                                                                                                                    argUsed = 1;
                                                                                                                                  {
                                                                                                                                    double d = atof( nextArg );
                                                                                                                                    int k = (int)( d * 4.000000000000 );
                                                                                                                                    if ( k < -32 )
                                                                                                                                      k = -32;
                                                                                                                                    if ( k > 31 )
                                                                                                                                      k = 31;
                                                                                                                                    if ( k < 0 )
                                                                                                                                      k += 64;
                                                                                                                                    lame_set_exp_nspsytune( &gfp, lame_get_exp_nspsytune( &gfp ) | ( k << 8 ) );
                                                                                                                                  }
                                                                                                                                  }
                                                                                                                                  else
                                                                                                                                  {
                                                                                                                                    if ( local_strcasecmp( token, "ns-treble" ) == 0 )
                                                                                                                                    {
                                                                                                                                      argUsed = 1;
                                                                                                                                    {
                                                                                                                                      double d = atof( nextArg );
                                                                                                                                      int k = (int)( d * 4.000000000000 );
                                                                                                                                      if ( k < -32 )
                                                                                                                                        k = -32;
                                                                                                                                      if ( k > 31 )
                                                                                                                                        k = 31;
                                                                                                                                      if ( k < 0 )
                                                                                                                                        k += 64;
                                                                                                                                      lame_set_exp_nspsytune( &gfp, lame_get_exp_nspsytune( &gfp ) | ( k << 14 ) );
                                                                                                                                    }
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                      if ( local_strcasecmp( token, "ns-sfb21" ) == 0 )
                                                                                                                                      {
                                                                                                                                        argUsed = 1;
                                                                                                                                      {
                                                                                                                                        double d = atof( nextArg );
                                                                                                                                        int k = (int)( d * 4.000000000000 );
                                                                                                                                        if ( k < -32 )
                                                                                                                                          k = -32;
                                                                                                                                        if ( k > 31 )
                                                                                                                                          k = 31;
                                                                                                                                        if ( k < 0 )
                                                                                                                                          k += 64;
                                                                                                                                        lame_set_exp_nspsytune( &gfp, lame_get_exp_nspsytune( &gfp ) | ( k << 20 ) );
                                                                                                                                      }
                                                                                                                                      }
                                                                                                                                      else
                                                                                                                                      {
                                                                                                                                        if ( local_strcasecmp( token, "nspsytune2" ) )
                                                                                                                                        {
                                                                                                                                          if ( local_strcasecmp( token, "quiet" ) == 0 || local_strcasecmp( token, "silent" ) == 0 )
                                                                                                                                            silent = 10;
                                                                                                                                          else
                                                                                                                                          {
                                                                                                                                            if ( local_strcasecmp( token, "brief" ) == 0 )
                                                                                                                                              silent = -5;
                                                                                                                                            else
                                                                                                                                            {
                                                                                                                                              if ( local_strcasecmp( token, "verbose" ) == 0 )
                                                                                                                                                silent = -10;
                                                                                                                                              else
                                                                                                                                              {
                                                                                                                                                if ( local_strcasecmp( token, "version" ) == 0 || local_strcasecmp( token, "license" ) == 0 )
                                                                                                                                                {
                                                                                                                                                  print_license( stdout );
                                                                                                                                                  break;
                                                                                                                                                }
                                                                                                                                                if ( local_strcasecmp( token, "help" ) == 0 || local_strcasecmp( token, "usage" ) == 0 )
                                                                                                                                                {
                                                                                                                                                  short_help( &gfp, stdout, ProgramName );
                                                                                                                                                  break;
                                                                                                                                                }
                                                                                                                                                if ( local_strcasecmp( token, "longhelp" ) == 0 )
                                                                                                                                                {
                                                                                                                                                  long_help( &gfp, stdout, ProgramName, 0 );
                                                                                                                                                  break;
                                                                                                                                                }
                                                                                                                                                if ( local_strcasecmp( token, "?" ) == 0 )
                                                                                                                                                {
                                                                                                                                                  FILE *fp = popen( "less -Mqc", "w" );
                                                                                                                                                  long_help( &gfp, fp, ProgramName, 0 );
                                                                                                                                                  pclose( fp );
                                                                                                                                                  break;
                                                                                                                                                }
                                                                                                                                                if ( local_strcasecmp( token, "preset" ) == 0 || local_strcasecmp( token, "alt-preset" ) == 0 )
                                                                                                                                                {
                                                                                                                                                  argUsed = 1;
                                                                                                                                                {
                                                                                                                                                  int fast = 0, cbr = 0;
                                                                                                                                                  for ( ; strcmp( nextArg, "fast" ) == 0 || strcmp( nextArg, "cbr" ) == 0;  )
                                                                                                                                                  {
                                                                                                                                                    if ( strcmp( nextArg, "fast" ) == 0 && fast <= 0 )
                                                                                                                                                      fast = 1;
                                                                                                                                                    if ( strcmp( nextArg, "cbr" ) == 0 && cbr <= 0 )
                                                                                                                                                      cbr = 1;
                                                                                                                                                    argUsed++;
                                                                                                                                                    nextArg = i + argUsed < argc ? argv[ i + argUsed ] : "";
                                                                                                                                                  }
                                                                                                                                                  if ( presets_set( &gfp, fast, cbr, nextArg, ProgramName ) < 0 )
                                                                                                                                                  {
                                                                                                                                                    break;
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                                }
                                                                                                                                                else
                                                                                                                                                {
                                                                                                                                                  if ( local_strcasecmp( token, "disptime" ) == 0 )
                                                                                                                                                  {
                                                                                                                                                    argUsed = 1;
                                                                                                                                                    update_interval = atof( nextArg );
                                                                                                                                                  }
                                                                                                                                                  else
                                                                                                                                                  {
                                                                                                                                                    if ( local_strcasecmp( token, "nogaptags" ) == 0 )
                                                                                                                                                      nogap_tags = 1;
                                                                                                                                                    else
                                                                                                                                                    {
                                                                                                                                                      if ( local_strcasecmp( token, "nogapout" ) == 0 )
                                                                                                                                                      {
                                                                                                                                                        strcpy( outPath, nextArg );
                                                                                                                                                        argUsed = 1;
                                                                                                                                                      }
                                                                                                                                                      else
                                                                                                                                                      {
                                                                                                                                                        if ( local_strcasecmp( token, "nogap" ) == 0 )
                                                                                                                                                          nogap = 1;
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                          if ( local_strcasecmp( token, "athaa-sensitivity" ) == 0 )
                                                                                                                                                          {
                                                                                                                                                            argUsed = 1;
                                                                                                                                                            lame_set_athaa_sensitivity( &gfp, (float)( atof( nextArg ) ) );
                                                                                                                                                          }
                                                                                                                                                          else
                                                                                                                                                          {
                                                                                                                                                            error_printf( "%s: unrecognized option --%s\n", ProgramName, token );
                                                                                                                                                            break;
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          i += argUsed;
        }
        else
        {
          while ( c = token[0], token++, ( c != 0 ) & 255 )
          }
        }
        else
        if ( nogap )
        {
          if ( num_nogap == 0 || num_nogap[0] <= count_nogap )
          {
            error_printf( "Error: 'nogap option'.  Calling program does not allow nogap option, or\nyou have exceeded maximum number of input files for the nogap option\n" );
            num_nogap[0] = -1;
            break;
          }
          strncpy( nogap_inPath[ count_nogap ], argv[ i ], 4097 );
          input_file = 1;
          count_nogap++;
        }
        else
        if ( inPath[0] == 0 )
        {
          strncpy( inPath, argv[ i ], 4097 );
          input_file = 1;
        }
        else
        if ( outPath[0] == 0 )
        {
          strncpy( outPath, argv[ i ], 4097 );
        }
        else
        {
          error_printf( "%s: excess arg %s\n", ProgramName, argv[ i ] );
          break;
        }
      }
      else
      {
        if ( input_file == 0 )
        {
          usage( Console_IO.Console_fp, ProgramName );
          break;
        }
        if ( inPath[0] == '-' )
          silent = silent <= 0 ? silent : 1;
        if ( outPath[0] == 0 && count_nogap == 0 )
        {
          if ( inPath[0] == '-' )
            memcpy( outPath, "-", 2 );
          else
          {
            strncpy( outPath, inPath, 4093 );
            if ( lame_get_decode_only( &gfp ) )
              strcat( outPath, ".wav" );
            else
              strcat( outPath, ".mp3" );
          }
        }
        if ( noreplaygain == 0 )
          lame_set_findReplayGain( &gfp, 1 );
        if ( nogap && lame_get_bWriteVbrTag( &gfp ) && nogap_tags == 0 )
        {
          console_printf( "Note: Disabling VBR Xing/Info tag since it interferes with --nogap\n" );
          lame_set_bWriteVbrTag( &gfp, 0 );
        }
        if ( outPath[0] == '-' )
          lame_set_bWriteVbrTag( &gfp, 0 );
        if ( input_format == sf_unknown )
        {
          input_format = filename_to_type( inPath );
        }
        if ( input_format == sf_ogg )
        {
          error_printf( "sorry, vorbis support in LAME is deprecated.\n" );
          break;
        }
        if ( autoconvert )
          lame_set_num_channels( &gfp, 2 );
        else
        {
          if ( lame_get_mode( &gfp ) == 3 )
            lame_set_num_channels( &gfp, 1 );
          else
            lame_set_num_channels( &gfp, 2 );
        }
        if ( lame_get_free_format( &gfp ) && ( lame_get_brate( &gfp ) <= 7 || lame_get_brate( &gfp ) > 640 ) )
        {
          error_printf( "For free format, specify a bitrate between 8 and 640 kbps\n" );
          error_printf( "with the -b &lt;bitrate&gt; option\n" );
          break;
        }
        if ( num_nogap == 0 )
        {
          break;
        }
        num_nogap[0] = count_nogap;
        break;
      }
    }
    while ( ( c != 0 ) & 255 );
    arg = nextArg;
    switch ( c + -63 )
    {
    case 46:
      argUsed = 1;
      switch ( arg[0] + -97 )
      {
      case 18:
        lame_set_mode( &gfp, 0 );
        break;
      case 3:
        lame_set_mode( &gfp, 2 );
        break;
      case 5:
        lame_set_force_ms( &gfp, 1 );
      case 9:
        lame_set_mode( &gfp, 1 );
        break;
      case 12:
        lame_set_mode( &gfp, 3 );
        break;
      case 0:
        lame_set_mode( &gfp, 1 );
        break;
      default:
        error_printf( "%s: -m mode must be s/d/j/f/m not %s\n", ProgramName, arg );
        return 0;
        break;
      }
      if ( argUsed )
      {
        if ( token == arg )
          token = "";
        else
          i++;
        arg = "";
        argUsed = 0;
      }
      break;
    case 23:
      argUsed = 1;
      if ( lame_get_VBR( &gfp ) == 0 )
        lame_set_VBR( &gfp, 4 );
      lame_set_VBR_quality( &gfp, (float)( atof( arg ) ) );
      break;
    case 55:
      if ( lame_get_VBR( &gfp ) == 0 )
        lame_set_VBR( &gfp, 4 );
      break;
    case 50:
      argUsed = 1;
    {
      int tmp_quality = atoi( arg );
      if ( tmp_quality < 0 )
        tmp_quality = 0;
      if ( tmp_quality > 9 )
        tmp_quality = 9;
      lame_set_quality( &gfp, tmp_quality );
    }
      break;
    case 39:
      lame_set_quality( &gfp, 7 );
      break;
    case 41:
      lame_set_quality( &gfp, 2 );
      break;
    case 52:
      argUsed = 1;
      val = atof( arg );
      lame_set_in_samplerate( &gfp, (int)( ( val * 1.000000000000 ) + 0.500000000000 ) );
      break;
    case 35:
      argUsed = 1;
      lame_set_brate( &gfp, atoi( arg ) );
      lame_set_VBR_min_bitrate_kbps( &gfp, lame_get_brate( &gfp ) );
      break;
    case 3:
      argUsed = 1;
      lame_set_VBR_max_bitrate_kbps( &gfp, atoi( arg ) );
      break;
    case 7:
      lame_set_VBR_hard_min( &gfp, 1 );
      break;
    case 53:
      lame_set_bWriteVbrTag( &gfp, 0 );
      disable_wav_header = 1;
      break;
    case 21:
      lame_set_bWriteVbrTag( &gfp, 1 );
      nogap_tags = 1;
      disable_wav_header = 0;
      break;
    case 51:
      input_format = sf_raw;
      break;
    case 57:
      swapbytes = 1;
      break;
    case 49:
      lame_set_error_protection( &gfp, 1 );
      break;
    case 34:
      autoconvert = 1;
      lame_set_mode( &gfp, 3 );
      break;
    case 37:
    case 44:
      error_printf( "WARNING: -%c is obsolete.\n", c );
      break;
    case 20:
      silent = 10;
      break;
    case 25:
    {
      int x, y;
      int n = __isoc99_sscanf( arg, "%d,%d", &x, &y );
      if ( n == 1 )
        y = x;
      argUsed = 1;
    }
      break;
    case 26:
      lame_set_experimentalY( &gfp, 1 );
      break;
    case 27:
    {
      int n = 1;
      argUsed = __isoc99_sscanf( arg, "%d", &n );
    }
      break;
    case 38:
      argUsed = 1;
      switch ( arg[0] )
      {
      case 'n':
        lame_set_emphasis( &gfp, 0 );
        break;
      case '5':
        lame_set_emphasis( &gfp, 1 );
        break;
      case 'c':
        lame_set_emphasis( &gfp, 3 );
        break;
      default:
        error_printf( "%s: -e emp must be n/5/c not %s\n", ProgramName, arg );
        return 0;
        break;
      }
      break;
    case 36:
      lame_set_copyright( &gfp, 1 );
      break;
    case 48:
      lame_set_original( &gfp, 0 );
      break;
    case 0:
      long_help( &gfp, stdout, ProgramName, 0 );
      return 0;
      break;
    default:
      error_printf( "%s: unrecognized option -%c\n", ProgramName, c );
      return 0;
      break;
    }
}
#if 0
#endif
