#include "module.c.h"
struct module *main_modules[4] = { &document_module, &kbdbind_module, &terminal_module, 0 };
struct module *builtin_modules[14] = { &periodic_saving_module, &viewer_module, &css_module, &protocol_module, &ssl_module, &mime_module, &leds_module, &bookmarks_module, &cookies_module, &forms_history_module, &global_history_module, &scripting_module, &goto_url_history_module, 0 };
void register_module_options( struct module *module )
{
  struct module *submodule;
  if ( module->options )
    register_options( module->options, config_options );
  if ( module->submodules && submodule )
  {
    do
    {
      register_module_options( &submodule );
    }
    while ( module->submodules[2] == 0 );
  }
  return;
}
void unregister_module_options( struct module *module )
{
  struct module *submodule;
  int i;
  if ( module->submodules && module->submodules[0] )
  {
    i = 0;
    while ( i++, module->submodules[ i + 1 ] )
    {
      i++;
    }
    if ( i != -1 && module->submodules[ i ] )
    {
      i--;
      while ( 1 )
      {
        unregister_module_options( &submodule[0] );
        if ( i == -1 || *(int*)(module->submodules + ( ( ( i - 1 ) << 2 ) - 4 )) == 0 )
          goto B1;
        else
        {
          i--;
        }
      }
    }
  }
B1:  &module->options->option_elinks = &module->options->option_elinks;
  if ( module->options )
  {
    unregister_options( module->options, config_options );
  }
  return;
}
void init_module( struct module *module )
{
  struct module *submodule;
  if ( module->init )
    eax( module[0].name );
  if ( module->hooks )
    register_event_hooks( module->hooks );
  if ( module->submodules && submodule )
  {
    do
    {
      init_module( &submodule );
    }
    while ( module->submodules[2] == 0 );
  }
  return;
}
void done_module( struct module *module )
{
  struct module *submodule;
  int i;
  if ( module->submodules && module->submodules[0] )
  {
    i = 0;
    while ( i++, module->submodules[ i + 1 ] )
    {
      i++;
    }
    if ( i != -1 && module->submodules[ i ] )
    {
      i--;
      while ( 1 )
      {
        done_module( &submodule[0] );
        if ( i == -1 || *(int*)(module->submodules + ( ( ( i - 1 ) << 2 ) - 4 )) == 0 )
          goto B1;
        else
        {
          i--;
        }
      }
    }
  }
B1:  module->hooks->name = (unsigned char*)module->hooks;
  if ( module->hooks )
    unregister_event_hooks( module->hooks );
  if ( module->done )
  {
    module = &module[0];
    ;
  }
  return;
}
void register_modules_options( struct module **modules )
{
  struct module *module;
  if ( modules && modules[0] )
  {
    do
    {
      register_module_options( &module[0] );
    }
    while ( modules[1]->options == 0 );
  }
  return;
}
void unregister_modules_options( struct module **modules )
{
  struct module *module;
  int i;
  if ( modules && modules[0] )
  {
    i = 0;
    while ( i++, modules[ i + 1 ] )
    {
      i++;
    }
    if ( i != -1 && modules[ i ] )
    {
      i--;
      while ( 1 )
      {
        unregister_module_options( &module[0] );
        if ( i == -1 || *(int*)(modules[ i - 1 ] - 4) == 0 )
          break;
        i--;
      }
    }
  }
  return;
}
void init_modules( struct module **modules )
{
  struct module *module;
  if ( modules && modules[0] )
  {
    do
    {
      init_module( &module[0] );
    }
    while ( modules[1]->options == 0 );
  }
  return;
}
void done_modules( struct module **modules )
{
  struct module *module;
  int i;
  if ( modules && modules[0] )
  {
    i = 0;
    while ( i++, modules[ i + 1 ] )
    {
      i++;
    }
    if ( i != -1 && modules[ i ] )
    {
      i--;
      while ( 1 )
      {
        done_module( &module[0] );
        if ( i == -1 || *(int*)(modules[ i - 1 ] - 4) == 0 )
          break;
        i--;
      }
    }
  }
  return;
}
#if 0
#endif
