#include "HTChunk.c.h"
void HTChunkInit( HTChunk *ch, int grow )
{
  ch->data = 0;
  ch->growby = grow;
  ch->size = 0;
  ch->allocated = 0;
  return;
}
HTChunk *HTChunkCreate( int grow )
{
  HTChunk *ch = calloc( 1, sizeof( HTChunk ) );
  if ( ch == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTChunk.c", "creation of chunk" );
  HTChunkInit( ch, grow );
  return ch;
}
HTChunk *HTChunkCreateMayFail( int grow, int failok )
{
  HTChunk *ch = calloc( 1, sizeof( HTChunk ) );
  if ( ch == 0 )
  {
    if ( failok == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTChunk.c", "creation of chunk" );
    else
    {
      return ch;
    }
  }
  HTChunkInit( ch, grow );
  ch->failok = failok;
  return ch;
}
HTChunk *HTChunkCreate2( int grow, size_t needed )
{
  HTChunk *ch = calloc( 1, sizeof( HTChunk ) );
  if ( ch == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTChunk.c", "HTChunkCreate2" );
  HTChunkInit( ch, grow );
  if ( needed )
  {
    ch->allocated = ch->growby + ( needed - ( __MOD((long long)( needed + -1 ),ch->growby) ) ) + -1;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTChunkCreate2: requested %d, allocate %d\n", (int)needed, ch->allocated );
    }
    ch->data = calloc( ch->allocated, 1 );
    if ( ch->data == 0 )
    {
      outofmem( "../../../WWW/Library/Implementation/HTChunk.c", "HTChunkCreate2 data" );
    }
  }
  return ch;
}
void HTChunkClear( HTChunk *ch )
{
  if ( ch->data )
  {
    free( &ch->data );
    ch->data = 0;
  }
  ch->size = 0;
  ch->allocated = 0;
  return;
}
void HTChunkFree( HTChunk *ch )
{
  HTChunk *next;
  do
  {
    next = &ch->next;
    if ( ch->data )
    {
      free( &ch->data );
      ch->data = 0;
    }
    if ( ch )
    {
      free( ch );
      ch = 0;
    }
    ch = next;
  }
  while ( ch );
  return;
}
BOOLEAN HTChunkRealloc( HTChunk *ch, int growby )
{
  char *data;
  ch->allocated += growby;
  data = ch->data ? (char*)realloc( &ch->data, ch->allocated ) : (char*)calloc( ch->allocated, 1 );
  if ( data )
    ch->data = data;
  else
  if ( ch->failok )
  {
    HTChunkClear( ch );
    return 1;
  }
  else
    outofmem( "../../../WWW/Library/Implementation/HTChunk.c", "HTChunkRealloc" );
  return 1;
}
void HTChunkPutc( HTChunk *ch, char c )
{
  if ( ch->size < ch->allocated || ( HTChunkRealloc( ch, ch->growby ) & 255 ) )
  {
    ch->data[ ch->size ] = c;
    ch->size++;
  }
  return;
}
HTChunk *HTChunkPutc2( HTChunk *ch, char c )
{
  if ( ch->allocated <= ch->size )
  {
    HTChunk *chunk = HTChunkCreateMayFail( ch->growby, ch->failok );
    ch->next = chunk;
    HTChunkPutc( chunk, c );
    return chunk;
  }
  ch->data[ ch->size ] = c;
  ch->size++;
  return ch;
}
void HTChunkEnsure( HTChunk *ch, int needed )
{
  if ( ch->allocated < needed )
  {
    ch->allocated = ch->growby + ( ( needed + -1 ) - ( __MOD(( needed + -1 ),ch->growby) ) );
    ch->data = ch->data ? realloc( &ch->data, ch->allocated ) : calloc( ch->allocated, 1 );
    if ( ch->data == 0 )
    {
      outofmem( "../../../WWW/Library/Implementation/HTChunk.c", "HTChunkEnsure" );
    }
  }
  return;
}
void HTChunkPutb( HTChunk *ch, char *b, int l )
{
  if ( l > 0 )
  {
    if ( ch->allocated < ch->size + l )
    {
      int growby = ch->growby + ( l - ( __MOD(l,ch->growby) ) );
      if ( ( HTChunkRealloc( ch, growby ) & 255 ) == 0 )
      {
        return;
      }
    }
    memcpy( &ch->data[ ch->size ], b, l );
    ch->size += l;
  }
  return;
}
HTChunk *HTChunkPutb2( HTChunk *ch, char *b, int l )
{
  if ( l <= 0 )
  {
    return ch;
  }
  if ( ch->allocated < ch->size + l )
  {
    HTChunk *chunk;
    int m = ch->allocated - ch->size;
    memcpy( &ch->data[ ch->size ], b, m );
    ch->size += m;
    ch->next = chunk = HTChunkCreateMayFail( ch->growby, ch->failok );
    HTChunkPutb( chunk, &b[ m ], l - m );
    return chunk;
  }
  memcpy( &ch->data[ ch->size ], b, l );
  ch->size += l;
  return ch;
}
void HTChunkPutUtf8Char( HTChunk *ch, UCode_t code )
{
  int utflen;
  if ( code <= 127 )
    utflen = 1;
  else
  if ( code <= 2047 )
    utflen = 2;
  else
  if ( code <= 65535 )
    utflen = 3;
  else
  if ( code <= 0x1fffff )
    utflen = 4;
  else
  if ( code <= 0x3ffffff )
    utflen = 5;
  else
    utflen = 6;
  if ( ch->allocated < ch->size + utflen )
  {
    int growby = utflen;
    if ( ( HTChunkRealloc( ch, growby ) & 255 ) == 0 )
    {
      return;
    }
  }
  switch ( utflen )
  {
  case 1:
    ch->data[ ch->size ] = code;
    ch->size++;
    break;
  case 2:
    ch->data[ ch->size ] = ( code >> 6 ) | -64;
    ch->size++;
    switch ( utflen )
    {
    case 6:
      ch->data[ ch->size ] = ( ( code >> 24 ) & 63 ) | -128;
      ch->size++;
    case 5:
      ch->data[ ch->size ] = ( ( code >> 18 ) & 63 ) | -128;
      ch->size++;
    case 4:
      ch->data[ ch->size ] = ( ( code >> 12 ) & 63 ) | -128;
      ch->size++;
    case 3:
      ch->data[ ch->size ] = ( ( code >> 6 ) & 63 ) | -128;
      ch->size++;
    case 2:
      ch->data[ ch->size ] = ( code & 63 ) | -128;
      ch->size++;
      break;
    case 0:
    case 1:
      break;
    }
    return;
    break;
  case 3:
    ch->data[ ch->size ] = ( code >> 12 ) | -32;
    ch->size++;
    break;
  case 4:
    ch->data[ ch->size ] = ( code >> 18 ) | -16;
    ch->size++;
    break;
  case 5:
    ch->data[ ch->size ] = ( code >> 24 ) | -8;
    ch->size++;
    break;
  case 6:
    ch->data[ ch->size ] = ( code >> 30 ) | -4;
    ch->size++;
    break;
  default:
    break;
  case 0:
    break;
  }
  return;
}
void HTChunkTerminate( HTChunk *ch )
{
  HTChunkPutc( ch, ebp_4 );
  return;
}
void HTChunkPuts( HTChunk *ch, char *s )
{
  char *p;
  if ( s )
  {
    p = s;
    for ( ; p[0] && ( ch->size < ch->allocated || ( HTChunkRealloc( ch, ch->growby ) & 255 ) ); p++ )
    {
      ch->data[ ch->size ] = p[0];
      ch->size++;
      // p++;
    }
  }
  return;
}
HTChunk *HTChunkPuts2( HTChunk *ch, char *s )
{
  char *p;
  if ( s )
  {
    p = s;
    for ( ; p[0]; p++ )
    {
      if ( ch->allocated <= ch->size )
      {
        HTChunk *chunk = HTChunkCreateMayFail( ch->growby, ch->failok );
        ch->next = chunk;
        HTChunkPuts( chunk, p );
        return chunk;
      }
      ch->data[ ch->size ] = p[0];
      ch->size++;
      // p++;
    }
  }
  return ch;
}
#if 0
#endif
