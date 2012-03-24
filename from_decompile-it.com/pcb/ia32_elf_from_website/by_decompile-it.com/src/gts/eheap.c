#include "eheap.c.h"
GtsEHeap *gts_eheap_new( GtsKeyFunc key_func, gpointer data )
{
  /* phantom */ GtsEHeap *heap;
  *(int*)g_malloc( 20 )/*.12*/ = 0;
  *(int*)g_malloc( 20 )/*.16*/ = 0;
  *(int*)(g_malloc( 20 )) = g_ptr_array_new( );
  *(int*)g_malloc( 20 )/*.4*/ = key_func;
  *(int*)g_malloc( 20 )/*.8*/ = data[0];
  return g_malloc( 20 );
}
void sift_up( GtsEHeap *heap, guint i )
{
  int ecx;
  double fp6;
  double fp7;
  GtsEHeapPair *parent, *child;
  guint p;
  gpointer *pdata;
  gdouble key;
  pdata[0] = heap->elts->pdata[0];
  child = &heap->elts->pdata[0][0];
  if ( i > 1 )
  {
    do
    {
      p = i >> 1;
      parent = *(int*)(pdata + -4);
      if ( parent->key < parent->key )
      {
      }
      else
      if ( heap->randomized == 0 )
      {
        break;
      }
      else
      if ( heap->elts->len != heap->elts->len )
      {
        break;
      }
      else
      if ( !0 )
      {
        if ( rand( ) > 0x3ffffffe )
          break;
      }
      else
      {
        break;
      }
      *(int*)(pdata + -4) = (gpointer*)&child->data;
      child->pos = p;
      *(int*)(pdata + -4) = (gpointer*)&parent[0].data;
      parent->pos = i;
      i = p;
    }
    while ( p > 1 );
  }
  else
  {
  }
  return;
}
GtsEHeapPair *gts_eheap_insert( GtsEHeap *heap, gpointer p )
{
  int edx;
  int ebx;
  int edi;
  GtsEHeapPair *pair;
  GPtrArray *elts;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    pair = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( heap->func == 0 )
  {
    pair = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap-&gt;func != NULL" );
  }
  elts = heap->elts;
  pair = g_malloc( 16 );
  g_ptr_array_add( elts, g_malloc( 16 ) );
  pair->pos = elts->len;
  pair = &p[0];
  ;
}
  return pair;
}
}
GtsEHeapPair *gts_eheap_insert_with_key( GtsEHeap *heap, gpointer p, gdouble key )
{
  int eax;
  int edx;
  int esi;
  int edi;
  double fp7;
  GtsEHeapPair *pair;
  GPtrArray *elts;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    pair = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
  }
  elts = heap->elts;
  pair = g_malloc( 16 );
  g_ptr_array_add( elts, g_malloc( 16 ) );
  pair = &p[0];
  pair->key = key;
  pair->pos = elts->len;
  if ( heap->frozen == 0 )
  {
    sift_up( heap, elts->len );
  }
  return pair;
}
}
void sift_down( GtsEHeap *heap, guint i )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp5;
  double fp7;
  GtsEHeapPair *left_child, *right_child, *child, *parent;
  guint lc = i * 2;
  guint rc = ( i * 2 ) + 1;
  guint c;
  gpointer *pdata = (gpointer*)&heap->elts->pdata[0];
  guint len;
  gdouble key;
  left_child = 0;
  len = heap->func;
  right_child = 0;
  parent = &pdata[ i + -1 ][0];
  while ( left_child )
  {
    if ( right_child )
    {
      c = lc;
      if ( left_child->key <= 0.000000000000 )
      {
        break;
      }
    }
    else
    {
      c = lc;
      if ( left_child->key < left_child->key )
      {
      }
      else
      {
        break;
      }
    }
    lc = c * 2;
    child->pos = i;
    rc = ( c * 2 ) + 1;
    pdata[ i - 1 ] = (void*)child;
    left_child = 0;
    pdata[ c + -1 ] = (void*)parent;
    parent->pos = c;
    right_child = 0;
    i = c;
  }
  return;
}
gpointer gts_eheap_remove_top( GtsEHeap *heap, gdouble *key )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  gpointer root;
  GPtrArray *elts;
  guint len;
  GtsEHeapPair *pair;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    root = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
  }
  elts = heap->elts;
  root = 0;
  len = *(int*)(heap->func);
  if ( elts->len )
  {
    if ( len == 1 )
    {
      root = (void*)pair;
      if ( key )
        key[0] = pair->key;
      g_free( &pair );
    }
    else
    {
      pair = &elts->pdata[0][0];
      root = elts->pdata[0];
      if ( key )
        key[0] = pair->key;
      g_free( &pair );
      len += -1;
      len = 1;
      elts->pdata[0] = &len;
      len = heap;
      sift_down( heap, 1 );
    }
  }
  return root;
}
}
gpointer gts_eheap_top( GtsEHeap *heap, gdouble *key )
{
  int eax;
  int ecx;
  GtsEHeapPair *pair;
  GPtrArray *elts;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return 0;
  }
  elts = heap->elts;
  if ( elts->len )
  {
    pair = &elts->pdata[0][0];
    if ( key )
      key[0] = pair->key;
    elts->pdata[0] = *(int*)(elts->pdata[0]);
  }
  return *(int*)(elts->pdata[0]);
}
}
void gts_eheap_destroy( GtsEHeap *heap )
{
  guint i;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return;
  }
  if ( *(int*)(heap->func) )
  {
    i = 0;
    do
    {
      i++;
      g_free( &heap->elts );
    }
    while ( *(int*)(heap->func) <= i );
  }
  g_ptr_array_free( heap->elts, 1 );
}
}
void gts_eheap_thaw( GtsEHeap *heap )
{
  int eax;
  int edx;
  guint i;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return;
  }
  if ( heap->frozen )
  {
    i = *(int*)(heap->func) >> 1;
    if ( *(int*)(heap->func) >> 1 )
    {
      do
      {
        sift_down( heap, i );
      }
      while ( i == 1 );
    }
    heap->frozen = 0;
  }
  return;
}
}
void gts_eheap_foreach( GtsEHeap *heap, GFunc func, gpointer data )
{
  int eax;
  int edx;
  guint i;
  GPtrArray *elts;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
    data = "heap != NULL";
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( func == 0 )
    data = "func != NULL";
  else
  {
    elts = &heap->elts->pdata[0][0];
    if ( elts->len == 0 )
    {
      return;
    }
    i = 0;
    do
    {
      func( *(int*)(elts->pdata[0]), &i );
      i++;
    }
    while ( elts->len <= i );
    return;
  }
}
  func = __PRETTY_FUNCTION__;
  heap = 0;
}
}
gpointer gts_eheap_remove( GtsEHeap *heap, GtsEHeapPair *p )
{
  int eax;
  int edx;
  /* phantom */ GtsEHeapPair **pdata;
  GtsEHeapPair *parent;
  guint i;
  guint par;
  gpointer data;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    data = 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( p == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p != NULL" );
    data = 0;
  }
  i = p->pos;
  data = (void*)p;
{
  /* phantom */ int _g_boolean_var_;
  if ( i == 0 || heap->func < i )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "i &gt; 0 && i &lt;= heap-&gt;elts-&gt;len" );
    data = 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( heap->elts != p )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "p == pdata[i - 1]" );
    data = 0;
    return data;
  }
  if ( i > 1 )
  {
    while ( par = i >> 1, parent = &heap->elts->pdata[0][0], heap->elts = heap->elts, heap->elts[1].len = i >> 1, heap->elts[1].len = &i, i >>= 1, ( i >> 1 ) > 1 )
    {
    }
  }
  gts_eheap_remove_top( heap, 0 );
  return data;
}
}
}
  return data;
}
}
void gts_eheap_decrease_key( GtsEHeap *heap, GtsEHeapPair *p, gdouble new_key )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  guint i;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap )
  {
    /* phantom */ int _g_boolean_var_;
    if ( p )
    {
      i = p->pos;
    {
      /* phantom */ int _g_boolean_var_;
      if ( i )
      {
        if ( *(int*)(heap->func) < i )
        {
        }
        else
      {
        /* phantom */ int _g_boolean_var_;
        if ( heap->elts != p )
        {
          p = &__PRETTY_FUNCTION__[0];
          heap = 0;
        }
        else
      {
        /* phantom */ int _g_boolean_var_;
        if ( p->key <= new_key )
        {
          p->key = new_key;
          if ( heap->frozen )
          {
            return;
          }
        }
        else
        {
        }
      }
      }
      }
      else
      {
      }
    }
    }
    else
    {
    }
  }
  else
  {
  }
}
(new_key & 0xFFFFFFFF) = "heap != NULL"; // XXX
}
void gts_eheap_freeze( GtsEHeap *heap )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return;
  }
  heap->frozen = 1;
  return;
}
}
guint gts_eheap_size( GtsEHeap *heap )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return 0;
  }
  return heap->func;
}
}
void gts_eheap_update( GtsEHeap *heap )
{
  int eax;
  guint i;
  guint len;
  /* phantom */ GtsEHeapPair **pairs;
  gpointer data;
  GtsKeyFunc func;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
  }
  else
{
  /* phantom */ int _g_boolean_var_;
  if ( heap->func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap-&gt;func != NULL" );
  }
  else
  {
    heap->frozen = 1;
    len = heap->func;
    data = &data[2];
    func = &data[1];
    if ( *(int*)(*(int*)(data) + 4) == 0 )
    {
      heap = heap;
    }
    i = 0;
    data = heap->data;
  {
    do
    {
      GtsEHeapPair *pair = &heap->elts->pdata[0][0];
      i++;
      func( &pair, data );
    }
    while ( len <= i );
    heap = heap;
  }
  }
}
  return;
}
}
gdouble gts_eheap_key( GtsEHeap *heap, gpointer p )
{
  int eax;
  int ecx;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return 0;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( heap->func == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap-&gt;func != NULL" );
    return 0;
  }
  heap = &p[0];
  p = &heap->data[2];
  ;
}
}
}
void gts_eheap_randomized( GtsEHeap *heap, gboolean randomized )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( heap == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "heap != NULL" );
    return;
  }
  heap->randomized = randomized;
  return;
}
}
#if 0
#endif
