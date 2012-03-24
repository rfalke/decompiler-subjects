#include "HTAtom.c.h"
static HTAtom *hash_table[101];
static BOOLEAN initialised;
HTAtom *HTAtom_for( char *string )
{
  int hash;
  HTAtom *a;
  if ( initialised == 0 )
  {
    int i = 0;
    for ( ; i <= 100; i++ )
    {
      hash_table[ i ] = 0;
      // i++;
    }
    initialised = 1;
  }
  hash = ( strlen( string ) * string ) - ( ( ( (/*HI*/int)( 0x446f8657 * ( strlen( string ) * string ) ) + ( ( ( strlen( string ) * string ) - (/*HI*/int)( 0x446f8657 * ( strlen( string ) * string ) ) ) >> 1 ) ) >> 6 ) * 101 );
  a = hash_table[ hash ];
  for ( ; a;  )
  {
    if ( strcasecomp( &a->name, string ) == 0 )
    {
      return a;
    }
    a = &a->next;
  }
  a = malloc( ( 1 ) * sizeof( HTAtom ) );
  if ( a == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAtom.c", "HTAtom_for" );
  a->name = malloc( strlen( string ) + 1 );
  if ( a->name == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAtom.c", "HTAtom_for" );
  strcpy( &a->name, string );
  a->next = hash_table[ hash ];
  hash_table[ hash ] = a;
  return a;
}
BOOLEAN mime_match( char *name, char *templ )
{
  static char *n1;
  static char *t1;
  if ( name && templ )
  {
    char *n2;
    char *t2;
    HTSACopy( &n1, name );
    HTSACopy( &t1, templ );
    n2 = strchr( n1, '/' );
    if ( n2 )
    {
      t2 = strchr( t1, '/' );
      if ( t2 == 0 )
      {
        return 0;
      }
      n2 = 0;
      n2++;
      t2 = 0;
      t2++;
      if ( ( strcmp( t1, "*" ) == 0 || strcmp( t1, n1 ) == 0 ) && ( strcmp( t2, "*" ) == 0 || strcmp( t2, n2 ) == 0 ) )
      {
        return 0;
      }
    }
    return 0;
  }
  return 0;
}
HTList *HTAtom_templateMatches( char *templ )
{
  HTList *matches = HTList_new( );
  if ( initialised && templ )
  {
    int i = 0;
    HTAtom *cur;
    for ( ; i <= 100; i++ )
    {
      cur = hash_table[ i ];
      for ( ; cur;  )
      {
        if ( mime_match( &cur->name, templ ) & 255 )
          HTList_addObject( matches, (void*)cur );
        cur = &cur->next;
      }
      // i++;
    }
  }
  return matches;
}
#if 0
#endif
