#include "screen.c.h"
unsigned char frame_dumb[48] = { ' ', ' ', ' ', '|', '|', '|', '|', '+', '+', '|', '|', '+', '+', '+', '+', '+', '+', '-', '-', '|', '-', '+', '|', '|', '+', '+', '-', '-', '|', '-', '+', '-', '-', '-', '-', '+', '+', '+', '+', '+', '+', '+', '+', ' ', ' ', ' ', ' ', ' ' };
static unsigned char frame_vt100[48] = { 'a', 'a', 'a', 'x', 'u', 'u', 'u', 'k', 'k', 'u', 'x', 'k', 'j', 'j', 'j', 'k', 'm', 'v', 'w', 't', 'q', 'n', 't', 't', 'm', 'l', 'v', 'w', 't', 'q', 'n', 'v', 'v', 'w', 'w', 'm', 'm', 'l', 'l', 'n', 'n', 'j', 'l', 'a', ' ', ' ', ' ', ' ' };
static unsigned char frame_vt100_u[48] = { 177, 177, 177, 179, 180, 180, 180, 191, 191, 180, 179, 191, 217, 217, 217, 191, 192, 193, 194, 195, 196, 197, 195, 195, 192, 218, 193, 194, 195, 196, 197, 193, 193, 194, 194, 192, 192, 218, 218, 197, 197, 217, 218, 177, ' ', ' ', ' ', ' ' };
static unsigned char frame_freebsd[48] = { 130, 138, 128, 153, 150, 150, 150, 140, 140, 150, 153, 140, 139, 139, 139, 140, 142, 151, 152, 149, 146, 143, 149, 149, 142, 141, 151, 152, 149, 146, 143, 151, 151, 152, 152, 142, 142, 141, 141, 143, 143, 139, 141, 128, 128, 128, 128, 128 };
static unsigned char frame_freebsd_u[48] = { 177, 177, 219, 179, 180, 180, 180, 191, 191, 180, 179, 191, 217, 217, 217, 191, 192, 193, 194, 195, 196, 197, 195, 195, 192, 218, 193, 194, 195, 196, 197, 193, 193, 194, 194, 192, 192, 218, 218, 197, 197, 217, 218, 219, 219, 219, 219, 219 };
static unsigned char frame_koi[48] = { 144, 145, 146, 129, 135, 178, 180, 167, 166, 181, 161, 168, 174, 173, 172, 131, 132, 137, 136, 134, 128, 138, 175, 176, 171, 165, 187, 184, 177, 160, 190, 185, 186, 182, 183, 170, 169, 162, 164, 189, 188, 133, 130, 141, 140, 142, 143, 139 };
static unsigned char frame_restrict[48] = { 176, 177, 178, 179, 180, 179, 186, 186, 205, 185, 186, 187, 188, 186, 205, 191, 192, 193, 194, 195, 196, 197, 179, 186, 200, 201, 202, 203, 204, 205, 206, 205, 196, 205, 196, 186, 205, 205, 186, 186, 179, 217, 218, 219, 220, 221, 222, 223 };
static struct string m11_hack_frame_seqs[2] = { { "\033[10m", 5 }
, { "\033[11m", 5 }
 };
static struct string vt100_frame_seqs[2] = { { "", 1 }
, { "", 1 }
 };
static struct string underline_seqs[2] = { { "\033[24m", 5 }
, { "\033[4m", 4 }
 };
static struct screen_driver_opt dumb_screen_driver_opt = { { -1, -1 }, frame_dumb, 0, underline_seqs, 1, 1 };
static struct screen_driver_opt vt100_screen_driver_opt = { { -1, -1 }, frame_vt100, vt100_frame_seqs, underline_seqs, 1, 1 };
static struct screen_driver_opt linux_screen_driver_opt = { { -1, -1 }, 0, 0, underline_seqs, 1, 1 };
static struct screen_driver_opt koi8_screen_driver_opt = { { -1, -1 }, frame_koi, 0, underline_seqs, 1, 1 };
static struct screen_driver_opt freebsd_screen_driver_opt = { { -1, -1 }, frame_freebsd, 0, underline_seqs, 1, 1 };
static struct screen_driver_opt *screen_driver_opts[5] = { &dumb_screen_driver_opt, &vt100_screen_driver_opt, &linux_screen_driver_opt, &koi8_screen_driver_opt, &freebsd_screen_driver_opt };
static struct list_head_elinks active_screen_drivers = { &active_screen_drivers, &active_screen_drivers };
static struct string color256_seqs[2] = { { "\033[0;38;5;%dm", 12 }
, { "\033[48;5;%dm", 10 }
 };
