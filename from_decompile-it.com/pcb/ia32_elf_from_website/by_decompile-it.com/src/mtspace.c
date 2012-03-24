#include "mtspace.c.h"
mtspacebox_t *mtspace_create_box( BoxType *box, BDimension keepaway )
{
  /* phantom */ mtspacebox_t *mtsb;
  *(int*)(malloc( 20 )) = box->X1;
  *(int*)malloc( 20 )/*.4*/ = box->Y1;
  *(int*)malloc( 20 )/*.8*/ = box->X2;
  *(int*)malloc( 20 )/*.12*/ = box->Y2;
  *(int*)malloc( 20 )/*.16*/ = keepaway;
  return malloc( 20 );
}
mtspace_t *mtspace_create( void )
{
  /* phantom */ mtspace_t *mtspace;
  *(int*)(malloc( 12 )) = r_create_tree( 0, 0, 0 );
  *(int*)malloc( 12 )/*.4*/ = r_create_tree( 0, 0, 0 );
  *(int*)malloc( 12 )/*.8*/ = r_create_tree( 0, 0, 0 );
  return (mtspace_t*)malloc( 12 );
}
void mtspace_destroy( mtspace_t **mtspacep )
{
  r_destroy_tree( &mtspacep[0]->ftree );
  r_destroy_tree( mtspacep[0] + 4 );
  r_destroy_tree( mtspacep[0] + 8 );
  free( mtspacep[0] );
  mtspacep[0] = 0;
  return;
}
int mts_remove_one( BoxType *b, void *cl )
{
  /* phantom */ struct mts_info *info;
  /* phantom */ mtspacebox_t *box;
  if ( ((int*)cl) == b->X1 && ((struct mts_info*)cl)->box.X2 == b->X2 && ((struct mts_info*)cl)->box.Y1 == b->Y1 && ((struct mts_info*)cl)->box.Y2 == b->Y2 && b[1].X1 == cl )
  {
    r_delete_entry( &((int*)cl), b );
    __longjmp_chk( cl + 24, 1 );
  }
  return 0;
}
rtree_t *which_tree( mtspace_t *mtspace, mtspace_type_t which )
{
  int edx;
  if ( which == FIXED )
  {
    return mtspace->ftree;
  }
  if ( which == EVEN )
  {
    return mtspace->etree;
  }
  return mtspace->otree;
}
void mtspace_add( mtspace_t *mtspace, BoxType *box, mtspace_type_t which, BDimension keepaway )
{
  int edx;
  int ebx;
  int esi;
  mtspacebox_t *filler;
  mtspace_create_box( box, keepaway );
  if ( which == FIXED )
  {
    which = ODD;
    box = (BoxType*)mtspace_create_box( box, keepaway );
    mtspace = &(mtspace_t*)(mtspace->otree->root);
  }
  else
  {
    if ( which == EVEN )
    {
    }
    else
    {
    }
  }
}
void mtspace_remove( mtspace_t *mtspace, BoxType *box, mtspace_type_t which, BDimension keepaway )
{
  int edx;
  struct mts_info cl;
  BoxType small_search;
  cl.keepaway = keepaway;
  cl.box.X1 = box->X1;
  cl.box.Y1 = box->Y1;
  cl.box.X2 = box->X2;
  cl.box.Y2 = box->Y2;
  if ( which == FIXED )
  {
  }
  else
  if ( which == EVEN )
  {
  }
  else
  {
  }
  cl.tree = mtspace->otree;
  small_search.X1 = *(int*)(box) + ( ( box->X2 - *(int*)(box) ) / 2 );
  small_search.X2 = box->X1 + ( ( *(int*)(box + 8) - *(int*)(box) ) / 2 ) + 1;
  small_search.Y1 = ( ( *(int*)(box + 12) - box->Y1 ) / 2 ) + *(int*)(box + 4);
  small_search.Y2 = ( ( box->Y2 - *(int*)(box + 4) ) / 2 ) + *(int*)(box + 4) + 1;
  if ( _setjmp( &cl.env[0].__jmpbuf[0] ) == 0 )
  {
    r_search( cl.tree, &small_search, 0, &mts_remove_one, &cl.keepaway );
  }
  return;
}
void append( struct query_closure *qc, BoxType *new )
{
  if ( qc->desired )
  {
    heap_insert( (int)( &qc->checking.v ), 0.000000000000, (void*)new );
    return;
  }
  vector_append( (int)( &qc->checking.v ), &new );
  return;
}
int query_one( BoxType *box, void *cl )
{
  int eax;
  int edx;
#error unstructured control flow
}
void qloop( struct query_closure *qc, rtree_t *tree, heap_or_vector res, Boolean is_vec )
{
  BoxType *cbox;
  &res.v = &ecx;
  do
  {
    if ( qc->desired )
    {
      if ( ( ( heap_is_empty( *(int*)(ebp_12 + 4) ) == 0 ) & 255 ) == 0 )
        break;
      if ( qc->desired )
      {
        cbox = (BoxType*)heap_remove_smallest( (int)( &qc->checking.v/*union*/ ) );
      }
      else
      {
        cbox = vector_remove_last( (int)( &qc->checking.v/*union*/ ) );
        if ( _setjmp( &qc->env[0].__jmpbuf[0] ) )
          continue;
        else
          break;
      }
    }
    else
    {
      if ( ( ( vector_is_empty( (int)( &qc->checking.v/*union*/ ) ) == 0 ) & 255 ) == 0 )
      {
        break;
      }
      else
      {
      }
    }
  }
  while ( _setjmp( &qc->env[0].__jmpbuf[0] ) );
  qc = &cbox->X1;
  r_search( tree, cbox, 0, &query_one, (void*)qc );
  if ( is_vec )
  {
    vector_append( &res.v, &cbox );
    return;
  }
  if ( qc->desired )
  {
    heap_insert( &res.v, 0.000000000000, (void*)cbox );
    return;
  }
  vector_append( &res.v, &cbox );
  return;
}
void mtsFreeWork( vetting_t **w )
{
  vetting_t *work = w[0];
  if ( work->desired.X != -823157 || work->desired.Y != -823157 )
  {
    heap_free( (int)( &work->untested.v/*union*/ ), &free );
    heap_destroy( &work[0].untested.v );
    heap_free( (int)( &work->no_fix.v/*union*/ ), &free );
    heap_destroy( &work->no_fix.v );
    heap_free( (int)( &work->no_hi.v/*union*/ ), &free );
    heap_destroy( &work->no_hi.v );
    heap_free( (int)( &work->hi_candidate.v/*union*/ ), &free );
    heap_destroy( &work->hi_candidate.v );
  }
  else
  {
    while ( vector_is_empty( (int)( &work->untested.v/*union*/ ) ) == 0 )
    {
      free( vector_remove_last( (int)( &work->untested.v/*union*/ ) ) );
    }
    vector_destroy( &work[0].untested.v );
    while ( vector_is_empty( (int)( &work->no_fix.v/*union*/ ) ) == 0 )
    {
      free( vector_remove_last( (int)( &work->no_fix.v/*union*/ ) ) );
    }
    vector_destroy( &work->no_fix.v );
    while ( vector_is_empty( (int)( &work->no_hi.v/*union*/ ) ) == 0 )
    {
      free( vector_remove_last( (int)( &work->no_hi.v/*union*/ ) ) );
    }
    vector_destroy( &work->no_hi.v );
    while ( vector_is_empty( (int)( &work->hi_candidate.v/*union*/ ) ) == 0 )
    {
      free( vector_remove_last( (int)( &work->hi_candidate.v/*union*/ ) ) );
    }
    vector_destroy( &work->hi_candidate.v );
  }
  free( work );
  w[0] = 0;
  return;
}
vetting_t *mtspace_query_rect( mtspace_t *mtspace, BoxType *region, BDimension radius, BDimension keepaway, vetting_t *work, vector_t *free_space_vec, vector_t *lo_conflict_space_vec, vector_t *hi_conflict_space_vec, Boolean is_odd, Boolean with_conflicts, CheapPointType *desired )
{
  int eax;
  int ecx;
  int edx;
  struct query_closure qc;
  if ( region )
  {
    /* phantom */ BoxType *cbox;
    *(int*)malloc( 32 )/*.20*/ = keepaway;
    *(int*)malloc( 32 )/*.16*/ = radius;
    work = malloc( ( 1 ) * sizeof( vetting_t ) );
    *(int*)malloc( 16 )/*.12*/ = region->Y2 - ( 0 - ( radius + keepaway ) );
    *(int*)malloc( 16 )/*.4*/ = region->Y1 + ( 0 - ( radius + keepaway ) );
    *(int*)malloc( 16 )/*.8*/ = region->X2 - ( 0 - ( radius + keepaway ) );
    *(int*)(malloc( 16 )) = region + ( 0 - ( radius + keepaway ) );
    if ( desired )
    {
      work->untested.v = heap_create( );
      work->no_fix = heap_create( );
      work->hi_candidate = heap_create( );
      work->no_hi = heap_create( );
      heap_insert( &work->untested.v, 0.000000000000, malloc( 16 ) );
      work->desired = desired->X;
      work->desired.Y = desired->Y;
    }
    work->untested.v = vector_create( );
    work->no_fix = vector_create( );
    work->hi_candidate = vector_create( );
    work->no_hi = vector_create( );
    vector_append( &work->untested.v, &ebx );
    work->desired.Y = -823157;
    work->desired = -823157;
    return work;
  }
  else
  {
    qc.keepaway = work->keepaway;
    qc.radius = work->radius;
    if ( work->desired.X == -823157 && work->desired.Y == -823157 )
    {
      qc.desired = 0;
      while ( 1 )
      {
        &qc.touching.v = 0;
        &qc.checking.v = &work->untested.v;
        qloop( ebp_220, mtspace->ftree, 0, ebp_220 );
        qc.touch_is_vec = 0;
        &qc.checking.v = &work->no_fix.v/*union*/;
        &qc.touching.v = &work->hi_candidate.v/*union*/;
        qloop( ebp_220, &region->X1, 0 );
        &qc.checking.v = &work->no_hi.v/*union*/;
        lo_conflict_space_vec = ( with_conflicts & 255 ) != 0 ? 0 : lo_conflict_space_vec;
        &qc.touching.v = &lo_conflict_space_vec;
        qc.touch_is_vec = 1;
        qloop( ebp_220, &region->X1, 1 );
        if ( vector_is_empty( &free_space_vec ) == 0 )
        {
          if ( qc.desired )
          {
            if ( heap_is_empty( &work->untested.v ) == 0 )
              break;
          }
          else
          {
            if ( vector_is_empty( &work->untested.v ) == 0 )
              break;
          }
        }
        else
        {
          if ( with_conflicts & 255 )
          {
            &qc.checking.v = &work->hi_candidate.v/*union*/;
            &qc.touching.v = 0;
            qloop( &qc, &region->X1, 1 );
          }
          if ( heap_is_empty( &work->untested.v ) & 255 )
            continue;
        }
        if ( qc.desired )
        {
          if ( heap_is_empty( &work->no_fix.v/*union*/ ) == 0 || heap_is_empty( &work->no_hi.v/*union*/ ) == 0 || heap_is_empty( &work->hi_candidate.v/*union*/ ) == 0 )
            break;
        }
        else
        {
          if ( vector_is_empty( &work->no_fix.v/*union*/ ) == 0 || vector_is_empty( &work->no_hi.v/*union*/ ) == 0 || vector_is_empty( &work->hi_candidate.v/*union*/ ) == 0 )
            break;
        }
        mtsFreeWork( &work );
        break;
      }
    }
    else
    {
      qc.desired = work + 24;
    }
  }
  return work;
}
int mtsBoxCount( vetting_t *w )
{
  return 100;
}
#if 0
#endif
