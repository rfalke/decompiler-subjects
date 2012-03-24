#include "finger.c.h"
struct module finger_protocol_module = { "Finger", 0, 0, 0, 0, 0, 0 };
void finger_get_response( struct socket *socket, struct read_buffer *rb )
{
  int ecx;
  int edx;
  struct connection *conn = &socket->conn[0];
  struct cache_entry *cached;
  int l;
  if ( cached[0].next )
  {
    conn->cached = &cached[0];
    if ( socket->state != SOCKET_CLOSED )
    {
      l = rb->length;
      conn->received += rb->length;
      *ebp_28 = rb->length;
      *ebp_32 = rb->length >> 31;
      if ( add_fragment( &cached[0], conn->from, &rb->data[0], rb->length >> 31 ) == 1 )
        conn->tries = 0;
      conn->from += rb->length;
      kill_buffer_data( rb, l );
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      read_from_socket( conn->socket, rb, (long long)-100003, &finger_get_response );
      return;
    }
    else
    if ( assert_failed == 0 )
      assert_failed = 0;
      abort_connection( &conn[0], (long long)-100000 );
      return;
  }
  else
  if ( assert_failed == 0 )
    assert_failed = 0;
  assert_failed = 0;
}
void finger_send_request( struct socket *socket )
{
  int eax;
  int ecx;
  int edx;
  struct string req;
  if ( init_string( &req ) )
  {
    if ( socket->conn[5] )
    {
      add_char_to_string( &req, 32 );
      if ( assert_failed == 0 )
      {
        if ( socket->conn[5] )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
          errline = 255;
          elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
          if ( assert_failed == 0 )
            goto B24;
        }
B24:        if ( socket->conn[5] )
        {
          if ( 0 < 0 )
          {
            *ebp_56 = 0;
            if ( mem_realloc( (void*)req.source, 0 ) )
            {
              req.source = (unsigned char*)mem_realloc( (void*)req.source, 0 );
              memset( req.source + 0, 0, 0 - 0 );
            }
          }
          if ( req.source )
          {
            memcpy( req.length + req.source, &socket->conn[5], socket->conn[5] );
            req.source[ ebp_48 ] = 0;
            req.length = ebp_48;
            socket = &socket[0];
          }
        }
      }
      assert_failed = 0;
    }
    add_crlf_to_string( &req );
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    request_from_socket( &socket[0], req.source, req.length, (long long)-100003, SOCKET_END_ONCLOSE, &finger_get_response );
    done_string( &req );
  }
  return;
}
void finger_protocol_handler( struct connection *conn )
{
  conn->from = (long long)0;
  make_connection( conn->socket, conn->uri, &finger_send_request, conn->cache_mode > 2 );
  return;
}
#if 0
#endif
