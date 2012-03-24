#include "LYNews.c.h"
static BOOLEAN message_has_content( char *filename, BOOLEAN *nonspaces );
static void terminate_message( int sig );
BOOLEAN term_message;
BOOLEAN message_has_content( char *filename, BOOLEAN *nonspaces )
{
  FILE *fp;
  char *buffer = 0;
  BOOLEAN in_headers = 1;
  nonspaces[0] = 0;
  if ( filename != 0 )
  {
    fp = fopen64( filename, "r" );
    if ( fp == 0 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        if ( filename != 0 )
        {
          fprintf( TraceFP( ), "Failed to open file %s for reading!\n", filename );
          return 0;
        }
        else
        {
          fprintf( TraceFP( ), "Failed to open file %s for reading!\n", filename );
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      if ( LYSafeGets( &buffer, fp ) != 0 )
      {
        char *cp = buffer;
        char firstnonblank = 0;
        LYTrimNewline( cp );
        free( buffer );
        buffer = 0;
        LYCloseInput( fp );
        return 0;
      }
      else
      {
        if ( buffer != 0 )
        {
          free( buffer );
          buffer = 0;
          LYCloseInput( fp );
          return 0;
        }
        else
        {
          LYCloseInput( fp );
          return 0;
        }
      }
    }
  }
  else
  {
  }
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
  if ( newsgroups == 0 || ( newsgroups[0] & 255 ) == 0 )
  {
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
      return postfile;
    }
    else
    {
      return postfile;
    }
  }
  else
  {
    if ( ( no_newspost & 255 ) != 0 )
    {
    }
    else
    {
      fd = LYOpenTemp( my_tempfile, ".html", "w" );
      if ( fd == 0 )
      {
        HTAlert( gettext( "Can't open temporary file!" ) );
      }
      else
      {
        CJKfile[0] = 0;
        if ( UCGetLYhndl_byMIME( "euc-jp" ) == current_char_set || UCGetLYhndl_byMIME( "shift_jis" ) == current_char_set )
        {
          fc = LYOpenTemp( CJKfile, ".html", "w" );
          if ( fc == 0 )
          {
            HTAlert( gettext( "Can't open temporary file!" ) );
            LYRemoveTemp( my_tempfile );
          }
        }
        HTSACopy( &NewsGroups, newsgroups );
        cp = strstr( NewsGroups, ";ref=" );
        if ( cp != 0 )
        {
          cp[0] = 0;
          cp += 5;
          if ( cp[0] == '<' )
          {
            HTSACopy( &References, cp );
          }
          HTSACopy( &References, "&lt;" );
          HTSACat( &References, cp );
          HTSACat( &References, "&gt;" );
          HTUnEscape( References );
          cp = strchr( References, 64 );
          if ( ( cp == 0 || cp <= References[1] || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 8 ) == 0 ) && References != 0 )
          {
            free( References );
            References = 0;
          }
        }
        HTUnEscape( NewsGroups );
        if ( ( NewsGroups[0] & 255 ) == 0 )
        {
          LYCloseTempFP( fd );
        }
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
        sprintf( user_input, "From: %.*s", 1016, personal_mail_address == 0 ? "" : personal_mail_address );
        if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || ( term_message & 255 ) != 0 )
        {
          HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
          LYCloseTempFP( fd );
          scrollok( LYwin, 0 );
        }
        fprintf( fd, "%s\n", user_input );
        LYwaddnstr( LYwin, gettext( "\n\n Please provide or edit the Subject: header\n" ), strlen( gettext( "\n\n Please provide or edit the Subject: header\n" ) ) );
        memcpy( user_input, "Subject: ", 10 );
        if ( followup == 1 && nhist >= 1 )
        {
          kp = HText_getTitle( );
          if ( kp != 0 )
          {
            kp = LYSkipCBlanks( kp );
            if ( HTCJK == JAPANESE )
            {
              CJKinput[0] = 0;
              switch ( kanji_code )
              {
              default:
                break;
              case EUC:
                TO_EUC( (unsigned char*)kp, CJKinput );
                kp = CJKinput;
                break;
              case SJIS:
                TO_SJIS( (unsigned char*)kp, CJKinput );
                kp = CJKinput;
                break;
              }
            }
            if ( strncasecomp( kp, "Re:", 3 ) != 0 )
            {
              memcpy( user_input[0] + strlen( user_input ) );
            }
            len = strlen( user_input );
            LYstrncpy( &user_input[ len ], kp, 1023 - len );
          }
        }
        cp = 0;
        if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || ( term_message & 255 ) != 0 )
        {
          HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
          LYCloseTempFP( fd );
          scrollok( LYwin, 0 );
        }
        fprintf( fd, "%s\n", user_input );
        HTSACopy( &cp, "Organization: " );
        org = LYGetEnv( "ORGANIZATION" );
        org = org == 0 ? LYGetEnv( "NEWS_ORGANIZATION" ) : HTSACat( &cp, org );
        fp = org == 0 ? fopen64( "/etc/organization", "r" ) : HTSACat( &cp, org );
        if ( fp != 0 )
        {
          char *buffer = 0;
          if ( LYSafeGets( &buffer, fp ) != 0 && ( user_input[0] & 255 ) != 0 )
          {
            LYTrimNewline( buffer );
            HTSACat( &cp, buffer );
          }
          if ( buffer != 0 )
          {
            free( buffer );
            buffer = 0;
          }
          LYCloseInput( fp );
        }
        LYstrncpy( user_input, cp, 1008 );
        if ( cp != 0 )
        {
          free( cp );
          cp = 0;
        }
        LYwaddnstr( LYwin, gettext( "\n\n Please provide or edit the Organization: header\n" ), strlen( gettext( "\n\n Please provide or edit the Organization: header\n" ) ) );
        if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || ( term_message & 255 ) != 0 )
        {
          HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
          LYCloseTempFP( fd );
          scrollok( LYwin, 0 );
        }
        fprintf( fd, "%s\n", user_input );
        if ( References != 0 )
          fprintf( fd, "References: %s\n", References );
        fprintf( fd, "Newsgroups: %s\nSummary: \nKeywords: \n\n", NewsGroups );
        if ( ( no_editor & 255 ) == 0 && editor != 0 && ( editor[0] & 255 ) != 0 )
        {
          if ( followup != 0 && nhist >= 1 )
          {
            if ( ( term_message & 255 ) != 0 )
            {
              mustshow = 1;
              statusline( gettext( "Do you wish to include the original message?" ) );
            }
            if ( HTConfirm( gettext( "Do you wish to include the original message?" ) ) == 1 )
              print_wwwfile_to_fd( fd, 0, 1 );
          }
          LYCloseTempFP( fd );
          scrollok( LYwin, 0 );
          if ( ( term_message & 255 ) == 0 && c != 3 && c != 7 )
          {
            if ( c != -1 )
            {
              if ( ( c & 34816 ) != 0 )
              {
                if ( ( c & 255 ) != 47 )
                {
                }
                else
                {
                  signal( 2, &cleanup_sig );
                  term_message = 0;
                  if ( postfile == 0 )
                    LYRemoveTemp( my_tempfile );
                  LYRemoveTemp( CJKfile );
                  if ( NewsGroups != 0 )
                  {
                    free( NewsGroups );
                    NewsGroups = 0;
                  }
                  if ( References != 0 )
                  {
                    free( References );
                    References = 0;
                  }
                }
              }
              else
              if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                continue;
            }
            else
            if ( keymap[0] != 47 )
            {
            }
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
          user_input[0] = 0;
          if ( LYgetstr( user_input, 0, 1024, 0 ) < 0 || ( term_message & 255 ) != 0 )
          {
            HTInfoMsg( gettext( "News Post Cancelled!!!" ) );
            LYCloseTempFP( fd );
            scrollok( LYwin, 0 );
          }
          do
          {
            if ( strcmp( user_input, "." ) != 0 && ( term_message & 255 ) == 0 )
            {
              waddch( LYwin, 10 );
              fprintf( fd, "%s\n", user_input );
              if ( nonempty == 0 && ( user_input[0] & 255 ) != 0 )
                nonempty = 1;
              user_input[0] = 0;
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
        if ( nonempty != 0 )
        {
          LYStatusLine = LYlines - 1;
          c = HTConfirm( gettext( "Post this message?" ) );
          LYStatusLine = -1;
          if ( c != 1 )
          {
            LYclear( );
          }
        }
        else
        {
          HTAlert( gettext( "Message has no original text!" ) );
          if ( ( nonspaces & 255 ) == 0 || HTConfirmDefault( gettext( "Post this message?" ), 0 ) != 1 )
            continue;
        }
        if ( LynxSigFile != 0 )
        {
          fp = fopen64( LynxSigFile, "r" );
          if ( fp != 0 )
          {
            char *msg = 0;
            HTSprintf0( &msg, gettext( "Append '%s'?" ), LynxSigFile );
            LYStatusLine = LYlines - 1;
            if ( ( term_message & 255 ) != 0 )
            {
              mustshow = 1;
              user_message( gettext( "Append '%s'?" ), LynxSigFile );
            }
            if ( HTConfirm( msg ) == 1 )
            {
              fd = LYAppendToTxtFile( my_tempfile );
              if ( fd != 0 )
              {
                char *buffer = 0;
                fwrite( "-- \n", 1, 4, fd );
                if ( msg != 0 )
                {
                  free( msg );
                  msg = 0;
                }
                LYStatusLine = -1;
              }
            }
            LYCloseInput( fp );
          }
        }
        LYclear( );
        if ( ( CJKfile[0] & 255 ) != 0 )
        {
          fd = fopen64( my_tempfile, "r" );
          if ( fd != 0 )
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
            CJKfile[0] = 0;
          }
          else
          {
            HTSACopy( &postfile, my_tempfile );
          }
        }
        else
          HTSACopy( &postfile, my_tempfile );
        if ( followup == 0 )
          LYforce_no_cache = 1;
        LYStatusLine = LYlines - 1;
        HTUserMsg( gettext( "Posting to newsgroup(s)..." ) );
        LYStatusLine = -1;
      }
    }
  }
}
void terminate_message( int sig )
{
  term_message = 1;
  signal( 2, &terminate_message );
  return;
}
