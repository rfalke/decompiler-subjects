#include "error.c.h"
unsigned char full_static_version[1024] = { 'E', 'L', 'i', 'n', 'k', 's', ' ', '0', '.', '1', '2', 'p', 'r', 'e', '5' };
int errline;
unsigned char *errfile;
int assert_failed;
void er( int bell, int shall_sleep, unsigned char *fmt, va_list params )
{
  int ecx;
  if ( bell )
  {
    fputc( 7, stderr );
    *ebp_12 = fmt[0];
  }
  __vfprintf_chk( stderr, 1, &fmt[0], params );
  fputc( 10, stderr );
  fflush( stderr );
  if ( shall_sleep )
  {
    params = 1;
  }
  return;
}
void elinks_debug( unsigned char *fmt )
{
  int ecx;
  unsigned char errbuf[4096];
  __snprintf_chk( errbuf, 4096, 1, 4096, "DEBUG MESSAGE at %s:%d: %s", (char*)fmt );
  er( 0, 0, errbuf, ebp_12 );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void elinks_wdebug( unsigned char *fmt )
{
  int ecx;
  unsigned char errbuf[4096];
  __snprintf_chk( errbuf, 4096, 1, 4096, "DEBUG MESSAGE at %s:%d: %s", (char*)fmt );
  er( 0, 1, errbuf, ebp_12 );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void elinks_error( unsigned char *fmt )
{
  int ecx;
  unsigned char errbuf[4096];
  __snprintf_chk( errbuf, 4096, 1, 4096, "ERROR at %s:%d: %s", (char*)fmt );
  er( 1, 1, errbuf, ebp_12 );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void elinks_internal( unsigned char *fmt )
{
  int ecx;
  unsigned char errbuf[4096];
  __snprintf_chk( errbuf, 4096, 1, 4096, "\033[1mINTERNAL ERROR\033[0m at %s:%d: %s", (char*)fmt );
  er( 1, 1, errbuf, ebp_12 );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void usrerror( unsigned char *fmt )
{
  fwrite( "ELinks: ", 1, 8, stderr );
  __vfprintf_chk( stderr, 1, (char*)fmt, ebp_12 );
  fputc( 10, stderr );
  fflush( stderr );
  return;
}
void elinks_assertm( int x, unsigned char *fmt )
{
  unsigned char *buf = 0;
  if ( assert_failed == 0 )
  {
    assert_failed = x == 0;
    if ( !(_Bool)( x != 0 ) )
    {
      __vasprintf_chk( (char**)&buf, 1, (char*)fmt, ebp_16 );
      elinks_internal( "assertion failed: %s" );
      if ( buf )
      {
        free( buf );
        return;
      }
    }
  }
  return;
}
void do_not_optimize_here( void *p )
{
  return;
}
void dump_backtrace( FILE *f, int trouble )
{
  int edx;
  void *stack[20];
  static char strings[256][2] = { { 0 }, { 1 }, { 2 }, { 3 }, { 4 }, { 5 }, { 6 }, { 7 }, { 8 }, { 9 }, { 10 }, { 11 }, { 12 }, { 13 }, { 14 }, { 15 }, { 16 }, { 17 }, { 18 }, { 19 }, { 20 }, { 21 }, { 22 }, { 27 }, { 24 }, { 25 }, { 26 }, { 27 }, { 28 }, { 29 }, { 30 }, { 27 }, { ' ' }, { '!' }, { '"' }, { '#' }, { '$' }, { '%' }, { '&' }, { '\'' }, { '(' }, { ')' }, { '*' }, { '+' }, { ',' }, { '-' }, { '.' }, { '/' }, { '0' }, { '1' }, { '2' }, { '3' }, { '4' }, { '5' }, { '6' }, { '7' }, { '8' }, { '9' }, { ':' }, { ';' }, { '<' }, { '=' }, { '>' }, { '?' }, { '@' }, { 'A' }, { 'B' }, { 'C' }, { 'D' }, { 'E' }, { 'F' }, { 'G' }, { 'H' }, { 'I' }, { 'J' }, { 'K' }, { 'L' }, { 'M' }, { 'N' }, { 'O' }, { 'P' }, { 'Q' }, { 'R' }, { 'S' }, { 'T' }, { 'U' }, { 'V' }, { 'W' }, { 'X' }, { 'Y' }, { 'Z' }, { '[' }, { '\\' }, { ']' }, { '^' }, { '_' }, { '`' }, { 'a' }, { 'b' }, { 'c' }, { 'd' }, { 'e' }, { 'f' }, { 'g' }, { 'h' }, { 'i' }, { 'j' }, { 'k' }, { 'l' }, { 'm' }, { 'n' }, { 'o' }, { 'p' }, { 'q' }, { 'r' }, { 's' }, { 't' }, { 'u' }, { 'v' }, { 'w' }, { 'x' }, { 'y' }, { 'z' }, { '{' }, { '|' }, { '}' }, { '~' }, { 127 }, { -128 }, { -127 }, { -126 }, { -125 }, { -124 }, { -123 }, { -122 }, { -121 }, { -120 }, { -119 }, { -118 }, { -117 }, { -116 }, { -115 }, { -114 }, { -113 }, { -112 }, { -111 }, { -110 }, { -109 }, { -108 }, { -107 }, { -106 }, { -105 }, { -104 }, { -103 }, { -102 }, { -101 }, { -100 }, { -99 }, { -98 }, { -97 }, { -96 }, { -95 }, { -94 }, { -93 }, { -92 }, { -91 }, { -90 }, { -89 }, { -88 }, { -87 }, { -86 }, { -85 }, { -84 }, { -83 }, { -82 }, { -81 }, { -80 }, { -79 }, { -78 }, { -77 }, { -76 }, { -75 }, { -74 }, { -73 }, { -72 }, { -71 }, { -70 }, { -69 }, { -68 }, { -67 }, { -66 }, { -65 }, { -64 }, { -63 }, { -62 }, { -61 }, { -60 }, { -59 }, { -58 }, { -57 }, { -56 }, { -55 }, { -54 }, { -53 }, { -52 }, { -51 }, { -50 }, { -49 }, { -48 }, { -47 }, { -46 }, { -45 }, { -44 }, { -43 }, { -42 }, { -41 }, { -40 }, { -39 }, { -38 }, { -37 }, { -36 }, { -35 }, { -34 }, { -33 }, { -32 }, { -31 }, { -30 }, { -29 }, { -28 }, { -27 }, { -26 }, { -25 }, { -24 }, { -23 }, { -22 }, { -21 }, { -20 }, { -19 }, { -18 }, { -17 }, { -16 }, { -15 }, { -14 }, { -13 }, { -12 }, { -11 }, { -10 }, { -9 }, { -8 }, { -7 }, { -6 }, { -5 }, { -4 }, { -3 }, { -2 }, { -1 } };
  size_t i;
  if ( trouble )
  {
    backtrace_symbols_fd( stack[0], backtrace( stack[0], 20 ), fileno( &f[0] ) );
    return;
  }
  strings[0][0] = backtrace_symbols( stack[0], backtrace( stack[0], 20 ) );
  __fprintf_chk( &f[0], 1, "Obtained %d stack frames:\n", backtrace( stack[0], 20 ) );
  if ( backtrace( stack[0], 20 ) )
  {
    i = 0;
    do
    {
      i++;
      __fprintf_chk( &f[0], 1, "[%p] %s\n", stack[ i ], &strings[ i * 2 ][0] );
    }
    while ( backtrace( stack[0], 20 ) <= i );
  }
  free( &edx );
  fflush( &f[0] );
  return;
}
#if 0
#endif
