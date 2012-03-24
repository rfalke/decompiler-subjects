#include "HTStyle.c.h"
HTStyle *HTStyleNew( void )
{
  HTStyle *self = calloc( 1, sizeof( HTStyle ) );
  if ( self == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTStyle.c", "HTStyleNew" );
  }
  return self;
}
HTStyle *HTStyleNewNamed( char *name )
{
  HTStyle *self = HTStyleNew( );
  HTSACopy( &self->name, name );
  self->id = -1;
  return self;
}
HTStyle *HTStyleFree( HTStyle *self )
{
  if ( self->name )
  {
    free( &self->name );
    self->name = 0;
  }
  if ( self->SGMLTag )
  {
    free( &self->SGMLTag );
    self->SGMLTag = 0;
  }
  if ( self )
  {
    free( self );
    self = 0;
  }
  return 0;
}
HTStyle *HTStyleNamed( HTStyleSheet *self, char *name )
{
  HTStyle *scan = &self->styles;
  for ( ; scan;  )
  {
    if ( strcmp( &scan->name, name ) == 0 )
    {
      return scan;
    }
    scan = &scan->next;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "StyleSheet: No style named `%s'\n", name );
  }
  return 0;
}
HTStyleSheet *HTStyleSheetAddStyle( HTStyleSheet *self, HTStyle *style )
{
  style->next = 0;
  if ( self->styles == 0 )
  {
    self->styles = style;
  }
{
  HTStyle *scan = &self->styles;
  for ( ; scan->next;  )
  {
    scan = &scan->next;
  }
  *ebp_4 = style;
}
  return self;
}
HTStyleSheet *HTStyleSheetRemoveStyle( HTStyleSheet *self, HTStyle *style )
{
  if ( self->styles == style )
  {
    self->styles = style->next;
    return self;
  }
{
  HTStyle *scan = &self->styles;
  for ( ; scan;  )
  {
    if ( scan->next == style )
    {
      scan->next = style->next;
      return self;
    }
    scan = &scan->next;
  }
  return 0;
}
}
HTStyleSheet *HTStyleSheetNew( void )
{
  HTStyleSheet *self = calloc( 1, sizeof( HTStyleSheet ) );
  if ( self == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTStyle.c", "HTStyleSheetNew" );
  }
  return self;
}
HTStyleSheet *HTStyleSheetFree( HTStyleSheet *self )
{
  HTStyle *style;
  while ( style = &self->styles, style )
  {
    self->styles = style->next;
    HTStyleFree( style );
  }
  if ( self )
  {
    free( self );
    self = 0;
  }
  return 0;
}
#if 0
#endif
