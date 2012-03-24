#include "mailcap.c.h"
static struct option_info mailcap_options[7] = { { { 0, 0, { 0 }
, "mailcap", 0, 9, 0, 0, { 0, 135469286, 135469278, 0, 0, 0 }
, "Options for mailcap support.", "Mailcap", 0, 0, 0 }
, "mime" }
, { { 0, 0, { 0 }
, "enable", 0, 0, 0, 1, { 0, 135469315, 135427955, 0, 0, 0 }
, "Enable mailcap support.", "Enable", 0, 0, 0 }
, "mime.mailcap" }
, { { 0, 0, { 0 }
, "path", 0, 3, 0, 1024, { "~/.mailcap:/etc/mailcap:/usr/local/etc/mailcap:/usr/share/mailcap:/usr/share/misc/mailcap", 135392768, 135443141, 0, 0, 0 }
, "Mailcap search path. Colon-separated list of files. Leave as \"\" to use MAILCAP environment variable instead.", "Path", 0, 0, 0 }
, "mime.mailcap" }
, { { 0, 0, { 0 }
, "ask", 0, 0, 0, 1, { 0, 135392880, 135469044, 0, 0, 0 }
, "Ask before using the handlers defined by mailcap.", "Ask before opening", 0, 0, 0 }
, "mime.mailcap" }
, { { 0, 0, { 0 }
, "description", 0, 1, 0, 2, { 0, 135392932, 135469352, 0, 0, 0 }
, "Type of description to show in \"what to do with this file\" query dialog:\n0 is show \"mailcap\"\n1 is show program to be run\n2 is show mailcap description field if any;\n     \"mailcap\" otherwise", "Type query string", 0, 0, 0 }
, "mime.mailcap" }
, { { 0, 0, { 0 }
, "prioritize", 0, 0, 0, 1, { 0, 135393124, 135469381, 0, 0, 0 }
, "Prioritize entries by the order of the files in the mailcap path. This means that wildcard entries (like: image/*) will also be checked before deciding the handler.", "Prioritize entries by file", 0, 0, 0 }
, "mime.mailcap" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct hash *mailcap_map;
struct mime_backend mailcap_mime_backend = { 0, &get_mime_handler_mailcap };
struct module mailcap_mime_module = { "Mailcap", mailcap_options, 0, 0, 0, &init_mailcap, &done_mailcap };
void done_mailcap_entry( struct mailcap_entry *entry )
{
  if ( entry[0].next )
  {
    if ( entry->testcommand[8] )
      mem_free( (void*)entry->testcommand );
    if ( entry->description )
      mem_free( (void*)entry->description );
    mem_free( (void*)entry[0].next );
  }
  return;
}
unsigned char *get_mailcap_field( unsigned char **next )
{
  int ecx;
  int edx;
  unsigned char *field;
  unsigned char *fieldend;
  field[0] = 0;
  if ( next[0] && next )
  {
    fieldend[0] = field[0];
    while ( fieldend[0] = fieldend[ fieldend[0] == ';' ], fieldend[0] == 0 )
    {
      fieldend[0] = strchr( &fieldend[ fieldend[0] == ';' ], 59 ) - 1;
      if ( *(char*)(strchr( &fieldend[ fieldend[0] == ';' ], 59 ) - 1) != '\\' )
      {
        *(char*)(strchr( &fieldend[ fieldend[0] == ';' ], 59 )) = 0;
        next[0] = strchr( &fieldend[ fieldend[0] == ';' ], 59 ) + 1;
      }
      else
      {
      }
      if ( field[0] <= fieldend[0] )
      {
        return &field[0];
      }
    }
    next[0] = 0;
    fieldend[0] = field[ strlen( &field[0] ) - 1 ];
  }
  return &field[0];
}
unsigned char *get_mailcap_field_text( unsigned char *field )
{
  int ecx;
  if ( field[0] == '=' )
  {
    field[0]++;
    return stracpy( &field[0] );
  }
  return 0;
}
void done_mailcap( struct module *module )
{
  int eax;
  int edx;
  struct hash_item *item;
  int i;
  if ( mailcap_map )
  {
    if ( ( 1 << mailcap_map->width ) >= 1 )
    {
      eax[0] = mailcap_map;
      i = 0;
      while ( item = &mailcap_map->hash[ i ].next[0], *(int*)(edx + ( i << 3 ) + 8) == ebx + ( i << 3 ) + 8 )
      {
        i++;
        if ( ( 1 << mailcap_map->width ) <= i )
          goto B3;
      }
    {
      do
      {
        struct mailcap_hash_item *mitem = &item->value[0];
        if ( item->value )
        {
          while ( mitem->entries.next != mitem[0].entries.next )
          {
            mitem->entries.next[1] = mitem->entries.prev;
            mitem->entries.prev[0] = mitem->entries.next;
            if ( mailcap_map->hash->next )
              mem_free( &mitem->type[0] );
            if ( mailcap_map->hash->prev )
              mem_free( &mitem->mailcap_hash_item );
            mem_free( &ebx );
          }
          mem_free( mitem[0].entries.next );
          mailcap_map->width = mailcap_map;
        }
        item = &item;
      }
      while ( item->next != mailcap_map + ( i << 3 ) + 8 );
      i++;
    }
    }
B3:    module = &mailcap_map[0].width;
  }
  else
  {
    return;
  }
}
int change_hook_mailcap( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  if ( mailcap_options[2].option_elinks.next == changed || ( mailcap_options[1].option_elinks.next == changed[0].next && mailcap_options[1].option_elinks.value.tree == 0 ) )
  {
    done_mailcap( &mailcap_mime_module );
    return 0;
  }
  return 0;
}
void init_mailcap( struct module *module )
{
  static struct change_hook_info mimetypes_change_hooks[2] = { { "mime.mailcap", &change_hook_mailcap }
, { 0, 0 }
 };
  register_change_hooks( mimetypes_change_hooks );
  if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
  {
    mailcap_options[1].option_elinks.value.tree = 0;
  }
  return;
}
unsigned char *format_command( unsigned char *command, unsigned char *type, int copiousoutput )
{
  struct string cmd;
  if ( init_string( &cmd ) )
  {
    while ( 1 )
    {
      while ( ( command[0] & 255 ) == 0 )
      {
        if ( command[0] != '%' )
        {
          if ( command[0] != '\\' )
          {
            if ( command[0] == '\'' )
            {
              command[0] = command[1];
              strcmp( "%s'", &command[1] );
              if ( 1 )
              {
                command[0] = command[3];
                add_char_to_string( &cmd, 37 );
              }
              else
              {
                add_char_to_string( &cmd, 39 );
              }
            }
            else
            {
              do
              {
                command[0] = command[1];
              }
              while ( command[0] != '%' && ( command[0] & 255 ) && command[0] != '\\' && command[0] != '\'' );
              if ( command[0] < command[0] )
              {
                if ( assert_failed == 0 )
                {
                  if ( command[0] && command[0] - command[0] >= 0 )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                    errline = 255;
                    elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                    if ( assert_failed )
                    {
                    }
                  }
                  if ( command[0] - command[0] )
                  {
                    if ( 0 < 0 )
                    {
                      if ( mem_realloc( (void*)cmd.source, 0 ) == 0 )
                        command[0] = command[0];
                      else
                      {
                        cmd.source = (unsigned char*)mem_realloc( (void*)cmd.source, 0 );
                        memset( cmd.source + 0, 0, 0 - 0 );
                      }
                    }
                    if ( cmd.source )
                    {
                      memcpy( cmd.length + cmd.source, &command[0], command[0] - command[0] );
                      cmd.source[ ebp_56 ] = 0;
                      cmd.length = ebp_56;
                    }
                  }
                }
                assert_failed = 0;
                command[0] = command[0];
                if ( command[0] != '\'' )
                {
                  if ( command[0] != '\\' )
                  {
                    if ( command[0] != '%' )
                      continue;
                    else
                    {
                      command[0] = command[0] + 1;
                      if ( command[1] )
                      {
                        if ( command[1] == 's' )
                          add_char_to_string( &cmd, 37 );
                          command[0] = command[0] + 1;
                        else
                        if ( command[1] == 't' )
                        {
                          if ( type[0] )
                            add_to_string( &cmd, &type[0] );
                        }
                      }
                      done_string( &cmd );
                      break;
                    }
                  }
                  else
                  {
                    command[0] = command[1];
                    if ( command[0] )
                    {
                      command[0] = command[1];
                      add_char_to_string( &cmd, command[0] );
                      break;
                      while ( 1 )
                      {
                      }
                    }
                    else
                    {
                      if ( copiousoutput && ( getenv( "PAGER" ) || file_exists( "/usr/bin/pager" ) || file_exists( "/usr/bin/less" ) || file_exists( "/usr/bin/more" ) ) )
                      {
                        add_char_to_string( &cmd, 124 );
                        add_to_string( &cmd, &pager[0] );
                      }
                      break;
                    }
                  }
                }
              }
              command[0] = command[0];
            }
          }
          else
          {
            command[0] = command[1];
          }
        }
        if ( command[0] != '\'' )
        {
        }
      }
    }
  }
  else
  {
    return 0;
  }
}
struct mailcap_entry *check_entries( struct mailcap_hash_item *item )
{
  struct mailcap_entry *entry = &item->entries.next[0];
  if ( item->entries.next != item[0].entries.next )
  {
    do
    {
      if ( entry->testcommand )
      {
        unsigned char *test;
        test[0] = format_command(  );
        if ( format_command(  ) )
        {
          int exitcode;
          mem_free( &test[0] );
          if ( exe( format_command(  ) ) )
            goto B7;
        }
B7:        entry = &entry;
      }
    }
    while ( item->entries.next != entry->next );
  }
  return 0;
}
struct mime_handler *get_mime_handler_mailcap( unsigned char *type, int options )
{
  int eax;
  int ecx;
  int edx;
  int ebp_144;
  struct mailcap_entry *entry;
  struct mime_handler *handler;
  unsigned char *program;
  if ( mailcap_options[1].option_elinks.value.tree )
  {
    if ( mailcap_map == 0 )
    {
      mailcap_map = init_hash8(  );
      if ( mailcap_map )
      {
        if ( mailcap_options[2].option_elinks.value.tree == 0 || mailcap_options[2].option_elinks.value.string == 0 )
        {
          if ( getenv( "MAILCAP" ) )
          {
          }
          else
          {
          }
        }
        ebp_144 = 0;
        while ( mailcap_options[2].option_elinks.value.tree & 255 )
        {
          if ( get_next_path_filename( ebp_96, 58 ) )
          {
            if ( fopen64( (char*)get_next_path_filename( ebp_96, 58 ), "rb" ) )
            {
              while ( eax == 0 )
              {
                if ( *ebp_124 != '#' && get_mailcap_field( ebp_108 ) && get_mailcap_field( ebp_108 ) && mem_calloc( 1, strlen( (char*)get_mailcap_field( ebp_108 ) ) + 24 ) )
                {
                  memcpy( &eax[1].next, &ebx, edx );
                  *(int*)(esi + 16) = ebp_144;
                  do
                  {
                    if ( get_mailcap_field( ebp_112 ) )
                    {
                      do
                      {
                        if ( c_strncasecmp( (char*)get_mailcap_field( ebp_112 ), "needsterminal", 13 ) == 0 )
                        {
                          *(char*)(esi + 20) |= 1;
                        }
                        else
                        {
                          if ( eax == 0 )
                          {
                            *(char*)(esi + 20) |= 2;
                          }
                          else
                          {
                            if ( eax == 0 )
                            {
                              *(int*)(esi + 8) = eax;
                              if ( esi + 8 == 0 )
                              {
                                if ( *(int*)(esi + 12) )
                                  mem_free( (void*)eax );
                                mem_free( &esi );
                                usrerror( gettext( "Badly formated mailcap entry for type %s in \"%s\" line %d" ) );
                                break;
                              }
                              else
                              if ( eax == 0 )
                                continue;
                              else
                              {
                                do
                                {
                                  if ( edx == '%' )
                                  {
                                    if ( ecx == 's' )
                                      mem_free( (void*)eax );
                                  }
                                  else
                                  {
                                  }
                                }
                                while ( edx & 255 );
                              }
                            }
                            else
                            {
                              if ( eax )
                                continue;
                              else
                              {
                                *(int*)(esi + 12) = eax;
                                if ( esi + 12 == 0 )
                                  goto B108;
                              }
                            }
B108:                            if ( *(int*)(esi + 8) )
                              mem_free( (void*)eax );
                          }
                        }
                      }
                      while ( get_mailcap_field( ebp_112 ) );
                    }
                    return strlen( (char*)get_mailcap_field( ebp_108 ) );
                  }
                  while ( esi + 12 );
B108:                }
              }
              fclose( ebp_132 );
            }
            ebp_144++;
            mem_free( (void*)get_next_path_filename( ebp_96, 58 ) );
          }
        }
        if ( mailcap_map )
          goto B4;
      }
    }
B4:    if ( get_hash_item( mailcap_map, type, strlen( (char*)type ) ) && *(int*)(get_hash_item( mailcap_map, type, strlen( (char*)type ) ) + 16) )
    {
      if ( check_entries(  ) && mailcap_options->option_elinks.value.tree == 0 )
      {
        if ( format_command( &entry->bits_at_20, type, ( (int)entry->bits_at_20/*.1_1of4*/ >> 1 ) & 1 ) )
        {
          mem_free( &program[0] );
          if ( 0 ^ 0 )
          {
            __stack_chk_fail(  );
          }
        }
      }
    }
    else
      entry = 0;
    if ( strchr( (char*)type, 47 ) )
    {
      if ( memacpy( type, ( strchr( (char*)type, 47 ) - type ) + 3 ) )
      {
        *(char*)(esi + edi + 1) = 0;
        mem_free( &esi );
        if ( edi && *(int*)(edi + 16) && check_entries(  ) )
        {
          if ( 0 == 0 || *(int*)(check_entries(  ) + 16) < entry->priority )
            entry = check_entries(  );
        }
      }
    }
    if ( entry[0].next )
      continue;
  }
  handler[0].description = 0;
}
#if 0
#endif
