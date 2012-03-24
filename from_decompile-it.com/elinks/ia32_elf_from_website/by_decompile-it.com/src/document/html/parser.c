#include "parser.c.h"
int get_color( struct html_context *html_context, unsigned char *a, unsigned char *c, color_T *rgb )
{
  int eax;
  unsigned char *at;
  int r;
  if ( html_context->options[0] && html_context->options->use_document_colors >= 1 && get_attr_value( a, c, html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    mem_free( &at[0] );
    return ebp_12;
  }
  r = -1;
}
int get_bgcolor( struct html_context *html_context, unsigned char *a, color_T *rgb )
{
  if ( !html_context->options[0].color_mode || html_context->options->use_document_colors != 2 )
  {
    return -1;
  }
  return get_color( &html_context[0], a, "bgcolor", rgb );
}
unsigned char *get_target( struct document_options *options, unsigned char *a )
{
  unsigned char *v;
  if ( get_attr_value( a, "target", options->cp, HTML_ATTR_NONE ) && ( *(char*)(get_attr_value( a, "target", options->cp, HTML_ATTR_NONE )) == 0 || c_strcasecmp( &v[0], "_self" ) == 0 ) )
  {
    mem_free( &v[0] );
    options = &options->framename[0];
  }
  return &v[0];
}
void ln_break( struct html_context *html_context, int n )
{
  if ( n && html_context->stack.list_head_elinks == 0 )
  {
    while ( html_context->line_breax < n )
    {
      html_context->line_breax++;
      html_context->line_break_f( &html_context[0] );
    }
    html_context->position = 0;
    html_context->putsp = HTML_SPACE_SUPPRESS;
    return;
  }
  else
  {
    return;
  }
}
void put_chrs( struct html_context *html_context, unsigned char *start, int len )
{
  int eax;
  if ( len && html_context->stack.list_head_elinks == 0 )
  {
    if ( html_context->putsp == HTML_SPACE_SUPPRESS )
      goto B5;
    else
    if ( html_context->putsp == HTML_SPACE_ADD )
    {
      html_context->put_chars_f( &html_context[0], " ", 1 );
      html_context->position++;
      html_context->putsp = HTML_SPACE_SUPPRESS;
    }
    else
    {
      *(int*)(__ctype_b_loc(  )) = *(int*)(__ctype_b_loc(  ));
      html_context->bits_at_68/*.1_1of4*/ &= 254;
      html_context->put_chars_f( &html_context[0], &start[0], len );
      html_context->position += len;
      html_context->line_breax = 0;
      if ( html_context->was_li >= 1 )
      {
        html_context->was_li--;
      }
    }
B5:    html_context->putsp = HTML_SPACE_NORMAL;
    len--;
    if ( len != 1 )
      start[0] = start[1];
      html_context->bits_at_68/*.1_1of4*/ &= 254;
      html_context->put_chars_f( &html_context[0], &start[0], len );
      html_context->position += len;
      html_context->line_breax = 0;
    else
    {
      html_context->putsp = HTML_SPACE_SUPPRESS;
    }
  }
  return;
}
void set_fragment_identifier( struct html_context *html_context, unsigned char *attr_name, unsigned char *attr )
{
  unsigned char *id_attr;
  if ( get_attr_value( attr_name, attr, html_context->doc_cp, HTML_ATTR_NONE ) )
  {
    html_context->special_f( &html_context[0], SP_TAG );
    html_context = &id_attr[0];
  }
  return;
}
void add_fragment_identifier( struct html_context *html_context, struct part *part, unsigned char *attr )
{
  struct part *saved_part = html_context->part;
  html_context->part = part;
  html_context->special_f( html_context, SP_TAG );
  html_context->part = &saved_part[0];
  return;
}
void import_css_stylesheet( struct css_stylesheet *css, struct uri *base_uri, unsigned char *unterminated_url, int len )
{
  int ecx;
  int edx;
  struct html_context *html_context = &css->import_data[0];
  unsigned char *url;
  unsigned char *import_url;
  struct uri *uri;
  if ( assert_failed == 0 )
  {
    assert_failed = html_context[0].css_styles.import == 0;
    if ( !(_Bool)( html_context[0].css_styles.import != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
      errline = 192;
      elinks_internal( "assertion html_context failed!" );
      if ( assert_failed == 0 )
      {
        assert_failed = base_uri[0].string == 0;
        if ( !(_Bool)( base_uri[0].string != 0 ) )
          goto B5;
      }
    }
    else
    {
      assert_failed = base_uri[0].string == 0;
      if ( !(_Bool)( base_uri[0].string != 0 ) )
        goto B5;
    }
B5:    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
    errline = 193;
    elinks_internal( "assertion base_uri failed!" );
    if ( (unsigned char)( __MOD((int)html_context->options->bits_at_68/*.1_1of4*/,4) ) == 3 )
      css = &css[0];
      if ( url[0] )
      {
        import_url[0] = join_urls( &base_uri[0], &url[0] );
        mem_free( &url[0] );
        if ( import_url[0] )
        {
          uri = get_uri( &import_url[0], URI_BASE );
          mem_free( &import_url[0] );
          if ( uri )
          {
            html_context->special_f( &html_context[0], SP_STYLESHEET );
            import_css( &css[0], uri );
            css = &uri->string[0];
          }
          return;
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
    else
    {
      return;
    }
  }
  if ( (unsigned char)( __MOD((int)html_context->options->bits_at_68/*.1_1of4*/,4) ) == 3 )
  {
  }
  else
  {
    return;
  }
}
void html_focusable( struct html_context *html_context, unsigned char *a )
{
  int edx;
  unsigned char *accesskey;
  int cp;
  int tabindex;
  &html_context->stack.list_head_elinks = 0;
  &html_context->stack.list_head_elinks = -2147483648;
  if ( a )
  {
    cp = html_context->doc_cp;
    if ( get_attr_value( &a[0], "accesskey", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      &html_context->stack.list_head_elinks = !accesskey[0] || accesskey[1] || ( ( *(char*)(*(int*)(__ctype_b_loc(  )) + ( accesskey[0] * 2 ) + 1) & 64 ) & 255 ) == 0 ? 0 : ebp_36;
      mem_free(  );
    }
    if ( tabindex - 1 <= 32765 )
      &html_context->stack.list_head_elinks = ( get_num( &a[0], "tabindex", html_context->doc_cp ) & 32767 ) << 16;
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "onclick", cp, HTML_ATTR_NONE );
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "ondblclick", cp, HTML_ATTR_NONE );
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "onmouseover", cp, HTML_ATTR_NONE );
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "onhover", cp, HTML_ATTR_NONE );
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "onfocus", cp, HTML_ATTR_NONE );
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "onmouseout", cp, HTML_ATTR_NONE );
    if ( html_context->stack.list_head_elinks )
    {
      mem_free( &html_context->stack.list_head_elinks );
      html_context->stack.next = html_context->stack.next;
    }
    &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "onblur", cp, HTML_ATTR_NONE );
  }
  return;
}
void html_skip( struct html_context *html_context, unsigned char *a )
{
  &html_context->stack.list_head_elinks = 1;
  &html_context->stack.list_head_elinks = 1;
  return;
}
void process_head( struct html_context *html_context, unsigned char *head )
{
  int eax;
  int ecx;
  int edx;
  if ( parse_header( head, "Refresh", 0 ) )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = 0;
      if ( *(char*)(parse_header( head, "Refresh", 0 )) )
      {
        if ( c_strcasestr( (char*)parse_header( head, "Refresh", 0 ), "url" ) )
        {
          if ( *(char*)(c_strcasestr( (char*)parse_header( head, "Refresh", 0 ), "url" ) + 3) )
          {
            do
            {
              if ( eax != '=' && eax < ' ' )
              {
                while ( 1 )
                {
                  if ( *(char*)(edx + eax) < ' ' )
                  {
                    if ( ecx != ';' )
                      continue;
                  }
                  else
                  if ( ecx != 9 && ecx != ' ' )
                    html_context = &html_context[0];
                  else
                  {
                  }
                  if ( 0 + 1 )
                  {
                    if ( *(char*)(( edx + eax ) - 1) != 9 && ecx != ' ' )
                      html_context = &html_context[0];
                    else
                    {
                      do
                      {
                        if ( eax == 1 )
                        {
                          eax = 0 + 1;
                          html_context = &html_context[0];
                        }
                        else
                      }
                      while ( *(char*)(ecx - 2) != 9 && edx != ' ' );
                    }
                    if ( 0 + 1 <= 1 || edx != '\'' || *(char*)(( edx + eax ) - 1) != '\'' )
                    {
                      eax = 0 + 1;
                      html_context = &html_context[0];
                    }
                    else
                    {
                      eax = 0 + 1;
                      do
                      {
                        edx++;
                      }
                      while ( ecx - 2 > 1 && edx == '\'' && *(char*)(edi - 2) == '\'' );
                    }
                  }
                  if ( eax )
                  {
                    if ( *(char*)(parse_header( head, "Refresh", 0 )) != ';' )
                    {
                      if ( *(char*)(parse_header( head, "Refresh", 0 )) - 48 >= 9 )
                      {
                        *(int*)(__errno_location(  )) = 0;
                        if ( *(int*)(__errno_location(  )) == 34 || edx > 0x2a300 )
                        {
                        }
                        else
                        if ( *(int*)(__errno_location(  )) )
                          mem_free( (void*)get_uri_string( html_context->base_href, URI_ORIGINAL ) );
                          mem_free( (void*)parse_header( head, "Refresh", 0 ) );
                      }
                    }
                    html_focusable( &html_context[0], 0 );
                    put_link_line( "Refresh: ", &edi, ebp_60, html_context->options->framename, &html_context[0] );
                    html_context->special_f( &html_context[0], SP_REFRESH );
                    mem_free( ebp_60 );
                  }
                }
              }
              else
            }
            while ( *(char*)(edx + 1) );
          }
          if ( stracpy( "" ) )
            continue;
        }
        if ( assert_failed )
          assert_failed = 0;
          if ( get_uri_string( html_context->base_href, URI_ORIGINAL ) )
            continue;
          else
            mem_free( (void*)parse_header( head, "Refresh", 0 ) );
      }
    }
    assert_failed = 0;
    if ( *(char*)(parse_header( head, "Refresh", 0 )) )
    {
      if ( *(char*)(parse_header( head, "Refresh", 0 )) == ' ' || *(char*)(parse_header( head, "Cache-Control", 0 )) == 9 )
      {
        ebx = parse_header( head, "Refresh", 0 );
        do
        {
          if ( *(char*)(eax + 1) == 0 )
            continue;
          else
          {
          }
        }
        while ( *(char*)(parse_header( head, "Refresh", 0 )) != 9 && *(char*)(1 + 1) != ' ' );
        while ( edx - 48 >= 9 )
        {
          *(int*)(*(char*)(eax + 1)) = *(char*)(eax + 1);
        }
        if ( ( edx & 255 ) && eax/*.1_1of4*/ )
        {
          if ( edx != ' ' && edx != 9 )
          {
          }
          else
          do
          {
            if ( *(char*)(eax + 1) == 0 )
              continue;
            else
            {
              html_context = &html_context[0];
            }
          }
          while ( edx != 9 && edx != ' ' );
          html_context = &html_context[0];
          if ( *(char*)(1 + 1) != ',' && *(char*)(1 + 1) != ';' )
            html_context = &html_context[0];
          else
          {
            if ( *(char*)(1 + 2) )
            {
              if ( eax != ' ' && eax != 9 )
              {
              }
              else
              do
              {
                if ( *(char*)(ebp_44 + 1 + 1) == 0 )
                  continue;
                else
                {
                  html_context = &html_context[0];
                }
              }
              while ( eax != 9 && *(char*)(ebp_44 + 1 + 1) != ' ' );
              html_context = &html_context[0];
              if ( strlen( ebp_44 + 1 ) )
              {
                if ( *(char*)(ebp_44 + 1 + strlen( ebp_44 + 1 )) != ' ' && ecx != 9 )
                  html_context = &html_context[0];
                else
                do
                {
                  if ( eax == 1 )
                    continue;
                  else
                }
                while ( *(char*)(edx - 1) != 9 && ecx != ' ' );
                if ( eax == 0 )
                  continue;
              }
            }
          }
        }
      }
      else
      {
      }
    }
  }
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
  {
    if ( parse_header( head, "Pragma", 0 ) )
    {
      mem_free( (void*)parse_header( head, "Pragma", 0 ) );
      if ( strstr( (char*)parse_header( head, "Pragma", 0 ), "no-cache" ) )
      {
        html_context->special_f( &html_context[0], SP_CACHE_CONTROL );
        return;
      }
    }
    if ( parse_header( head, "Cache-Control", 0 ) )
    {
      if ( strstr( (char*)parse_header( head, "Cache-Control", 0 ), "no-cache" ) == 0 && strstr( (char*)parse_header( head, "Cache-Control", 0 ), "no-cache" ) == 0 )
      {
        strstr( 0 + 1, "max-age=" );
        if ( assert_failed == 0 )
          assert_failed = 0;
        if ( eax )
        {
          timeval_from_seconds( &edi, eax );
          timeval_now( ebp_36 );
          timeval_add_interval( ebp_36, ebp_44 );
        }
        mem_free( &ebx );
      }
      else
        mem_free( (void*)parse_header( head, "Cache-Control", 0 ) );
        html_context->special_f( &html_context[0], SP_CACHE_CONTROL );
        return;
    }
    else
    {
    }
    if ( parse_header( head, "Expires", 0 ) )
    {
      if ( strstr( (char*)parse_header( head, "Expires", 0 ), "now" ) )
      {
        timeval_now( ebp_44 );
      }
      else
      {
      }
      mem_free( (void*)parse_header( head, "Expires", 0 ) );
    }
    if ( 0 )
    {
      html_context->special_f( &html_context[0], SP_CACHE_EXPIRES );
      return;
    }
    return;
  }
  else
  {
    return;
  }
}
int get_image_map( unsigned char *head, unsigned char *pos, unsigned char *eof, struct menu_item **menu, struct memory_list **ml, struct uri *uri, struct document_options *options, unsigned char *target_base, int to, int def, int hdef )
{
  int eax;
  int ecx;
  int edx;
  struct conv_table *ct;
  struct string hd;
  if ( init_string( &hd ) )
  {
    if ( head[0] )
      add_to_string( &hd, &head[0] );
    scan_http_equiv( pos, &eof[0], &hd, 0, options );
    ct = get_convert_table( hd.source, to, def, 0, 0, hdef );
    done_string( &hd );
    menu[0] = (struct menu_item*)mem_calloc( 1, 32 );
    if ( menu )
    {
      while ( 1 )
      {
        pos[0] = pos;
        while ( eof[0] <= pos[1] )
        {
          if ( pos[0] == '<' )
          {
            if ( pos[1] + 2 <= eof[0] && ( pos[1] == '?' || pos[1] == '!' ) )
            {
              pos = skip_comment( &pos[1], &eof[0] );
            }
            else
            {
              if ( parse_element( &pos[1], &eof[0], ebp_32, ebp_28, ebp_36, &pos ) )
              {
                pos++;
              }
              else
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                errline = 550;
                if ( elinks_strlcasecmp( ebp_32, ebp_28, "MAP", 3, 1 ) == 0 )
                {
                  if ( uri && uri->fragment )
                  {
                    if ( get_attr_value( ebp_36, "name", options->cp, HTML_ATTR_NONE ) )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                      errline = 558;
                      if ( elinks_strlcasecmp( get_attr_value( ebp_36, "name", options->cp, HTML_ATTR_NONE ), -1, uri->fragment, (int)uri->bits_at_52/*.1_2of4*/, 1 ) )
                      {
                        mem_free( &pos[1] );
                        break;
                      }
                      else
                        mem_free( (void*)get_attr_value( ebp_36, "name", options->cp, HTML_ATTR_NONE ) );
                    }
                  }
                  if ( pos < eof[0] )
                  {
                    ml[0] = 0;
                    do
                    {
                      pos[0] = pos;
                      while ( pos < eof[0] )
                      {
                        do
                        {
                          if ( *(char*)(skip_comment( &pos[1], &eof[0] ) + 1) == '<' )
                          {
                            if ( skip_comment( &pos[1], &eof[0] ) + 1 + 2 <= eof[0] && ( *(char*)(skip_comment( &pos[1], &eof[0] ) + 1 + 1) == '?' || pos[1] == '!' ) )
                            {
                              pos = &eax;
                            }
                            else
                            {
                              if ( eax )
                              {
                                pos++;
                                break;
                              }
                              else
                              {
                                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                errline = 650;
                                if ( elinks_strlcasecmp( ebp_32, ebp_36, "A", 1, 1 ) == 0 )
                                {
                                  while ( init_string( ebp_56 ) == 0 )
                                  {
                                    if ( pos < eof[0] )
                                    {
                                      if ( pos[0] != '<' )
                                      {
                                        esi = pos;
                                        do
                                        {
                                          if ( eof[0] <= pos[1] + 1 )
                                            goto B61;
                                          else
                                        }
                                        while ( edx != '<' );
                                        if ( esi != edx )
                                        {
                                          if ( assert_failed == 0 )
                                          {
                                            if ( edx - esi >= 0 )
                                              assert_failed = 0;
                                            else
                                            {
                                              assert_failed = 1;
                                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                                              errline = 255;
                                              elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                                              if ( assert_failed )
                                                goto B74;
                                            }
                                            if ( edx == 0 )
                                            {
                                              pos = ebp_40;
                                              if ( ebp_40 + 2 <= eof[0] && ( pos[1] == '?' || pos[1] == '!' ) )
                                              {
                                                pos = skip_comment( pos, &eof[0] );
                                              }
                                              else
                                              {
                                                if ( parse_element( pos, &eof[0], 0, 0, 0, ebp_40 ) == 0 )
                                                {
                                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                                  errline = 605;
                                                  if ( elinks_strlcasecmp( ebp_32, ebp_36, "A", 1, 1 ) )
                                                  {
                                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                                    errline = 606;
                                                    if ( elinks_strlcasecmp( ebp_32, ebp_36, "/A", 2, 1 ) )
                                                    {
                                                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                                      errline = 607;
                                                      if ( elinks_strlcasecmp( head, ebp_60, "MAP", 3, 1 ) )
                                                      {
                                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                                        errline = 608;
                                                        if ( elinks_strlcasecmp( head, head, ebp_60, "/MAP", 4 ) )
                                                        {
                                                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                                          errline = 609;
                                                          if ( elinks_strlcasecmp( head, ebp_60, "AREA", 4, 1 ) )
                                                          {
                                                            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                                            errline = 610;
                                                            if ( elinks_strlcasecmp( head, ebp_60, "/AREA", 5, 1 ) == 0 )
                                                              goto B164;
                                                            else
                                                            {
                                                              pos = ebp_40;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
B164:                                                  if ( eof[0] <= pos )
                                                  {
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
                                              *(int*)(ebp_52 + edx + 256) = ebp_52 + ebp_88 + 256;
                                              if ( 0 < 0 )
                                              {
                                                *ebp_88 = ebp_88;
                                                *ebp_84 = 0;
                                                if ( mem_realloc( ebp_56, 0 ) )
                                                {
                                                  memset( 0 + mem_realloc( ebp_56, 0 ), 0, 0 - 0 );
                                                }
                                              }
                                              if ( ebp_56 )
                                              {
                                                memcpy( ebp_52 + ecx, &esi, edx );
                                                *(char*)(ebp_52 + ebp_88 + ebp_56) = 0;
                                              }
                                            }
                                          }
B74:                                          assert_failed = 0;
                                        }
                                      }
                                    }
B61:                                    done_string( ebp_56 );
                                    break;
                                  }
                                  pos = &eof[0];
                                  break;
                                }
                                else
                                {
                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                  errline = 655;
                                  if ( elinks_strlcasecmp( ebp_32, ebp_36, "AREA", 4, 1 ) == 0 )
                                  {
                                    if ( get_attr_value( ebp_28, "alt", options->cp, HTML_ATTR_NONE ) )
                                    {
                                      mem_free( (void*)get_attr_value( ebp_28, "alt", options->cp, HTML_ATTR_NONE ) );
                                    }
                                  }
                                  else
                                  {
                                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
                                    errline = 669;
                                    if ( elinks_strlcasecmp( ebp_32, ebp_36, "/MAP", 4, 1 ) == 0 )
                                    {
                                      add_to_ml( ml );
                                      break;
                                    }
                                  }
                                }
                                if ( get_target( options ) == 0 && stracpy( target_base != 0 ? "" : target_base ) == 0 )
                                {
                                  if ( ebp_64 )
                                  {
                                    mem_free( ebp_64 );
                                    pos[0] = pos;
                                  }
                                }
                                else
                                {
                                  if ( mem_alloc( 8 ) == 0 )
                                  {
                                    if ( ebp_64 )
                                      mem_free( ebp_64 );
                                    mem_free( ebp_60 );
                                    pos[0] = pos;
                                  }
                                  else
                                  {
                                    if ( get_attr_value( ebp_28, "href", options->cp, HTML_ATTR_EAT_NL ) == 0 )
                                    {
                                      if ( ebp_64 )
                                        mem_free( ebp_64 );
                                      mem_free( ebp_60 );
                                      mem_free( ebp_72 );
                                      pos[0] = pos;
                                    }
                                    else
                                    {
                                      *(int*)(mem_alloc( 8 )) = join_urls( uri, get_attr_value( ebp_28, "href", options->cp, HTML_ATTR_EAT_NL ) );
                                      mem_free( (void*)get_attr_value( ebp_28, "href", options->cp, HTML_ATTR_EAT_NL ) );
                                      if ( *(int*)(mem_alloc( 8 )) == 0 )
                                      {
                                        if ( ebp_64 )
                                          mem_free( ebp_64 );
                                      }
                                      else
                                      {
                                        *(int*)(mem_alloc( 8 ) + 4) = get_target( options );
                                        if ( menu[0] )
                                        {
                                          do
                                          {
                                            if ( eax == 0 && eax == 0 )
                                            {
                                              eof[0] = eof[0];
                                              mem_free( ebp_68 );
                                              mem_free( *(int*)(ebp_72 + 4) );
                                              mem_free( ebp_72 );
                                              if ( ebp_64 )
                                              {
                                                mem_free( ebp_64 );
                                                pos[0] = pos;
                                              }
                                            }
                                            else
                                          }
                                          while ( menu[0][2].text );
                                          eof[0] = eof[0];
                                        }
                                        if ( ebp_64 )
                                        {
                                          clr_spaces( ebp_64 );
                                          *ebp_84 = ebp_84;
                                          if ( *ebp_64 == 0 )
                                          {
                                            mem_free( &eax );
                                            *ebp_84 = ebp_84;
                                          }
                                          else
                                          {
                                            *ebp_84 = ebp_84;
                                            if ( mem_realloc( (void*)menu[0], ( 0 + 1 + 2 ) << 5 ) )
                                            {
                                              menu[0] = (struct menu_item*)mem_realloc( (void*)menu[0], ( 0 + 1 + 2 ) << 5 );
                                              if ( ( (unsigned char)( menu + ecx ) & 1 ) & 255 )
                                              {
                                              }
                                              if ( edi & 2 )
                                              {
                                              }
                                              memset( *(int*)(0), 0, ( esi >> 2 ) * 4 );
                                              if ( !1 )
                                                edi = 0;
                                              if ( esi & 1 )
                                                edi = 0;
                                              *(int*)(edx + 12) = map_selected;
                                              edx = ebp_64;
                                              *(int*)(edx + 20) = 64;
                                              *(int*)(edx + 16) = mem_alloc( 8 );
                                            }
                                            add_to_ml( ml );
                                            pos[0] = pos;
                                          }
                                        }
                                        *ebp_84 = ebp_84;
                                        if ( eax == 0 )
                                        {
                                          mem_free( ebp_60 );
                                        }
                                        else
                                        {
                                          *ebp_84 = ebp_84;
                                        }
                                      }
                                      mem_free(  );
                                      mem_free( ebp_72 );
                                      pos[0] = pos;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else
                          {
                            pos = skip_comment( &pos[1], &eof[0] ) + 1 + 1;
                          }
                        }
                        while ( skip_comment( &pos[1], &eof[0] ) + 1 + 1 < eof[0] );
                        break;
                      }
                      freeml( ml[0] );
                      mem_free( (void*)menu[0] );
                      return -1;
                    }
                    while ( elinks_strlcasecmp( ebp_32, ebp_36, "/MAP", 4, 1 ) == 0 );
                  }
                }
              }
            }
          }
          else
          {
            pos = pos[1] + 1;
          }
          mem_free( (void*)menu[0] );
          menu[0] |= -1;
          break;
        }
      }
    }
  }
  return 0;
}
void *init_html_parser_state( struct html_context *html_context, enum html_element_mortality_type  type, int align, int margin, int width )
{
  html_stack_dup( html_context, type );
  html_context->stack.next[29] = align;
  if ( type == ELEMENT_IMMORTAL )
  {
    &html_context->stack.list_head_elinks = &margin;
    &html_context->stack.list_head_elinks = &margin;
    &html_context->stack.list_head_elinks = &width;
    &html_context->stack.list_head_elinks = 0;
    &html_context->stack.list_head_elinks = 0;
    &html_context->stack.list_head_elinks = 0;
    &html_context->stack.list_head_elinks = 0;
  }
  return html_context->stack.next;
}
void done_html_parser_state( struct html_context *html_context, void *state )
{
  struct html_element *element;
  html_context->line_breax = 1;
  if ( html_context->stack.next != state )
  {
    element = &element[0];
    do
    {
      kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
    }
    while ( html_context->stack.next == element[0].next );
  }
  element->type = ELEMENT_KILLABLE;
  html_context = &html_context[0];
  state = html_context->stack.next;
}
struct html_context *init_html_parser( struct uri *uri, struct document_options *options, unsigned char *start, unsigned char *end, struct string *head, struct string *title, void (*put_chars)( struct html_context *, unsigned char *, int  ), void (*line_break)( struct html_context * ), void *(*special)( struct html_context *, enum html_special_type   ) )
{
  int edx;
  struct html_context *html_context;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( options[0].color_mode == 0 ) | ( uri[0].string == 0 ) ) & 1;
    if ( ( ( options[0].color_mode == 0 ) | ( uri[0].string == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
      errline = 873;
      elinks_internal( "assertion uri && options failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( mem_calloc( 1, 100 ) )
    {
      *(int*)(mem_calloc( 1, 100 )) = import_css_stylesheet;
      html_context->css_styles.selectors.prev = mem_calloc( 1, 100 ) + 8;
      html_context->css_styles.selectors.next = mem_calloc( 1, 100 ) + 8;
      html_context->stack.prev = html_context->stack.next;
      html_context->stack.next = html_context->stack.next;
      html_context->startf = start;
      html_context->put_chars_f = put_chars;
      html_context->line_break_f = line_break;
      html_context->special_f = special;
      uri->object.refcount = uri->object.refcount;
      html_context->base_href = &uri[0];
      if ( options->framename )
      {
        stracpy( options->framename );
        *ebp_28 = html_context->stack.next;
      }
      html_context->base_target = stracpy( options->framename );
      html_context->options = &options[0];
      scan_http_equiv( start, end, head, title, &options[0] );
      *ebp_28 = ebp_28;
      if ( mem_calloc( 1, 180 ) == 0 )
      {
        html_context[0].css_styles.import = 0;
        return &html_context[0];
      }
      *(int*)(mem_calloc( 1, 180 ) + 4) = edx;
      *(int*)(mem_calloc( 1, 180 )) = edx;
      edx = mem_calloc( 1, 180 );
      *(int*)(*(int*)(mem_calloc( 1, 180 )) + 4) = mem_calloc( 1, 180 );
      html_context->stack.next[3] = 0;
      html_context->stack.next[6] = 3;
      html_context->stack.next[9] = 0;
      html_context->stack.next[8] = 0;
      html_context->stack.next[7] = 0;
      html_context->stack.next[28] = 0;
      html_context->stack.next[27] = 0;
      html_context->stack.next[26] = 0;
      html_context->stack.next[25] = 0;
      html_context->stack.next[24] = 0;
      html_context->stack.next[23] = 0;
      html_context->stack.next[22] = 0;
      html_context->stack.next[18] = 0;
      html_context->stack.next[11] = 0;
      html_context->stack.next[10] = 0;
      html_context->stack.next[3] = options->default_style.attr;
      html_context->stack.next[4] = options->default_style.fg;
      html_context->stack.next[5] = options->default_style.bg;
      html_context->stack.next[12] = options->default_link;
      html_context->stack.next[13] = options->default_vlink;
      html_context->stack.next[14] = options->default_bookmark_link;
      html_context->stack.next[15] = options->default_image_link;
      html_context->stack.next[29] = 0;
      html_context->stack.next[30] = options->margin;
      html_context->stack.next[31] = options->margin;
      html_context->stack.next[32] = options->box.width;
      html_context->stack.next[34] = 0;
      html_context->stack.next[33] = 0;
      html_context->stack.next[35] = options->margin;
      html_context->stack.next[36] = 0;
      html_context->stack.next[37] = options->default_style.bg;
      html_context->stack.next[38] = 0;
      html_context->stack.next[39] = 0;
      html_context->stack.next[40] = 0;
      html_context->stack.next[41] = 0;
      html_context->stack.next[42] = 1;
      html_context->stack.next[2] = 1;
      html_context->bits_at_68/*.1_1of4*/ &= 247;
      html_context->table_level = 0;
      html_context->css_styles.import_data = html_context[0].css_styles.import;
      if ( ( options->bits_at_68/*.1_1of4*/ & 1 ) & 255 )
      {
        mirror_css_stylesheet( &default_stylesheet, &html_context->css_styles.import_data[0] );
      }
      return &html_context[0];
    }
    else
    {
      return &html_context[0];
    }
  }
B2:  assert_failed = 0;
  html_context[0].css_styles.import = 0;
  return &html_context[0];
}
void done_html_parser( struct html_context *html_context )
{
  if ( ( html_context->options->bits_at_68/*.1_1of4*/ & 1 ) & 255 )
    done_css_stylesheet( &html_context[0].css_styles );
  mem_free( (void*)html_context->base_target );
  done_uri( html_context->base_href );
  kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
  if ( assert_failed == 0 )
  {
    assert_failed = html_context->stack.next != html_context->stack.next;
    if ( html_context->stack.next != html_context->stack.next )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser.c";
      errline = 965;
      elinks_internal( "assertion list_empty(html_context-&gt;stack) failed: html stack not empty after operation" );
      if ( assert_failed )
      {
        assert_failed = 0;
        html_context->stack.prev = html_context->stack.next;
        html_context->stack.next = html_context->stack.next;
        html_context = &html_context[0];
      }
      else
      {
        html_context = &html_context[0];
      }
    }
    else
    {
      html_context = &html_context[0];
    }
  }
  else
  {
    assert_failed = 0;
    html_context->stack.prev = html_context->stack.next;
    html_context->stack.next = html_context->stack.next;
    html_context = &html_context[0];
  }
}
#if 0
#endif
