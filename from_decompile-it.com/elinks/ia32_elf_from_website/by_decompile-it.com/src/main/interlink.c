#include "interlink.c.h"
static struct socket_info s_info_accept;
static struct socket_info s_info_listen;
static struct socket_info s_info_connect;
int get_address( struct socket_info *info, enum addr_type  type )
{
  struct string path;
  if ( assert_failed == 0 )
  {
    assert_failed = info[0].addr == 0;
    if ( !(_Bool)( info[0].addr != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/interlink.c";
      errline = 139;
      elinks_internal( "assertion info failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = 0;
    if ( elinks_home && init_string( &path ) )
    {
      add_to_string( &path, elinks_home );
      add_to_string( &path, "socket" );
      add_long_to_string( &path, *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) );
      if ( ~path.length < 0 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/interlink.c";
        errline = 174;
        elinks_internal( "Socket path name '%s' is too long: %d &gt;= %zu" );
      }
      else
      {
        if ( mem_calloc( 1, 110 ) )
        {
          memcpy( mem_calloc( 1, 110 ) + 2, path.source, path.length );
          done_string( &path );
          *(short*)(mem_calloc( 1, 110 )) = 1;
          info = (struct socket_info*)mem_calloc( 1, 110 );
          info->size = 110 - ( ~path.length + 108 );
          return -1;
        }
      }
      done_string( &path );
      return -1;
    }
    else
    {
      return -1;
    }
  }
  assert_failed = 0;
  return -1;
}
void unlink_unix( struct sockaddr *addr )
{
  int eax;
  if ( assert_failed == 0 )
  {
    assert_failed = addr[0].sa_family == 0;
    if ( !(_Bool)( addr[0].sa_family != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/interlink.c";
      errline = 225;
      elinks_internal( "assertion addr failed!" );
      if ( assert_failed )
        goto B2;
    }
    unlink( addr->sa_data[0] + 2 );
    return;
  }
B2:  assert_failed = 0;
  return;
}
void report_af_unix_error( unsigned char *function, int error )
{
  errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/interlink.c";
  errline = 329;
  elinks_error( gettext( "The call to %s failed: %d (%s)" ) );
  return;
}
void af_unix_connection( struct socket_info *info )
{
  int edx;
  int ns;
  int l;
  if ( assert_failed == 0 )
  {
    assert_failed = info[0].addr == 0;
    if ( !(_Bool)( info[0].addr != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/interlink.c";
      errline = 340;
      elinks_internal( "assertion info failed!" );
      if ( assert_failed )
        goto B2;
    }
    l = info->size;
    l = info->size;
    memset( info->addr, 0, info->size );
    if ( ns < 0 )
    {
      report_af_unix_error( "accept()", *(int*)(__errno_location(  )) );
      return;
    }
    init_term( ns, ns );
    set_highpri(  );
    return;
  }
B2:  assert_failed = 0;
  return;
}
void elinks_usleep( unsigned long useconds )
{
  int edi;
  struct timeval delay;
  fd_set dummy;
  int __d0, __d1;
{
  int __d0, __d1;
  memset( dummy.__fds_bits, 0, 128 );
  delay.tv_sec = 0;
  delay.tv_usec = useconds;
  select( 0, &dummy, &dummy, &dummy, &delay.tv_sec );
  return;
}
}
void done_interlink( void )
{
  int eax;
  if ( s_info_listen.addr )
  {
    if ( s_info_listen.fd != -1 )
    {
      close( s_info_listen.fd );
      s_info_listen.fd = -1;
    }
    unlink_unix(  );
    mem_free( (void*)s_info_listen.addr );
    s_info_listen.addr = 0;
  }
  if ( s_info_connect.addr )
  {
    if ( s_info_connect.fd != -1 )
    {
      close( s_info_connect.fd );
      s_info_connect.addr = s_info_connect.addr;
      s_info_connect.fd = -1;
    }
    mem_free( (void*)s_info_connect.addr );
    s_info_connect.addr = 0;
  }
  if ( s_info_accept.addr )
  {
    if ( s_info_accept.fd != -1 )
    {
      close( s_info_accept.fd );
      s_info_accept.addr = s_info_accept.addr;
      s_info_accept.fd = -1;
    }
    mem_free( (void*)s_info_accept.addr );
    s_info_accept.addr = 0;
  }
  return;
}
int init_interlink( void )
{
  int eax;
  int edx;
  int fd;
  if ( get_address( &s_info_connect, ADDR_IP_CLIENT ) != -1 )
  {
    do
    {
      s_info_connect.fd = socket( get_address( &s_info_connect, ADDR_IP_CLIENT ), 1, 0 );
      if ( s_info_connect.fd == -1 )
      {
        report_af_unix_error( "socket()", *(int*)(__errno_location(  )) );
        break;
      }
      else
      {
        if ( connect( s_info_connect.fd, s_info_connect.addr, s_info_connect.size ) >= 0 )
        {
          fd = s_info_connect.fd;
          if ( s_info_connect.fd == -1 )
          {
            if ( get_address( &s_info_listen, ADDR_IP_SERVER ) != -1 )
            {
              while ( s_info_listen.fd == -1 )
              {
                if ( bind( s_info_listen.fd, s_info_listen.addr, s_info_listen.size ) >= 0 )
                {
                  if ( assert_failed == 0 )
                  {
                    assert_failed = 0;
                    if ( mem_calloc( 1, 110 ) )
                    {
                      s_info_accept.addr = (struct sockaddr*)mem_calloc( 1, 110 );
                      s_info_accept.size = 110;
                      s_info_accept.fd = s_info_listen.fd;
                      if ( listen( s_info_listen.fd, 100 ) )
                      {
                        report_af_unix_error( "listen()", *(int*)(__errno_location(  )) );
                        done_interlink(  );
                        umask( ebp_28 );
                        fd = -1;
                        break;
                      }
                      else
                      {
                        set_handlers( s_info_listen.fd, &af_unix_connection, 0, 0, (void*)s_info_accept.addr );
                        fd |= -1;
                        break;
                      }
                    }
                  }
                  else
                    assert_failed = 0;
                }
                else
                {
                  if ( *(int*)(__errno_location(  )) != 98 )
                    report_af_unix_error( "bind()" );
                  if ( 0 + 1 + 1 == 3 )
                    unlink_unix( s_info_listen.addr );
                  else
                  if ( ebx + 1 < 3 )
                    continue;
                  elinks_usleep( 0x186a0 + 0x186a0 );
                  close( s_info_listen.fd );
                }
              }
              report_af_unix_error( "socket()", *(int*)(__errno_location(  )) );
            }
          }
          else
            break;
        }
        else
        {
          close( s_info_connect.fd );
          if ( *(int*)(__errno_location(  )) != 2 && *(int*)(__errno_location(  )) != 111 )
          {
            report_af_unix_error( "connect()", esi );
            break;
          }
          else
          {
            elinks_usleep( 50000 + 50000 );
          }
        }
      }
    }
    while ( 50000 + 50000 != 200000 );
  }
  if ( s_info_connect.addr )
    mem_free( (void*)s_info_connect.addr );
  s_info_connect.addr = 0;
}
#if 0
#endif
