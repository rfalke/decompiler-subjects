#include "argmatch.c.h"
static void __argmatch_die( void );
argmatch_exit_fn argmatch_die = &__argmatch_die;
void __argmatch_die( void )
{
  usage( 1 );
  return;
}
ptrdiff_t argmatch( char *arg, char **arglist, char *vallist, size_t valsize )
{
  size_t i;
  size_t arglen;
  ptrdiff_t matchind = -1;
  _Bool ambiguous = 0;
  arglen = strlen( arg );
  i = 0;
  for ( ; arglist[ i ] != 0; i++ )
  {
    if ( strncmp( arglist[ i ], arg, arglen ) == 0 )
    {
      if ( strlen( arglist[ i ] ) == arglen )
      {
        return i;
      }
      if ( matchind == -1 )
        matchind = i;
      else
      if ( vallist == 0 || memcmp( &vallist[ valsize * matchind ], &vallist[ valsize * i ], valsize ) != 0 )
        ambiguous = 1;
    }
    //i++;
  }
  if ( ambiguous != 0 )
  {
    return -2;
  }
  return matchind;
}
void argmatch_invalid( char *context, char *value, ptrdiff_t problem )
{
  char *format = gettext( "invalid argument %s for %s" );
  error( 0, 0, format, quotearg_n_style( 0, locale_quoting_style, value ), quote_n( 1, context ) );
  return;
}
void argmatch_valid( char **arglist, char *vallist, size_t valsize )
{
  size_t i;
  char *last_val = 0;
  fprintf( *(int*)(134590756), gettext( "Valid arguments are:" ) );
  i = 0;
  for ( ; arglist[ i ] != 0; i++ )
  {
    if ( i == 0 || memcmp( last_val, &vallist[ valsize * i ], valsize ) != 0 )
    {
      fprintf( *(int*)(134590756), "\n  - `%s'", arglist[ i ] );
      last_val = &vallist[ valsize * i ];
    }
    else
      fprintf( *(int*)(134590756), ", `%s'", arglist[ i ] );
    //i++;
  }
  putc_unlocked( 10, *(int*)(134590756) );
  return;
}
ptrdiff_t __xargmatch_internal( char *context, char *arg, char **arglist, char *vallist, size_t valsize, argmatch_exit_fn exit_fn )
{
  ptrdiff_t res = argmatch( arg, arglist, vallist, valsize );
  if ( res >= 0 )
  {
    return res;
  }
  argmatch_invalid( context, arg, res );
  argmatch_valid( arglist, vallist, valsize );
  exit_fn( );
  return -1;
}
char *argmatch_to_argument( char *value, char **arglist, char *vallist, size_t valsize )
{
  size_t i = 0;
  for ( ; arglist[ i ] != 0; i++ )
  {
    if ( memcmp( value, &vallist[ valsize * i ], valsize ) == 0 )
    {
      return arglist[ i ];
    }
    //i++;
  }
  return 0;
}
