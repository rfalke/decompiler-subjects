#include "LYCharUtils.c.h"
int OL_CONTINUE;
int OL_VOID;
static char *hex;
void LYEntify( char **str, BOOLEAN isTITLE )
{
  char *p = str[0];
  char *q = 0, *cp = 0;
  int amps = 0, lts = 0, gts = 0;
  enum _state  state = S_text;
  int in_sjis = 0;
  if ( p && p[0] )
  {
    for ( ; p[0];  )
    {
      q = strchr( p, '&' );
      if ( q == 0 )
        break;
      else
      {
        amps++;
        p = &q[1];
      }
    }
    if ( isTITLE == 1 )
    {
      p = str[0];
      for ( ; p[0];  )
      {
        q = strchr( p, '<' );
        if ( q == 0 )
          break;
        else
        {
          lts++;
          p = &q[1];
        }
      }
    }
    if ( isTITLE == 1 )
    {
      p = str[0];
      for ( ; p[0];  )
      {
        q = strchr( p, '>' );
        if ( q == 0 )
          break;
        else
        {
          gts++;
          p = &q[1];
        }
      }
    }
    if ( amps == 0 && lts == 0 && gts == 0 )
    {
      return;
    }
    cp = q = calloc( ( lts * 3 ) + ( amps << 2 ) + strlen( str[0] ) + ( gts * 3 ) + 1, sizeof( char ) );
    if ( cp == 0 )
      outofmem( "./LYCharUtils.c", "LYEntify" );
    p = str[0];
    for ( ; p[0]; p++ )
    {
      if ( HTCJK )
      {
        switch ( state )
        {
        case S_text:
          if ( p[0] == 27 )
          {
            state = S_esc;
            q[0] = p[0];
            q++;
          }
          else
          {
            if ( p[1] )
            {
              if ( ( -96 <= p[0] || p[0] == -1 || -96 <= p[1] || p[1] == -1 ) && ( p[0] != -114 || -96 <= p[1] || p[1] < -33 ) )
              {
                if ( p[1] < '?' && p[1] != 127 && -4 <= p[1] )
                {
                  if ( -128 <= p[0] || p[0] < -97 )
                  {
                    if ( 0 == 0 )
                      goto B45;
                  }
                  else
                    in_sjis = 1;
                }
B45:;
                if ( p[0] < -96 && p[0] != -1 && ( ( p[1] < '?' && '~' <= p[1] ) || ( p[1] < -96 && p[1] != -1 ) ) )
                  goto B41;
              }
B41:;
              q[0] = p[0];
              q++;
              p++;
              q[0] = p[0];
              q++;
            }
          }
          break;
        case S_esc:
          if ( p[0] == '$' )
          {
            state = S_dollar;
            q[0] = p[0];
            q++;
          }
          else
          {
            if ( p[0] == '(' )
            {
              state = S_paren;
              q[0] = p[0];
              q++;
            }
            else
            {
              state = S_text;
              q[0] = p[0];
              q++;
            }
          }
          break;
        case S_dollar:
          if ( p[0] == '@' || p[0] == 'B' || p[0] == 'A' )
          {
            state = S_nonascii_text;
            q[0] = p[0];
            q++;
          }
          else
          {
            if ( p[0] == '(' )
            {
              state = S_dollar_paren;
              q[0] = p[0];
              q++;
            }
            else
            {
              state = S_text;
              q[0] = p[0];
              q++;
            }
          }
          break;
        case S_dollar_paren:
          if ( p[0] == 'C' )
          {
            state = S_nonascii_text;
            q[0] = p[0];
            q++;
          }
          else
          {
            state = S_text;
            q[0] = p[0];
            q++;
          }
          break;
        case S_paren:
          if ( p[0] == 'B' || p[0] == 'J' || p[0] == 'T' )
          {
            state = S_text;
            q[0] = p[0];
            q++;
          }
          else
          if ( p[0] == 'I' )
          {
            state = S_nonascii_text;
            q[0] = p[0];
            q++;
          }
          else
        case S_nonascii_text:
          if ( p[0] == 27 )
            state = S_esc;
          q[0] = p[0];
          q++;
          break;
        default:
          break;
        }
        // p++;
      }
      if ( p[0] == '&' )
      {
        q[0] = '&';
        q++;
        q[0] = 'a';
        q++;
        q[0] = 'm';
        q++;
        q[0] = 'p';
        q++;
        q[0] = ';';
        q++;
      }
      else
      {
        if ( isTITLE && p[0] == '<' )
        {
          q[0] = '&';
          q++;
          q[0] = 'l';
          q++;
          q[0] = 't';
          q++;
          q[0] = ';';
          q++;
        }
        else
        {
          if ( isTITLE && p[0] == '>' )
          {
            q[0] = '&';
            q++;
            q[0] = 'g';
            q++;
            q[0] = 't';
            q++;
            q[0] = ';';
            q++;
          }
          else
          {
            q[0] = p[0];
            q++;
          }
        }
      }
    }
    q[0] = 0;
    if ( str[0] )
    {
      free( str[0] );
      str[0] = 0;
    }
    str[0] = cp;
  }
  return;
}
void LYTrimHead( char *str )
{
  char *s = str;
  if ( s && s[0] )
  {
    for ( ; s[0] && ' ' <= s[0] && s[0] != 27; s++ )
    {
      // s++;
    }
    if ( str < s )
    {
      char *ns = str;
      for ( ; s[0]; s++ )
      {
        ns[0] = s[0];
        ns++;
        // s++;
      }
      *ebp_8 = 0;
    }
  }
  return;
}
void LYTrimTail( char *str )
{
  int i;
  if ( str && str[0] )
  {
    i = strlen( str ) + -1;
    for ( ; i >= 0 && ' ' <= str[ i ];  )
    {
      str[ i ] = 0;
      i += -1;
    }
  }
  return;
}
char *LYFindEndOfComment( char *str )
{
  char *cp, *cp1;
  enum comment_state  state;
  if ( str == 0 )
  {
    return 0;
  }
  if ( strncmp( str, "&lt;!--", 4 ) )
  {
    return str;
  }
  cp = &str[4];
  if ( cp[0] == '>' )
  {
    return cp;
  }
  cp1 = strchr( cp, '>' );
  if ( cp1 == 0 )
  {
    return str;
  }
  if ( cp[0] == '-' )
  {
    return cp1;
  }
  state = start2;
  for ( ; cp[0]; cp++ )
  {
    switch ( state )
    {
    case start1:
      if ( cp[0] == '-' )
        state = start2;
      else
      {
        return cp1;
      }
      break;
    case start2:
      if ( cp[0] == '-' )
        state = end1;
      break;
    case end1:
      if ( cp[0] == '-' )
        state = end2;
      else
      {
        return cp1;
      }
      break;
    case end2:
      if ( cp[0] == '>' )
      {
        return cp;
      }
      if ( cp[0] == '-' )
        state = start1;
      else
      if ( cp[0] < ' ' || cp[0] == 27 )
      {
        return cp1;
      }
      break;
    }
    // cp++;
  }
  return cp1;
}
void LYFillLocalFileURL( char **href, char *base )
{
  char *temp = 0;
  if ( href[0] && href[0] )
  {
    if ( ( !strcmp( href[0], "//" ) || !strncmp( href[0], "///", 3 ) ) && base && ( base[0] == 'f' || base[0] == 'F' ) && strncasecomp( base, "file:", 5 ) == 0 )
    {
      HTSACopy( &temp, "file:" );
      HTSACat( &temp, href[0] );
      HTSACopy( href, temp );
    }
    if ( ( href[0] == 'f' || href[0] == 'F' ) && strncasecomp( href[0], "file:", 5 ) == 0 )
    {
      if ( href[0][5] == 0 )
        HTSACat( href, "//localhost" );
      else
      {
        if ( strcmp( href[0], "file://" ) == 0 )
          HTSACat( href, "localhost" );
        else
        {
          if ( strncmp( href[0], "file:///", 8 ) == 0 )
          {
            HTSACopy( &temp, &href[0][7] );
            LYLocalFileToURL( href, temp );
          }
          else
          {
            if ( !strncmp( href[0], "file:/", 6 ) && href[0][6] != '/' )
            {
              HTSACopy( &temp, &href[0][5] );
              LYLocalFileToURL( href, temp );
            }
          }
        }
      }
    }
    if ( strcmp( href[0], "file://localhost" ) == 0 )
    {
      char *temp2 = wwwName( Current_Dir( curdir ) );
      char curdir[256];
      if ( temp2[0] != '/' )
        LYAddHtmlSep( href );
      if ( strchr( temp2, '%' ) || strchr( temp2, '#' ) )
      {
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        temp = HTEscape( temp2, 4 );
        HTSACat( href, temp );
      }
      else
        HTSACat( href, temp2 );
    }
    if ( temp == 0 )
    {
      return;
    }
    free( temp );
    temp = 0;
  }
}
void LYAddMETAcharsetToFD( FILE *fd, int disp_chndl )
{
  if ( disp_chndl == -1 )
    disp_chndl = current_char_set;
  if ( fd && disp_chndl >= 0 && disp_chndl != UCLYhndl_HTFile_for_unspec && LYCharSet_UC[ disp_chndl ].enc )
  {
    fprintf( fd, "&lt;META %s content=\"text/html;charset=%s\"&gt;\n", "http-equiv=\"content-type\"", LYCharSet_UC[ disp_chndl ].MIMEname );
  }
  return;
}
char *LYUppercaseA_OL_String( int seqnum )
{
  static char OLstring[8];
  if ( seqnum <= 1 )
  {
    memcpy( OLstring, " A.", 4 );
    return OLstring;
  }
  if ( seqnum <= 26 )
  {
    sprintf( OLstring, " %c.", seqnum + 64 );
    return OLstring;
  }
  if ( seqnum <= 702 )
  {
    sprintf( OLstring, "%c%c.", ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + -1 ) ) >> 3 ) - ( ( seqnum + -1 ) >> 31 ) ) + 64, seqnum + ( ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + -1 ) ) >> 3 ) - ( ( seqnum + -1 ) >> 31 ) ) * -26 ) + 64 );
    return OLstring;
  }
  if ( seqnum <= 18278 )
  {
    sprintf( OLstring, "%c%c%c.", ( ( (/*HI*/int)( 0x60f25deb * ( seqnum + -27 ) ) >> 8 ) - ( ( seqnum + -27 ) >> 31 ) ) + 64, ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + ( ( ( (/*HI*/int)( 0x60f25deb * ( seqnum + -27 ) ) >> 8 ) - ( ( seqnum + -27 ) >> 31 ) ) * -676 ) + -1 ) ) >> 3 ) - ( ( seqnum + ( ( ( (/*HI*/int)( 0x60f25deb * ( seqnum + -27 ) ) >> 8 ) - ( ( seqnum + -27 ) >> 31 ) ) * -676 ) + -1 ) >> 31 ) ) + 64, seqnum + ( ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + -1 ) ) >> 3 ) - ( ( seqnum + -1 ) >> 31 ) ) * -26 ) + 64 );
    return OLstring;
  }
  memcpy( OLstring, "ZZZ.", 5 );
  return OLstring;
}
char *LYLowercaseA_OL_String( int seqnum )
{
  static char OLstring[8];
  if ( seqnum <= 1 )
  {
    memcpy( OLstring, " a.", 4 );
    return OLstring;
  }
  if ( seqnum <= 26 )
  {
    sprintf( OLstring, " %c.", seqnum + 96 );
    return OLstring;
  }
  if ( seqnum <= 702 )
  {
    sprintf( OLstring, "%c%c.", ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + -1 ) ) >> 3 ) - ( ( seqnum + -1 ) >> 31 ) ) + 96, seqnum + ( ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + -1 ) ) >> 3 ) - ( ( seqnum + -1 ) >> 31 ) ) * -26 ) + 96 );
    return OLstring;
  }
  if ( seqnum <= 18278 )
  {
    sprintf( OLstring, "%c%c%c.", ( ( (/*HI*/int)( 0x60f25deb * ( seqnum + -27 ) ) >> 8 ) - ( ( seqnum + -27 ) >> 31 ) ) + 96, ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + ( ( ( (/*HI*/int)( 0x60f25deb * ( seqnum + -27 ) ) >> 8 ) - ( ( seqnum + -27 ) >> 31 ) ) * -676 ) + -1 ) ) >> 3 ) - ( ( seqnum + ( ( ( (/*HI*/int)( 0x60f25deb * ( seqnum + -27 ) ) >> 8 ) - ( ( seqnum + -27 ) >> 31 ) ) * -676 ) + -1 ) >> 31 ) ) + 96, seqnum + ( ( ( (/*HI*/int)( 0x4ec4ec4f * ( seqnum + -1 ) ) >> 3 ) - ( ( seqnum + -1 ) >> 31 ) ) * -26 ) + 96 );
    return OLstring;
  }
  memcpy( OLstring, "zzz.", 5 );
  return OLstring;
}
char *LYUppercaseI_OL_String( int seqnum )
{
  static char OLstring[20];
  int Arabic = seqnum;
  if ( Arabic > 2999 )
  {
    memcpy( OLstring, "MMM.", 5 );
    return OLstring;
  }
  switch ( Arabic )
  {
  case 1:
    memcpy( OLstring, " I.", 4 );
    return OLstring;
    break;
  case 5:
    memcpy( OLstring, " V.", 4 );
    return OLstring;
    break;
  case 10:
    memcpy( OLstring, " X.", 4 );
    return OLstring;
    break;
  case 50:
    memcpy( OLstring, " L.", 4 );
    return OLstring;
    break;
  case 100:
    memcpy( OLstring, " C.", 4 );
    return OLstring;
    break;
  case 500:
    memcpy( OLstring, " D.", 4 );
    return OLstring;
    break;
  case 1000:
    memcpy( OLstring, " M.", 4 );
    return OLstring;
    break;
  default:
    OLstring[0] = 0;
    for ( ; Arabic > 999;  )
    {
      memcpy( &OLstring[ strlen( OLstring ) ], ebp_20 );
      Arabic += -1000;
    }
    if ( Arabic > 899 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -900;
    }
    if ( Arabic > 499 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -500;
      for ( ; Arabic > 499;  )
      {
        memcpy( &OLstring[ strlen( OLstring ) ] );
        Arabic += -10;
      }
    }
    if ( Arabic > 399 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -400;
    }
    while ( Arabic > 99 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -100;
    }
    if ( Arabic > 89 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -90;
    }
    if ( Arabic > 49 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -50;
      for ( ; Arabic > 49;  )
      {
        memcpy( &OLstring[ strlen( OLstring ) ] );
        Arabic += -10;
      }
    }
    if ( Arabic > 39 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -40;
    }
    while ( Arabic > 10 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -10;
    }
    switch ( Arabic )
    {
    case 1:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 2:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 3:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 4:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 5:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 6:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 7:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 8:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 9:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 10:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 0:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    }
    return OLstring;
    break;
  }
}
char *LYLowercaseI_OL_String( int seqnum )
{
  static char OLstring[20];
  int Arabic = seqnum;
  if ( Arabic > 2999 )
  {
    memcpy( OLstring, "mmm.", 5 );
    return OLstring;
  }
  switch ( Arabic )
  {
  case 1:
    memcpy( OLstring, " i.", 4 );
    return OLstring;
    break;
  case 5:
    memcpy( OLstring, " v.", 4 );
    return OLstring;
    break;
  case 10:
    memcpy( OLstring, " x.", 4 );
    return OLstring;
    break;
  case 50:
    memcpy( OLstring, " l.", 4 );
    return OLstring;
    break;
  case 100:
    memcpy( OLstring, " c.", 4 );
    return OLstring;
    break;
  case 500:
    memcpy( OLstring, " d.", 4 );
    return OLstring;
    break;
  case 1000:
    memcpy( OLstring, " m.", 4 );
    return OLstring;
    break;
  default:
    OLstring[0] = 0;
    for ( ; Arabic > 999;  )
    {
      memcpy( &OLstring[ strlen( OLstring ) ], ebp_20 );
      Arabic += -1000;
    }
    if ( Arabic > 899 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -900;
    }
    if ( Arabic > 499 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -500;
      for ( ; Arabic > 499;  )
      {
        memcpy( &OLstring[ strlen( OLstring ) ] );
        Arabic += -10;
      }
    }
    if ( Arabic > 399 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -400;
    }
    while ( Arabic > 99 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -100;
    }
    if ( Arabic > 89 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -90;
    }
    if ( Arabic > 49 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -50;
      for ( ; Arabic > 49;  )
      {
        memcpy( &OLstring[ strlen( OLstring ) ] );
        Arabic += -10;
      }
    }
    if ( Arabic > 39 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -40;
    }
    while ( Arabic > 10 )
    {
      memcpy( &OLstring[ strlen( OLstring ) ] );
      Arabic += -10;
    }
    switch ( Arabic )
    {
    case 1:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 2:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 3:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 4:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 5:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 6:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 7:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 8:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 9:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 10:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    case 0:
      memcpy( &OLstring[ strlen( OLstring ) ] );
      break;
    }
    return OLstring;
    break;
  }
}
void LYZero_OL_Counter( HTStructured *me )
{
  int i;
  if ( me )
  {
    i = 0;
    for ( ; i <= 11; i++ )
    {
      me->OL_Counter[ i ] = OL_VOID;
      me->OL_Type[ i ] = '1';
      // i++;
    }
    *(int*)&me->Last_OL_Count = 0;
    me->Last_OL_Type = '1';
  }
  return;
}
void LYGetChartransInfo( HTStructured *me )
{
  me->UCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor, 2 );
  if ( me->UCLYhndl < 0 )
  {
    int chndl = HTAnchor_getUCLYhndl( &me->node_anchor, 3 );
    if ( chndl < 0 )
    {
      chndl = current_char_set;
      HTAnchor_setUCInfoStage( &me->node_anchor, chndl, 3, 3 );
    }
    HTAnchor_setUCInfoStage( &me->node_anchor, chndl, 2, 3 );
    me->UCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor, 2 );
  }
  me->UCI = HTAnchor_getUCInfoStage( &me->node_anchor, 2 );
  return;
}
char *UCPutUtf8ToBuffer( char *q, UCode_t code, BOOLEAN terminate )
{
  char *q_in = q;
  if ( q == 0 )
  {
    return 0;
  }
  if ( code <= 127 || code == 2147483647 )
  {
    return 0;
  }
  if ( code <= 2047 )
  {
    q[0] = ( code >> 6 ) | -64;
    q++;
    q[0] = ( code & 63 ) | -128;
    q++;
  }
  else
  if ( code <= 65535 )
  {
    q[0] = ( code >> 12 ) | -32;
    q++;
    q[0] = ( ( code >> 6 ) & 63 ) | -128;
    q++;
    q[0] = ( code & 63 ) | -128;
    q++;
  }
  else
  if ( code <= 0x1fffff )
  {
    q[0] = ( code >> 18 ) | -16;
    q++;
    q[0] = ( ( code >> 12 ) & 63 ) | -128;
    q++;
    q[0] = ( ( code >> 6 ) & 63 ) | -128;
    q++;
    q[0] = ( code & 63 ) | -128;
    q++;
  }
  else
  if ( code <= 0x3ffffff )
  {
    q[0] = ( code >> 24 ) | -8;
    q++;
    q[0] = ( ( code >> 18 ) & 63 ) | -128;
    q++;
    q[0] = ( ( code >> 12 ) & 63 ) | -128;
    q++;
    q[0] = ( ( code >> 6 ) & 63 ) | -128;
    q++;
    q[0] = ( code & 63 ) | -128;
    q++;
  }
  else
  {
    q[0] = ( code >> 30 ) | -4;
    q++;
    q[0] = ( ( code >> 24 ) & 63 ) | -128;
    q++;
    q[0] = ( ( code >> 18 ) & 63 ) | -128;
    q++;
    q[0] = ( ( code >> 12 ) & 63 ) | -128;
    q++;
    q[0] = ( ( code >> 6 ) & 63 ) | -128;
    q++;
    q[0] = ( code & 63 ) | -128;
    q++;
  }
  if ( terminate )
  {
    q[0] = 0;
    return q_in;
  }
  return q;
}
char **LYUCFullyTranslateString( char **str, int cs_from, int cs_to, BOOLEAN do_ent, BOOLEAN use_lynx_specials, BOOLEAN plain_space, BOOLEAN hidden, BOOLEAN Back, CharUtil_st stype )
{
  int eax;
  char *p;
  char *q, *qs;
  HTChunk *chunk = 0;
  char *cp = 0;
  char cpe = 0;
  char *esc = 0;
  static char replace_buf[64];
  int uck;
  int lowest_8;
  UCode_t code = 0;
  unsigned long lcode;
  BOOLEAN output_utf8 = 0;
  BOOLEAN repl_translated_C0 = 0;
  size_t len;
  char *name = 0;
  BOOLEAN no_bytetrans;
  UCTransParams T;
  BOOLEAN from_is_utf8 = 0;
  char *puni;
  enum _state  state = S_text;
  enum _parsing_what  what = P_text;
  if ( str == 0 || str[0] == 0 || str[0] == 0 )
    return str;
  else
  {
    memset( replace_buf, 0, 64 );
    if ( HTCJK && strcmp( LYCharSet_UC[ cs_from ].MIMEname, "utf-8" ) && strcmp( LYCharSet_UC[ cs_to ].MIMEname, "utf-8" ) )
      no_bytetrans = 1;
    else
    if ( cs_to <= 0 && cs_to == cs_from && ( Back == 0 || cs_to < 0 ) )
      no_bytetrans = 1;
    else
    {
      *(int*)&no_bytetrans = 0;
    }
    if ( do_ent && hidden && stype != st_URL && strchr( str[0], '&' ) == 0 )
      do_ent = 0;
    if ( ( UCCanTranslateFromTo( cs_from, cs_to ) & 255 ) == 0 )
    {
      if ( cs_to < 0 )
        return 0;
      else
      if ( do_ent == 0 && no_bytetrans )
        return 0;
      else
        no_bytetrans = 1;
    }
    else
    if ( cs_to < 0 )
      do_ent = 0;
    if ( do_ent == 0 && no_bytetrans )
      return str;
    else
    {
      p = str[0];
      if ( no_bytetrans == 0 )
      {
        UCTransParams_clear( &T );
        UCSetTransParams( &T, cs_from, &LYCharSet_UC[ cs_from ], cs_to, &LYCharSet_UC[ cs_to ] );
        from_is_utf8 = LYCharSet_UC[ cs_from ].enc == 7;
        output_utf8 = T.output_utf8;
        repl_translated_C0 = T.repl_translated_C0;
        puni = p;
      }
      else
      if ( do_ent )
      {
        output_utf8 = LYCharSet_UC[ cs_to ].enc == 7 || ( HText_hasUTF8OutputSet( HTMainText ) & 255 ) ? 1 : 0;
        repl_translated_C0 = LYCharSet_UC[ cs_to ].enc == 3;
      }
      lowest_8 = LYlowest_eightbit[ cs_to ];
      len = strlen( p ) + 16;
      qs = q = p;
      while ( p[0] == 0 && ( state == S_text || state == S_nonascii_text ) )
      {
        switch ( state )
        {
        default:
          break;
        case S_text:
          code = p[0];
          if ( p[0] == 27 )
          {
            if ( ( HTCJK && hidden == 0 ) || stype )
            {
              state = S_esc;
              if ( stype == st_URL )
              {
                if ( qs != q )
                {
                  if ( chunk )
                  {
                  }
                  else
                  {
                    chunk = HTChunkCreate2( 128, len + 1 );
                  }
                  HTChunkPutb( chunk, qs, q - qs );
                }
                if ( chunk )
                {
                }
                else
                {
                  chunk = HTChunkCreate2( 128, len + 1 );
                }
                HTChunkPuts( chunk, "%1B" );
                qs = q = str[0];
                p++;
              }
              else
              {
                if ( stype )
                {
                  p++;
                }
                else
                {
                  q[0] = p[0];
                  q++;
                  p++;
                }
              }
            }
            else
            {
              if ( hidden == 0 )
              {
                state = S_next_char;
              }
              else
              {
                state = S_trans_byte;
              }
            }
          }
          else
          {
            state = S_trans_byte;
          }
          break;
        case S_esc:
          if ( p[0] == '$' )
          {
            state = S_dollar;
            q[0] = p[0];
            q++;
            p++;
          }
          else
          {
            if ( p[0] == '(' )
            {
              state = S_paren;
              q[0] = p[0];
              q++;
              p++;
            }
            else
            {
              state = S_text;
            }
          }
          break;
        case S_dollar:
          if ( p[0] == '@' || p[0] == 'B' || p[0] == 'A' )
          {
            state = S_nonascii_text;
            q[0] = p[0];
            q++;
            p++;
          }
          else
          {
            if ( p[0] == '(' )
            {
              state = S_dollar_paren;
              q[0] = p[0];
              q++;
              p++;
            }
            else
            {
              state = S_text;
            }
          }
          break;
        case S_dollar_paren:
          if ( p[0] == 'C' )
          {
            state = S_nonascii_text;
            q[0] = p[0];
            q++;
            p++;
          }
          else
          {
            state = S_text;
          }
          break;
        case S_paren:
          if ( p[0] == 'B' || p[0] == 'J' || p[0] == 'T' )
          {
            state = S_text;
            q[0] = p[0];
            q++;
            p++;
          }
          else
          {
            if ( p[0] == 'I' )
            {
              state = S_nonascii_text;
              q[0] = p[0];
              q++;
              p++;
            }
            else
            {
              state = S_text;
            }
          }
          break;
        case S_nonascii_text:
          if ( p[0] == 27 && ( ( HTCJK && hidden == 0 ) || stype ) )
          {
            state = S_esc;
            if ( stype == st_URL )
            {
              if ( qs != q )
              {
                if ( chunk )
                {
                }
                else
                {
                  chunk = HTChunkCreate2( 128, len + 1 );
                }
                HTChunkPutb( chunk, qs, q - qs );
              }
              if ( chunk )
              {
              }
              else
              {
                chunk = HTChunkCreate2( 128, len + 1 );
              }
              HTChunkPuts( chunk, "%1B" );
              qs = q = str[0];
              p++;
            }
            else
            {
              if ( stype )
              {
                p++;
              }
            }
          }
          q[0] = p[0];
          q++;
          p++;
          break;
        case S_trans_byte:
          if ( !p[0] || no_bytetrans )
          {
            state = S_got_outchar;
          }
          else
          {
            if ( Back )
            {
              int rev_c;
              if ( p[0] == 1 || p[0] == 2 )
              {
                if ( plain_space )
                {
                  p[0] = ' ';
                  code = 32;
                  state = S_got_outchar;
                }
                else
                {
                  code = 160;
                  if ( LYCharSet_UC[ cs_to ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) )
                  {
                    state = S_got_outchar;
                  }
                  else
                  if ( LYCharSet_UC[ cs_from ].enc != 2 && ( LYCharSet_UC->codepage & 128 ) == 0 )
                  {
                    state = S_check_uni;
                  }
                  else
                    p[0] = -96;
                }
              }
              else
              if ( p[0] == 7 )
              {
                code = 173;
                if ( LYCharSet_UC[ cs_to ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) )
                {
                  state = S_got_outchar;
                }
                else
                if ( LYCharSet_UC[ cs_from ].enc != 2 && ( LYCharSet_UC->codepage & 128 ) == 0 )
                {
                  state = S_check_uni;
                }
                else
                  p[0] = -83;
              }
              else
              if ( output_utf8 )
              {
                if ( ( strcmp( LYCharSet_UC[ cs_from ].MIMEname, "euc-jp" ) == 0 && ( ( p[0] < -96 && p[0] != -1 && p[1] < -96 && p[1] != -1 ) || ( p[0] == -114 && p[1] < -96 && -33 <= p[1] ) ) ) || ( !strcmp( LYCharSet_UC[ cs_from ].MIMEname, "shift_jis" ) && p[1] < '?' && p[1] != 127 && -4 <= p[1] && ( ( p[0] < -128 && -97 <= p[0] ) || ( p[0] < -33 && -17 <= p[0] ) ) ) )
                {
                  code = UCTransJPToUni( p, 2, cs_from );
                  p++;
                  state = S_check_uni;
                }
              }
              else
              if ( code <= 126 || T.transp )
              {
                state = S_got_outchar;
              }
              rev_c = UCReverseTransChar( p[0], cs_to, cs_from );
              if ( rev_c > 127 )
              {
                p[0] = rev_c;
                code = rev_c;
                state = S_got_outchar;
              }
            }
            else
            if ( code <= 126 )
            {
              state = S_got_outchar;
            }
            if ( from_is_utf8 )
            {
              if ( ( p[0] & 192 ) == 192 )
              {
                puni = p;
                code = UCGetUniFromUtf8String( &puni );
                if ( code <= 0 )
                  code = p[0];
                else
                  what = P_utf8;
              }
            }
            else
            if ( use_lynx_specials && Back == 0 && ( code == 160 || code == 173 ) && ( LYCharSet_UC[ cs_from ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) ) )
            {
              if ( code == 160 )
              {
                p[0] = 1;
                code = 1;
              }
              else
              if ( code == 173 )
              {
                p[0] = 7;
                code = 7;
              }
              state = S_got_outchar;
            }
            else
            {
              if ( T.trans_to_uni )
              {
                code = UCTransToUni( p[0], cs_from );
                if ( code <= 0 )
                  code = p[0];
              }
              else
              {
                if ( T.trans_from_uni == 0 )
                {
                  state = S_got_outchar;
                }
              }
            }
            if ( use_lynx_specials && Back == 0 && ( code == 160 || code == 173 ) )
            {
              code = code == 160 ? 1 : 7;
              state = S_got_outchar;
            }
            else
            {
              state = S_check_uni;
            }
          }
          break;
        case S_check_ent:
          if ( p[0] == '&' )
          {
            char *pp = &p[1];
            len = strlen( pp );
            if ( pp[0] == '#' && len > 2 && ( pp[1] == 'x' || pp[1] == 'X' ) && '~' <= pp[2] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( pp[2] * 2 )) & 4096 ) )
            {
              what = P_hex;
              state = S_ncr;
            }
            else
            {
              if ( pp[0] == '#' && len > 2 && '~' <= pp[1] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( pp[1] * 2 )) & 2048 ) )
              {
                what = P_decimal;
                state = S_ncr;
              }
              else
              {
                if ( '~' <= pp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( pp[0] * 2 )) & 1024 ) )
                {
                  what = P_named;
                  state = S_named;
                }
                else
                {
                  state = S_trans_byte;
                }
              }
            }
          }
          else
          {
            state = S_trans_byte;
          }
          break;
        case S_ncr:
          if ( what == P_hex )
            p += 3;
          else
            p += 2;
          cp = p;
          for ( ; p[0] && '~' <= p[0]; p++ )
          {
            if ( what != P_hex )
            {
              if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 ) == 0 )
                break;
            }
            else
            {
              if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 4096 ) == 0 )
                break;
            }
            // p++;
          }
          cpe = p[0];
          if ( p[0] )
          {
            p[0] = 0;
            p++;
          }
          if ( what != P_hex )
          {
            if ( sscanf( cp, "%lu", &lcode ) == 1 )
              goto B279;
            else
            {
              state = S_recover;
            }
          }
          else
          {
            if ( sscanf( cp, "%lx", &lcode ) == 1 )
              goto B279;
          }
