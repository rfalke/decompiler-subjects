#include "LYHash.c.h"
int hash_code( char *string )
{
  int hash;
  char *p = string;
  hash = 0;
  for ( ; p[0]; p++ )
  {
    hash = ( (/*HI*/int)( 0x3ffe001 * ( ( hash * 3 ) + p[0] ) ) >> 7 ) - ( ( ( hash * 3 ) + p[0] ) >> 31 );
    hash = ( ( hash * 3 ) + p[0] ) - ( hash * 8193 );
    // p++;
  }
  return hash;
}
int hash_code_lowercase_on_fly( char *string )
{
  int hash;
  char *p = string;
  hash = 0;
  for ( ; p[0]; p++ )
  {
    hash = ( (/*HI*/int)( 0x3ffe001 * ( ( hash * 3 ) + p[0] ) ) >> 7 ) - ( ( ( hash * 3 ) + p[0] ) >> 31 );
    hash = ( ( hash * 3 ) + p[0] ) - ( hash * 8193 );
    // p++;
  }
  return hash;
}
int hash_code_aggregate_char( char c, int hash )
{
  return ( (/*HI*/int)( 0x3ffe001 * ( ( hash * 3 ) + c ) ) >> 7 ) - ( ( ( hash * 3 ) + c ) >> 31 );
  return ( ( hash * 3 ) + c ) - ( ebp_12 * 8193 );
}
int hash_code_aggregate_lower_str( char *string, int hash_was )
{
  int hash;
  char *p = string;
  hash = hash_was;
  for ( ; p[0]; p++ )
  {
    hash = ( (/*HI*/int)( 0x3ffe001 * ( ( hash * 3 ) + p[0] ) ) >> 7 ) - ( ( ( hash * 3 ) + p[0] ) >> 31 );
    hash = ( ( hash * 3 ) + p[0] ) - ( hash * 8193 );
    // p++;
  }
  return hash;
}
#if 0
#endif
