#include "objcode.c.h"
int opstatus;
unsigned char *objcode;
unsigned long position;
unsigned long allocated;
char *globalfile;
(mu & 0xFFFFFFFF) = (unsigned int)(mu & 0xFFFFFFFF) & ( ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 );
(mu << 32) = (unsigned int)(mu << 32) & ( ( ( 0 ? (/*HI*/int)( (long long)1 << ( ~( i - size ) << 3 ) ) : 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 ) + ( ( ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 < ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) ) & 1 ) );
void quantum_mu2char( unsigned long long mu, unsigned char *buf )
{
  int eax;
  int edx;
  int i, size = 8;
  i = 0;
  (mu & 0xFFFFFFFF) = (unsigned int)(mu & 0xFFFFFFFF) & ( ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 );
  (mu << 32) = (unsigned int)(mu << 32) & ( ( ( 0 ? (/*HI*/int)( (long long)1 << ( ~( i - size ) << 3 ) ) : 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 ) + ( ( ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 < ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) ) & 1 ) );
  for ( ; i < size; i++ )
  {
    (mu & 0xFFFFFFFF) = (unsigned int)(mu & 0xFFFFFFFF) & ( ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 );
    (mu << 32) = (unsigned int)(mu << 32) & ( ( ( 0 ? (/*HI*/int)( (long long)1 << ( ~( i - size ) << 3 ) ) : 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 ) + ( ( ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) - 1 < ( 0 ? 1 << ( ~( i - size ) << 3 ) : 0 ) ) & 1 ) );
    buf[ i ] = (mu << 32) >> (unsigned char)( ~( i - size ) << 3 );
    //i++;
  }
  return;
}
void quantum_int2char( int j, unsigned char *buf )
{
  int i, size = 4;
  i = 0;
  for ( ; i < size; i++ )
  {
    buf[ i ] = j / ( 1 << ( ~( i - size ) << 3 ) );
    j = j % ( 1 << ( ~( i - size ) << 3 ) );
    //i++;
  }
  return;
}
void quantum_double2char( double d, unsigned char *buf )
{
  int i;
  unsigned char *p = &d;
  i = 0;
  for ( ; i <= 7; i++ )
  {
    buf[ i ] = p[ i ];
    //i++;
  }
  return;
}
  (mu & 0xFFFFFFFF) = (unsigned int)(mu & 0xFFFFFFFF) + 0;
  (mu << 32) = (unsigned int)(mu << 32) + edx + ( ( (unsigned int)(mu & 0xFFFFFFFF) + eax < (unsigned int)(mu & 0xFFFFFFFF) ) & 1 );
unsigned long long quantum_char2mu( unsigned char *buf )
{
  int eax;
  int edx;
  int i, size;
  unsigned long long mu = 0;
  size = 8;
  i = size - 1;
  (mu & 0xFFFFFFFF) = (unsigned int)(mu & 0xFFFFFFFF) + 0;
  (mu << 32) = (unsigned int)(mu << 32) + edx + ( ( (unsigned int)(mu & 0xFFFFFFFF) + eax < (unsigned int)(mu & 0xFFFFFFFF) ) & 1 );
  for ( ; i >= 0; i-- )
  {
    (mu & 0xFFFFFFFF) = (unsigned int)(mu & 0xFFFFFFFF) + 0;
    (mu << 32) = (unsigned int)(mu << 32) + edx + ( ( (unsigned int)(mu & 0xFFFFFFFF) + eax < (unsigned int)(mu & 0xFFFFFFFF) ) & 1 );
    //i--;
  }
  return mu;
}
int quantum_char2int( unsigned char *buf )
{
  int i, size;
  int j = 0;
  size = 4;
  i = size - 1;
  for ( ; i >= 0; i-- )
  {
    j += buf[ i ] << ( ~( i - size ) << 3 );
    //i--;
  }
  return j;
}
double quantum_char2double( unsigned char *buf )
{
  double *d = (double*)buf;
  return d[0];
}
void quantum_objcode_start( void )
{
  opstatus = 1;
  allocated = 1;
  objcode = malloc( 65536 );
  if ( objcode == 0 )
    quantum_error( 2 );
  quantum_memman( 65536 );
  return;
}
void quantum_objcode_stop( void )
{
  opstatus = 0;
  free( objcode );
  objcode = 0;
  quantum_memman( allocated * -65536 );
  allocated = 0;
  return;
}
int quantum_objcode_put( unsigned char operation, ... )
{
  int eax;
  int i, size = 0;
  va_list args;
  unsigned char buf[80];
  double d;
  unsigned long long mu;
  if ( opstatus == 0 )
  {
  }
  else
  {
    __builtin_va_start( args, operation );
    buf[0] = operation;
    switch ( operation )
    {
      quantum_error( 65537 );
      break;
      break;
    default:
      break;
    case 0:
      mu = __builtin_va_arg( args, unsigned long long );
      quantum_mu2char( mu, &buf[1] );
      size = 9;
      break;
    case 1:
    case 12:
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[1] );
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[5] );
      size = 9;
      break;
    case 2:
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[1] );
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[5] );
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[9] );
      size = 13;
      break;
    case 14:
    case 129:
    case 130:
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[1] );
      size = 5;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      i = __builtin_va_arg( args, int );
      d = __builtin_va_arg( args, double );
      quantum_int2char( i, &buf[1] );
      quantum_double2char( d, &buf[5] );
      size = 13;
      break;
    case 13:
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[1] );
      i = __builtin_va_arg( args, int );
      quantum_int2char( i, &buf[5] );
      d = __builtin_va_arg( args, double );
      quantum_double2char( d, &buf[9] );
      size = 17;
      break;
    case 128:
    case 255:
      size = 1;
      break;
    }
    if ( ( position >> 16 ) < ( ( size + position ) >> 16 ) )
    {
      allocated++;
      objcode = realloc( objcode, allocated << 16 );
      if ( objcode == 0 )
        quantum_error( 2 );
      quantum_memman( 65536 );
    }
    i = 0;
    for ( ; i < size; i++ )
    {
      objcode[ position ] = buf[ i ];
      position++;
      //i++;
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
int quantum_objcode_write( char *file )
{
  FILE *fhd;
  if ( opstatus == 0 )
  {
    fwrite( "Object code generation not active! Forgot to call quantum_objcode_start?\n", 1, 73, *(int*)(134570144) );
    return 1;
  }
  if ( file == 0 )
    file = globalfile;
  fhd = fopen( file, "w" );
  if ( fhd == 0 )
  {
    return -1;
  }
  fwrite( objcode, position, 1, fhd );
  fclose( fhd );
  return 0;
}
void quantum_objcode_file( char *file )
{
  globalfile = file;
  return;
}
void quantum_objcode_exit( char *file )
{
  quantum_objcode_write( 0 );
  quantum_objcode_stop( );
  return;
}
void quantum_objcode_run( char *file, quantum_reg *reg )
{
  int i, j, k, l;
  FILE *fhd = fopen( file, "r" );
  unsigned char operation;
  unsigned char buf[80];
  unsigned long long mu;
  double d;
  if ( fhd == 0 )
  {
    fprintf( *(int*)(134570144), "quantum_objcode_run: Could not open %s: ", file );
    perror( 0 );
  }
  i = 0;
  for ( ; feof( fhd ) == 0; i++ )
    fclose( fhd );
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
      break;
    }
    else
      break;
}
