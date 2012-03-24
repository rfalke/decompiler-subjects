#include "HTAlert.c.h"
static BOOLEAN conf_cancelled;
void HTAlert( char *Msg )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "\nAlert!: %s\n\n", Msg );
  }
  if ( WWW_TraceFlag )
  {
    fflush( TraceFP( ) );
  }
  mustshow = 1;
  user_message( gettext( "Alert!: %s" ), Msg );
  LYstore_message2( gettext( "Alert!: %s" ), Msg );
  if ( dump_output_immediately && dump_to_stderr )
  {
    fflush( stdout );
    fprintf( stderr, gettext( "Alert!: %s" ), Msg );
    fputc( 10, stderr );
    fflush( stderr );
  }
  LYSleepAlert( );
  return;
}
void HTAlwaysAlert( char *extra_prefix, char *Msg )
{
  if ( !dump_output_immediately && LYCursesON )
  {
    HTAlert( Msg );
  }
  else
  {
    if ( extra_prefix )
    {
      fprintf( stderr, "%s %s!\n", extra_prefix, Msg );
      fflush( stdout );
      LYstore_message2( gettext( "Alert!: %s" ), Msg );
      LYSleepAlert( );
    }
    else
    {
      fprintf( stderr, gettext( "Alert!: %s" ), "" );
      fflush( stdout );
      LYstore_message2( gettext( "Alert!: %s" ), Msg );
      LYSleepAlert( );
      fputc( 10, stderr );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\nAlert!: %s\n\n", Msg );
    }
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fflush( TraceFP( ) );
  }
  return;
}
void HTInfoMsg( char *Msg )
{
  mustshow = 1;
  statusline( Msg );
  if ( Msg && Msg[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Info message: %s\n", Msg );
    }
    LYstore_message( Msg );
    LYSleepInfo( );
  }
  return;
}
void HTInfoMsg2( char *Msg2, char *Arg )
{
  mustshow = 1;
  user_message( Msg2, Arg );
  if ( Msg2 && Msg2[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Info message: " );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), Msg2, Arg );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\n" );
    }
    LYstore_message2( Msg2, Arg );
    LYSleepInfo( );
  }
  return;
}
void HTUserMsg( char *Msg )
{
  mustshow = 1;
  statusline( Msg );
  if ( Msg && Msg[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "User message: %s\n", Msg );
    }
    LYstore_message( Msg );
    LYSleepMsg( );
  }
  return;
}
void HTUserMsg2( char *Msg2, char *Arg )
{
  mustshow = 1;
  user_message( Msg2, Arg );
  if ( Msg2 && Msg2[0] )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "User message: " );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), Msg2, Arg );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\n" );
    }
    LYstore_message2( Msg2, Arg );
    LYSleepMsg( );
  }
  return;
}
void HTProgress( char *Msg )
{
  statusline( Msg );
  LYstore_message( Msg );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "%s\n", Msg );
  }
  LYSleepDebug( );
  return;
}
char *HTProgressUnits( int rate )
{
  static char *bunits;
  static char *kbunits;
  if ( bunits == 0 )
  {
    bunits = gettext( "bytes" );
    kbunits = gettext( LYTransferName );
  }
  return rate == 2 || rate == 4 ? kbunits : bunits;
}
char *sprint_bytes( char *s, off_t n, char *was_units )
{
  static off_t kb_units = 1024;
  char *u = HTProgressUnits( LYTransferRate );
  if ( LYTransferRate == 2 || LYTransferRate == 4 )
  {
    if ( ( (unsigned int)(kb_units << 32) * 10 ) + (/*HI*/int)( (int)(kb_units & 0xFFFFFFFF) * 10 ) <= (int)(n << 32) && ( ( (unsigned int)(kb_units << 32) * 10 ) + (/*HI*/int)( (int)(kb_units & 0xFFFFFFFF) * 10 ) < (int)(n << 32) || (int)( (int)(kb_units & 0xFFFFFFFF) * 10 ) <= (unsigned int)(n & 0xFFFFFFFF) ) )
    {
      sprintf( s, "%lld", __divdi3( n, kb_units ) );
    }
    else
    if ( (int)(n << 32) >= 0 && ( (int)(n << 32) > 0 || (unsigned int)(n & 0xFFFFFFFF) > 999 ) )
      sprintf( s, "%.2g", (double)( n ) / (double)( kb_units ) );
    else
    {
      sprintf( s, "%lld", n );
      u = HTProgressUnits( 1 );
    }
  }
  else
    sprintf( s, "%lld", n );
  if ( was_units == 0 || was_units != u )
  {
    sprintf( s + strlen( s ), " %s", u );
  }
  return u;
}
char *sprint_tbuf( char *s, long t )
{
  if ( t > 3600 )
  {
    sprintf( s, "%ldh%ldm%lds", ( ( t + (/*HI*/int)( -1851608123 * t ) ) >> 11 ) - ( t >> 31 ), ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) - ( ( ( ( (/*HI*/int)( -2004318071 * ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) ) + ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) ) >> 5 ) - ( ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) >> 31 ) ) * 60 ), t - ( ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) * 60 ) );
  }
  if ( t > 60 )
  {
    sprintf( s, "%ldm%lds", ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ), t - ( ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) * 60 ) );
  }
  sprintf( s, "%ld sec", t );
  return s;
}
void HTReadProgress( off_t bytes, off_t total )
{
  static off_t bytes_last;
  static off_t total_last;
  static off_t transfer_rate;
  static char *line;
  static double first, last, last_active;
  char bytesp[80], totalp[80], transferp[80];
  int renew = 0;
  char *was_units;
  struct timeval tv;
  double now;
  gettimeofday( &tv.tv_sec, 0 );
  now = (double)( tv.tv_sec ) + ( (double)( tv.tv_usec ) / 1000000.000000000000 );
  if ( LYShowTransferRate == 0 )
    LYTransferRate = 0;
  if ( bytes == 0 )
  {
    first = last = last_active = now;
    bytes_last = bytes;
  }
  else
  if ( (int)(bytes << 32) < 0 )
  {
    bytes = bytes_last;
    total = total_last;
  }
  if ( (int)(bytes << 32) >= 0 && ( (int)(bytes << 32) > 0 || (unsigned int)(bytes & 0xFFFFFFFF) > 0 ) && first < now )
  {
    if ( (int)(transfer_rate << 32) <= 0 && ( (int)(transfer_rate << 32) < 0 || (unsigned int)(transfer_rate & 0xFFFFFFFF) <= 0 ) )
    {
    }
    total_last = total;
    if ( last + 0.200000000000 <= now )
      renew = 1;
    if ( renew == 0 )
    {
      return;
    }
    if ( last < now )
    {
      last = now;
      if ( bytes_last != bytes )
        last_active = now;
      bytes_last = bytes;
    }
    if ( (int)(total << 32) >= 0 && ( (int)(total << 32) > 0 || (unsigned int)(total & 0xFFFFFFFF) > 0 ) )
    {
      was_units = sprint_bytes( totalp, total, 0 );
    }
    else
      was_units = 0;
    sprint_bytes( bytesp, bytes, was_units );
    if ( (int)(total << 32) >= 0 && ( (int)(total << 32) > 0 || (unsigned int)(total & 0xFFFFFFFF) > 0 ) )
    {
      HTSprintf0( &line, gettext( "Read %s of %s of data" ), bytesp[0], totalp[0] );
    }
    else
    {
      HTSprintf0( &line, gettext( "Read %s of data" ), bytesp[0] );
    }
    if ( LYTransferRate && (int)(transfer_rate << 32) >= 0 && ( (int)(transfer_rate << 32) > 0 || (unsigned int)(transfer_rate & 0xFFFFFFFF) > 0 ) )
    {
      sprint_bytes( transferp, transfer_rate, 0 );
      HTSprintf( &line, gettext( ", %s/sec" ), transferp[0] );
    }
    if ( LYTransferRate == 3 || LYTransferRate == 4 )
    {
      char tbuf[16];
      if ( 5.000000000000 <= now - last_active )
      {
        HTSprintf( &line, gettext( " (stalled for %s)" ), sprint_tbuf( tbuf, (int)( now - last_active ) ) );
      }
      if ( (int)(total << 32) >= 0 && ( (int)(total << 32) > 0 || (unsigned int)(total & 0xFFFFFFFF) > 0 ) && transfer_rate )
      {
        HTSprintf( &line, gettext( ", ETA %s" ), sprint_tbuf( tbuf, __divdi3( total - bytes, transfer_rate ) ) );
      }
    }
    HTSACat( &line, "." );
    if ( (int)(total << 32) <= -1 && ( (int)(total << 32) < -1 || (unsigned int)(total & 0xFFFFFFFF) < -1 ) )
    {
      HTSACat( &line, gettext( " (Press 'z' to abort)" ) );
    }
    statusline( line );
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "%s\n", line );
  }
}
BOOLEAN HTLastConfirmCancelled( void )
{
  if ( conf_cancelled )
  {
    conf_cancelled = 0;
  }
  else
  {
  }
  return 0;
}
int HTForcedPrompt( int option, char *msg, int dft )
{
  int result = 0;
  char *show = 0;
  char *msg2 = 0;
  if ( option == 0 )
  {
    result = HTConfirmDefault( msg, dft );
  }
  else
  {
    if ( option == 1 )
    {
      show = gettext( "yes" );
      result = 1;
    }
    else
    if ( option == 2 )
    {
      show = gettext( "no" );
      result = 0;
    }
    else
    {
      return result;
    }
    HTSprintf( &msg2, "%s %s", msg, show, ebp_20 );
    HTUserMsg( msg2 );
    free( msg2 );
  }
  return result;
}
int HTConfirmDefault( char *Msg, int Dft )
{
  char *msg_yes = gettext( "yes" );
  char *msg_no = gettext( "no" );
  int result = -1;
  if ( msg_yes[0] == msg_no[0] )
  {
    msg_yes = "yes";
    msg_no = "no";
  }
  conf_cancelled = 0;
  if ( dump_output_immediately )
  {
    if ( Dft == -2 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Confirm: %s (%c/%c) ", Msg, msg_yes[0], msg_no[0] );
      }
    }
    else
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Confirm: %s (%c) ", Msg, Dft == 1 ? msg_yes[0] : msg_no[0] );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "- NO, not interactive.\n" );
    }
    result = 0;
  }
  else
  {
    char *msg = 0;
    char fallback_y = 'y';
    char fallback_n = 'n';
    if ( msg_yes[0] == fallback_y || msg_no[0] == fallback_y )
      fallback_y = 0;
    if ( msg_yes[0] == fallback_n || msg_no[0] == fallback_n )
      fallback_n = 0;
    if ( Dft == -2 )
      HTSprintf0( &msg, "%s (%c/%c) ", Msg, msg_yes[0], msg_no[0] );
    else
    {
      HTSprintf0( &msg, "%s (%c) ", Msg, Dft == 1 ? msg_yes[0] : msg_no[0] );
    }
    if ( LYTraceLogFP && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Confirm: %s", msg );
    }
    mustshow = 1;
    statusline( msg );
    if ( msg )
    {
      free( msg );
      msg = 0;
    }
    do
    {
      if ( result < 0 )
      {
        int c = LYgetch_single( );
        if ( msg_yes[0] == c )
        {
          result = 1;
        }
        else
        {
          if ( msg_no[0] == c )
          {
            result = 0;
          }
          else
          if ( fallback_y && c == fallback_y )
          {
            result = 1;
          }
          else
          if ( fallback_n && c == fallback_n )
          {
            result = 0;
          }
          else
          {
            switch ( c )
            {
            case -1:
              if ( keymap[0] == 47 )
              {
                conf_cancelled = 1;
                result = 0;
              }
              else
              break;
            default:
              if ( c & 34816 )
              {
                if ( ( c & 255 ) == 47 )
                  continue;
              }
              else
              if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                continue;
              break;
            }
          }
        }
      }
      if ( WWW_TraceFlag == 0 )
        break;
      fprintf( TraceFP( ), "- %s%s.\n", "NO", "" );
      break;
    }
    while ( Dft != -2 );
    result = Dft;
  }
  return result;
}
BOOLEAN HTConfirm( char *Msg )
{
  return HTConfirmDefault( Msg, ebp_4 );
}
BOOLEAN confirm_post_resub( char *address, char *title, int if_imgmap, int if_file )
{
  int eax;
  size_t len1;
  char *msg = gettext( "Resubmit POST content to %s ?" );
  char buf[240];
  char *temp = 0;
  BOOLEAN res;
  size_t maxlen = ( LYcols - ( LYShowScrollbar != 0 ) ) + -5;
  if ( address == 0 )
  {
  }
  else
  {
    if ( strncasecomp( address, "LYNXIMGMAP:", 11 ) == 0 )
    {
      if ( if_imgmap <= 0 )
      {
      }
      else
      if ( if_imgmap == 1 )
      {
      }
      else
      {
        msg = gettext( "List from document with POST data.  Reload %s ?" );
      }
    }
    else
    if ( ( address[0] == 'f' || address[0] == 'F' ) && strncasecomp( address, "file:", 5 ) == 0 )
    {
      if ( if_file <= 0 )
      {
      }
      else
      if ( if_file == 1 )
      {
      }
      else
      {
        msg = gettext( "List from document with POST data.  Reload %s ?" );
      }
    }
    else
    if ( dump_output_immediately )
    {
    }
    if ( maxlen > 239 )
      maxlen = 239;
    len1 = strlen( msg );
    if ( len1 + strlen( address ) <= maxlen )
    {
      sprintf( buf, msg, address );
    }
    else
    {
      temp = HTParse( address, "", 29 );
      if ( len1 + strlen( temp ) <= maxlen )
      {
        sprintf( buf, msg, temp );
        res = HTConfirm( buf );
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
      }
      else
      {
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        if ( title && len1 + strlen( title ) <= maxlen )
        {
          sprintf( buf, msg, title, ebp_281 );
        }
        else
        {
          temp = HTParse( address, "", 25 );
          if ( len1 + strlen( temp ) <= maxlen )
          {
            sprintf( buf, msg, temp, ebp_281 );
            res = HTConfirm( buf );
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
          }
          else
          {
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            temp = HTParse( address, "", 8 );
            if ( temp && temp[0] && len1 + strlen( temp ) <= maxlen )
            {
              sprintf( buf, msg, temp );
              res = HTConfirm( buf );
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
            }
            else
            {
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
char *HTPrompt( char *Msg, char *deflt )
{
  int eax;
  char *rep = 0;
  char Tmp[200];
  Tmp[0] = 0;
  Tmp[199] = 0;
  mustshow = 1;
  statusline( Msg );
  if ( deflt )
    strncpy( Tmp, deflt, 199 );
  if ( dump_output_immediately == 0 )
    LYgetstr( Tmp, 0, 200, 0 );
  HTSACopy( &rep, Tmp );
  return rep;
}
char *HTPromptPassword( char *Msg )
{
  int eax;
  char *result = 0;
  char pw[120];
  pw[0] = 0;
  if ( dump_output_immediately == 0 )
  {
    mustshow = 1;
    statusline( Msg ? Msg : gettext( "Password: " ) );
    LYgetstr( pw, 1, 120, 0 );
    HTSACopy( &result, pw );
  }
  else
  {
    printf( "\n%s\n", gettext( "lynx: Password required!!!" ) );
    HTSACopy( &result, "" );
  }
  return result;
}
void HTPromptUsernameAndPassword( char *Msg, char **username, char **password, BOOLEAN IsProxy )
{
  if ( ( IsProxy == 0 && authentication_info && authentication_info[1] ) || ( IsProxy == 1 && proxyauth_info && proxyauth_info[1] ) )
  {
    HTSACopy( username, authentication_info[0] );
    if ( IsProxy )
    {
      if ( proxyauth_info[0] )
      {
        free( proxyauth_info[0] );
        proxyauth_info[0] = 0;
      }
    }
    else
    if ( authentication_info[0] )
    {
      free( authentication_info[0] );
      authentication_info[0] = 0;
    }
    HTSACopy( password, authentication_info[1] );
    if ( IsProxy )
    {
      if ( proxyauth_info[1] == 0 )
      {
        return;
      }
      free( proxyauth_info[1] );
      proxyauth_info[1] = 0;
    }
    else
    {
      if ( authentication_info[1] == 0 )
      {
        return;
      }
      free( authentication_info[1] );
      authentication_info[1] = 0;
    }
  }
  else
  {
    if ( dump_output_immediately )
    {
      if ( ( IsProxy == 0 && authentication_info ) || ( IsProxy == 1 && proxyauth_info ) )
      {
        HTSACopy( username, authentication_info[0] );
        if ( IsProxy )
        {
          if ( proxyauth_info[0] )
          {
            free( proxyauth_info[0] );
            proxyauth_info[0] = 0;
          }
        }
        else
        if ( authentication_info[0] )
        {
          free( authentication_info[0] );
          authentication_info[0] = 0;
        }
      }
      else
        HTSACopy( username, "WWWuser" );
      if ( ( IsProxy == 0 && authentication_info[1] ) || ( IsProxy == 1 && proxyauth_info[1] ) )
      {
        HTSACopy( password, authentication_info[1] );
        if ( IsProxy )
        {
          if ( proxyauth_info[1] )
          {
            free( proxyauth_info[1] );
            proxyauth_info[1] = 0;
          }
        }
        else
        if ( authentication_info[1] )
        {
          free( authentication_info[1] );
          authentication_info[1] = 0;
        }
      }
      else
        HTSACopy( password, "" );
      printf( "\n%s\n", gettext( "lynx: Username and Password required!!!" ) );
    }
    else
    {
      if ( ( IsProxy == 0 && authentication_info ) || ( IsProxy == 1 && proxyauth_info ) )
      {
        HTSACopy( username, authentication_info[0] );
        if ( IsProxy )
        {
          if ( proxyauth_info[0] )
          {
            free( proxyauth_info[0] );
            proxyauth_info[0] = 0;
          }
        }
        else
        if ( authentication_info[0] )
        {
          free( authentication_info[0] );
          authentication_info[0] = 0;
        }
      }
      if ( Msg )
      {
        username[0] = HTPrompt( Msg, username[0] );
      }
      else
      {
        username[0] = HTPrompt( gettext( "Username: " ), username[0] );
      }
      if ( ( IsProxy == 0 && authentication_info[1] ) || ( IsProxy == 1 && proxyauth_info[1] ) )
      {
        HTSACopy( password, authentication_info[1] );
        if ( IsProxy )
        {
          if ( proxyauth_info[1] == 0 )
          {
            return;
          }
          free( proxyauth_info[1] );
          proxyauth_info[1] = 0;
        }
        else
        {
          if ( authentication_info[1] == 0 )
          {
            return;
          }
          free( authentication_info[1] );
          authentication_info[1] = 0;
        }
      }
      else
      {
        if ( username[0] && username[0] )
        {
          password[0] = HTPromptPassword( gettext( "Password: " ) );
        }
        else
        {
          HTSACopy( password, "" );
        }
      }
    }
  }
  return;
}
BOOLEAN HTConfirmCookie( domain_entry *de, char *server, char *name, char *value )
{
  int ch;
  char *prompt = gettext( "%s cookie: %.*s=%.*s  Allow? (Y/N/Always/neVer)" );
  if ( de == 0 )
  {
  }
  if ( de->bv == 0 )
  {
  }
  if ( de->bv == 1 )
  {
  }
  if ( dump_output_immediately )
  {
  }
  if ( LYAcceptAllCookies == 0 )
  {
    int namelen, valuelen, space_free, percentage;
    char *message = 0;
    space_free = LYcols - ( LYShowScrollbar != 0 ) - strlen( server );
    if ( space_free < 0 )
      space_free = 0;
    namelen = strlen( name );
    valuelen = strlen( value );
    if ( space_free < valuelen + namelen )
    {
      percentage = ( space_free * 100 ) / ( valuelen + namelen );
      namelen = ( (/*HI*/int)( 0x51eb851f * ( percentage * namelen ) ) >> 5 ) - ( ( percentage * namelen ) >> 31 );
      valuelen = ( (/*HI*/int)( 0x51eb851f * ( valuelen * percentage ) ) >> 5 ) - ( ( valuelen * percentage ) >> 31 );
    }
    HTSprintf( &message, prompt, server, namelen, name, valuelen, value );
    mustshow = 1;
    statusline( message );
    if ( message )
    {
      free( message );
      do
      {
        if ( LYAcceptAllCookies )
          ch = 65;
        else
        {
          ch = LYgetch_single( );
        {
          char *p = gettext( "Y/N/A/V" );
          char *s = "YNAV";
          if ( !strchr( s, ch ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 1024 ) )
          {
            p = strrchr( prompt, '(' );
            if ( p )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "Looking for %c in %s\n", ch, p );
              }
              while ( p[0] != ')' && p[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 1024 ) )
              {
                if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 )
                {
                  if ( p[0] == p[0] )
                  {
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "...testing %c/%c\n", p[0], s[0] );
                    }
                    if ( ch == p[0] )
                    {
                      ch = s[0];
                      break;
                    }
                    else
                      s++;
                  }
                }
                p++;
              }
            }
          }
        }
        }
        switch ( ch )
        {
        case 'A':
          *(int*)&de->bv = 0;
          HTUserMsg2( gettext( "'A'lways allowing from domain '%s'." ), &de->domain[0] );
          break;
          break;
        case 'V':
          *(int*)&de->bv = 1;
          HTUserMsg2( gettext( "ne'V'er allowing from domain '%s'." ), &de->domain[0] );
          break;
          break;
        case 'Y':
          HTInfoMsg( gettext( "Allowing this cookie." ) );
          break;
          break;
        default:
          switch ( ch )
          {
          case -1:
            if ( keymap[0] == 47 )
              break;
            break;
          default:
            if ( ( ch & 34816 ) == 0 )
            {
              if ( keymap[ ( ch & 2047 ) + 1 ] == 47 )
                break;
            }
            else
            {
            }
            break;
          }
          break;
          break;
        }
        break;
      }
      while ( ( ch & 255 ) != 47 );
      HTUserMsg( gettext( "Rejecting this cookie." ) );
    }
  }
  return 1;
}
int HTConfirmPostRedirect( char *Redirecting_url, int server_status )
{
  int result = -1;
  char *show_POST_url = 0;
  char *StatusInfo = 0;
  char *url = 0;
  int on_screen = 0;
  if ( server_status == 303 || server_status == 302 )
  {
    return 303;
  }
  if ( dump_output_immediately )
  {
    if ( server_status == 301 )
    {
      return 303;
    }
    return 0;
  }
  else
  if ( user_mode == 0 )
  {
    on_screen = 2;
    LYmove( LYlines + -2, 0 );
    HTSprintf0( &StatusInfo, gettext( "Server asked for %d redirection of POST content to" ), server_status );
    LYwaddnstr( LYwin, StatusInfo, strlen( StatusInfo ) );
    LYclrtoeol( );
    LYmove( LYlines + -1, 0 );
    HTSprintf0( &url, "URL: %.*s", LYcols <= 249 ? ( LYcols - ( LYShowScrollbar != 0 ) ) + -5 : 250, Redirecting_url );
    LYwaddnstr( LYwin, url, strlen( url ) );
    LYclrtoeol( );
    if ( server_status == 301 )
    {
      mustshow = 1;
      statusline( gettext( "P)roceed, use G)ET or C)ancel " ) );
      while ( result < 0 )
      {
        int c;
        if ( on_screen == 0 )
        {
          mustshow = 1;
          statusline( StatusInfo );
        }
        else
        if ( on_screen == 1 )
        {
          mustshow = 1;
          statusline( show_POST_url );
        }
        c = LYgetch_single( );
        switch ( c )
        {
        case 80:
          if ( show_POST_url )
          {
            free( show_POST_url );
            show_POST_url = 0;
          }
          result = 1;
          break;
        case 7:
        case 67:
          if ( show_POST_url )
          {
            free( show_POST_url );
            show_POST_url = 0;
          }
          result = 0;
          break;
        case 85:
          if ( user_mode )
          {
            if ( on_screen == 1 )
            {
              on_screen = 0;
            }
            else
            {
              on_screen = 1;
            }
          }
          break;
        case 71:
          if ( server_status == 301 )
          {
            if ( show_POST_url )
            {
              free( show_POST_url );
              show_POST_url = 0;
            }
            result = 303;
          }
          else
        default:
          if ( on_screen == 1 )
          {
            on_screen = 0;
          }
          else
          {
            on_screen = 2;
          }
          break;
        }
      }
      if ( StatusInfo )
      {
        free( StatusInfo );
        StatusInfo = 0;
      }
      if ( url )
      {
        free( url );
        url = 0;
      }
      return result;
    }
    else
    {
      mustshow = 1;
      statusline( gettext( "P)roceed, or C)ancel " ) );
    }
  }
  else
  {
    HTSprintf0( &StatusInfo, "%d %.*s", server_status, 251, gettext( "Redirection of POST content.  P)roceed, see U)RL, use G)ET or C)ancel" ) );
    HTSACopy( &show_POST_url, gettext( "Location: " ) );
    HTSACat( &show_POST_url, Redirecting_url );
  }
}
void LYSleepAlert( void )
{
  if ( !crawl && !traversal && LYCursesON )
  {
    napms( AlertSecs );
  }
  return;
}
void LYSleepDebug( void )
{
  if ( !crawl && !traversal && LYCursesON )
  {
    napms( DebugSecs );
  }
  return;
}
void LYSleepInfo( void )
{
  if ( !crawl && !traversal && LYCursesON )
  {
    napms( InfoSecs );
  }
  return;
}
void LYSleepMsg( void )
{
  if ( !crawl && !traversal && LYCursesON )
  {
    napms( MessageSecs );
  }
  return;
}
void LYSleepReplay( void )
{
  if ( !crawl && !traversal && LYCursesON )
  {
    napms( ReplaySecs );
  }
  return;
}
#if 0
#endif
