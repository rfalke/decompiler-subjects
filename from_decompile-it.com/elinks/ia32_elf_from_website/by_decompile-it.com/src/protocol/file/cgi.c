#include "cgi.c.h"
static struct option_info cgi_options[4] = { { { 0, 0, { 0 }
, "cgi", 0, 9, 0, 0, { 0, 135472726, 135472754, 0, 0, 0 }
, "Local CGI specific options.", "Local CGI", 0, 0, 0 }
, "protocol.file" }
, { { 0, 0, { 0 }
, "path", 0, 3, 0, 1024, { "", 135402404, 135443141, 0, 0, 0 }
, "Colon separated list of directories, where CGI scripts are stored.", "Path", 0, 0, 0 }
, "protocol.file.cgi" }
, { { 0, 0, { 0 }
, "policy", 0, 0, 0, 1, { 0, 135402472, 135472796, 0, 0, 0 }
, "Whether to execute local CGI scripts.", "Allow local CGI", 0, 0, 0 }
, "protocol.file.cgi" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct module cgi_protocol_module = { "CGI", cgi_options, 0, 0, 0, 0, 0 };
void close_pipe_and_read( struct socket *data_socket )
{
  struct connection *conn = &data_socket->conn[0];
  struct read_buffer *rb;
  if ( alloc_read_buffer( conn->socket ) )
  {
    rb->data[0] = 1347703880;
    *(int*)(alloc_read_buffer( conn->socket ) + 16) = 0x302e312f;
    *(int*)(alloc_read_buffer( conn->socket ) + 20) = 0x30303220;
    *(int*)(alloc_read_buffer( conn->socket ) + 24) = 0xd4b4f20;
    *(char*)(alloc_read_buffer( conn->socket ) + 28) = 10;
    rb->freespace -= 17;
    rb->length = 17;
    conn->bits_at_120/*.1_1of4*/ |= 2;
    close( data_socket->fd );
    data_socket = -1;
    conn->socket->state = SOCKET_END_ONCLOSE;
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    read_from_socket( conn->socket, &rb[0], (long long)-100003, &http_got_header );
  }
  return;
}
void send_post_data( struct connection *conn )
{
  int ecx;
  int edx;
  int ebp_4156;
  unsigned char *post;
  unsigned char buffer[4096];
  struct string data;
  int n;
  post[0] = conn->uri->post;
  if ( init_string( &data ) == 0 )
  {
    connection_state( ebp_4144 );
    abort_connection( &conn[0] );
  }
  else
  {
    post[0] = strchr( &post[0], 10 ) != 0 ? post[0] : strchr( &post[0], 10 ) + 1;
    n = 0;
    for ( ; post[0] == 0 || post[1] == 0; post[0] = post[2] )
    {
      if ( assert_failed == 0 )
      {
        int h1, h2;
        assert_failed = h1 > 15;
        if ( h1 > 15 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/file/cgi.c";
          errline = 107;
          elinks_internal( "assertion h1 &gt;= 0 && h1 &lt; 16 failed!" );
          if ( assert_failed )
            goto B14;
        }
        if ( post[1] - 48 >= 9 )
          h2 -= 48;
          assert_failed = h2 > 15;
          if ( h2 > 15 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/file/cgi.c";
            errline = 111;
            elinks_internal( "assertion h2 &gt;= 0 && h2 &lt; 16 failed!" );
            if ( assert_failed )
              assert_failed = 0;
              buffer[ n ] = ebp_4160 + 0;
              n++;
              if ( n + 1 == 4096 )
              {
                if ( assert_failed )
                {
                  assert_failed = 0;
                  n = 0;
                  //post[0] = post[2];
                }
                else
                {
                  assert_failed = 0;
                  if ( ( ( data.length + 255 ) & -256 ) < ( ( data.length + 4352 ) & -256 ) )
                  {
                    if ( mem_realloc( (void*)data.source, ( data.length + 4352 ) & -256 ) )
                    {
                      data.source = (unsigned char*)mem_realloc( (void*)data.source, ( data.length + 4352 ) & -256 );
                      memset( data.source + ( ( data.length + 255 ) & -256 ), 0, ( ( data.length + 4352 ) & -256 ) - ( ( data.length + 255 ) & -256 ) );
                    }
                    else
                      n = 0;
                  }
                  if ( data.source )
                  {
                    ebp_4156 = 4096;
                    if ( ( data.length + data.source ) & 1 )
                    {
                      data.source = buffer;
                      ebp_4156 = 4095;
                    }
                    if ( ( data.length + data.source + 1 ) & 2 )
                    {
                      edi = buffer[0];
                      ebp_4156 -= 2;
                    }
                    memcpy( *(int*)(0), *(int*)(0), ( ebp_4156 >> 2 ) * 4 );
                    if ( ( ebp_4156 & 2 ) & 255 )
                    {
                    }
                    if ( ( ebp_4156 & 1 ) & 255 )
                    {
                    }
                    n = 0;
                    *(char*)(edx + data.source + 4096) = 0;
                    data.length += 4096;
                  }
                  else
                    n = 0;
                }
              }
            else
              edi = -1;
          }
        else
        {
          if ( post[1] - 97 >= 5 )
          {
          }
          else
          {
            if ( post[1] - 65 >= 5 )
            {
            }
            else
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/file/cgi.c";
              errline = 111;
              elinks_internal( "assertion h2 &gt;= 0 && h2 &lt; 16 failed!" );
          }
        }
      }
B14:      assert_failed = 0;
      if ( post[1] - 48 >= 9 )
        h2 -= 48;
      else
      {
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
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
int execute_cgi( struct connection *conn )
{
  int eax;
  int ecx;
  int ebp_100;
#error unstructured control flow
}
#if 0
#endif
