#include "deflate.c.h"
static unsigned char *deflate_extensions[1];
struct decoding_backend deflate_decoding_backend = { "deflate", deflate_extensions, &deflate_gzip_open, &deflate_read, &deflate_raw_decode_buffer, &deflate_close };
static unsigned char *gzip_extensions[3] = { ".gz", ".tgz", 0 };
struct decoding_backend gzip_decoding_backend = { "gzip", gzip_extensions, &deflate_gzip_open, &deflate_read, &deflate_gzip_decode_buffer, &deflate_close };
int deflate_gzip_open( struct stream_encoded *stream, int fd )
{
  stream->data = 0;
  if ( mem_alloc( 5064 ) )
  {
    memset( mem_alloc( 5064 ), 0, 56 );
    *(char*)(mem_alloc( 5064 ) + 60) &= -4;
    *(int*)(mem_alloc( 5064 ) + 56) = fd;
    if ( inflateInit2_( mem_alloc( 5064 ), 47, "1.2.3.4", 56 ) )
    {
      mem_free( &ebx );
    }
    stream->data = mem_alloc( 5064 );
  }
  return -1;
}
int deflate_read( struct stream_encoded *stream, unsigned char *buf, int len )
{
  int eax;
  struct deflate_enc_data *data = &stream->data[0];
  int err;
  int l;
  if ( stream->data )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = len < 1;
      if ( len < 1 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/encoding/deflate.c";
        errline = 100;
        elinks_internal( "assertion len &gt; 0 failed!" );
      }
    }
    if ( ( ( data->bits_at_60/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      l = 0;
      data->deflate_stream.next_out = &buf[0];
      data->deflate_stream.avail_out = len;
      buf[0] = buf[0];
      do
      {
        if ( data->deflate_stream.avail_in == 0 )
        {
          do
          {
            if ( l == -1 )
            {
            }
            else
            if ( l )
            {
              data->deflate_stream.avail_in = read( data->fdread, &data->bits_at_60, 5000 );
              data += 0;
              do
              {
                if ( err == -3 )
                {
                  if ( ( ( data->bits_at_60/*.1_1of4*/ & 2 ) & 255 ) == 0 && data->deflate_stream.next_out == buf[0] )
                  {
                    data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 2;
                    inflateEnd( data[0].deflate_stream.next_in );
                    data->deflate_stream.next_out = &buf[0];
                    data->deflate_stream.avail_out = len;
                    data->deflate_stream.avail_in = l;
                    data += 0;
                  }
                  else
                    data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 2;
                    data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 2 | 2 | 1;
                    if ( assert_failed == 0 )
                      buf[0] = buf[0];
                    else
                      break;
                }
                else
                data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 2;
                if ( err == 1 )
                  data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 3;
                else
                {
                  if ( err )
                    data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 2 | 2 | 1;
                  else
                  {
                    if ( data->deflate_stream.avail_out )
                    {
                      do
                      {
                      }
                      while ( data->deflate_stream.avail_out );
                    }
                  }
                }
              }
              while ( err );
              data->bits_at_60/*.1_1of4*/ = (int)data->bits_at_60/*.1_1of4*/ | 2;
            }
          }
          while ( *(int*)(__errno_location(  )) != 4 );
          if ( *(int*)(__errno_location(  )) == 11 )
          {
            return (int)data->deflate_stream.avail_out;
          }
        }
        assert_failed = len - data->deflate_stream.avail_out != data->deflate_stream.next_out - buf[0];
        if ( data->deflate_stream.next_out != len - data->deflate_stream.avail_out )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/encoding/deflate.c";
          errline = 168;
          elinks_internal( "assertion len - data-&gt;deflate_stream.avail_out == data-&gt;deflate_stream.next_out - buf failed!" );
        }
        return (int)data->deflate_stream.avail_out;
      }
      while ( data->deflate_stream.avail_out );
    }
    else
    {
    }
  }
}
unsigned char *deflate_decode_buffer( int window_size, unsigned char *data, int len, int *new_len )
{
  z_stream stream;
  unsigned char *buffer;
  int error;
  new_len[0] = 0;
  if ( len )
  {
    memset( stream.next_in, 0, 56 );
    stream.avail_in = len;
    stream.next_in = &data[0];
    if ( inflateInit2_( stream.next_in, window_size, "1.2.3.4", 56 ) == 0 )
    {
      buffer[0] = 0;
    {
      do
      {
        new_buffer[0] = mem_realloc( &buffer[0], stream.total_out + 1024 );
        if ( mem_realloc( &buffer[0], stream.total_out + 1024 ) )
        {
          stream.avail_out = 1024;
          stream.next_out = &new_buffer[ stream.total_out ];
          if ( error != 1 )
          {
            if ( error == 0 )
            {
              buffer[0] = new_buffer[0];
            }
            else
            {
              stream.next_in = stream.next_in;
              buffer[0] = new_buffer[0];
              inflateEnd( stream.next_in );
            }
          }
          else
            break;
        }
        else
        {
          inflateEnd( stream.next_in );
          if ( buffer[0] == 0 )
            break;
        }
        buffer[0] = 0;
        mem_free( &buffer[0] );
        break;
      }
      while ( stream.avail_in );
      inflateEnd( stream.next_in );
      new_len[0] = stream.total_out;
      return &buffer[0];
    }
    }
  }
  buffer[0] = 0;
  return &buffer[0];
}
unsigned char *deflate_raw_decode_buffer( unsigned char *data, int len, int *new_len )
{
  int ecx;
  int edx;
  data = (unsigned char*)new_len;
}
unsigned char *deflate_gzip_decode_buffer( unsigned char *data, int len, int *new_len )
{
  int ecx;
  int edx;
  data = (unsigned char*)new_len;
}
void deflate_close( struct stream_encoded *stream )
{
  struct deflate_enc_data *data = &stream->data[0];
  if ( stream->data )
  {
    inflateEnd( data[0].deflate_stream.next_in );
    close( data->fdread );
    mem_free( (void*)data[0].deflate_stream.next_in );
    stream->data = 0;
  }
  return;
}
#if 0
#endif
