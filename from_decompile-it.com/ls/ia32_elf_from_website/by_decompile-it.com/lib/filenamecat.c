#include "filenamecat.c.h"
static char *longest_relative_suffix( char *f );
char *longest_relative_suffix( char *f )
{
  for ( ; f[0] == '/'; f++ )
  {
    //f++;
  }
  return f;
}
char *mfile_name_concat( char *dir, char *abase, char **base_in_result )
{
  char *dirbase = last_component( dir );
  size_t dirbaselen = base_len( dirbase );
  size_t dirlen = dirbaselen + ( dirbase - dir );
  size_t needs_separator = dirbaselen == 0 || dirbase[ dirbaselen - 1 ] == '/' ? 0 : 1;
  char *base = longest_relative_suffix( abase );
  size_t baselen = strlen( base );
  char *p_concat = malloc( ( baselen + needs_separator + dirlen + 1 ) * sizeof( char ) );
  char *p;
  if ( p_concat == 0 )
  {
    return 0;
  }
  p = mempcpy( p_concat, dir, dirlen );
  p[0] = '/';
  p = &p[ needs_separator ];
  if ( base_in_result != 0 )
    base_in_result[0] = &p[ ( abase[0] == '/' ) * -1 ];
  p = mempcpy( p, base, baselen );
  p[0] = 0;
  return p_concat;
}
char *file_name_concat( char *dir, char *abase, char **base_in_result )
{
  char *p = mfile_name_concat( dir, abase, base_in_result );
  if ( p == 0 )
  {
    xalloc_die( );
  }
  return p;
}
