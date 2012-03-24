#include "link.c.h"
static struct lt_default_name lt_names[32] = { { 1, "start" }
, { 1, "top" }
, { 1, "home" }
, { 2, "parent" }
, { 2, "up" }
, { 3, "next" }
, { 4, "previous" }
, { 4, "prev" }
, { 5, "contents" }
, { 5, "toc" }
, { 6, "index" }
, { 7, "glossary" }
, { 8, "chapter" }
, { 9, "section" }
, { 10, "subsection" }
, { 10, "child" }
, { 10, "sibling" }
, { 11, "appendix" }
, { 12, "help" }
, { 13, "search" }
, { 14, "bookmark" }
, { 19, "alt. language" }
, { 20, "alt. media" }
, { 21, "alt. stylesheet" }
, { 22, "stylesheet" }
, { 18, "alternate" }
, { 15, "copyright" }
, { 16, "author" }
, { 16, "made" }
, { 16, "owner" }
, { 17, "icon" }
, { 0, 0 }
 };
void html_a( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *href;
  if ( get_attr_value( a, "href", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    unsigned char *target;
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
    }
    strlen( &href[0] );
    if ( href[0] == ' ' )
    {
      do
      {
        href[0] = href[1];
        *(int*)(strlen( &href[0] ))--;
      }
      while ( href[0] == ' ' );
    }
    if ( eax )
    {
      if ( href[ eax - 1 ] == ' ' )
      {
        do
        {
          *(char*)(edx - 1) = 0;
          if ( eax == 1 )
            href[0] = href[0];
          else
        }
        while ( *(char*)(edx - 2) != ' ' );
        href[0] = href[0];
      }
      eax += 0;
      memmove( &href[0], &href[0], 1 );
      &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)join_urls( html_context->base_href, &href[0] );
      mem_free( &href[0] );
      if ( get_target( html_context->options, a ) )
      {
        if ( html_context->stack.list_head_elinks )
        {
          mem_free( &html_context->stack.list_head_elinks );
          html_context->stack.next = html_context->stack.next;
        }
        &html_context->stack.list_head_elinks = &target[0];
      }
      else
      {
        if ( html_context->stack.list_head_elinks )
        {
          mem_free( &html_context->stack.list_head_elinks );
        }
        &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)stracpy( html_context->base_target );
      }
      if ( get_global_history_item( &html_context->stack.list_head_elinks ) )
      {
        &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
        &html_context->stack.list_head_elinks &= -2;
        &html_context->stack.list_head_elinks |= 2;
      }
      else
      {
        &html_context->stack.list_head_elinks = html_context->stack.next ? &html_context->stack.list_head_elinks : &html_context->stack.list_head_elinks;
        &html_context->stack.list_head_elinks &= -3;
        &html_context->stack.list_head_elinks |= 1;
      }
      if ( html_context->stack.list_head_elinks )
      {
        mem_free( &html_context->stack.list_head_elinks );
      }
      &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( a, "title", html_context->doc_cp, HTML_ATTR_NONE );
      html_focusable( &html_context[0], a );
      xxx3 = "name";
      html_context = &html_context[0];
      a = a;
    }
    memmove( &href[0], &href[0], 1 );
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)join_urls( html_context->base_href, &href[0] );
    mem_free( &href[0] );
  }
  else
    kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
    xxx3 = "name";
    html_context = &html_context[0];
    a = a;
}
unsigned char *truncate_label( unsigned char *label, int max_len )
{
  int ecx;
  unsigned char *new_label;
  int right_part_len;
  new_label[0] = 0;
  if ( max_len >= 0 )
  {
    if ( strlen( &label[0] ) <= max_len || max_len == 0 )
    {
      new_label[0] = stracpy( &label[0] );
      return &new_label[0];
    }
    right_part_len = (unsigned char)( ( max_len < ( ( max_len / 2 ) * 2 ) + 1 ) ^ 1 ) ? ( max_len / 2 ) - 1 : max_len / 2;
    new_label[0] = mem_alloc( max_len + 1 );
    if ( mem_alloc( max_len + 1 ) )
    {
      if ( max_len / 2 )
      {
        memcpy( &new_label[0], &label[0], max_len / 2 );
      }
      if ( right_part_len )
        memcpy( new_label[0] + edx + 1, ebx + ( ecx - right_part_len ), right_part_len );
      new_label[ max_len ] = 0;
      return &new_label[0];
    }
    else
    {
      return &new_label[0];
    }
  }
  else
  {
    return &new_label[0];
  }
}
unsigned char *get_image_filename_from_src( int max_len, unsigned char *src )
{
  int ecx;
  int edx;
  unsigned char *text;
  unsigned char *start, *filename;
  int len;
  if ( src[0] )
  {
    if ( src[0] == 0 || src[0] == '?' )
    {
      start[0] = src[0];
      len = 0;
    }
    else
    {
      do
      {
      }
      while ( src[0] && src[0] != '?' );
      len = 0 + 1;
      start[0] = src[ start[0] ];
      if ( src[0] < src[ start[0] ] )
      {
        do
        {
          start[0]--;
          max_len = max_len;
        }
        while ( *(char*)(start[0] - 1) != '/' && src[0] < start[0] );
      }
    }
    if ( memacpy( &start[0], ( src[0] + len ) - start[0] ) )
    {
      text[0] = truncate_label(  );
      mem_free( &filename[0] );
      return &text[0];
    }
  }
  return 0;
}
void put_image_label( unsigned char *a, unsigned char *label, struct html_context *html_context )
{
  color_T fg;
  html_focusable( &a[0], &ebx );
  fg = html_context->stack.list_head_elinks;
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
  put_chrs( &html_context[0], &label[0], strlen( &label[0] ) );
  &html_context->stack.list_head_elinks = &fg;
  return;
}
void html_img_do( unsigned char *a, unsigned char *object_src, struct html_context *html_context )
{
  int edx;
  int ismap, usemap;
  int add_brackets;
  unsigned char *src = &object_src[0];
  unsigned char *label;
  unsigned char *usemap_attr;
  struct document_options *options = html_context->options;
  int display_style = html_context->options->image_link.display_style;
  usemap = 0;
  if ( get_attr_value( &a[0], "usemap", html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    unsigned char *joined_urls;
    unsigned char *map_url;
    mem_free( &usemap_attr[0] );
    if ( join_urls( html_context->base_href, get_attr_value( &a[0], "usemap", html_context->doc_cp, HTML_ATTR_NONE ) ) )
    {
      map_url[0] = straconcat( "MAP@" );
      mem_free( (void*)join_urls( html_context->base_href, get_attr_value( &a[0], "usemap", html_context->doc_cp, HTML_ATTR_NONE ) ) );
      if ( map_url[0] )
      {
        html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
        if ( html_context->stack.list_head_elinks )
        {
          mem_free( &html_context->stack.list_head_elinks );
          html_context->stack.next = html_context->stack.next;
        }
        &html_context->stack.list_head_elinks = &map_url[0];
        &html_context->stack.list_head_elinks = 0;
        &html_context->stack.list_head_elinks |= 1;
        usemap = 1;
      }
      else
      {
        return;
      }
    }
    else
    {
      return;
    }
  }
  if ( html_context->stack.list_head_elinks && get_attr_value( &a[0], "ismap", html_context->doc_cp, HTML_ATTR_TEST ) )
  {
    ismap = 1;
    if ( usemap == 0 )
    {
      label[0] = 0;
      if ( display_style - 2 <= 1 && ( get_attr_value( &a[0], "alt", html_context->doc_cp, HTML_ATTR_NONE ) || get_attr_value( &a[0], "title", html_context->doc_cp, HTML_ATTR_NONE ) ) && strlen( &label[0] ) > 5 )
      {
        clr_spaces( &label[0] );
      }
      if ( src )
      {
        src = stracpy( src );
        if ( src )
        {
          if ( label[0] )
          {
            if ( label[0] )
            {
              label[0] = truncate_label( &label[0], options->image_link.label_maxlen );
              mem_free( &label[0] );
              add_brackets = 0;
              if ( label[0] )
              {
                if ( label[0] == 0 )
                  mem_free( &label[0] );
                  if ( display_style == 1 && get_image_filename_from_src( options->image_link.filename_maxlen, src ) )
                  {
                    add_brackets = 1;
                    if ( *(char*)(get_image_filename_from_src( options->image_link.filename_maxlen, src )) == 0 )
                      mem_free( &label[0] );
                    else
                    {
                      if ( html_context->stack.list_head_elinks )
                      {
                        mem_free( &html_context->stack.list_head_elinks );
                      }
                      &html_context->stack.list_head_elinks = 0;
                      if ( html_context->stack.list_head_elinks )
                      {
                        mem_free( &html_context->stack.list_head_elinks );
                      }
                      &html_context->stack.list_head_elinks = 0;
                      if ( label[0] )
                      {
                        int img_link_tag = options->image_link.tagging;
                        if ( options->image_link.tagging && ( add_brackets || img_link_tag == 2 ) && new_label[0] )
                        {
                          mem_free( &label[0] );
                          label[0] = new_label[0];
                        }
                        if ( ( ( options->image_link.bits_at_24/*.1_1of4*/ & 1 ) & 255 ) == 0 )
                          put_image_label( &a[0], &label[0], &html_context[0] );
                        else
                        {
                          if ( src )
                          {
                            options->default_style.attr = join_urls( html_context->base_href, src );
                          }
                          &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "title", html_context->doc_cp, HTML_ATTR_NONE );
                          if ( ismap )
                          {
                            unsigned char *new_link;
                            html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
                            if ( straconcat( &html_context->stack.list_head_elinks ) )
                            {
                              if ( html_context->stack.list_head_elinks )
                              {
                                mem_free( &html_context->stack.list_head_elinks );
                              }
                              &html_context->stack.list_head_elinks = &new_link[0];
                            }
                            put_image_label( &a[0], &label[0], &html_context[0] );
                            kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
                          }
                          else
                            put_image_label( &a[0], &label[0], &html_context[0] );
                          if ( html_context->stack.list_head_elinks )
                          {
                            mem_free( &html_context->stack.list_head_elinks );
                          }
                          &html_context->stack.list_head_elinks = 0;
                          if ( html_context->stack.list_head_elinks )
                          {
                            mem_free( &html_context->stack.list_head_elinks );
                          }
                          &html_context->stack.list_head_elinks = 0;
                        }
                        mem_free( &label[0] );
                      }
                      if ( src )
                        mem_free( (void*)src );
                      if ( usemap )
                      {
                        kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
                        return;
                      }
                      else
                      {
                        return;
                      }
                    }
                  }
                  add_brackets = 1;
                  label[0] = stracpy( "IMG" );
              }
            }
            else
              mem_free( &label[0] );
          }
          if ( usemap )
          {
            add_brackets = 1;
            label[0] = stracpy( "USEMAP" );
          }
          else
          {
            if ( ismap )
            {
              add_brackets = 1;
              label[0] = stracpy( "ISMAP" );
            }
            else
            {
              if ( display_style == 3 )
              {
                add_brackets = 1;
                label[0] = get_image_filename_from_src( options->image_link.filename_maxlen, src );
              }
            }
          }
        }
      }
      src = get_attr_value( &a[0], "src", html_context->doc_cp, HTML_ATTR_EAT_NL );
      if ( src == 0 )
      {
        src = get_attr_value( &a[0], "dynsrc", html_context->doc_cp, HTML_ATTR_EAT_NL );
      }
    }
  }
  ismap = 0;
  label[0] = 0;
}
void html_img( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
}
void put_link_line( unsigned char *prefix, unsigned char *linkname, unsigned char *link, unsigned char *target, struct html_context *html_context )
{
  int eax;
  html_context->bits_at_68/*.1_1of4*/ |= 8;
  html_stack_dup( html_context, ELEMENT_KILLABLE );
  ln_break( html_context, 1 );
  if ( html_context->stack.next[7] )
  {
    mem_free( &html_context->stack.next[7] );
    html_context->stack.next = html_context->stack.next;
  }
  &html_context->stack.list_head_elinks = 0;
  if ( html_context->stack.list_head_elinks )
  {
    mem_free( &html_context->stack.list_head_elinks );
    html_context->stack.next = html_context->stack.next;
  }
  &html_context->stack.list_head_elinks = 0;
  if ( html_context->stack.list_head_elinks )
  {
    mem_free( &html_context->stack.list_head_elinks );
    html_context->stack.next = html_context->stack.next;
  }
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = 0;
  put_chrs( &html_context[0], &prefix[0], strlen( &prefix[0] ) );
  &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)join_urls( html_context->base_href, link );
  &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)stracpy( target );
  put_chrs( &html_context[0], &linkname[0], strlen( &linkname[0] ) );
  ln_break( &html_context[0], 1 );
  prefix = (unsigned char*)html_context[0].css_styles.import;
  linkname = (unsigned char*)html_context->stack.next;
}
void html_applet( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  unsigned char *code, *alt;
  if ( get_attr_value( a, "code", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    html_focusable( &html_context[0], &a[0] );
    if ( get_attr_value( &a[0], "alt", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      if ( alt[0] )
      {
        put_link_line( "Applet: ", &alt[0], &code[0], html_context->options->framename, &html_context[0] );
        *ebp_28 = get_attr_value( &a[0], "alt", html_context->doc_cp, HTML_ATTR_NONE );
        mem_free( &alt[0] );
        html_context = &code[0];
      }
      else
      {
        put_link_line( "", "Applet", &code[0], html_context->options->framename, &html_context[0] );
        *ebp_28 = alt[0];
        mem_free( &alt[0] );
        html_context = &code[0];
      }
    }
    else
      put_link_line( "", "Applet", &code[0], html_context->options->framename, &html_context[0] );
      html_context = &code[0];
  }
  else
  {
    return;
  }
}
void html_iframe_do( unsigned char *a, unsigned char *object_src, struct html_context *html_context )
{
  unsigned char *name, *url;
  if ( ( object_src[0] && stracpy( &object_src[0] ) ) || get_attr_value( &a[0], "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    if ( name[0] || name[0] || name[0] )
    {
      html_focusable( &html_context[0], &a[0] );
      if ( name[0] )
      {
        put_link_line( "IFrame: ", &name[0], &url[0], html_context->options->framename, &html_context[0] );
      }
      else
      {
        put_link_line( "", "IFrame", &url[0], html_context->options->framename, &html_context[0] );
      }
      mem_free( &name[0] );
    }
    mem_free( &url[0] );
  }
  return;
}
void html_iframe( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
}
void html_object( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *type, *url;
  if ( get_attr_value( a, "data", html_context->doc_cp, HTML_ATTR_EAT_NL ) || get_attr_value( &a[0], "codebase", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    type = get_attr_value( &a[0], "type", html_context->doc_cp, HTML_ATTR_NONE );
    if ( type )
    {
      if ( c_strncasecmp( (char*)type, "text/", 5 ) == 0 )
      {
        html_iframe_do( &a[0], &url[0], &html_context[0] );
        html_skip( &html_context[0], &a[0] );
        mem_free( (void*)type );
        html_context = &url[0];
      }
      else
      {
        if ( c_strncasecmp( (char*)type, "image/", 6 ) == 0 )
          html_img_do( &a[0], &url[0], &html_context[0] );
        else
        {
          unsigned char *name;
          html_focusable( &html_context[0], &a[0] );
          if ( get_attr_value( &a[0], "standby", html_context->doc_cp, HTML_ATTR_NONE ) )
          {
            if ( name[0] )
            {
              put_link_line( "Object: ", get_attr_value( &a[0], "standby", html_context->doc_cp, HTML_ATTR_NONE ), &url[0], html_context->options->framename, &html_context[0] );
              *ebp_32 = get_attr_value( &a[0], "standby", html_context->doc_cp, HTML_ATTR_NONE );
              mem_free( &name[0] );
            }
            else
            {
              put_link_line( "Object: ", type, &url[0], html_context->options->framename, &html_context[0] );
              *ebp_32 = name[0];
              mem_free( &name[0] );
            }
          }
          else
            put_link_line( "Object: ", type, &url[0], html_context->options->framename, &html_context[0] );
        }
      }
    }
    else
    {
      html_context = &url[0];
    }
  }
  else
  {
    return;
  }
}
void html_embed( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *type, *extension;
  if ( get_attr_value( a, "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    if ( *(char*)(get_attr_value( a, "src", html_context->doc_cp, HTML_ATTR_EAT_NL )) )
    {
      extension[0] = extension[0] == 0 ? extension[0] : extension[0];
      if ( get_extension_content_type( extension[0] == 0 ? &extension[0] : &extension[0] ) )
      {
        if ( c_strncasecmp( (char*)get_extension_content_type( extension[0] == 0 ? &extension[0] : &extension[0] ), "image/", 6 ) == 0 )
          html_img_do( &a[0], &extension[0] );
          mem_free( &type[0] );
          html_context = &extension[0];
        else
          html_iframe_do( &a[0], &extension[0] );
          mem_free( &type[0] );
      }
      else
        html_iframe_do( &a[0], &extension[0] );
    }
  }
  else
  {
    return;
  }
}
void html_link( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int link_display = html_context->options->meta_link_display;
  unsigned char *name;
  struct hlink link;
  struct string text;
  int name_neq_title;
  static int first = 1;
  if ( assert_failed == 0 )
  {
    assert_failed = a[0] == 0;
    if ( !(_Bool)( a[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/link.c";
      errline = 736;
      elinks_internal( "assertion a && link failed!" );
    }
  }
  memset( &link.type, 0, 36 );
  if ( get_attr_value( &a[0], "href", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
  {
    link.href = get_attr_value( &a[0], "href", html_context->doc_cp, HTML_ATTR_EAT_NL );
    link.lang = get_attr_value( &a[0], "lang", html_context->doc_cp, HTML_ATTR_NONE );
    link.hreflang = get_attr_value( &a[0], "hreflang", html_context->doc_cp, HTML_ATTR_NONE );
    link.title = get_attr_value( &a[0], "title", html_context->doc_cp, HTML_ATTR_NONE );
    link.content_type = get_attr_value( &a[0], "type", html_context->doc_cp, HTML_ATTR_NONE );
    link.media = get_attr_value( &a[0], "media", html_context->doc_cp, HTML_ATTR_NONE );
    link.name = get_attr_value( &a[0], "rel", html_context->doc_cp, HTML_ATTR_NONE );
    if ( link.name )
      link.direction = LD_REL;
    else
    {
      link.name = get_attr_value( &a[0], "rev", html_context->doc_cp, HTML_ATTR_NONE );
      if ( link.name )
        link.direction = LD_REV;
      else
      {
        if ( link.href )
        {
          if ( link.type == 22 )
          {
            import_css_stylesheet( &html_context[0].css_styles, html_context->base_href, link.href, strlen( (char*)link.href ) );
          }
          if ( link_display )
          {
            if ( link_display <= 4 )
            {
              if ( link.type - 16 > 1 && link.type != 22 )
              {
                if ( link.type == 21 )
                  a[0] = a[0];
              }
            }
            name[0] = link.name;
            if ( link.name == 0 || link )
            {
              if ( assert_failed == 0 )
                assert_failed = 0;
              name[0] = lt_names->str;
              if ( lt_names->str )
              {
                if ( lt_names[0].type != link.type )
                {
                  do
                  {
                    lt_names[0].type = lt_names[1].type;
                    if ( lt_names[1].lt_default_name == 0 || lt_names[1].str == 0 )
                      goto B39;
                    else
                    {
                    }
                  }
                  while ( edx != eax );
                }
              }
B39:              name[0] = "unknown";
            }
            if ( init_string( &text ) )
            {
              html_focusable( &html_context[0], &a[0] );
              if ( link.title )
              {
                add_to_string( &text, link.title );
                strcmp( (char*)link.title, &name[0] );
              }
              else
              {
                add_to_string( &text, &name[0] );
                name_neq_title = 0;
              }
              if ( link_display != 1 )
              {
                first = 1;
                if ( name_neq_title )
                {
                  text.source = text.source;
                  add_to_string( &text, " (" );
                  add_to_string( &text, &name[0] );
                }
                if ( link_display > 2 )
                {
                  if ( link.hreflang )
                  {
                    first = 0;
                    add_to_string( &text, first != 0 ? ", " : " (" );
                    add_to_string( &text, link.hreflang );
                  }
                  if ( link_display != 3 && link.content_type )
                  {
                    first = 0;
                    add_to_string( &text, first != 0 ? ", " : " (" );
                    add_to_string( &text, link.content_type );
                  }
                }
                link.lang[0] = link.lang;
                if ( link.lang && link.type == 19 && ( link_display <= 2 || ( link.hreflang && c_strcasecmp( (char*)link.hreflang, (char*)link.lang ) ) ) )
                {
                  first = 0;
                  add_to_string( &text, first != 0 ? ", " : " (" );
                  add_to_string( &text, link.lang );
                }
                if ( link.media )
                {
                  add_to_string( &text, first == 0 ? " (" : ", " );
                  add_to_string( &text, link.media );
                }
                else
                if ( first == 0 )
                {
                }
                add_char_to_string( &text, 41 );
              }
            {
              unsigned char *prefix;
              unsigned char *link_name;
              prefix[0] = link.direction != LD_REL ? "Link: " : "Reverse link: ";
              link_name[0] = text.length != 0 ? link_name[0] : text.source;
              put_link_line( link.direction != LD_REL ? "Link: " : "Reverse link: ", text.length != 0 ? &link_name[0] : text.source, link.href, html_context->base_target, &html_context[0] );
              if ( text.source )
              {
                done_string( &text );
                first = first;
              }
            }
            }
          }
        }
        if ( assert_failed == 0 )
          assert_failed = 0;
        if ( link.content_type )
          mem_free( (void*)link.content_type );
        if ( link.media )
          mem_free( (void*)link.media );
        if ( link.href )
          mem_free( (void*)link.href );
        if ( link.hreflang )
          mem_free( (void*)link.hreflang );
        if ( link.title )
          mem_free( (void*)link.title );
        if ( link.lang )
          mem_free( (void*)link.lang );
        if ( link.name )
        {
          mem_free( (void*)link.name );
          return;
        }
        else
        {
          return;
        }
      }
    }
    if ( lt_names->str )
    {
      for ( ; eax == 0; link.name[0] = link.name )
      {
        if ( lt_names[ 0 + 1 + 1 ].str == 0 )
          link.name[0] = link.name;
        else
        {
          //link.name[0] = link.name;
        }
      }
    }
    if ( c_strcasestr( (char*)link.name, "icon" ) || ( link.content_type && c_strcasestr( (char*)link.content_type, "icon" ) ) )
      link.type = LT_ICON;
    else
    {
      if ( c_strcasestr( (char*)link.name, "alternate" ) )
      {
        link.type = LT_ALTERNATE;
        if ( link.lang )
          link.type = LT_ALTERNATE_LANG;
        else
        {
          if ( c_strcasestr( (char*)link.name, "stylesheet" ) || ( link.content_type && c_strcasestr( (char*)link.content_type, "css" ) ) )
            link.type = LT_ALTERNATE_STYLESHEET;
          else
            link = link.media == 0 ? 20 : link;
        }
      }
      else
      {
        if ( link.content_type )
        {
          link = c_strcasestr( (char*)link.content_type, "css" ) == 0 ? 22 : link;
        }
      }
    }
  }
  else
  {
    return;
  }
}
#if 0
#endif
