#include "HTPlain.c.h"
static int HTPlain_lastraw;
static int HTPlain_bs_pending;
static char replace_buf[64];
static HTStreamClass HTPlain;
void HTPlain_getChartransInfo( HTStream *me, HTParentAnchor *anchor )
{
  if ( me->inUCLYhndl < 0 )
  {
    HTAnchor_copyUCInfoStage( anchor, 1, 0, 4 );
    me->inUCLYhndl = HTAnchor_getUCLYhndl( anchor, 1 );
  }
  if ( me->outUCLYhndl < 0 )
  {
    int chndl = HTAnchor_getUCLYhndl( anchor, 3 );
    if ( chndl < 0 )
    {
      chndl = current_char_set;
      HTAnchor_setUCInfoStage( anchor, chndl, 3, 1 );
    }
    HTAnchor_setUCInfoStage( anchor, chndl, 3, 1 );
    me->outUCLYhndl = HTAnchor_getUCLYhndl( anchor, 3 );
  }
  me->inUCI = HTAnchor_getUCInfoStage( anchor, 1 );
  me->outUCI = HTAnchor_getUCInfoStage( anchor, 3 );
  return;
}
void HTPlain_put_character( HTStream *me, char c )
{
  if ( HTPlain_lastraw == 13 && c == '\n' )
  {
    HTPlain_lastraw = -1;
  }
  else
  if ( c == 8 || c == '_' || HTPlain_bs_pending )
  {
    HTPlain_write( me, &c, 1 );
  }
  else
  {
    HTPlain_lastraw = c;
    if ( c == '\r' )
    {
      HText_appendCharacter( &me->text, 10 );
    }
    else
    if ( c < '~' )
    {
      HTPlain_write( me, &c, 1 );
    }
    else
    if ( HTCJK )
    {
      HText_appendCharacter( &me->text, c );
    }
    else
    if ( c < '~' && -96 <= c && HTPassHighCtrlRaw )
    {
      HText_appendCharacter( &me->text, c );
    }
    else
    if ( c == -96 )
    {
      HText_appendCharacter( &me->text, 32 );
    }
    else
    if ( c != -83 )
    {
      if ( ( -83 <= c && '~' <= c ) || c == '\n' || c == '\t' )
      {
        HText_appendCharacter( &me->text, c );
      }
      else
      if ( c < -96 )
      {
        if ( !HTPassEightBitRaw && me->outUCLYhndl != LATIN1 && ( me->outUCI->enc & 2 ) == 0 )
        {
          int len, high, low, i, diff = 1;
          char *name;
          UCode_t value = c + -160;
          name = HTMLGetEntityName( value );
          len = strlen( name );
          low = 0;
          high = 112;
          while ( low < high )
          {
            i = low + ( ( high - low ) / 2 );
            diff = strncmp( entities[ i ], name, len );
            if ( diff )
            {
              if ( diff < 0 )
              {
                low = i + 1;
              }
              else
              {
                high = i;
              }
            }
            else
            {
              HText_appendText( &me->text, LYCharSets[ me->outUCLYhndl ][ i ] );
              break;
            }
          }
          if ( diff )
          {
            HText_appendCharacter( &me->text, c );
          }
        }
        else
        {
          HText_appendCharacter( &me->text, c );
        }
      }
    }
  }
  return;
}
void HTPlain_put_string( HTStream *me, char *s )
{
  char *p;
  if ( s )
  {
    p = s;
    for ( ; p[0]; p++ )
    {
      HTPlain_put_character( me, p[0] );
      // p++;
    }
  }
  return;
}
void HTPlain_write( HTStream *me, char *s, int l )
{
  char *p;
  char *e = &s[ l ];
  char c;
  unsigned int c_unsign;
  BOOLEAN chk;
  UCode_t code;
  UCode_t uck = -1;
  char saved_char_in = 0;
  p = s;
  for ( ; p < e; p++ )
  {
    if ( p[0] == 8 )
    {
      if ( HTPlain_bs_pending == 0 )
        HTPlain_bs_pending = 1;
        // p++;
      else
      if ( HTPlain_bs_pending == 2 )
        HTPlain_bs_pending = 3;
    }
    else
    {
      if ( p[0] == '_' && HTPlain_bs_pending == 0 )
      {
        HTPlain_bs_pending = 2;
        HTPlain_lastraw = p[0];
      }
    }
    if ( HTPlain_lastraw == 13 && p[0] == '\n' )
      HTPlain_lastraw = -1;
    else
    {
      if ( HTPlain_bs_pending && ( 31 <= p[0] || p[0] == '\r' || p[0] == '\n' || ( p[0] != HTPlain_lastraw && HTPlain_lastraw != 95 && p[0] != '_' ) ) )
      {
        if ( HTPlain_bs_pending > 1 )
          HText_appendCharacter( &me->text, 95 );
        HTPlain_bs_pending = 0;
      }
      else
      if ( HTPlain_bs_pending == 1 )
        HTPlain_bs_pending = 0;
      else
      if ( HTPlain_bs_pending == 3 )
      {
        if ( p[0] == '_' )
          HTPlain_bs_pending = 2;
        else
          HTPlain_bs_pending = 0;
      }
      else
      if ( HTPlain_bs_pending == 2 )
      {
        HText_appendCharacter( &me->text, 95 );
        if ( p[0] != '_' )
          HTPlain_bs_pending = 0;
      }
      else
        HTPlain_bs_pending = 0;
      HTPlain_lastraw = p[0];
      if ( p[0] == '\r' )
        HText_appendCharacter( &me->text, 10 );
      else
      {
        code = c_unsign = c = p[0];
        saved_char_in = 0;
        if ( me->T.decode_utf8 )
        {
          if ( c_unsign > 127 )
          {
            if ( 0 < me->utf_count && ( c & 192 ) == 128 )
            {
              me->utf_char = ( me->utf_char << 6 ) | ( c & 63 );
              me->utf_count = me->utf_count + -1;
              me->utf_buf_p[0] = c;
              me->utf_buf_p++;
              if ( me->utf_count == 0 )
              {
                me->utf_buf_p[0] = 0;
                code = me->utf_char;
                if ( code > 0 && code <= 255 )
                {
                  c_unsign = c = code;
                }
              }
            }
            else
            {
              me->utf_buf_p[0] = c;
              me->utf_buf_p = me->utf_buf[1];
              if ( ( p[0] & 224 ) == 192 )
              {
                me->utf_count = 1;
                me->utf_char = c & 31;
              }
              else
              {
                if ( ( p[0] & 240 ) == 224 )
                {
                  me->utf_count = 2;
                  me->utf_char = c & 15;
                }
                else
                {
                  if ( ( p[0] & 248 ) == 240 )
                  {
                    me->utf_count = 3;
                    me->utf_char = c & 7;
                  }
                  else
                  {
                    if ( ( p[0] & 252 ) == 248 )
                    {
                      me->utf_count = 4;
                      me->utf_char = __MOD(c,4);
                    }
                    else
                    {
                      if ( ( p[0] & 254 ) == 252 )
                      {
                        me->utf_count = 5;
                        me->utf_char = c & 1;
                      }
                      else
                      {
                        me->utf_count = 0;
                        me->utf_buf_p[0] = 0;
                        me->utf_buf_p = me->utf_buf[0];
                      }
                    }
                  }
                }
              }
            }
          }
          else
          if ( 0 < me->utf_count )
          {
            me->utf_count = 0;
            me->utf_buf_p = me->utf_buf[0] = 0;
            code = c_unsign;
          }
          else
            code = c_unsign;
        }
        if ( !me->T.decode_utf8 || p[0] >= 0 )
        {
          if ( me->T.trans_to_uni && ( LYlowest_eightbit[ me->inUCLYhndl ] <= code || ( code <= 31 && code && me->T.trans_C0_to_uni ) ) )
          {
            code = UCTransToUni( c, me->inUCLYhndl );
            if ( code > 0 )
            {
              saved_char_in = c;
              if ( code <= 255 )
              {
                c_unsign = c = code;
              }
            }
          }
          else
          if ( code <= 31 && code && me->T.trans_C0_to_uni )
          {
            if ( me->T.trans_from_uni )
            {
              code = UCTransToUni( c, me->inUCLYhndl );
              if ( code <= 31 )
              {
                if ( me->T.transp )
                {
                  code = UCTransToUni( c, me->inUCLYhndl );
                  if ( code > 0 )
                    goto B103;
                }
              }
B103:;
              saved_char_in = c;
              if ( code <= 255 )
              {
                c_unsign = c = code;
              }
            }
            uck = -1;
            if ( me->T.transp )
            {
              uck = UCTransCharStr( replace_buf, 60, c, me->inUCLYhndl, me->inUCLYhndl, 0 );
            }
            if ( me->T.transp == 0 || uck < 0 )
            {
              uck = UCTransCharStr( replace_buf, 60, c, me->inUCLYhndl, me->outUCLYhndl, 1 );
            }
            if ( uck )
            {
              if ( uck >= 0 )
              {
                c = replace_buf[0];
                if ( c && replace_buf[1] )
                  HText_appendText( &me->text, replace_buf );
              }
              else
              {
                me->utf_buf[0] = 0;
                code = c;
              }
              me->utf_buf[0] = 0;
              code = c;
            }
          }
          else
          {
            me->utf_buf[0] = 0;
            code = c;
          }
        }
        if ( HTCJK )
          HText_appendCharacter( &me->text, c );
        else
        {
          if ( code > 126 && code <= 160 && ( me->T.transp || LYlowest_eightbit[ me->inUCLYhndl ] <= code ) && me->T.pass_160_173_raw )
            HText_appendCharacter( &me->text, c );
          else
          {
            if ( code == 173 && me->T.pass_160_173_raw )
              HText_appendCharacter( &me->text, c );
            else
            {
              if ( code == 160 )
                HText_appendCharacter( &me->text, 32 );
              else
              {
                if ( code != 173 )
                {
                  if ( ( code > 31 && code <= 126 ) || ( ( HTPassEightBitRaw || ( me->T.do_8bitraw && !me->T.trans_from_uni ) ) && LYlowest_eightbit[ me->outUCLYhndl ] <= c ) || p[0] == '\n' || p[0] == '\t' )
                    HText_appendCharacter( &me->text, c );
                  else
                  {
                    switch ( code )
                    {
                    case 8194:
                    case 8195:
                    case 8201:
                      HText_appendCharacter( &me->text, 32 );
                      break;
                    default:
                      if ( me->T.use_raw_char_in && saved_char_in )
                        HText_appendCharacter( &me->text, saved_char_in );
                      else
                      {
                        *(int*)&chk = 0;
                        if ( chk )
                        {
                          uck = UCTransUniChar( code, me->outUCLYhndl );
                          if ( uck > 31 && uck <= 255 )
                          {
                            if ( WWW_TraceFlag )
                            {
                              fprintf( TraceFP( ), "UCTransUniChar returned 0x%.2lX:'%c'.\n", uck, uck );
                            }
                            HText_appendCharacter( &me->text, uck );
                          }
                        }
                        if ( chk && ( uck == -4 || ( me->T.repl_translated_C0 && uck > 0 && uck <= 31 ) ) )
                        {
                          uck = ~UCTransUniCharStr( replace_buf, 60, code, me->outUCLYhndl, 0 ) >> 31;
                          if ( uck )
                            HText_appendText( &me->text, replace_buf );
                        }
                        if ( chk && code > 127 && me->T.output_utf8 )
                        {
                          if ( me->utf_buf[0] )
                          {
                            HText_appendText( &me->text, &me->utf_buf[0] );
                            me->utf_buf_p = me->utf_buf[0] = 0;
                          }
                          else
                          {
                            if ( UCConvertUniToUtf8( code, replace_buf ) & 255 )
                              HText_appendText( &me->text, replace_buf );
                            else
                            {
                              sprintf( replace_buf, "U%.2lX", code );
                              HText_appendText( &me->text, replace_buf );
                            }
                          }
                        }
                        else
                        {
                          if ( ( c_unsign && (int)c_unsign < LYlowest_eightbit[ me->outUCLYhndl ] ) || ( me->T.trans_from_uni && HTPassEightBitRaw == 0 ) )
                          {
                            chk = me->outUCLYhndl != UCGetLYhndl_byMIME( "us-ascii" );
                            if ( chk )
                            {
                              uck = UCTransUniChar( code, UCGetLYhndl_byMIME( "us-ascii" ) );
                              if ( uck > 31 && uck <= 126 )
                              {
                                c = uck;
                                HText_appendCharacter( &me->text, c );
                              }
                            }
                            if ( chk && uck == -4 )
                            {
                              uck = ~UCTransUniCharStr( replace_buf, 60, code, UCGetLYhndl_byMIME( "us-ascii" ), 0 ) >> 31;
                              if ( uck )
                                HText_appendText( &me->text, replace_buf );
                            }
                            if ( code == 8204 || code == 8205 )
                            {
                              if ( WWW_TraceFlag )
                              {
                                fprintf( TraceFP( ), "HTPlain_write: Ignoring '%ld'.\n", code );
                              }
                            }
                            else
                            {
                              if ( ( code == 8206 || code == 8207 ) && WWW_TraceFlag )
                              {
                                fprintf( TraceFP( ), "HTPlain_write: Ignoring '%ld'.\n", code );
                              }
                            }
                          }
                          else
                          {
                            if ( c_unsign && c_unsign <= 255 )
                              HText_appendCharacter( &me->text, c );
                          }
                        }
                      }
                      break;
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
  return;
}
void HTPlain_free( HTStream *me )
{
  if ( HTPlain_bs_pending > 1 )
    HText_appendCharacter( &me->text, 95 );
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
void HTPlain_abort( HTStream *me, HTError e )
{
  HTPlain_free( me );
  return;
}
HTStream *HTPlainPresent( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *me = malloc( ( 1 ) * sizeof( HTStream ) );
  if ( me == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTPlain.c", "HTPlain_new" );
  me->isa->name[0] = HTPlain.name;
  HTPlain_lastraw = -1;
  me->utf_count = 0;
  *(int*)&me->utf_char = 0;
  me->utf_buf_p = me->utf_buf[0] = me->utf_buf[6] = me->utf_buf[7] = 0;
  me->outUCLYhndl = HTAnchor_getUCLYhndl( anchor, 3 );
  me->inUCLYhndl = HTAnchor_getUCLYhndl( anchor, 1 );
  HTPlain_getChartransInfo( me, anchor );
  UCSetTransParams( &me->T, me->inUCLYhndl, &me->inUCI, me->outUCLYhndl, HTAnchor_getUCInfoStage( anchor, 3 ) );
  me->text = HText_new( anchor );
  HText_setStyle( &me->text, LYstyles( 117 ) );
  HText_beginAppend( &me->text );
  return me;
}
#if 0
#endif
