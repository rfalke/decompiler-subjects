#include "refresh.c.h"
struct document_refresh *init_document_refresh( unsigned char *url, unsigned long seconds )
{
  struct document_refresh *refresh;
  if ( mem_alloc( 16 ) )
  {
    refresh->uri = get_uri( url, 0 );
    if ( refresh->uri == 0 )
    {
      &refresh[0].timer = 0;
      mem_free( &refresh[0].timer );
      return &refresh[0];
    }
    refresh->bits_at_12/*.1_1of4*/ |= 1;
    &refresh->timer = 0;
    refresh->seconds = seconds;
    return &refresh[0];
  }
  else
  {
    return &refresh[0];
  }
}
void kill_document_refresh( struct document_refresh *refresh )
{
}
void done_document_refresh( struct document_refresh *refresh )
{
  kill_timer( (int)( &refresh->timer ) );
  done_uri( refresh->uri );
  refresh = refresh;
}
void do_document_refresh( void *data )
{
  struct document_refresh *refresh = &((int*)data)[23];
  struct type_query *type_query;
  if ( assert_failed == 0 )
  {
    assert_failed = refresh[0].timer == 0;
    if ( !(_Bool)( refresh[0].timer != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/refresh.c";
      errline = 73;
      elinks_internal( "assertion refresh failed!" );
    }
  }
  refresh = 0;
  type_query = &((int*)data)[40];
  if ( ((int*)data)[40] != ((int*)data)[40] )
  {
    do
    {
      if ( compare_uri( refresh->uri, type_query->uri, URI_BASE ) )
        break;
      type_query = &type_query;
    }
    while ( type_query->next != ((int*)data)[40] );
  }
  if ( compare_uri( refresh->uri, &((int*)data)[23], 0 ) )
  {
    reload( &data[0], CACHE_MODE_FORCE_RELOAD );
    return;
  }
  goto_uri_frame( &data[0], refresh->uri, 0, CACHE_MODE_NORMAL );
  refresh->bits_at_12/*.1_1of4*/ &= 254;
  return;
}
void start_document_refreshes( struct session *ses )
{
  if ( assert_failed == 0 )
  {
    assert_failed = ses[0].next == 0;
    if ( !(_Bool)( ses[0].next != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/refresh.c";
      errline = 127;
      elinks_internal( "assertion ses failed!" );
    }
  }
  if ( ses->doc_view && ses->doc_view->document && ses->doc_view->document->refresh && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && ( ( *(char*)(ses->doc_view->document->refresh + 12) & 1 ) & 255 ) && ses->doc_view->document->refresh->timer == 0 )
  {
    if ( ses->type_queries.next != ses->type_queries.next )
    {
      do
      {
        if ( compare_uri( ses->doc_view->document->refresh->uri, &ses->type_queries.next[16], URI_BASE ) )
          break;
      }
      while ( ses->type_queries.next[0] != ses->type_queries.next );
      ses = &ses[0];
      install_timer( (int)( &ses->doc_view->document->refresh->timer ), (unsigned char)( ( sec_to_ms( ses->doc_view->document->refresh->seconds ) < *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ) ^ 1 ) ? *(int*)(get_opt_( config_options, (unsigned char*)config_options )) : sec_to_ms( ses->doc_view->document->refresh->seconds ), &do_document_refresh, (void*)ses[0].next );
      return;
    }
    else
    {
      install_timer( (int)( &ses->doc_view->document->refresh->timer ), (unsigned char)( ( sec_to_ms( ses->doc_view->document->refresh->seconds ) < *(int*)(get_opt_( config_options, (unsigned char*)config_options )) ) ^ 1 ) ? *(int*)(get_opt_( config_options, (unsigned char*)config_options )) : sec_to_ms( ses->doc_view->document->refresh->seconds ), &do_document_refresh, (void*)ses[0].next );
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
