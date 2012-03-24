#include "document.c.h"
static struct list_head_elinks format_cache = { &format_cache, &format_cache };
struct module document_module = { "Document", 0, 0, 0, 0, &init_documents, &done_documents };
struct document *init_document( struct cache_entry *cached, struct document_options *options )
{
  struct document *document;
  if ( mem_calloc( 1, 280 ) )
  {
    cached->uri->object.object = cached->uri->object.refcount;
    document->uri = cached->uri;
    cached->object.refcount = cached->object.refcount;
    document->cache_id = cached->cache_id;
    document->forms.prev = document->forms.next;
    document->forms.next = document->forms.next;
    document->tags.prev = document->tags.next;
    document->tags.next = document->tags.next;
    document->cached = &cached[0];
    document->nodes.prev = document->nodes.next;
    document->nodes.next = document->nodes.next;
    copy_opt( &document->options, options );
    document->object.object++;
    document->prev = &format_cache.next[0];
    &document = &format_cache->next[0];
    format_cache.next = (void*)document[0].next;
    document->prev = &document[0];
  }
  return format_cache.next + 4;
}
void free_frameset_desc( struct frameset_desc *frameset_desc )
{
  int i;
  if ( frameset_desc->n >= 1 )
  {
    i = 0;
    do
    {
      if ( frameset_desc->frame_desc->subframe )
        free_frameset_desc(  );
    {
      void *p = (void*)frameset_desc->frame_desc[1].name;
      if ( frameset_desc->frame_desc->name )
        mem_free( &((int*)p)[0] );
      if ( frameset_desc->frame_desc->uri )
        done_uri( frameset_desc->frame_desc[1].uri );
      i++;
    }
    }
    while ( i + 1 < frameset_desc->n );
  }
  mem_free( &frameset_desc[0].n );
  return;
}
void done_link_members( struct link *link )
{
  int edx;
  if ( link->event_hooks )
  {
    struct script_event_hook *evhook = &link->event_hooks->next[0], *safety = &link->event_hooks->next[0];
    if ( link->event_hooks->next != link->event_hooks )
    {
      while ( p = (void*)evhook->src, evhook->src == 0 )
        mem_free( &((int*)p)[0] );
        evhook = &safety[0];
        mem_free( (void*)evhook[0].next );
        safety = &safety;
        if ( link->event_hooks == safety[0].next )
          goto B5;
        else
        {
          safety = &safety[0];
        }
    }
B5:    mem_free( (void*)link->event_hooks );
  }
{
  void *p;
  if ( link->type <= 1 && link->data )
    mem_free( (void*)link->data.name );
{
  void *p = (void*)link->where;
  if ( link->where )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)link->target;
  if ( link->target )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)link->title;
  if ( link->title )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)link->where_img;
  if ( link->where_img )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)link->points;
  if ( link->points )
  {
    link = &((int*)p)[0];
  }
  return;
}
}
}
}
}
}
}
void done_document( struct document *document )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = document[0].next == 0;
    if ( !(_Bool)( document[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
      errline = 110;
      elinks_internal( "assertion document failed!" );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    assert_failed = document->object.refcount != 0;
    if ( document->object.refcount )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
      errline = 113;
      elinks_internal( "assertion !is_object_used(document) failed: Attempt to free locked formatted data." );
      if ( assert_failed )
      {
        assert_failed = 0;
        return;
      }
    }
    assert_failed = document->cached == 0;
    if ( !(_Bool)( document->cached != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
      errline = 116;
      elinks_internal( "assertion document-&gt;cached failed!" );
    }
    document->cached->object.object--;
    if ( document->uri )
      done_uri( document->uri );
  {
    void *p = (void*)document->title;
    if ( document->title )
      mem_free( &((int*)p)[0] );
    if ( document->frame_desc )
      free_frameset_desc(  );
    if ( document->refresh )
      done_document_refresh( document->refresh );
    if ( document->links )
    {
      int pos;
      if ( document->nlinks >= 1 )
      {
        pos = 0;
        while ( 1 )
        {
          done_link_members( 0 + 52 + document->links );
          pos++;
          if ( document->nlinks <= pos )
            document->links->accesskey = document->links;
          else
          {
            document->links->accesskey = document->links;
          }
        }
      }
      mem_free( (void*)document->links );
    }
    if ( document->data )
    {
      int pos;
      if ( document->height >= 1 )
      {
        pos = 0;
      {
        do
        {
          void *p = (void*)document->data[ pos ].chars;
          if ( document->data[ pos ].chars )
          {
            mem_free( &((int*)p)[0] );
          }
          pos++;
        }
        while ( pos + 1 < document->height );
      }
      }
      mem_free( (void*)document->data );
    }
  {
    void *p = (void*)&document->lines1;
    if ( document->lines1 )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)&document->lines2;
    if ( document->lines2 )
      mem_free( &((int*)p)[0] );
    done_document_options( &document->options );
    if ( document->forms.next != document->forms.next )
    {
      do
      {
        done_form( &document->forms.next[0] );
      }
      while ( document->forms.next == document->forms.next );
    }
    free_uri_list( &document->css_imports );
  {
    struct xlist_head *head = &document->tags.next[0], *next;
    head = &document->tags.next[0];
    if ( document->tags.next != document->tags.next )
    {
      head = &head[0];
      do
      {
        head = &(struct xlist_head*)(head);
      }
      while ( head->next != head[0].next );
    }
    head = &document->tags.prev[0];
    if ( document->tags.prev != head[0].next )
    {
      do
      {
        head = head->prev;
      }
      while ( head->prev != head[0].next );
    }
    next = &document->tags.next[0];
    if ( head[0].next != document->tags.next )
    {
      do
      {
        next->prev = head->prev;
        &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
        mem_free( (void*)head->next );
      }
      while ( head[0].next == next[0].next );
      document = &document[0];
    }
  {
    struct xlist_head *head = &document->nodes.next[0], *next;
    head = &document->nodes.next[0];
    if ( document->nodes.next != document->nodes.next )
    {
      head = &head[0];
      do
      {
        head = &(struct xlist_head*)(head);
      }
      while ( head->next != head[0].next );
    }
    head = &document->nodes.prev[0];
    if ( document->nodes.prev != head[0].next )
    {
      do
      {
        head = head->prev;
      }
      while ( head->prev != head[0].next );
    }
    next = &document->nodes.next[0];
    if ( head[0].next != document->nodes.next )
    {
      do
      {
        next->prev = head->prev;
        &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
        mem_free( (void*)head->next );
      }
      while ( head[0].next == next[0].next );
      document = &document[0];
    }
  {
    void *p = (void*)document->search;
    if ( document->search )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)&document->slines1;
    if ( document->slines1 )
      mem_free( &((int*)p)[0] );
  {
    void *p = (void*)&document->slines2;
    if ( document->slines2 )
      mem_free( &((int*)p)[0] );
    document->prev = document->prev;
    &document->prev = &document;
    document = &document;
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
void release_document( struct document *document )
{
  if ( assert_failed == 0 )
  {
    assert_failed = document->next == 0;
    if ( !(_Bool)( document[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
      errline = 173;
      elinks_internal( "assertion document failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( document->refresh )
      kill_document_refresh( document->refresh );
    document->object.refcount--;
    if ( document[0].next != format_cache.next )
    {
      document->prev = document->prev;
      &document->prev = &document;
      document->prev = &format_cache.next[0];
      document = &format_cache.next[0];
      format_cache.next = (void*)document[0].next;
      document->prev = &document[0];
    }
    return;
  }
  assert_failed = 0;
  return;
}
int find_tag( struct document *document, unsigned char *name, int namelen )
{
  struct tag *tag = &document->tags.next[0];
  if ( document->tags.next != document->tags.next )
  {
    do
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
      errline = 190;
      if ( elinks_strlcasecmp( &tag->name[0], -1, name, namelen, 1 ) == 0 )
        break;
      tag = &tag;
    }
    while ( tag->next == document->tags.next );
  }
  return -1;
}
unsigned long get_document_css_magic( struct document *document )
{
  unsigned long css_magic = 0;
  struct uri *uri;
  int index = 0;
  if ( document->css_imports.size >= 1 )
  {
    css_magic = css_magic;
    do
    {
      index++;
    }
    while ( index + 1 < document->css_imports.size );
  }
  return css_magic;
}
void update_cached_document_options( void )
{
  struct document *document = &config_options->next;
  struct active_link_options active_link;
  active_link->bits_at_0 = 0;
  active_link.fg = 0;
  active_link.bg = 0;
  active_link.fg = document->next;
  document = &config_options->next;
  active_link->bg = document->next;
  document = &config_options->next;
  document = ( active_link->bits_at_0 & -2 ) | ( document->next & 1 );
  active_link.bits_at_0 = ( active_link.bits_at_0 & -2 ) | ( document->next & 1 );
  document = &config_options->next;
  document = ( active_link->bits_at_0 & -9 ) | ( ( document->next & 1 ) << 3 );
  active_link.bits_at_0 = ( active_link.bits_at_0 & -9 ) | ( ( document->next & 1 ) << 3 );
  document = &config_options->next;
  document = ( active_link->bits_at_0 & -3 ) | ( ( document->next & 1 ) * 2 );
  active_link.bits_at_0 = ( active_link.bits_at_0 & -3 ) | ( ( document->next & 1 ) * 2 );
  document = &config_options->next;
  document = ( active_link->bits_at_0 & -5 ) | ( ( document->next & 1 ) << 2 );
  active_link.bits_at_0 = ( active_link.bits_at_0 & -5 ) | ( ( document->next & 1 ) << 2 );
  document = &format_cache.next[0];
  if ( format_cache.next != format_cache.next )
  {
    do
    {
      document->options.active_link.bits_at_0 = active_link.bits_at_0;
      document->options.active_link.fg = active_link.fg;
      document->options.active_link.bg = active_link.bg;
      document = &document;
    }
    while ( document->next != format_cache.next );
  }
  return;
}
int get_format_cache_size( void )
{
  int eax;
  if ( format_cache.next != format_cache.next )
  {
    do
    {
    }
    while ( format_cache.next != format_cache.next );
  }
  return 0 + 1;
}
struct document *get_cached_document( struct cache_entry *cached, struct document_options *options )
{
  int eax;
  struct document *document, *next;
  &document[0] = &format_cache.next[0];
  next = &format_cache.next[0];
  if ( format_cache.next != format_cache.next )
  {
    while ( compare_uri( document->uri, cached->uri, 0 ) && compare_opt( &document->options, options ) == 0 )
    {
      next = &next;
      &document = &next;
      if ( format_cache->next == next[0].next )
        break;
      next = &next;
    }
    if ( ( ( options->bits_at_92/*.1_1of4*/ & 4 ) & 255 ) || document->cache_id != cached->cache_id || document->css_magic != get_document_css_magic( &document[0] ) )
    {
      if ( document->object.refcount == 0 )
        done_document( &document[0] );
    }
    else
    {
      if ( document[0].next != format_cache.next )
      {
        document->prev = document->prev;
        &document->prev = &document;
        document->prev = &format_cache.next[0];
        document = &format_cache.next[0];
        format_cache.next = (void*)document[0].next;
        document->prev = &document[0];
      }
      document->object.refcount = document->object.refcount;
      return &document[0];
    }
  }
  return 0;
}
void shrink_format_cache( int whole )
{
  int edx;
  struct document *document, *next;
  int format_cache_size;
  int format_cache_entries = 0;
  document = &format_cache.next[0];
  next = &format_cache.next[0];
  if ( format_cache.next != format_cache.next )
  {
    while ( 1 )
    {
      if ( document->object.refcount == 0 )
      {
        if ( document->cached->cache_id == document->cache_id )
          format_cache_entries++;
        else
        {
          done_document( &document[0] );
          next = &document;
          document = &next;
          if ( format_cache->next == next[0].next )
            goto B4;
          else
          {
            next = &next[0];
          }
        }
      }
      next = &next;
      document = &next;
      if ( format_cache->next == next[0].next )
        goto B4;
      else
      {
        next = &next[0];
      }
    }
  }
B4:  assert_failed = assert_failed;
  if ( assert_failed == 0 )
  {
    assert_failed = format_cache_entries >> 31;
    if ( format_cache_entries >> 31 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
      errline = 294;
      elinks_internal( "assertion format_cache_entries &gt;= 0 failed: format_cache_entries underflow on entry" );
      if ( assert_failed == 0 )
      {
        document = &format_cache.prev[0];
        next = &format_cache.prev[1];
        if ( format_cache.prev != format_cache.next )
        {
          format_cache_size = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
          for ( ; document->object.refcount; next = &next[0] )
          {
            next = next->prev;
            document = &next[0];
            if ( format_cache.next == next[0].next )
              goto B15;
            else
            {
              //next = &next[0];
            }
          }
          if ( format_cache_size < format_cache_entries || whole )
          {
            done_document( &document[0] );
            format_cache_entries--;
          }
          next = next->prev;
          document = &next[0];
        }
B15:        if ( assert_failed == 0 )
        {
          assert_failed = ( format_cache_entries >> 31 ) >> 31;
          if ( ( format_cache_entries >> 31 ) >> 31 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/document.c";
            errline = 309;
            elinks_internal( "assertion format_cache_entries &gt;= 0 failed: format_cache_entries underflow" );
            if ( assert_failed )
            {
              format_cache_entries = format_cache_entries;
            }
          }
          return;
        }
        assert_failed = 0;
        return;
      }
    }
  }
  assert_failed = 0;
  format_cache_entries = 0;
}
int get_format_cache_used_count( void )
{
  int eax;
  struct document *document;
  int i;
  &document[0] = &format_cache.next[0];
  i = 0;
  if ( format_cache.next != format_cache.next )
  {
    do
    {
      &document[0] = &document;
      i += document->object.refcount != 0;
    }
    while ( document->next != format_cache.next );
  }
  return 0;
}
int get_format_cache_refresh_count( void )
{
  int eax;
  struct document *document;
  int i;
  &document[0] = &format_cache.next[0];
  i = 0;
  if ( format_cache.next != format_cache.next )
  {
    do
    {
      &document[0] = &document;
    }
    while ( document->next != format_cache.next );
  }
  return ( i + 1 ) - ( ( *(int*)(document->refresh) < 1 ) & 1 );
}
void init_documents( struct module *module )
{
}
void done_documents( struct module *module )
{
  free_tags_lookup(  );
}
#if 0
#endif
