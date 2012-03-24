#include "vector.c.h"
vector_t *vector_create( void )
{
  /* phantom */ vector_t *vector;
  return calloc( 1, 12 );
}
void vector_destroy( vector_t **vector )
{
  int eax;
  if ( vector[0] )
  {
    free( vector[0] );
  }
  free( vector[0] );
  vector[0] = 0;
  return;
}
int vector_is_empty( vector_t *vector )
{
  return vector->size == 0;
}
int vector_size( vector_t *vector )
{
  return vector->size;
}
vector_element_t vector_element( vector_t *vector, int N )
{
  return &vector->element;
}
vector_element_t vector_element_first( vector_t *vector )
{
  return &vector->element;
}
vector_element_t vector_element_last( vector_t *vector )
{
  return &vector->element;
}
void vector_append( vector_t *vector, vector_element_t data )
{
  vector_insert_many( vector, vector->size, (vector_element_t*)&data, 1 );
  return;
}
void vector_append_many( vector_t *vector, vector_element_t *data, int count )
{
  vector_insert_many( vector, vector->size, data, count );
  return;
}
void vector_append_vector( vector_t *vector, vector_t *other_vector )
{
  vector_append_many( vector, (vector_element_t*)&other_vector->element[0], other_vector->size );
  return;
}
void vector_insert( vector_t *vector, int N, vector_element_t data )
{
  vector_insert_many( vector, N, (vector_element_t*)&data, 1 );
  return;
}
void vector_insert_many( vector_t *vector, int N, vector_element_t *data, int count )
{
  int eax;
  int ecx;
  int ebx;
  int edi;
  if ( count )
  {
    if ( vector->size + count <= vector->max )
    {
    }
    else
    {
      vector->max = ( ( vector->max * 2 ) < 32 ? vector->max * 2 : 32 ) < vector->size + count ? ( vector->max * 2 ) < 32 ? vector->max * 2 : 32 : vector->size + count;
      vector = (vector_t*)realloc( vector, ( ( ( vector->max * 2 ) < 32 ? vector->max * 2 : 32 ) < vector->size + count ? ( vector->max * 2 ) < 32 ? vector->max * 2 : 32 : vector->size + count ) << 2 );
    }
    memmove( vector + ( ( N + count ) << 2 ), vector + ( N << 2 ), ( vector->size - N ) << 2 );
    memmove( vector + ( N << 2 ), data, count << 2 );
    vector->size = vector->size + count;
  }
  return;
}
vector_t *vector_duplicate( vector_t *orig )
{
  vector_t *new = vector_create( );
  if ( orig )
  {
    new->max = orig->max;
    new = (vector_t*)malloc( orig->max << 2 );
    new->size = orig->size;
    memcpy( new, orig, orig->size << 2 );
  }
  return new;
}
vector_element_t vector_remove_last( vector_t *vector )
{
  return vector_remove( vector, vector->size + -1 );
}
vector_element_t vector_remove( vector_t *vector, int N )
{
  int esi;
  vector_element_t old = (void*)&vector->element;
  memmove( vector->element[0] + ( N << 2 ), vector->element[0] + ( N << 2 ) + 4, ( vector->size + ~N ) << 2 );
  vector->size += -1;
  return old;
}
vector_element_t vector_replace( vector_t *vector, vector_element_t data, int N )
{
  vector_element_t old;
  vector->element = (vector_element_t*)&data;
  return &vector->element;
}
#if 0
#endif
