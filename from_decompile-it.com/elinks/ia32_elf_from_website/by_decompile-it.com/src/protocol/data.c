#include "data.c.h"
void data_protocol_handler( struct connection *conn )
{
  int eax;
  int edx;
  int ebp_40;
  struct uri *uri = conn->uri;
  struct cache_entry *cached = get_cache_entry( conn->uri );
  unsigned char *data_start, *data;
  int base64;
  if ( cached )
  {
    conn->cached = cached;
    *ebp_60 = conn->uri->data;
    if ( memchr( conn->uri->data, 44, conn->uri->bits_at_48/*.2_3of4*/ ) == 0 )
    {
      base64 = 0;
      ebp_40 = 27;
    }
    else
    {
      ebp_40 = memchr( conn->uri->data, 44, conn->uri->bits_at_48/*.2_3of4*/ ) - conn->uri->data;
      if ( memchr( conn->uri->data, 44, conn->uri->bits_at_48/*.2_3of4*/ ) - conn->uri->data > 6 )
      {
        strcmp( ebp_44 - 7, ";base64" );
        if ( 1 )
        {
          ebp_40 -= 7;
          base64 = 1;
          if ( ebp_40 <= 2 || memchr( conn->uri->data, 47 ) == 0 )
            ebp_40 = 27;
        }
      }
      base64 = 0;
    }
    if ( assert_failed == 0 )
      assert_failed = 0;
    if ( memacpy( conn->uri->data ) )
    {
      mem_free( &edi );
      if ( straconcat( "\r\nContent-Type: " ) )
      {
        if ( cached->head )
          mem_free( (void*)cached->head );
        cached->head = straconcat( "\r\nContent-Type: " );
        if ( data_start[0] && memacpy( &data_start[0], uri->data[ uri->bits_at_48/*.2_3of4*/ ] - data_start[0] ) )
        {
          if ( base64 )
          {
            unsigned char *decoded;
            if ( base64_encode( memacpy( &data_start[0], uri->data[ uri->bits_at_48/*.2_3of4*/ ] - data_start[0] ) ) )
              mem_free( &data[0] );
          }
          else
            decode_uri( memacpy( &data_start[0], uri->data[ uri->bits_at_48/*.2_3of4*/ ] - data_start[0] ) );
        {
          (conn->from & 0xFFFFFFFF) = (unsigned int)(conn->from & 0xFFFFFFFF) + edi;
          int datalen;
          add_fragment( cached, conn->from, &decoded[0], strlen( &decoded[0] ) );
          mem_free( &decoded[0] );
          if ( assert_failed == 0 )
            (conn->from << 32) = (unsigned int)(conn->from << 32) + ( datalen >> 31 ) + ( ( (unsigned int)(conn->from & 0xFFFFFFFF) + datalen < (unsigned int)(conn->from & 0xFFFFFFFF) ) & 1 );
            assert_failed = 0;
            abort_connection( &conn[0], (long long)-100000 );
            return;
        }
        }
      }
    }
    connection_state( ebp_32 );
    abort_connection( &conn[0] );
    return;
  }
  else
  if ( assert_failed == 0 )
    assert_failed = 0;
  assert_failed = 0;
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
#if 0
#endif
