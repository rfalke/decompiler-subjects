#include "default.c.h"
struct bookmarks_backend default_bookmarks_backend = { &filename_bookmarks_default, &read_bookmarks_default, &write_bookmarks_default };
void read_bookmarks_default( FILE *f )
{
  int eax;
  int ecx;
  int edx;
  unsigned char in_buffer[3079];
  struct bookmark *last_bm;
  int last_depth;
  int file_cp = get_cp_index( "System" );
  while ( fgets( in_buffer, 3079, f ) == 0 )
  {
    int depth;
    unsigned char *flags;
    if ( strchr( in_buffer, 9 ) && in_buffer[0] != strchr( in_buffer, 9 ) && strchr( in_buffer, 9 ) - in_buffer[0] <= 1023 )
    {
      *(char*)(strchr( in_buffer, 9 )) = 0;
      if ( eax )
      {
        if ( eax - ebp_3116 <= 1023 )
        {
          eax = 0;
          depth = 0;
          if ( eax )
          {
            eax = 0;
            flags = &eax->next;
            if ( eax )
            {
              root = 0;
            {
              struct bookmark *root = 0;
              if ( depth )
              {
                if ( depth == 0 )
                  *(int*)(*(int*)(ebp_3128 + 12)) = *(int*)(ebp_3128 + 12);
                else
                {
                  root = 0;
                  if ( depth <= depth )
                  {
                    last_depth = 0;
                    last_bm = ebp_3128;
                    do
                    {
                      last_depth--;
                      last_bm = last_bm->root;
                    }
                    while ( last_depth != depth );
                    &last_bm->root = last_bm->root;
                  }
                }
              }
              if ( *(char*)(esi + 1) == 0 && in_buffer[0] == '-' && in_buffer[1] == 0 )
              {
                *(int*)(*(int*)(ebp_3128 + 16) + 16) = 2;
              }
              else
              {
                if ( flags[0] && ebp_3128 && ( flags[0] & 255 ) )
                {
                  last_bm = ebp_3128;
                  do
                  {
                    if ( flags[0] != 'E' )
                    {
                      if ( flags[0] == 'F' )
                        last_bm->box_item->type = BI_FOLDER;
                      flags[0] = flags[1];
                      if ( flags[0] == 0 )
                        break;
                    }
                    else
                    {
                      last_bm->box_item->bits_at_24/*.1_1of4*/ |= 1;
                      flags[0] = flags[1];
                      if ( flags[0] == 0 )
                      {
                        break;
                      }
                    }
                  }
                  while ( flags[0] );
                }
              }
            }
            }
          }
        }
      }
      else
      {
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
void write_bookmarks_default_inner( struct write_bookmarks_default *out, struct list_head_elinks *bookmarks_list )
{
  struct bookmark *bm = &bookmarks_list->next[0];
  if ( bookmarks_list != bookmarks_list )
  {
    do
    {
      secure_fprintf( out->ssi, convert_string_elinks( out->conv_table, bm->title, strlen( (char*)bm->title ), out->codepage, CSM_NONE, 0, 0, 0 ) != 0 ? "" : (char*)convert_string_elinks( out->conv_table, bm->title, strlen( (char*)bm->title ), out->codepage, CSM_NONE, 0, 0, 0 ) );
      if ( bm->box_item->type == BI_FOLDER )
      {
        secure_fputc( out->ssi, 70 );
        if ( out->save_folder_state && ( ( bm->box_item->bits_at_24/*.1_1of4*/ & 1 ) & 255 ) )
          secure_fputc( out->ssi, 69 );
      }
    {
      unsigned char *title, *url;
      secure_fputc( out->ssi, 10 );
      if ( url[0] == 0 || out == 0 )
      {
        secsave_errno = SS_ERR_OTHER;
        out->conv_table = 12;
        if ( out == 0 )
        {
          if ( url[0] )
            mem_free( &url[0] );
          if ( out->conv_table->t == 0 )
          {
            if ( bm->child.next != bm->child.next )
              write_bookmarks_default_inner( &out[0] );
            bm = &bm;
          }
          else
            break;
        }
      }
      mem_free( (void*)out );
    }
    }
    while ( bookmarks_list->next == bm->next );
    return;
  }
  else
  {
    return;
  }
}
void write_bookmarks_default( struct secure_save_info *ssi, struct list_head_elinks *bookmarks_list )
{
  int eax;
  int edx;
  struct write_bookmarks_default out;
  out.ssi = ssi;
  out.save_folder_state = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  out.codepage = get_cp_index( "System" );
  out.conv_table = get_translation_table( get_cp_index( "UTF-8" ), out.codepage );
  write_bookmarks_default_inner( &out, bookmarks_list );
  return;
}
unsigned char *filename_bookmarks_default( int writing )
{
  return "bookmarks";
}
#if 0
#endif
