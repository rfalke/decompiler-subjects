#include "encoding.c.h"
static unsigned char *dummy_extensions[1];
static struct decoding_backend dummy_decoding_backend = { "none", dummy_extensions, &dummy_open, &dummy_read, &dummy_decode_buffer, &dummy_close };
static struct decoding_backend *decoding_backends[5] = { &dummy_decoding_backend, &gzip_decoding_backend, &bzip2_decoding_backend, &dummy_decoding_backend, &deflate_decoding_backend };
int dummy_open( struct stream_encoded *stream, int fd )
{
  stream->data = mem_alloc( 4 );
  if ( stream->data )
  {
    stream->data = &fd;
  }
  return 0;
}
int dummy_read( struct stream_encoded *stream, unsigned char *data, int len )
{
  do
  {
  }
  while ( read( *(int*)(stream->data), data, len ) != -1 || *(int*)(__errno_location(  )) != 4 );
  return read( *(int*)(stream->data), data, len );
}
unsigned char *dummy_decode_buffer( unsigned char *data, int len, int *new_len )
{
  unsigned char *buffer;
  if ( buffer[0] )
  {
    new_len[0] = len;
  }
  return memacpy( data, len );
}
void dummy_close( struct stream_encoded *stream )
{
  close( *(int*)(stream->data) );
  stream = &stream->data[0];
}
struct stream_encoded *open_encoded( int fd, enum stream_encoding  encoding )
{
  struct stream_encoded *stream;
  if ( mem_alloc( 8 ) )
  {
    *(int*)(mem_alloc( 8 )) = encoding;
    if ( decoding_backends[ encoding ]->open( &stream[0], fd ) < 0 )
    {
      stream[0].encoding = ENCODING_NONE;
      mem_free( &stream[0].encoding );
      return &stream[0];
    }
    return &stream[0];
  }
  else
  {
    return &stream[0];
  }
}
int read_encoded( struct stream_encoded *stream, unsigned char *data, int len )
{
  ;
}
struct connection_state connection_state( enum connection_basic_state  basic )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = edx == -1;
    if ( !(_Bool)( edx != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/state.h";
      errline = 132;
      elinks_internal( "assertion basic != S_ERRNO failed!" );
      if ( assert_failed )
      {
      }
    }
    *(int*)(ebp_12 + 4) = 0;
    *ebp_12 = ebp_16;
    return ebp_12;
  }
  assert_failed = 0;
  basic = 0;
  basic = S_INTERNAL;
  return basic;
}
unsigned char *decode_encoded_buffer( enum stream_encoding  encoding, unsigned char *data, int len, int *new_len )
{
  encoding = data[0];
  data = &len;
  len = new_len;
  ;
}
void close_encoded( struct stream_encoded *stream )
{
  decoding_backends[ stream[0].encoding ]->close( stream );
  stream = stream;
}
unsigned char **listext_encoded( enum stream_encoding  encoding )
{
  return decoding_backends[ encoding ]->extensions;
}
enum stream_encoding  guess_encoding( unsigned char *filename )
{
  unsigned char *fname_end;
  int enc = 1;
  fname_end = filename + strlen( (char*)filename );
{
  do
  {
    unsigned char **ext;
    ext[0] = &decoding_backends[ enc ]->extensions;
    if ( decoding_backends[ enc ]->extensions )
    {
      do
      {
        if ( ext[0] == 0 )
          break;
        else
        {
          if ( strlen( (char*)ext[0] ) <= strlen( (char*)filename ) && strcmp( fname_end - strlen( (char*)ext[0] ), &esi ) == 0 )
            break;
          ext[0] = ext[1];
        }
      }
      while ( ext[0] );
    }
    enc++;
  }
  while ( enc != 5 );
  return ENCODING_NONE;
}
}
unsigned char *get_encoding_name( enum stream_encoding  encoding )
{
  return decoding_backends[ encoding ][0].name;
}
struct connection_state read_file( struct stream_encoded *stream, int readsize, struct string *page )
{
  int eax;
  if ( init_string( page ) == 0 )
  {
    connection_state( ebp_8 );
  }
  readsize = readsize != 0 ? 4096 : readsize;
  while ( 1 )
  {
    if ( ( ( page->length + readlen + 255 ) & -256 ) < ( ( ( readsize != 0 ? 4096 : readsize ) + 1 + page->length + readlen + 255 ) & -256 ) )
    {
      if ( mem_realloc( (void*)page->source, ( ( readsize != 0 ? 4096 : readsize ) + 1 + page->length + readlen + 255 ) & -256 ) )
      {
        page = (struct string*)mem_realloc( (void*)page->source, ( ( readsize != 0 ? 4096 : readsize ) + 1 + page->length + readlen + 255 ) & -256 );
        memset( page[0].source + ( ( page->length + readlen + 255 ) & -256 ), 0, ( ( ( readsize != 0 ? 4096 : readsize ) + 1 + page->length + readlen + 255 ) & -256 ) - ( ( page->length + readlen + 255 ) & -256 ) );
      }
      else
        break;
    }
    if ( page->source )
    {
      int readlen;
      if ( readlen < 0 )
      {
        done_string( &page[0] );
        if ( *(int*)(__errno_location(  )) )
        {
          *(int*)(ebp_8 + 4) = *(int*)(__errno_location(  ));
          *ebp_8 = -1;
          break;
        }
        connection_state(  );
        break;
      }
      else
      {
        if ( 1 )
        {
          page[ page->length >> 3 ].source = 0;
          if ( assert_failed == 0 )
          {
            assert_failed = 0;
            break;
          }
          assert_failed = 0;
          break;
        }
        else
        {
          page->length += readlen;
        }
      }
    }
    else
      break;
  }
  done_string( &page[0] );
  if ( assert_failed == 0 )
  {
    assert_failed = 0;
  }
  assert_failed = 0;
  *(int*)(ebp_8 + 4) = 0;
  *ebp_8 = -100003;
  return ebp_8;
  return ebp_8;
}
struct connection_state read_encoded_file( struct string *filename, struct string *page )
{
  int eax;
  int ebp_144;
  struct stream_encoded *stream;
  struct stat stt;
  enum stream_encoding  encoding;
  int fd = open64( (char*)filename[0].source, 256 );
  return *(int*)(__errno_location(  ));
}
#if 0
#endif
