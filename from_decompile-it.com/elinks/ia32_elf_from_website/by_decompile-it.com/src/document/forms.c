#include "forms.c.h"
static struct form_type_name form_type2name[10] = { { 0, "text" }
, { 1, "password" }
, { 2, "file" }
, { 3, "textarea" }
, { 4, "checkbox" }
, { 5, "radio" }
, { 6, "select" }
, { 7, "submit" }
, { 8, "image" }
, { 11, "hidden" }
 };
int str2form_type( unsigned char *s )
{
  int n = 0;
  do
  {
    if ( strcmp( (char*)form_type2name[ n ].name, &s[0] ) == 0 )
      break;
    n++;
  }
  while ( n + 1 != 10 );
  return -1;
}
unsigned char *form_type2str( enum form_type  num )
{
  int n = 1;
  if ( num )
  {
    do
    {
      if ( form_type2name[ n ].num == num )
        break;
      n++;
    }
    while ( n + 1 != 10 );
    return 0;
  }
  else
  {
    n = 0;
  }
  return form_type2name[ form_type2name[ n ].name ].name;
}
struct form *init_form( void )
{
  struct form *form;
  if ( form[0].next )
  {
    form->form_end = 0x7fffffff;
    form->items.prev = form->items.next;
    *(int*)(mem_calloc( 1, 44 ) + 36) = form->items;
  }
  return (struct form*)mem_calloc( 1, 44 );
}
void done_form( struct form *form )
{
  int edx;
  struct form_control *fc;
  if ( form[0].next )
  {
    form->prev = form->prev;
    &form->prev = &form;
  }
{
  void *p = (void*)form->action;
  if ( form->action )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)form->name;
  if ( form->name )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)form->onsubmit;
  if ( form->onsubmit )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)form->target;
  if ( form->target )
    mem_free( &((int*)p)[0] );
  fc = &form->items.next[0];
  if ( form != form->items.next )
  {
    do
    {
      done_form_control( &fc[0] );
    }
    while ( fc->next == form + 36 );
    *(int*)(*(int*)(ebp_28 + 36)) = form->items.next;
  }
{
  struct xlist_head *head = &form->items.next[0], *next;
  head = &form->items.next[0];
  if ( form->items.next != form + 36 )
  {
    fc = &fc[0];
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != form + 36 );
  }
  head = &form->items.prev[0];
  if ( form->items.prev != form + 36 )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != form + 36 );
  }
  next = &form->items.next[0];
  if ( form->items.next != form + 36 )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == form + 36 );
  }
  form = form;
}
}
}
}
}
}
int has_form_submit( struct form *form )
{
  struct form_control *fc;
  if ( assert_failed == 0 )
  {
    assert_failed = form[0].next == 0;
    if ( !(_Bool)( form[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/forms.c";
      errline = 112;
      elinks_internal( "assertion form failed!" );
      if ( assert_failed )
        form = &form[0];
    }
    assert_failed = form->items.next == form->items.next;
    if ( !(_Bool)( form->items.next != form->items.next ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/forms.c";
      errline = 115;
      elinks_internal( "assertion !list_empty(form-&gt;items) failed: form has no items" );
    }
    &fc[0] = &form->items.next[0];
    if ( form->items.next != form->items.next )
    {
      do
      {
        if ( fc->type - 7 <= 1 )
        {
          break;
        }
        &fc[0] = &fc;
      }
      while ( fc->next != form->items.next );
    }
    return 0;
  }
  assert_failed = 0;
  return 0;
}
int get_form_control_link( struct document *document, struct form_control *fc )
{
  int eax;
  int ecx;
  int edx;
  int link;
  if ( fc->type != FC_HIDDEN )
  {
    if ( ( ( document->bits_at_276/*.1_1of4*/ & 1 ) & 255 ) == 0 )
      sort_links( &document[0] );
    if ( document->nlinks >= 1 )
    {
      document->links->accesskey = document->links;
      link = 0;
      do
      {
        if ( fc[0].next == document->links[1].data.name/*union*/ )
          break;
        link++;
        document->links->accesskey = document->links + 52;
      }
      while ( link + 1 < document->nlinks );
    }
    if ( assert_failed == 0 )
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/forms.c";
      errline = 142;
      elinks_internal( "assertion 0 failed: Form control has no link." );
      link |= -1;
      return link + 1;
    }
    return -1;
  }
  else
  {
    return -1;
  }
}
void done_form_control( struct form_control *fc )
{
  int i;
  if ( assert_failed == 0 )
  {
    assert_failed = fc[0].next == 0;
    if ( !(_Bool)( fc[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/forms.c";
      errline = 152;
      elinks_internal( "assertion fc failed!" );
      if ( assert_failed )
        goto B2;
    }
  {
    void *p = (void*)fc->id;
    if ( fc->id )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)fc->name;
    if ( fc->name )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)fc->alt;
    if ( fc->alt )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)fc->default_value;
    if ( fc->default_value )
      mem_free( &((int*)p)[0] );
    if ( fc->nvalues >= 1 )
    {
      i = 0;
      fc = &fc[0];
    {
      do
      {
        void *p;
        if ( fc->values[ i ] )
          mem_free( (void*)fc->values[ i ] );
      {
        void *p = (void*)fc->labels[ i ];
        if ( fc->labels[ i ] )
          mem_free( &((int*)p)[0] );
        i++;
      }
      }
      while ( i + 1 < fc->nvalues );
    }
    }
  {
    void *p = (void*)&fc->values;
    if ( fc->values )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)&fc->labels;
    if ( fc->labels )
      mem_free( &((int*)p)[0] );
    if ( fc->menu )
    {
      fc = &fc->menu;
    }
    return;
  }
  }
  }
  }
  }
  }
  }
B2:  assert_failed = 0;
  return;
}
#if 0
#endif
