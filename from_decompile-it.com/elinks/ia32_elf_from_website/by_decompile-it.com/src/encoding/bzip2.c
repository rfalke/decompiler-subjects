#include "bzip2.c.h"
static unsigned char *bzip2_extensions[3] = { ".bz2", ".tbz", 0 };
struct decoding_backend bzip2_decoding_backend = { "bzip2", bzip2_extensions, &bzip2_open, &bzip2_read, &bzip2_decode_buffer, &bzip2_close };
int bzip2_open( struct stream_encoded *stream, int fd )
{
  struct bz2_enc_data *data;
  int err;
  stream->data = 0;
  if ( mem_alloc( 5056 ) )
  {
    data = (struct bz2_enc_data*)mem_alloc( 5056 );
    memset( mem_alloc( 5056 ), 0, 48 );
    *(int*)(mem_alloc( 5056 ) + 52) = 0;
    *(int*)(mem_alloc( 5056 ) + 48) = fd;
    if ( err )
    {
      mem_free( &ebx );
    }
    stream->data = mem_alloc( 5056 );
  }
  return -1;
}
int bzip2_read( struct stream_encoded *stream, unsigned char *buf, int len )
{
  int eax;
  struct bz2_enc_data *data = &stream->data[0];
  int err;
  if ( stream->data )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = len < 1;
      if ( len < 1 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/encoding/bzip2.c";
        errline = 89;
        elinks_internal( "assertion len &gt; 0 failed!" );
      }
    }
    if ( data->last_read == 0 )
    {
    {
      int l;
      data->fbz_stream.avail_out = len;
      data->fbz_stream.next_out = (char*)buf;
      do
      {
        if ( data->fbz_stream.avail_in == 0 )
        {
          do
          {
            if ( read( data->fdread, data[0].fbz_stream.next_in, 5000 ) == -1 )
            {
            }
            else
            if ( read( data->fdread, data[0].fbz_stream.next_in, 5000 ) )
            {
              data += 0;
              data->fbz_stream.avail_in = read( data->fdread, data[0].fbz_stream.next_in, 5000 );
            }
            else
            {
              return -1;
            }
          }
          while ( *(int*)(__errno_location(  )) != 4 );
          if ( *(int*)(__errno_location(  )) == 11 )
          {
            if ( assert_failed == 0 )
            {
              assert_failed = len - BZ2_bzDecompress( data[0].fbz_stream.next_in ) != data->fbz_stream.next_out - buf;
              if ( data->fbz_stream.next_out != len - BZ2_bzDecompress( data[0].fbz_stream.next_in ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/encoding/bzip2.c";
                errline = 124;
                elinks_internal( "assertion len - data-&gt;fbz_stream.avail_out == data-&gt;fbz_stream.next_out - (char *) buf failed!" );
              }
              err = data->fbz_stream.avail_out;
              break;
            }
            else
              break;
          }
        }
        if ( err == 4 )
          data->last_read = 1;
        else
        {
          if ( err )
            continue;
        }
      }
      while ( data->fbz_stream.avail_out );
      if ( assert_failed == 0 )
      {
        assert_failed = len - BZ2_bzDecompress( data[0].fbz_stream.next_in ) != data->fbz_stream.next_out - buf;
      }
      else
      {
      }
    }
    }
    else
    {
    }
  }
}
unsigned char *bzip2_decode_buffer( unsigned char *data, int len, int *new_len )
{
  bz_stream stream;
  unsigned char *buffer;
  int error;
  new_len[0] = 0;
  memset( stream.next_in, 0, 48 );
  buffer[0] = 0;
  stream.next_in = (char*)data;
  stream.avail_in = len;
  if ( BZ2_bzDecompressInit( stream.next_in, 0, 0 ) == 0 )
  {
    do
    {
      if ( assert_failed == 0 )
      {
        assert_failed = stream.total_out_hi32 != 0;
        if ( stream.total_out_hi32 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/encoding/bzip2.c";
          errline = 159;
          elinks_internal( "assertion !stream.total_out_hi32 failed: 64 bzip2 decoding not supported" );
        }
      }
    {
      unsigned char *new_buffer;
      if ( mem_realloc( &edi, edi + 1024 ) )
      {
        stream.avail_out = 1024;
        stream.next_out = stream.total_out_lo32 + new_buffer[0];
        if ( error != 4 )
        {
          if ( error == 0 )
            continue;
          else
          {
            BZ2_bzDecompressEnd( stream.next_in );
          }
        }
        else
          break;
      }
      else
      {
        buffer[0] = new_buffer[0];
        BZ2_bzDecompressEnd( stream.next_in );
        if ( new_buffer[0] == 0 )
          break;
      }
      buffer[0] = 0;
      mem_free( &new_buffer[0] );
      break;
    }
    }
    while ( stream.avail_in );
    BZ2_bzDecompressEnd( stream.next_in );
    new_len[0] = stream.total_out_lo32;
    return &buffer[0];
  }
  else
  {
    return &buffer[0];
  }
}
void bzip2_close( struct stream_encoded *stream )
{
  struct bz2_enc_data *data = &stream->data[0];
  if ( stream->data )
  {
    BZ2_bzDecompressEnd( data[0].fbz_stream.next_in );
    close( data->fdread );
    mem_free( (void*)data[0].fbz_stream.next_in );
    stream->data = 0;
  }
  return;
}
#if 0
#endif
