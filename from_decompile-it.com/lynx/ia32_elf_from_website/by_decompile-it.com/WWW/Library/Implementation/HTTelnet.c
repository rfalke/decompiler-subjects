#include "HTTelnet.c.h"
HTProtocol HTTelnet;
HTProtocol HTRlogin;
HTProtocol HTTn3270;
void do_system( char *command )
{
  if ( command && command[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTTelnet: Command is: %s\n\n", command );
    }
    LYSystem( command );
    if ( command == 0 )
    {
      return;
    }
    free( command );
    command = 0;
  }
  return;
}
int remote_session( char *acc_method, char *host )
{
  char *program;
  char *user = host;
  char *password = 0;
  char *cp;
  char *hostname;
  char *port;
  char *command = 0;
  enum _login_protocol  login_protocol = rlogin;
  cp = host;
  for ( ; cp[0]; cp++ )
  {
    if ( !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8 ) && cp[0] != '_' && cp[0] != '-' && cp[0] != ':' && cp[0] != '.' && cp[0] != '@' )
    {
      cp[0] = 0;
      break;
    }
    else
    {
      // cp++;
    }
  }
  hostname = strchr( host, '@' );
  if ( hostname )
  {
    hostname[0] = 0;
    hostname++;
  }
  else
  {
    hostname = host;
    user = 0;
  }
  port = strchr( hostname, ':' );
  if ( port )
  {
    port[0] = 0;
    port++;
  }
  if ( hostname == 0 || hostname[0] == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTTelnet: No host specified!\n" );
    }
    return -204;
  }
  else
  {
    if ( ( valid_hostname( hostname ) & 255 ) == 0 )
    {
      char *prefix = 0;
      char *line = 0;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTTelnet: Invalid hostname %s!\n", host );
      }
      HTSprintf0( &prefix, gettext( "remote %s session:" ), acc_method );
      HTSprintf0( &line, gettext( "Invalid hostname %s" ), host );
      HTAlwaysAlert( prefix, line );
      if ( prefix )
      {
        free( prefix );
        prefix = 0;
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
      if ( user )
      {
        password = strchr( user, ':' );
        if ( password )
        {
          password[0] = 0;
          password++;
        }
      }
      if ( HTSecure )
      {
        puts( "\n\nSorry, but the service you have selected is one" );
        puts( "to which you have to log in.  If you were running www" );
        puts( "on your own computer, you would be automatically connected." );
        puts( "For security reasons, this is not allowed when" );
        puts( "you log in to this information service remotely.\n" );
        printf( "You can manually connect to this service using %s\n", acc_method );
        printf( "to host %s", hostname );
        if ( user )
          printf( ", user name %s", user );
        if ( password )
          printf( ", password %s", password );
        if ( port )
          printf( ", port %s", port );
        puts( ".\n" );
        return -204;
      }
      else
      {
        if ( user && login_protocol != rlogin )
          printf( "When you are connected, log in as:  %s\n", user );
        if ( password && login_protocol != rlogin )
          printf( "                  The password is:  %s\n", password );
        fflush( stdout );
        switch ( login_protocol )
        {
        case rlogin:
          program = HTGetProgramPath( 11 );
          if ( program == 0 )
          {
            LYSystem( command );
            return -204;
          }
          HTAddParam( &command, "%s %s%s%s", 1, program );
          HTAddParam( &command, "%s %s%s%s", 2, hostname );
          HTSACat( &command, "" );
          HTAddParam( &command, "%s %s%s%s", 4, user );
          HTEndParam( &command, "%s %s%s%s", 4 );
          break;
        case tn3270:
          program = HTGetProgramPath( 17 );
          if ( program == 0 )
          {
            LYSystem( command );
            return -204;
          }
          HTAddParam( &command, "%s %s %s", 1, program );
          HTAddParam( &command, "%s %s %s", 2, hostname );
          HTAddParam( &command, "%s %s %s", 3, port );
          HTEndParam( &command, "%s %s %s", 3 );
          break;
        case telnet:
          program = HTGetProgramPath( 16 );
          if ( program == 0 )
          {
            LYSystem( command );
            return -204;
          }
          HTAddParam( &command, "%s %s %s", 1, program );
          HTAddParam( &command, "%s %s %s", 2, hostname );
          HTAddParam( &command, "%s %s %s", 3, port );
          HTEndParam( &command, "%s %s %s", 3 );
          break;
        }
      }
    }
  }
}
int HTLoadTelnet( char *addr, HTParentAnchor *anchor, HTFormat format_out, HTStream *sink )
{
  char *acc_method;
  char *host;
  int status;
  if ( sink )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTTelnet: Can't output a live session -- must be interactive!\n" );
    }
    return -204;
  }
  else
  {
    acc_method = HTParse( addr, "file:", 16 );
    host = HTParse( addr, "", 8 );
    if ( host == 0 || host[0] == 0 )
    {
      status = -204;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTTelnet: No host specified!\n" );
      }
    }
    else
    {
      status = remote_session( acc_method, host );
    }
    if ( host )
    {
      free( host );
      host = 0;
    }
    if ( acc_method )
    {
      free( acc_method );
      acc_method = 0;
    }
    return status;
  }
}
#if 0
#endif
