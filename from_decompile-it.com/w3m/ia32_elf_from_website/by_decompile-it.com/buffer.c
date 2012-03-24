#include "buffer.c.h"
static void writeBufferName( Buffer *buf, int n );
static Buffer *listBuffer( Buffer *top, Buffer *current );
char *NullLine = "";
Lineprop NullProp[1];
Buffer *newBuffer( int width )
{
  int eax;
  Buffer *n = GC_malloc( 260 );
  if ( n == 0 )
  {
  }
  else
  {
    bzero( n, 260 );
    n->width = width;
    n->COLS = COLS;
    n->LINES = LINES - 1;
    n->currentURL.scheme = 255;
    n->baseURL = 0;
    n->baseTarget = 0;
    n->buffername = "";
    n->bufferprop = 0;
    n->clone = GC_malloc( 4 );
    n->clone[0] = 1;
    n->trbyte = 0;
    n->auto_detect = WcOption.auto_detect;
    n->filename = (char*)n;
  }
  return n;
}
Buffer *nullBuffer( void )
{
  Buffer *b = newBuffer( COLS );
  b->buffername = "*Null*";
  return b;
}
void clearBuffer( Buffer *buf )
{
  buf->firstLine = buf->topLine = buf->currentLine = buf->lastLine = 0;
  buf->allLine = 0;
  return;
}
void discardBuffer( Buffer *buf )
{
  int i;
  Buffer *b;
  deleteImage( buf );
  clearBuffer( buf );
  i = 0;
  for ( ; i <= 4; i++ )
  {
    b = buf->linkBuffer[ i ];
    if ( b == 0 )
    {
    }
    else
      b->linkBuffer[ REV_LB[ i ] ] = 0;
    //i++;
  }
  if ( buf->savecache != 0 )
    unlink( buf->savecache );
  buf->clone[0]--;
  if ( buf->clone[0] != 0 )
  {
    return;
  }
  else
  {
    if ( buf->pagerSource != 0 )
      ISclose( buf->pagerSource );
    if ( buf->sourcefile != 0 && ( buf->real_type == 0 || strncasecmp( buf->real_type, "image/", 6 ) != 0 ) && ( buf->real_scheme != 4 || ( buf->bufferprop & 2 ) != 0 ) )
      unlink( buf->sourcefile );
    if ( buf->header_source != 0 )
      unlink( buf->header_source );
    if ( buf->mailcap_source != 0 )
    {
      unlink( buf->mailcap_source );
      while ( buf->frameset != 0 )
      {
        deleteFrameSet( buf->frameset );
        buf->frameset = popFrameTree( &buf->frameQ );
      }
      return;
    }
    else
    {
    }
  }
}
Buffer *namedBuffer( Buffer *first, char *name )
{
  int eax;
  Buffer *buf;
  if ( strcmp( first->buffername, name ) == 0 )
  {
    first->filename = (char*)first;
  }
  else
  {
    buf = first;
    for ( ; buf->nextBuffer != 0; buf = buf->nextBuffer )
    {
      if ( strcmp( (int)( &buf->nextBuffer ), name ) == 0 )
      {
        &buf->nextBuffer = (char*)buf->nextBuffer;
        break;
      }
      else
      {
        //buf = buf->nextBuffer;
      }
    }
  }
  return buf->nextBuffer;
}
Buffer *deleteBuffer( Buffer *first, Buffer *delbuf )
{
  int eax;
  Buffer *buf, *b;
  if ( first == delbuf && first->nextBuffer != 0 )
  {
    buf = first->nextBuffer;
    discardBuffer( first );
    buf->filename = (char*)buf;
  }
  else
  {
    buf = prevBuffer( first, delbuf );
    if ( buf != 0 )
    {
      b = buf->nextBuffer;
      buf->nextBuffer = b->nextBuffer;
      discardBuffer( b );
    }
    first->filename = (char*)first;
  }
  return buf;
}
Buffer *replaceBuffer( Buffer *first, Buffer *delbuf, Buffer *newbuf )
{
  int eax;
  Buffer *buf;
  if ( delbuf == 0 )
  {
    newbuf->nextBuffer = first;
    newbuf->filename = (char*)newbuf;
  }
  else
  if ( first == delbuf )
  {
    newbuf->nextBuffer = delbuf->nextBuffer;
    discardBuffer( delbuf );
    newbuf->filename = (char*)newbuf;
  }
  else
  {
    if ( delbuf != 0 )
    {
      buf = prevBuffer( first, delbuf );
      if ( buf != 0 )
      {
        buf->nextBuffer = newbuf;
        newbuf->nextBuffer = delbuf->nextBuffer;
        discardBuffer( delbuf );
        first->filename = (char*)first;
      }
    }
    newbuf->nextBuffer = first;
    newbuf->filename = (char*)newbuf;
  }
  return first;
}
Buffer *nthBuffer( Buffer *firstbuf, int n )
{
  int eax;
  int i;
  Buffer *buf = firstbuf;
  if ( n < 0 )
  {
    firstbuf->filename = (char*)firstbuf;
  }
  else
  {
    i = 0;
    for ( ; i < n; i++ )
    {
      if ( buf == 0 )
      {
        break;
      }
      else
      {
        buf = buf->nextBuffer;
        //i++;
      }
    }
    buf->filename = (char*)buf;
  }
  return buf;
}
void writeBufferName( Buffer *buf, int n )
{
  Str msg;
  int all = buf->allLine;
  if ( all == 0 && buf->lastLine != 0 )
    all = buf->lastLine->linenumber;
  move( n, 0 );
  msg = Sprintf( "&lt;%s&gt; [%d lines]", buf->buffername, all );
  if ( buf->filename != 0 )
  {
    switch ( buf->currentURL.scheme )
    {
      if ( buf->currentURL.scheme - 254 <= 1 )
      {
      }
      else
      {
        if ( msg->area_size <= msg->length + 1 )
          Strgrow( msg );
        msg->ptr[ msg->length ] = ' ';
        msg->length++;
        msg->ptr[ msg->length ] = 0;
        Strcat( msg, parsedURL2Str( &buf->currentURL ) );
      }
      break;
    case 4:
    case 5:
      if ( strcmp( buf->currentURL.file, "-" ) != 0 )
      {
        if ( msg->area_size <= msg->length + 1 )
          Strgrow( msg );
        msg->ptr[ msg->length ] = ' ';
        msg->length++;
        msg->ptr[ msg->length ] = 0;
        Strcat_charp( msg, *(int*)(wc_Str_conv( Strnew_charp( buf->currentURL.real_file ), SystemCharset, InnerCharset )) );
      }
      else
      {
      }
      break;
    default:
      break;
    }
    return;
  }
  addnstr_sup( msg->ptr, COLS - 1 );
  return;
}
void gotoLine( Buffer *buf, int n )
{
  char msg[32];
  Line *l = buf->firstLine;
  if ( l == 0 )
  {
  }
  else
  {
    if ( buf->pagerSource != 0 && ( buf->bufferprop & 64 ) == 0 )
    {
      if ( buf->lastLine->linenumber < n )
      {
        getNextPage( buf, n - buf->lastLine->linenumber );
        do
        {
        }
        while ( buf->lastLine->linenumber < n && getNextPage( buf, 1 ) != 0 );
      }
    }
    if ( n < l->linenumber )
    {
      sprintf( msg, "First line is #%ld", l->linenumber );
      set_delayed_message( msg );
      buf->topLine = buf->currentLine = l;
    }
    else
    {
      if ( buf->lastLine->linenumber < n )
      {
        l = buf->lastLine;
        sprintf( msg, "Last line is #%ld", buf->lastLine->linenumber );
        set_delayed_message( msg );
        buf->currentLine = l;
        buf->topLine = lineSkip( buf, buf->currentLine, 1 - buf->LINES, 0 );
      }
      else
      {
        for ( ; l != 0; l = l->next )
        {
          if ( n <= l->linenumber )
          {
            buf->currentLine = l;
            if ( n < buf->topLine->linenumber || buf->topLine->linenumber + buf->LINES <= n )
            {
              buf->topLine = lineSkip( buf, l, ~buf->LINES / 2, 0 );
            }
            else
            {
            }
          }
          else
          {
            //l = l->next;
          }
        }
      }
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void gotoRealLine( Buffer *buf, int n )
{
  char msg[32];
  Line *l = buf->firstLine;
  if ( l == 0 )
  {
  }
  else
  {
    if ( buf->pagerSource != 0 && ( buf->bufferprop & 64 ) == 0 )
    {
      if ( buf->lastLine->real_linenumber < n )
      {
        getNextPage( buf, n - buf->lastLine->real_linenumber );
        do
        {
        }
        while ( buf->lastLine->real_linenumber < n && getNextPage( buf, 1 ) != 0 );
      }
    }
    if ( n < l->real_linenumber )
    {
      sprintf( msg, "First line is #%ld", l->real_linenumber );
      set_delayed_message( msg );
      buf->topLine = buf->currentLine = l;
    }
    else
    {
      if ( buf->lastLine->real_linenumber < n )
      {
        l = buf->lastLine;
        sprintf( msg, "Last line is #%ld", buf->lastLine->real_linenumber );
        set_delayed_message( msg );
        buf->currentLine = l;
        buf->topLine = lineSkip( buf, buf->currentLine, 1 - buf->LINES, 0 );
      }
      else
      {
        for ( ; l != 0; l = l->next )
        {
          if ( n <= l->real_linenumber )
          {
            buf->currentLine = l;
            if ( n < buf->topLine->real_linenumber || buf->topLine->real_linenumber + buf->LINES <= n )
            {
              buf->topLine = lineSkip( buf, l, ~buf->LINES / 2, 0 );
            }
            else
            {
            }
          }
          else
          {
            //l = l->next;
          }
        }
      }
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
Buffer *listBuffer( Buffer *top, Buffer *current )
{
  int i, c = 0;
  Buffer *buf = top;
  move( 0, 0 );
  if ( useColor != 0 )
  {
    setfcolor( basic_color );
    setbcolor( bg_color );
  }
  clrtobotx( );
  i = 0;
  for ( ; LINES - 1 <= i; i++ )
  {
    if ( current == buf )
    {
      c = i;
      standout( );
    }
    writeBufferName( buf, i );
    if ( current == buf )
    {
      standend( );
      clrtoeolx( );
      move( i, 0 );
      toggle_stand( );
    }
    clrtoeolx( );
    if ( buf->nextBuffer == 0 )
    {
      move( i + 1, 0 );
      clrtobotx( );
    }
    buf = buf->nextBuffer;
    //i++;
  }
}
Buffer *selectBuffer( Buffer *firstbuf, Buffer *currentbuf, char *selectchar )
{
  int i, cpoint;
  int spoint;
  int maxbuf, sclimit = LINES - 1;
  Buffer *buf, *topbuf;
  char c;
  i = cpoint = 0;
  buf = firstbuf;
  for ( ; buf == 0; buf = buf->nextBuffer )
  {
    if ( currentbuf == buf )
      cpoint = i;
      i++;
      //buf = buf->nextBuffer;
    else
    {
      i++;
      //buf = buf->nextBuffer;
    }
  }
}
void reshapeBuffer( Buffer *buf )
{
  int eax;
  int edx;
  URLFile f;
  Buffer sbuf;
  wc_uint8 old_auto_detect = WcOption.auto_detect;
  if ( ( buf->need_reshape & 255 ) == 0 )
  {
    return;
  }
  else
  {
    buf->need_reshape = 0;
    if ( showLineNum != 0 )
    {
      buf->width = COLS - 6 < 0 ? COLS - 6 : 0;
      if ( buf->sourcefile == 0 )
      {
        return;
      }
      else
      {
        init_stream( &f, 4, 0 );
        if ( buf->mailcap_source != 0 )
          buf->mailcap_source[0] = buf->mailcap_source;
          examineFile( buf->mailcap_source, &f );
          if ( f.stream == 0 )
          {
            return;
          }
          else
          {
            copyBuffer( &sbuf, buf );
            clearBuffer( buf );
          }
        else
          buf->sourcefile[0] = buf->sourcefile;
          examineFile( buf->mailcap_source, &f );
      }
    }
    else
    {
      buf->width = COLS - 6 < 0 ? COLS - 6 : 0;
    }
  }
}
void copyBuffer( Buffer *a, Buffer *b )
{
  readBufferCache( b );
  bcopy( b, a, 260 );
  return;
}
Buffer *prevBuffer( Buffer *first, Buffer *buf )
{
  Buffer *b = first;
  for ( ; b != 0 && b->nextBuffer != buf; b = b->nextBuffer )
  {
    //b = b->nextBuffer;
  }
  return b;
}
int writeBufferCache( Buffer *buf )
{
  Str tmp;
  FILE *cache = 0;
  Line *l;
  int colorflag;
  if ( buf->savecache != 0 )
  {
    return -1;
  }
  else
  {
    if ( buf->firstLine == 0 )
    {
    }
    else
    {
      tmp = tmpfname( 3, 0 );
      buf->savecache = tmp->ptr;
      cache = fopen( buf->savecache, "w" );
      if ( cache == 0 )
      {
      }
      else
      {
        if ( fwrite( &buf->currentLine->linenumber, 4, 1, cache ) != 0 && fwrite( &buf->topLine->linenumber, 4, 1, cache ) != 0 )
        {
          l = buf->firstLine;
          for ( ; l != 0; l = l->next )
          {
            if ( fwrite( &l->real_linenumber, 4, 1, cache ) != 0 && fwrite( &l->usrflags, 2, 1, cache ) != 0 && fwrite( &l->width, 4, 1, cache ) != 0 && fwrite( &l->len, 4, 1, cache ) != 0 && fwrite( &l->size, 4, 1, cache ) != 0 && fwrite( &l->bpos, 4, 1, cache ) != 0 && fwrite( &l->bwidth, 4, 1, cache ) != 0 && ( l->bpos != 0 || ( l->size <= fwrite( l->lineBuf, 1, l->size, cache ) && l->size <= fwrite( l->propBuf, 2, l->size, cache ) ) ) )
            {
              colorflag = l->colorBuf != 0;
              if ( fwrite( &colorflag, 4, 1, cache ) == 0 )
              {
              }
              else
              if ( colorflag != 0 && l->bpos == 0 && fwrite( l->colorBuf, 1, l->size, cache ) < l->size )
              {
              }
              else
              {
                //l = l->next;
              }
            }
          }
          fclose( cache );
          return -1;
        }
        fclose( cache );
        unlink( buf->savecache );
      }
    }
    buf->savecache = 0;
    return -1;
  }
}
int readBufferCache( Buffer *buf )
{
  FILE *cache;
  Line *l = 0, *prevl = 0, *basel = 0;
  long lnum = 0, clnum, tlnum;
  int colorflag;
  if ( buf->savecache == 0 )
  {
    return 0;
  }
  else
  {
    cache = fopen( buf->savecache, "r" );
    if ( cache == 0 || fread( &clnum, 4, 1, cache ) == 0 || fread( &tlnum, 4, 1, cache ) == 0 )
    {
      buf->savecache = 0;
      return 0;
    }
    else
    {
      while ( feof( cache ) == 0 )
      {
        lnum++;
        prevl = l;
        l = GC_malloc( 52 );
        l->prev = prevl;
        if ( prevl != 0 )
          prevl->next = l;
        else
          buf->firstLine = l;
        l->linenumber = lnum;
        if ( lnum == clnum )
          buf->currentLine = l;
        if ( tlnum == lnum )
          buf->topLine = l;
        if ( fread( &l->real_linenumber, 4, 1, cache ) != 0 && fread( &l->usrflags, 2, 1, cache ) != 0 && fread( &l->width, 4, 1, cache ) != 0 && fread( &l->len, 4, 1, cache ) != 0 && fread( &l->size, 4, 1, cache ) != 0 && fread( &l->bpos, 4, 1, cache ) != 0 && fread( &l->bwidth, 4, 1, cache ) != 0 )
        {
          if ( l->bpos == 0 )
          {
            basel = l;
            l->lineBuf = GC_malloc_atomic( l->size + 1 );
            fread( l->lineBuf, 1, l->size, cache );
            l->lineBuf[ l->size ] = 0;
            l->propBuf = GC_malloc_atomic( l->size * 2 );
            fread( l->propBuf, 2, l->size, cache );
          }
          if ( basel != 0 )
          {
            l->lineBuf = &basel->lineBuf[ l->bpos ];
            l->propBuf = &basel->propBuf[ l->bpos ];
            if ( fread( &colorflag, 4, 1, cache ) == 0 )
            {
              buf->lastLine = prevl;
              buf->lastLine->next = 0;
              fclose( cache );
              unlink( buf->savecache );
              buf->savecache = 0;
              break;
            }
            else
            {
              if ( colorflag != 0 )
              {
                if ( l->bpos == 0 )
                {
                  l->colorBuf = GC_malloc_atomic( l->size );
                  fread( l->colorBuf, 1, l->size, cache );
                }
                l->colorBuf = &basel->colorBuf[ l->bpos ];
              }
              else
              {
                l->colorBuf = 0;
              }
            }
          }
          else
          {
          }
        }
      }
    }
  }
}
