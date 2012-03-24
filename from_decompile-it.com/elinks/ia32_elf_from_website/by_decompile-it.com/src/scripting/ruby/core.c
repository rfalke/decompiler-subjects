#include "core.c.h"
VALUE erb_module;
void alert_ruby_error( struct session *ses, unsigned char *msg )
{
  report_scripting_error( &ruby_scripting_module, &ses, msg );
  return;
}
void erb_report_error( struct session *ses, int error )
{
  int edx;
  VALUE eclass;
  VALUE einfo;
  unsigned char buff[1024];
  unsigned char *msg;
  switch ( error )
  {
  case 1:
    msg[0] = "unexpected return";
    break;
  case 0:
  case 7:
    __snprintf_chk( buff, 1024, 1, 1024, "unknown longjmp status %d", error );
    msg[0] = einfo;
    einfo = einfo;
    break;
  case 3:
    msg[0] = "unexpected next";
    break;
  case 2:
    msg[0] = "unexpected break";
    break;
  case 5:
    msg[0] = "unexpected redo";
    break;
  case 4:
    msg[0] = "retry outside of rescue clause";
    break;
  case 6:
  case 8:
    if ( ruby_errinfo & 1 )
      eclass = rb_cFixnum;
    else
    if ( strchr( buff, 10 ) == 4 )
      eclass = rb_cNilClass;
    else
    if ( ruby_errinfo == 0 )
      eclass = rb_cFalseClass;
    else
    if ( ruby_errinfo == 2 )
      eclass = rb_cTrueClass;
    else
    if ( ruby_errinfo == 14 )
      eclass = rb_cSymbol;
    else
      eclass = ruby_errinfo;
    einfo = rb_obj_as_string( ruby_errinfo );
    if ( rb_eRuntimeError != eclass || *(int*)(rb_obj_as_string( ruby_errinfo ) + 8) )
    {
      VALUE epath = epath;
      __snprintf_chk( buff, 1024, 1, 1024, "%s: %s", &epath, &einfo );
      msg[0] = buff[0];
      if ( epath )
        epath/*.1_1of4*/ = 0;
    }
    break;
  }
  alert_ruby_error( &ses, &msg[0] );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return;
}
VALUE erb_module_message( VALUE self, VALUE str )
{
  unsigned char *message;
  if ( memacpy( *(int*)(rb_obj_as_string( str ) + 12), *(int*)(rb_obj_as_string( str ) + 8) ) )
  {
    if ( strchr( (char*)memacpy( *(int*)(rb_obj_as_string( str ) + 12), *(int*)(rb_obj_as_string( str ) + 8) ), 10 ) )
      *(char*)(strchr( (char*)memacpy( *(int*)(rb_obj_as_string( str ) + 12), *(int*)(rb_obj_as_string( str ) + 8) ), 10 )) = 0;
    if ( terminals.next == terminals.next )
    {
      usrerror( "[Ruby] %s" );
      mem_free( &message[0] );
      return 4;
    }
    info_box( &terminals.next[0], 9, "Ruby Message", ALIGN_LEFT, &message[0] );
    return 4;
  }
  else
  {
    return 4;
  }
}
VALUE erb_stdout_p( int argc, VALUE *argv, VALUE self )
{
  int eax;
  int ecx;
  int edx;
  int i;
  struct string string;
  if ( init_string( &string ) )
  {
    i = 0;
    if ( argc >= 1 )
    {
    {
      while ( ptr[0] == '"' )
      {
        len -= *(char*)(( ptr[0] + len ) - 1) == '"';
        if ( assert_failed == 0 )
        {
          if ( ptr[0] && len >= 0 )
            assert_failed = 0;
          else
          {
            assert_failed = 1;
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
            errline = 255;
            elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
            if ( assert_failed )
              goto B14;
          }
          if ( len )
          {
            if ( 0 < 0 )
            {
              ebp_52 = 0;
              if ( mem_realloc( (void*)string.source, 0 ) )
              {
                string.source = (unsigned char*)mem_realloc( (void*)string.source, 0 );
                memset( string.source + 0, 0, 0 - 0 );
              }
            }
            if ( string.source )
            {
              memcpy( string.length + string.source, &ptr[0], len );
              string.source[ string.length + len ] = 0;
              string.length += len;
            }
          }
          i++;
          if ( argc <= i + 1 )
            goto B4;
          else
          {
            add_to_string( &string, ", " );
          }
        }
B14:        i++;
        assert_failed = 0;
        if ( argc <= i + 1 )
          goto B4;
        else
        {
          add_to_string( &string, ", " );
        }
      }
    }
    }
B4:    if ( terminals.next == terminals.next )
    {
      usrerror( "[Ruby] %s" );
      done_string( &string );
      return 4;
    }
    info_box( &terminals.next[0], 9, "Ruby Message", ALIGN_LEFT, string.source );
    return 4;
  }
  else
  {
    return 4;
  }
}
VALUE erb_module_method_missing( VALUE self, VALUE arg )
{
  return 4;
}
void init_ruby( struct module *module )
{
  unsigned char *path;
  ruby_init(  );
  ruby_script( "ELinks-ruby" );
  ruby_init_loadpath(  );
  rb_define_singleton_method( rb_stdout, "write", &erb_module_message, 1 );
  rb_define_global_function( "p", &erb_stdout_p, -1 );
  erb_module = rb_define_module( "ELinks" );
  rb_define_const( erb_module, "VERSION", rb_str_new2( "0.12pre5" ) );
  rb_define_const( erb_module, "HOME", rb_str_new2( elinks_home == 0 ? (char*)elinks_home : "/etc/elinks" ) );
  rb_define_module_function( erb_module, "message", &erb_module_message, 1 );
  rb_define_module_function( erb_module, "method_missing", &erb_module_method_missing, -1 );
  rb_define_module_function( erb_module, "p", &erb_stdout_p, -1 );
  if ( path[0] )
  {
    if ( file_can_read( &path[0] ) )
    {
      int error;
      rb_load_protect( rb_str_new2( &path[0] ), 0, &error );
      if ( error )
        erb_report_error( 0, error );
    }
    mem_free( &path[0] );
    return;
  }
  else
  {
    return;
  }
}
#if 0
#endif
