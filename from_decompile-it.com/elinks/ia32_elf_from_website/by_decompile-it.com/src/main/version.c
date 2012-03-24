#include "version.c.h"
void add_module_to_string( struct string *string, struct module *module, struct terminal *term )
{
  struct module *submodule;
  int i;
  if ( module->name )
  {
    if ( module->name )
    {
      if ( term[0] && current_charset != get_terminal_codepage( &term[0] ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( &term[0] ) ) );
        current_charset = get_terminal_codepage( &term[0] );
      }
    }
    *ebp_28 = string[0].source;
    add_to_string( &string[0], string[0].source );
  }
  module->submodules[0] = module->submodules[0];
  if ( module->submodules )
  {
    add_to_string( &string[0], " (" );
    if ( module->submodules && module->submodules[0] )
    {
      i = 0;
      submodule = &submodule[0];
      while ( 1 )
      {
        i++;
        add_module_to_string( &string[0], &submodule[0], &term[0] );
        submodule = module->submodules[ i ];
        if ( module->submodules[ i ] )
        {
          if ( i )
          {
            add_to_string( &string[0], ", " );
          }
        }
      }
    }
    add_to_string( &string[0], ")" );
  }
  return;
}
unsigned char *get_dyn_full_version( struct terminal *term, int more )
{
  int eax;
  int ecx;
  int edx;
  static unsigned char comma[3] = { ',', ' ' };
  struct string string;
  if ( init_string( &string ) )
  {
    add_format_to_string( &string, "ELinks %s" );
    if ( build_id[0] )
    {
      add_char_to_string( &string, ( ( 0 - ( ( more < 1 ) & 1 ) ) & 22 ) + 10 );
      add_format_to_string( &string, "%s" );
    }
    add_char_to_string( &string, 10 );
    if ( 0 != 66 )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      gettext( "Built on %s %s" );
    }
    add_format_to_string( &string, gettext( "Built on %s %s" ) );
    if ( more )
    {
      add_to_string( &string, "\n\n" );
      if ( 0 != 84 )
      {
        if ( term && current_charset != get_terminal_codepage( term ) )
        {
          bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
          current_charset = get_terminal_codepage( term );
        }
        gettext( "Text WWW browser" );
      }
      add_to_string( &string, gettext( "Text WWW browser" ) );
    }
    if ( 0 != 83 )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
    }
    if ( 0 != 70 )
    {
      if ( term && current_charset != get_terminal_codepage( term ) )
      {
        bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
        current_charset = get_terminal_codepage( term );
      }
      gettext( "Features:" );
    }
    string_concat( &string );
    if ( builtin_modules[0] )
    {
      while ( 1 )
      {
        add_module_to_string( &string, builtin_modules[0], term );
        if ( builtin_modules[ 0 + 1 ] )
        {
          if ( 0 + 1 == 0 )
            continue;
          else
          {
            add_to_string( &string, ", " );
          }
        }
      }
    }
    if ( more == 0 )
    {
      if ( assert_failed == 0 )
      {
        if ( !string.source || string.length <= ( strrchr( (char*)string.source, 10 ) - string.source ) + 1 )
        {
          assert_failed = 1;
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/main/version.c";
          errline = 67;
          elinks_internal( "assertion string && string-&gt;source && start_at &lt; string-&gt;length failed!" );
          if ( assert_failed )
          {
          }
        }
        else
          assert_failed = 0;
        while ( strchr( &string.source[1], 32 ) == 0 )
        {
          if ( strchr( &string.source[1], 32 ) - ( string.source + ( strrchr( (char*)string.source, 10 ) - string.source ) + 1 ) <= 71 )
            *(int*)(eax + 1) = strchr( &edx, 32 ) + 1;
          else
          {
            if ( strrchr( (char*)string.source, 10 ) )
              *(char*)(strrchr( (char*)string.source, 10 )) = 10;
          }
          if ( edx == 0 )
            break;
        }
      }
      assert_failed = 0;
      return string.source;
    }
  {
    int start_at;
  }
  }
  return string.source;
}
void init_static_version( void )
{
  unsigned char *s;
  if ( get_dyn_full_version( 0, 0 ) )
  {
    safe_strncpy( full_static_version, get_dyn_full_version( 0, 0 ), 1024 );
    mem_free( &s[0] );
  }
  return;
}
#if 0
#endif
