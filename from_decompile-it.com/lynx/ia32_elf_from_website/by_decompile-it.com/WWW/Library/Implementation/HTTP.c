#include "HTTP.c.h"
BOOLEAN reloading;
char *redirecting_url;
BOOLEAN permanent_redirection;
BOOLEAN redirect_post_content;
HTProtocol HTTP;
HTProtocol HTTPS;
void strip_userid( char *host )
{
  char *p1 = host;
  char *p2 = strchr( host, '@' );
  char *fake;
  if ( p2 )
  {
    p2[0] = 0;
    p2++;
    fake = HTParse( host, "", 8 );
    if ( fake )
    {
      char *msg = 0;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "parsed:%s\n", fake );
      }
      HTSprintf0( &msg, gettext( "Address contains a username: %s" ), host );
      HTAlert( msg );
      if ( msg )
      {
        free( msg );
      }
    }
    do
    {
      p1[0] = p2[0];
      p1++;
      p2++;
    }
    while ( ( p1[0] != 0 ) & 255 );
  }
  return;
}
BOOLEAN acceptEncoding( int code )
{
  BOOLEAN result = 0;
  if ( code & LYAcceptEncoding )
  {
    char *program = 0;
    switch ( code )
    {
    case 1:
      program = HTGetProgramPath( 6 );
      result = program != 0;
      break;
    case 2:
      program = HTGetProgramPath( 7 );
      result = program != 0;
      break;
    case 4:
      program = HTGetProgramPath( 3 );
      result = program != 0;
      break;
    case 8:
      program = HTGetProgramPath( 1 );
      result = program != 0;
      break;
    default:
      result = program != 0;
      break;
    }
  }
  return result;
}
int HTLoadHTTP( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  int eax;
  static char *empty = "";
  int s;
  char *url = arg;
  bstring *command = 0;
  char *eol;
  char *start_of_data;
  int status;
  int bytes_already_read;
  char crlf[3];
  HTStream *target;
  HTFormat format_in;
  BOOLEAN do_head = 0;
  BOOLEAN do_post = 0;
  char *METHOD;
  BOOLEAN had_header;
  char *line_buffer;
  char *line_kept_clean;
  int real_length_of_line = 0;
  BOOLEAN extensions;
  char *linebuf = 0;
  char temp[80];
  BOOLEAN first_Accept = 1;
  BOOLEAN show_401 = 0;
  BOOLEAN show_407 = 0;
  BOOLEAN auth_proxy = 0;
  int length, rawlength, rv;
  int server_status;
  BOOLEAN doing_redirect;
  BOOLEAN already_retrying = 0;
  int len = 0;
  void *handle = 0;
  if ( anAnchor->isHEAD )
    do_head = 1;
  else
  if ( anAnchor->post_data )
    do_post = 1;
  if ( url == 0 )
  {
    status = -3;
    mustshow = 1;
    HTProgress( gettext( "Bad request!" ) );
  }
  else
  if ( url[0] == 0 )
  {
    status = -2;
    mustshow = 1;
    HTProgress( gettext( "Bad request!" ) );
  }
  else
  {
    sprintf( crlf, "%c%c", 13, 10 );
    extensions = 1;
    while ( 1 )
    {
      eol = 0;
      had_header = 0;
      length = 0;
      doing_redirect = 0;
      permanent_redirection = 0;
      redirect_post_content = 0;
      target = 0;
      line_buffer = 0;
      line_kept_clean = 0;
      if ( strncmp( url, "https", 5 ) == 0 )
      {
        HTAlert( gettext( "This client does not contain support for HTTPS URLs." ) );
        status = -29999;
      }
      else
      {
        status = HTDoConnect( arg, "HTTP", 80, &s );
        if ( status == -29998 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTTP: Interrupted on connect; recovering cleanly.\n" );
          }
          mustshow = 1;
          HTProgress( gettext( "Connection interrupted." ) );
          status = -29999;
        }
        else
        {
          if ( status < 0 )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTTP: Unable to connect to remote host for `%s' (errno = %d).\n", url, *(int*)(__errno_location( )) );
            }
            HTAlert( gettext( "Unable to connect to remote host." ) );
            status = -29999;
          }
          else
          {
            char *p1 = HTParse( url, "", 5 );
            if ( do_post )
            {
              METHOD = "POST";
              HTSABCopy0( &command, "POST " );
            }
            else
            if ( do_head )
            {
              METHOD = "HEAD";
              HTSABCopy0( &command, "HEAD " );
            }
            else
            {
              METHOD = "GET";
              HTSABCopy0( &command, "GET " );
            }
            if ( using_proxy )
              HTSABCat0( &command, &p1[1] );
            else
              HTSABCat0( &command, p1 );
            if ( p1 )
            {
              free( p1 );
            }
            if ( extensions )
            {
              HTSABCat0( &command, " " );
              HTSABCat0( &command, "HTTP/1.0" );
            }
            HTSABCat0( &command, crlf );
            if ( extensions )
            {
              int n, i;
              char *host = 0;
              host = HTParse( &anAnchor->address, "", 8 );
              if ( host )
              {
                strip_userid( host );
                HTBprintf( &command, "Host: %s%c%c", host, 13, 10 );
                if ( host )
                {
                  free( host );
                  host = 0;
                }
              }
              if ( HTPresentations == 0 )
                HTFormatInit( );
              n = HTList_count( HTPresentations );
              first_Accept = 1;
              len = 0;
              i = 0;
              for ( ; i < n;  )
              {
                HTPresentation *pres = (HTPresentation*)HTList_objectAt( HTPresentations, i );
                if ( pres->get_accept )
                {
                  if ( pres->quality < 1.000000000000 )
                  {
                    if ( pres->maxbytes << 32 >= 0 && ( pres->maxbytes << 32 > 0 || pres->maxbytes & 0xFFFFFFFF > 0 ) )
                      sprintf( temp, ";q=%4.3f;mxb=%lld", pres->quality, pres->maxbytes );
                    else
                      sprintf( temp, ";q=%4.3f", pres->quality );
                  }
                  else
                  if ( pres->maxbytes << 32 >= 0 && ( pres->maxbytes << 32 > 0 || pres->maxbytes & 0xFFFFFFFF > 0 ) )
                    sprintf( temp, ";mxb=%lld", pres->maxbytes );
                  else
                    temp[0] = 0;
                  HTSprintf0( &linebuf, "%s%s%s", ", ", pres->rep_out, temp[0] );
                  len += strlen( linebuf );
                  if ( len > 252 && first_Accept == 0 )
                  {
                    HTSABCat0( &command, crlf );
                    HTSprintf0( &linebuf, "Accept: %s%s", pres->rep_out, temp[0] );
                    len = strlen( linebuf );
                  }
                  HTSABCat0( &command, linebuf );
                  first_Accept = 0;
                }
                i++;
              }
              HTBprintf( &command, "%s*/*;q=0.01%c%c", ", ", 13, 10 );
              first_Accept = 0;
              len = 0;
              if ( LYPrependBaseToSource && dump_output_immediately )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "omit Accept-Encoding to work-around interaction with -source\n" );
                }
              }
              else
              {
                char *list = 0;
                int j = 1, k;
                for ( ; j <= 14;  )
                {
                  if ( acceptEncoding( j ) & 255 )
                  {
                    k = 0;
                    for ( ; tbl_preferred_encoding[ k ].name; k++ )
                    {
                      if ( tbl_preferred_encoding[ k ].value == j )
                      {
                        if ( list )
                          HTSACat( &list, ", " );
                        HTSACat( &list, tbl_preferred_encoding[ k ].name );
                        break;
                      }
                      else
                      {
                        // k++;
                      }
                    }
                  }
                  j <<= 1;
                }
                if ( list )
                {
                  HTBprintf( &command, "Accept-Encoding: %s%c%c", list, 13, 10 );
                  free( list );
                }
              }
              if ( language && language[0] )
                HTBprintf( &command, "Accept-Language: %s%c%c", language, 13, 10 );
              if ( pref_charset && pref_charset[0] )
              {
                HTSABCat0( &command, "Accept-Charset: " );
                HTSACopy( &linebuf, pref_charset );
                if ( *(char*)(linebuf + strlen( linebuf ) + -1) == ',' )
                {
                }
                LYLowerCase( linebuf );
                if ( strstr( linebuf, "iso-8859-1" ) == 0 )
                  HTSACat( &linebuf, ", iso-8859-1;q=0.01" );
                if ( strstr( linebuf, "us-ascii" ) == 0 )
                  HTSACat( &linebuf, ", us-ascii;q=0.01" );
                HTSABCat0( &command, linebuf );
                HTBprintf( &command, "%c%c", 13, 10 );
              }
              if ( reloading )
              {
                HTBprintf( &command, "Pragma: no-cache%c%c", 13, 10 );
                HTBprintf( &command, "Cache-Control: no-cache%c%c", 13, 10 );
              }
              if ( LYUserAgent && LYUserAgent[0] )
              {
                char *cp = LYSkipBlanks( LYUserAgent );
                if ( cp[0] )
                  HTBprintf( &command, "User-Agent: %.*s%c%c", 1521, LYUserAgent, 13, 10 );
              }
              else
              {
                HTBprintf( &command, "User-Agent: %s/%s  libwww-FM/%s%c%c", "unknown", "0.0", HTLibraryVersion, 13, 10 );
              }
              if ( personal_mail_address && LYNoFromHeader == 0 )
                HTBprintf( &command, "From: %s%c%c", personal_mail_address, 13, 10 );
              if ( !LYUserSpecifiedURL && !LYNoRefererHeader && !LYNoRefererForThis && *(char*)(HTLoadedDocumentURL( )) )
              {
                char *cp = LYRequestReferer;
                if ( cp == 0 )
                {
                  cp = HTLoadedDocumentURL( );
                }
                HTSABCat0( &command, "Referer: " );
                if ( strncasecomp( cp, "LYNXIMGMAP:", 11 ) == 0 )
                {
                  char *pound = strchr( cp, '#' );
                  int nn = strchr( cp, '#' );
                  HTSABCat( &command, &cp[11], nn );
                }
                else
                  HTSABCat0( &command, cp );
                HTBprintf( &command, "%c%c", 13, 10 );
              }
            {
              char *abspath;
              char *docname;
              char *hostname;
              char *colon;
              int portnumber;
              char *auth, *cookie = 0;
              BOOLEAN secure = strncmp( &anAnchor->address, "https", 5 ) == 0;
              abspath = HTParse( arg, "", 5 );
              docname = HTParse( arg, "", 4 );
              hostname = HTParse( arg, "", 8 );
              if ( hostname )
              {
                colon = HTParsePort( hostname, &portnumber );
                if ( colon )
                  colon[0] = 0;
                  if ( using_proxy )
                  {
                    char *host2 = 0, *path2 = 0;
                    int port2 = 443;
                    host2 = HTParse( docname, "", 8 );
                    path2 = HTParse( docname, "", 5 );
                    if ( host2 )
                    {
                      colon = HTParsePort( host2, &port2 );
                      if ( colon )
                        colon[0] = 0;
                    }
                    auth_proxy = 0;
                    auth = HTAA_composeAuth( host2, port2, path2, auth_proxy );
                    if ( auth && auth[0] )
                    {
                      HTBprintf( &command, "%s%c%c", auth, 13, 10 );
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: Sending authorization: %s\n", auth );
                      }
                    }
                    else
                    if ( auth && auth[0] == 0 )
                    {
                      if ( !traversal && !dump_output_immediately && ( HTConfirm( gettext( "Proceed without a username and password?" ) ) & 255 ) )
                        show_401 = 1;
                      else
                      {
                        if ( traversal || dump_output_immediately )
                        {
                          HTAlert( gettext( "Can't proceed without a username and password." ) );
                        }
                        HTSABFree( &command );
                        if ( hostname )
                        {
                          free( hostname );
                          hostname = 0;
                        }
                        if ( docname )
                        {
                          free( docname );
                          docname = 0;
                        }
                        if ( abspath )
                        {
                          free( abspath );
                          abspath = 0;
                        }
                        if ( host2 )
                        {
                          free( host2 );
                          host2 = 0;
                        }
                        if ( path2 )
                        {
                          free( path2 );
                          path2 = 0;
                        }
                        status = -29999;
                      }
                    }
                    else
                    {
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: Not sending authorization (yet).\n" );
                      }
                    }
                    if ( strncmp( docname, "http", 4 ) == 0 )
                    {
                      cookie = LYAddCookieHeader( host2, path2, port2, secure );
                    }
                    if ( host2 )
                    {
                      free( host2 );
                      host2 = 0;
                    }
                    if ( path2 )
                    {
                      free( path2 );
                      path2 = 0;
                    }
                    auth_proxy = 1;
                  }
                  else
                  {
                    cookie = LYAddCookieHeader( hostname, abspath, portnumber, secure );
                    auth_proxy = 0;
                  }
                  if ( cookie )
                  {
                    if ( cookie[0] != '$' )
                    {
                      HTSABCat0( &command, "Cookie2: $Version=\"1\"" );
                      HTSABCat0( &command, crlf );
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: Sending Cookie2: $Version =\"1\"\n" );
                      }
                    }
                    if ( cookie[0] )
                    {
                      HTSABCat0( &command, "Cookie: " );
                      HTSABCat0( &command, cookie );
                      HTSABCat0( &command, crlf );
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: Sending Cookie: %s\n", cookie );
                      }
                    }
                    if ( cookie )
                    {
                      free( cookie );
                      cookie = 0;
                    }
                  }
                  if ( abspath )
                  {
                    free( abspath );
                    abspath = 0;
                  }
                  auth = HTAA_composeAuth( hostname, portnumber, docname, auth_proxy );
                  if ( auth && auth[0] )
                  {
                    HTBprintf( &command, "%s%c%c", auth, 13, 10 );
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTTP: Sending authorization: %s\n", auth );
                    }
                  }
                  else
                  if ( auth && auth[0] == 0 )
                  {
                    if ( !traversal && !dump_output_immediately && ( HTConfirm( gettext( "Proceed without a username and password?" ) ) & 255 ) )
                    {
                      if ( auth_proxy == 1 )
                        show_407 = 1;
                      else
                        show_401 = 1;
                    }
                    else
                    {
                      if ( traversal || dump_output_immediately )
                      {
                        HTAlert( gettext( "Can't proceed without a username and password." ) );
                      }
                      HTSABFree( &command );
                      if ( hostname )
                      {
                        free( hostname );
                        hostname = 0;
                      }
                      if ( docname )
                      {
                        free( docname );
                        docname = 0;
                      }
                      status = -29999;
                    }
                  }
                  else
                  {
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTTP: Not sending authorization (yet).\n" );
                    }
                  }
                  if ( hostname )
                  {
                    free( hostname );
                    hostname = 0;
                  }
                  if ( docname )
                  {
                    free( docname );
                  }
                  auth_proxy = 0;
              }
              if ( strncmp( arg, "https", 5 ) == 0 )
                portnumber = 443;
              else
                portnumber = 80;
            }
            }
            if ( do_post )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTTP: Doing post, content-type '%s'\n", "lose" );
              }
              HTBprintf( &command, "Content-type: %s%c%c", "lose", 13, 10 );
              HTBprintf( &command, "Content-length: %d%c%c", 0, 13, 10 );
              HTSABCat0( &command, crlf );
              HTSABCat( &command, 0, 0 );
            }
            else
              HTSABCat0( &command, crlf );
            if ( WWW_TraceFlag )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "Writing:\n" );
              }
              trace_bstring( command );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "%s", "" );
              }
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "----------------------------------\n" );
              }
            }
            mustshow = 1;
            HTProgress( gettext( "Sending HTTP request." ) );
            status = write( s, 0, 0 );
            HTSABFree( &command );
            if ( linebuf )
            {
              free( linebuf );
              linebuf = 0;
            }
            if ( status <= 0 )
            {
              if ( status == 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTTP: Got status 0 in initial write\n" );
                }
              }
              else
              {
                if ( ( *(int*)(__errno_location( )) == 107 || *(int*)(__errno_location( )) == 104 || *(int*)(__errno_location( )) == 32 ) && already_retrying == 0 && do_post == 0 )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTTP: BONZO ON WRITE Trying again with HTTP0 request.\n" );
                  }
                  mustshow = 1;
                  HTProgress( gettext( "Retrying as HTTP0 request." ) );
                  close( s );
                  extensions = 0;
                  already_retrying = 1;
                }
                else
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTTP: Hit unexpected network WRITE error; aborting connection.\n" );
                  }
                  close( s );
                  status = -1;
                  HTAlert( gettext( "Unexpected network write error; connection aborted." ) );
                }
              }
            }
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTTP: WRITE delivered OK\n" );
            }
            mustshow = 1;
            HTProgress( gettext( "HTTP request sent; waiting for response." ) );
          {
            BOOLEAN end_of_file = 0;
            static int buffer_length;
            buffer_length = 1536;
            line_buffer = calloc( buffer_length, sizeof( char ) );
            if ( line_buffer == 0 )
              outofmem( "../../../WWW/Library/Implementation/HTTP.c", "HTLoadHTTP" );
            bytes_already_read = 0;
            HTReadProgress( (long long)0, (long long)0 );
            do
            {
              if ( buffer_length - length <= 255 )
              {
                buffer_length <<= 1;
                line_buffer = realloc( line_buffer, ( buffer_length ) * sizeof( char ) );
                if ( line_buffer == 0 )
                  outofmem( "../../../WWW/Library/Implementation/HTTP.c", "HTLoadHTTP" );
              }
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTTP: Trying to read %d\n", ( buffer_length - length ) + -1 );
              }
              status = HTDoRead( s, &line_buffer[ length ], ( buffer_length - length ) + -1 );
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTTP: Read %d\n", status );
              }
              if ( status <= 0 )
              {
                if ( status == -29998 )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTTP: Interrupted initial read.\n" );
                  }
                  mustshow = 1;
                  HTProgress( gettext( "Connection interrupted." ) );
                  close( s );
                  status = -204;
                }
                else
                {
                  if ( status < 0 && ( *(int*)(__errno_location( )) == 107 || *(int*)(__errno_location( )) == 104 || *(int*)(__errno_location( )) == 32 ) && already_retrying == 0 && do_post == 0 )
                  {
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTTP: BONZO Trying again with HTTP0 request.\n" );
                    }
                    close( s );
                    if ( line_buffer )
                    {
                      free( line_buffer );
                      line_buffer = 0;
                    }
                    if ( line_kept_clean )
                    {
                      free( line_kept_clean );
                      line_kept_clean = 0;
                    }
                    extensions = 0;
                    already_retrying = 1;
                    mustshow = 1;
                    HTProgress( gettext( "Retrying as HTTP0 request." ) );
                  }
                  else
                  {
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "HTTP: Hit unexpected network read error; aborting connection; status %d.\n", status );
                    }
                    HTAlert( gettext( "Unexpected network read error; connection aborted." ) );
                    close( s );
                    status = -1;
                  }
                }
              }
              else
              {
                bytes_already_read += status;
                HTReadProgress( bytes_already_read, (long long)0 );
                if ( status == 0 )
                  end_of_file = 1;
                else
                {
                  line_buffer[ status + length ] = 0;
                  if ( line_buffer )
                  {
                    if ( line_kept_clean )
                    {
                      free( line_kept_clean );
                      line_kept_clean = 0;
                    }
                    line_kept_clean = malloc( ( buffer_length ) * sizeof( char ) );
                    if ( line_kept_clean == 0 )
                      outofmem( "../../../WWW/Library/Implementation/HTTP.c", "HTLoadHTTP" );
                    memcpy( line_kept_clean, line_buffer, buffer_length );
                    real_length_of_line = status + length;
                  }
                  eol = strchr( &line_buffer[ length ], '\n' );
                  if ( eol && line_buffer != eol && eol[ -1 ] == '\r' )
                    eol[ -1 ] = ' ';
                  length += status;
                  if ( eol )
                    eol[0] = 0;
                }
                rawlength = length;
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTTP: Rx: %s\n", line_buffer );
                }
                if ( extensions && ( strncmp( line_buffer, "&lt;TITLE&gt;Bad File Request&lt;/TITLE&gt;", 31 ) == 0 || strncmp( line_buffer, "Address should begin with", 25 ) == 0 || strncmp( line_buffer, "&lt;TITLE&gt;Help ", 12 ) == 0 || strcmp( line_buffer, "Document address invalid or access not authorised" ) == 0 ) )
                {
                  if ( line_buffer )
                  {
                    free( line_buffer );
                    line_buffer = 0;
                  }
                  if ( line_kept_clean )
                  {
                    free( line_kept_clean );
                    line_kept_clean = 0;
                  }
                  extensions = 0;
                  already_retrying = 1;
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTTP: close socket %d to retry with HTTP0\n", s );
                  }
                  close( s );
                  mustshow = 1;
                  HTProgress( gettext( "Retrying as HTTP0 request." ) );
                }
                else
                {
                  int fields;
                  char server_version[21];
                  server_version[0] = 0;
                  fields = sscanf( line_buffer, "%20s %d", server_version, &server_status );
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTTP: Scanned %d fields from line_buffer\n", fields );
                  }
                  if ( http_error_file )
                  {
                    FILE *error_file = fopen64( http_error_file, "a+" );
                    if ( error_file )
                    {
                      fprintf( error_file, "   URL=%s (%s)\n", url, METHOD );
                      fprintf( error_file, "STATUS=%s\n", line_buffer );
                      fclose( error_file );
                    }
                  }
                  if ( fields <= 1 || !server_version[0] || server_version[0] != 'H' || server_version[1] != 'T' || server_version[2] != 'T' || server_version[3] != 'P' || server_version[4] != '/' || server_version[6] != '.' )
                  {
                    HTAtom *encoding;
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "--- Talking HTTP0.\n" );
                    }
                    format_in = HTFileFormat( url, &encoding, 0 );
                    if ( strncmp( &format_in->name, "text/plain", 10 ) == 0 )
                    {
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: format_in being changed to text/HTML\n" );
                      }
                      format_in = HTAtom_for( "text/html" );
                    }
                    if ( encoding && encoding != HTAtom_for( "identity" ) && encoding != HTAtom_for( "8bit" ) && encoding != HTAtom_for( "binary" ) && encoding != HTAtom_for( "7bit" ) )
                    {
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: format_in is '%s',\n", &format_in->name );
                      }
                      HTSACopy( &anAnchor->content_type, &format_in->name );
                      HTSACopy( &anAnchor->content_encoding, &encoding->name );
                      format_in = HTAtom_for( "www/compressed" );
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "        Treating as '%s' with encoding '%s'\n", "www/compressed", &encoding->name );
                      }
                    }
                    start_of_data = line_kept_clean;
                  }
                  else
                  {
                    format_in = HTAtom_for( "www/mime" );
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "--- Talking HTTP1.\n" );
                    }
                    start_of_data = empty;
                    length = 0;
                    while ( *(char*)(line_buffer + strlen( line_buffer ) + -1) == ' ' )
                    {
                    }
                    switch ( ( (/*HI*/int)( 0x51eb851f * server_status ) >> 5 ) - ( server_status >> 31 ) )
                    {
                    case 1:
                      HTAlert( gettext( "Got unexpected Informational Status." ) );
                      do_head = 1;
                      break;
                    case 2:
                      if ( do_head )
                        HTProgress( line_buffer );
                      else
                      {
                        switch ( server_status )
                        {
                        case 204:
                          HTAlert( line_buffer );
                          close( s );
                          HTNoDataOK = 1;
                          status = -204;
                          break;
                        case 205:
                          HTAlert( gettext( "Request fulfilled.  Reset Content." ) );
                          close( s );
                          status = -204;
                          break;
                        case 206:
                          HTAlert( line_buffer );
                          close( s );
                          status = -204;
                          break;
                        default:
                          HTProgress( line_buffer );
                          break;
                        }
                      }
                      break;
                    case 3:
                      if ( no_url_redirection || do_head || keep_mime_headers )
                        HTProgress( line_buffer );
                      else
                      {
                        if ( server_status == 300 )
                        {
                          HTAlert( line_buffer );
                          if ( traversal )
                          {
                            close( s );
                            status = -1;
                          }
                          else
                          {
                            if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                            {
                              format_out = HTAtom_for( "www/present" );
                            }
                          }
                        }
                        else
                        {
                          if ( server_status == 304 )
                          {
                            HTAlert( gettext( "Got unexpected 304 Not Modified status." ) );
                            do_head = 1;
                          }
                          else
                          {
                            switch ( server_status )
                            {
                            case '1':
                            case '2':
                              HTAlert( line_buffer );
                              if ( traversal )
                              {
                                close( s );
                                status = -1;
                              }
                              else
                              {
                                if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                                {
                                  format_out = HTAtom_for( "www/present" );
                                }
                              }
                              break;
                            default:
                              if ( ( dump_output_immediately || traversal ) && do_post && server_status != 303 && server_status != 302 && server_status != 301 )
                              {
                                close( s );
                                status = -1;
                                HTAlert( gettext( "Redirection of POST content requires user approval." ) );
                                if ( traversal )
                                  HTProgress( line_buffer );
                              }
                              else
                              {
                                HTProgress( line_buffer );
                                if ( server_status == 301 )
                                {
                                  if ( do_post )
                                  {
                                    if ( WWW_TraceFlag )
                                    {
                                      fprintf( TraceFP( ), "HTTP: Have POST content.  Treating 301 (Permanent) as Temporary.\n" );
                                    }
                                    HTAlert( gettext( "Have POST content.  Treating Permanent Redirection as Temporary.\n" ) );
                                  }
                                  else
                                    permanent_redirection = 1;
                                }
                                doing_redirect = 1;
                              }
                              break;
                            }
                          }
                        }
                      }
                      break;
                    case 4:
                      switch ( server_status )
                      {
                      case 401:
                        if ( show_401 == 0 )
                        {
                          if ( HTAA_shouldRetryWithAuth( start_of_data, length, s, 0 ) & 255 )
                          {
                            close( s );
                            if ( dump_output_immediately && authentication_info[0] == 0 )
                            {
                              fwrite( "HTTP: Access authorization required.\n", 1, 37, stderr );
                              fwrite( "       Use the -auth=id:pw parameter.\n", 1, 38, stderr );
                              status = -204;
                            }
                            else
                            {
                              if ( WWW_TraceFlag )
                              {
                                fprintf( TraceFP( ), "%s %d %s\n", "HTTP: close socket", s, "to retry with Access Authorization" );
                              }
                              mustshow = 1;
                              HTProgress( gettext( "Retrying with access authorization information." ) );
                              if ( line_buffer )
                              {
                                free( line_buffer );
                                line_buffer = 0;
                              }
                              if ( line_kept_clean )
                              {
                                free( line_kept_clean );
                                line_kept_clean = 0;
                                break;
                              }
                            }
                          }
                          else
                          {
                            if ( traversal || dump_output_immediately || ( HTConfirm( gettext( "Show the 401 message body?" ) ) & 255 ) == 0 )
                            {
                              if ( traversal || dump_output_immediately )
                              {
                                HTAlert( gettext( "Can't retry with authorization!  Contact the server's WebMaster." ) );
                              }
                              close( s );
                              status = -1;
                            }
                          }
                        }
                        break;
                      case 407:
                        if ( using_proxy && show_407 == 0 )
                        {
                          if ( HTAA_shouldRetryWithAuth( start_of_data, length, s, 1 ) & 255 )
                          {
                            close( s );
                            if ( dump_output_immediately && proxyauth_info[0] == 0 )
                            {
                              fwrite( "HTTP: Proxy authorization required.\n", 1, 36, stderr );
                              fwrite( "       Use the -pauth=id:pw parameter.\n", 1, 39, stderr );
                              status = -204;
                            }
                            else
                            {
                              if ( WWW_TraceFlag )
                              {
                                fprintf( TraceFP( ), "%s %d %s\n", "HTTP: close socket", s, "to retry with Proxy Authorization" );
                              }
                              mustshow = 1;
                              HTProgress( gettext( "Retrying with proxy authorization information." ) );
                              if ( line_buffer )
                              {
                                free( line_buffer );
                                line_buffer = 0;
                              }
                              if ( line_kept_clean )
                              {
                                free( line_kept_clean );
                                line_kept_clean = 0;
                              }
                            }
                          }
                          else
                          {
                            if ( !traversal && !dump_output_immediately && ( HTConfirm( gettext( "Show the 407 message body?" ) ) & 255 ) )
                            {
                              if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                              {
                                format_out = HTAtom_for( "www/present" );
                              }
                            }
                            else
                            {
                              if ( traversal || dump_output_immediately )
                              {
                                HTAlert( gettext( "Can't retry with proxy authorization!  Contact the server's WebMaster." ) );
                              }
                              close( s );
                              status = -1;
                            }
                          }
                        }
                        break;
                      case 408:
                        HTAlert( line_buffer );
                        close( s );
                        status = -204;
                        break;
                      default:
                        HTAlert( line_buffer );
                        if ( traversal )
                        {
                          close( s );
                          status = -1;
                        }
                        else
                        {
                          if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                          {
                            format_out = HTAtom_for( "www/present" );
                          }
                        }
                        break;
                      }
                      break;
                    case 5:
                      HTAlert( line_buffer );
                      if ( traversal )
                      {
                        close( s );
                        status = -1;
                      }
                      else
                      {
                        if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                        {
                          format_out = HTAtom_for( "www/present" );
                        }
                      }
                      break;
                    case 0:
                      HTAlert( gettext( "Unknown status reply from server!" ) );
                      HTAlert( line_buffer );
                      if ( traversal )
                      {
                        close( s );
                        status = -1;
                      }
                      else
                      {
                        if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                        {
                          format_out = HTAtom_for( "www/present" );
                        }
                      }
                      break;
                    }
                  }
                  if ( HTCheckForInterrupt( ) )
                  {
                    close( s );
                    if ( doing_redirect )
                    {
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "HTTP: Interrupted followup read.\n" );
                      }
                      mustshow = 1;
                      HTProgress( gettext( "Connection interrupted." ) );
                    }
                    status = -29998;
                  }
                  else
                  {
                    if ( do_head || keep_mime_headers )
                    {
                      start_of_data = line_kept_clean;
                      length = rawlength;
                      format_in = HTAtom_for( "text/plain" );
                    }
                    else
                    if ( doing_redirect )
                    {
                      format_in = HTAtom_for( "message/x-http-redirection" );
                      HTSACopy( &anAnchor->content_type, &format_in->name );
                      if ( traversal )
                      {
                        format_out = HTAtom_for( "www/debug" );
                        if ( sink == 0 )
                        {
                          sink = HTErrorStream( );
                        }
                      }
                      else
                      if ( dump_output_immediately == 0 && format_out == HTAtom_for( "www/download" ) )
                      {
                        format_out = HTAtom_for( "www/present" );
                      }
                    }
                    target = HTStreamStack( format_in, format_out, &sink[0]._HTStream, anAnchor );
                    if ( target == 0 )
                    {
                      char *buffer = 0;
                      close( s );
                      HTSprintf0( &buffer, gettext( "Sorry, no known way of converting %s to %s." ), format_in->name, format_out->name );
                      mustshow = 1;
                      HTProgress( buffer );
                      if ( buffer )
                      {
                        free( buffer );
                        buffer = 0;
                      }
                      status = -1;
                    }
                    else
                    {
                      ;
                    }
                  }
                }
              }
              if ( line_buffer )
              {
                free( line_buffer );
                line_buffer = 0;
              }
              if ( line_kept_clean == 0 )
              {
                do_head = 0;
                do_post = 0;
                reloading = 0;
                dump_server_status = server_status;
                return status;
              }
              free( line_kept_clean );
              line_kept_clean = 0;
            }
            while ( eol || end_of_file || bytes_already_read > 99 );
            rawlength = length;
          }
          }
        }
      }
    }
  }
}
#if 0
#endif
