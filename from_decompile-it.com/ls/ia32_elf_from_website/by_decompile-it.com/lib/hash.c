#include "hash.c.h"
static _Bool is_prime( size_t candidate );
static size_t next_prime( size_t candidate );
static _Bool check_tuning( Hash_table *table );
static struct hash_entry *allocate_entry( Hash_table *table );
static void free_entry( Hash_table *table, struct hash_entry *entry );
static void *hash_find_entry( Hash_table *table, void *entry, struct hash_entry **bucket_head, _Bool delete );
static Hash_tuning default_tuning = { 0.000000000000, 1.000000000000, 0.800000011921, 1.414000034332, 0, { 0,  },  }
;
size_t hash_get_n_buckets( Hash_table *table )
{
  return table->n_buckets;
}
size_t hash_get_n_buckets_used( Hash_table *table )
{
  return table->n_buckets_used;
}
size_t hash_get_n_entries( Hash_table *table )
{
  return table->n_entries;
}
size_t hash_get_max_bucket_length( Hash_table *table )
{
  struct hash_entry *bucket;
  size_t max_bucket_length = 0;
  bucket = table->bucket;
  for ( ; bucket < table->bucket_limit; bucket++ )
  {
    if ( bucket->data != 0 )
    {
      struct hash_entry *cursor = bucket;
      size_t bucket_length = 1;
      while ( cursor = cursor->next, cursor != 0 )
      {
        bucket_length++;
      }
      if ( max_bucket_length < bucket_length )
        max_bucket_length = bucket_length;
    }
    //bucket++;
  }
  return max_bucket_length;
}
_Bool hash_table_ok( Hash_table *table )
{
  struct hash_entry *bucket;
  size_t n_buckets_used = 0;
  size_t n_entries = 0;
  bucket = table->bucket;
  for ( ; bucket < table->bucket_limit; bucket++ )
  {
    if ( bucket->data != 0 )
    {
      struct hash_entry *cursor = bucket;
      n_buckets_used++;
      n_entries++;
      while ( cursor = cursor->next, cursor != 0 )
      {
        n_entries++;
      }
    }
    //bucket++;
  }
  return ( table->n_buckets_used == n_buckets_used && table->n_entries == n_entries ? 1 : 0 );
}
void hash_print_statistics( Hash_table *table, FILE *stream )
{
  size_t n_entries = hash_get_n_entries( table );
  size_t n_buckets = hash_get_n_buckets( table );
  size_t n_buckets_used = hash_get_n_buckets_used( table );
  size_t max_bucket_length = hash_get_max_bucket_length( table );
  fprintf( stream, "# entries:         %lu\n", n_entries );
  fprintf( stream, "# buckets:         %lu\n", n_buckets );
  fprintf( stream, "# buckets used:    %lu (%.2f%%)\n", n_buckets_used, ( (double)( (long long)( n_buckets_used ) ) * 100.000000000000 ) / (double)( (long long)( n_buckets ) ) );
  fprintf( stream, "max bucket length: %lu\n", max_bucket_length );
  return;
}
void *hash_lookup( Hash_table *table, void *entry )
{
  struct hash_entry *bucket = table->bucket + ( table->hasher( entry, table->n_buckets ) << 3 );
  struct hash_entry *cursor;
  if ( table->bucket_limit <= bucket )
  {
    abort( );
  }
  if ( bucket->data == 0 )
  {
    return 0;
  }
  cursor = bucket;
  for ( ; cursor != 0; cursor = cursor->next )
  {
    if ( ( table->comparator( entry, cursor->data ) & 255 ) != 0 )
    {
      return cursor->data;
    }
    //cursor = cursor->next;
  }
  return 0;
}
void *hash_get_first( Hash_table *table )
{
  struct hash_entry *bucket;
  if ( table->n_entries == 0 )
  {
    return 0;
  }
  bucket = table->bucket;
  while ( bucket < table->bucket_limit )
  {
    if ( bucket->data != 0 )
    {
      return bucket->data;
    }
    bucket++;
  }
  abort( );
}
void *hash_get_next( Hash_table *table, void *entry )
{
  struct hash_entry *bucket = table->bucket + ( table->hasher( entry, table->n_buckets ) << 3 );
  struct hash_entry *cursor;
  if ( table->bucket_limit <= bucket )
  {
    abort( );
  }
  cursor = bucket;
  for ( ; cursor != 0; cursor = cursor->next )
  {
    if ( cursor->data == entry && cursor->next != 0 )
    {
      return &(void*)(cursor->next);
    }
    //cursor = cursor->next;
  }
  do
  {
    bucket++;
    if ( table->bucket_limit <= bucket )
    {
      return 0;
    }
  }
  while ( bucket->data != 0 );
  return bucket->data;
}
size_t hash_get_entries( Hash_table *table, void **buffer, size_t buffer_size )
{
  size_t counter = 0;
  struct hash_entry *bucket = table->bucket;
  struct hash_entry *cursor;
  for ( ; bucket < table->bucket_limit; bucket++ )
  {
    if ( bucket->data != 0 )
    {
      cursor = bucket;
      for ( ; cursor != 0; cursor = cursor->next )
      {
        if ( buffer_size <= counter )
        {
          return counter;
        }
        buffer[ counter ] = cursor->data;
        counter++;
        //cursor = cursor->next;
      }
    }
    //bucket++;
  }
  return counter;
}
size_t hash_do_for_each( Hash_table *table, Hash_processor processor, void *processor_data )
{
  size_t counter = 0;
  struct hash_entry *bucket = table->bucket;
  struct hash_entry *cursor;
  for ( ; bucket < table->bucket_limit; bucket++ )
  {
    if ( bucket->data != 0 )
    {
      cursor = bucket;
      for ( ; cursor != 0; cursor = cursor->next )
      {
        if ( ( ( processor( cursor->data, processor_data ) ^ 1 ) & 255 ) != 0 )
        {
          return counter;
        }
        counter++;
        //cursor = cursor->next;
      }
    }
    //bucket++;
  }
  return counter;
}
size_t hash_string( char *string, size_t n_buckets )
{
  int eax;
  size_t value = 0;
  unsigned char ch;
  while ( ch = string[0], ch != 0 )
  {
    value = (long long)( ( value * 31 ) + ch ) % n_buckets;
    string++;
  }
  return value;
}
_Bool is_prime( size_t candidate )
{
  size_t divisor = 3;
  size_t square = divisor * divisor;
  for ( ; square < candidate && ( (long long)( candidate ) % divisor ) != 0; divisor++ )
  {
    divisor++;
    square += divisor << 2;
    //divisor++;
  }
  return ( (long long)( candidate ) % divisor ) != 0;
}
size_t next_prime( size_t candidate )
{
  if ( candidate <= 9 )
    candidate = 10;
  candidate |= 1;
  for ( ; ( ( is_prime( candidate ) ^ 1 ) & 255 ) != 0; candidate += 2 )
  {
    //candidate += 2;
  }
  return candidate;
}
void hash_reset_tuning( Hash_tuning *tuning )
{
  tuning->shrink_threshold = 0.0;
  tuning->shrink_factor = 1.000000000000;
  tuning->growth_threshold = 0.800000011921;
  tuning->growth_factor = 1.414000034332;
  tuning->is_n_buckets = 0;
  return;
}
_Bool check_tuning( Hash_table *table )
{
  Hash_tuning *tuning = table->tuning;
  float epsilon = 0.100000001490;
  if ( ( 0 & 1 ) != 1 && ( 0 & 1 ) != 1 && ( 0 & 1 ) != 1 && !(_Bool)( 0 ) && ( 0 & 1 ) != 1 && !(_Bool)( 0 ) && ( 0 & 1 ) != 1 )
  {
  }
  else
  {
    table->tuning = &default_tuning;
  }
  return 1;
}
Hash_table *hash_initialize( size_t candidate, Hash_tuning *tuning, Hash_hasher hasher, Hash_comparator comparator, Hash_data_freer data_freer )
{
  int edx;
  Hash_table *table;
  if ( hasher == 0 || comparator == 0 )
  {
    return 0;
  }
  table = malloc( ( 1 ) * sizeof( Hash_table ) );
  if ( table == 0 )
  {
    return 0;
  }
  if ( tuning == 0 )
    tuning = &default_tuning;
  table->tuning = tuning;
  if ( ( ( check_tuning( table ) ^ 1 ) & 255 ) == 0 )
  {
    if ( ( ( tuning->is_n_buckets ^ 1 ) & 255 ) != 0 )
    {
      float new_candidate = (double)( (long long)( candidate ) ) / tuning->growth_threshold;
      if ( 0 == 1 )
        candidate = (long long)( new_candidate );
    }
    if ( candidate <= 0x1fffffff )
    {
      table->n_buckets = next_prime( candidate );
      if ( table->n_buckets <= 0x1fffffff )
      {
        table->bucket = calloc( table->n_buckets, 8 );
        if ( table->bucket != 0 )
        {
          table->bucket_limit = &table->bucket[ table->n_buckets ];
          table->n_buckets_used = 0;
          table->n_entries = 0;
          table->hasher = hasher;
          table->comparator = comparator;
          table->data_freer = data_freer;
          table->free_entry_list = 0;
          return table;
        }
      }
    }
  }
  free( table );
  return 0;
}
void hash_clear( Hash_table *table )
{
  struct hash_entry *bucket = table->bucket;
  for ( ; bucket < table->bucket_limit; bucket++ )
  {
    if ( bucket->data != 0 )
    {
      struct hash_entry *cursor = bucket->next;
      struct hash_entry *next;
      for ( ; cursor != 0; cursor = next )
      {
        if ( table->data_freer != 0 )
          table->data_freer( cursor->data );
        cursor->data = 0;
        next = cursor->next;
        cursor->next = table->free_entry_list;
        table->free_entry_list = cursor;
        //cursor = next;
      }
      if ( table->data_freer != 0 )
        table->data_freer( bucket->data );
      bucket->data = 0;
      bucket->next = 0;
    }
    //bucket++;
  }
  table->n_buckets_used = 0;
  table->n_entries = 0;
  return;
}
void hash_free( Hash_table *table )
{
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  if ( table->data_freer != 0 && table->n_entries != 0 )
  {
    bucket = table->bucket;
    for ( ; bucket < table->bucket_limit; bucket++ )
    {
      if ( bucket->data != 0 )
      {
        cursor = bucket;
        for ( ; cursor != 0; cursor = cursor->next )
        {
          table->data_freer( cursor->data );
          //cursor = cursor->next;
        }
      }
      //bucket++;
    }
  }
  bucket = table->bucket;
  for ( ; bucket < table->bucket_limit; bucket++ )
  {
    cursor = bucket->next;
    for ( ; cursor != 0; cursor = next )
    {
      next = cursor->next;
      free( cursor );
      //cursor = next;
    }
    //bucket++;
  }
  cursor = table->free_entry_list;
  for ( ; cursor != 0; cursor = next )
  {
    next = cursor->next;
    free( cursor );
    //cursor = next;
  }
  free( table->bucket );
  free( table );
  return;
}
struct hash_entry *allocate_entry( Hash_table *table )
{
  struct hash_entry *new;
  if ( table->free_entry_list != 0 )
  {
    new = table->free_entry_list;
    table->free_entry_list = new->next;
  }
  else
  {
    new = malloc( ( 1 ) * sizeof( struct hash_entry ) );
  }
  return new;
}
void free_entry( Hash_table *table, struct hash_entry *entry )
{
  entry->data = 0;
  entry->next = table->free_entry_list;
  table->free_entry_list = entry;
  return;
}
void *hash_find_entry( Hash_table *table, void *entry, struct hash_entry **bucket_head, _Bool delete )
{
  struct hash_entry *bucket = table->bucket + ( table->hasher( entry, table->n_buckets ) << 3 );
  struct hash_entry *cursor;
  if ( table->bucket_limit <= bucket )
  {
    abort( );
  }
  bucket_head[0] = bucket;
  if ( bucket->data == 0 )
  {
    return 0;
  }
  if ( ( table->comparator( entry, bucket->data ) & 255 ) != 0 )
  {
    void *data = bucket->data;
    if ( delete != 0 )
    {
      if ( bucket->next != 0 )
      {
        struct hash_entry *next = bucket->next;
        bucket->data = next->data;
        bucket->next = next->next;
        free_entry( table, next );
      }
      else
        bucket->data = 0;
    }
    return data;
  }
  else
  {
    cursor = bucket;
    for ( ; cursor->next != 0; cursor = cursor->next )
    {
      if ( ( table->comparator( entry, (int)( &(void*)(cursor->next) ) ) & 255 ) != 0 )
      {
        void *data = &(void*)(cursor->next);
        if ( delete != 0 )
        {
          struct hash_entry *next = cursor->next;
          cursor->next = next->next;
          free_entry( table, next );
        }
        return data;
      }
      else
      {
        //cursor = cursor->next;
      }
    }
    return 0;
  }
}
_Bool hash_rehash( Hash_table *table, size_t candidate )
{
  Hash_table *new_table = hash_initialize( candidate, table->tuning, table->hasher, table->comparator, table->data_freer );
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  if ( new_table == 0 )
  {
  }
  else
  {
    new_table->free_entry_list = table->free_entry_list;
    bucket = table->bucket;
    for ( ; bucket < table->bucket_limit; bucket++ )
    {
      if ( bucket->data != 0 )
      {
        cursor = bucket;
        for ( ; cursor != 0; cursor = next )
        {
          void *data = cursor->data;
          struct hash_entry *new_bucket = new_table->bucket + ( new_table->hasher( data, new_table->n_buckets ) << 3 );
          if ( new_table->bucket_limit <= new_bucket )
          {
            abort( );
          }
          next = cursor->next;
          if ( new_bucket->data != 0 )
          {
            if ( cursor == bucket )
            {
              struct hash_entry *new_entry = allocate_entry( new_table );
              if ( new_entry == 0 )
              {
                break;
              }
              else
              {
                new_entry->data = data;
                new_entry->next = new_bucket->next;
                new_bucket->next = new_entry;
              }
            }
            else
            {
              cursor->next = new_bucket->next;
              new_bucket->next = cursor;
            }
          }
          else
          {
            new_bucket->data = data;
            new_table->n_buckets_used++;
            if ( cursor != bucket )
              free_entry( new_table, cursor );
          }
          //cursor = next;
        }
      }
      //bucket++;
    }
    free( table->bucket );
    table->bucket = new_table->bucket;
    table->bucket_limit = new_table->bucket_limit;
    table->n_buckets = new_table->n_buckets;
    table->n_buckets_used = new_table->n_buckets_used;
    table->free_entry_list = new_table->free_entry_list;
    free( new_table );
  }
  return 0;
}
void *hash_insert( Hash_table *table, void *entry )
{
  int edx;
  void *data;
  struct hash_entry *bucket;
  if ( entry == 0 )
  {
    abort( );
  }
  data = hash_find_entry( table, entry, &bucket, 0 );
  if ( data != 0 )
  {
    return data;
  }
  if ( bucket->data != 0 )
  {
    struct hash_entry *new_entry = allocate_entry( table );
    if ( new_entry == 0 )
    {
      return 0;
    }
    new_entry->data = entry;
    new_entry->next = bucket->next;
    bucket->next = new_entry;
    table->n_entries++;
    return entry;
  }
  else
  {
    bucket->data = entry;
    table->n_entries++;
    table->n_buckets_used++;
    if ( ( ( 0 | ( 0 >> 6 ) ) & 1 ) != 1 )
    {
      check_tuning( table );
      if ( ( ( 0 | ( 0 >> 6 ) ) & 1 ) != 1 )
      {
        Hash_tuning *tuning = table->tuning;
        float candidate = ( tuning->is_n_buckets & 255 ) == 0 ? (float)( (double)( (long long)( table->n_buckets ) ) * tuning->growth_factor * tuning->growth_threshold ) : (float)( (double)( (long long)( table->n_buckets ) ) * tuning->growth_factor );
        if ( 0 != 1 )
        {
          return 0;
        }
        if ( ( ( hash_rehash( table, (long long)( candidate ) ) ^ 1 ) & 255 ) != 0 )
          entry = 0;
      }
    }
    return entry;
  }
}
void *hash_delete( Hash_table *table, void *entry )
{
  int edx;
  void *data = hash_find_entry( table, entry, &bucket, 1 );
  struct hash_entry *bucket;
  if ( data == 0 )
  {
    return 0;
  }
  table->n_entries--;
  if ( bucket->data == 0 )
  {
    table->n_buckets_used--;
    if ( ( ( 0 | ( 0 >> 6 ) ) & 1 ) != 1 )
    {
      check_tuning( table );
      if ( ( ( 0 | ( 0 >> 6 ) ) & 1 ) != 1 )
      {
        Hash_tuning *tuning = table->tuning;
        size_t candidate = ( tuning->is_n_buckets & 255 ) == 0 ? (long long)( (double)( (long long)( table->n_buckets ) ) * tuning->shrink_factor * tuning->growth_threshold ) : (long long)( (double)( (long long)( table->n_buckets ) ) * tuning->shrink_factor );
        hash_rehash( table, candidate );
      }
    }
  }
  return data;
}
