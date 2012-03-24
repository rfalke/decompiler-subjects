#include "ftp.c.h"
struct option_info ftp_options[7] = { { { 0, 0, { 0 }
, "ftp", 0, 9, 0, 0, { 0, 135473329, 135470911, 0, 0, 0 }
, "FTP specific options.", "FTP", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, "proxy", 0, 9, 0, 0, { 0, 135473351, 135473376, 0, 0, 0 }
, "FTP proxy configuration.", "Proxy configuration", 0, 0, 0 }
, "protocol.ftp" }
, { { 0, 0, { 0 }
, "host", 0, 3, 0, 1024, { "", 135403216, 135473409, 0, 0, 0 }
, "Host and port-number (host:port) of the FTP proxy, or blank. If it's blank, FTP_PROXY environment variable is checked as well.", "Host and port-number", 0, 0, 0 }
, "protocol.ftp.proxy" }
, { { 0, 0, { 0 }
, "anon_passwd", 0, 3, 0, 1024, { "some@host.domain", 135403344, 135473466, 0, 0, 0 }
, "FTP anonymous password to be sent.", "Anonymous password", 0, 0, 0 }
, "protocol.ftp" }
, { { 0, 0, { 0 }
, "use_pasv", 0, 0, 0, 1, { 0, 135403380, 135473485, 0, 0, 0 }
, "Use PASV instead of PORT (passive vs active mode, IPv4 only).", "Use passive mode (IPv4)", 0, 0, 0 }
, "protocol.ftp" }
, { { 0, 0, { 0 }
, "use_epsv", 0, 0, 0, 1, { 0, 135403444, 135473509, 0, 0, 0 }
, "Use EPSV instead of EPRT (passive vs active mode, IPv6 only).", "Use passive mode (IPv6)", 0, 0, 0 }
, "protocol.ftp" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct module ftp_protocol_module = { "FTP", ftp_options, 0, 0, 0, 0, 0 };
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
int parse_psv_resp( unsigned char *data, int *n, int max_value )
{
  int edx;
  unsigned char *p;
  int i;
  do
  {
    n[0] = 0;
  }
  while ( 0 + 4 + 4 < 24 );
  if ( data[0] < 31 )
  {
    do
    {
      p[0] = p[1];
    }
    while ( p[0] < 31 );
    if ( data[0] != p[0] )
    {
      data[0] = data[0];
      do
      {
        p[0] = p[ -1 ];
        if ( p[ -1 ] == data[0] )
          goto B3;
      }
      while ( p[0] - 48 < 9 );
      i = 5;
      do
      {
        if ( p[0] - 48 < 9 )
        {
          data[0] = data[0];
          do
          {
            p[0] = p[ -1 ];
            if ( p[ -1 ] == data[0] )
              goto B14;
          }
          while ( p[0] - 48 < 9 );
          i--;
        }
        else
        {
          n[ i ] = ( n[ i ] + p[0] ) - 48;
          if ( ( n[ i ] + p[0] ) - 48 <= max_value )
          {
            do
            {
              p[0] = p[ -1 ];
              if ( data[0] != p[ -1 ] )
              {
                if ( p[0] - 48 < 9 )
                {
                  data[0] = data[0];
                }
                else
                {
                  n[ i ] += 1 * 10 * 10 * ( p[0] - 48 );
                }
              }
            }
            while ( max_value < n[ i ] + ( 1 * 10 * 10 * ( p[0] - 48 ) ) );
            break;
          }
          else
            break;
        }
B14:        break;
      }
      while ( i - 1 != -1 );
    }
  }
{
B3:  int x;
  return 6 - i;
}
}
int get_ftp_response( struct connection *conn, struct read_buffer *rb, int part, struct sockaddr_storage *sa )
{
  unsigned char *num_end;
  int response;
  int pos;
{
  int i;
  do
  {
    if ( memchr( &rb->data[0], 10, rb->length ) )
    {
      *(int*)(__errno_location(  )) = 0;
      if ( *(int*)(__errno_location(  )) == 0 )
      {
        response = strtoul( &rb->data[0], (char**)&num_end, 10 );
        if ( response > 99 && rb->__pad[2] == num_end )
        {
          if ( ebp_60 == 227 && ( ( sa != 0 ) & 255 ) )
          {
            int n[6];
            if ( parse_psv_resp( &rb->__pad[2], n, 255 ) == 6 )
            {
              sa->__ss_align = 0;
              *(int*)&sa->__ss_padding[0] = 0;
              *(int*)&sa->__ss_padding[4] = 0;
              sa[0].ss_family = 2;
            {
              unsigned int __v;
              sa->__ss_align = ( ( n[0] << 48 ) + ( n[1] << 40 ) + ( n[3] * 0x1000000 ) + ( n[2] << 32 ) ) | ( ( ( n[0] << 32 ) + ( n[1] << 24 ) + ( n[3] * 256 ) + ( n[2] << 16 ) ) & 0xff0000 ) | ( ( ( n[3] + ( n[0] << 24 ) + ( n[1] << 16 ) + ( n[2] << 8 ) ) >> 8 ) & 65280 ) | ( ( ( n[3] + ( n[0] << 24 ) + ( n[1] << 16 ) + ( n[2] << 8 ) ) >> 24 ) & 255 );
            {
              unsigned short __v = n[4] << 8;
              sa->sockaddr_storage = ( ( n[5]/*.1_2of4*/ + (unsigned short)( n[4] << 8 ) ) >> 8 ) | ( ( n[5]/*.1_2of4*/ + (unsigned short)( n[4] << 8 ) ) << 8 );
            }
            }
            }
          }
          else
          if ( ebp_60 == 229 && ( ( sa != 0 ) & 255 ) )
          {
            int sal = 28;
            int n[6];
            if ( parse_psv_resp( &rb->__pad[2], n, 65535 ) == 1 )
            {
              do
              {
                sa->ss_family = 0;
              }
              while ( 0 + 4 + 4 < 28 );
              if ( getpeername( conn->socket->fd, sa, &sal ) == 0 )
              {
                sa[0].ss_family = 10;
              {
                unsigned short __v = n[5]/*.1_2of4*/;
                sa->sockaddr_storage = ( n[5]/*.1_2of4*/ >> 8 ) | ( n[5]/*.1_2of4*/ << 8 );
              }
              }
            }
          }
          pos -= rb->data[0];
          if ( num_end[0] == '-' )
          {
            if ( rb->length - 5 >= 1 )
            {
              do
              {
                if ( rb->data[ 0 + 1 ] == 10 )
                {
                  strcmp( ebp_64, ebp_72 + eax );
                  if ( rb[ ( 0 + 1 ) >> 4 ].read_buffer == ' ' )
                  {
                    if ( 0 + 1 + 1 < rb->length )
                    {
                      if ( rb->data[ 0 + 1 + 1 ] != 10 )
                      {
                        do
                        {
                          if ( ecx <= esi + 1 )
                            goto B3;
                        }
                        while ( eax/*.1_1of4*/ != 10 );
                      }
                    }
                  }
                }
              }
              while ( 0 + 1 + 1 < rb->length - 5 );
            }
          }
          if ( part != 2 )
          {
            kill_buffer_data( &rb[0], pos + 1 + 1 );
          }
          else
            break;
        }
      }
      response = -1;
      break;
    }
B3:    response = 0;
    break;
  }
  while ( part || ebp_60 > 199 );
  return response;
}
}
void ftp_protocol_handler( struct connection *conn )
{
  int eax;
  if ( has_keepalive_connection( conn ) )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = 0;
    }
    assert_failed = 0;
  }
  else
  {
    make_connection( conn->socket, conn->uri, &ftp_login, conn->cache_mode > 2 );
    return;
  }
}
void send_cmd( struct connection *conn, struct string *cmd, void *callback, struct connection_state state )
{
  state.basic = state.basic;
  request_from_socket( (int)( &conn->socket[2].read_buffer->done[0] ), cmd->source, cmd->length, state, state.syserr, 0 );
  state.basic = cmd[0].source[0];
}
void prompt_username_pw( struct connection *conn )
{
  if ( conn->cached == 0 )
  {
    conn->cached = get_cache_entry( &conn->uri->host[0] );
    if ( conn->cached == 0 )
    {
      connection_state( ebp_16 );
      abort_connection( &conn[0] );
      return;
    }
  }
  if ( conn->cached->content_type )
  {
    mem_free( (void*)conn->cached->content_type );
  }
  conn->cached->content_type = stracpy( "text/html" );
  if ( conn->cached->content_type == 0 )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
      abort_connection( &conn[0], (long long)-100000 );
      return;
  }
  else
  {
    add_auth_entry( conn->uri, "FTP Login", 0, 0, 0 );
    if ( assert_failed == 0 )
      assert_failed = 0;
  }
  assert_failed = 0;
}
void ftp_login( struct socket *socket )
{
  int eax;
  int ecx;
  int edx;
  struct connection *conn = &socket->conn[0];
  struct string cmd;
  struct auth_entry *auth = find_auth( conn->uri );
  if ( init_string( &cmd ) == 0 )
  {
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    abort_connection( &conn[0], (long long)( eax ) );
    return;
  }
  else
  {
    add_to_string( &cmd, "USER " );
    if ( conn->uri->bits_at_40/*.3_4of4*/ & 65535 )
    {
      if ( assert_failed == 0 )
      {
        if ( conn->uri->user )
          assert_failed = 0;
        else
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
          errline = 255;
          elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
          if ( assert_failed )
            goto B16;
        }
        cmd.length = cmd.length + 255;
        if ( 0 < ( ( cmd.length + conn->uri->bits_at_40/*.3_4of4*/ + 256 ) & -256 ) )
        {
          *ebp_52 = 0;
          if ( mem_realloc( (void*)cmd.source, ( cmd.length + 0 + 256 ) & -256 ) )
          {
            cmd.source = (unsigned char*)eax;
            memset( edx + cmd.source, 0, edi - edx );
          }
        }
        if ( cmd.source )
        {
          memcpy( cmd.length + cmd.source, &conn->uri->user[12], conn->uri->bits_at_40/*.3_4of4*/ );
          cmd.source[ cmd.length + conn->uri->bits_at_40/*.3_4of4*/ ] = 0;
          cmd.length += conn->uri->bits_at_40/*.3_4of4*/;
        }
      }
B16:      assert_failed = 0;
    }
    else
    if ( auth[0] && ( ( auth->bits_at_112/*.1_1of4*/ & 2 ) & 255 ) )
      add_to_string( &cmd, auth->user[0] + 32 );
    else
      add_to_string( &cmd, "anonymous" );
    add_crlf_to_string( &cmd );
    if ( assert_failed == 0 )
      assert_failed = 0;
    else
      assert_failed = 0;
    send_cmd( &conn[0], &esi, &ftp_got_info, (long long)( eax ) );
    return;
  }
}
void ftp_got_info( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int edx;
  struct connection *conn = &socket->conn[0];
  int response;
  if ( response == -1 )
  {
    connection_state( ebp_32 );
    abort_connection( &conn[0] );
    return;
  }
  else
  {
    if ( response == 0 )
    {
      read_from_socket( conn->socket, &rb[0], conn->state, &conn->state.syserr );
      return;
    }
    else
    {
      socket = &socket[0];
      if ( response == 220 )
      {
        rb = &rb[0];
        socket = &socket[0];
      }
      if ( assert_failed == 0 )
        assert_failed = 0;
        retry_connection( &conn[0], (long long)-100003 );
        return;
      else
        assert_failed = 0;
        retry_connection( &conn[0], (long long)-100003 );
        return;
    }
  }
}
void ftp_got_user_info( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int ecx;
  int edx;
  struct connection *conn = &socket->conn[0];
  int response;
  if ( response == -1 )
  {
    connection_state( ebp_48 );
    abort_connection( &conn[0] );
    return;
  }
  else
  {
    if ( response == 0 )
    {
      read_from_socket( conn->socket, &rb[0], conn->state, &conn->state.syserr );
      return;
    }
    else
    {
      if ( response <= 499 && response != 332 )
      {
        rb = &rb[0];
        if ( response > 399 )
        {
          if ( assert_failed == 0 )
            assert_failed = 0;
            abort_connection( &conn[0], (long long)-100301 );
            return;
          else
            assert_failed = 0;
        }
        else
        {
          rb = &rb[0];
          if ( response == 230 )
          {
            *ebp_48 = ebp_48;
            connection_state( ebp_48 );
            ftp_send_retr_req( &conn[0] );
            return;
          }
          else
          {
            if ( init_string( ebp_32 ) == 0 )
            {
              if ( assert_failed == 0 )
                assert_failed = 0;
              else
                assert_failed = 0;
            }
            else
            {
              add_to_string( ebp_32, "PASS " );
              if ( (int)conn->uri->bits_at_44/*.1_2of4*/ & 65535 )
              {
                if ( assert_failed == 0 )
                {
                  if ( conn->uri->password )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                    errline = 255;
                    elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                    if ( assert_failed )
                    {
                    }
                  }
                  *(int*)(ebp_28 + 255) = ebp_28 + 255;
                  if ( 0 < ( ( ebp_28 + (int)conn->uri->bits_at_44/*.1_2of4*/ + 256 ) & -256 ) )
                  {
                    *ebp_60 = 0;
                    if ( mem_realloc( ebp_32, ( ebp_28 + 0 + 256 ) & -256 ) )
                    {
                      memset( edx + eax, 0, edi - edx );
                    }
                  }
                  if ( ebp_32 )
                  {
                    memcpy( ebp_28 + eax, ebp_56, ebp_52 );
                    *(char*)(ebp_28 + (int)conn->uri->bits_at_44/*.1_2of4*/ + ebp_32) = 0;
                  }
                }
                assert_failed = 0;
              }
              else
              if ( find_auth( conn->uri ) && ( ( *(char*)(find_auth( conn->uri ) + 112) & 2 ) & 255 ) )
              {
                if ( conn->uri->bits_at_40/*.3_4of4*/ )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/ftp/ftp.c";
                  errline = 303;
                  if ( eax )
                  {
                    prompt_username_pw( &conn[0] );
                    return;
                  }
                }
                add_to_string( &esi, edi + 72 );
              }
              else
              {
                add_to_string( ebp_32, *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
              }
              add_crlf_to_string( ebp_32 );
              if ( assert_failed == 0 )
                assert_failed = 0;
              else
                assert_failed = 0;
              send_cmd( &conn[0], &esi, &ftp_pass_info, (long long)( eax ) );
              return;
            }
          }
        }
      }
      else
      {
        prompt_username_pw( &conn[0] );
        return;
      }
    }
  }
}
void ftp_pass_info( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int edx;
  struct connection *conn = &socket->conn[0];
  int response;
  if ( response == -1 )
  {
    connection_state( ebp_16 );
    abort_connection( &conn[0] );
    return;
  }
  else
  {
    if ( response == 0 )
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
      read_from_socket( conn->socket, &rb[0], (long long)( eax.basic ), &ftp_pass_info );
      return;
    }
    else
    {
      if ( response <= 499 && response != 332 )
      {
        if ( response > 399 )
        {
          if ( assert_failed == 0 )
            assert_failed = 0;
            abort_connection( &conn[0], (long long)-100003 );
            return;
          else
            assert_failed = 0;
            abort_connection( &conn[0], (long long)-100003 );
            return;
        }
        else
        {
          if ( assert_failed == 0 )
          {
            assert_failed = 0;
          }
          assert_failed = 0;
        }
      }
      else
      {
      }
    }
  }
}
void ftp_send_retr_req( struct connection *conn, struct connection_state state )
{
#error unstructured control flow
}
int ftp_data_connect( struct connection *conn, int pf, struct sockaddr_storage *sa, int size_of_sockaddr )
{
  int fd;
  if ( conn->data_socket->fd != -1 || socket( pf, 1, 0 ) < 0 || set_nonblocking_fd( socket( pf, 1, 0 ) ) < 0 )
  {
    connection_state( ebp_32 );
    abort_connection( &conn[0] );
  }
  set_ip_tos_throughput( fd );
  conn->data_socket->fd = fd;
  connect( conn->data_socket, &sa[0].ss_family, size_of_sockaddr );
  return 0;
}
void ftp_retr_file( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
#error unstructured control flow
}
void ftp_got_final_response( struct socket *socket, struct read_buffer *rb )
{
  int eax;
  int ecx;
  int edx;
  struct connection *conn = &socket->conn[0];
  int response;
  if ( response == -1 )
  {
  }
  else
  if ( response == 0 )
  {
    if ( conn->state.basic != 8 )
    {
      if ( assert_failed == 0 )
        assert_failed = 0;
      else
        assert_failed = 0;
    }
    else
      conn->state.syserr = conn->state.syserr;
    read_from_socket( conn->socket, &rb[0], -100003, &conn->state.syserr );
    return;
  }
  else
  {
    if ( response == 450 || response > 549 )
    {
      if ( conn->cached == 0 )
      {
        conn->cached = get_cache_entry( conn->uri );
        if ( conn->cached == 0 )
        {
        }
      }
      if ( redirect_cache( conn->cached, "/", 1, 0 ) )
      {
        if ( assert_failed == 0 )
          assert_failed = 0;
          abort_connection( &conn[0], (long long)( eax.basic ) );
          return;
        else
          assert_failed = 0;
          abort_connection( &conn[0], (long long)( eax.basic ) );
          return;
      }
      else
      {
      }
    }
    else
    {
      if ( response > 399 )
      {
      }
      else
      {
        if ( conn->info[2] == 2 )
        {
          connection_state( ebp_32 );
        }
        conn->info[2] = 1;
        if ( conn->state.basic != 8 )
        {
          if ( assert_failed == 0 )
            assert_failed = 0;
          else
            assert_failed = 0;
          set_connection_state( &conn[0], (long long)( eax.basic ) );
          return;
        }
        else
        {
          return;
        }
      }
    }
  }
  connection_state(  );
  abort_connection( &conn[0] );
  return;
}
int display_dir_entry( struct cache_entry *cached, off_t *pos, int *tries, struct ftp_dir_html_format *format, struct ftp_file_info *ftp_info )
{
  struct string string;
  unsigned char permissions[10];
  permissions[0] = 757935405;
  permissions[4] = 757935405;
  permissions[8] = 45;
  if ( init_string( &string ) )
  {
    add_char_to_string( &string, ftp_info->type );
    if ( ftp_info->permissions )
    {
      if ( ( ah & 1 ) & 255 )
        permissions[0] = 114;
      if ( (_Bool)( ( 0 >> 7 ) & 1 ) )
        permissions[1] = 119;
      if ( ftp_info->permissions & 64 )
        permissions[2] = 120;
      if ( ( ah & 8 ) & 255 )
        permissions[2] = ( ( 0 - ( ( ( ftp_info->permissions & 64 ) < 1 ) & 1 ) ) & -32 ) + 115;
      if ( ( ftp_info->permissions & 16 ) & 255 )
        permissions[4] = 119;
      if ( ftp_info->permissions & 8 )
        permissions[5] = 120;
      if ( ( ah & 4 ) & 255 )
        permissions[5] = ( ( 0 - ( ( ( ftp_info->permissions & 8 ) < 1 ) & 1 ) ) & -32 ) + 115;
      if ( ( ftp_info->permissions & 4 ) & 255 )
        permissions[6] = 114;
      if ( ( ftp_info->permissions & 2 ) & 255 )
        permissions[7] = 119;
      if ( ftp_info->permissions & 1 )
        permissions[8] = 120;
      if ( ( ah & 2 ) & 255 )
        permissions[8] = ( ( 0 - ( ( ( ftp_info->permissions & 1 ) < 1 ) & 1 ) ) & -32 ) + 116;
    }
    add_to_string( &string, permissions );
    add_char_to_string( &string, 32 );
    add_to_string( &string, "   1 ftp      ftp " );
    if ( ( (unsigned int)(ftp_info->size << 32) & (unsigned int)(ftp_info->size & 0xFFFFFFFF) ) != -1 )
    {
      add_format_to_string( &string, "%12lld " );
      if ( ftp_info->mtime >= 1 )
      {
        time_t current_time = time( 0 );
        time_t when = ftp_info->mtime;
        struct tm *when_tm;
        unsigned char *fmt;
        unsigned char date[80];
        if ( ( ftp_info->bits_at_32/*.1_1of4*/ & 1 ) & 255 )
          localtime( ebp_124 );
        else
          gmtime( &when );
        if ( when + 0xed4e00 < current_time || current_time < fmt[ -3600 ] )
        {
        }
        add_cp_html_to_string( &string, format->libc_codepage, date, strftime( date, 80, &fmt[0], localtime( ebp_124 ) ) );
        add_char_to_string( &string, 32 );
        if ( ftp_info->type == 100 && format->colorize_dir )
        {
          add_to_string( &string, "&lt;font color=\"" );
          add_to_string( &string, format + 8 );
          add_to_string( &string, "\"&gt;&lt;b&gt;" );
        }
        add_to_string( &string, "&lt;a href=\"" );
        encode_uri_string( &string, ftp_info->name.source, ftp_info->name.length, 0 );
        if ( ftp_info->type == 100 )
          add_char_to_string( &string, 47 );
        add_to_string( &string, "\"&gt;" );
        add_html_to_string( &string, ftp_info->name.source, ftp_info->name.length );
        add_to_string( &string, "&lt;/a&gt;" );
        if ( ftp_info->type == 100 && format->colorize_dir )
          add_to_string( &string, "&lt;/b&gt;&lt;/font&gt;" );
        if ( ftp_info->symlink.length )
        {
          add_to_string( &string, " -&gt; " );
          add_html_to_string( &string, ftp_info->symlink.source, ftp_info->symlink.length );
        }
        add_char_to_string( &string, 10 );
        if ( add_fragment( &cached[0], pos[0], string.source, string.length ) )
          tries[0] = 0;
        (pos[0] & 0xFFFFFFFF) = (pos[ string.length >> 3 ] & 0xFFFFFFFF);
        done_string( &string );
        if ( 0 ^ 0 )
        {
          __stack_chk_fail(  );
        }
        return 0;
      }
    }
    else
    {
      add_to_string( &string, "           - " );
      if ( ftp_info->mtime >= 1 )
      {
        (pos[0] << 32) = (unsigned int)(pos[0] << 32) + ( string.length >> 31 ) + ( ( (unsigned int)(pos[ string.length >> 3 ] & 0xFFFFFFFF) < (unsigned int)(pos[0] & 0xFFFFFFFF) ) & 1 );
        time_t current_time = time( 0 );
        time_t when = ftp_info->mtime;
        struct tm *when_tm;
        unsigned char *fmt;
        unsigned char date[80];
      }
    }
    add_to_string( &string, "            " );
    add_char_to_string( &string, 32 );
  }
  else
  {
  }
}
int ftp_process_dirlist( struct cache_entry *cached, off_t *pos, unsigned char *buffer, int buflen, int last, int *tries, struct ftp_dir_html_format *format )
{
  int ret = 0;
{
  do
  {
    struct ftp_file_info ftp_info;
    unsigned char *buf;
    int bufl = buflen - ret;
    int line_length;
    if ( ret != buflen )
    {
      if ( memchr( buffer[0] + ret, 10, bufl ) )
      {
        if ( buffer[0] + ret != memchr( buffer[0] + ret, 10, bufl ) )
        {
          if ( *(char*)(eax - 1) == 13 )
          {
          }
        }
        else
        {
        }
      }
      else
      if ( bufl > 16383 || last )
      {
      }
      ret += esi;
      if ( eax == 0 )
      {
        if ( init_string( ebp_32 ) && init_string( ebp_32 ) && add_char_to_string( ebp_32, 10 ) && add_fragment( &cached[0], pos[0] ) != -1 )
        {
          pos[0] += ebp_28;
          if ( add_fragment( &cached[0], pos[0] ) == 1 )
            tries[0] = 0;
          done_string( ebp_32 );
        }
        else
        {
          ret = -1;
          done_string( ebp_32 );
          return ret;
        }
      }
      else
      {
        int retv;
      }
    }
  }
  while ( ( 0 == '.' && ( 0 == 1 || ( 0 == 2 && 0 == '.' ) ) ) || retv >= 0 );
  return ret;
}
}
void ftp_data_accept( struct connection *conn )
{
  int eax;
  int newsock;
  if ( assert_failed == 0 )
  {
    assert_failed = conn->data_socket[0].fd >> 31;
    if ( conn->data_socket[0].fd >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/ftp/ftp.c";
      errline = 1409;
      elinks_internal( "assertion conn-&gt;data_socket-&gt;fd &gt;= 0 failed!" );
      if ( assert_failed )
        goto B2;
    }
    set_connection_timeout( &conn[0] );
    set_handlers( conn->data_socket[0].fd, 0, 0, 0, 0 );
    if ( ( ( conn->socket->bits_at_36/*.1_1of4*/ & 1 ) & 255 ) == 0 )
    {
      if ( ( *(char*)(conn->info + 16) & 4 ) & 255 )
        newsock = conn->data_socket[0].fd;
        conn->data_socket->fd = newsock;
        set_handlers( newsock, &got_something_from_data_connection, 0, 0, (void*)conn[0].next );
        return;
    }
    else
    if ( ( *(char*)(conn->data_socket[0].fd + 16) & 8 ) & 255 )
      newsock = conn->data_socket[0].fd;
      conn->data_socket->fd = newsock;
      set_handlers( newsock, &got_something_from_data_connection, 0, 0, (void*)conn[0].next );
      return;
    if ( accept( conn->data_socket[0].fd, 0, 0 ) < 0 )
    {
      retry_connection( &conn[0], -1 );
      return;
    }
    else
    {
      close( conn->data_socket[0].fd );
      conn->data_socket->fd = conn->data_socket;
      conn->data_socket->fd = newsock;
      set_handlers( newsock, &got_something_from_data_connection, 0, 0, (void*)conn[0].next );
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void got_something_from_data_connection( struct connection *conn )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
void ftp_end_request( struct connection *conn, struct connection_state state )
{
  int ecx;
  int edx;
  if ( state.basic == -100000 && conn->cached )
  {
    normalize_cache_entry( conn->cached, conn->from );
    *ebp_32 = ecx;
    *ebp_28 = state.basic;
  }
  set_connection_state( &conn[0], state );
  add_keepalive_connection( &conn[0], 600000, 0 );
  return;
}
#if 0
#endif
