#include "progress.c.h"
unsigned char *get_progress_msg( struct progress *progress, struct terminal *term, int wide, int full, unsigned char *separator )
{
  int eax;
  int edx;
  struct string msg;
  int newlines;
  newlines/*.1_1of4*/ = *(char*)(( separator + strlen( (char*)separator ) ) - 1);
  if ( init_string( &msg ) == 0 )
  {
    return msg.source;
  }
  if ( 0 != 82 )
  {
    if ( term && current_charset != get_terminal_codepage( term ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
      current_charset = get_terminal_codepage( term );
    }
    gettext( "Received" );
  }
  add_to_string( &msg, gettext( "Received" ) );
  add_char_to_string( &msg, 32 );
  add_xnum_to_string( &msg, progress->pos );
  if ( (int)(progress->size << 32) >= 0 )
  {
    add_char_to_string( &msg, 32 );
    if ( 0 != 111 )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      gettext( "of" );
    }
    add_to_string( &msg, gettext( "of" ) );
    add_char_to_string( &msg, 32 );
    add_xnum_to_string( &msg, progress->size );
  }
  newlines = newlines/*.1_1of4*/ == 10;
  add_to_string( &msg, &separator[0] );
  if ( wide )
  {
    if ( *(char*)(newlines != 0 ? "average speed" : "Average speed") )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        *ebp_48 = newlines != 0 ? "average speed" : "Average speed";
        current_charset = get_terminal_codepage( term );
      }
      return (unsigned char*)eax;
    }
    add_to_string( &ebx, &edx );
    add_char_to_string( &msg, 32 );
    add_xnum_to_string( &msg, progress->average_speed );
    add_to_string( &msg, "/s" );
    add_to_string( &msg, ", " );
    if ( *(char*)(full == 0 ? "current speed" : "cur") )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        *ebp_48 = full == 0 ? "current speed" : "cur";
        current_charset = get_terminal_codepage( term );
      }
      return (unsigned char*)eax;
    }
    add_to_string( &ebx, &edx );
    add_char_to_string( &msg, 32 );
    add_xnum_to_string( &msg, progress->current_speed );
    add_to_string( &msg, "/s" );
    add_to_string( &msg, &separator[0] );
    if ( *(char*)(newlines != 0 ? "elapsed time" : "Elapsed time") )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
    }
    add_to_string( &ebx, &edi );
    add_char_to_string( &msg, 32 );
    add_timeval_to_string( &msg, &progress[0].elapsed );
  }
  else
  {
    if ( *(char*)(newlines != 0 ? "speed" : "Speed") )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      gettext( newlines != 0 ? "speed" : "Speed" );
    }
    add_to_string( &msg, gettext( newlines != 0 ? "speed" : "Speed" ) );
    add_char_to_string( &msg, 32 );
    add_xnum_to_string( &msg, progress->average_speed );
    add_to_string( &msg, "/s" );
  }
  if ( (int)(progress->size << 32) >= 0 && (int)(progress->loaded << 32) >= 0 )
  {
    if ( ccdep1 <= ccdep2 )
    {
      if ( (int)(progress->loaded & 0xFFFFFFFF) >= 1 )
      {
      }
    }
    add_to_string( &msg, ", " );
    if ( *(char*)(full == 0 ? "estimated time" : "ETA") )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
    }
    add_to_string( &ebx, &edi );
    add_char_to_string( &msg, 32 );
    add_timeval_to_string( &msg, &progress->estimated_time );
  }
  return msg.source;
}
void draw_progress_bar( struct progress *progress, struct terminal *term, int x, int y, int width, unsigned char *text, struct color_pair *meter_color )
{
  int eax;
  int ecx;
  int percent;
  struct box barprogress;
  if ( (int)(progress->size << 32) < 1 && ( ccdep1 < ccdep2 || (int)(progress->size & 0xFFFFFFFF) < 1 ) )
    (progress->size & 0xFFFFFFFF) = (progress->size & 0xFFFFFFFF);
    percent = 0;
  else
  {
    percent = (int)( 100 * (int)(progress->pos & 0xFFFFFFFF) );
    __divdi3( percent, (/*HI*/int)( 100 * (int)(progress->pos & 0xFFFFFFFF) ) + ( (unsigned int)(progress->pos << 32) * 100 ), (int)( (int)(progress->size & 0xFFFFFFFF) ), (int)( (int)(progress->size << 32) ) );
    percent = percent;
  }
  if ( text[0] || width <= 2 )
    x = x;
  else
  {
    width -= 2;
    draw_text( term, x, y, "[", 1, 0, 0 );
    draw_text( term, x + width, y, "]", 1, 0, 0 );
    x++;
  }
  if ( meter_color == 0 )
  {
    meter_color = get_bfu_color( term, "dialog.meter" );
  }
  barprogress.height = 1;
  barprogress.x = (unsigned char)( ( ( x >> 31 ) & 1 ) ^ 1 ) ? 0 : x;
  barprogress.width = ( width < ( (/*HI*/int)( ( percent * width ) * 0x51eb851f ) >> 5 ) - ( ( percent * width ) >> 31 ) ? ( (/*HI*/int)( ( percent * width ) * 0x51eb851f ) >> 5 ) - ( ( percent * width ) >> 31 ) : width ) < 0 ? width < ( (/*HI*/int)( ( percent * width ) * 0x51eb851f ) >> 5 ) - ( ( percent * width ) >> 31 ) ? ( (/*HI*/int)( ( percent * width ) * 0x51eb851f ) >> 5 ) - ( ( percent * width ) >> 31 ) : width : 0;
  barprogress.y = y < 0 ? y : 0;
  draw_box( term, &barprogress, 32, 0, meter_color );
  if ( text[0] )
  {
    width = (unsigned char)( ( width < strlen( &text[0] ) ) ^ 1 ) ? width : strlen( &text[0] );
  }
  else
  {
    x = x;
    if ( width > 1 )
    {
      static unsigned char s[5] = { '?', '?', '?', '?' };
      unsigned int slen = 0;
      if ( elinks_ulongcat(  ) == 0 )
        slen = slen + 1;
      else
        s[0] = 63;
      s[ 1 ] = 37;
      slen = 2;
      if ( assert_failed == 0 )
      {
        assert_failed = width < slen;
        if ( width < slen )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/dialogs/progress.c";
          errline = 136;
          elinks_internal( "assertion slen &lt;= width failed!" );
          *ebp_28 = ebp_28;
        }
      }
      text[0] = s[0];
      x += text[ width ] >> 1;
      width = ebp_28;
    }
  }
  draw_text( term, x, y, &text[0], width, 0, 0 );
  return;
}
#if 0
#endif
