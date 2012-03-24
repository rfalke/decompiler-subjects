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
  if ( ( string[ i ] & 255 ) != 0 )
  {
    if ( string[ i ] >= 0 )
    {
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( string[ i ] * 2 )) & 16384 ) != 0 )
        i++;
      else
      {
        string[ i ] = '?';
        flg = 1;
        i++;
      }
    }
    else
    {
      string[ i ] = '?';
      flg = 1;
      i++;
    }
  }
  else
  {
    if ( flg != 0 )
    {
      HTAlert( gettext( "Warning!  Control codes in mail address replaced by ?" ) );
      return;
    }
    else
    {
      return;
    }
  }
}
void remove_tildes( char *string )
{
  if ( string[0] == '~' )
  {
    string[0] = ' ';
    return;
  }
  else
  {
    return;
  }
}
void comma_append( char **dst, char *src )
{
  if ( ( src[0] & 255 ) != 0 )
  {
    if ( src[0] != ',' )
    {
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( src[0] * 2 )) & 8192 ) != 0 )
        src++;
      else
      {
        if ( ( src[0] & 255 ) != 0 )
        {
          if ( dst[0] != 0 )
          {
            if ( ( dst[0][0] & 255 ) == 0 )
            {
              HTSACopy( dst, src );
              return;
            }
            else
            {
              HTSACat( dst, "," );
              HTSACat( dst, src );
              return;
            }
          }
          else
          {
            HTSACopy( dst, src );
            return;
          }
        }
        else
        {
          return;
        }
      }
    }
    else
      src++;
  }
  else
  {
    return;
  }
}
void extract_field( char **dst, char *src, char *keyword )
{
  int len = strlen( keyword );
  char *cp = &src[1], *cp1;
  if ( ( cp[0] & 255 ) != 0 )
  {
    if ( cp[ -1 ] != '?' )
    {
      if ( cp[ -1 ] == '&' )
      {
        if ( strncasecomp( cp, keyword, len ) == 0 )
        {
          cp = &cp[ len ];
          cp1 = strchr( cp, 38 );
          if ( cp1 != 0 )
            cp1[0] = 0;
            comma_append( dst, cp );
            if ( cp1 != 0 )
            {
              cp1[0] = '&';
              cp = cp1;
              cp1 = 0;
              cp++;
            }
            else
            {
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                if ( dst[0] != 0 )
                {
                  fprintf( TraceFP( ), "extract_field(%s) = '%s'\n", keyword, dst[0] );
                  return;
                }
                else
                {
                  fprintf( TraceFP( ), "extract_field(%s) = '%s'\n", keyword, dst[0] );
                  return;
                }
              }
              else
              {
                return;
              }
            }
          else
          {
            comma_append( dst, cp );
          }
        }
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
void extract_subject( char *dst, char *src )
{
  char *keyword = "subject=";
  int len = strlen( keyword );
  char *cp = &src[1], *cp1;
  if ( ( cp[0] & 255 ) != 0 )
  {
    if ( cp[ -1 ] != '?' )
    {
      if ( cp[ -1 ] == '&' )
      {
        if ( strncasecomp( cp, keyword, len ) != 0 )
          cp++;
        else
        {
          if ( ( cp[0] & 255 ) != 0 )
          {
            cp = &cp[ len ];
            cp1 = strchr( cp, 38 );
            if ( cp1 != 0 )
              cp1[0] = 0;
              if ( ( cp[0] & 255 ) != 0 )
              {
                strncpy( dst, cp, 70 );
                dst[70] = 0;
                SafeHTUnEscape( dst );
                if ( cp1 != 0 )
                {
                  cp1[0] = '&';
                  cp1 = 0;
                  if ( ( WWW_TraceFlag & 255 ) != 0 )
                  {
                    if ( dst != 0 )
                    {
                      fprintf( TraceFP( ), "extract_subject(%s) = '%s'\n", keyword, dst );
                      return;
                    }
                    else
                    {
                      fprintf( TraceFP( ), "extract_subject(%s) = '%s'\n", keyword, dst );
                      return;
                    }
                  }
                  else
                  {
                    return;
                  }
                }
              }
              else
              {
              }
            else
            {
            }
          }
        }
      }
      else
        cp++;
    }
    else
    {
    }
  }
  else
  {
  }
}
void extract_body( char **dst, char *src )
{
  char *keyword = "body=";
  int len = strlen( keyword );
  int i;
  char *cp, *cp0, *cp1, *temp = 0;
  cp = &src[1];
  if ( ( cp[0] & 255 ) != 0 )
  {
    if ( cp[ -1 ] != '?' )
    {
      if ( cp[ -1 ] == '&' )
      {
        if ( strncasecomp( cp, keyword, len ) == 0 )
        {
          cp = &cp[ len ];
          cp1 = strchr( cp, 38 );
          if ( cp1 != 0 )
            cp1[0] = 0;
            if ( ( cp[0] & 255 ) != 0 )
            {
              HTSACopy( &temp, cp );
              HTUnEscape( temp );
              cp0 = temp;
              cp = strchr( cp0, 10 );
              if ( cp != 0 )
              {
                cp[0] = 0;
                if ( cp0 < cp )
                {
                  if ( cp[ -1 ] == 13 )
                    cp[ -1 ] = 0;
                    i = 0;
                    len = strlen( cp0 );
                    if ( len > 78 )
                    {
                      HTSprintf( dst, "%.78s\n", cp0[ i ] );
                      i += 78;
                      len = strlen( &cp0[ i ] );
                    }
                    else
                    {
                      HTSprintf( dst, "%s\n", cp0[ i ] );
                      cp0 = &cp[1];
                      cp = strchr( cp0, 10 );
                    }
                }
              }
              else
              {
                i = 0;
                len = strlen( cp0 );
                if ( len > 78 )
                {
                  HTSprintf( dst, "%.78s\n", cp0[ i ] );
                  i += 78;
                  len = strlen( &cp0[ i ] );
                }
                else
                {
                  if ( len != 0 )
                    HTSprintf( dst, "%s\n", cp0[ i ] );
                    if ( temp != 0 )
                    {
                      free( temp );
                      temp = 0;
                      if ( cp1 != 0 )
                      {
                        cp1[0] = '&';
                        cp = cp1;
                        cp1 = 0;
                        cp++;
                      }
                      else
                      {
                        if ( ( WWW_TraceFlag & 255 ) != 0 )
                        {
                          if ( dst[0] != 0 )
                          {
                            fprintf( TraceFP( ), "extract_body(%s) = '%s'\n", keyword, dst[0] );
                            return;
                          }
                          else
                          {
                            fprintf( TraceFP( ), "extract_body(%s) = '%s'\n", keyword, dst[0] );
                            return;
                          }
                        }
                        else
                        {
                          return;
                        }
                      }
                    }
                  else
                  {
                  }
                }
              }
            }
          else
          {
          }
        }
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
BOOLEAN trim_comma( char *address )
{
  if ( *(char*)(address + ( strlen( address ) - 1 )) == ',' )
  {
    return ( address[0] & 255 ) == 0;
  }
  else
  {
    return ( address[0] & 255 ) == 0;
  }
}
BOOLEAN convert_explorer( char *address )
{
  char *cp = address;
  char *cp0;
  char *cp1;
  cp1 = strchr( cp, 64 );
  if ( cp1 != 0 )
  {
    cp1++;
    cp0 = strchr( cp1, 59 );
    if ( cp0 != 0 )
    {
      cp0[0] = ',';
      cp1 = &cp0[1];
      cp = cp1;
      cp1 = strchr( cp, 64 );
    }
    else
      cp = cp1;
      cp1 = strchr( cp, 64 );
  }
  else
  {
    return trim_comma( address );
  }
}
int header_prompt( char *label, char **result, unsigned int limit )
{
  int eax;
  char buffer[1024];
  int ok;
  if ( result[0] != 0 )
  {
    LYwaddnstr( LYwin, gettext( " Use Control-U to erase the default.\n" ), strlen( gettext( " Use Control-U to erase the default.\n" ) ) );
    LYstrncpy( buffer, result[0], 1023 );
    if ( limit > 1024 )
      limit = 1024;
      LYwaddnstr( LYwin, gettext( label ), strlen( gettext( label ) ) );
      LYwaddnstr( LYwin, ": ", 2 );
      if ( LYgetstr( buffer, 0, limit, 0 ) >= 0 )
      {
        if ( ( term_letter & 255 ) != 0 )
        {
          ok = 1;
          LYwaddnstr( LYwin, "\n", 1 );
          if ( ok != 0 )
          {
            remove_tildes( buffer );
            HTSACopy( result, buffer );
            term_letter = 0;
            return ok;
          }
          else
          {
            term_letter = 0;
            return ok;
          }
        }
        else
        {
          ok = 1;
          LYwaddnstr( LYwin, "\n", 1 );
        }
      }
      else
      {
        ok = 1;
        LYwaddnstr( LYwin, "\n", 1 );
      }
    else
    {
      LYwaddnstr( LYwin, gettext( label ), strlen( gettext( label ) ) );
      LYwaddnstr( LYwin, ": ", 2 );
    }
  }
  else
    buffer[0] = 0;
}
void show_addresses( char *addresses )
{
  char *cp = addresses;
  char *cp1;
  cp1 = strchr( cp, 44 );
  if ( cp1 != 0 )
    cp1[0] = 0;
    if ( cp[0] == ' ' )
      cp++;
    else
    {
      if ( ( cp[0] & 255 ) != 0 )
      {
        LYwaddnstr( LYwin, cp, strlen( cp ) );
        LYwaddnstr( LYwin, ",\n  ", 4 );
        cp1[0] = ',';
        cp = &cp1[1];
        cp1 = strchr( cp, 44 );
      }
      else
      {
        cp1[0] = ',';
        cp = &cp1[1];
        cp1 = strchr( cp, 44 );
      }
    }
  else
  {
    if ( ( cp[0] & 255 ) != 0 )
    {
      LYwaddnstr( LYwin, cp, strlen( cp ) );
      return;
    }
    else
    {
      return;
    }
  }
}
FILE *LYPipeToMailer( void )
{
  char *buffer = 0;
  FILE *fp = 0;
  if ( ( LYSystemMail( ) & 255 ) != 0 )
  {
    HTSprintf0( &buffer, "%s %s", system_mail, system_mail_flags );
    fp = popen( buffer, "w" );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      if ( fp != 0 )
      {
        fprintf( TraceFP( ), "popen(%s) %s\n", buffer, "OK" );
        if ( buffer != 0 )
        {
          free( buffer );
          buffer = 0;
          return fp;
        }
        else
        {
          return fp;
        }
      }
      else
      {
        fprintf( TraceFP( ), "popen(%s) %s\n", buffer, "OK" );
      }
    }
    else
    {
    }
  }
  else
  {
    return fp;
  }
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    if ( mailto_address != 0 )
    {
      fprintf( TraceFP( ), "mailto_address: \"%s\"\n", mailto_address );
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        if ( mailto_subject != 0 )
        {
          fprintf( TraceFP( ), "mailto_subject: \"%s\"\n", mailto_subject );
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            if ( mailto_content != 0 )
            {
              fprintf( TraceFP( ), "mailto_content: \"%s\"\n", mailto_content );
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                if ( mailto_type != 0 )
                {
                  fprintf( TraceFP( ), "mailto_type:    \"%s\"\n", mailto_type );
                  if ( ( LYSystemMail( ) & 255 ) != 0 )
                  {
                    if ( mailto_address != 0 )
                    {
                      if ( mailto_content == 0 )
                      {
                        HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
                        return;
                      }
                      else
                      {
                        subject[0] = 0;
                        self[0] = 0;
                        cp = strchr( mailto_address, 10 );
                        if ( cp != 0 )
                          cp[0] = 0;
                          HTSACopy( &address, mailto_address );
                          cp = strchr( address, 63 );
                          if ( cp != 0 )
                          {
                            HTSACopy( &searchpart, cp );
                            cp[0] = 0;
                            cp = &searchpart[1];
                            if ( ( cp[0] & 255 ) != 0 )
                            {
                              extract_subject( subject, searchpart );
                              extract_field( &address, searchpart, "to=" );
                              extract_field( &ccaddr, searchpart, "cc=" );
                              extract_field( &keywords, searchpart, "keywords=" );
                              if ( keywords != 0 )
                              {
                                if ( ( keywords[0] & 255 ) != 0 )
                                  SafeHTUnEscape( keywords );
                                  if ( searchpart != 0 )
                                  {
                                    free( searchpart );
                                    searchpart = 0;
                                    if ( ( convert_explorer( address ) & 255 ) != 0 )
                                    {
                                      HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
                                      if ( address != 0 )
                                      {
                                        free( address );
                                        address = 0;
                                        if ( ccaddr != 0 )
                                        {
                                          free( ccaddr );
                                          ccaddr = 0;
                                          if ( keywords != 0 )
                                          {
                                            free( keywords );
                                            keywords = 0;
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
                                      if ( ccaddr != 0 )
                                      {
                                        if ( ( convert_explorer( ccaddr ) & 255 ) != 0 )
                                        {
                                          if ( ccaddr != 0 )
                                          {
                                            free( ccaddr );
                                            ccaddr = 0;
                                            SafeHTUnEscape( address );
                                            if ( ccaddr != 0 )
                                              SafeHTUnEscape( ccaddr );
                                              if ( ( subject[0] & 255 ) == 0 )
                                              {
                                                if ( mailto_subject != 0 )
                                                {
                                                  if ( ( mailto_subject[0] & 255 ) != 0 )
                                                    LYstrncpy( subject, mailto_subject, 70 );
                                                    mustshow = 1;
                                                    statusline( gettext( "Subject: " ) );
                                                    ch = LYgetstr( subject, 0, 70, 0 );
                                                    if ( ch < 0 )
                                                    {
                                                      HTInfoMsg( gettext( "Mailto form submission Cancelled!!!" ) );
                                                    }
                                                    else
                                                    {
                                                      if ( ( LYNoCc & 255 ) == 0 )
                                                      {
                                                        if ( personal_mail_address != 0 )
                                                        {
                                                          if ( ( personal_mail_address[0] & 255 ) != 0 )
                                                          {
                                                            sprintf( self, "%.*s", 70, personal_mail_address );
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
                                                                fd = LYPipeToMailer( );
                                                                if ( fd == 0 )
                                                                {
                                                                  HTAlert( gettext( "Mailto form submission failed!" ) );
                                                                }
                                                                else
                                                                {
                                                                  if ( mailto_type != 0 )
                                                                  {
                                                                    if ( ( mailto_type[0] & 255 ) != 0 )
                                                                    {
                                                                      fwrite( "Mime-Version: 1.0\n", 1, 18, fd );
                                                                      fprintf( fd, "Content-Type: %s\n", mailto_type );
                                                                      fprintf( fd, "To: %s\n", address );
                                                                      if ( personal_mail_address != 0 )
                                                                      {
                                                                        if ( ( personal_mail_address[0] & 255 ) != 0 )
                                                                          fprintf( fd, "From: %s\n", personal_mail_address );
                                                                          if ( ccaddr != 0 )
                                                                          {
                                                                            if ( ( ccaddr[0] & 255 ) != 0 )
                                                                              fprintf( fd, "Cc: %s\n", ccaddr );
                                                                              fprintf( fd, "Subject: %s\n\n", subject );
                                                                              if ( keywords != 0 )
                                                                              {
                                                                                if ( ( keywords[0] & 255 ) != 0 )
                                                                                  fprintf( fd, "Keywords: %s\n", keywords );
                                                                                  mustshow = 1;
                                                                                  statusline( gettext( "Sending form content..." ) );
                                                                                  cp = strchr( mailto_content, 10 );
                                                                                  if ( cp != 0 )
                                                                                  {
                                                                                    cp[0] = 0;
                                                                                    i = 0;
                                                                                    len = strlen( mailto_content );
                                                                                    if ( len > 78 )
                                                                                    {
                                                                                      strncpy( buf, &mailto_content[ i ], 78 );
                                                                                      buf[78] = 0;
                                                                                      fprintf( fd, "%s\n", buf );
                                                                                      i += 78;
                                                                                      len = strlen( &mailto_content[ i ] );
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      fprintf( fd, "%s\n", &mailto_content[ i ] );
                                                                                      mailto_content = &cp[1];
                                                                                      cp = strchr( mailto_content, 10 );
                                                                                    }
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    i = 0;
                                                                                    len = strlen( mailto_content );
                                                                                    if ( len > 78 )
                                                                                    {
                                                                                      strncpy( buf, &mailto_content[ i ], 78 );
                                                                                      buf[78] = 0;
                                                                                      fprintf( fd, "%s\n", buf );
                                                                                      i += 78;
                                                                                      len = strlen( &mailto_content[ i ] );
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      if ( len != 0 )
                                                                                        fprintf( fd, "%s\n", &mailto_content[ i ] );
                                                                                        pclose( fd );
                                                                                        LYSleepMsg( );
                                                                                      else
                                                                                      {
                                                                                        pclose( fd );
                                                                                        LYSleepMsg( );
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
                                                              {
                                                                HTSACat( &ccaddr, "," );
                                                                HTSACat( &ccaddr, self );
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            sprintf( self, "%.*s", 70, personal_mail_address );
                                                            mustshow = 1;
                                                            statusline( "Cc: " );
                                                            ch = LYgetstr( self, 0, 70, 0 );
                                                          }
                                                        }
                                                        else
                                                        {
                                                          sprintf( self, "%.*s", 70, personal_mail_address );
                                                          mustshow = 1;
                                                          statusline( "Cc: " );
                                                          ch = LYgetstr( self, 0, 70, 0 );
                                                        }
                                                      }
                                                    }
                                                  else
                                                    sprintf( subject, "mailto:%.63s", address );
                                                }
                                                else
                                                  sprintf( subject, "mailto:%.63s", address );
                                              }
                                            else
                                            {
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                else
                                {
                                  if ( keywords != 0 )
                                  {
                                    free( keywords );
                                    keywords = 0;
                                  }
                                }
                              }
                            }
                          }
                        else
                        {
                          HTSACopy( &address, mailto_address );
                          cp = strchr( address, 63 );
                        }
                      }
                    }
                    else
                    {
                      HTAlert( gettext( "Malformed mailto form submission!  Cancelled!" ) );
                    }
                  }
                }
                else
                {
                  fprintf( TraceFP( ), "mailto_type:    \"%s\"\n", mailto_type );
                }
              }
              else
              {
              }
            }
            else
            {
              fprintf( TraceFP( ), "mailto_content: \"%s\"\n", mailto_content );
            }
          }
          else
          {
          }
        }
        else
        {
          fprintf( TraceFP( ), "mailto_subject: \"%s\"\n", mailto_subject );
        }
      }
      else
      {
      }
    }
    else
    {
      fprintf( TraceFP( ), "mailto_address: \"%s\"\n", mailto_address );
    }
  }
  else
  {
  }
}
void mailmsg( int cur, char *owner_address, char *filename, char *linkname )
{
  FILE *fd, *fp;
  char *address = 0;
  char *searchpart = 0;
  char *cmd = 0, *cp;
  if ( ( LYSystemMail( ) & 255 ) != 0 )
  {
    if ( owner_address != 0 )
    {
      if ( ( owner_address[0] & 255 ) != 0 )
      {
        cp = strchr( owner_address, 10 );
        if ( cp != 0 )
          cp[0] = 0;
          if ( strncasecomp( owner_address, "lynx-dev@", 9 ) != 0 )
          {
            HTSACopy( &address, owner_address );
            cp = strchr( address, 63 );
            if ( cp != 0 )
            {
              HTSACopy( &searchpart, cp );
              cp[0] = 0;
              cp = &searchpart[1];
              if ( ( cp[0] & 255 ) != 0 )
                extract_field( &address, searchpart, "to=" );
                convert_explorer( address );
                SafeHTUnEscape( address );
                if ( ( trim_comma( address ) & 255 ) != 0 )
                {
                  if ( address != 0 )
                  {
                    free( address );
                    address = 0;
                    if ( ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "mailmsg: No address in '%s'.\n", owner_address );
                      return;
                    }
                    else
                    {
                      return;
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                  fd = LYPipeToMailer( );
                  if ( fd == 0 )
                  {
                    if ( address != 0 )
                    {
                      free( address );
                      address = 0;
                      if ( ( WWW_TraceFlag & 255 ) != 0 )
                      {
                        fprintf( TraceFP( ), "mailmsg: '%s' failed.\n", cmd );
                        return;
                      }
                      else
                      {
                        return;
                      }
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                    fprintf( fd, "To: %s\n", address );
                    fprintf( fd, "Subject: Lynx Error in %s\n", filename );
                    if ( personal_mail_address != 0 )
                    {
                      if ( ( personal_mail_address[0] & 255 ) != 0 )
                        fprintf( fd, "Cc: %s\n", personal_mail_address );
                        fprintf( fd, "X-URL: %s\n", filename );
                        fprintf( fd, "X-Mailer: %s, Version %s\n\n", "Lynx", "2.8.7dev.11" );
                        fprintf( fd, gettext( "The link   %s :?: %s \n" ), links[ cur ].lname );
                        fprintf( fd, gettext( "called \"%s\"\n" ), LYGetHiliteStr( cur, 0 ) );
                        fprintf( fd, gettext( "in the file \"%s\" called \"%s\"\n" ), filename, linkname );
                        fprintf( fd, "%s\n\n", gettext( "was requested but was not available." ) );
                        fprintf( fd, "%s\n\n", gettext( "Thought you might want to know." ) );
                        fprintf( fd, "%s\n", gettext( "This message was automatically generated by" ) );
                        fprintf( fd, "%s %s", "Lynx", "2.8.7dev.11" );
                        if ( LynxSigFile != 0 )
                        {
                          fp = fopen64( LynxSigFile, "r" );
                          if ( fp != 0 )
                            fwrite( "-- \n", 1, 4, fd );
                            if ( LYSafeGets( &cmd, fp ) != 0 )
                              fputs( cmd, fd );
                            else
                              LYCloseInput( fp );
                              pclose( fd );
                              if ( ( traversal & 255 ) != 0 )
                              {
                                FILE *ofp = LYAppendToTxtFile( "traverse.errors" );
                                if ( ofp == 0 )
                                {
                                  ofp = LYNewTxtFile( "traverse.errors" );
                                  if ( ofp == 0 )
                                  {
                                    perror( gettext( "Unable to open traversal errors output file" ) );
                                    exit_immediately( 1 );
                                    fprintf( ofp, "%s\t%s \tin %s\n", links[ cur ].lname, links[ cur ].target, filename );
                                    LYCloseOutput( ofp );
                                    if ( address != 0 )
                                    {
                                      free( address );
                                      address = 0;
                                      return;
                                    }
                                    else
                                    {
                                      return;
                                    }
                                  }
                                }
                              }
                              else
                              {
                              }
                        }
                    }
                  }
                }
            }
          }
          else
          {
            return;
          }
        else
        {
        }
      }
      else
      {
        return;
      }
    }
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    if ( refid != 0 )
    {
      if ( title != 0 )
      {
        if ( filename != 0 )
        {
          if ( mail_address != 0 )
          {
            fprintf( TraceFP( ), "reply_by_mail(\"%s\", \"%s\", \"%s\", \"%s\")\n", mail_address, filename, title, refid );
            term_letter = 0;
            if ( ( LYSystemMail( ) & 255 ) != 0 )
            {
              if ( mail_address != 0 )
              {
                if ( ( mail_address[0] & 255 ) == 0 )
                {
                  HTAlert( gettext( "No email address is present in mailto URL!" ) );
                  return;
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
                    cp = strchr( to_address, 63 );
                    if ( cp != 0 )
                    {
                      HTSACopy( &searchpart, cp );
                      cp[0] = 0;
                      cp = &searchpart[1];
                      if ( ( cp[0] & 255 ) != 0 )
                      {
                        extract_subject( default_subject, searchpart );
                        extract_field( &to_address, searchpart, "to=" );
                        extract_field( &ccaddr, searchpart, "cc=" );
                        extract_field( &keywords, searchpart, "keywords=" );
                        if ( keywords != 0 )
                        {
                          if ( ( keywords[0] & 255 ) != 0 )
                            SafeHTUnEscape( keywords );
                            extract_body( &body, searchpart );
                            if ( searchpart != 0 )
                            {
                              free( searchpart );
                              searchpart = 0;
                              if ( ( convert_explorer( to_address ) & 255 ) != 0 )
                              {
                                HTAlert( gettext( "No email address is present in mailto URL!" ) );
                                HTInfoMsg( gettext( "Cancelled!!!" ) );
                                LYCloseTempFP( fd );
                                scrollok( LYwin, 0 );
                                signal( 2, &cleanup_sig );
                                term_letter = 0;
                                if ( header != 0 )
                                {
                                  free( header );
                                  header = 0;
                                  LYRemoveTemp( my_tmpfile );
                                  if ( from_address != 0 )
                                  {
                                    free( from_address );
                                    from_address = 0;
                                    if ( the_subject != 0 )
                                    {
                                      free( the_subject );
                                      the_subject = 0;
                                      if ( cc_address != 0 )
                                      {
                                        free( cc_address );
                                        cc_address = 0;
                                        if ( to_address != 0 )
                                        {
                                          free( to_address );
                                          to_address = 0;
                                          if ( ccaddr != 0 )
                                          {
                                            free( ccaddr );
                                            ccaddr = 0;
                                            if ( keywords != 0 )
                                            {
                                              free( keywords );
                                              keywords = 0;
                                              if ( body != 0 )
                                              {
                                                free( body );
                                                body = 0;
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
                                  }
                                }
                                else
                                {
                                  LYRemoveTemp( my_tmpfile );
                                }
                              }
                              else
                              {
                                if ( ccaddr != 0 )
                                {
                                  if ( ( convert_explorer( ccaddr ) & 255 ) != 0 )
                                  {
                                    if ( ccaddr != 0 )
                                    {
                                      free( ccaddr );
                                      ccaddr = 0;
                                      SafeHTUnEscape( to_address );
                                      if ( ccaddr != 0 )
                                        SafeHTUnEscape( ccaddr );
                                        if ( ( default_subject[0] & 255 ) == 0 )
                                        {
                                          if ( title != 0 )
                                          {
                                            if ( ( title[0] & 255 ) != 0 )
                                            {
                                              strncpy( default_subject, title, 70 );
                                              default_subject[70] = 0;
                                              signal( 2, &terminate_letter );
                                              HTSprintf( &header, "To: %s\n", to_address );
                                              if ( strncasecomp( LYCharSet_UC[ current_char_set ].MIMEname, "us-ascii", 8 ) != 0 )
                                              {
                                                HTSACat( &header, "Mime-Version: 1.0\n" );
                                                if ( ( LYHaveCJKCharacterSet & 255 ) == 0 )
                                                {
                                                  if ( strncasecomp( LYCharSet_UC[ current_char_set ].MIMEname, "x-", 2 ) != 0 )
                                                    HTSprintf( &header, "Content-Type: text/plain; charset=%s\n", LYCharSet_UC[ current_char_set ].MIMEname );
                                                    HTSACat( &header, "Content-Transfer-Encoding: 8bit\n" );
                                                    if ( filename != 0 )
                                                    {
                                                      if ( ( filename[0] & 255 ) != 0 )
                                                        HTSprintf( &header, "X-URL: %s\n", filename );
                                                        HTSprintf( &header, "X-Mailer: %s, Version %s\n", "Lynx", "2.8.7dev.11" );
                                                        if ( refid != 0 )
                                                        {
                                                          if ( ( refid[0] & 255 ) != 0 )
                                                            HTSprintf( &header, "In-Reply-To: &lt;%s&gt;\n", refid );
                                                            LYclear( );
                                                            LYmove( 2, 0 );
                                                            scrollok( LYwin, 1 );
                                                            if ( body != 0 )
                                                            {
                                                              LYwaddnstr( LYwin, gettext( "You are sending a message with body to:\n  " ), strlen( gettext( "You are sending a message with body to:\n  " ) ) );
                                                              show_addresses( to_address );
                                                              cp = ccaddr;
                                                              if ( cp != 0 )
                                                              {
                                                                if ( strchr( cp, 44 ) != 0 )
                                                                {
                                                                  LYwaddnstr( LYwin, gettext( "\n With copies to:\n  " ), strlen( gettext( "\n With copies to:\n  " ) ) );
                                                                  show_addresses( ccaddr );
                                                                  LYwaddnstr( LYwin, gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ), strlen( gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ) ) );
                                                                  LYwaddnstr( LYwin, gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ), strlen( gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ) ) );
                                                                  label = "X-Personal_Name: ";
                                                                  if ( header_prompt( label, &personal_name, 1024 ) != 0 )
                                                                  {
                                                                    if ( ( personal_name[0] & 255 ) != 0 )
                                                                      HTSprintf( &header, "%s: %s\n", label, personal_name );
                                                                      LYwaddnstr( LYwin, gettext( "\n Please enter a mail address or some other\n" ), strlen( gettext( "\n Please enter a mail address or some other\n" ) ) );
                                                                      LYwaddnstr( LYwin, gettext( " means to contact you, if you desire a response.\n" ), strlen( gettext( " means to contact you, if you desire a response.\n" ) ) );
                                                                      label = "From";
                                                                      if ( personal_mail_address != 0 )
                                                                        HTSACopy( &from_address, personal_mail_address );
                                                                        if ( header_prompt( label, &from_address, 1024 ) != 0 )
                                                                        {
                                                                          HTSprintf( &header, "%s: %s\n", label, from_address );
                                                                          LYwaddnstr( LYwin, gettext( "\n Please enter a subject line.\n" ), strlen( gettext( "\n Please enter a subject line.\n" ) ) );
                                                                          label = "Subject";
                                                                          if ( ( default_subject[0] & 255 ) != 0 )
                                                                            HTSACopy( &the_subject, default_subject );
                                                                            if ( header_prompt( label, &the_subject, 70 ) != 0 )
                                                                            {
                                                                              if ( ( LYNoCc & 255 ) == 0 )
                                                                              {
                                                                                LYwaddnstr( LYwin, gettext( "\n Enter a mail address for a CC of your message.\n" ), strlen( gettext( "\n Enter a mail address for a CC of your message.\n" ) ) );
                                                                                LYwaddnstr( LYwin, gettext( " (Leave blank if you don't want a copy.)\n" ), strlen( gettext( " (Leave blank if you don't want a copy.)\n" ) ) );
                                                                                if ( personal_mail_address != 0 )
                                                                                  HTSACopy( &cc_address, personal_mail_address );
                                                                                  if ( header_prompt( "Cc", &cc_address, 1024 ) != 0 )
                                                                                    comma_append( &ccaddr, cc_address );
                                                                                    HTSprintf( &header, "%s: %s\n", label, the_subject );
                                                                                    if ( ccaddr != 0 )
                                                                                    {
                                                                                      if ( ( ccaddr[0] & 255 ) != 0 )
                                                                                        HTSprintf( &header, "Cc: %s\n", ccaddr );
                                                                                        if ( keywords != 0 )
                                                                                        {
                                                                                          if ( ( keywords[0] & 255 ) != 0 )
                                                                                            HTSprintf( &header, "Keywords: %s\n", keywords );
                                                                                            HTSACat( &header, "\n" );
                                                                                            if ( ( WWW_TraceFlag & 255 ) != 0 )
                                                                                            {
                                                                                              fprintf( TraceFP( ), "**header==\n%s", header );
                                                                                              if ( ( no_editor & 255 ) == 0 )
                                                                                              {
                                                                                                if ( editor != 0 )
                                                                                                {
                                                                                                  if ( ( editor[0] & 255 ) != 0 )
                                                                                                  {
                                                                                                    if ( body != 0 )
                                                                                                      cp1 = body;
                                                                                                      cp = strchr( cp1, 10 );
                                                                                                      if ( cp != 0 )
                                                                                                      {
                                                                                                        cp[0] = 0;
                                                                                                        cp++;
                                                                                                        fprintf( fd, "%s\n", cp1 );
                                                                                                        cp1 = cp;
                                                                                                        cp = strchr( cp1, 10 );
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        LYCloseTempFP( fd );
                                                                                                        scrollok( LYwin, 0 );
                                                                                                        if ( ( term_letter & 255 ) == 0 )
                                                                                                        {
                                                                                                          if ( c == 3 )
                                                                                                            continue;
                                                                                                          else
                                                                                                          {
                                                                                                            if ( c == 7 )
                                                                                                              continue;
                                                                                                            else
                                                                                                            {
                                                                                                              if ( c == -1 )
                                                                                                              {
                                                                                                                if ( keymap[0] != 47 )
                                                                                                                {
                                                                                                                  edit_temporary_file( my_tmpfile, "", gettext( "Spawning your selected editor to edit mail message" ) );
                                                                                                                  signal( 2, 1 );
                                                                                                                  LYStatusLine = LYlines - 1;
                                                                                                                  if ( body != 0 )
                                                                                                                  {
                                                                                                                    c = HTConfirm( gettext( "Send this comment?" ) );
                                                                                                                    LYStatusLine = -1;
                                                                                                                    if ( c != 1 )
                                                                                                                      LYclear( );
                                                                                                                    else
                                                                                                                    {
                                                                                                                      if ( body == 0 )
                                                                                                                      {
                                                                                                                        if ( LynxSigFile != 0 )
                                                                                                                        {
                                                                                                                          fp = fopen64( LynxSigFile, "r" );
                                                                                                                          if ( fp != 0 )
                                                                                                                          {
                                                                                                                            LYStatusLine = LYlines - 1;
                                                                                                                            if ( ( term_letter & 255 ) != 0 )
                                                                                                                            {
                                                                                                                              mustshow = 1;
                                                                                                                              user_message( gettext( "Append '%s'?" ), LynxSigFile );
                                                                                                                              c = 0;
                                                                                                                              LYStatusLine = -1;
                                                                                                                              if ( c == 1 )
                                                                                                                              {
                                                                                                                                fd = fopen64( my_tmpfile, "a+" );
                                                                                                                                if ( fd != 0 )
                                                                                                                                {
                                                                                                                                  char *buffer = 0;
                                                                                                                                  fwrite( "-- \n", 1, 4, fd );
                                                                                                                                  if ( LYSafeGets( &buffer, fp ) != 0 )
                                                                                                                                    fputs( buffer, fd );
                                                                                                                                  else
                                                                                                                                  {
                                                                                                                                    LYCloseOutput( fd );
                                                                                                                                    if ( buffer != 0 )
                                                                                                                                    {
                                                                                                                                      free( buffer );
                                                                                                                                      LYCloseInput( fp );
                                                                                                                                      LYclear( );
                                                                                                                                      mustshow = 1;
                                                                                                                                      statusline( gettext( "Sending your message..." ) );
                                                                                                                                      signal( 2, 1 );
                                                                                                                                      fp = LYPipeToMailer( );
                                                                                                                                      if ( fp == 0 )
                                                                                                                                      {
                                                                                                                                        HTInfoMsg( gettext( "Cancelled!!!" ) );
                                                                                                                                        if ( fp != 0 )
                                                                                                                                        {
                                                                                                                                          fd = fopen64( my_tmpfile, "r" );
                                                                                                                                          if ( fd == 0 )
                                                                                                                                          {
                                                                                                                                            HTInfoMsg( gettext( "Cancelled!!!" ) );
                                                                                                                                            pclose( fp );
                                                                                                                                          }
                                                                                                                                          else
                                                                                                                                            fputs( header, fp );
                                                                                                                                            n = fread( buf, 1, 4096, fd );
                                                                                                                                            if ( n != 0 )
                                                                                                                                              fwrite( buf, 1, n, fp );
                                                                                                                                              n = fread( buf, 1, 4096, fd );
                                                                                                                                            else
                                                                                                                                            {
                                                                                                                                              pclose( fp );
                                                                                                                                              LYCloseInput( fd );
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                      else
                                                                                                                                      {
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              }
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                              char *msg = 0;
                                                                                                                              HTSprintf0( &msg, gettext( "Append '%s'?" ), LynxSigFile );
                                                                                                                              c = HTConfirm( msg );
                                                                                                                              if ( msg != 0 )
                                                                                                                              {
                                                                                                                                free( msg );
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    c = HTConfirm( gettext( "Send this comment?" ) );
                                                                                                                    LYStatusLine = -1;
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                if ( ( c & 34816 ) != 0 )
                                                                                                                {
                                                                                                                  if ( ( c & 255 ) != 47 )
                                                                                                                    continue;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                  if ( keymap[ ( c & 2047 ) + 1 ] != 47 )
                                                                                                                    continue;
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    else
                                                                                                    {
                                                                                                      if ( ( *(char*)(HTLoadedDocumentURL( )) & 255 ) != 0 )
                                                                                                      {
                                                                                                        BOOLEAN is_preparsed;
                                                                                                        if ( ( LYPreparsedSource & 255 ) != 0 )
                                                                                                        {
                                                                                                          if ( HTisDocumentSource( ) != 0 )
                                                                                                          {
                                                                                                            *(int*)&is_preparsed = 1;
                                                                                                            if ( is_preparsed != 0 )
                                                                                                            {
                                                                                                              if ( HTConfirm( gettext( "Do you wish to include the original message?" ) ) == 1 )
                                                                                                                print_wwwfile_to_fd( fd, 1, is_preparsed == 0 );
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                            }
                                                                                                          }
                                                                                                          else
                                                                                                          {
                                                                                                            *(int*)&is_preparsed = 1;
                                                                                                          }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          *(int*)&is_preparsed = 1;
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    if ( body != 0 )
                                                                                                    {
                                                                                                      LYclear( );
                                                                                                      LYmove( 0, 0 );
                                                                                                      LYwaddnstr( LYwin, gettext( "\n Please review the message body:\n\n" ), strlen( gettext( "\n Please review the message body:\n\n" ) ) );
                                                                                                      LYrefresh( );
                                                                                                      cp1 = body;
                                                                                                      i = LYlines - 5;
                                                                                                      cp = strchr( cp1, 10 );
                                                                                                      if ( cp != 0 )
                                                                                                      {
                                                                                                        if ( i < 1 )
                                                                                                        {
                                                                                                          LYwaddnstr( LYwin, gettext( "\nPress RETURN to continue: " ), strlen( gettext( "\nPress RETURN to continue: " ) ) );
                                                                                                          LYrefresh( );
                                                                                                          c = LYgetch( );
                                                                                                          LYwaddnstr( LYwin, "\n", 1 );
                                                                                                          if ( ( term_letter & 255 ) == 0 )
                                                                                                          {
                                                                                                            if ( c == 3 )
                                                                                                              continue;
                                                                                                            else
                                                                                                            {
                                                                                                              if ( c == 7 )
                                                                                                                continue;
                                                                                                              else
                                                                                                              {
                                                                                                                if ( c == -1 )
                                                                                                                {
                                                                                                                  if ( keymap[0] != 47 )
                                                                                                                    i = LYlines - 2;
                                                                                                                    cp[0] = 0;
                                                                                                                    cp++;
                                                                                                                    fprintf( fd, "%s\n", cp1 );
                                                                                                                    LYwaddnstr( LYwin, cp1, strlen( cp1 ) );
                                                                                                                    LYwaddnstr( LYwin, "\n", 1 );
                                                                                                                    cp1 = cp;
                                                                                                                    i--;
                                                                                                                    cp = strchr( cp1, 10 );
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                  if ( ( c & 34816 ) != 0 )
                                                                                                                  {
                                                                                                                    if ( ( c & 255 ) != 47 )
                                                                                                                      continue;
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    if ( keymap[ ( c & 2047 ) + 1 ] != 47 )
                                                                                                                      continue;
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          cp[0] = 0;
                                                                                                          cp++;
                                                                                                          fprintf( fd, "%s\n", cp1 );
                                                                                                          LYwaddnstr( LYwin, cp1, strlen( cp1 ) );
                                                                                                          LYwaddnstr( LYwin, "\n", 1 );
                                                                                                          cp1 = cp;
                                                                                                          i--;
                                                                                                          cp = strchr( cp1, 10 );
                                                                                                        }
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        if ( i >= 0 )
                                                                                                        {
                                                                                                          LYwaddnstr( LYwin, "\n", 1 );
                                                                                                          i--;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          LYrefresh( );
                                                                                                          LYCloseTempFP( fd );
                                                                                                          scrollok( LYwin, 0 );
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      LYwaddnstr( LYwin, gettext( "\n Please enter your message below." ), strlen( gettext( "\n Please enter your message below." ) ) );
                                                                                                      LYwaddnstr( LYwin, gettext( "\n When you are done, press enter and put a single period (.)" ), strlen( gettext( "\n When you are done, press enter and put a single period (.)" ) ) );
                                                                                                      LYwaddnstr( LYwin, gettext( "\n on a line and press enter again." ), strlen( gettext( "\n on a line and press enter again." ) ) );
                                                                                                      LYwaddnstr( LYwin, "\n\n", 2 );
                                                                                                      LYrefresh( );
                                                                                                      user_input[0] = 0;
                                                                                                      if ( LYgetstr( user_input, 0, 1024, 0 ) >= 0 )
                                                                                                      {
                                                                                                        if ( ( term_letter & 255 ) == 0 )
                                                                                                        {
                                                                                                          if ( strcmp( user_input, "." ) != 0 )
                                                                                                          {
                                                                                                            if ( strcmp( user_input, "." ) != 0 )
                                                                                                            {
                                                                                                              if ( ( term_letter & 255 ) == 0 )
                                                                                                              {
                                                                                                                LYwaddnstr( LYwin, "\n", 1 );
                                                                                                                remove_tildes( user_input );
                                                                                                                fprintf( fd, "%s\n", user_input );
                                                                                                                user_input[0] = 0;
                                                                                                                if ( LYgetstr( user_input, 0, 1024, 0 ) >= 0 )
                                                                                                                {
                                                                                                                }
                                                                                                              }
                                                                                                              else
                                                                                                              {
                                                                                                                fputc( 10, fd );
                                                                                                                LYCloseTempFP( fd );
                                                                                                                scrollok( LYwin, 0 );
                                                                                                              }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                              fputc( 10, fd );
                                                                                                              LYCloseTempFP( fd );
                                                                                                              scrollok( LYwin, 0 );
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
                                                                                            {
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                else
                                                                                {
                                                                                }
                                                                              }
                                                                              else
                                                                              {
                                                                                HTSprintf( &header, "%s: %s\n", label, the_subject );
                                                                              }
                                                                            }
                                                                          else
                                                                          {
                                                                            if ( filename != 0 )
                                                                            {
                                                                              if ( ( filename[0] & 255 ) != 0 )
                                                                                HTSprintf( &the_subject, "%s", filename );
                                                                              else
                                                                                HTSprintf( &the_subject, "mailto:%s", to_address );
                                                                            }
                                                                            else
                                                                              HTSprintf( &the_subject, "mailto:%s", to_address );
                                                                          }
                                                                        }
                                                                      else
                                                                      {
                                                                      }
                                                                    else
                                                                    {
                                                                      LYwaddnstr( LYwin, gettext( "\n Please enter a mail address or some other\n" ), strlen( gettext( "\n Please enter a mail address or some other\n" ) ) );
                                                                      LYwaddnstr( LYwin, gettext( " means to contact you, if you desire a response.\n" ), strlen( gettext( " means to contact you, if you desire a response.\n" ) ) );
                                                                      label = "From";
                                                                    }
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  LYwaddnstr( LYwin, gettext( "\n With copy to:\n  " ), strlen( gettext( "\n With copy to:\n  " ) ) );
                                                                  show_addresses( ccaddr );
                                                                  LYwaddnstr( LYwin, gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ), strlen( gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ) ) );
                                                                  LYwaddnstr( LYwin, gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ), strlen( gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ) ) );
                                                                  label = "X-Personal_Name: ";
                                                                }
                                                              }
                                                              else
                                                              {
                                                                LYwaddnstr( LYwin, gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ), strlen( gettext( "\n\nUse Ctrl-G to cancel if you do not want to send a message\n" ) ) );
                                                                LYwaddnstr( LYwin, gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ), strlen( gettext( "\n Please enter your name, or leave it blank to remain anonymous\n" ) ) );
                                                                label = "X-Personal_Name: ";
                                                              }
                                                            }
                                                            else
                                                            {
                                                              LYwaddnstr( LYwin, gettext( "You are sending a comment to:\n  " ), strlen( gettext( "You are sending a comment to:\n  " ) ) );
                                                              show_addresses( to_address );
                                                              cp = ccaddr;
                                                            }
                                                        }
                                                      else
                                                        HTSprintf( &header, "X-URL: mailto:%s\n", to_address );
                                                        HTSprintf( &header, "X-Mailer: %s, Version %s\n", "Lynx", "2.8.7dev.11" );
                                                    }
                                                    else
                                                      HTSprintf( &header, "X-URL: mailto:%s\n", to_address );
                                                      HTSprintf( &header, "X-Mailer: %s, Version %s\n", "Lynx", "2.8.7dev.11" );
                                                }
                                              }
                                              else
                                              {
                                              }
                                            }
                                          }
                                        }
                                      else
                                      {
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          else
                          {
                            if ( keywords != 0 )
                            {
                              free( keywords );
                              keywords = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                HTAlert( gettext( "No email address is present in mailto URL!" ) );
              }
            }
          }
          else
          {
            fprintf( TraceFP( ), "reply_by_mail(\"%s\", \"%s\", \"%s\", \"%s\")\n", mail_address, filename, title, refid );
            term_letter = 0;
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
    }
  }
  else
  {
    term_letter = 0;
  }
}
BOOLEAN LYSystemMail( void )
{
  if ( system_mail != 0 )
  {
    if ( strcmp( system_mail, "unknown" ) == 0 )
    {
      HTAlert( gettext( "No system mailer configured" ) );
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    HTAlert( gettext( "No system mailer configured" ) );
    return 1;
  }
}
