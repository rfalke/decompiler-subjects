#include "stack.c.h"
struct html_element *search_html_stack( struct html_context *html_context, unsigned char *name )
{
  struct html_element *element;
  if ( assert_failed == 0 )
  {
    if ( name[0] && name[0] )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
      errline = 55;
      elinks_internal( "assertion name && *name failed!" );
    }
  }
  &element[0] = &html_context->stack.next[0];
  if ( html_context->stack.next != html_context->stack.next )
  {
    do
    {
      &element[0] = &element;
      if ( html_context->stack.next != element->next )
      {
        if ( html_context->stack.next == element[0].next )
          continue;
        else
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
          errline = 65;
        }
      }
    }
    while ( elinks_strlcasecmp( element->name, element->namelen, &name[0], strlen( &name[0] ), 1 ) );
    return &element[0];
  }
  &element[0] = 0;
  return &element[0];
}
void kill_html_stack_item( struct html_context *html_context, struct html_element *e )
{
  if ( assert_failed == 0 )
  {
    assert_failed = e[0].next == 0;
    if ( !(_Bool)( e[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
      errline = 81;
      elinks_internal( "assertion e failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    assert_failed = html_context->stack.list_head_elinks == e[0].next;
    if ( !(_Bool)( html_context->stack.list_head_elinks != e[0].next ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
      errline = 83;
      elinks_internal( "assertion (void *) e != &html_context-&gt;stack failed: trying to free bad html element" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    assert_failed = e->type == ELEMENT_IMMORTAL;
    if ( !(_Bool)( e->type != ELEMENT_IMMORTAL ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
      errline = 85;
      elinks_internal( "assertion e-&gt;type != ELEMENT_IMMORTAL failed: trying to kill unkillable element" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
  {
    void *p = (void*)e->attr.link;
    if ( e->attr.link )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.target;
    if ( e->attr.target )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.image;
    if ( e->attr.image )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.title;
    if ( e->attr.title )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.select;
    if ( e->attr.select )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.id;
    if ( e->attr.id )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.class;
    if ( e->attr.class )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.onclick;
    if ( e->attr.onclick )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.ondblclick;
    if ( e->attr.ondblclick )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.onmouseover;
    if ( e->attr.onmouseover )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.onhover;
    if ( e->attr.onhover )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.onfocus;
    if ( e->attr.onfocus )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.onmouseout;
    if ( e->attr.onmouseout )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)e->attr.onblur;
    if ( e->attr.onblur )
      mem_free( &((int*)p)[0] );
    e->prev = e->prev;
    &e->prev = &e;
    html_context = &e->next[0];
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
  }
  }
  }
  }
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
void html_stack_dup( struct html_context *html_context, enum html_element_mortality_type  type )
{
  int edx;
  struct html_element *e;
  struct html_element *ep;
  if ( assert_failed == 0 )
  {
    if ( html_context->stack && html_context->stack.next != html_context + 36 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
      errline = 140;
      elinks_internal( "assertion ep && (void *) ep != &html_context-&gt;stack failed: html stack empty" );
      if ( assert_failed )
        goto B2;
    }
    *ebp_28 = html_context->stack.next;
    if ( mem_alloc( 180 ) )
    {
      ep = &edx;
      memcpy( eax, &edx, 180 );
      if ( *(int*)(edx + 28) )
      {
        e->attr.link = eax;
        *ebp_28 = ebp_28;
      }
      if ( *(int*)(edx + 32) )
      {
        e->attr.target = eax;
        *ebp_28 = ebp_28;
      }
      if ( *(int*)(edx + 36) )
      {
        e->attr.image = eax;
        *ebp_28 = ebp_28;
      }
      if ( *(int*)(edx + 40) )
      {
        e->attr.title = eax;
        *ebp_28 = ebp_28;
      }
      if ( *(int*)(edx + 72) )
      {
        e->attr.select = eax;
      }
      e->attr.class = 0;
      e->attr.id = 0;
      e->attr.onblur = 0;
      e->attr.onmouseout = 0;
      e->attr.onfocus = 0;
      e->attr.onhover = 0;
      e->attr.onmouseover = 0;
      e->attr.ondblclick = 0;
      e->attr.onclick = 0;
      e->options = 0;
      e->name = 0;
      e->namelen = 0;
      e->type = type;
      e->prev = &html_context->stack.next[0];
      &e = &html_context->stack.next[0];
      html_context->stack.next = (void*)e[0].next;
      e->prev = &e[0];
      return;
    }
    else
    {
      return;
    }
  }
B2:  assert_failed = 0;
  return;
}
void kill_element( struct html_context *html_context, int ls, struct html_element *e )
{
  int l = 0;
  if ( e[0].next != &html_context->stack.next )
  {
    ls = ls;
    do
    {
      if ( ls == 0 || html_context->stack.next != e[0].next )
      {
        e = e->prev;
        l = l < e->linebreak ? l : e->linebreak;
        kill_html_stack_item( &html_context[0], (int)( &e ) );
      }
      else
        break;
    }
    while ( e->next != &html_context->stack.next );
  }
  ln_break( &html_context[0], l );
  return;
}
void kill_html_stack_until( struct html_context *html_context, int ls )
{
  int eax;
  int ecx;
  int edx;
  struct html_element *e = &html_context->stack.next[0];
  if ( html_context->stack.next != e[0].next )
  {
    do
    {
    {
      do
      {
        unsigned char *s;
        s[0] = arg[0] = arg[4];
        if ( *(int*)(arg - 4) )
        {
          do
          {
            if ( strlen( &s[0] ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
              errline = 221;
              if ( elinks_strlcasecmp( e->name, e->namelen, &s[0], strlen( &s[0] ), 1 ) )
              {
                do
                {
                  unsigned char *s;
                  s[0] = arg[0] = arg[4];
                }
                while ( elinks_strlcasecmp( e->name, e->namelen, &s[0], strlen( &s[0] ), 1 ) );
                if ( sk == 0 )
                {
                  e = &e;
                  if ( e->type > 1 )
                  {
                    kill_element( html_context, ls, &e[0] );
                    return;
                  }
                }
                else
                if ( sk == 1 )
                {
                  e = &e;
                  kill_element( html_context, ls, e->prev );
                  return;
                }
              }
            }
            else
            {
              arg[0] = arg[4];
              sk++;
              s[0] = arg[0];
            }
          }
          while ( *(int*)(arg - 4) );
        }
        if ( e->type > 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/parser/stack.c";
          errline = 243;
          if ( elinks_strlcasecmp( e->name, e->namelen, "TABLE", 5, 1 ) )
          {
            if ( e->namelen == 2 && c_toupper( e->name[0] ) == 84 )
            {
              unsigned char c;
              if ( c != 'H' && c != 'D' )
              {
                if ( c == 'R' )
                {
                  break;
                }
              }
            }
            if ( html_context->stack.next != e->next )
            {
              do
              {
              {
                do
                {
                  unsigned char *s;
                  s[0] = arg[0] = arg[4];
                }
                while ( elinks_strlcasecmp( e->name, e->namelen, &s[0], strlen( &s[0] ), 1 ) );
              }
              }
              while ( html_context->stack.next == e->next );
              break;
            }
          }
        }
      }
      while ( elinks_strlcasecmp( e->name, e->namelen, &s[0], strlen( &s[0] ), 1 ) );
    }
    }
    while ( html_context->stack.next == e->next );
  }
  return;
}
#if 0
#endif
