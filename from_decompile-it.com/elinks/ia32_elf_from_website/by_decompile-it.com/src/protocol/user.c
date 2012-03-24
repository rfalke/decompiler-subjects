#include "user.c.h"
static struct option_info user_protocol_options[16] = { { { 0, 0, { 0 }
, "user", 2, 9, 0, 0, { 0, 135401260, 135471671, 0, 0, 0 }
, "User protocols. Options in this tree specify external handlers for the appropriate protocols. Ie. protocol.user.mailto.unix.", "User protocols", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, "_template_", 2, 9, 0, 0, { 0, 135401388, 0, 0, 0, 0 }
, "Handler (external program) for this protocol. Name the options in this tree after your system (ie. unix, unix-xwin).", 0, 0, 0, 0 }
, "protocol.user" }
, { { 0, 0, { 0 }
, "_template_", 0, 3, 0, 1024, { "", 135401508, 0, 0, 0, 0 }
, "Handler (external program) for this protocol and system.\n%f in the string means file name to include form data from\n%h in the string means hostname (or email address)\n%p in the string means port\n%d in the string means path (everything after the port)\n%s in the string means subject (?subject=&lt;this&gt;)\n%u in the string means the whole URL", 0, 0, 0, 0 }
, "protocol.user._template_" }
, { { 0, 0, { 0 }
, "unix", 0, 3, 0, 1024, { "lynx %u", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.gopher" }
, { { 0, 0, { 0 }
, "unix-xwin", 0, 3, 0, 1024, { "lynx %u", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.gopher" }
, { { 0, 0, { 0 }
, "unix", 0, 3, 0, 1024, { "irc %u", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.irc" }
, { { 0, 0, { 0 }
, "unix-xwin", 0, 3, 0, 1024, { "irc %u", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.irc" }
, { { 0, 0, { 0 }
, "unix", 0, 3, 0, 1024, { "mutt %h -s \"%s\" -i \"%f\"", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.mailto" }
, { { 0, 0, { 0 }
, "unix-xwin", 0, 3, 0, 1024, { "mutt %h -s \"%s\" -i \"%f\"", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.mailto" }
, { { 0, 0, { 0 }
, "unix", 0, 3, 0, 1024, { "lynx %u", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.news" }
, { { 0, 0, { 0 }
, "unix-xwin", 0, 3, 0, 1024, { "lynx %u", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.news" }
, { { 0, 0, { 0 }
, "unix", 0, 3, 0, 1024, { "telnet %h %p", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.telnet" }
, { { 0, 0, { 0 }
, "unix-xwin", 0, 3, 0, 1024, { "telnet %h %p", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.telnet" }
, { { 0, 0, { 0 }
, "unix", 0, 3, 0, 1024, { "tn3270 %h %p", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.tn3270" }
, { { 0, 0, { 0 }
, "unix-xwin", 0, 3, 0, 1024, { "tn3270 %h %p", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.user.tn3270" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct module user_protocol_module = { "User protocols", user_protocol_options, 0, 0, 0, 0, 0 };
unsigned char *get_user_program( struct terminal *term, unsigned char *progid, int progidlen )
{
  int eax;
  int ecx;
  int edx;
  struct option_elinks *opt;
  int xwin = 0;
  struct string name;
  if ( init_string( &name ) )
  {
    add_to_string( &name, "protocol.user." );
    if ( assert_failed == 0 )
    {
      if ( progid && progidlen >= 0 )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
        errline = 255;
        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
        if ( assert_failed )
          goto B8;
      }
      if ( progidlen == 0 )
      {
        add_char_to_string( &name, 46 );
        add_to_string( &name, get_system_str( xwin ) );
        opt = get_opt_rec_real( config_options, name.source );
        done_string( &name );
        if ( opt[0].next )
        {
          return (unsigned char*)opt->value.tree;
        }
      }
      else
      {
        name.length = name.length + progidlen + 256;
        if ( ( ( name.length + 255 ) & -256 ) < 0 )
        {
          *ebp_56 = 0;
          *ebp_52 = name.length + progidlen;
          if ( mem_realloc( (void*)name.source, 0 ) )
          {
            name.source = (unsigned char*)mem_realloc( (void*)name.source, 0 );
            memset( name.source + ( ( name.length + 255 ) & -256 ), 0, 0 - ( ( name.length + 255 ) & -256 ) );
          }
          else
          {
            if ( progidlen - 1 < 0 )
              continue;
            else
            {
              do
              {
                if ( eax == 0 )
                {
                  if ( esi - 1 < 0 )
                    break;
                }
                else
                {
                  *(char*)(edi + 13) = eax;
                }
              }
              while ( esi - 1 >= 0 );
              xwin = xwin;
            }
          }
        }
        if ( name.source )
        {
          memcpy( name.length + name.source, progid, progidlen );
          name.source[ name.length + progidlen ] = 0;
          name.length += progidlen;
        }
      }
    }
B8:    assert_failed = 0;
  }
  return 0;
}
void user_protocol_handler( struct session *ses, struct uri *uri )
{
  int eax;
  int ecx;
  int edx;
  unsigned char *subj, *prog;
  unsigned char *filename;
  if ( get_user_program( ses->tab->term, uri[0].string, (int)uri->bits_at_40/*.1_2of4*/ ) == 0 || *(char*)(get_user_program( ses->tab->term, uri[0].string, (int)uri->bits_at_40/*.1_2of4*/ )) == 0 )
  {
    unsigned char *protocol;
    if ( memacpy( uri[0].string, (int)uri->bits_at_40/*.1_2of4*/ ) )
    {
      info_box( ses->tab->term, MSGBOX_FREE_TEXT, "No program", ALIGN_CENTER, msg_text( ses->tab->term, "No program specified for protocol %s." ) );
      mem_free( &protocol[0] );
      return;
    }
    info_box( ses->tab->term, MSGBOX_FREE_TEXT, "No program", ALIGN_CENTER, msg_text( ses->tab->term, "No program specified for protocol %s." ) );
    return;
  }
  else
  {
    uri->string = (unsigned char*)uri;
    if ( uri->data && ( uri->bits_at_48 & 0xffff00 ) )
    {
      filename = get_uri_string( uri, URI_QUERY );
      if ( filename )
      {
        strcmp( "subject=", (char*)filename );
        if ( !1 )
        {
          *(int*)(eax + 9) = strstr( (char*)filename, "&subject=" ) + 9;
          if ( strstr( (char*)filename, "&subject=" ) == 0 )
          {
            mem_free( (void*)filename );
            subj = 0;
            filename = get_tempdir_filename( "elinks-XXXXXX" );
            if ( filename )
            {
              if ( safe_mkstemp( filename ) < 0 )
              {
                mem_free( (void*)filename );
                filename = 0;
              }
              else
              if ( uri->post && strlen( strchr( (char*)uri->post, 10 ) != 0 ? (char*)uri->post : strchr( (char*)uri->post, 10 ) + 1 ) )
              {
                if ( eax )
                {
                  *ebp_60 = ebp_60;
                  if ( eax != 1 )
                    fclose( &edx );
                  else
                  {
                    if ( eax == 0 )
                      goto B11;
                  }
                }
                unlink( (char*)filename );
                mem_free( (void*)filename );
                close( safe_mkstemp( filename ) );
                filename = 0;
              }
            }
B11:            prog[0] = 0;
            if ( init_string( ebp_32 ) )
            {
              while ( prog[0] )
              {
                if ( prog[0] != '%' )
                {
                  do
                  {
                    prog[0] = prog[0] + 0 + 1 + 1;
                  }
                  while ( *(char*)(0 + 1 + prog[0] + 1) != '%' && ( init_string( ebp_32 ) & 255 ) );
                }
                if ( assert_failed == 0 )
                {
                  if ( 0 + 1 >= 0 )
                    assert_failed = 0;
                  else
                  {
                    assert_failed = 1;
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                    errline = 255;
                    elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                    if ( assert_failed )
                      goto B32;
                  }
                  if ( 0 + 1 == 0 )
                  {
                    if ( prog[0] == '%' )
                    {
                      prog[0] = prog[0] + 1;
                      switch ( prog[1] )
                      {
                      case 'u':
                        add_shell_safe_to_string( ebp_32, &esi, eax );
                        break;
                      case 'h':
                        if ( uri->bits_at_40/*.3_4of4*/ && ( uri->bits_at_44/*.3_4of4*/ & 65535 ) )
                        {
                          add_shell_safe_to_string( ebp_32, *(int*)((int)uri->bits_at_48/*.1_1of4*/ + 12), ( *(short*)((int)uri->bits_at_48/*.1_1of4*/ + 46) + *(int*)((int)uri->bits_at_48/*.1_1of4*/ + 20) ) - *(int*)((int)uri->bits_at_48/*.1_1of4*/ + 12) );
                        }
                        else
                        {
                          if ( uri->host )
                          {
                            add_shell_safe_to_string( ebp_32, uri->host );
                          }
                          else
                          {
                            prog[0] = prog[1];
                          }
                        }
                        break;
                      case 'p':
                        if ( (int)uri->bits_at_48/*.1_1of4*/ )
                        {
                          add_shell_safe_to_string( ebp_32, uri->port, (int)uri->bits_at_48/*.1_1of4*/ );
                        }
                        break;
                      case 'd':
                        if ( uri->bits_at_48 & 0xffff00 )
                          *(int*)(*(int*)(edx + 28)) = uri->data;
                          add_shell_safe_to_string( ebp_32, uri->host );
                        break;
                      case 's':
                        if ( subj )
                        {
                          add_shell_safe_to_string( ebp_32, subj, strlen( (char*)subj ) );
                        }
                        break;
                      case 'f':
                        if ( filename )
                        {
                          add_to_string( ebp_32, filename );
                        }
                        break;
                      default:
                        if ( assert_failed )
                          assert_failed = 0;
                        else
                        {
                          assert_failed = 0;
                          *(int*)(ebp_28 + 258) = ebp_28 + 258;
                          *(int*)(ebp_28 + 255) = ebp_28 + 255;
                          if ( 0 < 0 )
                          {
                            *ebp_60 = 0;
                            *ebp_56 = 0;
                            if ( mem_realloc( ebp_32, 0 ) )
                              memset( 0 + mem_realloc( ebp_32, 0 ), 0, 0 - 0 );
                            else
                            {
                            }
                          }
                          if ( ebp_32 )
                            *(char*)(ebp_32 + ebp_28 + 2) = 0;
                        }
                        break;
                      }
                      if ( ( prog[0] & 255 ) == 0 )
                        break;
                    }
                    else
                      break;
                  }
                  else
                  {
                    *(int*)(ebp_28 + ecx + 256) = ebp_28 + 2 + 0 + 1 + 256;
                    if ( 0 < 0 )
                    {
                      *ebp_60 = 0;
                      if ( eax == 0 )
                        continue;
                      else
                      {
                        memset( ebp_48 + eax, 0, edx - ebp_48 );
                      }
                    }
                    if ( ebp_32 )
                    {
                      memcpy( ebp_28 + eax, &ebx, edi );
                    }
                  }
                }
B32:                assert_failed = 0;
                prog[0] = prog[0];
              }
              prog[0] = prog[0];
            }
            if ( subj )
              mem_free( (void*)subj );
            if ( prog[0] )
            {
              if ( filename )
              {
                exec_on_terminal( ses->tab->term, &prog[0], filename, TERM_EXEC_FG );
                mem_free( &prog[0] );
                mem_free( (void*)filename );
                return;
              }
              else
              {
                exec_on_terminal( ses->tab->term, &prog[0], "", TERM_EXEC_FG );
                mem_free( &prog[0] );
                return;
              }
            }
            else
            {
              if ( filename )
                unlink( (char*)filename );
                mem_free( (void*)filename );
                return;
              else
              {
                return;
              }
            }
          }
        }
        else
          filename[8] = filename[8];
        subj = &eax;
        mem_free( (void*)filename );
        if ( subj )
          decode_uri( subj );
      }
    }
  {
    unsigned char *query;
    subj = 0;
  }
  }
}
#if 0
#endif
