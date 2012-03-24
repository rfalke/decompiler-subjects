#include "HTNews.c.h"
int HTNewsChunkSize;
int HTNewsMaxChunk;
char *HTNewsHost;
static char *NewsHost;
static char *NewsHREF;
static int s;
static int HTCanPost;
static char response_text[513];
static HTStructured *target;
static HTStructuredClass targetClass;
static HTStream *rawtarget;
static HTStreamClass rawtargetClass;
static HTParentAnchor *node_anchor;
static int diagnostic;
static BOOLEAN rawtext;
static HTList *NNTP_AuthInfo;
static char *name;
static char *address;
static char *dbuf;
static BOOLEAN initialized;
HTProtocol HTNews;
HTProtocol HTNNTP;
HTProtocol HTNewsPost;
HTProtocol HTNewsReply;
HTProtocol HTSNews;
HTProtocol HTSNewsPost;
HTProtocol HTSNewsReply;
void free_NNTP_AuthInfo( void )
{
  int eax;
  HTList *cur = NNTP_AuthInfo;
  NNTPAuth *auth = 0;
  if ( cur )
  {
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        auth = 0;
        if ( auth )
        {
          if ( auth->host[0] )
          {
            free( &auth->host[0] );
            *(int*)&auth->host[0] = 0;
          }
          if ( auth->user )
          {
            free( &auth->user );
            *(int*)&auth->user = 0;
          }
          if ( auth->pass )
          {
            free( &auth->pass );
            *(int*)&auth->pass = 0;
          }
          if ( auth )
          {
            free( auth );
            auth = 0;
          }
        }
        else
        {
          HTList_delete( NNTP_AuthInfo );
          NNTP_AuthInfo = 0;
          break;
        }
      }
      auth = 0;
    }
  }
  return;
}
void load_NNTP_AuthInfo( void )
{
  int eax;
  FILE *fp;
  char fname[256];
  char buffer[513];
  LYAddPathToHome( fname, 256, ".newsauth" );
  fp = fopen64( fname, "r" );
  if ( fp )
  {
    while ( fgets( buffer, 513, fp ) == 0 )
    {
      char the_host[513];
      char the_pass[513];
      char the_user[513];
      if ( sscanf( buffer, "%s%s%s", the_host, the_pass, the_user ) == 3 && the_host[0] && the_pass[0] && the_user[0] )
      {
        NNTPAuth *auth = calloc( 1, sizeof( NNTPAuth ) );
        if ( auth )
        {
          HTSACopy( &auth->host, the_host );
          HTSACopy( &auth->pass, the_pass );
          HTSACopy( &auth->user, the_user );
          HTList_appendObject( NNTP_AuthInfo, (void*)auth );
        }
      }
      fclose( fp );
    }
  }
  return;
}
char *HTGetNewsHost( void )
{
  return HTNewsHost;
}
void HTSetNewsHost( char *value )
{
  HTSACopy( &HTNewsHost, value );
  return;
}
BOOLEAN initialize( void )
{
  int eax;
  if ( LYGetEnv( "NNTPSERVER" ) )
  {
    HTSACopy( &HTNewsHost, LYGetEnv( "NNTPSERVER" ) );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTNews: NNTPSERVER defined as `%s'\n", HTNewsHost );
    }
  }
  else
  {
    FILE *fp = fopen64( "/usr/local/lib/rn/server", "r" );
    if ( fp )
    {
      char server_name[65];
      if ( fgets( server_name, 65, fp ) )
      {
        char *p = strchr( server_name, '\n' );
        if ( p )
          p[0] = 0;
        HTSACopy( &HTNewsHost, server_name );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTNews: File %s defines news host as `%s'\n", "/usr/local/lib/rn/server", HTNewsHost );
        }
      }
      fclose( fp );
    }
  }
  if ( HTNewsHost == 0 )
    HTSACopy( &HTNewsHost, "news" );
  s = -1;
  return 1;
}
int response( char *command )
{
  int result;
  char *p = response_text;
  int ich;
  if ( command )
  {
    int status;
    int length = strlen( command );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "NNTP command to be sent: %s", command );
    }
    status = write( s, command, length );
    if ( status < 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTNews: Unable to send command. Disconnecting.\n" );
      }
      close( s );
      s = -1;
      return status;
    }
  }
  do
  {
    p[0] = ich = HTGetCharacter( );
    p++;
    if ( ( ( p[0] == '\n' ) & 255 ) || response_text[512] == p )
    {
      p = &p[ -1 ];
      p[0] = 0;
      if ( WWW_TraceFlag == 0 )
      {
        sscanf( response_text, "%d", &result );
        return result;
      }
      fprintf( TraceFP( ), "NNTP Response: %s\n", response_text );
      sscanf( response_text, "%d", &result );
      return result;
    }
    else
    {
    }
  }
  while ( ich != -1 );
  p[ -1 ] = 0;
  if ( interrupted_in_htgetcharacter )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTNews: Interrupted on read, closing socket %d\n", s );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTNews: EOF on read, closing socket %d\n", s );
  }
  close( s );
  s = -1;
  if ( interrupted_in_htgetcharacter )
  {
    interrupted_in_htgetcharacter = 0;
    return -29998;
  }
  return -1;
}
BOOLEAN match( char *unknown, char *ctemplate )
{
  char *u = unknown;
  char *t = ctemplate;
  for ( ; u[0] && t[0]; t++ )
  {
    if ( u[0] == t[0] )
    {
      u++;
      // t++;
    }
  }
  return t[0] == 0;
}
NNTPAuthResult HTHandleAuthInfo( char *host )
{
  int eax;
  HTList *cur = 0;
  NNTPAuth *auth = 0;
  char *UserName = 0;
  char *PassWord = 0;
  char *msg = 0;
  char buffer[512];
  int status, tries;
  if ( dump_output_immediately || host == 0 || host[0] == 0 )
    return 0;
  else
  {
    if ( NNTP_AuthInfo == 0 )
    {
      NNTP_AuthInfo = HTList_new( );
      load_NNTP_AuthInfo( );
    }
    cur = NNTP_AuthInfo;
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        auth = 0;
        if ( auth )
        {
        }
        buffer[511] = 0;
        tries = 3;
        do
        {
          if ( tries )
          {
            if ( UserName == 0 )
            {
              HTSprintf0( &msg, gettext( "Username for news host '%s':" ), host );
              UserName = HTPrompt( msg, 0 );
              if ( msg )
              {
                free( msg );
                msg = 0;
              }
              if ( UserName == 0 || UserName[0] == 0 )
              {
                if ( UserName )
                {
                  free( UserName );
                  UserName = 0;
                }
                return 0;
              }
            }
            sprintf( buffer, "AUTHINFO USER %.*s%c%c", 495, UserName, 13, 10 );
            status = response( buffer );
            if ( status < 0 )
            {
              if ( status == -29998 )
              {
                mustshow = 1;
                HTProgress( gettext( "Connection interrupted." ) );
              }
              else
              {
                HTAlert( gettext( "Connection closed ???" ) );
              }
              if ( auth )
              {
                if ( auth->user != UserName )
                {
                  if ( auth->user )
                  {
                    free( &auth->user );
                    *(int*)&auth->user = 0;
                  }
                  auth->user = UserName;
                }
              }
              else
              if ( UserName )
              {
                free( UserName );
                UserName = 0;
              }
              return 502;
            }
            else
            {
              if ( status == 281 )
              {
                if ( auth )
                {
                  if ( auth->user != UserName )
                  {
                    if ( auth->user )
                    {
                      free( &auth->user );
                      *(int*)&auth->user = 0;
                    }
                    auth->user = UserName;
                  }
                }
                else
                {
                  auth = calloc( 1, sizeof( NNTPAuth ) );
                  if ( auth )
                  {
                    HTSACopy( &auth->host, host );
                    auth->user = UserName;
                    HTList_appendObject( NNTP_AuthInfo, (void*)auth );
                  }
                }
                return 281;
              }
              else
              {
                if ( status != 381 )
                {
                  HTAlert( response_text );
                  tries += -1;
                  if ( tries > 0 && ( HTConfirm( gettext( "Change username?" ) ) & 255 ) )
                  {
                    if ( ( auth == 0 || auth->user != UserName ) && UserName )
                    {
                      free( UserName );
                      UserName = 0;
                    }
                    UserName = HTPrompt( gettext( "Username:" ), UserName );
                  }
                  else
                    break;
                }
              }
            }
          }
          if ( status == 381 )
          {
            tries = 3;
            do
            {
              if ( tries )
              {
                if ( PassWord == 0 )
                {
                  HTSprintf0( &msg, gettext( "Password for news host '%s':" ), host );
                  PassWord = HTPromptPassword( msg );
                  if ( msg )
                  {
                    free( msg );
                    msg = 0;
                  }
                  if ( PassWord == 0 || PassWord[0] == 0 )
                  {
                    if ( PassWord )
                    {
                      free( PassWord );
                      PassWord = 0;
                    }
                    return 0;
                  }
                }
                sprintf( buffer, "AUTHINFO PASS %.*s%c%c", 495, PassWord, 13, 10 );
                status = response( buffer );
                if ( status < 0 )
                {
                  if ( status == -29998 )
                  {
                    mustshow = 1;
                    HTProgress( gettext( "Connection interrupted." ) );
                  }
                  else
                  {
                    HTAlert( gettext( "Connection closed ???" ) );
                  }
                  if ( auth )
                  {
                    if ( auth->user != UserName )
                    {
                      if ( auth->user )
                      {
                        free( &auth->user );
                        *(int*)&auth->user = 0;
                      }
                      auth->user = UserName;
                    }
                    if ( auth->pass != PassWord )
                    {
                      if ( auth->pass )
                      {
                        free( &auth->pass );
                        *(int*)&auth->pass = 0;
                      }
                      auth->pass = PassWord;
                    }
                  }
                  else
                  {
                    if ( UserName )
                    {
                      free( UserName );
                      UserName = 0;
                    }
                    if ( PassWord )
                    {
                      free( PassWord );
                      PassWord = 0;
                    }
                  }
                  return 502;
                }
                else
                {
                  if ( status == 502 )
                  {
                    HTAlert( response_text );
                    if ( auth )
                    {
                      if ( auth->user == UserName )
                        UserName = 0;
                      if ( auth->user )
                      {
                        free( &auth->user );
                        *(int*)&auth->user = 0;
                      }
                      if ( auth->pass == PassWord )
                        PassWord = 0;
                      if ( auth->pass )
                      {
                        free( &auth->pass );
                        *(int*)&auth->pass = 0;
                      }
                    }
                    if ( UserName )
                    {
                      free( UserName );
                      UserName = 0;
                    }
                    if ( PassWord )
                    {
                      free( PassWord );
                      PassWord = 0;
                    }
                    return 502;
                  }
                  else
                  {
                    if ( status == 281 )
                    {
                      if ( auth )
                      {
                        if ( auth->user != UserName )
                        {
                          if ( auth->user )
                          {
                            free( &auth->user );
                            *(int*)&auth->user = 0;
                          }
                          auth->user = UserName;
                        }
                        if ( auth->pass != PassWord )
                        {
                          if ( auth->pass )
                          {
                            free( &auth->pass );
                            *(int*)&auth->pass = 0;
                          }
                          auth->pass = PassWord;
                        }
                      }
                      else
                      {
                        auth = calloc( 1, sizeof( NNTPAuth ) );
                        if ( auth )
                        {
                          HTSACopy( &auth->host, host );
                          auth->user = UserName;
                          auth->pass = PassWord;
                          HTList_appendObject( NNTP_AuthInfo, (void*)auth );
                        }
                      }
                      return 281;
                    }
                    else
                    {
                      HTAlert( response_text );
                      if ( auth == 0 || auth->pass != PassWord )
                      {
                        if ( PassWord )
                        {
                          free( PassWord );
                          PassWord = 0;
                        }
                      }
                      else
                        PassWord = 0;
                      tries += -1;
                    }
                  }
                }
              }
            }
            while ( tries > 0 && ( HTConfirm( gettext( "Change password?" ) ) & 255 ) );
            if ( auth )
            {
              if ( auth->user == UserName )
                UserName = 0;
              if ( auth->user )
              {
                free( &auth->user );
                *(int*)&auth->user = 0;
              }
              if ( auth->pass )
              {
                free( &auth->pass );
                *(int*)&auth->pass = 0;
              }
            }
            if ( UserName )
            {
              free( UserName );
              UserName = 0;
            }
          }
          return 0;
        }
        while ( UserName && UserName[0] );
        if ( auth )
        {
          if ( auth->user != UserName && auth->user )
          {
            free( &auth->user );
            *(int*)&auth->user = 0;
          }
          if ( auth->pass )
          {
            free( &auth->pass );
            *(int*)&auth->pass = 0;
          }
        }
        if ( UserName )
        {
          free( UserName );
          UserName = 0;
        }
        return 0;
      }
      auth = 0;
    }
    while ( strcmp( &auth->host[0], host ) );
    UserName = &auth->user;
    PassWord = &auth->pass;
    buffer[511] = 0;
    tries = 3;
    do
    {
    }
    while ( UserName && UserName[0] );
  }
}
char *author_name( char *email )
{
  char *p, *e;
  HTSACopy( &name, email );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Trying to find name in: %s\n", name );
  }
  p = strrchr( name, '(' );
  if ( p )
  {
    e = strrchr( name, ')' );
    if ( e && p < e )
    {
      e[0] = 0;
      return HTStrip( name );
    }
  }
  p = strrchr( name, '<' );
  if ( p )
  {
    e = strrchr( name, '>' );
    if ( e )
    {
      while ( e++, ( p < e ) & 255 )
      {
        p[0] = e[0];
        p++;
        e++;
      }
    }
  }
  return HTStrip( name );
}
char *author_address( char *email )
{
  char *p, *at, *e;
  HTSACopy( &address, email );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Trying to find address in: %s\n", address );
  }
  p = strrchr( address, '<' );
  if ( p )
  {
    e = strrchr( p, '>' );
    if ( e )
    {
      at = strrchr( p, '@' );
      if ( at && at < e )
      {
        e[0] = 0;
        return p;
      }
    }
  }
  p = strrchr( address, '(' );
  if ( p )
  {
    e = strrchr( address, ')' );
    if ( e )
    {
      at = strchr( address, '@' );
      if ( at && p < e && at < e )
      {
        p[0] = 0;
        return p;
      }
    }
  }
  at = strrchr( address, '@' );
  if ( at && address < at )
  {
    p = &at[ -1 ];
    e = &at[1];
    for ( ; address < p && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192 ) == 0;  )
    {
      p = &p[ -1 ];
    }
    for ( ; e[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( e[0] * 2 )) & 8192 ) == 0; e++ )
    {
      // e++;
    }
    e[0] = 0;
    return p;
  }
  else
  {
    p = address;
    for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 8192; p++ )
    {
      // p++;
    }
    e = p;
    for ( ; !( *(short*)(*(int*)(__ctype_b_loc( )) + ( e[0] * 2 )) & 8192 ) && e[0]; e++ )
    {
      // e++;
    }
    e[0] = 0;
    return p;
  }
}
void start_anchor( char *href )
{
  BOOLEAN present[25];
  char *value[25];
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
void start_link( char *href, char *rev )
{
  BOOLEAN present[14];
  char *value[14];
  int i = 0;
  for ( ; i <= 13; i++ )
  {
    present[ i ] = i == 3 || i == 9 ? 1 : 0;
    // i++;
  }
  value[3] = href;
  value[9] = rev;
  targetClass.start_element( target, 69, present, value, -1, 0 );
  return;
}
void start_list( int seqnum )
{
  int eax;
  BOOLEAN present[12];
  char *value[12];
  char SeqNum[20];
  int i = 0;
  for ( ; i <= 11; i++ )
  {
    present[ i ] = i == 7 || i == 8 ? 1 : 0;
    // i++;
  }
  sprintf( SeqNum, "%d", seqnum );
  value[7] = SeqNum;
  value[8] = SeqNum;
  targetClass.start_element( target, 80, present, value, -1, 0 );
  return;
}
void write_anchor( char *text, char *addr )
{
  char href[513];
  char *p = addr;
  char *q;
  for ( ; p[0] && p[0] != '>' && p[0] < ' ' && p[0] != ','; p++ )
  {
    // p++;
  }
  if ( strlen( NewsHREF ) + ( p - addr ) + 1 <= 512 )
  {
    q = href;
    strcpy( q, NewsHREF );
    strncat( q, addr, p - addr );
  }
  else
  {
    q = 0;
    HTSprintf0( &q, "%s%.*s", NewsHREF, p - addr, addr );
  }
  start_anchor( q );
  targetClass.put_string( target, text );
  targetClass.end_element( target, 0, 0 );
  if ( q != href[0] && q )
  {
    free( q );
    q = 0;
  }
  return;
}
void write_anchors( char *text )
{
  char *start = text;
  char *end;
  char c;
  while ( !start[0] || start[0] < ' ' )
  {
    if ( start[0] == 0 )
      break;
    end = start;
    for ( ; end[0] && end[0] != ' ' && end[0] != ','; end++ )
    {
      // end++;
    }
    if ( end[0] )
      end++;
    c = end[0];
    end[0] = 0;
    if ( start[0] == '<' )
      write_anchor( start, &start[1] );
    else
      write_anchor( start, start );
    targetClass.start_element( target, 20, 0, 0, -1, 0 );
    end[0] = c;
    start = end;
  }
  start++;
}
void abort_socket( void )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTNews: EOF on read, closing socket %d\n", s );
  }
  close( s );
  if ( rawtext )
  {
    rawtargetClass.put_string( rawtarget, "Network Error: connection lost\n" );
  }
  else
  {
    targetClass.put_string( target, "Network Error: connection lost" );
    targetClass.put_character( target, '\n' );
  }
  s = -1;
  return;
}
BOOLEAN valid_header( char *line )
{
  char *colon, *space;
  if ( line[0] == ' ' || line[0] == '\t' )
  {
  }
  colon = strchr( line, ':' );
  space = strchr( line, ' ' );
  if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( line[0] * 2 )) & 1024 ) && colon && colon[1] == space )
  {
  }
  return 0;
}
void post_article( char *postfile )
{
  char line[512];
  char buf[512];
  char crlf[3];
  char *cp;
  int status;
  FILE *fd;
  int in_header = 1, seen_header = 0, seen_fromline = 0;
  int blen = 0, llen = 0;
  fd = fopen64( "", "r" );
  if ( fd == 0 )
  {
    HTAlert( gettext( "Cannot open temporary file for news POST." ) );
  }
  else
  {
    buf[0] = 0;
    sprintf( crlf, "%c%c", 13, 10 );
    while ( fgets( line, 510, fd ) == 0 )
    {
      cp = strchr( line, '\n' );
      if ( cp )
        cp[0] = 0;
      if ( line[0] == '.' )
      {
        memcpy( buf[0] + strlen( buf ) );
        blen++;
      }
      llen = strlen( line );
      if ( in_header && strncasecomp( line, "From:", 5 ) == 0 )
      {
        seen_header = 1;
        seen_fromline = 1;
      }
      if ( in_header && line[0] == 0 )
      {
        if ( seen_header )
        {
          in_header = 0;
          if ( seen_fromline == 0 )
          {
            if ( blen > 476 )
            {
              write( s, buf, blen );
              blen = 0;
              buf[ blen ] = 0;
            }
            memcpy( buf[0] + strlen( buf ) );
            strcat( buf, crlf );
            blen += 34;
          }
        }
      }
      else
      {
        if ( in_header )
        {
          if ( valid_header( line ) & 255 )
            seen_header = 1;
        }
      }
      strcat( line, crlf );
      llen += 2;
      if ( llen + blen > 510 )
      {
        write( s, buf, blen );
        blen = 0;
        buf[ blen ] = 0;
      }
      strcat( buf, line );
      blen += llen;
    }
  }
  return;
}
char *decode_mime( char **str )
{
  static char empty[1];
  HTmmdecode( str, str[0] );
  return empty;
}
int read_article( HTParentAnchor *thisanchor )
{
  int eax;
  char line[513];
  char *full_line = 0;
  char *subject = 0;
  char *from = 0;
  char *replyto = 0;
  char *date = 0;
  char *organization = 0;
  char *references = 0;
  char *newsgroups = 0;
  char *followupto = 0;
  char *href = 0;
  char *p = line;
  char *cp;
  char *ccp;
  BOOLEAN done = 0;
  if ( diagnostic == 0 && rawtext == 0 )
  {
    while ( done == 0 )
    {
      int ich = HTGetCharacter( );
      p[0] = ich;
      p++;
      if ( ich == -1 )
      {
        if ( interrupted_in_htgetcharacter )
        {
          interrupted_in_htgetcharacter = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTNews: Interrupted on read, closing socket %d\n", s );
          }
          close( s );
          s = -1;
          return -29998;
        }
        else
        {
          abort_socket( );
          return 200;
        }
      }
      else
      {
        if ( (unsigned char)( ich ) != '\n' && line[512] != p )
          continue;
        else
        {
          p = &p[ -1 ];
          p[0] = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "H %s\n", line );
          }
          if ( line[0] == '\t' || line[0] == ' ' )
          {
            int i = 0;
            for ( ; line[ i ]; i++ )
            {
              if ( line[ i ] == '\t' )
                line[ i ] = ' ';
              // i++;
            }
            if ( full_line == 0 )
              HTSACopy( &full_line, line );
            else
              HTSACat( &full_line, line );
          }
          else
            HTSACopy( &full_line, line );
          if ( full_line[0] == '.' )
          {
            if ( 31 <= full_line[1] )
            {
              done = 1;
              break;
            }
          }
          else
          if ( full_line[0] < 31 )
          {
            if ( match( full_line, "SUBJECT:" ) & 255 )
            {
              HTSACopy( &subject, HTStrip( strchr( full_line, ':' ) + 1 ) );
              decode_mime( &subject );
            }
            else
            {
              if ( match( full_line, "DATE:" ) & 255 )
              {
                HTSACopy( &date, HTStrip( strchr( full_line, ':' ) + 1 ) );
              }
              else
              {
                if ( match( full_line, "ORGANIZATION:" ) & 255 )
                {
                  HTSACopy( &organization, HTStrip( strchr( full_line, ':' ) + 1 ) );
                  decode_mime( &organization );
                }
                else
                {
                  if ( match( full_line, "FROM:" ) & 255 )
                  {
                    HTSACopy( &from, HTStrip( strchr( full_line, ':' ) + 1 ) );
                    decode_mime( &from );
                  }
                  else
                  {
                    if ( match( full_line, "REPLY-TO:" ) & 255 )
                    {
                      HTSACopy( &replyto, HTStrip( strchr( full_line, ':' ) + 1 ) );
                      decode_mime( &replyto );
                    }
                    else
                    {
                      if ( match( full_line, "NEWSGROUPS:" ) & 255 )
                      {
                        HTSACopy( &newsgroups, HTStrip( strchr( full_line, ':' ) + 1 ) );
                      }
                      else
                      {
                        if ( match( full_line, "REFERENCES:" ) & 255 )
                        {
                          HTSACopy( &references, HTStrip( strchr( full_line, ':' ) + 1 ) );
                        }
                        else
                        {
                          if ( match( full_line, "FOLLOWUP-TO:" ) & 255 )
                          {
                            HTSACopy( &followupto, HTStrip( strchr( full_line, ':' ) + 1 ) );
                          }
                          else
                          {
                            if ( match( full_line, "MESSAGE-ID:" ) & 255 )
                            {
                              char *msgid = HTStrip( &full_line[11] );
                              if ( msgid[0] == '<' && *(char*)(msgid + strlen( msgid ) + -1) == '>' )
                              {
                                msgid++;
                                HTAnchor_setMessageID( thisanchor, msgid );
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
          p = line;
        }
      }
    }
    if ( full_line )
    {
      free( full_line );
      full_line = 0;
    }
    targetClass.start_element( target, 53, 0, 0, -1, 0 );
    targetClass.put_character( target, '\n' );
    targetClass.start_element( target, 110, 0, 0, -1, 0 );
    if ( subject && subject[0] )
      targetClass.put_string( target, subject );
    else
      targetClass.put_string( target, "No Subject" );
    targetClass.end_element( target, 110, 0 );
    targetClass.put_character( target, '\n' );
    if ( from || replyto )
    {
      char *temp = 0;
      HTSACopy( &temp, author_address( from ) );
      HTSACopy( &href, "mailto:" );
      if ( strchr( temp, '%' ) || strchr( temp, '?' ) )
      {
        cp = HTEscape( temp, 2 );
        HTSACat( &href, cp );
        if ( cp )
        {
          free( cp );
          cp = 0;
        }
      }
      else
        HTSACat( &href, temp );
      start_link( href, "made" );
      targetClass.put_character( target, '\n' );
      if ( temp )
      {
        free( temp );
      }
    }
    targetClass.end_element( target, 53, 0 );
    targetClass.put_character( target, '\n' );
    targetClass.start_element( target, 47, 0, 0, -1, 0 );
    if ( subject && subject[0] )
      targetClass.put_string( target, subject );
    else
      targetClass.put_string( target, "No Subject" );
    targetClass.end_element( target, 47, 0 );
    targetClass.put_character( target, '\n' );
    if ( subject && subject )
    {
      free( subject );
      subject = 0;
    }
    targetClass.start_element( target, 36, 0, 0, -1, 0 );
    targetClass.put_character( target, '\n' );
    if ( from || replyto )
    {
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "From:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, ' ' );
      if ( from )
        targetClass.put_string( target, from );
      else
        targetClass.put_string( target, replyto );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
      if ( replyto == 0 )
        HTSACopy( &replyto, from );
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "Reply to:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, ' ' );
      start_anchor( href );
      if ( replyto[0] != '<' )
      {
        ebx( target, author_name( replyto ) );
      }
      else
      {
        ebx( target, author_address( replyto ) );
      }
      targetClass.end_element( target, 0, 0 );
      targetClass.start_element( target, 20, 0, 0, -1, 0 );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
      if ( from )
      {
        free( from );
        from = 0;
      }
      if ( replyto )
      {
        free( replyto );
        replyto = 0;
      }
    }
    if ( date )
    {
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "Date:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, ' ' );
      targetClass.put_string( target, date );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
      if ( date )
      {
        free( date );
        date = 0;
      }
    }
    if ( organization )
    {
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "Organization:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, ' ' );
      targetClass.put_string( target, organization );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
      if ( organization )
      {
        free( organization );
        organization = 0;
      }
    }
    if ( newsgroups )
    {
      cp = strchr( newsgroups, '/' );
      if ( cp == 0 )
      {
        cp = strchr( newsgroups, '(' );
        if ( cp )
          goto B335;
      }
B335:;
      cp[0] = 0;
    }
    if ( newsgroups && !newsgroups[0] && newsgroups )
    {
      free( newsgroups );
      newsgroups = 0;
    }
    if ( followupto )
    {
      cp = strchr( followupto, '/' );
      if ( cp == 0 )
      {
        cp = strchr( followupto, '(' );
        if ( cp )
          goto B342;
      }
B342:;
      cp[0] = 0;
    }
    if ( followupto && !followupto[0] && followupto )
    {
      free( followupto );
      followupto = 0;
    }
    if ( newsgroups && HTCanPost )
    {
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "Newsgroups:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, '\n' );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.start_element( target, 30, 0, 0, -1, 0 );
      write_anchors( newsgroups );
      if ( tags[30].contents )
        targetClass.end_element( target, 30, 0 );
      targetClass.put_character( target, '\n' );
    }
    if ( followupto && strcasecomp( followupto, "poster" ) == 0 )
    {
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "Followup to:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, ' ' );
      if ( href )
      {
        start_anchor( href );
        targetClass.put_string( target, "poster" );
        targetClass.end_element( target, 0, 0 );
      }
      else
        targetClass.put_string( target, "poster" );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
      if ( followupto )
      {
        free( followupto );
        followupto = 0;
      }
    }
    if ( newsgroups && HTCanPost )
    {
      if ( strncasecomp( NewsHREF, "snews:", 6 ) == 0 )
        HTSACopy( &href, "snewsreply://" );
      else
        HTSACopy( &href, "newsreply://" );
      HTSACat( &href, NewsHost );
      HTSACat( &href, "/" );
      HTSACat( &href, newsgroups );
      if ( href[0] == 'n' )
      {
        ccp = HTAnchor_messageID( thisanchor );
        if ( ccp && ccp[0] )
        {
          HTSACat( &href, ";ref=" );
          if ( strchr( ccp, '<' ) || strchr( ccp, '&' ) || strchr( ccp, ' ' ) || strchr( ccp, ':' ) || strchr( ccp, '/' ) || strchr( ccp, '%' ) || strchr( ccp, ';' ) )
          {
            char *cp1 = HTEscape( ccp, 2 );
            HTSACat( &href, cp1 );
            if ( cp1 )
            {
              free( cp1 );
              cp1 = 0;
            }
          }
          else
            HTSACat( &href, ccp );
        }
      }
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "Followup to:" );
      targetClass.end_element( target, 8, 0 );
      targetClass.put_character( target, ' ' );
      start_anchor( href );
      if ( strchr( newsgroups, ',' ) )
        targetClass.put_string( target, "newsgroups" );
      else
        targetClass.put_string( target, "newsgroup" );
      targetClass.end_element( target, 0, 0 );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
    }
    if ( newsgroups )
    {
      free( newsgroups );
      newsgroups = 0;
    }
    if ( followupto )
    {
      free( followupto );
      followupto = 0;
    }
    if ( references )
    {
      targetClass.start_element( target, 37, 0, 0, -1, 0 );
      targetClass.start_element( target, 8, 0, 0, -1, 0 );
      targetClass.put_string( target, "References:" );
      targetClass.end_element( target, 8, 0 );
      if ( tags[37].contents )
        targetClass.end_element( target, 37, 0 );
      targetClass.put_character( target, '\n' );
      targetClass.start_element( target, 30, 0, 0, -1, 0 );
      write_anchors( references );
      if ( tags[30].contents )
        targetClass.end_element( target, 30, 0 );
      targetClass.put_character( target, '\n' );
      if ( references )
      {
        free( references );
        references = 0;
      }
    }
    targetClass.end_element( target, 36, 0 );
    targetClass.put_character( target, '\n' );
    if ( href )
    {
      free( href );
      href = 0;
    }
  }
  if ( rawtext == 0 )
  {
    if ( diagnostic )
    {
      targetClass.start_element( target, 117, 0, 0, -1, 0 );
      targetClass.put_character( target, '\n' );
    }
    else
    {
      targetClass.start_element( target, 86, 0, 0, -1, 0 );
      targetClass.put_character( target, '\n' );
    }
  }
  p = line;
  while ( done == 0 )
  {
    int ich = HTGetCharacter( );
    p[0] = ich;
    p++;
    if ( ich == -1 )
    {
      if ( interrupted_in_htgetcharacter )
      {
        interrupted_in_htgetcharacter = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTNews: Interrupted on read, closing socket %d\n", s );
        }
        close( s );
        s = -1;
        return -29998;
      }
      else
      {
        abort_socket( );
        return 200;
      }
    }
    else
    {
      if ( (unsigned char)( ich ) != '\n' && line[512] != p )
        continue;
      else
      {
        p[0] = 0;
        p++;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "B %s", line );
        }
        if ( line[0] == '.' )
        {
          if ( 31 <= line[1] )
          {
            done = 1;
            break;
          }
          else
          if ( rawtext )
            rawtargetClass.put_string( rawtarget, &line[1] );
          else
            targetClass.put_string( target, &line[1] );
        }
        else
        if ( rawtext )
          rawtargetClass.put_string( rawtarget, line );
        else
        if ( diagnostic || scan_for_buried_news_references == 0 )
          targetClass.put_string( target, line );
        else
        {
          char *l = line;
          char *p2;
          for ( ; p2;  )
          {
            char *q = strrchr( p2, '>' );
            char *at = strrchr( p2, '@' );
            if ( q && at && at < q )
            {
              char c = q[1];
              q[1] = 0;
              p2 += 7;
              p2[0] = 0;
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
              p2[0] = '<';
              q[0] = 0;
              start_anchor( &p2[1] );
              q[0] = '>';
              targetClass.put_string( target, p2 );
              targetClass.end_element( target, 0, 0 );
              q[1] = c;
              l = &q[1];
            }
            else
            break;
          }
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
        }
        p = line;
      }
    }
  }
  if ( rawtext )
    return 200;
  else
  {
    if ( diagnostic )
      targetClass.end_element( target, 117, 0 );
    else
      targetClass.end_element( target, 86, 0 );
    targetClass.put_character( target, '\n' );
    return 200;
  }
}
int read_list( char *arg )
{
  int eax;
  char line[513];
  char *p;
  BOOLEAN done = 0;
  BOOLEAN head = 0;
  BOOLEAN tail = 0;
  BOOLEAN skip_this_line = 0;
  BOOLEAN skip_rest_of_line = 0;
  int listing = 0;
  char *pattern = 0;
  int len = 0;
  if ( arg && strlen( arg ) > 1 )
  {
    if ( arg[0] == '*' )
    {
      tail = 1;
      HTSACopy( &pattern, &arg[1] );
    }
    else
    {
      if ( *(char*)(arg + strlen( arg )) == '*' )
      {
        head = 1;
        HTSACopy( &pattern, arg );
      }
    }
    if ( tail || head )
    {
      len = strlen( pattern );
    }
  }
  targetClass.start_element( target, 53, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 110, 0, 0, -1, 0 );
  targetClass.put_string( target, "Newsgroups" );
  targetClass.end_element( target, 110, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 53, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 47, 0, 0, -1, 0 );
  targetClass.put_string( target, "Newsgroups" );
  targetClass.end_element( target, 47, 0 );
  targetClass.put_character( target, '\n' );
  p = line;
  targetClass.start_element( target, 36, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  while ( done == 0 )
  {
    int ich = HTGetCharacter( );
    char ch = ich;
    if ( ich == -1 )
    {
      if ( interrupted_in_htgetcharacter )
      {
        interrupted_in_htgetcharacter = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTNews: Interrupted on read, closing socket %d\n", s );
        }
        close( s );
        s = -1;
        return -29998;
      }
      else
      {
        abort_socket( );
        if ( pattern )
        {
          free( pattern );
          pattern = 0;
        }
        return 200;
      }
    }
    else
    {
      if ( skip_this_line )
      {
        if ( ch == '\n' )
        {
          skip_this_line = skip_rest_of_line = 0;
          p = line;
        }
      }
      else
      {
        if ( skip_rest_of_line )
        {
          if ( ch != '\n' )
            continue;
        }
        else
        if ( line[512] == p )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "b %.*s%c[...]\n", 512, line, ch );
          }
          p[0] = 0;
          if ( ch != '\n' )
          {
            if ( ' ' <= ch )
            {
              ch = '\n';
              skip_this_line = 1;
            }
            else
            {
              if ( strchr( line, ' ' ) == 0 && strchr( line, '\t' ) == 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTNews..... group name too long, discarding.\n" );
                }
                skip_this_line = 1;
              }
              else
                skip_rest_of_line = 1;
            }
          }
        }
        else
        {
          p[0] = ch;
          p++;
        }
        if ( ch != '\n' )
          continue;
        else
        {
          skip_rest_of_line = 0;
          p[0] = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "B %s", line );
          }
          if ( line[0] == '.' )
          {
            if ( 31 <= line[1] )
            {
              done = 1;
              break;
            }
            else
            {
              targetClass.start_element( target, 37, 0, 0, -1, 0 );
              targetClass.put_string( target, &line[1] );
              if ( tags[37].contents )
                targetClass.end_element( target, 37, 0 );
            }
          }
          else
          if ( line[0] == '#' )
          {
            p = line;
          }
          else
          {
            int i = 0;
            for ( ; line[ i ] && line[ i ] < ' '; i++ )
            {
              // i++;
            }
            if ( line[ i ] )
            {
              line[ i ] = 0;
              if ( ( head && strncasecomp( line, pattern, len ) ) || ( tail && ( i < len || strcasecomp( &line[ i - len ], pattern ) ) ) )
              {
                p = line;
              }
              else
              {
                targetClass.start_element( target, 37, 0, 0, -1, 0 );
                write_anchor( line, line );
                listing++;
                if ( tags[37].contents )
                  targetClass.end_element( target, 37, 0 );
                targetClass.put_character( target, '\n' );
                targetClass.start_element( target, 30, 0, 0, -1, 0 );
                targetClass.put_string( target, &line[ i + 1 ] );
                if ( tags[30].contents )
                  targetClass.end_element( target, 30, 0 );
              }
            }
            else
            if ( ( head && strncasecomp( line, pattern, len ) ) || ( tail && ( i < len || strcasecomp( &line[ i - len ], pattern ) ) ) )
            {
              p = line;
            }
            else
            {
              targetClass.start_element( target, 37, 0, 0, -1, 0 );
              write_anchor( line, line );
              if ( tags[37].contents )
                targetClass.end_element( target, 37, 0 );
              listing++;
            }
          }
          p = line;
        }
      }
    }
  }
  if ( listing == 0 )
  {
    char *msg = 0;
    targetClass.start_element( target, 37, 0, 0, -1, 0 );
    HTSprintf0( &msg, gettext( "No matches for: %s" ), arg );
    targetClass.put_string( target, msg );
    if ( tags[37].contents )
      targetClass.end_element( target, 37, 0 );
    if ( msg )
    {
      free( msg );
    }
  }
  targetClass.end_element( target, 36, 0 );
  targetClass.put_character( target, '\n' );
  if ( pattern )
  {
    free( pattern );
    pattern = 0;
  }
  return 200;
}
int read_group( char *groupName, int first_required, int last_required )
{
  int eax;
  char line[513];
  char *author = 0;
  char *subject = 0;
  char *date = 0;
  int i;
  char *p;
  BOOLEAN done;
  char buffer[513];
  char *temp = 0;
  char *reference = 0;
  int art;
  int status, count, first, last;
  targetClass.start_element( target, 53, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 110, 0, 0, -1, 0 );
  targetClass.put_string( target, "Newsgroup " );
  targetClass.put_string( target, groupName );
  targetClass.end_element( target, 110, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 53, 0 );
  targetClass.put_character( target, '\n' );
  sscanf( response_text, " %d %d %d %d", &status, &count, &first, &last );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Newsgroup status=%d, count=%d, (%d-%d) required:(%d-%d)\n", status, count, first, last, first_required, last_required );
  }
  if ( last == 0 )
  {
    ebx( target, gettext( "\nNo articles in this group.\n" ) );
  }
  else
  {
    if ( first_required < first )
      first_required = first;
    if ( last_required == 0 || last < last_required )
      last_required = last;
    if ( last_required < first_required )
    {
      ebx( target, gettext( "\nNo articles in this range.\n" ) );
    }
    else
    {
      if ( HTNewsMaxChunk < ( last_required - first_required ) + 1 )
        first_required = ( last_required - HTNewsChunkSize ) + 1;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "    Chunk will be (%d-%d)\n", first_required, last_required );
      }
      HTSprintf0( &temp, gettext( "%s,  Articles %d-%d" ), groupName, first_required, last_required );
      targetClass.start_element( target, 47, 0, 0, -1, 0 );
      targetClass.put_string( target, temp );
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
      targetClass.end_element( target, 47, 0 );
      targetClass.put_character( target, '\n' );
      if ( first < first_required )
      {
        int before;
        if ( first_required - HTNewsMaxChunk <= first )
          before = first;
        else
          before = first_required - HTNewsChunkSize;
        HTSprintf0( &dbuf, "%s%s/%d-%d", NewsHREF, groupName, before, first_required + -1 );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "    Block before is %s\n", dbuf );
        }
        targetClass.put_character( target, '(' );
        start_anchor( dbuf );
        ebx( target, gettext( "Earlier articles" ) );
        targetClass.end_element( target, 0, 0 );
        targetClass.put_string( target, "...)\n" );
        targetClass.start_element( target, 83, 0, 0, -1, 0 );
        targetClass.put_character( target, '\n' );
      }
      done = 0;
      if ( done == 0 )
      {
        targetClass.start_element( target, 8, 0, 0, -1, 0 );
        if ( first_required == first && last_required == last )
        {
          ebx( target, gettext( "All available articles in " ) );
        }
        else
          targetClass.put_string( target, "Articles in " );
        targetClass.put_string( target, groupName );
        targetClass.end_element( target, 8, 0 );
        targetClass.put_character( target, '\n' );
        if ( LYListNewsNumbers )
          start_list( first_required );
        else
          targetClass.start_element( target, 114, 0, 0, -1, 0 );
        art = first_required;
        for ( ; art <= last_required; art++ )
        {
          sprintf( buffer, "HEAD %d%c%c", art, 13, 10 );
          status = response( buffer );
          if ( status == 221 )
          {
            p = line;
            done = 0;
            while ( done == 0 )
            {
              int ich = HTGetCharacter( );
              p[0] = ich;
              p++;
              if ( ich == -1 )
              {
                if ( interrupted_in_htgetcharacter )
                {
                  interrupted_in_htgetcharacter = 0;
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTNews: Interrupted on read, closing socket %d\n", s );
                  }
                  close( s );
                  s = -1;
                  if ( 0 ^ 0 )
                    break;
                  break;
                }
                else
                {
                  abort_socket( );
                }
              }
              else
              {
                if ( (unsigned char)( ich ) != '\n' && line[512] != p )
                  continue;
                else
                {
                  p = &p[ -1 ];
                  p[0] = 0;
                  p = line;
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "G %s\n", line );
                  }
                  switch ( line[0] + -46 )
                  {
                  default:
                    break;
                  case 0:
                    done = 31 <= line[1];
                    break;
                  case 37:
                  case 69:
                    if ( match( line, "SUBJECT:" ) & 255 )
                    {
                      HTSACopy( &subject, &line[9] );
                      decode_mime( &subject );
                    }
                    break;
                  case 31:
                  case 63:
                    if ( match( line, "MESSAGE-ID:" ) & 255 )
                    {
                      char *addr = HTStrip( &line[11] ) + 1;
                      HTSACopy( &reference, addr );
                    }
                    break;
                  case 24:
                  case 56:
                    if ( match( line, "FROM:" ) & 255 )
                    {
                      char *p2;
                      HTSACopy( &author, strchr( line, ':' ) + 1 );
                      decode_mime( &author );
                      p2 = author + strlen( author ) + -1;
                      if ( p2[0] == '\n' )
                      {
                        p2[0] = 0;
                      }
                    }
                    break;
                  case 22:
                  case 54:
                    if ( LYListNewsDates && ( match( line, "DATE:" ) & 255 ) )
                    {
                      HTSACopy( &date, HTStrip( strchr( line, ':' ) + 1 ) );
                    }
                    break;
                  }
                }
              }
            }
            targetClass.put_character( target, '\n' );
            targetClass.start_element( target, 68, 0, 0, -1, 0 );
            p = decode_mime( &subject );
            HTSprintf0( &temp, "\"%s\"", "" );
            if ( reference )
            {
              write_anchor( temp, reference );
              if ( reference )
              {
                free( reference );
                reference = 0;
              }
            }
            else
              targetClass.put_string( target, temp );
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            if ( author )
            {
              targetClass.put_string( target, " - " );
              if ( LYListNewsDates )
                targetClass.start_element( target, 57, 0, 0, -1, 0 );
              ebx( target, decode_mime( &author ) );
              if ( LYListNewsDates )
                targetClass.end_element( target, 57, 0 );
              if ( author )
              {
                free( author );
                author = 0;
              }
            }
            if ( date )
            {
              if ( diagnostic == 0 )
              {
                i = 0;
                for ( ; date[ i ]; i++ )
                {
                  if ( date[ i ] == ' ' )
                    date[ i ] = 1;
                  // i++;
                }
              }
              sprintf( buffer, " [%.*s]", 509, date );
              targetClass.put_string( target, buffer );
              if ( date )
              {
                free( date );
                date = 0;
              }
            }
            if ( tags[68].contents )
              targetClass.end_element( target, 68, 0 );
          }
          else
          {
            if ( status == -29998 )
            {
              interrupted_in_htgetcharacter = 0;
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTNews: Interrupted on read, closing socket %d\n", s );
              }
              close( s );
              s = -1;
            }
            else
            {
              targetClass.put_character( target, '\n' );
              targetClass.start_element( target, 68, 0, 0, -1, 0 );
              targetClass.start_element( target, 57, 0, 0, -1, 0 );
              if ( LYListNewsNumbers )
                LYstrncpy( buffer, "Status:", 512 );
              else
                sprintf( buffer, "Status (ARTICLE %d):", art );
              targetClass.put_string( target, buffer );
              targetClass.end_element( target, 57, 0 );
              targetClass.put_character( target, ' ' );
              targetClass.put_string( target, response_text );
              if ( tags[68].contents )
                targetClass.end_element( target, 68, 0 );
            }
          }
          // art++;
        }
        if ( author )
        {
          free( author );
          author = 0;
        }
        if ( subject )
        {
          free( subject );
          subject = 0;
        }
      }
      targetClass.put_character( target, '\n' );
      if ( LYListNewsNumbers )
        targetClass.end_element( target, 80, 0 );
      else
        targetClass.end_element( target, 114, 0 );
      targetClass.put_character( target, '\n' );
      if ( last_required < last )
      {
        int after = last_required + HTNewsChunkSize;
        if ( last == after )
          HTSprintf0( &dbuf, "%s%s", NewsHREF, groupName );
        else
          HTSprintf0( &dbuf, "%s%s/%d-%d", NewsHREF, groupName, last_required + 1, after );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "    Block after is %s\n", dbuf );
        }
        targetClass.put_character( target, '(' );
        start_anchor( dbuf );
        ebx( target, gettext( "Later articles" ) );
        targetClass.end_element( target, 0, 0 );
        targetClass.put_string( target, "...)\n" );
      }
    }
  }
  if ( HTCanPost )
  {
    char *href = 0;
    targetClass.start_element( target, 54, 0, 0, -1, 0 );
    targetClass.put_character( target, '\n' );
    if ( strncasecomp( NewsHREF, "snews:", 6 ) == 0 )
      HTSACopy( &href, "snewspost://" );
    else
      HTSACopy( &href, "newspost://" );
    HTSACat( &href, NewsHost );
    HTSACat( &href, "/" );
    HTSACat( &href, groupName );
    start_anchor( href );
    ebx( target, gettext( "Post to " ) );
    targetClass.put_string( target, groupName );
    targetClass.end_element( target, 0, 0 );
    if ( href )
    {
      free( href );
      href = 0;
    }
  }
  else
    targetClass.start_element( target, 54, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
}
int HTLoadNews( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *stream )
{
  int eax;
  int ebp_1112;
  char command[262];
  char proxycmd[260];
  char groupName[256];
  int status;
  int retries;
  BOOLEAN normal_url;
  BOOLEAN group_wanted;
  BOOLEAN list_wanted;
  BOOLEAN post_wanted;
  BOOLEAN reply_wanted;
  BOOLEAN spost_wanted;
  BOOLEAN sreply_wanted;
  BOOLEAN head_wanted = 0;
  int first, last;
  char *cp = 0;
  char *ListArg = 0;
  char *ProxyHost = 0;
  char *ProxyHREF = 0;
  char *postfile = 0;
  diagnostic = format_out == WWW_SOURCE || format_out == HTAtom_for( "www/download" ) || format_out == HTAtom_for( "www/dump" ) ? 1 : 0;
  rawtext = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTNews: Looking for %s\n", arg );
  }
  if ( initialized == 0 )
  {
    initialized = initialize( );
  }
  if ( initialized == 0 )
    return -1;
  else
  {
    if ( NewsHREF )
    {
      free( NewsHREF );
      NewsHREF = 0;
    }
    command[0] = 0;
    command[261] = 0;
    proxycmd[0] = 0;
    proxycmd[259] = 0;
  {
    char *p1 = arg;
    normal_url = strncmp( arg, "news:", 5 ) == 0 || strncmp( arg, "nntp:", 5 ) == 0 ? 1 : 0;
    *(int*)&spost_wanted = 0;
    *(int*)&sreply_wanted = 0;
    *(int*)&post_wanted = 0;
    *(int*)&reply_wanted = 0;
    group_wanted = spost_wanted == 0 && sreply_wanted == 0 && post_wanted == 0 && reply_wanted == 0 && strchr( arg, '@' ) == 0 && strchr( arg, '*' ) == 0 ? 1 : 0;
    *(int*)&list_wanted = 0;
    if ( strncasecomp( arg, "snewspost:", 10 ) == 0 || strncasecomp( arg, "snewsreply:", 11 ) == 0 )
    {
      HTAlert( gettext( "This client does not contain support for posting to news with SSL." ) );
      return -29999;
    }
    else
    {
      if ( post_wanted || reply_wanted || spost_wanted || sreply_wanted )
      {
        p1 = strrchr( arg, '/' );
        if ( p1 )
          p1++;
        else
        {
          p1 = strrchr( arg, ':' );
          if ( p1 )
            p1++;
        }
        if ( p1 == 0 || p1[0] == 0 )
        {
          HTAlert( gettext( "Illegal URL: %s" ) );
          return -204;
        }
        else
        {
          cp = HTParse( arg, "", 8 );
          if ( cp == 0 || cp[0] == 0 )
          {
            if ( s >= 0 && NewsHost && strcasecomp( NewsHost, HTNewsHost ) )
            {
              close( s );
              s = -1;
            }
            HTSACopy( &NewsHost, HTNewsHost );
          }
          else
          {
            if ( s >= 0 && NewsHost && strcasecomp( NewsHost, cp ) )
            {
              close( s );
              s = -1;
            }
            HTSACopy( &NewsHost, cp );
          }
          if ( cp )
          {
            free( cp );
            cp = 0;
          }
          HTSprintf0( &NewsHREF, "%s://%.*s/", post_wanted == 0 ? reply_wanted == 0 ? "snewsreply" : "newreply" : "newspost", 247, NewsHost );
          if ( spost_wanted && strncasecomp( arg, "snewspost:", 10 ) )
          {
            p1 = strstr( arg, "snewspost:" );
          }
          if ( sreply_wanted && strncasecomp( arg, "snewsreply:", 11 ) )
          {
            p1 = strstr( arg, "snewsreply:" );
          }
        }
      }
      else
      {
        if ( strncasecomp( arg, "nntp:", 5 ) == 0 )
        {
          if ( arg[5] && strcmp( &arg[5], "/" ) && strcmp( &arg[5], "//" ) && strcmp( &arg[5], "///" ) )
          {
            if ( strncmp( &arg[5], "//", 2 ) == 0 )
            {
              cp = strchr( &arg[7], '/' );
              if ( cp == 0 || cp[1] == 0 )
                goto B118;
            }
            if ( arg[5] != '/' )
              p1 = &arg[5];
              cp = HTParse( arg, "", 8 );
              if ( cp == 0 || cp[0] == 0 )
              {
                if ( s >= 0 && NewsHost && strcasecomp( NewsHost, HTNewsHost ) )
                {
                  close( s );
                  s = -1;
                }
                HTSACopy( &NewsHost, HTNewsHost );
              }
              else
              {
                if ( s >= 0 && NewsHost && strcasecomp( NewsHost, cp ) )
                {
                  close( s );
                  s = -1;
                }
                HTSACopy( &NewsHost, cp );
              }
              if ( cp )
              {
                free( cp );
                cp = 0;
              }
              sprintf( command, "%s//%.*s/", "nntp:", 253, NewsHost );
              HTSACopy( &NewsHREF, command );
            else
            {
              if ( arg[5] == '/' && arg[6] != '/' )
                p1 = &arg[6];
              else
                p1 = &cp[1];
            }
          }
B118:;
          p1 = "*";
          group_wanted = 0;
          list_wanted = 1;
        }
        else
        {
          if ( strncasecomp( arg, "snews:", 6 ) == 0 )
          {
            HTAlert( gettext( "This client does not contain support for SNEWS URLs." ) );
            return -29999;
          }
          else
          {
            if ( strncasecomp( arg, "news:/", 6 ) == 0 )
            {
              if ( arg[6] && strcmp( &arg[6], "/" ) && strcmp( &arg[6], "//" ) )
              {
                if ( arg[6] == '/' )
                {
                  cp = strchr( &arg[7], '/' );
                  if ( cp == 0 || cp[1] == 0 )
                    goto B184;
                }
                if ( arg[6] != '/' )
                  p1 = &arg[6];
                  cp = HTParse( arg, "", 8 );
                  if ( cp == 0 || cp[0] == 0 )
                  {
                    if ( s >= 0 && NewsHost && strcasecomp( NewsHost, HTNewsHost ) )
                    {
                      close( s );
                      s = -1;
                    }
                    HTSACopy( &NewsHost, HTNewsHost );
                  }
                  else
                  {
                    if ( s >= 0 && NewsHost && strcasecomp( NewsHost, cp ) )
                    {
                      close( s );
                      s = -1;
                    }
                    HTSACopy( &NewsHost, cp );
                  }
                  if ( cp )
                  {
                    free( cp );
                    cp = 0;
                  }
                  sprintf( command, "news://%.*s/", 253, NewsHost );
                  HTSACopy( &NewsHREF, command );
                else
                  p1 = &cp[1];
              }
B184:;
              p1 = "*";
              group_wanted = 0;
              list_wanted = 1;
            }
            else
            {
              p1 = &arg[5];
              if ( p1[0] == 0 )
              {
                p1 = "*";
                group_wanted = 0;
                list_wanted = 1;
              }
              if ( s >= 0 && NewsHost && strcasecomp( NewsHost, HTNewsHost ) )
              {
                close( s );
                s = -1;
              }
              HTSACopy( &NewsHost, HTNewsHost );
              HTSACopy( &NewsHREF, "news:" );
            }
          }
        }
      }
      if ( strncasecomp( p1, "snews:", 6 ) == 0 || strncasecomp( p1, "snewspost:", 10 ) == 0 || strncasecomp( p1, "snewsreply:", 11 ) == 0 )
      {
        HTSACopy( &ProxyHost, NewsHost );
        cp = HTParse( p1, "", 8 );
        if ( cp && cp[0] )
        {
          sprintf( command, "%s//%.*s", "snews:", 252, cp );
          HTSACopy( &NewsHost, cp );
        }
        else
          sprintf( command, "%s//%.*s", "snews:", 252, NewsHost );
        command[260] = 0;
        if ( cp )
        {
          free( cp );
          cp = 0;
        }
        sprintf( proxycmd, "GET %.*s%c%c%c%c", 251, command, 13, 10, 13, 10 );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTNews: Proxy command is '%.*s'\n", strlen( proxycmd ) + -4, proxycmd );
        }
        strcat( command, "/" );
        HTSACopy( &ProxyHREF, NewsHREF );
        HTSACopy( &NewsHREF, command );
        if ( spost_wanted || sreply_wanted )
        {
          p1 = strrchr( arg, '/' );
          if ( p1 )
            p1++;
          else
          {
            p1 = strrchr( arg, ':' ) + 1;
          }
        }
        else
        {
          cp = strrchr( &p1[6], '/' );
          if ( cp == 0 || cp[1] == 0 )
          {
            p1 = "*";
            group_wanted = 0;
            list_wanted = 1;
          }
          else
            p1 = &cp[1];
        }
      }
      if ( post_wanted || reply_wanted || spost_wanted || sreply_wanted )
        memcpy( command, "POST", 5 );
      else
      if ( list_wanted )
      {
        if ( strlen( p1 ) > 249 )
        {
          if ( ProxyHost )
          {
            free( ProxyHost );
            ProxyHost = 0;
          }
          if ( ProxyHREF )
          {
            free( ProxyHREF );
            ProxyHREF = 0;
          }
          HTAlert( gettext( "URL too long" ) );
          return -400;
        }
        else
          sprintf( command, "XGTITLE %.*s", 251, p1 );
      }
      else
      if ( group_wanted )
      {
        char *slash = strchr( p1, '/' );
        first = 0;
        last = 0;
        if ( slash )
        {
          slash[0] = 0;
          if ( strlen( p1 ) > 255 )
          {
            if ( ProxyHost )
            {
              free( ProxyHost );
              ProxyHost = 0;
            }
            if ( ProxyHREF )
            {
              free( ProxyHREF );
              ProxyHREF = 0;
            }
            HTAlert( gettext( "URL too long" ) );
            return -400;
          }
          else
          {
            LYstrncpy( groupName, p1, 255 );
            slash[0] = '/';
            sscanf( &slash[1], "%d-%d", &first, &last );
            if ( first > 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( slash[1] * 2 )) & 2048 ) && ( strchr( &slash[1], '-' ) == 0 || last == first ) )
              last = -1;
          }
        }
        else
        {
          if ( strlen( p1 ) > 255 )
          {
            if ( ProxyHost )
            {
              free( ProxyHost );
              ProxyHost = 0;
            }
            if ( ProxyHREF )
            {
              free( ProxyHREF );
              ProxyHREF = 0;
            }
            HTAlert( gettext( "URL too long" ) );
            return -400;
          }
          else
            LYstrncpy( groupName, p1, 255 );
        }
        sprintf( command, "GROUP %.*s", 253, groupName );
      }
      else
      {
        int add_open = strchr( p1, '<' ) == 0;
        int add_close = strchr( p1, '>' ) == 0;
        if ( add_close + add_open + strlen( p1 ) > 251 )
        {
          if ( ProxyHost )
          {
            free( ProxyHost );
            ProxyHost = 0;
          }
          if ( ProxyHREF )
          {
            free( ProxyHREF );
            ProxyHREF = 0;
          }
          HTAlert( gettext( "URL too long" ) );
          return -400;
        }
        else
        {
          sprintf( command, "ARTICLE %s%.*s%s", "", ( -11 - add_open - add_close ) + 262, p1, "" );
        }
      }
    {
      char *p = &command[ strlen( command ) ];
      p[0] = '\r';
      p++;
      p[0] = '\n';
      p++;
      p[0] = 0;
      ebp_1112 = p[1];
      HTSACopy( &ListArg, p1 );
      if ( arg[0] == 0 )
      {
        if ( NewsHREF )
        {
          free( NewsHREF );
          NewsHREF = 0;
        }
        if ( ProxyHost )
        {
          free( ProxyHost );
          ProxyHost = 0;
        }
        if ( ProxyHREF )
        {
          free( ProxyHREF );
          ProxyHREF = 0;
        }
        if ( ListArg )
        {
          free( ListArg );
          ListArg = 0;
        }
        return 0;
      }
      else
      {
        if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 && ( group_wanted == 0 || last == -1 ) && list_wanted == 0 )
        {
          head_wanted = anAnchor->isHEAD;
          if ( head_wanted && strncmp( command, "ARTICLE ", 8 ) == 0 )
          {
            memcpy( command, "HEAD ", 6 );
            cp = &command[5];
            while ( cp[0] = cp[3], cp[0] )
            {
              cp++;
            }
          }
          *(int*)&rawtext = 0;
        }
        if ( rawtext )
        {
          node_anchor = anAnchor;
          rawtarget = HTStreamStack( HTAtom_for( "text/plain" ), format_out, &stream[0]._HTStream, anAnchor );
          if ( rawtarget == 0 )
          {
            if ( NewsHost )
            {
              free( NewsHost );
              NewsHost = 0;
            }
            if ( NewsHREF )
            {
              free( NewsHREF );
              NewsHREF = 0;
            }
            if ( ProxyHost )
            {
              free( ProxyHost );
              ProxyHost = 0;
            }
            if ( ProxyHREF )
            {
              free( ProxyHREF );
              ProxyHREF = 0;
            }
            if ( ListArg )
            {
              free( ListArg );
              ListArg = 0;
            }
            HTAlert( gettext( "No target for raw text!" ) );
            return -29999;
          }
          else
          {
            rawtargetClass.name = (char*)rawtarget[0]._HTStream;
            rawtargetClass._free = &rawtarget[0]._HTStream;
            rawtargetClass._abort = &rawtarget[0]._HTStream;
            rawtargetClass.put_character = &rawtarget[0]._HTStream;
            rawtargetClass.put_string = &rawtarget[0]._HTStream;
            rawtargetClass.put_block = &rawtarget[0]._HTStream;
          }
        }
        else
        if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
        {
          node_anchor = anAnchor;
          target = HTML_new( anAnchor, format_out, &stream[0]._HTStream );
          targetClass.name = (char*)target[0]._HTStructured;
          targetClass._free = &target[0]._HTStructured;
          targetClass._abort = &target[0]._HTStructured;
          targetClass.put_character = &target[0]._HTStructured;
          targetClass.put_string = &target[0]._HTStructured;
          targetClass.put_block = &target[0]._HTStructured;
          targetClass.start_element = &target[0]._HTStructured;
          targetClass.end_element = &target[0]._HTStructured;
          targetClass.put_entity = &target[0]._HTStructured;
        }
        retries = 0;
        for ( ; retries <= 1; retries++ )
        {
          if ( s < 0 )
          {
            char url[260];
            if ( strcmp( NewsHREF, "news:" ) == 0 )
              sprintf( url, "lose://%.*s/", 251, NewsHost );
            else
            if ( ProxyHREF )
              sprintf( url, "%.*s", 259, ProxyHREF );
            else
              sprintf( url, "%.*s", 259, NewsHREF );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "News: doing HTDoConnect on '%s'\n", url );
            }
            mustshow = 1;
            HTProgress( gettext( "Connecting to NewsHost ..." ) );
            status = HTDoConnect( url, "NNTP", 119, &s );
            if ( status == -29998 )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTNews: Interrupted on connect; recovering cleanly.\n" );
              }
              mustshow = 1;
              HTProgress( gettext( "Connection interrupted." ) );
              if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
              {
                if ( rawtext )
                  rawtargetClass._abort( rawtarget, 0 );
                else
                  targetClass._abort( target, 0 );
              }
              if ( NewsHost )
              {
                free( NewsHost );
                NewsHost = 0;
              }
              if ( NewsHREF )
              {
                free( NewsHREF );
                NewsHREF = 0;
              }
              if ( ProxyHost )
              {
                free( ProxyHost );
                ProxyHost = 0;
              }
              if ( ProxyHREF )
              {
                free( ProxyHREF );
                ProxyHREF = 0;
              }
              if ( ListArg )
              {
                free( ListArg );
                ListArg = 0;
              }
              if ( postfile )
              {
                remove( postfile );
                if ( postfile )
                {
                  free( postfile );
                  postfile = 0;
                }
              }
              return -29999;
            }
            else
            {
              if ( status < 0 )
              {
                close( s );
                s = -1;
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTNews: Unable to connect to news host.\n" );
                }
                if ( retries > 0 )
                {
                  if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
                  {
                    if ( rawtext )
                      rawtargetClass._abort( rawtarget, 0 );
                    else
                      targetClass._abort( target, 0 );
                  }
                  HTSprintf0( &dbuf, gettext( "Could not access %s." ), NewsHost );
                  if ( NewsHost )
                  {
                    free( NewsHost );
                    NewsHost = 0;
                  }
                  if ( NewsHREF )
                  {
                    free( NewsHREF );
                    NewsHREF = 0;
                  }
                  if ( ProxyHost )
                  {
                    free( ProxyHost );
                    ProxyHost = 0;
                  }
                  if ( ProxyHREF )
                  {
                    free( ProxyHREF );
                    ProxyHREF = 0;
                  }
                  if ( ListArg )
                  {
                    free( ListArg );
                    ListArg = 0;
                  }
                  if ( postfile )
                  {
                    remove( postfile );
                    if ( postfile )
                    {
                      free( postfile );
                      postfile = 0;
                    }
                  }
                }
                else
                {
                  // retries++;
                }
              }
              else
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTNews: Connected to news host %s.\n", NewsHost );
                }
                HTInitInput( s );
                if ( proxycmd[0] )
                {
                  status = write( s, proxycmd, strlen( proxycmd ) );
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTNews: Proxy command returned status '%d'.\n", status );
                  }
                }
                status = response( 0 );
                if ( status + -200 > 99 )
                {
                  close( s );
                  s = -1;
                  if ( status == -29998 )
                  {
                    mustshow = 1;
                    HTProgress( gettext( "Connection interrupted." ) );
                    if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
                    {
                      if ( rawtext )
                        rawtargetClass._abort( rawtarget, 0 );
                      else
                        targetClass._abort( target, 0 );
                    }
                    if ( NewsHost )
                    {
                      free( NewsHost );
                      NewsHost = 0;
                    }
                    if ( NewsHREF )
                    {
                      free( NewsHREF );
                      NewsHREF = 0;
                    }
                    if ( ProxyHost )
                    {
                      free( ProxyHost );
                      ProxyHost = 0;
                    }
                    if ( ProxyHREF )
                    {
                      free( ProxyHREF );
                      ProxyHREF = 0;
                    }
                    if ( ListArg )
                    {
                      free( ListArg );
                      ListArg = 0;
                    }
                    if ( postfile )
                    {
                      remove( postfile );
                      if ( postfile )
                      {
                        free( postfile );
                        postfile = 0;
                      }
                    }
                    return -29999;
                  }
                  else
                  {
                    if ( retries > 0 )
                    {
                      if ( ProxyHost )
                      {
                        free( ProxyHost );
                        ProxyHost = 0;
                      }
                      if ( ProxyHREF )
                      {
                        free( ProxyHREF );
                        ProxyHREF = 0;
                      }
                      if ( ListArg )
                      {
                        free( ListArg );
                        ListArg = 0;
                      }
                      if ( postfile )
                      {
                        free( postfile );
                        postfile = 0;
                      }
                      if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
                      {
                        if ( rawtext )
                          rawtargetClass._abort( rawtarget, 0 );
                        else
                          targetClass._abort( target, 0 );
                      }
                      if ( response_text[0] )
                      {
                        HTSprintf0( &dbuf, gettext( "Can't read news info.  News host %.20s responded: %.200s" ), NewsHost, response_text[0] );
                      }
                      else
                      {
                        HTSprintf0( &dbuf, gettext( "Can't read news info, empty response from host %s" ), NewsHost );
                      }
                    }
                  }
                }
                else
                {
                  if ( status == 200 )
                    HTCanPost = 1;
                  else
                  {
                    HTCanPost = 0;
                    if ( post_wanted || reply_wanted || spost_wanted || sreply_wanted )
                    {
                      HTAlert( gettext( "Cannot POST to this host." ) );
                      if ( NewsHREF )
                      {
                        free( NewsHREF );
                        NewsHREF = 0;
                      }
                      if ( ProxyHREF )
                      {
                        HTSACopy( &NewsHost, ProxyHost );
                        if ( ProxyHost )
                        {
                          free( ProxyHost );
                          ProxyHost = 0;
                        }
                        if ( ProxyHREF )
                        {
                          free( ProxyHREF );
                          ProxyHREF = 0;
                        }
                      }
                      if ( ListArg )
                      {
                        free( ListArg );
                        ListArg = 0;
                      }
                      if ( postfile )
                      {
                        remove( postfile );
                        if ( postfile )
                        {
                          free( postfile );
                          postfile = 0;
                        }
                      }
                      return -29999;
                    }
                  }
                }
              }
            }
          }
          if ( post_wanted || reply_wanted || spost_wanted || sreply_wanted )
          {
            if ( HTCanPost == 0 )
            {
              HTAlert( gettext( "Cannot POST to this host." ) );
              if ( NewsHREF )
              {
                free( NewsHREF );
                NewsHREF = 0;
              }
              if ( ProxyHREF )
              {
                HTSACopy( &NewsHost, ProxyHost );
                if ( ProxyHost )
                {
                  free( ProxyHost );
                  ProxyHost = 0;
                }
                if ( ProxyHREF )
                {
                  free( ProxyHREF );
                  ProxyHREF = 0;
                }
              }
              if ( ListArg )
              {
                free( ListArg );
                ListArg = 0;
              }
              if ( postfile )
              {
                remove( postfile );
                if ( postfile )
                {
                  free( postfile );
                  postfile = 0;
                }
              }
              return -29999;
            }
            else
            {
              if ( postfile == 0 )
              {
                postfile = LYNewsPost( ListArg, 0 );
              }
              if ( postfile == 0 )
              {
                HTProgress( gettext( "Cancelled!!!" ) );
                if ( NewsHREF )
                {
                  free( NewsHREF );
                  NewsHREF = 0;
                }
                if ( ProxyHREF )
                {
                  HTSACopy( &NewsHost, ProxyHost );
                  if ( ProxyHost )
                  {
                    free( ProxyHost );
                    ProxyHost = 0;
                  }
                  if ( ProxyHREF )
                  {
                    free( ProxyHREF );
                    ProxyHREF = 0;
                  }
                }
                if ( ListArg )
                {
                  free( ListArg );
                  ListArg = 0;
                }
                return -29999;
              }
              else
              {
                while ( status == -29998 )
                {
                  if ( status < 0 )
                  {
                    if ( retries > 0 )
                    {
                      if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
                      {
                        if ( rawtext )
                          rawtargetClass._abort( rawtarget, 0 );
                        else
                          targetClass._abort( target, 0 );
                      }
                      if ( NewsHREF )
                      {
                        free( NewsHREF );
                        NewsHREF = 0;
                      }
                      if ( ProxyHREF )
                      {
                        HTSACopy( &NewsHost, ProxyHost );
                        if ( ProxyHost )
                        {
                          free( ProxyHost );
                          ProxyHost = 0;
                        }
                        if ( ProxyHREF )
                        {
                          free( ProxyHREF );
                          ProxyHREF = 0;
                        }
                      }
                      if ( ListArg )
                      {
                        free( ListArg );
                        ListArg = 0;
                      }
                      if ( postfile )
                      {
                        remove( postfile );
                        if ( postfile )
                        {
                          free( postfile );
                          postfile = 0;
                        }
                      }
                      return -29999;
                    }
                  }
                  else
                  {
                    if ( status == 411 && group_wanted && strncmp( command, "GROUP ", 6 ) == 0 && strncasecomp( &response_text[3], " No such group ", 15 ) == 0 && strcmp( &response_text[18], groupName ) == 0 )
                      HTAlert( response_text );
                    else
                    {
                      if ( status == 430 && group_wanted == 0 && list_wanted == 0 && strncmp( command, "ARTICLE &lt;", 9 ) == 0 && strcasecomp( &response_text[3], " No such article" ) == 0 )
                        HTAlert( response_text );
                      else
                      {
                        if ( status + -200 > 99 && status != 340 && status != 480 )
                        {
                          if ( retries )
                          {
                            if ( list_wanted && strncmp( command, "XGTITLE", 7 ) == 0 )
                            {
                              sprintf( command, "LIST NEWSGROUPS%c%c", 13, 10 );
                            }
                            else
                              HTAlert( response_text );
                          }
                          else
                          {
                            mustshow = 1;
                            HTProgress( response_text );
                          }
                          close( s );
                          s = -1;
                        }
                        else
                        {
                          if ( status == 480 )
                          {
                            NNTPAuthResult auth_result;
                            if ( list_wanted && strncmp( command, "XGTITLE", 7 ) == 0 && strstr( response_text, "uthenticat" ) == 0 && strstr( response_text, "uthor" ) == 0 )
                            {
                              sprintf( command, "LIST NEWSGROUPS%c%c", 13, 10 );
                            }
                            else
                            {
                              auth_result = HTHandleAuthInfo( NewsHost );
                              if ( auth_result != NNTPAUTH_OK )
                              {
                                if ( auth_result == NNTPAUTH_CLOSE )
                                {
                                  if ( s != -1 && ProxyHost == 0 && ProxyHREF == 0 )
                                  {
                                    close( s );
                                    s = -1;
                                  }
                                  if ( retries <= 0 )
                                    continue;
                                }
                                status = -29999;
                              }
                            }
                          }
                          else
                          {
                            if ( post_wanted || reply_wanted || spost_wanted || sreply_wanted )
                            {
                              if ( status != 340 )
                              {
                                HTAlert( gettext( "Cannot POST to this host." ) );
                                if ( postfile )
                                  remove( postfile );
                              }
                              else
                                post_article( postfile );
                              if ( postfile )
                              {
                                free( postfile );
                                postfile = 0;
                              }
                              status = -29999;
                            }
                            else
                            {
                              if ( list_wanted )
                              {
                                mustshow = 1;
                                HTProgress( gettext( "Reading list of available newsgroups." ) );
                                status = read_list( ListArg );
                              }
                              else
                              {
                                if ( group_wanted )
                                {
                                  if ( last < 0 )
                                  {
                                    sprintf( command, "%s %d%c%c", "ARTICLE", first, 13, 10 );
                                    group_wanted = 0;
                                    retries = 2;
                                  }
                                  else
                                  {
                                    mustshow = 1;
                                    HTProgress( gettext( "Reading list of articles in newsgroup." ) );
                                    status = read_group( groupName, first, last );
                                  }
                                }
                                else
                                {
                                  mustshow = 1;
                                  HTProgress( gettext( "Reading news article." ) );
                                  status = read_article( anAnchor );
                                }
                              }
                            }
                          }
                          if ( status == -29998 )
                          {
                            mustshow = 1;
                            HTProgress( gettext( "Connection interrupted." ) );
                            status = 200;
                          }
                          if ( post_wanted == 0 && reply_wanted == 0 && spost_wanted == 0 && sreply_wanted == 0 )
                          {
                            if ( status == -29999 )
                            {
                              if ( rawtext )
                                rawtargetClass._abort( rawtarget, 0 );
                              else
                                targetClass._abort( target, 0 );
                            }
                            else
                            if ( rawtext )
                              rawtargetClass._free( rawtarget );
                            else
                              targetClass._free( target );
                          }
                          if ( NewsHREF )
                          {
                            free( NewsHREF );
                            NewsHREF = 0;
                          }
                          if ( ProxyHREF )
                          {
                            HTSACopy( &NewsHost, ProxyHost );
                            if ( ProxyHost )
                            {
                              free( ProxyHost );
                              ProxyHost = 0;
                            }
                            if ( ProxyHREF )
                            {
                              free( ProxyHREF );
                              ProxyHREF = 0;
                            }
                          }
                          if ( ListArg )
                          {
                            free( ListArg );
                            ListArg = 0;
                          }
                          if ( postfile )
                          {
                            remove( postfile );
                            if ( postfile )
                            {
                              free( postfile );
                              postfile = 0;
                            }
                          }
                          return status;
                        }
                      }
                    }
                  }
                }
                mustshow = 1;
                HTProgress( gettext( "Connection interrupted." ) );
              }
            }
          }
          else
          {
            char buffer[20];
            sprintf( buffer, "mode reader%c%c", 13, 10 );
            status = response( buffer );
            if ( status == -29998 )
            {
              mustshow = 1;
              HTProgress( gettext( "Connection interrupted." ) );
            }
            else
            {
              if ( status == 480 )
              {
                NNTPAuthResult auth_result = HTHandleAuthInfo( NewsHost );
                if ( auth_result == NNTPAUTH_CLOSE && s != -1 && ProxyHost == 0 && ProxyHREF == 0 )
                {
                  close( s );
                  s = -1;
                }
                if ( auth_result == NNTPAUTH_OK )
                {
                  status = response( buffer );
                  if ( status == -29998 )
                  {
                    mustshow = 1;
                    HTProgress( gettext( "Connection interrupted." ) );
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
void HTClearNNTPAuthInfo( void )
{
  free_NNTP_AuthInfo( );
  return;
}
#if 0
#endif
