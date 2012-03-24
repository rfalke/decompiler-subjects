#include "general.c.h"
static unsigned char *quote_char[2] = { "\"", "'" };
static struct SSS roman_tbl[20] = { { 1000, "m" }
, { 999, "im" }
, { 990, "xm" }
, { 900, "cm" }
, { 500, "d" }
, { 499, "id" }
, { 490, "xd" }
, { 400, "cd" }
, { 100, "c" }
, { 99, "ic" }
, { 90, "xc" }
, { 50, "l" }
, { 49, "il" }
, { 40, "xl" }
, { 10, "x" }
, { 9, "ix" }
, { 5, "v" }
, { 4, "iv" }
, { 1, "i" }
, { 0, 0 }
 };
void html_span( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  return;
}
void html_bold( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks |= 1;
  return;
}
void html_italic( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks |= 2;
  return;
}
void html_underline( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks |= 4;
  return;
}
void html_fixed( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks |= 8;
  return;
}
void html_subscript( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  xxx3 = 1;
  a = "[";
}
void html_subscript_close( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  xxx3 = 1;
  a = "]";
}
void html_superscript( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  xxx3 = 1;
  a = "^";
}
void html_quote( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  unsigned char *q;
  q[0] = quote_char[ html_context->quote_level & 1 ];
  xxx3 = 1;
  html_context = html_context;
  a = quote_char[ html_context->quote_level & 1 ];
  html_context->quote_level++;
}
void html_quote_close( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  if ( html_context->quote_level )
    html_context->quote_level--;
  xxx3 = 1;
  html_context = &html_context[0];
  a = quote_char[ ( html_context->quote_level - 1 ) & 1 ];
}
void html_font( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int edx;
  unsigned char *al;
  if ( get_attr_value( a, "size", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    int p;
    unsigned int s;
    unsigned char *nn;
    unsigned char *end;
    if ( *(char*)(get_attr_value( a, "size", html_context->doc_cp, HTML_ATTR_NONE )) == '+' )
    {
    }
    else
    {
      nn = &al[0];
      p = 0;
      if ( *(char*)(get_attr_value( a, "size", html_context->doc_cp, HTML_ATTR_NONE )) == '-' )
      {
      }
    }
    *(int*)(__errno_location(  )) = 0;
    strtoul( (char*)nn, (char**)&end, 10 );
    if ( *(int*)(__errno_location(  )) == 0 && nn[0] && end[0] == 0 )
    {
      s = strtoul( (char*)nn, (char**)&end, 10 ) <= 7 ? 7 : strtoul( (char*)nn, (char**)&end, 10 );
      if ( p == 0 )
        &html_context->stack.list_head_elinks = &s;
      else
        &html_context->stack.list_head_elinks += -1 * s;
      if ( html_context->stack.list_head_elinks < 1 )
        &html_context->stack.list_head_elinks = 1;
      else
      {
        if ( html_context->stack.list_head_elinks > 7 )
          &html_context->stack.list_head_elinks = 7;
      }
    }
    mem_free( (void*)nn );
  }
  get_color( &html_context[0], a, "color", &html_context->stack.list_head_elinks );
  return;
}
void html_body( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  get_color( html_context, a, "text", &html_context->stack.list_head_elinks );
  get_color( html_context, a, "link", html_context->stack.next + 48 );
  get_color( html_context, a, "vlink", html_context->stack.next + 52 );
  if ( get_bgcolor( html_context, a, html_context->stack.next + 20 ) != -1 )
    html_context->bits_at_68/*.1_1of4*/ = (int)html_context->bits_at_68/*.1_1of4*/ | 32;
    html_context->bits_at_68/*.1_1of4*/ = (int)html_context->bits_at_68/*.1_1of4*/ | 32 | 16;
    html_context = &html_context[0];
  else
  {
    html_context->bits_at_68/*.1_1of4*/ = (int)html_context->bits_at_68/*.1_1of4*/ | 32 | 16;
    html_context = &html_context[0];
  }
}
void html_apply_canvas_bgcolor( struct html_context *html_context )
{
  if ( ( html_context->options->bits_at_68/*.1_1of4*/ & 1 ) & 255 )
    css_apply( &html_context[0], &html_context->stack.next[0], &html_context[0].css_styles, &html_context->stack );
  if ( html_context->stack.list_head_elinks != html_context->stack.list_head_elinks )
  {
    struct html_element *e;
    html_context->bits_at_68/*.1_1of4*/ |= 32;
    e = &html_context->stack.prev[0];
    &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
    html_context->stack.prev[5] = html_context->stack.list_head_elinks;
    html_context->stack.prev[37] = html_context->stack.list_head_elinks;
  }
  if ( ( ( html_context->bits_at_68/*.1_1of4*/ & 8 ) & 255 ) && html_context->options->default_style.bg != html_context->stack.list_head_elinks && search_html_stack( &html_context[0], "BODY" ) == 0 )
  {
    html_context->special_f( &html_context[0], SP_COLOR_LINK_LINES );
    return;
  }
  else
  {
    return;
  }
}
void html_script( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
}
void html_style( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  html_context->bits_at_68/*.1_1of4*/ |= 4;
  html_context = html_context;
}
void html_style_close( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  html_context->bits_at_68/*.1_1of4*/ &= 251;
  return;
}
void html_html( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int ecx;
  *(int*)(html_context->stack.prev) = html_context->stack.prev;
  if ( html_context->stack.list_head_elinks != html_context->stack.list_head_elinks )
  {
    &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
    html_context->stack.prev[5] = html_context->stack.list_head_elinks;
    html_context->stack.prev[37] = html_context->stack.list_head_elinks;
  }
  return;
}
void html_html_close( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  if ( html_context->stack.list_head_elinks > 1 )
  {
  }
  return;
}
void html_head( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  return;
}
void html_meta( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  return;
}
void html_handle_body_meta( struct html_context *html_context, unsigned char *meta, unsigned char *eof )
{
  struct string head;
  if ( init_string( &head ) )
  {
    scan_http_equiv( meta, eof, &head, 0, html_context->options );
    process_head( &html_context[0], head.source );
    done_string( &head );
  }
  return;
}
void html_title( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks = 1;
  &html_context->stack.list_head_elinks = 3;
  return;
}
void html_center( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks = 1;
  if ( html_context->table_level == 0 )
  {
    html_context->stack.next = html_context->stack.next;
    &html_context->stack.list_head_elinks = 0;
    &html_context->stack.list_head_elinks = 0;
  }
  return;
}
void html_linebrk( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  unsigned char *al;
  if ( get_attr_value( a, "align", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    if ( c_strcasecmp( (char*)get_attr_value( a, "align", html_context->doc_cp, HTML_ATTR_NONE ), "left" ) == 0 )
      &html_context->stack.list_head_elinks = 0;
      html_context = &al[0];
    else
    {
      if ( c_strcasecmp( &al[0], "right" ) == 0 )
      {
        &html_context->stack.list_head_elinks = 2;
        html_context = &al[0];
      }
      if ( c_strcasecmp( &al[0], "center" ) == 0 )
      {
        &html_context->stack.list_head_elinks = 1;
        if ( html_context->table_level == 0 )
        {
          &html_context->stack.list_head_elinks = 0;
          &html_context->stack.list_head_elinks = 0;
        }
      }
      else
      {
        if ( c_strcasecmp( &al[0], "justify" ) == 0 )
          &html_context->stack.list_head_elinks = 3;
      }
    }
  }
  else
  {
    return;
  }
}
void html_br( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_linebrk( html_context, a, html, eof, end );
  if ( ( *(char*)(html_context + 68) & 1 ) & 255 )
  {
    a = 2;
    html_context = &html_context[0];
  }
  html_context->bits_at_68/*.1_1of4*/ = (int)html_context->bits_at_68/*.1_1of4*/ | 1;
  return;
}
void html_p( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  int ecx;
  int edx;
  if ( html_context->stack.list_head_elinks < html_context->margin )
  {
    &html_context->stack.list_head_elinks = &html_context->margin;
    html_context->margin = html_context->margin;
    html_context->stack.next = html_context->stack.next;
  }
  if ( html_context->stack.list_head_elinks < html_context->margin )
    &html_context->stack.list_head_elinks = &html_context->margin;
  end = &end[0];
  eof = &eof[0];
  html = &html[0];
  a = a;
  html_context = &html_context[0];
}
void html_address( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  &html_context->stack.list_head_elinks = 0;
  return;
}
void html_blockquote( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  &html_context->stack.list_head_elinks = 0;
  return;
}
void html_h( int h, unsigned char *a, enum format_align  default_align, struct html_context *html_context, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  int eax;
  if ( html_context->stack.list_head_elinks == 0 )
    &html_context->stack.list_head_elinks = &default_align;
  html_linebrk( &html_context[0], a, html, eof, end );
  h -= 2;
  h = (unsigned char)( ( h - 2 < 0 ) ^ 1 ) ? 0 : h - 2;
  if ( html_context->stack.list_head_elinks != 1 )
  {
    if ( !0 )
    {
      if ( html_context->stack.list_head_elinks == 2 )
      {
        &html_context->stack.list_head_elinks = 0;
        &html_context->stack.list_head_elinks = ( h * 2 ) * 2;
        return;
      }
      if ( html_context->stack.list_head_elinks == 3 )
      {
        &html_context->stack.list_head_elinks = ( h * 2 ) * 2;
        &html_context->stack.list_head_elinks = ( h * 2 ) * 2;
        return;
      }
    }
    else
    {
      &html_context->stack.list_head_elinks = ( (unsigned char)( ( h - 2 < 0 ) ^ 1 ) ? 0 : h - 2 ) * 2;
      &html_context->stack.list_head_elinks = 0;
    }
    return;
  }
  else
  {
    &html_context->stack.list_head_elinks = 0;
    &html_context->stack.list_head_elinks = 0;
    return;
  }
}
void html_h1( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  &html_context->stack.list_head_elinks |= 1;
  html_h( 1, a, ALIGN_CENTER, html_context, &end );
  return;
}
void html_h2( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_h( 2, a, ALIGN_LEFT, html_context, html, eof, end );
  return;
}
void html_h3( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_h( 3, a, ALIGN_LEFT, html_context, html, eof, end );
  return;
}
void html_h4( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_h( 4, a, ALIGN_LEFT, html_context, html, eof, end );
  return;
}
void html_h5( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_h( 5, a, ALIGN_LEFT, html_context, html, eof, end );
  return;
}
void html_h6( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_h( 6, a, ALIGN_LEFT, html_context, html, eof, end );
  return;
}
void html_pre( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  &html_context->stack.list_head_elinks |= 32;
  &html_context->stack.list_head_elinks = html_context->stack.list_head_elinks > 1;
  &html_context->stack.list_head_elinks = 0;
  return;
}
void html_xmp( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_context->bits_at_68/*.1_1of4*/ |= 2;
  &html_context->stack.list_head_elinks |= 32;
  &html_context->stack.list_head_elinks = html_context->stack.list_head_elinks > 1;
  &html_context->stack.list_head_elinks = 0;
  return;
}
void html_xmp_close( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  html_context->bits_at_68/*.1_1of4*/ &= 253;
  return;
}
void html_hr( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  int eax;
  int i;
  unsigned char r = 205;
  int q;
  if ( q <= 1 )
    r = 196;
  html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
  &html_context->stack.list_head_elinks = 1;
  if ( html_context->stack.list_head_elinks )
  {
    mem_free( &html_context->stack.list_head_elinks );
    html_context->stack.next = html_context->stack.next;
  }
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = 0;
  html_linebrk( &html_context[0], &a[0], html, eof, end );
  if ( html_context->stack.list_head_elinks == 3 )
  {
    &html_context->stack.list_head_elinks = 1;
    html_context->stack.next = html_context->stack.next;
  }
  &html_context->stack.list_head_elinks = &html_context->margin;
  &html_context->stack.list_head_elinks = &html_context->margin;
  &html_context->stack.list_head_elinks = 16;
  html_context->special_f( &html_context[0], SP_NOWRAP );
  if ( i >= 1 )
  {
    do
    {
      put_chrs( &html_context[0], &r, 1 );
    }
    while ( esi < 1 );
  }
  html_context->special_f( &html_context[0], SP_NOWRAP );
  ln_break( &html_context[0], 2 );
  kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
  return;
}
void html_table( struct html_context *html_context, unsigned char *attr, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  int ecx;
  if ( ( ( html_context->options->bits_at_68/*.1_1of4*/ & 4 ) & 255 ) && html_context->table_level <= 9 )
  {
    format_table( attr, &html[0], &eof[0], &end[0], &html_context[0] );
    html_context = &html_context[0];
    attr = 2;
  }
  &html_context->stack.list_head_elinks = &html_context->margin;
  &html_context->stack.list_head_elinks = &html_context->margin;
  &html_context->stack.list_head_elinks = 0;
  html_linebrk( &html_context[0], attr, &html[0], &eof[0], &end[0] );
  html_context->stack.next[3] = 0;
  return;
}
void html_tt( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  return;
}
void html_tr( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
}
void html_th( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  kill_html_stack_until( 1, "TD" );
  html_context->stack.next[3] |= 1;
  xxx3 = 1;
  a = " ";
  html_context = html_context;
}
void html_td( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  kill_html_stack_until( 1, "TD" );
  html_context->stack.next[3] &= -2;
  xxx3 = 1;
  a = " ";
  html_context = html_context;
}
void html_base( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  unsigned char *al;
  if ( get_attr_value( a, "href", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    unsigned char *base;
    struct uri *uri;
    if ( base[0] )
    {
      uri = get_uri( &base[0], 0 );
      mem_free( &al[0] );
      mem_free( &base[0] );
      if ( uri )
      {
        done_uri( html_context->base_href );
        html_context->base_href = uri;
      }
    }
    else
      mem_free( &al[0] );
  }
  al[0] = get_target( html_context->options, &a[0] );
  if ( get_target( html_context->options, &a[0] ) )
  {
    if ( html_context->base_target )
      mem_free( (void*)html_context->base_target );
    html_context->base_target = &al[0];
    return;
  }
  else
  {
    return;
  }
}
void html_ul( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  unsigned char *al;
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = 1;
  if ( get_attr_value( a, "type", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    if ( c_strcasecmp( (char*)get_attr_value( a, "type", html_context->doc_cp, HTML_ATTR_NONE ), "disc" ) == 0 || c_strcasecmp( &al[0], "circle" ) == 0 )
      &html_context->stack.list_head_elinks = 2;
    else
    {
      if ( c_strcasecmp( &al[0], "square" ) == 0 )
        &html_context->stack.list_head_elinks = 3;
    }
    mem_free( &al[0] );
  }
  &html_context->stack.list_head_elinks += ( html_context->stack.list_head_elinks > 1 ) + 2;
  if ( html_context->table_level == 0 )
  {
    if ( html_context->stack.list_head_elinks / 2 < html_context->stack.list_head_elinks )
      &html_context->stack.list_head_elinks = html_context->stack.list_head_elinks / 2;
    else
    {
      &html_context->stack.list_head_elinks = 0;
      &html_context->stack.list_head_elinks = 1;
      return;
    }
  }
  html_context->stack.next = html_context->stack.next;
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = 1;
  return;
}
void html_ol( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  unsigned char *al;
  int st;
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  html_context->stack.next[34] = get_num( a, "start", html_context->doc_cp ) != -1 ? 1 : get_num( a, "start", html_context->doc_cp );
  html_context->stack.next[36] = 1;
  if ( al[0] )
  {
    if ( al[0] && al[1] == 0 )
    {
      if ( al[0] == '1' )
        &html_context->stack.list_head_elinks = 1;
      else
      if ( al[0] == 'a' )
        &html_context->stack.list_head_elinks = 2;
      else
      {
        a[0] = a[0];
        if ( al[0] == 'A' )
          &html_context->stack.list_head_elinks = 3;
        else
        {
          if ( al[0] != 'r' )
          {
            if ( al[0] != 'R' )
            {
              if ( al[0] != 'i' )
              {
                if ( al[0] == 'I' )
                  goto B20;
              }
            }
B20:            &html_context->stack.list_head_elinks = 5;
          }
          &html_context->stack.list_head_elinks = 4;
        }
      }
    }
    mem_free( &al[0] );
  }
  html_context->stack.next = html_context->stack.next;
  &html_context->stack.list_head_elinks += html_context->stack.list_head_elinks > 1;
  if ( html_context->table_level == 0 )
  {
    if ( html_context->stack.list_head_elinks / 2 < html_context->stack.list_head_elinks )
      &html_context->stack.list_head_elinks = html_context->stack.list_head_elinks / 2;
    else
    {
      &html_context->stack.list_head_elinks = 0;
      &html_context->stack.list_head_elinks = 1;
      return;
    }
  }
  html_context->stack.next = html_context->stack.next;
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = 1;
  return;
}
void html_li( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  int ebp_88;
  if ( html_context->was_li )
  {
    html_context->line_breax = 0;
    ln_break( &html_context[0], 1 );
  }
  if ( html_context->stack.list_head_elinks == 0 )
  {
    unsigned char x[7];
    int t;
    x[0] = 1651385898;
    x[4] = 28787;
    x[6] = 59;
    t = t & 7;
    if ( ( t & 7 ) == 2 )
    {
    }
    else
    if ( t == 3 )
      x[0] = 43;
    put_chrs( &html_context[0], x, 7 );
    &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
    &html_context->stack.list_head_elinks = 0;
  }
  else
  {
    unsigned char c;
    unsigned char n[32];
    int t = html_context->stack.list_head_elinks & 7;
    int s;
    if ( s != -1 )
      &html_context->stack.list_head_elinks = &s;
    if ( t - 2 <= 1 )
    {
      put_chrs( &html_context[0], "&nbsp;", 6 );
    }
    else
    if ( t - 4 <= 1 )
    {
      if ( html_context->stack.list_head_elinks > 3999 )
      {
      }
      else
      if ( html_context->stack.list_head_elinks == 0 )
      {
      }
      else
      {
        ebp_88 = 0;
        do
        {
          if ( roman_tbl[ ebp_88 ].n <= html_context->stack.list_head_elinks )
          {
            while ( 1 )
            {
              __strcat_chk( ebp_60, (char*)roman_tbl[ ebp_88 ].s, 32 );
              if ( 0 )
                goto B29;
              else
              {
              }
            }
          }
B29:          if ( assert_failed == 0 )
          {
            ebp_88++;
            if ( esi && roman_tbl[ ebp_88 ].n == 0 )
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/general.c";
              errline = 844;
              elinks_internal( "assertion !(n && !roman_tbl[i].n) failed: BUG in roman number converter" );
              if ( assert_failed == 0 )
                continue;
              else
              {
              }
            }
            else
            {
              assert_failed = 0;
            }
          }
          html_context = &html_context[0];
          assert_failed = 0;
        }
        while ( c_toupper( x[0] ) );
        html_context = &html_context[0];
      }
      if ( ebp_84 == 5 && 0 )
      {
        x[0] = roman_tbl[ ebp_88 ].s;
        do
        {
          x[0] = c_toupper( x[0] );
          x[0] = x[1];
        }
        while ( x[0] );
      }
      else
      {
      }
    }
    else
    {
      c = 0;
      if ( html_context->stack.list_head_elinks <= 9 )
      {
        put_chrs( &html_context[0], "&nbsp;", 6 );
        &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
      }
      elinks_ulongcat( n, 0, html_context->stack.list_head_elinks, 31, 0, 10, 0 );
      do
      {
      }
      while ( ( ( *(int*)(1 + 4) - 0x1010101 ) & ~*(int*)(1 + 4) & -2139062144 ) == 0 );
      put_chrs( &html_context[0], &edi, ( ( eax & 32896 ) == 0 ? esi : esi + 2 ) - 3 - ( 0 & 1 ) - edi );
      put_chrs( &html_context[0], ".&nbsp;", 7 );
      &html_context->stack.list_head_elinks = esi + html_context->stack.list_head_elinks + ebp_96 + 2;
      &html_context->stack.list_head_elinks = 0;
    {
      struct html_element *element;
      if ( element[0].next )
        *(int*)(search_html_stack( &html_context[0], "ol" ) + 136) = html_context->stack.list_head_elinks;
      &html_context->stack.list_head_elinks = 0;
    }
    }
  }
  html_context->putsp = HTML_SPACE_SUPPRESS;
  html_context->line_breax = 2;
  html_context->was_li = 1;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void html_dl( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int edx;
  &html_context->stack.list_head_elinks &= -9;
  if ( get_attr_value( a, "compact", html_context->doc_cp, HTML_ATTR_TEST ) )
    &html_context->stack.list_head_elinks |= 8;
  if ( html_context->stack.list_head_elinks )
  {
    &html_context->stack.list_head_elinks += 5;
    &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  }
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = 1;
  if ( ( ( html_context->stack.list_head_elinks & 8 ) & 255 ) == 0 )
  {
    ln_break( &html_context[0], 2 );
    &html_context->stack.list_head_elinks = 2;
  }
  return;
}
void html_dt( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  kill_html_stack_until( html_context, 0 );
  html_context->stack.next[29] = 0;
  html_context->stack.next[30] = html_context->stack.next[35];
  if ( ( ( *(char*)(*(int*)(html_context + 36) + 144) & 8 ) & 255 ) == 0 && get_attr_value( &a[0], "compact", html_context->doc_cp, HTML_ATTR_TEST ) == 0 )
  {
    html_context = &html_context[0];
    a = 2;
  }
  *ebp_8 = ebx;
  return;
}
void html_dd( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  kill_html_stack_until( html_context, 0 );
  html_context->stack.next[30] = html_context->stack.next[35] + 3;
  if ( html_context->table_level == 0 )
  {
    &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
    if ( html_context->stack.list_head_elinks / 2 < html_context->stack.list_head_elinks )
      &html_context->stack.list_head_elinks = html_context->stack.list_head_elinks / 2;
    else
    {
      &html_context->stack.list_head_elinks = 0;
      return;
    }
  }
  html_context->stack.next = html_context->stack.next;
  &html_context->stack.list_head_elinks = 0;
  return;
}
void html_noframes( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  struct html_element *element;
  if ( ( ( html_context->options->bits_at_68/*.1_1of4*/ & 16 ) & 255 ) && ( !element[0].next || element->frameset ) )
  {
    a = &a[0];
    html_context = &html_context[0];
  }
  *ebp_8 = ebx;
  return;
}
void html_frame( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  unsigned char *name, *src, *url;
  if ( get_attr_value( a, "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) == 0 )
  {
    url[0] = stracpy( "about:blank" );
  }
  else
  {
    url[0] = join_urls( html_context->base_href, get_attr_value( a, "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) );
    mem_free( &src[0] );
  }
  if ( url[0] )
  {
    if ( get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      if ( *(char*)(get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE )) == 0 )
        mem_free( &name[0] );
      else
      {
        if ( ( ( html_context->options->bits_at_68/*.1_1of4*/ & 16 ) & 255 ) == 0 || html_context->stack.list_head_elinks == 0 )
        {
          html_focusable( &html_context[0], a );
          put_link_line( "Frame: ", &name[0], &url[0], "", &html_context[0] );
          mem_free( &name[0] );
          html_context = &url[0];
        }
        else
        {
          if ( html_context->special_f( &html_context[0], SP_USED ) )
            html_context->special_f( &html_context[0], SP_FRAME );
        }
      }
    }
    name[0] = stracpy( &url[0] );
    if ( stracpy( &url[0] ) )
    {
    }
  }
  return;
}
void html_frameset( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int edx;
  struct frameset_param fp;
  unsigned char *cols, *rows;
  int width, height;
  if ( !search_html_stack( html_context, "BODY" ) && ( ( html_context->options->bits_at_68/*.1_1of4*/ & 16 ) & 255 ) && html_context->special_f( &html_context[0], SP_USED ) && ( get_attr_value( &a[0], "cols", html_context->doc_cp, HTML_ATTR_NONE ) || stracpy( "100%" ) ) )
  {
    if ( get_attr_value( &a[0], "rows", html_context->doc_cp, HTML_ATTR_NONE ) == 0 && stracpy( "100%" ) == 0 )
    {
      mem_free( (void*)stracpy( "100%" ) );
      *ebp_12 = ebx;
      return;
    }
    else
    {
      if ( html_context->stack.list_head_elinks == 0 )
      {
        width = html_context->options->box.width;
        height = html_context->options->box.height;
        html_context->options->bits_at_92/*.1_1of4*/ |= 1;
      }
      else
    {
      int offset;
      if ( html_context->stack.list_head_elinks < html_context->stack.list_head_elinks )
      {
        width = html_context->stack.list_head_elinks;
        height = html_context->stack.list_head_elinks;
      }
      else
      {
        mem_free( &cols[0] );
        mem_free( &rows[0] );
        *ebp_12 = ebx;
        return;
      }
    }
      fp.height = 0;
      fp.width = 0;
      parse_frame_widths( &cols[0], width, 10, &fp.width, &fp.x );
      parse_frame_widths( &rows[0], height, 16, &fp.height, &fp.y );
      fp.parent = &html_context->stack.list_head_elinks;
      if ( fp.x && fp.y )
      {
        &html_context->stack.list_head_elinks = html_context->special_f( &html_context[0], SP_FRAMESET );
      }
    {
      void *p = (void*)fp.width;
      if ( fp.width )
        mem_free( &((int*)p)[0] );
    {
      void *p = (void*)fp.height;
      if ( fp.height )
        mem_free( &((int*)p)[0] );
    }
    }
    }
  }
  else
  {
    *ebp_12 = ebx;
    return;
  }
}
void html_noscript( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  return;
}
#if 0
#endif
