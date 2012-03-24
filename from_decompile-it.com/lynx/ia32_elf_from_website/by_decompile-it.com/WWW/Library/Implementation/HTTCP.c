#include "HTTCP.c.h"
static char *hostname;
int lynx_nsl_status;
static int my_errno;
int HTInetStatus( char *where )
{
  int status;
  int saved_errno = *(int*)(__errno_location( ));
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "TCP: Error %d in `SOCKET_ERRNO' after call to %s() failed.\n\t%s\n", *(int*)(__errno_location( )), where, strerror( *(int*)(__errno_location( )) ) );
  }
  *(int*)(__errno_location( )) = saved_errno;
  status = 0 - *(int*)(__errno_location( ));
  return status;
}
unsigned int HTCardinal( int *pstatus, char **pp, unsigned int max_value )
{
  unsigned int n;
  if ( pp[0] <= '/' || '9' < pp[0] )
  {
    pstatus[0] = -3;
    return 0;
  }
  n = 0;
  for ( ; '/' < pp[0] && pp[0] <= '9'; pp[0]++ )
  {
    n = ( n * 10 ) + pp[0] + -48;
    // pp[0]++;
  }
  if ( max_value < n )
  {
    pstatus[0] = -4;
    return 0;
  }
  return n;
}
char *HTInetString( SockA *soc_in )
{
  static char hostbuf[64];
  getnameinfo( soc_in, soc_in == 10 ? 28 : 16, hostbuf, 64, 0, 0, 1 );
  return hostbuf;
}
BOOLEAN valid_hostname( char *name )
{
  int i = 1, iseg = 0;
  char *cp = name;
  if ( name == 0 || name[0] == 0 )
  {
  }
  for ( ; cp[0] && i <= 253; i++ )
  {
    if ( cp[0] == '.' )
    {
      if ( iseg == 0 )
      {
        break;
      }
      iseg = 0;
    }
    else
    if ( iseg == 0 && ( cp[0] == '-' || cp[0] == '+' ) )
    {
      break;
    }
    iseg++;
    if ( iseg > 63 )
    {
      break;
    }
    if ( !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8 ) && cp[0] != '-' && cp[0] != '_' && cp[0] != '$' && cp[0] != '+' )
    {
      break;
    }
    cp++;
    // i++;
  }
  return ebp_20;
}
void quench( int sig )
{
  _exit( 2 );
}
void dump_hostent( char *msgprefix, struct hostent *phost )
{
  if ( WWW_TraceFlag )
  {
    int i;
    char **pcnt;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "%s: %p ", msgprefix, phost );
    }
    if ( phost )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "{ h_name = %p", &phost->h_name[0] );
      }
      if ( phost->h_name[0] )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), " \"%s\",", &phost->h_name[0] );
        }
      }
      else
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "," );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "\n\t h_aliases = %p", &phost->h_aliases );
      }
      if ( phost->h_aliases )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), " {" );
        }
        pcnt = phost->h_aliases;
        for ( ; pcnt[0]; pcnt++ )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "%s %p \"%s\"", phost->h_aliases == pcnt ? " " : ", ", pcnt[0], pcnt[0] );
          }
          // pcnt++;
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "%s0x0 },\n\t", " " );
        }
      }
      else
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), ",\n\t" );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " h_addrtype = %d,", phost->h_addrtype );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " h_length = %d,\n\t", phost->h_length );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " h_addr_list = %p", &phost->h_addr_list );
      }
      if ( phost->h_addr_list )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), " {" );
        }
        pcnt = phost->h_addr_list;
        for ( ; pcnt[0]; pcnt++ )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "%s %p", phost->h_addr_list == pcnt ? "" : ",", pcnt[0] );
          }
          i = 0;
          for ( ; i < phost->h_length; i++ )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "%s%d%s", i ? "." : " \"", pcnt[0], phost->h_length == i + 1 ? "\"" : "" );
            }
            // i++;
          }
          // pcnt++;
        }
        if ( phost->h_addr_list[0] )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), ", 0x0 } }" );
          }
        }
        else
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), " 0x0 } }" );
          }
        }
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "}" );
        }
      }
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\n" );
    }
    fflush( TraceFP( ) );
  }
  return;
}
size_t fill_rehostent( char *rehostent, size_t rehostentsize, struct hostent *phost )
{
  AlignedHOSTENT *data = &rehostent[0];
  int num_addrs = 0;
  int num_aliases = 0;
  char **pcnt;
  char *p_next_char;
  char **p_next_charptr;
  size_t name_len = 0;
  size_t required_per_addr;
  size_t curlen = 20;
  size_t available = rehostentsize - curlen;
  size_t chk_available;
  size_t mem_this_alias;
  size_t required_this_alias;
  int i_addr, i_alias;
  if ( phost == 0 )
  {
    return 0;
  }
  required_per_addr = phost->h_length + 4;
  if ( phost->h_addr_list )
    available += -4;
  if ( phost->h_aliases )
    available += -4;
  if ( phost->h_name[0] )
    available += -1;
  if ( phost->h_addr_list && phost->h_addr_list[0] && required_per_addr <= available )
  {
    num_addrs++;
    available -= required_per_addr;
  }
  if ( phost->h_name[0] )
  {
    name_len = strlen( &phost->h_name[0] );
    if ( name_len <= available )
      available -= name_len;
    else
      name_len = 0;
  }
  if ( num_addrs )
  {
    pcnt = phost->h_addr_list[1];
    for ( ; pcnt[0] && required_per_addr <= available; pcnt++ )
    {
      num_addrs++;
      available -= required_per_addr;
      // pcnt++;
    }
  }
  chk_available = available;
  if ( phost->h_aliases )
  {
    pcnt = phost->h_aliases;
    for ( ; pcnt[0]; pcnt++ )
    {
      required_this_alias = strlen( pcnt[0] ) + 5;
      if ( required_this_alias <= chk_available )
      {
        num_aliases++;
        chk_available -= required_this_alias;
      }
      // pcnt++;
    }
  }
  data->h.h_addrtype = phost->h_addrtype;
  data->h.h_length = phost->h_length;
  p_next_charptr = rehostent[ curlen ];
  p_next_char = &rehostent[ curlen ];
  if ( phost->h_addr_list )
    p_next_char = &p_next_char[ 2 + ( num_addrs << 2 ) ];
  if ( phost->h_aliases )
    p_next_char = &p_next_char[ 2 + ( num_aliases << 2 ) ];
  if ( phost->h_addr_list )
  {
    data->h.h_addr_list = p_next_charptr;
    pcnt = phost->h_addr_list;
    i_addr = 0;
    for ( ; i_addr < num_addrs; i_addr++ )
    {
      memcpy( p_next_char, pcnt[0], 4 );
      p_next_charptr[0] = p_next_char;
      p_next_charptr++;
      p_next_char += 4;
      pcnt++;
      // i_addr++;
    }
    p_next_charptr[0] = 0;
    p_next_charptr++;
  }
  else
    *(int*)&data->h.h_addr_list = 0;
  if ( phost->h_name[0] )
  {
    data->h.h_name[0] = p_next_char;
    if ( name_len )
    {
      strcpy( p_next_char, &phost->h_name[0] );
      p_next_char = &p_next_char[ name_len + 1 ];
    }
    else
    {
      p_next_char[0] = 0;
      p_next_char++;
    }
  }
  else
    *(int*)&data->h.h_name[0] = 0;
  if ( phost->h_aliases )
  {
    data->h.h_aliases = p_next_charptr;
    pcnt = phost->h_aliases;
    i_alias = 0;
    for ( ; pcnt[0] && i_alias < num_addrs; i_alias++ )
    {
      mem_this_alias = strlen( pcnt[0] ) + 1;
      required_this_alias = mem_this_alias + 4;
      if ( required_this_alias <= available )
      {
        i_alias++;
        available -= required_this_alias;
        strcpy( p_next_char, pcnt[0] );
        p_next_charptr[0] = p_next_char;
        p_next_charptr++;
        p_next_char = &p_next_char[ mem_this_alias ];
      }
      p_next_char += 4;
      pcnt++;
      // i_alias++;
    }
    p_next_charptr[0] = 0;
    p_next_charptr++;
  }
  else
    *(int*)&data->h.h_aliases = 0;
  curlen = p_next_char - rehostent;
  return curlen;
}
unsigned int readit( int fd, char *buffer, unsigned int length )
{
  unsigned int result = 0;
  for ( ; length;  )
  {
    unsigned int got = read( fd, buffer, length );
    if ( got == 0 )
      break;
    result += got;
    buffer = &buffer[ got ];
    length -= got;
  }
  return result;
}
struct hostent *LYGetHostByName( char *str )
{
  static AlignedHOSTENT aligned_full_rehostent;
  char *host = str;
  char *rehostent = aligned_full_rehostent.h.h_name;
  struct _statuses statuses;
  size_t rehostentlen = 0;
  struct hostent *result_phost = 0;
  if ( str == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYGetHostByName: Can't parse `NULL'.\n" );
    }
    lynx_nsl_status = -900;
    return 0;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYGetHostByName: parsing `%s'.\n", str );
    }
    if ( HTCheckForInterrupt( ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "LYGetHostByName: INTERRUPTED for '%s'.\n", str );
      }
      lynx_nsl_status = -29998;
      return 0;
    }
    else
    {
      if ( ( valid_hostname( host ) & 255 ) == 0 )
      {
        lynx_nsl_status = -406;
        my_errno = 3;
        return 0;
      }
      if ( WWW_TraceFlag )
      {
        fflush( TraceFP( ) );
      }
      lynx_nsl_status = -900;
      statuses.h_errno_valid = 0;
    {
      int got_rehostent = 0;
      sigset_t old_sigset;
      sigset_t new_sigset;
      int fpid, waitret;
      int pfd[2], selret, readret;
      int waitstat = 0;
      time_t start_time = time( 0 );
      fd_set readfds;
      struct timeval one_second;
      long dns_patience = 30;
      int child_exited = 0;
      do
      {
        waitret = waitpid( -1, 0, 1 );
      }
      while ( waitret <= 0 && ( waitret != -1 || *(int*)(__errno_location( )) != 4 ) );
      waitret = 0;
      pipe( pfd );
      sigemptyset( new_sigset.__val );
      sigaddset( new_sigset.__val, 15 );
      sigaddset( new_sigset.__val, 2 );
      sigaddset( new_sigset.__val, 1 );
      sigaddset( new_sigset.__val, 20 );
      sigaddset( new_sigset.__val, 28 );
      sigprocmask( 0, new_sigset.__val, old_sigset.__val );
      fpid = fork( );
      if ( fpid == 0 )
      {
        struct hostent *phost;
        signal( 15, &quench );
        signal( 2, &quench );
        signal( 1, &quench );
        if ( no_suspend )
          signal( 20, 1 );
        else
          signal( 20, 0 );
        signal( 28, 1 );
        signal( 11, 0 );
        signal( 4, 0 );
        sigprocmask( 2, old_sigset.__val, 0 );
        close( pfd[0] );
        *(int*)(__errno_location( )) = 0;
        phost = (struct hostent*)gethostbyname( host );
        statuses.child_errno = *(int*)(__errno_location( ));
        statuses.child_h_errno = my_errno;
        dump_hostent( "CHILD gethostbyname", phost );
        if ( phost && phost->h_length )
        {
          rehostentlen = fill_rehostent( rehostent, 128, phost );
          dump_hostent( "CHILD fill_rehostent", &rehostent[0] );
        }
        if ( rehostentlen <= 20 || rehostent == 0 || rehostent[12] == 0 )
        {
          rehostentlen = 0;
          statuses.h_length = 0;
        }
        else
          statuses.h_length = rehostent[12];
        if ( statuses.child_errno == 0 )
        {
          statuses.child_errno = *(int*)(__errno_location( ));
        }
        statuses.rehostentlen = rehostentlen;
        write( pfd[1], &statuses.rehostentlen, 20 );
        if ( rehostentlen )
        {
          write( pfd[1], rehostent, rehostentlen );
          close( pfd[1] );
          _exit( 0 );
        }
        _exit( 1 );
      }
      sigprocmask( 2, old_sigset.__val, 0 );
      close( pfd[1] );
      if ( fpid < 0 )
        close( pfd[0] );
      else
      {
        while ( child_exited || time( 0 ) - start_time < dns_patience )
        {
          unsigned int __i;
          fd_set *__arr = &readfds;
          __i = 0;
          for ( ; __i <= 31; __i++ )
          {
            __arr->fds_bits[0] = 0;
            // __i++;
          }
        {
          int kbd_fd = LYConsoleInputFD( 1 );
          if ( kbd_fd != -1 )
            readfds.fds_bits[ ebp_72 >> 5 ] = readfds.fds_bits[ kbd_fd >> 5 ] | ( 1 << kbd_fd );
          one_second.tv_sec = 1;
          one_second.tv_usec = 0;
          readfds.fds_bits[ pfd[0] >> 5 ] |= 1 << pfd[0];
          selret = select( pfd[0], &readfds, 0, 0, &one_second.tv_sec );
          if ( selret > 0 && ( ( readfds.fds_bits[ pfd[0] >> 5 ] >> (unsigned char)( pfd[0] ) ) & 1 ) )
          {
            readret = readit( pfd[0], &statuses.rehostentlen, 20 );
            if ( readret == 20 )
            {
              my_errno = statuses.child_h_errno;
              *(int*)(__errno_location( )) = statuses.child_errno;
              if ( statuses.rehostentlen > 20 )
              {
                readret = readit( pfd[0], rehostent, statuses.rehostentlen );
                dump_hostent( "Read from pipe", &rehostent[0] );
                if ( statuses.rehostentlen == readret )
                {
                  got_rehostent = 1;
                  result_phost = &rehostent[0];
                  lynx_nsl_status = 0;
                }
                else
                if ( statuses.h_errno_valid == 0 )
                  lynx_nsl_status = -900;
              }
            }
            else
              lynx_nsl_status = -1;
            if ( child_exited == 0 )
            {
              waitret = waitpid( fpid, &waitstat, 1 );
            }
          {
            union {
               int __in;
               int __i;
            } __u;
            __u.__in = waitstat;
            if ( ebp_76 & 127 )
            {
              union {
                 int __in;
                 int __i;
              } __u;
              __u.__in = waitstat;
              if ( ( ( ( ebp_80 & 127 ) + 1 ) >> 1 ) <= 0 )
              {
                kill( fpid, 15 );
                waitret = waitpid( fpid, &waitstat, 1 );
                break;
              }
            }
          }
          }
          else
          {
            if ( child_exited )
            {
              waitret = waitpid( fpid, &waitstat, 1 );
              break;
            }
            else
            {
              waitret = waitpid( fpid, &waitstat, 1 );
              if ( waitret <= 0 )
              {
                if ( HTCheckForInterrupt( ) )
                {
                  if ( WWW_TraceFlag == 0 )
                  {
                    kill( fpid, 15 );
                    waitpid( fpid, 0, 1 );
                    close( pfd[0] );
                    lynx_nsl_status = -29998;
                    return 0;
                  }
                  fprintf( TraceFP( ), "LYGetHostByName: INTERRUPTED gethostbyname.\n" );
                  kill( fpid, 15 );
                  waitpid( fpid, 0, 1 );
                  close( pfd[0] );
                  lynx_nsl_status = -29998;
                  return 0;
                }
              }
              else
              {
                child_exited = 1;
              }
            }
          }
        }
        }
        close( pfd[0] );
        if ( waitret <= 0 )
        {
          kill( fpid, 15 );
          waitret = waitpid( fpid, &waitstat, 1 );
        }
        if ( waitret > 0 )
        {
          union {
             int __in;
             int __i;
          } __u;
          __u.__in = waitstat;
          if ( ( ebp_84 & 127 ) == 0 )
          {
            if ( WWW_TraceFlag )
            {
              union {
                 int __in;
                 int __i;
              } __u;
              __u.__in = waitstat;
              fprintf( TraceFP( ), "LYGetHostByName: NSL_FORK child %d exited, status 0x%x.\n", waitret, ( ebp_88 & 65280 ) >> 8 );
            }
          }
          else
          {
            union {
               int __in;
               int __i;
            } __u;
            __u.__in = waitstat;
            if ( ( ( ( ebp_92 & 127 ) + 1 ) >> 1 ) > 0 )
            {
              if ( WWW_TraceFlag )
              {
                union {
                   int __in;
                   int __i;
                } __u;
                __u.__in = waitstat;
                fprintf( TraceFP( ), "LYGetHostByName: NSL_FORK child %d got signal, status 0x%x!\n", waitret, ebp_96 & 127 );
              }
            {
              union {
                 int __in;
                 int __i;
              } __u;
              __u.__in = waitstat;
              if ( ( ebp_100 & 128 ) && WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "LYGetHostByName: NSL_FORK child %d dumped core!\n", waitret );
              }
            }
            }
            else
            {
              union {
                 int __in;
                 int __i;
              } __u;
              __u.__in = waitstat;
              if ( ( ebp_104 & 255 ) == 127 && WWW_TraceFlag )
              {
                union {
                   int __in;
                   int __i;
                } __u;
                __u.__in = waitstat;
                fprintf( TraceFP( ), "LYGetHostByName: NSL_FORK child %d is stopped, status 0x%x!\n", waitret, ( ebp_108 & 65280 ) >> 8 );
              }
            }
          }
        }
        if ( got_rehostent )
        {
          dump_hostent( "End of LYGetHostByName", result_phost );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "LYGetHostByName: Resolved name to a hostent.\n" );
          }
          return result_phost;
        }
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "LYGetHostByName: Can't find internet node name `%s'.\n", host );
      }
      return 0;
    }
    }
  }
}
struct addrinfo *HTGetAddrInfo( char *str, int defport )
{
  int eax;
  struct addrinfo hints, *res;
  int error;
  char *p;
  char *s = 0;
  char *host, *port;
  char pbuf[80];
  HTSACopy( &s, str );
  if ( s[0] == '[' )
  {
    p = strchr( s, ']' );
    if ( p )
    {
      p[0] = 0;
      p++;
      host = &s[1];
      port = strrchr( p, ':' );
      if ( port )
      {
        port[0] = 0;
        port++;
      }
      else
      {
        sprintf( pbuf, "%d", defport );
        port = pbuf;
      }
      memset( &hints.ai_flags, 0, 32 );
      hints.ai_family = 0;
      hints.ai_socktype = 1;
      error = getaddrinfo( host, port, &hints.ai_flags, res );
      if ( error || res == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTGetAddrInfo: getaddrinfo(%s, %s): %s\n", host, port, gai_strerror( error ) );
        }
        res = 0;
      }
      free( s );
      return res;
    }
  }
  p = s;
  host = s;
  port = strrchr( p, ':' );
}
void get_host_details( void )
{
  int eax;
  char name[65];
  int namelength = 65;
  if ( hostname == 0 )
  {
    gethostname( name, namelength );
    HTSACopy( &hostname, name );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "TCP: Local host name is %s\n", hostname );
    }
  }
  return;
}
char *HTHostName( void )
{
  get_host_details( );
  return hostname;
}
BOOLEAN HTWasInterrupted( int *status )
{
  BOOLEAN result = 0;
  if ( HTCheckForInterrupt( ) )
  {
    result = 1;
    status[0] = -29998;
    *(int*)(__errno_location( )) = 4;
  }
  return result;
}
void set_timeout( struct timeval *timeoutp )
{
  timeoutp->tv_sec = 0;
  timeoutp->tv_usec = 100000;
  return;
}
int HTDoConnect( char *url, char *protocol, int default_port, int *s )
{
  int eax;
  int status = 0;
  char *line = 0;
  char *p1 = 0;
  char *at_sign = 0;
  char *host = 0;
  struct addrinfo *res = 0, *res0 = 0;
  p1 = HTParse( url, "", 8 );
  at_sign = strchr( p1, '@' );
  if ( at_sign )
    HTSACopy( &host, &at_sign[1] );
  else
    HTSACopy( &host, p1 );
  if ( p1 )
  {
    free( p1 );
    p1 = 0;
  }
  HTSprintf0( &line, "%s%s", gettext( "Looking up " ), host );
  mustshow = 1;
  HTProgress( line );
  res0 = HTGetAddrInfo( host, default_port );
  if ( res0 == 0 )
  {
    HTSprintf0( &line, gettext( "Unable to locate remote host %s." ), host );
    mustshow = 1;
    HTProgress( line );
    if ( host )
    {
      free( host );
      host = 0;
    }
    if ( line )
    {
      free( line );
      line = 0;
    }
    return -204;
  }
  else
  {
    HTSprintf0( &line, gettext( "Making %s connection to %s" ), protocol, host );
    mustshow = 1;
    HTProgress( line );
    if ( host )
    {
      free( host );
      host = 0;
    }
    if ( line )
    {
      free( line );
      line = 0;
    }
    res = res0;
    while ( res )
    {
      s[0] = socket( res->ai_family, res->ai_socktype, res->ai_protocol );
      if ( s[0] == -1 )
      {
        char hostbuf[1024], portbuf[1024];
        getnameinfo( &res->ai_addr, res->ai_addrlen, hostbuf, 1024, portbuf, 1024, 3 );
        HTSprintf0( &line, gettext( "socket failed: family %d addr %s port %s." ), res->ai_family, hostbuf[0], portbuf[0] );
        mustshow = 1;
        HTProgress( line );
        if ( line )
        {
          free( line );
          line = 0;
        }
        res = &res->ai_next;
      }
      else
      {
        int val = 1;
        int ret = ioctl( s[0], 21537, val );
        if ( ret == -1 )
        {
          mustshow = 1;
          HTProgress( gettext( "Could not make connection non-blocking." ) );
        }
        status = connect( s[0], &res->ai_addr, res->ai_addrlen );
        if ( status < 0 && ( *(int*)(__errno_location( )) == 115 || *(int*)(__errno_location( )) == 11 ) )
        {
          struct timeval select_timeout;
          int ret;
          int tries = 0;
          HTInetStatus( "this socket's first connect" );
          ret = 0;
          do
          {
            if ( ret <= 0 )
            {
              fd_set writefds;
              tries++;
              if ( ( ( ( (/*HI*/int)( 0x66666667 * tries ) >> 2 ) - ( tries >> 31 ) < connect_timeout ) ^ 1 ) & 255 )
              {
                HTAlert( gettext( "Connection failed (too many retries)." ) );
                if ( line )
                {
                  free( line );
                  line = 0;
                }
                if ( res0 )
                  freeaddrinfo( res0 );
                return -204;
              }
              else
              {
                set_timeout( &select_timeout );
              {
                unsigned int __i;
                fd_set *__arr = &writefds;
                __i = 0;
                for ( ; __i <= 31; __i++ )
                {
                  __arr->fds_bits[0] = 0;
                  // __i++;
                }
                writefds.fds_bits[ s[0] >> 5 ] |= 1 << s[0];
                ret = select( s[0] + 1, 0, &writefds, 0, &select_timeout.tv_sec );
                if ( tries == 1 )
                  HTInetStatus( "this socket's first select" );
                if ( ret != -1 || *(int*)(__errno_location( )) != 4 )
                {
                  if ( ret < 0 )
                    HTInetStatus( "failed select" );
                  if ( ret < 0 && *(int*)(__errno_location( )) != 114 )
                    status = ret;
                  else
                  {
                    if ( ret > 0 )
                    {
                      status = connect( s[0], &res->ai_addr, res->ai_addrlen );
                      if ( status < 0 && *(int*)(__errno_location( )) == 106 )
                        status = 0;
                      if ( status && *(int*)(__errno_location( )) == 114 )
                        ret = 0;
                      else
                      {
                        if ( status < 0 )
                          HTInetStatus( "confirm-ready connect" );
                      }
                    }
                    else
                    {
                      status = connect( s[0], &res->ai_addr, res->ai_addrlen );
                      if ( status < 0 && *(int*)(__errno_location( )) != 114 && *(int*)(__errno_location( )) != 11 && *(int*)(__errno_location( )) != 106 )
                        HTInetStatus( "confirm-not-ready connect" );
                    }
                  }
                }
              }
              }
            }
          }
          while ( HTWasInterrupted( &status ) & 255 );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "*** INTERRUPTED in middle of connect.\n" );
          }
        }
        else
        if ( status < 0 )
          HTInetStatus( "this socket's first and only connect" );
        if ( status < 0 )
        {
          close( s[0] );
          s[0] = -1;
          res = &res->ai_next;
        }
      }
    }
    if ( s[0] < 0 )
      close( s[0] );
    else
    {
      int val = 0;
      int ret = ioctl( s[0], 21537, val );
      if ( ret == -1 )
      {
        mustshow = 1;
        HTProgress( gettext( "Could not restore socket to blocking." ) );
      }
    }
    if ( line )
    {
      free( line );
      line = 0;
    }
    if ( res0 )
      freeaddrinfo( res0 );
    return status;
  }
}
int HTDoRead( int fildes, void *buf, unsigned int nbyte )
{
  int result;
  BOOLEAN ready;
  int ret;
  fd_set readfds;
  struct timeval select_timeout;
  int tries = 0;
  int otries = 0;
  time_t otime = time( 0 );
  time_t start = otime;
  if ( fildes == 0 )
  {
    if ( isatty( fildes ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTDoRead - refusing to read fd 0 which is a tty!\n" );
      }
      return -1;
    }
  }
  else
  {
    if ( fildes <= 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTDoRead - no file descriptor!\n" );
      }
      return -1;
    }
  }
  if ( HTWasInterrupted( &result ) & 255 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTDoRead - interrupted before starting!\n" );
    }
    return result;
  }
  else
  {
    ready = 0;
    while ( ready == 0 )
    {
      tries++;
      if ( ( ( ( (/*HI*/int)( 0x66666667 * tries ) >> 2 ) - ( tries >> 31 ) < reading_timeout ) ^ 1 ) & 255 )
      {
        HTAlert( gettext( "Socket read failed (too many tries)." ) );
        *(int*)(__errno_location( )) = 4;
        result = -29998;
        break;
      }
      else
      {
        if ( tries - otries > 10 )
        {
          time_t t = time( 0 );
          otries = tries;
          if ( t - otime > 4 )
          {
            otime = t;
            HTReadProgress( (long long)-1, (long long)0 );
          }
        }
        do
        {
          set_timeout( &select_timeout );
        {
          unsigned int __i;
          fd_set *__arr = &readfds;
          __i = 0;
          for ( ; __i <= 31; __i++ )
          {
            __arr->fds_bits[0] = 0;
            // __i++;
          }
          readfds.fds_bits[ fildes >> 5 ] |= 1 << fildes;
          ret = select( fildes + 1, &readfds, 0, 0, &select_timeout.tv_sec );
        }
        }
        while ( ret == -1 && *(int*)(__errno_location( )) == 4 );
        if ( ret < 0 )
        {
          result = -1;
          break;
        }
        else
        {
          if ( ret <= 0 )
          {
            if ( ( HTWasInterrupted( &result ) & 255 ) == 0 )
              continue;
          }
          else
          {
            ready = 1;
          }
        }
      }
    }
    if ( ready )
    {
      do
      {
        result = read( fildes, buf, nbyte );
        if ( result == -1 )
        {
        }
      }
      while ( *(int*)(__errno_location( )) != 4 );
      HTInetStatus( "read" );
    }
    if ( WWW_TraceFlag && ( WWW_TraceMask & 256 ) )
    {
      fprintf( TraceFP( ), "...HTDoRead returns %d (%d seconds)\n", result, time( 0 ) - start );
    }
    return result;
  }
}
#if 0
#endif