B279:;
          if ( lcode < 0 )
            continue;
          else
          {
            code = lcode;
            switch ( code )
            {
            case 1:
              code = 9786;
              break;
            case 128:
              code = 8364;
              break;
            case 130:
              code = 8218;
              break;
            case 132:
              code = 8222;
              break;
            case 133:
              code = 8230;
              break;
            case 134:
              code = 8224;
              break;
            case 135:
              code = 8225;
              break;
            case 137:
              code = 8240;
              break;
            case 139:
              code = 8249;
              break;
            case 145:
              code = 8216;
              break;
            case 146:
              code = 8217;
              break;
            case 147:
              code = 8220;
              break;
            case 148:
              code = 8221;
              break;
            case 149:
              code = 8226;
              break;
            case 150:
              code = 8211;
              break;
            case 151:
              code = 8212;
              break;
            case 152:
              code = 732;
              break;
            case 153:
              code = 8482;
              break;
            case 155:
              code = 8250;
              break;
            default:
              break;
            }
            state = S_check_uni;
          }
          break;
        case S_check_uni:
          if ( code <= 31 )
          {
            if ( code == 9 )
              goto B288;
            else
            if ( code == 10 )
              goto B288;
            else
            if ( code == 13 )
              goto B288;
            else
            if ( HTCJK == NOCJK )
            {
              state = S_recover;
            }
          }
