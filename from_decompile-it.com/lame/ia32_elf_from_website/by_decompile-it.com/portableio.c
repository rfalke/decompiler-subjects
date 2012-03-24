#include "portableio.c.h"
int ReadByte( FILE *fp )
{
  int result = _IO_getc( fp ) & 255;
  if ( result & 128 )
  {
    result += -256;
  }
  return result;
}
int Read16BitsLowHigh( FILE *fp )
{
  int first = _IO_getc( fp ) & 255, second = _IO_getc( fp ) & 255, result = first + ( second << 8 );
  if ( result & 32768 )
  {
    result += -65536;
  }
  return result;
}
int Read16BitsHighLow( FILE *fp )
{
  int first = _IO_getc( fp ) & 255, second = _IO_getc( fp ) & 255, result = second + ( first << 8 );
  if ( result & 32768 )
  {
    result += -65536;
  }
  return result;
}
void Write8Bits( FILE *fp, int i )
{
  _IO_putc( i, fp );
  return;
}
void Write16BitsLowHigh( FILE *fp, int i )
{
  _IO_putc( i, fp );
  _IO_putc( i >> 8, fp );
  return;
}
void Write16BitsHighLow( FILE *fp, int i )
{
  _IO_putc( i >> 8, fp );
  _IO_putc( i, fp );
  return;
}
int Read24BitsHighLow( FILE *fp )
{
  int first = _IO_getc( fp ) & 255, second = _IO_getc( fp ) & 255, third = _IO_getc( fp ) & 255;
  int result = third + ( first << 16 ) + ( second << 8 );
  if ( result & 0x800000 )
  {
    result += -16777216;
  }
  return result;
}
int Read32Bits( FILE *fp )
{
  int first = Read16BitsLowHigh( fp ) & 65535, second = Read16BitsLowHigh( fp ) & 65535, result = first + ( second << 16 );
  return result;
}
int Read32BitsHighLow( FILE *fp )
{
  int first = Read16BitsHighLow( fp ) & 65535, second = Read16BitsHighLow( fp ) & 65535, result = second + ( first << 16 );
  return result;
}
void Write32Bits( FILE *fp, int i )
{
  Write16BitsLowHigh( fp, i & 65535 );
  Write16BitsLowHigh( fp, i >> 16 );
  return;
}
void Write32BitsLowHigh( FILE *fp, int i )
{
  Write16BitsLowHigh( fp, i & 65535 );
  Write16BitsLowHigh( fp, i >> 16 );
  return;
}
void Write32BitsHighLow( FILE *fp, int i )
{
  Write16BitsHighLow( fp, i >> 16 );
  Write16BitsHighLow( fp, i & 65535 );
  return;
}
void ReadBytes( FILE *fp, char *p, int n )
{
  for ( ; ( n > 0 ) & ( feof( fp ) == 0 ) & 255; p++ )
  {
    p[0] = _IO_getc( fp );
    // p++;
  }
  return;
}
void ReadBytesSwapped( FILE *fp, char *p, int n )
{
  char *q;
  q[0] = p;
  for ( ; ( n > 0 ) & ( feof( fp ) == 0 ) & 255;  )
  {
    q[0] = _IO_getc( fp );
    q[0] = q + 1;
  }
  q[0] = q + -1;
  for ( ; p < q; p++ )
  {
    n = p[0];
    p[0] = q[0];
    q[0] = n;
    q[0] = q + -1;
    // p++;
  }
  return;
}
void WriteBytes( FILE *fp, char *p, int n )
{
  while ( n += -1, ( n > 0 ) & 255 )
  {
    _IO_putc( p[0], fp );
    p++;
  }
  return;
}
void WriteBytesSwapped( FILE *fp, char *p, int n )
{
  p = &p[ n + -1 ];
  while ( n += -1, ( n > 0 ) & 255 )
  {
    p = &p[ -1 ];
    _IO_putc( p[0], fp );
  }
  return;
}
double ConvertFromIeeeExtended( char *bytes )
{
  double fp6;
  double fp7;
  double f;
  long expon = ( bytes[1] & 255 ) | ( ( bytes[0] & 127 ) << 8 );
  unsigned long hiMant = ( bytes[5] & 255 ) | ( bytes[2] << 24 ) | ( ( bytes[3] & 255 ) << 16 ) | ( ( bytes[4] << 8 ) & 65535 ), loMant = ( bytes[9] & 255 ) | ( bytes[6] << 24 ) | ( ( bytes[7] & 255 ) << 16 ) | ( ( bytes[8] << 8 ) & 65535 );
  if ( expon == 0 && hiMant == 0 && loMant == 0 )
    f = 0.000000000000;
  else
  if ( expon == 32767 )
    f = 0.000000000000;
  else
  {
    expon += -16383;
    expon += -31;
    f = ldexp( (double)( hiMant + -2147483648 ) + 2147483648.000000000000, expon );
    expon += -32;
    f += ldexp( (double)( loMant + -2147483648 ) + 2147483648.000000000000, expon );
  }
  return;
}
double ReadIeeeExtendedHighLow( FILE *fp )
{
  double fp7;
  char bytes[10];
  ReadBytes( fp, bytes, 10 );
  ConvertFromIeeeExtended( bytes );
  return;
}
#if 0
#endif