struct module terminal_screen_module = { "Terminal Screen", 0, 0, 0, 0, 0, &done_screen_drivers };
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  int ecx;
  int edx;
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string && length >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( length )
    {
      if ( ( ( string->length + 255 ) & -256 ) < ( ( string->length + length + 256 ) & -256 ) )
      {
        ebp_32 = bytes[0];
        *ebp_36 = length;
        if ( mem_realloc( (void*)string->source, length ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, length );
          memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( string->length + length + 256 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, &bytes[0], length );
        string->length += length;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
void set_screen_driver_opt( struct screen_driver *driver, struct option_elinks *term_spec )
{
  int cp = *(int*)(get_opt_( &term_spec[0], "charset" ));
  int utf8_io = *(int*)(get_opt_( &term_spec[0], "utf_8_io" ));
  driver->opt.charsets[0] = screen_driver_opts[ driver->type ][0].charsets[0];
  driver->opt.charsets[1] = screen_driver_opts[ driver->type ]->charsets[1];
  driver->opt.frame = screen_driver_opts[ driver->type ]->frame;
  driver->opt.frame_seqs = screen_driver_opts[ driver->type ]->frame_seqs;
  driver->opt.underline = screen_driver_opts[ driver->type ]->underline;
  driver->opt.color_mode = screen_driver_opts[ driver->type ]->color_mode;
  driver->opt.bits_at_24 = screen_driver_opts[ driver->type ]->bits_at_24;
  if ( is_cp_utf8( cp ) )
  {
    driver->opt.bits_at_24/*.1_1of4*/ |= 2;
    utf8_io = 1;
  }
  else
    driver->opt.bits_at_24/*.1_1of4*/ &= 253;
  driver->opt.color_mode = *(int*)(get_opt_( &term_spec[0], "colors" ));
  driver->opt.bits_at_24/*.1_1of4*/ = ( (int)driver->opt.bits_at_24/*.1_1of4*/ & -2 ) | ( *(int*)(get_opt_( *(int*)(get_opt_( &term_spec[0], "colors" )), *(int*)(get_opt_( &term_spec[0], "colors" )) )) & 1 );
  driver->opt.underline = *(int*)(get_opt_( ( (int)driver->opt.bits_at_24/*.1_1of4*/ & -2 ) | ( *(int*)(get_opt_( *(int*)(get_opt_( &term_spec[0], "colors" )), *(int*)(get_opt_( &term_spec[0], "colors" )) )) & 1 ), ( (int)driver->opt.bits_at_24/*.1_1of4*/ & -2 ) | ( *(int*)(get_opt_( *(int*)(get_opt_( &term_spec[0], "colors" )), *(int*)(get_opt_( &term_spec[0], "colors" )) )) & 1 ) )) != 0 ? 0 : underline_seqs;
  if ( utf8_io )
  {
    driver->opt.charsets[0] = cp;
    driver->opt.frame_seqs = 0;
    if ( driver->type == TERM_LINUX )
    {
      if ( *(int*)(get_opt_( &term_spec[0], "restrict_852" )) )
        driver->opt.frame = frame_restrict;
    }
    else
    if ( driver->type == TERM_FREEBSD )
      driver->opt.frame = frame_freebsd_u;
    else
    {
      if ( driver->type == TERM_VT100 )
      {
        driver->opt.frame = frame_vt100_u;
        driver->opt.charsets[1] = get_cp_index( "cp437" );
      }
      else
      {
        term_spec = &term_spec[0];
        if ( driver->type == TERM_KOI8 )
        {
          driver->opt.charsets[1] = get_cp_index( "koi8-r" );
        }
        else
        {
          if ( ( driver->opt.bits_at_24/*.1_1of4*/ & 2 ) & 255 )
          {
            driver->opt.charsets[1] = get_cp_index( "US-ASCII" );
          }
          else
          {
            driver->opt.charsets[1] = cp;
          }
        }
      }
    }
    driver->opt.charsets[1] = get_cp_index( "cp437" );
    return;
  }
  else
  {
    driver->opt.charsets[0] = -1;
    if ( driver->type == TERM_LINUX )
    {
      if ( *(int*)(get_opt_( &term_spec[0], "restrict_852" )) )
        driver->opt.frame = frame_restrict;
    }
    else
    if ( driver->type != TERM_FREEBSD )
    {
      if ( driver->type == TERM_VT100 )
      {
        driver->opt.frame = frame_vt100;
        return;
      }
    }
    if ( *(int*)(get_opt_( &term_spec[0], "m11_hack" )) )
    {
      driver->opt.frame_seqs = m11_hack_frame_seqs;
    }
  }
  return;
}
int screen_driver_change_hook( struct session *ses, struct option_elinks *term_spec, struct option_elinks *changed )
{
  int eax;
  int edx;
  enum term_mode_type  type;
  struct screen_driver *driver = &active_screen_drivers.next[0];
  unsigned char *name;
  type = *(int*)(get_opt_( term_spec, (unsigned char*)term_spec ));
  name[0] = term_spec->name;
  if ( active_screen_drivers.next != active_screen_drivers.next )
  {
    do
    {
      if ( driver->type == type && strcmp( &driver->name[0], &name[0] ) == 0 )
      {
        set_screen_driver_opt( &driver[0], term_spec );
        break;
      }
      driver = &driver;
    }
    while ( driver->next != active_screen_drivers.next );
  }
  return 0;
}
void done_screen_drivers( struct module *xxx )
{
{
  struct xlist_head *head = &active_screen_drivers.next[0], *next;
  if ( active_screen_drivers.next != active_screen_drivers.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != active_screen_drivers.next );
  }
  head = &active_screen_drivers.prev[0];
  if ( active_screen_drivers.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &active_screen_drivers.next[0];
  if ( head[0].next != active_screen_drivers.next )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
  }
  return;
}
}
void redraw_screen( struct terminal *term )
{
  int eax;
  int ecx;
  int edx;
  int ebp_148;
  int ebp_132;
  int ebp_128;
  int ebp_112;
  int ebp_96;
  int ebp_60;
  struct screen_driver *driver;
  struct string image;
  struct terminal_screen *screen = term->screen;
  if ( term->screen && term->screen->dirty_from <= term->screen->dirty_to )
  {
    if ( ( ( *(char*)(term + 56) & 1 ) & 255 ) == 0 || is_blocked(  ) == 0 )
    {
      driver = &active_screen_drivers.next[0];
      if ( active_screen_drivers.next != active_screen_drivers.next )
      {
        do
        {
          if ( driver->type == *(int*)(get_opt_( term->spec, (unsigned char*)term->spec )) && strlen( (char*)term->spec->name ) == 0 )
          {
            if ( active_screen_drivers.next != driver[0].next )
            {
              driver->prev = driver->prev;
              &driver->prev = &driver;
              driver->prev = &active_screen_drivers.next[0];
              driver = &active_screen_drivers.next[0];
              active_screen_drivers.next = (void*)driver[0].next;
              driver->prev = &driver[0];
            }
            term->bits_at_56/*.1_1of4*/ = ( *(char*)(term + 56) & -3 ) | ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 );
            term->bits_at_56/*.1_1of4*/ = ( ( ( *(char*)(term + 56) & -3 ) | ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) ) & -5 ) | ( ( driver->opt.charsets[0] != -1 ) << 2 );
            if ( init_string( &image ) )
            {
              switch ( driver->opt.color_mode )
              {
              default:
                if ( is_blocked(  ) != 3 )
                {
                  if ( driver->opt.color_mode != COLOR_MODES )
                  {
                    struct terminal_screen *screen = term->screen;
                    int y = term->screen->dirty_from;
                    int prev_y, xmax = term->width - 1, ymax = term->height - 1;
                    struct screen_char *current, *pos, *prev_pos;
                    prev_y = screen->last_image;
                    if ( ymax < screen->dirty_to )
                      screen->dirty_to = ymax;
                    if ( y <= screen->dirty_to )
                    {
                      ebp_148 = term->screen->dirty_from + 1;
                      ebp_96 = 255;
                      prev_pos = 0;
                      current = prev_y + ( ( term->width * term->screen->dirty_from ) << 3 );
                      pos = &prev_pos[ term->width * term->screen->dirty_from ];
                      ebp_112 = 255;
                      prev_y = -1;
                      do
                      {
                        if ( xmax >= 0 && ( ebp_148 != ymax || ebp_140 ) )
                        {
                          ebp_128 = 1;
                          prev_pos = &prev_pos[0];
                          do
                          {
                            if ( ( ( ( pos->color[0] >> 4 ) ^ ( current->color[0] >> 4 ) ) & 7 ) == 0 )
                            {
                              if ( ( (unsigned char)( pos->color[0] ^ current->color[0] ) & 7 ) & 255 )
                                pos->data = pos[0].data;
                              else
                              if ( *ebp_132 == *ebp_116 && *(char*)(ebp_116 + 4) == *(char*)(ebp_132 + 4) )
                              {
                                current++;
                                pos++;
                              }
                              if ( pos[0].data <= 32 && current[0].data <= 32 )
                              {
                                if ( pos->attr != current->attr )
                                  prev_pos = &prev_pos[0];
                              }
                            }
                            if ( ebp_148 == prev_y && pos < prev_pos[10].data )
                            {
                              if ( prev_pos[0].data <= pos )
                              {
                                do
                                {
                                  prev_y/*.1_1of4*/ = prev_pos->attr & 32;
                                  if ( !( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) || prev_pos->data != -3 )
                                  {
                                    if ( (unsigned char)( -128 & prev_pos->attr ) != 255 )
                                    {
                                      if ( driver->opt.frame_seqs )
                                      {
                                        if ( assert_failed == 0 )
                                        {
                                          if ( driver->opt.color_mode == 0 || driver->opt.color_mode < 0 )
                                          {
                                            assert_failed = 1;
                                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                                            errline = 255;
                                            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                                            if ( assert_failed == 0 )
                                            {
                                              if ( edx == 0 )
                                                edi = -128 & prev_pos->attr;
                                            }
                                          }
                                          else
                                          {
                                            assert_failed = 0;
                                            if ( driver->opt.color_mode == 0 )
                                              continue;
                                          }
                                          if ( 0 < 0 )
                                          {
                                            *ebp_176 = ebp_176;
                                            *ebp_180 = ebp_180;
                                            if ( mem_realloc( (void*)image.source, 0 ) )
                                            {
                                              image.source = (unsigned char*)mem_realloc( (void*)image.source, 0 );
                                              memset( image.source + 0, 0, 0 - 0 );
                                            }
                                          }
                                          if ( image.source )
                                          {
                                            memcpy( image.length + eax, &ecx, edx );
                                            image.source[ ebp_120 ] = 0;
                                            image.length = ebp_120;
                                          }
                                        }
                                        assert_failed = 0;
                                      }
                                      if ( ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) & 255 )
                                      {
                                        if ( prev_pos->data != -3 )
                                        {
                                          if ( ebp_96 != prev_y/*.1_1of4*/ )
                                          {
                                            if ( driver->opt.underline )
                                            {
                                              if ( assert_failed == 0 )
                                              {
                                                if ( *(int*)(-128 & prev_pos->attr) == 0 || *(int*)(( -128 & prev_pos->attr ) + 4) < 0 )
                                                {
                                                  assert_failed = 1;
                                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                                                  errline = 255;
                                                  elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                                                  if ( assert_failed == 0 )
                                                  {
                                                    if ( edx == 0 )
                                                    {
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  assert_failed = 0;
                                                  if ( *(int*)(( -128 & prev_pos->attr ) + 4) == 0 )
                                                    continue;
                                                }
                                                ebp_96 = 0;
                                                if ( 0 < 0 )
                                                {
                                                  *ebp_176 = ebp_176;
                                                  *ebp_180 = ebp_180;
                                                  if ( mem_realloc( (void*)image.source, 0 ) )
                                                  {
                                                    image.source = (unsigned char*)mem_realloc( (void*)image.source, 0 );
                                                    memset( ebp_96 + image.source, 0, 0 - ebp_96 );
                                                  }
                                                }
                                                if ( image.source )
                                                {
                                                  memcpy( image.length + eax, &ecx, edx );
                                                  image.source[ ebp_120 ] = 0;
                                                  image.length = ebp_120;
                                                  ebp_96 = 0;
                                                }
                                              }
                                              assert_failed = 0;
                                              ebp_96 = prev_y/*.1_1of4*/;
                                            }
                                            if ( ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) & 255 )
                                            {
                                              if ( prev_pos->data != -3 )
                                              {
                                                if ( (unsigned char)( prev_pos->attr & 8 ) != 255 )
                                                {
                                                  if ( (unsigned char)( prev_pos->attr & 8 ) & 255 )
                                                  {
                                                    if ( assert_failed )
                                                      assert_failed = 0;
                                                    else
                                                    {
                                                      assert_failed = 0;
                                                      image.length = image.length + 260;
                                                      if ( 0 < 0 )
                                                      {
                                                        *ebp_180 = 0;
                                                        if ( mem_realloc( (void*)image.source, 0 ) )
                                                        {
                                                          image.source = (unsigned char*)mem_realloc( (void*)image.source, 0 );
                                                          memset( image.source + 0, 0, 0 - 0 );
                                                          *ebp_176 = image.length;
                                                          if ( image.source )
                                                          {
                                                            *(char*)(image.source + ebp_176 + 4) = 0;
                                                            image.length += 4;
                                                          }
                                                        }
                                                      }
                                                      else
                                                      if ( image.source )
                                                      {
                                                        *(char*)(image.source + ebp_176 + 4) = 0;
                                                        image.length += 4;
                                                      }
                                                    }
                                                  }
                                                  else
                                                    ebp_112 = prev_pos->color[0] + 1;
                                                }
                                                if ( !( ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) & 255 ) || prev_pos->data != -3 )
                                                {
                                                  if ( ebp_112 != prev_pos->color[0] )
                                                  {
                                                    if ( assert_failed )
                                                    {
                                                      assert_failed = 0;
                                                      if ( driver->opt.color_mode )
                                                      {
                                                        if ( ( ( *(char*)(prev_pos[0].data + 5) >> 4 ) & 7 ) || ( ( driver->opt.bits_at_24/*.1_1of4*/ & 1 ) & 255 ) == 0 )
                                                          add_bytes_to_string__( &image, ebp_66, 6 );
                                                          if ( ebp_92 && driver->opt.underline )
                                                          {
                                                            if ( assert_failed )
                                                              assert_failed = 0;
                                                            else
                                                            {
                                                              assert_failed = 0;
                                                              ebp_112 = image.length + 2;
                                                              image.length = image.length + 258;
                                                              if ( 0 < 0 )
                                                              {
                                                                *ebp_176 = 0;
                                                                if ( mem_realloc( (void*)image.source, image.length ) )
                                                                {
                                                                  image.source = (unsigned char*)mem_realloc( (void*)image.source, image.length );
                                                                  memset( image.source + 0, 0, 0 - 0 );
                                                                }
                                                              }
                                                              if ( image.source )
                                                              {
                                                                *(char*)(image.source + image.length + 2) = 0;
                                                                image.length = ebp_112;
                                                              }
                                                            }
                                                          }
                                                          if ( (unsigned char)( prev_pos->attr & 8 ) )
                                                            add_bytes_to_string__( &image, ";1", 2 );
                                                          add_bytes_to_string__( &image, "m", 1 );
                                                          ebp_112 = prev_pos->color[0];
                                                          if ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 )
                                                          {
                                                            if ( -128 & prev_pos->attr & 255 )
                                                              cp2u( driver->opt.charsets[1], -3 );
                                                            prev_pos = &prev_pos[0];
                                                            if ( eax != -3 )
                                                            {
                                                              add_to_string( &image, (unsigned char*)eax );
                                                            }
                                                          }
                                                          else
                                                          if ( driver->opt.charsets[0] != -1 )
                                                          {
                                                            *(int*)(*(int*)(driver[0].next + ( ~( 0 - ( ( ( edi & 255 ) < ( 1 & 255 ) ) & 1 ) ) & 4 ) + 12)) = *(int*)(driver[0].next + ( ~( 0 - ( ( ( -128 & prev_pos->attr & 255 ) < ( 1 & 255 ) ) & 1 ) ) & 4 ) + 12);
                                                            if ( ( -128 & prev_pos->attr & 255 ) || ( eax != 127 && eax > 31 ) )
                                                            {
                                                              add_to_string( &edi, (unsigned char*)eax );
                                                              prev_pos++;
                                                              if ( prev_pos[0].data <= pos )
                                                                continue;
                                                              else
                                                            }
                                                            else
                                                              add_char_to_string( &image, 32 );
                                                          }
                                                          else
                                                          if ( ( -128 & prev_pos->attr & 255 ) || ( -3 != 127 && -3 > 31 ) )
                                                            add_char_to_string( &image, -3 );
                                                          else
                                                            add_char_to_string( &image, 32 );
                                                          prev_pos++;
                                                        else
                                                          add_bytes_to_string__( &image, ebp_66, 3 );
                                                      }
                                                    }
                                                    else
                                                    {
                                                      assert_failed = 0;
                                                      image.length = image.length + 259;
                                                      ebp_112 = 0;
                                                      if ( 0 < 0 )
                                                      {
                                                        *ebp_180 = 0;
                                                        if ( mem_realloc( (void*)image.source, 0 ) )
                                                        {
                                                          image.source = (unsigned char*)mem_realloc( (void*)image.source, 0 );
                                                          memset( ebp_112 + image.source, 0, 0 - ebp_112 );
                                                        }
                                                        else
                                                        {
                                                          if ( driver->opt.color_mode )
                                                          {
                                                          }
                                                        }
                                                      }
                                                      if ( image.source )
                                                      {
                                                        *(char*)(image.source + image.length + 3) = 0;
                                                        image.length += 3;
                                                      }
                                                    }
                                                    if ( ( *(char*)(prev_pos[0].data + 4) & 64 ) & 255 )
                                                      add_bytes_to_string__( &image, ";7", 2 );
                                                  }
                                                  else
                                                  {
                                                  }
                                                }
                                              }
                                            }
                                            else
                                              prev_pos = &prev_pos[0];
                                          }
                                          ebp_96 = 0;
                                          if ( ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) & 255 )
                                          {
                                          }
                                        }
                                      }
                                      else
                                        prev_pos = &prev_pos[0];
                                    }
                                    if ( ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) & 255 )
                                    {
                                    }
                                  }
                                }
                                while ( pos < prev_pos[1].data );
                              }
                            }
                            else
                            {
                              ebp_60 = 2;
                              if ( elinks_ulongcat( ebp_53, ebp_60, ebp_148, 10, 0, 10, 0 ) >= 0 )
                              {
                                *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 59;
                                ebp_60++;
                                if ( elinks_ulongcat(  ) >= 0 )
                                {
                                  *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 72;
                                  ebp_60++;
                                  add_bytes_to_string__( &image, ebp_53, ebp_60 + 1 );
                                }
                              }
                            {
                              struct terminal_screen *screen;
                              int y;
                              int prev_y, xmax, ymax;
                              struct screen_char *current, *pos, *prev_pos;
                            }
                            }
                            prev_y = ebp_148 - 1;
                          }
                          while ( xmax < ebp_128 || ( ebp_136 == xmax && ebp_169 ) );
                        }
                        ebp_148++;
                      }
                      while ( ebp_148 <= screen->dirty_to );
                    }
                    else
                    {
                    }
                  }
                  else
                }
                else
                {
                  if ( term->height - 1 < term->screen->dirty_to )
                  {
                    term->screen->dirty_to = term->height - 1;
                    *ebp_168 = term->height - 1;
                  }
                  if ( term->screen->dirty_from <= term->height - 1 )
                  {
                    ebp_148 = term->screen->dirty_from + 1;
                    ebp_132 = term->screen->last_image + ( ( term->width * term->screen->dirty_from ) << 3 );
                    ebp_112 = term->screen->image + ( ( term->width * term->screen->dirty_from ) << 3 );
                    ebp_96 = 255;
                    do
                    {
                      if ( term->width - 1 >= 0 && ( ebp_148 != term->height - 1 || ( term->width - 1 ) ) )
                      {
                        ebp_128 = 1;
                        do
                        {
                          if ( *(char*)(ebp_112 + 6) == *(char*)(ebp_132 + 6) )
                          {
                            if ( *(char*)(ebp_112 + 5) != *(char*)(ebp_132 + 5) )
                            {
                            }
                            else
                            if ( *ebp_132 == *ebp_112 && *(char*)(ebp_112 + 4) == *(char*)(ebp_132 + 4) )
                            {
                              ebp_132 += 8;
                              ebp_112 += 8;
                            }
                            if ( *(char*)(ebp_53 + 5) <= 32 && *ebp_132 <= 32 && *(char*)(ebp_112 + 4) == *(char*)(ebp_132 + 4) )
                              continue;
                          }
                          if ( ebp_144 == eax && ebp_112 < 0 + 80 )
                          {
                            if ( 0 + 8 <= ebp_112 )
                            {
                              while ( 1 )
                              {
                                *(int*)(*(char*)(esi + 4)) = *(char*)(0 + 4);
                                if ( !( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) || *(int*)(0) != -3 )
                                {
                                  if ( (unsigned char)( *(char*)(0 + 4) ^ 0 ) )
                                  {
                                    if ( (unsigned char)( eax ^ ebp_108 ) < 0 && driver->opt.frame_seqs )
                                    {
                                      add_bytes_to_string__( &image, driver->opt.frame_seqs[ *(char*)(0 + 4) >> 7 ].source, driver->opt.frame_seqs[ *(char*)(0 + 4) >> 7 ].length );
                                    }
                                    else
                                    {
                                    }
                                    if ( ( (unsigned char)( *(char*)(0 + 4) ^ 0 ) & 32 ) && driver->opt.underline )
                                    {
                                      add_bytes_to_string__( &image, *(int*)(driver->opt.underline + ( ( *(char*)(0 + 4) >> 2 ) & 8 )), *(int*)(driver->opt.underline + ( ( *(char*)(0 + 4) >> 2 ) & 8 ) + 4) );
                                    }
                                    if ( ( ebp_92 & 8 ) & 255 )
                                    {
                                      if ( ( *(char*)(0 + 4) & 8 ) & 255 )
                                      {
                                        add_bytes_to_string__( &image, "\033[1m", 4 );
                                        *(int*)(*(char*)(esi + 4)) = *(char*)(esi + 4);
                                      }
                                      else
                                        ebp_96 = *(char*)(0 + 5) + 1;
                                    }
                                  }
                                  if ( !(unsigned char)( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) || *(int*)(0) != -3 )
                                  {
                                    *(int*)(esi + 5) = 0 + 5;
                                    if ( ebp_96 == *(char*)(0 + 5) )
                                    {
                                      if ( ebp_100 == *(char*)(&eax->source[1]) )
                                      {
                                        if ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 )
                                        {
                                          if ( ebp_92 )
                                            cp2u( driver->opt.charsets[1], -3 );
                                          if ( eax != -3 )
                                          {
                                            add_to_string( &image, (unsigned char*)eax );
                                          }
                                        }
                                        else
                                        if ( driver->opt.charsets[0] != -1 )
                                        {
                                          *(int*)(*(int*)(driver[0].next + ( ~( 0 - ( ( ebp_92 < ( 1 & 255 ) ) & 1 ) ) & 4 ) + 12)) = *(int*)(driver[0].next + ( ~( 0 - ( ( ebp_92 < ( 1 & 255 ) ) & 1 ) ) & 4 ) + 12);
                                          if ( ebp_92 || ( eax != 127 && eax > 31 ) )
                                          {
                                            add_to_string( &image, (unsigned char*)eax );
                                            if ( ebp_112 < esi )
                                            {
                                            }
                                            else
                                            {
                                            }
                                          }
                                          else
                                            add_char_to_string( &image, 32 );
                                        }
                                        else
                                        if ( ebp_92 || ( -3 != 127 && -3 > 31 ) )
                                          add_char_to_string( &image, -3 );
                                        else
                                          add_char_to_string( &image, 32 );
                                        if ( ebp_112 < esi + 8 )
                                        {
                                        }
                                        else
                                        {
                                        }
                                      }
                                    }
                                    else
                                    {
                                      struct terminal_screen *screen;
                                      int y;
                                      int prev_y, xmax, ymax;
                                      struct screen_char *current, *pos, *prev_pos;
                                    }
                                    ebp_96 = 2;
                                    if ( 27 != '%' )
                                    {
                                      do
                                      {
                                      }
                                      while ( 27 != '%' );
                                      ebp_96 = 0 + 1 + 2;
                                    }
                                    add_bytes_to_string__( &image, "\033[0;38;5;%dm" );
                                    add_bytes_to_string__( &image, ebp_65 );
                                    add_bytes_to_string__( &image, ebp_96 + "\033[0;38;5;%dm", 12 - ( 0 + 1 + 2 ) );
                                    if ( ( driver->opt.bits_at_24/*.1_1of4*/ & 1 ) & 255 )
                                    {
                                      ebp_96 = *(char*)(0 + 6);
                                      if ( *(char*)(0 + 6) == 0 )
                                      {
                                        if ( *(char*)(0 + 4) & 8 )
                                        {
                                          add_bytes_to_string__( &image, "\033[1m", 4 );
                                        }
                                        ebp_96 = *(char*)(0 + 5);
                                      }
                                    }
                                    else
                                      ebp_96 = *(char*)(esi + 6);
                                    if ( '%' != 27 )
                                    {
                                      do
                                      {
                                      }
                                      while ( '[' != 0 + 1 );
                                    }
                                    add_bytes_to_string__( &image, "\033[48;5;%dm" );
                                    add_bytes_to_string__( &image, ebp_66 );
                                    add_bytes_to_string__( &image, "\033[48;5;%dm", 0 + 1 + 2 );
                                  }
                                  else
                                  {
                                  }
                                }
                              }
                            }
                          }
                          else
                          {
                            ebp_60 = 2;
                            if ( elinks_ulongcat( ebp_60, ebp_53, ebp_60, ebp_148, 10, 0, 10 ) >= 0 )
                            {
                              *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 59;
                              ebp_60++;
                              if ( elinks_ulongcat( ebp_53, ebp_53, ebp_60, ebp_128, 10, 0, 10 ) >= 0 )
                              {
                                *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 72;
                                ebp_60++;
                                add_bytes_to_string__( &image, ebp_53, ebp_60 + 1 );
                              }
                            }
                          }
                        }
                        while ( term->width - 1 < ebp_128 || ( ebp_140 == term->width - 1 && ebp_169 ) );
                      }
                      ebp_148++;
                    }
                    while ( ebp_148 <= term->screen->dirty_to );
                  }
                }
                break;
              case COLOR_MODE_88:
                if ( term->height - 1 < term->screen->dirty_to )
                  term->screen->dirty_to = term->height - 1;
                if ( term->screen->dirty_from <= term->screen->dirty_to )
                {
                  ebp_148 = term->screen->dirty_from + 1;
                  ebp_132 = term->screen->last_image + ( ( term->width * term->screen->dirty_from ) << 3 );
                  ebp_112 = term->screen->image + ( ( term->width * term->screen->dirty_from ) << 3 );
                  ebp_96 = 255;
                  do
                  {
                    if ( term->width - 1 >= 0 )
                    {
                      if ( ebp_148 != term->height - 1 || ( term->width - 1 ) )
                      {
                        ebp_128 = 1;
                        do
                        {
                          if ( *(char*)(ebp_112 + 6) == *(char*)(ebp_132 + 6) )
                          {
                            if ( *(char*)(ebp_112 + 5) != *(char*)(ebp_132 + 5) )
                            {
                            }
                            else
                            if ( *ebp_132 == *ebp_112 && *(char*)(ebp_112 + 4) == *(char*)(ebp_132 + 4) )
                            {
                              ebp_132 += 8;
                              ebp_112 += 8;
                            }
                            if ( *(char*)(ebp_53 + 5) <= 32 && *ebp_132 <= 32 && *(char*)(ebp_112 + 4) == *(char*)(ebp_132 + 4) )
                              continue;
                          }
                          if ( ebp_148 - 1 == ( ( term->screen->dirty_from + 1 ) | -1 ) && ebp_112 < 0 + 80 )
                          {
                            if ( 0 + 8 <= ebp_112 )
                            {
                              while ( 1 )
                              {
                                *(int*)(*(char*)(esi + 4)) = *(char*)(0 + 4);
                                if ( !( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) || *(int*)(0) != -3 )
                                {
                                  if ( (unsigned char)( *(char*)(0 + 4) ^ 0 ) )
                                  {
                                    if ( (unsigned char)( eax ^ ebp_108 ) < 0 && driver->opt.frame_seqs )
                                    {
                                      add_bytes_to_string__( &image, driver->opt.frame_seqs[ *(char*)(0 + 4) >> 7 ].source, driver->opt.frame_seqs[ *(char*)(0 + 4) >> 7 ].length );
                                    }
                                    else
                                    {
                                    }
                                    if ( ( (unsigned char)( *(char*)(0 + 4) ^ 0 ) & 32 ) && driver->opt.underline )
                                    {
                                      add_bytes_to_string__( &image, *(int*)(driver->opt.underline + ( ( *(char*)(0 + 4) >> 2 ) & 8 )), *(int*)(driver->opt.underline + ( ( *(char*)(0 + 4) >> 2 ) & 8 ) + 4) );
                                    }
                                    if ( ( ebp_92 & 8 ) & 255 )
                                    {
                                      if ( ( *(char*)(0 + 4) & 8 ) & 255 )
                                      {
                                        add_bytes_to_string__( &image, "\033[1m", 4 );
                                        *(int*)(*(char*)(esi + 4)) = *(char*)(esi + 4);
                                      }
                                      else
                                        ebp_96 = *(char*)(0 + 5) + 1;
                                    }
                                  }
                                  if ( !(unsigned char)( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) || *(int*)(0) != -3 )
                                  {
                                    *(int*)(esi + 5) = 0 + 5;
                                    if ( ebp_96 != *(char*)(0 + 5) )
                                    {
                                    }
                                    else
                                    if ( ebp_100 == *(char*)(&eax->source[1]) )
                                    {
                                      if ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 )
                                      {
                                        if ( ebp_92 )
                                          cp2u( driver->opt.charsets[1], -3 );
                                        if ( eax != -3 )
                                        {
                                          add_to_string( &image, (unsigned char*)eax );
                                        }
                                      }
                                      else
                                      if ( driver->opt.charsets[0] != -1 )
                                      {
                                        *(int*)(*(int*)(driver[0].next + ( ~( 0 - ( ( ebp_92 < ( 1 & 255 ) ) & 1 ) ) & 4 ) + 12)) = *(int*)(driver[0].next + ( ~( 0 - ( ( ebp_92 < ( 1 & 255 ) ) & 1 ) ) & 4 ) + 12);
                                        if ( ebp_92 || ( eax != 127 && eax > 31 ) )
                                        {
                                          add_to_string( &image, (unsigned char*)eax );
                                          if ( ebp_112 < esi )
                                          {
                                          }
                                          else
                                          {
                                          }
                                        }
                                        else
                                          add_char_to_string( &image, 32 );
                                      }
                                      else
                                      if ( ebp_92 || ( -3 != 127 && -3 > 31 ) )
                                        add_char_to_string( &image, -3 );
                                      else
                                        add_char_to_string( &image, 32 );
                                      if ( ebp_112 < esi + 8 )
                                      {
                                      }
                                      else
                                      {
                                      }
                                    }
                                    ebp_96 = 2;
                                    if ( 27 != '%' )
                                    {
                                      do
                                      {
                                      }
                                      while ( 27 != '%' );
                                      ebp_96 = 0 + 1 + 2;
                                    }
                                    add_bytes_to_string__( &image, "\033[0;38;5;%dm" );
                                    add_bytes_to_string__( &image, ebp_65 );
                                    add_bytes_to_string__( &image, ebp_96 + "\033[0;38;5;%dm", 12 - ( 0 + 1 + 2 ) );
                                    if ( ( driver->opt.bits_at_24/*.1_1of4*/ & 1 ) & 255 )
                                    {
                                      ebp_96 = *(char*)(0 + 6);
                                      if ( *(char*)(0 + 6) == 0 )
                                      {
                                        if ( *(char*)(0 + 4) & 8 )
                                        {
                                          add_bytes_to_string__( &image, "\033[1m", 4 );
                                        }
                                        ebp_96 = *(char*)(0 + 5);
                                      }
                                    }
                                    else
                                      ebp_96 = *(char*)(esi + 6);
                                    if ( '%' != 27 )
                                    {
                                      do
                                      {
                                      }
                                      while ( '[' != 0 + 1 );
                                    }
                                    add_bytes_to_string__( &image, "\033[48;5;%dm" );
                                    add_bytes_to_string__( &image, ebp_66 );
                                    add_bytes_to_string__( &image, "\033[48;5;%dm", 0 + 1 + 2 );
                                  }
                                  else
                                  {
                                  }
                                }
                              }
                            }
                          }
                          else
                          {
                            ebp_60 = 2;
                            if ( elinks_ulongcat( ebp_60, ebp_53, ebp_60, ebp_148, 10, 0, 10 ) >= 0 )
                            {
                              *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 59;
                              ebp_60++;
                              if ( elinks_ulongcat( ebp_53, ebp_53, ebp_60, ebp_128, 10, 0, 10 ) >= 0 )
                              {
                                *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 72;
                                ebp_60++;
                                add_bytes_to_string__( &image, ebp_53, ebp_60 + 1 );
                              }
                            }
                          }
                        }
                        while ( term->width - 1 < ebp_128 || ( ebp_148 == term->width && ebp_169 ) );
                      }
                      else
                      {
                      }
                    }
                    ebp_148++;
                  }
                  while ( ebp_148 <= term->screen->dirty_to );
                }
                break;
              case COLOR_MODE_DUMP:
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/screen.c";
                errline = 1091;
                elinks_internal( "Invalid color mode (%d)." );
                if ( 0 ^ 0 )
                {
                  __stack_chk_fail(  );
                }
                break;
                break;
              }
              if ( image.length )
              {
                if ( driver->opt.color_mode )
                  add_bytes_to_string__( &image, "\033[37;40m", 8 );
                add_bytes_to_string__( &image, "\033[0m", 4 );
                if ( (unsigned char)( image.source ) && driver->opt.frame_seqs )
                  add_bytes_to_string__( &image, driver->opt.frame_seqs->source, driver->opt.frame_seqs->length );
                if ( image.length )
                  screen->cy = screen->cy;
                  screen->lcy = screen->cy;
                  screen->lcx = screen->cx;
                  ebp_60 = 2;
                  if ( elinks_ulongcat(  ) >= 0 )
                  {
                    *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 59;
                    ebp_60++;
                    if ( elinks_ulongcat( screen->lcx + 1, ebp_53, ebp_60, screen->lcx + 1, 10, 0, 10 ) >= 0 )
                    {
                      *(char*)(( ebp_60 + ebp_2147483632 ) - 53) = 72;
                      ebp_60++;
                      add_bytes_to_string__( &image, ebp_53, ebp_60 + 1 );
                      if ( image.length )
                      {
                        if ( ( ( *(char*)(term + 56) & 1 ) & 255 ) == 0 )
                        {
                          hard_write( term->fdout, image.source, image.length );
                          if ( ( *(char*)(term + 56) & 1 ) & 255 )
                          {
                            done_draw(  );
                            done_string( &image );
                            memcpy( screen->last_image, screen[0].image, ( term->height * term->width ) << 3 );
                            screen->dirty_to = 0;
                            screen->dirty_from = term->height;
                          }
                        }
                        else
                        {
                          want_draw(  );
                          image.length = image.length;
                          hard_write( term->fdout, image.source, image.length );
                        }
                      }
                    }
                  }
              }
              if ( screen->lcx != screen->cx )
                *(int*)(*(int*)(edi + 12)) = screen->cy;
              else
              {
                if ( screen->lcy != screen->cy )
                  continue;
              }
            }
          }
          else
          {
            driver = &driver;
          }
        }
        while ( driver->next != active_screen_drivers.next );
      }
      driver = &eax[0].source[0];
      if ( eax )
      {
        driver->prev = &driver[0];
        driver = &driver;
        &driver = &driver;
        driver->prev = &driver[0];
        driver->type = edi;
        set_screen_driver_opt( &driver[0], term->spec );
        memcpy( &driver->name[0], *(int*)(*(int*)(esi + 16) + 12), ebp_108 + 1 );
        term->spec->change_hook = &screen_driver_change_hook;
        term->bits_at_56/*.1_1of4*/ = ( *(char*)(term + 56) & -3 ) | ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 );
        term->bits_at_56/*.1_1of4*/ = ( ( ( *(char*)(term + 56) & -3 ) | ( (int)driver->opt.bits_at_24/*.1_1of4*/ & 2 ) ) & -5 ) | ( ( driver->opt.charsets[0] != -1 ) << 2 );
      }
    }
    else
    {
    }
  }
}
void erase_screen( struct terminal *term )
{
  if ( ( term->bits_at_56/*.1_1of4*/ & 1 ) & 255 )
  {
    if ( is_blocked(  ) == 0 )
      want_draw(  );
    else
    {
      return;
    }
  }
  hard_write( term->fdout, "\033[2J\033[1;1H", 10 );
  if ( ( term->bits_at_56/*.1_1of4*/ & 1 ) & 255 )
  {
  }
  return;
}
void beep_terminal( struct terminal *term )
{
  hard_write( term->fdout, "", 1 );
  return;
}
struct terminal_screen *init_screen( void )
{
  struct terminal_screen *screen;
  if ( screen[0].image )
  {
    screen->lcx = -1;
    *(int*)(mem_calloc( 1, 32 ) + 20) = -1;
  }
  return (struct terminal_screen*)mem_calloc( 1, 32 );
}
void resize_screen( struct terminal *term, int width, int height )
{
  struct terminal_screen *screen;
  size_t size;
  size_t bsize;
  if ( assert_failed == 0 )
  {
    if ( term[0] && term->screen )
    {
      assert_failed = 0;
      screen = term->screen;
    }
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/screen.c";
      errline = 1178;
      elinks_internal( "assertion term && term-&gt;screen failed!" );
      screen = term->screen;
      if ( assert_failed == 0 )
        goto B24;
    }
B24:    assert_failed = width >> 31;
    if ( width >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/screen.c";
      errline = 1182;
      elinks_internal( "assertion width &gt;= 0 failed!" );
      if ( assert_failed == 0 )
        goto B6;
    }
B6:    assert_failed = height >> 31;
    if ( height >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/terminal/screen.c";
      errline = 1183;
      elinks_internal( "assertion height &gt;= 0 failed!" );
      size = width * height;
      if ( width * height )
        height = height;
        bsize = ( width * height ) << 3;
        if ( mem_realloc( (void*)screen->image, ( width * height ) << 4 ) )
        {
          screen = (struct terminal_screen*)mem_realloc( (void*)screen->image, ( width * height ) << 4 );
          screen->last_image = bsize + mem_realloc( (void*)screen->image, ( width * height ) << 4 );
          memset( screen[0].image, 0, bsize );
          memset( screen->last_image, 255, bsize );
          term->height = height;
          term->width = width;
          if ( screen->dirty_from >= 1 )
            screen->dirty_from = 0;
          if ( screen->dirty_to < height )
          {
            screen->dirty_to = height;
          }
          return;
        }
        else
        {
          return;
        }
      else
      {
        return;
      }
    }
  }
  else
    screen = term->screen;
  size = width * height;
  if ( width * height )
  {
    bsize = ( width * height ) << 3;
  }
  else
  {
    return;
  }
}
void done_screen( struct terminal_screen *screen )
{
{
  void *p = (void*)screen->image;
  if ( screen->image )
    mem_free( &((int*)p)[0] );
  screen = &screen[0];
}
}
#if 0
#endif