B288:;
          if ( code == 127 )
          {
            if ( HTPassHighCtrlRaw == 0 && HTCJK == NOCJK )
              continue;
          }
          if ( code <= 127 )
            goto B296;
          else
          if ( code <= 159 )
          {
            if ( HTPassHighCtrlNum == 0 )
              continue;
          }
B296:;
          if ( code > 159 && stype == st_URL )
          {
            state = S_got_oututf8;
          }
          else
          {
            if ( code == 160 )
            {
              if ( plain_space )
              {
                code = 32;
                state = S_got_outchar;
              }
              else
              if ( use_lynx_specials )
              {
                code = 1;
                state = S_got_outchar;
              }
              else
              if ( ( hidden && Back == 0 ) || ( LYCharSet_UC->MIMEname & 2 ) || LYCharSet_UC[ cs_to ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) )
              {
                state = S_got_outchar;
              }
              else
              if ( ( LYCharSet_UC[ ( ( cs_to * 2 ) + 1 ) >> 1 ].UChndl & 2 ) == 0 )
              {
                code = 32;
                state = S_got_outchar;
              }
            }
            if ( code == 173 )
            {
              if ( plain_space )
              {
                replace_buf[0] = 0;
                state = S_got_outstring;
              }
              else
              if ( Back == 0 || LYCharSet_UC[ cs_to ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) )
              {
                if ( hidden || Back )
                {
                  state = S_got_outchar;
                }
                else
                if ( use_lynx_specials )
                {
                  code = 7;
                  state = S_got_outchar;
                }
              }
            }
            uck = UCTransUniChar( code, cs_to );
            switch ( uck )
            {
            case 127:
            case 128:
            case 129:
            case 130:
            case 131:
            case 132:
            case 133:
            case 134:
            case 135:
            case 136:
            case 137:
            case 138:
            case 139:
            case 140:
            case 141:
            case 142:
            case 143:
            case 144:
            case 145:
            case 146:
            case 147:
            case 148:
            case 149:
            case 150:
            case 151:
            case 152:
            case 153:
            case 154:
            case 155:
            case 156:
            case 157:
            case 158:
            case 159:
            case 160:
            case 161:
            case 162:
            case 163:
            case 164:
            case 165:
            case 166:
            case 167:
            case 168:
            case 169:
            case 170:
            case 171:
            case 172:
            case 173:
            case 174:
            case 175:
            case 176:
            case 177:
            case 178:
            case 179:
            case 180:
            case 181:
            case 182:
            case 183:
            case 184:
            case 185:
            case 186:
            case 187:
            case 188:
            case 189:
            case 190:
            case 191:
            case 192:
            case 193:
            case 194:
            case 195:
            case 196:
            case 197:
            case 198:
            case 199:
            case 200:
            case 201:
            case 202:
            case 203:
            case 204:
            case 205:
            case 206:
            case 207:
            case 208:
            case 209:
            case 210:
            case 211:
            case 212:
            case 213:
            case 214:
            case 215:
            case 216:
            case 217:
            case 218:
            case 219:
            case 220:
            case 221:
            case 222:
            case 223:
            case 224:
            case 225:
            case 226:
            case 227:
            case 228:
            case 229:
            case 230:
            case 231:
            case 232:
            case 233:
            case 234:
            case 235:
            case 236:
            case 237:
            case 238:
            case 239:
            case 240:
            case 241:
            case 242:
            case 243:
            case 244:
            case 245:
            case 246:
            case 247:
            case 248:
            case 249:
            case 250:
            case 251:
            case 252:
            case 253:
            case 254:
            case 255:
              if ( lowest_8 <= uck )
              else
              {
                if ( uck == -4 || ( repl_translated_C0 && uck > 0 && uck <= 31 ) )
                {
                  uck = ~UCTransUniCharStr( replace_buf, 60, code, cs_to, 0 ) >> 31;
                  if ( uck )
                  {
                    state = S_got_outstring;
                  }
                }
                if ( output_utf8 && code > 127 && code != 2147483647 )
                {
                  state = S_got_oututf8;
                }
                else
                {
                  switch ( code )
                  {
                  case 8194:
                  case 8195:
                  case 8201:
                    if ( hidden )
                    {
                      state = S_recover;
                    }
                    else
                    {
                      if ( plain_space )
                      {
                        code = 32;
                        state = S_got_outchar;
                      }
                      else
                      {
                        code = 2;
                        state = S_got_outchar;
                      }
                    }
                  default:
                    switch ( code )
                    {
                    case 8204:
                    case 8205:
                    case 8206:
                    case 8207:
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "LYUCFullyTranslateString: Ignoring '%ld'.\n", code );
                      }
                      replace_buf[0] = 0;
                      state = S_got_outstring;
                      break;
                    default:
                      if ( code > 255 )
                      {
                        state = S_recover;
                      }
                      else
                      {
                        if ( code <= 160 || ( code <= 255 && ( HTPassEightBitNum || cs_to == LATIN1 ) ) )
                        {
                          state = S_got_outchar;
                        }
                        else
                        {
                          if ( what == P_decimal || what == P_hex )
                          {
                            q[0] = '&';
                            q++;
                            q[0] = '#';
                            q++;
                            if ( what == P_hex )
                            {
                              q[0] = 'x';
                              q++;
                            }
                            if ( cpe )
                              p[ -1 ] = cpe;
                            p = cp;
                            state = S_done;
                          }
                          else
                          {
                            if ( what == P_named )
                            {
                              cp[0] = cpe;
                              q[0] = '&';
                              q++;
                              state = S_done;
                            }
                            else
                            {
                              if ( T.output_utf8 == 0 && stype == st_HTML && hidden == 0 && ( HTPassEightBitRaw == 0 || p[0] < lowest_8 ) )
                              {
                                sprintf( replace_buf, "U%.2lX", code );
                                state = S_got_outstring;
                              }
                              else
                              {
                                puni = p;
                                code = p[0];
                                state = S_got_outchar;
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
              }
              break;
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 71:
            case 72:
            case 73:
            case 74:
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            case 83:
            case 84:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
            case 102:
            case 103:
            case 104:
            case 105:
            case 106:
            case 107:
            case 108:
            case 109:
            case 110:
            case 111:
            case 112:
            case 113:
            case 114:
            case 115:
            case 116:
            case 117:
            case 118:
            case 119:
            case 120:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
              code = uck;
              state = S_got_outchar;
              break;
            default:
              break;
            }
          }
          break;
        case S_recover:
          break;
        case S_named:
          p++;
          cp = p;
          for ( ; cp[0] && '~' <= cp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8 ); cp++ )
          {
            // cp++;
          }
          cpe = cp[0];
          cp[0] = 0;
          name = p;
          state = S_check_name;
          break;
        case S_check_name:
          code = HTMLGetEntityUCValue( name );
          if ( code > 0 && ( cpe != '=' || stype != st_URL ) )
          {
            state = S_check_uni;
          }
          else
          {
            state = S_recover;
          }
          break;
        case S_got_oututf8:
          if ( code > 255 || ( code > 127 && LYCharSet_UC[ cs_to ].enc == 7 ) )
          {
            UCPutUtf8ToBuffer( replace_buf, code, 1 );
            state = S_got_outstring;
          }
          else
          {
            state = S_got_outchar;
          }
          break;
        case S_got_outstring:
          if ( what == P_decimal || what == P_hex )
          {
            if ( cpe != ';' && cpe )
            {
              p = &p[ -1 ];
              p[0] = cpe;
            }
            p = &p[ -1 ];
          }
          else
          {
            if ( what == P_named )
            {
              cp[0] = cpe;
              p = cp;
            }
            else
            {
              if ( what == P_utf8 )
                p = puni;
            }
          }
          if ( replace_buf[0] == 0 )
          {
            state = S_next_char;
          }
          else
          {
            if ( stype == st_URL )
            {
              code = replace_buf[0];
              switch ( code )
              {
              default:
                state = S_put_urlstring;
                break;
              case 0:
              case 9:
              case 10:
                if ( qs != q )
                {
                  if ( chunk )
                  {
                  }
                  else
                  {
                    chunk = HTChunkCreate2( 128, len + 1 );
                  }
                  HTChunkPutb( chunk, qs, q - qs );
                }
                if ( chunk )
                {
                }
                else
                {
                  chunk = HTChunkCreate2( 128, len + 1 );
                }
                HTChunkPuts( chunk, replace_buf );
                qs = q = str[0];
                state = S_next_char;
                break;
              }
            }
          }
          break;
        case S_put_urlstring:
          esc = HTEscape( replace_buf, 1 );
          if ( qs != q )
          {
            if ( chunk )
            {
            }
            else
            {
              chunk = HTChunkCreate2( 128, len + 1 );
            }
            HTChunkPutb( chunk, qs, q - qs );
          }
          if ( chunk )
          {
          }
          else
          {
            chunk = HTChunkCreate2( 128, len + 1 );
          }
          HTChunkPuts( chunk, esc );
          qs = q = str[0];
          if ( esc )
          {
            free( esc );
            esc = 0;
          }
          state = S_next_char;
          break;
        case S_got_outchar:
          if ( what == P_decimal || what == P_hex )
          {
            if ( cpe != ';' && cpe )
            {
              p = &p[ -1 ];
              p[0] = cpe;
            }
            p = &p[ -1 ];
          }
          else
          {
            if ( what == P_named )
            {
              cp[0] = cpe;
              p = cp;
            }
            else
            {
              if ( what == P_utf8 )
                p = puni;
            }
          }
          if ( stype == st_URL )
          {
            switch ( code )
            {
            default:
              state = S_put_urlchar;
              break;
            case 9:
            case 10:
              if ( hidden == 0 && code == 10 && p[0] == '\n' && qs != q && q[ -1 ] == '\r' )
              {
                q[ -1 ] = p[0];
                p++;
                state = S_done;
              }
              else
              {
                q[0] = code;
                q++;
                state = S_next_char;
              }
              break;
            }
          }
          break;
        case S_put_urlchar:
          q[0] = '%';
          q++;
          if ( p < q )
          {
            if ( chunk )
            {
            }
            else
            {
              chunk = HTChunkCreate2( 128, len + 1 );
            }
            HTChunkPutb( chunk, qs, q - qs );
            qs = q = str[0];
            q[0] = hex[ ( code >> 4 ) & 15 ];
            q++;
          }
          else
          {
            q[0] = hex[ ( code >> 4 ) & 15 ];
            q++;
          }
          if ( p < q )
          {
            if ( chunk )
            {
            }
            else
            {
              chunk = HTChunkCreate2( 128, len + 1 );
            }
            HTChunkPutb( chunk, qs, q - qs );
            qs = q = str[0];
            q[0] = hex[ code & 15 ];
            q++;
          }
          else
          {
            q[0] = hex[ code & 15 ];
            q++;
          }
        case S_next_char:
          p++;
        case S_done:
          state = S_text;
          what = P_text;
          break;
        }
      }
    }
  }
}
BOOLEAN LYUCTranslateHTMLString( char **str, int cs_from, int cs_to, BOOLEAN use_lynx_specials, BOOLEAN plain_space, BOOLEAN hidden, CharUtil_st stype )
{
  BOOLEAN ret = 1;
  if ( LYUCFullyTranslateString( str, cs_from, cs_to, 1, use_lynx_specials, plain_space, hidden, 0, stype ) == 0 )
  {
    ret = 0;
  }
  return ret;
}
BOOLEAN LYUCTranslateBackFormData( char **str, int cs_from, int cs_to, BOOLEAN plain_space )
{
  char **ret = LYUCFullyTranslateString( str, cs_from, cs_to, 0, 0, plain_space, 1, 1, 0 );
  return ret != 0;
}
char *LYParseTagParam( char *from, char *name )
{
  size_t len = strlen( name );
  char *result = 0;
  char *string = from;
  do
  {
    string = strchr( string, ';' );
    if ( string == 0 )
    {
      return 0;
    }
    for ( ; string[0] && ( string[0] == ';' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( string[0] * 2 )) & 8192 ) ); string++ )
    {
      // string++;
    }
    if ( strlen( string ) < len )
    {
      return 0;
    }
  }
  while ( strncasecomp( string, name, (int)len ) );
  string = &string[ len ];
  for ( ; string[0] && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( string[0] * 2 )) & 8192 ) || string[0] == '=' ); string++ )
  {
    // string++;
  }
  HTSACopy( &result, string );
  len = 0;
  for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( string[ len ] * 2 )) & 16384 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( string[ len ] * 2 )) & 8192 ) == 0; len++ )
  {
    // len++;
  }
  result[ len ] = 0;
  if ( len > 2 && result[0] == '\'' && result[ len + -1 ] == result[0] )
  {
    result[ len + -1 ] = 0;
    return result;
  }
  return result;
}
void LYParseRefreshURL( char *content, char **p_seconds, char **p_address )
{
  char *cp;
  char *cp1 = 0;
  char *Seconds = 0;
  cp = LYSkipBlanks( content );
  if ( cp[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 ) )
  {
    cp1 = cp;
    for ( ; cp1[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048 ); cp1++ )
    {
      // cp1++;
    }
    SNACopy( &Seconds, cp, cp1 - cp );
  }
  p_seconds[0] = Seconds;
  p_address[0] = LYParseTagParam( content, "URL" );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYParseRefreshURL\n\tcontent: %s\n\tseconds: %s\n\taddress: %s\n", content, "", "" );
  }
  return;
}
void LYHandleMETA( HTStructured *me, BOOLEAN *present, char **value, char **include )
{
  char *http_equiv = 0, *name = 0, *content = 0;
  char *href = 0, *id_string = 0, *temp = 0;
  char *cp, *cp0, *cp1 = 0;
  int url_type = 0;
  if ( me && present )
  {
    if ( present[1] && value[1] && value[1][0] )
    {
      HTSACopy( &http_equiv, value[1] );
      convert_to_spaces( http_equiv, 1 );
      LYUCTranslateHTMLString( &http_equiv, me->tag_charset, me->tag_charset, 0, 0, 1, 2 );
      if ( !http_equiv[0] && http_equiv )
      {
        free( http_equiv );
        http_equiv = 0;
      }
    }
    if ( present[2] && value[2] && value[2][0] )
    {
      HTSACopy( &name, value[2] );
      convert_to_spaces( name, 1 );
      LYUCTranslateHTMLString( &name, me->tag_charset, me->tag_charset, 0, 0, 1, 2 );
      if ( !name[0] && name )
      {
        free( name );
        name = 0;
      }
    }
    if ( present[0] && value[0] && value[0] )
    {
      HTSACopy( &content, value[0] );
      convert_to_spaces( content, 0 );
      LYTrimHead( content );
      LYTrimTail( content );
      if ( !content[0] && content )
      {
        free( content );
        content = 0;
      }
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYHandleMETA: HTTP-EQUIV=\"%s\" NAME=\"%s\" CONTENT=\"%s\"\n", "NULL", "NULL", "NULL" );
    }
    if ( ( http_equiv || name ) && content )
    {
      if ( strcasecomp( "", "Pragma" ) == 0 || strcasecomp( "", "Cache-Control" ) == 0 )
      {
        LYUCTranslateHTMLString( &content, me->tag_charset, me->tag_charset, 0, 0, 1, 2 );
        if ( strcasecomp( content, "no-cache" ) == 0 )
        {
          me->node_anchor->no_cache = 1;
          HText_setNoCache( &me->text );
        }
        if ( me->node_anchor->cache_control == 0 && strcasecomp( "", "Cache-Control" ) == 0 )
        {
          LYLowerCase( content );
          HTSACopy( &me->node_anchor->cache_control, content );
          if ( me->node_anchor->no_cache == 0 )
          {
            cp0 = content;
            for ( ; cp;  )
            {
              cp += 8;
              for ( ; cp[0] && ' ' <= cp[0]; cp++ )
              {
                // cp++;
              }
              if ( cp[0] == 0 || cp[0] == ';' )
              {
                me->node_anchor->no_cache = 1;
                HText_setNoCache( &me->text );
                break;
              }
              else
              {
                cp0 = cp;
              }
            }
            if ( me->node_anchor->no_cache != 1 )
            {
              cp0 = content;
              for ( ; cp;  )
              {
                cp += 7;
                for ( ; cp[0] && ' ' <= cp[0]; cp++ )
                {
                  // cp++;
                }
                if ( cp[0] == '=' )
                {
                  cp++;
                  for ( ; cp[0] && ' ' <= cp[0]; cp++ )
                  {
                    // cp++;
                  }
                  if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048 )
                  {
                    cp0 = cp;
                    for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 2048; cp++ )
                    {
                      // cp++;
                    }
                    if ( cp0[0] == '0' && cp0[1] == cp )
                    {
                      me->node_anchor->no_cache = 1;
                      HText_setNoCache( &me->text );
                      break;
                    }
                  }
                }
                cp0 = cp;
              }
            }
          }
        }
      }
      else
      {
        if ( strcasecomp( "", "Expires" ) == 0 )
        {
          LYUCTranslateHTMLString( &content, me->tag_charset, me->tag_charset, 0, 0, 1, 2 );
          HTSACopy( &me->node_anchor->expires, content );
          if ( me->node_anchor->no_cache == 0 )
          {
            if ( strcmp( content, "0" ) == 0 )
            {
              me->node_anchor->no_cache = 1;
              HText_setNoCache( &me->text );
            }
            else
            {
              if ( me->node_anchor->date )
              {
                if ( LYmktime( content, 1 ) <= LYmktime( &me->node_anchor->date, 1 ) )
                {
                  me->node_anchor->no_cache = 1;
                  HText_setNoCache( &me->text );
                }
              }
              else
              {
                if ( LYmktime( content, 0 ) == 0 )
                {
                  me->node_anchor->no_cache = 1;
                  HText_setNoCache( &me->text );
                }
              }
            }
          }
        }
        else
        {
          if ( ( me->node_anchor->charset == 0 || me->node_anchor->charset[0] == 0 ) && strcasecomp( "", "Content-Type" ) == 0 )
          {
            LYUCcharset *p_in = 0;
            LYUCcharset *p_out = 0;
            LYUCTranslateHTMLString( &content, me->tag_charset, me->tag_charset, 0, 0, 1, 2 );
            LYLowerCase( content );
            cp1 = strstr( content, "charset" );
            if ( cp1 )
            {
              BOOLEAN chartrans_ok = 0;
              char *cp3 = 0, *cp4;
              int chndl;
              cp1 += 7;
              for ( ; cp1[0] == ' ' || cp1[0] == '=' || cp1[0] == '"'; cp1++ )
              {
                // cp1++;
              }
              HTSACopy( &cp3, cp1 );
              cp4 = cp3;
              for ( ; cp4[0] && cp4[0] != '"' && cp4[0] != ';' && cp4[0] != ':' && cp4[0] < ' '; cp4++ )
              {
                // cp4++;
              }
              cp4[0] = 0;
              cp4 = cp3;
              chndl = UCGetLYhndl_byMIME( cp3 );
              if ( UCCanTranslateFromTo( chndl, current_char_set ) & 255 )
              {
                chartrans_ok = 1;
                HTSACopy( &me->node_anchor->charset, cp4 );
                HTAnchor_setUCInfoStage( &me->node_anchor, chndl, 1, 3 );
              }
              else
              if ( chndl < 0 )
              {
                chndl = UCLYhndl_for_unrec;
                if ( chndl >= 0 )
                  goto B219;
                else
                  chndl = UCLYhndl_for_unspec;
B219:;
                if ( UCCanTranslateFromTo( chndl, current_char_set ) & 255 )
                {
                  chartrans_ok = 1;
                  HTAnchor_setUCInfoStage( &me->node_anchor, chndl, 1, 3 );
                }
              }
              if ( chartrans_ok )
              {
                p_in = HTAnchor_getUCInfoStage( &me->node_anchor, 1 );
                p_out = HTAnchor_setUCInfoStage( &me->node_anchor, current_char_set, 3, 1 );
                if ( p_out == 0 )
                {
                  p_out = HTAnchor_getUCInfoStage( &me->node_anchor, 3 );
                }
                if ( strcmp( &p_in->MIMEname, "x-transparent" ) == 0 )
                {
                  HTPassEightBitRaw = 1;
                  HTAnchor_setUCInfoStage( &me->node_anchor, HTAnchor_getUCLYhndl( &me->node_anchor, 3 ), 1, 1 );
                }
                if ( strcmp( &p_out->MIMEname, "x-transparent" ) == 0 )
                {
                  HTPassEightBitRaw = 1;
                  HTAnchor_setUCInfoStage( &me->node_anchor, HTAnchor_getUCLYhndl( &me->node_anchor, 1 ), 3, 1 );
                }
                if ( p_in->enc != 5 && p_in->enc != 7 )
                {
                  HTCJK = NOCJK;
                  if ( ( p_in->codepoints & 1 ) == 0 && current_char_set == chndl )
                    HTPassEightBitRaw = 1;
                }
                else
                if ( p_out->enc == 5 )
                  Set_HTCJK( &p_in->MIMEname, &p_out->MIMEname );
                LYGetChartransInfo( me );
                if ( me->UCLYhndl != chndl )
                {
                  HTAnchor_setUCInfoStage( &me->node_anchor, chndl, 0, 3 );
                  HTAnchor_setUCInfoStage( &me->node_anchor, chndl, 1, 3 );
                  me->inUCLYhndl = HTAnchor_getUCLYhndl( &me->node_anchor, 1 );
                  me->inUCI = HTAnchor_getUCInfoStage( &me->node_anchor, 1 );
                }
                UCSetTransParams( &me->T, me->inUCLYhndl, &me->inUCI, me->outUCLYhndl, &me->outUCI );
              }
              else
              {
                BOOLEAN given_is_8859;
                BOOLEAN given_is_8859like;
                BOOLEAN given_and_display_8859like;
                *(int*)&given_is_8859 = 0;
                given_is_8859like = given_is_8859 || strncmp( cp4, "windows-", 8 ) == 0 || strncmp( cp4, "cp12", 4 ) == 0 || strncmp( cp4, "cp-12", 5 ) == 0 ? 1 : 0;
                *(int*)&given_and_display_8859like = 0;
                if ( given_is_8859 )
                {
                  cp1 = &cp4[10];
                  for ( ; cp1[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048 ); cp1++ )
                  {
                    // cp1++;
                  }
                  cp1[0] = 0;
                }
                if ( given_and_display_8859like )
                {
                  HTSACopy( &me->node_anchor->charset, cp4 );
                  HTPassEightBitRaw = 1;
                }
                HTAlert( cp4[0] ? cp4 : &me->node_anchor->charset );
              }
              if ( cp3 )
              {
                free( cp3 );
                cp3 = 0;
              }
              if ( me->node_anchor->charset && WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "LYHandleMETA: New charset: %s\n", &me->node_anchor->charset );
              }
            }
            HText_setKcode( &me->text, &me->node_anchor->charset, p_in );
          }
          else
          {
            if ( strcasecomp( "", "Refresh" ) == 0 )
            {
              char *Seconds = 0;
              LYUCTranslateHTMLString( &content, me->tag_charset, me->tag_charset, 0, 0, 1, 2 );
              LYParseRefreshURL( content, &Seconds, &href );
              if ( Seconds )
              {
                if ( href )
                {
                  url_type = LYLegitimizeHREF( me, &href, 1, 0 );
                  if ( url_type == 0 )
                  {
                    HTUserMsg( gettext( "Refresh URL is not absolute." ) );
                    if ( href[0] )
                    {
                      temp = HTParse( href, &me->node_anchor->address, 31 );
                      HTSACopy( &href, temp );
                      if ( temp )
                      {
                        free( temp );
                        temp = 0;
                      }
                    }
                    else
                    {
                      HTSACopy( &href, &me->node_anchor->address );
                      HText_setNoCache( &me->text );
                    }
                  }
                  else
                  {
                    LYFillLocalFileURL( &href, &me->node_anchor->address );
                  }
                  if ( strcmp( href, &me->node_anchor->address ) == 0 )
                    HText_setNoCache( &me->text );
                }
                else
                {
                  HTSACopy( &href, &me->node_anchor->address );
                  HText_setNoCache( &me->text );
                }
                cp = 0;
                if ( me->inA )
                {
                  if ( me->inBoldA == 1 && me->inBoldH == 0 )
                    HText_appendCharacter( &me->text, 6 );
                  me->inBoldA = 0;
                  HText_endAnchor( &me->text, me->CurrentANum );
                  me->inA = 0;
                  *(int*)&me->CurrentANum = 0;
                }
                me->CurrentA = HTAnchor_findChildAndLink( &me->node_anchor, id_string, href, 0 );
                if ( id_string )
                  cp[0] = '#';
                if ( id_string )
                {
                  free( id_string );
                  id_string = 0;
                }
                LYEnsureSingleSpace( me );
                if ( me->inUnderline == 0 )
                  HText_appendCharacter( &me->text, 3 );
                HTML_put_string( me, "REFRESH(" );
                HTML_put_string( me, Seconds );
                HTML_put_string( me, " sec):" );
                if ( Seconds )
                {
                  free( Seconds );
                  Seconds = 0;
                }
                if ( me->inUnderline == 0 )
                  HText_appendCharacter( &me->text, 4 );
                HTML_put_character( me, ' ' );
                me->in_word = 0;
                HText_beginAnchor( &me->text, me->inUnderline, &me->CurrentA );
                if ( me->inBoldH == 0 )
                  HText_appendCharacter( &me->text, 5 );
                HTML_put_string( me, href );
                if ( href )
                {
                  free( href );
                  href = 0;
                }
                if ( me->inBoldH == 0 )
                  HText_appendCharacter( &me->text, 6 );
                HText_endAnchor( &me->text, 0 );
                LYEnsureSingleSpace( me );
              }
            }
            else
            {
              if ( ( me->node_anchor->SugFname == 0 || me->node_anchor->SugFname[0] == 0 ) && strcasecomp( "", "Content-Disposition" ) == 0 )
              {
                cp = content;
                for ( ; cp[0] && strncasecomp( cp, "filename", 8 ); cp++ )
                {
                  // cp++;
                }
                if ( cp[0] )
                {
                  cp = LYSkipBlanks( &cp[8] );
                  if ( cp[0] == '=' )
                    cp++;
                  cp = LYSkipBlanks( cp );
                  if ( cp[0] )
                  {
                    HTSACopy( &me->node_anchor->SugFname, cp );
                    if ( me->node_anchor->SugFname[0] == '"' )
                    {
                      cp = strchr( &me->node_anchor->SugFname[1], '"' );
                      if ( cp )
                      {
                        cp[1] = 0;
                        HTMIME_TrimDoubleQuotes( &me->node_anchor->SugFname );
                        if ( ( me->node_anchor->SugFname == 0 || !me->node_anchor->SugFname[0] ) && me->node_anchor->SugFname )
                        {
                          free( &me->node_anchor->SugFname );
                          me->node_anchor->SugFname = 0;
                        }
                      }
                      else
                      if ( me->node_anchor->SugFname )
                      {
                        free( &me->node_anchor->SugFname );
                        me->node_anchor->SugFname = 0;
                      }
                    }
                    cp = &me->node_anchor->SugFname;
                    if ( cp )
                    {
                      for ( ; cp[0]; cp++ )
                      {
                        if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 8192 )
                          cp[0] = '_';
                        // cp++;
                      }
                    }
                  }
                }
              }
              else
              {
                if ( strcasecomp( "", "Set-Cookie" ) == 0 )
                {
                  url_type = is_url( &me->node_anchor->address );
                  if ( url_type == 2 || url_type == 20 )
                  {
                    LYSetCookie( content, 0, &me->node_anchor->address );
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( http_equiv )
    {
      free( http_equiv );
      http_equiv = 0;
    }
    if ( name )
    {
      free( name );
      name = 0;
    }
    if ( content == 0 )
    {
      return;
    }
    free( content );
    content = 0;
  }
  return;
}
void LYHandlePlike( HTStructured *me, BOOLEAN *present, char **value, char **include, int align_idx, BOOLEAN start )
{
  if ( start )
  {
    if ( me->inFIG )
      me->inFIGwithP = 1;
    if ( me->inAPPLET )
      me->inAPPLETwithP = 1;
  }
  if ( me->style_change )
    actually_set_style( me );
  if ( me->List_Nesting_Level >= 0 )
  {
    if ( me->inP )
    {
      if ( me->inFIG || me->inAPPLET || me->inCAPTION || me->inCREDIT || me->sp->_stack_element > 0 || ( start && me->sp->_stack_element > 0 ) )
        LYEnsureDoubleSpace( me );
      else
        LYEnsureSingleSpace( me );
    }
  }
  else
  if ( me->sp->tag_number == 3 )
  {
    if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
    {
      HText_setLastChar( &me->text, ' ' );
      HText_appendCharacter( &me->text, 13 );
    }
  }
  else
  {
    if ( start )
    {
      if ( !me->inLABEL || me->inP )
        HText_appendParagraph( &me->text );
    }
    else
    if ( me->sp->_stack_element > 0 )
      LYEnsureDoubleSpace( me );
    else
      LYEnsureSingleSpace( me );
    me->inLABEL = 0;
  }
  me->in_word = 0;
  if ( LYoverride_default_alignment( me ) & 255 )
  {
    me->sp->_stack_element = *(int*)LYstyles( me->sp->tag_number )/*.48*/;
  }
  else
  {
    if ( me->List_Nesting_Level >= 0 )
    {
      if ( me->Division_Level < 0 && ( me->sp->_stack_element == 0 || me->sp->_stack_element == 37 ) )
        goto B44;
      else
        me->sp->_stack_element = me->current_default_alignment;
    }
    else
B44:;
    me->sp->_stack_element = 1;
  }
  if ( start && present && present[ align_idx ] && value[ align_idx ] )
  {
    if ( !strcasecomp( value[ align_idx ], "center" ) && ( me->List_Nesting_Level < 0 || me->inP ) )
    {
      me->sp->_stack_element = 3;
    }
    else
    {
      if ( !strcasecomp( value[ align_idx ], "right" ) && ( me->List_Nesting_Level < 0 || me->inP ) )
      {
        me->sp->_stack_element = 2;
      }
      else
      {
        if ( strcasecomp( value[ align_idx ], "left" ) == 0 || strcasecomp( value[ align_idx ], "justify" ) == 0 )
        {
          me->sp->_stack_element = 1;
        }
      }
    }
  }
  me->inP = 0;
  return;
}
void LYHandleSELECT( HTStructured *me, BOOLEAN *present, char **value, char **include, BOOLEAN start )
{
  int i;
  if ( start == 1 )
  {
    char *name = 0;
    BOOLEAN multiple = 0;
    char *size = 0;
    me->select_disabled = 0;
    if ( !me->inFORM && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Bad HTML: SELECT start tag not within FORM tag\n" );
    }
    if ( me->inTEXTAREA && ( LYBadHTML( me ) & 255 ) && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Bad HTML: Missing TEXTAREA end tag\n" );
    }
    me->inSELECT = 1;
    if ( present == 0 || present[11] == 0 || value[11] == 0 || value[11][0] == 0 )
      HTSACopy( &name, "" );
    else
    {
      if ( strchr( value[11], '&' ) == 0 )
        HTSACopy( &name, value[11] );
      else
      {
        HTSACopy( &name, value[11] );
        LYUCTranslateHTMLString( &name, me->tag_charset, me->tag_charset, 0, 0, 1, 0 );
      }
    }
    if ( present && present[10] )
      multiple = 1;
    if ( present && present[4] )
      me->select_disabled = 1;
    if ( present && present[16] && value[16] && value[16][0] && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYHandleSELECT: Ignoring SIZE=\"%s\" for SELECT.\n", value[16] );
    }
    if ( me->inBoldH == 1 && ( multiple == 0 || LYSelectPopups == 0 ) )
    {
      HText_appendCharacter( &me->text, 6 );
      me->inBoldH = 0;
      me->needBoldH = 1;
    }
    if ( me->inUnderline == 1 && ( multiple == 0 || LYSelectPopups == 0 ) )
    {
      HText_appendCharacter( &me->text, 4 );
      me->inUnderline = 0;
    }
    if ( multiple == 0 && LYSelectPopups == 1 && ( me->sp->tag_number == 86 || me->inPRE == 1 || !me->sp->_stack_element ) && ( LYcols - ( LYShowScrollbar != 0 ) ) + -7 < HText_LastLineSize( &me->text, 0 ) )
    {
      HTML_put_character( me, '\n' );
      me->in_word = 0;
    }
    LYCheckForID( me, present, value, 7 );
    HText_beginSelect( name, me->tag_charset, multiple, size );
    if ( name )
    {
      free( name );
      name = 0;
    }
    if ( size )
    {
      free( size );
      size = 0;
    }
    me->first_option = 1;
  }
  else
  {
    char *ptr;
    if ( me->inSELECT == 0 )
    {
      if ( ( LYBadHTML( me ) & 255 ) == 0 || WWW_TraceFlag == 0 )
      {
        return;
      }
      fprintf( TraceFP( ), "Bad HTML: Unmatched SELECT end tag\n" );
    }
    else
    {
      me->inSELECT = 0;
      me->select_disabled = 0;
      HTChunkTerminate( &me->option );
      ptr = HText_setLastOptionValue( &me->text, &me->option.data, &me->LastOptionValue, 3, me->LastOptionChecked, me->UCLYhndl, me->tag_charset );
      if ( me->LastOptionValue )
      {
        free( &me->LastOptionValue );
        *(int*)&me->LastOptionValue = 0;
      }
      me->LastOptionChecked = 0;
      if ( HTCurSelectGroupType == 3 || LYSelectPopups == 0 )
        LYEnsureSingleSpace( me );
      else
      if ( ptr && me->sp->tag_number == 86 && strlen( ptr ) > 6 )
      {
        i = 0;
        for ( ; i <= 5; i++ )
        {
          if ( ptr[0] == ' ' )
            HText_appendCharacter( &me->text, 1 );
          else
            HText_appendCharacter( &me->text, ptr[0] );
          ptr++;
          // i++;
        }
        HText_setIgnoreExcess( &me->text, 1 );
        while ( ptr && ptr[0] )
        {
          if ( ptr[0] == ' ' )
            HText_appendCharacter( &me->text, 1 );
          else
            HText_appendCharacter( &me->text, ptr[0] );
          ptr++;
        }
        if ( me->first_option == 0 )
        {
          HText_appendCharacter( &me->text, 93 );
          HText_setLastChar( &me->text, ']' );
          me->in_word = 1;
        }
        HText_setIgnoreExcess( &me->text, 0 );
      }
      HTChunkClear( &me->option );
      if ( me->Underline_Level > 0 && me->inUnderline == 0 )
      {
        HText_appendCharacter( &me->text, 3 );
        me->inUnderline = 1;
      }
      if ( me->needBoldH == 1 && me->inBoldH == 0 )
      {
        HText_appendCharacter( &me->text, 5 );
        me->inBoldH = 1;
        me->needBoldH = 0;
      }
    }
  }
  return;
}
int LYLegitimizeHREF( HTStructured *me, char **href, BOOLEAN force_slash, BOOLEAN strip_dots )
{
  int url_type = 0;
  char *p = 0;
  char *pound = 0;
  char *Base = 0;
  if ( me == 0 || href == 0 || href[0] == 0 || href[0] == 0 )
  {
    return url_type;
  }
  if ( ( LYTrimStartfile( href[0] ) & 255 ) == 0 )
  {
    p = LYSkipNonBlanks( href[0] );
    if ( p[0] )
    {
      pound = strchr( href[0], '#' );
      if ( pound && pound < p )
        convert_to_spaces( p, 0 );
      else
      {
        if ( pound )
          pound[0] = 0;
        if ( ( LYRemoveNewlines( p ) & 255 ) || strchr( p, '\t' ) )
          LYRemoveBlanks( p );
        if ( pound )
        {
          p = strchr( p, 0 );
          pound[0] = '#';
          convert_to_spaces( pound, 0 );
          if ( p < pound )
            strcpy( p, pound );
        }
      }
    }
  }
  if ( href[0] == 0 )
  {
    return url_type;
  }
  LYUCTranslateHTMLString( href, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
  Base = &me->node_anchor->address;
  url_type = is_url( href[0] );
  if ( url_type == 0 && force_slash && href[0] == '.' && ( !strcmp( href[0], "." ) || !strcmp( href[0], ".." ) ) && ( ( Base[0] != 'f' && Base[0] != 'F' ) || strncasecomp( Base, "file:", 5 ) ) )
    HTSACat( href, "/" );
  if ( url_type == 0 && LYStripDotDotURLs && strip_dots && href[0] == '.' && strncasecomp( Base, "http", 4 ) == 0 )
  {
    char *temp = 0, *path = 0, *cp;
    char *str = "";
    temp = HTParse( href[0], Base, 31 );
    path = HTParse( temp, "", 5 );
    if ( strncmp( path, "/..", 3 ) == 0 )
    {
      cp = &path[3];
      if ( cp[0] == '/' || cp[0] == 0 )
      {
        if ( Base[4] == 's' )
          str = "s";
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "LYLegitimizeHREF: Bad value '%s' for http%s URL.\n", href[0], str );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "                  Stripping lead dots.\n" );
        }
        if ( me->inBadHREF == 0 )
        {
          HTUserMsg( gettext( "Bad partial reference!  Stripping lead dots." ) );
          me->inBadHREF = 1;
        }
      }
      if ( cp[0] == 0 )
        HTSACopy( href, "/" );
      else
      {
        if ( cp[0] == '/' )
        {
          while ( strncmp( cp, "/..", 3 ) == 0 )
          {
            if ( cp[3] == '/' )
            {
              cp += 3;
            }
            else
            if ( cp[3] == 0 )
            {
              cp[1] = 0;
              cp[2] = 0;
              break;
            }
          }
          HTSACopy( href, cp );
        }
      }
    }
    if ( temp )
    {
      free( temp );
      temp = 0;
    }
    if ( path == 0 )
    {
      return url_type;
    }
    free( path );
  }
}
void LYCheckForContentBase( HTStructured *me )
{
  char *cp = 0;
  BOOLEAN present[6];
  char *value[6];
  int i;
  if ( me && me->node_anchor )
  {
    if ( me->node_anchor->content_base )
    {
      if ( me->node_anchor->content_base[0] == 0 )
      {
        return;
      }
      HTSACopy( &cp, &me->node_anchor->content_base );
      LYRemoveBlanks( cp );
    }
    else
    if ( me->node_anchor->content_location == 0 || me->node_anchor->content_location[0] == 0 )
    {
      return;
    }
    HTSACopy( &cp, &me->node_anchor->content_location );
    LYRemoveBlanks( cp );
    if ( is_url( cp ) == 0 )
    {
      if ( cp == 0 )
      {
        return;
      }
      free( cp );
      cp = 0;
    }
    if ( cp[0] == 0 )
    {
      if ( cp == 0 )
      {
        return;
      }
      free( cp );
      cp = 0;
    }
    else
    {
      i = 0;
      for ( ; i <= 5; i++ )
      {
        present[ i ] = 0;
        // i++;
      }
      present[1] = 1;
      value[1] = cp;
      me->targetClass._abort( &me->isa->name[0], 10 );
      if ( cp == 0 )
      {
        return;
      }
      free( cp );
      cp = 0;
    }
  }
  return;
}
void LYCheckForID( HTStructured *me, BOOLEAN *present, char **value, int attribute )
{
  HTChildAnchor *ID_A = 0;
  char *temp = 0;
  if ( me && me->text && present && present[ attribute ] && value[ attribute ] && value[ attribute ][0] )
  {
    HTSACopy( &temp, value[ attribute ] );
    LYUCTranslateHTMLString( &temp, me->tag_charset, me->tag_charset, 0, 0, 1, 1 );
    if ( temp[0] )
    {
      ID_A = HTAnchor_findChildAndLink( &me->node_anchor, temp, 0, 0 );
      if ( ID_A )
      {
        HText_beginAnchor( &me->text, me->inUnderline, ID_A );
        HText_endAnchor( &me->text, 0 );
      }
    }
    if ( temp == 0 )
    {
      return;
    }
    free( temp );
    temp = 0;
  }
  return;
}
void LYHandleID( HTStructured *me, char *id )
{
  HTChildAnchor *ID_A = 0;
  if ( me && me->text && id && id[0] )
  {
    ID_A = HTAnchor_findChildAndLink( &me->node_anchor, id, 0, 0 );
    if ( ID_A )
    {
      HText_beginAnchor( &me->text, me->inUnderline, ID_A );
      HText_endAnchor( &me->text, 0 );
    }
  }
  return;
}
BOOLEAN LYoverride_default_alignment( HTStructured *me )
{
  if ( me == 0 )
  {
  }
  else
  {
    switch ( me->sp->tag_number )
    {
    case 3:
    case 16:
    case 19:
    case 42:
    case 78:
      me->sp->_stack_element = 1;
      break;
    default:
      break;
    }
  }
  return 0;
}
void LYEnsureDoubleSpace( HTStructured *me )
{
  if ( me && me->text )
  {
    if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
    {
      HText_setLastChar( &me->text, ' ' );
      HText_appendCharacter( &me->text, 13 );
      HText_appendCharacter( &me->text, 13 );
    }
    else
    {
      if ( ( HText_PreviousLineEmpty( &me->text, 0 ) & 255 ) == 0 )
      {
        HText_setLastChar( &me->text, ' ' );
        HText_appendCharacter( &me->text, 13 );
      }
      else
      if ( me->List_Nesting_Level >= 0 )
        HText_NegateLineOne( &me->text );
    }
    me->in_word = 0;
  }
  return;
}
void LYEnsureSingleSpace( HTStructured *me )
{
  if ( me && me->text )
  {
    if ( ( HText_LastLineEmpty( &me->text, 0 ) & 255 ) == 0 )
    {
      HText_setLastChar( &me->text, ' ' );
      HText_appendCharacter( &me->text, 13 );
    }
    else
    if ( me->List_Nesting_Level >= 0 )
      HText_NegateLineOne( &me->text );
    me->in_word = 0;
  }
  return;
}
void LYResetParagraphAlignment( HTStructured *me )
{
  if ( me )
  {
    if ( me->List_Nesting_Level >= 0 || ( me->Division_Level < 0 && ( me->sp->_stack_element == 0 || me->sp->_stack_element == 37 ) ) )
    {
      me->sp->_stack_element = 1;
    }
    else
    {
      me->sp->_stack_element = me->current_default_alignment;
    }
  }
  return;
}
BOOLEAN LYCheckForCSI( HTParentAnchor *anchor, char **url )
{
  if ( anchor == 0 || anchor->address == 0 )
  {
  }
  else
  if ( ( anchor->address[0] != 'f' && anchor->address[0] != 'F' ) || strncasecomp( &anchor->address, "file:", 5 ) )
  {
  }
  else
  {
    if ( ( LYisLocalHost( &anchor->address ) & 255 ) == 0 )
    {
    }
    else
    {
      HTSACopy( url, &anchor->address );
    }
  }
  return 1;
}
BOOLEAN LYCommentHacks( HTParentAnchor *anchor, char *comment )
{
  char *cp = comment;
  size_t len;
  if ( comment == 0 )
  {
  }
  if ( anchor == 0 || anchor->address == 0 )
  {
  }
  if ( strncmp( comment, "!--X-Message-Id: ", 17 ) == 0 )
  {
    char *messageid = 0;
    char *p;
    cp = &comment[17];
    for ( ; cp[0] && '~' <= cp[0] && *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) < 0; cp++ )
    {
      // cp++;
    }
    if ( strcmp( cp, " --" ) )
    {
    }
    cp = &comment[17];
    HTSACopy( &messageid, cp );
    if ( ( LYUCTranslateHTMLString( &messageid, 0, 0, 0, 0, 1, 1 ) & 255 ) == 0 )
    {
    }
    p = messageid;
    for ( ; p[0] && '~' <= p[0] && *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) < 0; p++ )
    {
      // p++;
    }
    if ( strcmp( p, " --" ) )
    {
      if ( messageid )
      {
        free( messageid );
        messageid = 0;
      }
    }
    else
    {
      p = strchr( messageid, '@' );
      if ( p == 0 || p[1] == 0 )
      {
        if ( messageid )
        {
          free( messageid );
          messageid = 0;
        }
      }
      else
      {
        p = messageid;
        len = strlen( p );
        if ( len > 7 && strcmp( &p[ len + -3 ], " --" ) == 0 )
        {
          p[ len + -3 ] = 0;
          if ( HTAnchor_setMessageID( anchor, messageid ) & 255 )
          {
            if ( messageid )
            {
              free( messageid );
              messageid = 0;
            }
          }
          else
          {
            if ( messageid )
            {
              free( messageid );
              messageid = 0;
            }
          }
        }
        else
        {
          if ( messageid )
          {
            free( messageid );
            messageid = 0;
          }
        }
      }
    }
  }
  else
  {
    if ( strncmp( comment, "!--X-Subject: ", 14 ) == 0 )
    {
      char *subject = 0;
      char *p;
      cp = &comment[14];
      for ( ; cp[0]; cp++ )
      {
        if ( cp[0] < '~' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[0] * 2 )) & 16384 ) == 0 )
        {
          break;
        }
        // cp++;
      }
      cp = &comment[14];
      HTSACopy( &subject, cp );
      if ( ( LYUCTranslateHTMLString( &subject, 0, 0, 0, 1, 0, 0 ) & 255 ) == 0 )
      {
      }
      p = subject;
      for ( ; p[0]; p++ )
      {
        if ( p[0] < '~' || ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 16384 ) == 0 )
        {
          if ( subject == 0 )
          {
            break;
          }
          free( subject );
          subject = 0;
          break;
        }
        else
        {
          // p++;
        }
      }
      p = subject;
      len = strlen( p );
      if ( len > 3 && strcmp( &p[ len + -3 ], " --" ) == 0 )
      {
        p[ len + -3 ] = 0;
        if ( HTAnchor_setSubject( anchor, subject ) & 255 )
        {
          if ( subject )
          {
            free( subject );
            subject = 0;
          }
        }
        else
        {
          if ( subject )
          {
            free( subject );
            subject = 0;
          }
        }
      }
      else
      {
        if ( subject )
        {
          free( subject );
          subject = 0;
        }
      }
    }
    else
    {
    }
  }
  return 1;
}
void LYformTitle( char **dst, char *src )
{
  if ( HTCJK == JAPANESE )
  {
    char *tmp_buffer = 0;
    tmp_buffer = malloc( ( strlen( src ) + 1 ) * sizeof( char ) );
    if ( tmp_buffer == 0 )
      outofmem( "./LYCharUtils.c", "LYformTitle" );
    if ( kanji_code == EUC )
      TO_EUC( (unsigned char*)src, (unsigned char*)tmp_buffer );
    else
    if ( kanji_code == SJIS )
      TO_SJIS( (unsigned char*)src, (unsigned char*)tmp_buffer );
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "\nLYformTitle: kanji_code is an unexpected value." );
      }
      strcpy( tmp_buffer, src );
    }
    HTSACopy( dst, tmp_buffer );
    if ( tmp_buffer == 0 )
    {
      return;
    }
    free( tmp_buffer );
    tmp_buffer = 0;
  }
  else
  {
    HTSACopy( dst, src );
  }
  return;
}
#if 0
#endif
