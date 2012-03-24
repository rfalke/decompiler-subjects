#include "default.c.h"
static struct option_info default_mime_options[22] = { { { 0, 0, { 0 }
, "type", 2, 9, 0, 0, { 0, 135391308, 135468908, 0, 0, 0 }
, "Handler &lt;-&gt; MIME type association. The first sub-tree is the MIME class while the second sub-tree is the MIME type (ie. image/gif handler will reside at mime.type.image.gif). Each MIME type option should contain (case-sensitive) name of the MIME handler (its properties are stored at mime.handler.&lt;name&gt;).", "MIME type associations", 0, 0, 0 }
, "mime" }
, { { 0, 0, { 0 }
, "_template_", 2, 9, 0, 0, { 0, 135391616, 0, 0, 0, 0 }
, "Handler matching this MIME-type class ('*' is used here in place of '.').", 0, 0, 0, 0 }
, "mime.type" }
, { { 0, 0, { 0 }
, "_template_", 0, 3, 0, 1024, { "", 135391692, 0, 0, 0, 0 }
, "Handler matching this MIME-type name ('*' is used here in place of '.').", 0, 0, 0, 0 }
, "mime.type._template_" }
, { { 0, 0, { 0 }
, "handler", 2, 9, 0, 0, { 0, 135391768, 135468952, 0, 0, 0 }
, "A file type handler is a set of information about how to use an external program to view a file. It is possible to refer to it for several MIME types -- e.g., you can define an 'image' handler to which mime.type.image.png, mime.type.image.jpeg, and so on will refer; or one might define a handler for a more specific type of file -- e.g., PDF files. Note you must define both a MIME handler and a MIME type association for it to work.", "File type handlers", 0, 0, 0 }
, "mime" }
, { { 0, 0, { 0 }
, "_template_", 2, 9, 0, 0, { 0, 135468971, 0, 0, 0, 0 }
, "Description of this handler.", 0, 0, 0, 0 }
, "mime.handler" }
, { { 0, 0, { 0 }
, "_template_", 0, 9, 0, 0, { 0, 135392204, 0, 0, 0, 0 }
, "System-specific handler description (ie. unix, unix-xwin, ...).", 0, 0, 0, 0 }
, "mime.handler._template_" }
, { { 0, 0, { 0 }
, "ask", 0, 0, 0, 1, { 0, 135469024, 135469044, 0, 0, 0 }
, "Ask before opening.", "Ask before opening", 0, 0, 0 }
, "mime.handler._template_._template_" }
, { { 0, 0, { 0 }
, "block", 0, 0, 0, 1, { 0, 135392304, 135469063, 0, 0, 0 }
, "Block the terminal when the handler is running.", "Block terminal", 0, 0, 0 }
, "mime.handler._template_._template_" }
, { { 0, 0, { 0 }
, "program", 0, 3, 0, 1024, { "", 135392352, 135469078, 0, 0, 0 }
, "External viewer for this file type. '%' in this string will be substituted by a file name. Do _not_ put single- or double-quotes around the % sign.", "Program", 0, 0, 0 }
, "mime.handler._template_._template_" }
, { { 0, 0, { 0 }
, "extension", 2, 9, 0, 0, { 0, 135392500, 135469086, 0, 0, 0 }
, "Extension &lt;-&gt; MIME type association.", "File extension associations", 0, 0, 0 }
, "mime" }
, { { 0, 0, { 0 }
, "_template_", 0, 3, 0, 1024, { "", 135392540, 0, 0, 0, 0 }
, "MIME-type matching this file extension ('*' is used here in place of '.').", 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "gif", 0, 3, 0, 1024, { "image/gif", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "jpg", 0, 3, 0, 1024, { "image/jpg", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "jpeg", 0, 3, 0, 1024, { "image/jpeg", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "png", 0, 3, 0, 1024, { "image/png", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "txt", 0, 3, 0, 1024, { "text/plain", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "htm", 0, 3, 0, 1024, { "text/html", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "html", 0, 3, 0, 1024, { "text/html", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "rss", 0, 3, 0, 1024, { "application/rss+xml", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "xbel", 0, 3, 0, 1024, { "application/xbel+xml", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, "sgml", 0, 3, 0, 1024, { "application/docbook+xml", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "mime.extension" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct mime_backend default_mime_backend = { &get_content_type_default, &get_mime_handler_default };
struct module default_mime_module = { "Option system", default_mime_options, 0, 0, 0, 0, 0 };
unsigned char *get_content_type_default( unsigned char *extension )
{
  int eax;
  int edx;
  struct option_elinks *opt_tree;
  struct option_elinks *opt;
  unsigned char *extend;
  &opt_tree[0] = ( opt_tree[0].next + extension ) - 1;
  extend = ( opt_tree[0].next + extension ) - 1;
  if ( extension <= ( opt_tree[0].next + extension ) - 1 )
  {
    &opt_tree[0] = config_options;
    &opt_tree[0] = &opt_tree->value.tree[0].next[0];
    while ( &opt_tree[0] = &opt_tree, opt = &opt_tree, opt_tree->value.tree != opt_tree->next )
    {
      unsigned char *namepos;
      unsigned char *extpos;
      &opt_tree[0] = opt;
      namepos[0] = ( opt_tree[0].next + opt_tree->name ) - 1;
      &opt_tree[0] = &extend[0];
      if ( ( opt_tree[0].next + opt_tree->name ) - 1 < opt_tree->name )
        &opt_tree[0] = &extend[0];
      else
      do
      {
        if ( opt_tree->next != ( namepos[0] != '*' ? 46 : namepos[0] ) || opt_tree[0].next - 1 < extension[0] )
        {
          if ( opt_tree->name <= namepos[0] )
          {
            &opt_tree[0] = opt;
            break;
            while ( &opt_tree[0] = &opt_tree, opt = &opt_tree, opt_tree->value.tree != opt_tree->next )
            {
              unsigned char *namepos;
              unsigned char *extpos;
              &opt_tree[0] = opt;
              namepos[0] = ( opt_tree[0].next + opt_tree->name ) - 1;
              &opt_tree[0] = &extend[0];
            }
            break;
          }
        }
        else
      }
      while ( namepos[0] < opt_tree->name );
      if ( opt_tree[0].next < extension[0] || opt_tree->next == '.' )
      {
        &opt_tree[0] = &opt->value.tree[0].next[0];
        extension = (unsigned char*)opt->value.tree;
      }
      &opt_tree[0] = opt;
    }
  }
  &opt_tree[0] = 0;
  return 0;
}
struct mime_handler *get_mime_handler_default( unsigned char *type, int have_x )
{
  struct option_elinks *type_opt;
  struct option_elinks *handler_opt;
  if ( get_opt_rec_real( config_options, "mime.type" ) && init_string( ebp_32 ) )
  {
    if ( add_string_replace( ebp_32, &type[0], strlen( &type[0] ), 46, 42 ) && strchr( ebp_32, 47 ) )
    {
      *(char*)(strchr( ebp_32, 47 )) = '.';
      type_opt = &eax[0].description[0];
      done_string( ebp_32 );
      if ( type_opt[0].next )
      {
        if ( assert_failed == 0 )
          assert_failed = 0;
        if ( get_opt_rec_real( config_options, "mime.handler" ) && get_opt_rec_real( get_opt_rec_real( config_options, "mime.handler" ), (unsigned char*)type_opt->value.tree ) && get_opt_rec_real( config_options, "mime.handler" ) )
        {
          init_mime_handler( (unsigned char*)eax, &esi, ebp_48, edi, ebp_44 );
          return init_mime_handler( *(int*)(0), &esi, ebp_48, edi );
        }
      }
    }
    else
    {
      done_string( ebp_32 );
      return init_mime_handler( *(int*)(0), &esi, ebp_48, edi );
    }
  }
  return init_mime_handler( *(int*)(0), &esi, ebp_48, edi );
}
#if 0
#endif
