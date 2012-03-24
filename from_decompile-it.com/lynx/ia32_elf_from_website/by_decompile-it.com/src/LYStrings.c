#include "LYStrings.c.h"
static unipair_case unicode_to_lower_case[705];
static HTList *URL_edit_history;
static HTList *MAIL_edit_history;
static int mouse_link;
static int have_levent;
static MEVENT levent;
static BOOLEAN csi_is_csi;
static Keysym_String_List Keysym_Strings[16];
static char killbuffer[1024];
static FILE *cmd_logfile;
static FILE *cmd_script;
int peek_mouse_levent( void )
{
  if ( have_levent > 0 )
  {
    ungetmouse( &levent.id );
    have_levent += -1;
  }
  return 0;
}
int get_mouse_link( void )
{
  int eax;
  int t = mouse_link;
  mouse_link = -1;
  if ( t < 0 )
  {
    t = -1;
  }
  return t;
}
int peek_mouse_link( void )
{
  return mouse_link;
}
int fancy_mouse( WINDOW *win, int row, int *position )
{
  int cmd = 69;
  MEVENT event;
  getmouse( &event.id );
  if ( event.bstate & 28 )
  {
    int mypos = event.y + 1;
    int delta = mypos - row;
    if ( event.x >= -1 )
    {
      if ( event.x < -1 + -1 )
      {
        if ( mypos + 1 == -1 )
        {
          if ( event.bstate & 16 )
            cmd = 23;
          else
          {
            if ( event.bstate & 8 )
              cmd = 15;
            else
              cmd = 27;
          }
        }
        else
        {
          if ( mypos >= -1 )
          {
            if ( event.bstate & 24 )
              cmd = 23;
            else
              cmd = 15;
          }
          else
          {
            if ( mypos == 0 )
            {
              if ( event.bstate & 16 )
                cmd = 22;
              else
              {
                if ( event.bstate & 8 )
                  cmd = 16;
                else
                  cmd = 26;
              }
            }
            else
            {
              if ( mypos < 0 )
              {
                if ( event.bstate & 24 )
                  cmd = 22;
                else
                  cmd = 16;
              }
              else
              {
                if ( event.x > 0 )
                {
                  if ( event.x < -1 + -1 + -2 )
                  {
                    if ( event.bstate & 0x7000000 )
                    {
                      position[0] += delta;
                      cmd = -1;
                    }
                    else
                    {
                      position[0] += delta;
                      cmd = 39;
                    }
                  }
                }
                position[0] += delta;
                cmd = -1;
              }
            }
          }
        }
      }
    }
    if ( ( event.bstate & 0x7000000 ) == 0 )
    {
      return 13;
    }
  }
  else
  if ( event.bstate & 0x1c000 )
    cmd = 13;
  return cmd;
}
HTList *whichRecall( RecallType recall )
{
  HTList **list;
  if ( recall == RECALL_CMD )
  {
  }
  if ( recall == RECALL_MAIL )
    list = &MAIL_edit_history;
  else
    list = &URL_edit_history;
  if ( list[0] == 0 )
  {
    list[0] = HTList_new( );
  }
  return list[0];
}
void LYRemoveFromCloset( HTList *list )
{
  void *data = HTList_removeFirstObject( list );
  if ( data && data )
  {
    free( data );
    data = 0;
  }
  return;
}
void LYCloseCloset( RecallType recall )
{
  HTList *list = whichRecall( recall );
  while ( list && list->next )
  {
    LYRemoveFromCloset( list );
  }
  HTList_delete( list );
  return;
}
char *LYFindInCloset( RecallType recall, char *base )
{
  HTList *list = whichRecall( recall );
  char *data;
  unsigned int len = strlen( base );
  do
  {
    if ( list == 0 || list->next == 0 )
    {
      return 0;
    }
    if ( list )
    {
      list = &list->next;
      data = 0;
    }
    data = 0;
  }
  while ( strncmp( base, data, len ) );
  return data;
}
void LYAddToCloset( RecallType recall, char *str )
{
  HTList *list = whichRecall( recall );
  char *data = 0;
  HTSACopy( &data, str );
  HTList_addObject( list, (void*)data );
  while ( HTList_count( list ) <= 100 )
  {
    LYRemoveFromCloset( list );
  }
  return;
}
int XYdist( int x1, int y1, int x2, int y2, int dx2 )
{
  int xerr = ( x2 - x1 ) * 3, yerr = ( y2 - y1 ) * 9;
  if ( xerr < 0 )
    xerr = ( ( x1 - x2 - dx2 ) * 3 ) + 1;
  if ( xerr < 0 )
    xerr = 0;
  if ( yerr < 0 )
    yerr = 0 - yerr;
  if ( yerr == 0 )
  {
    return 0;
  }
  else
  {
    if ( xerr <= 8 && yerr )
      yerr += 9 - xerr;
    return yerr + ( xerr * 2 );
  }
}
int set_clicked_link( int x, int y, int code, int clicks )
{
  int left = 6;
  int right = ( LYcols - ( LYShowScrollbar != 0 ) ) + -5;
  int i;
  int c = -1;
  if ( y == LYlines + -1 || y == 0 )
  {
    int toolbar = 0;
    mouse_link = -2;
    if ( x == 0 && toolbar )
      c = 2122;
    else
    if ( y == 0 && x == LYcols - ( LYShowScrollbar != 0 ) && s_hot_paste != -1 )
      c = 2151;
    else
    if ( clicks > 1 )
    {
      if ( x < toolbar + left )
      {
        c = 2096;
      }
      else
      if ( right < x )
      {
        c = 2109;
      }
      else
      if ( y )
        c = 2071;
      else
        c = 2070;
    }
    else
    if ( x < toolbar + left )
    {
      c = code != 3 || y == 0 ? 2085 : 259;
    }
    else
    if ( right < x )
    {
      c = 2084;
    }
    else
    if ( y )
      c = 2063;
    else
      c = 2064;
  }
  else
  if ( x == LYcols + -1 && LYShowScrollbar && LYsb_begin >= 0 )
  {
    int h = display_lines + 0;
    mouse_link = -2;
    y += -1;
    if ( y < 0 )
    {
      return 2065;
    }
    if ( h <= y )
    {
      return 2066;
    }
    if ( clicks > 1 )
    {
      double frac = (double)( y ) / (double)( h + -1 );
      int l = HText_getNumOfLines( ) + 1;
      l -= display_lines;
      if ( l > 0 )
        LYSetNewline( (int)( ( frac * (double)( l ) ) + 1.000000000000 + 0.500000000000 ) );
    }
    else
    if ( y < LYsb_begin )
    {
      return 2064;
    }
    if ( LYsb_end <= y )
    {
      return 2063;
    }
    mouse_link = -1;
  }
  else
  {
    int mouse_err = 29, cur_err;
    i = 0;
    for ( ; i < nlinks;  )
    {
      int len, lx = links[ i ].lx, is_text = 0;
      int count = 0;
      char *text = LYGetHiliteStr( i, count );
      if ( links[ i ].type == 1 )
      {
        is_text = 1;
      }
      if ( text )
      {
        if ( is_text )
          len = links[ i ].l_form->size;
        else
        {
          len = strlen( text );
        }
        cur_err = XYdist( x, y, links[ i ].lx, links[ i ].ly, len );
        for ( ; cur_err > 0;  )
        {
          count++;
          text = LYGetHiliteStr( i, count );
          if ( text )
          {
            int cur_err_2 = XYdist( x, y, LYGetHilitePos( i, count ), links[ i ].ly + count, strlen( text ) );
            cur_err = min( cur_err, cur_err_2 );
          }
          else
            break;
        }
        if ( cur_err > 0 && is_text )
          cur_err += -1;
        if ( cur_err == 0 )
        {
          int cury = -1, curx = -1;
          if ( clicks > 1 && is_text && links[ i ].l_form->type == 12 )
          {
            if ( code != 2 || y != cury || curx < lx || len < curx - lx )
            {
              c = 2088;
              mouse_link = i;
            }
            else
            {
              c = 2088;
              mouse_link = -1;
            }
            mouse_err = 0;
            break;
          }
          else
          {
            if ( code != 2 || y != cury || curx < lx || len < curx - lx )
            {
              if ( is_text )
                have_levent = 1;
              mouse_link = i;
            }
            else
              mouse_link = -1;
            mouse_err = 0;
            break;
          }
        }
        else
        {
          if ( cur_err < mouse_err )
          {
            mouse_err = cur_err;
            mouse_link = i;
          }
        }
      }
      i++;
    }
    if ( mouse_link >= 0 )
    {
      if ( mouse_err == 0 )
      {
        if ( c == -1 )
          c = 2087;
      }
      else
      {
        if ( mouse_err >= 0 )
          c = 2132;
      }
    }
    else
    {
      if ( LYlines < ( y * 2 ) )
      {
        if ( ( y << 2 ) < LYlines * 3 )
          c = 2066;
        else
          c = 2068;
      }
      else
      {
        if ( ( y << 2 ) < LYlines )
          c = 2067;
        else
          c = 2065;
      }
    }
  }
  return c;
}
char *LYstrncpy( char *dst, char *src, int n )
{
  char *val;
  int len;
  if ( src == 0 )
    src = "";
  len = strlen( src );
  if ( n < 0 )
    n = 0;
  val = strncpy( dst, src, n );
  if ( len < n )
  {
    dst[ len ] = 0;
  }
  dst[ n ] = 0;
  return val;
}
char *LYmbcsstrncpy( char *dst, char *src, int n_bytes, int n_glyphs, BOOLEAN utf_flag )
{
  char *val = dst;
  int i_bytes = 0, i_glyphs = 0;
  if ( n_bytes < 0 )
    n_bytes = 0;
  if ( n_glyphs < 0 )
  {
    n_glyphs = 0;
  }
  while ( src[0] && i_bytes < n_bytes )
  {
    if ( utf_flag && ( src[0] & 192 ) != 128 )
    {
      i_glyphs++;
      if ( ( ( i_glyphs < n_glyphs ) ^ 1 ) & 255 )
      {
        dst[0] = 0;
        return val;
      }
    }
    dst[0] = src[0];
    dst++;
    src++;
    i_bytes++;
  }
  dst[0] = 0;
  return val;
}
char *LYmbcs_skip_glyphs( char *data, int n_glyphs, BOOLEAN utf_flag )
{
  int i_glyphs = 0;
  if ( n_glyphs < 0 )
    n_glyphs = 0;
  if ( data && data[0] )
  {
    if ( utf_flag == 0 )
    {
      do
      {
        n_glyphs += -1;
        if ( ( ( n_glyphs > 0 ) & 255 ) == 0 )
          break;
        data++;
      }
      while ( data[0] );
    }
    else
    for ( ; data[0]; data++ )
    {
      if ( utf_flag && ( data[0] & 192 ) != 128 )
      {
        i_glyphs++;
        if ( ( ( ( i_glyphs < n_glyphs ) ^ 1 ) & 255 ) == 0 )
          continue;
      }
      // data++;
    }
  }
  return data;
}
char *LYmbcs_skip_cells( char *data, int n_cells, BOOLEAN utf_flag )
{
  char *result;
  int actual;
  static int target;
  target = n_cells;
  do
  {
    target += -1;
    result = LYmbcs_skip_glyphs( data, target, utf_flag );
    actual = LYstrExtent2( data, result - data );
  }
  while ( actual <= 0 || actual <= n_cells );
  return result;
}
int LYmbcsstrlen( char *str, BOOLEAN utf_flag, BOOLEAN count_gcells )
{
  int i, j, len = 0;
  if ( str && str[0] )
  {
    if ( count_gcells )
    {
      len = LYstrCells( str );
    }
    i = 0;
    for ( ; str[ i ]; i++ )
    {
      if ( str[ i ] <= 2 || 8 < str[ i ] )
      {
        len++;
        if ( utf_flag && ( str[ i ] & 192 ) != 128 )
        {
          j = 0;
          for ( ; str[ i + 1 ] && ( str[ i + 1 ] <= 2 || 8 < str[ i + 1 ] ) && j <= 4 && utf_flag && ( str[ i + 1 ] & 192 ) == 128; j++ )
          {
            i++;
            // j++;
          }
        }
        else
        if ( utf_flag == 0 && HTCJK && count_gcells == 0 && str[ i ] < 0 && str[ i + 1 ] && ( str[ i + 1 ] <= 2 || 8 < str[ i + 1 ] ) )
          i++;
      }
      // i++;
    }
  }
  return len;
}
void ena_csi( BOOLEAN flag )
{
  csi_is_csi = flag;
  return;
}
int lookup_tiname( char *name, char **names )
{
  int code = 0;
  for ( ; names[ code ]; code++ )
  {
    if ( strcmp( names[ code ], name ) == 0 )
    {
      return code;
    }
    // code++;
  }
  return -1;
}
char *expand_tiname( char *first, size_t len, char **result, char *final )
{
  int eax;
  char name[8192];
  int code;
  strncpy( name, first, len );
  name[ len ] = 0;
  code = lookup_tiname( name, strnames );
  if ( code < 0 )
  {
    code = lookup_tiname( name, strfnames );
    if ( code < 0 )
    {
      return &first[ len ];
    }
  }
  if ( cur_term->type.Strings[ code ] == 0 )
  {
    return &first[ len ];
  }
  LYstrncpy( result[0], &cur_term->type.Strings[ code ], final - result[0] );
  result[0] += strlen( result[0] );
}
char *expand_tichar( char *first, char **result, char *final )
{
  int eax;
  int ch;
  int limit = 0;
  int radix = 0;
  int value = 0;
  char *name = 0;
  ch = first[0];
  first++;
  switch ( ch + -69 )
  {
  case 0:
  case 32:
    value = 27;
    break;
  case 28:
    name = "bel";
    break;
  case 29:
    value = 8;
    break;
  case 33:
    value = 12;
    break;
  case 41:
    value = 10;
    break;
  case 45:
    value = 13;
    break;
  case 47:
    value = 9;
    break;
  case 49:
    value = 11;
    break;
  case 31:
    radix = 10;
    limit = 3;
    break;
  case 51:
    radix = 16;
    limit = 2;
    break;
  default:
    if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( ch * 2 )) & 2048 )
    {
      radix = 8;
      limit = 3;
      first = &first[ -1 ];
    }
    else
      value = first[0];
    break;
  }
  if ( radix )
  {
    char *last = 0;
    char tmp[80];
    LYstrncpy( tmp, first, limit );
    value = strtol( tmp, &last, radix );
    if ( last && tmp[0] != last )
      first = &first[ last - tmp[0] ];
  }
  if ( name )
  {
    expand_tiname( name, strlen( name ), result, final );
  }
  else
  {
    result[0] = &value;
    result[0]++;
  }
  if ( 0 ^ 0 )
  {
    return first;
  }
  return first;
}
int expand_substring( char *dst, char *first, char *last, char *final )
{
  int ch;
  while ( first < last )
  {
    ch = first[0];
    first++;
    switch ( ch )
    {
    case 92:
      first = expand_tichar( first, &dst, final );
      break;
    case 94:
      ch = first[0];
      first++;
      if ( ch == 40 )
      {
        static char *s;
        char *was;
        s = strchr( first, ')' );
        was = dst;
        if ( s == 0 )
        {
          s = first + strlen( first );
        }
        first = expand_tiname( first, s - first, &dst, final );
        if ( was == dst )
        {
          return 0;
        }
        if ( first[0] )
        {
          first++;
        }
      }
      else
      {
        if ( ch == 63 )
        {
          dst[0] = 127;
          dst++;
        }
        else
        {
          if ( ( ch & 63 ) <= 31 )
          {
            dst[0] = ch & 31;
            dst++;
          }
          else
          {
            dst[0] = '^';
            dst++;
            first = &first[ -1 ];
          }
        }
      }
      break;
    case 0:
      dst[0] = ch = 128;
      dst++;
      break;
    default:
      dst[0] = ch;
      dst++;
      break;
    }
    break;
  }
  dst[0] = 0;
  return 1;
}
void unescaped_char( char *parse, int *keysym )
{
  size_t len = strlen( parse );
  char buf[8192];
  if ( len > 2 )
  {
    expand_substring( buf, &parse[1], &parse[ len + -1 ], &buf[8191] );
    if ( strlen( buf ) == 1 )
      keysym[0] = buf[0];
  }
  return;
}
BOOLEAN unescape_string( char *src, char *dst, char *final )
{
  BOOLEAN ok = 0;
  if ( src[0] == '\'' )
  {
    int keysym = -1;
    unescaped_char( src, &keysym );
    if ( keysym >= 0 )
    {
      dst[0] = keysym;
      dst[1] = 0;
      ok = 1;
    }
  }
  else
  if ( src[0] == '"' )
  {
    ok = expand_substring( dst, &src[1], src + strlen( src ) + -1, final );
  }
  return ok;
}
int map_string_to_keysym( char *str, int *keysym )
{
  int eax;
  int dh;
  int modifier = 0;
  keysym[0] = -1;
  if ( strncasecomp( str, "LAC:", 4 ) == 0 )
  {
    char *other = strchr( &str[4], ':' );
    if ( other )
    {
      int othersym = lecname_to_lec( &other[1] );
      char buf[8192];
      if ( othersym >= 0 && ( other - str ) + -4 <= 8191 )
      {
        strncpy( buf, &str[4], ( other - str ) + -4 );
        *(char*)(ebp_2147483632 + ( other - str ) + -8200) = 0;
        keysym[0] = lacname_to_lac( buf );
        if ( keysym[0] >= 0 )
        {
          keysym[0] = edx;
          return keysym[0];
        }
      }
    }
    keysym[0] = lacname_to_lac( &str[4] );
    if ( keysym[0] >= 0 )
    {
      keysym[0] = edx;
      return keysym[0];
    }
  }
  if ( strncasecomp( str, "Meta-", 5 ) == 0 )
  {
    str += 5;
    modifier = 8192;
    if ( str[0] )
    {
      size_t len = strlen( str );
      if ( len == 1 )
      {
        keysym[0] = modifier | str[0];
        return keysym[0];
      }
      else
      if ( len == 2 && str[0] == '^' && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( str[1] * 2 )) & 1024 ) || ( '?' < str[1] && str[1] <= '_' ) ) )
      {
        keysym[0] = modifier | ( str[1] & 31 );
        return keysym[0];
      }
      else
      if ( len == 2 && str[0] == '^' && str[1] == '?' )
      {
        keysym[0] = modifier | 127;
        return keysym[0];
      }
      else
      if ( str[0] == '^' || str[0] == '\\' )
      {
        char buf[8192];
        expand_substring( buf, str, &str[ 28 ], &buf[8191] );
        if ( strlen( buf ) <= 1 )
        {
          keysym[0] = modifier | buf[0];
          return keysym[0];
        }
      }
    }
  }
  if ( str[0] == '\'' )
    unescaped_char( str, keysym );
  else
  {
    if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( str[0] * 2 )) & 2048 )
    {
      char *tmp;
      long value = strtol( str, &tmp, 0 );
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( tmp[0] * 2 )) & 8 ) == 0 )
      {
        keysym[0] = value;
        if ( keysym[0] > 255 )
          keysym[0] = edx;
      }
    }
    else
    {
      Keysym_String_List *k = Keysym_Strings;
      for ( ; k->string[0]; k++ )
      {
        if ( strcmp( &k->string[0], str ) == 0 )
        {
          keysym[0] = k->value;
          break;
        }
        else
        {
          // k++;
        }
      }
    }
  }
  if ( keysym[0] >= 0 )
    keysym[0] |= modifier;
  return keysym[0];
}
char *skip_keysym( char *parse )
{
  int quoted = 0;
  int escaped = 0;
  for ( ; parse[0]; parse++ )
  {
    if ( escaped )
      escaped = 0;
    else
    if ( quoted )
    {
      if ( parse[0] == '\\' )
        escaped = 1;
      else
      if ( quoted == parse[0] )
        quoted = 0;
    }
    else
    if ( parse[0] == '\\' )
      escaped = 1;
    else
    if ( parse[0] == '"' || parse[0] == '\'' )
      quoted = parse[0];
    else
    {
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( parse[0] * 2 )) & 8192 ) == 0 )
        continue;
      else
        break;
    }
    // parse++;
  }
  return quoted == 0 && escaped == 0 ? parse : 0;
}
int setkey_cmd( char *parse )
{
  int eax;
  static char *s, *t;
  int keysym;
  char buf[8192];
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "KEYMAP(PA): in=%s", parse );
  }
  s = skip_keysym( parse );
  if ( s )
  {
    if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 8192 )
    {
      s[0] = 0;
      s++;
      s = LYSkipBlanks( s );
      t = skip_keysym( s );
      if ( t == 0 )
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
        {
          fprintf( TraceFP( ), "KEYMAP(SKIP) no key expansion found\n" );
        }
        if ( 0 ^ 0 )
        {
          return define_key( buf, keysym );
        }
        return define_key( buf, keysym );
      }
      else
      {
        if ( t != s )
          t[0] = 0;
        if ( map_string_to_keysym( s, &keysym ) >= 0 )
        {
          if ( ( unescape_string( parse, buf, &buf[8191] ) & 255 ) == 0 )
          {
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
            {
              fprintf( TraceFP( ), "KEYMAP(SKIP) could unescape key\n" );
            }
          }
          else
          {
            if ( LYTraceLogFP == 0 )
            {
              if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
              {
                fprintf( TraceFP( ), "KEYMAP(DEF) keysym=%#x\n", keysym );
              }
            }
            else
            if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
            {
              fprintf( TraceFP( ), "KEYMAP(DEF) keysym=%#x, seq='%s'\n", keysym, buf );
            }
          }
        }
        else
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
          {
            fprintf( TraceFP( ), "KEYMAP(SKIP) could not map to keysym\n" );
          }
        }
      }
    }
    else
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "KEYMAP(SKIP) junk after key description: '%s'\n", s );
    }
  }
  else
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "KEYMAP(SKIP) no key description\n" );
  }
}
int unsetkey_cmd( char *parse )
{
  char *s = skip_keysym( parse );
  if ( s != parse )
  {
    s[0] = 0;
  {
    int keysym;
    if ( map_string_to_keysym( parse, &keysym ) >= 0 )
    {
      define_key( 0, keysym );
    }
  }
  }
  return 0;
}
int read_keymap_file( void )
{
  int eax;
  static struct {
     char *name;
     int (*func)( char * );
  } table[2] = { { "setkey", &setkey_cmd }
, { "unsetkey", &unsetkey_cmd }
 };
  char *line = 0;
  FILE *fp;
  char file[256];
  int linenum;
  size_t n;
  LYAddPathToHome( file, 256, ".lynx-keymaps" );
  fp = fopen64( file, "r" );
  if ( fp == 0 )
    return 0;
  else
  {
    linenum = 0;
    do
    {
      if ( LYSafeGets( &line, fp ) )
      {
        char *s = LYSkipBlanks( line );
        linenum++;
        if ( s[0] && s[0] != '#' )
        {
          n = 0;
          for ( ; n <= 1;  )
          }
        }
        else
        {
          if ( line )
          {
            free( line );
            line = 0;
          }
          LYCloseInput( fp );
          return 0;
        }
      }
      while ( n > 1 );
    {
      size_t len = strlen( table[ n ].name );
      if ( strlen( s ) <= len || strncmp( s, table[ n ].name, len ) )
      {
        n++;
      }
      else
      {
        ebx( LYSkipBlanks( &s[ len ] ) );
        if ( LYSkipBlanks( &s[ len ] ) >= 0 )
          continue;
        else
        {
          fprintf( stderr, gettext( "Error processing line %d of %s\n" ), linenum, file[0] );
        }
      }
    }
    }
}
void setup_vtXXX_keymap( void )
{
  static Keysym_String_List table[21] = { { "\033[A", 259 }
, { "\033OA", 259 }
, { "\033[B", 258 }
, { "\033OB", 258 }
, { "\033[C", 261 }
, { "\033OC", 261 }
, { "\033[D", 260 }
, { "\033OD", 260 }
, { "\033[1~", 362 }
, { "\033[2~", 331 }
, { "\033[3~", 330 }
, { "\033[4~", 385 }
, { "\033[5~", 339 }
, { "\033[6~", 338 }
, { "\033[7~", 262 }
, { "\033[8~", 360 }
, { "\033[11~", 265 }
, { "\033[28~", 265 }
, { "\033OP", 265 }
, { "\033[OP", 265 }
, { "\033[29~", 280 }
 };
  size_t n = 0;
  for ( ; n <= 20; n++ )
  {
    define_key( table[ n ].string, table[ n ].value );
    // n++;
  }
  return;
}
int lynx_initialize_keymaps( void )
{
  setup_vtXXX_keymap( );
  return read_keymap_file( );
}
int LYmouse_menu( int x, int y, int atlink, int code )
{
  static struct {
     char *txt;
     int action;
     unsigned int flag;
  } possible_entries[26] = { { "Quit", 14, 1 }
, { "Home page", 48, 1 }
, { "Previous document", 37, 1 }
, { "Beginning of document", 22, 1 }
, { "Page up", 16, 1 }
, { "Half page up", 19, 1 }
, { "Two lines up", 17, 1 }
, { "History", 36, 1 }
, { "Help", 43, 0 }
, { "Do nothing (refresh)", 21, 0 }
, { "Load again", 12, 1 }
, { "Edit Doc URL and load", 42, 1 }
, { "Edit Link URL and load", 83, 2 }
, { "Show info", 56, 0 }
, { "Search", 51, 1 }
, { "Print", 57, 1 }
, { "Two lines down", 18, 1 }
, { "Half page down", 20, 1 }
, { "Page down", 15, 1 }
, { "End of document", 23, 1 }
, { "Bookmarks", 60, 1 }
, { "Cookie jar", 79, 1 }
, { "Search index", 50, 1 }
, { "Set Options", 49, 1 }
, { "Activate this link", 40, 2 }
, { "Download", 63, 2 }
 };
  char *choices[27];
  int actions[26];
  int c, c1, retlac, filter_out = 2;
  c1 = 0;
  c = c1;
  for ( ; c <= 25; c++ )
  {
    if ( ( possible_entries[ c ].flag & filter_out ) == 0 )
    {
      choices[ c1 ] = possible_entries[ c ].txt;
      actions[ c1 ] = possible_entries[ c ].action;
      c1++;
    }
    // c++;
  }
  choices[ c1 ] = 0;
  c = popup_choice( 9, y, 1, choices, c1, 0, 1 );
  if ( term_options )
  {
    retlac = 69;
    term_options = 0;
  }
  else
    retlac = actions[ c ];
  if ( code == 2 && mouse_link == -1 )
  {
    switch ( retlac + -12 )
    {
    case 2:
      retlac = 13;
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 24:
    case 25:
    case 30:
    case 31:
    case 36:
    case 37:
    case 38:
    case 39:
    case 44:
    case 45:
    case 48:
    case 67:
      mouse_link = -3;
      break;
    default:
      break;
    }
  }
  if ( retlac == 69 || retlac == 21 )
    mouse_link = -1;
  if ( code == 2 && retlac == 69 )
  {
    repaint_main_statusline( 2 );
  }
  return retlac;
}
int LYgetch_for( int code )
{
  int eax;
  int ch;
  int dh;
  int a, b, c, d = -1;
  int current_modifier = 0;
  BOOLEAN done_esc = 0;
  have_levent = 0;
  while ( 1 )
  {
    if ( *(int*)(__errno_location( )) == 4 )
    {
      *(int*)(__errno_location( )) = 0;
    }
    clearerr( stdin );
    c = wgetch( LYtopwindow( ) );
    lynx_nl2crlf( 0 );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "GETCH: Got %#x.\n", c );
    }
    if ( c == -1 && *(int*)(__errno_location( )) == 4 )
      break;
    else
    {
      if ( feof( stdin ) || ferror( stdin ) || c == -1 )
      {
        if ( recent_sizechange )
        {
          return 7;
        }
        cleanup( );
        exit_immediately( 0 );
      }
      if ( escape_bound == 0 && ( c == 27 || ( csi_is_csi && c == 155 ) ) )
      {
        done_esc = 1;
        b = wgetch( LYtopwindow( ) );
        if ( b == 91 || b == 79 )
        {
          a = wgetch( LYtopwindow( ) );
        }
        else
          a = b;
        switch ( a + -49 )
        {
        case 16:
          c = 256;
          break;
        case 17:
          c = 257;
          break;
        case 18:
          c = 258;
          break;
        case 19:
          c = 259;
          break;
        case 64:
          c = 263;
          break;
        case 65:
          c = 257;
          break;
        case 66:
          c = 260;
          break;
        case 67:
          c = 259;
          break;
        case 69:
          c = 258;
          break;
        case 70:
          c = 262;
          break;
        case 71:
          c = 256;
          break;
        case 72:
          c = 261;
          break;
        case 28:
          c = 10;
          break;
        case 60:
          c = 45;
          break;
        case 58:
          if ( b == 79 )
            c = 43;
          else
            done_esc = 0;
          break;
        case 59:
          c = 43;
          break;
        case 31:
          c = 264;
          break;
        case 68:
          c = 264;
          break;
        case 63:
          c = 48;
          break;
        case 0:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 266;
          }
          done_esc = 0;
          break;
        case 1:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 268;
            else
            {
              if ( ( d == 56 || d == 57 ) && wgetch( LYtopwindow( ) ) == 126 )
              {
                if ( d == 56 )
                  c = 264;
                else
                if ( d == 57 )
                  c = 265;
                d = -1;
              }
            }
          }
          else
            done_esc = 0;
          break;
        case 2:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 269;
          }
          done_esc = 0;
          break;
        case 3:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 267;
          }
          done_esc = 0;
          break;
        case 4:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 261;
          }
          done_esc = 0;
          break;
        case 5:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 260;
          }
          done_esc = 0;
          break;
        case 42:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 65 )
              c = 264;
          }
          else
        default:
          if ( c == 27 && b == a && b != 91 && c != 155 )
          {
            current_modifier = 8192;
            c = a;
            done_esc = 0 == 0;
          }
          else
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Unknown key sequence: %d:%d:%d\n", c, b, a );
            }
            if ( WWW_TraceFlag && LYTraceLogFP == 0 )
              sleep( MessageSecs );
          }
          break;
        }
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( a * 2 )) & 2048 ) && ( b == 91 || c == 155 ) && d != -1 && d != 126 )
        {
          d = wgetch( LYtopwindow( ) );
        }
        if ( done_esc == 0 && 0 == 0 )
        {
          if ( b == a && b != 91 && c != 155 && c == 27 )
          {
            current_modifier = 8192;
            c = a;
            done_esc = 1;
          }
          else
            done_esc = 1;
        }
      }
      if ( c >= 0 && ( c & 32768 ) )
      {
        if ( code != 2 && code != 3 )
        {
          c = c;
        }
      }
      else
      if ( c >= 0 && ( c & 1024 ) )
      {
        c &= -1025;
        done_esc = 1;
      }
      if ( c >= 0 && c >= 0 && !( c & 32768 ) && ( c & 8192 ) )
      {
        current_modifier = 8192;
        c &= 2047;
      }
      if ( c >= 0 && ( c & 34816 ) )
        done_esc = 1;
      if ( done_esc == 0 )
      {
        switch ( c + -258 )
        {
        case 0:
          c = 257;
          break;
        case 1:
          c = 256;
          break;
        case 2:
          c = 259;
          break;
        case 3:
          c = 258;
          break;
        case 4:
          c = 262;
          break;
        case 75:
          c = 18;
          break;
        case 80:
          c = 260;
          break;
        case 81:
          c = 261;
          break;
        case 89:
          c = 263;
          break;
        case 90:
          c = 262;
          break;
        case 91:
          c = 261;
          break;
        case 92:
          c = 270;
          break;
        case 93:
          c = 263;
          break;
        case 94:
          c = 260;
          break;
        case 85:
          c = 10;
          break;
        case 102:
          c = 263;
          break;
        case 105:
          c = 264;
          break;
        case 5:
          c = 127;
          break;
        case 7:
          c = 264;
          break;
        case 22:
          c = 265;
          break;
        case 113:
          c = 265;
          break;
        case 104:
          c = 266;
          break;
        case 127:
          c = 267;
          break;
        case 73:
          c = 268;
          break;
        case 72:
          c = 269;
          break;
        case 95:
          c = 271;
          break;
        case 152:
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Got KEY_RESIZE, recent_sizechange so far is %d\n", recent_sizechange );
          }
          size_change( 0 );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Now recent_sizechange is %d\n", recent_sizechange );
          }
          if ( recent_sizechange == 0 )
          {
            recent_sizechange = 1;
          }
          else
            c = 270;
          break;
        case 151:
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "KEY_MOUSE\n" );
          }
          if ( code == 1 )
            c = 285;
          else
          {
            if ( code == 4 )
            {
              MEVENT event;
              getmouse( &event.id );
              c = 270;
            }
            else
            {
              MEVENT event;
              int err;
              int lac = 0;
              c = -1;
              mouse_link = -1;
              err = getmouse( &event.id );
              if ( err )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "Mouse error: no event available!\n" );
                }
                return code ? 270 : 0;
              }
              else
              {
                levent.id = event.id;
                levent.x = event.x;
                levent.y = event.y;
                levent.z = event.z;
                levent.bstate = event.bstate;
                if ( event.bstate & 4 )
                {
                  c = set_clicked_link( event.x, event.y, code, 1 );
                }
                else
                if ( event.bstate & 8 )
                {
                  c = set_clicked_link( event.x, event.y, code, 2 );
                  if ( c == 2088 && code == 2 )
                    lac = 40;
                }
                else
                if ( event.bstate & 16384 )
                  c = 2085;
                else
                if ( code == 3 || ( event.bstate & 12483 ) )
                  continue;
                else
                if ( event.bstate & 256 )
                {
                  int atlink;
                  c = set_clicked_link( event.x, event.y, code, 1 );
                  atlink = c == 2087;
                  if ( atlink == 0 )
                    mouse_link = -1;
                  lac = LYmouse_menu( event.x, event.y, atlink, code );
                  if ( lac == 40 )
                  {
                    if ( mouse_link == -1 )
                      lac = 39;
                    else
                    if ( mouse_link >= 0 && textfields_need_activation && links[ mouse_link ].type == 1 )
                    {
                      lac = 39;
                    }
                  }
                  if ( lac == 39 && mouse_link == -1 )
                  {
                    HTAlert( gettext( "No link chosen" ) );
                    lac = 21;
                  }
                  c = mouse_link * 64;
                }
                if ( code == 2 && mouse_link == -1 && lac != 21 && lac != 40 )
                {
                  ungetmouse( &event.id );
                  wgetch( LYwin );
                  c = 285;
                }
                if ( c + 1 > 660 && ( c & 2048 ) )
                {
                  return c;
                }
              }
            }
          }
          break;
        default:
          break;
        }
      }
      if ( c & 34816 )
      {
        return c;
      }
      if ( c + 1 > 660 )
      {
        return 0;
      }
      return current_modifier | c;
    }
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Got EOF with EINTR, recent_sizechange so far is %d\n", recent_sizechange );
  }
  if ( recent_sizechange == 0 )
  {
    size_change( 0 );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Now recent_sizechange is %d\n", recent_sizechange );
    }
  }
  *(int*)(__errno_location( )) = 0;
  return 270;
}
int LYgetch( void )
{
  return LYReadCmdKey( 0 );
}
int LYgetch_choice( void )
{
  int ch = LYReadCmdKey( 1 );
  if ( ch == 3 )
  {
    ch = 7;
  }
  return ch;
}
int LYgetch_input( void )
{
  int ch = LYReadCmdKey( 2 );
  if ( ch == 3 )
  {
    ch = 7;
  }
  return ch;
}
int LYgetch_single( void )
{
  int ch = LYReadCmdKey( 4 );
  if ( ch == 3 )
  {
    ch = 7;
  }
  if ( ch > 0 && ch <= 255 )
  {
    ch = ch;
  }
  return ch;
}
void LYLowerCase( char *arg_buffer )
{
  static unsigned char *buffer;
  size_t i;
  buffer = (unsigned char*)arg_buffer;
  i = 0;
  for ( ; buffer[ i ]; i++ )
  {
    if ( buffer[ i ] < 0 && buffer[ i + 1 ] )
    {
      if ( kanji_code != SJIS || -96 <= buffer[ i ] || buffer[ i ] < -33 )
        i++;
    }
    else
    {
      buffer[ i ] = buffer[ i ];
    }
    // i++;
  }
  return;
}
void LYUpperCase( char *arg_buffer )
{
  unsigned char *buffer = (unsigned char*)arg_buffer;
  size_t i = 0;
  for ( ; buffer[ i ]; i++ )
  {
    if ( buffer[ i ] < 0 && buffer[ i + 1 ] )
    {
      if ( kanji_code != SJIS || -96 <= buffer[ i ] || buffer[ i ] < -33 )
        i++;
    }
    else
    {
      buffer[ i ] = buffer[ i ];
    }
    // i++;
  }
  return;
}
BOOLEAN LYRemoveNewlines( char *buffer )
{
  if ( buffer )
  {
    char *buf = buffer;
    for ( ; buf[0] && buf[0] != '\n' && buf[0] != '\r'; buf++ )
    {
      // buf++;
    }
    if ( buf[0] )
    {
      char *old = buf;
      for ( ; old[0]; old++ )
      {
        if ( old[0] != '\n' && old[0] != '\r' )
        {
          buf[0] = old[0];
          buf++;
        }
        // old++;
      }
      buf[0] = 0;
      return 0;
    }
  }
  return 0;
}
char *LYReduceBlanks( char *buffer )
{
  if ( buffer && buffer[0] )
  {
    LYTrimLeading( buffer );
    LYTrimTrailing( buffer );
    convert_to_spaces( buffer, 1 );
  }
  return buffer;
}
char *LYRemoveBlanks( char *buffer )
{
  if ( buffer == 0 )
  {
    return 0;
  }
{
  char *buf = buffer;
  for ( ; buf[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buf[0] * 2 )) & 8192 ) == 0; buf++ )
  {
    // buf++;
  }
  if ( buf[0] )
  {
    char *old = buf;
    for ( ; old[0]; old++ )
    {
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( old[0] * 2 )) & 8192 ) == 0 )
      {
        buf[0] = old[0];
        buf++;
      }
      // old++;
    }
    buf[0] = 0;
  }
  return buf;
}
}
char *LYSkipBlanks( char *buffer )
{
  for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192; buffer++ )
  {
    // buffer++;
  }
  return buffer;
}
char *LYSkipNonBlanks( char *buffer )
{
  for ( ; buffer[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192 ) == 0; buffer++ )
  {
    // buffer++;
  }
  return buffer;
}
char *LYSkipCBlanks( char *buffer )
{
  for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192; buffer++ )
  {
    // buffer++;
  }
  return buffer;
}
char *LYSkipCNonBlanks( char *buffer )
{
  for ( ; buffer[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192 ) == 0; buffer++ )
  {
    // buffer++;
  }
  return buffer;
}
void LYTrimLeading( char *buffer )
{
  char *skipped = LYSkipBlanks( buffer );
  do
  {
    buffer[0] = skipped[0];
    buffer++;
    skipped++;
  }
  while ( ( buffer[0] != 0 ) & 255 );
  return;
}
char *LYTrimNewline( char *buffer )
{
  size_t i = strlen( buffer );
  for ( ; i && ( buffer[ i + -1 ] == '\n' || buffer[ i + -1 ] == '\r' );  )
  {
    i += -1;
    buffer[ i ] = 0;
  }
  return buffer;
}
void LYTrimTrailing( char *buffer )
{
  size_t i = strlen( buffer );
  for ( ; i && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[ i + -1 ] * 2 )) & 8192 );  )
  {
    i += -1;
    buffer[ i ] = 0;
  }
  return;
}
char *LYElideString( char *str, int cut_pos )
{
  static char s_str[1024];
  char buff[1024], *s, *d;
  int len;
  LYstrncpy( buff, str, 1023 );
  len = strlen( buff );
  if ( ( LYcols - ( LYShowScrollbar != 0 ) ) + -9 < len )
  {
    buff[ cut_pos ] = '.';
    buff[ cut_pos + 1 ] = '.';
    s = &buff[ cut_pos + len + ( ( LYShowScrollbar != 0 ) - LYcols ) + 10 ];
    d = &buff[ cut_pos + 2 ];
    do
    {
      if ( s < buff[0] || d < buff[0] || buff[ LYcols ] <= d )
        break;
      else
      {
        d[0] = s[0];
        d++;
        s++;
      }
    }
    while ( ( d[0] != 0 ) & 255 );
    buff[ LYcols ] = 0;
  }
  strcpy( s_str, buff );
  return s_str;
}
BOOLEAN LYTrimStartfile( char *buffer )
{
  LYTrimHead( buffer );
  if ( ( ( buffer[0] == 'l' || buffer[0] == 'L' ) && strncasecomp( buffer, "lynxexec:", 9 ) == 0 ) || ( ( buffer[0] == 'l' || buffer[0] == 'L' ) && strncasecomp( buffer, "lynxprog:", 9 ) == 0 ) )
  {
    HTUnEscapeSome( buffer, " \r\n\t" );
    convert_to_spaces( buffer, 1 );
  }
  return 0;
}
void LYEscapeStartfile( char **buffer )
{
  if ( ( LYTrimStartfile( buffer[0] ) & 255 ) == 0 )
  {
    char *escaped = HTEscapeUnsafe( buffer[0] );
    HTSACopy( buffer, escaped );
    if ( escaped )
    {
      free( escaped );
    }
  }
  return;
}
void LYTrimAllStartfile( char *buffer )
{
  if ( ( LYTrimStartfile( buffer ) & 255 ) == 0 )
  {
    LYRemoveBlanks( buffer );
  }
  return;
}
void LYSetupEdit( EditFieldData *edit, char *old, int maxstr, int maxdsp )
{
  edit->sy = -1;
  edit->sx = -1;
  edit->pad = ' ';
  edit->dirty = 1;
  edit->panon = 0;
  edit->current_modifiers = 0;
  edit->maxlen = maxstr;
  edit->dspwdth = maxdsp;
  edit->margin = 0;
  edit->pos = strlen( old );
  edit->mark = -1;
  edit->xpan = 0;
  if ( maxdsp < maxstr )
  {
    if ( edit->dspwdth > 4 )
      edit->panon = 1;
    edit->margin = edit->dspwdth / 4;
    if ( edit->margin > 10 )
      edit->margin = 10;
  }
  LYstrncpy( &edit->buffer[0], old, maxstr );
  edit->strlen = strlen( &edit->buffer[0] );
  return;
}
int mbcs_glyphs( char *s, int len )
{
  int glyphs = 0;
  int i;
  if ( LYCharSet_UC[ current_char_set ].enc == 7 )
  {
    i = 0;
    for ( ; s[ i ] && i < len; i++ )
    {
      if ( ( s[ i ] & 192 ) != 128 )
        glyphs++;
      // i++;
    }
  }
  else
  {
    if ( HTCJK == NOCJK )
    {
      glyphs = len;
    }
    i = 0;
    for ( ; s[ i ] && i < len; glyphs++ )
    {
      if ( s[ i ] < 0 )
        i++;
      i++;
      // glyphs++;
    }
  }
  return glyphs;
}
int mbcs_skip( char *s, int pos )
{
  int p, i;
  if ( LYCharSet_UC[ current_char_set ].enc == 7 )
  {
    i = 0;
    p = 0;
    for ( ; s[ i ]; i++ )
    {
      if ( ( s[ i ] & 192 ) != 128 )
        p++;
      if ( pos < p )
        break;
      // i++;
    }
  }
  else
  {
    if ( HTCJK == NOCJK )
    {
      i = pos;
    }
    i = 0;
    p = i;
    for ( ; s[ i ] && p < pos; i++ )
    {
      if ( s[ i ] < 0 )
        i++;
      p++;
      // i++;
    }
  }
  return i;
}
int cell2char( char *s, int cells )
{
  int result = 0;
  int len = strlen( s );
  int pos = 0;
  int have;
  for ( ; pos <= len; pos++ )
  {
    have = LYstrExtent2( s, pos );
    if ( cells <= have )
      break;
    else
    {
      // pos++;
    }
  }
  if ( len < pos )
    pos = len;
  result = mbcs_glyphs( s, pos );
  return result;
}
int LYEditInsert( EditFieldData *edit, unsigned char *s, int len, int map, BOOLEAN maxMessage )
{
  int length = strlen( &edit->buffer[0] );
  int remains = edit->maxlen - ( length + len );
  int edited = 0, overflow = 0;
  if ( remains < 0 )
  {
    overflow = 1;
    len = 0;
    if ( length < edit->maxlen )
      len = edit->maxlen - length;
    else
    {
      edit->pos += len;
      edit->strlen += len;
      if ( edited )
        edit->dirty = 1;
      if ( overflow && maxMessage )
      {
        mustshow = 1;
        statusline( gettext( "Maximum length reached!  Delete text or move off field." ) );
      }
      if ( edit->pos < edit->mark )
        edit->mark += len;
      else
      if ( edit->mark < ~edit->pos )
        edit->mark -= len;
      if ( edit->mark >= 0 )
      {
        edit->mark = ~edit->mark;
      }
      return edited;
    }
  }
  edit->buffer[ length + len ] = 0;
  for ( ; edit->pos <= length;  )
  {
    edit->buffer[ length + len ] = edit->buffer[ length ];
    length += -1;
  }
  strncpy( &edit->buffer[ edit->pos ], (char*)s, len );
  edited = 1;
  edit->pos += len;
  edit->strlen += len;
}
int LYEdit1( EditFieldData *edit, int ch, int action, BOOLEAN maxMessage )
{
  int i;
  int length;
  unsigned char uch;
  int offset;
  if ( edit->maxlen <= 0 )
  {
    return 0;
  }
  edit->strlen = length = strlen( &edit->buffer[0] );
  switch ( action )
  {
  case 1:
    uch = ch;
    LYEditInsert( edit, &uch, 1, 0, maxMessage );
    return 0;
    break;
  case 32:
    ch &= 255;
    if ( LYlowest_eightbit[ current_char_set ] <= ch + 64 )
      ch += 64;
    if ( edit->pos <= edit->maxlen && edit->strlen < edit->maxlen )
    {
      if ( edit->pos < edit->mark )
        edit->mark++;
      else
      if ( edit->mark < ~edit->pos )
        edit->mark += -1;
      if ( edit->mark >= 0 )
        edit->mark = ~edit->mark;
      i = length;
      for ( ; edit->pos <= i;  )
      {
        edit->buffer[ i + 1 ] = edit->buffer[ i ];
        i += -1;
      }
      edit->buffer[ length + 1 ] = 0;
      edit->buffer[ edit->pos ] = ch;
      edit->pos++;
    }
    else
    {
      if ( maxMessage )
      {
        mustshow = 1;
        statusline( gettext( "Maximum length reached!  Delete text or move off field." ) );
      }
      return ch;
    }
    break;
  case 20:
    for ( ; edit->pos && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( edit->pos/*.1_1of4*/ * 2 )) & 8 ) && edit->pos/*.1_1of4*/ >= 0;  )
    {
      edit->pos += -1;
    }
    for ( ; edit->pos && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( edit->pos/*.1_1of4*/ * 2 )) & 8 ) || edit->pos/*.1_1of4*/ < 0 );  )
    {
      edit->pos += -1;
    }
    break;
  case 19:
    for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( edit->buffer[ edit->pos ] * 2 )) & 8 ) || edit->buffer[ edit->pos ] < 0; edit->pos++ )
    {
      // edit->pos++;
    }
    for ( ; !( *(short*)(*(int*)(__ctype_b_loc( )) + ( edit->buffer[ edit->pos ] * 2 )) & 8 ) && edit->buffer[ edit->pos ] >= 0 && edit->buffer[ edit->pos ]; edit->pos++ )
    {
      // edit->pos++;
    }
    break;
  case 12:
    edit->buffer[0] = 0;
    edit->mark = -1;
  case 13:
    edit->pos = 0;
    break;
  case 14:
    edit->pos = length;
    break;
  case 10:
    offset = edit->pos;
    LYEdit1( edit, 0, 19, 0 );
    offset = edit->pos - offset;
    edit->pos -= offset;
    i = edit->pos;
    for ( ; i < ( length - offset ) + 1; i++ )
    {
      edit->buffer[ i ] = edit->buffer[ offset + i ];
      // i++;
    }
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos - offset )
      edit->mark += offset;
    if ( ~edit->pos - offset < edit->mark && edit->mark < ~edit->pos )
      edit->mark = ~edit->pos;
    break;
  case 11:
    offset = edit->pos;
    LYEdit1( edit, 0, 20, 0 );
    offset -= edit->pos;
    i = edit->pos;
    break;
  case 25:
    i = edit->pos;
    for ( ; i < length + 1; i++ )
    {
      edit->buffer[ i - edit->pos ] = edit->buffer[ i ];
      // i++;
    }
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos )
      edit->mark += edit->pos;
    else
      edit->mark = -1;
    edit->pos = 0;
    break;
  case 26:
    edit->buffer[ edit->pos ] = 0;
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos )
      edit->mark = -1;
    break;
  case 7:
    if ( edit->pos < length )
    {
      edit->pos += mbcs_skip( &edit->buffer[ edit->pos ], 1 );
    }
  case 9:
    if ( length == 0 || edit->pos == 0 )
    {
      edit->dirty = 1;
      edit->strlen = strlen( &edit->buffer[0] );
      return 0;
    }
    offset = edit->pos - mbcs_skip( &edit->buffer[0], mbcs_glyphs( &edit->buffer[0], edit->pos ) + -1 );
    edit->pos -= offset;
    i = edit->pos;
    for ( ; i < ( length - offset ) + 1; i++ )
    {
      edit->buffer[ i ] = edit->buffer[ offset + i ];
      // i++;
    }
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos )
      edit->mark += offset;
    break;
  case 15:
  case 16:
    if ( edit->pos < length )
    {
      edit->pos += mbcs_skip( &edit->buffer[ edit->pos ], 1 );
    }
    else
    {
      if ( action == 16 )
      {
        return 0 - ch;
      }
    }
    break;
  case 17:
  case 18:
    if ( edit->pos > 0 )
    {
      edit->pos = mbcs_skip( &edit->buffer[0], mbcs_glyphs( &edit->buffer[0], edit->pos ) + -1 );
    }
    else
    {
      if ( action == 18 )
      {
        return 0 - ch;
      }
    }
    break;
  case 28:
    if ( LYCharSet_UC[ current_char_set ].enc != 7 && HTCJK == NOCJK )
    {
      if ( length <= 1 || edit->pos == 0 )
      {
        return ch;
      }
      if ( edit->pos == length )
        edit->pos += -1;
      if ( edit->mark < 0 )
        edit->mark = ~edit->mark;
      if ( edit->mark == edit->pos || edit->mark == edit->pos + 1 )
        edit->mark = edit->pos + -1;
      if ( edit->mark >= 0 )
        edit->mark = ~edit->mark;
      if ( edit->pos/*.1_1of4*/ == edit->buffer[ edit->pos ] )
        edit->pos++;
      else
      {
        edit->buffer[ edit->pos ] = i = edit->pos/*.1_1of4*/;
        edit->pos++;
      }
    }
    break;
  case 33:
    edit->mark = edit->pos;
    return 0;
    break;
  case 34:
    if ( edit->mark < 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark == edit->pos )
    {
      return 0;
    }
    i = edit->pos;
    edit->pos = edit->mark;
    edit->mark = i;
    break;
  case 35:
    if ( edit->mark < 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark == edit->pos )
    {
      killbuffer[0] = 0;
      return 0;
    }
    if ( edit->pos < edit->mark )
      LYEdit1( edit, 0, 34, 0 );
  {
    int reglen = edit->pos - edit->mark;
    LYstrncpy( killbuffer, &edit->buffer[ edit->mark ], reglen <= 1023 ? reglen : 1023 );
    i = edit->mark;
    for ( ; edit->buffer[ reglen + i ]; i++ )
    {
      edit->buffer[ i ] = edit->buffer[ reglen + i ];
      // i++;
    }
    edit->buffer[ i ] = edit->buffer[ reglen + i ];
    edit->pos = edit->mark;
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
  }
    break;
  case 36:
    if ( killbuffer[0] == 0 )
    {
      edit->mark = ~edit->pos;
      return 0;
    }
  {
    int yanklen = strlen( killbuffer );
    if ( edit->pos + yanklen <= edit->maxlen && edit->strlen + yanklen <= edit->maxlen )
    {
      edit->mark = ~edit->pos;
      i = length;
      for ( ; edit->pos <= i;  )
      {
        edit->buffer[ yanklen + i ] = edit->buffer[ i ];
        i += -1;
      }
      i = 0;
      for ( ; i < yanklen; i++ )
      {
        edit->buffer[ edit->pos ] = killbuffer[ i ];
        edit->pos++;
        // i++;
      }
    }
    else
    if ( maxMessage == 0 )
    {
      edit->dirty = 1;
      edit->strlen = strlen( &edit->buffer[0] );
      return 0;
    }
    mustshow = 1;
    statusline( gettext( "Maximum length reached!  Delete text or move off field." ) );
  }
    break;
  case 22:
    LYUpperCase( &edit->buffer[0] );
    break;
  case 21:
    LYLowerCase( &edit->buffer[0] );
    break;
  default:
    return ch;
    break;
  }
}
int get_popup_number( char *msg, int *c, int *rel )
{
  int eax;
  char temp[120];
  char *p = temp;
  int num;
  temp[0] = c[0];
  temp[1] = 0;
  mustshow = 1;
  statusline( msg );
  if ( LYgetstr( temp, 0, 120, 0 ) < 0 || temp[0] == 0 )
  {
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    c[0] = 0;
    rel[0] = 0;
    return 0;
  }
  else
  {
    rel[0] = 0;
    num = atoi( p );
    for ( ; *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048; p++ )
    {
      // p++;
    }
    if ( p[0] != 43 && p[0] != 45 )
    {
      if ( p[0] )
      {
        c[0] = p[0];
        p++;
        rel[0] = p[0];
      }
    }
    else
    {
      rel[0] = p[0];
      p++;
      c[0] = p[0];
    }
    if ( p[0] == 'g' || p[0] == 'G' )
      c[0] = 103;
    else
    if ( p[0] == 'p' || p[0] == 'P' )
      c[0] = 112;
    else
      c[0] = 0;
    if ( rel[0] != 43 && rel[0] != 45 )
      rel[0] = 0;
    return num;
  }
}
void remember_column( EditFieldData *edit, int offset )
{
  int y0 = -1, x0 = -1;
  edit->offset2col[ offset ] = x0;
  return;
}
void fill_edited_line( int prompting, int length, int ch )
{
  int i;
  curses_style( s_aedit_pad, 1 );
  i = 0;
  for ( ; i < length; i++ )
  {
    waddch( LYwin, ch );
    // i++;
  }
  curses_style( s_aedit_pad, 0 );
  return;
}
void LYRefreshEdit( EditFieldData *edit )
{
  int all_bytes;
  int pos_bytes = edit->pos;
  int dpy_bytes;
  int lft_bytes;
  int all_cells;
  int dpy_cells;
  int lft_cells;
  int pos_cells;
  int all_chars;
  int dpy_chars;
  int lft_chars;
  int pos_chars;
  int i;
  int padsize;
  char *str;
  int lft_shift = 0;
  int rgt_shift = 0;
  int estyle;
  int prompting = 0;
  if ( edit->dirty && edit->dspwdth )
  {
    edit->dirty = 0;
    edit->strlen = all_bytes = strlen( &edit->buffer[0] );
    all_cells = LYstrCells( &edit->buffer[0] );
    pos_cells = LYstrExtent2( &edit->buffer[0], edit->pos );
    lft_chars = mbcs_glyphs( &edit->buffer[0], edit->xpan );
    pos_chars = mbcs_glyphs( &edit->buffer[0], edit->pos );
    all_chars = mbcs_glyphs( &edit->buffer[0], all_bytes );
    lft_bytes = edit->xpan;
    lft_cells = LYstrExtent2( &edit->buffer[0], edit->xpan );
    if ( edit->dspwdth + lft_cells <= all_cells && ( edit->dspwdth + lft_cells ) - edit->margin <= pos_cells )
    {
      lft_cells = edit->margin + ( pos_cells - edit->dspwdth );
      lft_chars = cell2char( &edit->buffer[0], lft_cells );
      lft_bytes = mbcs_skip( &edit->buffer[0], lft_chars );
    }
    if ( pos_cells < edit->margin + lft_cells )
    {
      lft_cells = pos_cells - edit->margin;
      if ( lft_cells < 0 )
        lft_cells = 0;
      lft_chars = cell2char( &edit->buffer[0], lft_cells );
      lft_bytes = mbcs_skip( &edit->buffer[0], lft_chars );
    }
    LYmove( edit->sy, edit->sx );
    if ( edit->panon && lft_cells )
    {
      curses_style( s_aedit_arr, 1 );
      LYmove( edit->sy, edit->sx );
      waddch( LYwin, *(int*)(135965648) );
      curses_style( s_aedit_arr, 0 );
      lft_shift = 1;
    }
    str = &edit->buffer[ lft_bytes ];
    edit->xpan = lft_bytes;
    dpy_cells = all_cells - lft_cells;
    if ( edit->dspwdth - lft_shift < dpy_cells )
    {
      rgt_shift = 1;
      dpy_cells = edit->dspwdth - lft_shift - rgt_shift;
    }
    do
    {
      dpy_chars = cell2char( str, dpy_cells );
      dpy_bytes = mbcs_skip( str, dpy_chars );
      if ( rgt_shift )
      {
        int old_cells = dpy_cells;
        dpy_cells = LYstrExtent2( str, dpy_bytes );
        if ( old_cells < dpy_cells )
          dpy_cells = old_cells + -1;
      }
      else
      {
        if ( edit->sy == LYlines + -1 )
          prompting = 1;
        if ( prompting )
          estyle = s_prompt_edit;
        else
          estyle = s_aedit;
        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
        {
          fprintf( TraceFP( ), "STYLE.getstr: switching to &lt;edit.%s&gt;.\n", "active" );
        }
        if ( estyle != -1 )
          curses_style( estyle, 1 );
        else
          LYwin->_attrs = 0;
        if ( edit->hidden )
        {
          BOOLEAN utf_flag = LYCharSet_UC[ current_char_set ].enc == 7;
          int cell = 0;
          fill_edited_line( 0, dpy_cells, 42 );
          i = 0;
        {
          do
          {
            char *last = &str[ i ];
            char *next;
            int j;
            next = LYmbcs_skip_glyphs( last, 1, utf_flag );
            j = next - str;
            for ( ; i < j; i++ )
            {
              edit->offset2col[ i ] = edit->sx + cell;
              // i++;
            }
            cell += LYstrExtent2( last, next - last );
          }
          while ( i < dpy_bytes );
          edit->offset2col[ i ] = edit->sx + cell;
        }
        }
        else
        {
          if ( edit->mark >= 0 && edit->mark < edit->xpan )
          {
            curses_style( s_aedit_sel, 1 );
          }
          remember_column( edit, 0 );
          i = 0;
          for ( ; i < dpy_bytes; i++ )
          {
            if ( edit->mark >= 0 && ( ( edit->mark == edit->xpan + i && edit->mark < edit->pos ) || ( edit->pos == edit->xpan + i && edit->pos < edit->mark ) ) )
            {
              curses_style( s_aedit_sel, 1 );
            }
            if ( edit->mark >= 0 && ( ( edit->mark == edit->xpan + i && edit->pos < edit->mark ) || ( edit->pos == edit->xpan + i && edit->mark < edit->pos ) ) )
            {
              curses_style( s_aedit_sel, 0 );
            }
            if ( str[ i ] == 1 || str[ i ] == 2 || ( str[ i ] == -96 && !HTPassHighCtrlRaw && HTCJK == NOCJK && ( LYCharSet_UC[ current_char_set ].enc == 2 || ( LYCharSet_UC->codepage & 128 ) ) ) )
              waddch( LYwin, 32 );
            else
            if ( str[ i ] == '\t' )
            {
              int col = edit->offset2col[ i ] - edit->sx;
              while ( col++, col & 7 )
              {
                waddch( LYwin, 32 );
              }
              waddch( LYwin, 32 );
            }
            else
              waddch( LYwin, str[ i ] );
            remember_column( edit, i + 1 );
            // i++;
          }
          if ( edit->mark >= 0 && ( ( edit->xpan + dpy_bytes <= edit->mark && edit->pos < edit->xpan + dpy_bytes ) || ( edit->mark < edit->xpan + dpy_bytes && edit->xpan + dpy_bytes <= edit->pos ) ) )
          {
            curses_style( s_aedit_sel, 0 );
          }
        }
        padsize = edit->dspwdth + ( edit->sx - edit->offset2col[ dpy_bytes ] );
        fill_edited_line( prompting, padsize, edit->pad );
        if ( edit->panon && dpy_bytes && rgt_shift )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Draw right-scroller offset (%d + %d)\n", dpy_cells, lft_shift );
          }
          curses_style( s_aedit_arr, 1 );
          LYmove( edit->sy, lft_shift + edit->sx + dpy_cells );
          waddch( LYwin, *(int*)(135965644) );
          curses_style( s_aedit_arr, 0 );
        }
        LYmove( edit->sy, edit->sx );
        if ( estyle != -1 )
          curses_style( estyle, 0 );
        LYrefresh( );
        break;
      }
    }
    while ( dpy_cells < old_cells );
  }
  return;
}
void reinsertEdit( EditFieldData *edit, char *result )
{
  if ( result )
  {
    LYEdit1( edit, 0, 12, 0 );
    for ( ; result[0]; result++ )
    {
      LYEdit1( edit, result[0], ( (unsigned char)( EditBinding( result[0] ) ) & 127 ), 0 );
      // result++;
    }
  }
  return;
}
int caselessCmpList( void *a, void *b )
{
  return strcasecomp( &((int*)a), &((int*)b) );
}
int normalCmpList( void *a, void *b )
{
  return strcmp( &((int*)a), &((int*)b) );
}
char **sortedList( HTList *list, BOOLEAN ignorecase )
{
  unsigned int count = HTList_count( list );
  unsigned int j = 0;
  unsigned int k, jk;
  char **result = calloc( count + 1, sizeof( char* ) );
  if ( result == 0 )
  {
    outofmem( "./LYStrings.c", "sortedList" );
    while ( list && list->next )
    {
      if ( list )
      {
        list = &list->next;
        result[ j ] = 0;
        j++;
      }
      result[ j ] = 0;
      j++;
    }
    if ( count > 1 )
    {
      qsort( result, count, 4, &normalCmpList );
      j = 0;
      for ( ; result[ j ]; j++ )
      {
        k = j;
        for ( ; result[ k ] && strcmp( result[ j ], result[ k ] ) == 0; k++ )
        {
          // k++;
        }
        k += -1;
        if ( k != j )
        {
          jk = j;
          while ( result[ jk ] )
          {
            jk++;
          }
        }
        // j++;
      }
    }
    return result;
  }
}
int LYarrayLength( char **list )
{
  int result = 0;
  while ( list++ )
  {
    result++;
  }
  return result;
}
int LYarrayWidth( char **list )
{
  int result = 0;
  int check;
  while ( list[0] )
  {
    check = strlen( list[0] );
    list++;
    if ( check <= result )
      continue;
    else
    {
      result = check;
    }
  }
  return result;
}
void FormatChoiceNum( char *dst, int num_choices, int choice, char *value )
{
  if ( num_choices >= 0 )
  {
    int digits = 1;
    sprintf( dst, "%*d: %.*s", digits, choice + 1, 1015 - digits, value );
  }
  else
  {
    LYstrncpy( dst, value, 1023 );
  }
  return;
}
unsigned int options_width( char **list )
{
  unsigned int width = 0;
  int count = 0;
  for ( ; list[ count ]; count++ )
  {
    if ( width < strlen( list[ count ] ) )
    {
      width = strlen( list[ count ] );
    }
    // count++;
  }
  return width;
}
void draw_option( WINDOW *win, int entry, int width, BOOLEAN reversed, int num_choices, int number, char *value )
{
  char Cnum[1024];
  FormatChoiceNum( Cnum, num_choices, number, "" );
  wmove( win, entry, 1 );
  curses_w_style( win, s_menu_entry, 1 );
  waddch( win, 32 );
  curses_w_style( win, s_menu_entry, 0 );
  curses_w_style( win, s_menu_number, 1 );
  waddnstr( win, Cnum, -1 );
  curses_w_style( win, s_menu_number, 0 );
  curses_w_style( win, s_menu_entry, 1 );
  LYpaddstr( win, width, value );
  curses_w_style( win, s_menu_entry, 0 );
  curses_w_style( win, s_menu_entry, 1 );
  waddch( win, 32 );
  curses_w_style( win, s_menu_entry, 0 );
  return;
}
int LYhandlePopupList( int cur_choice, int ly, int lx, char **choices, int width, int i_length, int disabled, BOOLEAN for_mouse )
{
  int eax;
  static char prev_target[1024];
  static char prev_target_buffer[1024];
  static BOOLEAN first = 1;
  BOOLEAN numbered = keypad_mode != 0;
  int c = 0, cmd = 0, i = 0, j = 0, rel = 0;
  int orig_choice;
  WINDOW *form_window;
  int num_choices = 0;
  int max_choices = 0;
  int top, bottom, length = -1;
  int window_offset = 0;
  int lines_to_show;
  char Cnum[64];
  int Lnum;
  int npages;
  char *cp;
  int ch = 0;
  RecallType recall;
  int QueryTotal;
  int QueryNum;
  BOOLEAN FirstRecall = 1;
  BOOLEAN ReDraw = 0;
  int number;
  char buffer[1024];
  char *popup_status_msg = 0;
  char **Cptr = 0;
  int can_scroll = 0, can_scroll_was = 0;
  orig_choice = cur_choice;
  if ( cur_choice < 0 )
    cur_choice = 0;
  if ( first )
  {
    prev_target_buffer[0] = 0;
    first = 0;
  }
  prev_target[0] = 0;
  QueryTotal = 0;
  recall = QueryTotal > 0;
  QueryNum = QueryTotal;
  num_choices = LYarrayLength( choices ) + -1;
  if ( width <= 0 )
  {
    width = options_width( choices );
  }
  if ( numbered )
  {
    sprintf( Cnum, "%d: ", num_choices );
    Lnum = strlen( Cnum );
    max_choices = num_choices;
  }
  else
  {
    Lnum = 0;
    max_choices = -1;
  }
  top = ly + ~cur_choice;
  if ( top < 0 )
    top = 0;
  if ( i_length <= 0 )
    i_length = num_choices;
  else
    i_length += -1;
  bottom = top + i_length + 3;
  if ( user_mode == 0 )
    lines_to_show = LYlines + -4;
  else
    lines_to_show = LYlines + -2;
  if ( for_mouse && user_mode == 0 && lines_to_show > 2 )
    lines_to_show += -1;
  if ( lines_to_show < bottom )
  {
    if ( lines_to_show < i_length + 3 )
    {
      top = 0;
      bottom = top + i_length + 3;
      if ( lines_to_show < bottom )
        bottom = lines_to_show + 1;
    }
    else
    {
      top = lines_to_show + 1 + ( -3 - i_length );
      bottom = lines_to_show + 1;
    }
  }
  length = ( bottom - top ) + -2;
  if ( length <= num_choices )
    can_scroll = 4;
  if ( bottom < ly + 2 )
  {
    bottom = ly + 2;
    if ( lines_to_show + 1 < bottom )
      bottom = lines_to_show + 1;
    top = ( bottom - length ) + -2;
  }
  if ( for_mouse )
  {
    int check = width + Lnum + 4;
    int limit = LYcols;
    if ( check < limit )
    {
      if ( limit < check + lx + -1 )
        lx = ( limit + 1 ) - check;
      else
      if ( lx <= 0 )
        lx = 1;
    }
  }
  width += Lnum;
  bottom -= top;
  if ( num_choices > 0 && cur_choice <= num_choices )
  {
    form_window = LYstartPopup( &top, &lx, &bottom, &width );
    if ( form_window == 0 )
      goto B48;
    else
    {
      width -= Lnum;
      bottom += top;
      if ( disabled )
      {
        popup_status_msg = gettext( "UNMODIFIABLE choice list.  Use return or arrow keys to review or leave." );
      }
      else
      if ( for_mouse == 0 )
      {
        popup_status_msg = gettext( "(Choice list) Hit return and use arrow keys and return to select option." );
      }
      else
      {
        popup_status_msg = gettext( "Left mouse button or return to select, arrow keys to scroll." );
      }
      mustshow = 1;
      statusline( popup_status_msg );
      if ( length <= cur_choice )
        window_offset = ( cur_choice - length ) + 1;
      npages = 1;
      while ( 1 )
      {
        i = 0;
        for ( ; i <= num_choices; i++ )
        {
          if ( window_offset <= i && i - window_offset < length )
            draw_option( form_window, ( i + 1 ) - window_offset, width, 0, max_choices, i, choices[ i ] );
          // i++;
        }
        LYbox( form_window, numbered == 0 );
        Cptr = 0;
        while ( cmd != 39 )
        {
          int row = ( i + 1 ) - window_offset;
          if ( can_scroll )
          {
            can_scroll = 0 | ( ( num_choices - window_offset < length ) ^ 1 );
            if ( can_scroll_was & ~can_scroll )
            {
              LYbox( form_window, numbered == 0 );
              can_scroll_was = 0;
            }
            if ( can_scroll & ~can_scroll_was & 2 )
            {
              wmove( form_window, 1, width + Lnum + 3 );
              curses_w_style( form_window, s_menu_sb, 1 );
              waddch( form_window, *(int*)(135965652) );
              curses_w_style( form_window, s_menu_sb, 0 );
            }
            if ( can_scroll & ~can_scroll_was & 1 )
            {
              wmove( form_window, length, width + Lnum + 3 );
              curses_w_style( form_window, s_menu_sb, 1 );
              waddch( form_window, *(int*)(135965656) );
              curses_w_style( form_window, s_menu_sb, 0 );
            }
          }
          if ( Cptr )
            draw_option( form_window, row, width, 0, max_choices, i, Cptr[ i ] );
          Cptr = choices;
          i = cur_choice;
          row = ( cur_choice + 1 ) - window_offset;
          draw_option( form_window, row, width, 1, max_choices, cur_choice, Cptr[ cur_choice ] );
          LYstowCursor( form_window, row, 1 );
          c = LYgetch_choice( );
          if ( !term_options && c != 3 && c != 7 )
          {
            if ( c != -1 )
            {
              if ( c & 34816 )
              {
                if ( ( c & 255 ) == 47 )
                  goto B107;
              }
              else
              if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                goto B107;
            }
            else
            if ( keymap[0] == 47 )
              goto B107;
            if ( c == 285 )
            {
              cmd = fancy_mouse( form_window, row, &cur_choice );
              if ( cmd >= 0 )
              {
                if ( cmd != 39 )
                {
                  switch ( cmd )
                  {
                  default:
                    break;
                  case 80:
                    c = 0;
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                    number = get_popup_number( gettext( "Select option (or page) number: " ), &c, &rel );
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "got popup option number %d, ", number );
                    }
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "rel='%c', c='%c', cur_choice=%d\n", rel, c, cur_choice );
                    }
                    if ( c == 112 )
                    {
                      int curpage = 1;
                      if ( WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "  curpage=%d\n", curpage );
                      }
                      if ( rel == 43 )
                        number += curpage;
                      else
                      {
                        if ( rel == 45 )
                          number = curpage - number;
                      }
                    }
                    else
                    {
                      if ( rel == 43 )
                        number = number + cur_choice + 1;
                      else
                      {
                        if ( rel == 45 )
                          number = ( cur_choice - number ) + 1;
                      }
                    }
                    if ( rel && WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "new number=%d\n", number );
                    }
                    if ( c == 112 )
                    {
                      if ( number <= 1 )
                      {
                        if ( window_offset == 0 )
                        {
                          HTUserMsg( gettext( "You are already at the beginning of this option list." ) );
                          mustshow = 1;
                          statusline( popup_status_msg );
                        }
                        else
                        {
                          window_offset = 0;
                          cur_choice = 0;
                          mustshow = 1;
                          statusline( popup_status_msg );
                        }
                      }
                      else
                      {
                        if ( npages <= number )
                        {
                          if ( ( num_choices - length ) + 1 <= window_offset )
                          {
                            HTUserMsg( gettext( "You are already at the end of this option list." ) );
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                          else
                          {
                            window_offset = length * ( npages + -1 );
                            if ( num_choices - length < window_offset )
                              window_offset = ( num_choices - length ) + 1;
                            if ( cur_choice < window_offset )
                              cur_choice = window_offset;
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                        }
                        else
                        {
                          if ( window_offset == length * ( number + -1 ) )
                          {
                            char *msg = 0;
                            HTSprintf0( &msg, gettext( "You are already at page %d of this option list." ), number );
                            HTUserMsg( msg );
                            if ( msg )
                            {
                              free( msg );
                              msg = 0;
                            }
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                          else
                          {
                            cur_choice = window_offset = length * ( number + -1 );
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                        }
                      }
                    }
                    else
                    {
                      if ( number > 0 )
                      {
                        number += -1;
                        if ( number <= num_choices && c == 0 )
                        {
                          cur_choice = number;
                          cmd = 39;
                        }
                        else
                        if ( c == 103 )
                        {
                          if ( number == cur_choice )
                          {
                            char *msg = 0;
                            HTSprintf0( &msg, gettext( "Option number %d already is current." ), number + 1 );
                            HTUserMsg( msg );
                            if ( msg )
                            {
                              free( msg );
                              msg = 0;
                            }
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                          else
                          {
                            if ( number <= num_choices )
                            {
                              j = number - cur_choice;
                              cur_choice = number;
                              if ( j > 0 && length <= cur_choice - window_offset )
                              {
                                window_offset += j;
                                if ( ( num_choices - length ) + 1 < window_offset )
                                  window_offset = ( num_choices - length ) + 1;
                              }
                              else
                              if ( cur_choice - window_offset < 0 )
                              {
                                window_offset -= ( j ^ ( j >> 31 ) ) - ( j >> 31 );
                                if ( window_offset < 0 )
                                  window_offset = 0;
                              }
                              mustshow = 1;
                              statusline( popup_status_msg );
                              break;
                            }
                            else
                            {
                              HTUserMsg( gettext( "You have entered an invalid option number." ) );
                            }
                          }
                        }
                      }
                      mustshow = 1;
                      statusline( popup_status_msg );
                    }
                    break;
                  case 26:
                  case 28:
                  case 30:
                  case 32:
                    if ( cur_choice > 0 )
                      cur_choice += -1;
                    if ( cur_choice - window_offset >= 0 )
                      continue;
                    else
                    {
                      window_offset += -1;
                    }
                    break;
                  case 27:
                  case 29:
                  case 31:
                  case 33:
                    if ( cur_choice < num_choices )
                      cur_choice++;
                    if ( length <= cur_choice - window_offset )
                    {
                      window_offset++;
                    }
                    break;
                  case 15:
                    if ( window_offset != ( num_choices - length ) + 1 )
                    {
                      cur_choice -= window_offset;
                      window_offset += length;
                      if ( num_choices - length < window_offset )
                        window_offset = ( num_choices - length ) + 1;
                      cur_choice += window_offset;
                    }
                    else
                    {
                      if ( cur_choice < num_choices )
                      {
                        cur_choice = num_choices;
                      }
                    }
                    break;
                  case 16:
                    if ( window_offset )
                    {
                      cur_choice -= window_offset;
                      window_offset -= length;
                      if ( window_offset < 0 )
                        window_offset = 0;
                      cur_choice += window_offset;
                    }
                    else
                    {
                      if ( cur_choice > 0 )
                      {
                        cur_choice = 0;
                      }
                    }
                    break;
                  case 22:
                    cur_choice = 0;
                    if ( window_offset > 0 )
                    {
                      window_offset = 0;
                    }
                    break;
                  case 23:
                    cur_choice = num_choices;
                    if ( window_offset != ( num_choices - length ) + 1 )
                    {
                      window_offset = ( num_choices - length ) + 1;
                    }
                    break;
                  case 18:
                    cur_choice += 2;
                    if ( num_choices < cur_choice )
                      cur_choice = num_choices;
                    if ( length <= cur_choice - window_offset )
                    {
                      window_offset += 2;
                      if ( ( num_choices - length ) + 1 < window_offset )
                      {
                        window_offset = ( num_choices - length ) + 1;
                      }
                    }
                    break;
                  case 17:
                    cur_choice += -2;
                    if ( cur_choice < 0 )
                      cur_choice = 0;
                    if ( cur_choice - window_offset >= 0 )
                      continue;
                    else
                    {
                      window_offset += -2;
                      if ( window_offset < 0 )
                      {
                        window_offset = 0;
                      }
                    }
                    break;
                  case 20:
                    cur_choice += length / 2;
                    if ( num_choices < cur_choice )
                      cur_choice = num_choices;
                    if ( length <= cur_choice - window_offset )
                    {
                      window_offset += length / 2;
                      if ( ( num_choices - length ) + 1 < window_offset )
                      {
                        window_offset = ( num_choices - length ) + 1;
                      }
                    }
                    break;
                  case 19:
                    cur_choice -= length / 2;
                    if ( cur_choice < 0 )
                      cur_choice = 0;
                    if ( cur_choice - window_offset >= 0 )
                      continue;
                    else
                    {
                      window_offset -= length / 2;
                      if ( window_offset < 0 )
                      {
                        window_offset = 0;
                      }
                    }
                    break;
                  case 21:
                    lynx_force_repaint( );
                    LYrefresh( );
                    break;
                  case 53:
                    if ( recall && prev_target_buffer[0] == 0 )
                    {
                      cp = (char*)HTList_objectAt( search_queries, 0 );
                      if ( cp )
                      {
                        LYstrncpy( prev_target_buffer, cp, 1023 );
                        QueryNum = 0;
                        FirstRecall = 0;
                      }
                    }
                    strcpy( prev_target, prev_target_buffer );
                  case 51:
                    if ( prev_target[0] == 0 )
                    {
                      mustshow = 1;
                      statusline( gettext( "Enter a whereis query: " ) );
                      ch = LYgetstr( prev_target, 0, 1024, recall );
                      if ( ch < 0 )
                      {
                        HTInfoMsg( gettext( "Cancelled!!!" ) );
                      }
                      else
                      do
                      {
                        if ( !prev_target[0] && ( recall == NORECALL || ( ch != 256 && ch != 257 ) ) )
                        {
                          HTInfoMsg( gettext( "Cancelled!!!" ) );
                        }
                        else
                        {
                          if ( recall && ch == 256 )
                          {
                            if ( FirstRecall )
                            {
                              FirstRecall = 0;
                              if ( prev_target_buffer[0] )
                              {
                                QueryNum = QueryTotal + -1;
                                for ( ; QueryNum > 0;  )
                                {
                                  cp = (char*)HTList_objectAt( search_queries, QueryNum );
                                  if ( cp && strcmp( prev_target_buffer, cp ) == 0 )
                                    break;
                                  else
                                  {
                                    QueryNum += -1;
                                  }
                                }
                              }
                              else
                                QueryNum = 0;
                            }
                            else
                              QueryNum++;
                            if ( QueryTotal <= QueryNum )
                              QueryNum = 0;
                            cp = (char*)HTList_objectAt( search_queries, QueryNum );
                            if ( cp )
                            {
                              LYstrncpy( prev_target, cp, 1023 );
                              if ( prev_target_buffer[0] && strcmp( prev_target_buffer, prev_target ) == 0 )
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit the current query: " ) );
                              }
                              else
                              if ( ( prev_target_buffer[0] && QueryTotal == 2 ) || ( prev_target_buffer[0] == 0 && QueryTotal == 1 ) )
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit the previous query: " ) );
                              }
                              else
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit a previous query: " ) );
                              }
                              ch = LYgetstr( prev_target, 0, 1024, recall );
                              if ( ch >= 0 )
                                continue;
                              else
                              {
                                HTInfoMsg( gettext( "Cancelled!!!" ) );
                              }
                            }
                          }
                          else
                          {
                            if ( recall && ch == 257 )
                            {
                              if ( FirstRecall )
                              {
                                FirstRecall = 0;
                                if ( prev_target_buffer[0] )
                                {
                                  QueryNum = 0;
                                  for ( ; QueryNum < QueryTotal + -1; QueryNum++ )
                                  {
                                    cp = (char*)HTList_objectAt( search_queries, QueryNum );
                                    if ( cp && strcmp( prev_target_buffer, cp ) == 0 )
                                      break;
                                    else
                                    {
                                      // QueryNum++;
                                    }
                                  }
                                }
                                else
                                  QueryNum = QueryTotal + -1;
                              }
                              else
                                QueryNum += -1;
                              if ( QueryNum < 0 )
                                QueryNum = QueryTotal + -1;
                              cp = (char*)HTList_objectAt( search_queries, QueryNum );
                              if ( cp )
                              {
                                LYstrncpy( prev_target, cp, 1023 );
                                if ( prev_target_buffer[0] && strcmp( prev_target_buffer, prev_target ) == 0 )
                                {
                                  mustshow = 1;
                                  statusline( gettext( "Edit the current query: " ) );
                                }
                                else
                                if ( ( prev_target_buffer[0] && QueryTotal == 2 ) || ( prev_target_buffer[0] == 0 && QueryTotal == 1 ) )
                                {
                                  mustshow = 1;
                                  statusline( gettext( "Edit the previous query: " ) );
                                }
                                else
                                {
                                  mustshow = 1;
                                  statusline( gettext( "Edit a previous query: " ) );
                                }
                                ch = LYgetstr( prev_target, 0, 1024, recall );
                              }
                            }
                          }
                          strcpy( prev_target_buffer, prev_target );
                          HTAddSearchQuery( prev_target_buffer );
                          j = 1;
                          for ( ; Cptr[ j + i ]; j++ )
                          {
                            FormatChoiceNum( buffer, max_choices, j + i, Cptr[ j + i ] );
                            if ( case_sensitive )
                            {
                              if ( strstr( buffer, prev_target_buffer ) )
                                break;
                            }
                            else
                            {
                              if ( LYstrstr( buffer, prev_target_buffer ) )
                                break;
                            }
                            // j++;
                          }
                          if ( Cptr[ j + i ] )
                          {
                            cur_choice += j;
                            if ( length <= cur_choice - window_offset )
                            {
                              window_offset += j;
                              if ( ( num_choices - length ) + 1 < window_offset )
                                window_offset = ( num_choices - length ) + 1;
                              ReDraw = 1;
                            }
                          }
                          else
                          {
                            if ( cur_choice == 0 )
                            {
                              HTUserMsg2( gettext( "'%s' not found!" ), prev_target_buffer );
                            }
                            else
                            {
                              j = 0;
                              for ( ; j < cur_choice; j++ )
                              {
                                FormatChoiceNum( buffer, max_choices, j + 1, Cptr[ j ] );
                                if ( case_sensitive )
                                {
                                  if ( strstr( buffer, prev_target_buffer ) )
                                    break;
                                }
                                else
                                {
                                  if ( LYstrstr( buffer, prev_target_buffer ) )
                                    break;
                                }
                                // j++;
                              }
                              if ( j < cur_choice )
                              {
                                j = cur_choice - j;
                                cur_choice -= j;
                                if ( cur_choice - window_offset < 0 )
                                {
                                  window_offset -= j;
                                  if ( window_offset < 0 )
                                    window_offset = 0;
                                  ReDraw = 1;
                                }
                              }
                              else
                              {
                                HTUserMsg2( gettext( "'%s' not found!" ), prev_target_buffer );
                              }
                            }
                          }
                        }
                      }
                      while ( ch >= 0 );
                      HTInfoMsg( gettext( "Cancelled!!!" ) );
                    }
                    mustshow = 1;
                    statusline( popup_status_msg );
                    prev_target[0] = 0;
                    QueryTotal = 0;
                    recall = QueryTotal > 0;
                    QueryNum = QueryTotal;
                    if ( ReDraw != 1 )
                      continue;
                    else
                    {
                      ReDraw = 0;
                    }
                    break;
                  case 13:
                  case 14:
                  case 37:
                  case 47:
                    cur_choice = orig_choice;
                    cmd = 39;
                    break;
                  }
                }
                else
                  break;
              }
            }
            else
            {
              cmd = c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ];
            }
          }
