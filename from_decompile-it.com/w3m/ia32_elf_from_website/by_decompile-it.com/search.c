#include "search.c.h"
static void set_mark( Line *l, int pos, int epos );
static int open_migemo( char *migemo_command );
static char *migemostr( char *str );
static int map_cmp( void *a, void *b );
static int map3_cmp( void *a, void *b );
static int map_range_cmp( void *a, void *b );
static int map2_range_cmp( void *a, void *b );
static int map3_range_cmp( void *a, void *b );
static FILE *migemor;
static FILE *migemow;
static int migemo_running;
static int migemo_pid;
int map_cmp( void *a, void *b )
{
  return ((int*)a)[0] - ((int*)b)[0];
}
void set_mark( Line *l, int pos, int epos )
{
  for ( ; pos < epos && pos < l->size; pos++ )
  {
    l->propBuf[ pos ] = l->propBuf[ pos ] | 1;
    //pos++;
  }
  return;
}
int map3_cmp( void *a, void *b )
{
  return ((int*)a)[0] - ( ((int*)b)[0] | ( ((int*)b)[0] << 16 ) );
}
int map_range_cmp( void *a, void *b )
{
  int eax;
  return 0 ? -1 : ((int*)b)[0] < ((int*)a)[0];
}
void init_migemo( void )
{
  migemo_active = migemo_running = use_migemo;
  if ( migemor != 0 )
    fclose( migemor );
  if ( migemow != 0 )
    fclose( migemow );
  migemor = migemow = 0;
  if ( migemo_pid != 0 )
  {
    kill( &migemo_pid, 9 );
  }
  migemo_pid = 0;
  return;
}
int map2_range_cmp( void *a, void *b )
{
  int eax;
  return 0 ? -1 : 0;
}
int map3_range_cmp( void *a, void *b )
{
  int eax;
  return 0 ? -1 : ((int*)b)[0] < ((int*)a)[0];
}
int open_migemo( char *migemo_command )
{
  migemo_pid = open_pipe_rw( &migemor, &migemow );
  if ( migemo_pid < 0 )
  {
    migemo_pid = 0;
    migemo_active = migemo_running = 0;
  }
  else
  {
    if ( migemo_pid == 0 )
    {
      setup_child( 0, 2, -1 );
      myExec( migemo_command );
    }
  }
  return 1;
}
wc_map *wc_map_search( wc_uint16 code, wc_map *map, size_t n )
{
  return bsearch( &code, map, n, 4, &map_cmp );
}
wc_map3 *wc_map3_search( wc_uint16 c1, wc_uint16 c2, wc_map3 *map, size_t n )
{
  wc_uint32 code = c2 | ( c1 << 16 );
  return bsearch( &code, map, n, 6, &map3_cmp );
}
wc_map *wc_map_range_search( wc_uint16 code, wc_map *map, int n )
{
  return bsearch( &code, map, n, 4, &map_range_cmp );
}
char *migemostr( char *str )
{
  int eax;
  Str tmp = 0;
  if ( migemor != 0 )
  {
    if ( migemow == 0 )
    {
      if ( open_migemo( migemo_command ) == 0 )
      {
        return str;
      }
      fprintf( migemow, "%s\n", *(int*)(wc_Str_conv_strict( Strnew_charp( str ), InnerCharset, SystemCharset )) );
    }
    else
    {
      fprintf( migemow, "%s\n", *(int*)(wc_Str_conv_strict( Strnew_charp( str ), InnerCharset, SystemCharset )) );
    }
  }
  else
  {
  }
}
wc_map *wc_map2_range_search( wc_uint16 code, wc_map *map, size_t n )
{
  return bsearch( &code, map, n, 4, &map2_range_cmp );
}
wc_map3 *wc_map3_range_search( wc_uint16 code, wc_map3 *map, size_t n )
{
  return bsearch( &code, map, n, 6, &map3_range_cmp );
}
char *conv_search_string( char *str, wc_ces f_ces )
{
  if ( ( SearchConv & 255 ) != 0 && ( WcOption.pre_conv & 255 ) == 0 && CurrentTab->currentBuffer->document_charset != f_ces )
  {
    str = wtf_conv_fit( str, CurrentTab->currentBuffer->document_charset );
  }
  return str;
}
int forwardSearch( Buffer *buf, char *str )
{
  char *p, *first, *last;
  Line *l, *begin;
  int wrapped = 0;
  int pos;
  if ( migemo_active >= 1 )
  {
    p = regexCompile( migemostr( str ), IgnoreCase );
    if ( p != 0 )
    {
      p = regexCompile( str, IgnoreCase );
      if ( p != 0 )
      {
        message( p, 0, 0 );
        return 2;
      }
    }
  }
  else
  {
    p = regexCompile( str, IgnoreCase );
    if ( p != 0 )
    {
      message( p, 0, 0 );
      return 2;
    }
  }
  l = buf->currentLine;
  if ( l == 0 )
  {
    return 2;
  }
  else
  {
    pos = buf->pos;
    if ( l->bpos != 0 )
    {
      pos += l->bpos;
      for ( ; l->bpos != 0 && l->prev != 0; l = l->prev )
      {
        //l = l->prev;
      }
    }
    begin = l;
    for ( ; pos < l->size && ( l->propBuf[ pos ] & 1024 ) != 0; pos++ )
    {
      //pos++;
    }
    if ( pos < l->size && regexMatch( &l->lineBuf[ pos ], l->size - pos, 0 ) == 1 )
    {
      matchedPosition( &first, &last );
      pos = first - l->lineBuf;
      for ( ; l->len <= pos && l->next != 0 && l->next != 0; l = l->next )
      {
        pos -= l->len;
        //l = l->next;
      }
      buf->pos = pos;
      if ( buf->currentLine != l )
        gotoLine( buf, l->linenumber );
      arrangeCursor( buf );
      set_mark( l, pos, last[ pos ] - first );
      return 2;
    }
    else
    {
      l = l->next;
      while ( 1 )
      {
        if ( l == 0 )
        {
          if ( buf->pagerSource != 0 )
          {
            l = getNextPage( buf, 1 );
            if ( l == 0 )
            {
              if ( WrapSearch != 0 && wrapped == 0 )
              {
                l = buf->firstLine;
                wrapped = 1;
              }
              else
                break;
            }
          }
          else
          if ( WrapSearch != 0 )
          {
            l = buf->firstLine;
            wrapped = 1;
          }
          else
          {
            break;
          }
        }
        if ( l->bpos != 0 )
        {
        }
        else
        {
          if ( regexMatch( l->lineBuf, l->size, 1 ) == 1 )
          {
            matchedPosition( &first, &last );
            pos = first - l->lineBuf;
            for ( ; l->len <= pos && l->next != 0 && l->next != 0; l = l->next )
            {
              pos -= l->len;
              //l = l->next;
            }
            buf->pos = pos;
            buf->currentLine = l;
            gotoLine( buf, l->linenumber );
            arrangeCursor( buf );
            set_mark( l, pos, last[ pos ] - first );
            break;
          }
          else
          if ( wrapped != 0 )
          {
            if ( l != begin )
            {
            }
            else
            {
              break;
            }
          }
        }
        l = l->next;
      }
      return 2;
    }
  }
}
int backwardSearch( Buffer *buf, char *str )
{
  char *p, *q, *found, *found_last, *first, *last;
  Line *l, *begin;
  int wrapped = 0;
  int pos;
  if ( migemo_active >= 1 )
  {
    p = regexCompile( migemostr( str ), IgnoreCase );
    if ( p != 0 )
    {
      p = regexCompile( str, IgnoreCase );
      if ( p != 0 )
      {
        message( p, 0, 0 );
        return 2;
      }
    }
  }
  else
  {
    p = regexCompile( str, IgnoreCase );
    if ( p != 0 )
    {
      message( p, 0, 0 );
      return 2;
    }
  }
  l = buf->currentLine;
  if ( l == 0 )
  {
    return 2;
  }
  else
  {
    pos = buf->pos;
    if ( l->bpos != 0 )
    {
      pos += l->bpos;
      for ( ; l->bpos != 0 && l->prev != 0; l = l->prev )
      {
        //l = l->prev;
      }
    }
    begin = l;
    if ( pos >= 1 )
    {
      pos--;
      for ( ; pos >= 1 && ( l->propBuf[ pos ] & 1024 ) != 0; pos-- )
      {
        //pos--;
      }
      p = &l->lineBuf[ pos ];
      found = 0;
      found_last = 0;
      q = l->lineBuf;
      do
      {
        if ( regexMatch( q, l->lineBuf[ l->size ] - q, l->lineBuf == q ) != 1 )
        {
        }
        else
        {
          matchedPosition( &first, &last );
          if ( first <= p )
          {
            found = first;
            found_last = last;
          }
          if ( l->size <= q - l->lineBuf )
          {
          }
          else
          {
            q++;
            for ( ; q - l->lineBuf < l->size && ( l->propBuf[ q - l->lineBuf ] & 1024 ) != 0; q++ )
            {
              //q++;
            }
          }
        }
        if ( found != 0 )
        {
          pos = found - l->lineBuf;
          for ( ; l->len <= pos && l->next != 0 && l->next != 0; l = l->next )
          {
            pos -= l->len;
            //l = l->next;
          }
          buf->pos = pos;
          if ( buf->currentLine != l )
            gotoLine( buf, l->linenumber );
          arrangeCursor( buf );
          set_mark( l, pos, found_last[ pos ] - found );
          break;
        }
      }
      while ( p < q );
    }
    l = l->prev;
    while ( l != 0 )
    {
      found = 0;
      found_last = 0;
      q = l->lineBuf;
      do
      {
        if ( regexMatch( q, l->lineBuf[ l->size ] - q, l->lineBuf == q ) != 1 )
        {
        }
        else
        {
          matchedPosition( &first, &last );
          found = first;
          found_last = last;
          if ( l->size <= q - l->lineBuf )
          {
          }
          else
          {
            q++;
            for ( ; q - l->lineBuf < l->size && ( l->propBuf[ q - l->lineBuf ] & 1024 ) != 0; q++ )
            }
          }
          if ( found != 0 )
          {
            pos = found - l->lineBuf;
            for ( ; l->len <= pos && l->next != 0 && l->next != 0; l = l->next )
            {
              pos -= l->len;
              //l = l->next;
            }
            buf->pos = pos;
            gotoLine( buf, l->linenumber );
            arrangeCursor( buf );
            set_mark( l, pos, found_last[ pos ] - found );
            break;
          }
          else
          {
            if ( wrapped == 0 || l != begin )
            {
              l = l->prev;
              break;
              while ( l != 0 )
              {
                found = 0;
                found_last = 0;
                q = l->lineBuf;
                do
                {
                }
                while ( q - l->lineBuf < l->size && ( l->propBuf[ q - l->lineBuf ] & 1024 ) != 0 );
                q++;
                break;
              }
              if ( WrapSearch != 0 )
              {
                l = buf->lastLine;
                wrapped = 1;
              }
              else
              {
                break;
              }
              found = 0;
              found_last = 0;
              q = l->lineBuf;
            }
            else
            {
              break;
            }
          }
        }
        while ( q - l->lineBuf < l->size && ( l->propBuf[ q - l->lineBuf ] & 1024 ) != 0 );
      }
    }
}
