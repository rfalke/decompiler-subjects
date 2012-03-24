#include "socket.c.h"
static struct list_head_elinks socket_weak_refs = { &socket_weak_refs, &socket_weak_refs };
struct connect_info *init_connection_info( struct uri *uri, struct socket *socket, socket_connect_T connect_done )
{
  struct connect_info *connect_info;
  if ( mem_calloc( 1, esi ) )
  {
    *(int*)(mem_calloc( 1, esi ) + 12) = connect_done[0];
    connect_info->port = get_uri_port( &uri[0] );
    connect_info->triedno = -1;
    connect_info->addr = 0;
    connect_info->ip_family = uri->ip_family;
    uri->object.refcount = uri->object.refcount;
    connect_info->uri = &uri[0];
  }
  return &connect_info[0];
}
void done_connection_info( struct socket *socket )
{
  struct connect_info *connect_info = socket->connect_info;
  if ( assert_failed == 0 )
  {
    assert_failed = connect_info[0].addr == 0;
    if ( !(_Bool)( connect_info[0].addr != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
      errline = 129;
      elinks_internal( "assertion socket-&gt;connect_info failed!" );
    }
  }
  if ( connect_info->dnsquery )
    kill_dns_request( &connect_info->dnsquery );
{
  void *p = (void*)connect_info->addr;
  if ( connect_info->addr )
    mem_free( &((int*)p)[0] );
  done_uri( connect_info->uri );
  if ( socket->connect_info )
  {
    mem_free( (void*)socket->connect_info );
  }
  socket->connect_info = 0;
  return;
}
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
struct socket *init_socket( void *conn, struct socket_operations *ops )
{
  struct socket *socket;
  if ( socket[0].fd )
  {
    socket = -1;
    socket->conn = conn;
    *(int*)(mem_calloc( 1, 40 ) + 24) = ops->socket_operations;
  }
  return (struct socket*)mem_calloc( 1, 40 );
}
void done_socket( struct socket *socket )
{
  int eax;
  struct socket_weak_ref *ref;
  close_socket( socket );
  if ( socket->connect_info )
  {
    ref = &socket[0].fd;
    done_connection_info( &socket[0] );
  }
  ref = &socket->read_buffer->done[0];
  if ( socket->read_buffer )
    mem_free( (void*)ref[0].next );
  ref = &socket->write_buffer[0];
  socket->read_buffer = 0;
  if ( socket->write_buffer )
    mem_free( (void*)ref[0].next );
  socket->write_buffer = 0;
  ref = &socket_weak_refs.next[0];
  if ( socket_weak_refs.next != socket_weak_refs.next )
  {
    do
    {
      if ( ref->socket == socket[0].fd )
      {
        ref->socket = 0;
        ref = &ref;
        if ( ref->next != socket_weak_refs.next )
          continue;
        else
          break;
      }
      else
      {
        ref = &ref;
      }
    }
    while ( ref->next != socket_weak_refs.next );
  }
  return;
}
void close_socket( struct socket *socket )
{
  int eax;
  if ( socket[0].fd != -1 )
  {
    if ( socket->ssl )
    {
      ssl_close( &socket[0] );
      socket->fd = socket->fd;
    }
    close( socket->fd );
    set_handlers( socket->fd, 0, 0, 0, 0 );
    socket = -1;
  }
  return;
}
void dns_exception( struct socket *socket )
{
  if ( assert_failed == 0 )
    assert_failed = 0;
  else
    assert_failed = 0;
  connect_socket( socket, (long long)( eax ) );
  return;
}
void exception( struct socket *socket )
{
  int edx;
  if ( assert_failed == 0 )
    assert_failed = 0;
  else
    assert_failed = 0;
  edx( socket[0].fd, (long long)( ecx ) );
  return;
}
void timeout_socket( struct socket *socket )
{
  int eax;
  if ( socket->connect_info == 0 )
  {
    connection_state( S_TIMEOUT );
    esi( socket[0].fd );
    return;
  }
  else
  {
    if ( socket->connect_info->dnsquery )
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
        eax( socket[0].fd, (long long)-100010 );
        return;
    }
    else
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      connect_socket( &socket[0], (long long)-100003 );
      if ( socket->connect_info )
      {
        if ( assert_failed == 0 )
          assert_failed = 0;
      }
      else
      {
        return;
      }
    }
    assert_failed = 0;
  }
}
void dns_found( struct socket *socket, struct sockaddr_storage *addr, int addrlen )
{
  int eax;
  int edx;
  struct connect_info *connect_info = socket->connect_info;
  if ( addr == 0 )
  {
  }
  else
  {
    if ( assert_failed == 0 )
    {
      assert_failed = connect_info[0].addr == 0;
      if ( !(_Bool)( connect_info[0].addr != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
        errline = 233;
        elinks_internal( "assertion connect_info failed!" );
      }
    }
    connect_info = (struct connect_info*)mem_alloc( addrlen << 7 );
    *ebp_40 = addrlen << 7;
    if ( connect_info[0].addr )
    {
      memcpy( connect_info[0].addr, &addr[0].ss_family, addrlen << 7 );
      connect_info->addrno = addrlen;
      if ( assert_failed == 0 )
        assert_failed = 0;
        socket = &socket[0];
        addr = -100003;
        addrlen = 0;
      else
        assert_failed = 0;
        socket = &socket[0];
        addr = -100003;
        addrlen = 0;
    }
    else
    {
    }
  }
  connection_state(  );
  socket = &socket[0];
  addr = ebp_32;
  addrlen = ebp_28;
  ;
}
void make_connection( struct socket *socket, struct uri *uri, socket_connect_T connect_done, int no_cache )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *host;
  struct connect_info *connect_info;
  enum dns_result  result;
  host[0] = get_uri_string( uri, URI_DNS_HOST );
  if ( assert_failed == 0 )
    assert_failed = 0;
  else
  {
    assert_failed = 0;
    connect_info = -100003;
  }
  eax(  );
  if ( host[0] == 0 )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = 0;
      connect_info = -100004;
      uri = &connect_info[0].addr[0].ss_family;
      connect_done = 0;
      socket = &socket[0];
      ;
    }
  }
  else
  {
    if ( init_connection_info( &uri[0], &socket[0], connect_done ) == 0 )
    {
      mem_free( &host[0] );
      connection_state( S_OUT_OF_MEM );
      socket = &socket[0];
      uri = ebp_32;
      esi = socket->ops->retry;
      connect_done = ebp_28;
      ;
    }
    else
    {
      socket->connect_info = init_connection_info( &uri[0], &socket[0], connect_done );
      socket->bits_at_36/*.1_1of4*/ = ( (int)socket->bits_at_36/*.1_1of4*/ & -3 ) | ( ( get_protocol_need_ssl( uri->protocol ) & 1 ) * 2 );
      *ebp_44 = connect_info[0].addr;
      if ( ( ( ( (int)socket->bits_at_36/*.1_1of4*/ & -3 ) | ( ( get_protocol_need_ssl( uri->protocol ) & 1 ) * 2 ) ) & 8 ) == 0 )
      {
        socket->bits_at_36/*.1_1of4*/ = ( (int)socket->bits_at_36/*.1_1of4*/ & -5 ) | ( ( ( get_blacklist_flags( &uri[0] ) >> 2 ) & 1 ) << 2 ) | 8;
        connect_info = &connect_info[0];
      }
      connect_info += 0;
      result = find_host( &host[0], &connect_info->dnsquery, &dns_found, &socket[0].fd, no_cache );
      mem_free( &host[0] );
      if ( result == DNS_ASYNC )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = 0;
          connect_info = 1;
        }
      }
      else
      {
        return;
      }
    }
  }
  assert_failed = 0;
  connect_info = -100003;
}
int get_pasv_socket( struct socket *ctrl_socket, struct sockaddr_storage *addr )
{
  int eax;
  struct sockaddr_in bind_addr4;
  struct sockaddr *bind_addr;
  size_t addrlen;
  int sock;
  int syspf;
  socklen_t len;
  struct sockaddr_in6 bind_addr6;
  if ( ( ctrl_socket->bits_at_36/*.1_1of4*/ & 1 ) & 255 )
  {
    syspf = 10;
    bind_addr = &bind_addr6.sin6_family;
    addrlen = 28;
  }
  else
  {
    syspf = 2;
    bind_addr = &bind_addr4.sin_family;
    addrlen = 16;
  }
  memset( &addr[0].ss_family, 0, addrlen );
  memset( bind_addr, 0, addrlen );
  len = addrlen;
  if ( getsockname( ctrl_socket->fd, &addr[0].ss_family, &len ) == 0 )
  {
    if ( socket( syspf, 1, 6 ) < 0 )
    {
      if ( sock == -1 )
        addrlen = addrlen;
    }
    else
    {
      if ( set_nonblocking_fd( socket( syspf, 1, 6 ) ) >= 0 )
      {
        memcpy( bind_addr, &addr[0].ss_family, addrlen );
        if ( ( *(char*)(ctrl_socket + 36) & 1 ) & 255 )
          bind_addr6.sin6_port = 0;
        else
          bind_addr4.sin_port = 0;
        if ( bind( sock, bind_addr, addrlen ) == 0 )
        {
          len = addrlen;
          if ( getsockname( sock, &addr[0].ss_family, &len ) == 0 && listen( sock, 1 ) == 0 )
            set_ip_tos_throughput( sock );
            if ( 0 ^ 0 )
            {
              addrlen = addrlen;
              __stack_chk_fail(  );
            }
            return sock;
        }
      }
    }
    close( sock );
  }
  ebx( ctrl_socket, -1, *(int*)(__errno_location(  )) );
  sock = -1;
}
void complete_connect_socket( struct socket *socket, struct uri *uri, socket_connect_T done )
{
  int eax;
  int ecx;
  int edx;
  struct connect_info *connect_info = socket->connect_info;
  if ( socket->connect_info )
  {
    if ( connect_info->uri )
    {
      if ( ( socket->bits_at_36/*.1_1of4*/ & 4 ) & 255 )
        add_blacklist_entry( connect_info->uri, SERVER_BLACKLIST_NO_TLS );
      else
      {
        del_blacklist_entry( connect_info->uri, SERVER_BLACKLIST_NO_TLS );
        if ( ( ( socket->bits_at_36/*.1_1of4*/ & 2 ) & 255 ) == 0 )
        {
          if ( connect_info->done )
            eax(  );
        }
      }
    }
    if ( ( socket->bits_at_36/*.1_1of4*/ & 2 ) & 255 )
      goto B8;
  }
  else
  {
    if ( assert_failed == 0 )
    {
      assert_failed = uri[0].string == 0;
      if ( !(_Bool)( uri[0].string != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
        errline = 472;
        elinks_internal( "assertion uri && socket failed!" );
      }
    }
    if ( init_connection_info( &uri[0], &socket[0] ) == 0 )
    {
      connection_state( S_OUT_OF_MEM );
      socket = &socket[0];
      uri = ebp_32;
      done = ebp_28;
      ;
    }
    socket->connect_info = init_connection_info( &uri[0], &socket[0] );
    if ( ( socket->bits_at_36/*.1_1of4*/ & 2 ) & 255 )
      goto B8;
  }
B8:  if ( socket->ssl || ssl_connect( &socket[0] ) >= 0 )
    continue;
  else
  {
    return;
  }
}
void connected( struct socket *socket )
{
  int err;
  socklen_t len;
  assert_failed = 0;
  err = 0;
  len = 4;
  assert_failed = socket->connect_info == 0;
  if ( !(_Bool)( socket->connect_info != 0 ) )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
    errline = 506;
    elinks_internal( "assertion socket-&gt;connect_info != NULL failed: Lost connect_info!" );
    if ( assert_failed )
    {
      assert_failed = 0;
      return;
    }
  }
  if ( getsockopt( socket->fd, 1, 4, &err, &len ) == 0 )
  {
    if ( err > 9999 )
      err -= 10000;
    if ( err - 10000 == 0 )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = 0;
        complete_connect_socket( &socket[0], 0, 0 );
        return;
      }
    }
    else
    {
      connect_socket( &socket[0], -100012 );
      return;
    }
  }
  else
  {
    if ( *(int*)(__errno_location(  )) == 0 )
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
    }
    else
    {
    }
  }
  assert_failed = 0;
}
void connect_socket( struct socket *csocket, struct connection_state state )
{
  int sock;
  struct connect_info *connect_info = csocket->connect_info;
  int i;
  int trno = csocket->connect_info->triedno;
  int only_local = *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options ));
  int saved_errno;
  int at_least_one_remote_ip;
  int try_ipv6 = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  int try_ipv4 = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  int silent_fail;
  ;
}
void write_select( struct socket *socket )
{
  int eax;
  int wr;
  if ( assert_failed == 0 )
  {
    assert_failed = socket->write_buffer == 0;
    if ( !(_Bool)( socket->write_buffer != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
      errline = 728;
      elinks_internal( "assertion wb != NULL failed: write socket has no buffer" );
      if ( assert_failed )
        goto B2;
    }
    assert_failed = 0;
    socket->ops->set_timeout( &socket[0], (long long)0 );
    if ( socket->ssl )
      ssl_write( &socket[0], socket->write_buffer[2] + socket->write_buffer + 12, socket->write_buffer[1] - socket->write_buffer[2] );
    else
    {
      if ( assert_failed == 0 )
      {
        assert_failed = *(int*)(socket->write_buffer + 4) - *(int*)(socket->write_buffer + 8) < 1;
        if ( *(int*)(socket->write_buffer + 4) - *(int*)(socket->write_buffer + 8) < 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
          errline = 751;
          elinks_internal( "assertion wb-&gt;length - wb-&gt;pos &gt; 0 failed!" );
        }
      }
      do
      {
        if ( write( socket->fd, socket->write_buffer[2] + socket->write_buffer + 12, socket->write_buffer[1] - socket->write_buffer[2] ) == -1 )
        {
        }
        else
        {
          if ( eax == 0 )
          {
            if ( assert_failed == 0 )
              assert_failed = 0;
            else
              assert_failed = 0;
            eax( socket[0].fd, (long long)-100003 );
            return;
          }
          else
            wr = 0 ? -1 : edx;
        }
      }
      while ( *(int*)(__errno_location(  )) != 4 );
      socket->ops->set_state = socket->ops->set_state;
      esi( socket[0].fd, -1, *(int*)(__errno_location(  )) );
      return;
    }
    switch ( wr )
    {
    case -5:
      break;
    case -1:
      break;
    case -2:
      if ( assert_failed == 0 )
      {
        assert_failed = *(int*)(__errno_location(  )) == -1;
        if ( !(_Bool)( *(int*)(__errno_location(  )) != -1 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/state.h";
          errline = 132;
          elinks_internal( "assertion basic != S_ERRNO failed!" );
          if ( assert_failed == 0 )
          {
            esi( socket[0].fd, (long long)-100003 );
            return;
          }
        }
      }
      assert_failed = 0;
      break;
    default:
      if ( wr >= 0 )
      {
        socket->write_buffer[2] = *(int*)(socket->write_buffer + 8) + ssl_write( &socket[0], socket->write_buffer[2] + socket->write_buffer + 12, socket->write_buffer[1] - socket->write_buffer[2] );
        if ( ssl_write( &socket[0], socket->write_buffer[2] + socket->write_buffer + 12, socket->write_buffer[1] - socket->write_buffer[2] ) + *(int*)(socket->write_buffer + 8) == *(int*)(socket->write_buffer + 4) )
        {
          socket_write_T done;
          done[0] = done[0];
          if ( ( ( socket->bits_at_36/*.1_1of4*/ & 16 ) & 255 ) == 0 )
            set_handlers( socket->fd, 0, 0, 0, 0 );
          else
          {
            select_handler_T read_handler;
            select_handler_T error_handler;
            error_handler[0] = read_handler != 0 ? 0 : exception;
            set_handlers( socket->fd, read_handler, 0, read_handler != 0 ? 0 : &exception, &socket[0].fd );
          }
          if ( socket->write_buffer )
            mem_free( socket->write_buffer );
          socket->write_buffer = 0;
          socket = &socket[0];
          ;
        }
      }
      return;
      break;
    }
  }
B2:  assert_failed = 0;
  socket->ops->done( &socket[0], (long long)-100003 );
  return;
}
void write_to_socket( struct socket *socket, unsigned char *data, int len, struct connection_state state, socket_write_T write_done )
{
  int eax;
  select_handler_T read_handler;
  struct write_buffer *wb;
  if ( assert_failed == 0 )
  {
    assert_failed = len < 1;
    if ( len < 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
      errline = 810;
      elinks_internal( "assertion len &gt; 0 failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    assert_failed = 0;
    socket->ops->set_timeout( &socket[0], (long long)0 );
    if ( mem_alloc( len + 16 ) == 0 )
    {
      connection_state( S_OUT_OF_MEM );
      socket = &socket[0];
      data = ebp_32;
      esi = socket->ops->done;
      len = ebp_28;
    }
    else
    {
      *(int*)(mem_alloc( len + 16 ) + 4) = len;
      *(int*)(mem_alloc( len + 16 ) + 8) = 0;
      *(int*)(mem_alloc( len + 16 )) = write_done[0];
      memcpy( mem_alloc( len + 16 ) + 12, data, len );
      if ( socket->write_buffer )
        mem_free( socket->write_buffer );
      read_handler[0] = 0;
      socket->write_buffer = wb[0].done;
      if ( ( socket->bits_at_36/*.1_1of4*/ & 16 ) & 255 )
        get_handler( socket->fd, SELECT_HANDLER_READ );
      set_handlers( socket->fd, read_handler, &write_select, &exception, &socket[0].fd );
      socket = &socket[0];
      data = &state.basic;
      len = state.syserr;
      socket->ops->set_state = socket->ops[0].set_state;
    }
    ;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void read_select( struct socket *socket )
{
  int eax;
  int edx;
  struct read_buffer *rb = socket->read_buffer;
  ssize_t rd;
  if ( assert_failed == 0 )
  {
    assert_failed = rb[0].done == 0;
    if ( !(_Bool)( rb[0].done != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
      errline = 858;
      elinks_internal( "assertion rb != NULL failed: read socket has no buffer" );
      if ( assert_failed )
      {
        assert_failed = 0;
        socket->ops->done( &socket[0], (long long)-100003 );
        return;
      }
    }
    assert_failed = 0;
    socket->ops->set_timeout( &socket[0], (long long)0 );
    if ( ( ( socket->bits_at_36/*.1_1of4*/ & 16 ) & 255 ) == 0 )
    {
      set_handlers( socket->fd, 0, 0, 0, 0 );
      if ( rb->freespace )
      {
        if ( socket->ssl )
          ssl_read( &socket[0], &rb->data[ rb->length ], rb->freespace );
          switch ( rd )
          {
          case -3:
            if ( assert_failed == 0 )
              assert_failed = 0;
            else
              assert_failed = 0;
            read_from_socket( &socket[0], &rb[0], (long long)( eax ), &edx );
            return;
            break;
          case -4:
            if ( socket->state )
            {
              socket->state = SOCKET_CLOSED;
              rb[0](  );
              return;
            }
            else
            {
              connection_state(  );
              esi( socket[0].fd );
              return;
            }
            break;
          case -1:
            esi( socket[0].fd, -1, *(int*)(__errno_location(  )) );
            return;
            break;
          case -2:
            if ( assert_failed == 0 )
            {
              assert_failed = *(int*)(__errno_location(  )) == -1;
              if ( !(_Bool)( *(int*)(__errno_location(  )) != -1 ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/state.h";
                errline = 132;
                elinks_internal( "assertion basic != S_ERRNO failed!" );
                if ( assert_failed )
                {
                }
                else
                {
                  esi( socket[0].fd, (long long)( edi ) );
                  return;
                }
              }
            }
            assert_failed = 0;
            break;
          default:
            rb->length += rd;
            rb->freespace -= rd;
            if ( assert_failed == 0 )
            {
              assert_failed = ( rb->freespace - rd ) >> 31;
              if ( ( rb->freespace - rd ) >> 31 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
                errline = 925;
                elinks_internal( "assertion rb-&gt;freespace &gt;= 0 failed!" );
              }
              rb[0](  );
              return;
            }
            break;
          }
        else
        {
          do
          {
            if ( read( socket->fd, &rb->data[ rb->length ], rb->freespace ) == -1 )
            {
            }
            else
            {
              if ( read( socket->fd, &rb->data[ rb->length ], -100003 ) )
                rd = 0 ? -1 : read( socket->fd, &rb->data[ rb->length ], -100003 );
                switch ( rd )
                {
                case -3:
                  break;
                case -4:
                  break;
                case -1:
                  break;
                case -2:
                  break;
                default:
                  break;
                }
            }
          }
          while ( *(int*)(__errno_location(  )) != 4 );
        }
      }
    }
    else
    if ( rb->freespace )
    {
    }
    rb = (struct read_buffer*)mem_realloc( rb[0].done, ( rb->length + 20496 ) & -4096 );
    if ( mem_realloc( rb[0].done, ( rb->length + 20496 ) & -4096 ) == 0 )
    {
      connection_state(  );
      esi( socket[0].fd );
      return;
    }
    else
    {
      rb->freespace = ( ( rb->length + 20496 ) & -4096 ) - *(int*)(mem_realloc( rb[0].done, ( rb->length + 20496 ) & -4096 ) + 4) - 16;
      if ( assert_failed == 0 )
      {
        assert_failed = ( ( rb->length + 20496 ) & -4096 ) - *(int*)(mem_realloc( rb[0].done, ( rb->length + 20496 ) & -4096 ) + 4) - 16 < 1;
        if ( ( ( rb->length + 20496 ) & -4096 ) - *(int*)(mem_realloc( rb[0].done, ( rb->length + 20496 ) & -4096 ) + 4) - 16 < 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
          errline = 881;
          elinks_internal( "assertion rb-&gt;freespace &gt; 0 failed!" );
        }
      }
      socket->read_buffer = &rb[0];
      if ( socket->ssl )
        ssl_read( &socket[0], &rb->data[ rb->length ], rb->freespace );
        switch ( rd )
        {
        case -3:
          break;
        case -4:
          break;
        case -1:
          break;
        case -2:
          break;
        default:
          break;
        }
      else
      {
        do
        {
        }
        while ( *(int*)(__errno_location(  )) != 4 );
      }
    }
  }
  else
  {
    assert_failed = 0;
    socket->ops->done( &socket[0], (long long)-100003 );
    return;
  }
}
struct read_buffer *alloc_read_buffer( struct socket *socket )
{
  int eax;
  struct read_buffer *rb;
  if ( mem_calloc( 1, esi ) == 0 )
  {
    connection_state( S_OUT_OF_MEM );
    edi( socket[0].fd );
    return &rb[0];
  }
  *(int*)(mem_calloc( 1, esi ) + 8) = 20464;
  return &rb[0];
}
void read_from_socket( struct socket *socket, struct read_buffer *buffer, struct connection_state state, socket_read_T done )
{
  int eax;
  struct socket_weak_ref ref;
  select_handler_T write_handler;
  ref.socket = socket;
  ref.prev = &socket_weak_refs.next[0];
  &ref = &socket_weak_refs.next[0];
  socket_weak_refs.next = (void*)ref.next;
  socket_weak_refs.prev = (void*)ref.next;
  buffer[0].done = done;
  if ( assert_failed == 0 )
    assert_failed = 0;
  else
    assert_failed = 0;
  eax( socket[0].fd, (long long)( edx ) );
  ;
}
void read_response_from_socket( struct socket *socket )
{
  int edx;
  struct read_buffer *rb;
  if ( rb[0].done )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    read_from_socket( &socket[0], &rb[0], (long long)-100003, socket->read_done );
  }
  return;
}
void request_from_socket( struct socket *socket, unsigned char *data, int datalen, struct connection_state state, enum socket_state  sock_state, socket_read_T read_done )
{
  socket->read_done = read_done;
  socket->state = sock_state;
  sock_state = read_response_from_socket;
  socket = socket;
}
void kill_buffer_data( struct read_buffer *rb, int n )
{
  if ( assert_failed == 0 )
  {
    if ( n < 0 || rb->length < n )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/socket.c";
      errline = 1012;
      elinks_internal( "assertion n &gt;= 0 && n &lt;= rb-&gt;length failed: bad number of bytes: %d" );
      if ( assert_failed )
        goto B2;
    }
    else
      assert_failed = 0;
    if ( n )
    {
      rb->length -= n;
      memmove( &rb->data[0], &rb->data[ n ], rb->length - n );
      rb->freespace += n;
      return;
    }
    return;
  }
B2:  assert_failed = 0;
  rb->length = 0;
  return;
}
#if 0
#endif
