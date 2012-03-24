#include "LYUtils.c.h"
static HTList *localhost_aliases;
static char *HomeDir;
HTList *sug_filenames;
static LY_TEMP *ly_temp;
BOOLEAN mustshow;
static int lineno;
static int fake_zap;
static struct {
   char *name;
   BOOLEAN *flag;
   BOOLEAN can;
   char __pad[3];
} restrictions[58];
static uip_entry ly_uip[13];
static FILE *paste_handle;
static char *paste_buf;
LY_TEMP *FindTempfileByName( char *name )
{
  int eax;
  LY_TEMP *p = ly_temp;
  for ( ; p && strcmp( &p->name, name );  )
  {
    p = &p->next;
  }
  return p;
}
LY_TEMP *FindTempfileByFP( FILE *fp )
{
  int eax;
  LY_TEMP *p = ly_temp;
  for ( ; p && p->file != fp;  )
  {
    p = &p->next;
  }
  return p;
}
char *LYGetEnv( char *name )
{
  char *result = getenv( name );
  return 0;
}
size_t utf8_length( BOOLEAN utf_flag, char *data )
{
  size_t utf_extra = 0;
  if ( utf_flag && data < 0 )
  {
    if ( ( data & 224 ) == 192 )
      utf_extra = 1;
    else
    if ( ( data & 240 ) == 224 )
      utf_extra = 2;
    else
    if ( ( data & 248 ) == 240 )
      utf_extra = 3;
    else
    if ( ( data & 252 ) == 248 )
      utf_extra = 4;
    else
    if ( ( data & 254 ) == 252 )
      utf_extra = 5;
    else
      utf_extra = 0;
    if ( strlen( &data ) < utf_extra )
    {
      utf_extra = 0;
    }
  }
  return utf_extra;
}
void LYFreeHilites( int first, int last )
{
  int i = first;
  for ( ; i < last; i++ )
  {
    LYSetHilite( i, 0 );
    if ( links[ i ]->lname )
    {
      free( links[ i ].lname );
      links[ i ].lname = 0;
    }
    // i++;
  }
  return;
}
void LYSetHilite( int cur, char *text )
{
  links[ cur ].list.hl_base.hl_text = text;
  links[ cur ].list.hl_len = text != 0;
  if ( links[ cur ].list.hl_info )
  {
    free( links[ cur ].list.hl_info );
    links[ cur ].list.hl_info = 0;
  }
  return;
}
void LYAddHilite( int cur, char *text, int x )
{
  HiliteList *list = &links[ cur ].list;
  HiliteInfo *have = &list->hl_info->hl_text[0];
  unsigned int need = list->hl_len + -1;
  unsigned int want;
  want = list->hl_len = list->hl_len + 1;
  if ( have )
  {
    have = realloc( have, ( want ) * sizeof( HiliteInfo ) );
  }
  else
  {
    have = malloc( ( want ) * sizeof( HiliteInfo ) );
  }
  list->hl_info->hl_text[0] = have;
  have[ need ].hl_text = text;
  have[ need ].hl_x = x;
  return;
}
char *LYGetHiliteStr( int cur, int count )
{
  char *result;
  if ( links[ cur ].list.hl_len <= count )
  {
    result = 0;
  }
  if ( count > 0 )
  {
    result = links[ cur ].list.hl_info[ count + -1 ].hl_text;
  }
  result = links[ cur ].list.hl_base.hl_text;
  return result;
}
int LYGetHilitePos( int cur, int count )
{
  int result;
  if ( links[ cur ].list.hl_len <= count )
  {
    result = -1;
  }
  if ( count > 0 )
  {
    result = links[ cur ].list.hl_info[ count + -1 ].hl_x;
  }
  result = links[ cur ].lx;
  return result;
}
BOOLEAN show_whereis_targets( int flag, int cur, int count, char *target, BOOLEAN TargetEmphasisON, BOOLEAN utf_flag )
{
  int eax;
  char *Data = 0;
  char *cp;
  char *theData = 0;
  char buffer[1024];
  char tmp[7];
  int HitOffset;
  int LenNeeded;
  int Offset;
  int tLen;
  tmp[0] = tmp[1] = tmp[2] = 0;
  if ( target && target[0] && ( links[ cur ].type & 2 ) && LYGetHiliteStr( cur, count ) && *(char*)(LYGetHiliteStr( cur, count )) && links[ cur ].ly + count < display_lines && ( HText_getFirstTargetInLine( HTMainText, links[ cur ].anchor_line_num + count, utf_flag, &Offset, &tLen, &theData, target ) & 255 ) )
  {
    int itmp, written, len, y, offset;
    char *data;
    int tlen = strlen( target );
    int hlen, hLen;
    int hLine = links[ cur ].ly + count;
    int hoffset = LYGetHilitePos( cur, count );
    size_t utf_extra = 0;
    LYmbcsstrncpy( buffer, "", 1023, LYcols - ( LYShowScrollbar != 0 ) - LYGetHilitePos( cur, count ), utf_flag );
    hLen = hlen = strlen( buffer );
    if ( Offset < hoffset + hLen )
    {
      Data = theData;
      for ( ; Offset < hoffset && tLen + Offset <= hoffset;  )
      {
        data = &Data[ tlen ];
        offset = tLen + Offset;
        cp = case_sensitive ? LYno_attr_mbcs_strstr( data, target, utf_flag, 1, &HitOffset, &LenNeeded ) : LYno_attr_mbcs_case_strstr( data, target, utf_flag, 1, &HitOffset, &LenNeeded );
        if ( cp && offset + LenNeeded < LYcols )
        {
          Data = cp;
          Offset = offset + HitOffset;
        }
      }
      data = buffer;
      offset = hoffset;
      if ( Offset < offset && offset < tLen + Offset )
      {
        itmp = 0;
        written = 0;
        len = tlen + ( Offset - offset );
        LYmove( hLine, offset );
        tmp[0] = data[ itmp ];
        utf_extra = utf8_length( utf_flag, &data[ itmp ] );
        if ( utf_extra )
        {
          LYstrncpy( &tmp[1], &data[ itmp + 1 ], (int)utf_extra );
          itmp += (int)utf_extra;
          if ( flag != 1 )
          {
            LYstartTargetEmphasis( );
            TargetEmphasisON = 1;
            LYwaddnstr( LYwin, tmp, strlen( tmp ) );
          }
          else
            LYmove( hLine, offset + 1 );
          tmp[1] = 0;
          written = written + utf_extra + 1;
          utf_extra = 0;
        }
        else
        if ( HTCJK && tmp[0] < 0 )
        {
          itmp++;
          tmp[1] = data[ itmp ];
          if ( flag != 1 )
          {
            LYstartTargetEmphasis( );
            TargetEmphasisON = 1;
            LYwaddnstr( LYwin, tmp, strlen( tmp ) );
          }
          else
            LYmove( hLine, offset + 1 );
          tmp[1] = 0;
          written += 2;
        }
        else
        {
          if ( flag != 1 )
          {
            LYstartTargetEmphasis( );
            TargetEmphasisON = 1;
            LYwaddnstr( LYwin, tmp, strlen( tmp ) );
          }
          else
            LYmove( hLine, offset + 1 );
          written++;
        }
        itmp++;
        if ( TargetEmphasisON == 0 && data[ itmp ] )
        {
          LYstartTargetEmphasis( );
          TargetEmphasisON = 1;
          while ( written < len )
          {
            tmp[0] = data[ itmp ];
            if ( tmp[0] )
            {
              utf_extra = utf8_length( utf_flag, &data[ itmp ] );
              if ( utf_extra )
              {
                LYstrncpy( &tmp[1], &data[ itmp + 1 ], (int)utf_extra );
                itmp += (int)utf_extra;
                if ( flag == 1 && data[ itmp + 1 ] == 0 )
                {
                  LYstopTargetEmphasis( );
                  TargetEmphasisON = 0;
                  y = -1;
                  offset = -1;
                  LYmove( hLine, offset + 1 );
                }
                else
                {
                  LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                }
                tmp[1] = 0;
                written = written + utf_extra + 1;
                utf_extra = 0;
              }
              else
              if ( HTCJK && tmp[0] < 0 )
              {
                itmp++;
                tmp[1] = data[ itmp ];
                if ( flag == 1 && data[ itmp + 1 ] == 0 )
                {
                  LYstopTargetEmphasis( );
                  TargetEmphasisON = 0;
                  y = -1;
                  offset = -1;
                  LYmove( hLine, offset + 1 );
                }
                else
                {
                  LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                }
                tmp[1] = 0;
                written += 2;
              }
              else
              {
                if ( flag == 1 && data[ itmp + 1 ] == 0 )
                {
                  LYstopTargetEmphasis( );
                  TargetEmphasisON = 0;
                  y = -1;
                  offset = -1;
                  LYmove( hLine, offset + 1 );
                }
                else
                {
                  LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                }
                written++;
              }
              itmp++;
            }
            else
              break;
          }
          if ( TargetEmphasisON )
          {
            LYstopTargetEmphasis( );
            TargetEmphasisON = 0;
          }
          y = -1;
          offset = -1;
          if ( offset < ( flag == 1 ? hLen + -1 : hLen ) + hoffset )
          {
            if ( case_sensitive )
            {
              data = &Data[ offset - Offset ];
            }
            else
            {
              data = &Data[ offset - Offset ];
            }
            cp = LYno_attr_mbcs_case_strstr( data, target, utf_flag, 1, &HitOffset, &LenNeeded );
            if ( cp && offset + LenNeeded < LYcols && offset + HitOffset < ( flag == 1 ? hLen + -1 : hLen ) + hoffset )
            {
              Data = cp;
              Offset = offset + HitOffset;
              data = buffer;
              offset = hoffset;
              while ( Offset - offset <= ( flag == 1 ? hLen + -1 : hLen ) )
              {
                data = &data[ Offset - offset ];
                if ( utf_flag )
                  LYrefresh( );
                offset = Offset;
                itmp = 0;
                written = 0;
                len = tlen;
                LYmove( hLine, offset );
                tmp[0] = data[ itmp ];
                utf_extra = utf8_length( utf_flag, &data[ itmp ] );
                if ( utf_extra )
                {
                  LYstrncpy( &tmp[1], &data[ itmp + 1 ], (int)utf_extra );
                  itmp += (int)utf_extra;
                  if ( flag != 1 || ( hoffset < offset && data[ itmp + 1 ] ) )
                  {
                    LYstartTargetEmphasis( );
                    TargetEmphasisON = 1;
                    LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                  }
                  else
                    LYmove( hLine, offset + 1 );
                  tmp[1] = 0;
                  written = written + utf_extra + 1;
                  utf_extra = 0;
                }
                else
                if ( HTCJK && tmp[0] < 0 )
                {
                  itmp++;
                  tmp[1] = data[ itmp ];
                  if ( flag != 1 || ( hoffset < offset && data[ itmp + 1 ] ) )
                  {
                    LYstartTargetEmphasis( );
                    TargetEmphasisON = 1;
                    LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                  }
                  else
                    LYmove( hLine, offset + 2 );
                  tmp[1] = 0;
                  written += 2;
                }
                else
                {
                  if ( flag != 1 || ( hoffset < offset && data[ itmp + 1 ] ) )
                  {
                    LYstartTargetEmphasis( );
                    TargetEmphasisON = 1;
                    LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                  }
                  else
                    LYmove( hLine, offset + 1 );
                  written++;
                }
                itmp++;
                if ( TargetEmphasisON == 0 && data[ itmp ] )
                {
                  LYstartTargetEmphasis( );
                  TargetEmphasisON = 1;
                  while ( written < len )
                  {
                    tmp[0] = data[ itmp ];
                    if ( tmp[0] )
                    {
                      utf_extra = utf8_length( utf_flag, &data[ itmp ] );
                      if ( utf_extra )
                      {
                        LYstrncpy( &tmp[1], &data[ itmp + 1 ], (int)utf_extra );
                        itmp += (int)utf_extra;
                        if ( flag == 1 && data[ itmp + 1 ] == 0 )
                        {
                          LYstopTargetEmphasis( );
                          TargetEmphasisON = 0;
                          y = -1;
                          offset = -1;
                          LYmove( hLine, offset + 1 );
                        }
                        else
                        {
                          LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                        }
                        tmp[1] = 0;
                        written = written + utf_extra + 1;
                        utf_extra = 0;
                      }
                      else
                      if ( HTCJK && tmp[0] < 0 )
                      {
                        itmp++;
                        tmp[1] = data[ itmp ];
                        if ( flag == 1 && data[ itmp + 1 ] == 0 )
                        {
                          LYstopTargetEmphasis( );
                          TargetEmphasisON = 0;
                          y = -1;
                          offset = -1;
                          LYmove( hLine, offset + 1 );
                        }
                        else
                        {
                          LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                        }
                        tmp[1] = 0;
                        written += 2;
                      }
                      else
                      {
                        if ( flag == 1 && data[ itmp + 1 ] == 0 )
                        {
                          LYstopTargetEmphasis( );
                          TargetEmphasisON = 0;
                          y = -1;
                          offset = -1;
                          LYmove( hLine, offset + 1 );
                        }
                        else
                        {
                          LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                        }
                        written++;
                      }
                      itmp++;
                    }
                    else
                      break;
                  }
                  if ( TargetEmphasisON )
                  {
                    LYstopTargetEmphasis( );
                    TargetEmphasisON = 0;
                  }
                  y = -1;
                  offset = -1;
                  if ( offset < ( flag == 1 ? hLen + -1 : hLen ) + hoffset )
                  {
                    if ( case_sensitive )
                    {
                      data = &Data[ offset - Offset ];
                    }
                    else
                    {
                      data = &Data[ offset - Offset ];
                    }
                    cp = LYno_attr_mbcs_case_strstr( data, target, utf_flag, 1, &HitOffset, &LenNeeded );
                    if ( cp && offset + LenNeeded < LYcols && offset + HitOffset < ( flag == 1 ? hLen + -1 : hLen ) + hoffset )
                    {
                      if ( hoffset + hLen <= HitOffset + tLen + offset )
                      {
                        offset += HitOffset;
                        data = &Data[ offset - hoffset ];
                        if ( utf_flag )
                          LYrefresh( );
                        LYmove( hLine, offset );
                        itmp = 0;
                        written = 0;
                        len = strlen( data );
                        LYstartTargetEmphasis( );
                        TargetEmphasisON = 1;
                        for ( ; written < len; itmp++ )
                        {
                          tmp[0] = data[ itmp ];
                          if ( tmp[0] )
                          {
                            utf_extra = utf8_length( utf_flag, &data[ itmp ] );
                            if ( utf_extra )
                            {
                              LYstrncpy( &tmp[1], &data[ itmp + 1 ], (int)utf_extra );
                              itmp += (int)utf_extra;
                              if ( flag == 1 && data[ itmp + 1 ] == 0 )
                              {
                                LYstopTargetEmphasis( );
                                TargetEmphasisON = 0;
                                y = -1;
                                offset = -1;
                                LYmove( hLine, offset + 1 );
                              }
                              else
                              {
                                LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                              }
                              tmp[1] = 0;
                              written = written + utf_extra + 1;
                              utf_extra = 0;
                            }
                            else
                            if ( HTCJK && tmp[0] < 0 )
                            {
                              itmp++;
                              tmp[1] = data[ itmp ];
                              if ( flag == 1 && data[ itmp + 1 ] == 0 )
                              {
                                LYstopTargetEmphasis( );
                                TargetEmphasisON = 0;
                              }
                              else
                              {
                                LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                              }
                              tmp[1] = 0;
                              written += 2;
                            }
                            else
                            {
                              if ( flag == 1 && data[ itmp + 1 ] == 0 )
                              {
                                LYstopTargetEmphasis( );
                                TargetEmphasisON = 0;
                              }
                              else
                              {
                                LYwaddnstr( LYwin, tmp, strlen( tmp ) );
                              }
                              written++;
                            }
                            // itmp++;
                          }
                          else
                            break;
                        }
                        if ( TargetEmphasisON )
                        {
                          LYstopTargetEmphasis( );
                          break;
                        }
                      }
                      else
                      {
                        Data = cp;
                        Offset = offset + HitOffset;
                        data = buffer;
                        offset = hoffset;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( theData )
  {
    free( theData );
    theData = 0;
  }
  return TargetEmphasisON;
}
int find_cached_style( int cur, int flag )
{
  int eax;
  int s = s_alink;
  if ( textfields_need_activation && links[ cur ].type == 1 )
  {
    s = s_curedit;
  }
  if ( flag != 1 )
  {
    int x;
    if ( ValidCachedStyle( links[ cur ].ly, links[ cur ].lx ) & 255 )
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "STYLE.highlight.off: cached style @(%d,%d): ", links[ cur ].ly, links[ cur ].lx );
      }
      s = GetCachedStyle( links[ cur ].ly, links[ cur ].lx );
      if ( s == 0 )
      {
        x = links[ cur ].lx + -1;
        for ( ; x >= 0;  )
        {
          s = GetCachedStyle( links[ cur ].ly, x );
          if ( s )
          {
            SetCachedStyle( links[ cur ].ly, links[ cur ].lx, s );
            if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
            {
              fprintf( TraceFP( ), "found %d, x_offset=%d.\n", s, x - links[ cur ].lx );
              break;
            }
          }
          else
          {
            x += -1;
          }
        }
        if ( s == 0 )
        {
          if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
          {
            fprintf( TraceFP( ), "not found, assume &lt;a&gt;.\n" );
          }
          s = s_a;
        }
      }
      else
      {
        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
        {
          fprintf( TraceFP( ), "found %d.\n", s );
        }
      }
    }
    else
    {
      if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
      {
        fprintf( TraceFP( ), "STYLE.highlight.off: can't use cache.\n" );
      }
      s = s_a;
    }
  }
  else
  if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
  {
    fprintf( TraceFP( ), "STYLE.highlight.on: @(%d,%d).\n", links[ cur ].ly, links[ cur ].lx );
  }
  return s;
}
void LYhighlight( int flag, int cur, char *target )
{
  char buffer[1024];
  int i;
  int hi_count;
  int hi_offset;
  int title_adjust = 0;
  char tmp[7];
  char *hi_string;
  BOOLEAN TargetEmphasisON = 0;
  BOOLEAN target1_drawn = 0;
  BOOLEAN utf_flag = LYCharSet_UC[ current_char_set ].enc == 7;
  BOOLEAN hl1_drawn = 0;
  BOOLEAN hl2_drawn = 0;
  tmp[0] = tmp[1] = tmp[2] = 0;
  if ( cur < 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYhighlight cur %d (bug workaround)\n", cur );
    }
    cur = 0;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYhighlight at(%2d,%2d) %s %d [%d]:%s\n", links[ cur ].ly, links[ cur ].lx, "off", cur, links[ cur ].anchor_number, "(null)" );
  }
  if ( nlinks > 0 )
  {
    if ( flag == 1 || links[ cur ].type == 1 )
    {
      LYmove( links[ cur ].ly + title_adjust, links[ cur ].lx );
      curses_style( find_cached_style( cur, flag ), 1 );
    }
    if ( links[ cur ].type == 1 )
    {
      int len, gllen;
      int avail_space = ( LYcols - ( LYShowScrollbar != 0 ) - links[ cur ].lx ) + ( ( LYcols - ( LYShowScrollbar != 0 ) ) * ( LYlines - links[ cur ].ly ) );
      char *text = LYGetHiliteStr( cur, 0 );
      if ( text == 0 )
        text = "";
      if ( links[ cur ].l_form->size < avail_space )
        avail_space = links[ cur ].l_form->size;
      gllen = LYmbcsstrlen( text, utf_flag, 1 );
      len = LYmbcs_skip_cells( text, avail_space, utf_flag ) - text;
      LYwaddnstr( LYwin, text, len );
      while ( gllen++, ( gllen < avail_space ) & 255 )
      {
        waddch( LYwin, 95 );
      }
    }
    else
    {
      if ( flag == 0 )
      {
        hl2_drawn = 1;
        redraw_lines_of_link( cur );
        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
        {
          fprintf( TraceFP( ), "STYLE.highlight.off: NOFIX branch @(%d,%d).\n", links[ cur ].ly, links[ cur ].lx );
        }
      }
      else
      {
        if ( hl1_drawn == 0 )
        {
          LYmbcsstrncpy( buffer, "", 1023, LYcols - ( LYShowScrollbar != 0 ) - links[ cur ].lx, utf_flag );
          LYwaddnstr( LYwin, buffer, strlen( buffer ) );
        }
      }
    }
    if ( hl2_drawn == 0 )
    {
      hi_count = 1;
      for ( ; hi_string && links[ cur ].ly + hi_count <= display_lines;  )
      {
        int row = title_adjust + links[ cur ].ly + hi_count;
        hi_offset = LYGetHilitePos( cur, hi_count );
        lynx_stop_link_color( flag == 1, links[ cur ].inUnderline );
        LYmove( row, hi_offset );
        if ( WWW_TraceFlag && ( WWW_TraceMask & 2 ) )
        {
          fprintf( TraceFP( ), "STYLE.highlight.line2: @(%d,%d), style=%d.\n", row, hi_offset, flag == 1 ? s_alink : s_a );
        }
        curses_style( flag == 1 ? s_alink : s_a, 2 );
        i = 0;
        while ( tmp[0] = hi_string[ i ], tmp[0] && i + hi_offset < LYcols )
        {
          if ( hi_string[ i ] <= 2 || 8 < hi_string[ i ] )
          {
            if ( HTCJK && tmp[0] < 0 )
            {
              i++;
              tmp[1] = hi_string[ i ];
              LYwaddnstr( LYwin, tmp, strlen( tmp ) );
              tmp[1] = 0;
            }
            else
            {
              LYwaddnstr( LYwin, tmp, strlen( tmp ) );
            }
          }
          i++;
        }
        hi_count++;
      }
      lynx_stop_link_color( flag == 1, links[ cur ].inUnderline );
    }
    hi_count = target1_drawn != 0;
    for ( ; LYGetHiliteStr( cur, hi_count ) == 0; hi_count++ )
    {
      TargetEmphasisON = show_whereis_targets( flag, cur, hi_count, target, TargetEmphasisON, utf_flag );
      // hi_count++;
    }
  }
  return;
}
void free_and_clear( char **pointer )
{
  if ( pointer[0] )
  {
    if ( pointer[0] == 0 )
      goto B4;
    else
    {
      free( pointer[0] );
      pointer[0] = 0;
    }
B4:;
    pointer[0] = 0;
  }
  return;
}
void convert_to_spaces( char *string, BOOLEAN condense )
{
  char *s = string;
  char *ns;
  BOOLEAN last_is_space = 0;
  if ( s )
  {
    s = LYSkipNonBlanks( s );
    ns = s;
    for ( ; s[0]; s++ )
    {
      switch ( s[0] )
      {
      case 9:
      case 32:
        if ( condense == 0 || last_is_space == 0 )
        {
          ns[0] = ' ';
          ns++;
        }
        last_is_space = 1;
        break;
      case 10:
      case 13:
        if ( last_is_space == 0 )
        {
          ns[0] = ' ';
          ns++;
          last_is_space = 1;
        }
        break;
      default:
        ns[0] = s[0];
        ns++;
        last_is_space = 0;
        break;
      }
      // s++;
    }
    ns[0] = 0;
  }
  return;
}
char *strip_trailing_slash( char *dirname )
{
  int i = strlen( dirname ) + -1;
  for ( ; i >= 0 && dirname[ i ] == '/';  )
  {
    dirname[ i ] = 0;
    i += -1;
  }
  return dirname;
}
void remove_most_blanks( char *buffer )
{
  int length = strlen( buffer );
  BOOLEAN trailing;
  *(int*)&trailing = 0;
  LYReduceBlanks( buffer );
  if ( trailing )
  {
    memcpy( buffer + strlen( buffer ) );
  }
  return;
}
void statusline( char *text )
{
  char buffer[1024];
  unsigned char *temp = 0;
  int max_length, len, i, j;
  int at_lineno;
  unsigned char k;
  char *p;
  char text_buff[1024];
  if ( text && !dump_output_immediately && ( mustshow == 1 || no_statusline != 1 ) )
  {
    mustshow = 0;
    LYstrncpy( text_buff, text, 1023 );
    p = strchr( text_buff, '\n' );
    if ( p )
      p = 0;
    max_length = 1023;
    if ( text_buff[0] && LYHaveCJKCharacterSet )
    {
      temp = calloc( strlen( text_buff ) + 1, sizeof( unsigned char ) );
      if ( temp == 0 )
        outofmem( "./LYUtils.c", "statusline" );
      if ( kanji_code == EUC )
        TO_EUC( text_buff, temp );
      else
      if ( kanji_code == SJIS )
        strcpy( (char*)temp, text_buff );
      else
      {
        i = 0;
        j = 0;
        for ( ; text_buff[ i ]; i++ )
        {
          if ( text_buff[ i ] != 27 )
          {
            temp[ j ] = text_buff[ i ];
            j++;
          }
          // i++;
        }
        temp[ j ] = 0;
      }
      remove_most_blanks( (char*)temp );
      i = 0;
      j = 0;
      len = 0;
      k = 0;
      for ( ; temp[ i ] && len < max_length; i++ )
      {
        if ( k )
        {
          buffer[ j ] = k;
          buffer[ j ] = temp[ i ];
          j++;
          j++;
          k = 0;
          len += 2;
        }
        else
        if ( temp[ i ] < 0 )
          k = temp[ i ];
        else
        {
          buffer[ j ] = temp[ i ];
          j++;
          len++;
        }
        // i++;
      }
      buffer[ j ] = 0;
      if ( temp )
      {
        free( temp );
        temp = 0;
      }
    }
    else
    {
      remove_most_blanks( text_buff );
      len = strlen( text_buff );
      if ( len > 1022 )
        len = 1023;
      for ( ; len > 0 && max_length < LYstrExtent( buffer, len, len );  )
      {
        len += -1;
        buffer[ len ] = 0;
      }
    }
    if ( LYStatusLine >= 0 )
    {
      if ( LYStatusLine < LYlines + -1 )
        at_lineno = LYStatusLine;
      else
        at_lineno = LYlines + -1;
    }
    else
    if ( user_mode == 0 )
      at_lineno = LYlines + -3;
    else
      at_lineno = LYlines + -1;
    LYmove( at_lineno, 0 );
    LYclrtoeol( );
    if ( buffer[0] )
    {
      BOOLEAN has_CJK = 0;
      if ( HTCJK )
      {
        i = 0;
        for ( ; buffer[ i ]; i++ )
        {
          if ( buffer[ i ] < 0 )
          {
            has_CJK = 1;
            break;
          }
          else
          {
            // i++;
          }
        }
      }
      if ( has_CJK )
        LYrefresh( );
    {
      int y, x;
      int a = strncmp( buffer, gettext( "Alert!: %s" ), 5 ) || hashStyles[ s_alert ].name == 0 ? s_status : s_alert;
      curses_style( a, 1 );
      LYwaddnstr( LYwin, buffer, strlen( buffer ) );
      wbkgdset( LYwin, 32 );
      y = -1;
      x = -1;
      if ( y == at_lineno )
        LYclrtoeol( );
      if ( lynx_has_color == 0 || LYShowColor <= 1 )
        wbkgdset( LYwin, 32 );
      else
      if ( s_normal != -1 )
        wbkgdset( LYwin, hashStyles[ s_normal ].color | 32 );
      else
        wbkgdset( LYwin, displayStyles[128].color | 32 );
      curses_style( a, 0 );
    }
    }
    LYrefresh( );
  }
  return;
}
char *novice_lines( int lineno )
{
  switch ( lineno )
  {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  default:
    return "";
    break;
  }
}
void toggle_novice_line( void )
{
  lineno++;
  if ( *(char*)(novice_lines( lineno )) == 0 )
  {
    lineno = 0;
  }
  return;
}
void noviceline( int more_flag )
{
  if ( dump_output_immediately == 0 )
  {
    LYmove( LYlines + -2, 0 );
    LYclrtoeol( );
    LYwaddnstr( LYwin, gettext( "  Arrow keys: Up and Down to move.  Right to follow a link; Left to go back.  \n" ), strlen( gettext( "  Arrow keys: Up and Down to move.  Right to follow a link; Left to go back.  \n" ) ) );
    LYmove( LYlines + -1, 0 );
    LYclrtoeol( );
    if ( lynx_edit_mode && no_dired_support == 0 )
    {
      LYwaddnstr( LYwin, gettext( "  C)reate  D)ownload  E)dit  F)ull menu  M)odify  R)emove  T)ag  U)pload     \n" ), strlen( gettext( "  C)reate  D)ownload  E)dit  F)ull menu  M)odify  R)emove  T)ag  U)pload     \n" ) ) );
    }
    else
    if ( LYUseNoviceLineTwo )
    {
      LYwaddnstr( LYwin, gettext( " H)elp O)ptions P)rint G)o M)ain screen Q)uit /=search [delete]=history list \n" ), strlen( gettext( " H)elp O)ptions P)rint G)o M)ain screen Q)uit /=search [delete]=history list \n" ) ) );
    }
    else
    {
      LYwaddnstr( LYwin, novice_lines( lineno ), strlen( novice_lines( lineno ) ) );
    }
    LYrefresh( );
  }
  return;
}
int LYReopenInput( void )
{
  int result = 0;
  int fd = fileno( stdin );
  if ( fd == 0 && isatty( fd ) == 0 && fd == LYConsoleInputFD( 0 ) )
  {
    char *term_name = 0;
    int new_fd = -1;
    if ( isatty( fileno( stdout ) ) )
    {
      term_name = ttyname( fileno( stdout ) );
      if ( term_name )
      {
        new_fd = open64( term_name, 0 );
      }
    }
    if ( new_fd == -1 && isatty( fileno( stderr ) ) )
    {
      term_name = ttyname( fileno( stderr ) );
      if ( term_name )
      {
        new_fd = open64( term_name, 0 );
      }
    }
    if ( new_fd == -1 )
    {
      term_name = ctermid( 0 );
      if ( term_name )
      {
        new_fd = open64( term_name, 0 );
      }
    }
    if ( new_fd == -1 )
    {
      term_name = "/dev/tty";
      new_fd = open64( "/dev/tty", 0 );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYReopenInput open(%s) returned %d.\n", term_name, new_fd );
    }
    if ( new_fd < 0 )
    {
      result = -1;
    }
  {
    FILE *frp;
    close( new_fd );
    frp = freopen64( term_name, "r", stdin );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYReopenInput freopen(%s,\"r\",stdin) returned %p, stdin is now %p with fd %d.\n", term_name, frp, stdin, fileno( stdin ) );
    }
    result = 1;
  }
  }
  return result;
}
int LYConsoleInputFD( BOOLEAN need_selectable )
{
  int fd = -1;
  fd = fileno( stdin );
  if ( need_selectable == 0 || fd == -1 )
  {
    return fd;
  }
  if ( isatty( fd ) )
  {
    return fd;
  }
  return -1;
}
void LYFakeZap( BOOLEAN set )
{
  if ( set && fake_zap <= 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\r *** Set simulated 'Z'" );
    }
    if ( fake_zap && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), ", %d pending", fake_zap );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), " ***\n" );
    }
    fake_zap++;
  }
  else
  {
    if ( set || fake_zap == 0 )
    {
      return;
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\r *** Unset simulated 'Z'" );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), ", %d pending", fake_zap );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), " ***\n" );
    }
    fake_zap = 0;
  }
  return;
}
int DontCheck( void )
{
  static long last;
  long next;
  if ( dump_output_immediately )
  {
    return 1;
  }
  if ( LYHaveCmdScript( ) & 255 )
  {
    return 1;
  }
{
  struct timeval tv;
  gettimeofday( &tv.tv_sec, 0 );
  next = ( (/*HI*/int)( 0x14f8b589 * tv.tv_usec ) >> 13 ) - ( tv.tv_usec >> 31 );
  if ( next == last )
  {
    return 1;
  }
  last = next;
  return 0;
}
}
int HTCheckForInterrupt( void )
{
  int c;
  int cmd;
  if ( fake_zap > 0 )
  {
    fake_zap += -1;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\r *** Got simulated 'Z' ***\n" );
    }
    if ( WWW_TraceFlag )
    {
      fflush( TraceFP( ) );
    }
    if ( WWW_TraceFlag && LYTraceLogFP == 0 )
      sleep( AlertSecs );
    return 1;
  }
  else
  {
    if ( DontCheck( ) )
    {
      return 0;
    }
  {
    struct timeval socket_timeout;
    int ret = 0;
    fd_set readfds;
    socket_timeout.tv_sec = 0;
    socket_timeout.tv_usec = 0;
  {
    unsigned int __i;
    fd_set *__arr = &readfds;
    __i = 0;
    for ( ; __i <= 31; __i++ )
    {
      __arr->fds_bits[0] = 0;
      // __i++;
    }
    readfds.fds_bits[0] |= 1;
    ret = select( 1, &readfds, 0, 0, &socket_timeout.tv_sec );
    if ( ret == -1 && *(int*)(__errno_location( )) == 4 )
    {
      return 0;
    }
    if ( ( readfds.fds_bits[0] & 1 ) == 0 )
    {
      return 0;
    }
    c = LYgetch( );
    switch ( c )
    {
    case -1:
      if ( keymap[0] == 47 )
      {
        return 1;
      }
      cmd = c == -1 ? keymap[0] : keymap[ ( c & 2047 ) + 1 ];
      if ( cmd == 64 )
        handle_LYK_TRACE_TOGGLE( );
      else
      if ( cmd == 104 )
      {
        char *s = LYDownLoadAddress( );
        if ( s == 0 || !s[0] || put_clip( s ) )
        {
          HTInfoMsg( gettext( "Copy to clipboard failed." ) );
        }
        else
        {
          HTInfoMsg( gettext( "Download document URL put to clipboard." ) );
        }
      }
      else
      if ( display_partial && NumOfLines_partial > 2 )
      {
        BOOLEAN do_refresh;
        int res;
        int Newline_partial = LYGetNewline( );
        switch ( cmd + -15 )
        {
        case 36:
        case 37:
        case 38:
          handle_LYK_WHEREIS( cmd, &do_refresh );
          if ( www_search_result != -1 )
          {
            Newline_partial = www_search_result;
            www_search_result = -1;
            if ( Newline_partial <= 0 )
              Newline_partial = 1;
            if ( ( LYMainLoop_pageDisplay( Newline_partial ) & 255 ) == 0 )
            {
              return 0;
            }
            NumOfLines_partial = HText_getNumOfLines( );
          }
          break;
        case 15:
          if ( Newline_partial <= display_lines + 1 )
            Newline_partial -= display_lines;
          else
          {
            res = HTGetLinkOrFieldStart( -1, &Newline_partial, 0, -1, 1 );
            if ( res == 8 )
              Newline_partial++;
            else
            if ( res == 16 )
              Newline_partial -= display_lines;
          }
          break;
        case 16:
          if ( HText_canScrollDown( ) & 255 )
          {
            res = HTGetLinkOrFieldStart( HText_LinksInLines( HTMainText, Newline_partial, display_lines ) + -1, &Newline_partial, 0, 1, 1 );
            if ( res == 8 )
              Newline_partial++;
          }
          break;
        case 1:
          if ( Newline_partial > 1 )
            Newline_partial -= display_lines;
          break;
        case 0:
          if ( HText_canScrollDown( ) & 255 )
            Newline_partial += display_lines;
          break;
        case 4:
          if ( Newline_partial > 1 )
            Newline_partial -= display_lines / 2;
          break;
        case 5:
          if ( HText_canScrollDown( ) & 255 )
            Newline_partial += display_lines / 2;
          break;
        case 2:
          if ( Newline_partial > 1 )
            Newline_partial += -2;
          break;
        case 3:
          if ( HText_canScrollDown( ) & 255 )
            Newline_partial += 2;
          break;
        case 7:
          if ( Newline_partial > 1 )
            Newline_partial = 1;
          break;
        case 8:
          if ( HText_canScrollDown( ) & 255 )
          {
            Newline_partial = ( HText_getNumOfLines( ) - display_lines ) + 1;
          }
          break;
        default:
          return 0;
          break;
        case 6:
          break;
        }
      }
      break;
    default:
      if ( c & 34816 )
      {
        if ( ( c & 255 ) == 47 )
        {
          return 1;
        }
      }
      else
      if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
      {
        return 1;
      }
      break;
    }
  }
  }
  }
}
BOOLEAN LYisAbsPath( char *path )
{
  BOOLEAN result = 0;
  if ( path && path[0] )
  {
    result = path[0] == '/';
  }
  return result;
}
BOOLEAN LYisRootPath( char *path )
{
  return ( strlen( path ) == 1 && path[0] == '/' ? 1 : 0 );
}
BOOLEAN LYisLocalFile( char *filename )
{
  char *host = 0;
  char *acc_method = 0;
  char *cp;
  if ( filename == 0 )
  {
  }
  host = HTParse( filename, "", 8 );
  if ( host == 0 )
  {
  }
  if ( host[0] == 0 )
  {
    if ( host )
    {
      free( host );
      host = 0;
    }
  }
  else
  {
    cp = strchr( host, ':' );
    if ( cp )
      cp[0] = 0;
    acc_method = HTParse( filename, "", 16 );
    if ( acc_method && strcmp( "file", acc_method ) == 0 && ( strcmp( host, "localhost" ) == 0 || strcmp( host, HTHostName( ) ) == 0 ) )
    {
      if ( host )
      {
        free( host );
        host = 0;
      }
      if ( acc_method )
      {
        free( acc_method );
        acc_method = 0;
      }
    }
    else
    {
      if ( host )
      {
        free( host );
        host = 0;
      }
      if ( acc_method )
      {
        free( acc_method );
        acc_method = 0;
      }
    }
  }
  return 1;
}
BOOLEAN LYisLocalHost( char *filename )
{
  char *host = 0;
  char *cp;
  if ( filename == 0 )
  {
  }
  host = HTParse( filename, "", 8 );
  if ( host == 0 )
  {
  }
  if ( host[0] == 0 )
  {
    if ( host )
    {
      free( host );
      host = 0;
    }
  }
  else
  {
    cp = strchr( host, ':' );
    if ( cp )
      cp[0] = 0;
    if ( strcmp( host, "localhost" ) == 0 || strcmp( host, LYHostName ) == 0 || strcmp( host, HTHostName( ) ) == 0 )
    {
      if ( host )
      {
        free( host );
        host = 0;
      }
    }
    else
    {
      if ( host )
      {
        free( host );
        host = 0;
      }
    }
  }
  return 0;
}
void LYFreeStringList( HTList *list )
{
  if ( list )
  {
    char *argument;
    HTList *cur = list;
    while ( 1 )
    {
      if ( cur )
      {
        cur = &cur->next;
        argument = 0;
        if ( argument )
        {
          if ( argument )
          {
            free( argument );
            argument = 0;
          }
        }
        else
        {
          HTList_delete( list );
          break;
        }
      }
      argument = 0;
    }
  }
  return;
}
void LYLocalhostAliases_free( void )
{
  LYFreeStringList( localhost_aliases );
  localhost_aliases = 0;
  return;
}
void LYAddLocalhostAlias( char *alias )
{
  char *LocalAlias = 0;
  if ( alias && alias[0] )
  {
    if ( localhost_aliases == 0 )
    {
      localhost_aliases = HTList_new( );
    }
    HTSACopy( &LocalAlias, alias );
    HTList_addObject( localhost_aliases, (void*)LocalAlias );
  }
  return;
}
BOOLEAN LYisLocalAlias( char *filename )
{
  char *host = 0;
  char *alias;
  char *cp;
  HTList *cur = localhost_aliases;
  if ( cur == 0 || filename == 0 )
  {
  }
  host = HTParse( filename, "", 8 );
  if ( host == 0 )
  {
  }
  if ( host[0] == 0 )
  {
    if ( host )
    {
      free( host );
      host = 0;
    }
  }
  else
  {
    cp = strchr( host, ':' );
    if ( cp )
    {
      cp[0] = 0;
    }
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        alias = 0;
        if ( alias )
        {
        }
        else
        {
          if ( host == 0 )
          {
            break;
          }
          free( host );
          host = 0;
          break;
        }
      }
      alias = 0;
    }
    while ( strcmp( host, alias ) );
    if ( host )
    {
      free( host );
      host = 0;
    }
  }
  return 1;
}
UrlTypes LYCheckForProxyURL( char *filename )
{
  char *cp = filename;
  char *cp1;
  char *cp2 = 0;
  if ( cp == 0 || cp[0] == 0 )
  {
    return 0;
  }
  cp = LYSkipBlanks( cp );
  cp1 = strchr( &cp[1], ':' );
  if ( cp1 )
  {
    cp2 = strchr( &cp[1], '/' );
    if ( cp2 && cp2 < cp1 )
    {
      return 0;
    }
    cp1[0] = 0;
    cp2 = 0;
    HTSACopy( &cp2, cp );
    cp1[0] = ':';
    HTSACat( &cp2, "_proxy" );
    if ( LYGetEnv( cp2 ) )
    {
      if ( cp2 )
      {
        free( cp2 );
        cp2 = 0;
      }
      return 44;
    }
    else
    {
      if ( cp2 )
      {
        free( cp2 );
        cp2 = 0;
      }
      cp1++;
      if ( cp[0] == 0 )
      {
        return 0;
      }
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048 ) == 0 )
      {
        return 1;
      }
      for ( ; cp1[0] && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[0] * 2 )) & 2048 ); cp1++ )
      {
        // cp1++;
      }
      if ( cp1[0] && cp1[0] != '/' )
      {
        return 1;
      }
    }
  }
  return 0;
}
BOOLEAN compare_type( char *tst, char *cmp, size_t len )
{
  if ( strncasecomp( tst, cmp, (int)len ) == 0 )
  {
    if ( strncmp( tst, cmp, len ) )
    {
      size_t i = 0;
      for ( ; i < len; i++ )
      {
        tst[ i ] = cmp[ i ];
        // i++;
      }
    }
  }
  else
  {
  }
  return 0;
}
UrlTypes is_url( char *filename )
{
  char *cp = filename;
  char *cp1;
  UrlTypes result = NOT_A_URL_TYPE;
  int len;
  int limit;
  if ( cp == 0 || cp[0] == 0 )
  {
    return result;
  }
  if ( strchr( cp, ':' ) == 0 )
  {
    return result;
  }
  cp = LYSkipBlanks( cp );
  if ( cp[0] == ':' || cp[0] == '/' )
    result = NOT_A_URL_TYPE;
  else
  {
    limit = strlen( cp );
    switch ( cp[0] + -66 )
    {
    case 10:
    case 42:
      if ( compare_type( cp, "lynxexec:", 9 ) & 255 )
        result = LYNXEXEC_URL_TYPE;
      else
      {
        if ( compare_type( cp, "lynxprog:", 9 ) & 255 )
          result = LYNXPROG_URL_TYPE;
        else
        {
          if ( compare_type( cp, "lynxcgi:", 8 ) & 255 )
            result = LYNXCGI_URL_TYPE;
          else
          {
            if ( compare_type( cp, "LYNXPRINT:", 10 ) & 255 )
              result = LYNXPRINT_URL_TYPE;
            else
            {
              if ( compare_type( cp, "LYNXOPTIONS:", 12 ) & 255 )
                result = LYNXOPTIONS_URL_TYPE;
              else
              {
                if ( compare_type( cp, "LYNXCFG:", 8 ) & 255 )
                  result = LYNXCFG_URL_TYPE;
                else
                {
                  if ( compare_type( cp, "LYNXMESSAGES:", 13 ) & 255 )
                    result = LYNXMESSAGES_URL_TYPE;
                  else
                  {
                    if ( compare_type( cp, "LYNXCOMPILEOPTS:", 16 ) & 255 )
                      result = LYNXCOMPILE_OPTS_URL_TYPE;
                    else
                    {
                      if ( compare_type( cp, "LYNXDOWNLOAD:", 13 ) & 255 )
                        result = LYNXDOWNLOAD_URL_TYPE;
                      else
                      {
                        if ( compare_type( cp, "LYNXDIRED:", 10 ) & 255 )
                          result = LYNXDIRED_URL_TYPE;
                        else
                        {
                          if ( compare_type( cp, "LYNXHIST:", 9 ) & 255 )
                            result = LYNXHIST_URL_TYPE;
                          else
                          {
                            if ( compare_type( cp, "LYNXKEYMAP:", 11 ) & 255 )
                              result = LYNXKEYMAP_URL_TYPE;
                            else
                            {
                              if ( compare_type( cp, "LYNXIMGMAP:", 11 ) & 255 )
                              {
                                is_url( &cp[11] );
                                result = LYNXIMGMAP_URL_TYPE;
                              }
                              else
                              {
                                if ( compare_type( cp, "LYNXCOOKIE:", 11 ) & 255 )
                                  result = LYNXCOOKIE_URL_TYPE;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 12:
    case 44:
      if ( compare_type( cp, "news:", 5 ) & 255 )
        result = NEWS_URL_TYPE;
      else
      {
        if ( compare_type( cp, "nntp:", 5 ) & 255 )
          result = NNTP_URL_TYPE;
        else
        {
          if ( compare_type( cp, "newspost:", 9 ) & 255 )
            result = NEWSPOST_URL_TYPE;
          else
          {
            if ( compare_type( cp, "newsreply:", 10 ) & 255 )
              result = NEWSREPLY_URL_TYPE;
          }
        }
      }
      break;
    case 17:
    case 49:
      if ( compare_type( cp, "snews:", 6 ) & 255 )
        result = SNEWS_URL_TYPE;
      else
      {
        if ( compare_type( cp, "snewspost:", 10 ) & 255 )
          result = NEWSPOST_URL_TYPE;
        else
        {
          if ( compare_type( cp, "snewsreply:", 11 ) & 255 )
            result = NEWSREPLY_URL_TYPE;
        }
      }
      break;
    case 11:
    case 43:
      if ( compare_type( cp, "mailto:", 7 ) & 255 )
        result = MAILTO_URL_TYPE;
      break;
    case 4:
    case 36:
      len = 5;
      if ( compare_type( cp, "file:", 5 ) & 255 )
      {
        if ( LYisLocalFile( cp ) & 255 )
          result = FILE_URL_TYPE;
        else
        {
          if ( cp[ len ] == '/' && cp[ len + 1 ] == '/' )
            result = FTP_URL_TYPE;
        }
      }
      else
      {
        if ( limit > 5 && cp[4] == '/' && cp[5] == '/' && ( compare_type( cp, "ftp:", 4 ) & 255 ) )
          result = FTP_URL_TYPE;
        else
        {
          if ( limit > 8 && cp[7] == '/' && cp[8] == '/' && ( compare_type( cp, "finger:", 7 ) & 255 ) )
            result = FINGER_URL_TYPE;
        }
      }
      break;
    case 0:
    case 32:
      if ( compare_type( cp, "bibp:", 5 ) & 255 )
        result = BIBP_URL_TYPE;
      break;
    case 2:
    case 34:
      if ( compare_type( cp, "data:", 5 ) & 255 )
        result = DATA_URL_TYPE;
      break;
    default:
      if ( limit > 2 )
      {
        cp1 = strchr( &cp[3], ':' );
        if ( cp1 == 0 || cp1[1] != '/' || cp1[2] != '/' )
        {
          if ( cp1 && cp1 - cp > 1 && ( LYisAbsPath( &cp1[1] ) & 255 ) )
            result = NCFTP_URL_TYPE;
        }
      }
      switch ( cp[0] + -65 )
      {
      case 7:
      case 39:
        if ( compare_type( cp, "http:", 5 ) & 255 )
          result = HTTP_URL_TYPE;
        else
        {
          if ( compare_type( cp, "https:", 6 ) & 255 )
            result = HTTPS_URL_TYPE;
        }
        break;
      case 6:
      case 38:
        if ( compare_type( cp, "gopher:", 7 ) & 255 )
        {
          if ( strlen( cp ) > 10 )
          {
            cp1 = strchr( &cp[11], '/' );
            if ( cp1 )
            {
              if ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp1[1] * 2 )) & 512 )
              {
                if ( toupper( cp1[1] ) == 72 )
                  result = HTML_GOPHER_URL_TYPE;
              }
              else
              if ( cp1[1] == 'H' )
                continue;
              if ( cp1[1] == 'w' )
                continue;
              else
              {
                if ( cp1[1] == 'T' || cp1[1] == '8' )
                  result = TELNET_GOPHER_URL_TYPE;
                else
                {
                  if ( cp1[1] == '7' )
                    result = INDEX_GOPHER_URL_TYPE;
                  else
                    result = GOPHER_URL_TYPE;
                }
              }
            }
          }
          result = GOPHER_URL_TYPE;
        }
        break;
      case 22:
      case 54:
        if ( compare_type( cp, "wais:", 5 ) & 255 )
          result = WAIS_URL_TYPE;
        break;
      case 19:
      case 51:
        if ( compare_type( cp, "telnet:", 7 ) & 255 )
          result = TELNET_URL_TYPE;
        else
        {
          if ( compare_type( cp, "tn3270:", 7 ) & 255 )
            result = TN3270_URL_TYPE;
        }
        break;
      case 17:
      case 49:
        if ( compare_type( cp, "rlogin:", 7 ) & 255 )
          result = RLOGIN_URL_TYPE;
        break;
      case 2:
      case 34:
        if ( compare_type( cp, "cso:", 4 ) & 255 )
          result = CSO_URL_TYPE;
        break;
      case 0:
      case 32:
        if ( compare_type( cp, "afs:", 4 ) & 255 )
          result = AFS_URL_TYPE;
        break;
      case 15:
      case 47:
        if ( compare_type( cp, "prospero:", 9 ) & 255 )
          result = PROSPERO_URL_TYPE;
        break;
      default:
        break;
      }
      if ( result == NOT_A_URL_TYPE )
      {
        result = LYCheckForProxyURL( filename );
      }
      break;
    }
  }
  return result;
}
void LYFixCursesOn( char *reason )
{
  if ( dump_output_immediately == 0 && LYCursesON == 0 )
  {
    if ( reason && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Forcing curses on to %s\n", reason );
    }
    start_curses( );
  }
  return;
}
BOOLEAN LYFixCursesOnForAccess( char *addr, char *physical )
{
  if ( !dump_output_immediately && !LYCursesON && physical && strstr( addr, "://" ) )
  {
    if ( strncasecomp( addr, "telnet:", 7 ) && strncasecomp( addr, "rlogin:", 7 ) && strncasecomp( addr, "tn3270:", 7 ) )
    {
      if ( strncasecomp( addr, "gopher:", 7 ) == 0 )
      {
        return 0;
      }
      cp1 = strchr( &addr[11], '/' );
      if ( cp1 && ( cp1[1] == 'T' || cp1[1] == '8' ) )
        goto B8;
    }
B8:;
    if ( strncasecomp( physical, "telnet:", 7 ) && strncasecomp( physical, "rlogin:", 7 ) && strncasecomp( physical, "tn3270:", 7 ) )
    {
      start_curses( );
      HTAlert( gettext( "Unexpected access protocol for this URL scheme." ) );
      return 0;
    }
  }
}
BOOLEAN LYCanDoHEAD( char *address )
{
  char *temp0 = 0;
  int isurl;
  if ( address == 0 || address[0] == 0 )
  {
  }
  if ( strncmp( address, "http", 4 ) == 0 )
  {
  }
  HTSACopy( &temp0, address );
  isurl = is_url( temp0 );
  if ( isurl == 0 )
  {
    if ( temp0 )
    {
      free( temp0 );
      temp0 = 0;
    }
  }
  else
  {
    if ( isurl == 25 )
    {
      if ( temp0 )
      {
        free( temp0 );
        temp0 = 0;
      }
    }
    else
    {
      if ( isurl == 7 || isurl == 8 )
      {
        char *temp = HTParse( address, "", 4 );
        char *cp = strrchr( temp, '/' );
        if ( strchr( temp, '@' ) )
        {
          if ( temp0 )
          {
            free( temp0 );
            temp0 = 0;
          }
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        else
        if ( cp && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( cp[1] * 2 )) & 2048 ) && strchr( cp, '-' ) == 0 )
        {
          if ( temp0 )
          {
            free( temp0 );
            temp0 = 0;
          }
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
          }
        }
      }
      if ( isurl != 3 )
      {
        char *acc_method = HTParse( temp0, "", 16 );
        if ( acc_method && acc_method[0] )
        {
          char *proxy;
          HTSACat( &acc_method, "_proxy" );
          proxy = LYGetEnv( acc_method );
          if ( proxy && ( strncasecomp( proxy, "http:", 5 ) == 0 || ( ( proxy[0] == 'l' || proxy[0] == 'L' ) && strncasecomp( proxy, "lynxcgi:", 8 ) == 0 ) ) && ( override_proxy( temp0 ) & 255 ) == 0 )
          {
            if ( temp0 )
            {
              free( temp0 );
              temp0 = 0;
            }
            if ( acc_method )
            {
              free( acc_method );
              acc_method = 0;
            }
          }
        }
        if ( acc_method )
        {
          free( acc_method );
        }
      }
      if ( temp0 )
      {
        free( temp0 );
        temp0 = 0;
      }
    }
  }
  return 0;
}
BOOLEAN LYCloseInput( FILE *fp )
{
  if ( fp )
  {
    int err = ferror( fp );
    fclose( fp );
    return 0;
  }
  return 0;
}
BOOLEAN LYCloseOutput( FILE *fp )
{
  if ( fp )
  {
    int err = ferror( fp );
    fclose( fp );
    if ( err == 0 )
    {
      return 0;
    }
  }
  HTAlert( gettext( "Cannot write to file." ) );
  return 0;
}
BOOLEAN LYCanWriteFile( char *filename )
{
  if ( LYCloseOutput( fopen64( filename, ebp_20 ) ) & 255 )
  {
    remove( filename );
  }
  mustshow = 1;
  statusline( gettext( "Enter a new filename: " ) );
  return 0;
}
BOOLEAN LYCanReadFile( char *filename )
{
  FILE *fp;
  if ( filename && filename[0] )
  {
    fp = fopen64( filename, "r" );
    return 0;
  }
  return 0;
}
void remove_backslashes( char *buf )
{
  char *cp = buf;
  for ( ; cp[0]; cp++ )
  {
    if ( cp[0] != '\\' )
    {
      buf[0] = cp[0];
      buf++;
    }
    else
    if ( cp[0] == '\\' && cp[1] == '\\' )
    {
      buf[0] = cp[0];
      buf++;
    }
    // cp++;
  }
  buf[0] = 0;
  return;
}
BOOLEAN inlocaldomain( void )
{
  int eax;
  int result = 1;
  int n;
  FILE *fp;
  struct utmp me;
  char *cp, *mytty = 0;
  cp = ttyname( 0 );
  if ( cp )
  {
    mytty = LYLastPathSep( cp );
  }
  result = 0;
  if ( mytty )
  {
    fp = fopen64( "/var/run/utmp", "r" );
    if ( fp )
    {
      mytty++;
      do
      {
        n = fread( &me.ut_type, 384, 1, fp );
      }
      while ( n > 0 && strcmp( &me.ut_line[0], mytty ) );
      LYCloseInput( fp );
      if ( n <= 0 )
      {
        return result;
      }
      if ( strlen( LYLocalDomain ) < strlen( &me.ut_host[0] ) && strcmp( LYLocalDomain, &me.ut_host[ strlen( &me.ut_host[0] ) - strlen( LYLocalDomain ) ] ) == 0 )
        result = 1;
      else
      {
        if ( me.ut_host[0] == 0 )
          result = 1;
      }
    }
  }
  if ( WWW_TraceFlag == 0 )
  {
    return result;
  }
  fprintf( TraceFP( ), "Could not get ttyname (returned %s) or open UTMP file %s\n", "(null)", "/var/run/utmp" );
}
void LYExtSignal( int sig, LYSigHandlerFunc_t *handler )
{
  if ( sig == 28 && LYNonRestartingSIGWINCH )
  {
    struct sigaction act;
    act.__sigaction_handler.sa_handler = ((void)( int  )*)handler;
    sigemptyset( act.sa_mask.__val );
    act.sa_flags = 0;
    if ( sig != 28 )
      act.sa_flags |= 0x10000000;
    sigaction( sig, act.__sigaction_handler.sa_handler, 0 );
  }
  else
  {
    signal( sig, handler );
  }
  return;
}
BOOLEAN LYToggleSigDfl( int sig, struct sigaction *where, int to_dfl )
{
  int rv = -1;
  struct sigaction oact;
  if ( to_dfl == 1 )
  {
    rv = sigaction( sig, 0, oact.__sigaction_handler.sa_handler );
    if ( rv == 0 )
    {
      if ( oact.__sigaction_handler.sa_handler )
      {
        oact.__sigaction_handler.sa_handler = 0;
        rv = sigaction( sig, oact.__sigaction_handler.sa_handler, where );
      }
      else
      if ( where )
      {
        memcpy( where, oact.__sigaction_handler.sa_handler, 140 );
        rv = 0;
      }
    }
  }
  else
  {
    rv = sigaction( sig, where, 0 );
  }
  if ( rv )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Error in LYToggleSigDfl: %s\n", strerror( *(int*)(__errno_location( )) ) );
    }
  }
  else
  {
  }
  return 1;
}
void size_change( int sig )
{
  int eax;
  int old_lines = LYlines;
  int old_cols = LYcols;
  struct winsize win;
  if ( ioctl( 0, 21523, win.ws_row ) == 0 )
  {
    if ( win.ws_row & 65535 )
      LYlines = win.ws_row;
    if ( win.ws_col & 65535 )
      LYcols = win.ws_col;
  }
  if ( LYlines <= 0 )
    LYlines = 24;
  if ( LYcols <= 0 )
    LYcols = 80;
  if ( old_lines != LYlines || old_cols != LYcols )
  {
    recent_sizechange = 1;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Window size changed from (%d,%d) to (%d,%d)\n", old_lines, old_cols, LYlines, LYcols );
    }
  }
  LYExtSignal( 28, &size_change );
  return;
}
void HTSugFilenames_free( void )
{
  LYFreeStringList( sug_filenames );
  sug_filenames = 0;
  return;
}
void HTAddSugFilename( char *fname )
{
  char *tmp = 0;
  char *old;
  HTList *cur;
  if ( fname && fname[0] )
  {
    HTSACopy( &tmp, fname );
    if ( sug_filenames == 0 )
    {
      sug_filenames = HTList_new( );
      HTList_addObject( sug_filenames, (void*)tmp );
    }
    else
    {
      cur = sug_filenames;
      do
      {
        if ( cur )
        {
          cur = &cur->next;
          old = 0;
          if ( old )
          {
          }
          HTList_addObject( sug_filenames, (void*)tmp );
          break;
        }
        old = 0;
      }
      while ( strcmp( old, tmp ) );
      HTList_removeObject( sug_filenames, (void*)old );
      if ( old )
      {
        free( old );
        old = 0;
      }
    }
  }
  return;
}
void change_sug_filename( char *fname )
{
  char *cp2;
  char *temp = 0, *cp, *cp1, *end = fname + strlen( fname );
  HTUnEscape( fname );
  cp2 = wwwName( lynx_temp_space );
  if ( cp2[0] == '/' )
  {
    HTSprintf0( &temp, "file://localhost%s%u", cp2, getpid( ) );
  }
  else
  {
    HTSprintf0( &temp, "file://localhost/%s%u", cp2, getpid( ) );
  }
  if ( strncmp( fname, temp, strlen( temp ) ) == 0 )
  {
    cp = strrchr( fname, '.' );
    if ( strlen( temp ) + -4 < strlen( cp ) )
      cp = 0;
    HTSACopy( &temp, "" );
    sprintf( fname, "temp%.*s", 246, temp );
  }
  if ( temp )
  {
    free( temp );
    temp = 0;
  }
  if ( *(char*)(fname + strlen( fname ) + -1) == '/' )
  {
  }
  cp = strrchr( fname, '/' );
  if ( cp && strlen( cp ) > 1 )
  {
    cp1 = fname;
    cp++;
    for ( ; cp[0]; cp1++ )
    {
      cp1[0] = cp[0];
      cp++;
      // cp1++;
    }
    cp1[0] = 0;
  }
  if ( end[ -1 ] == ']' )
  {
    cp = strrchr( fname, '[' );
    if ( cp && fname < cp )
    {
      cp = &cp[ -1 ];
      if ( cp[0] == ' ' )
      {
        for ( ; cp[0] == ' ';  )
        {
          cp[0] = 0;
          cp = &cp[ -1 ];
        }
      }
    }
  }
  cp = strchr( fname, '[' );
  if ( cp )
  {
    cp1 = strrchr( cp, ']' );
    if ( cp1 && strlen( cp1 ) > 1 )
    {
      cp1++;
      cp = fname;
      for ( ; cp1[0]; cp1++ )
      {
        cp[0] = cp1[0];
        cp++;
        // cp1++;
      }
      cp[0] = 0;
    }
  }
  cp = fname;
  for ( ; cp[0]; cp++ )
  {
    if ( cp[0] + -32 <= 15 && ( ( 1 << ( cp[0] + -32 ) ) & 32901 ) )
      cp[0] = '-';
    // cp++;
  }
  cp = fname + strlen( fname );
  for ( ; cp < end; cp++ )
  {
    cp[0] = 0;
    // cp++;
  }
  return;
}
int fmt_tempname( char *result, char *prefix, char *suffix )
{
  int eax;
  int edx;
  static BOOLEAN first = 1;
  static int names_used;
  static unsigned char used_tempname[1251];
  static unsigned int counter;
  int code;
  unsigned int offset, mask;
  char leaf[256];
  if ( prefix == 0 )
    prefix = "";
  if ( suffix == 0 )
    suffix = "";
  if ( first )
  {
    srandom( result + time( 0 ) );
    first = 0;
  }
  counter = 10000;
  if ( names_used <= 9999 )
  {
    counter = (long long)( ( ( (double)( random( ) ) * 10000.000000000000 ) / 2147483648.000000000000 ) + 1.000000000000 );
    do
    {
      counter -= ( (/*HI*/int)( -776530087 * (int)counter ) >> 13 ) * 10000;
      offset = counter >> 3;
      mask = 1 << ( counter & 7 );
      if ( ( mask & used_tempname[ offset ] ) == 0 )
      {
        names_used++;
        used_tempname[ offset ] = mask | used_tempname[ offset ];
      }
      else
    }
    while ( mask & used_tempname[ offset ] );
  }
  if ( names_used > 9999 )
  {
    HTAlert( gettext( "Too many tempfiles" ) );
  }
  sprintf( leaf, "L%u-%uTMP%s", getpid( ), counter, suffix );
  if ( strlen( prefix ) + strlen( leaf ) <= 255 )
  {
    sprintf( result, "%s%s", prefix, leaf );
    code = 1;
  }
  else
  {
    sprintf( result, "%.*s", 255, leaf );
    code = 0;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "-&gt; '%s'\n", result );
  }
  return code;
}
int number2arrows( int number )
{
  switch ( number + -49 )
  {
  case 0:
    number = 263;
    break;
  case 1:
    number = 257;
    break;
  case 2:
    number = 260;
    break;
  case 3:
    number = 259;
    break;
  case 4:
    number = 270;
    break;
  case 5:
    number = 258;
    break;
  case 6:
    number = 262;
    break;
  case 7:
    number = 256;
    break;
  case 8:
    number = 261;
    break;
  default:
    break;
  }
  return number;
}
BOOLEAN strn_dash_equ( char *p1, char *p2, int len )
{
  while ( len += -1, ( len != 0 ) & 255 )
  {
    if ( p2[0] == 0 )
    {
      break;
    }
    else
    {
      if ( p1[0] != 45 && p1[0] != 95 )
      {
        if ( p1[0] == 0 )
        {
          break;
        }
        else
        if ( p2[0] != p1[0] )
        {
          break;
        }
      }
      else
      if ( p2[0] != '_' )
      {
        break;
      }
      p1++;
      p2++;
    }
  }
  return 1;
}
char *index_to_restriction( int inx )
{
  return 0;
}
int find_restriction( char *name, int len )
{
  unsigned int i;
  if ( len < 0 )
  {
    len = strlen( name );
  }
  i = 0;
  for ( ; i <= 57; i++ )
  {
    if ( strn_dash_equ( name, restrictions[ i ].name, len ) & 255 )
    {
      return restrictions[ i ].flag[0];
    }
    // i++;
  }
  return -1;
}
void parse_restrictions( char *s )
{
  char *p = s;
  char *word;
  unsigned int i;
  BOOLEAN found;
  while ( p[0] )
  {
    p = LYSkipCBlanks( p );
    if ( p[0] )
    {
      word = p;
      for ( ; p[0] != ',' && p[0]; p++ )
      {
        // p++;
      }
      found = 0;
      if ( strn_dash_equ( word, "all", p - word ) & 255 )
      {
        found = 1;
        i = 2;
        for ( ; i <= 57; i++ )
        {
          restrictions[ i ].flag[0] = 1;
          // i++;
        }
      }
      else
      {
        if ( strn_dash_equ( word, "default", p - word ) & 255 )
        {
          found = 1;
          i = 2;
          for ( ; i <= 57; i++ )
          {
            restrictions[ i ].flag[0] = restrictions[ i ].can == 0;
            // i++;
          }
        }
        else
        {
          i = 0;
          for ( ; i <= 57; i++ )
          {
            if ( strn_dash_equ( word, restrictions[ i ].name, p - word ) & 255 )
            {
              restrictions[ i ].flag[0] = 1;
              found = 1;
              break;
            }
            else
            {
              // i++;
            }
          }
        }
      }
      if ( found == 0 )
      {
        printf( "%s: %.*s\n", gettext( "unknown restriction" ), p - word, word );
        exit_immediately( 1 );
      }
      if ( p[0] )
      {
        p++;
      }
    }
    else
      break;
  }
  if ( no_shell )
  {
    no_goto_lynxexec = 1;
    no_goto_lynxprog = 1;
    no_goto_lynxcgi = 1;
    local_exec_on_local_files = 1;
  }
  return;
}
void print_restrictions_to_fd( FILE *fp )
{
  unsigned int i, count = 0;
  i = 0;
  for ( ; i <= 57; i++ )
  {
    if ( restrictions[ i ].flag[0] == 1 )
      count++;
    // i++;
  }
  if ( count == 0 )
  {
    fprintf( fp, gettext( "No restrictions set.\n" ) );
  }
  else
  {
    fprintf( fp, gettext( "Restrictions set:\n" ) );
    i = 0;
    for ( ; i <= 57; i++ )
    {
      if ( restrictions[ i ].flag[0] == 1 && ( strncmp( restrictions[ i ].name, "goto_", 5 ) || no_goto == 0 ) )
        fprintf( fp, "   %s\n", restrictions[ i ].name );
      // i++;
    }
  }
  return;
}
void LYCheckMail( void )
{
  int edx;
  static BOOLEAN firsttime = 1;
  static char *mf;
  static time_t lastcheck;
  static time_t lasttime;
  static long lastsize;
  time_t now;
  struct stat st;
  if ( firsttime )
  {
    mf = LYGetEnv( "MAIL" );
    firsttime = 0;
    time( &lasttime );
  }
  if ( mf )
  {
    time( &now );
    if ( now - lastcheck > 59 )
    {
      lastcheck = now;
      if ( stat64( mf, &st.st_dev ) < 0 || ( st.st_mode & 61440 ) != 32768 )
      {
        mf = 0;
      }
      else
      {
        if ( (int)(st.st_size << 32) >= 0 && ( (int)(st.st_size << 32) > 0 || (unsigned int)(st.st_size & 0xFFFFFFFF) > 0 ) )
        {
          if ( ( st.st_mtim.tv_sec != lasttime && st.st_atim.tv_sec < st.st_mtim.tv_sec ) || ( lastsize && ( lastsize >> 31 ) <= (int)(st.st_size << 32) && ( ( lastsize >> 31 ) < (int)(st.st_size << 32) || lastsize < (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) )
          {
            HTUserMsg( gettext( "*** You have new mail. ***" ) );
          }
          else
          if ( lastsize == 0 )
          {
            HTUserMsg( gettext( "*** You have mail. ***" ) );
          }
        }
        lastsize = (st.st_size & 0xFFFFFFFF);
        lasttime = st.st_mtim.tv_sec;
      }
    }
  }
  return;
}
void LYEnsureAbsoluteURL( char **href, char *name, int fixit )
{
  char *temp = 0;
  if ( href[0] && href[0] )
  {
    LYFillLocalFileURL( href, "file://localhost" );
    if ( strcasecomp( href[0], "news:" ) == 0 )
      HTSACat( href, "*" );
    else
    {
      if ( strcasecomp( href[0], "snews:" ) == 0 )
        HTSACat( href, "/*" );
    }
    if ( is_url( href[0] ) == 0 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "%s%s'%s' is not a URL\n", "", "", href[0] );
      }
      LYConvertToURL( href, fixit );
    }
    temp = HTParse( href[0], "", 31 );
    if ( temp && temp[0] )
      HTSACopy( href, temp );
    if ( temp == 0 )
    {
      return;
    }
    free( temp );
    temp = 0;
  }
  return;
}
void LYConvertToURL( char **AllocatedString, int fixit )
{
  char *old_string = AllocatedString[0];
  char *temp = 0;
  char *cp = 0;
  struct stat st;
  if ( old_string && old_string[0] )
  {
    AllocatedString[0] = 0;
    HTSACopy( AllocatedString, "file://localhost" );
    if ( old_string[0] != '/' )
    {
      char *fragment = 0;
      if ( old_string[0] == '~' )
      {
        HTSACat( AllocatedString, wwwName( Home_Dir( ) ) );
        cp = strchr( old_string, '/' );
        if ( cp )
        {
          HTSACopy( &temp, cp );
          LYTrimRelFromAbsPath( temp );
          HTSACat( AllocatedString, temp );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, AllocatedString[0] );
        }
      }
      else
      {
        char curdir[256];
        char *temp2 = 0;
        BOOLEAN is_local = 0;
        Current_Dir( curdir );
        HTSACopy( &temp, curdir );
        HTSACat( &temp, "/" );
        HTSACat( &temp, old_string );
        LYTrimRelFromAbsPath( temp );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, temp );
        }
        if ( stat64( temp, &st.st_dev ) >= 0 || ( LYCanReadFile( temp ) & 255 ) )
        {
          cp = HTEscape( temp, 4 );
          HTSACat( AllocatedString, cp );
          if ( cp )
          {
            free( cp );
            cp = 0;
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, AllocatedString[0] );
          }
          is_local = 1;
        }
        else
        {
          char *cp2 = 0;
          HTSACopy( &temp2, curdir );
          LYAddPathSep( &temp2 );
          HTSACopy( &cp, old_string );
          fragment = trimPoundSelector( cp );
          HTUnEscape( cp );
          HTSACat( &temp2, cp );
          HTSACopy( &cp2, temp2 );
          LYTrimRelFromAbsPath( temp2 );
          if ( strcmp( temp2, temp ) && ( stat64( temp2, &st.st_dev ) >= 0 || ( LYCanReadFile( temp2 ) & 255 ) ) )
          {
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
            if ( strcmp( cp2, temp2 ) == 0 )
            {
              temp = HTEscape( curdir, 4 );
              LYAddHtmlSep( &temp );
              HTSACat( &temp, old_string );
            }
            else
            {
              temp = HTEscape( temp2, 4 );
              if ( fragment )
              {
                if ( fragment )
                  fragment[0] = '#';
                HTSACat( &temp, fragment );
              }
            }
            HTSACat( AllocatedString, temp );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, AllocatedString[0] );
            }
            is_local = 1;
          }
          else
          {
            if ( strchr( curdir, '#' ) || strchr( curdir, '%' ) )
            {
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
              if ( strcmp( cp2, temp2 ) == 0 )
              {
                temp = HTEscape( curdir, 4 );
                LYAddHtmlSep( &temp );
                HTSACat( &temp, old_string );
              }
              else
              {
                temp = HTEscape( temp2, 4 );
                if ( fragment )
                {
                  if ( fragment )
                    fragment[0] = '#';
                  HTSACat( &temp, fragment );
                }
              }
            }
          }
          if ( cp )
          {
            free( cp );
            cp = 0;
          }
          if ( cp2 )
          {
            free( cp2 );
          }
        }
        if ( is_local == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Can't stat() or fopen() '%s'\n", temp );
          }
          if ( LYExpandHostForURL( &old_string, URLDomainPrefixes, URLDomainSuffixes ) & 255 )
          {
            if ( ( LYAddSchemeForURL( &old_string, "http://" ) & 255 ) == 0 )
            {
              HTSACopy( AllocatedString, "http://" );
              HTSACat( AllocatedString, old_string );
            }
            else
              HTSACopy( AllocatedString, old_string );
          }
          else
          if ( fixit )
            HTSACopy( AllocatedString, old_string );
          else
            HTSACat( AllocatedString, temp );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Trying: '%s'\n", AllocatedString[0] );
          }
        }
        if ( temp )
        {
          free( temp );
          temp = 0;
        }
        if ( temp2 )
        {
          free( temp2 );
          temp2 = 0;
        }
      }
    }
    else
    {
      if ( old_string[1] == 0 )
        HTSACat( AllocatedString, "/" );
      else
      {
        if ( stat64( old_string, &st.st_dev ) >= 0 || ( LYCanReadFile( old_string ) & 255 ) )
        {
          HTSACopy( &temp, old_string );
          LYTrimRelFromAbsPath( temp );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, temp );
          }
          cp = HTEscape( temp, 4 );
          HTSACat( AllocatedString, cp );
          if ( cp )
          {
            free( cp );
            cp = 0;
          }
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, AllocatedString[0] );
          }
        }
        else
        if ( old_string[1] == '~' )
        {
          HTSACat( AllocatedString, wwwName( Home_Dir( ) ) );
          cp = strchr( &old_string[1], '/' );
          if ( cp )
          {
            HTSACopy( &temp, cp );
            LYTrimRelFromAbsPath( temp );
            HTSACat( AllocatedString, temp );
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
          }
        }
        else
        {
          HTSACopy( &temp, old_string );
          LYTrimRelFromAbsPath( temp );
          HTSACat( AllocatedString, temp );
          if ( temp )
          {
            free( temp );
            temp = 0;
          }
        }
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Converted '%s' to '%s'\n", old_string, AllocatedString[0] );
      }
    }
    if ( old_string )
    {
      free( old_string );
      old_string = 0;
    }
    if ( WWW_TraceFlag && LYTraceLogFP == 0 )
      sleep( AlertSecs );
  }
  return;
}
BOOLEAN LYExpandHostForURL( char **AllocatedString, char *prefix_list, char *suffix_list )
{
  char *DomainPrefix = 0;
  char *StartP, *EndP;
  char *DomainSuffix = 0;
  char *StartS, *EndS;
  char *Str = 0, *StrColon = 0, *MsgStr = 0;
  char *Host = 0, *HostColon = 0, *host = 0;
  char *Path = 0;
  char *Fragment = 0;
  BOOLEAN GotHost = 0;
  BOOLEAN Startup = helpfilepath == 0;
  struct addrinfo hints, *res;
  int error;
  if ( AllocatedString[0] == 0 || AllocatedString[0] == 0 || AllocatedString[0] == '/' || AllocatedString[0] == '#' )
  {
  }
  if ( strncmp( AllocatedString[0], "..", 2 ) == 0 || strncmp( AllocatedString[0], "./", 2 ) == 0 )
  {
  }
  HTSACopy( &Str, AllocatedString[0] );
  Path = strchr( Str, '/' );
  if ( Path )
    Path[0] = 0;
  else
  {
    Fragment = trimPoundSelector( Str );
  }
  StrColon = strrchr( Str, ':' );
  if ( StrColon && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( StrColon[1] * 2 )) & 2048 ) )
  {
    if ( StrColon != Str )
      StrColon[0] = 0;
    else
    {
      if ( DomainPrefix )
      {
        free( DomainPrefix );
        DomainPrefix = 0;
      }
      if ( DomainSuffix )
      {
        free( DomainSuffix );
        DomainSuffix = 0;
      }
      if ( Str )
      {
        free( Str );
        Str = 0;
      }
      if ( MsgStr )
      {
        free( MsgStr );
        MsgStr = 0;
      }
      if ( Host )
      {
        free( Host );
        Host = 0;
      }
      if ( host )
      {
        free( host );
        host = 0;
      }
    }
  }
  HTSACopy( &host, Str );
  HTUnEscape( host );
  if ( LYCursesON )
  {
    HTSACopy( &MsgStr, gettext( "Looking up " ) );
    HTSACat( &MsgStr, host );
    HTSACat( &MsgStr, gettext( " first" ) );
    HTProgress( MsgStr );
  }
  else
  if ( Startup && dump_output_immediately == 0 )
  {
    fprintf( stdout, "%s '%s'%s\r\n", gettext( "Looking up " ), host, gettext( " first" ) );
  }
  memset( &hints.ai_flags, 0, 32 );
  hints.ai_family = 0;
  hints.ai_socktype = 1;
  error = getaddrinfo( host, "80", &hints.ai_flags, res );
  if ( error == 0 && res )
  {
    if ( LYCursesON && HTCheckForInterrupt( ) && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYExpandHostForURL: Ignoring interrupt because '%s' resolved.\n", host );
    }
    GotHost = 1;
  }
  else
  {
    if ( LYCursesON && lynx_nsl_status == -29998 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "LYExpandHostForURL: Interrupted while '%s' failed to resolve.\n", host );
      }
    }
    else
    {
      StartP = "";
      if ( StartP[0] && StartP[0] != '.' && ( strncasecomp( AllocatedString[0], "www.", 4 ) == 0 || strncasecomp( AllocatedString[0], "ftp.", 4 ) == 0 || strncasecomp( AllocatedString[0], "gopher.", 7 ) == 0 || strncasecomp( AllocatedString[0], "wais.", 5 ) == 0 || strncasecomp( AllocatedString[0], "cso.", 4 ) == 0 || strncasecomp( AllocatedString[0], "ns.", 3 ) == 0 || strncasecomp( AllocatedString[0], "ph.", 3 ) == 0 || strncasecomp( AllocatedString[0], "finger.", 7 ) == 0 || strncasecomp( AllocatedString[0], "news.", 5 ) == 0 || strncasecomp( AllocatedString[0], "nntp.", 5 ) == 0 ) )
      {
        StartP = "";
      }
      while ( StartP[0] && ( ' ' <= StartP[0] || StartP[0] == ',' ) )
      {
        StartP++;
      }
      EndP = StartP;
      for ( ; EndP[0] && EndP[0] < ' ' && EndP[0] != ','; EndP++ )
      {
        // EndP++;
      }
      HTSACopy( &DomainPrefix, StartP );
      DomainPrefix[ EndP - StartP ] = 0;
      do
      {
        StartS = "";
        for ( ; StartS[0] && ( ' ' <= StartS[0] || StartS[0] == ',' ); StartS++ )
        {
          // StartS++;
        }
        EndS = StartS;
        for ( ; EndS[0] && EndS[0] < ' ' && EndS[0] != ','; EndS++ )
        {
          // EndS++;
        }
        HTSACopy( &DomainSuffix, StartS );
        DomainSuffix[ EndS - StartS ] = 0;
        do
        {
          HTSACopy( &Host, DomainPrefix );
          HTSACat( &Host, Str[0] == '.' ? &Str[1] : Str );
          if ( *(char*)(Host + strlen( Host ) + -1) == '.' )
          {
          }
          HTSACat( &Host, DomainSuffix );
          HostColon = strrchr( Host, ':' );
          if ( HostColon && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( HostColon[1] * 2 )) & 2048 ) )
            HostColon[0] = 0;
          HTSACopy( &host, Host );
          HTUnEscape( host );
          if ( LYCursesON )
          {
            HTSACopy( &MsgStr, gettext( "Looking up " ) );
            HTSACat( &MsgStr, host );
            HTSACat( &MsgStr, gettext( ", guessing..." ) );
            HTProgress( MsgStr );
          }
          else
          if ( Startup && dump_output_immediately == 0 )
          {
            fprintf( stdout, "%s '%s'%s\n", gettext( "Looking up " ), host, gettext( ", guessing..." ) );
          }
          GotHost = LYGetHostByName( host ) != 0;
          if ( HostColon )
            HostColon[0] = ':';
          if ( GotHost == 0 )
          {
            if ( LYCursesON && lynx_nsl_status == -29998 )
            {
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "LYExpandHostForURL: Interrupted while '%s' failed to resolve.\n", host );
              }
            }
            else
            {
              StartS = EndS;
              for ( ; StartS[0] && ( ' ' <= StartS[0] || StartS[0] == ',' ); StartS++ )
              {
                // StartS++;
              }
              EndS = StartS;
              for ( ; EndS[0] && EndS[0] < ' ' && EndS[0] != ','; EndS++ )
              {
                // EndS++;
              }
              LYstrncpy( DomainSuffix, StartS, EndS - StartS );
            }
          }
        }
        while ( GotHost || DomainSuffix[0] == 0 );
        if ( GotHost == 0 )
        {
          StartP = EndP;
          for ( ; StartP[0] && ( ' ' <= StartP[0] || StartP[0] == ',' ); StartP++ )
          {
            // StartP++;
          }
          EndP = StartP;
          for ( ; EndP[0] && EndP[0] < ' ' && EndP[0] != ','; EndP++ )
          {
            // EndP++;
          }
          LYstrncpy( DomainPrefix, StartP, EndP - StartP );
        }
      }
      while ( GotHost || DomainPrefix[0] == 0 );
      if ( GotHost )
      {
        if ( StrColon && strchr( Host, ':' ) == 0 )
        {
          StrColon[0] = ':';
          HTSACat( &Host, StrColon );
        }
        if ( Path )
        {
          Path[0] = '/';
          HTSACat( &Host, Path );
        }
        else
        if ( Fragment )
        {
          HTSACat( &Host, "/" );
          if ( Fragment )
            Fragment[0] = '#';
          HTSACat( &Host, Fragment );
        }
        HTSACopy( AllocatedString, Host );
      }
      if ( LYCursesON && HTCheckForInterrupt( ) && WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "LYExpandHostForURL: Ignoring interrupt because '%s' %s.\n", host, "timed out" );
      }
    }
  }
  return GotHost;
}
BOOLEAN LYAddSchemeForURL( char **AllocatedString, char *default_scheme )
{
  char *Str = 0;
  BOOLEAN GotScheme = 0;
  if ( AllocatedString[0] == 0 || AllocatedString[0] == 0 )
  {
  }
  if ( strncasecomp( AllocatedString[0], "www", 3 ) == 0 )
  {
    if ( default_scheme && strstr( default_scheme, "http" ) )
      HTSACopy( &Str, default_scheme );
    else
      HTSACopy( &Str, "http://" );
    GotScheme = 1;
  }
  else
  {
    if ( strncasecomp( AllocatedString[0], "ftp", 3 ) == 0 )
    {
      HTSACopy( &Str, "ftp://" );
      GotScheme = 1;
    }
    else
    {
      if ( strncasecomp( AllocatedString[0], "gopher", 6 ) == 0 )
      {
        HTSACopy( &Str, "gopher://" );
        GotScheme = 1;
      }
      else
      {
        if ( strncasecomp( AllocatedString[0], "wais", 4 ) == 0 )
        {
          HTSACopy( &Str, "wais://" );
          GotScheme = 1;
        }
        else
        {
          if ( strncasecomp( AllocatedString[0], "cso", 3 ) == 0 || strncasecomp( AllocatedString[0], "ns.", 3 ) == 0 || strncasecomp( AllocatedString[0], "ph.", 3 ) == 0 )
          {
            HTSACopy( &Str, "cso://" );
            GotScheme = 1;
          }
          else
          {
            if ( strncasecomp( AllocatedString[0], "finger", 6 ) == 0 )
            {
              HTSACopy( &Str, "finger://" );
              GotScheme = 1;
            }
            else
            {
              if ( strncasecomp( AllocatedString[0], "news", 4 ) == 0 )
              {
                if ( default_scheme && ( strstr( default_scheme, "news" ) || strstr( default_scheme, "nntp" ) ) )
                  HTSACopy( &Str, default_scheme );
                else
                  HTSACopy( &Str, "news://" );
                GotScheme = 1;
              }
              else
              {
                if ( strncasecomp( AllocatedString[0], "nntp", 4 ) == 0 )
                {
                  HTSACopy( &Str, "nntp://" );
                  GotScheme = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( GotScheme == 1 )
  {
    HTSACat( &Str, AllocatedString[0] );
    HTSACopy( AllocatedString, Str );
    if ( Str )
    {
      free( Str );
      Str = 0;
    }
  }
  else
  {
    if ( default_scheme == 0 || default_scheme[0] == 0 )
    {
    }
    HTSACopy( &Str, default_scheme );
    GotScheme = 1;
    HTSACat( &Str, AllocatedString[0] );
    HTSACopy( AllocatedString, Str );
    if ( Str )
    {
      free( Str );
      Str = 0;
    }
  }
  return GotScheme;
}
void LYTrimRelFromAbsPath( char *path )
{
  char *cp;
  int i;
  BOOLEAN TerminalSlash;
  if ( path && path[0] == '/' )
  {
    TerminalSlash = *(char*)(path + strlen( path ) + -1) == '/';
    HTSimplify( path );
    cp = path;
    while ( cp[1] == '.' )
    {
      if ( cp[2] == 0 )
      {
        cp[1] = 0;
      }
      else
      if ( cp[2] == '/' )
      {
        cp += 2;
      }
      else
      if ( cp[2] == '.' && cp[3] == 0 )
      {
        cp[1] = 0;
      }
      else
      if ( cp[2] == '.' && cp[3] == '/' )
      {
        cp += 3;
      }
      else
        break;
    }
    if ( path < cp )
    {
      i = 0;
      for ( ; cp[ i ]; i++ )
      {
        path[ i ] = cp[ i ];
        // i++;
      }
      path[ i ] = 0;
    }
    if ( TerminalSlash == 0 )
    {
      LYTrimPathSep( path );
    }
  }
  return;
}
void LYDoCSI( char *url, char *comment, char **csi )
{
  char *cp = comment;
  if ( cp && strncmp( cp, "!--#", 4 ) == 0 )
  {
    cp += 4;
    if ( strncasecomp( cp, "lynxCSI", 7 ) == 0 )
    {
      HTSACat( csi, "\n&lt;p align=\"center\"&gt;URL: " );
      HTSACat( csi, url );
      HTSACat( csi, "&lt;/p&gt;\n\n" );
    }
  }
  return;
}
char *Current_Dir( char *pathname )
{
  char *result = getcwd( pathname, ebp_36 );
  if ( result == 0 )
  {
    memcpy( pathname, ".", 2 );
  }
  return pathname;
}
char *CheckDir( char *path )
{
  struct stat stat_info;
  if ( !( LYisAbsPath( path ) & 255 ) || HTStat( path, &stat_info ) < 0 || ( stat_info.st_mode & 61440 ) != 16384 )
  {
    path = 0;
  }
  return path;
}
char *HomeEnv( void )
{
  char *result = CheckDir( LYGetEnv( "HOME" ) );
  return result;
}
char *Home_Dir( void )
{
  static char *homedir;
  char *cp = 0;
  if ( homedir == 0 )
  {
    cp = HomeEnv( );
    if ( cp == 0 )
    {
      struct passwd *pw = (struct passwd*)getpwuid( geteuid( ) );
      if ( pw && pw->pw_dir )
        HTSACopy( &HomeDir, &pw->pw_dir );
      else
        HTSACopy( &HomeDir, "/tmp" );
    }
    else
      HTSACopy( &HomeDir, cp );
    homedir = HomeDir;
  }
  if ( homedir == 0 )
  {
    puts( gettext( "Cannot find HOME directory" ) );
    exit_immediately( 1 );
  }
  return homedir;
}
char *LYPathLeaf( char *pathname )
{
  char *leaf = strrchr( pathname, ebp_36 );
  if ( leaf )
    leaf++;
  return pathname;
}
BOOLEAN LYPathOffHomeOK( char *fbuffer, size_t fbuffer_size )
{
  char *file = 0;
  char *cp, *cp1;
  if ( fbuffer == 0 || fbuffer_size <= 1 || fbuffer[0] == 0 )
  {
  }
  HTSACopy( &file, fbuffer );
  cp = file;
  if ( cp[0] == '~' )
  {
    if ( cp[1] == '/' )
    {
      if ( cp[2] )
      {
        cp1 = strchr( &cp[2], '/' );
        if ( cp1 )
          cp[0] = '.';
        else
          cp += 2;
      }
      else
      {
        if ( file )
        {
          free( file );
          file = 0;
        }
      }
    }
    else
    {
      if ( cp[1] )
      {
        cp1 = strchr( &cp[1], '/' );
        if ( cp1 )
        {
          cp = &cp1[ -1 ];
          if ( cp[2] )
          {
            cp1 = strchr( &cp[2], '/' );
            if ( cp1 )
              cp[0] = '.';
            else
              cp += 2;
          }
          else
          {
            if ( file )
            {
              free( file );
              file = 0;
            }
          }
        }
      }
      if ( file )
      {
        free( file );
        file = 0;
      }
    }
  }
  if ( is_url( cp ) || cp[0] == '/' )
  {
    if ( file )
    {
      free( file );
      file = 0;
    }
  }
  else
  {
    HTSimplify( cp );
    if ( strncmp( cp, "./", 2 ) == 0 )
    {
      cp1 = strchr( &cp[2], '/' );
      if ( cp1 == 0 )
        cp += 2;
    }
    if ( !cp[0] || cp[0] == '/' || *(char*)(cp + strlen( cp )) == '/' || strstr( cp, ".." ) || strcmp( cp, "." ) == 0 )
    {
      if ( file )
      {
        free( file );
        file = 0;
      }
    }
    else
    {
      if ( fbuffer_size > 3 && strncmp( cp, "./", 2 ) && strchr( cp, '/' ) )
      {
        memcpy( fbuffer, "./", 3 );
        if ( fbuffer_size + -3 < strlen( cp ) )
          cp[ fbuffer_size + -3 ] = 0;
        strcat( fbuffer, cp );
      }
      else
      {
        if ( fbuffer_size + -1 < strlen( cp ) )
          cp[ fbuffer_size + -1 ] = 0;
        strcpy( fbuffer, cp );
      }
      if ( file )
      {
        free( file );
        file = 0;
      }
    }
  }
  return 1;
}
char *FindLeadingTilde( char *pathname, BOOLEAN embedded )
{
  char *result = pathname;
  if ( pathname )
  {
    if ( embedded )
    {
      for ( ; pathname[0]; pathname++ )
      {
        if ( pathname[0] == '/' && pathname[1] == '~' )
        {
          pathname++;
          break;
        }
        else
        {
          // pathname++;
        }
      }
    }
    if ( pathname[0] == '~' )
    {
      result = pathname;
    }
  }
  return result;
}
char *LYAbsOrHomePath( char **fname )
{
  int eax;
  if ( ( LYisAbsPath( fname[0] ) & 255 ) == 0 )
  {
    if ( fname[0] == '~' )
      LYTildeExpand( fname, 0 );
    else
    {
      char temp[256];
      LYAddPathToHome( temp, 256, fname[0] );
      HTSACopy( fname, temp );
    }
  }
  return fname[0];
}
char *LYTildeExpand( char **pathname, BOOLEAN embedded )
{
  char *temp = FindLeadingTilde( pathname[0], embedded );
  if ( temp[0] == '~' )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYTildeExpand %s\n", pathname[0] );
    }
    if ( temp[1] == '/' )
    {
      char *first = 0;
      char *second = 0;
      HTSACopy( &first, pathname[0] );
      first[ temp - pathname[0] ] = 0;
      HTSACopy( &second, &temp[2] );
      HTSACopy( pathname, first );
      HTSACat( pathname, wwwName( Home_Dir( ) ) );
      LYAddPathSep( pathname );
      HTSACat( pathname, second );
      if ( first )
      {
        free( first );
        first = 0;
      }
      if ( second )
      {
        free( second );
        second = 0;
      }
    }
    else
    {
      if ( temp[1] == 0 )
      {
        HTSACopy( pathname, wwwName( Home_Dir( ) ) );
      }
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "expanded path %s\n", pathname[0] );
    }
  }
  return pathname[0];
}
void LYAddPathToHome( char *fbuffer, size_t fbuffer_size, char *fname )
{
  char *home = 0;
  char *file = fname;
  int len;
  if ( fbuffer )
  {
    if ( fbuffer_size <= 1 )
    {
      fbuffer[0] = 0;
    }
    else
    {
      fbuffer[ fbuffer_size + -1 ] = 0;
      if ( file == 0 )
        file = "";
      HTSACopy( &home, Home_Dir( ) );
      if ( home == 0 || home[0] == 0 )
        HTSACopy( &home, "/error" );
      len = fbuffer_size + ~strlen( home );
      if ( len <= 0 )
      {
        LYstrncpy( fbuffer, home, fbuffer_size + -1 );
        if ( home == 0 )
        {
          return;
        }
        free( home );
        home = 0;
      }
      else
      {
        sprintf( fbuffer, "%s/%.*s", home, len, strncmp( file, "./", 2 ) ? file : &file[2] );
        if ( home == 0 )
        {
          return;
        }
        free( home );
        home = 0;
      }
    }
  }
  return;
}
char *LYAddPathToSave( char *fname )
{
  int eax;
  char *result = 0;
  if ( LYisAbsPath( fname ) & 255 )
    HTSACopy( &result, fname );
  else
  if ( lynx_save_space )
    HTSACopy( &result, lynx_save_space );
  else
  {
    char temp[256];
    LYAddPathToHome( temp, 256, fname );
    HTSACopy( &result, temp );
  }
  return result;
}
BOOLEAN IsOurSymlink( char *name )
{
  BOOLEAN result = 0;
  int size = 256;
  int used;
  char *buffer = malloc( ( size ) * sizeof( char ) );
  if ( buffer )
  {
    do
    {
      used = readlink( name, buffer, size + -1 );
      if ( used == size + -1 )
      {
        size <<= 1;
        buffer = realloc( buffer, ( size ) * sizeof( char ) );
      }
      else
        break;
    }
    while ( buffer );
    if ( used > 0 )
      buffer[ used ] = 0;
    else
    {
      if ( buffer )
      {
        free( buffer );
        buffer = 0;
      }
    }
  }
  if ( buffer )
  {
    if ( ( LYisAbsPath( buffer ) & 255 ) == 0 )
    {
      char *cutoff = LYLastPathSep( name );
      char *clone = 0;
      if ( cutoff )
      {
        HTSprintf0( &clone, "%.*s%s%s", cutoff - name, name, "/", buffer );
        if ( buffer )
        {
          free( buffer );
          buffer = 0;
        }
        buffer = clone;
      }
    }
    if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
    {
      fprintf( TraceFP( ), "IsOurSymlink(%s -&gt; %s)\n", name, buffer );
    }
    result = IsOurFile( buffer );
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
  }
  return result;
}
BOOLEAN IsOurFile( char *name )
{
  BOOLEAN result = 0;
  struct stat data;
  if ( name[0] != '~' && !lstat64( name, &data.st_dev ) && ( ( ( data.st_mode & 61440 ) == 32768 && !( data.st_mode & 18 ) && data.st_nlink == 1 && data.st_uid == getuid( ) ) || ( ( data.st_mode & 61440 ) == 40960 && ( IsOurSymlink( name ) & 255 ) ) ) )
  {
    int linked = 0;
    char *path = 0;
    char *leaf;
    HTSACopy( &path, name );
    do
    {
      leaf = LYPathLeaf( path );
      if ( path != leaf )
      {
        leaf = &leaf[ -1 ];
        leaf[0] = 0;
      }
      if ( lstat64( "/", &data.st_dev ) == 0 )
      {
        if ( ( data.st_mode & 61440 ) == 40960 )
          linked = 1;
        else
        if ( ( data.st_mode & 61440 ) == 16384 )
        {
          if ( linked )
          {
            linked = 0;
            if ( data.st_uid || ( data.st_mode & 2 ) )
            {
              linked = 1;
              break;
            }
          }
        }
        else
        if ( linked == 0 )
          continue;
        else
          break;
      }
      else
        break;
    }
    while ( path != leaf );
    if ( path )
    {
      free( path );
      path = 0;
    }
    result = linked == 0;
  }
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "IsOurFile(%s) %d\n", name, result );
  }
  return result;
}
FILE *OpenHiddenFile( char *name, char *mode )
{
  FILE *fp = 0;
  struct stat data;
  BOOLEAN binary = strchr( mode, 'b' ) != 0;
  if ( mode[0] == 'w' )
  {
    int fd = open64( name, 193, 384 );
    if ( fd < 0 && *(int*)(__errno_location( )) == 17 && ( IsOurFile( name ) & 255 ) )
    {
      remove( name );
      fd = open64( name, 193, 384 );
    }
    if ( fd >= 0 )
    {
      fp = fdopen( fd, mode );
    }
  }
  else
  {
    if ( mode[0] == 'a' )
    {
      if ( ( IsOurFile( name ) & 255 ) && chmod( name, 384 ) == 0 )
      {
        fp = fopen64( name, mode );
      }
      if ( lstat64( name, &data.st_dev ) == 0 )
      {
        return fp;
      }
      fp = OpenHiddenFile( name, "w" );
    }
    else
    {
      if ( mode[0] == 'a' )
      {
        return fp;
      }
    {
      mode_t save = umask( 63 );
      if ( chmod( name, 384 ) == 0 || *(int*)(__errno_location( )) == 2 )
      {
        fp = fopen64( name, mode );
      }
      umask( save );
    }
    }
  }
  return fp;
}
FILE *LYNewBinFile( char *name )
{
  FILE *fp = OpenHiddenFile( name, ebp_20 );
  return fp;
}
FILE *LYNewTxtFile( char *name )
{
  FILE *fp = OpenHiddenFile( name, ebp_20 );
  return fp;
}
FILE *LYAppendToTxtFile( char *name )
{
  FILE *fp = OpenHiddenFile( name, ebp_20 );
  return fp;
}
void LYRelaxFilePermissions( char *name )
{
  mode_t mode;
  struct stat stat_buf;
  if ( stat64( name, &stat_buf.st_dev ) == 0 && ( stat_buf.st_mode & 61440 ) == 32768 )
  {
    mode = stat_buf.st_mode & 511;
    if ( mode == 384 )
    {
      mode_t save = umask( 63 );
      mode = ~save & ( ( mode & 448 ) | 54 );
      umask( save );
      chmod( name, mode );
    }
  }
  return;
}
BOOLEAN LYCachedTemp( char *result, char **cached )
{
  if ( cached[0] == 0 )
  {
  }
  LYstrncpy( result, cached[0], 256 );
  if ( cached[0] )
  {
    free( cached[0] );
    cached[0] = 0;
  }
  if ( LYCanReadFile( result ) & 255 )
    remove( result );
  return 0;
}
FILE *LYOpenTemp( char *result, char *suffix, char *mode )
{
  FILE *fp = 0;
  BOOLEAN txt = 1;
  char wrt = 'r';
  LY_TEMP *p;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYOpenTemp(,%s,%s)\n", suffix, mode );
  }
  if ( result == 0 )
  {
    return 0;
  }
  while ( mode[0] )
  {
    mode++;
    switch ( mode[0] )
    {
    case 'w':
      wrt = 'w';
      break;
    case 'a':
      wrt = 'a';
      break;
    case 'b':
      txt = 0;
      break;
    default:
      if ( WWW_TraceFlag == 0 )
      {
        return 0;
      }
      fprintf( TraceFP( ), "%s @%d: BUG\n", "./LYUtils.c", 5954 );
      return 0;
      break;
    }
  }
  if ( lynx_temp_subspace == 0 )
  {
    BOOLEAN make_it = 0;
    struct stat sb;
    if ( lstat64( lynx_temp_space, &sb.st_dev ) == 0 && ( sb.st_mode & 61440 ) == 16384 )
    {
      if ( sb.st_uid != getuid( ) || ( sb.st_mode & 18 ) )
      {
        make_it = 1;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "lynx_temp_space is not our directory %s owner %d mode %03o\n", lynx_temp_space, (int)sb.st_uid, sb.st_mode & 511 );
        }
      }
    }
    else
    {
      make_it = 1;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "lynx_temp_space is not a directory %s\n", lynx_temp_space );
      }
    }
    if ( make_it )
    {
      int old_mask = umask( 63 );
      HTSACat( &lynx_temp_space, "lynxXXXXXXXXXX" );
      if ( mkdtemp( lynx_temp_space ) == 0 )
      {
        printf( "%s: %s\n", lynx_temp_space, strerror( *(int*)(__errno_location( )) ) );
        exit_immediately( 1 );
      }
      umask( old_mask );
      lynx_temp_subspace = 1;
      HTSACat( &lynx_temp_space, "/" );
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "made subdirectory %s\n", lynx_temp_space );
        do
        {
          if ( fmt_tempname( result, lynx_temp_space, suffix ) == 0 )
          {
            return 0;
          }
          if ( txt )
          {
            if ( wrt == 97 )
            {
              fp = LYAppendToTxtFile( result );
            }
            else
            if ( wrt == 119 )
            {
              fp = LYNewTxtFile( result );
            }
          }
          else
          {
            fp = LYNewBinFile( result );
          }
          if ( fp == 0 && *(int*)(__errno_location( )) != 17 )
          {
            if ( WWW_TraceFlag == 0 )
            {
              return 0;
            }
            fprintf( TraceFP( ), "... LYOpenTemp(%s) failed: %s\n", result, strerror( *(int*)(__errno_location( )) ) );
            return 0;
          }
          else
          {
          }
        }
        while ( fp );
        p = calloc( 1, sizeof( LY_TEMP ) );
        if ( p )
        {
          p->next = ly_temp;
          HTSACopy( &p->name, result );
          p->file = fp;
          p->outs = wrt != 'r';
          ly_temp = p;
        }
        else
          outofmem( "./LYUtils.c", "LYOpenTemp" );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "... LYOpenTemp(%s)\n", result );
        }
        return fp;
      }
    }
    else
    {
      lynx_temp_subspace = -1;
    }
  }
}
FILE *LYReopenTemp( char *name )
{
  LY_TEMP *p;
  FILE *fp = 0;
  LYCloseTemp( name );
  p = FindTempfileByName( name );
  if ( p )
  {
    p->file = LYAppendToTxtFile( name );
    fp = &p->file;
  }
  return fp;
}
FILE *LYOpenTempRewrite( char *fname, char *suffix, char *mode )
{
  FILE *fp = 0;
  BOOLEAN txt = 1;
  char wrt = 'r';
  BOOLEAN registered = 0;
  BOOLEAN writable_exists = 0;
  BOOLEAN is_ours = 0;
  BOOLEAN still_open = 0;
  LY_TEMP *p;
  struct stat stat_buf;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYOpenTempRewrite(%s,%s,%s)\n", fname, suffix, mode );
  }
  if ( fname[0] == 0 )
  {
  }
  p = FindTempfileByName( fname );
  if ( p )
  {
    registered = 1;
    if ( p->file )
      still_open = 1;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...used before%s\n", "." );
    }
  }
  if ( registered )
  {
    writable_exists = HTEditable( fname );
    if ( writable_exists )
    {
      is_ours = IsOurFile( fname );
    }
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...%s%s\n", "", "is NOT our file." );
    }
  }
  if ( still_open )
  {
  }
  if ( registered == 0 )
  {
  }
  if ( writable_exists && is_ours == 0 )
  {
  }
  if ( is_ours == 0 && lstat64( fname, &stat_buf.st_dev ) == 0 )
  {
  }
  while ( mode[0] )
  {
    mode++;
    switch ( mode[0] )
    {
    case 'w':
      wrt = 'w';
      break;
    case 'a':
      wrt = 'a';
      break;
    case 'b':
      txt = 0;
      break;
    default:
      if ( WWW_TraceFlag == 0 )
      {
        return fp;
      }
      fprintf( TraceFP( ), "%s @%d: BUG\n", "./LYUtils.c", 6157 );
      return fp;
      break;
    }
  }
  if ( is_ours )
  {
    if ( txt == 1 )
    {
      if ( truncate64( fname, (long long)0 ) == 0 )
      {
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "... truncate(%s,0) failed: %s\n", fname, strerror( *(int*)(__errno_location( )) ) );
      }
    }
    else
      remove( fname );
  }
  if ( txt )
  {
    if ( wrt == 97 )
    {
      fp = LYAppendToTxtFile( fname );
    }
    else
    if ( wrt == 119 )
    {
      fp = LYNewTxtFile( fname );
    }
  }
  else
  {
    fp = LYNewBinFile( fname );
  }
  p->file = fp;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "... LYOpenTempRewrite(%s), %s\n", fname, "failed" );
  }
  return fp;
}
FILE *LYOpenScratch( char *result, char *prefix )
{
  FILE *fp;
  LY_TEMP *p;
  if ( fmt_tempname( result, prefix, ebp_32 ) == 0 )
  {
    return 0;
  }
  fp = LYNewTxtFile( result );
  if ( fp )
  {
    p = calloc( 1, sizeof( LY_TEMP ) );
    if ( p )
    {
      p->next = ly_temp;
      HTSACopy( &p->name, result );
      p->file = fp;
      ly_temp = p;
    }
    else
      outofmem( "./LYUtils.c", "LYOpenScratch" );
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYOpenScratch(%s)\n", result );
  }
  return fp;
}
void LY_close_temp( LY_TEMP *p )
{
  if ( p->file )
  {
    if ( p->outs )
      LYCloseOutput( &p->file );
    else
      LYCloseInput( &p->file );
    p->file = 0;
  }
  return;
}
void LYCloseTemp( char *name )
{
  LY_TEMP *p;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYCloseTemp(%s)\n", name );
  }
  p = FindTempfileByName( name );
  if ( p )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...LYCloseTemp(%s)%s\n", name, "" );
    }
    LY_close_temp( p );
  }
  return;
}
void LYCloseTempFP( FILE *fp )
{
  LY_TEMP *p;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYCloseTempFP\n" );
  }
  p = FindTempfileByFP( fp );
  if ( p )
  {
    LY_close_temp( p );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "...LYCloseTempFP(%s)\n", &p->name );
    }
  }
  return;
}
int LYRemoveTemp( char *name )
{
  LY_TEMP *p, *q;
  int code = -1;
  if ( name && name )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYRemoveTemp(%s)\n", name );
    }
    p = ly_temp;
    q = 0;
    for ( ; p;  )
    {
      if ( strcmp( name, &p->name ) == 0 )
      {
        if ( q )
          q->next = p->next;
        else
          ly_temp = &p->next;
        LY_close_temp( p );
        code = remove( name );
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "...LYRemoveTemp done(%d)%s\n", code, "" );
        }
        if ( WWW_TraceFlag )
        {
          fflush( TraceFP( ) );
        }
        if ( p->name )
        {
          free( &p->name );
          p->name = 0;
        }
        if ( p == 0 )
          break;
        free( p );
        p = 0;
        break;
      }
      else
      {
        q = p;
        p = &p->next;
      }
    }
  }
  return code;
}
void LYCleanupTemp( void )
{
  int eax;
  while ( ly_temp )
  {
    LYRemoveTemp( &ly_temp->name );
  }
  if ( lynx_temp_subspace > 0 )
  {
    char result[256];
    LYstrncpy( result, lynx_temp_space, 255 );
    LYTrimPathSep( result );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYCleanupTemp removing %s\n", result );
    }
    rmdir( result );
    lynx_temp_subspace = -1;
  }
  return;
}
void LYRenamedTemp( char *oldname, char *newname )
{
  LY_TEMP *p;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYRenamedTemp(old=%s, new=%s)\n", oldname, newname );
  }
  p = FindTempfileByName( oldname );
  if ( p )
  {
    HTSACopy( &p->name, newname );
  }
  return;
}
void LYCheckBibHost( void )
{
  DocAddress bibhostIcon;
  BOOLEAN saveFlag;
  bibhostIcon.address = 0;
  HTSACopy( &bibhostIcon.address, BibP_bibhost );
  HTSACat( &bibhostIcon.address, "bibp1.0/bibpicon.jpg" );
  bibhostIcon.post_data = 0;
  bibhostIcon.post_content_type = 0;
  bibhostIcon.bookmark = 0;
  bibhostIcon.isHEAD = 0;
  bibhostIcon.safe = 0;
  saveFlag = traversal;
  traversal = 1;
  BibP_bibhost_available = HTLoadAbsolute( &bibhostIcon ) == 1;
  traversal = saveFlag;
  BibP_bibhost_checked = 1;
  return;
}
BOOLEAN LYIsUIPage3( char *url, UIP_t type, int flagparam )
{
  unsigned int i;
  size_t l;
  if ( url == 0 )
  {
  }
  else
  {
    i = 0;
    for ( ; i <= 12; i++ )
    {
      if ( ly_uip[ i ].type == type )
      {
        if ( ly_uip[ i ].url == 0 )
        {
          break;
        }
        else
        {
          if ( flagparam & 1 )
          {
            l = strlen( ly_uip[ i ].url );
          }
          else
          {
          }
          if ( strcmp( ly_uip[ i ].url, url ) == 0 )
          {
            break;
          }
          else
          {
            if ( ly_uip[ i ].flags & 1 )
            {
              char *p;
              HTList *l0 = ly_uip[ i ].alturls;
              do
              {
                if ( l0 )
                {
                  l0 = &l0->next;
                  p = 0;
                  if ( p )
                  {
                    if ( flagparam & 1 )
                    {
                      l = strlen( p );
                    }
                    else
                    {
                    }
                  }
                }
                p = 0;
              }
              while ( strcmp( p, url ) == 0 );
              break;
            }
            break;
          }
        }
      }
      else
      {
        // i++;
      }
    }
  }
  return 0;
}
void LYRegisterUIPage( char *url, UIP_t type )
{
  unsigned int i = 0;
  for ( ; i <= 12; i++ )
  {
    if ( ly_uip[ i ].type == type )
    {
      if ( ly_uip[ i ].url && url && strcmp( ly_uip[ i ].url, url ) == 0 )
        break;
      if ( ly_uip[ i ].url == 0 || url == 0 || ( ly_uip[ i ].flags & 1 ) == 0 )
      {
        HTSACopy( &ly_uip[ i ].url, url );
        break;
      }
      else
      {
        char *p;
        int n = 0;
        HTList *l0 = ly_uip[ i ].alturls;
        while ( 1 )
        {
          if ( l0 )
          {
            l0 = &l0->next;
            p = 0;
            if ( p )
            {
              if ( strcmp( p, url ) == 0 )
                break;
              if ( strcmp( p, ly_uip[ i ].url ) == 0 )
              {
                HTSACopy( &ly_uip[ i ].url, url );
                break;
              }
              else
              {
                n++;
              }
            }
            else
            {
              if ( ly_uip[ i ].alturls == 0 )
              {
                ly_uip[ i ].alturls = HTList_new( );
              }
              if ( HTCacheSize <= n && ( ly_uip[ i ].flags & 2 ) )
                HTList_removeFirstObject( ly_uip[ i ].alturls );
              HTList_addObject( ly_uip[ i ].alturls, (void*)ly_uip[ i ].url );
              ly_uip[ i ].url = 0;
              HTSACopy( &ly_uip[ i ].url, url );
              break;
            }
          }
          p = 0;
        }
      }
    }
    else
    {
      // i++;
    }
  }
  return;
}
void LYUIPages_free( void )
{
  unsigned int i = 0;
  for ( ; i <= 12; i++ )
  {
    if ( ly_uip[ i ].url )
    {
      free( ly_uip[ i ].url );
      ly_uip[ i ].url = 0;
    }
    if ( ly_uip[ i ].file )
    {
      free( ly_uip[ i ].file );
      ly_uip[ i ].file = 0;
    }
    LYFreeStringList( ly_uip[ i ].alturls );
    ly_uip[ i ].alturls = 0;
    // i++;
  }
  return;
}
char *wwwName( char *pathname )
{
  char *cp = 0;
  cp = pathname;
  return cp;
}
BOOLEAN LYValidateFilename( char *result, char *given )
{
  static char buf[256];
  char *cp;
  char *cp2;
  if ( strcmp( given, ebp_36 ) == 0 )
  {
  }
  if ( given[0] == '|' )
  {
    if ( no_shell )
    {
      HTUserMsg( gettext( "Spawning is currently disabled." ) );
    }
    LYstrncpy( result, given, 256 );
  }
  else
  {
    cp = FindLeadingTilde( given, 1 );
    if ( given != cp )
    {
      cp2 = wwwName( Home_Dir( ) );
      if ( cp2 && strlen( cp2 ) + strlen( given ) <= 255 )
      {
        cp[0] = 0;
        cp++;
        strcpy( result, given );
        LYTrimPathSep( result );
        strcat( result, cp2 );
        strcat( result, cp );
        strcpy( given, result );
      }
    }
    if ( ( LYisAbsPath( given ) & 255 ) == 0 )
    {
      cp = Current_Dir( buf );
    }
    else
      cp = 0;
    result[0] = 0;
    if ( cp )
    {
      LYTrimPathSep( cp );
      if ( strlen( cp ) > 253 )
      {
      }
      sprintf( result, "%s/", cp );
    }
    cp = given;
    if ( strlen( result ) + strlen( cp ) > 254 )
    {
    }
    strcat( result, cp );
  }
  return 1;
}
int LYValidateOutput( char *filename )
{
  int c;
  if ( filename[0] == '|' )
  {
    return 89;
  }
  if ( ( no_dotfiles || show_dotfiles == 0 ) && *(char*)(LYPathLeaf( filename )) == '.' )
  {
    HTAlert( gettext( "File name may not begin with a dot." ) );
    return 78;
  }
  if ( LYCanReadFile( filename ) & 255 )
  {
    c = HTConfirm( gettext( "File exists.  Overwrite?" ) );
    if ( HTLastConfirmCancelled( ) & 255 )
    {
      HTInfoMsg( gettext( "Save request cancelled!!!" ) );
      return 3;
    }
    if ( c == 0 )
    {
      return 78;
    }
  }
  return 89;
}
void LYLocalFileToURL( char **target, char *source )
{
  char *leaf;
  HTSACopy( target, "file://localhost" );
  leaf = wwwName( source );
  if ( ( LYisAbsPath( source ) & 255 ) == 0 )
  {
    char temp[256];
    Current_Dir( temp );
    if ( temp[0] != '/' )
      LYAddHtmlSep( target );
    HTSACat( target, temp );
  }
  if ( leaf[0] != '/' )
    LYAddHtmlSep( target );
  HTSACat( target, leaf );
  return;
}
FILE *InternalPageFP( char *filename, int reuse_flag )
{
  FILE *fp;
  if ( LYReuseTempfiles && reuse_flag )
  {
    fp = LYOpenTempRewrite( filename, ".html", "wb" );
  }
  else
  {
    LYRemoveTemp( filename );
    fp = LYOpenTemp( filename, ".html", "wb" );
  }
  if ( fp == 0 )
  {
    HTAlert( gettext( "Can't open temporary file!" ) );
  }
  return fp;
}
void WriteInternalTitle( FILE *fp0, char *Title )
{
  fwrite( "&lt;!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\"&gt;\n", 1, 64, fp0 );
  fwrite( "&lt;html&gt;\n&lt;head&gt;\n", 1, 14, fp0 );
  LYAddMETAcharsetToFD( fp0, -1 );
  if ( strcmp( Title, gettext( "List Page" ) ) == 0 && strchr( HTLoadedDocumentURL( ), '"' ) == 0 )
  {
    char *Address = 0;
    HTSACopy( &Address, HTLoadedDocumentURL( ) );
    LYEntify( &Address, 0 );
    fprintf( fp0, "&lt;base href=\"%s\"&gt;\n", Address );
    if ( Address )
    {
      free( Address );
    }
  }
  fprintf( fp0, "&lt;title&gt;%s&lt;/title&gt;\n&lt;/head&gt;\n&lt;body&gt;\n", Title );
  return;
}
void BeginInternalPage( FILE *fp0, char *Title, char *HelpURL )
{
  WriteInternalTitle( fp0, Title );
  if ( user_mode == 0 && ( LYwouldPush( Title, 0 ) & 255 ) && HelpURL )
  {
    fprintf( fp0, "&lt;h1&gt;%s (%s%s%s), &lt;a href=\"%s%s\"&gt;help&lt;/a&gt;&lt;/h1&gt;\n", Title, "Lynx", gettext( " Version " ), "2.8.7dev.11", helpfilepath, HelpURL );
  }
  else
  {
    fprintf( fp0, "&lt;h1&gt;%s (%s%s%s)&lt;/h1&gt;\n", Title, "Lynx", gettext( " Version " ), "2.8.7dev.11" );
  }
  return;
}
void EndInternalPage( FILE *fp0 )
{
  fwrite( "&lt;/body&gt;\n&lt;/html&gt;", 1, 15, fp0 );
  return;
}
char *trimPoundSelector( char *address )
{
  char *pound = strchr( address, ebp_20 );
  if ( pound )
  {
    pound[0] = 0;
  }
  return pound;
}
void LYTrimPathSep( char *path )
{
  size_t len;
  if ( path )
  {
    len = strlen( path );
    if ( len && path[ len + -1 ] == '/' )
    {
      path[ len + -1 ] = 0;
    }
  }
  return;
}
void LYAddPathSep( char **path )
{
  size_t len;
  char *temp;
  if ( path )
  {
    temp = path[0];
    if ( temp )
    {
      len = strlen( temp );
      if ( len && temp[ len + -1 ] != '/' )
      {
        HTSACat( path, "/" );
      }
    }
  }
  return;
}
void LYAddPathSep0( char *path )
{
  size_t len;
  if ( path )
  {
    len = strlen( path );
    if ( len && len <= 253 && path[ len + -1 ] != '/' )
    {
      strcat( path, "/" );
    }
  }
  return;
}
char *LYLastPathSep( char *path )
{
  char *result = strrchr( path, ebp_20 );
  return result;
}
void LYTrimHtmlSep( char *path )
{
  size_t len;
  if ( path )
  {
    len = strlen( path );
    if ( len && path[ len + -1 ] == '/' )
    {
      path[ len + -1 ] = 0;
    }
  }
  return;
}
void LYAddHtmlSep( char **path )
{
  size_t len;
  char *temp;
  if ( path )
  {
    temp = path[0];
    if ( temp )
    {
      len = strlen( temp );
      if ( len && temp[ len + -1 ] != '/' )
      {
        HTSACat( path, "/" );
      }
    }
  }
  return;
}
void LYAddHtmlSep0( char *path )
{
  size_t len;
  if ( path )
  {
    len = strlen( path );
    if ( len && len <= 253 && path[ len + -1 ] != '/' )
    {
      strcat( path, "/" );
    }
  }
  return;
}
int LYCopyFile( char *src, char *dst )
{
  int eax;
  int code;
  char *program = HTGetProgramPath( 4 );
  if ( program )
  {
    char *the_command = 0;
    HTAddParam( &the_command, "%s %s %s", 1, program );
    HTAddParam( &the_command, "%s %s %s", 2, src );
    HTAddParam( &the_command, "%s %s %s", 3, dst );
    HTEndParam( &the_command, "%s %s %s", 3 );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "command: %s\n", the_command );
    }
    stop_curses( );
    code = LYSystem( the_command );
    start_curses( );
    if ( the_command )
    {
      free( the_command );
      the_command = 0;
    }
  }
  else
  {
    FILE *fin, *fout;
    unsigned char buff[8192];
    int len;
    code = -1;
    fin = fopen64( src, "rb" );
    if ( fin )
    {
      fout = fopen64( dst, "wb" );
      if ( fout )
      {
        code = 0;
        do
        {
          len = fread( buff, 1, 8192, fin );
          if ( len > 0 )
          {
            fwrite( buff, 1, len, fout );
          }
          LYCloseOutput( fout );
        }
        while ( ferror( fout ) );
        code = -1;
        LYCloseOutput( fout );
      }
      LYCloseInput( fin );
    }
  }
  if ( code )
  {
    HTAlert( gettext( "Cannot write to file." ) );
  }
  return code;
}
int LYSystem( char *command )
{
  int code;
  int do_free = 0;
  struct sigaction saved_sigtstp_act;
  BOOLEAN sigtstp_saved = 0;
  int saved_errno = 0;
  fflush( stdout );
  fflush( stderr );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYSystem(%s)\n", command );
  }
  if ( WWW_TraceFlag )
  {
    fflush( TraceFP( ) );
  }
  if ( restore_sigpipe_for_children )
    signal( 13, 0 );
  if ( dump_output_immediately == 0 && LYCursesON == 0 && no_suspend == 0 )
  {
    sigtstp_saved = LYToggleSigDfl( 20, &saved_sigtstp_act, 1 );
  }
  code = system( command );
  saved_errno = *(int*)(__errno_location( ));
  if ( sigtstp_saved )
    LYToggleSigDfl( 20, &saved_sigtstp_act, 0 );
  if ( restore_sigpipe_for_children )
    signal( 13, 1 );
  fflush( stdout );
  fflush( stderr );
  if ( do_free && command )
  {
    free( command );
    command = 0;
  }
  *(int*)(__errno_location( )) = saved_errno;
  return code;
}
char *LYSysShell( void )
{
  char *shell = 0;
  shell = "exec $SHELL";
  return shell;
}
char *LYgetXDisplay( void )
{
  return LYGetEnv( "DISPLAY" );
}
void LYsetXDisplay( char *new_display )
{
  static char *display_putenv_command;
  if ( new_display )
  {
    HTSprintf0( &display_putenv_command, "DISPLAY=%s", new_display );
    putenv( display_putenv_command );
    new_display = LYgetXDisplay( );
    if ( new_display )
    {
      HTSACopy( &x_display, new_display );
    }
  }
  return;
}
void get_clip_release( void )
{
  if ( paste_handle )
    pclose( paste_handle );
  if ( paste_buf && paste_buf )
  {
    free( paste_buf );
    paste_buf = 0;
  }
  return;
}
int clip_grab( void )
{
  char *cmd = LYGetEnv( "RL_PASTE_CMD" );
  if ( paste_handle )
    pclose( paste_handle );
  if ( cmd == 0 )
  {
    return 0;
  }
  paste_handle = popen( cmd, "r" );
  if ( paste_handle == 0 )
  {
    return 0;
  }
  return 1;
}
char *get_clip_grab( void )
{
  int len;
  int size = 1008;
  int off = 0;
  if ( clip_grab( ) == 0 )
  {
    return 0;
  }
  if ( paste_handle == 0 )
  {
    return 0;
  }
  if ( paste_buf && paste_buf )
  {
    free( paste_buf );
    paste_buf = 0;
  }
  paste_buf = (char*)malloc( 1008 );
  while ( len > 1006 && strchr( &paste_buf[ off ], '\r' ) == 0 && strchr( &paste_buf[ off ], '\n' ) == 0 )
  {
    size += 1007;
    paste_buf = realloc( paste_buf, ( size ) * sizeof( char ) );
    off += len;
  }
  return paste_buf;
}
int put_clip( char *s )
{
  char *cmd = LYGetEnv( "RL_CLCOPY_CMD" );
  FILE *fh;
  int l = strlen( s ), res;
  if ( cmd == 0 )
  {
    return -1;
  }
  fh = popen( cmd, "w" );
  if ( fh == 0 )
  {
    return -1;
  }
  res = fwrite( s, 1, l, fh );
  if ( pclose( fh ) || res != l )
  {
    return -1;
  }
  return 0;
}
void LYmsec_delay( unsigned int msec )
{
  napms( (int)msec );
  return;
}
void LYOpenlog( char *banner )
{
  if ( syslog_requested_urls )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYOpenlog(%s)\n", "(null)" );
    }
    openlog( "lynx", 1, 168 );
    if ( banner )
    {
      syslog( 6, "Session start:%s", banner );
    }
    else
    {
      syslog( 6, "Session start" );
    }
  }
  return;
}
BOOLEAN looks_like_password( char *first, char *last )
{
  BOOLEAN result = 0;
  for ( ; first <= last; first++ )
  {
    if ( first[0] == '/' || first[0] == ':' )
    {
      result = 0;
      break;
    }
    result = 1;
    // first++;
  }
  return result;
}
void LYSyslog( char *arg )
{
  char *colon1;
  char *colon2;
  char *atsign;
  if ( syslog_requested_urls )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "LYSyslog %s\n", arg );
    }
    if ( is_url( arg ) )
    {
      colon1 = strchr( arg, ':' );
      if ( colon1 && strncmp( colon1, "://", 3 ) == 0 )
      {
        colon2 = strchr( &colon1[3], ':' );
        if ( colon2 )
        {
          atsign = strchr( colon1, '@' );
          if ( atsign && colon2 < atsign && ( looks_like_password( &colon2[1], &atsign[ -1 ] ) & 255 ) )
          {
            char *buf = 0;
            HTSACopy( &buf, arg );
            buf[ ( colon2 - arg ) + 1 ] = 0;
            HTSACat( &buf, "******" );
            HTSACat( &buf, atsign );
            syslog( 174, "%s", buf );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "...alter %s\n", buf );
            }
            if ( buf == 0 )
            {
              return;
            }
            free( buf );
            buf = 0;
          }
        }
      }
    }
    syslog( 174, "%s", "(null)" );
  }
  return;
}
void LYCloselog( void )
{
  if ( syslog_requested_urls )
  {
    syslog( 6, "Session over" );
    closelog( );
  }
  return;
}
#if 0
#endif
