#include "LYCgi.c.h"
static void remember_alloced( void *ptr );
static void add_environment_value( char *env_value );
static BOOLEAN can_exec_cgi( char *linktext, char *linkargs );
static int LYLoadCGI( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink );
static char **env;
static int envc_size;
static int envc;
static HTList *alloced;
static char *user_agent;
static char *server_software;
static char *accept_language;
static char *post_len;
HTProtocol LYLynxCGI = { "lynxcgi", &LYLoadCGI, 0,  }
;
void remember_alloced( void *ptr )
{
  if ( alloced == 0 )
  {
    alloced = HTList_new( );
  }
  HTList_addObject( alloced, ptr );
  return;
}
void add_environment_value( char *env_value )
{
  if ( envc_size == envc )
  {
    envc_size += 10;
    if ( env != 0 )
    {
      env = realloc( env, ( envc_size * 4 ) + 8 );
    }
    else
    {
      env = malloc( ( envc_size * 4 ) + 8 );
      remember_alloced( (void*)&env );
    }
    if ( env == 0 )
    {
      outofmem( "./LYCgi.c", "LYCgi" );
    }
  }
  env[ envc ] = env_value;
  envc++;
  env[ envc ] = 0;
  return;
}
void add_lynxcgi_environment( char *variable_name )
{
  char *env_value = LYGetEnv( variable_name );
  if ( env_value != 0 )
  {
    char *add_value = 0;
    HTSprintf0( &add_value, "%s=%s", variable_name, env_value );
    add_environment_value( add_value );
    remember_alloced( (void*)add_value );
  }
  return;
}
BOOLEAN can_exec_cgi( char *linktext, char *linkargs )
{
  char *format = gettext( "Do you want to execute \"%s\"?" );
  char *message = 0;
  char *command = 0;
  char *p;
  BOOLEAN result = 1;
  if ( ( exec_ok( HTLoadedDocumentURL( ), linktext, 2 ) & 255 ) == 0 )
  {
    result = 0;
  }
  else
  if ( user_mode <= 1 )
  {
    HTSACopy( &command, linktext );
    if ( linkargs != 0 && ( linkargs[0] & 255 ) != 0 )
      HTSprintf( &command, " %s", linkargs );
    HTUnEscape( command );
    p = command;
    for ( ; ( p[0] & 255 ) != 0; p++ )
    {
      if ( p[0] == '+' )
        p[0] = ' ';
      //p++;
    }
    HTSprintf0( &message, format, command );
    result = HTConfirm( message );
    if ( message != 0 )
    {
      free( message );
      message = 0;
    }
    if ( command != 0 )
    {
      free( command );
      command = 0;
    }
  }
  return result;
}
int LYLoadCGI( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  int eax;
  static BOOLEAN first_time = 1;
  int status = 0;
  char *cp;
  struct stat stat_buf;
  char *pgm = 0;
  char *pgm_args = 0;
  int statrv;
  char *orig_pgm = 0;
  char *document_root = 0;
  char *path_info = 0;
  char *pgm_buff = 0;
  char *path_translated;
  if ( arg == 0 || ( arg[0] & 255 ) == 0 || strlen( arg ) <= 8 )
  {
    HTAlert( gettext( "Bad request!" ) );
    status = -2;
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
      return status;
    }
    else
    {
      return status;
    }
  }
  else
  {
    if ( strncmp( arg, "lynxcgi://localhost", 19 ) == 0 )
    {
      HTSACopy( &pgm, &arg[19] );
    }
    HTSACopy( &pgm, &arg[8] );
    cp = strchr( pgm, 63 );
    if ( cp != 0 )
    {
      cp[0] = 0;
      cp++;
      pgm_args = cp;
    }
    HTSACopy( &orig_pgm, pgm );
    cp = trimPoundSelector( pgm );
    if ( cp != 0 )
      pgm_args = 0;
    HTUnEscape( pgm );
    statrv = stat64( pgm, &stat_buf.st_dev );
    if ( statrv < 0 )
    {
      HTSACopy( &pgm_buff, pgm );
    }
    if ( statrv != 0 )
    {
      HTAlert( gettext( "Unable to access cgi script" ) );
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "LYNXCGI: %s: %s\n", "stat() failed", strerror( *(int*)(__errno_location( )) ) );
        status = -4;
        if ( path_info != 0 )
        {
          free( path_info );
          path_info = 0;
          if ( pgm != 0 )
          {
            free( pgm );
            pgm = 0;
            if ( orig_pgm != 0 )
            {
              free( orig_pgm );
              orig_pgm = 0;
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
        status = -4;
    }
    else
    {
      if ( ( stat_buf.st_mode & 61440 ) != 32768 || ( stat_buf.st_mode & 73 ) == 0 )
      {
        char *new_arg = 0;
        if ( path_info != 0 )
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "%s is not a file and %s not an executable, giving up.\n", orig_pgm, pgm );
            if ( path_info != 0 )
            {
              free( path_info );
              path_info = 0;
              if ( pgm != 0 )
              {
                free( pgm );
                pgm = 0;
                if ( orig_pgm != 0 )
                {
                  free( orig_pgm );
                  orig_pgm = 0;
                  status = -4;
                }
                else
                  status = -4;
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
          LYLocalFileToURL( &new_arg, orig_pgm );
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "%s is not an executable file, passing the buck.\n", arg );
            status = HTLoadFile( new_arg, anAnchor, format_out, &sink[0]._HTStream );
            if ( new_arg != 0 )
            {
              free( new_arg );
              new_arg = 0;
            }
          }
          else
          {
            status = HTLoadFile( new_arg, anAnchor, format_out, &sink[0]._HTStream );
          }
        }
      }
      else
      {
        if ( path_info != 0 && anAnchor != HTMainAnchor && ( ( reloading & 255 ) == 0 || anAnchor->document == 0 ) && strcmp( arg, HTLoadedDocumentURL( ) ) != 0 && ( HText_AreDifferent( anAnchor, arg ) & 255 ) != 0 && HTUnEscape( orig_pgm ) != 0 && ( can_exec_cgi( orig_pgm, "" ) & 255 ) == 0 )
          status = -29999;
        else
        {
          if ( ( no_lynxcgi & 255 ) != 0 )
          {
            HTUserMsg( gettext( "cgi support has been disabled." ) );
            status = -29999;
          }
          else
          {
            if ( ( no_bookmark_exec & 255 ) != 0 && anAnchor != HTMainAnchor && ( ( reloading & 255 ) == 0 || anAnchor->document == 0 ) && strcmp( arg, HTLoadedDocumentURL( ) ) != 0 && ( HText_AreDifferent( anAnchor, arg ) & 255 ) != 0 && HTLoadedDocumentBookmark( ) != 0 )
            {
              HTUserMsg( gettext( "Execution via bookmarks is disabled." ) );
              status = -29999;
            }
            else
            {
              if ( anAnchor != HTMainAnchor && ( ( reloading & 255 ) == 0 || anAnchor->document == 0 ) && strcmp( arg, HTLoadedDocumentURL( ) ) != 0 && ( HText_AreDifferent( anAnchor, arg ) & 255 ) != 0 && ( can_exec_cgi( pgm, pgm_args ) & 255 ) == 0 )
                status = -29999;
              else
              {
                HTFormat format_in;
                HTStream *target = 0;
                int fd1[2], fd2[2];
                char buf[1024];
                int pid;
                int wstatus;
                if ( ( anAnchor->isHEAD & 255 ) != 0 || ( keep_mime_headers & 255 ) != 0 )
                {
                  format_in = HTAtom_for( "text/plain" );
                }
                else
                {
                  format_in = HTAtom_for( "www/mime" );
                }
                target = HTStreamStack( format_in, format_out, &sink[0]._HTStream, anAnchor );
                if ( target == 0 || target == 0 )
                {
                  char *tmp = 0;
                  HTSprintf0( &tmp, gettext( "Sorry, no known way of converting %s to %s." ), format_in->name, format_out->name );
                  HTAlert( tmp );
                  if ( tmp != 0 )
                  {
                    free( tmp );
                    tmp = 0;
                  }
                  status = -29999;
                }
                else
                {
                  if ( anAnchor->post_data != 0 && pipe( fd1 ) < 0 )
                  {
                    HTAlert( gettext( "Unable to set up connection." ) );
                    if ( ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "LYNXCGI: %s: %s\n", "pipe() failed", strerror( *(int*)(__errno_location( )) ) );
                    }
                    status = -3;
                  }
                  else
                  {
                    if ( pipe( fd2 ) < 0 )
                    {
                      HTAlert( gettext( "Unable to set up connection." ) );
                      if ( ( WWW_TraceFlag & 255 ) != 0 )
                      {
                        fprintf( TraceFP( ), "LYNXCGI: %s: %s\n", "pipe() failed", strerror( *(int*)(__errno_location( )) ) );
                      }
                      close( fd1[0] );
                      close( fd1[1] );
                      status = -3;
                    }
                    else
                    {
                      if ( ( first_time & 255 ) != 0 )
                      {
                        first_time = 0;
                        add_environment_value( "REMOTE_HOST=localhost" );
                        add_environment_value( "REMOTE_ADDR=127.0.0.1" );
                        HTSprintf0( &user_agent, "HTTP_USER_AGENT=%s/%s libwww/%s", "Lynx", "2.8.7dev.11", HTLibraryVersion );
                        add_environment_value( user_agent );
                        HTSprintf0( &server_software, "SERVER_SOFTWARE=%s/%s", "Lynx", "2.8.7dev.11" );
                        add_environment_value( server_software );
                      }
                      fflush( *(int*)(135965440) );
                      fflush( *(int*)(135965404) );
                      if ( ( WWW_TraceFlag & 255 ) != 0 )
                      {
                        fflush( TraceFP( ) );
                      }
                      pid = fork( );
                      if ( pid >= 1 )
                      {
                        int chars, total_chars;
                        close( fd2[1] );
                        if ( anAnchor->post_data != 0 )
                        {
                          int written, remaining, total_written = 0;
                          close( fd1[0] );
                          if ( ( WWW_TraceFlag & 255 ) != 0 )
                          {
                            if ( ( WWW_TraceFlag & 255 ) != 0 )
                            {
                              fprintf( TraceFP( ), "LYNXCGI: Doing post, content-type '%s'\n", anAnchor->post_content_type );
                            }
                            if ( ( WWW_TraceFlag & 255 ) != 0 )
                            {
                              fprintf( TraceFP( ), "LYNXCGI: Writing:\n" );
                            }
                            trace_bstring( anAnchor->post_data );
                            if ( ( WWW_TraceFlag & 255 ) != 0 )
                            {
                              fprintf( TraceFP( ), "----------------------------------\n" );
                            }
                          }
                          remaining = anAnchor->post_data == 0 ? 0 : anAnchor->post_data->len;
                          do
                          {
                            written = write( fd1[1], ( anAnchor->post_data == 0 ? 0 : anAnchor->post_data->str ) + total_written, remaining );
                            if ( written != 0 )
                            {
                              if ( written < 0 )
                              {
                                if ( *(int*)(__errno_location( )) == 4 )
                                  continue;
                                else
                                {
                                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                                  {
                                    fprintf( TraceFP( ), "LYNXCGI: %s: %s\n", "write() of POST data failed", strerror( *(int*)(__errno_location( )) ) );
                                    break;
                                  }
                                  else
                                    break;
                                }
                              }
                              else
                              {
                                if ( ( WWW_TraceFlag & 255 ) != 0 )
                                {
                                  fprintf( TraceFP( ), "LYNXCGI: Wrote %d bytes of POST data.\n", written );
                                }
                                else
                                {
                                  total_written += written;
                                  remaining -= written;
                                }
                              }
                            }
                            else
                              break;
                          }
                          while ( remaining != 0 );
                          if ( remaining != 0 )
                          {
                            if ( ( WWW_TraceFlag & 255 ) != 0 )
                            {
                              fprintf( TraceFP( ), "LYNXCGI: %d bytes remain unwritten!\n", remaining );
                              close( fd1[1] );
                              total_chars = 0;
                              HTReadProgress( (long long)0, (long long)0 );
                            }
                          }
                        }
                        else
                        {
                          total_chars = 0;
                          HTReadProgress( (long long)0, (long long)0 );
                        }
                      }
                      else
                      {
                        if ( pid == 0 )
                        {
                          char **argv = 0;
                          int argv_cnt = 3;
                          char **cur_argv = 0;
                          int exec_errno;
                          close( fd2[0] );
                          dup2( fd2[1], fileno( *(int*)(135965440) ) );
                          dup2( fd2[1], fileno( *(int*)(135965404) ) );
                          close( fd2[1] );
                          if ( language != 0 && ( language[0] & 255 ) != 0 )
                          {
                            HTSprintf0( &accept_language, "HTTP_ACCEPT_LANGUAGE=%s", language );
                            add_environment_value( accept_language );
                          }
                          if ( pref_charset != 0 && ( pref_charset[0] & 255 ) != 0 )
                          {
                            cp = 0;
                            HTSACopy( &cp, "HTTP_ACCEPT_CHARSET=" );
                            HTSACat( &cp, pref_charset );
                            add_environment_value( cp );
                          }
                          if ( anAnchor->post_data != 0 && anAnchor->post_content_type != 0 )
                          {
                            cp = 0;
                            HTSACopy( &cp, "CONTENT_TYPE=" );
                            HTSACat( &cp, anAnchor->post_content_type );
                            add_environment_value( cp );
                          }
                          if ( anAnchor->post_data != 0 )
                          {
                            close( fd1[1] );
                            dup2( fd1[0], fileno( *(int*)(135965416) ) );
                            close( fd1[0] );
                            add_environment_value( "REQUEST_METHOD=POST" );
                            HTSprintf0( &post_len, "CONTENT_LENGTH=%d", anAnchor->post_data == 0 ? 0 : anAnchor->post_data->len );
                            add_environment_value( post_len );
                          }
                          else
                          {
                            close( fileno( *(int*)(135965416) ) );
                            if ( ( anAnchor->isHEAD & 255 ) != 0 )
                              add_environment_value( "REQUEST_METHOD=HEAD" );
                            if ( pgm_args != 0 )
                            {
                              cp = pgm_args;
                              for ( ; ( cp[0] & 255 ) != 0; cp++ )
                              {
                                if ( cp[0] == '+' )
                                  argv_cnt++;
                                //cp++;
                              }
                            }
                            argv = malloc( ( argv_cnt ) * sizeof( char* ) );
                            if ( argv == 0 )
                              outofmem( "./LYCgi.c", "LYCgi" );
                            cur_argv = &argv[1];
                            if ( pgm_args != 0 )
                            {
                              char *cr;
                              if ( ( is_www_index & 255 ) != 0 )
                                add_environment_value( "REQUEST_METHOD=SEARCH" );
                              else
                              if ( ( anAnchor->isHEAD & 255 ) == 0 && anAnchor->post_data == 0 )
                                add_environment_value( "REQUEST_METHOD=GET" );
                              cp = 0;
                              HTSACopy( &cp, "QUERY_STRING=" );
                              HTSACat( &cp, pgm_args );
                              add_environment_value( cp );
                              cr = cp = pgm_args;
                              while ( ( cp[0] & 255 ) != 0 )
                              {
                                if ( cp[0] == '+' )
                                {
                                  cp[0] = 0;
                                  cp++;
                                  cur_argv[0] = HTUnEscape( cr );
                                  cur_argv++;
                                  cr = cp;
                                }
                                cp++;
                              }
                              cur_argv[0] = HTUnEscape( cr );
                              cur_argv++;
                            }
                            else
                            if ( ( anAnchor->isHEAD & 255 ) == 0 && anAnchor->post_data == 0 )
                              add_environment_value( "REQUEST_METHOD=GET" );
                            cur_argv[0] = 0;
                            argv[0] = pgm;
                            if ( LYCgiDocumentRoot != 0 )
                            {
                              cp = 0;
                              HTSACopy( &cp, "DOCUMENT_ROOT=" );
                              HTSACat( &cp, LYCgiDocumentRoot );
                              add_environment_value( cp );
                            }
                            if ( path_info != 0 )
                            {
                              cp = 0;
                              HTSACopy( &cp, "PATH_INFO=" );
                              HTSACat( &cp, path_info );
                              add_environment_value( cp );
                            }
                            if ( LYCgiDocumentRoot != 0 && path_info != 0 )
                            {
                              HTSACopy( &document_root, LYCgiDocumentRoot );
                              LYTrimHtmlSep( document_root );
                              path_translated = document_root;
                              HTSACat( &path_translated, path_info );
                              cp = 0;
                              HTSACopy( &cp, "PATH_TRANSLATED=" );
                              HTSACat( &cp, path_translated );
                              add_environment_value( cp );
                              if ( path_translated != 0 )
                              {
                                free( path_translated );
                                path_translated = 0;
                              }
                            }
                            execve( argv[0], argv, env );
                            exec_errno = *(int*)(__errno_location( ));
                            if ( ( WWW_TraceFlag & 255 ) != 0 )
                            {
                              fprintf( TraceFP( ), "LYNXCGI: %s: %s\n", "execve failed", strerror( *(int*)(__errno_location( )) ) );
                            }
                            puts( "Content-Type: text/plain\r\n\r" );
                            if ( ( anAnchor->isHEAD & 255 ) == 0 )
                            {
                              printf( "exec of %s failed", pgm );
                              printf( ": %s.\r\n", strerror( exec_errno ) );
                            }
                            fflush( *(int*)(135965440) );
                            fflush( *(int*)(135965404) );
                            _exit( 1 );
                          }
                        }
                        HTAlert( gettext( "Unable to make connection" ) );
                        if ( ( WWW_TraceFlag & 255 ) != 0 )
                        {
                          fprintf( TraceFP( ), "LYNXCGI: %s: %s\n", "fork() failed", strerror( *(int*)(__errno_location( )) ) );
                        }
                        status = -204;
                        close( fd1[0] );
                        close( fd1[1] );
                        close( fd2[0] );
                        close( fd2[1] );
                        status = -1;
                      }
                    }
                  }
                }
                if ( target != 0 )
                {
                  ;
                }
              }
            }
          }
        }
      }
    }
  }
}
