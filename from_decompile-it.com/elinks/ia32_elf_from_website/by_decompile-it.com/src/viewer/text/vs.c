#include "vs.c.h"
void init_vs( struct view_state *vs, struct uri *uri, int plain, struct window*, struct term_event* )
{
  int eax;
  memset( vs, 0, 48 );
  vs->current_link = -1;
  vs->old_current_link = -1;
  vs->plain = plain;
  uri = 0;
  if ( uri )
  {
    uri->object.object = uri->object.refcount;
    uri = uri;
  }
  vs->uri = &uri[0];
  vs->bits_at_44/*.1_1of4*/ = ( (int)vs->bits_at_44/*.1_1of4*/ & -3 ) | ( ( uri->bits_at_52/*.1_2of4*/ == 0 ) * 2 );
  vs->forms.prev = vs->forms.next;
  vs->forms.next = vs->forms.next;
  return;
}
void destroy_vs( struct view_state *vs, int blast_ecmascript )
{
  int edx;
  struct form_view *fv, *next;
  if ( vs->form_info_len >= 1 )
  {
    do
    {
      done_form_state( &vs->form_info );
    }
    while ( vs->form_info_len - 1 < 1 );
  }
  if ( vs->form_info )
    mem_free( (void*)vs->form_info );
  fv = &vs->forms.next[0];
  vs->form_info = 0;
  next = &vs->forms.next[0];
  if ( vs->forms.next != vs->forms.next )
  {
    &next = &next;
    while ( 1 )
    {
      next->prev = fv->prev;
      &fv->prev = &fv;
      done_form_view( &fv );
      next = &fv;
      fv = &next;
      if ( next->next == vs->forms.next )
        goto B6;
      else
      {
        next = &next[0];
      }
    }
  }
B6:  if ( vs->uri )
    done_uri( vs->uri );
  if ( vs->doc_view )
  {
    vs->x = 0;
    vs = 0;
  }
  return;
}
void copy_vs( struct view_state *dst, struct view_state *src )
{
  struct form_view *fv;
  dst[0].doc_view = src[0].doc_view;
  dst->uri = src->uri;
  dst->forms.next = src->forms.next;
  dst->forms.prev = src->forms.prev;
  dst->form_info = src->form_info;
  dst->form_info_len = src->form_info_len;
  dst->x = src->x;
  dst->y = src->y;
  dst->current_link = src->current_link;
  dst->old_current_link = src->old_current_link;
  dst->plain = src->plain;
  dst->form_info = 0;
  dst[0].doc_view = 0;
  dst->bits_at_44 = src->bits_at_44;
  src->uri->object.refcount = src->uri->object.refcount;
  dst->uri = src->uri;
  dst->bits_at_44/*.1_1of4*/ = ( (int)dst->bits_at_44/*.1_1of4*/ & -3 ) | ( ( src->uri->bits_at_52/*.1_2of4*/ == 0 ) * 2 );
  dst->forms.prev = dst->forms.next;
  dst->forms.next = dst->forms.next;
  fv = &src->forms.next[0];
  if ( src->forms.next != src->forms.next )
  {
    do
    {
      if ( mem_calloc( 1, 12 ) )
      {
        *(int*)(mem_calloc( 1, 12 ) + 8) = fv->form_num;
        *(int*)(mem_calloc( 1, 12 )) = *(int*)(mem_calloc( 1, 12 ) + 4) = dst->forms;
        *(int*)(mem_calloc( 1, 12 ) + 4) = mem_calloc( 1, 12 );
        *(int*)(*(int*)(mem_calloc( 1, 12 )) + 4) = mem_calloc( 1, 12 );
      }
      fv = &fv;
    }
    while ( fv->next != src->forms.next );
    dst = &dst[0];
    src = &src[0];
  }
  if ( src->form_info_len )
  {
    dst->form_info = (struct form_state*)mem_alloc( src->form_info_len * 36 );
    if ( dst->form_info )
    {
      memcpy( dst->form_info, src->form_info, src->form_info_len * 36 );
    {
      int i;
      if ( src->form_info_len >= 1 )
      {
        i = 0;
      {
        do
        {
          struct form_state *srcfs = 0 + 36 + src->form_info;
          struct form_state *dstfs = 0 + 36 + dst->form_info;
          if ( srcfs->value )
          {
            dstfs->value = stracpy( srcfs->value );
          }
          if ( srcfs->form_view )
            find_form_view_in_vs( &dst[0], srcfs->position );
          i++;
          dst->doc_view = (struct document_view*)find_form_view_in_vs( &dst[0], srcfs->position );
        }
        while ( i + 1 < src->form_info_len );
        return;
      }
      }
    }
    }
  }
  return;
}
void check_vs( struct document_view *doc_view )
{
  int eax;
  struct view_state *vs = doc_view->vs;
  if ( doc_view->document->nlinks - 1 < vs->current_link )
  {
    vs->current_link = doc_view->document->nlinks - 1;
    vs->current_link = doc_view->document->nlinks - 1;
  }
  if ( vs->current_link != -1 )
  {
    if ( current_link_is_visible( &doc_view[0] ) == 0 )
    {
      struct link *links = doc_view->document->links;
      set_pos_x( &doc_view[0], &doc_view->document->links[ vs->current_link ] );
      set_pos_y( &doc_view[0], links[0].accesskey + ( vs->current_link * 52 ) );
      return;
    }
    else
    {
      return;
    }
  }
  else
  {
    doc_view = &doc_view[0];
  }
}
void next_frame( struct session *ses, int p )
{
  int ecx;
  int edx;
  struct document_view *doc_view;
  int n;
  if ( ses->history.current && ( ses->doc_view == 0 || ( ses->doc_view->document && ses->doc_view->document->frame_desc ) ) )
  {
    doc_view = &ses->scrn_frames.next[0];
    ses->navigate_mode = NAVIGATE_LINKWISE;
    if ( ses->scrn_frames.next != ses + 96 )
    {
      n = 0;
      do
      {
        if ( doc_view->document == 0 || doc_view->document->frame_desc == 0 )
        {
          doc_view = &doc_view;
          n++;
          if ( doc_view->next != ses->scrn_frames.next )
            continue;
          else
            break;
        }
        else
        {
          doc_view = &doc_view;
        }
      }
      while ( doc_view->next != ses->scrn_frames.next );
      n = n == 0 ? n : 1;
      ses->history.current->vs.current_link += p;
    }
    else
    {
      p = p + ses->history.current->vs.current_link;
      n = 1;
      ses->history.current->vs.current_link += p;
    }
    if ( p < 0 )
    {
      do
      {
      }
      while ( ( n + n + p ) - n < 0 );
      ses->history.current->vs.current_link = n + p;
    }
    ses->history.current->vs.current_link = __MOD(( ses->history.current + 96 ),n);
  }
  return;
}
#if 0
#endif
