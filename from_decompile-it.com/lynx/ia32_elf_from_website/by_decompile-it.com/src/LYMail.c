#include "LYMail.c.h"
BOOLEAN term_letter;
void terminate_letter( int sig )
{
  term_letter = 1;
  signal( 2, &terminate_letter );
  return;
}
void SafeHTUnEscape( char *string )
{
  int i;
  int flg = 0;
  HTUnEscape( string );
  i = 0;
  for ( ; string[ i ]; i++ )
  {
    if ( string[ i ] < 0 || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( string[ i ] * 2 )) & 16384 ) == 0 )
    {
      string[ i ] = '?';
      flg = 1;
    }
    // i++;
  }
  if ( flg )
  {
    HTAlert( gettext( "Warning!  Control codes in mail address replaced by ?" ) );
  }
  return;
}
void remove_tildes( char *string )
{
  if ( string[0] == '~' )
  {
    string[0] = ' ';
  }
  return;
}
void comma_append( char **dst, char *src )
{
  if ( src[0] )
  {
    for ( ; src[0] == ',' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( src[0] * 2 )) & 8192 ); src++ )
    {
      // src++;
    }
    if ( src[0] )
    {
      if ( dst[0] == 0 || dst[0] == 0 )
      {
        HTSACopy( dst, src );
      }
      else
      {
        HTSACat( dst, "," );
        HTSACat( dst, src );
      }
    }
  }
  return;
}
void extract_field( char **dst, char *src, char *keyword )
{
  int len = strlen( keyword );
  char *cp = &src[1], *cp1;
  for ( ; cp[0]; cp++ )
  {
    if ( ( cp[ -1 ] == '?' || cp[ -1 ] == '&' ) && strncasecomp( cp, keyword, len ) == 0 )
    {
      cp = &cp[ len ];
      cp1 = strchr( cp, '&' );
      if ( cp1 )
        cp1[0] = 0;
      comma_append( dst, cp );
      if ( cp1 )
      {
        cp1[0] = '&';
        cp = cp1;
        cp1 = 0;
      }
      else
        break;
    }
    // cp++;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "extract_field(%s) = '%s'\n", keyword, "(null)" );
  }
  return;
}
void extract_subject( char *dst, char *src )
{
  char *keyword = "subject=";
  int len = strlen( keyword );
  char *cp = &src[1], *cp1;
  for ( ; cp[0] && ( ( cp[ -1 ] != '?' && cp[ -1 ] != '&' ) || strncasecomp( cp, keyword, len ) ); cp++ )
  {
    // cp++;
  }
  if ( cp[0] )
  {
    cp = &cp[ len ];
    cp1 = strchr( cp, '&' );
    if ( cp1 )
      cp1[0] = 0;
    if ( cp[0] )
    {
      strncpy( dst, cp, 70 );
      dst[70] = 0;
      SafeHTUnEscape( dst );
    }
    if ( cp1 )
    {
      cp1[0] = '&';
      cp1 = 0;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "extract_subject(%s) = '%s'\n", keyword, "(null)" );
  }
  return;
}
void extract_body( char **dst, char *src )
{
  char *keyword = "body=";
  int len = strlen( keyword );
  int i;
  char *cp, *cp0, *cp1, *temp = 0;
  cp = &src[1];
  for ( ; cp[0]; cp++ )
  {
    if ( ( cp[ -1 ] == '?' || cp[ -1 ] == '&' ) && strncasecomp( cp, keyword, len ) == 0 )
    {
      cp = &cp[ len ];
      cp1 = strchr( cp, '&' );
      if ( cp1 )
        cp1[0] = 0;
      if ( cp[0] )
      {
        HTSACopy( &temp, cp );
        HTUnEscape( temp );
        cp0 = temp;
        for ( ; cp;  )
        {
          cp[0] = 0;
          if ( cp0 < cp && cp[ -1 ] == '\r' )
            cp[ -1 ] = 0;
          i = 0;
          len = strlen( cp0 );
          for ( ; len > 78;  )
          {
            HTSprintf( dst, "%.78s\n", cp0[ i ] );
            i += 78;
            len = strlen( &cp0[ i ] );
          }
          HTSprintf( dst, "%s\n", cp0[ i ] );
          cp0 = &cp[1];
        }
        i = 0;
        len = strlen( cp0 );
        for ( ; len > 78;  )
        {
          HTSprintf( dst, "%.78s\n", cp0[ i ] );
          i += 78;
          len = strlen( &cp0[ i ] );
        }
        if ( len )
          HTSprintf( dst, "%s\n", cp0[ i ] );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      if ( cp1 )
      {
        cp1[0] = '&';
        cp = cp1;
        cp1 = 0;
      }
      else
        break;
    }
    // cp++;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "extract_body(%s) = '%s'\n", keyword, "(null)" );
  }
  return;
}
BOOLEAN trim_comma( char *address )
{
  if ( *(char*)(address + strlen( address )) == ',' )
  {
  }
  return address[0] == 0;
}
BOOLEAN convert_explorer( char *address )
{
  char *cp = address;
  char *cp0;
  char *cp1;
  for ( ; cp1;  )
  {
    cp1++;
    cp0 = strchr( cp1, ';' );
    if ( cp0 )
    {
      cp0[0] = ',';
      cp1 = &cp0[1];
    }
    cp = cp1;
  }
  return trim_comma( address );
}
int header_prompt( char *label, char **result, unsigned int limit )
{
  int eax;
  char buffer[1024];
  int ok;
  if ( result[0] )
  {
    LYwaddnstr( LYwin, gettext( " Use Control-U to erase the default.\n" ), strlen( gettext( " Use Control-U to erase the default.\n" ) ) );
    LYstrncpy( buffer, result[0], 1023 );
  }
  else
    buffer[0] = 0;
  if ( limit > 1024 )
    limit = 1024;
  LYwaddnstr( LYwin, gettext( label ), strlen( gettext( label ) ) );
  LYwaddnstr( LYwin, ": ", 2 );
  ok = 0;
  LYwaddnstr( LYwin, "\n", 1 );
  if ( ok )
  {
    remove_tildes( buffer );
    HTSACopy( result, buffer );
  }
  term_letter = 0;
  return ok;
}
void show_addresses( char *addresses )
{
  char *cp = addresses;
  char *cp1;
  for ( ; cp1;  )
  {
    cp1[0] = 0;
    for ( ; cp[0] == ' '; cp++ )
    {
      // cp++;
    }
    if ( cp[0] )
    {
      LYwaddnstr( LYwin, cp, strlen( cp ) );
      LYwaddnstr( LYwin, ",\n  ", 4 );
    }
    cp1[0] = ',';
    cp = &cp1[1];
  }
  if ( cp[0] )
  {
    LYwaddnstr( LYwin, cp, strlen( cp ) );
  }
  return;
}
FILE *LYPipeToMailer( void )
{
  char *buffer = 0;
  FILE *fp = 0;
  if ( LYSystemMail( ) & 255 )
  {
    HTSprintf0( &buffer, "%s %s", system_mail, system_mail_flags );
    fp = popen( buffer, "w" );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "popen(%s) %s\n", buffer, "FAIL" );
    }
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
  }
  return fp;
}
void mailform( char *mailto_address, char *mailto_subject, char *mailto_content, char *mailto_type )
{
  FILE *fd;
  char *address = 0;
  char *ccaddr = 0;
  char *keywords = 0;
  char *cp = 0;
  char self[80];
  char subject[80];
  char *searchpart = 0;
  char buf[512];
  int ch, len, i;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "mailto_address: \"%s\"\n", "(null)" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "mailto_subject: \"%s\"\n", "(null)" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "mailto_content: \"%s\"\n", "(null)" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "mailto_type:    \"%s\"\n", "(null)" );
  }
  if ( LYSystemMail( ) & 255 )
  {
    if ( mailto_address == 0 || mailto_content == 0 )
    {
      HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
    }
    else
    {
      subject[0] = 0;
      self[0] = 0;
      cp = strchr( mailto_address, '\n' );
      if ( cp )
        cp[0] = 0;
      HTSACopy( &address, mailto_address );
      cp = strchr( address, '?' );
      if ( cp )
      {
        HTSACopy( &searchpart, cp );
        cp[0] = 0;
        cp = &searchpart[1];
        if ( cp[0] )
        {
          extract_subject( subject, searchpart );
          extract_field( &address, searchpart, "to=" );
          extract_field( &ccaddr, searchpart, "cc=" );
          extract_field( &keywords, searchpart, "keywords=" );
          if ( keywords )
          {
            if ( keywords[0] )
              SafeHTUnEscape( keywords );
            else
            if ( keywords )
            {
              free( keywords );
              keywords = 0;
            }
          }
          if ( searchpart )
          {
            free( searchpart );
            searchpart = 0;
          }
        }
      }
      if ( convert_explorer( address ) & 255 )
      {
        HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
      }
      else
      {
        if ( ccaddr && ( convert_explorer( ccaddr ) & 255 ) && ccaddr )
        {
          free( ccaddr );
          ccaddr = 0;
        }
        SafeHTUnEscape( address );
        if ( ccaddr )
          SafeHTUnEscape( ccaddr );
        if ( subject[0] == 0 )
        {
          if ( mailto_subject && mailto_subject[0] )
            LYstrncpy( subject, mailto_subject, 70 );
          else
            sprintf( subject, "mailto:%.63s", address );
        }
        mustshow = 1;
        statusline( gettext( "Subject: " ) );
        ch = LYgetstr( subject, 0, 70, 0 );
        if ( ch < 0 )
        {
          HTInfoMsg( gettext( "Mailto form submission Cancelled!!!" ) );
        }
        else
        {
          if ( LYNoCc == 0 )
          {
            sprintf( self, "%.*s", 70, "" );
            mustshow = 1;
            statusline( "Cc: " );
            ch = LYgetstr( self, 0, 70, 0 );
            if ( ch < 0 )
            {
              HTInfoMsg( gettext( "Mailto form submission Cancelled!!!" ) );
            }
            else
            {
              remove_tildes( self );
              if ( ccaddr == 0 )
                HTSACopy( &ccaddr, self );
              else
              {
                HTSACat( &ccaddr, "," );
                HTSACat( &ccaddr, self );
              }
            }
          }
          fd = LYPipeToMailer( );
          if ( fd == 0 )
          {
            HTAlert( gettext( "Mailto form submission failed!" ) );
          }
          else
          {
            if ( mailto_type && mailto_type[0] )
            {
              fwrite( "Mime-Version: 1.0\n", 1, 18, fd );
              fprintf( fd, "Content-Type: %s\n", mailto_type );
            }
            fprintf( fd, "To: %s\n", address );
            if ( personal_mail_address && personal_mail_address[0] )
              fprintf( fd, "From: %s\n", personal_mail_address );
            if ( ccaddr && ccaddr[0] )
              fprintf( fd, "Cc: %s\n", ccaddr );
            fprintf( fd, "Subject: %s\n\n", subject );
            if ( keywords && keywords[0] )
              fprintf( fd, "Keywords: %s\n", keywords );
            mustshow = 1;
            statusline( gettext( "Sending form content..." ) );
            for ( ; cp;  )
            {
              cp[0] = 0;
              i = 0;
              len = strlen( mailto_content );
              for ( ; len > 78;  )
              {
                strncpy( buf, &mailto_content[ i ], 78 );
                buf[78] = 0;
                fprintf( fd, "%s\n", buf );
                i += 78;
                len = strlen( &mailto_content[ i ] );
              }
              fprintf( fd, "%s\n", &mailto_content[ i ] );
              mailto_content = &cp[1];
            }
            i = 0;
            len = strlen( mailto_content );
            for ( ; len > 78;  )
            {
              strncpy( buf, &mailto_content[ i ], 78 );
              buf[78] = 0;
              fprintf( fd, "%s\n", buf );
              i += 78;
              len = strlen( &mailto_content[ i ] );
            }
            if ( len )
              fprintf( fd, "%s\n", &mailto_content[ i ] );
            pclose( fd );
            LYSleepMsg( );
          }
        }
      }
      if ( address )
      {
        free( address );
        address = 0;
      }
      if ( ccaddr )
      {
        free( ccaddr );
        ccaddr = 0;
      }
      if ( keywords == 0 )
      {
        return;
      }
      free( keywords );
      keywords = 0;
    }
  }
}
void mailmsg( int cur, char *owner_address, char *filename, char *linkname )
{
  FILE *fd, *fp;
  char *address = 0;
  char *searchpart = 0;
  char *cmd = 0, *cp;
  if ( ( LYSystemMail( ) & 255 ) && owner_address && owner_address[0] )
  {
    cp = strchr( owner_address, '\n' );
    if ( cp )
      cp[0] = 0;
    if ( strncasecomp( owner_address, "lynx-dev@", 9 ) == 0 )
    {
      return;
    }
    HTSACopy( &address, owner_address );
    cp = strchr( address, '?' );
    if ( cp )
    {
      HTSACopy( &searchpart, cp );
      cp[0] = 0;
      cp = &searchpart[1];
      if ( cp[0] )
        extract_field( &address, searchpart, "to=" );
    }
    convert_explorer( address );
    SafeHTUnEscape( address );
    if ( trim_comma( address ) & 255 )
    {
      if ( address )
      {
        free( address );
        address = 0;
      }
      if ( WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "mailmsg: No address in '%s'.\n", owner_address );
    }
    else
    {
      fd = LYPipeToMailer( );
      if ( fd == 0 )
      {
        if ( address )
        {
          free( address );
          address = 0;
        }
        if ( WWW_TraceFlag == 0 )
        {
          return;
        }
        fprintf( TraceFP( ), "mailmsg: '%s' failed.\n", cmd );
      }
      else
      {
        fprintf( fd, "To: %s\n", address );
        fprintf( fd, "Subject: Lynx Error in %s\n", filename );
        if ( personal_mail_address && personal_mail_address[0] )
          fprintf( fd, "Cc: %s\n", personal_mail_address );
        fprintf( fd, "X-URL: %s\n", filename );
        fprintf( fd, "X-Mailer: %s, Version %s\n\n", "Lynx", "2.8.7dev.11" );
        fprintf( fd, gettext( "The link   %s :?: %s \n" ), links[ cur ].lname, links[ cur ].target );
        fprintf( fd, gettext( "called \"%s\"\n" ), LYGetHiliteStr( cur, 0 ) );
        fprintf( fd, gettext( "in the file \"%s\" called \"%s\"\n" ), filename, linkname );
        fprintf( fd, "%s\n\n", gettext( "was requested but was not available." ) );
        fprintf( fd, "%s\n\n", gettext( "Thought you might want to know." ) );
        fprintf( fd, "%s\n", gettext( "This message was automatically generated by" ) );
        fprintf( fd, "%s %s", "Lynx", "2.8.7dev.11" );
        if ( LynxSigFile )
        {
          fp = fopen64( LynxSigFile, "r" );
          if ( fp )
          {
            fwrite( "-- \n", 1, 4, fd );
            while ( LYSafeGets( &cmd, fp ) == 0 )
            {
              fputs( cmd, fd );
            }
            LYCloseInput( fp );
          }
        }
        pclose( fd );
        if ( traversal )
        {
          FILE *ofp = LYAppendToTxtFile( "traverse.errors" );
          if ( ofp == 0 )
          {
            ofp = LYNewTxtFile( "traverse.errors" );
            if ( ofp == 0 )
            {
              perror( gettext( "Unable to open traversal errors output file" ) );
              exit_immediately( 1 );
            }
          }
          fprintf( ofp, "%s\t%s \tin %s\n", links[ cur ].lname, links[ cur ].target, filename );
          LYCloseOutput( ofp );
        }
        if ( address == 0 )
        {
          return;
        }
        free( address );
        address = 0;
      }
    }
  }
  return;
}
void reply_by_mail( char *mail_address, char *filename, char *title, char *refid )
{
  static char *personal_name;
  char user_input[1024];
  FILE *fd, *fp;
  char *label = 0;
  char *from_address = 0;
  char *cc_address = 0;
  char *to_address = 0;
  char *the_subject = 0;
  char *ccaddr = 0;
  char *keywords = 0;
  char *searchpart = 0;
  char *body = 0;
  char *cp = 0, *cp1 = 0;
  int i;
  int c = 0;
  char my_tmpfile[256];
  char default_subject[80];
  char buf[4096];
  char *header = 0;
  int n;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "reply_by_mail(\"%s\", \"%s\", \"%s\", \"%s\")\n", "(null)", "(null)", "(null)", "(null)" );
  }
  term_letter = 0;
  if ( LYSystemMail( ) & 255 )
  {
    if ( mail_address == 0 || mail_address[0] == 0 )
    {
      HTAlert( gettext( "No email address is present in mailto URL!" ) );
    }
    else
    {
      HTSACopy( &to_address, mail_address );
      fd = LYOpenTemp( my_tmpfile, ".txt", "w" );
      if ( fd == 0 )
      {
        HTAlert( gettext( "Unable to open temporary file for mailto URL!" ) );
      }
      else
      {
        default_subject[0] = 0;
        cp = strchr( to_address, '?' );
        if ( cp )
        {
          HTSACopy( &searchpart, cp );
          cp[0] = 0;
          cp = &searchpart[1];
          if ( cp[0] )
          {
            extract_subject( default_subject, searchpart );
            extract_field( &to_address, searchpart, "to=" );
            extract_field( &ccaddr, searchpart, "cc=" );
            extract_field( &keywords, searchpart, "keywords=" );
            if ( keywords )
            {
              if ( keywords[0] )
                SafeHTUnEscape( keywords );
              else
              if ( keywords )
              {
                free( keywords );
                keywords = 0;
              }
            }
            extract_body( &body, searchpart );
            if ( searchpart )
            {
              free( searchpart );
              searchpart = 0;
            }
          }
        }
        if ( convert_explorer( to_address ) & 255 )
        {
          HTAlert( gettext( "No email address is present in mailto URL!" ) );
        }
        else
        {
          if ( ccaddr && ( convert_explorer( ccaddr ) & 255 ) && ccaddr )
          {
            free( ccaddr );
            ccaddr = 0;
          }
          SafeHTUnEscape( to_address );
          if ( ccaddr )
            SafeHTUnEscape( ccaddr );
          if ( !default_subject[0] && title && title[0] )
          {
            strncpy( default_subject, title, 70 );
            default_subject[70] = 0;
          }
          signal( 2, &terminate_letter );
          HTSprintf( &header, "To: %s\n", to_address );
          if ( strncasecomp( LYCharSet_UC[ current_char_set ].MIMEname, "us-ascii", 8 ) )
          {
            HTSACat( &header, "Mime-Version: 1.0\n" );
            if ( !LYHaveCJKCharacterSet && strncasecomp( LYCharSet_UC[ current_char_set ].MIMEname, "x-", 2 ) )
              HTSprintf( &header, "Content-Type: text/plain; charset=%s\n", LYCharSet_UC[ current_char_set ].MIMEname );
            HTSACat( &header, "Content-Transfer-Encoding: 8bit\n" );
          }
          if ( filename && filename[0] )
            HTSprintf( &header, "X-URL: %s\n", filename );
          else
            HTSprintf( &header, "X-URL: mailto:%s\n", to_address );
          HTSprintf( &header, "X-Mailer: %s, Version %s\n", "Lynx", "2.8.7dev.11" );
          if ( refid && refid[0] )
            HTSprintf( &header, "In-Reply-To: &lt;%s&gt;\n", refid );
          LYclear( );
          LYmove( 2, 0 );
          scrollok( LYwin, 1 );
          if ( body )
          {
            LYwaddnstr( LYwin, gettext( "You are sending a message with body to:\n  " ), strlen( gettext( "You are sending a message with body to:\n  " ) ) );
          }
          else
          {
            LYwaddnstr( LYwin, gettext( "You are sending a comment to:\n  " ), strlen( gettext( "You are sending a comment to:\n  " ) ) );
          }
          show_addresses( to_address );
          cp = ccaddr;
          if ( cp )
          {
            if ( strchr( cp, ',' ) )
            {
              LYwaddnstr( LYwin, gettext( "\n With copies to:\n  " ), strlen( gettext( "\n With copies to:\n  " ) ) );
            }
            else
            {
              LYwaddnstr( LYwin, gettext( "\n With copy to:\n  " ), strlen( gettext( "\n With copy to:\n  " ) ) );
            }
            show_addresses( ccaddr );
          }
          LYwaddnstr( LYwin, gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ), strlen( gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ) ) );
          LYwaddnstr( LYwin, gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ), strlen( gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ) ) );
          label = "X-Personal_Name: ";
          if ( header_prompt( label, &personal_name, 1024 ) )
          {
            if ( personal_name[0] )
              HTSprintf( &header, "%s: %s\n", label, personal_name );
            LYwaddnstr( LYwin, gettext( "\n Please enter a mail address or some other\n" ), strlen( gettext( "\n Please enter a mail address or some other\n" ) ) );
            LYwaddnstr( LYwin, gettext( " means to contact you, if you desire a response.\n" ), strlen( gettext( " means to contact you, if you desire a response.\n" ) ) );
            label = "From";
            if ( personal_mail_address )
              HTSACopy( &from_address, personal_mail_address );
            if ( header_prompt( label, &from_address, 1024 ) )
            {
              HTSprintf( &header, "%s: %s\n", label, from_address );
              LYwaddnstr( LYwin, gettext( "\n Please enter a subject line.\n" ), strlen( gettext( "\n Please enter a subject line.\n" ) ) );
              label = "Subject";
              if ( default_subject[0] )
                HTSACopy( &the_subject, default_subject );
              else
              if ( filename && filename[0] )
                HTSprintf( &the_subject, "%s", filename );
              else
                HTSprintf( &the_subject, "mailto:%s", to_address );
              if ( header_prompt( label, &the_subject, 70 ) )
              {
                if ( LYNoCc == 0 )
                {
                  LYwaddnstr( LYwin, gettext( "\n Enter a mail address for a CC of your message.\n" ), strlen( gettext( "\n Enter a mail address for a CC of your message.\n" ) ) );
                  LYwaddnstr( LYwin, gettext( " (Leave blank if you don't want a copy.)\n" ), strlen( gettext( " (Leave blank if you don't want a copy.)\n" ) ) );
                  if ( personal_mail_address )
                    HTSACopy( &cc_address, personal_mail_address );
                  if ( header_prompt( "Cc", &cc_address, 1024 ) )
                    comma_append( &ccaddr, cc_address );
                }
                HTSprintf( &header, "%s: %s\n", label, the_subject );
                if ( ccaddr && ccaddr[0] )
                  HTSprintf( &header, "Cc: %s\n", ccaddr );
                if ( keywords && keywords[0] )
                  HTSprintf( &header, "Keywords: %s\n", keywords );
                HTSACat( &header, "\n" );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "**header==\n%s", header );
                }
                if ( !no_editor && editor && editor[0] )
                {
                  if ( body )
                  {
                    cp1 = body;
                    for ( ; cp;  )
                    {
                      cp[0] = 0;
                      cp++;
                      fprintf( fd, "%s\n", cp1 );
                      cp1 = cp;
                    }
                  }
                  else
                  {
                    if ( *(char*)(HTLoadedDocumentURL( )) )
                    {
                      BOOLEAN is_preparsed;
                      *(int*)&is_preparsed = 0;
                      if ( HTConfirm( gettext( "Do you wish to include the original message?" ) ) == 1 )
                        print_wwwfile_to_fd( fd, 1, is_preparsed == 0 );
                    }
                  }
                  LYCloseTempFP( fd );
                  scrollok( LYwin, 0 );
                  if ( !term_letter && c != 3 && c != 7 )
                  {
                    if ( c != -1 )
                    {
                      if ( c & 34816 )
                      {
                        if ( ( c & 255 ) == 47 )
                        {
                          signal( 2, &cleanup_sig );
                          term_letter = 0;
                          if ( header )
                          {
                            free( header );
                            header = 0;
                          }
                          LYRemoveTemp( my_tmpfile );
                          if ( from_address )
                          {
                            free( from_address );
                            from_address = 0;
                          }
                          if ( the_subject )
                          {
                            free( the_subject );
                            the_subject = 0;
                          }
                          if ( cc_address )
                          {
                            free( cc_address );
                            cc_address = 0;
                          }
                          if ( to_address )
                          {
                            free( to_address );
                            to_address = 0;
                          }
                          if ( ccaddr )
                          {
                            free( ccaddr );
                            ccaddr = 0;
                          }
                          if ( keywords )
                          {
                            free( keywords );
                            keywords = 0;
                          }
                          if ( body == 0 )
                          {
                            return;
                          }
                          free( body );
                          body = 0;
                        }
                      }
                      else
                      if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                        continue;
                    }
                    else
                    if ( keymap[0] == 47 )
                      continue;
                    edit_temporary_file( my_tmpfile, "", gettext( "Spawning your selected editor to edit mail message" ) );
                  }
                }
                else
                {
                  if ( body )
                  {
                    LYclear( );
                    LYmove( 0, 0 );
                    LYwaddnstr( LYwin, gettext( "\n Please review the message body:\n\n" ), strlen( gettext( "\n Please review the message body:\n\n" ) ) );
                    LYrefresh( );
                    cp1 = body;
                    i = LYlines + -5;
                    for ( ; cp;  )
                    {
                      if ( i <= 0 )
                      {
                        LYwaddnstr( LYwin, gettext( "\nPress RETURN to continue: " ), strlen( gettext( "\nPress RETURN to continue: " ) ) );
                        LYrefresh( );
                        c = LYgetch( );
                        LYwaddnstr( LYwin, "\n", 1 );
                        if ( !term_letter && c != 3 && c != 7 )
                        {
                          if ( c != -1 )
                          {
                            if ( c & 34816 )
                            {
                              if ( ( c & 255 ) != 47 )
                                goto B268;
                            }
                            else
                            if ( keymap[ ( c & 2047 ) + 1 ] != 47 )
                              goto B268;
                          }
                          else
                          if ( keymap[0] != 47 )
                            goto B268;
B268:;
                          i = LYlines + -2;
                        }
                      }
                      cp[0] = 0;
                      cp++;
                      fprintf( fd, "%s\n", cp1 );
                      LYwaddnstr( LYwin, cp1, strlen( cp1 ) );
                      LYwaddnstr( LYwin, "\n", 1 );
                      cp1 = cp;
                      i += -1;
                    }
                    for ( ; i >= 0;  )
                    {
                      LYwaddnstr( LYwin, "\n", 1 );
                      i += -1;
                    }
                    LYrefresh( );
                    LYCloseTempFP( fd );
                    scrollok( LYwin, 0 );
                  }
                  else
                  {
                    LYwaddnstr( LYwin, gettext( "\n Please enter your message below." ), strlen( gettext( "\n Please enter your message below." ) ) );
                    LYwaddnstr( LYwin, gettext( "\n When you are done, press enter and put a single period (.)" ), strlen( gettext( "\n When you are done, press enter and put a single period (.)" ) ) );
                    LYwaddnstr( LYwin, gettext( "\n on a line and press enter again." ), strlen( gettext( "\n on a line and press enter again." ) ) );
                    LYwaddnstr( LYwin, "\n\n", 2 );
                    LYrefresh( );
                    user_input[0] = 0;
                    if ( LYgetstr( user_input, 0, 1024, 0 ) >= 0 && !term_letter && strcmp( user_input, "." ) )
                    {
                      do
                      {
                        if ( strcmp( user_input, "." ) && term_letter == 0 )
                        {
                          LYwaddnstr( LYwin, "\n", 1 );
                          remove_tildes( user_input );
                          fprintf( fd, "%s\n", user_input );
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
                    }
                  }
                }
                signal( 2, 1 );
                LYStatusLine = LYlines + -1;
                c = HTConfirm( gettext( "Send this comment?" ) );
                LYStatusLine = -1;
                if ( c != 1 )
                  LYclear( );
                else
                {
                  if ( body == 0 && LynxSigFile )
                  {
                    fp = fopen64( LynxSigFile, "r" );
                    if ( fp )
                    {
                      LYStatusLine = LYlines + -1;
                      if ( term_letter )
                      {
                        mustshow = 1;
                        user_message( gettext( "Append '%s'?" ), LynxSigFile );
                        c = 0;
                      }
                      else
                      {
                        char *msg = 0;
                        HTSprintf0( &msg, gettext( "Append '%s'?" ), LynxSigFile );
                        c = HTConfirm( msg );
                        if ( msg )
                        {
                          free( msg );
                        }
                      }
                      LYStatusLine = -1;
                      if ( c == 1 )
                      {
                        fd = fopen64( my_tmpfile, "a+" );
                        if ( fd )
                        {
                          char *buffer = 0;
                          fwrite( "-- \n", 1, 4, fd );
                          while ( LYSafeGets( &buffer, fp ) == 0 )
                          {
                            fputs( buffer, fd );
                          }
                          LYCloseOutput( fd );
                          if ( buffer )
                          {
                            free( buffer );
                          }
                        }
                      }
                      LYCloseInput( fp );
                    }
                  }
                  LYclear( );
                  mustshow = 1;
                  statusline( gettext( "Sending your message..." ) );
                  signal( 2, 1 );
                  fp = LYPipeToMailer( );
                  if ( fp == 0 )
                  {
                    HTInfoMsg( gettext( "Cancelled!!!" ) );
                  }
                  if ( fp )
                  {
                    fd = fopen64( my_tmpfile, "r" );
                    if ( fd == 0 )
                    {
                      HTInfoMsg( gettext( "Cancelled!!!" ) );
                      pclose( fp );
                    }
                    else
                    {
                      fputs( header, fp );
                      while ( n == 0 )
                      {
                        fwrite( buf, 1, n, fp );
                      }
                      pclose( fp );
                      LYCloseInput( fd );
                    }
                  }
                }
              }
            }
          }
        }
        HTInfoMsg( gettext( "Cancelled!!!" ) );
        LYCloseTempFP( fd );
        scrollok( LYwin, 0 );
      }
    }
  }
}
BOOLEAN LYSystemMail( void )
{
  if ( system_mail == 0 || strcmp( system_mail, "unknown" ) == 0 )
  {
    HTAlert( gettext( "No system mailer configured" ) );
  }
  return 1;
}
#if 0
#endif
