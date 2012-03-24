#include "cat.c.h"
char *program_name;
static char *infile;
static int input_desc;
static char line_buf[20] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '0', '\t' };
static char *line_num_print = &line_buf[12];
static char *line_num_start = &line_buf[17];
static char *line_num_end = &line_buf[17];
static int newlines2;
void usage( int status )
{
  if ( status )
  {
    fprintf( stderr, gettext( "Try `%s --help' for more information.\n" ), program_name );
  }
  else
  {
    printf( gettext( "Usage: %s [OPTION] [FILE]...\n" ), program_name );
    fputs_unlocked( gettext( "Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n" ), stdout );
    fputs_unlocked( gettext( "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n" ), stdout );
    fputs_unlocked( gettext( "      --help     display this help and exit\n" ), stdout );
    fputs_unlocked( gettext( "      --version  output version information and exit\n" ), stdout );
    fputs_unlocked( gettext( "\nWith no FILE, or when FILE is -, read standard input.\n" ), stdout );
    printf( gettext( "\nExamples:\n  %s f - g  Output f's contents, then standard input, then g's contents.\n  %s        Copy standard input to standard output.\n" ), program_name );
    emit_bug_reporting_address( );
  }
  exit( status );
}
void next_line_num( void )
{
  int eax;
  char *endp = line_num_end;
  do
  {
    endp[0] = endp[0] + 1;
    if ( ( ( endp[0] <= '8' ) & 255 ) == 0 )
    {
      endp[0] = '0';
      endp = &endp[ -1 ];
    }
  }
  while ( line_num_start <= endp );
  if ( line_buf[0] < line_num_start )
  {
    line_num_start = &line_num_start[ -1 ];
    line_num_start[0] = '1';
  }
  else
    line_buf[0] = '>';
  if ( line_num_start < line_num_print )
  {
    line_num_print = &line_num_print[ -1 ];
  }
  return;
}
_Bool simple_cat( char *buf, size_t bufsize )
{
  int edx;
  size_t n_read;
  while ( n_read == -1 )
  {
    if ( n_read == 0 )
    {
      break;
    }
  {
    size_t n = n_read;
    if ( n != full_write( 1, (void*)buf, n ) )
    {
      error( 1, *(int*)(__errno_location( )), gettext( "write error" ) );
    }
  }
  }
  error( 0, *(int*)(__errno_location( )), "%s", infile );
  return 1;
}
void write_pending( char *outbuf, char **bpout )
{
  size_t n_write = bpout[0] - outbuf;
  if ( n_write )
  {
    if ( n_write != full_write( 1, (void*)outbuf, n_write ) )
    {
      error( 1, *(int*)(__errno_location( )), gettext( "write error" ) );
    }
    bpout[0] = outbuf;
  }
  return;
}
_Bool cat( char *inbuf, size_t insize, char *outbuf, size_t outsize, _Bool show_nonprinting, _Bool show_tabs, _Bool number, _Bool number_nonblank, _Bool show_ends, _Bool squeeze_blank )
{
  unsigned char ch;
  char *bpin;
  char *eob;
  char *bpout;
  size_t n_read;
  int newlines = newlines2;
  _Bool use_fionread = 1;
  eob = inbuf;
  bpin = &eob[1];
  bpout = outbuf;
  while ( bpout < outbuf[ outsize ] )
  {
    if ( eob < bpin )
    {
      _Bool input_pending = 0;
      int n_to_read = 0;
      if ( use_fionread && ioctl( input_desc, 21531, n_to_read ) < 0 )
      {
        if ( *(int*)(__errno_location( )) == 95 || *(int*)(__errno_location( )) == 25 || *(int*)(__errno_location( )) == 22 || *(int*)(__errno_location( )) == 19 || *(int*)(__errno_location( )) == 38 )
          use_fionread = 0;
        else
        {
          error( 0, *(int*)(__errno_location( )), gettext( "cannot do ioctl on %s" ), quote( infile ) );
          newlines2 = newlines;
          break;
        }
      }
      if ( n_to_read )
        input_pending = 1;
      if ( input_pending )
        write_pending( outbuf, &bpout );
      n_read = safe_read( input_desc, (void*)inbuf, insize );
      if ( n_read == -1 )
      {
        error( 0, *(int*)(__errno_location( )), "%s", infile );
        write_pending( outbuf, &bpout );
        newlines2 = newlines;
        break;
      }
      if ( n_read == 0 )
      {
        write_pending( outbuf, &bpout );
        newlines2 = newlines;
        break;
      }
      bpin = inbuf;
      eob = &bpin[ n_read ];
      eob[0] = '\n';
    }
    else
    {
      newlines++;
      if ( newlines > 0 )
      {
        if ( newlines <= 1 )
          goto B26;
        else
        {
          newlines = 2;
          if ( squeeze_blank )
          {
            ch = bpin[0];
            bpin++;
            if ( ch != '\n' )
            {
              if ( newlines >= 0 && number )
              {
                next_line_num( );
                bpout = stpcpy( bpout, line_num_print );
              }
              if ( show_nonprinting )
              {
                while ( 1 )
                {
                  if ( 0 <= show_nonprinting )
                  {
                    if ( '~' <= ch )
                    {
                      bpout[0] = ch;
                      bpout++;
                    }
                    else
                    if ( ch == 127 )
                    {
                      bpout[0] = '^';
                      bpout++;
                      bpout[0] = '?';
                      bpout++;
                    }
                    else
                    {
                      bpout[0] = 'M';
                      bpout++;
                      bpout[0] = '-';
                      bpout++;
                      if ( ch < -97 )
                      {
                        if ( ch != -1 )
                        {
                          bpout[0] = ch + -128;
                          bpout++;
                        }
                        else
                        {
                          bpout[0] = '^';
                          bpout++;
                          bpout[0] = '?';
                          bpout++;
                        }
                      }
                      else
                      {
                        bpout[0] = '^';
                        bpout++;
                        bpout[0] = ch + -64;
                        bpout++;
                      }
                    }
                  }
                  else
                  if ( ch == '\t' && ( ( ( show_tabs ^ 1 ) ^ 1 ) & 255 ) == 0 )
                  {
                    bpout[0] = '\t';
                    bpout++;
                  }
                  else
                  if ( ch == '\n' )
                  {
                    newlines = -1;
                    break;
                  }
                  else
                  {
                    bpout[0] = '^';
                    bpout++;
                    bpout[0] = ch + 64;
                    bpout++;
                  }
                  ch = bpin[0];
                  bpin++;
                }
              }
              else
              {
                while ( 1 )
                {
                  if ( ch == '\t' && ( ( show_tabs ^ 1 ) & 255 ) == 0 )
                  {
                    bpout[0] = '^';
                    bpout++;
                    bpout[0] = ch + 64;
                    bpout++;
                  }
                  else
                  if ( ch != '\n' )
                  {
                    bpout[0] = ch;
                    bpout++;
                  }
                  else
                  {
                    newlines = -1;
                  }
                  ch = bpin[0];
                  bpin++;
                }
              }
            }
          }
        }
B26:;
        if ( ( number_nonblank ^ 1 ) & number )
        {
          next_line_num( );
          bpout = stpcpy( bpout, line_num_print );
        }
      }
      if ( show_ends )
      {
        bpout[0] = '$';
        bpout++;
      }
      bpout[0] = '\n';
      bpout++;
    }
    ch = bpin[0];
    bpin++;
  }
{
  char *wp = outbuf;
  size_t remaining_bytes;
  do
  {
    if ( outsize != full_write( 1, (void*)wp, outsize ) )
    {
      error( 1, *(int*)(__errno_location( )), gettext( "write error" ) );
    }
    wp = &wp[ outsize ];
    remaining_bytes = bpout - wp;
  }
  while ( remaining_bytes < outsize );
  memmove( outbuf, wp, remaining_bytes );
  bpout = &outbuf[ remaining_bytes ];
}
}
int main( int argc, char **argv )
{
  static struct option long_options[10] = { { "number-nonblank", 0, 0, 98 }
, { "number", 0, 0, 110 }
, { "squeeze-blank", 0, 0, 115 }
, { "show-nonprinting", 0, 0, 118 }
, { "show-ends", 0, 0, 69 }
, { "show-tabs", 0, 0, 84 }
, { "show-all", 0, 0, 65 }
, { "help", 0, 0, -130 }
, { "version", 0, 0, -131 }
, { 0, 0, 0, 0 }
 };
  size_t outsize;
  size_t insize;
  size_t page_size = getpagesize( );
  char *inbuf;
  char *outbuf;
  _Bool ok = 1;
  int c;
  int argind;
  dev_t out_dev;
  ino_t out_ino;
  _Bool check_redirection = 1;
  _Bool have_read_stdin = 0;
  struct stat stat_buf;
  _Bool number = 0;
  _Bool number_nonblank = 0;
  _Bool squeeze_blank = 0;
  _Bool show_ends = 0;
  _Bool show_nonprinting = 0;
  _Bool show_tabs = 0;
  int file_open_mode = 0;
  program_name = argv[0];
  setlocale( 6, "" );
  bindtextdomain( "coreutils", "/usr/local/share/locale" );
  textdomain( "coreutils" );
  atexit( &close_stdout );
{
  switch ( c )
  {
  case 'u':
    break;
  case 'b':
    number = 1;
    number_nonblank = 1;
    break;
  case 'e':
    show_ends = 1;
    show_nonprinting = 1;
    break;
  case 'n':
    number = 1;
    break;
  case 's':
    squeeze_blank = 1;
    break;
  case 't':
    show_tabs = 1;
    show_nonprinting = 1;
    break;
  case 'v':
    show_nonprinting = 1;
    break;
  case 'A':
    show_nonprinting = 1;
    show_ends = 1;
    show_tabs = 1;
    break;
  case 'E':
    show_ends = 1;
    break;
  case 'T':
    show_tabs = 1;
    break;
  case '~':
    usage( 0 );
    break;
  case '}':
    version_etc( stdout, "cat", "GNU coreutils", "6.10", "Torbjorn Granlund", (long long)( "Richard M. Stallman" ) );
    exit( 0 );
    break;
  default:
    usage( 1 );
    break;
  }
}
if ( fstat64( 1, &stat_buf.st_dev ) < 0 )
{
  error( 1, *(int*)(__errno_location( )), gettext( "standard output" ) );
}
outsize = 512;
if ( ( stat_buf.st_mode & 61440 ) == 32768 )
  out_ino = stat_buf.st_ino;
else
  check_redirection = 0;
infile = "-";
argind = optind;
do
{
  if ( argind < argc )
    infile = argv[ argind ];
  if ( strcmp( infile, "-" ) == 0 )
  {
    have_read_stdin = 1;
    input_desc = 0;
  }
  else
  {
    input_desc = open64( infile, file_open_mode );
    if ( input_desc < 0 )
    {
      error( 0, *(int*)(__errno_location( )), "%s", infile );
      ok = 0;
    }
  }
  if ( fstat64( input_desc, &stat_buf.st_dev ) < 0 )
  {
    error( 0, *(int*)(__errno_location( )), "%s", infile );
    ok = 0;
  }
  else
  {
    insize = 512;
    if ( check_redirection && !( ( stat_buf.st_dev ^ (unsigned int)(out_dev & 0xFFFFFFFF) ) | ( (unsigned int)(stat_buf.st_dev << 32) ^ (unsigned int)(out_dev << 32) ) ) && stat_buf.st_ino == out_ino && input_desc )
    {
      error( 0, 0, gettext( "%s: input file is output file" ), infile );
      ok = 0;
    }
    else
    {
      if ( ( squeeze_blank | number | show_ends | show_nonprinting | show_tabs ) == 0 )
      {
        insize = insize;
        inbuf = (char*)xmalloc( page_size + insize + -1 );
        ok = ( ok & simple_cat( (char*)ptr_align( (void*)inbuf, page_size ), insize ) ) != 0;
      }
      else
      {
        inbuf = (char*)xmalloc( page_size + insize );
        outbuf = (char*)xmalloc( page_size + outsize + ( insize << 2 ) + 18 );
        ok = ( ok & cat( (char*)ptr_align( (void*)inbuf, page_size ), insize, (char*)ptr_align( (void*)outbuf, page_size ), outsize, show_nonprinting, show_tabs, number, number_nonblank, show_ends, squeeze_blank ) ) != 0;
        free( outbuf );
      }
      free( inbuf );
    }
  }
  if ( strcmp( infile, "-" ) && close( input_desc ) < 0 )
  {
    error( 0, *(int*)(__errno_location( )), "%s", infile );
    ok = 0;
  }
  else
  {
    argind++;
  }
}
while ( argc <= argind );
if ( have_read_stdin && close( 0 ) < 0 )
{
  error( 1, *(int*)(__errno_location( )), gettext( "closing standard input" ) );
}
exit( 1 );
}
void *ptr_align( void *ptr, size_t alignment )
{
  char *p0 = (char*)ptr;
  char *p1 = &p0[ alignment + -1 ];
  return &p1[ 0 - ( __MOD((long long)( p1 ),alignment) ) ];
}
void emit_bug_reporting_address( void )
{
  printf( gettext( "\nReport bugs to &lt;%s&gt;.\n" ), "bug-coreutils@gnu.org" );
  return;
}
#if 0
#endif
