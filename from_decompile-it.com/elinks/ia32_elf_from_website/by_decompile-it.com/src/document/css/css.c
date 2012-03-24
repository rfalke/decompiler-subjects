#include "css.c.h"
struct option_info css_options_info[5] = { { { 0, 0, { 0 }
, "css", 64, 9, 0, 0, { 0, 135378528, 135446807, 0, 0, 0 }
, "Options concerning how to use CSS for styling documents.", "Cascading Style Sheets", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "enable", 0, 0, 0, 1, { 0, 135378588, 135446830, 0, 0, 0 }
, "Enable adding of CSS style info to documents.", "Enable CSS", 0, 0, 0 }
, "document.css" }
, { { 0, 0, { 0 }
, "import", 0, 0, 0, 1, { 0, 135378636, 135446854, 0, 0, 0 }
, "When enabled any external style sheets that are imported from either CSS itself using the @import keyword or from the HTML using &lt;link&gt; tags in the document header will also be downloaded.", "Import external style sheets", 0, 0, 0 }
, "document.css" }
, { { 0, 0, { 0 }
, "stylesheet", 0, 3, 0, 1024, { "", 135378828, 135446883, 0, 0, 0 }
, "The path to the file containing the default user defined Cascading Style Sheet. It can be used to control the basic layout of HTML documents. The path is assumed to be relative to ELinks' home directory.\n\nLeave as \"\" to use built-in document styling.", "Default style sheet", 0, 0, 0 }
, "document.css" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct css_stylesheet default_stylesheet = { &import_css_file, 0, { &default_stylesheet.selectors, &default_stylesheet.selectors }
, 0 };
struct module css_module = { "Cascading Style Sheets", css_options_info, 0, 0, 0, &init_css, &done_css };
void import_css( struct css_stylesheet *css, struct uri *uri )
{
  struct cache_entry *cached;
  struct fragment *fragment;
  if ( uri && css->import_level <= 9 && cached[0] && fragment[0] )
  {
    unsigned char *end;
    end[0] = fragment->data[ (fragment->length & 0xFFFFFFFF) ];
    css_parse_stylesheet( &css[0], &uri[0], get_cache_fragment( &cached[0] ) + 32, get_cache_fragment( &cached[0] ) + *(int*)(get_cache_fragment( &cached[0] ) + 16) + 32 );
    css->import_level--;
    css->import_level++;
    return;
  }
  return;
}
void import_css_file( struct css_stylesheet *css, struct uri *base_uri, unsigned char *url, int urllen )
{
  int eax;
  int ecx;
  int edx;
  struct string string, filename;
  if ( url[0] && css->import_level <= 9 && init_string( &filename ) )
  {
    if ( url[0] != '/' && elinks_home )
      add_to_string( &filename, elinks_home );
    if ( assert_failed == 0 )
    {
      if ( urllen >= 0 )
      {
        assert_failed = 0;
        if ( 1 )
        {
          if ( read_encoded_file( &filename, &string ) == -100000 )
          {
            unsigned char *end;
            end[0] = string.source[ string.length ];
            css_parse_stylesheet( &css[0], base_uri, string.source, &string.source[ string.length ] );
            done_string( &string );
            css->import_level--;
            css->import_level++;
          }
          done_string( &filename );
          return;
        }
      }
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
        errline = 255;
        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
        if ( assert_failed )
          goto B10;
      }
      filename.length = filename.length + urllen + 256;
      if ( 0 < 0 )
      {
        *ebp_60 = 0;
        if ( mem_realloc( (void*)filename.source, 0 ) == 0 )
          continue;
        else
        {
          filename.source = (unsigned char*)mem_realloc( (void*)filename.source, 0 );
          memset( filename.source + 0, 0, 0 - 0 );
        }
      }
      if ( filename.source )
      {
        memcpy( filename.length + filename.source, &url[0], urllen );
        filename.source[ filename.length + urllen ] = 0;
        filename.length += urllen;
      }
    }
B10:    assert_failed = 0;
  }
  else
  {
    return;
  }
}
void import_default_css( void )
{
  unsigned char *url;
  url[0] = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  if ( default_stylesheet.selectors.next != default_stylesheet.selectors.next )
    done_css_stylesheet( &default_stylesheet );
  if ( url[0] )
  {
    import_css_file( &default_stylesheet, 0, &url[0], strlen( &url[0] ) );
  }
  return;
}
int change_hook_css( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  strcmp( "stylesheet", (char*)changed->name );
  if ( 1 )
    import_default_css(  );
  ses = &sessions.next[0];
  if ( sessions.next != sessions.next )
  {
    ses = &ses[0];
    do
    {
      draw_formatted( &ses[0], 1 );
    }
    while ( ses->next == sessions.next );
    return 0;
  }
  else
  {
    return 0;
  }
}
void init_css( struct module *module )
{
  static struct change_hook_info css_change_hooks[2] = { { "document.css", &change_hook_css }
, { 0, 0 }
 };
  register_change_hooks( css_change_hooks );
}
void done_css( struct module *module )
{
  module = &default_stylesheet.import[0];
}
#if 0
#endif
