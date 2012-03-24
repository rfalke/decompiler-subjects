#include "LYNews.c.h"
BOOLEAN term_message;
BOOLEAN message_has_content( char *filename, BOOLEAN *nonspaces )
{
  FILE *fp;
  char *buffer = 0;
  BOOLEAN in_headers = 1;
  nonspaces = 0;
  if ( filename )
  {
    fp = fopen64( filename, "r" );
    if ( fp == 0 )
      goto B2;
    else
    {
      while ( LYSafeGets( &buffer, fp ) == 0 )
      {
        char *cp = buffer;
        char firstnonblank = 0;
        LYTrimNewline( cp );
        for ( ; cp; cp++ )
        {
          if ( firstnonblank == 0 && *(short*)(*(int*)(__ctype_b_loc( )) + ( cp * 2 )) < 0 )
            firstnonblank = cp;
          else
          {
            if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp * 2 )) & 8192 ) == 0 )
              nonspaces = 1;
          }
          // cp++;
        }
        if ( firstnonblank && firstnonblank != '>' && in_headers == 0 )
        {
          LYCloseInput( fp );
          if ( buffer == 0 )
          {
            break;
          }
          free( buffer );
          buffer = 0;
          break;
        }
        else
        {
          if ( firstnonblank == 0 )
          {
            in_headers = 0;
          }
        }
      }
      if ( buffer )
      {
        free( buffer );
        buffer = 0;
      }
      LYCloseInput( fp );
      return 1;
    }
  }
