#include "style.c.h"
static struct hash *bfu_colors;
struct color_pair *get_bfu_color( struct terminal *term, unsigned char *stylename )
{
  int eax;
  int ecx;
  int edx;
  static enum color_mode  last_color_mode;
  struct bfu_color_entry *entry;
  struct hash_item *item;
  enum color_mode  color_mode;
  if ( term )
  {
    color_mode = *(int*)(get_opt_( &term->spec->flags, &term->spec->flags ));
    if ( bfu_colors == 0 )
    {
      bfu_colors = init_hash8(  );
      if ( bfu_colors )
        last_color_mode = color_mode;
    }
    else
    if ( last_color_mode != color_mode )
    {
      int i;
      if ( ( 1 << bfu_colors->width ) >= 1 )
      {
        ebx = bfu_colors;
        i = 0;
        while ( item = &bfu_colors->hash[ i ].next[0], *(int*)(bfu_colors + ( i << 3 ) + 8) == bfu_colors + ( i << 3 ) + 8 )
        {
          i++;
          if ( ( 1 << bfu_colors->width ) <= i + 1 )
            goto B8;
          else
          {
            edx = bfu_colors;
          }
        }
        i = i;
      {
        do
        {
          void *p = item->value;
          if ( item->value )
          {
            mem_free( &((int*)p)[0] );
            bfu_colors = bfu_colors;
          }
          item = item->prev;
          del_hash_item( bfu_colors, (int)( &item ) );
          item = &item;
        }
        while ( item->next != bfu_colors + ( i << 3 ) + 8 );
        i++;
      }
      }
B8:      last_color_mode = color_mode;
    }
    if ( get_hash_item( bfu_colors, stylename, strlen( (char*)stylename ) ) && item->value )
    {
    }
    else
    {
      struct option_elinks *opt;
      if ( opt[0] && get_opt_rec_real( &opt[0], stylename ) && mem_calloc( 1, 16 ) )
      {
        if ( item[0].next == 0 )
        {
          mem_free( (void*)entry[0].background );
          return &entry->colors;
        }
        entry->foreground = (color_T*)get_opt_( &opt[0], "text" );
        entry->background = (color_T*)get_opt_( &opt[0], "background" );
      }
    }
    entry->colors.background = entry->background;
    entry->colors.foreground = entry->foreground[0];
    return &entry->colors;
  }
  return 0;
}
void done_bfu_colors( void )
{
  int eax;
  int ecx;
  int edx;
  struct hash_item *item;
  int i;
  if ( bfu_colors )
  {
    if ( ( 1 << bfu_colors->width ) >= 1 )
    {
      i = 0;
      eax = &bfu_colors->width;
      while ( item = &bfu_colors->hash[ i ].next[0], *(int*)(edx + ( i << 3 ) + 8) == ecx + ( i << 3 ) + 8 )
      {
        i++;
        if ( ( 1 << bfu_colors->width ) <= i + 1 )
          goto B3;
        else
        {
          edx = bfu_colors;
        }
      }
    {
      do
      {
        void *p = item->value;
        if ( item->value )
        {
          mem_free( &((int*)p)[0] );
          bfu_colors->width = bfu_colors;
        }
        item = &item;
      }
      while ( item->next != bfu_colors + ( i << 3 ) + 8 );
      i++;
    }
    }
B3:    free_hash( &bfu_colors );
  }
  return;
}
#if 0
#endif
