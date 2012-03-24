#include "apply.c.h"
static css_applier_T css_appliers[10] = { 0, &css_apply_background_color, &css_apply_background_color, &css_apply_color, &css_apply_display, &css_apply_font_attribute, &css_apply_font_attribute, &css_apply_text_align, &css_apply_font_attribute, &css_apply_font_attribute };
void css_apply_color( struct html_context *html_context, struct html_element *element, struct css_property *prop )
{
  if ( assert_failed == 0 )
  {
    assert_failed = prop->value_type != CSS_VT_COLOR;
    if ( prop->value_type != CSS_VT_COLOR )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
      errline = 46;
      elinks_internal( "assertion prop-&gt;value_type == CSS_VT_COLOR failed!" );
    }
  }
  if ( html_context->options[0] && html_context->options->use_document_colors >= 1 )
  {
    element->attr.style.fg = prop->value.none;
  }
  return;
}
void css_apply_background_color( struct html_context *html_context, struct html_element *element, struct css_property *prop )
{
  if ( assert_failed == 0 )
  {
    assert_failed = prop->value_type != CSS_VT_COLOR;
    if ( prop->value_type != CSS_VT_COLOR )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
      errline = 57;
      elinks_internal( "assertion prop-&gt;value_type == CSS_VT_COLOR failed!" );
    }
  }
  if ( html_context->options[0] && html_context->options->use_document_colors == 2 )
  {
    element->attr.style.bg = prop->value.none;
    return;
  }
  return;
}
void css_apply_display( struct html_context *html_context, struct html_element *element, struct css_property *prop )
{
  if ( assert_failed == 0 )
  {
    assert_failed = prop->value_type != CSS_VT_DISPLAY;
    if ( prop->value_type != CSS_VT_DISPLAY )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
      errline = 67;
      elinks_internal( "assertion prop-&gt;value_type == CSS_VT_DISPLAY failed!" );
    }
  }
  if ( prop->value.none == 0 )
  {
    element->linebreak = 0;
    return;
  }
  if ( prop->value.none == 1 )
  {
    element->linebreak = 2;
    return;
  }
  errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
  errline = 80;
  html_context = "Bad prop-&gt;value.display %d";
  element = &prop->value.none[0];
}
void css_apply_font_attribute( struct html_context *html_context, struct html_element *element, struct css_property *prop )
{
  if ( assert_failed == 0 )
  {
    assert_failed = prop->value_type != CSS_VT_FONT_ATTRIBUTE;
    if ( prop->value_type != CSS_VT_FONT_ATTRIBUTE )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
      errline = 89;
      elinks_internal( "assertion prop-&gt;value_type == CSS_VT_FONT_ATTRIBUTE failed!" );
      element->attr.style.attr |= prop->value.none[0];
      element->attr.style.attr = ~prop->value.font_attribute.rem & ( prop->value.none | element->attr.style.attr );
      return;
    }
    else
    {
      element->attr.style.attr |= prop->value.none[0];
      element->attr.style.attr = ~prop->value.font_attribute.rem & ( prop->value.none | element->attr.style.attr );
      return;
    }
  }
  else
  {
    element->attr.style.attr |= prop->value.none[0];
    element->attr.style.attr = ~prop->value.font_attribute.rem & ( prop->value.none | element->attr.style.attr );
    return;
  }
}
void css_apply_text_align( struct html_context *html_context, struct html_element *element, struct css_property *prop )
{
  if ( assert_failed == 0 )
  {
    assert_failed = prop->value_type != CSS_VT_TEXT_ALIGN;
    if ( prop->value_type != CSS_VT_TEXT_ALIGN )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
      errline = 101;
      elinks_internal( "assertion prop-&gt;value_type == CSS_VT_TEXT_ALIGN failed!" );
      element->parattr.align = prop->value.none[0];
      return;
    }
  }
  element->parattr.align = prop->value.none[0];
  return;
}
void examine_element( struct html_context *html_context, struct css_selector *base, enum css_selector_type  seltype, enum css_selector_relation  rel, struct list_head_elinks *selectors, struct html_element *element )
{
  struct css_selector *selector;
  if ( seltype == CST_ELEMENT )
  {
    if ( element->namelen )
    {
      if ( find_css_selector( selectors, CST_ELEMENT, rel, "*", 1 ) )
      {
        merge_css_selectors( &base[0], find_css_selector( selectors, CST_ELEMENT, rel, "*", 1 ) );
        if ( html_context->stack.next != element[0].next )
        {
        {
          do
          {
            struct html_element *ancestor;
            examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_ANCESTOR, &selector->leaves, &ancestor[0] );
          }
          while ( ancestor->next == html_context->stack.next );
          examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_PARENT, &selector->leaves, &element[0] );
        }
        }
        examine_element( &html_context[0], &base[0], CST_ID, CSR_SPECIFITY, &selector->leaves, element );
      }
      selector = find_css_selector( selectors, CST_ELEMENT, rel, element->name, element->namelen );
      if ( find_css_selector( selectors, CST_ELEMENT, rel, element->name, element->namelen ) )
      {
        merge_css_selectors( &base[0], find_css_selector( selectors, CST_ELEMENT, rel, element->name, element->namelen ) );
        if ( html_context->stack.next != element[0].next )
        {
        {
          do
          {
            struct html_element *ancestor;
            examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_ANCESTOR, &selector->leaves, &ancestor[0] );
          }
          while ( ancestor->next == html_context->stack.next );
          examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_PARENT, &selector->leaves, &element[0] );
        }
        }
        examine_element( &html_context[0], &base[0], CST_ID, CSR_SPECIFITY, &selector->leaves, element );
      }
    }
  }
  else
    html_context->stack.next = html_context->stack.next;
  &element = element;
  if ( element->options )
  {
    selector = &selector[0];
    do
    {
      if ( base[4].properties.prev & 1 )
      {
        selector = find_css_selector( selectors, CST_PSEUDO, rel, "link", -1 );
        if ( find_css_selector( selectors, CST_PSEUDO, rel, "link", -1 ) )
        {
          merge_css_selectors( &base[0], find_css_selector( selectors, CST_PSEUDO, rel, "link", -1 ) );
          if ( html_context->stack.next != element[0].next )
          {
          {
            do
            {
              struct html_element *ancestor;
              examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_ANCESTOR, &selector->leaves, &ancestor[0] );
            }
            while ( ancestor->next == html_context->stack.next );
            examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_PARENT, &selector->leaves, &element[0] );
          }
          }
          examine_element( &html_context[0], &base[0], CST_INVALID, CSR_SPECIFITY, &selector->leaves, element );
        }
      }
      if ( ( ( element->pseudo_class & 2 ) & 255 ) && find_css_selector( selectors, CST_PSEUDO, rel, "visited", -1 ) )
      {
        merge_css_selectors( &base[0], find_css_selector( selectors, CST_PSEUDO, rel, "visited", -1 ) );
        if ( html_context->stack.next != element[0].next )
        {
        {
          do
          {
            struct html_element *ancestor;
            examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_ANCESTOR, &selector->leaves, &ancestor[0] );
          }
          while ( ancestor->next == html_context->stack.next );
          examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_PARENT, &selector->leaves, &element[0] );
        }
        }
        examine_element( &html_context[0], &base[0], CST_INVALID, CSR_SPECIFITY, &selector->leaves, element );
      }
      if ( seltype <= 2 && element->attr.class )
      {
        while ( class[0] != ' ' )
        {
          if ( class[0] & 255 )
          {
            do
            {
              class[0] = class[1];
            }
            while ( class[0] && class[0] != ' ' );
          {
            unsigned char *class;
            selector = find_css_selector( selectors, CST_CLASS, rel, &class[0], class[0] - class[0] );
            if ( find_css_selector( selectors, CST_CLASS, rel, &class[0], class[0] - class[0] ) )
            {
              merge_css_selectors( &base[0], find_css_selector( selectors, CST_CLASS, rel, &class[0], class[0] - class[0] ) );
              if ( html_context->stack.next != element[0].next )
              {
              {
                do
                {
                  struct html_element *ancestor;
                  examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_ANCESTOR, &selector->leaves, &ancestor[0] );
                }
                while ( ancestor->next == html_context->stack.next );
                class[0] = class[0];
                examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_PARENT, &selector->leaves, &element[0] );
              }
              }
              examine_element( &html_context[0], &base[0], CST_PSEUDO, CSR_SPECIFITY, &selector->leaves, element );
            }
            class[0] = class[0];
          }
          }
        }
        class[0] = class[0] + 1;
      }
      if ( seltype <= 1 && element->attr.id && find_css_selector( selectors, CST_ID, rel, element->attr.id, -1 ) )
      {
        merge_css_selectors( &base[0], find_css_selector( selectors, CST_ID, rel, element->attr.id, -1 ) );
        selectors++;
        if ( html_context->stack.next != element[0].next )
        {
          selectors = &selectors[0];
        {
          do
          {
            struct html_element *ancestor;
            examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_ANCESTOR, &selectors[0], &ancestor[0] );
          }
          while ( ancestor->next == html_context->stack.next );
          examine_element( &html_context[0], &base[0], CST_ELEMENT, CSR_PARENT, &selectors[0], &element[0] );
        }
        }
        else
        {
          selectors = &selectors[0];
          rel = CSR_SPECIFITY;
        }
      }
      else
        break;
    }
    while ( element->options );
    return;
  }
  else
  {
    return;
  }
}
struct css_selector *get_css_selector_for_element( struct html_context *html_context, struct html_element *element, struct css_stylesheet *css, struct list_head_elinks *html_stack )
{
  int eax;
  int edx;
  unsigned char *code;
  struct css_selector *selector;
  if ( assert_failed == 0 )
  {
    if ( element[0] && css && element->options )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
      errline = 232;
      elinks_internal( "assertion element && element-&gt;options && css failed!" );
    }
  }
  if ( init_css_selector( 0, CST_ELEMENT, 0, 0 ) )
  {
    examine_element( &html_context[0], &selector[0], CST_ELEMENT, CSR_ROOT, &css->selectors, &element[0] );
    if ( get_attr_value( element->options, "style", html_context->doc_cp, HTML_ATTR_NONE ) )
    {
      struct css_selector *stylesel;
      struct scanner scanner;
      if ( init_css_selector( 0, CST_ELEMENT, 0, 0 ) )
      {
        init_scanner( &scanner, &css_scanner_info, &code[0], 0 );
        css_parse_properties( &stylesel->properties, &scanner );
        merge_css_selectors( &selector[0], &stylesel[0] );
        done_css_selector( &stylesel[0] );
      }
      mem_free( &code[0] );
      return &selector[0];
    }
    else
    {
      return &selector[0];
    }
  }
  else
  {
    return &selector[0];
  }
}
void apply_css_selector_style( struct html_context *html_context, struct html_element *element, struct css_selector *selector )
{
  struct css_property *property = &selector->properties.next[0];
  if ( selector->properties.next != selector->properties.next )
  {
    do
    {
      if ( assert_failed == 0 )
      {
        assert_failed = property->type > 9;
        if ( property->type > 9 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
          errline = 276;
          elinks_internal( "assertion property-&gt;type &lt; CSS_PT_LAST failed!" );
          if ( assert_failed == 0 )
            goto B7;
        }
B7:        assert_failed = css_appliers[ property->type ] == 0;
        if ( !(_Bool)( css_appliers[ property->type ] != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/apply.c";
          errline = 280;
          elinks_internal( "assertion css_appliers[property-&gt;type] failed!" );
        }
      }
      css_appliers[ property->type ]( html_context, &element[0], &property[0] );
      property = &property;
    }
    while ( property->next != selector->properties.next );
    return;
  }
  else
  {
    return;
  }
}
void css_apply( struct html_context *html_context, struct html_element *element, struct css_stylesheet *css, struct list_head_elinks *html_stack )
{
  struct css_selector *selector;
  if ( get_css_selector_for_element( html_context, element, css, html_stack ) )
  {
    apply_css_selector_style( &html_context[0], &element[0], get_css_selector_for_element( html_context, element, css, html_stack ) );
    html_context = &selector[0].next[0];
  }
  return;
}
#if 0
#endif
