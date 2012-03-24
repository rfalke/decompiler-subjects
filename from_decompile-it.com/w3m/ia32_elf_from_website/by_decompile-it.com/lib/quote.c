#include "quote.c.h"
char *quote_n( int n, char *name )
{
  return quotearg_n_style( n, locale_quoting_style, name );
}
char *quote( char *name )
{
  return quote_n( 0, name );
}
