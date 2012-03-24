#include "fifo.c.h"
GtsFifo *gts_fifo_new( void )
{
  /* phantom */ GtsFifo *fifo;
  *(int*)g_malloc( 8 )/*.4*/ = 0;
  *(int*)(g_malloc( 8 )) = 0;
  return g_malloc( 8 );
}
void gts_fifo_write( GtsFifo *fifo, FILE *fp )
{
  GList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( fp == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fp != NULL" );
    return;
  }
  __fprintf_chk( fp, 1, "[" );
  i = fifo->head;
  if ( i )
  {
    do
    {
      __fprintf_chk( fp, 1, "%p ", i );
    }
    while ( i->next == 0 );
  }
  __fprintf_chk( fp, 1, "]" );
  return;
}
}
}
void gts_fifo_push( GtsFifo *fifo, gpointer data )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return;
  }
  fifo = (GtsFifo*)g_list_prepend( fifo->head, data );
  if ( fifo->tail == 0 )
  {
    fifo->tail = fifo[0].head;
    return;
  }
  return;
}
}
gpointer gts_fifo_pop( GtsFifo *fifo )
{
  int ebx;
  int esi;
  int edi;
  gpointer data;
  GList *tail;
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    data = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
  }
  data = 0;
  if ( fifo->tail )
  {
    tail = &fifo->tail->prev;
    data = &fifo->tail->data[0];
    fifo = (GtsFifo*)g_list_remove_link( fifo->head, fifo->tail );
    g_list_free_1( fifo->tail );
    fifo->tail = tail;
  }
  return data;
}
}
gpointer gts_fifo_top( GtsFifo *fifo )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return 0;
  }
  return &fifo->tail->data[0];
}
}
guint gts_fifo_size( GtsFifo *fifo )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return 0;
  }
  fifo = &fifo->head->data[0];
}
}
void gts_fifo_destroy( GtsFifo *fifo )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return;
  }
  g_list_free( fifo->head );
}
}
gboolean gts_fifo_is_empty( GtsFifo *fifo )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return 1;
  }
  return *(int*)(fifo) == 0;
}
}
void gts_fifo_foreach( GtsFifo *fifo, GtsFunc func, gpointer data )
{
  int eax;
  GList *i;
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
    data = "fifo != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
    data = "func != NULL";
  else
  {
    i = fifo->tail;
    if ( fifo->tail == 0 )
    {
      return;
    }
    do
    {
      func( &i, data );
    }
    while ( i->prev == 0 );
    return;
  }
}
  func = __PRETTY_FUNCTION__;
  fifo = 0;
}
}
void gts_fifo_reverse( GtsFifo *fifo )
{
{
  /* phantom */ int _g_boolean_var_;
  if ( fifo == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "fifo != NULL" );
    return;
  }
  fifo = (GtsFifo*)g_list_reverse( fifo->head );
  return;
}
}
#if 0
#endif
