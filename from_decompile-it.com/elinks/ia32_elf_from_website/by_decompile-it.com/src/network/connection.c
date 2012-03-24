#include "connection.c.h"
static unsigned int connection_id;
static int active_connections;
static timer_id_T keepalive_timeout;
static struct list_head_elinks connection_queue = { &connection_queue, &connection_queue };
static struct list_head_elinks host_connections = { &host_connections, &host_connections };
static struct list_head_elinks keepalive_connections = { &keepalive_connections, &keepalive_connections };
enum connection_priority  get_priority( struct connection *conn )
{
  int ebx;
  enum connection_priority  priority = PRI_MAIN;
  do
  {
  }
  while ( conn->pri[ priority ] == 0 && 0 + 1 + 1 != 7 );
  if ( assert_failed == 0 )
  {
    assert_failed = priority == PRIORITIES;
    if ( !(_Bool)( priority != PRIORITIES ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 79;
      elinks_internal( "assertion priority != PRIORITIES failed: Connection has no owner" );
      return priority;
    }
  }
  priority = priority;
  return priority;
}
int get_connections_connecting_count( void )
{
  int eax;
  struct connection *conn;
  int i;
  &conn[0] = &connection_queue.next[0];
  i = 0;
  if ( connection_queue.next != connection_queue.next )
  {
    do
    {
      &conn[0] = &conn;
      i += conn->state.basic - 1 <= 6;
    }
    while ( conn->next != connection_queue.next );
  }
  return 0;
}
int get_connections_transfering_count( void )
{
  int eax;
  struct connection *conn;
  int i;
  &conn[0] = &connection_queue.next[0];
  i = 0;
  if ( connection_queue.next != connection_queue.next )
  {
    do
    {
      &conn[0] = &conn;
      i += conn->state.basic > 7;
    }
    while ( conn->next != connection_queue.next );
  }
  return 0;
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
struct host_connection *get_host_connection( struct connection *conn )
{
  struct host_connection *host_conn;
  if ( conn->uri->host && host_connections.next != host_connections.next )
  {
    while ( compare_uri( host_conn->uri, conn->uri, URI_HOST ) == 0 )
    {
      &host_conn[0] = &host_conn;
      if ( host_conn->next == host_connections.next )
        goto B1;
    }
    return &host_conn[0];
  }
B1:  &host_conn[0] = 0;
  return &host_conn[0];
}
int add_host_connection( struct connection *conn )
{
  struct host_connection *host_conn;
  if ( host_conn[0].next == 0 )
  {
    if ( conn->uri->host && host_conn[0] )
    {
      conn->uri->object.object = conn->uri->object.refcount;
      host_conn->uri = conn->uri;
      host_conn->prev = &host_connections.next[0];
      host_conn = &host_connections.next[0];
      host_connections.next = (void*)host_conn[0].next;
      host_conn->prev = &host_conn[0];
    }
    else
    {
      return 1;
    }
  }
  host_conn->object.refcount = host_conn->object.refcount;
  return 1;
}
int get_connections_count( void )
{
  int eax;
  if ( connection_queue.next != connection_queue.next )
  {
    do
    {
    }
    while ( connection_queue.next != connection_queue.next );
  }
  return 0 + 1;
}
int get_keepalive_connections_count( void )
{
  int eax;
  if ( keepalive_connections.next != keepalive_connections.next )
  {
    do
    {
    }
    while ( keepalive_connections.next != keepalive_connections.next );
  }
  return 0 + 1;
}
void set_connection_socket_state( struct socket *socket, struct connection_state state )
{
  if ( assert_failed == 0 )
  {
    assert_failed = socket[0].fd == 0;
    if ( !(_Bool)( socket[0].fd != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 239;
      elinks_internal( "assertion socket failed!" );
      state.basic = state.basic;
      state.syserr = state.syserr;
      socket = &socket->conn[0];
    }
  }
}
void set_connection_socket_timeout( struct socket *socket, struct connection_state state )
{
  if ( assert_failed == 0 )
  {
    assert_failed = socket[0].fd == 0;
    if ( !(_Bool)( socket[0].fd != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 246;
      elinks_internal( "assertion socket failed!" );
      socket = &socket->conn[0];
    }
    socket = &socket->conn[0];
  }
  else
  {
    socket = &socket->conn[0];
  }
}
void retry_connection_socket( struct socket *socket, struct connection_state state )
{
  if ( assert_failed == 0 )
  {
    assert_failed = socket[0].fd == 0;
    if ( !(_Bool)( socket[0].fd != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 253;
      elinks_internal( "assertion socket failed!" );
      state.basic = state.basic;
      state.syserr = state.syserr;
      socket = &socket->conn[0];
    }
  }
}
void done_connection_socket( struct socket *socket, struct connection_state state )
{
  if ( assert_failed == 0 )
  {
    assert_failed = socket[0].fd == 0;
    if ( !(_Bool)( socket[0].fd != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 260;
      elinks_internal( "assertion socket failed!" );
      state.basic = state.basic;
      state.syserr = state.syserr;
      socket = &socket->conn[0];
    }
  }
}
struct connection *init_connection( struct uri *uri, struct uri *proxied_uri, struct uri *referrer, off_t start, enum cache_mode  cache_mode, enum connection_priority  priority )
{
  static struct socket_operations connection_socket_operations = { &set_connection_socket_state, &set_connection_socket_timeout, &retry_connection_socket, &done_connection_socket };
  struct connection *conn;
  if ( mem_calloc( 1, 156 ) )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = proxied_uri->protocol == 15;
      if ( !(_Bool)( proxied_uri->protocol != 15 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
        errline = 279;
        elinks_internal( "assertion proxied_uri-&gt;protocol != PROTOCOL_PROXY failed!" );
      }
    }
    conn->socket = init_socket( (void*)conn[0].next, &connection_socket_operations );
    if ( conn->socket )
    {
      conn->data_socket = init_socket( (void*)conn[0].next, &connection_socket_operations );
      if ( conn->data_socket == 0 )
        mem_free( (void*)conn->socket );
      else
      {
        conn->progress = init_progress( start );
        if ( conn->progress == 0 )
        {
          mem_free( (void*)conn->data_socket );
          mem_free( (void*)conn->socket );
          &conn[0] = 0;
          mem_free( (void*)conn[0].next );
          return &conn[0];
        }
        conn->proxied_uri = &proxied_uri[0];
        conn->uri = &uri[0];
        conn->id = connection_id;
        conn->pri[ priority ] = 1;
        conn->content_encoding = ENCODING_NONE;
        conn->stream_pipes[1] = -1;
        conn->stream_pipes[0] = -1;
        conn->cache_mode = cache_mode;
        conn->downloads.prev = conn->downloads.next;
        conn->downloads.next = conn->downloads.next;
        conn->est_length = (long long)-1;
        &conn->timer = 0;
        connection_id++;
        if ( referrer[0].string )
        {
          if ( referrer->protocol != 4 || conn->uri->protocol == 4 )
          {
            referrer->object.refcount = referrer->object.refcount;
            conn->referrer = &referrer[0];
            return &conn[0];
          }
          return &conn[0];
        }
        else
        {
          return &conn[0];
        }
      }
    }
    &conn[0] = 0;
    mem_free( (void*)conn[0].next );
    return &conn[0];
  }
  else
  {
    return &conn[0];
  }
}
void stat_timer( struct connection *conn )
{
  int eax;
  update_progress( conn->progress, conn->received, conn->est_length, conn->from );
}
void set_connection_state( struct connection *conn, struct connection_state state )
{
  int eax;
  int edx;
  struct download *download;
  struct progress *progress = conn->progress;
  if ( conn->state.basic < 0 )
  {
    conn = &conn[0];
    if ( state.basic >= 0 )
    {
      state.connection_state = conn->state;
      conn->prev_error = conn->state;
      conn->prev_error.syserr = conn->state.syserr;
    }
    else
    {
      conn->state.syserr = state.syserr;
      conn->state.basic = state.basic;
      kill_timer( &progress->timer );
      download = &conn->downloads.next[0];
      if ( conn->downloads.next != conn->downloads.next )
      {
        do
        {
          download->state.syserr = state.syserr;
          download->state.basic = state.basic;
          download->prev_error = conn->prev_error;
          download->prev_error.syserr = conn->prev_error.syserr;
          download = &download;
        }
        while ( conn->downloads.next != download->next );
      }
      if ( state.basic >= 0 )
      {
      }
      return;
    }
  }
  conn->state.syserr = state.syserr;
  conn->state.basic = state.basic;
  if ( state.basic == 8 )
  {
    state.connection_state = progress->timer;
    if ( progress->timer == 0 )
    {
      unsigned int id = conn->id;
      start_update_progress( &progress[0], &stat_timer, (void*)conn[0].next );
      update_progress( conn->progress, conn->received, conn->est_length, conn->from );
      if ( connection_queue.next != connection_queue.next )
      {
        do
        {
          if ( conn[0].next == connection_queue.next && conn->id == id )
            conn = &conn[0];
          else
          {
          }
        }
        while ( connection_queue.next != connection_queue.next );
        return;
      }
      else
      {
        return;
      }
    }
  }
  else
  {
    kill_timer( &progress->timer );
  }
}
void shutdown_connection_stream( struct connection *conn )
{
  if ( conn->stream )
  {
    close_encoded( conn->stream );
    conn->stream = 0;
  }
  else
  if ( conn->stream_pipes[0] >= 0 )
    close( conn->stream_pipes[0] );
  if ( conn->stream_pipes[1] >= 0 )
  {
    close( conn->stream_pipes[1] );
  }
  conn->stream_pipes[1] = -1;
  conn->stream_pipes[0] = -1;
  return;
}
void free_connection_data( struct connection *conn )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ( (int)conn->bits_at_120/*.1_1of4*/ ^ 1 ) & 1;
    if ( ( (int)conn->bits_at_120/*.1_1of4*/ ^ 1 ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 397;
      elinks_internal( "assertion conn-&gt;running failed: connection already suspended" );
    }
  }
  conn->bits_at_120/*.1_1of4*/ &= 254;
  active_connections--;
  if ( assert_failed == 0 )
  {
    assert_failed = ( active_connections - 1 ) >> 31;
    if ( ( active_connections - 1 ) >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 403;
      elinks_internal( "assertion active_connections &gt;= 0 failed: active connections underflow" );
      if ( assert_failed == 0 )
      {
        if ( conn->socket->ssl && conn->cached )
        {
          if ( conn->cached->ssl_info )
          {
            mem_free( (void*)conn->cached->ssl_info );
          }
          conn->cached->ssl_info = get_ssl_connection_cipher( conn->socket );
        }
        if ( conn->done )
          eax( conn[0].next );
        done_socket( conn->socket );
        done_socket( conn->data_socket );
        shutdown_connection_stream( &conn[0] );
        if ( conn->info )
          mem_free( conn->info );
        conn->info = 0;
        kill_timer( &conn->timer );
        if ( conn->state && get_host_connection( &conn[0] ) )
        {
          *(int*)(get_host_connection( &conn[0] ) + 8)--;
          if ( *(int*)(get_host_connection( &conn[0] ) + 8) - 1 == 0 )
          {
            *(int*)(*(int*)(get_host_connection( &conn[0] )) + 4) = *(int*)(get_host_connection( &conn[0] ) + 4);
            *(int*)(*(int*)(get_host_connection( &conn[0] ) + 4)) = *(int*)(get_host_connection( &conn[0] ));
            done_uri( *(int*)(get_host_connection( &conn[0] ) + 12) );
            mem_free( (void*)get_host_connection( &conn[0] ) );
            return;
          }
        }
        return;
      }
    }
  }
  assert_failed = 0;
  active_connections = 0;
}
void notify_connection_callbacks( struct connection *conn )
{
  int edx;
  unsigned int id = conn->id;
  struct download *download = &download->conn->next, *next = &download->conn[0].next[0];
  if ( conn->downloads.next != conn->downloads.next )
  {
    next = &next[0];
    while ( download->cached = conn->cached, download->callback == 0 )
    {
      *ebp_32 = conn->state.basic;
      if ( conn->state.basic >= 0 )
      {
        if ( connection_queue.next != connection_queue.next )
        {
          do
          {
            if ( conn[0].next == connection_queue.next && conn->id == id )
              goto B5;
            else
            {
            }
          }
          while ( connection_queue.next != connection_queue.next );
          break;
        }
      }
B5:      download = &download[0];
      next = &next;
      if ( conn->downloads.next == next[0].next )
        break;
    }
    edx( download[0].next, download->data );
    *ebp_32 = conn->state.basic;
  }
  return;
}
void done_connection( struct connection *conn )
{
  if ( conn->state.basic >= 0 )
  {
    assert_failed = 0;
    set_connection_state( &conn[0], (long long)-100003 );
  }
  conn->prev = conn->prev;
  &conn->prev = &conn;
  notify_connection_callbacks( &conn );
  if ( conn->referrer )
    done_uri( conn->referrer );
  done_uri( conn->uri );
  done_uri( conn->proxied_uri );
  mem_free( (void*)conn->socket );
  mem_free( (void*)conn->data_socket );
  done_progress( conn->progress );
  mem_free( (void*)conn[0].next );
  return;
}
void add_to_queue( struct connection *conn )
{
  if ( connection_queue.next != connection_queue.next )
  {
    do
    {
    }
    while ( get_priority( &connection_queue.next[0] ) <= get_priority( &connection_queue.next[0] ) && connection_queue.next != connection_queue.next );
  }
  conn = &connection_queue.prev[0];
  conn->prev = &connection_queue.next[1];
  connection_queue.prev[0] = conn[0].next;
  conn->prev = &conn[0];
  return;
}
int do_keepalive_connection_callback( struct keepalive_connection *keep_conn )
{
  int edx;
  struct uri *proxied_uri = get_proxied_uri( keep_conn->uri );
  struct uri *proxy_uri = get_proxy_uri( keep_conn->uri, 0 );
  if ( get_proxy_uri( keep_conn->uri, 0 ) )
  {
    if ( ( proxied_uri[0].string != 0 ) & 255 )
    {
      struct connection *conn = init_connection( &proxy_uri[0], &proxied_uri[0], 0, (long long)0, CACHE_MODE_NEVER, PRI_CANCEL );
      if ( conn )
      {
        void (*done)( struct connection * );
        done[0] = keep_conn->done[0];
        if ( connection_queue.next == connection_queue.next )
        {
        }
        else
        {
          do
          {
          }
          while ( get_priority( &connection_queue.next[0] ) <= get_priority(  ) && connection_queue.next != connection_queue.next );
        }
        &conn[0] = &connection_queue.prev[0];
        conn->prev = &connection_queue.next[1];
        connection_queue.prev[0] = conn;
        conn->prev = conn;
        if ( has_keepalive_connection( conn ) == 0 || add_host_connection( conn ) == 0 )
        {
          free_connection_data( conn );
          done_connection( conn );
          return 0;
        }
        active_connections++;
        *(char*)(ebp_28 + 120) |= 1;
        edi(  );
        return 1;
      }
    }
    else
    {
      if ( proxied_uri[0].string != 0 != 0 )
        done_uri( &proxy_uri[0] );
      return 1;
    }
  }
  else
  if ( ( ( proxied_uri[0].string != 0 ) & 255 ) == 0 )
    continue;
  done_uri( &proxied_uri[0] );
}
int has_keepalive_connection( struct connection *conn )
{
  int eax;
  struct keepalive_connection *keep_conn;
  if ( conn->uri->host && keepalive_connections.next != keepalive_connections.next )
  {
    for ( ; compare_uri( keep_conn->uri, conn->uri, URI_KEEPALIVE ) == 0; conn->uri = conn->uri )
    {
      keep_conn = &keep_conn;
      if ( keep_conn->next == keepalive_connections.next )
        break;
      //conn->uri = conn->uri;
    }
    conn->socket->fd = keep_conn->socket;
    conn->socket->bits_at_36/*.1_1of4*/ = ( (int)conn->socket->bits_at_36/*.1_1of4*/ & -2 ) | ( (int)keep_conn->bits_at_32/*.1_1of4*/ & 1 );
    keep_conn->socket = -1;
    keep_conn->done = 0;
    keep_conn->prev = keep_conn->prev;
    &keep_conn->prev = &keep_conn;
    if ( keep_conn->socket != -1 )
      close( keep_conn->socket );
    done_uri( keep_conn->uri );
    mem_free( (void*)keep_conn[0].next );
    return 1;
  }
  return 0;
}
void add_keepalive_connection( struct connection *conn, long timeout_in_seconds, void (*done)( struct connection * ) )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = conn->socket[0].fd == -1;
    if ( !(_Bool)( conn->socket[0].fd != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 594;
      elinks_internal( "assertion conn-&gt;socket-&gt;fd != -1 failed: keepalive connection not connected" );
      if ( assert_failed )
      {
      }
    }
    assert_failed = conn->uri->host == 0;
    if ( !(_Bool)( conn->uri->host != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 539;
      elinks_internal( "assertion uri-&gt;host failed!" );
      if ( assert_failed )
        assert_failed = 0;
        if ( edx )
        {
          conn = &conn[0];
          ;
        }
        free_connection_data( &conn[0] );
        done_connection( &conn[0] );
    }
    *ebp_32 = ebp_32;
    if ( mem_calloc( 1, 40 ) )
    {
      conn->uri->object.object++;
      *(int*)(mem_calloc( 1, 40 ) + 12) = edx;
      *(int*)(mem_calloc( 1, 40 ) + 8) = conn->uri->string[0];
      *(char*)(mem_calloc( 1, 40 ) + 32) = ( *(char*)(mem_calloc( 1, 40 ) + 32) & -2 ) | ( (int)conn->socket->bits_at_36/*.1_1of4*/ & 1 );
      *(int*)(mem_calloc( 1, 40 ) + 36) = conn->socket[0];
      timeval_from_seconds( mem_calloc( 1, 40 ) + 16, timeout_in_seconds );
      timeval_now( mem_calloc( 1, 40 ) + 24 );
      set_handlers( conn->socket[0].fd, 0, 0, 0, 0 );
      conn->socket->fd = -1;
      *(int*)(mem_calloc( 1, 40 ) + 4) = keepalive_connections;
      *(int*)(mem_calloc( 1, 40 )) = keepalive_connections;
      keepalive_connections.next = mem_calloc( 1, 40 );
      *(int*)(*(int*)(mem_calloc( 1, 40 )) + 4) = mem_calloc( 1, 40 );
    }
    else
    {
    }
  }
  assert_failed = 0;
}
void keepalive_timer( void *x )
{
  keepalive_timeout = 0;
}
void check_keepalive_connections( void )
{
  int eax;
  struct keepalive_connection *keep_conn, *next;
  timeval_T now;
  int p;
  timeval_now( &now );
  kill_timer( &keepalive_timeout );
  keep_conn = &keepalive_connections->next[0];
  next = &keepalive_connections.next[0];
  if ( keepalive_connections.next != keepalive_connections.next )
  {
    p = 0;
    for ( ; can_read( keep_conn->socket ) == 0; next = &keep_conn )
    {
      if ( keep_conn->done == 0 || do_keepalive_connection_callback( &keep_conn[0] ) == 0 )
      {
        keep_conn->prev = keep_conn->prev;
        &keep_conn->prev = &keep_conn;
        if ( keep_conn->socket != -1 )
          close( keep_conn->socket );
        done_uri( keep_conn->uri );
        mem_free( (void*)keep_conn[0].next );
        next = &keep_conn;
        keep_conn = &keep_conn;
        if ( keepalive_connections->next == next[0].next )
        {
          for ( ; p > 30; p-- )
          {
            if ( assert_failed == 0 )
            {
              assert_failed = keepalive_connections.next == keepalive_connections.next;
              if ( !(_Bool)( keepalive_connections.next != keepalive_connections.next ) )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
                errline = 656;
                elinks_internal( "assertion !list_empty(keepalive_connections) failed: keepalive list empty" );
                if ( assert_failed )
                  goto B25;
              }
              if ( keepalive_connections.prev[3] == 0 || do_keepalive_connection_callback( &keepalive_connections.prev[0] ) == 0 )
              {
                keepalive_connections.prev[1] = *(int*)(keepalive_connections.prev);
                if ( keepalive_connections.prev[9] != -1 )
                  close( keepalive_connections.prev[9] );
                done_uri( &keepalive_connections.prev[2] );
                mem_free( keepalive_connections.prev );
              }
              //p--;
            }
B25:            assert_failed = 0;
            break;
          }
          if ( keepalive_connections.next != keepalive_connections.next )
          {
            install_timer( &keepalive_timeout, 20000, &keepalive_timer, 0 );
            return;
          }
        }
        else
        {
          //next = &keep_conn;
        }
      }
    }
  }
  return;
}
void sort_queue( void )
{
  int eax;
{
  do
  {
    struct connection *conn = &connection_queue->next[0];
    int swp;
    if ( connection_queue.next != connection_queue.next && conn->next != connection_queue.next )
    {
      swp = 0;
      do
      {
        if ( get_priority(  ) < get_priority( &conn[0] ) )
        {
          struct connection *c;
          swp = 1;
          conn->prev = conn->prev;
          &conn->prev = &conn;
          conn->prev = &conn;
          conn = &conn;
          &conn = &conn;
          conn->prev = &conn[0];
        }
        conn = &conn;
      }
      while ( conn->next != connection_queue.next && conn->next != connection_queue.next );
    }
    else
      break;
  }
  while ( swp );
  return;
}
}
void run_connection( struct connection *conn )
{
  protocol_handler_T *func;
  func[0] = get_protocol_handler( conn->uri->protocol );
  if ( assert_failed == 0 )
  {
    assert_failed = func[0] == 0;
    if ( !(_Bool)( func[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 717;
      elinks_internal( "assertion func failed!" );
      if ( assert_failed == 0 )
      {
        assert_failed = (int)conn->bits_at_120/*.1_1of4*/ & 1;
        if ( ( (int)conn->bits_at_120/*.1_1of4*/ & 1 ) == 0 )
        {
          if ( add_host_connection( &conn[0] ) == 0 )
          {
            if ( assert_failed == 0 )
              assert_failed = 0;
            else
              assert_failed = 0;
            set_connection_state( &conn[0], (long long)-100003 );
          }
          else
          {
            active_connections++;
            conn->bits_at_120/*.1_1of4*/ |= 1;
            func[0]( &conn[0] );
            return;
          }
        }
      }
      else
      {
        assert_failed = 0;
        return;
      }
    }
    else
    {
      assert_failed = (int)conn->bits_at_120/*.1_1of4*/ & 1;
      if ( ( (int)conn->bits_at_120/*.1_1of4*/ & 1 ) == 0 )
        continue;
    }
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
    errline = 719;
    elinks_internal( "assertion !conn-&gt;running failed: connection already running" );
    if ( assert_failed )
    {
      assert_failed = 0;
      return;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void abort_connection( struct connection *conn, struct connection_state state )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = ~(state) >> 31;
    if ( ~(state) >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 739;
      elinks_internal( "assertion is_in_result_state(state) failed: connection didn't end in result state (%d)" );
    }
  }
  if ( state.basic == -100000 && conn->cached )
    normalize_cache_entry( conn->cached, conn->from );
  set_connection_state( &conn[0], state );
  if ( ( conn->bits_at_120/*.1_1of4*/ & 1 ) & 255 )
    free_connection_data( &conn[0] );
  done_connection( &conn[0] );
  *ebp_4 = edi;
}
void retry_connection( struct connection *conn, struct connection_state state )
{
  int eax;
  int max_tries = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( assert_failed == 0 )
  {
    assert_failed = ~(state) >> 31;
    if ( ~(state) >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 758;
      elinks_internal( "assertion is_in_result_state(state) failed: connection didn't end in result state (%d)" );
    }
  }
  set_connection_state( &conn[0], state );
  free_connection_data( &conn[0] );
  if ( conn->uri->post == 0 )
  {
    if ( max_tries )
    {
      conn->tries++;
      if ( max_tries <= conn->tries + 1 )
      {
        done_connection( &conn[0] );
      }
    }
    conn->prev_error = conn->state;
    conn->prev_error.syserr = conn->state.syserr;
  }
  else
  {
    done_connection( &conn[0] );
  }
}
int try_to_suspend_connection( struct connection *conn, struct uri *uri )
{
  int eax;
  enum connection_priority  priority;
  struct connection *c = &connection_queue.prev[0];
  priority = get_priority(  );
  if ( connection_queue.prev != connection_queue.next )
  {
    do
    {
      if ( get_priority( &c[0] ) <= priority )
        break;
      if ( c->state && ( c->uri->post == 0 || get_priority( &c[0] ) > 5 ) && ( !uri[0].string || compare_uri( &uri[0], c->uri, URI_HOST ) ) )
      {
        free_connection_data( &c[0] );
        if ( assert_failed == 0 )
          assert_failed = 0;
        else
          assert_failed = 0;
        set_connection_state( &c[0], (long long)-100003 );
        break;
      }
      else
      {
        c = c->prev;
      }
    }
    while ( c->prev != connection_queue.next );
  }
  return 0;
}
void check_queue( void )
{
  int eax;
  int edx;
  struct connection *conn;
  int max_conns_to_host = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  int max_conns = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  while ( 1 )
  {
    check_keepalive_connections(  );
    if ( connection_queue.next != connection_queue.next )
    {
      do
      {
        if ( pri == get_priority( &connection_queue.next[0] ) )
        {
          do
          {
            c = &c;
            if ( c->state.basic == 0 && c->uri->host && keepalive_connections.next != keepalive_connections.next )
            {
              for ( ; eax == 0; c->uri->string = (unsigned char*)c->uri )
              {
                if ( keepalive_connections.next == keepalive_connections.next )
                {
                }
                else
                {
                  //c->uri->string = (unsigned char*)c->uri;
                }
              }
              c = &c[0];
              pri = pri;
              if ( get_host_connection( &c[0] ) && max_conns_to_host <= *(int*)(get_host_connection( &c[0] ) + 8) )
              {
                if ( try_to_suspend_connection( &c[0], *(int*)(get_host_connection( &c[0] ) + 12) ) == 0 )
                  continue;
              }
              else
              if ( max_conns <= active_connections )
              {
                if ( try_to_suspend_connection( &c[0], 0 ) )
                  c = &c[0];
              }
              else
              {
                run_connection( &c[0] );
                break;
              }
            }
          }
          while ( c[0].next == connection_queue.next || pri != get_priority( &c[0] ) );
        }
        c = &c[0];
        for ( ; pri == get_priority( &c[0] ); c = &c[0] )
        {
          c = &c;
          if ( c->state.basic == 0 )
          {
            if ( get_host_connection( &c[0] ) && max_conns_to_host <= *(int*)(get_host_connection( &c[0] ) + 8) )
            {
              if ( try_to_suspend_connection( &c[0], *(int*)(try_to_suspend_connection( &c[0], *(int*)(get_host_connection( &c[0] ) + 12) ) + 12) ) == 0 )
                continue;
            }
            else
            if ( max_conns <= active_connections )
            {
              if ( try_to_suspend_connection( &c[0], 0 ) == 0 )
                continue;
              else
              if ( c[0].next == connection_queue.next )
              {
                conn = &connection_queue.next[0];
                while ( conn = &connection_queue.prev[0], connection_queue.prev != conn[0].next )
                {
                  do
                  {
                    if ( get_priority( &conn[0] ) > 5 )
                    {
                      if ( conn->state.basic == 0 )
                      {
                        if ( assert_failed == 0 )
                          assert_failed = 0;
                        else
                          assert_failed = 0;
                        set_connection_state( &conn[0], (long long)-100003 );
                        done_connection( &conn[0] );
                        break;
                      }
                      else
                      {
                        conn = conn->prev;
                      }
                    }
                    else
                      break;
                  }
                  while ( conn->prev != conn[0].next );
                  break;
                }
                break;
              }
              else
              {
                //c = &c[0];
              }
            }
            else
            {
              run_connection( &c[0] );
              break;
            }
          }
          if ( c[0].next == connection_queue.next )
          {
            conn = &connection_queue.next[0];
          }
          else
          {
            //c = &c[0];
          }
        }
      }
      while ( c[0].next != connection_queue.next );
    }
    conn = &c[0];
  }
}
int register_check_queue( void )
{
  return register_bottom_half_do( &check_queue, 0 );
}
int load_uri( struct uri *uri, struct uri *referrer, struct download *download, enum connection_priority  pri, enum cache_mode  cache_mode, off_t start )
{
  int eax;
  int ecx;
  int edx;
  struct cache_entry *cached;
  struct connection *conn;
  struct uri *proxy_uri, *proxied_uri;
  struct connection_state error_state;
  if ( assert_failed == 0 )
    assert_failed = 0;
  else
    assert_failed = 0;
  error_state.syserr = 0;
  error_state.basic = S_INTERNAL;
  if ( download[0].next )
  {
    download->conn = 0;
    download->cached = 0;
    download->pri = pri;
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    download->state.basic = S_INTERNAL;
    download->state.syserr = 0;
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    download->prev_error.basic = S_INTERNAL;
    download->prev_error.syserr = 0;
  }
  if ( cached[0].next )
  {
    if ( download[0].next )
    {
      download->cached = &cached[0];
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      download->state.basic = S_INTERNAL;
      download->state.syserr = 0;
      if ( download->callback )
      {
        eax( download[0].next, download->data );
        return 0;
      }
    }
  }
  else
  {
    proxied_uri = get_proxied_uri( &uri[0] );
    proxy_uri = get_proxy_uri( &uri[0], &error_state );
    if ( proxied_uri && proxy_uri )
    {
      if ( get_protocol_need_slash_after_host( proxy_uri->protocol ) && proxy_uri->bits_at_44/*.3_4of4*/ == 0 )
        uri = &uri[0];
      else
      {
        conn = &connection_queue.next[0];
        if ( connection_queue.next != connection_queue.next )
        {
          do
          {
            if ( !( ( conn->bits_at_120/*.1_1of4*/ & 4 ) & 255 ) && compare_uri( conn->uri, proxy_uri, 0 ) )
            {
              done_uri( proxy_uri );
              done_uri( proxied_uri );
              if ( pri < get_priority( &conn[0] ) )
              {
                conn->prev = conn->prev;
                &conn->prev = &conn;
                conn->pri[0] = conn->pri[ pri ] + 1;
                add_to_queue( &conn[0] );
                register_check_queue(  );
              }
              else
                conn->pri[0] = conn->pri[ pri ] + 1;
              if ( download[0].next )
              {
                download->conn = &conn[0];
                download->progress = conn->progress;
                download->cached = conn->cached;
                download->prev = &conn->downloads.next[0];
                download = &conn->downloads.next[0];
                conn->downloads.next = (void*)download[0].next;
                download->prev = &download[0];
                set_connection_state( &conn[0], conn->state );
                break;
              }
            }
            else
            {
              conn = &conn;
            }
          }
          while ( conn->next != connection_queue.next );
        }
        conn = init_connection( proxy_uri, proxied_uri, referrer, start, cache_mode, pri );
        if ( init_connection( proxy_uri, proxied_uri, referrer, start, cache_mode, pri ) == 0 )
        {
          if ( download[0].next )
          {
            connection_state( ebp_48 );
            download->state.basic = ebp_48;
            download->state.syserr = ebp_44;
            download->data = download->callback(  );
          }
          done_uri( proxy_uri );
          done_uri( proxied_uri );
          proxied_uri |= -1;
          return 0;
        }
        else
        {
          if ( download[0].next )
          {
            download->conn = &conn[0];
            download->cached = 0;
            download->progress = *(int*)(init_connection( proxy_uri, proxied_uri, referrer, start, cache_mode, pri ) + 16);
            connection_state( ebp_48 );
            download->state.basic = ebp_48;
            download->state.syserr = ebp_44;
            download->prev = &conn->downloads.next[0];
            download = &conn->downloads.next[0];
            conn->downloads.next = (void*)download[0].next;
            download->prev = &download[0];
          }
          add_to_queue( &conn[0] );
          connection_state( ebp_48 );
          set_connection_state( &conn[0] );
          register_check_queue(  );
          return 0;
        }
      }
    }
    if ( download[0].next )
    {
      if ( error_state.basic == -100000 )
      {
        proxied_uri->string = (unsigned char*)proxied_uri;
        connection_state(  );
        error_state.basic = ebp_48;
        error_state.syserr = ebp_44;
      }
      download->state = error_state;
      download->state.syserr = error_state.syserr;
      download->data = download->callback(  );
    }
    if ( proxy_uri )
      done_uri( proxy_uri );
    if ( proxied_uri )
    {
      done_uri( proxied_uri );
      proxied_uri |= -1;
      return 0;
    }
    return 0;
  }
  return 0;
}
void cancel_download( struct download *download, int interrupt )
{
  int eax;
  struct connection *conn;
  if ( assert_failed == 0 )
  {
    assert_failed = download[0].next == 0;
    if ( !(_Bool)( download[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 1006;
      elinks_internal( "assertion download failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    if ( download->state.basic >= 0 )
    {
      assert_failed = download->conn == 0;
      if ( !(_Bool)( download->conn != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
        errline = 1013;
        elinks_internal( &download->state.basic );
        if ( assert_failed )
          assert_failed = 0;
          download->state.basic = S_INTERNAL;
          download->state.syserr = 0;
          download->prev = download->prev;
          &download->prev = &download;
          conn = download->conn;
          download->conn->pri[0] = download->conn->pri[ download->pri ] - 1;
          if ( assert_failed == 0 )
          {
            assert_failed = conn->pri[ download->pri ] >> 31;
            if ( conn->pri[ download->pri ] >> 31 )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
              errline = 1023;
              elinks_internal( "assertion conn-&gt;pri[download-&gt;pri] &gt;= 0 failed: priority counter underflow" );
              if ( assert_failed == 0 )
              {
                if ( conn->downloads.next == conn->downloads.next )
                {
                  conn->pri[6]++;
                  if ( interrupt || ( ( conn->bits_at_120/*.1_1of4*/ & 4 ) & 255 ) )
                  {
                    connection_state( ebp_32 );
                    abort_connection( &conn[0] );
                  }
                }
                sort_queue(  );
              }
            }
          }
          assert_failed = 0;
          conn->pri[0] = 0;
      }
      assert_failed = 0;
      download->state.basic = S_INTERNAL;
      download->state.syserr = 0;
      download->prev = download->prev;
      &download->prev = &download;
      conn = download->conn;
      download->conn->pri[0] = download->conn->pri[ download->pri ] - 1;
    }
    else
    {
      return;
    }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void move_download( struct download *old, struct download *new, enum connection_priority  newpri )
{
  int eax;
  struct connection *conn;
  if ( assert_failed == 0 )
  {
    assert_failed = old[0].next == 0;
    if ( !(_Bool)( old[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
      errline = 1046;
      elinks_internal( "assertion old failed!" );
      *ebp_28 = newpri;
    }
  }
  conn = old->conn;
  new->conn = old->conn;
  new->cached = old->cached;
  new->prev_error = old->prev_error;
  new->prev_error.syserr = old->prev_error.syserr;
  new->progress = old->progress;
  new->pri = ebp_28;
  new->state = old->state;
  new->state.syserr = old->state.syserr;
  if ( old->state.basic < 0 )
  {
    if ( new->callback )
    {
      new->conn = 0;
      new->progress = 0;
      old = &new[0];
      new = &new->data[0];
      ;
    }
    return;
  }
  else
  {
    if ( assert_failed == 0 )
    {
      assert_failed = old->conn == 0;
      if ( !(_Bool)( old->conn != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
        errline = 1072;
        elinks_internal( &old->state.basic );
      }
      newpri = new->pri;
      conn->pri[0] = conn->pri[ newpri ] + 1;
      new->prev = &conn->downloads.next[0];
      new = &conn->downloads.next[0];
      conn->downloads.next = (void*)new[0].next;
      new->prev = &new[0];
      sort_queue(  );
      old = &old[0];
      new = 0;
    }
    else
    {
      conn->pri[0] = conn->pri[ newpri ] + 1;
      new->prev = &conn->downloads.next[0];
      new = &conn->downloads.next[0];
      conn->downloads.next = (void*)new[0].next;
      new->prev = &new[0];
      sort_queue(  );
      old = &old[0];
      new = 0;
    }
  }
}
void detach_connection( struct download *download, off_t pos )
{
  int eax;
  struct connection *conn = download->conn;
  if ( download->state.basic >= 0 )
  {
    if ( ( ( conn->bits_at_120/*.1_1of4*/ & 4 ) & 255 ) == 0 )
    {
      off_t total_len;
      off_t total_pri;
      if ( conn->cached )
      {
        if ( ( (unsigned int)(conn->est_length << 32) & (unsigned int)(conn->est_length & 0xFFFFFFFF) ) == -1 )
        {
        }
        if ( ( ( ( (/*HI*/int)( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * 25 ) * 0x51eb851f ) >> 5 ) - ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * 25 ) >> 31 ) ) >> 31 ) <= (int)(total_len << 32) && ( ccdep2 < ccdep1 || ( (/*HI*/int)( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * 25 ) * 0x51eb851f ) >> 5 ) - ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * 25 ) >> 31 ) <= (unsigned int)(conn->from & 0xFFFFFFFF) ) )
        {
          if ( assert_failed == 0 )
          {
            (total_len << 32) = (conn->est_length << 32);
            assert_failed = ( ( conn->pri[5] + conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] ) | ( ( conn->pri[0] >> 31 ) + ( conn->pri[1] >> 31 ) + ( ( conn->pri[1] + conn->pri[0] < conn->pri[0] ) & 1 ) + ( conn->pri[2] >> 31 ) + ( ( conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[3] >> 31 ) + ( ( conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[2] + conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[4] >> 31 ) + ( ( conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[5] >> 31 ) + ( ( conn->pri[5] + conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[5] ) & 1 ) ) ) == 0;
            if ( !(_Bool)( ( ( conn->pri[5] + conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] ) | ( ( conn->pri[0] >> 31 ) + ( conn->pri[1] >> 31 ) + ( ( conn->pri[1] + conn->pri[0] < conn->pri[0] ) & 1 ) + ( conn->pri[2] >> 31 ) + ( ( conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[3] >> 31 ) + ( ( conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[2] + conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[4] >> 31 ) + ( ( conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[5] >> 31 ) + ( ( conn->pri[5] + conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[5] ) & 1 ) ) ) != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/connection.c";
              errline = 1113;
              elinks_internal( "assertion total_pri failed: detaching free connection" );
            }
          }
          shrink_format_cache( 0 );
          if ( ( ( ( conn->pri[0] >> 31 ) + ( conn->pri[1] >> 31 ) + ( ( conn->pri[1] + conn->pri[0] < conn->pri[0] ) & 1 ) + ( conn->pri[2] >> 31 ) + ( ( conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[3] >> 31 ) + ( ( conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[2] + conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[4] >> 31 ) + ( ( conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] ) & 1 ) + ( conn->pri[5] >> 31 ) + ( ( conn->pri[5] + conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] < conn->pri[5] ) & 1 ) ) | ( ( conn->pri[5] + conn->pri[4] + conn->pri[3] + conn->pri[2] + conn->pri[1] + conn->pri[0] ) ^ 1 ) ) == 0 && conn->cached->object.refcount == 0 )
          {
            conn->cached->bits_at_92/*.1_1of4*/ &= 239;
            conn->bits_at_120/*.1_1of4*/ |= 4;
            pos = pos;
            download = &conn->cached->next;
          }
        }
      }
    }
    else
    {
      pos = pos;
      download = &conn->cached->next;
    }
  }
  return;
}
void connection_timeout( struct connection *conn )
{
  &conn->timer = 0;
  conn = &conn->socket->fd;
}
void connection_timeout_1( struct connection *conn )
{
  int eax;
  install_timer( conn + 108, ( conn->bits_at_120/*.1_1of4*/ & 2 ) & 255 ? *(int*)(get_opt_( config_options, (unsigned char*)config_options )) * 500 : get_opt_( config_options, (unsigned char*)config_options ), &connection_timeout, (void*)conn[0].next );
  return;
}
void set_connection_timeout( struct connection *conn )
{
  int eax;
  kill_timer( &conn->timer );
  install_timer( &esi, eax, &connection_timeout_1, (void*)conn[0].next );
  return;
}
void abort_all_connections( void )
{
  int eax;
  if ( connection_queue.next != connection_queue.next )
  {
    do
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      abort_connection( &eax, (long long)( edx ) );
    }
    while ( connection_queue.next != connection_queue.next );
    do
    {
      if ( keepalive_connections.next == keepalive_connections.next )
        goto B8;
      do
      {
        if ( keepalive_connections.list_head_elinks == 0 || do_keepalive_connection_callback( &keepalive_connections.next[0] ) == 0 )
        {
          keepalive_connections.next[1] = keepalive_connections.prev;
          keepalive_connections.prev[0] = keepalive_connections.next;
          if ( keepalive_connections.list_head_elinks != -1 )
            close( keepalive_connections.list_head_elinks );
          done_uri( &keepalive_connections.list_head_elinks );
          mem_free( keepalive_connections.next );
        }
      }
B8:      }
      while ( keepalive_connections.list_head_elinks && do_keepalive_connection_callback( &keepalive_connections.next[0] ) );
    }
}
void abort_background_connections( void )
{
  int eax;
  struct connection *conn = &connection_queue.next[0], *next = &connection_queue.next[0];
  if ( connection_queue.next != connection_queue.next )
  {
    while ( 1 )
    {
      if ( get_priority( &conn[0] ) > 5 )
      {
        if ( assert_failed == 0 )
          assert_failed = 0;
        else
          assert_failed = 0;
        conn = &next[0];
        abort_connection( &conn[0], (long long)( eax ) );
        next = &next;
        if ( next->next == connection_queue.next )
          break;
      }
      else
      {
        next = &next;
        conn = &next;
        if ( next->next == connection_queue.next )
          break;
      }
      next = &next;
    }
  }
  return;
}
int is_entry_used( struct cache_entry *cached )
{
  int edx;
  struct connection *conn;
  &conn = &connection_queue->next[0];
  if ( connection_queue.next != connection_queue.next )
  {
    do
    {
      if ( conn->cached == cached[0].next )
        break;
      &conn[0] = &conn;
    }
    while ( conn->next != connection_queue.next );
  }
  return 0;
}
#if 0
#endif
