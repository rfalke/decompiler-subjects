#include "format.c.h"
void get_screen_char_template( struct screen_char *template, struct document_options *options, struct text_style style )
{
  int ecx;
  template->attr = 0;
  template[0].data = 32;
  if ( style.attr )
  {
    if ( ( style.attr & 4 ) & 255 )
      template->attr = 32;
    if ( ( style.attr & 1 ) & 255 )
      template->attr |= 8;
    if ( ( style.attr & 2 ) & 255 )
      template->attr |= 16;
    if ( style.attr & 16 )
      template->attr |= 128;
  }
{
  struct color_pair colors;
  colors.background = style.bg;
  colors.foreground = style.fg;
  set_term_color( &template[0], &colors, options->color_flags, options->color_mode );
  return;
}
}
#if 0
#endif
