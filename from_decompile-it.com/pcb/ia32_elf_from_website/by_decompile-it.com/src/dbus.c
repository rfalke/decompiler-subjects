#include "dbus.c.h"
static char *pcb_dbus_introspect_xml = "&lt;?xml version=\"1.0\" encoding=\"UTF-8\" ?&gt;&lt;!-- Should name=\"/org/geda/seul/pcb\" ? --&gt;&lt;node&gt;  &lt;!-- This section isn't needed for the glib binding       but is convenient for our raw binding          --&gt;  &lt;interface name=\"org.freedesktop.DBus.Introspectable\"&gt;    &lt;method name=\"Introspect\"&gt;      &lt;arg direction=\"out\" type=\"s\" name=\"data\" /&gt;    &lt;/method&gt;  &lt;/interface&gt;  &lt;!-- End section not needed for glib binding        --&gt;  &lt;interface name=\"org.seul.geda.pcb\"&gt;    &lt;method name=\"GetFilename\"&gt;      &lt;arg direction=\"out\" type=\"s\" /&gt;    &lt;/method&gt;  &lt;/interface&gt;  &lt;interface name=\"org.seul.geda.pcb.actions\"&gt;    &lt;method name=\"ExecAction\"&gt;      &lt;arg direction=\"in\" type=\"s\" name=\"action\" /&gt;      &lt;arg direction=\"in\" type=\"as\" name=\"args\" /&gt;      &lt;arg direction=\"out\" type=\"u\" /&gt;    &lt;/method&gt;  &lt;/interface&gt;&lt;/node&gt;";
static DBusConnection *pcb_dbus_conn;
void unregister_dbus_handler( DBusConnection *connection, void *data )
{
  return;
}
DBusHandlerResult handle_dbus_message( DBusConnection *connection, DBusMessage *message, void *data )
{
  int eax;
  int esi;
  int msg_type;
  switch ( msg_type )
  {
  default:
    break;
  case 4:
    break;
  case 3:
    break;
  case 2:
    break;
  case 1:
  {
    char *method_name;
    char *interface_name;
    if ( dbus_message_get_member( &message ) )
    {
      if ( interface_name )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "org.seul.geda.pcb", interface_name );
        if ( 1 )
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          method_name[0] = dbus_message_get_member( &message );
          strcmp( "GetFilename", dbus_message_get_member( &message ) );
          if ( !1 )
          {
            __fprintf_chk( stderr, 1, "pcb_dbus: Interface '%s' has no method '%s'\n", dbus_message_get_interface( &message ), ebp_184 );
            return 1;
          }
          else
          {
            if ( dbus_message_new_method_return( &message ) )
            {
              dbus_message_iter_init_append( dbus_message_new_method_return( &message ), ebp_112 );
              if ( PCB->Filename )
              {
                if ( lrealpath( &PCB->Filename ) == 0 )
                  goto B38;
                else
                {
                  if ( dbus_message_iter_append_basic( ebp_112, 115, ebp_32 ) )
                  {
                    free( ebp_32 );
                  }
                  else
                  {
                    __fprintf_chk( stderr, 1, "pcb_dbus: Couldn't append return filename string to message reply, Out Of Memory!\n" );
                    free( ebp_32 );
                    dbus_message_unref( &ebx );
                    return 0;
                  }
                }
              }
              else
              {
              }
B38:;
              if ( calloc( 1, 1 ) )
              {
              }
              else
              {
                __fprintf_chk( stderr, 1, ebp_192, ebp_192 );
              }
            }
            else
            {
            }
          }
        }
        else
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          strcmp( "org.seul.geda.pcb.actions", interface_name );
          if ( 1 )
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            method_name[0] = ebp_140;
            strcmp( "ExecAction", ebp_140 );
            if ( !1 )
            {
              __fprintf_chk( stderr, 1, "pcb_dbus: Interface '%s' has no method '%s'\n", dbus_message_get_interface( &message ), ebp_184 );
            }
            else
            {
              dbus_error_init( ebp_56 );
              if ( dbus_message_get_args( &message, ebp_56, 115, ebp_32, 97, (long long)115, (long long)( ebp_40 ) ) )
              {
                hid_actionv( (char*)calloc( 1, 1 ), ebp_40, ebp_36 );
                dbus_free_string_array( 0 );
                if ( dbus_message_new_method_return( &message ) )
                {
                  dbus_message_iter_init_append( dbus_message_new_method_return( &message ), ebp_112 );
                  if ( dbus_message_iter_append_basic( ebp_112, 117, ebp_28 ) )
                  {
                  }
                  else
                  {
                  }
                }
              }
              else
              {
                __fprintf_chk( stderr, 1, "Failed to read method arguments\n" );
                if ( 0 )
                {
                  dbus_free_string_array( 0 );
                }
              }
            }
          }
          else
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            strcmp( "org.freedesktop.DBus.Introspectable", interface_name );
            if ( !1 )
            {
              __fprintf_chk( stderr, 1, "pcb_dbus: Interface '%s' was not recognised\n", dbus_message_iter_append_basic( ebp_112, 117, ebp_28 ) );
            }
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            method_name[0] = dbus_message_get_member( &message );
            strcmp( "Introspect", dbus_message_get_member( &message ) );
            if ( !1 )
            {
              __fprintf_chk( stderr, 1, "pcb_dbus: Interface '%s' has no method '%s'\n", dbus_message_get_interface( &message ), ebp_184 );
            }
            else
            {
              if ( dbus_message_new_method_return( &message ) )
              {
                dbus_message_iter_init_append( dbus_message_new_method_return( &message ), ebp_112 );
                if ( dbus_message_iter_append_basic( ebp_112, 115, pcb_dbus_introspect_xml ) )
                {
                  if ( dbus_connection_send( &pcb_dbus_conn, (DBusMessage*)dbus_message_get_interface( &message ), 0 ) )
                  {
                    dbus_message_unref( &ebx );
                    return 0;
                  }
                }
                else
                {
                }
              }
            }
          }
          }
        }
        if ( dbus_connection_send( ebp_200, ebp_200, ebp_196 ) )
        {
          dbus_message_unref( &ebx );
          return 0;
        }
      }
      else
      {
      }
    }
    else
    {
    }
  }
    break;
  }
  __fprintf_chk( stderr, 1, ebp_192, ebp_192 );
}
void pcb_dbus_setup( void )
{
  DBusError err;
  int ret;
  DBusObjectPathVTable object_vtable;
  object_vtable.unregister_function = &unregister_dbus_handler;
  object_vtable.message_function = &handle_dbus_message;
  object_vtable.dbus_internal_pad1 = 0;
  object_vtable.dbus_internal_pad2 = 0;
  object_vtable.dbus_internal_pad3 = 0;
  object_vtable.dbus_internal_pad4 = 0;
  dbus_error_init( err.name );
  pcb_dbus_conn = dbus_bus_get_private( 0, err.name );
  if ( dbus_error_is_set( err.name ) )
  {
    __fprintf_chk( stderr, 1, "pcb_dbus: DBus connection Error (%s)\n", err.message );
    dbus_error_free( err.name );
  }
  if ( pcb_dbus_conn )
  {
    ret = dbus_bus_request_name( &pcb_dbus_conn, "org.seul.geda.pcb", 2, err.name );
    if ( dbus_error_is_set( err.name ) )
    {
      __fprintf_chk( stderr, 1, "pcb_dbus: DBus name error (%s)\n", err.message );
      dbus_error_free( err.name );
    }
    if ( ret + -1 + -1 > 1 )
    {
      __fprintf_chk( stderr, 1, "pcb_dbus: Couldn't gain ownership or queued ownership of the canonical DBus name\n" );
    }
    else
    {
      if ( dbus_connection_register_object_path( &pcb_dbus_conn, "/org/seul/geda/pcb", object_vtable.unregister_function, 0 ) )
      {
        pcb_dbus_connection_setup_with_mainloop( &pcb_dbus_conn );
        return;
      }
      __fprintf_chk( stderr, 1, "pcb_dbus: Couldn't register DBUS handler for %s\n", "/org/seul/geda/pcb" );
      return;
    }
  }
  return;
}
void pcb_dbus_finish( void )
{
  DBusError err;
  dbus_error_init( err.name );
  dbus_connection_flush( &pcb_dbus_conn );
  dbus_connection_unregister_object_path( &pcb_dbus_conn, "/org/seul/geda/pcb" );
  dbus_bus_release_name( &pcb_dbus_conn, "org.seul.geda.pcb", err.name );
  dbus_error_free( err.name );
  pcb_dbus_connection_finish_with_mainloop( &pcb_dbus_conn );
  dbus_connection_close( &pcb_dbus_conn );
  dbus_connection_unref( &pcb_dbus_conn );
  dbus_shutdown( );
  return;
}
#if 0
#endif