B2:;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Failed to open file %s for reading!\n", "(null)" );
  }
  return 1;
}
char *LYNewsPost( char *newsgroups, BOOLEAN followup )
{
  int eax;
  char user_input[1024];
  char CJKinput[1024];
  char *cp = 0;
  char *kp = 0;
  int c = 0;
  int len;
  FILE *fd = 0;
  char my_tempfile[256];
  FILE *fc = 0;
  char CJKfile[256];
  char *postfile = 0;
  char *NewsGroups = 0;
  char *References = 0;
  char *org = 0;
  FILE *fp = 0;
  BOOLEAN nonempty = 0;
  BOOLEAN nonspaces = 0;
  if ( newsgroups == 0 || newsgroups == 0 )
    return postfile;
  else
  if ( no_newspost )
    return postfile;
  else
  {
    fd = LYOpenTemp( my_tempfile, ".html", "w" );
    if ( fd == 0 )
    {
      HTAlert( gettext( "Can't open temporary file!" ) );
      return postfile;
    }
    else
    {
      CJKfile = 0;
      if ( current_char_set == UCGetLYhndl_byMIME( "euc-jp" ) || current_char_set == UCGetLYhndl_byMIME( "shift_jis" ) )
      {
        fc = LYOpenTemp( CJKfile, ".html", "w" );
        if ( fc == 0 )
        {
          HTAlert( gettext( "Can't open temporary file!" ) );
          LYRemoveTemp( my_tempfile );
          return postfile;
        }
      }
      HTSACopy( &NewsGroups, newsgroups );
      cp = strstr( NewsGroups, ";ref=" );
      if ( cp )
      {
        cp = 0;
        cp += 5;
        if ( cp == '<' )
          HTSACopy( &References, cp );
        else
        {
          HTSACopy( &References, "&lt;" );
          HTSACat( &References, cp );
          HTSACat( &References, "&gt;" );
        }
        HTUnEscape( References );
        cp = strchr( References, '@' );
        if ( ( cp == 0 || cp <= References || !( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp * 2 )) & 8 ) ) && References )
        {
          free( References );
          References = 0;
        }
      }
      HTUnEscape( NewsGroups );
      if ( NewsGroups == 0 )
        LYCloseTempFP( fd );
      else
      {
        signal( 2, &terminate_message );
        term_message = 0;
        LYclear( );
        LYmove( 2, 0 );
        scrollok( LYwin, 1 );
        LYwaddnstr( LYwin, gettext( "You will be posting to:" ), strlen( gettext( "You will be posting to:" ) ) );
        LYwaddnstr( LYwin, "\n\t", 2 );
        LYwaddnstr( LYwin, NewsGroups, strlen( NewsGroups ) );
        waddch( LYwin, 10 );
        LYwaddnstr( LYwin, gettext( "\n\n Please provide your mail address for the From: header\n" ), strlen( gettext( "\n\n Please provide your mail address for the From: header\n" ) ) );
        sprintf( user_input, "From: %.*s", 1016, "" );
        if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || term_message )
        {
          HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
          LYCloseTempFP( fd );
          scrollok( LYwin, 0 );
        }
        else
        {
          fprintf( fd, "%s\n", user_input );
          LYwaddnstr( LYwin, gettext( "\n\n Please provide or edit the Subject: header\n" ), strlen( gettext( "\n\n Please provide or edit the Subject: header\n" ) ) );
          memcpy( user_input, "Subject: ", 10 );
          if ( followup == 1 && nhist > 0 )
          {
            kp = HText_getTitle( );
            if ( kp )
            {
              kp = LYSkipCBlanks( kp );
              if ( HTCJK == JAPANESE )
              {
                CJKinput = 0;
                if ( kanji_code == EUC )
                {
                  TO_EUC( (unsigned char*)kp, CJKinput );
                  kp = CJKinput;
                }
                else
                if ( kanji_code == SJIS )
                {
                  TO_SJIS( (unsigned char*)kp, CJKinput );
                  kp = CJKinput;
                }
              }
              if ( strncasecomp( kp, "Re:", 3 ) )
              {
                memcpy( user_input + strlen( user_input ) );
              }
              len = strlen( user_input );
              LYstrncpy( &user_input[ len ], kp, 1023 - len );
            }
          }
          cp = 0;
          if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || term_message )
          {
            HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
            LYCloseTempFP( fd );
            scrollok( LYwin, 0 );
          }
          else
          {
            fprintf( fd, "%s\n", user_input );
            HTSACopy( &cp, "Organization: " );
            org = LYGetEnv( "ORGANIZATION" );
            if ( org )
              HTSACat( &cp, org );
            else
            {
              org = LYGetEnv( "NEWS_ORGANIZATION" );
              if ( org )
                HTSACat( &cp, org );
              else
              {
                fp = fopen64( "/etc/organization", "r" );
                if ( fp )
                {
                  char *buffer = 0;
                  if ( LYSafeGets( &buffer, fp ) && user_input )
                  {
                    LYTrimNewline( buffer );
                    HTSACat( &cp, buffer );
                  }
                  if ( buffer )
                  {
                    free( buffer );
                    buffer = 0;
                  }
                  LYCloseInput( fp );
                }
              }
            }
            LYstrncpy( user_input, cp, 1008 );
            if ( cp )
            {
              free( cp );
              cp = 0;
            }
            LYwaddnstr( LYwin, gettext( "\n\n Please provide or edit the Organization: header\n" ), strlen( gettext( "\n\n Please provide or edit the Organization: header\n" ) ) );
            if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || term_message )
            {
              HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
              LYCloseTempFP( fd );
              scrollok( LYwin, 0 );
            }
            else
            {
              fprintf( fd, "%s\n", user_input );
              if ( References )
                fprintf( fd, "References: %s\n", References );
              fprintf( fd, "Newsgroups: %s\nSummary: \nKeywords: \n\n", NewsGroups );
              if ( !no_editor && editor && editor )
              {
                if ( followup && nhist > 0 )
                {
                  if ( term_message )
                  {
                    mustshow = 1;
                    statusline( gettext( "Do you wish to include the original message?" ) );
                  }
                  else
                  {
                    if ( HTConfirm( gettext( "Do you wish to include the original message?" ) ) == 1 )
                      print_wwwfile_to_fd( fd, 0, 1 );
                  }
                }
                LYCloseTempFP( fd );
                scrollok( LYwin, 0 );
                if ( !term_message && c != 3 && c != 7 )
                {
                  if ( c != -1 )
                  {
                    if ( c & 34816 )
                    {
                      if ( ( c & 255 ) != 47 )
                        goto B183;
                    }
                    else
                    if ( keymap[ ( c & 2047 ) + 1 ] != 47 )
                      goto B183;
                  }
                  else
                  if ( keymap != 47 )
                    goto B183;
B183:;
                  edit_temporary_file( my_tempfile, "", gettext( "Spawning your selected editor to edit news message" ) );
                  nonempty = message_has_content( my_tempfile, &nonspaces );
                }
              }
              else
              {
                LYwaddnstr( LYwin, gettext( "\n\n Please enter your message below." ), strlen( gettext( "\n\n Please enter your message below." ) ) );
                LYwaddnstr( LYwin, gettext( "\n When you are done, press enter and put a single period (.)" ), strlen( gettext( "\n When you are done, press enter and put a single period (.)" ) ) );
                LYwaddnstr( LYwin, gettext( "\n on a line and press enter again." ), strlen( gettext( "\n on a line and press enter again." ) ) );
                LYwaddnstr( LYwin, "\n\n", 2 );
                LYrefresh( );
                user_input = 0;
                if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || term_message )
                {
                  HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
                  LYCloseTempFP( fd );
                  scrollok( LYwin, 0 );
                }
                else
                {
                  do
                  {
                    if ( strcmp( user_input, "." ) && term_message == 0 )
                    {
                      waddch( LYwin, 10 );
                      fprintf( fd, "%s\n", user_input );
                      if ( nonempty == 0 && user_input )
                        nonempty = 1;
                      user_input = 0;
                    }
                    else
                    {
                      fputc( 10, fd );
                      LYCloseTempFP( fd );
                      scrollok( LYwin, 0 );
                    }
                  }
                  while ( LYgetstr( user_input, 0, 1024, 0 ) >= 0 );
                  HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
                  LYCloseTempFP( fd );
                  scrollok( LYwin, 0 );
                }
              }
              if ( nonempty )
              {
                LYStatusLine = LYlines + -1;
                c = HTConfirm( gettext( "Post this message?" ) );
                LYStatusLine = -1;
                if ( c != 1 )
                  LYclear( );
              }
              else
              {
                HTAlert( gettext( "Message has no original text!" ) );
                if ( nonspaces && HTConfirmDefault( gettext( "Post this message?" ), 0 ) == 1 )
                  goto B235;
              }
B235:;
              if ( LynxSigFile )
              {
                fp = fopen64( LynxSigFile, "r" );
                if ( fp )
                {
                  char *msg = 0;
                  HTSprintf0( &msg, gettext( "Append '%s'?" ), LynxSigFile );
                  LYStatusLine = LYlines + -1;
                  if ( term_message )
                  {
                    mustshow = 1;
                    user_message( gettext( "Append '%s'?" ), LynxSigFile );
                  }
                  else
                  {
                    if ( HTConfirm( msg ) == 1 )
                    {
                      fd = LYAppendToTxtFile( my_tempfile );
                      if ( fd )
                      {
                        char *buffer = 0;
                        fwrite( "-- \n", 1, 4, fd );
                        while ( LYSafeGets( &buffer, fp ) == 0 )
                        {
                          fputs( buffer, fd );
                        }
                        LYCloseOutput( fd );
                      }
                    }
                  }
                  LYCloseInput( fp );
                  if ( msg )
                  {
                    free( msg );
                    msg = 0;
                  }
                  LYStatusLine = -1;
                }
              }
              LYclear( );
              if ( CJKfile )
              {
                fd = fopen64( my_tempfile, "r" );
                if ( fd )
                {
                  char *buffer = 0;
                  while ( LYSafeGets( &buffer, fd ) == 0 )
                  {
                    TO_JIS( (unsigned char*)buffer, CJKinput );
                    fputs( CJKinput, fc );
                  }
                  LYCloseTempFP( fc );
                  HTSACopy( &postfile, CJKfile );
                  LYCloseInput( fd );
                  LYRemoveTemp( my_tempfile );
                  strcpy( my_tempfile, CJKfile );
                  CJKfile = 0;
                }
                else
                  HTSACopy( &postfile, my_tempfile );
              }
              else
                HTSACopy( &postfile, my_tempfile );
              if ( followup == 0 )
                LYforce_no_cache = 1;
              LYStatusLine = LYlines + -1;
              HTUserMsg( gettext( "Posting to newsgroup(s)..." ) );
              LYStatusLine = -1;
            }
          }
        }
      }
      signal( 2, &cleanup_sig );
      term_message = 0;
      if ( postfile == 0 )
        LYRemoveTemp( my_tempfile );
      LYRemoveTemp( CJKfile );
      if ( NewsGroups )
      {
        free( NewsGroups );
        NewsGroups = 0;
      }
      if ( References )
      {
        free( References );
        References = 0;
      }
      return postfile;
    }
  }
}
void terminate_message( int sig )
{
  term_message = 1;
  signal( 2, &terminate_message );
  return;
}
#if 0
#endif
