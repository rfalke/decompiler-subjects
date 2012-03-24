#include "HTAlert.c.h"
static char *sprint_bytes( char *s, off_t n, char *was_units );
static char *sprint_tbuf( char *s, long t );
static BOOLEAN conf_cancelled;
void HTAlert( char *Msg )
{
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "\nAlert!: %s\n\n", Msg );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fflush( TraceFP( ) );
  }
  mustshow = 1;
  user_message( gettext( "Alert!: %s" ), Msg );
  LYstore_message2( gettext( "Alert!: %s" ), Msg );
  if ( ( dump_output_immediately & 255 ) != 0 && ( dump_to_stderr & 255 ) != 0 )
  {
    fflush( *(int*)(135965440) );
    fprintf( *(int*)(135965404), gettext( "Alert!: %s" ), Msg );
    fputc( 10, *(int*)(135965404) );
    fflush( *(int*)(135965404) );
  }
  LYSleepAlert( );
  return;
}
void HTAlwaysAlert( char *extra_prefix, char *Msg )
{
  if ( ( dump_output_immediately & 255 ) == 0 && ( LYCursesON & 255 ) != 0 )
    HTAlert( Msg );
  else
  if ( extra_prefix == 0 )
  {
    fprintf( ( WWW_TraceFlag & 255 ) == 0 ? *(int*)(135965404) : *(int*)(135965440), gettext( "Alert!: %s" ), Msg == 0 ? "" : Msg );
    fflush( *(int*)(135965440) );
    LYstore_message2( gettext( "Alert!: %s" ), Msg );
    LYSleepAlert( );
    fputc( 10, ( WWW_TraceFlag & 255 ) == 0 ? *(int*)(135965404) : *(int*)(135965440) );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "\nAlert!: %s\n\n", Msg );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fflush( TraceFP( ) );
    }
    return;
  }
  fprintf( ( WWW_TraceFlag & 255 ) == 0 ? *(int*)(135965404) : *(int*)(135965440), "%s %s!\n", extra_prefix, Msg );
  fflush( *(int*)(135965440) );
  LYstore_message2( gettext( "Alert!: %s" ), Msg );
  LYSleepAlert( );
}
void HTInfoMsg( char *Msg )
{
  mustshow = 1;
  statusline( Msg );
  if ( Msg != 0 && ( Msg[0] & 255 ) != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
  if ( Msg2 != 0 && ( Msg2[0] & 255 ) != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "Info message: " );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), Msg2, Arg );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
  if ( Msg != 0 && ( Msg[0] & 255 ) != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
  if ( Msg2 != 0 && ( Msg2[0] & 255 ) != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "User message: " );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), Msg2, Arg );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
  if ( ( WWW_TraceFlag & 255 ) != 0 )
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
    if ( (int)(n << 32) >= 0 && ( (int)(n << 32) >= 1 || (unsigned int)(n & 0xFFFFFFFF) > 999 ) )
    {
      sprintf( s, "%.2g", (double)( n ) / (double)( kb_units ) );
    }
    sprintf( s, "%lld", n );
    u = HTProgressUnits( 1 );
  }
  else
    sprintf( s, "%lld", n );
  if ( was_units == 0 || was_units != u )
  {
    sprintf( s + strlen( s ), " %s", u );
    return u;
  }
  else
  {
    return u;
  }
}
char *sprint_tbuf( char *s, long t )
{
  if ( t > 3600 )
    sprintf( s, "%ldh%ldm%lds", ( ( t + (/*HI*/int)( -1851608123 * t ) ) >> 11 ) - ( t >> 31 ), ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) - ( 0 * 60 ), t - ( ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) * 60 ) );
    sprintf( s, "%ldm%lds", ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ), t - ( ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) * 60 ) );
    return s;
  else
  {
    if ( t > 60 )
    {
      sprintf( s, "%ldm%lds", ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ), t - ( ( ( ( t + (/*HI*/int)( -2004318071 * t ) ) >> 5 ) - ( t >> 31 ) ) * 60 ) );
      return s;
    }
    else
    {
      sprintf( s, "%ld sec", t );
      return s;
    }
  }
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
  if ( ( LYShowTransferRate & 255 ) == 0 )
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
  if ( (int)(bytes << 32) >= 0 && ( (int)(bytes << 32) >= 1 || (int)(bytes & 0xFFFFFFFF) >= 1 ) && 0 != 1 )
  {
    if ( (int)(transfer_rate << 32) < 1 && ( (int)(transfer_rate << 32) < 0 || (int)(transfer_rate & 0xFFFFFFFF) < 1 ) )
      (transfer_rate & 0xFFFFFFFF) = (long long)( (double)( bytes ) / ( now - first ) );
    {
      (transfer_rate << 32) = (long long)( (double)( bytes ) / ( now - first ) );
      (transfer_rate & 0xFFFFFFFF) = (long long)( (double)( bytes ) / ( now - first ) );
    }
    (transfer_rate << 32) = (long long)( (double)( bytes ) / ( now - first ) );
    total_last = total;
    if ( !(bit)( 0 ) )
      renew = 1;
    if ( renew != 0 )
    {
      if ( 0 != 1 )
      {
        last = now;
        if ( bytes_last != bytes )
          last_active = now;
        (transfer_rate & 0xFFFFFFFF) = (long long)( (double)( bytes ) / ( now - first ) );
        bytes_last = bytes;
      }
      if ( (int)(total << 32) >= 0 && ( (int)(total << 32) >= 1 || (int)(total & 0xFFFFFFFF) >= 1 ) )
      {
        (transfer_rate << 32) = (long long)( (double)( bytes ) / ( now - first ) );
        was_units = sprint_bytes( totalp, total, 0 );
      }
      else
        was_units = 0;
      sprint_bytes( bytesp, bytes, was_units );
      if ( (int)(total << 32) >= 0 && ( (int)(total << 32) >= 1 || (int)(total & 0xFFFFFFFF) >= 1 ) )
      {
        HTSprintf0( &line, gettext( "Read %s of %s of data" ), bytesp[0], totalp[0] );
      }
      HTSprintf0( &line, gettext( "Read %s of data" ), bytesp[0] );
      if ( LYTransferRate != 0 && (int)(transfer_rate << 32) >= 0 && ( (int)(transfer_rate << 32) >= 1 || (int)(transfer_rate & 0xFFFFFFFF) >= 1 ) )
      {
        sprint_bytes( transferp, transfer_rate, 0 );
        HTSprintf( &line, gettext( ", %s/sec" ), transferp[0] );
      }
      if ( LYTransferRate == 3 || LYTransferRate == 4 )
      {
        char tbuf[16];
        if ( !(bit)( 0 ) )
        {
          HTSprintf( &line, gettext( " (stalled for %s)" ), sprint_tbuf( tbuf, (int)( now - last_active ) ) );
        }
        if ( (int)(total << 32) >= 0 && ( (int)(total << 32) >= 1 || (int)(total & 0xFFFFFFFF) >= 1 ) && transfer_rate != 0 )
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
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "%s\n", line );
      }
    }
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
BOOLEAN HTLastConfirmCancelled( void )
{
  if ( ( conf_cancelled & 255 ) != 0 )
  {
    conf_cancelled = 0;
  }
  else
  {
  }
  return 1;
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
      return HTConfirmDefault( msg, dft );
    }
    HTSprintf( &msg2, "%s %s", msg, show );
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
  if ( ( ( *(short*)(*(int*)(toupper( msg_no[0] )) + ( msg_yes[0] * 2 )) & 512 ) == 0 ? msg_yes[0] : toupper( msg_no[0] ) ) == ( ( *(short*)(*(int*)(toupper( msg_no[0] )) + ( msg_no[0] * 2 )) & 512 ) == 0 ? msg_no[0] : toupper( msg_no[0] ) ) )
  {
    msg_yes = "yes";
    msg_no = "no";
  }
  conf_cancelled = 0;
  if ( ( dump_output_immediately & 255 ) != 0 )
  {
    if ( Dft == -2 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "Confirm: %s (%c/%c) ", Msg, msg_yes[0], msg_no[0] );
      }
    }
    else
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "Confirm: %s (%c) ", Msg, Dft == 1 ? msg_yes[0] : msg_no[0] );
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "- NO, not interactive.\n" );
    }
    result = 0;
    return result;
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
    {
      HTSprintf0( &msg, "%s (%c/%c) ", Msg, msg_yes[0], msg_no[0] );
    }
    HTSprintf0( &msg, "%s (%c) ", Msg, Dft == 1 ? msg_yes[0] : msg_no[0] );
    if ( LYTraceLogFP != 0 && ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "Confirm: %s", msg );
    }
    mustshow = 1;
    statusline( msg );
    if ( msg != 0 )
    {
      free( msg );
      msg = 0;
    }
    do
    {
      if ( result < 0 )
      {
        int c = LYgetch_single( );
        if ( ( ( *(short*)(*(int*)(toupper( msg_yes[0] )) + ( msg_yes[0] * 2 )) & 512 ) == 0 ? msg_yes[0] : toupper( msg_yes[0] ) ) == c )
        {
          result = 1;
        }
        else
        {
          if ( ( ( *(short*)(*(int*)(toupper( msg_no[0] )) + ( msg_no[0] * 2 )) & 512 ) == 0 ? msg_no[0] : toupper( msg_no[0] ) ) == c )
          {
            result = 0;
          }
          else
          if ( fallback_y != 0 && c == fallback_y )
          {
            result = 1;
          }
          else
          if ( fallback_n != 0 && c == fallback_n )
          {
            result = 0;
          }
          else
          {
            if ( c != 3 && c != 7 )
            {
              if ( c != -1 )
              {
                if ( ( c & 34816 ) != 0 )
                {
                  if ( ( c & 255 ) != 47 )
                  {
                  }
                }
                else
                if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                  goto B86;
              }
              else
              if ( keymap[0] != 47 )
              {
              }
            }
B86:            conf_cancelled = 1;
            result = 0;
          }
        }
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "- %s%s.\n", result == 0 ? "NO" : "YES", ( conf_cancelled & 255 ) == 0 ? "" : ", cancelled" );
        break;
      }
      else
        break;
    }
    while ( Dft != -2 );
    result = Dft;
  }
}
BOOLEAN HTConfirm( char *Msg )
{
  return HTConfirmDefault( Msg, -2 );
}
BOOLEAN confirm_post_resub( char *address, char *title, int if_imgmap, int if_file )
{
  int eax;
  size_t len1;
  char *msg = gettext( "Resubmit POST content to %s ?" );
  char buf[240];
  char *temp = 0;
  BOOLEAN res;
  size_t maxlen = LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) - 5;
  if ( address == 0 )
  {
  }
  else
  {
    if ( strncasecomp( address, "LYNXIMGMAP:", 11 ) == 0 )
    {
      if ( if_imgmap < 1 )
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
      if ( if_file < 1 )
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
    if ( ( dump_output_immediately & 255 ) != 0 )
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
        if ( temp != 0 )
        {
          free( temp );
          temp = 0;
        }
      }
      else
      {
        if ( temp != 0 )
        {
          free( temp );
          temp = 0;
        }
        if ( title != 0 && len1 + strlen( title ) <= maxlen )
        {
          sprintf( buf, msg, title );
        }
        else
        {
          temp = HTParse( address, "", 25 );
          if ( len1 + strlen( temp ) <= maxlen )
          {
            sprintf( buf, msg, temp );
            res = HTConfirm( buf );
            if ( temp != 0 )
            {
              free( temp );
              temp = 0;
            }
          }
          else
          {
            if ( temp != 0 )
            {
              free( temp );
              temp = 0;
            }
            temp = HTParse( address, "", 8 );
            if ( temp != 0 && ( temp[0] & 255 ) != 0 && len1 + strlen( temp ) <= maxlen )
            {
              sprintf( buf, msg, temp );
              res = HTConfirm( buf );
              if ( temp != 0 )
              {
                free( temp );
                temp = 0;
              }
            }
            else
            {
              if ( temp != 0 )
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
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
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
  if ( deflt != 0 )
    strncpy( Tmp, deflt, 199 );
  if ( ( dump_output_immediately & 255 ) == 0 )
    LYgetstr( Tmp, 0, 200, 0 );
  HTSACopy( &rep, Tmp );
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return rep;
}
char *HTPromptPassword( char *Msg )
{
  int eax;
  char *result = 0;
  char pw[120];
  pw[0] = 0;
  if ( ( dump_output_immediately & 255 ) == 0 )
  {
    mustshow = 1;
    statusline( Msg == 0 ? gettext( "Password: " ) : Msg );
    LYgetstr( pw, 1, 120, 0 );
    HTSACopy( &result, pw );
  }
  else
  {
    printf( "\n%s\n", gettext( "lynx: Password required!!!" ) );
    HTSACopy( &result, "" );
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
      return result;
    }
    else
    {
      return result;
    }
  }
}
void HTPromptUsernameAndPassword( char *Msg, char **username, char **password, BOOLEAN IsProxy )
{
  if ( ( IsProxy == 0 && authentication_info[0] != 0 && authentication_info[1] != 0 ) || ( IsProxy == 1 && proxyauth_info[0] != 0 && proxyauth_info[1] != 0 ) )
  {
    HTSACopy( username, IsProxy == 0 ? authentication_info[0] : proxyauth_info[0] );
    if ( IsProxy != 0 )
    {
      if ( proxyauth_info[0] != 0 )
      {
        free( proxyauth_info[0] );
        proxyauth_info[0] = 0;
      }
    }
    else
    if ( authentication_info[0] != 0 )
    {
      free( authentication_info[0] );
      authentication_info[0] = 0;
    }
    HTSACopy( password, IsProxy == 0 ? authentication_info[1] : proxyauth_info[1] );
    if ( IsProxy != 0 )
    {
      if ( proxyauth_info[1] != 0 )
      {
        free( proxyauth_info[1] );
        proxyauth_info[1] = 0;
      }
    }
    else
    {
      if ( authentication_info[1] != 0 )
      {
        free( authentication_info[1] );
        authentication_info[1] = 0;
      }
    }
  }
  else
  {
    if ( ( dump_output_immediately & 255 ) != 0 )
    {
      if ( ( IsProxy == 0 && authentication_info[0] != 0 ) || ( IsProxy == 1 && proxyauth_info[0] != 0 ) )
      {
        HTSACopy( username, IsProxy == 0 ? authentication_info[0] : proxyauth_info[0] );
        if ( IsProxy != 0 )
        {
          if ( proxyauth_info[0] != 0 )
          {
            free( proxyauth_info[0] );
            proxyauth_info[0] = 0;
          }
        }
        else
        if ( authentication_info[0] != 0 )
        {
          free( authentication_info[0] );
          authentication_info[0] = 0;
        }
      }
      else
        HTSACopy( username, "WWWuser" );
      if ( ( IsProxy == 0 && authentication_info[1] != 0 ) || ( IsProxy == 1 && proxyauth_info[1] != 0 ) )
      {
        HTSACopy( password, IsProxy == 0 ? authentication_info[1] : proxyauth_info[1] );
        if ( IsProxy != 0 )
        {
          if ( proxyauth_info[1] != 0 )
          {
            free( proxyauth_info[1] );
            proxyauth_info[1] = 0;
          }
        }
        else
        if ( authentication_info[1] != 0 )
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
      if ( ( IsProxy == 0 && authentication_info[0] != 0 ) || ( IsProxy == 1 && proxyauth_info[0] != 0 ) )
      {
        HTSACopy( username, IsProxy == 0 ? authentication_info[0] : proxyauth_info[0] );
        if ( IsProxy != 0 )
        {
          if ( proxyauth_info[0] != 0 )
          {
            free( proxyauth_info[0] );
            proxyauth_info[0] = 0;
          }
        }
        else
        if ( authentication_info[0] != 0 )
        {
          free( authentication_info[0] );
          authentication_info[0] = 0;
        }
      }
      if ( Msg != 0 )
      {
        username[0] = HTPrompt( Msg, username[0] );
      }
      else
      {
        username[0] = HTPrompt( gettext( "Username: " ), username[0] );
      }
      if ( ( IsProxy == 0 && authentication_info[1] != 0 ) || ( IsProxy == 1 && proxyauth_info[1] != 0 ) )
      {
        HTSACopy( password, IsProxy == 0 ? authentication_info[1] : proxyauth_info[1] );
        if ( IsProxy != 0 )
        {
          if ( proxyauth_info[1] != 0 )
          {
            free( proxyauth_info[1] );
            proxyauth_info[1] = 0;
          }
        }
        else
        {
          if ( authentication_info[1] != 0 )
          {
            free( authentication_info[1] );
            authentication_info[1] = 0;
          }
        }
      }
      else
      {
        if ( username[0] != 0 && ( username[0][0] & 255 ) != 0 )
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
  else
  if ( de->bv == ACCEPT_ALWAYS )
  {
  }
  else
  if ( de->bv == REJECT_ALWAYS )
  {
  }
  else
  if ( ( dump_output_immediately & 255 ) != 0 )
  {
  }
  else
  if ( ( LYAcceptAllCookies & 255 ) == 0 )
  {
    int namelen, valuelen, space_free, percentage;
    char *message = 0;
    space_free = ( ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) - LYstrCells( prompt ) ) + 10 ) - strlen( server );
    if ( space_free < 0 )
      space_free = 0;
    namelen = strlen( name );
    valuelen = strlen( value );
    if ( space_free < valuelen + namelen )
    {
      percentage = ( space_free * 100 ) / ( valuelen + namelen );
      namelen = ( (/*HI*/int)( 1374389535 * ( percentage * namelen ) ) >> 5 ) - ( ( percentage * namelen ) >> 31 );
      valuelen = ( (/*HI*/int)( 1374389535 * ( valuelen * percentage ) ) >> 5 ) - ( ( valuelen * percentage ) >> 31 );
    }
    HTSprintf( &message, prompt, server, namelen, name, valuelen, value );
    mustshow = 1;
    statusline( message );
    if ( message != 0 )
    {
      free( message );
      while ( 1 )
      {
        if ( ( LYAcceptAllCookies & 255 ) != 0 )
          ch = 65;
        else
        {
          ch = LYgetch_single( );
        {
          char *p = gettext( "Y/N/A/V" );
          char *s = "YNAV";
          if ( strchr( s, ch ) == 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 1024 ) != 0 )
          {
            p = strrchr( prompt, 40 );
            if ( p != 0 )
            {
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "Looking for %c in %s\n", ch, p );
              }
              while ( p[0] != ')' && ( p[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 1024 ) != 0 )
              {
                if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 1024 ) != 0 )
                {
                  if ( p[0] == ( ( *(short*)(*(int*)(toupper( p[0] )) + ( p[0] * 2 )) & 512 ) == 0 ? p[0] : toupper( p[0] ) ) )
                  {
                    if ( ( WWW_TraceFlag & 255 ) != 0 )
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
          if ( ch == 3 || ch == 7 )
          {
            HTUserMsg( gettext( "Rejecting this cookie." ) );
            break;
          }
          else
          {
            if ( ch != -1 )
            {
              if ( ( ch & 34816 ) != 0 )
              {
                if ( ( ch & 255 ) == 47 )
                  continue;
                else
                {
                }
              }
              else
              {
                if ( keymap[ ( ch & 2047 ) + 1 ] == 47 )
                  continue;
                else
                {
                }
              }
            }
            else
            {
              if ( keymap[0] == 47 )
                continue;
              else
              {
              }
            }
          }
          break;
          break;
        case 65:
          de->bv = ACCEPT_ALWAYS;
          HTUserMsg2( gettext( "'A'lways allowing from domain '%s'." ), de->domain );
          break;
          break;
        default:
          break;
        case 86:
          de->bv = REJECT_ALWAYS;
          HTUserMsg2( gettext( "ne'V'er allowing from domain '%s'." ), de->domain );
          break;
          break;
        case 89:
          HTInfoMsg( gettext( "Allowing this cookie." ) );
          break;
          break;
        }
      }
    }
  }
  return LYSetCookies;
}
int HTConfirmPostRedirect( char *Redirecting_url, int server_status )
{
  int result = -1;
  char *show_POST_url = 0;
  char *StatusInfo = 0;
  char *url = 0;
  int on_screen = 0;
  if ( server_status == 303 )
  {
    return 303;
  }
  if ( server_status == 302 )
  {
    return 303;
  }
  if ( ( dump_output_immediately & 255 ) != 0 )
  {
    if ( server_status == 301 )
    {
      return 303;
    }
    return 0;
  }
  else
  {
    if ( user_mode == 0 )
    {
      on_screen = 2;
      LYmove( LYlines - 2, 0 );
      HTSprintf0( &StatusInfo, gettext( "Server asked for %d redirection of POST content to" ), server_status );
      LYwaddnstr( LYwin, StatusInfo, strlen( StatusInfo ) );
      LYclrtoeol( );
      LYmove( LYlines - 1, 0 );
      if ( LYcols > 249 )
      {
        HTSprintf0( &url, "URL: %.*s", 250, Redirecting_url );
        LYwaddnstr( LYwin, url, strlen( url ) );
        LYclrtoeol( );
        if ( server_status == 301 )
        {
          mustshow = 1;
          statusline( gettext( "P)roceed, use G)ET or C)ancel " ) );
        }
        mustshow = 1;
        statusline( gettext( "P)roceed, or C)ancel " ) );
      }
      else
      {
        HTSprintf0( &url, "URL: %.*s", 250, Redirecting_url );
        LYwaddnstr( LYwin, url, strlen( url ) );
        LYclrtoeol( );
      }
    }
    else
    {
      if ( server_status != 301 )
      {
        HTSprintf0( &StatusInfo, "%d %.*s", server_status, 251, gettext( "Redirection of POST content.  P)roceed, see U)RL, use G)ET or C)ancel" ) );
        HTSACopy( &show_POST_url, gettext( "Location: " ) );
        HTSACat( &show_POST_url, Redirecting_url );
      }
      else
      {
        HTSprintf0( &StatusInfo, "%d %.*s", server_status, 251, gettext( "Redirection of POST content.  P)roceed, see U)RL, use G)ET or C)ancel" ) );
        HTSACopy( &show_POST_url, gettext( "Location: " ) );
        HTSACat( &show_POST_url, Redirecting_url );
      }
    }
  }
}
void LYSleepAlert( void )
{
  if ( ( crawl & 255 ) == 0 && ( traversal & 255 ) == 0 && ( LYCursesON & 255 ) != 0 )
  {
    napms( &AlertSecs );
  }
  return;
}
void LYSleepDebug( void )
{
  if ( ( crawl & 255 ) == 0 && ( traversal & 255 ) == 0 && ( LYCursesON & 255 ) != 0 )
  {
    napms( &DebugSecs );
  }
  return;
}
void LYSleepInfo( void )
{
  if ( ( crawl & 255 ) == 0 && ( traversal & 255 ) == 0 && ( LYCursesON & 255 ) != 0 )
  {
    napms( &InfoSecs );
  }
  return;
}
void LYSleepMsg( void )
{
  if ( ( crawl & 255 ) == 0 && ( traversal & 255 ) == 0 && ( LYCursesON & 255 ) != 0 )
  {
    napms( &MessageSecs );
  }
  return;
}
void LYSleepReplay( void )
{
  if ( ( crawl & 255 ) == 0 && ( traversal & 255 ) == 0 && ( LYCursesON & 255 ) != 0 )
  {
    napms( &ReplaySecs );
  }
  return;
}
