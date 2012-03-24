#include "stylesheet.c.h"
struct css_selector *find_css_selector( struct list_head_elinks *sels, enum css_selector_type  type, enum css_selector_relation  rel, unsigned char *name, int namelen )
{
  int ecx;
  struct css_selector *selector;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( name == 0 ) | ( sels[0].next == 0 ) ) & 1;
    if ( ( ( name == 0 ) | ( sels[0].next == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/stylesheet.c";
      errline = 36;
      elinks_internal( "assertion sels && name failed!" );
    }
  }
  &selector[0] = &sels->next[0];
  if ( sels->next != sels[0].next )
  {
    rel = rel;
    do
    {
      if ( selector->type == type && selector->relation == rel )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/stylesheet.c";
        errline = 41;
        if ( elinks_strlcasecmp( name, namelen, selector->name, -1, 1 ) == 0 )
          break;
      }
      &selector[0] = &selector;
    }
    while ( sels->next != selector->next );
  }
  return 0;
}
struct css_selector *init_css_selector( struct list_head_elinks *sels, enum css_selector_type  type, unsigned char *name, int namelen )
{
  struct css_selector *selector;
  if ( mem_calloc( 1, esi ) )
  {
    *(int*)(mem_calloc( 1, esi ) + 8) = 0;
    selector->leaves.prev = mem_calloc( 1, esi ) + 12;
    selector->leaves.next = mem_calloc( 1, esi ) + 12;
    selector->type = type;
    selector->properties.prev = selector->properties.next;
    selector->properties.next = selector->properties.next;
    if ( name[0] )
    {
      if ( namelen < 0 )
      {
        namelen = strlen( &name[0] );
      }
      selector->name = memacpy( &name[0], namelen );
      if ( selector->name == 0 )
      {
        &selector[0] = 0;
        mem_free( (void*)selector[0].next );
        return &selector[0];
      }
    }
    if ( sels[0].next )
    {
      selector->prev = &sels[0].next[0];
      &selector = &sels->next[0];
      sels = &selector[0].next[0];
      selector->prev = &selector[0];
    }
    return &selector[0];
  }
  else
  {
    return &selector[0];
  }
}
struct css_selector *get_css_selector( struct list_head_elinks *sels, enum css_selector_type  type, enum css_selector_relation  rel, unsigned char *name, int namelen )
{
  struct css_selector *selector;
  if ( ( name == 0 || !sels[0].next || namelen == 0 || !selector[0].next ) && selector[0] )
  {
    selector->relation = rel;
  }
  return find_css_selector( &sels[0], type, rel, &name[0], namelen );
}
void add_selector_properties( struct css_selector *selector, struct list_head_elinks *properties )
{
  struct css_property *prop = &properties[0].next[0];
  if ( properties[0].next != properties )
  {
    do
    {
      if ( mem_alloc( 24 ) )
      {
        *(int*)(mem_alloc( 24 )) = prop->css_property;
        *(int*)(mem_alloc( 24 ) + 4) = prop->prev;
        *(int*)(mem_alloc( 24 ) + 8) = prop->type;
        *(int*)(mem_alloc( 24 ) + 12) = prop->value_type;
        *(int*)(mem_alloc( 24 ) + 16) = prop->value;
        *(int*)(mem_alloc( 24 ) + 20) = prop->value.font_attribute.rem;
        *(int*)(mem_alloc( 24 )) = *(int*)(mem_alloc( 24 ) + 4) = selector->properties;
        *(int*)(mem_alloc( 24 ) + 4) = mem_alloc( 24 );
        *(int*)(*(int*)(mem_alloc( 24 )) + 4) = mem_alloc( 24 );
      }
      prop = &prop;
    }
    while ( properties->next != prop->next );
  }
  return;
}
void merge_css_selectors( struct css_selector *sel1, struct css_selector *sel2 )
{
  struct css_property *prop = &sel2->properties.next[0];
  if ( sel2->properties.next != sel2->properties.next )
  {
    struct css_property *origprop = &sel1->properties.next[0];
    prop = &prop[0];
    do
    {
      origprop = &sel1->properties.next[0];
      if ( sel1->properties.next != origprop[0].next )
      {
        if ( sel1->properties.list_head_elinks != prop->type )
        {
          do
          {
            origprop = &origprop;
            if ( origprop->next != origprop[0].next )
            {
              prop = &prop[0];
            }
          }
          while ( sel1->properties.list_head_elinks != prop->type );
        }
        origprop->next->prev = origprop->prev;
        &origprop->prev = &origprop;
        mem_free( (void*)origprop->next );
      }
      if ( mem_alloc( 24 ) )
      {
        *(int*)(mem_alloc( 24 )) = prop->css_property;
        *(int*)(mem_alloc( 24 ) + 4) = prop->prev;
        *(int*)(mem_alloc( 24 ) + 8) = prop->type;
        *(int*)(mem_alloc( 24 ) + 12) = prop->value_type;
        *(int*)(mem_alloc( 24 ) + 16) = prop->value;
        *(int*)(mem_alloc( 24 ) + 20) = prop->value.font_attribute.rem;
        *(int*)(mem_alloc( 24 ) + 4) = origprop[0];
        *(int*)(mem_alloc( 24 )) = origprop->css_property;
        origprop = (struct css_property*)mem_alloc( 24 );
        *(int*)(*(int*)(mem_alloc( 24 )) + 4) = mem_alloc( 24 );
      }
      prop = &prop;
    }
    while ( prop->next != sel2->properties.next );
    return;
  }
  else
  {
    return;
  }
}
void done_css_selector( struct css_selector *selector )
{
  int edx;
  if ( selector->leaves.next != selector->leaves.next )
  {
    do
    {
      done_css_selector( &selector->leaves.next[0] );
    }
    while ( selector->leaves.next == selector->leaves.next );
  }
  if ( selector->next )
  {
    selector->prev = selector->prev;
    &selector->prev = &selector;
  }
{
  struct xlist_head *head = &selector->properties.next[0], *next;
  head = &selector->properties.next[0];
  if ( selector->properties.next != selector->properties.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != head[0].next );
  }
  head = &selector->properties.prev[0];
  if ( selector->properties.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &selector->properties.next[0];
  if ( head[0].next != selector->properties.next )
  {
    &(struct xlist_head*)(next) = &next;
    while ( 1 )
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
      next = &(struct xlist_head*)(next);
      head = &next;
      if ( next->next == head[0].next )
        goto B13;
      else
      {
        next = &next[0];
      }
    }
  }
{
B13:  void *p = (void*)selector->name;
  if ( selector->name )
    mem_free( &((int*)p)[0] );
  selector = &selector[0];
}
}
}
struct css_stylesheet *init_css_stylesheet( css_stylesheet_importer_T importer, void *import_data )
{
  struct css_stylesheet *css;
  if ( css[0].import )
  {
    css = &importer[0];
    css->import_data = import_data;
    css->selectors.prev = css->selectors.next;
    *(int*)(mem_calloc( 1, 20 ) + 8) = css->selectors;
  }
  return (struct css_stylesheet*)mem_calloc( 1, 20 );
}
void mirror_css_stylesheet( struct css_stylesheet *css1, struct css_stylesheet *css2 )
{
  struct css_selector *selector = &css1->selectors.next[0];
  if ( css1->selectors.next != css1->selectors.next )
  {
    do
    {
      if ( assert_failed == 0 )
      {
        assert_failed = ( ( css2 == 0 ) | ( selector[0].next == 0 ) ) & 1;
        if ( ( ( ( css2 == 0 ) | ( selector[0].next == 0 ) ) & 1 ) == 0 )
          assert_failed = 0;
        else
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/stylesheet.c";
          errline = 148;
          elinks_internal( "assertion css && orig failed!" );
          if ( assert_failed == 0 )
          {
            assert_failed = ( ( css2 == 0 ) | ( selector[0].next == 0 ) ) & 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/css/stylesheet.c";
            errline = 111;
            elinks_internal( "assertion css && orig failed!" );
          }
        }
      }
      if ( init_css_selector( &css2->selectors, selector->type, selector->name, strlen( (char*)selector->name ) ) )
        add_selector_properties( init_css_selector( &css2->selectors, selector->type, selector->name, strlen( (char*)selector->name ) ), &selector->properties );
      selector = &selector;
    }
    while ( selector->next != css1->selectors.next );
    return;
  }
  else
  {
    return;
  }
}
void done_css_stylesheet( struct css_stylesheet *css )
{
  if ( css->selectors.next != css->selectors.next )
  {
    do
    {
      done_css_selector( &css->selectors.next[0] );
    }
    while ( css->selectors.next == css->selectors.next );
  }
  return;
}
#if 0
#endif
