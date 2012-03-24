#include "socket.c.h"
void ssl_want_read( struct socket *socket )
{
  int eax;
  if ( ( socket->bits_at_36/*.1_1of4*/ & 4 ) & 255 )
    gnutls_protocol_set_priority( *(int*)(socket->ssl), protocol_priority );
  switch ( gnutls_handshake( *(int*)(socket->ssl) ) )
  {
  case 0:
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && gnutls_certificate_verify_peers( *(int*)(socket->ssl) ) )
    {
      connection_state( S_SSL_ERROR );
      esi( socket[0].fd );
    }
    else
    {
      complete_connect_socket( &socket[0], 0, 0 );
    }
    break;
  default:
    socket->bits_at_36/*.1_1of4*/ = ( (int)socket->bits_at_36/*.1_1of4*/ & -5 ) | ( ( ( ( (int)socket->bits_at_36/*.1_1of4*/ >> 2 ) ^ 1 ) & 1 ) << 2 );
    if ( assert_failed == 0 )
      assert_failed = 0;
      eax( socket[0].fd, (long long)-100003 );
      return;
    else
      assert_failed = 0;
      eax( socket[0].fd, (long long)-100003 );
      return;
    break;
  }
  return;
}
int ssl_connect( struct socket *socket )
{
  int eax;
  int ret;
  if ( init_ssl_connection( socket ) == -100018 )
  {
    connection_state( S_SSL_ERROR );
    esi( socket[0].fd );
  }
  if ( ( socket->bits_at_36/*.1_1of4*/ & 4 ) & 255 )
    gnutls_protocol_set_priority( *(int*)(socket->ssl), protocol_priority );
  gnutls_transport_set_ptr( *(int*)(socket->ssl), &socket->fd );
  switch ( ret )
  {
  case -52:
  case -28:
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    eax( (long long)-100003 );
    set_handlers( socket->fd, &ssl_want_read, 0, &dns_exception, &socket[0].fd );
    return -1;
    break;
  case 0:
    if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && gnutls_certificate_verify_peers( *(int*)(socket->ssl) ) )
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      connect_socket( &socket[0], (long long)-100003 );
      return -1;
    }
    else
    {
    }
    break;
  default:
    if ( ret )
      socket->bits_at_36/*.1_1of4*/ = ( (int)socket->bits_at_36/*.1_1of4*/ & -5 ) | ( ( ( ( (int)socket->bits_at_36/*.1_1of4*/ >> 2 ) ^ 1 ) & 1 ) << 2 );
    break;
  }
  return 0;
}
struct connection_state connection_state( enum connection_basic_state  basic )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = basic == -1;
    if ( !(_Bool)( basic != -1 ) )
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
  return eax;
}
ssize_t ssl_write( struct socket *socket, unsigned char *data, int len )
{
  ssize_t wr;
  if ( wr < 1 )
  {
    if ( wr != -52 && wr != -28 )
    {
      if ( wr == 0 )
      {
        return -5;
      }
      if ( wr != -53 )
      {
        *(int*)(__errno_location(  )) = -100018;
        return -2;
      }
    }
    return -1;
  }
  else
  {
    return gnutls_record_send( *(int*)(socket->ssl), data, len );
  }
}
ssize_t ssl_read( struct socket *socket, unsigned char *data, int len )
{
  ssize_t rd;
  if ( rd < 1 )
  {
    if ( rd != -37 )
    {
      if ( rd == -52 || rd == -28 )
      {
        return -3;
      }
      if ( rd == 0 )
      {
        return -4;
      }
      if ( rd != -54 )
      {
        *(int*)(__errno_location(  )) = -100018;
        return -2;
      }
    }
    return -1;
  }
  else
  {
    return gnutls_record_recv( *(int*)(socket->ssl), data, len );
  }
}
int ssl_close( struct socket *socket )
{
  gnutls_bye( *(int*)(socket->ssl), 0 );
  done_ssl_connection( socket );
  return 0;
}
#if 0
#endif
