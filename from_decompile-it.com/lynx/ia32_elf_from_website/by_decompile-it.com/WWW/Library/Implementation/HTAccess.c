#include "HTAccess.c.h"
char *HTClientHost;
FILE *HTlogfile;
BOOLEAN HTSecure;
BOOLEAN HTPermitRedir;
BOOLEAN using_proxy;
HTFormat HTOutputFormat;
HTStream *HTOutputStream;
static HTList *protocols;
char *use_this_url_instead;
static int pushed_assume_LYhndl;
static char *pushed_assume_MIMEname;
int redirection_attempts;
BOOLEAN HTRegisterProtocol( HTProtocol *protocol )
{
  if ( protocols == 0 )
  {
    protocols = HTList_new( );
  }
  HTList_addObject( protocols, (void*)protocol );
  return 1;
}
void HTAccessInit( void )
{
  HTRegisterProtocol( &HTTP );
  HTRegisterProtocol( &HTTPS );
  HTRegisterProtocol( &HTFile );
  HTRegisterProtocol( &HTTelnet );
  HTRegisterProtocol( &HTTn3270 );
  HTRegisterProtocol( &HTRlogin );
  HTRegisterProtocol( &HTFTP );
  HTRegisterProtocol( &HTNews );
  HTRegisterProtocol( &HTNNTP );
  HTRegisterProtocol( &HTNewsPost );
  HTRegisterProtocol( &HTNewsReply );
  HTRegisterProtocol( &HTSNews );
  HTRegisterProtocol( &HTSNewsPost );
  HTRegisterProtocol( &HTSNewsReply );
  HTRegisterProtocol( &HTGopher );
  HTRegisterProtocol( &HTCSO );
  HTRegisterProtocol( &HTFinger );
  LYRegisterLynxProtocols( );
  return;
}
BOOLEAN override_proxy( char *addr )
{
  char *no_proxy = getenv( "no_proxy" );
  char *p = 0;
  char *at = 0;
  char *host = 0;
  char *Host = 0;
  char *acc_method = 0;
  int port = 0;
  int h_len = 0;
  if ( no_proxy && strcmp( no_proxy, "*" ) == 0 )
  {
  }
  if ( addr == 0 )
  {
  }
  host = HTParse( addr, "", 8 );
  if ( host == 0 )
  {
  }
  if ( host[0] == 0 )
  {
    if ( host )
    {
      free( host );
      host = 0;
    }
  }
  else
  {
    at = strchr( host, '@' );
    Host = host;
    acc_method = HTParse( addr, "", 16 );
    if ( acc_method )
    {
      if ( strcmp( "file", acc_method ) == 0 && ( strcmp( Host, "localhost" ) == 0 || strcmp( Host, HTHostName( ) ) == 0 ) )
      {
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
      }
      else
      {
        if ( acc_method )
        {
          free( acc_method );
          acc_method = 0;
        }
      }
    }
    if ( no_proxy == 0 )
    {
      if ( host )
      {
        free( host );
        host = 0;
      }
    }
    else
    {
      p = strrchr( Host, ':' );
      if ( p )
      {
        p[0] = 0;
        p++;
        port = atoi( p );
      }
      else
      {
        acc_method = HTParse( addr, "", 16 );
        if ( acc_method )
        {
          if ( strcmp( acc_method, "http" ) == 0 )
            port = 80;
          else
          {
            if ( strcmp( acc_method, "https" ) == 0 )
              port = 443;
            else
            {
              if ( strcmp( acc_method, "ftp" ) == 0 )
                port = 21;
              else
              {
                if ( strcmp( acc_method, "gopher" ) == 0 )
                  port = 70;
                else
                {
                  if ( strcmp( acc_method, "cso" ) == 0 )
                    port = 105;
                  else
                  {
                    if ( strcmp( acc_method, "news" ) == 0 )
                      port = 119;
                    else
                    {
                      if ( strcmp( acc_method, "nntp" ) == 0 )
                        port = 119;
                      else
                      {
                        if ( strcmp( acc_method, "newspost" ) == 0 )
                          port = 119;
                        else
                        {
                          if ( strcmp( acc_method, "newsreply" ) == 0 )
                            port = 119;
                          else
                          {
                            if ( strcmp( acc_method, "snews" ) == 0 )
                              port = 563;
                            else
                            {
                              if ( strcmp( acc_method, "snewspost" ) == 0 )
                                port = 563;
                              else
                              {
                                if ( strcmp( acc_method, "snewsreply" ) == 0 )
                                  port = 563;
                                else
                                {
                                  if ( strcmp( acc_method, "wais" ) == 0 )
                                    port = 210;
                                  else
                                  {
                                    if ( strcmp( acc_method, "finger" ) == 0 )
                                      port = 79;
                                    else
                                    {
                                      if ( strcmp( acc_method, "telnet" ) == 0 )
                                        port = 23;
                                      else
                                      {
                                        if ( strcmp( acc_method, "tn3270" ) == 0 )
                                          port = 23;
                                        else
                                        {
                                          if ( strcmp( acc_method, "rlogin" ) == 0 )
                                            port = 513;
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
              }
            }
          }
          if ( acc_method )
          {
            free( acc_method );
            acc_method = 0;
          }
        }
      }
      if ( port == 0 )
        port = 80;
      h_len = strlen( Host );
      for ( ; no_proxy[0];  )
      {
        char *end;
        char *colon = 0;
        int templ_port = 0;
        int t_len;
        for ( ; no_proxy[0] && ( ' ' <= no_proxy[0] || no_proxy[0] == ',' ); no_proxy++ )
        {
          // no_proxy++;
        }
        end = no_proxy;
        for ( ; end[0] && end[0] < ' ' && end[0] != ','; end++ )
        {
          if ( end[0] == ':' )
            colon = end;
          // end++;
        }
        if ( colon )
        {
          templ_port = atoi( &colon[1] );
          t_len = colon - no_proxy;
        }
        else
          t_len = end - no_proxy;
        if ( ( templ_port == 0 || templ_port == port ) && t_len > 0 && t_len <= h_len && strncasecomp( &Host[ h_len - t_len ], no_proxy, t_len ) == 0 )
        {
          if ( host == 0 )
          {
            break;
          }
          free( host );
          host = 0;
          break;
        }
        else
        {
          if ( ( templ_port == 0 || templ_port == port ) && t_len > 0 && t_len <= h_len && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( no_proxy[0] * 2 )) & 2048 ) && strncmp( host, no_proxy, t_len ) == 0 )
          {
            if ( host == 0 )
            {
              break;
            }
            free( host );
            host = 0;
            break;
          }
          else
          {
            if ( end[0] == 0 )
              break;
            else
            {
              no_proxy = &end[1];
            }
          }
        }
      }
      if ( host )
      {
        free( host );
        host = 0;
      }
    }
  }
  return 1;
}
int get_physical( char *addr, HTParentAnchor *anchor )
{
  int result;
  char *acc_method = 0;
  char *physical = 0;
  char *Server_addr = 0;
  BOOLEAN override_flag = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "get_physical %s\n", addr );
  }
  using_proxy = 0;
  physical = HTTranslate( addr );
  if ( physical == 0 )
  {
    if ( redirecting_url )
    {
      return 399;
    }
    return -403;
  }
  else
  {
    if ( anchor->isISMAPScript == 1 )
    {
      HTSACat( &physical, "?0,0" );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAccess: Appending '?0,0' coordinate pair.\n" );
      }
    }
    if ( strncmp( physical, "Proxied=", 8 ) == 0 )
    {
      HTAnchor_setPhysical( anchor, &physical[8] );
      using_proxy = 1;
    }
    else
    {
      if ( strncmp( physical, "NoProxy=", 8 ) == 0 )
      {
        HTAnchor_setPhysical( anchor, &physical[8] );
        override_flag = 1;
      }
      else
        HTAnchor_setPhysical( anchor, physical );
    }
    if ( physical )
    {
      free( physical );
      physical = 0;
    }
    acc_method = HTParse( HTAnchor_physical( anchor ), "file:", 16 );
    if ( override_flag == 0 && using_proxy == 0 )
    {
      if ( strcasecomp( acc_method, "news" ) == 0 )
      {
        char *host = 0;
        host = HTParse( addr, "", 8 );
        if ( host )
        {
          if ( strchr( host, ':' ) == 0 )
          {
            HTSACopy( &Server_addr, "news://" );
            HTSACat( &Server_addr, host );
            HTSACat( &Server_addr, ":119/" );
          }
          if ( host )
          {
            free( host );
            host = 0;
          }
        }
        else
        {
          if ( LYGetEnv( "NNTPSERVER" ) )
          {
            HTSACopy( &Server_addr, "news://" );
            HTSACat( &Server_addr, LYGetEnv( "NNTPSERVER" ) );
            HTSACat( &Server_addr, ":119/" );
          }
        }
      }
      else
      {
        if ( strcasecomp( acc_method, "wais" ) == 0 )
        {
          char *host = 0;
          host = HTParse( addr, "", 8 );
          if ( host )
          {
            if ( strchr( host, ':' ) == 0 )
            {
              HTSACopy( &Server_addr, "wais://" );
              HTSACat( &Server_addr, host );
              HTSACat( &Server_addr, ":210/" );
            }
            if ( host )
            {
              free( host );
              host = 0;
            }
          }
          else
            HTSACopy( &Server_addr, addr );
        }
        else
          HTSACopy( &Server_addr, addr );
      }
      override_flag = override_proxy( Server_addr );
    }
    if ( override_flag == 0 && using_proxy == 0 )
    {
      char *gateway_parameter = 0, *gateway, *proxy;
      HTSprintf0( &gateway_parameter, "WWW_%s_GATEWAY", acc_method );
      gateway = LYGetEnv( gateway_parameter );
      if ( strcmp( acc_method, "file" ) == 0 )
        memcpy( gateway_parameter, "ftp_proxy", 10 );
      else
        sprintf( gateway_parameter, "%s_proxy", acc_method );
      proxy = LYGetEnv( gateway_parameter );
      if ( gateway_parameter )
      {
        free( gateway_parameter );
        gateway_parameter = 0;
      }
      if ( gateway && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Gateway found: %s\n", gateway );
      }
      if ( proxy && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "proxy server found: %s\n", proxy );
      }
      if ( proxy )
      {
        char *gatewayed = 0;
        HTSACopy( &gatewayed, proxy );
        if ( strncmp( gatewayed, "http", 4 ) == 0 )
        {
          char *cp = strrchr( gatewayed, '/' );
          if ( cp && cp - gatewayed <= 7 )
            LYAddHtmlSep( &gatewayed );
        }
        if ( strncmp( addr, "file", 4 ) == 0 )
        {
          HTSACat( &gatewayed, "ftp" );
          HTSACat( &gatewayed, &addr[4] );
        }
        else
          HTSACat( &gatewayed, addr );
        using_proxy = 1;
        if ( anchor->isISMAPScript == 1 )
          HTSACat( &gatewayed, "?0,0" );
        HTAnchor_setPhysical( anchor, gatewayed );
        if ( gatewayed )
        {
          free( gatewayed );
          gatewayed = 0;
        }
        if ( acc_method )
        {
          free( acc_method );
          acc_method = 0;
        }
        acc_method = HTParse( HTAnchor_physical( anchor ), "http:", 16 );
      }
      else
      {
        if ( gateway )
        {
          char *path = HTParse( addr, "", 13 );
          char *gatewayed = HTParse( &path[1], gateway, 31 );
          if ( path )
          {
            free( path );
            path = 0;
          }
          HTAnchor_setPhysical( anchor, gatewayed );
          if ( gatewayed )
          {
            free( gatewayed );
            gatewayed = 0;
          }
          if ( acc_method )
          {
            free( acc_method );
            acc_method = 0;
          }
          acc_method = HTParse( HTAnchor_physical( anchor ), "http:", 16 );
        }
      }
    }
    if ( Server_addr )
    {
      free( Server_addr );
      Server_addr = 0;
    }
    result = -401;
  {
    int i, n;
    if ( protocols == 0 )
      HTAccessInit( );
    n = HTList_count( protocols );
    i = 0;
    for ( ; i < n;  )
    {
      HTProtocol *p = (HTProtocol*)HTList_objectAt( protocols, i );
      if ( strcmp( &p->name[0], acc_method ) == 0 )
      {
        HTAnchor_setProtocol( anchor, (void*)p );
        if ( acc_method )
        {
          free( acc_method );
          acc_method = 0;
        }
        result = 0;
        break;
      }
      else
      {
        i++;
      }
    }
    if ( acc_method )
    {
      free( acc_method );
      acc_method = 0;
    }
    return result;
  }
  }
}
void LYUCPushAssumed( HTParentAnchor *anchor )
{
  int anchor_LYhndl = -1;
  LYUCcharset *anchor_UCI = 0;
  if ( anchor )
  {
    anchor_LYhndl = HTAnchor_getUCLYhndl( anchor, 1 );
    if ( anchor_LYhndl >= 0 )
    {
      anchor_UCI = HTAnchor_getUCInfoStage( anchor, 1 );
    }
    if ( anchor_UCI && anchor_UCI->MIMEname )
    {
      pushed_assume_MIMEname = UCAssume_MIMEcharset;
      UCAssume_MIMEcharset = 0;
      if ( HTCJK == JAPANESE )
        HTSACopy( &UCAssume_MIMEcharset, pushed_assume_MIMEname );
      else
        HTSACopy( &UCAssume_MIMEcharset, &anchor_UCI->MIMEname );
      pushed_assume_LYhndl = anchor_LYhndl;
      if ( anchor_LYhndl != UCLYhndl_for_unspec && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "LYUCPushAssumed: UCLYhndl_for_unspec changed %d -&gt; %d\n", UCLYhndl_for_unspec, anchor_LYhndl );
      }
      UCLYhndl_for_unspec = anchor_LYhndl;
      return;
    }
  }
  pushed_assume_LYhndl = -1;
  if ( pushed_assume_MIMEname == 0 )
  {
    return;
  }
  free( pushed_assume_MIMEname );
  pushed_assume_MIMEname = 0;
  return;
}
int LYUCPopAssumed( void )
{
  if ( pushed_assume_LYhndl < 0 )
  {
    return -1;
  }
  if ( pushed_assume_LYhndl != UCLYhndl_for_unspec && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYUCPopAssumed: UCLYhndl_for_unspec changed %d -&gt; %d\n", UCLYhndl_for_unspec, pushed_assume_LYhndl );
  }
  UCLYhndl_for_unspec = pushed_assume_LYhndl;
  pushed_assume_LYhndl = -1;
  if ( UCAssume_MIMEcharset )
  {
    free( UCAssume_MIMEcharset );
    UCAssume_MIMEcharset = 0;
  }
  UCAssume_MIMEcharset = pushed_assume_MIMEname;
  pushed_assume_MIMEname = 0;
  return UCLYhndl_for_unspec;
}
int HTLoad( char *addr, HTParentAnchor *anchor, HTFormat format_out, HTStream *sink )
{
  HTProtocol *p;
  int status = get_physical( addr, anchor );
  if ( status == -403 )
  {
    LYFixCursesOn( "show alert:" );
    status = HTLoadError( &sink[0], 500, gettext( "Access forbidden by rule" ) );
  }
  if ( status != 399 && status >= 0 )
  {
    LYFixCursesOnForAccess( addr, HTAnchor_physical( anchor ) );
    p = (HTProtocol*)HTAnchor_protocol( anchor );
    &(HTAtom*)anchor->format->next = 1;
    ebx( HTAnchor_physical( anchor ), anchor, format_out, sink );
    status = anchor;
    &(HTAtom*)anchor->format->next = 0;
    LYUCPopAssumed( );
  }
  return status;
}
HTStream *HTSaveStream( HTParentAnchor *anchor )
{
  HTProtocol *p = (HTProtocol*)HTAnchor_protocol( anchor );
  if ( p == 0 )
  {
    return 0;
  }
  p->saveStream( anchor, ebp_20 );
}
BOOLEAN HTLoadDocument( char *full_address, HTParentAnchor *anchor, HTFormat format_out, HTStream *sink )
{
  int status;
  HText *text;
  char *address_to_load = full_address;
  char *cp;
  BOOLEAN ForcingNoCache = LYforce_no_cache;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTAccess: loading document %s\n", address_to_load );
  }
  if ( use_this_url_instead )
  {
    free( use_this_url_instead );
    use_this_url_instead = 0;
  }
  permanent_redirection = 0;
  if ( redirection_attempts > 10 )
  {
    redirection_attempts = 0;
    HTAlert( gettext( "Redirection limit of 10 URL's reached." ) );
  }
  text = HTAnchor_document( anchor );
  if ( LYinternal_flag && text == 0 && !LYforce_no_cache && anchor->post_data && !anchor->safe && strncasecomp( full_address, "LYNXIMGMAP:", 11 ) && HTConfirm( gettext( "Document with POST content not found in cache.  Resubmit?" ) ) != 1 )
  {
  }
  if ( anchor->post_data == 0 )
  {
    for ( ; cp && strncmp( cp, "Location=", 9 ) == 0;  )
    {
      DocAddress NewDoc;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAccess: '%s' is a redirection URL.\n", &anchor->address );
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAccess: Redirecting to '%s'\n", &cp[9] );
      }
      redirection_attempts++;
      if ( redirection_attempts > 10 )
      {
        HTAlert( gettext( "Redirection limit of 10 URL's reached." ) );
        redirection_attempts = 0;
        if ( use_this_url_instead == 0 )
        {
          break;
        }
        free( use_this_url_instead );
        use_this_url_instead = 0;
        break;
      }
      else
      {
        HTSACopy( &use_this_url_instead, &cp[9] );
        NewDoc.address = use_this_url_instead;
        NewDoc.post_data = 0;
        NewDoc.post_content_type = 0;
        NewDoc.bookmark = &anchor->bookmark;
        NewDoc.isHEAD = anchor->isHEAD;
        NewDoc.safe = anchor->safe;
        anchor = HTAnchor_findAddress( &NewDoc );
      }
    }
  }
  if ( use_this_url_instead )
  {
    if ( redirecting_url )
    {
      free( redirecting_url );
      redirecting_url = 0;
    }
  }
  else
  {
    text = HTAnchor_document( anchor );
    if ( text && LYforce_no_cache == 0 )
    {
      if ( LYoverride_no_cache || ( HText_hasNoCacheSet( &text ) & 255 ) == 0 || ( HText_AreDifferent( anchor, full_address ) & 255 ) == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTAccess: Document already in memory.\n" );
        }
        HText_select( &text );
        if ( HTAnchor_format( anchor ) == HTAtom_for( "www/dired" ) )
          lynx_edit_mode = 1;
        redirection_attempts = 0;
      }
      else
      {
        ForcingNoCache = 1;
        HTSABFree( &anchor->post_data );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTAccess: Auto-reloading document.\n" );
        }
      }
    }
    if ( HText_HaveUserChangedForms( &text ) & 255 )
    {
      HTAlert( gettext( "Reloading document.  Any form entries will be lost!" ) );
    }
    LYforce_no_cache = 0;
    if ( ForcingNoCache && anchor->title )
    {
      free( &anchor->title );
      anchor->title = 0;
    }
    status = HTLoad( address_to_load, anchor, format_out, sink );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTAccess:  status=%d\n", status );
    }
    if ( text && status < 0 && text == HTAnchor_document( anchor ) )
    {
      HTAlert( gettext( "Loading failed, use a previous copy." ) );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAccess: Loading failed, use a previous copy.\n" );
      }
      HText_select( &text );
      if ( HTAnchor_format( anchor ) == HTAtom_for( "www/dired" ) )
        lynx_edit_mode = 1;
      redirection_attempts = 0;
    }
    else
    {
      if ( HTlogfile )
      {
        time_t theTime;
        time( &theTime );
        fprintf( HTlogfile, "%24.24s %s %s %s\n", ctime( &theTime ), "local", status < 0 ? "FAIL" : "GET", full_address );
        fflush( HTlogfile );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Log: %24.24s %s %s %s\n", ctime( &theTime ), "local", status < 0 ? "FAIL" : "GET", full_address );
        }
      }
      if ( status == 399 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTAccess: '%s' is a redirection URL.\n", address_to_load );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTAccess: Redirecting to '%s'\n", redirecting_url );
        }
        if ( strcmp( address_to_load, redirecting_url ) )
        {
          if ( permanent_redirection )
          {
            HTSACopy( &anchor->physical, "Location=" );
            HTSACat( &anchor->physical, redirecting_url );
          }
          HTSACopy( &use_this_url_instead, redirecting_url );
          if ( ForcingNoCache )
            LYforce_no_cache = 1;
          redirection_attempts++;
          if ( redirecting_url )
          {
            free( redirecting_url );
            redirecting_url = 0;
          }
          permanent_redirection = 0;
        }
        else
        {
          redirection_attempts++;
          if ( redirecting_url )
          {
            free( redirecting_url );
            redirecting_url = 0;
          }
          permanent_redirection = 0;
        }
      }
      else
      {
        redirection_attempts = 0;
        if ( redirecting_url )
        {
          free( redirecting_url );
          redirecting_url = 0;
        }
        permanent_redirection = 0;
        if ( status == 200 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTAccess: `%s' has been accessed.\n", full_address );
          }
        }
        else
        {
          if ( status == 206 )
          {
            HTAlert( gettext( "Loading incomplete." ) );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTAccess: `%s' has been accessed, partial content.\n", full_address );
            }
          }
          else
          {
            if ( status == -204 )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "HTAccess: `%s' has been accessed, No data left.\n", full_address );
              }
            }
            else
            {
              if ( status == -29999 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTAccess: `%s' has been accessed, No data loaded.\n", full_address );
                }
              }
              else
              {
                if ( status == -29998 )
                {
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTAccess: `%s' has been accessed, transfer interrupted.\n", full_address );
                  }
                }
                else
                {
                  if ( status > 0 )
                  {
                    fprintf( stderr, gettext( "**** HTAccess: socket or file number returned by obsolete load routine!\n" ) );
                    fprintf( stderr, gettext( "**** HTAccess: Internal software error.  Please mail lynx-dev@nongnu.org!\n" ) );
                    fprintf( stderr, gettext( "**** HTAccess: Status returned was: %d\n" ), status );
                    exit_immediately( 1 );
                  }
                  cp = 0;
                  HTSACopy( &cp, gettext( "Can't Access" ) );
                  HTSACat( &cp, " `" );
                  HTSACat( &cp, full_address );
                  HTSACat( &cp, "'" );
                  mustshow = 1;
                  HTProgress( cp );
                  if ( cp )
                  {
                    free( cp );
                    cp = 0;
                  }
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "HTAccess: Can't access `%s'\n", full_address );
                  }
                  HTLoadError( &sink[0], 500, gettext( "Unable to access document." ) );
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
BOOLEAN HTLoadAbsolute( DocAddress *docaddr )
{
  int eax;
  if ( HTOutputFormat )
  {
  }
  else
  {
  }
  return HTLoadDocument( &docaddr->address[0], HTAnchor_findAddress( docaddr ), HTOutputFormat, HTOutputStream );
}
BOOLEAN HTLoadRelative( char *relative_name, HTParentAnchor *here )
{
  DocAddress full_address;
  BOOLEAN result;
  char *mycopy = 0;
  char *stripped = 0;
  full_address.address = 0;
  full_address.post_data = 0;
  full_address.post_content_type = 0;
  full_address.bookmark = 0;
  full_address.isHEAD = 0;
  full_address.safe = 0;
  HTSACopy( &mycopy, relative_name );
  stripped = HTStrip( mycopy );
  full_address.address = HTParse( stripped, &here->address, 29 );
  result = HTLoadAbsolute( &full_address );
  if ( full_address.address )
  {
    free( full_address.address );
    full_address.address = 0;
  }
  if ( mycopy )
  {
    free( mycopy );
    mycopy = 0;
  }
  return result;
}
BOOLEAN HTLoadAnchor( HTAnchor *destination )
{
  HTParentAnchor *parent;
  BOOLEAN loaded = 0;
  if ( destination == 0 )
  {
  }
  parent = HTAnchor_parent( destination );
  if ( HTAnchor_document( parent ) == 0 )
  {
    BOOLEAN result = HTLoadDocument( &parent->address, parent, HTOutputFormat ? HTOutputFormat : HTAtom_for( "www/present" ), HTOutputStream );
    if ( result == 0 )
    {
    }
    loaded = 1;
  }
{
  HText *text = HTAnchor_document( parent );
  if ( parent != destination && parent->parent->parent != destination )
    HText_selectAnchor( &text, (int)( &destination[0]._HTAnchor ) );
  else
  if ( loaded == 0 )
    HText_select( &text );
}
  return 1;
}
char hex( int i )
{
  char *hexchars = "0123456789ABCDEF";
  return hexchars[ i ];
}
BOOLEAN HTSearch( char *keywords, HTParentAnchor *here )
{
  static BOOLEAN isAcceptable[96] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 };
  char *q, *u;
  char *p, *s, *e;
  char *address = 0;
  BOOLEAN result;
  char *escaped = calloc( ( strlen( keywords ) * 3 ) + 1, sizeof( char ) );
  if ( escaped == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTAccess.c", "HTSearch" );
  HTSACopy( &address, &here->isIndexAction );
  s = keywords;
  for ( ; s[0] && ' ' <= s[0]; s++ )
  {
    // s++;
  }
  e = s + strlen( s );
  for ( ; s < e && ' ' <= e[ -1 ];  )
  {
    e = &e[ -1 ];
  }
  q = escaped;
  p = s;
  for ( ; p < e;  )
  {
    unsigned char c = p[0];
    if ( ' ' <= p[0] )
    {
      q[0] = '+';
      q++;
    }
    else
    if ( HTCJK )
    {
      q[0] = p[0];
      q++;
    }
    else
    if ( c < 31 && c >= 0 && isAcceptable[ c + -32 ] )
    {
      q[0] = p[0];
      q++;
    }
    else
    {
      q[0] = '%';
      q++;
      q[0] = hex( c >> 4 );
      q++;
      q[0] = hex( c & 15 );
      q++;
    }
    p++;
  }
  q[0] = 0;
  u = strchr( address, '?' );
  if ( u )
    u[0] = 0;
  HTSACat( &address, "?" );
  HTSACat( &address, escaped );
  if ( escaped )
  {
    free( escaped );
    escaped = 0;
  }
  result = HTLoadRelative( address, here );
  if ( address )
  {
    free( address );
    address = 0;
  }
  return result;
}
BOOLEAN HTSearchAbsolute( char *keywords, char *indexname )
{
  DocAddress abs_doc;
  HTParentAnchor *anchor;
  abs_doc.address = indexname;
  abs_doc.post_data = 0;
  abs_doc.post_content_type = 0;
  abs_doc.bookmark = 0;
  abs_doc.isHEAD = 0;
  abs_doc.safe = 0;
  anchor = HTAnchor_findAddress( &abs_doc );
  return HTSearch( keywords, anchor );
}
#if 0
#endif
