#include "scripting.c.h"
static struct module *scripting_modules[2] = { &ruby_scripting_module, 0 };
struct module scripting_module = { "Scripting", 0, 0, scripting_modules, 0, 0, 0 };
void report_scripting_error( struct module *module, struct session *ses, unsigned char *msg )
{
  struct terminal *term;
  struct string string;
  if ( ses == 0 )
  {
    term = &terminals.next[0];
    if ( terminals.next == terminals.next )
    {
      usrerror( gettext( "[%s error] %s" ) );
      sleep( 3 );
      return;
    }
  }
  else
  {
    &ses->tab = ses->tab;
    term = &ses->tab->type;
  }
  if ( init_string( &string ) )
  {
    if ( module && module )
    {
      if ( term && current_charset != get_terminal_codepage( &term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term ) ) );
        current_charset = get_terminal_codepage( &term );
      }
    }
    if ( 0 != 65 )
    {
      if ( term && current_charset != get_terminal_codepage( &term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term ) ) );
        current_charset = get_terminal_codepage( &term );
      }
      gettext( "An error occurred while running a %s script" );
    }
    add_format_to_string( &string, gettext( "An error occurred while running a %s script" ) );
    add_format_to_string( &string, ":\n\n%s" );
    info_box( &term, 9, "Browser scripting error", ALIGN_LEFT, string->source );
    return;
  }
  else
  {
    return;
  }
}
#if 0
#endif