B107:;
          cmd = 13;
        }
        LYsubwindow( 0 );
        return cur_choice;
      }
    }
  }
B48:;
  return orig_choice;
}
int LYgetstr( char *inputline, int hidden, size_t bufsize, RecallType recall )
{
  int eax;
  int ah;
  int x, y, MaxStringSize;
  int ch;
  int xlec = -2;
  int last_xlec = -1;
  int last_xlkc = -1;
  EditFieldData MyEdit;
  BOOLEAN refresh_mb = 1;
  y = -1;
  x = -1;
  MaxStringSize = bufsize <= 1023 ? bufsize + -1 : 1023;
  LYSetupEdit( &MyEdit, inputline, MaxStringSize, LYcols - ( LYShowScrollbar != 0 ) - x );
  MyEdit.hidden = hidden;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "called LYgetstr\n" );
    while ( 1 )
    {
      if ( refresh_mb )
        LYRefreshEdit( &MyEdit );
      ch = LYReadCmdKey( 3 );
      if ( refresh_mb == 0 && EditBinding( ch ) != 1 )
        continue;
      else
        break;
    }
    if ( term_letter || term_options || term_message )
      ch = 7;
    if ( recall && ( ch == 256 || ch == 257 ) )
    {
      LYstrncpy( inputline, &MyEdit.buffer[0], (int)bufsize );
      LYAddToCloset( recall, &MyEdit.buffer[0] );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "LYgetstr(%s) recall\n", inputline );
      }
      return ch;
    }
    else
    {
      ch |= MyEdit.current_modifiers;
      MyEdit.current_modifiers = 0;
      if ( last_xlkc != -1 )
      {
        if ( last_xlkc == ch )
          ch |= 4096;
        last_xlkc = -1;
      }
      if ( ch == -1 ? keymap[0] == 21 : keymap[ ( ch & 2047 ) + 1 ] == 21 )
        continue;
      else
      {
        last_xlec = xlec;
        xlec = EditBinding( ch );
        if ( ( xlec & 128 ) && ( xlec & 4096 ) == 0 )
        {
          last_xlkc = ch;
          xlec &= -129;
        }
        else
          last_xlkc = -1;
        switch ( xlec )
        {
        case 6:
        case 23:
          break;
        case 29:
          break;
        case 30:
          break;
        case 3:
          if ( xlec == last_xlec && recall )
          {
            HTList *list = whichRecall( recall );
            if ( list && list->next )
            {
              char **data = sortedList( list, recall == RECALL_CMD );
              int old_y, old_x;
              int cur_choice = 0;
              int num_options = LYarrayLength( data );
              for ( ; cur_choice < num_options && strcasecomp( data[ cur_choice ], &MyEdit.buffer[0] ) < 0; cur_choice++ )
              {
                // cur_choice++;
              }
              old_y = -1;
              old_x = -1;
              cur_choice = LYhandlePopupList( cur_choice, 0, old_x, data, -1, -1, 0, 0 );
              if ( cur_choice >= 0 )
              {
                if ( recall == RECALL_CMD )
                {
                  mustshow = 1;
                  statusline( ": " );
                }
                reinsertEdit( &MyEdit, data[ cur_choice ] );
              }
              LYmove( old_y, old_x );
              if ( data )
              {
                free( data );
                data = 0;
              }
            }
          }
          else
          {
            reinsertEdit( &MyEdit, LYFindInCloset( recall, &MyEdit.buffer[0] ) );
          }
          break;
        case 2:
          LYstrncpy( inputline, &MyEdit.buffer[0], (int)bufsize );
          if ( hidden == 0 )
            LYAddToCloset( recall, &MyEdit.buffer[0] );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "LYgetstr(%s) LYE_ENTER\n", inputline );
          }
          return ch;
          break;
        case 37:
        {
          unsigned char *s = (unsigned char*)get_clip_grab( ), *e;
          int len;
          if ( s )
          {
            len = strlen( (char*)s );
            e = &s[ len ];
            if ( len > 0 )
            {
              unsigned char *e1 = s;
              while ( e1 < e )
              {
                if ( 31 <= e1[0] )
                {
                  if ( s < e1 )
                    LYEditInsert( &MyEdit, s, e1 - s, 0, 1 );
                  s = e1;
                  if ( e1[0] == '\t' )
                  {
                    LYEditInsert( &MyEdit, " ", 1, 0, 1 );
                    e1++;
                    s = e1;
                  }
                  else
                    break;
                }
                else
                {
                  e1++;
                }
              }
              if ( s < e1 )
                LYEditInsert( &MyEdit, s, e1 - s, 0, 1 );
            }
            get_clip_release( );
          }
        }
          break;
        case 5:
          inputline[0] = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "LYgetstr LYE_ABORT\n" );
          }
          return -1;
          break;
        case 4:
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "LYgetstr LYE_STOP\n" );
          }
          textfields_need_activation = 1;
          return -1;
          break;
        default:
          if ( xlec & 4096 )
            continue;
          else
          {
            if ( LYEdit1( &MyEdit, ch, ( EditBinding( ch ) & 127 ), 0 ) == 0 )
            {
              if ( refresh_mb && HTCJK && ch > 128 && ch <= 254 )
              {
                refresh_mb = 0;
              }
              else
              {
                refresh_mb = 1;
              }
            }
            else
            {
              if ( refresh_mb == 0 )
              {
                LYEdit1( &MyEdit, 0, 9, 0 );
              }
            }
          }
          break;
        }
      }
    }
  }
}
char *LYLineeditHelpURL( void )
{
  static int lasthelp_lineedit = -1;
  static char helpbuf[256];
  static char *phelp = &helpbuf;
  if ( lasthelp_lineedit == current_lineedit )
  {
    return helpbuf;
  }
  if ( lasthelp_lineedit == -1 )
  {
    LYstrncpy( helpbuf, helpfilepath, 255 );
    phelp += strlen( helpbuf );
  }
  if ( LYLineeditHelpURLs[ current_lineedit ] && LYLineeditHelpURLs[ current_lineedit ][0] && strlen( LYLineeditHelpURLs[ current_lineedit ] ) <= helpbuf[ 256 - phelp ] )
  {
    LYstrncpy( phelp, LYLineeditHelpURLs[ current_lineedit ], helpbuf[ 255 - phelp ] );
    lasthelp_lineedit = current_lineedit;
    return helpbuf;
  }
  return 0;
}
char *LYstrsep( char **stringp, char *delim )
{
  char *tmp, *out;
  if ( stringp == 0 || stringp[0] == 0 )
  {
    return 0;
  }
  out = stringp[0];
  tmp = strpbrk( stringp[0], delim );
  if ( tmp )
  {
    tmp[0] = 0;
    tmp++;
    stringp[0] = tmp;
  }
  else
    stringp[0] = 0;
  return out;
}
char *LYstrstr( char *chptr, char *tarptr )
{
  int len = strlen( tarptr );
  for ( ; chptr[0]; chptr++ )
  {
    if ( UPPER8( chptr[0], tarptr[0] ) == 0 && strncasecomp8( &chptr[1], &tarptr[1], len + -1 ) == 0 )
    {
      return chptr;
    }
    // chptr++;
  }
  return 0;
}
char *LYno_attr_char_case_strstr( char *chptr, char *tarptr )
{
  char *tmpchptr, *tmptarptr;
  if ( chptr == 0 )
  {
    return 0;
  }
  for ( ; 2 < chptr[0] && chptr[0] <= 8 && chptr[0]; chptr++ )
  {
    // chptr++;
  }
  for ( ; chptr[0]; chptr++ )
  {
    if ( UPPER8( chptr[0], tarptr[0] ) == 0 )
    {
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( tmptarptr[0] == 0 )
      {
        return chptr;
      }
      do
      {
        if ( tmpchptr[0] <= 2 || 8 < tmpchptr[0] )
        {
          if ( UPPER8( tmpchptr[0], tmptarptr[0] ) )
            break;
          else
          {
            tmpchptr++;
            tmptarptr++;
          }
        }
        else
          tmpchptr++;
        if ( tmptarptr[0] == 0 )
        {
          return chptr;
        }
      }
      while ( tmpchptr[0] );
    }
    // chptr++;
  }
  return 0;
}
char *LYno_attr_char_strstr( char *chptr, char *tarptr )
{
  char *tmpchptr, *tmptarptr;
  if ( chptr == 0 )
  {
    return 0;
  }
  for ( ; 2 < chptr[0] && chptr[0] <= 8 && chptr[0]; chptr++ )
  {
    // chptr++;
  }
  for ( ; chptr[0]; chptr++ )
  {
    if ( tarptr[0] == chptr[0] )
    {
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( tmptarptr[0] == 0 )
      {
        return chptr;
      }
      do
      {
        if ( tmpchptr[0] <= 2 || 8 < tmpchptr[0] )
        {
          if ( tmptarptr[0] != tmpchptr[0] )
            break;
          else
          {
            tmpchptr++;
            tmptarptr++;
          }
        }
        else
          tmpchptr++;
        if ( tmptarptr[0] == 0 )
        {
          return chptr;
        }
      }
      while ( tmpchptr[0] );
    }
    // chptr++;
  }
  return 0;
}
char *LYno_attr_mbcs_case_strstr( char *chptr, char *tarptr, BOOLEAN utf_flag, BOOLEAN count_gcells, int *nstartp, int *nendp )
{
  char *tmpchptr;
  char *tmptarptr;
  int len = 0;
  int offset;
  if ( chptr == 0 || tarptr == 0 )
  {
    return 0;
  }
  for ( ; 2 < chptr[0] && chptr[0] <= 8 && chptr[0]; chptr++ )
  {
    // chptr++;
  }
  for ( ; chptr[0]; chptr++ )
  {
    if ( ( utf_flag == 0 && HTCJK && chptr[0] < 0 && tarptr[0] == chptr[0] && chptr[1] && ( chptr[1] <= 2 || 8 < chptr[1] ) ) || UPPER8( chptr[0], tarptr[0] ) == 0 )
    {
      int tarlen = 0;
      offset = len;
      len++;
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( tmptarptr[0] == 0 )
      {
        if ( nstartp )
          nstartp[0] = offset;
        if ( nendp == 0 )
        {
          return chptr;
        }
        nendp[0] = len;
        return chptr;
      }
      else
      {
        if ( utf_flag == 0 && HTCJK && chptr[0] < 0 && tarptr[0] == chptr[0] && tmpchptr[0] && ( tmpchptr[0] <= 2 || 8 < tmpchptr[0] ) )
        {
          if ( tmptarptr[0] == tmpchptr[0] )
          {
            tmpchptr++;
            tmptarptr++;
            if ( count_gcells )
              tarlen++;
            if ( tmptarptr[0] == 0 )
            {
              if ( nstartp )
                nstartp[0] = offset;
              if ( nendp == 0 )
              {
                return chptr;
              }
              nendp[0] = tarlen + len;
              return chptr;
            }
            else
            {
              do
              {
                if ( tmpchptr[0] <= 2 || 8 < tmpchptr[0] )
                {
                  if ( utf_flag == 0 && HTCJK && tmpchptr[0] < 0 )
                  {
                    if ( tmptarptr[0] == tmpchptr[0] && tmptarptr[1] == tmpchptr[1] && ( tmpchptr[1] <= 2 || 8 < tmpchptr[1] ) )
                    {
                      tmpchptr++;
                      tmptarptr++;
                      if ( count_gcells )
                        tarlen++;
                    }
                  }
                  else
                  {
                    if ( UPPER8( tmpchptr[0], tmptarptr[0] ) )
                      break;
                  }
                  if ( utf_flag == 0 || ( tmptarptr[0] & 192 ) != 128 )
                    tarlen++;
                  tmpchptr++;
                  tmptarptr++;
                }
                else
                  tmpchptr++;
                if ( tmptarptr[0] == 0 )
                {
                  if ( nstartp )
                    nstartp[0] = offset;
                  if ( nendp == 0 )
                  {
                    return chptr;
                  }
                  nendp[0] = tarlen + len;
                  return chptr;
                }
                else
                {
                }
              }
              while ( tmpchptr[0] );
            }
          }
          else
          {
            chptr++;
            if ( count_gcells )
              len++;
          }
        }
      }
    }
    else
    {
      if ( ( utf_flag == 0 || ( chptr[0] & 192 ) != 128 ) && ( chptr[0] <= 2 || 8 < chptr[0] ) )
      {
        if ( utf_flag == 0 && HTCJK && chptr[0] < 0 && chptr[1] && ( chptr[1] <= 2 || 8 < chptr[1] ) )
        {
          chptr++;
          if ( count_gcells )
            len++;
        }
        len++;
      }
    }
    // chptr++;
  }
  return 0;
}
char *LYno_attr_mbcs_strstr( char *chptr, char *tarptr, BOOLEAN utf_flag, BOOLEAN count_gcells, int *nstartp, int *nendp )
{
  char *tmpchptr;
  char *tmptarptr;
  int len = 0;
  int offset;
  if ( chptr == 0 || tarptr == 0 )
  {
    return 0;
  }
  for ( ; 2 < chptr[0] && chptr[0] <= 8 && chptr[0]; chptr++ )
  {
    // chptr++;
  }
  for ( ; chptr[0]; chptr++ )
  {
    if ( tarptr[0] == chptr[0] )
    {
      int tarlen = 0;
      offset = len;
      len++;
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( tmptarptr[0] == 0 )
      {
        if ( nstartp )
          nstartp[0] = offset;
        if ( nendp == 0 )
        {
          return chptr;
        }
        nendp[0] = len;
        return chptr;
      }
      else
      {
        if ( utf_flag == 0 && HTCJK && chptr[0] < 0 && tmpchptr[0] && ( tmpchptr[0] <= 2 || 8 < tmpchptr[0] ) )
        {
          if ( tmptarptr[0] == tmpchptr[0] )
          {
            tmpchptr++;
            tmptarptr++;
            if ( count_gcells )
              tarlen++;
            if ( tmptarptr[0] == 0 )
            {
              if ( nstartp )
                nstartp[0] = offset;
              if ( nendp == 0 )
              {
                return chptr;
              }
              nendp[0] = tarlen + len;
              return chptr;
            }
            else
            {
              do
              {
                if ( tmpchptr[0] <= 2 || 8 < tmpchptr[0] )
                {
                  if ( utf_flag == 0 && HTCJK && tmpchptr[0] < 0 )
                  {
                    if ( tmptarptr[0] == tmpchptr[0] && tmptarptr[1] == tmpchptr[1] && ( tmpchptr[1] <= 2 || 8 < tmpchptr[1] ) )
                    {
                      tmpchptr++;
                      tmptarptr++;
                      if ( count_gcells )
                        tarlen++;
                    }
                  }
                  else
                  if ( tmptarptr[0] != tmpchptr[0] )
                    break;
                  if ( utf_flag == 0 || ( tmptarptr[0] & 192 ) != 128 )
                    tarlen++;
                  tmpchptr++;
                  tmptarptr++;
                }
                else
                  tmpchptr++;
                if ( tmptarptr[0] == 0 )
                {
                  if ( nstartp )
                    nstartp[0] = offset;
                  if ( nendp == 0 )
                  {
                    return chptr;
                  }
                  nendp[0] = tarlen + len;
                  return chptr;
                }
                else
                {
                }
              }
              while ( tmpchptr[0] );
            }
          }
          else
          {
            chptr++;
            if ( count_gcells )
              len++;
          }
        }
      }
    }
    else
    {
      if ( ( utf_flag == 0 || ( chptr[0] & 192 ) != 128 ) && ( chptr[0] <= 2 || 8 < chptr[0] ) )
      {
        if ( utf_flag == 0 && HTCJK && chptr[0] < 0 && chptr[1] && ( chptr[1] <= 2 || 8 < chptr[1] ) )
        {
          chptr++;
          if ( count_gcells )
            len++;
        }
        len++;
      }
    }
    // chptr++;
  }
  return 0;
}
char *SNACopy( char **dest, char *src, int n )
{
  if ( dest[0] )
  {
    free( dest[0] );
    dest[0] = 0;
  }
  if ( src )
  {
    dest[0] = malloc( ( n + 1 ) * sizeof( char ) );
    if ( dest[0] == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Tried to malloc %d bytes\n", n );
      }
      outofmem( "./LYStrings.c", "SNACopy" );
    }
    strncpy( dest[0], src, n );
    dest[0] = 0;
  }
  return dest[0];
}
char *SNACat( char **dest, char *src, int n )
{
  if ( src && src[0] )
  {
    if ( dest[0] )
    {
      int length = strlen( dest[0] );
      dest[0] = realloc( dest[0], ( n + length + 1 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "./LYStrings.c", "SNACat" );
      strncpy( dest[0], src, n );
    }
    else
    {
      dest[0] = malloc( ( n + 1 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "./LYStrings.c", "SNACat" );
      memcpy( dest[0], src, n );
      dest[0] = 0;
    }
  }
  return dest[0];
}
long UniToLowerCase( long upper )
{
  size_t i;
  size_t high;
  size_t low;
  long diff = 0;
  if ( upper <= 0 )
  {
    return upper;
  }
  low = 0;
  high = 705;
  do
  {
    if ( low < high )
    {
      i = low + ( ( high - low ) >> 1 );
      diff = unicode_to_lower_case[ i ].upper - upper;
      if ( diff < 0 )
        low = i + 1;
      if ( diff > 0 )
        high = i;
    }
    else
    {
      return upper;
    }
  }
  while ( diff );
  return unicode_to_lower_case[ i ].lower;
}
int UPPER8( int ch1, int ch2 )
{
  if ( ch2 == ch1 )
  {
    return 0;
  }
  if ( ch2 == 0 )
  {
    return ch1;
  }
  if ( ch1 == 0 )
  {
    return 0 - ch2;
  }
  if ( !(_Bool)( ( ch1 >> 7 ) & 1 ) && !(_Bool)( ( ch2 >> 7 ) & 1 ) )
  {
    return ch1 - ch2;
  }
  else
  if ( (_Bool)( ( ch1 >> 7 ) & 1 ) && (_Bool)( ( ch2 >> 7 ) & 1 ) )
  {
    if ( DisplayCharsetMatchLocale )
    {
      return ch1 - ch2;
    }
    else
    {
      long uni_ch2 = UCTransToUni( ch2, current_char_set );
      long uni_ch1;
      if ( uni_ch2 < 0 )
      {
        return ch1;
      }
      uni_ch1 = UCTransToUni( ch1, current_char_set );
      return UniToLowerCase( uni_ch1 ) - UniToLowerCase( uni_ch2 );
    }
  }
  else
  {
    return -10;
  }
}
char *LYSafeGets( char **src, FILE *fp )
{
  int eax;
  char buffer[8192];
  char *result = 0;
  if ( src )
    result = src[0];
  if ( result )
  {
    result[0] = 0;
  }
  do
  {
    if ( fgets( buffer, 8192, fp ) )
    {
      if ( buffer[0] )
      {
        result = HTSACat( &result, buffer );
      }
    }
    else
    {
      if ( ferror( fp ) )
      {
        if ( result )
        {
          free( result );
          result = 0;
        }
      }
      else
      {
        if ( feof( fp ) && result && !result[0] && result )
        {
          free( result );
          result = 0;
        }
      }
      if ( src == 0 )
      {
        return result;
      }
      return result;
    }
  }
  while ( strchr( buffer, '\n' ) );
}
void LYOpenCmdLogfile( int argc, char **argv )
{
  int n;
  if ( lynx_cmd_logfile )
  {
    cmd_logfile = LYNewTxtFile( lynx_cmd_logfile );
    if ( cmd_logfile )
    {
      fprintf( cmd_logfile, "# Command logfile created by %s %s (%s)\n", "Lynx", "2.8.7dev.11", LYVersionDate( ) );
      n = 0;
      for ( ; n < argc; n++ )
      {
        fprintf( cmd_logfile, "# Arg%d = %s\n", n, argv[ n ] );
        // n++;
      }
    }
  }
  return;
}
BOOLEAN LYHaveCmdScript( void )
{
  return cmd_script != 0;
}
void LYOpenCmdScript( void )
{
  if ( lynx_cmd_script )
  {
    cmd_script = fopen64( lynx_cmd_script, "r" );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYOpenCmdScript(%s) %s\n", lynx_cmd_script, "FAIL" );
    }
  }
  return;
}
int LYReadCmdKey( int mode )
{
  int ch = -1;
  if ( cmd_script )
  {
    char *buffer = 0;
    char *src;
    char *tmp;
    unsigned int len;
    while ( ch < 0 && LYSafeGets( &buffer, cmd_script ) )
    {
      LYTrimTrailing( buffer );
      src = LYSkipBlanks( buffer );
      tmp = LYSkipNonBlanks( src );
      len = tmp - src;
      if ( len != 3 )
      {
        if ( len == 4 && strncasecomp( src, "exit", 4 ) == 0 )
        {
          exit_immediately( 0 );
        }
      }
      else
      {
        if ( strncasecomp( src, "key", 3 ) == 0 )
        {
          ch = LYStringToKeycode( LYSkipBlanks( tmp ) );
        }
        else
        {
          if ( strncasecomp( src, "set", 3 ) )
            continue;
          else
          {
            src = LYSkipBlanks( tmp );
            tmp = src;
            for ( ; tmp[0] && !( *(short*)(*(int*)(__ctype_b_loc( )) + ( tmp[0] * 2 )) & 8192 ) && tmp[0] != '='; tmp++ )
            {
              // tmp++;
            }
            if ( tmp[0] )
            {
              tmp[0] = 0;
              tmp++;
              tmp = LYSkipBlanks( tmp );
            }
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "LYSetConfigValue(%s, %s)\n", src, tmp );
            }
            LYSetConfigValue( src, tmp );
          }
        }
      }
    }
    if ( feof( cmd_script ) )
    {
      fclose( cmd_script );
      cmd_script = 0;
    }
    if ( ch >= 0 )
    {
      LYSleepReplay( );
      LYrefresh( );
    }
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
  }
  else
  {
    ch = LYgetch_for( mode );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYReadCmdKey(%d) -&gt;%s (%#x)\n", mode, LYKeycodeToString( ch, 1 ), ch );
  }
  LYWriteCmdKey( ch );
  return ch;
}
void LYWriteCmdKey( int ch )
{
  if ( cmd_logfile )
  {
    fprintf( cmd_logfile, "key %s\n", LYKeycodeToString( ch, 0 ) );
  }
  return;
}
void LYCloseCmdLogfile( void )
{
  if ( cmd_logfile )
  {
    LYCloseOutput( cmd_logfile );
    cmd_logfile = 0;
  }
  if ( cmd_script )
  {
    LYCloseInput( cmd_script );
    cmd_script = 0;
  }
  if ( lynx_cmd_logfile )
  {
    free( lynx_cmd_logfile );
    lynx_cmd_logfile = 0;
  }
  if ( lynx_cmd_script )
  {
    free( lynx_cmd_script );
    lynx_cmd_script = 0;
  }
  return;
}
#if 0
#endif
