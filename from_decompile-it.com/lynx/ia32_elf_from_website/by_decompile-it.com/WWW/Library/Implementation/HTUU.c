#include "HTUU.c.h"
static char six2pr[64];
static unsigned char pr2six[256];
int HTUU_encode( unsigned char *bufin, unsigned int nbytes, char *bufcoded )
{
  char *outptr = bufcoded;
  unsigned int i = 0;
  for ( ; i < nbytes; i += 3 )
  {
    outptr[0] = six2pr[ bufin[0] >> 2 ];
    outptr++;
    outptr[0] = six2pr[ ( bufin[1] >> 4 ) | ( ( bufin[0] << 4 ) & 48 ) ];
    outptr++;
    outptr[0] = six2pr[ ( bufin[2] >> 6 ) | ( ( bufin[1] << 2 ) & 60 ) ];
    outptr++;
    outptr[0] = six2pr[ bufin[2] & 63 ];
    outptr++;
    bufin += 3;
    // i += 3;
  }
  if ( i == nbytes + 1 )
  {
    outptr[ -1 ] = '=';
  }
  if ( i == nbytes + 2 )
  {
    outptr[ -1 ] = '=';
    outptr[ -2 ] = '=';
  }
  outptr[0] = 0;
  return outptr - bufcoded;
}
int HTUU_decode( char *bufcoded, unsigned char *bufplain, int outbufsize )
{
  int eax;
  static int first = 1;
  int nbytesdecoded, j;
  char *bufin;
  unsigned char *bufout = bufplain;
  int nprbytes;
  if ( first )
  {
    first = 0;
    j = 0;
    for ( ; j <= 255; j++ )
    {
      pr2six[ j ] = 64;
      // j++;
    }
    j = 0;
    for ( ; j <= 63; j++ )
    {
      pr2six[ six2pr[ j ] ] = j;
      // j++;
    }
  }
  while ( bufcoded[0] == ' ' || bufcoded[0] == '\t' )
  {
    bufcoded++;
  }
  bufin = bufcoded;
  do
  {
    bufin++;
  }
  while ( ( '?' <= pr2six[ bufin[0] ] ) & 255 );
  nprbytes = ( bufin - bufcoded ) + -1;
  nbytesdecoded = ( ( nprbytes + 3 ) / 4 ) * 3;
  if ( outbufsize < nbytesdecoded )
    nprbytes = ( outbufsize << 2 ) / 3;
  bufin = bufcoded;
  for ( ; nprbytes > 0;  )
  {
    bufout[0] = ( pr2six[ bufin[1] ] >> 4 ) | ( pr2six[ bufin[0] ] << 2 );
    bufout++;
    bufout[0] = ( pr2six[ bufin[2] ] >> 2 ) | ( pr2six[ bufin[1] ] << 4 );
    bufout++;
    bufout[0] = pr2six[ bufin[3] ] | ( pr2six[ bufin[2] ] << 6 );
    bufout++;
    bufin += 4;
    nprbytes += -4;
  }
  if ( __MOD(nprbytes,4) )
  {
    if ( pr2six[ bufin[ -2 ] ] < '?' )
    {
      nbytesdecoded += -2;
    }
    else
    {
      nbytesdecoded += -1;
    }
  }
  return nbytesdecoded;
}
#if 0
#endif
