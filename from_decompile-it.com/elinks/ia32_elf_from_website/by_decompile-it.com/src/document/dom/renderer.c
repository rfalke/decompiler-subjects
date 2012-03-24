#include "renderer.c.h"
static struct dom_stack_context_info dom_source_renderer_context_info = { 0, { 0, &render_dom_element_source, &render_dom_attribute_source, &render_dom_node_source, &render_dom_cdata_source, &render_dom_node_source, &render_dom_node_source, &render_dom_element_source, &render_dom_node_source, 0, &render_dom_node_source, &render_dom_node_source, &render_dom_node_source }, { 0, &render_dom_element_end_source, 0, 0, 0, 0, 0, 0, 0, &render_dom_document_end, 0, 0, 0 } };
static struct dom_stack_context_info dom_rss_renderer_context_info = { 0, { 0, &dom_rss_push_element, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, &dom_rss_pop_element, 0, 0, 0, 0, 0, 0, 0, &dom_rss_pop_document, 0, 0, 0 } };
struct screen_char *realloc_line( struct document *document, int x, int y )
{
  struct line *line;
  if ( realloc_lines( &document[0], esi ) )
  {
    if ( *(int*)(realloc_lines( &document[0], x ) + 4) < x )
    {
      if ( ( ( edx + 15 ) & -16 ) < ( ( x + 15 ) & -16 ) )
      {
        if ( eax )
        {
          line = &eax[0];
          memset( line[0].chars + ( edx << 3 ), 0, ecx - ( edx << 3 ) );
        }
      }
      if ( line->chars )
      {
        if ( line->length < x )
        {
          while ( line->chars[ line->length ].data = 32, line->length++, line->length + 1 < x )
          {
          }
        }
        if ( document->width < x )
          document->width = x;
      }
    }
    return line->chars;
  }
  return line->chars;
}
void render_dom_text( struct dom_renderer *renderer, struct screen_char *template, unsigned char *string, int length )
{
#error unstructured control flow
}
void render_dom_flush( struct dom_renderer *renderer, unsigned char *string )
{
  int ecx;
  if ( assert_failed == 0 )
  {
    if ( renderer->position < renderer->source || renderer->end < renderer->position )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 457;
      elinks_internal( renderer->source );
      if ( assert_failed == 0 )
      {
        if ( string[0] < renderer->source )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 458;
          elinks_internal( renderer->source );
        }
      }
    }
    else
    {
      assert_failed = 0;
      if ( string[0] < renderer->source )
        continue;
    }
    if ( renderer->end < string[0] )
      continue;
    else
      assert_failed = 0;
  }
  if ( string - renderer->position >= 1 )
  {
    render_dom_text( &renderer[0], &renderer->styles[3], renderer->position, string - renderer->position );
    renderer->position = &string[0];
    if ( assert_failed == 0 )
    {
      if ( string[0] < renderer->source || renderer->end < string[0] )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 464;
        elinks_internal( renderer->source );
        string[0] = string[0];
      }
      else
      {
        assert_failed = 0;
      }
    }
  }
  return;
}
enum dom_code  render_dom_node_source( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  if ( assert_failed == 0 )
  {
    if ( node[0] && renderer[0] && renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 540;
      elinks_internal( "assertion node && renderer && renderer-&gt;document failed!" );
    }
  }
  if ( node->type == 5 )
  {
  }
  if ( renderer->source <= node->string.string && node->string.string + node <= renderer->end )
  {
    *(int*)(esi - renderer->position) = node->string.string - renderer->position;
    if ( assert_failed == 0 )
    {
      if ( renderer->source <= renderer->position && renderer->position <= renderer->end )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 457;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = node->string.string - renderer->position;
        if ( assert_failed == 0 )
          goto B28;
      }
B28:      if ( node->string.string < renderer->source || renderer->end < node->string.string )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 458;
        elinks_internal( "assertion check_dom_node_source(renderer, string, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = ebp_40;
      }
      else
        assert_failed = 0;
    }
    if ( ebp_40 >= 1 )
    {
      render_dom_text( &renderer[0], &renderer->styles[3], renderer->position );
      renderer->position = node->string.string;
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 464;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    renderer->position = node->string.string + node->string.length;
    if ( assert_failed == 0 )
    {
      if ( renderer->position < renderer->source || renderer->end < renderer->position )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 482;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        render_dom_text( &renderer[0], &renderer->styles[ node->type ], node->string.string, node->string.length );
        return DOM_CODE_OK;
      }
      else
        assert_failed = 0;
    }
  }
}
enum dom_code  render_dom_element_source( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  if ( assert_failed == 0 )
  {
    if ( node[0] && renderer[0] && renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 561;
      elinks_internal( "assertion node && renderer && renderer-&gt;document failed!" );
    }
  }
  if ( node->type == 5 )
  {
  }
  if ( renderer->source <= node->string.string && node->string.string + node <= renderer->end )
  {
    *(int*)(esi - renderer->position) = node->string.string - renderer->position;
    if ( assert_failed == 0 )
    {
      if ( renderer->source <= renderer->position && renderer->position <= renderer->end )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 457;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = node->string.string - renderer->position;
        if ( assert_failed == 0 )
          goto B28;
      }
B28:      if ( node->string.string < renderer->source || renderer->end < node->string.string )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 458;
        elinks_internal( "assertion check_dom_node_source(renderer, string, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = ebp_40;
      }
      else
        assert_failed = 0;
    }
    if ( ebp_40 >= 1 )
    {
      render_dom_text( &renderer[0], &renderer->styles[3], renderer->position );
      renderer->position = node->string.string;
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 464;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    renderer->position = node->string.string + node->string.length;
    if ( assert_failed == 0 )
    {
      if ( renderer->position < renderer->source || renderer->end < renderer->position )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 482;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        render_dom_text( &renderer[0], &renderer->styles[ node->type ], node->string.string, node->string.length );
        return DOM_CODE_OK;
      }
      else
        assert_failed = 0;
    }
  }
}
enum dom_code  render_dom_element_end_source( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  unsigned char *string;
  if ( assert_failed == 0 )
    assert_failed = 0;
  if ( stack->contexts[0]->info->object_size )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = *(int*)(esi + 4) == 0;
      if ( !(_Bool)( *(int*)(esi + 4) != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/dom/stack.h";
        errline = 198;
        elinks_internal( "assertion context-&gt;state_objects failed!" );
        *ebp_32 = stack->depth;
      }
    }
  }
  string[0] = *(int*)(eax + 20);
  if ( assert_failed == 0 )
  {
    if ( node && renderer[0] && renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 578;
      elinks_internal( "assertion node && renderer && renderer-&gt;document failed!" );
      string[0] = string[0];
    }
  }
  if ( esi && string[0] )
  {
    if ( renderer->source <= string[0] && string[ esi ] <= renderer->end )
    {
      render_dom_flush( &renderer[0], &string[0] );
      renderer->position = &edi;
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 586;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    render_dom_text( &renderer[0], &renderer->styles[ node[0].type ] );
  }
  return DOM_CODE_OK;
}
enum dom_code  render_dom_attribute_source( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  struct screen_char *template = stack->current[0].data + ( node[0].type << 3 ) + 40;
  if ( assert_failed == 0 )
  {
    if ( renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 621;
      elinks_internal( "assertion node && renderer-&gt;document failed!" );
    }
  }
  if ( node->type == 5 )
  {
  }
  if ( renderer->source <= node->string.string && ebp_44 + node->string.string <= renderer->end )
  {
    *(int*)(esi - renderer->position) = node->string.string - renderer->position;
    if ( assert_failed == 0 )
    {
      if ( renderer->source <= renderer->position && renderer->position <= renderer->end )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 457;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_72 = node->string.string - renderer->position;
        if ( assert_failed == 0 )
          goto B26;
      }
B26:      if ( node->string.string < renderer->source || renderer->end < node->string.string )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 458;
        elinks_internal( "assertion check_dom_node_source(renderer, string, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_72 = ebp_72;
      }
      else
        assert_failed = 0;
    }
    if ( ebp_72 >= 1 )
    {
      render_dom_text( &renderer[0], &renderer->styles[3], renderer->position );
      renderer->position = node->string.string;
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 464;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    renderer->position = node->string.length + node->string.string;
    if ( assert_failed == 0 )
    {
      if ( renderer->position < renderer->source || renderer->end < renderer->position )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 482;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
      }
      else
        assert_failed = 0;
    }
  }
  render_dom_text( &renderer[0], template, node->string.string, node->string.length );
  if ( node->data.document.children && node->data )
  {
    int quoted = node->data.attribute.quoted == 1;
    unsigned char *value = node->data.document.children - ( node->data.attribute.quoted == 1 );
    int valuelen;
    if ( renderer->source <= node->data.document.children - ( node->data.attribute.quoted == 1 ) && node->data.document.children - ( node->data.attribute.quoted == 1 ) <= renderer->end )
    {
      render_dom_flush( &renderer[0] );
      renderer->position += &renderer->source[ node->data.attribute.quoted == 1 ];
      if ( assert_failed == 0 )
      {
        if ( renderer->source[ node->data.attribute.quoted == 1 ] + renderer->position < renderer->source || renderer->end < renderer->position + renderer->canvas_x )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 633;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    if ( ( ( node->data.attribute.bits_at_12/*.2_2of4*/ & 8 ) & 255 ) && node->data.document.document + ( ( node->data.attribute.quoted == 1 ) * 2 ) + ( ( 0 - quoted ) * 2 ) >= 1 )
    {
      int skips;
      if ( node->data.document.document + ( ( node->data.attribute.quoted == 1 ) * 2 ) >= 1 )
      {
        skips = 0;
        do
        {
          if ( skips || (unsigned char)( skips ) == 0 )
          {
          }
        }
        while ( skips + 1 + 1 < renderer->source[ node->data.attribute.quoted == 1 ] );
        if ( skips >= 1 )
        {
          render_dom_text( &renderer[0], template, value, skips );
          value += &skips;
          if ( renderer->doctype == 1 && node->data.document_type.subset == 47 && node->parent == 8 && __ctype_b_loc(  ) )
          {
            mem_free( &edi );
            if ( ebp_76 )
            {
              mem_free( ebp_76 );
              if ( edi )
              {
                done_uri( renderer->base_uri );
                renderer->base_uri = &edi;
              }
            }
          }
          if ( ( ( renderer->document->nlinks + 127 ) & -128 ) < ( ( renderer->document->nlinks + 128 ) & -128 ) )
          {
            ebp_76 = ( renderer->document->nlinks + 127 ) & -128;
            *ebp_72 = ( ( renderer->document->nlinks + 128 ) & -128 ) * 52;
            if ( mem_realloc( (void*)renderer->document->links, ( ( renderer->document->nlinks + 128 ) & -128 ) * 52 ) )
            {
              renderer->document->links = (struct link*)mem_realloc( (void*)renderer->document->links, ( ( renderer->document->nlinks + 128 ) & -128 ) * 52 );
              memset( renderer->document + 212 + ( ( ( renderer->document->nlinks + 127 ) & -128 ) * 52 ), 0, ( ( ( renderer->document->nlinks + 128 ) & -128 ) * 52 ) - ( ( ( renderer->document->nlinks + 127 ) & -128 ) * 52 ) );
            }
            else
            {
              if ( skips >= 1 )
              {
                render_dom_text( &renderer[0], template, &value[ ebp_44 ], skips );
                return DOM_CODE_OK;
              }
              return DOM_CODE_OK;
            }
          }
          if ( renderer->document->links )
          {
            if ( *(int*)(edx + ( *(int*)(edi + 260) * 52 ) + 28) < ebp_44 )
            {
              ebp_76 = *(int*)(( ( renderer->document->nlinks + 127 ) & -128 ) + ( *(int*)(renderer->document + 260) * 52 ) + 28);
              *ebp_72 = ebp_72;
              if ( eax )
                memset( ebp_64 + 24 + ( edx << 3 ), 0, ecx - ( edx << 3 ) );
            }
            if ( renderer->document->links[ renderer->document->nlinks ].points && get_uri( (unsigned char*)renderer->document->links, 0 ) )
            {
              mem_free( ebp_76 );
              if ( ebp_68 )
              {
                if ( eax )
                  *(int*)(edi + 64) = renderer->document->options.default_vlink;
                else
                {
                  if ( eax )
                    *(int*)(edi + 68) = renderer->document->options.default_bookmark_link;
                  else
                    *(int*)(edi + 60) = renderer->document->options.default_link;
                }
                renderer->document->links[ renderer->document->nlinks ].npoints = ebp_44;
                renderer->document->links[ renderer->document->nlinks ].type = LINK_HYPERTEXT;
                renderer->document->links[ renderer->document->nlinks ].where = ebp_68;
                renderer->document->links[ renderer->document->nlinks ].color.background = renderer->document->options.default_style.bg;
                renderer->document->links[ renderer->document->nlinks ].color.foreground = renderer->document->options.default_vlink;
                renderer->document->links[ renderer->document->nlinks ].number = renderer->document->nlinks;
                set_term_color( ebp_32, ebp_40, renderer->document->options.color_flags, renderer->document->options.color_mode );
                render_dom_text( &renderer[0], ebp_76, ebp_52, ebp_44 );
                if ( ebp_44 >= 1 )
                {
                  ebp_44 = ebp_44;
                  *ebp_48 = renderer->canvas_x;
                  do
                  {
                    return renderer->canvas_x;
                    return renderer->canvas_x + 1;
                    return renderer->canvas_y;
                    eax += 8;
                    edx--;
                  }
                  while ( edx != 1 );
                  renderer->document->nlinks++;
                  renderer->document->bits_at_276/*.1_1of4*/ &= 254;
                }
                else
                {
                  renderer->document->nlinks++;
                  renderer->document->bits_at_276/*.1_1of4*/ &= 254;
                }
              }
            }
          }
        }
        skips = 0;
        do
        {
          if ( skips || (unsigned char)( skips ) == 0 )
          {
          }
        }
        while ( renderer->source[ node->data.attribute.quoted == 1 ] - skips <= skips + 1 + 1 );
        renderer = &renderer[0];
      }
    }
    else
    {
      render_dom_text( &renderer[0], template, renderer->position, renderer->source[ node->data.attribute.quoted == 1 ] );
    }
  }
  else
  {
  }
}
enum dom_code  render_dom_cdata_source( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  unsigned char *string = node->string.string;
  if ( assert_failed == 0 )
  {
    if ( renderer[0] && renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 696;
      elinks_internal( "assertion node && renderer && renderer-&gt;document failed!" );
    }
  }
  if ( renderer->source <= string[ -6 ] && string <= renderer->end )
  {
    *(int*)(esi - renderer->position) = string[ -6 ] - renderer->position;
    if ( assert_failed == 0 )
    {
      if ( renderer->source <= renderer->position && renderer->position <= renderer->end )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 457;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = string[ -6 ] - renderer->position;
        if ( assert_failed == 0 )
          goto B40;
      }
B40:      if ( string[ -6 ] < renderer->source || renderer->end < string[ -6 ] )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 458;
        elinks_internal( "assertion check_dom_node_source(renderer, string, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = ebp_40;
      }
      else
        assert_failed = 0;
    }
    if ( ebp_40 >= 1 )
    {
      render_dom_text( &renderer[0], &renderer->styles[3], renderer->position );
      renderer->position = &string[ -6 ];
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 464;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    render_dom_text( &renderer[0], &renderer->styles[2], renderer->position, 5 );
    renderer->position = &string[ -1 ];
    if ( assert_failed == 0 )
    {
      if ( string[ -1 ] < renderer->source || renderer->end < string[ -1 ] )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 703;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
      }
      else
        assert_failed = 0;
    }
  }
  string = &node->type;
  if ( node->type == 5 )
  {
  }
  if ( renderer->source <= node->string.string && node->string.string + node <= renderer->end )
  {
    *(int*)(esi - renderer->position) = node->string.string - renderer->position;
    if ( assert_failed == 0 )
    {
      if ( renderer->source <= renderer->position && renderer->position <= renderer->end )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 457;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = node->string.string - renderer->position;
        if ( assert_failed == 0 )
          goto B45;
      }
B45:      if ( node->string.string < renderer->source || renderer->end < node->string.string )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 458;
        elinks_internal( "assertion check_dom_node_source(renderer, string, 0) failed: renderer[%p : %p] str[%p : %p]" );
        *ebp_40 = ebp_40;
      }
      else
        assert_failed = 0;
    }
    if ( ebp_40 >= 1 )
    {
      render_dom_text( &renderer[0], &renderer->styles[3], renderer->position );
      renderer->position = node->string.string;
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 464;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        }
        else
          assert_failed = 0;
      }
    }
    renderer->position = node->string.string + node->string.length;
    if ( assert_failed == 0 )
    {
      if ( renderer->position < renderer->source || renderer->end < renderer->position )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 482;
        elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
        render_dom_text( &renderer[0], &renderer->styles[ string ], node->string.string, node->string.length );
        return DOM_CODE_OK;
      }
      else
        assert_failed = 0;
    }
  }
}
enum dom_code  render_dom_document_end( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int eax;
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  if ( renderer->source <= renderer->position && renderer->position <= renderer->end )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = 0;
      if ( renderer->end < renderer->source || renderer->end < renderer->end )
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
        errline = 458;
        elinks_internal( "assertion check_dom_node_source(renderer, string, 0) failed: renderer[%p : %p] str[%p : %p]" );
      }
      else
        assert_failed = 0;
    }
    if ( renderer->end - renderer->position >= 1 )
    {
      render_dom_text( &renderer[0], &renderer->styles[3], renderer->position, renderer->end - renderer->position );
      renderer->position = renderer->end;
      if ( assert_failed == 0 )
      {
        if ( renderer->position < renderer->source || renderer->end < renderer->position )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 464;
          elinks_internal( "assertion check_dom_node_source(renderer, renderer-&gt;position, 0) failed: renderer[%p : %p] str[%p : %p]" );
          return DOM_CODE_OK;
        }
        else
        {
          assert_failed = 0;
          return DOM_CODE_OK;
        }
      }
      else
      {
        return DOM_CODE_OK;
      }
    }
    else
    {
      return DOM_CODE_OK;
    }
  }
  else
  {
    return DOM_CODE_OK;
  }
}
enum dom_code  dom_rss_push_element( struct dom_stack *stack, struct dom_node *node, void *data )
{
  struct dom_renderer *renderer = &stack->current[0].data[0];
  if ( assert_failed == 0 )
  {
    if ( node[0] && renderer[0] && renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 777;
      elinks_internal( "assertion node && renderer && renderer-&gt;document failed!" );
      renderer = &renderer[0];
    }
  }
  if ( node->data.document_type.subset >= 8 )
  {
    if ( ( ( 1 << node->data.document_type.subset ) & 458 ) == 0 )
    {
      if ( renderer->item == 0 )
      {
        add_to_dom_node_list( &renderer->items, &node[0], -1 );
        renderer->item = &node[0];
      }
    }
    else
    if ( node->parent )
    {
      if ( renderer->node != node->parent )
      {
        renderer = &renderer[0];
      }
      else
      {
        renderer->node = &node[0];
      }
    }
  }
  return DOM_CODE_OK;
}
enum dom_code  dom_rss_pop_element( struct dom_stack *stack, struct dom_node *node, void *data )
{
  int ecx;
  int edx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  struct dom_node_list **list;
  if ( assert_failed == 0 )
  {
    if ( node[0] && renderer[0] && renderer->document )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
      errline = 824;
      elinks_internal( "assertion node && renderer && renderer-&gt;document failed!" );
    }
  }
  if ( node->data.document_type.subset >= 8 )
  {
    if ( ( ( 1 << node->data.document_type.subset ) & 458 ) == 0 )
    {
      if ( renderer->text.string && renderer->text )
      {
        mem_free( (void*)renderer->text.string );
        renderer->text.string = 0;
        renderer->text.length = 0;
      }
      renderer->item = 0;
    }
    else
    {
      if ( renderer->text.string && renderer->text && node->parent )
      {
        if ( renderer->item != node->parent )
        {
          node = &node[0];
        }
        else
        {
          if ( renderer->node == node[0].type )
          {
            if ( node->parent != 7 )
            {
              if ( ccdep1 < ccdep2 )
              {
                if ( node->parent != 9 )
                {
                  if ( node->parent == 10 )
                  {
                    list = node->parent + 16;
                    if ( node->type != 6 )
                    {
                      if ( node->type == 12 )
                        goto B34;
                    }
                    else
                    {
                      done_dom_node_list( list[0] );
                      if ( renderer->text.string && renderer->text && init_dom_node_at( renderer->node, DOM_NODE_TEXT, &renderer->text, -1 ) == 0 )
                      {
                        if ( renderer->text.string )
                          mem_free( (void*)renderer->text.string );
                        renderer->text.string = 0;
                        renderer->text.length = 0;
                      }
                      renderer->node = 0;
                    }
                  }
                }
B34:                list[0] = node->parent + 20;
              }
              else
              if ( node->parent == 1 )
                list[0] = node->type == 2 ? node->parent + 16 : node->parent + 20;
            }
            else
            {
              list[0] = node->parent + 28;
              if ( node->type == 2 )
                continue;
            }
            list[0] = 0;
          }
        }
      }
    }
  }
  return DOM_CODE_OK;
}
struct dom_string *get_rss_text( struct dom_node *node, enum rss_element_type  type )
{
  type = type;
  if ( node[0] && node[0] )
  {
    return &node->string.string[0];
  }
  return 0;
}
void render_rss_item( struct dom_renderer *renderer, struct dom_node *item )
{
  int ecx;
  struct dom_string *title = get_rss_text( &item[0], RSS_ELEMENT_TITLE );
  struct dom_string *link = get_rss_text( &item[0], RSS_ELEMENT_LINK );
  struct dom_string *author = get_rss_text( &item[0], RSS_ELEMENT_AUTHOR );
  struct dom_string *date = get_rss_text( &item[0], RSS_ELEMENT_PUBDATE );
  if ( get_rss_text( &item[0], RSS_ELEMENT_TITLE ) && title->string && (title) )
  {
    if ( item->type == renderer->channel )
    {
      unsigned char *str;
      *ebp_72 = get_rss_text( &item[0], RSS_ELEMENT_TITLE );
      if ( convert_string_elinks( renderer->convert_table, title->string, (int)title->length, renderer->document->options.cp, CSM_DEFAULT, 0, 0, 0 ) == 0 )
      {
      }
      else
        renderer->document->title = &str[0];
    }
    render_dom_text( &renderer[0], &renderer->styles[1], title->string, (int)title->length );
  }
  if ( link && link->string && (link) )
  {
    renderer->canvas_x++;
    *(int*)(*(int*)(eax + 4)) = link->string;
    link = &renderer->canvas_y;
    if ( ( ( renderer->document->nlinks + 127 ) & -128 ) < ( ( renderer->document->nlinks + 128 ) & -128 ) )
    {
      *ebp_72 = link->string;
      if ( mem_realloc( (void*)renderer->document->links, ( renderer->document->nlinks + 127 ) & -128 ) )
      {
        renderer->document->links = (struct link*)mem_realloc( (void*)renderer->document->links, ( renderer->document->nlinks + 127 ) & -128 );
        memset( renderer->document + 212 + ( ( ( renderer->document->nlinks + 127 ) & -128 ) * 52 ), 0, ( ( ( renderer->document->nlinks + 128 ) & -128 ) * 52 ) - ( ( ( renderer->document->nlinks + 127 ) & -128 ) * 52 ) );
      }
    }
    if ( renderer->document->links )
    {
      if ( renderer->document->links[ renderer->document->nlinks ].npoints <= 5 )
      {
        *ebp_72 = ebp_72;
        if ( eax )
        {
          renderer->document->links[ *(int*)(( ( renderer->document->nlinks + 127 ) & -128 ) + 260) ].points = &eax[0];
          memset( ebp_64 + 24 + ( edx << 3 ), 0, 48 - ( edx << 3 ) );
        }
      }
      if ( renderer->document->links[ renderer->document->nlinks ].points && convert_string_elinks( renderer->convert_table, link->string, (int)link->length, renderer->document->options.cp, CSM_DEFAULT, 0, 0, 0 ) )
      {
        mem_free( ebp_76 );
        if ( ebp_60 )
        {
          if ( eax )
          {
          }
          else
          {
            if ( eax )
            {
            }
            else
            {
            }
          }
          renderer->document->links[ renderer->document->nlinks ].npoints = 6;
          renderer->document->links[ renderer->document->nlinks ].type = LINK_HYPERTEXT;
          renderer->document->links[ renderer->document->nlinks ].where = ebp_60;
          renderer->document->links[ renderer->document->nlinks ].color.background = renderer->document->options.default_style.bg;
          renderer->document->links[ renderer->document->nlinks ].color.foreground = renderer->document->options.default_vlink;
          renderer->document->links[ renderer->document->nlinks ].number = renderer->document->nlinks;
          set_term_color( ebp_32, ebp_40, renderer->document->options.color_flags, renderer->document->options.color_mode );
          render_dom_text( &renderer[0], ebp_32, "[link]", 6 );
          *ebp_52 = renderer->canvas_x + 1;
          do
          {
            eax = renderer->canvas_x + 1;
            *(int*)(eax + 4) = link;
          }
          while ( edx != eax + 1 );
          date = &date[0];
          renderer->document->nlinks++;
          renderer->document->bits_at_276/*.1_1of4*/ &= 254;
        }
      }
    }
  }
  renderer->canvas_y++;
  renderer->canvas_x = 0;
  if ( author[0] && author->string && (author) )
    render_dom_text( &renderer[0], &renderer->styles[8] );
  if ( date[0] && date->string && (date) )
  {
    if ( author && author->string && (author) )
    {
      render_dom_text( &renderer );
    }
    render_dom_text( &renderer, &renderer->styles[8] );
  }
  if ( ( author[0] && author->string && (author) ) || ( date && date->string && (date) ) )
  {
    renderer->canvas_y++;
    renderer->canvas_x = 0;
  }
  return;
}
enum dom_code  dom_rss_pop_document( struct dom_stack *stack, struct dom_node *root, void *data )
{
  int eax;
  int ecx;
  struct dom_renderer *renderer = &stack->current[0].data[0];
  if ( renderer->channel )
  {
    render_rss_item( &renderer[0] );
    if ( renderer->items && (renderer->items) )
    {
      index = 0;
      do
      {
        node->type = renderer->items->entries[ index ];
        if ( renderer->items->entries[ index ] )
        {
          renderer->canvas_y++;
          renderer->canvas_x = 0;
          render_rss_item( &renderer[0] );
          renderer->items->size = renderer->items;
        }
        index++;
      }
      while ( renderer->items->size <= index + 1 );
    }
    if ( renderer->text.string && renderer->text )
    {
      mem_free( (void*)renderer->text.string );
      renderer->items->size = renderer->items;
      renderer->text.string = 0;
      renderer->text.length = 0;
    }
  {
    void *p;
    if ( ((int*)p)[0] )
    {
      mem_free( &((int*)p)[0] );
    }
  }
  }
  return DOM_CODE_FREE_NODE;
}
void render_dom_document( struct cache_entry *cached, struct document *document, struct string *buffer )
{
  int eax;
  int edx;
  int ebp_224;
  unsigned char *head;
  struct dom_renderer renderer;
  struct dom_config config;
  struct conv_table *convert_table;
  struct sgml_parser *parser;
  unsigned char *string;
  struct dom_string uri;
  head[0] = cached->head == 0 ? cached->head : "";
  string[0] = cached->uri[0].string;
  uri.string = &string[0];
  uri.length = strlen( (char*)cached->uri[0].string );
  convert_table = get_convert_table( &head[0], document->options.cp, document->options.assume_cp, document + 248, document + 272, document->options.hard_assume );
  memset( &renderer.doctype, 0, 168 );
  renderer.document = document;
  renderer.convert_table = &convert_table[0];
  renderer.convert_mode = __MOD(~( 0 - ( ( ( *(char*)(document + 81) & 64 ) < ( 1 & 255 ) ) & 1 ) ),4);
  renderer.source = buffer[0].source;
  renderer.position = buffer[0].source;
  renderer.end = buffer->length + buffer[0].source;
  renderer.base_uri = document->uri;
  document->uri->object.object++;
  ebp_224 = 0;
  do
  {
    get_dom_node_type_name( DOM_NODE_UNKNOWN );
    if ( i_want_struct_module_for_dom == 0 )
    {
      i_want_struct_module_for_dom = 1;
      css_parse_stylesheet( &default_stylesheet, 0, default_colors, "" );
      *ebp_232 = get_dom_node_type_name( parser[0].type );
    }
    if ( get_dom_node_type_name( 0 + 1 ) && *(int*)(get_dom_node_type_name( 0 + 1 ) + 4) && *ebp_232 && get_dom_node_type_name( 0 + 1 ) && *(int*)(get_dom_node_type_name( 0 + 1 ) + 28) != get_dom_node_type_name( 0 + 1 ) + 28 )
    {
      do
      {
        switch ( *(int*)(edx + 8) )
        {
        case 0:
        case 4:
        case 7:
          break;
        case 1:
        case 2:
          if ( *(int*)(edx + 12) == 1 )
          {
            if ( edx == ecx )
              break;
          }
          break;
        case 3:
          if ( edx == ecx )
            break;
          break;
        case 6:
          break;
        case 5:
          if ( edx == ecx )
            break;
          break;
        case 8:
          if ( edx == ecx )
            break;
          break;
        }
      }
      while ( edx == ecx );
    }
    else
    {
    }
    *(char*)(( ebp_2147483632 + ( ( 0 + 1 + 4 ) << 3 ) ) - 204) = ( ( *(char*)(convert_table[0].t + 16) & 1 ) & 255 ) != 0 ? 0 : 0 | 8;
    renderer.styles[ ( 0 + 1 + 4 ) - 1 - 1 - 1 - 1 ].data = 32;
    set_term_color( &renderer.styles[ ( 0 + 1 + 4 ) - 1 - 1 - 1 - 1 ], ebp_48, document->options.color_flags, document->options.color_mode );
    ebp_224++;
  }
  while ( ebp_224 == 13 );
  document->bgcolor = document->options.default_style.bg;
  document->options.bits_at_92/*.1_1of4*/ = ( (int)document->options.bits_at_92/*.1_1of4*/ & -17 ) | ( ( is_cp_utf8( document->options.cp ) & 1 ) << 4 );
  if ( c_strcasecmp( "application/rss+xml", (char*)cached->content_type ) == 0 )
    renderer.doctype = SGML_DOCTYPE_RSS;
  else
  {
    if ( c_strcasecmp( "application/docbook+xml", (char*)cached->content_type ) == 0 )
      renderer.doctype = SGML_DOCTYPE_DOCBOOK;
    else
    {
      if ( c_strcasecmp( "application/xbel+xml", (char*)cached->content_type ) == 0 || c_strcasecmp( "application/x-xbel", (char*)cached->content_type ) == 0 || c_strcasecmp( "application/xbel", (char*)cached->content_type ) == 0 )
        renderer.doctype = SGML_DOCTYPE_XBEL;
      else
      {
        if ( assert_failed == 0 )
        {
          if ( c_strcasecmp( "text/html", (char*)cached->content_type ) && c_strcasecmp( "application/xhtml+xml", (char*)cached->content_type ) )
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
            errline = 1018;
            elinks_internal( "assertion !c_strcasecmp(\"text/html\", cached-&gt;content_type) || !c_strcasecmp(\"application/xhtml+xml\", cached-&gt;content_type) failed: Couldn't resolve doctype '%s'" );
          }
          else
            assert_failed = 0;
        }
        renderer.doctype = SGML_DOCTYPE_HTML;
      }
    }
  }
  if ( init_sgml_parser( ( ( document->options.bits_at_68/*.2_2of4*/ >> 6 ) ^ 1 ) & 1, SGML_DOCTYPE_HTML, &uri, 0 ) )
  {
    if ( ( document->options.bits_at_68/*.2_2of4*/ & 64 ) & 255 )
      add_dom_stack_context( &parser->stack, &renderer.doctype, &dom_source_renderer_context_info );
    else
    if ( renderer.doctype == 2 )
    {
      *(int*)(eax + 32) = c_strcasecmp( "application/xbel+xml", (char*)cached->content_type ) + 32;
      add_dom_stack_context( c_strcasecmp( "application/xbel+xml", (char*)cached->content_type ) + 32, &renderer.doctype, &dom_rss_renderer_context_info );
      add_dom_config_normalizer( &document[0].next[0], &config, 80 );
    }
    parse_sgml( &parser[0], buffer[0].source, buffer->length, 1 );
    if ( parser->root == 0 )
    {
      done_uri( renderer.base_uri );
      done_sgml_parser( &parser[0] );
      return;
    }
    else
    {
      if ( assert_failed == 0 )
      {
        assert_failed = parser->stack.depth != 1;
        if ( parser->stack.depth != 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/dom/renderer.c";
          errline = 1079;
          elinks_internal( "assertion parser-&gt;stack.depth == 1 failed!" );
          if ( assert_failed == 0 )
            goto B43;
        }
B43:        assert_failed = 0;
      }
      parser->stack.states[ *(int*)(parser[0].type + 36) - 1 ].bits_at_8/*.1_1of4*/ &= 254;
      pop_dom_node( &parser->stack );
      done_uri( renderer.base_uri );
      done_sgml_parser( &parser[0] );
      return;
    }
  }
  else
  {
    return;
  }
}
#if 0
#endif
