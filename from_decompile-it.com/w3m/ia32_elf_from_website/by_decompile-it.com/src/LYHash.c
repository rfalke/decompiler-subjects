#include "LYHash.c.h"
int hash_code( char *string )
{
  int hash;
  char *p = string;
  hash = 0;
  for ( ; ( p[0] & 255 ) != 0; p++ )
  {
    hash = ( (/*HI*/int)( 67100673 * ( ( hash * 3 ) + p[0] ) ) >> 7 ) - ( ( ( hash * 3 ) + p[0] ) >> 31 );
    hash = ( ( hash * 3 ) + p[0] ) - ( hash * 8193 );
    //p++;
  }
  return hash;
}
int hash_code_lowercase_on_fly( char *string )
{
  int hash;
  char *p = string;
  hash = 0;
  for ( ; ( p[0] & 255 ) != 0; p++ )
  {
    hash = ( (/*HI*/int)( 67100673 * ( ( hash * 3 ) + ( ( *(short*)(*(int*)(tolower( p[0] )) + ( p[0] * 2 )) & 256 ) == 0 ? p[0] : tolower( p[0] ) ) ) ) >> 7 ) - ( ( ( hash * 3 ) + ( ( *(short*)(*(int*)(tolower( p[0] )) + ( p[0] * 2 )) & 256 ) == 0 ? p[0] : tolower( p[0] ) ) ) >> 31 );
    hash = ( ( hash * 3 ) + ( ( *(short*)(*(int*)(tolower( p[0] )) + ( p[0] * 2 )) & 256 ) == 0 ? p[0] : tolower( p[0] ) ) ) - ( hash * 8193 );
    //p++;
  }
  return hash;
}
int hash_code_aggregate_char( char c, int hash )
{
  return ( (/*HI*/int)( 67100673 * ( ( hash * 3 ) + c ) ) >> 7 ) - ( ( ( hash * 3 ) + c ) >> 31 );
  return ( ( hash * 3 ) + c ) - ( ebp_12 * 8193 );
}
int hash_code_aggregate_lower_str( char *string, int hash_was )
{
  int hash;
  char *p = string;
  hash = hash_was;
  for ( ; ( p[0] & 255 ) != 0; p++ )
  {
    hash = ( (/*HI*/int)( 67100673 * ( ( hash * 3 ) + ( ( *(short*)(*(int*)(tolower( p[0] )) + ( p[0] * 2 )) & 256 ) == 0 ? p[0] : tolower( p[0] ) ) ) ) >> 7 ) - ( ( ( hash * 3 ) + ( ( *(short*)(*(int*)(tolower( p[0] )) + ( p[0] * 2 )) & 256 ) == 0 ? p[0] : tolower( p[0] ) ) ) >> 31 );
    hash = ( ( hash * 3 ) + ( ( *(short*)(*(int*)(tolower( p[0] )) + ( p[0] * 2 )) & 256 ) == 0 ? p[0] : tolower( p[0] ) ) ) - ( hash * 8193 );
    //p++;
  }
  return hash;
}
