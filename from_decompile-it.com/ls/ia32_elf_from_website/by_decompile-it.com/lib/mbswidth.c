#include "mbswidth.c.h"
int gnu_mbswidth( char *string, int flags )
{
  return mbsnwidth( string, strlen( string ), flags );
}
int mbsnwidth( char *string, size_t nbytes, int flags )
{
  char *p = string;
  char *plimit = &p[ nbytes ];
  int width = 0;
  if ( __ctype_get_mb_cur_max( ) > 1 )
  {
    do
    {
      if ( p < plimit )
      {
        switch ( p[0] )
        {
          if ( p[0] - 37 <= 26 )
          {
          }
          else
          {
            mbstate_t mbstate;
            memset( &mbstate.__count, 0, 8 );
            break;
          }
          break;
          if ( p[0] - 97 <= 29 )
          {
            p++;
            width++;
          }
          break;
        default:
          break;
        }
      }
      else
      {
        return width;
      }
    }
    while ( mbsinit( &mbstate.__count ) != 0 );
  {
    wchar_t wc;
    size_t bytes = mbrtowc( &wc, p, plimit - p, &mbstate.__count );
    int w;
    if ( bytes == -1 )
    {
      if ( ( flags & 1 ) == 0 )
      {
        p++;
        width++;
      }
      else
      {
        return -1;
      }
    }
    else
    if ( bytes == -2 )
    {
      if ( ( flags & 1 ) == 0 )
      {
        p = plimit;
        width++;
      }
      else
      {
        return -1;
      }
    }
    else
    {
      if ( bytes == 0 )
        bytes = 1;
      w = wcwidth( &wc );
      if ( w >= 0 )
        width += w;
      else
      if ( ( flags & 2 ) == 0 )
      {
        width += iswcntrl( &wc ) == 0;
      }
      else
      {
        return -1;
      }
      p = &p[ bytes ];
      if ( mbsinit( &mbstate.__count ) != 0 )
        continue;
      else
      {
        wchar_t wc;
        size_t bytes = mbrtowc( &wc, p, plimit - p, &mbstate.__count );
        int w;
      }
    }
  }
  }
  else
  while ( p < plimit )
  {
    unsigned char c = p[0];
    p++;
    if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 16384 ) == 0 )
    {
      if ( ( flags & 2 ) == 0 )
      {
        width += ( *(short*)(*(int*)(__ctype_b_loc( )) + ( c * 2 )) & 2 ) == 0;
      }
      else
      {
        return -1;
      }
    }
    else
    {
      width++;
    }
  }
  return width;
}
