#include "HTFinger.c.h"
static int finger_fd;
static HTStructured *target;
static HTStructuredClass targetClass;
static BOOLEAN initialized;
HTProtocol HTFinger;
BOOLEAN initialize( void )
{
  finger_fd = -1;
  return 1;
}
void start_anchor( char *href )
{
  BOOLEAN present[25];
  char *value[25];
{
  int i = 0;
  for ( ; i <= 24; i++ )
  {
    present[ i ] = i == 6;
    // i++;
  }
  value[6] = href;
  targetClass.start_element( target, 0, present, value, -1, 0 );
  return;
}
}
int response( char *command, char *sitename, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  int eax;
  int status;
  int length = strlen( command );
  int ch, i;
  char line[1024], *l, *cmd = 0;
  char *p = line, *href = 0;
  if ( length == 0 )
    return -1;
  else
  {
    HTInitInput( finger_fd );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFinger command to be sent: %s", command );
    }
    status = write( finger_fd, command, length );
    if ( status < 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFinger: Unable to send command. Disconnecting.\n" );
      }
      close( finger_fd );
      finger_fd = -1;
      return status;
    }
    else
    {
      target = HTML_new( anAnchor, format_out, &sink[0] );
      targetClass.name = (char*)target[0]._HTStructured;
      targetClass._free = &target[0]._HTStructured;
      targetClass._abort = &target[0]._HTStructured;
      targetClass.put_character = &target[0]._HTStructured;
      targetClass.put_string = &target[0]._HTStructured;
      targetClass.put_block = &target[0]._HTStructured;
      targetClass.start_element = &target[0]._HTStructured;
      targetClass.end_element = &target[0]._HTStructured;
      targetClass.put_entity = &target[0]._HTStructured;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFinger: Reading finger information\n" );
      }
      targetClass.start_element( target, 55, 0, 0, -1, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.start_element( target, 53, 0, 0, -1, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.start_element( target, 110, 0, 0, -1, 0 );
      targetClass.put_string( target, "Finger server on " );
      targetClass.put_string( target, sitename );
      targetClass.end_element( target, 110, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.end_element( target, 53, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.start_element( target, 17, 0, 0, -1, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.start_element( target, 47, 0, 0, -1, 0 );
      targetClass.put_string( target, "Finger server on " );
      targetClass.start_element( target, 38, 0, 0, -1, 0 );
      targetClass.put_string( target, sitename );
      targetClass.end_element( target, 38, 0 );
      targetClass.put_string( target, ": " );
      if ( command )
        HTSACopy( &cmd, command );
      else
        HTSACopy( &cmd, "" );
      i = strlen( cmd ) + -1;
      for ( ; i >= 0 && ( cmd[ i ] == '\n' || cmd[ i ] == '\r' );  )
      {
        cmd[ i ] = 0;
        i += -1;
      }
      targetClass.put_string( target, cmd );
      if ( cmd )
      {
        free( cmd );
        cmd = 0;
      }
      targetClass.end_element( target, 47, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.start_element( target, 86, 0, 0, -1, 0 );
      while ( ch == -1 )
      {
        if ( interrupted_in_htgetcharacter )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFinger: Interrupted in HTGetCharacter, apparently.\n" );
          }
          mustshow = 1;
          HTProgress( gettext( "Connection interrupted." ) );
        }
        else
        if ( ch != 10 )
        {
          p[0] = ch;
          if ( line[1023] <= p )
            continue;
          else
          {
            p++;
          }
        }
        else
        {
          p[0] = 0;
          p = l = line;
          while ( l[0] )
          {
            if ( strncmp( l, "news:", 5 ) == 0 || strncmp( l, "snews://", 8 ) == 0 || strncmp( l, "nntp://", 7 ) == 0 || strncmp( l, "snewspost:", 10 ) == 0 || strncmp( l, "snewsreply:", 11 ) == 0 || strncmp( l, "newspost:", 9 ) == 0 || strncmp( l, "newsreply:", 10 ) == 0 || strncmp( l, "ftp://", 6 ) == 0 || strncmp( l, "file:/", 6 ) == 0 || strncmp( l, "finger://", 9 ) == 0 || strncmp( l, "http://", 7 ) == 0 || strncmp( l, "https://", 8 ) == 0 || strncmp( l, "wais://", 7 ) == 0 || strncmp( l, "mailto:", 7 ) == 0 || strncmp( l, "cso://", 6 ) == 0 || strncmp( l, "gopher://", 9 ) == 0 )
            {
              HTSACopy( &href, l );
              start_anchor( strtok( href, " \r\n\t,&gt;)\"" ) );
              while ( l[0] && strchr( " \r\n\t,&gt;)\"", l[0] ) == 0 )
              {
                targetClass.put_character( target, l[0] );
                l++;
              }
              targetClass.end_element( target, 0, 0 );
              if ( href )
              {
                free( href );
                href = 0;
              }
            }
            else
            {
              targetClass.put_character( target, l[0] );
              l++;
            }
          }
          targetClass.put_character( target, '\n' );
        }
        targetClass.end_element( target, 86, 0 );
        targetClass.put_character( target, '\n' );
        targetClass.end_element( target, 17, 0 );
        targetClass.put_character( target, '\n' );
        targetClass.end_element( target, 55, 0 );
        targetClass.put_character( target, '\n' );
        targetClass._free( target );
        return 0;
      }
      close( finger_fd );
      finger_fd = -1;
      targetClass.end_element( target, 86, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.end_element( target, 17, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.end_element( target, 55, 0 );
      targetClass.put_character( target, '\n' );
      targetClass._free( target );
      return 0;
    }
  }
}
int HTLoadFinger( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *stream )
{
  char *username, *sitename, *colon;
  char *slash, *at_sign;
  char *command, *str, *param;
  int port;
  int status;
  int result = 200;
  BOOLEAN IsGopherURL = 0;
  char *p1 = arg;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFinger: Looking for %s\n", "NULL" );
  }
  if ( arg == 0 || arg[0] == 0 )
  {
    HTAlert( gettext( "Could not load data." ) );
    return -29999;
  }
  if ( initialized == 0 )
  {
    initialized = initialize( );
  }
  if ( initialized == 0 )
  {
    HTAlert( gettext( "Could not set up finger connection." ) );
    return -29999;
  }
  if ( strncasecomp( arg, "finger://", 9 ) == 0 )
    p1 = &arg[9];
  else
  {
    if ( strncasecomp( arg, "gopher://", 9 ) == 0 )
    {
      p1 = &arg[9];
      IsGopherURL = 1;
    }
  }
  param = 0;
  sitename = HTSACopy( &param, p1 );
  if ( param == 0 )
  {
    HTAlert( gettext( "Could not load data." ) );
    return -29999;
  }
  slash = strchr( sitename, '/' );
  if ( slash )
  {
    slash[0] = 0;
    slash++;
    HTUnEscape( slash );
    if ( IsGopherURL )
    {
      if ( slash[0] != '0' )
      {
        HTAlert( gettext( "Could not load data." ) );
        return -29999;
      }
      slash[0] = 0;
      slash++;
    }
  }
  at_sign = strchr( sitename, '@' );
  if ( at_sign )
  {
    if ( IsGopherURL )
    {
      HTAlert( gettext( "Could not load data." ) );
      return -29999;
    }
    at_sign[0] = 0;
    at_sign++;
    username = sitename;
    sitename = at_sign;
    HTUnEscape( username );
  }
  else
  if ( slash )
    username = slash;
  else
    username = "";
  if ( sitename[0] == 0 )
  {
    HTAlert( gettext( "Could not load data (no sitename in finger URL)" ) );
    result = -29999;
  }
  else
  {
    colon = strchr( sitename, ':' );
    if ( colon )
    {
      colon[0] = 0;
      colon++;
      port = atoi( colon );
      if ( port != 79 )
      {
        HTAlert( gettext( "Invalid port number - will only use port 79!" ) );
        result = -29999;
      }
    }
  }
  if ( result == 200 )
  {
    str = 0;
    HTSprintf0( &str, "lose://%s/", sitename );
    command = 0;
    if ( at_sign && slash )
    {
      if ( slash[0] == 'w' || slash[0] == 'W' )
        HTSprintf0( &command, "/w %s%c%c", username, 13, 10 );
      else
        HTSprintf0( &command, "%s%c%c", username, 13, 10 );
    }
    else
    if ( at_sign )
      HTSprintf0( &command, "%s%c%c", username, 13, 10 );
    else
    if ( username[0] == '/' )
    {
      slash = strchr( &username[1], '/' );
      if ( slash )
        slash[0] = ' ';
      HTSprintf0( &command, "%s%c%c", username, 13, 10 );
    }
    else
    {
      if ( ( username[0] == 'w' || username[0] == 'W' ) && username[1] == '/' )
      {
        if ( username[0] != -2 )
          username[1] = ' ';
        else
          username[1] = 0;
        HTSprintf0( &command, "/%s%c%c", username, 13, 10 );
      }
      else
      {
        if ( ( username[0] == 'w' || username[0] == 'W' ) && username[1] == 0 )
          HTSprintf0( &command, "/%s%c%c", username, 13, 10 );
        else
        {
          slash = strchr( username, '/' );
          if ( slash )
          {
            slash[0] = 0;
            slash++;
            if ( slash[0] == 'w' || slash[0] == 'W' )
              HTSprintf0( &command, "/w %s%c%c", username, 13, 10 );
            else
              HTSprintf0( &command, "%s%c%c", username, 13, 10 );
          }
          else
            HTSprintf0( &command, "%s%c%c", username, 13, 10 );
        }
      }
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFinger: doing HTDoConnect on '%s'\n", str );
    }
    status = HTDoConnect( str, "finger", 79, &finger_fd );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFinger: Done DoConnect; status %d\n", status );
    }
    if ( status == -29998 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFinger: Interrupted on connect; recovering cleanly.\n" );
      }
      HTProgress( gettext( "Connection interrupted." ) );
      result = -29999;
    }
    else
    {
      if ( status < 0 )
      {
        close( finger_fd );
        finger_fd = -1;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFinger: Unable to connect to finger host.\n" );
        }
        HTAlert( gettext( "Could not access finger host." ) );
        result = -29999;
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFinger: Connected to finger host '%s'.\n", str );
        }
        if ( response( command, sitename, anAnchor, format_out, stream ) )
        {
          HTAlert( gettext( "No response from finger server." ) );
          result = -29999;
        }
      }
    }
    if ( str )
    {
      free( str );
      str = 0;
    }
    if ( command )
    {
      free( command );
      command = 0;
    }
  }
  if ( param )
  {
    free( param );
    param = 0;
  }
  return result;
}
#if 0
#endif
