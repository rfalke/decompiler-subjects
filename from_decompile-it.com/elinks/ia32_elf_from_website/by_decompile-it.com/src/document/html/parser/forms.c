#include "forms.c.h"
static struct list_menu lnk_menu;
void html_form( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *al;
  struct form *form;
  html_context->bits_at_68/*.1_1of4*/ |= 1;
  if ( init_form(  ) )
  {
    *(int*)(init_form(  ) + 32) = 0;
    form->form_num = a - html_context->startf;
    if ( get_attr_value( a, "method", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      if ( c_strcasecmp( (char*)get_attr_value( a, "method", html_context->doc_cp, HTML_ATTR_NONE ), "post" ) == 0 )
      {
        unsigned char *enctype;
        form->method = FORM_METHOD_POST;
        if ( enctype[0] )
        {
          *ebp_36 = enctype[0];
          if ( c_strcasecmp( &enctype[0], "multipart/form-data" ) == 0 )
            form->method = FORM_METHOD_POST_MP;
          else
          {
            *ebp_36 = enctype[0];
            if ( c_strcasecmp( &enctype[0], "text/plain" ) == 0 )
              form->method = FORM_METHOD_POST_TEXT_PLAIN;
          }
          mem_free( &enctype[0] );
        }
      }
      mem_free( &al[0] );
    }
    form->onsubmit = get_attr_value( a, "onsubmit", html_context->doc_cp, HTML_ATTR_NONE );
    if ( get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE ) )
      form->name = &al[0];
    if ( get_attr_value( a, "action", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      if ( *(char*)(get_attr_value( a, "action", html_context->doc_cp, HTML_ATTR_NONE )) == 0 )
      {
        enum uri_component  components;
        mem_free( (void*)get_attr_value( a, "action", html_context->doc_cp, HTML_ATTR_NONE ) );
      }
      else
      {
        strlen( (char*)get_attr_value( a, "action", html_context->doc_cp, HTML_ATTR_NONE ) );
        al[0] = get_attr_value( a, "action", html_context->doc_cp, HTML_ATTR_NONE );
        if ( ebp_36 == ' ' )
        {
          do
          {
            al[0] = al[1];
            *(int*)(strlen( (char*)get_attr_value( a, "action", html_context->doc_cp, HTML_ATTR_NONE ) ))--;
          }
          while ( al[0] == ' ' );
        }
        if ( eax )
        {
          if ( al[ eax - 1 ] == ' ' )
          {
            do
            {
              *(char*)(edx - 1) = 0;
              if ( eax == 1 )
                al[0] = al[0];
              else
            }
            while ( *(char*)(edx - 2) != ' ' );
            al[0] = al[0];
          }
          eax++;
          memmove( ebp_32, &al[0], eax );
          form->action = &eax;
          mem_free( ebp_32 );
          if ( get_target( html_context->options, a ) )
          {
            form->target = stracpy( html_context->base_target );
            xxx3 = (unsigned char*)form[0].next;
            a = 1;
            html_context = &html_context[0];
            ;
          }
          stracpy( html_context->base_target );
          form->target = stracpy( html_context->base_target );
          xxx3 = (unsigned char*)form[0].next;
          a = 1;
          html_context = &html_context[0];
          ;
        }
        memmove( ebp_32, &al[0], eax );
        form->action = &eax;
        mem_free( ebp_32 );
      }
    }
    form->action = get_uri_string( html_context->base_href, ( ( 0 - ( ( *(int*)(form[0].next + 32) < 1 ) & 1 ) ) & 3712 ) - 32321 );
    if ( assert_failed == 0 )
    {
      if ( form->action && strchr( (char*)form->action, 1 ) )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
        errline = 99;
        elinks_internal( "assertion !form-&gt;action || !strchr(form-&gt;action, POST_CHAR) failed!" );
        if ( assert_failed )
          continue;
      }
      else
        assert_failed = 0;
      if ( form->action && form->method == FORM_METHOD_GET && strchr( (char*)form->action, 63 ) )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
        errline = 104;
        elinks_internal( "assertion !form-&gt;action || form-&gt;method != FORM_METHOD_GET || !strchr(form-&gt;action, '?') failed!" );
      }
      else
        assert_failed = 0;
    }
  }
  else
  {
    return;
  }
}
struct form_control *init_form_control( enum form_type  type, unsigned char *attr, struct html_context *html_context )
{
  struct form_control *fc;
  if ( mem_calloc( 1, html_context[0].css_styles.import ) )
  {
    *(int*)(mem_calloc( 1, html_context[0].css_styles.import ) + 20) = type;
    fc->position = attr[0] - html_context->startf;
    if ( get_attr_value( &attr[0], "disabled", html_context->doc_cp, HTML_ATTR_TEST ) == 0 )
    {
    }
    fc->mode = edx;
  }
  return &fc[0];
}
void html_button( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *al;
  struct form_control *fc;
  enum form_type  type;
  int cp = html_context->doc_cp;
  html_focusable( html_context, a );
  al[0] = get_attr_value( a, "type", cp, HTML_ATTR_NONE );
  type = FC_SUBMIT;
  if ( type )
  {
    *ebp_32 = al[0];
    type = FC_BUTTON;
    if ( type && type && type )
    {
      html_context = &al[0];
    }
    mem_free( &al[0] );
    type = type;
  }
  fc = init_form_control(  );
  if ( fc )
  {
    fc->id = get_attr_value( &a[0], "id", cp, HTML_ATTR_NONE );
    fc->name = get_attr_value( &a[0], "name", cp, HTML_ATTR_NONE );
    fc->default_value = get_attr_value( &a[0], "value", cp, HTML_ATTR_NONE );
    if ( fc->default_value == 0 )
    {
      if ( al[20] == 7 )
      {
        fc->default_value = stracpy( "Submit" );
      }
      else
      if ( al[20] == 9 )
      {
        fc->default_value = stracpy( "Reset" );
      }
      else
      if ( al[20] == 10 )
      {
        fc->default_value = stracpy( "Button" );
      }
      else
      {
        fc->default_value = stracpy( "" );
      }
      if ( fc->default_value == 0 )
      {
        fc->default_value = stracpy( "" );
      }
    }
    html_context->special_f( &html_context[0], SP_CONTROL );
    &html_context->stack.list_head_elinks = &fc->next;
    &html_context->stack.list_head_elinks |= 1;
  }
  return;
}
void html_input( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int edx;
  unsigned char *al;
  struct form_control *fc;
  int cp = html_context->doc_cp;
  fc = init_form_control( FC_TEXT, a, html_context );
  if ( fc )
  {
    if ( al[0] )
    {
      *ebp_32 = al[0];
      if ( c_strcasecmp( &al[0], "text" ) == 0 )
        fc->type = FC_TEXT;
      else
      {
        *ebp_32 = al[0];
        if ( c_strcasecmp( &al[0], "hidden" ) == 0 )
          fc->type = FC_HIDDEN;
        else
        {
          *ebp_32 = al[0];
          if ( c_strcasecmp( &al[0], "button" ) == 0 )
            fc->type = FC_BUTTON;
          else
          {
            *ebp_32 = al[0];
            if ( c_strcasecmp( &al[0], "checkbox" ) == 0 )
              fc->type = FC_CHECKBOX;
            else
            {
              *ebp_32 = al[0];
              if ( c_strcasecmp( &al[0], "radio" ) == 0 )
                fc->type = FC_RADIO;
              else
              {
                *ebp_32 = al[0];
                if ( c_strcasecmp( &al[0], "password" ) == 0 )
                  fc->type = FC_PASSWORD;
                else
                {
                  *ebp_32 = al[0];
                  if ( c_strcasecmp( &al[0], "submit" ) == 0 )
                    fc->type = FC_SUBMIT;
                  else
                  {
                    *ebp_32 = al[0];
                    if ( c_strcasecmp( &al[0], "reset" ) == 0 )
                      fc->type = FC_RESET;
                    else
                    {
                      *ebp_32 = al[0];
                      if ( c_strcasecmp( &al[0], "file" ) == 0 )
                        fc->type = FC_FILE;
                      else
                      {
                        *ebp_32 = al[0];
                        if ( c_strcasecmp( &al[0], "image" ) == 0 )
                          fc->type = FC_IMAGE;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      mem_free( &al[0] );
    }
    if ( fc->type == FC_HIDDEN )
    {
    }
    else
    if ( fc->type == FC_FILE )
    {
      if ( fc->default_value == 0 )
      {
        if ( fc->type == FC_CHECKBOX )
        {
          fc->default_value = stracpy( "on" );
        }
        else
        if ( fc->type == FC_SUBMIT )
        {
          fc->default_value = stracpy( "Submit" );
        }
        else
        if ( fc->type == FC_RESET )
        {
          fc->default_value = stracpy( "Reset" );
        }
        else
        if ( fc->type == FC_BUTTON )
        {
          fc->default_value = stracpy( "Button" );
        }
        else
        {
          fc->default_value = stracpy( "" );
          fc->id = get_attr_value( &a[0], "id", cp, HTML_ATTR_NONE );
          fc->name = get_attr_value( &a[0], "name", cp, HTML_ATTR_NONE );
          fc->size = get_num( &a[0], "size", cp );
          if ( fc->size == -1 )
            fc->size = html_context->options->default_form_input_size;
          fc->size = html_context->options->default_form_input_size + 1;
          if ( html_context->options->box.width < fc->size + 1 )
            fc->size = html_context->options->box.width;
          fc->maxlength = get_num( &a[0], "maxlength", cp ) != -1 ? 0x7fffffff : get_num( &a[0], "maxlength", cp );
          if ( fc->type - 4 <= 1 )
          {
            fc->default_state = get_attr_value( &a[0], "checked", cp, HTML_ATTR_TEST ) != 0;
            fc->type = fc->type;
          }
          if ( fc->type == FC_IMAGE )
          {
            fc->alt = get_attr_value( &a[0], "alt", cp, HTML_ATTR_NONE );
            fc->type = fc->type;
          }
          if ( fc->type != FC_HIDDEN )
          {
            put_chrs( &html_context[0], " ", 1 );
            html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
            html_focusable( &html_context[0], &a[0] );
            &html_context->stack.list_head_elinks = &fc->next;
            if ( html_context->stack.list_head_elinks )
            {
              mem_free( &html_context->stack.list_head_elinks );
            }
            &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( &a[0], "title", html_context->doc_cp, HTML_ATTR_NONE );
            switch ( fc->type )
            {
            case FC_TEXT:
            case FC_PASSWORD:
            case FC_FILE:
              &html_context->stack.list_head_elinks |= 1;
              if ( fc->size >= 1 )
              {
                do
                {
                  put_chrs( &html_context[0], "_", 1 );
                }
                while ( 0 + 1 < fc->size );
                kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
                put_chrs( &html_context[0], " ", 1 );
                a = 2;
                html_context = &html_context[0];
                xxx3 = (unsigned char*)fc;
                ;
              }
              break;
            case FC_CHECKBOX:
              &html_context->stack.list_head_elinks |= 1;
              put_chrs( &html_context[0], "[&nbsp;]", 8 );
              break;
            case FC_RADIO:
              &html_context->stack.list_head_elinks |= 1;
              put_chrs( &html_context[0], "(&nbsp;)", 8 );
              break;
            case FC_IMAGE:
              if ( html_context->stack.list_head_elinks )
              {
                mem_free( &html_context->stack.list_head_elinks );
                html_context->stack.next = html_context->stack.next;
              }
              &html_context->stack.list_head_elinks = 0;
              if ( get_attr_value( &a[0], "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) || get_attr_value( &a[0], "dynsrc", html_context->doc_cp, HTML_ATTR_EAT_NL ) )
              {
                &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)join_urls( html_context->base_href, get_attr_value( &a[0], "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) );
                mem_free( (void*)get_attr_value( &a[0], "src", html_context->doc_cp, HTML_ATTR_EAT_NL ) );
              }
              &html_context->stack.list_head_elinks |= 1;
              put_chrs( &html_context[0], "[&nbsp;", 7 );
              if ( fc->alt == 0 && fc->name == 0 )
                put_chrs( &html_context[0], "Submit", 6 );
              else
              {
                put_chrs( &html_context[0], fc->name, strlen( (char*)fc->name ) );
              }
              break;
            case FC_SUBMIT:
            case FC_RESET:
            case FC_BUTTON:
              &html_context->stack.list_head_elinks |= 1;
              put_chrs( &html_context[0], "[&nbsp;", 7 );
              if ( fc->default_value )
              {
                put_chrs( &html_context[0], fc->name, strlen( (char*)fc->name ) );
              }
              break;
            case FC_TEXTAREA:
            case FC_SELECT:
            case FC_HIDDEN:
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
              errline = 257;
              elinks_internal( "bad control type" );
              break;
            default:
              break;
            }
            put_chrs( &html_context[0], "&nbsp;]", 7 );
          }
          else
          {
            a = 2;
            html_context = &html_context[0];
            xxx3 = (unsigned char*)fc;
            ;
          }
        }
        if ( fc->default_value == 0 )
        {
          fc->default_value = stracpy( "" );
        }
      }
    }
    else
    {
    }
    fc->default_value = get_attr_value( &a[0], "value", cp );
    if ( fc->default_value == 0 )
    {
    }
  }
  else
  {
    return;
  }
}
void html_select( struct html_context *html_context, unsigned char *a, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  int eax;
  int ecx;
  int edx;
  if ( get_attr_value( a, "multiple", html_context->doc_cp, HTML_ATTR_TEST ) == 0 )
  {
    html_focusable( html_context, a );
    init_menu( &lnk_menu );
    while ( 1 )
    {
      while ( html[0] < eof )
      {
        if ( html[0] == '<' )
          html[0] = html[0];
        else
        {
          eof[0] = eof;
          do
          {
            html[0] = html[1];
            if ( eof[0] <= html[1] )
              html[0] = html[0];
              html[0] = html[0];
              end[0] = &html[0];
              if ( 0 )
                done_string( ebp_52 );
              if ( 0 )
                done_string( ebp_60 );
              if ( 0 )
              {
                if ( 0 )
                {
                  do
                  {
                    if ( eof[ 0 ] )
                    {
                      mem_free( &eax );
                    }
                  }
                  while ( 0 + 1 + 1 >= 0 );
                }
                mem_free( &edx );
              }
              destroy_menu( &lnk_menu );
              end[0] = &html[0];
              return;
            else
          }
          while ( html[0] != '<' );
        }
        if ( 0 )
        {
          if ( html[0] == html )
          {
          }
          else
          {
            if ( html[0] - html )
            {
              esi = html[0] - html;
            }
          }
          if ( eax )
          {
            add_to_string( ebp_52, &eax );
            mem_free( &esi );
          }
          if ( assert_failed == 0 )
          {
            if ( html[0] && html[0] - html >= 0 )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
              errline = 255;
              elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
              if ( assert_failed )
                goto B58;
            }
            if ( edx )
            {
              *(int*)(ebp_56 + edx + 256) = ebp_56 + edx + 256;
              if ( 0 < 0 )
              {
                *ebp_108 = 0;
                if ( mem_realloc( 0, 0 ) )
                {
                  memset( 0 + mem_realloc( 0, 0 ), 0, 0 - 0 );
                }
              }
              if ( 0 )
              {
                memcpy( ebp_56 + eax, &html[0], edx );
              }
            }
          }
B58:          assert_failed = 0;
        }
        if ( html[0] + 2 <= eof && ( html[1] == '?' || html[1] == '!' ) )
        {
          html[0] = skip_comment( &html[0], eof );
        }
        else
        {
          if ( parse_element( &html[0], eof, ebp_32, ebp_44, ebp_36, ebp_40 ) )
          {
            html[0] = html[0] + 1;
            break;
          }
          else
          {
            if ( ebp_44 == 0 )
            {
              html[0] = html[0];
            }
            else
            {
              if ( *ebp_32 == '/' )
              {
                if ( ebp_44 - 1 - 1 == 0 )
                {
                  html[0] = html[0];
                }
                else
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
                  errline = 413;
                  if ( eax )
                  {
                    *ebp_44 = ebp_44;
                    *ebp_32++;
                  }
                  else
                  {
                    add_select_item( &lnk_menu, ebp_52, ebp_60, (unsigned char**)mem_realloc( 0, stracpy( "" ) << 2 ), 1, 0 != 0 );
                    end[0] = &html[0];
                    if ( 1 == 0 || mem_calloc( 1, 4 ) == 0 )
                      continue;
                    else
                    {
                      if ( init_form_control( FC_SELECT, a, html_context ) == 0 )
                      {
                        mem_free( ebp_76 );
                      }
                      else
                      {
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 28) = get_attr_value( a, "id", html_context->doc_cp, HTML_ATTR_NONE );
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 32) = get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE );
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 44) = (unsigned char)( ( ebp_96 < 0 ) ^ 1 ) ? edi : ebp_96;
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 40) = eax;
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 68) = init_form_control( FC_SELECT, a, html_context );
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 72) = mem_realloc( 0, stracpy( "" ) << 2 );
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 80) = detach_menu( &lnk_menu );
                        *(int*)(init_form_control( FC_SELECT, a, html_context ) + 76) = ebp_76;
                        menu_labels( esi + 80, "", ebp_76 );
                        put_chrs( html_context, "[", 1 );
                        html_stack_dup( html_context, ELEMENT_KILLABLE );
                        &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)init_form_control( FC_SELECT, a, html_context );
                        &html_context->stack.list_head_elinks |= 1;
                        while ( 0 + 1 > 0 )
                        {
                          if ( *(int*)(ebp_76 + ( esi << 2 )) )
                          {
                            if ( ( html_context->options->bits_at_92/*.1_1of4*/ & 16 ) & 255 )
                            {
                              if ( ebx < eax )
                                continue;
                            }
                            else
                            {
                              if ( ~strlen( *(int*)(0) ) - 1 > 0 )
                                continue;
                            }
                          }
                          ebx = ebx;
                        }
                        while ( edi < ebx )
                        {
                          put_chrs( html_context, "_", 1 );
                        }
                        kill_html_stack_item( html_context, &html_context->stack.next[0] );
                        put_chrs( html_context, "]", 1 );
                        html_context->special_f( html_context, SP_CONTROL );
                        break;
                      }
                    }
                  }
                }
              }
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
              errline = 418;
              if ( elinks_strlcasecmp( ebp_32, ebp_44, "OPTION", 6, 1 ) == 0 )
              {
                add_select_item( &lnk_menu, ebp_52, ebp_60, 0, 0, 0 );
                if ( 1 || get_attr_value( ebp_36, "disabled", html_context->doc_cp, HTML_ATTR_TEST ) )
                  continue;
                else
                {
                  if ( ( get_attr_value( ebp_36, "disabled", html_context->doc_cp, HTML_ATTR_TEST ) == 0 ? 1 : -1 ) == -1 )
                  {
                  }
                  if ( 0 < 0 )
                  {
                    *ebp_104 = 0;
                    *ebp_108 = stracpy( "" ) << 2;
                    if ( mem_realloc( 0, stracpy( "" ) << 2 ) )
                      memset( mem_realloc( 0, stracpy( "" ) << 2 ) + ( 0 << 2 ), 0, ( stracpy( "" ) << 2 ) - ( 0 << 2 ) );
                  }
                  if ( 0 == 0 )
                    continue;
                  else
                  {
                    if ( get_attr_value( ebp_36, "label", html_context->doc_cp, HTML_ATTR_NONE ) )
                    {
                      new_menu_item( &lnk_menu, get_attr_value( ebp_36, "label", html_context->doc_cp, HTML_ATTR_NONE ), 1, 0 );
                      if ( get_attr_value( ebp_36, "value", html_context->doc_cp, HTML_ATTR_NONE ) == 0 )
                        goto B121;
                    }
B121:                    init_string( ebp_52 );
                    init_string( ebp_60 );
                  }
                }
              }
              else
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
                errline = 447;
                if ( elinks_strlcasecmp( ebp_32, ebp_44, "OPTGROUP", 8, 1 ) )
                  continue;
                else
                {
                  add_select_item( &lnk_menu, ebp_52, ebp_60, ebp_28, ebp_88, ebp_92 );
                  if ( 1 )
                    new_menu_item( &lnk_menu, 0, -1, 0 );
                  if ( 1 || ( get_attr_value( ebp_36, "label", html_context->doc_cp, HTML_ATTR_NONE ) == 0 && stracpy( "" ) == 0 ) )
                  {
                  }
                  else
                  {
                    new_menu_item( &lnk_menu, get_attr_value( ebp_36, "label", html_context->doc_cp, HTML_ATTR_NONE ), -1, 0 );
                  }
                }
              }
            }
          }
        }
      }
      html[0] = html[0];
    }
  }
  else
  {
    if ( get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      html_focusable( html_context, a );
      &html_context->stack.list_head_elinks = 1;
      if ( html_context->stack.list_head_elinks )
      {
        mem_free( &html_context->stack.list_head_elinks );
        html_context->stack.next = html_context->stack.next;
        &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE );
        &html_context->stack.list_head_elinks = ~( 0 - ( ( get_attr_value( a, "disabled", html_context->doc_cp, HTML_ATTR_TEST ) < 1 ) & 1 ) ) & 2;
        return;
      }
      else
      {
        &html_context->stack.list_head_elinks = ((void)( struct css_stylesheet *, struct uri *, unsigned char *, int  )*)get_attr_value( a, "name", html_context->doc_cp, HTML_ATTR_NONE );
        &html_context->stack.list_head_elinks = ~( 0 - ( ( get_attr_value( a, "disabled", html_context->doc_cp, HTML_ATTR_TEST ) < 1 ) & 1 ) ) & 2;
        return;
      }
    }
    else
    {
      return;
    }
  }
}
void html_option( struct html_context *html_context, unsigned char *a, unsigned char *xxx3, unsigned char *xxx4, unsigned char **xxx5 )
{
  int eax;
  int ecx;
  int edx;
  struct form_control *fc;
  unsigned char *val;
  if ( html_context->stack.list_head_elinks )
  {
    if ( get_attr_value( a, "value", html_context->doc_cp, HTML_ATTR_NONE ) == 0 )
    {
      struct string str;
      unsigned char *p, *r;
      unsigned char *name;
      int namelen;
      p[0] = a[ -1 ];
      p = &a[ -1 ];
      if ( p[0] != '<' )
      {
        *(int*)(edx - 2) = a - 2;
        do
        {
          p = a - 2;
          *(int*)(p - 1) = a - 2 - 1;
        }
        while ( p[0] != '<' );
      }
      if ( init_string( &str ) )
      {
        if ( parse_element( p, html_context->eoff, 0, 0, 0, &p ) == 0 )
        {
          r[0] = p;
          html_context->eoff[0] = html_context->eoff;
          while ( html_context->eoff <= r[0] )
          {
            while ( r[0] < html_context->eoff )
            {
              if ( r[0] < html_context->eoff )
              {
                if ( r[ -2 ] <= html_context->eoff && ( r[1] == '?' || r[1] == '!' ) )
                {
                  p = skip_comment( &r[0], html_context->eoff );
                  r[0] = skip_comment( &r[0], html_context->eoff );
                  html_context->eoff[0] = html_context->eoff;
                }
                else
                {
                  if ( parse_element( &r[0], html_context->eoff, &name, &namelen, 0, &p ) )
                  {
                    add_char_to_string( &str, ( ecx & 255 ) == 0 ? ecx : 32 );
                    r[0] = p[1];
                    p++;
                  }
                  else
                  {
                    if ( namelen > 5 )
                    {
                      if ( name[0] == '/' )
                      {
                        name++;
                        namelen--;
                      }
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
                      errline = 592;
                      if ( eax )
                      {
                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
                        errline = 593;
                        if ( elinks_strlcasecmp( name, namelen, "SELECT", 6, 1 ) )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
                          errline = 594;
                          if ( elinks_strlcasecmp( name, namelen, "OPTGROUP", 8, 1 ) )
                            goto B53;
                        }
                      }
                    }
B53:                    r[0] = p;
                    html_context->eoff[0] = html_context->eoff;
                    break;
                  }
                }
              }
              val[0] = str.source;
            }
            val[0] = str.source;
          }
        }
        else
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
          errline = 565;
          elinks_internal( "parse element failed" );
          val[0] = str.source;
        }
      }
    }
    if ( init_form_control( FC_CHECKBOX, a, &html_context[0] ) == 0 )
    {
      if ( val[0] )
      {
        mem_free( &val[0] );
        return;
      }
    }
    else
    {
      fc->id = get_attr_value( a, "id", html_context->doc_cp, HTML_ATTR_NONE );
      if ( html_context->stack.list_head_elinks )
        stracpy( &html_context->stack.list_head_elinks );
      fc->name = stracpy( &html_context->stack.list_head_elinks );
      fc->default_value = &val[0];
      fc->default_state = get_attr_value( a, "selected", html_context->doc_cp, HTML_ATTR_TEST ) != 0;
      if ( get_attr_value( a, "disabled", html_context->doc_cp, HTML_ATTR_TEST ) == 0 )
        &html_context->stack.list_head_elinks = &html_context->stack.list_head_elinks;
      fc->mode = html_context->stack.list_head_elinks;
      put_chrs( &html_context[0], " ", 1 );
      html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
      &html_context->stack.list_head_elinks = &fc[0].next[0];
      &html_context->stack.list_head_elinks |= 1;
      put_chrs( &html_context[0], "[ ]", 3 );
      kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
      put_chrs( &html_context[0], " ", 1 );
      html_context->special_f( &html_context[0], SP_CONTROL );
    }
  }
  return;
}
void html_textarea( struct html_context *html_context, unsigned char *attr, unsigned char *html, unsigned char *eof, unsigned char **end )
{
  int eax;
  int ecx;
  int edx;
  struct form_control *fc;
  unsigned char *p, *t_name, *wrap_attr;
  int t_namelen;
  int cols, rows;
  int i;
  html_focusable( html_context, attr );
  if ( html < eof )
  {
    do
    {
      if ( html[0] != 13 && html[0] != 10 )
      {
        html[0] = html[0];
        break;
      }
      else
      {
        html[0] = html[1];
      }
    }
    while ( html[1] < eof[0] );
  }
  p[0] = html[0];
  fc = &html[0];
  eof[0] = eof;
  while ( p[0] < eof[0] )
  {
    if ( p[0] == '<' && parse_element( &p[0], &eof[0], &t_name, &t_namelen, 0, end ) == 0 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/forms.c";
      errline = 646;
      if ( elinks_strlcasecmp( t_name, t_namelen, "/TEXTAREA", 9, 1 ) == 0 )
      {
        html[0] = fc;
        fc = init_form_control( FC_TEXTAREA, attr, &html_context[0] );
        if ( fc )
        {
          fc->id = get_attr_value( attr, "id", html_context->doc_cp, HTML_ATTR_NONE );
          fc->name = get_attr_value( attr, "name", html_context->doc_cp, HTML_ATTR_NONE );
          p[0] = convert_string_elinks( 0, &html[0], p[0] - html[0], html_context->doc_cp, CSM_DEFAULT, 0, 0, 0 );
          fc->default_value = convert_string_elinks( 0, &html[0], p[0] - html[0], html_context->doc_cp, CSM_DEFAULT, 0, 0, 0 );
          if ( fc->default_value && p[0] )
          {
            while ( 1 )
            {
              p[0] = p[0] + 1;
              if ( p[0] == 13 )
              {
                p[0] = p[0] + 1;
                if ( p[1] == 10 || ( fc->default_value < p[0] && p[ -1 ] == 10 ) )
                {
                  p[0] = p[ -1 ] + 1;
                  memmove( &p[0], &p[0], strlen( &p[0] ) );
                }
                else
                  p[0] = 10;
              }
              if ( p[0] == 0 || p[0] == 0 )
                break;
              else
              {
                p[0] -= html[0];
              }
            }
            html_context = &html_context[0];
          }
          cols = get_num( attr, "cols", html_context->doc_cp ) + 1 <= *(int*)(html_context->options + 84) ? *(int*)(html_context->options + 84) : get_num( attr, "cols", html_context->doc_cp ) + 1;
          fc->cols = get_num( attr, "cols", html_context->doc_cp ) + 1 <= *(int*)(html_context->options + 84) ? *(int*)(html_context->options + 84) : get_num( attr, "cols", html_context->doc_cp ) + 1;
          rows = ( get_num( attr, "rows", html_context->doc_cp ) < 1 ? get_num( attr, "rows", html_context->doc_cp ) : 1 ) <= html_context->options->box.height ? html_context->options->box.height : get_num( attr, "rows", html_context->doc_cp ) < 1 ? get_num( attr, "rows", html_context->doc_cp ) : 1;
          fc->rows = ( get_num( attr, "rows", html_context->doc_cp ) < 1 ? get_num( attr, "rows", html_context->doc_cp ) : 1 ) <= html_context->options->box.height ? html_context->options->box.height : get_num( attr, "rows", html_context->doc_cp ) < 1 ? get_num( attr, "rows", html_context->doc_cp ) : 1;
          html_context->options->bits_at_92/*.1_1of4*/ |= 1;
          if ( wrap_attr[0] )
          {
            *ebp_60 = wrap_attr[0];
            if ( c_strcasecmp( &wrap_attr[0], "hard" ) == 0 || c_strcasecmp( &wrap_attr[0], "physical" ) == 0 )
              fc->wrap = FORM_WRAP_HARD;
            else
            {
              *ebp_60 = wrap_attr[0];
              if ( c_strcasecmp( &wrap_attr[0], "soft" ) == 0 || c_strcasecmp( &wrap_attr[0], "virtual" ) == 0 )
                fc->wrap = FORM_WRAP_SOFT;
              else
              {
                *ebp_60 = wrap_attr[0];
                if ( c_strcasecmp( &wrap_attr[0], "none" ) == 0 || c_strcasecmp( &wrap_attr[0], "off" ) == 0 )
                  fc->wrap = FORM_WRAP_NONE;
              }
            }
            mem_free( &wrap_attr[0] );
          }
          else
          {
            fc->wrap = get_attr_value( attr, "nowrap", html_context->doc_cp, HTML_ATTR_TEST ) == 0;
          }
          fc->maxlength = get_num( attr, "maxlength", html_context->doc_cp ) != -1 ? 0x7fffffff : get_num( attr, "maxlength", html_context->doc_cp );
          if ( rows > 1 )
          {
            ln_break( &html_context[0], 1 );
            html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
            &html_context->stack.list_head_elinks = &fc->next;
            &html_context->stack.list_head_elinks |= 1;
          }
          else
          {
            put_chrs( &html_context[0], " ", 1 );
            html_stack_dup( &html_context[0], ELEMENT_KILLABLE );
            &html_context->stack.list_head_elinks = &fc->next;
            &html_context->stack.list_head_elinks |= 1;
            if ( rows < 1 )
              kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
              put_chrs( &html_context[0], " ", 1 );
              html_context->special_f( &html_context[0], SP_CONTROL );
              return;
          }
          i = 0;
          cols = cols;
        {
          do
          {
            int j = 0;
            if ( cols >= 1 )
            {
              do
              {
                j++;
                put_chrs( &html_context[0], "_", 1 );
              }
              while ( cols <= j );
            }
            if ( i < rows - 1 )
              ln_break( &html_context[0], 1 );
            i++;
          }
          while ( i < rows );
          rows = rows;
          kill_html_stack_item( &html_context[0], &html_context->stack.next[0] );
          if ( rows > 1 )
            ln_break( &html_context[0], 1 );
            html_context->special_f( &html_context[0], SP_CONTROL );
            return;
          else
            put_chrs( &html_context[0], " ", 1 );
            html_context->special_f( &html_context[0], SP_CONTROL );
            return;
        }
        }
        else
          break;
      }
    }
    p[0] = p[1];
  }
  end[0] = &eof[0];
  return;
}
#if 0
#endif
