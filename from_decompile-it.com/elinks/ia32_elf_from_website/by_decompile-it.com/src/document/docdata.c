#include "docdata.c.h"
struct line *realloc_lines( struct document *document, int y )
{
  int eax;
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = document[0].next == 0;
    if ( !(_Bool)( document[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/docdata.c";
      errline = 20;
      elinks_internal( "assertion document failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( document->height <= y )
    {
      y = y + 1;
      if ( ( ( document->height + 127 ) & -128 ) < ( ( y + 128 ) & -128 ) )
      {
        *ebp_28 = y + 1;
        *ebp_32 = ( ( y + 128 ) & -128 ) << 3;
        if ( mem_realloc( (void*)document->data, ( ( y + 128 ) & -128 ) << 3 ) == 0 )
        {
          return 0;
        }
        document->data = (struct line*)mem_realloc( (void*)document->data, ( ( y + 128 ) & -128 ) << 3 );
        memset( document->data + ( ( ( document->height + 127 ) & -128 ) << 3 ), 0, ( ( ( y + 128 ) & -128 ) << 3 ) - ( ( ( document->height + 127 ) & -128 ) << 3 ) );
      }
      if ( document->data )
        document->height = y + 1;
      else
      {
        return 0;
      }
    }
    return &document->data[ y ];
  }
B2:  assert_failed = 0;
  y = y;
}
#if 0
#endif
