#include "options.c.h"
void init_document_options( struct document_options *doo )
{
  memset( doo, 0, 136 );
  doo->assume_cp = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->hard_assume = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->use_document_colors = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->margin = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->num_links_key = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->meta_link_display = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_form_input_size = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_style.fg = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_style.bg = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_link = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_vlink = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_bookmark_link = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->default_image_link = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->active_link.fg = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->active_link.bg = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
    doo->color_flags |= COLOR_INCREASE_CONTRAST;
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) )
    doo->color_flags |= COLOR_ENSURE_CONTRAST;
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -2 ) | ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 );
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -3 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) * 2 );
  doo->bits_at_68/*.2_2of4*/ = ( doo->bits_at_68/*.2_2of4*/ & -5 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 2 );
  doo->bits_at_68/*.2_2of4*/ = ( doo->bits_at_68/*.2_2of4*/ & -9 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 3 );
  doo->bits_at_68/*.2_2of4*/ = ( doo->bits_at_68/*.2_2of4*/ & -2 ) | ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 );
  doo->bits_at_68/*.2_2of4*/ = ( doo->bits_at_68/*.2_2of4*/ & -3 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) * 2 );
  doo->bits_at_68/*.2_2of4*/ = ( doo->bits_at_68/*.2_2of4*/ & -33 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 5 );
  doo->bits_at_68/*.2_2of4*/ = ( doo->bits_at_68/*.2_2of4*/ & -17 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 4 );
  doo->active_link.bits_at_0 = ( doo->active_link.bits_at_0 & -2 ) | ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 );
  doo->active_link.bits_at_0 = ( doo->active_link.bits_at_0 & -9 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 3 );
  doo->active_link.bits_at_0 = ( doo->active_link.bits_at_0 & -3 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) * 2 );
  doo->active_link.bits_at_0 = ( doo->active_link.bits_at_0 & -5 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 2 );
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -9 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 3 );
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -5 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 2 );
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -17 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 4 );
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -33 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 5 );
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & -65 ) | ( ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 ) << 6 );
  doo->framename = "";
  doo->image_link.prefix = "";
  doo->bits_at_68/*.1_1of4*/ = ( (int)doo->bits_at_68/*.1_1of4*/ & 127 ) | ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) << 7 );
  doo->image_link.suffix = "";
  doo->image_link.filename_maxlen = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->image_link.label_maxlen = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->image_link.display_style = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->image_link.tagging = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  doo->image_link.bits_at_24/*.1_1of4*/ = ( (int)doo->image_link.bits_at_24/*.1_1of4*/ & -2 ) | ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) & 1 );
  return;
}
int compare_opt( struct document_options *o1, struct document_options *o2 )
{
  int eax;
  int edx;
  strcmp( (char*)o2, (char*)o1 );
  if ( c_strcasecmp( (char*)o1->framename, (char*)o2->framename ) == 0 && o2->box.x == o1->box.x && o2->box.y == o1->box.y && ( ( ( ( o1->bits_at_92/*.1_1of4*/ & 1 ) & 255 ) == 0 && ( ( o2->bits_at_92/*.1_1of4*/ & 1 ) & 255 ) == 0 ) || o2->box.height == o1->box.height ) )
  {
    if ( ( ( (int)o1->bits_at_92/*.1_1of4*/ & 2 ) & 255 ) || ( ( o2->bits_at_92/*.1_1of4*/ & 2 ) & 255 ) )
    {
      return o2->box.width != o1->box.width;
    }
  }
  else
  {
  }
}
void copy_opt( struct document_options *o1, struct document_options *o2 )
{
  memcpy( o1, o2, 136 );
  o1->framename = stracpy( o2->framename );
  o1->image_link.prefix = stracpy( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
  o1->image_link.suffix = stracpy( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) );
  return;
}
void done_document_options( struct document_options *options )
{
{
  void *p = (void*)options->framename;
  if ( options->framename )
    mem_free( &((int*)p)[0] );
  mem_free( (void*)options->image_link.prefix );
  options = &options->image_link.suffix[0];
}
}
void toggle_document_option( struct session *ses, unsigned char *option_name )
{
  struct option_elinks *option_elinks;
  if ( assert_failed == 0 )
  {
    if ( ses[0] && ses->doc_view && ses->tab && ses->tab->term )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/options.c";
      errline = 129;
      elinks_internal( "assertion ses && ses-&gt;doc_view && ses-&gt;tab && ses-&gt;tab-&gt;term failed!" );
      if ( assert_failed )
      {
        option_name[0] = option_name[0];
        assert_failed = 0;
        return;
      }
    }
    if ( ses->doc_view->vs == 0 )
    {
      option_name = 0;
      ses = &ses->tab->term->next;
    }
    toggle_option( &ses, get_opt_rec( config_options, &option_name ) );
    ses = &ses;
    option_name = 1;
  }
  else
  {
    assert_failed = 0;
    return;
  }
}
#if 0
#endif
