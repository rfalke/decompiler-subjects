#include "LYGetFile.c.h"
int HTNoDataOK;
static struct trust trusted_exec_default;
static struct trust always_trusted_exec_default;
static struct trust trusted_cgi_default;
static struct trust *trusted_exec;
static struct trust *always_trusted_exec;
static struct trust *trusted_cgi;
int getfile( DocInfo *doc, int *target )
{
  UrlTypes url_type = NOT_A_URL_TYPE;
  char *pound;
  char *cp = 0;
  char *temp = 0;
  DocAddress WWWDoc;
  if ( LYCancelDownload )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "getfile:    resetting LYCancelDownload to FALSE\n" );
    }
    LYCancelDownload = 0;
  }
  LYFakeZap( 0 );
  redirection_attempts = 0;
  while ( 1 )
  {
    WWWDoc.address = &doc->address;
    WWWDoc.post_data = &doc->post_data;
    WWWDoc.post_content_type = &doc->post_content_type;
    WWWDoc.bookmark = &doc->bookmark;
    WWWDoc.isHEAD = doc->isHEAD;
    WWWDoc.safe = doc->safe;
    HTPermitRedir = 0;
    if ( WWW_Download_File )
    {
      free( WWW_Download_File );
      WWW_Download_File = 0;
    }
    redirect_post_content = 0;
    HTNoDataOK = 0;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "getfile: getting %s\n\n", &doc->address );
    }
    temp = HTParse( &doc->address, "", 8 );
    if ( temp && strlen( temp ) > 3 )
    {
      char *cp1 = strchr( temp, '@' );
      if ( cp1 == 0 )
        cp1 = temp;
      cp = strrchr( cp1, ':' );
      if ( cp )
      {
        long value;
        cp++;
        if ( sscanf( cp, "%ld", &value ) == 1 )
        {
          if ( value == 19 || value == 65555 )
          {
            HTAlert( gettext( "Port 19 not permitted in URLs." ) );
            if ( temp == 0 )
            {
              return 3;
            }
            free( temp );
            temp = 0;
            return 3;
          }
          else
          {
            if ( value == 25 || value == 65561 )
            {
              HTAlert( gettext( "Port 25 not permitted in URLs." ) );
              if ( temp == 0 )
              {
                return 3;
              }
              free( temp );
              temp = 0;
              return 3;
            }
            else
            {
              if ( value > 65535 || value < 0 )
              {
                char *msg = 0;
                HTSprintf0( &msg, gettext( "Port %lu not permitted in URLs." ), value );
                HTAlert( msg );
                if ( msg )
                {
                  free( msg );
                  msg = 0;
                }
                if ( temp == 0 )
                {
                  return 3;
                }
                free( temp );
                temp = 0;
                return 3;
              }
            }
          }
        }
        else
        {
          if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 )
          {
            HTAlert( gettext( "URL has a bad port field." ) );
            if ( temp == 0 )
            {
              return 3;
            }
            free( temp );
            temp = 0;
            return 3;
          }
        }
      }
    }
    cp = 0;
    if ( temp )
    {
      free( temp );
      temp = 0;
    }
    url_type = is_url( &doc->address );
    if ( url_type )
    {
      if ( LYValidate && !LYPermitURL && url_type != HTTP_URL_TYPE && url_type != HTTPS_URL_TYPE && url_type != LYNXHIST_URL_TYPE && url_type != LYNXKEYMAP_URL_TYPE && url_type != LYNXIMGMAP_URL_TYPE && url_type != LYNXCOOKIE_URL_TYPE && url_type != LYNXMESSAGES_URL_TYPE && ( url_type != LYNXOPTIONS_URL_TYPE || WWWDoc.post_data == 0 ) && strncmp( WWWDoc.address, helpfilepath, strlen( helpfilepath ) ) && ( lynxlistfile == 0 || strncmp( WWWDoc.address, lynxlistfile, strlen( lynxlistfile ) ) ) && ( lynxlinksfile == 0 || strncmp( WWWDoc.address, lynxlinksfile, strlen( lynxlinksfile ) ) ) && ( lynxjumpfile == 0 || strncmp( WWWDoc.address, lynxjumpfile, strlen( lynxjumpfile ) ) ) )
      {
        HTUserMsg( gettext( "Not an http URL or form ACTION!" ) );
        return 3;
      }
      if ( traversal )
      {
        if ( url_type != HTTP_URL_TYPE && url_type != LYNXIMGMAP_URL_TYPE )
        {
          return 3;
        }
      }
      else
      if ( check_realm && !LYPermitURL && !LYJumpFileURL && strncmp( startrealm, WWWDoc.address, strlen( startrealm ) ) && url_type != LYNXHIST_URL_TYPE && url_type != LYNXKEYMAP_URL_TYPE && url_type != LYNXIMGMAP_URL_TYPE && url_type != LYNXCOOKIE_URL_TYPE && url_type != LYNXPRINT_URL_TYPE && url_type != LYNXOPTIONS_URL_TYPE && url_type != LYNXCFG_URL_TYPE && url_type != LYNXCOMPILE_OPTS_URL_TYPE && url_type != LYNXMESSAGES_URL_TYPE && url_type != LYNXDOWNLOAD_URL_TYPE && url_type != MAILTO_URL_TYPE && url_type != NEWSPOST_URL_TYPE && url_type != NEWSREPLY_URL_TYPE && url_type != SNEWSPOST_URL_TYPE && url_type != SNEWSREPLY_URL_TYPE )
      {
        if ( LYUserSpecifiedURL )
        {
          if ( ( WWWDoc.bookmark == 0 || !WWWDoc.bookmark[0] ) && strncmp( WWWDoc.address, helpfilepath, strlen( helpfilepath ) ) && ( lynxlistfile == 0 || strncmp( WWWDoc.address, lynxlistfile, strlen( lynxlistfile ) ) ) && ( lynxjumpfile == 0 || strncmp( WWWDoc.address, lynxjumpfile, strlen( lynxjumpfile ) ) ) )
          {
            HTUserMsg( gettext( "URL is not in starting realm!" ) );
            return 3;
          }
        }
        else
        {
          switch ( url_type )
          {
          default:
            break;
          }
        }
      }
      if ( WWWDoc.post_data && url_type != HTTP_URL_TYPE && url_type != HTTPS_URL_TYPE && url_type != LYNXCGI_URL_TYPE && url_type != LYNXIMGMAP_URL_TYPE && url_type != GOPHER_URL_TYPE && url_type != CSO_URL_TYPE && url_type != PROXY_URL_TYPE && url_type != LYNXOPTIONS_URL_TYPE && ( url_type != FILE_URL_TYPE || ( ( LYIsUIPage3( WWWDoc.address, 4, 1 ) & 255 ) == 0 && ( LYIsUIPage3( WWWDoc.address, 11, 1 ) & 255 ) == 0 ) ) )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "getfile: dropping post_data!\n" );
        }
        HTAlert( gettext( "POST not supported for this URL - ignoring POST data!" ) );
        LYFreePostData( doc );
        WWWDoc.post_data = 0;
        WWWDoc.post_content_type = 0;
      }
      LYSyslog( &doc->address );
      switch ( url_type )
      {
      case UNKNOWN_URL_TYPE:
      case PROSPERO_URL_TYPE:
      case AFS_URL_TYPE:
        HTAlert( gettext( "Unsupported URL scheme!" ) );
        return 3;
        break;
      default:
        if ( url_type == DATA_URL_TYPE )
        {
          HTAlert( gettext( "Unsupported data: URL!  Use SHOWINFO, for now." ) );
          return 3;
        }
        if ( url_type == LYNXPRINT_URL_TYPE )
        {
          break;
        }
        if ( url_type == LYNXOPTIONS_URL_TYPE )
        {
          break;
        }
        if ( url_type == LYNXCFG_URL_TYPE && no_lynxcfg_info == 0 )
        {
          break;
        }
        if ( url_type == LYNXCOMPILE_OPTS_URL_TYPE && no_compileopts_info == 0 )
        {
          break;
        }
        switch ( url_type )
        {
        case NEWSPOST_URL_TYPE:
        case NEWSREPLY_URL_TYPE:
        case SNEWSPOST_URL_TYPE:
        case SNEWSREPLY_URL_TYPE:
          if ( no_newspost )
          {
            HTUserMsg( gettext( "News posting is disabled!" ) );
            return 3;
          }
          if ( news_ok == 0 && ( url_type == NEWSPOST_URL_TYPE || url_type == NEWSREPLY_URL_TYPE ) )
          {
            HTUserMsg( gettext( "USENET news access is disabled!" ) );
            return 3;
          }
          HTLoadAbsolute( &WWWDoc );
          return 3;
          break;
        default:
          if ( url_type == LYNXDOWNLOAD_URL_TYPE )
          {
            LYDownload( &doc->address );
            return 1;
          }
          if ( url_type == LYNXDIRED_URL_TYPE )
          {
            if ( no_dired_support == 0 )
            {
              local_dired( doc );
              WWWDoc.address = &doc->address;
              WWWDoc.post_data = &doc->post_data;
              WWWDoc.post_content_type = &doc->post_content_type;
              WWWDoc.bookmark = &doc->bookmark;
              WWWDoc.isHEAD = doc->isHEAD;
              WWWDoc.safe = doc->safe;
              if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
              {
                return 0;
              }
              return 1;
            }
            else
            {
              HTUserMsg( gettext( "File management support is disabled!" ) );
              return 3;
            }
          }
          else
          {
            if ( LYNoRefererHeader == 0 && LYNoRefererForThis == 0 )
            {
              char *ref_url = HTLoadedDocumentURL( );
              if ( strncasecomp( ref_url, "LYNXIMGMAP:", 11 ) == 0 )
                ref_url += 11;
              if ( no_filereferer == 1 && ( ref_url[0] == 'f' || ref_url[0] == 'F' ) && strncasecomp( ref_url, "file:", 5 ) == 0 )
                LYNoRefererForThis = 1;
              if ( LYNoRefererForThis == 0 )
              {
                cp = strchr( ref_url, '?' );
                if ( cp && strchr( cp, '=' ) )
                {
                  if ( LYRefererWithQuery == 'S' )
                    HTSACopy( &LYRequestReferer, ref_url );
                  else
                  if ( LYRefererWithQuery == 'P' )
                  {
                    if ( LYRequestReferer )
                    {
                      free( LYRequestReferer );
                      LYRequestReferer = 0;
                    }
                    LYRequestReferer = HTParse( ref_url, "", 57 );
                  }
                  else
                    LYNoRefererForThis = 1;
                  cp = 0;
                }
              }
              if ( LYNoRefererForThis == 0 )
                HTSACopy( &LYRequestReferer, ref_url );
            }
            else
            {
              HTSACopy( &LYRequestReferer, HTLoadedDocumentURL( ) );
            }
            if ( url_type == LYNXHIST_URL_TYPE )
            {
              if ( ( historytarget( doc ) & 255 ) == 0 || doc == 0 || doc->address == 0 )
              {
                return 0;
              }
              WWWDoc.address = &doc->address;
              WWWDoc.post_data = &doc->post_data;
              WWWDoc.post_content_type = &doc->post_content_type;
              WWWDoc.bookmark = &doc->bookmark;
              WWWDoc.isHEAD = doc->isHEAD;
              WWWDoc.safe = doc->safe;
              lynx_edit_mode = 0;
              if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
              {
                return 0;
              }
              return 1;
            }
            else
            {
              if ( url_type == LYNXEXEC_URL_TYPE || url_type == LYNXPROG_URL_TYPE )
              {
                if ( no_exec && ( exec_ok( HTLoadedDocumentURL( ), &doc->address[9], 1 ) & 255 ) == 0 )
                {
                  HTUserMsg( gettext( "Execution is disabled." ) );
                }
                else
                if ( no_bookmark_exec && HTLoadedDocumentBookmark( ) )
                {
                  HTUserMsg( gettext( "Execution via bookmarks is disabled." ) );
                }
                else
                if ( local_exec || ( local_exec_on_local_files && ( exec_ok( HTLoadedDocumentURL( ), &doc->address[9], 0 ) & 255 ) ) )
                {
                  char *p = 0;
                  char *last_slash = strrchr( &doc->address, '/' );
                  if ( last_slash - doc->address == strlen( &doc->address ) + -1 )
                  {
                  }
                  HTSACopy( &p, &doc->address );
                  LYTildeExpand( &p, 1 );
                  HTInfoMsg( &doc->address );
                  stop_curses( );
                  if ( p[9] == strstr( p, "//" ) )
                    LYSystem( &p[11] );
                  else
                    LYSystem( &p[9] );
                  if ( p )
                  {
                    free( p );
                    p = 0;
                  }
                  if ( url_type != LYNXPROG_URL_TYPE )
                  {
                    signal( 2, 1 );
                    printf( "\n%s", gettext( "Press &lt;return&gt; to return to Lynx." ) );
                    fflush( stdout );
                    LYgetch( );
                  }
                  if ( dump_output_immediately == 0 )
                  {
                    start_curses( );
                    LYAddVisitedLink( doc );
                  }
                }
                else
                {
                  char *buf = 0;
                  HTSprintf0( &buf, gettext( "Execution is not enabled for this file.  See the Options menu (use %s)." ), key_for_func( 49 ) );
                  HTAlert( buf );
                  if ( buf == 0 )
                  {
                    return 3;
                  }
                  free( buf );
                }
              }
              else
              {
                if ( url_type == MAILTO_URL_TYPE )
                {
                  if ( no_mail )
                  {
                    HTUserMsg( gettext( "Mail access is disabled!" ) );
                  }
                  else
                  {
                    HTParentAnchor *tmpanchor = HTAnchor_findAddress( &WWWDoc );
                    char *title;
                    char *tmptitle = 0;
                    title = "";
                    if ( HTAnchor_title( tmpanchor ) )
                    {
                      title = HTAnchor_title( tmpanchor );
                    }
                    else
                    if ( HTMainAnchor && LYUserSpecifiedURL == 0 )
                    {
                      title = HTAnchor_subject( HTMainAnchor );
                      if ( title && title[0] )
                      {
                        if ( strncasecomp( title, "Re:", 3 ) )
                        {
                          HTSACopy( &tmptitle, "Re: " );
                          HTSACat( &tmptitle, title );
                          title = tmptitle;
                        }
                      }
                      else
                        title = "";
                    }
                    cp = strchr( &doc->address, ':' ) + 1;
                    reply_by_mail( cp, &doc->address, title, 0 );
                    if ( tmptitle == 0 )
                    {
                      return 3;
                    }
                    free( tmptitle );
                  }
                }
                else
                {
                  if ( local_host_only && url_type != LYNXKEYMAP_URL_TYPE && url_type != LYNXIMGMAP_URL_TYPE && url_type != LYNXCOOKIE_URL_TYPE && url_type != LYNXMESSAGES_URL_TYPE && url_type != LYNXCGI_URL_TYPE && ( url_type != NEWS_URL_TYPE || strncmp( &doc->address, "news://", 7 ) == 0 ) && ( LYisLocalHost( &doc->address ) & 255 ) == 0 && ( LYisLocalAlias( &doc->address ) & 255 ) == 0 )
                  {
                    HTUserMsg( gettext( "Only files and servers on the local host can be accessed." ) );
                    return 3;
                  }
                  switch ( url_type )
                  {
                  case TELNET_URL_TYPE:
                  case TN3270_URL_TYPE:
                  case TELNET_GOPHER_URL_TYPE:
                  {
                    char *proxy;
                    if ( telnet_ok == 0 )
                    {
                      HTUserMsg( gettext( "Telnet access is disabled!" ) );
                      return 3;
                    }
                    if ( no_telnet_port && strchr( &doc->address[7], ':' ) )
                    {
                      HTUserMsg( gettext( "Telnet port specifications are disabled." ) );
                      return 3;
                    }
                    proxy = LYGetEnv( "tn3270_proxy" );
                    if ( proxy == 0 || ( override_proxy( &doc->address ) & 255 ) || strncasecomp( proxy, "telnet:", 7 ) == 0 || strncasecomp( proxy, "tn3270:", 7 ) == 0 || strncasecomp( proxy, "rlogin:", 7 ) == 0 )
                    {
                      stop_curses( );
                      HTLoadAbsolute( &WWWDoc );
                      if ( dump_output_immediately == 0 )
                      {
                        start_curses( );
                        fflush( stdout );
                        LYAddVisitedLink( doc );
                      }
                      return 3;
                    }
                  }
                    break;
                  default:
                    if ( news_ok == 0 && ( url_type == NEWS_URL_TYPE || url_type == NNTP_URL_TYPE ) )
                    {
                      HTUserMsg( gettext( "USENET news access is disabled!" ) );
                      return 3;
                    }
                    if ( url_type == RLOGIN_URL_TYPE )
                    {
                      char *proxy;
                      if ( rlogin_ok == 0 )
                      {
                        HTUserMsg( gettext( "Rlogin access is disabled!" ) );
                        return 3;
                      }
                      proxy = LYGetEnv( "rlogin_proxy" );
                      if ( proxy == 0 || ( override_proxy( &doc->address ) & 255 ) || strncasecomp( proxy, "telnet:", 7 ) == 0 || strncasecomp( proxy, "tn3270:", 7 ) == 0 || strncasecomp( proxy, "rlogin:", 7 ) == 0 )
                      {
                        stop_curses( );
                        HTLoadAbsolute( &WWWDoc );
                        fflush( stdout );
                        if ( dump_output_immediately == 0 )
                        {
                          start_curses( );
                          LYAddVisitedLink( doc );
                        }
                        return 3;
                      }
                    }
                    else
                    {
                      if ( url_type == INDEX_GOPHER_URL_TYPE && strchr( &doc->address, '?' ) == 0 )
                      {
                        int status;
                        cp = strstr( &doc->address, "%09" );
                        if ( cp )
                        {
                          cp[0] = 0;
                          HTSACopy( &temp, &doc->address );
                          cp += 3;
                          if ( cp[0] && strncmp( cp, "%09", 3 ) )
                          {
                            HTSACat( &temp, "?" );
                            HTSACat( &temp, cp );
                            cp = strstr( temp, "%09" );
                            if ( cp )
                              cp[0] = 0;
                          }
                          HTSACopy( &doc->address, temp );
                          if ( temp )
                          {
                            free( temp );
                            temp = 0;
                          }
                        }
                        else
                        {
                          if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
                          {
                            return 0;
                          }
                          status = do_www_search( doc );
                          if ( status == 3 )
                          {
                            LYpop( doc );
                            WWWDoc.address = &doc->address;
                            WWWDoc.post_data = &doc->post_data;
                            WWWDoc.post_content_type = &doc->post_content_type;
                            WWWDoc.bookmark = &doc->bookmark;
                            WWWDoc.isHEAD = doc->isHEAD;
                            WWWDoc.safe = doc->safe;
                            status = HTLoadAbsolute( &WWWDoc );
                          }
                          else
                            lynx_edit_mode = 0;
                          return status;
                        }
                      }
                    }
                    break;
                  }
                  if ( ftp_ok == 0 && ( url_type == FTP_URL_TYPE || url_type == NCFTP_URL_TYPE ) )
                  {
                    HTUserMsg( gettext( "Ftp access is disabled!" ) );
                    return 3;
                  }
                  if ( url_type == HTML_GOPHER_URL_TYPE )
                  {
                    char *tmp = 0;
                    cp = strchr( &doc->address[9], '/' );
                    if ( cp )
                    {
                      cp++;
                      if ( strncmp( cp, "hGET%20/", 8 ) == 0 )
                      {
                        HTSACopy( &tmp, "http://" );
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "getfile: URL '%s'\n", &doc->address );
                        }
                        cp[0] = 0;
                        HTSACat( &tmp, &doc->address[9] );
                        if ( strchr( &tmp[6], ':' ) == 0 )
                        {
                          HTSACat( &tmp, "70/" );
                        }
                        if ( strlen( &cp[7] ) > 1 )
                          HTSACat( &tmp, &cp[8] );
                        HTSACopy( &doc->address, tmp );
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "  changed to '%s'\n", &doc->address );
                        }
                        if ( tmp )
                        {
                          free( tmp );
                          tmp = 0;
                        }
                        url_type = HTTP_URL_TYPE;
                      }
                    }
                  }
                  switch ( url_type )
                  {
                  case HTTP_URL_TYPE:
                  case FTP_URL_TYPE:
                  case NCFTP_URL_TYPE:
                  case CSO_URL_TYPE:
                  case HTTPS_URL_TYPE:
                    fix_httplike_urls( doc, url_type );
                    WWWDoc.address = &doc->address;
                    lynx_edit_mode = 0;
                    if ( url_type == BIBP_URL_TYPE )
                    {
                      char *bibpTmp = 0;
                      if ( BibP_bibhost_checked == 0 )
                        LYCheckBibHost( );
                      if ( BibP_bibhost_available )
                        HTSACopy( &bibpTmp, BibP_bibhost );
                      else
                      if ( HTMainAnchor && HTAnchor_citehost( HTMainAnchor ) )
                      {
                        HTSACopy( &bibpTmp, HTAnchor_citehost( HTMainAnchor ) );
                      }
                      else
                        HTSACopy( &bibpTmp, BibP_globalserver );
                      if ( HTMainAnchor && HTAnchor_citehost( HTMainAnchor ) )
                      {
                        HTSACat( &bibpTmp, "bibp1.0/resolve?citehost=" );
                        HTSACat( &bibpTmp, HTAnchor_citehost( HTMainAnchor ) );
                        HTSACat( &bibpTmp, "&usin=" );
                      }
                      else
                        HTSACat( &bibpTmp, "bibp1.0/resolve?usin=" );
                      HTSACat( &bibpTmp, &doc->address[5] );
                      HTSACopy( &doc->address, bibpTmp );
                      WWWDoc.address = &doc->address;
                      if ( bibpTmp )
                      {
                        free( bibpTmp );
                      }
                    }
                    if ( url_type == FILE_URL_TYPE )
                    {
                      LYTildeExpand( &doc->address, 1 );
                      WWWDoc.address = &doc->address;
                    }
                    if ( WWW_TraceFlag && LYTraceLogFP == 0 )
                      sleep( MessageSecs );
                    user_message( gettext( "Getting %s" ), &doc->address );
                    if ( WWW_TraceFlag && WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "\n" );
                    }
                    if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
                    {
                      if ( use_this_url_instead )
                      {
                        if ( is_url( use_this_url_instead ) == 0 )
                        {
                          HTUserMsg( gettext( "Location URL is not absolute." ) );
                          temp = HTParse( use_this_url_instead, WWWDoc.address, 31 );
                          if ( temp && temp[0] )
                            HTSACopy( &use_this_url_instead, temp );
                          if ( temp )
                          {
                            free( temp );
                            temp = 0;
                          }
                        }
                        url_type = is_url( use_this_url_instead );
                        if ( HTPermitRedir == 0 )
                        {
                          if ( ( LYValidate && url_type != HTTP_URL_TYPE && url_type != HTTPS_URL_TYPE ) || ( ( no_file_url || no_goto_file ) && url_type == FILE_URL_TYPE ) || ( no_goto_lynxcgi && url_type == LYNXCGI_URL_TYPE ) || ( no_goto_bibp && url_type == BIBP_URL_TYPE ) || ( no_goto_cso && url_type == CSO_URL_TYPE ) || ( no_goto_finger && url_type == FINGER_URL_TYPE ) || ( no_goto_ftp && ( url_type == FTP_URL_TYPE || url_type == NCFTP_URL_TYPE ) ) || ( no_goto_gopher && url_type == GOPHER_URL_TYPE ) || ( no_goto_http && url_type == HTTP_URL_TYPE ) || ( no_goto_https && url_type == HTTPS_URL_TYPE ) || ( no_goto_mailto && url_type == MAILTO_URL_TYPE ) || ( no_goto_news && url_type == NEWS_URL_TYPE ) || ( no_goto_nntp && url_type == NNTP_URL_TYPE ) || ( no_goto_rlogin && url_type == RLOGIN_URL_TYPE ) || ( no_goto_snews && url_type == SNEWS_URL_TYPE ) || ( no_goto_telnet && url_type == TELNET_URL_TYPE ) || ( no_goto_tn3270 && url_type == TN3270_URL_TYPE ) || ( no_goto_wais && url_type == WAIS_URL_TYPE ) )
                          {
                            HTAlert( gettext( "Illegal redirection URL received from server!" ) );
                            if ( LYCursesON )
                            {
                              HTUserMsg2( gettext( "Illegal URL: %s" ), use_this_url_instead );
                            }
                            else
                            {
                              fprintf( stderr, gettext( "Illegal URL: %s" ), use_this_url_instead );
                            }
                            if ( use_this_url_instead == 0 )
                            {
                              return 3;
                            }
                            free( use_this_url_instead );
                            use_this_url_instead = 0;
                            return 3;
                          }
                        }
                        pound = strchr( &doc->address, '#' );
                        if ( pound && strchr( use_this_url_instead, '#' ) == 0 )
                        {
                          if ( WWW_TraceFlag )
                          {
                            fprintf( TraceFP( ), "getfile: Adding fragment '%s' to redirection URL.\n", pound );
                          }
                          HTSACat( &use_this_url_instead, pound );
                          *(int*)&doc->link = -1;
                        }
                        if ( WWW_TraceFlag && LYTraceLogFP == 0 )
                          sleep( MessageSecs );
                        HTUserMsg2( gettext( "Using %s" ), use_this_url_instead );
                        if ( WWW_TraceFlag )
                        {
                          fprintf( TraceFP( ), "\n" );
                        }
                        HTSACopy( &doc->address, use_this_url_instead );
                        if ( use_this_url_instead )
                        {
                          free( use_this_url_instead );
                          use_this_url_instead = 0;
                        }
                        if ( redirect_post_content == 0 )
                        {
                          LYFreePostData( doc );
                        }
                      }
                      else
                      {
                        if ( HTNoDataOK )
                        {
                          return 3;
                        }
                        return 0;
                      }
                    }
                    else
                    {
                      lynx_mode = 1;
                      pound = strchr( &doc->address, '#' );
                      if ( WWW_Download_File )
                      {
                        HTParentAnchor *tmpanchor = HTAnchor_findAddress( &WWWDoc );
                        char *fname = 0;
                        if ( HTAnchor_SugFname( tmpanchor ) )
                        {
                          HTSACopy( &fname, HTAnchor_SugFname( tmpanchor ) );
                        }
                        else
                          HTSACopy( &fname, &doc->address );
                        HTCheckFnameForCompression( &fname, tmpanchor, 0 );
                        if ( LYdownload_options( &fname, WWW_Download_File ) < 0 )
                        {
                          if ( fname == 0 )
                          {
                            return 0;
                          }
                          free( fname );
                          fname = 0;
                          return 0;
                        }
                        else
                        {
                          LYAddVisitedLink( doc );
                          HTSACopy( &doc->address, fname );
                          if ( fname )
                          {
                            free( fname );
                            fname = 0;
                          }
                          doc->internal_link = 0;
                          WWWDoc.address = &doc->address;
                          LYFreePostData( doc );
                          WWWDoc.post_data = 0;
                          WWWDoc.post_content_type = 0;
                          *(int*)&doc->bookmark = 0;
                          WWWDoc.bookmark = &doc->bookmark;
                          WWWDoc.isHEAD = doc->isHEAD = 0;
                          WWWDoc.safe = doc->safe = 0;
                          HTOutputFormat = HTAtom_for( "www/present" );
                          if ( ( HTLoadAbsolute( &WWWDoc ) & 255 ) == 0 )
                          {
                            return 0;
                          }
                          return 1;
                        }
                      }
                      else
                      {
                        if ( pound == 0 && ( strcmp( &doc->address, HTLoadedDocumentURL( ) ) || !( HTSABEql( &doc->post_data, HTLoadedDocumentPost_data( ) ) & 255 ) || doc->isHEAD != HTLoadedDocumentIsHEAD( ) ) )
                        {
                          LYAddVisitedLink( doc );
                          return 3;
                        }
                        if ( pound == 0 )
                        {
                          return 1;
                        }
                        if ( HTMainText == 0 )
                        {
                          return 3;
                        }
                        if ( ( HTFindPoundSelector( &pound[1] ) & 255 ) == 0 )
                        {
                          return 1;
                        }
                        target[0] = www_search_result;
                        *(int*)&doc->link = -1;
                      }
                    }
                    break;
                  default:
                    WWWDoc.address = &doc->address;
                    lynx_edit_mode = 0;
                    break;
                  }
                }
              }
            }
          }
          break;
        }
        break;
      }
    }
    else
      break;
  }
  if ( WWW_TraceFlag && LYTraceLogFP == 0 )
    sleep( MessageSecs );
  HTUserMsg2( gettext( "Badly formed address %s" ), &doc->address );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "\n" );
  }
  return 3;
}
void srcmode_for_next_retrieval( int mode )
{
  if ( mode < 0 )
  {
    HTOutputFormat = HTAtom_for( "www/present" );
    psrc_view = 0;
  }
  else
  if ( mode == 0 )
  {
    if ( WWW_SOURCE == HTOutputFormat )
    {
      HTOutputFormat = HTAtom_for( "www/present" );
    }
    else
    if ( LYpsrc )
    {
      psrc_view = 0;
    }
  }
  else
  if ( LYpsrc )
  {
    psrc_view = 1;
  }
  else
  {
    HTOutputFormat = WWW_SOURCE;
  }
  return;
}
int follow_link_number( int c, int cur, DocInfo *doc, int *num )
{
  int eax;
  char temp[120];
  char *p = temp;
  int rel = 0;
  int new_top, new_link;
  BOOLEAN want_go;
  int curline = num[0];
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "follow_link_number(%d,%d,...)\n", c, cur );
  }
  temp[0] = c;
  temp[1] = 0;
  num[0] = -1;
  mustshow = 1;
  statusline( gettext( "Follow link (or goto link or page) number: " ) );
  if ( LYgetstr( temp, 0, 120, 0 ) < 0 || temp[0] == 0 )
  {
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    return 270;
  }
  else
  {
    num[0] = atoi( p );
    for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048; p++ )
    {
      // p++;
    }
    c = p[0];
    if ( c != 43 && c != 45 )
    {
      if ( c )
      {
        p++;
        rel = p[0];
      }
    }
    else
    {
      rel = c;
      p++;
      c = p[0];
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "  temp=%s, *num=%d, rel='%c'\n", temp, num[0], rel );
    }
    if ( ( c == 112 || c == 80 ) && display_lines == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), " curline=%d, LYlines=%d, display too small!\n", curline, LYlines );
      }
      return 5;
    }
    else
    {
      if ( c == 112 || c == 80 )
      {
        int nlines = HText_getNumOfLines( );
        int npages = 1;
        int curpage = 1;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), " nlines=%d, npages=%d, curline=%d, curpage=%d\n", nlines, npages, curline, curpage );
        }
        if ( num[0] <= 0 )
          num[0] = rel == 0;
        if ( rel == 43 )
          num[0] += curpage;
        else
        if ( rel == 45 )
          num[0] = curpage - num[0];
        *(int*)&doc->line = 1;
        return 3;
      }
      else
      {
        want_go = c == 103 || c == 71 ? 1 : 0;
        if ( rel )
        {
          num[0] = HTGetRelLinkNum( num[0], rel, cur );
        }
        if ( num[0] > 0 )
        {
          int info;
          char *text = 0;
          info = HTGetLinkInfo( num[0], want_go, &new_top, &new_link, &text, &links[ cur ].lname );
          if ( text )
            LYSetHilite( cur, text );
          if ( info == 6 )
          {
            links[ cur ].type = 6;
            return 1;
          }
          else
          {
            if ( info == 8 )
            {
              doc->line = new_top + 1;
              doc->link = new_link;
              return 2;
            }
            else
            {
              if ( info )
              {
                links[ cur ].type = 2;
                return 1;
              }
              else
                return 5;
            }
          }
        }
        else
          return 5;
      }
    }
  }
}
void add_trusted( char *str, int type )
{
  static BOOLEAN first = 1;
  struct trust *tp;
  char *path;
  char *src = str;
  int Type = type;
  if ( src )
  {
    if ( first )
      first = 0;
    path = strchr( src, '\t' );
    if ( path )
    {
      path[0] = 0;
      path++;
    }
    else
      path = "";
    tp = malloc( ( 1 ) * sizeof( struct trust ) );
    if ( tp == 0 )
      outofmem( "./LYGetFile.c", "add_trusted" );
    *(int*)&tp->src[0] = 0;
    *(int*)&tp->path = 0;
    tp->type = Type;
    HTSACopy( &tp->src, src );
    HTSACopy( &tp->path, path );
    if ( Type == 0 )
    {
      if ( trusted_exec_default.src == trusted_exec )
        *(int*)&tp->next = 0;
      else
        tp->next = trusted_exec;
      trusted_exec = tp;
    }
    else
    {
      if ( Type == 1 )
      {
        if ( always_trusted_exec_default.src == always_trusted_exec )
          *(int*)&tp->next = 0;
        else
          tp->next = always_trusted_exec;
        always_trusted_exec = tp;
      }
      else
      {
        if ( Type == 2 )
        {
          if ( trusted_cgi_default.src == trusted_cgi )
            *(int*)&tp->next = 0;
          else
            tp->next = trusted_cgi;
          trusted_cgi = tp;
        }
      }
    }
  }
  return;
}
BOOLEAN exec_ok( char *source, char *linktext, int type )
{
  struct trust *tp;
  char *cp;
  char *allowed_extra_chars;
  int Type = type;
  if ( LYJumpFileURL )
  {
  }
  if ( Type == 0 )
    tp = trusted_exec;
  else
  if ( Type == 1 )
    tp = always_trusted_exec;
  else
  if ( Type == 2 )
    tp = trusted_cgi;
  else
  {
    HTAlert( gettext( "Executable link rejected due to malformed request." ) );
  }
  if ( strstr( linktext, "../" ) )
  {
    HTAlert( gettext( "Executable link rejected due to relative path string ('../')." ) );
  }
  if ( Type == 2 )
    allowed_extra_chars = " _-:./@~$&+=\t";
  else
    allowed_extra_chars = " _-:./@~$+=\t";
  cp = linktext;
  for ( ; cp[0]; cp++ )
  {
    if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8 ) == 0 && strchr( allowed_extra_chars, cp[0] ) == 0 )
    {
      char *buf = 0;
      HTSprintf0( &buf, gettext( "Executable link rejected due to `%c' character." ), cp[0] );
      HTAlert( buf );
      if ( buf == 0 )
      {
        break;
      }
      free( buf );
      buf = 0;
      break;
    }
    else
    {
      // cp++;
    }
  }
  while ( 1 )
  {
    if ( tp )
    {
      if ( tp->type == Type )
      {
        char *command = linktext;
        if ( linktext == strstr( command, "//" ) )
          command += 2;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "comparing source\n\t'%s'\n\t'%s'\n", source, &tp->src[0] );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "comparing command\n\t'%s'\n\t'%s'\n", command, &tp->path );
        }
        if ( strncmp( source, &tp->src[0], strlen( &tp->src[0] ) ) == 0 && strncmp( command, &tp->path, strlen( &tp->path ) ) == 0 )
        {
          break;
        }
      }
      tp = &tp->next;
    }
    else
    {
      if ( Type == 0 && always_trusted_exec_default.src != always_trusted_exec )
      {
        Type = 1;
        tp = always_trusted_exec;
      }
      else
        break;
    }
  }
  if ( !no_exec || type != 1 )
  {
    HTAlert( gettext( "Executable link rejected due to location or path." ) );
  }
  return 0;
}
int fix_httplike_urls( DocInfo *doc, UrlTypes type )
{
  char *slash;
  if ( strchr( &doc->address, '#' ) )
  {
    return 0;
  }
  if ( type == FTP_URL_TYPE && *(char*)(doc->address + strlen( &doc->address ) + -1) == '/' )
  {
    char *proxy;
    char *path = HTParse( &doc->address, "", 5 );
    if ( path )
    {
      if ( path[0] == '/' && path[1] == 0 )
      {
        if ( path )
        {
          free( path );
          path = 0;
        }
        return 0;
      }
      else
      {
        if ( path )
        {
          free( path );
          path = 0;
        }
      }
    }
    proxy = LYGetEnv( "ftp_proxy" );
    if ( proxy && ( override_proxy( &doc->address ) & 255 ) == 0 )
    {
      return 0;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "fix_httplike_urls: URL '%s'\n", &doc->address );
    }
    LYTrimHtmlSep( &doc->address );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "            changed to '%s'\n", &doc->address );
    }
    if ( WWW_TraceFlag && LYTraceLogFP == 0 )
      sleep( MessageSecs );
  }
  else
  {
    if ( type == NCFTP_URL_TYPE )
    {
      char *path = 0;
      char *first = &doc->address;
      char *second = strchr( first, ':' );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "fix_httplike_urls: URL '%s'\n", &doc->address );
      }
      second[0] = 0;
      second++;
      HTSprintf0( &path, "%s//%s%s", "ftp:", first, second );
      if ( doc->address )
      {
        free( &doc->address );
        *(int*)&doc->address = 0;
      }
      doc->address = path;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "            changed to '%s'\n", &doc->address );
      }
      if ( WWW_TraceFlag && LYTraceLogFP == 0 )
        sleep( MessageSecs );
    }
  }
  slash = strrchr( &doc->address, '/' );
  if ( slash )
  {
    if ( slash[ -1 ] != '/' || slash[ -2 ] != ':' )
    {
      return 0;
    }
    if ( type == HTTP_URL_TYPE || type == HTTPS_URL_TYPE )
    {
      if ( slash[ -2 ] != strchr( &doc->address, ':' ) )
      {
        return 0;
      }
      if ( strchr( &doc->address, '?' ) )
      {
        return 0;
      }
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "fix_httplike_urls: URL '%s'\n", &doc->address );
  }
  LYAddHtmlSep( &doc->address );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "            changed to '%s'\n", &doc->address );
  }
  if ( WWW_TraceFlag && LYTraceLogFP == 0 )
    sleep( MessageSecs );
  return 1;
}
#if 0
#endif
