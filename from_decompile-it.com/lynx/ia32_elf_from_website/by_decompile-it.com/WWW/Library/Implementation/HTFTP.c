#include "HTFTP.c.h"
int HTfileSortMethod;
static char ThisYear[8];
static char LastYear[8];
static int TheDate;
static BOOLEAN HaveYears;
static connection *connections;
static char response_text[257];
static connection *control;
static int data_soc;
static char *user_entered_password;
static char *last_username_and_host;
static int Broken_RETR;
static int Broken_EPSV;
static eServerType server_type;
static int unsure_type;
static BOOLEAN use_list;
static int interrupted_in_next_data_char;
static BOOLEAN have_socket;
static unsigned int master_socket;
static char port_command[255];
static fd_set open_sockets;
static unsigned int num_sockets;
static PortNumber passive_port;
static char data_buffer[2048];
static char *data_read_pointer;
static char *data_write_pointer;
static char *help_message_buffer;
static char *months[12];
char *HTVMS_name( char *nn, char *fn )
{
  static char *vmsname;
  char *filename = malloc( ( strlen( fn ) + 1 ) * sizeof( char ) );
  char *nodename = malloc( ( strlen( nn ) + 3 ) * sizeof( char ) );
  char *second;
  char *last;
  char *hostname = HTHostName( );
  if ( filename == 0 || nodename == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTFTP.c", "HTVMSname" );
  strcpy( filename, fn );
  memcpy( nodename, "", 1 );
  if ( strncmp( nn, "localhost", 9 ) )
  {
    char *p = hostname;
    char *q = nn;
    for ( ; p[0] && p[0] != '.' && q[0] && q[0] != '.'; q++ )
    {
      if ( q[0] != p[0] )
      {
        char *r;
        strcpy( nodename, nn );
        r = strchr( nodename, '.' );
        if ( r )
          r[0] = 0;
        memcpy( nodename + strlen( nodename ) );
        break;
      }
      else
      {
        p++;
        // q++;
      }
    }
  }
  second = strchr( &filename[1], '/' );
  last = strrchr( filename, '/' );
  if ( second == 0 )
    HTSprintf0( &vmsname, "%s%s", nodename, filename[1] );
  else
  if ( second == last )
  {
    second[0] = 0;
    HTSprintf0( &vmsname, "%s%s:%s", nodename, filename[1], second[1] );
    second[0] = '/';
  }
  else
  {
    char *p;
    second[0] = 0;
    last[0] = 0;
    HTSprintf0( &vmsname, "%s%s:[%s]%s", nodename, filename[1], second[1], last[1] );
    second[0] = last[0] = '/';
    p = strchr( vmsname, '[' );
    for ( ; p[0] != ']'; p++ )
    {
      if ( p[0] == '/' )
        p[0] = '.';
      // p++;
    }
  }
  if ( nodename )
  {
    free( nodename );
    nodename = 0;
  }
  if ( filename )
  {
    free( filename );
    filename = 0;
  }
  return vmsname;
}
int next_data_char( void )
{
  int status;
  if ( data_write_pointer <= data_read_pointer )
  {
    status = HTDoRead( data_soc, data_buffer, 2048 );
    if ( status == -29998 )
      interrupted_in_next_data_char = 1;
    if ( status <= 0 )
    {
      return -1;
    }
    data_write_pointer = &data_buffer[ status ];
    data_read_pointer = data_buffer;
  }
  return data_read_pointer[0];
  data_read_pointer++;
}
int close_connection( connection *con )
{
  connection *scan;
  int status;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFTP: Closing control socket %d\n", con->socket );
  }
  status = close( con->socket );
  if ( WWW_TraceFlag && status && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFTP:close_connection: %s", strerror( *(int*)(__errno_location( )) ) );
  }
  con->socket = -1;
  if ( connections == con )
  {
    connections = &con->next;
    return status;
  }
  scan = connections;
  for ( ; scan;  )
  {
    if ( scan->next == con )
    {
      scan->next = con->next;
      if ( control == con )
        control = 0;
      return status;
    }
    else
    {
      scan = &scan->next;
    }
  }
  return -1;
}
void init_help_message_cache( void )
{
  if ( help_message_buffer )
  {
    free( help_message_buffer );
    help_message_buffer = 0;
  }
  return;
}
void help_message_cache_add( char *string )
{
  if ( help_message_buffer )
    HTSACat( &help_message_buffer, string );
  else
    HTSACopy( &help_message_buffer, string );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Adding message to help cache: %s\n", string );
  }
  return;
}
char *help_message_cache_non_empty( void )
{
  return help_message_buffer;
}
char *help_message_cache_contents( void )
{
  return help_message_buffer;
}
int write_cmd( char *cmd )
{
  int status;
  if ( control == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFTP: No control connection set up!!\n" );
    }
    return -99;
  }
  else
  {
    if ( cmd )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "  Tx: %s", cmd );
      }
      status = write( control->socket, cmd, strlen( cmd ) );
      if ( status < 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Error %d sending command: closing socket %d\n", status, control->socket );
        }
        close_connection( control );
        return status;
      }
    }
    return 1;
  }
}
BOOLEAN find_response( HTList *list )
{
  BOOLEAN result = 0;
  HTList *p = list;
  char *value;
  do
  {
    if ( p )
    {
      p = &p->next;
      value = 0;
      if ( value == 0 )
        break;
    }
    value = 0;
  }
  while ( LYstrstr( response_text, value ) );
  result = 1;
  return result;
}
int response( char *cmd )
{
  int result;
  int continuation_response = -1;
  int status = write_cmd( cmd );
  if ( status < 0 )
  {
    return status;
  }
{
  do
  {
    char *p = response_text;
  {
    do
    {
      p[0] = ich = HTGetCharacter( );
      p++;
      if ( ( ( p[0] == '\n' ) & 255 ) || response_text[256] == p )
      {
        char continuation;
        if ( interrupted_in_htgetcharacter )
        {
          if ( WWW_TraceFlag == 0 )
          {
            close( control->socket );
            control->socket = -1;
            return -29998;
          }
          fprintf( TraceFP( ), "HTFTP: Interrupted in HTGetCharacter, apparently.\n" );
          close( control->socket );
          control->socket = -1;
          return -29998;
        }
        else
        {
          p[0] = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "    Rx: %s", response_text );
          }
          if ( strncmp( response_text, "230-", 4 ) == 0 || strncmp( response_text, "250-", 4 ) == 0 || strncmp( response_text, "220-", 4 ) == 0 )
            help_message_cache_add( &response_text[4] );
          sscanf( response_text, "%d%c", &result, &continuation );
          if ( continuation_response == -1 )
          {
            if ( continuation == '-' )
              return result;
          }
          else
          if ( result == continuation_response && continuation == ' ' )
            continuation_response = -1;
          if ( result == 220 && ( find_response( broken_ftp_retr ) & 255 ) )
          {
            Broken_RETR = 1;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "This server is broken (RETR)\n" );
            }
          }
          if ( result == 220 && ( find_response( broken_ftp_epsv ) & 255 ) )
          {
            Broken_EPSV = 1;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "This server is broken (EPSV)\n" );
            }
          }
          if ( continuation_response != -1 )
          {
            do
            {
              char *p = response_text;
            {
              do
              {
                p[0] = ich = HTGetCharacter( );
                p++;
              }
              while ( ich != -1 );
              if ( WWW_TraceFlag == 0 )
              {
                memcpy( response_text, "000 *** TCP read error on response\n", 36 );
                close_connection( control );
                return -1;
              }
              fprintf( TraceFP( ), "Error on rx: closing socket %d\n", control->socket );
              memcpy( response_text, "000 *** TCP read error on response\n", 36 );
              close_connection( control );
              return -1;
            }
            }
            while ( continuation_response == -1 );
            if ( result == 421 )
            {
              if ( WWW_TraceFlag == 0 )
              {
                close_connection( control );
                return -1;
              }
              fprintf( TraceFP( ), "HTFTP: They close so we close socket %d\n", control->socket );
              close_connection( control );
              return -1;
            }
            else
            {
              if ( result == 255 && server_type == CMS_SERVER && ( strncasecomp( cmd, "CWD", 3 ) == 0 || strcasecomp( cmd, "CDUP" ) == 0 ) )
                result = 555;
              return ( (/*HI*/int)( 0x51eb851f * result ) >> 5 ) - ( result >> 31 );
            }
          }
        }
      }
      else
      if ( interrupted_in_htgetcharacter )
      {
        if ( WWW_TraceFlag == 0 )
        {
          close( control->socket );
          control->socket = -1;
          return -29998;
        }
        fprintf( TraceFP( ), "HTFTP: Interrupted in HTGetCharacter, apparently.\n" );
        close( control->socket );
        control->socket = -1;
        return -29998;
      }
      else
    }
    while ( ich != -1 );
  }
  }
  while ( continuation_response == -1 );
}
}
int send_cmd_1( char *verb )
{
  char command[80];
  sprintf( command, "%.*s%c%c", 76, verb, 13, 10 );
  response( command );
  return response( command );
}
int send_cmd_2( char *verb, char *param )
{
  char *command = 0;
  int status;
  HTSprintf0( &command, "%s %s%c%c", verb, param, 13, 10 );
  status = response( command );
  if ( command )
  {
    free( command );
    command = 0;
  }
  return status;
}
int set_mac_binary( eServerType ServerType )
{
  return response( "MACB E\r\n" ) == 2;
}
void get_ftp_pwd( eServerType *ServerType, BOOLEAN *UseList )
{
  char *cp;
  int status = response( "PWD\r\n" );
  if ( status >= 0 )
  {
    cp = strchr( &response_text[5], '"' );
    if ( cp )
      cp[0] = 0;
    if ( ServerType[0] == TCPC_SERVER )
    {
      ServerType[0] = response_text[5] == '/' ? NCSA_SERVER : TCPC_SERVER;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFTP: Treating as %s server.\n", ServerType[0] == NCSA_SERVER ? "NCSA" : "TCPC" );
      }
    }
    else
    if ( response_text[5] == '/' )
    {
      if ( set_mac_binary( ServerType[0] ) )
      {
        ServerType[0] = NCSA_SERVER;
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "HTFTP: Treating as NCSA server.\n" );
      }
      else
      {
        ServerType[0] = UNIX_SERVER;
        UseList[0] = 1;
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "HTFTP: Treating as Unix server.\n" );
      }
    }
    else
    {
      if ( response_text[ strlen( response_text ) - 1 ] == ']' )
      {
        ServerType[0] = VMS_SERVER;
        UseList[0] = 1;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Treating as VMS server.\n" );
        }
      }
      else
      {
        ServerType[0] = GENERIC_SERVER;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Treating as Generic server.\n" );
        }
      }
    }
    set_mac_binary( ServerType[0] );
  }
  return;
}
void set_unix_dirstyle( eServerType *ServerType, BOOLEAN *UseList )
{
  char *cp;
  int status = response( "SITE DIRSTYLE\r\n" );
  if ( status != 2 )
  {
    ServerType[0] = GENERIC_SERVER;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFTP: DIRSTYLE failed, treating as Generic server.\n" );
    }
  }
  else
  {
    UseList[0] = 1;
    cp = strstr( &response_text[4], "MSDOS" );
    if ( cp == 0 || strstr( cp, " off" ) == 0 )
    {
      response( "SITE DIRSTYLE\r\n" );
    }
  }
  return;
}
int get_connection( char *arg, HTParentAnchor *anchor )
{
  static BOOLEAN firstuse = 1;
  int status;
  char *command = 0;
  connection *con;
  char *username = 0;
  char *password = 0;
  if ( firstuse )
    firstuse = 0;
  if ( control )
  {
    if ( control->socket != -1 )
      close( control->socket );
    con = control;
    con->addr = 0;
    con->binary = 0;
  }
  else
  {
    con = calloc( 1, sizeof( connection ) );
    if ( con == 0 )
      outofmem( "../../../WWW/Library/Implementation/HTFTP.c", "get_connection" );
  }
  con->socket = -1;
  if ( arg == 0 )
  {
    return -1;
  }
  if ( arg[0] == 0 )
  {
    return -1;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "get_connection(%s)\n", arg );
  }
{
  char *p1 = HTParse( arg, "", 8 );
  char *p2 = strrchr( p1, '@' );
  char *pw = 0;
  if ( p2 )
  {
    username = p1;
    p2[0] = 0;
    p1 = &p2[1];
    pw = strchr( username, ':' );
    if ( pw )
    {
      pw[0] = 0;
      pw++;
      password = HTUnEscape( pw );
    }
    if ( username[0] )
      HTUnEscape( username );
    if ( password == 0 )
    {
      char *tmp = 0;
      HTSprintf0( &tmp, "%s@%s", username, p1 );
      if ( last_username_and_host == 0 || strcmp( tmp, last_username_and_host ) || user_entered_password == 0 )
      {
        HTSACopy( &last_username_and_host, tmp );
        HTSprintf0( &tmp, gettext( "Enter password for user %s@%s:" ), username, p1 );
        if ( user_entered_password )
        {
          free( user_entered_password );
          user_entered_password = 0;
        }
        user_entered_password = HTPromptPassword( tmp );
      }
      password = user_entered_password;
      if ( tmp )
      {
        free( tmp );
      }
    }
  }
  if ( username == 0 && p1 )
  {
    free( p1 );
  }
  status = HTDoConnect( arg, "FTP", 21, &con->socket );
  if ( status < 0 )
  {
    if ( status == -29998 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFTP: Interrupted on connect\n" );
      }
    }
    else
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFTP: Unable to connect to remote host for `%s'.\n", arg );
    }
    if ( status == -29998 )
    {
      mustshow = 1;
      HTProgress( gettext( "Connection interrupted." ) );
      status = -29999;
    }
    else
    {
      HTAlert( gettext( "Unable to connect to FTP host." ) );
    }
    if ( con->socket != -1 )
      close( con->socket );
    if ( username )
    {
      free( username );
      username = 0;
    }
    if ( control == con )
      control = 0;
    if ( con )
    {
      free( con );
      con = 0;
    }
    return status;
  }
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "FTP connected, socket %d  control %p\n", con->socket, con );
    }
    control = con;
    HTInitInput( control->socket );
    init_help_message_cache( );
    status = response( 0 );
    if ( status == -29998 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFTP: Interrupted at beginning of login.\n" );
      }
      mustshow = 1;
      HTProgress( gettext( "Connection interrupted." ) );
      close( control->socket );
      control->socket = -1;
      return -29998;
    }
    else
    {
      server_type = GENERIC_SERVER;
      if ( status == 2 )
      {
        char *cp;
        if ( strlen( response_text ) > 4 )
        {
          cp = strstr( response_text, " awaits your command" );
          if ( cp == 0 )
          {
            cp = strstr( response_text, " ready." );
            if ( cp == 0 )
            {
              cp = &response_text[4];
              if ( strncasecomp( cp, "NetPresenz", 10 ) == 0 )
                server_type = NETPRESENZ_SERVER;
            }
          }
          cp[0] = 0;
          cp = &response_text[4];
        }
        else
          cp = response_text;
        HTSACopy( &anchor->server, cp );
        status = send_cmd_2( "USER", "anonymous" );
        if ( status == -29998 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: Interrupted while sending username.\n" );
          }
          mustshow = 1;
          HTProgress( gettext( "Connection interrupted." ) );
          close( control->socket );
          control->socket = -1;
          return -29998;
        }
      }
      if ( status == 3 )
      {
        if ( password )
          HTSprintf0( &command, "PASS %s%c%c", password, 13, 10 );
        else
        {
          char *the_address;
          char *user = 0;
          char *host = 0;
          char *cp;
          the_address = anonftp_password;
          if ( the_address == 0 || the_address[0] == 0 )
            the_address = personal_mail_address;
          if ( the_address == 0 || the_address[0] == 0 )
          {
            the_address = LYGetEnv( "USER" );
          }
          if ( the_address == 0 || the_address[0] == 0 )
            the_address = "WWWuser";
          HTSACopy( &user, the_address );
          cp = strchr( user, '@' );
          if ( cp )
          {
            cp[0] = 0;
            cp++;
            if ( cp[0] == 0 )
            {
              host = HTHostName( );
            }
            else
              host = cp;
          }
          else
          {
            host = HTHostName( );
          }
          if ( host == 0 || strchr( host, '.' ) == 0 )
            host = "";
          HTSprintf0( &command, "PASS %s@%s%c%c", user, host, 13, 10 );
          if ( user )
          {
            free( user );
          }
        }
        status = response( command );
        if ( command )
        {
          free( command );
          command = 0;
        }
        if ( status == -29998 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: Interrupted while sending password.\n" );
          }
          mustshow = 1;
          HTProgress( gettext( "Connection interrupted." ) );
          close( control->socket );
          control->socket = -1;
          return -29998;
        }
      }
      if ( username )
      {
        free( username );
        username = 0;
      }
      if ( status == 3 )
      {
        status = send_cmd_1( "ACCT noaccount" );
        if ( status == -29998 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: Interrupted while sending password.\n" );
          }
          mustshow = 1;
          HTProgress( gettext( "Connection interrupted." ) );
          close( control->socket );
          control->socket = -1;
          return -29998;
        }
      }
      if ( status != 2 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Login fail: %s", response_text );
        }
        return -1;
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Logged in.\n" );
        }
        if ( server_type != NETPRESENZ_SERVER )
          server_type = GENERIC_SERVER;
        use_list = 0;
        status = response( "SYST\r\n" );
        if ( status == 2 )
        {
          if ( strncmp( &response_text[4], "UNIX Type: L8 MAC-OS MachTen", 28 ) == 0 )
          {
            server_type = MACHTEN_SERVER;
            use_list = 1;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTFTP: Treating as MachTen server.\n" );
            }
          }
          else
          {
            if ( strstr( &response_text[4], "UNIX" ) || strstr( &response_text[4], "Unix" ) )
            {
              server_type = UNIX_SERVER;
              unsure_type = 0;
              use_list = 1;
              if ( WWW_TraceFlag == 0 )
              {
                return con->socket;
              }
              fprintf( TraceFP( ), "HTFTP: Treating as Unix server.\n" );
            }
            else
            {
              if ( strstr( &response_text[4], "MSDOS" ) )
              {
                server_type = MSDOS_SERVER;
                use_list = 1;
                if ( WWW_TraceFlag == 0 )
                {
                  return con->socket;
                }
                fprintf( TraceFP( ), "HTFTP: Treating as MSDOS (Unix emulation) server.\n" );
              }
              else
              {
                if ( strncmp( &response_text[4], "VMS", 3 ) == 0 )
                {
                  char *tilde = strstr( arg, "/~" );
                  use_list = 1;
                  if ( tilde && tilde[2] && strstr( &response_text[4], "MadGoat" ) )
                  {
                    server_type = UNIX_SERVER;
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTFTP: Treating VMS as UNIX server.\n" );
                    }
                  }
                  else
                  {
                    server_type = VMS_SERVER;
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTFTP: Treating as VMS server.\n" );
                    }
                  }
                }
                else
                {
                  if ( strncmp( &response_text[4], "VM/CMS", 6 ) == 0 || strncmp( &response_text[4], "VM ", 3 ) == 0 )
                  {
                    server_type = CMS_SERVER;
                    use_list = 1;
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTFTP: Treating as CMS server.\n" );
                    }
                  }
                  else
                  {
                    if ( strncmp( &response_text[4], "DCTS", 4 ) == 0 )
                    {
                      server_type = DCTS_SERVER;
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTFTP: Treating as DCTS server.\n" );
                      }
                    }
                    else
                    {
                      if ( strstr( &response_text[4], "MAC-OS TCP/Connect II" ) )
                      {
                        server_type = TCPC_SERVER;
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "HTFTP: Looks like a TCPC server.\n" );
                        }
                        get_ftp_pwd( &server_type, &use_list );
                        unsure_type = 1;
                      }
                      else
                      if ( server_type == NETPRESENZ_SERVER )
                      {
                        use_list = 1;
                        set_mac_binary( server_type );
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "HTFTP: Treating as NetPresenz (MACOS) server.\n" );
                        }
                      }
                      else
                      {
                        if ( strncmp( &response_text[4], "MACOS Peter's Server", 20 ) == 0 )
                        {
                          server_type = PETER_LEWIS_SERVER;
                          use_list = 1;
                          set_mac_binary( server_type );
                          if ( WWW_TraceFlag )
                          {
                            fprintf( TraceFP( ), "HTFTP: Treating as Peter Lewis (MACOS) server.\n" );
                          }
                        }
                        else
                        {
                          if ( strncmp( &response_text[4], "Windows_NT", 10 ) == 0 )
                          {
                            server_type = WINDOWS_NT_SERVER;
                            if ( WWW_TraceFlag )
                            {
                              fprintf( TraceFP( ), "HTFTP: Treating as Window_NT server.\n" );
                            }
                            set_unix_dirstyle( &server_type, &use_list );
                          }
                          else
                          {
                            if ( strncmp( &response_text[4], "Windows2000", 11 ) == 0 )
                            {
                              server_type = WINDOWS_2K_SERVER;
                              if ( WWW_TraceFlag )
                              {
                                fprintf( TraceFP( ), "HTFTP: Treating as Window_2K server.\n" );
                              }
                              set_unix_dirstyle( &server_type, &use_list );
                            }
                            else
                            {
                              if ( strncmp( &response_text[4], "MS Windows", 10 ) == 0 )
                              {
                                server_type = MS_WINDOWS_SERVER;
                                use_list = 1;
                                if ( WWW_TraceFlag == 0 )
                                {
                                  return con->socket;
                                }
                                fprintf( TraceFP( ), "HTFTP: Treating as MS Windows server.\n" );
                              }
                              else
                              {
                                if ( strncmp( &response_text[4], "MACOS AppleShare IP FTP Server", 30 ) == 0 )
                                {
                                  server_type = APPLESHARE_SERVER;
                                  use_list = 1;
                                  set_mac_binary( server_type );
                                  if ( WWW_TraceFlag == 0 )
                                  {
                                    return con->socket;
                                  }
                                  fprintf( TraceFP( ), "HTFTP: Treating as AppleShare server.\n" );
                                }
                                else
                                {
                                  server_type = GENERIC_SERVER;
                                  if ( WWW_TraceFlag )
                                  {
                                    fprintf( TraceFP( ), "HTFTP: Ugh!  A Generic server.\n" );
                                  }
                                  get_ftp_pwd( &server_type, &use_list );
                                  unsure_type = 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
          get_ftp_pwd( &server_type, &use_list );
      }
    }
  }
}
}
void reset_master_socket( void )
{
  have_socket = 0;
  return;
}
void set_master_socket( int value )
{
  have_socket = ~value >> 31;
  if ( have_socket )
  {
    master_socket = value;
  }
  return;
}
int close_master_socket( void )
{
  int status;
  if ( have_socket )
    open_sockets.fds_bits[ master_socket >> 5 ] &= ~( 1 << master_socket );
  status = close( (int)master_socket );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFTP: Closed master socket %u\n", master_socket );
  }
  reset_master_socket( );
  return status < 0 ? HTInetStatus( gettext( "close master socket" ) ) : status;
}
int get_listen_socket( void )
{
  int eax;
  struct sockaddr_storage soc_address;
  struct sockaddr_in *soc_in = &soc_address.ss_family;
  int af;
  socklen_t slen;
  int new_socket;
{
  unsigned int __i;
  fd_set *__arr = &open_sockets;
  __i = 0;
  for ( ; __i <= 31; __i++ )
  {
    __arr->fds_bits[0] = 0;
    // __i++;
  }
  num_sockets = 0;
  slen = 128;
  if ( getsockname( control->socket, &soc_address.ss_family, &slen ) < 0 )
  {
  }
  else
  {
    af = soc_address.ss_family;
    memset( &soc_address.ss_family, 0, 128 );
    new_socket = socket( af, 1, 6 );
    if ( new_socket < 0 )
    {
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTFTP: Opened master socket number %d\n", new_socket );
      }
      memset( &soc_address.ss_family, 0, 128 );
      soc_address.ss_family = af;
      if ( af != 2 && af != 10 )
        HTInetStatus( "AF" );
    {
      int status;
      socklen_t address_length = 128;
      status = getsockname( control->socket, &soc_address.ss_family, &address_length );
      if ( status < 0 )
      {
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: This host is %s\n", HTInetString( &soc_in->sin_family ) );
        }
        soc_in->sin_port = 0;
        status = bind( new_socket, &soc_address.ss_family, soc_address.ss_family == 10 ? 28 : 16 );
        if ( status < 0 )
        {
        }
        else
        {
          address_length = 128;
          status = getsockname( new_socket, &soc_address.ss_family, &address_length );
          if ( status < 0 )
          {
          }
          else
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTFTP: bound to port %d on %s\n", ntohs( soc_in->sin_port ), HTInetString( &soc_in->sin_family ) );
            }
            if ( have_socket )
              close_master_socket( );
            set_master_socket( new_socket );
            HTHostName( );
            if ( soc_address.ss_family == 2 )
              sprintf( port_command, "PORT %d,%d,%d,%d,%d,%d%c%c", soc_in->sin_addr.s_addr/*.1_1of4*/, soc_in->sin_addr.s_addr/*.2_2of4*/, soc_in->sin_addr.s_addr/*.3_3of4*/, soc_in->sin_addr.s_addr/*.4_4of4*/, soc_in->sin_port/*.1_1of2*/, soc_in->sin_port/*.2_2of2*/, 13, 10 );
            else
            if ( soc_address.ss_family == 10 )
            {
              char hostbuf[64];
              char portbuf[64];
              getnameinfo( &soc_address.ss_family, soc_address.ss_family == 10 ? 28 : 16, hostbuf, 64, portbuf, 64, 3 );
              sprintf( port_command, "EPRT |%d|%s|%s|%c%c", 2, hostbuf, portbuf, 13, 10 );
            }
            else
              sprintf( port_command, "JUNK%c%c", 13, 10 );
          {
            int status = listen( (int)master_socket, 1 );
            if ( status < 0 )
            {
              reset_master_socket( );
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "TCP: Master socket(), bind() and listen() all OK\n" );
              }
              open_sockets.fds_bits[ master_socket >> 5 ] |= 1 << master_socket;
              if ( num_sockets < master_socket + 1 )
                num_sockets = master_socket + 1;
              return (int)master_socket;
            }
          }
          }
        }
      }
    }
    }
  }
}
}
void set_years_and_date( void )
{
  int eax;
  char day[8], month[8], date[12];
  time_t NowTime = time( 0 );
  int i;
  strncpy( day, ctime( &NowTime ) + 8, 2 );
  day[2] = 0;
  if ( day[0] == ' ' )
    day[0] = '0';
  strncpy( month, ctime( &NowTime ) + 4, 3 );
  month[3] = 0;
  i = 0;
  for ( ; i <= 11 && strcasecomp( month, months[ i ] ); i++ )
  {
    // i++;
  }
  i++;
  sprintf( date, "9999%02d%.2s", i, day );
  TheDate = atoi( date );
  strcpy( ThisYear, ctime( &NowTime ) + 20 );
  ThisYear[4] = 0;
  sprintf( LastYear, "%d", atoi( ThisYear ) + -1 );
  HaveYears = 1;
  return;
}
void free_entryinfo_struct_contents( EntryInfo *entry_info )
{
  if ( entry_info )
  {
    if ( entry_info->filename[0] )
    {
      free( &entry_info->filename[0] );
      *(int*)&entry_info->filename[0] = 0;
    }
    if ( entry_info->linkname )
    {
      free( &entry_info->linkname );
      *(int*)&entry_info->linkname = 0;
    }
    if ( entry_info->type )
    {
      free( &entry_info->type );
      *(int*)&entry_info->type = 0;
    }
    if ( entry_info->date == 0 )
    {
      return;
    }
    free( &entry_info->date );
    *(int*)&entry_info->date = 0;
  }
  return;
}
BOOLEAN is_ls_date( char *s )
{
  s++;
  if ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 1024 ) == 0 ) & 255 ) == 0 )
  {
    s++;
    if ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 1024 ) == 0 ) & 255 ) == 0 )
    {
      s++;
      if ( ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 1024 ) == 0 ) & 255 ) == 0 )
      {
        if ( s[0] != ' ' && s[0] != 1 )
        {
          s++;
          return 1;
        }
        else
        {
          s++;
          if ( s[0] != ' ' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 )
          {
            s++;
            return 1;
          }
          else
          {
            s++;
            s++;
            if ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 ) & 255 )
            {
              return 1;
            }
            else
            {
              s++;
              if ( ( s[0] != ' ' ) & 255 )
              {
                return 1;
              }
              else
              if ( s[0] != ' ' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 )
              {
                s++;
                return 1;
              }
              else
              {
                s++;
                s++;
                if ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 ) & 255 )
                {
                  return 1;
                }
                else
                if ( s[0] != ':' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 )
                {
                  s++;
                  return 1;
                }
                else
                {
                  s++;
                  s++;
                  if ( ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 ) & 255 )
                  {
                    return 1;
                  }
                  else
                  if ( s[0] != ' ' && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 2048 ) == 0 )
                  {
                    s++;
                    return 1;
                  }
                  else
                  {
                    s++;
                    s++;
                    if ( ( s[0] != ' ' ) & 255 )
                    {
                      return 1;
                    }
                    else
                    {
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
void parse_eplf_line( char *line, EntryInfo *info )
{
  static time_t base;
  static int flagbase;
  char *cp = line;
  char ct[26];
  unsigned long size;
  time_t secs;
  if ( flagbase == 0 )
  {
    struct tm t;
    t.tm_year = 70;
    t.tm_mon = 0;
    t.tm_mday = 0;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;
    t.tm_isdst = -1;
    base = mktime( &t.tm_sec );
    flagbase = 1;
    do
    {
      if ( cp[0] == 0 )
      {
        return;
      }
      switch ( cp[0] )
      {
      case 9:
        HTSACopy( &info->filename, &cp[1] );
        break;
      case 115:
        size = 0;
        while ( cp++, cp[0] && cp[0] != ',' )
        {
          size = ( size * 10 ) + cp[0] + -48;
        }
        info->size = size;
        break;
      case 109:
        secs = 0;
        while ( cp++, cp[0] && cp[0] != ',' )
        {
          secs = cp[0] + -48 + ( secs * 10 );
        }
        secs += base;
        strcpy( ct, ctime( &secs ) );
        ct[24] = 0;
        HTSACopy( &info->date, ct );
        break;
      case 47:
        HTSACopy( &info->type, gettext( "Directory" ) );
        if ( cp[0] )
        {
          cp++;
        }
        break;
      default:
        break;
        break;
      }
      return;
    }
    while ( ( cp[0] == ',' ) & 255 );
  }
}
void parse_ls_line( char *line, EntryInfo *entry_info )
{
  int i, j;
  int base = 1;
  int size_num = 0;
  i = strlen( line ) + -1;
  for ( ; i > 13 && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line[ i ] * 2 )) & 8192 ) == 0 || ( is_ls_date( &line[ i + -12 ] ) & 255 ) == 0 );  )
  {
    i += -1;
  }
  line[ i ] = 0;
  if ( i > 13 )
  {
    HTSACopy( &entry_info->date, &line[ i + -12 ] );
    if ( entry_info->date[4] == ' ' || entry_info->date[4] == '0' )
      entry_info->date[4] = 1;
    if ( entry_info->date[11] == ' ' )
    {
      j = 11;
      for ( ; j > 6;  )
      {
        entry_info->date[ j ] = entry_info->date[ j + -1 ];
        j += -1;
      }
    }
  }
  j = i + -14;
  for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( line[ j ] * 2 )) & 2048;  )
  {
    size_num += base * ( line[ j ] + -48 );
    base *= 10;
    j += -1;
  }
  entry_info->size = size_num;
  HTSACopy( &entry_info->filename, &line[ i + 1 ] );
  return;
}
void parse_dls_line( char *line, EntryInfo *entry_info, char **pspilledname )
{
  short j;
  int base = 1;
  int size_num = 0;
  int len;
  char *cps = 0;
  len = strlen( line );
  if ( len == 0 )
  {
    if ( pspilledname[0] )
    {
      free( pspilledname[0] );
      pspilledname[0] = 0;
    }
    entry_info->display = 0;
  }
  else
  {
    cps = LYSkipNonBlanks( line );
    if ( cps[0] == 0 )
    {
      HTSACopy( pspilledname, line );
      entry_info->display = 0;
    }
    else
    {
      if ( len <= 23 || line[23] != ' ' || ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line[0] * 2 )) & 8192 ) && pspilledname[0] == 0 ) )
      {
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line[0] * 2 )) & 8192 ) == 0 )
          cps[0] = 0;
        if ( pspilledname[0] && line[0] == 0 )
        {
          entry_info->filename[0] = pspilledname[0];
          pspilledname[0] = 0;
          if ( *(char*)(entry_info->filename[0] + strlen( &entry_info->filename[0] ) + -1) == '/' )
          {
            HTSACopy( &entry_info->type, gettext( "Directory" ) );
          }
          else
          {
            HTSACopy( &entry_info->type, "" );
          }
        }
        else
        {
          HTSACopy( &entry_info->filename, line );
          if ( cps && line != cps && cps[ -1 ] == '/' )
          {
            HTSACopy( &entry_info->type, gettext( "Directory" ) );
          }
          else
            HTSACopy( &entry_info->type, "" );
          if ( pspilledname[0] == 0 )
          {
            return;
          }
          free( pspilledname[0] );
          pspilledname[0] = 0;
        }
      }
      else
      {
        j = 22;
        if ( line[ j ] == '=' || line[ j ] == '-' )
        {
          HTSACopy( &entry_info->type, gettext( "Directory" ) );
        }
        else
        {
          for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( line[ j ] * 2 )) & 2048;  )
          {
            size_num += base * ( line[ j ] + -48 );
            base *= 10;
            j += -1;
          }
        }
        entry_info->size = size_num;
        cps = LYSkipBlanks( &line[23] );
        if ( !strncmp( cps, "-&gt; ", 3 ) && cps[3] && cps[3] != ' ' )
        {
          HTSACopy( &entry_info->type, gettext( "Symbolic Link" ) );
          HTSACopy( &entry_info->linkname, LYSkipBlanks( &cps[3] ) );
          *(int*)&entry_info->size = 0;
        }
        if ( j > 0 )
          line[ j ] = 0;
        LYTrimTrailing( line );
        len = strlen( line );
        if ( len == 0 && pspilledname[0] && pspilledname[0] )
        {
          line = pspilledname[0];
          len = strlen( pspilledname[0] );
        }
        if ( len > 0 && line[ len + -1 ] == '/' )
        {
          if ( len > 1 )
            line[ len + -1 ] = 0;
          if ( entry_info->type == 0 )
          {
            HTSACopy( &entry_info->type, gettext( "Directory" ) );
          }
        }
        HTSACopy( &entry_info->filename, line );
        if ( pspilledname[0] == 0 )
        {
          return;
        }
        free( pspilledname[0] );
        pspilledname[0] = 0;
      }
    }
  }
  return;
}
void parse_vms_dir_entry( char *line, EntryInfo *entry_info )
{
  int i, j;
  unsigned int ialloc;
  char *cp, *cpd, *cps, date[16];
  char *sp = " ";
  if ( line[0] )
  {
    cp = strchr( line, ';' );
    if ( cp == 0 )
      goto B2;
    else
    {
      cp[0] = 0;
      cp++;
      HTSACopy( &entry_info->filename, line );
      if ( strstr( &entry_info->filename[0], "READ" ) == 0 )
      {
        LYLowerCase( &entry_info->filename[0] );
        i = strlen( &entry_info->filename[0] );
      }
      else
      {
        i = ( strstr( &entry_info->filename[0], "READ" ) - entry_info->filename[0] ) + 4;
        if ( strncmp( entry_info->filename[0] + i, "ME", 2 ) == 0 )
        {
          i += 2;
          for ( ; *(char*)(entry_info->filename[0] + i) && *(char*)(entry_info->filename[0] + i) != '.'; i++ )
          {
            // i++;
          }
        }
        else
        {
          if ( strncmp( entry_info->filename[0] + i, ".ME", 3 ) == 0 )
          {
            i = strlen( &entry_info->filename[0] );
          }
          else
            i = 0;
        }
        LYLowerCase( entry_info->filename[0] + i );
      }
      i += -1;
      if ( i > 2 && *(char*)(entry_info->filename[0] + i) == 'z' && ( entry_info->filename == '.' || entry_info->filename == '_' ) )
      {
      }
      cps = &cp[ -1 ];
      for ( ; cps;  )
      {
        cps[0] = ' ';
      }
      i = 0;
      j = 1;
      cps = cp;
      while ( cps[ j ] )
      {
        if ( cps[ i ] == ' ' && cps[ j ] == ' ' )
        {
          j++;
        }
        else
        {
          i++;
          cps[ i ] = cps[ j ];
          j++;
        }
      }
      i++;
      cps[ i ] = 0;
      if ( HaveYears == 0 )
        set_years_and_date( );
      cpd = strchr( cp, '-' );
      if ( cpd && strlen( cpd ) > 9 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cpd[ -1 ] * 2 )) & 2048 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cpd[1] * 2 )) & 1024 ) && cpd[4] == '-' )
      {
        cpd[2] = cpd[2];
        cpd[3] = cpd[3];
        sprintf( date, "%.3s ", &cpd[1] );
        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cpd[ -2 ] * 2 )) & 2048 )
          sprintf( &date[4], "%.2s ", &cpd[ -2 ] );
        else
          sprintf( &date[4], "%c%.1s ", 1, &cpd[ -1 ] );
        if ( !strncmp( ThisYear, &cpd[5], 4 ) && strlen( cpd ) > 15 && cpd[12] == ':' )
          sprintf( &date[7], "%.5s", &cpd[10] );
        else
          sprintf( &date[7], " %.4s", &cpd[5] );
        HTSACopy( &entry_info->date, date );
      }
      cpd = strchr( cp, '/' );
      if ( cpd )
      {
        cps = cpd;
        for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cps[ -1 ] * 2 )) & 2048;  )
        {
          cps = &cps[ -1 ];
        }
        if ( cps < cpd )
          cpd[0] = 0;
        entry_info->size = atoi( cps );
        cps = &cpd[1];
        for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cps[0] * 2 )) & 2048; cps++ )
        {
          // cps++;
        }
        cps[0] = 0;
        ialloc = atoi( &cpd[1] );
        if ( entry_info->size <= ialloc )
          entry_info->size <<= '\t';
      }
      else
      {
        cps = strtok( cp, sp );
        if ( cps )
        {
          do
          {
            cps = strtok( 0, sp );
            if ( cps )
            {
              cpd = cps;
              for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cpd[0] * 2 )) & 2048; cpd++ )
              {
                // cpd++;
              }
            }
          }
          while ( cpd[0] );
          entry_info->size = atoi( cps ) << 9;
        }
      }
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "HTFTP: VMS filename: %s  date: %s  size: %u\n", &entry_info->filename[0], "", entry_info->size );
    }
  }
B2:;
  entry_info->display = 0;
}
void parse_ms_windows_dir_entry( char *line, EntryInfo *entry_info )
{
  char *cp = line;
  char *cps, *cpd, date[16];
  char *end = line + strlen( line );
  cp = LYSkipBlanks( cp );
  if ( cp[0] == 0 )
    entry_info->display = 0;
  else
  {
    cps = LYSkipNonBlanks( cp );
    cps[0] = 0;
    cps++;
    cpd = cps;
    HTSACopy( &entry_info->filename, cp );
    if ( cps < end )
    {
      cps = LYSkipBlanks( cps );
      cpd = LYSkipNonBlanks( cps );
      cpd[0] = 0;
      cpd++;
      if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cps[0] * 2 )) & 2048 )
      {
        entry_info->size = atoi( cps );
      }
      else
      {
        HTSACopy( &entry_info->type, gettext( "Directory" ) );
      }
    }
    else
      HTSACopy( &entry_info->type, "" );
    if ( HaveYears == 0 )
      set_years_and_date( );
    if ( cpd < end )
    {
      cpd = LYSkipBlanks( cpd );
      if ( strlen( cpd ) > 17 )
      {
        cpd[6] = 0;
        cpd[11] = 0;
        cpd[17] = 0;
        if ( strcmp( ThisYear, &cpd[7] ) )
          sprintf( date, "%.6s  %.4s", cpd, &cpd[7] );
        else
          sprintf( date, "%.6s %.5s", cpd, &cpd[12] );
        HTSACopy( &entry_info->date, date );
        if ( entry_info->date[4] == ' ' || entry_info->date[4] == '0' )
          entry_info->date[4] = 1;
      }
    }
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "HTFTP: MS Windows filename: %s  date: %s  size: %u\n", &entry_info->filename[0], "", entry_info->size );
  }
}
void parse_cms_dir_entry( char *line, EntryInfo *entry_info )
{
  char *cp = line;
  char *cps, *cpd, date[16];
  char *end = line + strlen( line );
  int RecordLength = 0;
  int Records = 0;
  int i;
  cp = LYSkipBlanks( cp );
  if ( cp[0] == 0 )
    entry_info->display = 0;
  else
  {
    cps = LYSkipNonBlanks( cp );
    cps[0] = 0;
    cps++;
    HTSACopy( &entry_info->filename, cp );
    if ( strchr( &entry_info->filename[0], '.' ) == 0 )
    {
      cp = LYSkipBlanks( cps );
      if ( cp[0] == 0 )
      {
        if ( entry_info->filename[0] )
        {
          free( &entry_info->filename[0] );
          *(int*)&entry_info->filename[0] = 0;
        }
        if ( entry_info->type )
        {
          free( &entry_info->type );
          *(int*)&entry_info->type = 0;
        }
        entry_info->display = 0;
      }
      else
      {
        cps = LYSkipNonBlanks( cp );
        cps[0] = 0;
        cps++;
        if ( !strcasecomp( cp, "DIR" ) && cp - line > 17 )
        {
          HTSACopy( &entry_info->type, gettext( "Directory" ) );
          *(int*)&entry_info->size = 0;
        }
        else
        {
          cp = &cp[ -1 ];
          cp[0] = '.';
          HTSACat( &entry_info->filename, cp );
          cp = cps;
          if ( cp < end )
          {
            cp = LYSkipBlanks( cp );
            cps = LYSkipNonBlanks( cp );
            cps[0] = 0;
            cps++;
          }
        }
        cp = cps;
        if ( cp < end )
        {
          cp = LYSkipBlanks( cp );
          cps = LYSkipNonBlanks( cp );
          cps[0] = 0;
          cps++;
          if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 )
          {
            RecordLength = atoi( cp );
          }
        }
        cp = cps;
        if ( cps < end )
        {
          cp = LYSkipBlanks( cp );
          cps = LYSkipNonBlanks( cp );
          cps[0] = 0;
          cps++;
          if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 )
          {
            Records = atoi( cp );
          }
          if ( Records > 0 && RecordLength > 0 )
            entry_info->size = Records * RecordLength;
        }
        if ( HaveYears == 0 )
          set_years_and_date( );
        cpd = cps;
        if ( cps < end )
        {
          cps = strchr( cpd, ':' );
          if ( cps && cps < end[ -3 ] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cps[1] * 2 )) & 2048 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cps[2] * 2 )) & 2048 ) && cps[3] == ':' )
          {
            cps += 3;
            cps[0] = 0;
            if ( cps - cpd > 13 )
            {
              cpd = &cps[ -14 ];
              cpd[2] = 0;
              cpd[5] = 0;
              cpd[8] = 0;
              cps = &cps[ -5 ];
              if ( cpd[0] == ' ' )
                cpd[0] = '0';
              i = atoi( cpd ) + -1;
              sprintf( date, "%.3s %.2s", months[ i ], &cpd[3] );
              if ( date[4] == '0' )
                date[4] = ' ';
              cpd += 6;
              if ( strcmp( &ThisYear[2], cpd ) )
              {
                if ( atoi( cpd ) <= 69 )
                  sprintf( &date[6], "  20%.2s", cpd );
                else
                  sprintf( &date[6], "  19%.2s", cpd );
              }
              else
              {
                cps[2] = 0;
                i = atoi( cps );
                sprintf( &date[6], " %02d:%.2s", i, &cps[3] );
              }
              HTSACopy( &entry_info->date, date );
              if ( entry_info->date[4] == ' ' || entry_info->date[4] == '0' )
                entry_info->date[4] = 1;
            }
          }
        }
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "HTFTP: VM/CMS filename: %s  date: %s  size: %u\n", &entry_info->filename[0], "", entry_info->size );
      }
    }
  }
}
EntryInfo *parse_dir_entry( char *entry, BOOLEAN *first, char **pspilledname )
{
  EntryInfo *entry_info;
  int i;
  int len;
  BOOLEAN remove_size = 0;
  char *cp;
  entry_info = malloc( ( 1 ) * sizeof( EntryInfo ) );
  if ( entry_info == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTFTP.c", "parse_dir_entry" );
  *(int*)&entry_info->filename[0] = 0;
  *(int*)&entry_info->linkname = 0;
  *(int*)&entry_info->type = 0;
  *(int*)&entry_info->date = 0;
  *(int*)&entry_info->size = 0;
  entry_info->display = 1;
  switch ( server_type )
  {
  case DLS_SERVER:
    if ( first[0] )
    {
      len = strlen( entry );
      if ( len == 0 || entry[0] == ' ' || ( len > 23 && entry[23] != ' ' ) || ( len <= 23 && strchr( entry, ' ' ) ) )
      {
        server_type = UNIX_SERVER;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Falling back to treating as Unix server.\n" );
        }
      }
      else
        first[0] = 0;
    }
    if ( server_type == DLS_SERVER )
    {
      parse_dls_line( entry, entry_info, pspilledname );
      if ( entry_info->filename[0] == 0 || entry_info->filename == 0 )
      {
        entry_info->display = 0;
        return entry_info;
      }
      if ( strcmp( &entry_info->filename[0], ".." ) == 0 || strcmp( &entry_info->filename[0], "." ) == 0 )
        entry_info->display = 0;
      if ( entry_info->type && entry_info->type[0] == 0 )
      {
        if ( entry_info->type )
        {
          free( &entry_info->type );
          *(int*)&entry_info->type = 0;
        }
        return entry_info;
      }
      else
      {
        if ( remove_size && entry_info->size )
          *(int*)&entry_info->size = 0;
        if ( entry_info->filename[0] && strlen( &entry_info->filename[0] ) > 3 )
        {
          cp = strrchr( &entry_info->filename[0], '.' );
          if ( cp && strncasecomp( cp, ".me", 3 ) == 0 && ( cp[3] == 0 || cp[3] == ';' ) && ( server_type != UNIX_SERVER || ( entry_info->filename[0] + 3 < cp && strncasecomp( &cp[ -4 ], "read.me", 7 ) == 0 ) ) )
            HTSACopy( &entry_info->type, "text/plain" );
        }
        if ( entry_info->type == 0 )
        {
          char *cp2;
          HTFormat format = HTFileFormat( &entry_info->filename[0], &encoding, &cp2 );
          HTAtom *encoding;
          if ( cp2 == 0 )
          {
            if ( strncmp( &format->name, "application", 11 ) == 0 )
            {
              cp2 = &format->name[12];
              if ( strncmp( cp2, "x-", 2 ) == 0 )
                cp2 += 2;
            }
            else
              cp2 = &format->name;
          }
          HTSACopy( &entry_info->type, cp2 );
        }
        return entry_info;
      }
    }
    else
  default:
    if ( entry[0] == '+' )
      parse_eplf_line( entry, entry_info );
    else
    {
      len = strlen( entry );
      if ( first[0] )
      {
        if ( strcmp( entry, "can not access directory ." ) == 0 )
        {
          entry_info->display = 0;
          return entry_info;
        }
        first[0] = 0;
        if ( !strncmp( entry, "total ", 6 ) || strstr( entry, "not available" ) )
        {
          entry_info->display = 0;
          return entry_info;
        }
        if ( unsure_type )
        {
          server_type = GENERIC_SERVER;
          entry_info->display = 0;
          return entry_info;
        }
      }
      if ( entry[0] == 'D' )
      {
        HTSACopy( &entry_info->type, gettext( "Directory" ) );
        remove_size = 1;
      }
      else
      if ( entry[0] == 'l' )
      {
        HTSACopy( &entry_info->type, gettext( "Symbolic Link" ) );
        remove_size = 1;
        i = len + -1;
        for ( ; i > 3 && ( !( *(short*)(*(int*)(__ctype_b_loc( )) + ( entry[ i ] * 2 )) & 8192 ) || entry[ i + -1 ] != '>' || entry[ i + -2 ] != '-' || entry[ i + -3 ] != ' ' );  )
        {
          i += -1;
        }
        if ( i > 3 )
        {
          entry[ i + -3 ] = 0;
          len = i + -3;
          HTSACopy( &entry_info->linkname, LYSkipBlanks( &entry[ i ] ) );
        }
      }
      parse_ls_line( entry, entry_info );
      if ( strcmp( &entry_info->filename[0], ".." ) == 0 || strcmp( &entry_info->filename[0], "." ) == 0 )
        entry_info->display = 0;
    }
    break;
  case VMS_SERVER:
    parse_vms_dir_entry( entry, entry_info );
    if ( entry_info->display == 0 )
    {
      return entry_info;
    }
    len = strlen( &entry_info->filename[0] );
    if ( len > 4 && strcmp( entry_info->filename[0] + len + -4, ".dir" ) == 0 )
    {
      entry_info->filename = 0;
      HTSACopy( &entry_info->type, gettext( "Directory" ) );
      remove_size = 1;
    }
    break;
  case MS_WINDOWS_SERVER:
    parse_ms_windows_dir_entry( entry, entry_info );
    if ( entry_info->display == 0 )
    {
      return entry_info;
    }
    if ( entry_info->type && entry_info->type[0] == 0 )
    {
      if ( entry_info->type )
      {
        free( &entry_info->type );
        *(int*)&entry_info->type = 0;
      }
      return entry_info;
    }
    break;
  case CMS_SERVER:
    parse_cms_dir_entry( entry, entry_info );
    if ( entry_info->display == 0 )
    {
      return entry_info;
    }
    if ( entry_info->type && entry_info->type[0] == 0 )
    {
      if ( entry_info->type )
      {
        free( &entry_info->type );
        *(int*)&entry_info->type = 0;
      }
      return entry_info;
    }
    break;
  case TCPC_SERVER:
  case NCSA_SERVER:
    HTSACopy( &entry_info->filename, entry );
    len = strlen( entry );
    if ( entry[ len + -1 ] == '/' )
    {
      entry[ len + -1 ] = 0;
      HTSACopy( &entry_info->type, gettext( "Directory" ) );
      remove_size = 1;
    }
    break;
  case GENERIC_SERVER:
  case DCTS_SERVER:
    HTSACopy( &entry_info->filename, entry );
    return entry_info;
    break;
  }
}
int compare_EntryInfo_structs( EntryInfo *entry1, EntryInfo *entry2 )
{
  int eax;
  int i, status;
  char date1[16], date2[16], time1[8], time2[8], month[4];
  switch ( HTfileSortMethod )
  {
  case 2:
    if ( entry2->size == entry1->size )
    {
    }
    else
    {
      if ( entry2->size < entry1->size )
        return 1;
      else
        return -1;
    }
    break;
  case 1:
    if ( entry1->type && entry2->type )
    {
      status = strcasecomp( &entry1->type, &entry2->type );
      if ( status )
        return status;
    }
    break;
  case 3:
    if ( entry1->date && entry2->date )
    {
      if ( strlen( &entry1->date ) != 12 || strlen( &entry2->date ) != 12 )
      {
      }
      else
      {
        if ( HaveYears == 0 )
          set_years_and_date( );
        if ( entry1->date[9] == ':' )
        {
          memcpy( date1, "9999", 5 );
          strcpy( time1, &entry1->date[7] );
          if ( time1[0] == ' ' )
            time1[0] = '0';
        }
        else
        {
          strcpy( date1, &entry1->date[8] );
          memcpy( time1, "00:00", 6 );
        }
        strncpy( month, &entry1->date, 3 );
        month[3] = 0;
        i = 0;
        for ( ; i <= 11 && strcasecomp( month, months[ i ] ); i++ )
        {
          // i++;
        }
        i++;
        sprintf( month, "%02d", i );
        strcat( date1, month );
        strncat( date1, &entry1->date[4], 2 );
        date1[8] = 0;
        if ( date1[6] == ' ' || date1[6] == 1 )
          date1[6] = '0';
        if ( date1[0] == '9' && TheDate + 1 < atoi( date1 ) )
        {
          i = 0;
          for ( ; i <= 3; i++ )
          {
            date1[ i ] = LastYear[ i ];
            // i++;
          }
        }
        strcat( date1, time1 );
        if ( entry2->date[9] == ':' )
        {
          memcpy( date2, "9999", 5 );
          strcpy( time2, &entry2->date[7] );
          if ( time2[0] == ' ' )
            time2[0] = '0';
        }
        else
        {
          strcpy( date2, &entry2->date[8] );
          memcpy( time2, "00:00", 6 );
        }
        strncpy( month, &entry2->date, 3 );
        month[3] = 0;
        i = 0;
        for ( ; i <= 11 && strcasecomp( month, months[ i ] ); i++ )
        {
          // i++;
        }
        i++;
        sprintf( month, "%02d", i );
        strcat( date2, month );
        strncat( date2, &entry2->date[4], 2 );
        date2[8] = 0;
        if ( date2[6] == ' ' || date2[6] == 1 )
          date2[6] = '0';
        if ( date2[0] == '9' && TheDate + 1 < atoi( date2 ) )
        {
          i = 0;
          for ( ; i <= 3; i++ )
          {
            date2[ i ] = LastYear[ i ];
            // i++;
          }
        }
        strcat( date2, time2 );
        status = strcasecomp( date2, date1 );
        if ( status )
          return status;
      }
    }
    break;
  default:
    break;
  }
}
int read_directory( HTParentAnchor *parent, char *address, HTFormat format_out, HTStream *sink )
{
  int eax;
  int status;
  BOOLEAN WasInterrupted = 0;
  HTStructured *target = HTML_new( parent, format_out, &sink[0] );
  static HTStructuredClass targetClass;
  char *filename = HTParse( address, "", 5 );
  EntryInfo *entry_info;
  BOOLEAN first = 1;
  char string_buffer[64];
  char *lastpath = 0;
  BOOLEAN need_parent_link = 0;
  BOOLEAN tildeIsTop = 0;
  targetClass.name = (char*)target[0]._HTStructured;
  targetClass._free = &target[0]._HTStructured;
  targetClass._abort = &target[0]._HTStructured;
  targetClass.put_character = &target[0]._HTStructured;
  targetClass.put_string = &target[0]._HTStructured;
  targetClass.put_block = &target[0]._HTStructured;
  targetClass.start_element = &target[0]._HTStructured;
  targetClass.end_element = &target[0]._HTStructured;
  targetClass.put_entity = &target[0]._HTStructured;
  mustshow = 1;
  HTProgress( gettext( "Receiving FTP directory." ) );
  HaveYears = 0;
  if ( server_type == VMS_SERVER )
    tildeIsTop = 1;
  need_parent_link = HTDirTitles( target, parent, format_out, tildeIsTop );
  data_read_pointer = data_write_pointer = data_buffer;
  if ( filename[0] == 0 )
    HTSACopy( &lastpath, "/" );
  else
  {
    if ( strcmp( filename, "/" ) == 0 )
      HTSACopy( &lastpath, "/foo/.." );
    else
    {
      char *p = strrchr( filename, '/' );
      char *cp;
      if ( server_type == CMS_SERVER )
        HTSACopy( &lastpath, filename );
      else
        HTSACopy( &lastpath, &p[1] );
      cp = strrchr( lastpath, ';' );
      if ( cp && strncasecomp( &cp[1], "type=", 5 ) == 0 )
      {
        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 512 )
        {
          if ( toupper( cp[6] ) == 68 )
            *ebp_172 = 0;
        }
        else
        if ( cp[6] == 'D' )
          continue;
        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 512 )
        {
          if ( toupper( cp[6] ) == 65 )
            continue;
        }
        else
        if ( cp[6] == 'A' )
          continue;
        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[6] * 2 )) & 512 )
        {
          if ( toupper( cp[6] ) == 73 )
            continue;
        }
        else
        {
          if ( cp[6] == 'I' )
            continue;
        }
      }
    }
  }
  if ( filename )
  {
    free( filename );
    filename = 0;
  }
{
  HTBTree *bt = HTBTree_new( &compare_EntryInfo_structs );
  int ic;
  HTChunk *chunk = HTChunkCreate( 128 );
  int BytesReceived = 0;
  int BytesReported = 0;
  char NumBytes[64];
  char *spilledname = 0;
  targetClass.put_character( target, '\n' );
  ic = 0;
  while ( ic != -1 )
  {
    HTChunkClear( chunk );
    if ( HTCheckForInterrupt( ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "read_directory: interrupted after %d bytes\n", BytesReceived );
      }
      WasInterrupted = 1;
      if ( BytesReceived == 0 )
      {
        targetClass._free( target );
        HTBTreeAndObject_free( bt );
        if ( spilledname )
        {
          free( spilledname );
          spilledname = 0;
        }
        return -29998;
      }
    }
    else
    {
      interrupted_in_next_data_char = 0;
      while ( 1 )
      {
        ic = next_data_char( );
        while ( interrupted_in_next_data_char == 0 )
        {
          if ( (unsigned char)( ic ) == '\r' || (unsigned char)( ic ) == '\n' )
          {
            if ( chunk->size )
            {
              if ( server_type == VMS_SERVER )
              {
                if ( data_read_pointer < data_write_pointer && data_read_pointer[1] == ' ' )
                {
                  data_read_pointer++;
                }
                else
                if ( data_write_pointer <= data_read_pointer )
                {
                  status = HTDoRead( data_soc, data_buffer, 2048 );
                  if ( status == -29998 )
                  {
                    interrupted_in_next_data_char = 1;
                  }
                  else
                  if ( status <= 0 )
                    ic = -1;
                  else
                  {
                    data_write_pointer = &data_buffer[ status ];
                    data_read_pointer = data_buffer;
                    if ( data_read_pointer[0] == ' ' )
                    {
                      data_read_pointer++;
                    }
                  }
                }
              }
            }
          }
          else
          if ( ic != -1 )
          {
            HTChunkPutc( chunk, ic );
            break;
          }
          HTChunkTerminate( chunk );
          BytesReceived += chunk->size;
          if ( BytesReported + 1024 < BytesReceived )
          {
            sprintf( NumBytes, gettext( "Transferred %d bytes" ), BytesReceived );
            HTProgress( NumBytes );
            BytesReported = BytesReceived;
          }
          if ( ic != -1 || chunk->size != 1 )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTFTP: Line in %s is %s\n", lastpath, &chunk->data );
            }
            entry_info = parse_dir_entry( &chunk->data, &first, &spilledname );
            if ( entry_info->display )
            {
              if ( spilledname )
              {
                free( spilledname );
                spilledname = 0;
              }
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "Adding file to BTree: %s\n", &entry_info->filename[0] );
              }
              HTBTree_add( bt, (void*)entry_info );
              break;
            }
            else
            {
              free_entryinfo_struct_contents( entry_info );
              if ( entry_info )
              {
                free( entry_info );
                entry_info = 0;
              }
            }
          }
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "read_directory: interrupted_in_next_data_char after %d bytes\n", BytesReceived );
        }
        WasInterrupted = 1;
        if ( BytesReceived == 0 )
        {
          targetClass._free( target );
          HTBTreeAndObject_free( bt );
          if ( spilledname )
          {
            free( spilledname );
            spilledname = 0;
          }
          return -29998;
        }
      }
    }
  }
  HTChunkFree( chunk );
  if ( spilledname )
  {
    free( spilledname );
    spilledname = 0;
  }
  if ( help_message_cache_non_empty( ) )
  {
    targetClass.start_element( target, 86, 0, 0, -1, 0 );
    targetClass.start_element( target, 54, 0, 0, -1, 0 );
    targetClass.put_character( target, '\n' );
    ebx( target, help_message_cache_contents( ) );
    init_help_message_cache( );
    targetClass.start_element( target, 54, 0, 0, -1, 0 );
    targetClass.put_character( target, '\n' );
  }
  else
  {
    targetClass.start_element( target, 86, 0, 0, -1, 0 );
    targetClass.put_character( target, '\n' );
  }
{
  HTBTElement *ele = HTBTree_next( bt, 0 );
  int i;
  for ( ; ele == 0;  )
  {
    entry_info = &ele->object[0];
    if ( entry_info->date )
    {
      targetClass.put_string( target, &entry_info->date );
      targetClass.put_string( target, "  " );
    }
    else
      targetClass.put_string( target, "     * " );
    if ( entry_info->type )
    {
      i = 0;
      for ( ; entry_info->type[ i ] && i <= 15; i++ )
      {
        targetClass.put_character( target, entry_info->type[ i ] );
        // i++;
      }
      for ( ; i <= 16; i++ )
      {
        targetClass.put_character( target, ' ' );
        // i++;
      }
    }
    HTDirEntry( target, lastpath, &entry_info->filename[0] );
    targetClass.put_string( target, &entry_info->filename[0] );
    targetClass.end_element( target, 0, 0 );
    if ( entry_info->size )
    {
      if ( entry_info->size <= 1023 )
        sprintf( string_buffer, "  %u bytes", entry_info->size );
      else
        sprintf( string_buffer, "  %uKb", entry_info->size >> 10 );
      targetClass.put_string( target, string_buffer );
    }
    else
    if ( entry_info->linkname )
    {
      targetClass.put_string( target, " -&gt; " );
      targetClass.put_string( target, &entry_info->linkname );
    }
    targetClass.put_character( target, '\n' );
    free_entryinfo_struct_contents( entry_info );
    ele = HTBTree_next( bt, ele );
  }
}
}
}
int setup_connection( char *name, HTParentAnchor *anchor )
{
  int eax;
  int retry;
  int status = -99;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "setup_connection(%s)\n", name );
  }
  use_list = 0;
  server_type = GENERIC_SERVER;
  Broken_RETR = 0;
  Broken_EPSV = 0;
  retry = 0;
  for ( ; retry <= 1; retry++ )
  {
    status = get_connection( name, anchor );
    if ( status >= 0 )
    {
      if ( ftp_local_passive == 0 )
      {
        status = get_listen_socket( );
        if ( status < 0 )
        {
          close( control->socket );
          control->socket = -1;
          if ( have_socket )
          {
            close_master_socket( );
            break;
          }
          else
            break;
        }
        else
        {
          status = response( port_command );
          if ( status == -29998 )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTFTP: Interrupted in response (port_command)\n" );
            }
            mustshow = 1;
            HTProgress( gettext( "Connection interrupted." ) );
            close( control->socket );
            control->socket = -1;
            close_master_socket( );
            status = -29998;
            break;
          }
          else
          {
            if ( status != 2 )
            {
              if ( status >= 0 )
              {
                status = 0 - status;
                break;
              }
            }
            else
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTFTP: Port defined.\n" );
                status = 0;
                break;
              }
            }
          }
        }
      }
      else
      {
        char *command = 0;
        char *p = "?";
        int h0, h1, h2, h3, p0, p1;
        char dst[257];
        data_soc = status;
        if ( Broken_EPSV )
          status = 1;
        else
        {
          p = "EPSV";
          status = send_cmd_1( p );
        }
        if ( status >= 0 )
        {
          if ( status != 2 )
          {
            p = "PASV";
            status = send_cmd_1( p );
            if ( status >= 0 )
            {
              if ( status != 2 )
              {
                status = 0 - status;
                break;
              }
            }
          }
          if ( strcmp( p, "PASV" ) == 0 )
          {
            p = response_text;
            for ( ; p[0] && p[0] != ','; p++ )
            {
              // p++;
            }
            do
            {
              p = &p[ -1 ];
            }
            while ( response_text[0] < p && '/' < p[0] && p[0] <= '9' );
            status = sscanf( &p[1], "%d,%d,%d,%d,%d,%d", &h0, &h1, &h2, &h3, &p0, &p1 );
            if ( status <= 3 )
            {
              fwrite( "HTFTP: PASV reply has no inet address!\n", 1, 39, TraceFP( ) );
              status = -99;
              break;
            }
            else
            {
              passive_port = p1 + ( p0 << 8 );
              sprintf( dst, "%d.%d.%d.%d", h0, h1, h2, h3 );
            }
          }
          else
          {
            if ( strcmp( p, "EPSV" ) == 0 )
            {
              char c0, c1, c2, c3;
              struct sockaddr_storage ss;
              socklen_t sslen;
              p = response_text;
              for ( ; p[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 ) == 0; p++ )
              {
                // p++;
              }
              for ( ; p[0] && p[0] && p[0] != '('; p++ )
              {
                // p++;
              }
              status = sscanf( p, "(%c%c%c%d%c)", &c0, &c1, &c2, &p0, &c3 );
              if ( status != 5 )
              {
                fwrite( "HTFTP: EPSV reply has invalid format!\n", 1, 38, TraceFP( ) );
                status = -99;
                break;
              }
              else
              {
                passive_port = p0;
                sslen = 128;
                if ( getpeername( control->socket, &ss.ss_family, &sslen ) < 0 )
                {
                  fwrite( "HTFTP: getpeername(control) failed\n", 1, 35, TraceFP( ) );
                  status = -99;
                  break;
                }
                else
                {
                  if ( getnameinfo( &ss.ss_family, sslen, dst, 257, 0, 0, 1 ) )
                  {
                    fwrite( "HTFTP: getnameinfo failed\n", 1, 26, TraceFP( ) );
                    status = -99;
                    break;
                  }
                }
              }
            }
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: Server is listening on port %d\n", passive_port );
          }
          HTSprintf0( &command, "%s//%s:%d/", "ftp:", dst[0], passive_port );
          status = HTDoConnect( command, "FTP data", passive_port, &data_soc );
          if ( command )
          {
            free( command );
            command = 0;
          }
          if ( status < 0 )
          {
            HTInetStatus( gettext( "connect for data" ) );
            close( data_soc );
            break;
          }
          else
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "FTP data connected, socket %d\n", data_soc );
            }
          }
        }
      }
      // retry++;
    }
    else
      break;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "setup_connection returns %d\n", status );
  }
  return status;
}
// Lost vars at line 3703 through condition folding
int HTFTPLoad( char *name, HTParentAnchor *anchor, HTFormat format_out, HTStream *sink )
{
  int eax;
  BOOLEAN isDirectory = 0;
  HTAtom *encoding = 0;
  int status, final_status;
  int outstanding = 1;
  HTFormat format;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFTPLoad(%s) %s connection\n", name, "normal" );
  }
  HTReadProgress( (long long)0, (long long)0 );
  status = setup_connection( name, anchor );
  if ( status < 0 )
    return status;
  else
  {
    char *filename = HTParse( name, "", 5 );
    char *fname = filename;
    char *vmsname = 0;
    BOOLEAN binary;
    char *type = 0;
    char *types = 0;
    char *cp;
    if ( server_type == CMS_SERVER )
    {
      cp = strstr( filename, "%2" );
      if ( cp )
      {
        if ( cp[2] == 'F' )
        {
          if ( fname )
          {
            free( fname );
            fname = 0;
          }
          init_help_message_cache( );
          close( control->socket );
          control->socket = -1;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: Rejecting path due to illegal escaped slash.\n" );
          }
          return -1;
        }
      }
    }
    if ( filename[0] == 0 )
    {
      HTSACopy( &filename, "/" );
      type = "D";
    }
    else
    {
      type = types = strrchr( filename, ';' );
      if ( type )
      {
        if ( strncasecomp( &type[1], "type=", 5 ) == 0 )
        {
          if ( type[6] != 68 )
          {
            if ( ( *(short*)(*(int*)(toupper( type[6] )) + ( type[6] * 2 )) & 512 ? type[6] : toupper( type[6] ) ) == 73 )
            {
              types[0] = 0;
              type = "I";
            }
            else
            if ( ( *(short*)(*(int*)(toupper( type[6] )) + ( type[6] * 2 )) & 512 ? type[6] : toupper( type[6] ) ) == 65 )
            {
              types[0] = 0;
              type = "A";
            }
            else
              type = "";
          }
          else
          {
            types[0] = 0;
            type = "D";
          }
          if ( filename[0] == 0 )
          {
            filename[0] = '/';
            filename[1] = 0;
          }
        }
        if ( type[0] && WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: type=%s\n", type );
        }
      }
    }
    HTUnEscape( filename );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFTP: UnEscaped %s\n", filename );
    }
    if ( filename[1] == '~' )
    {
      char *cp2 = 0;
      char *fn = 0;
      cp2 = strchr( &filename[1], '/' );
      if ( cp2 )
        cp2[0] = 0;
      status = send_cmd_1( "PWD" );
      if ( status == 2 && response_text[5] == '/' )
      {
        status = send_cmd_2( "CWD", &filename[1] );
        if ( status == 2 )
        {
          HTSACopy( &fn, &filename[1] );
          if ( cp2 )
          {
            cp2[0] = '/';
            if ( *(char*)(fn + strlen( fn ) + -1) != '/' )
              HTSACat( &fn, cp2 );
            else
              HTSACat( &fn, &cp2[1] );
            cp2 = 0;
          }
          if ( fname )
          {
            free( fname );
            fname = 0;
          }
          fname = filename = fn;
        }
      }
      if ( cp2 )
        *ebp_188 = 47;
    }
    if ( strlen( filename ) > 3 )
    {
      char *cp2 = strrchr( filename, '.' );
      if ( cp2 && strncasecomp( cp2, ".me", 3 ) == 0 && ( cp2[3] == 0 || cp2[3] == ';' ) )
      {
        if ( server_type != UNIX_SERVER || ( filename[3] < cp2 && strncasecomp( &cp2[ -4 ], "read.me", 7 ) == 0 ) )
        {
          cp2[0] = 0;
          format = HTFileFormat( filename, &encoding, 0 );
          cp2[0] = '.';
        }
        else
        {
          format = HTFileFormat( filename, &encoding, 0 );
        }
      }
      else
      {
        format = HTFileFormat( filename, &encoding, 0 );
      }
    }
    else
    {
      format = HTFileFormat( filename, &encoding, 0 );
    }
    format = HTCharsetFormat( format, anchor, -1 );
    *(int*)&binary = 0;
    if ( binary == 0 && ( format_out == WWW_SOURCE || format_out == HTAtom_for( "www/download" ) || format_out == HTAtom_for( "www/dump" ) ) && server_type != CMS_SERVER )
      binary = 1;
    if ( binary == 0 && type && type[0] == 'I' )
      binary = 1;
    else
    if ( binary && type && type[0] == 'A' )
      binary = 0;
    if ( control->binary != binary )
    {
      char *mode = "A";
      status = send_cmd_2( "TYPE", mode );
      if ( status != 2 )
      {
        init_help_message_cache( );
        return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
      }
      else
        control->binary = binary;
    }
    if ( server_type == VMS_SERVER )
    {
      char *cp1, *cp2;
      BOOLEAN included_device = 0;
      BOOLEAN found_tilde = 0;
      if ( strchr( filename, ':' ) || strchr( filename, '[' ) )
      {
        if ( fname )
        {
          free( fname );
          fname = 0;
        }
        init_help_message_cache( );
        close( control->socket );
        control->socket = -1;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFTP: Rejecting path due to non-Unix-style syntax.\n" );
        }
        return -1;
      }
      else
      {
        if ( strncmp( filename, "//", 2 ) == 0 )
        {
          int i;
          included_device = 1;
          i = 0;
          for ( ; filename[ i + 1 ]; i++ )
          {
            filename[ i ] = filename[ i + 1 ];
            // i++;
          }
          filename[ i ] = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: Trimmed '%s'\n", filename );
          }
          cp = HTVMS_name( "", filename );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTFTP: VMSized '%s'\n", cp );
          }
          cp1 = strrchr( cp, ']' );
          if ( cp1 )
          {
            cp1++;
            strcpy( filename, cp1 );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTFTP: Filename '%s'\n", filename );
            }
            cp1[0] = 0;
            status = send_cmd_2( "CWD", cp );
            if ( status != 2 )
            {
              char *dotslash = 0;
              cp1 = strchr( cp, '[' );
              if ( cp1 )
              {
                cp1[0] = 0;
                cp1++;
                status = send_cmd_2( "CWD", cp );
                if ( status != 2 )
                {
                  if ( fname )
                  {
                    free( fname );
                    fname = 0;
                  }
                  init_help_message_cache( );
                  close( control->socket );
                  control->socket = -1;
                  return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
                }
                else
                {
                  HTSprintf0( &dotslash, "[.%s", cp1 );
                  status = send_cmd_2( "CWD", dotslash );
                  if ( dotslash )
                  {
                    free( dotslash );
                    dotslash = 0;
                  }
                  if ( status != 2 )
                  {
                    if ( fname )
                    {
                      free( fname );
                      fname = 0;
                    }
                    init_help_message_cache( );
                    close( control->socket );
                    control->socket = -1;
                    return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
                  }
                }
              }
              else
              {
                if ( fname )
                {
                  free( fname );
                  fname = 0;
                }
                init_help_message_cache( );
                close( control->socket );
                control->socket = -1;
                return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
              }
            }
          }
          else
          {
            cp1 = strchr( cp, ':' );
            if ( cp1 && strchr( cp, '[' ) == 0 && strchr( cp, ']' ) == 0 )
            {
              cp1++;
              if ( cp1[0] )
              {
                int cplen = cp1 - cp;
                strcpy( filename, cp1 );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTFTP: Filename '%s'\n", filename );
                }
                HTSprintf0( &vmsname, "%.*s[%s]", cplen, cp, filename );
                status = send_cmd_2( "CWD", vmsname );
                if ( status != 2 )
                {
                  HTSprintf( &vmsname, "%.*s[000000]", cplen, cp );
                  status = send_cmd_2( "CWD", vmsname );
                  if ( status != 2 )
                  {
                    HTSprintf( &vmsname, "%.*s", cplen, cp );
                    status = send_cmd_2( "CWD", vmsname );
                    if ( status != 2 )
                    {
                      if ( fname )
                      {
                        free( fname );
                        fname = 0;
                      }
                      init_help_message_cache( );
                      close( control->socket );
                      control->socket = -1;
                      return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
                    }
                  }
                }
                else
                {
                  HTSprintf0( &vmsname, "000000" );
                  filename = vmsname;
                }
              }
            }
            else
            {
              if ( strcmp( cp, &filename[1] ) == 0 )
              {
                status = send_cmd_2( "CWD", cp );
                if ( status != 2 )
                {
                  HTSprintf0( &vmsname, "%s:", cp );
                  status = send_cmd_2( "CWD", vmsname );
                  if ( status != 2 )
                  {
                    if ( fname )
                    {
                      free( fname );
                      fname = 0;
                    }
                    init_help_message_cache( );
                    close( control->socket );
                    control->socket = -1;
                    return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
                  }
                }
                HTSprintf0( &vmsname, "000000" );
                filename = vmsname;
              }
            }
          }
        }
        if ( strlen( filename ) > 1 && *(char*)(filename + strlen( filename ) + -1) == '/' )
        {
        }
        if ( strcmp( filename, "/~" ) == 0 || ( included_device && strcmp( filename, "000000" ) == 0 ) || ( strlen( filename ) == 1 && filename[0] == '/' ) )
        {
          isDirectory = 1;
          status = send_cmd_1( "LIST" );
          if ( fname )
          {
            free( fname );
            fname = 0;
          }
          if ( status != 1 )
          {
            init_help_message_cache( );
            close( control->socket );
            control->socket = -1;
            return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
          }
          else
          {
            if ( ftp_local_passive == 0 )
            {
              struct sockaddr_storage soc_address;
              socklen_t soc_addrlen = 128;
              status = accept( (int)master_socket, &soc_address.ss_family, &soc_addrlen );
              if ( status < 0 )
              {
                init_help_message_cache( );
              }
              else
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "TCP: Accepted new socket %d\n", status );
                }
                data_soc = status;
              }
            }
            if ( isDirectory )
            {
              if ( server_type == UNIX_SERVER && unsure_type == 0 && strcmp( response_text, "150 Opening ASCII mode data connection for /bin/dl.\n" ) == 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTFTP: Treating as \"dls\" server.\n" );
                }
                server_type = DLS_SERVER;
              }
              final_status = read_directory( anchor, name, format_out, sink );
              if ( final_status > 0 )
              {
                if ( server_type != CMS_SERVER )
                {
                  outstanding += -1;
                  if ( ( outstanding > 0 ) & 255 )
                  {
                    status = response( 0 );
                    if ( status < 0 || ( status == 2 && strncmp( response_text, "221", 3 ) == 0 ) )
                      outstanding = 0;
                  }
                }
              }
              else
                outstanding = 0;
              if ( data_soc != -1 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTFTP: Closing data socket %d\n", data_soc );
                }
                status = close( data_soc );
                if ( status == -1 )
                  HTInetStatus( "close" );
              }
              status = final_status;
              do
              {
                outstanding += -1;
                if ( !( ( ( outstanding > 0 ) ^ 1 ) & 255 ) && status > 0 )
                {
                  status = response( 0 );
                }
                else
                  break;
              }
              while ( status != 2 || strncmp( response_text, "221", 3 ) );
              data_soc = -1;
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTFTPLoad: normal end; " );
              }
              if ( control->socket < 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "control socket is %d\n", control->socket );
                }
              }
              else
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "closing control socket %d\n", control->socket );
                }
                status = close( control->socket );
                if ( status == -1 )
                  HTInetStatus( "control connection close" );
              }
              control->socket = -1;
              init_help_message_cache( );
              return final_status;
            }
            else
            {
              int rv;
              char *FileName = HTParse( name, "", 5 );
              init_help_message_cache( );
              HTUnEscape( FileName );
              if ( encoding && encoding != HTAtom_for( "identity" ) && encoding != HTAtom_for( "8bit" ) && encoding != HTAtom_for( "binary" ) && encoding != HTAtom_for( "7bit" ) )
              {
                HTSACopy( &anchor->content_type, &format->name );
                HTSACopy( &anchor->content_encoding, &encoding->name );
                format = HTAtom_for( "www/compressed" );
              }
              else
              {
                int rootlen;
                CompressFileType cft = HTCompressFileType( FileName, "._-", &rootlen );
                if ( cft )
                {
                  FileName[ rootlen ] = 0;
                  format = HTFileFormat( FileName, &encoding, 0 );
                  format = HTCharsetFormat( format, anchor, -1 );
                  HTSACopy( &anchor->content_type, &format->name );
                  format = HTAtom_for( "www/compressed" );
                  switch ( cft )
                  {
                  case cftCompress:
                    HTSACopy( &anchor->content_encoding, "x-compress" );
                    break;
                  case cftGzip:
                    HTSACopy( &anchor->content_encoding, "x-gzip" );
                    break;
                  case cftDeflate:
                    HTSACopy( &anchor->content_encoding, "x-deflate" );
                    break;
                  case cftBzip2:
                    HTSACopy( &anchor->content_encoding, "x-bzip2" );
                    break;
                  }
                }
              }
              if ( FileName )
              {
                free( FileName );
                FileName = 0;
              }
              mustshow = 1;
              HTProgress( gettext( "Receiving FTP file." ) );
              rv = HTParseSocket( format, format_out, anchor, data_soc, &sink[0] );
              HTInitInput( control->socket );
              if ( rv < 0 )
              {
                if ( rv == -2 )
                  outstanding += -1;
                else
                if ( rv == -29998 || rv == -1 )
                  outstanding = 0;
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTFTP: Closing data socket %d\n", data_soc );
                }
                status = close( data_soc );
              }
              else
                status = 2;
              if ( status < 0 && rv != -29998 && rv != -1 )
                HTInetStatus( "close" );
              else
              if ( rv != 200 )
              {
                outstanding += -1;
                if ( ( outstanding != 0 ) & 255 )
                {
                  status = response( 0 );
                  if ( status != 2 && rv != -29998 && rv != -1 )
                  {
                    data_soc = -1;
                    init_help_message_cache( );
                  }
                  else
                  if ( status <= 0 )
                    outstanding = 0;
                  else
                  if ( status == 2 && strncmp( response_text, "221", 3 ) == 0 )
                    outstanding = 0;
                }
              }
              final_status = 200;
            }
          }
        }
        else
        {
          if ( strncmp( filename, "/~", 2 ) == 0 )
          {
            filename += 2;
            found_tilde = 1;
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "check '%s' to translate x/y/ to [.x.y]\n", filename );
          }
          if ( included_device == 0 )
          {
            cp = strchr( filename, '/' );
            if ( cp )
            {
              cp1 = strrchr( cp, '/' );
              if ( cp1 && cp1 - cp > 1 )
              {
                char *tmp = 0;
                HTSprintf0( &tmp, "[.%.*s]", ( cp1 - cp ) + -1, cp[1] );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "change path '%s'\n", tmp );
                }
                while ( cp2 == 0 )
                {
                  cp2[0] = '.';
                }
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "...to  path '%s'\n", tmp );
                }
                status = send_cmd_2( "CWD", tmp );
                if ( tmp )
                {
                  free( tmp );
                  tmp = 0;
                }
                if ( status != 2 )
                {
                  if ( fname )
                  {
                    free( fname );
                    fname = 0;
                  }
                  init_help_message_cache( );
                  close( control->socket );
                  control->socket = -1;
                  return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
                }
                else
                  filename = &cp1[1];
              }
            }
          }
          if ( included_device == 0 && found_tilde == 0 )
            filename++;
        }
      }
    }
    else
    {
      if ( server_type == CMS_SERVER )
      {
        if ( strlen( filename ) != 1 || filename[0] != '/' )
        {
          if ( strncasecomp( &filename[1], "vmsysu:", 7 ) == 0 )
          {
            cp = strchr( &filename[1], '.' );
            if ( cp == 0 || strchr( cp, '/' ) )
              goto B175;
          }
B175:;
          if ( strncasecomp( &filename[1], "anonymou.", 9 ) == 0 && strchr( &filename[1], '/' ) == 0 )
            goto B160;
          else
          {
            filename++;
            while ( cp == 0 )
            {
              cp[0] = 0;
              cp++;
              status = send_cmd_2( "CWD", filename );
              if ( status != 2 )
                continue;
              else
              {
                if ( cp[0] == 0 )
                {
                  isDirectory = 1;
                  if ( use_list )
                  {
                    status = send_cmd_1( "LIST" );
                  }
                  else
                  {
                    status = send_cmd_1( "NLST" );
                  }
                  if ( fname )
                  {
                    free( fname );
                    fname = 0;
                  }
                  if ( status != 1 )
                  {
                    init_help_message_cache( );
                    close( control->socket );
                    control->socket = -1;
                    return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
                  }
                  else
                    init_help_message_cache( );
                }
                else
                {
                  filename = cp;
                }
              }
            }
          }
        }
B160:;
        if ( filename[1] )
        {
          status = send_cmd_2( "CWD", &filename[1] );
          if ( status != 2 )
          {
            init_help_message_cache( );
            close( control->socket );
            control->socket = -1;
            return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
          }
        }
        isDirectory = 1;
        if ( use_list )
        {
          status = send_cmd_1( "LIST" );
        }
        else
        {
          status = send_cmd_1( "NLST" );
        }
        if ( fname )
        {
          free( fname );
          fname = 0;
        }
        if ( status != 1 )
        {
          init_help_message_cache( );
          close( control->socket );
          control->socket = -1;
          return 0 - ( ( status ^ ( status >> 31 ) ) - ( status >> 31 ) );
        }
      }
      else
      {
        if ( strncmp( filename, "//", 2 ) == 0 )
          filename++;
      }
    }
    if ( type == 0 || ( type && type[0] != 'D' ) )
    {
      status = send_cmd_2( "RETR", filename );
      if ( status > 4 && Broken_RETR )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "{{reconnecting...\n" );
        }
        close_connection( control );
        check = setup_connection( name, anchor );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "...done }}reconnecting\n" );
        }
        if ( check < 0 )
          return check;
      }
    }
    else
      status = 5;
    if ( status != 1 )
    {
      if ( strcmp( filename, "/" ) )
        init_help_message_cache( );
      status = send_cmd_2( "CWD", filename );
      if ( status == 2 )
      {
        isDirectory = 1;
        if ( use_list )
        {
          status = send_cmd_1( "LIST" );
        }
        else
        {
          status = send_cmd_1( "NLST" );
        }
      }
    }
    if ( fname )
    {
      free( fname );
      fname = 0;
    }
    if ( vmsname )
    {
      free( vmsname );
      vmsname = 0;
    }
    if ( status != 1 )
    {
      init_help_message_cache( );
      close( control->socket );
      control->socket = -1;
      if ( status < 0 )
        return status;
      else
        return 0 - status;
    }
  }
}
void HTClearFTPPassword( void )
{
  if ( user_entered_password )
  {
    free( user_entered_password );
    user_entered_password = 0;
  }
  return;
}
#if 0
#endif
