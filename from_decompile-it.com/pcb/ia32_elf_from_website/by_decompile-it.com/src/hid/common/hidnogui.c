#include "hidnogui.c.h"
HID hid_nogui = { 208, "nogui", "Default GUI when no other GUI is present.  Does nothing.", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
HID_Attribute *nogui_get_export_options( int *n_ret )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_do_export( HID_Attr_Val *options )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_parse_arguments( int *argc, char ***argv )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_invalidate_wh( int x, int y, int width, int height, int last )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_invalidate_lr( int l, int r, int t, int b, int last )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_invalidate_all( void )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
int nogui_set_layer( char *name, int idx, int empty )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
hidGC nogui_make_gc( void )
{
  return 0;
}
void nogui_destroy_gc( hidGC gc )
{
  return;
}
void nogui_use_mask( int use_it )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_color( hidGC gc, char *name )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_line_cap( hidGC gc, EndCapStyle style )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_line_width( hidGC gc, int width )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_draw_xor( hidGC gc, int xor )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_draw_faded( hidGC gc, int faded )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_draw_arc( hidGC gc, int cx, int cy, int width, int height, double start_angle, int end_angle )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_fill_pcb_polygon( hidGC gc, PolygonType *poly, BoxType *clip_box )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_calibrate( double xval, double yval )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
int nogui_shift_is_pressed( void )
{
  return 0;
}
int nogui_control_is_pressed( void )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
int nogui_mod1_is_pressed( void )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_get_coords( char *msg, int *x, int *y )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_set_crosshair( int x, int y, int action )
{
  return;
}
hidval nogui_add_timer( void (*func)( hidval  ), unsigned long milliseconds, hidval user_data )
{
  /* phantom */ hidval rv;
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_stop_timer( hidval timer )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
hidval nogui_watch_file( int fd, unsigned int condition, void (*func)( hidval , int , unsigned int , hidval  ), hidval user_data )
{
  /* phantom */ hidval rv;
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_unwatch_file( hidval watch )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
hidval nogui_add_block_hook( void (*func)( hidval  ), hidval data )
{
  /* phantom */ hidval rv;
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_stop_block_hook( hidval block_hook )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_log( char *fmt, ... )
{
  /* phantom */ va_list ap;
  __vfprintf_chk( stdout, 1, fmt, ebp_12 );
  return;
}
void nogui_logv( char *fmt, va_list ap )
{
  __vfprintf_chk( stdout, 1, fmt, ap );
  return;
}
int nogui_confirm_dialog( char *msg, ... )
{
  int rv;
  __printf_chk( 1, "%s ? 0=cancel 1=ok : ", msg );
  fflush( stdout );
  scanf( "%d", &rv );
  return rv;
}
int nogui_close_confirm_dialog( void )
{
  return nogui_confirm_dialog( "OK to lose data ?", 0 );
}
void nogui_report_dialog( char *title, char *msg )
{
  __printf_chk( 1, "--- %s ---\n%s\n", title, msg );
  return;
}
char *nogui_prompt_for( char *msg, char *default_string )
{
  int eax;
  static char buf[1024];
  if ( default_string == 0 )
  {
    __printf_chk( 1, "%s : ", msg );
    fgets( buf, 1024, stdin );
    return buf;
  }
  __printf_chk( 1, "%s [%s] : ", msg, default_string );
  fgets( buf, 1024, stdin );
  if ( buf[0] )
  {
    return buf;
  }
  __strcpy_chk( buf, default_string, 1024 );
  return buf;
}
char *nogui_fileselect( char *title, char *descr, char *default_file, char *default_ext, char *history_tag, int flags )
{
  int eax;
  static char buf[1024];
  if ( default_file == 0 )
  {
    __printf_chk( 1, "%s : ", title );
    fgets( buf, 1024, stdin );
    return buf;
  }
  __printf_chk( 1, "%s [%s] : ", title, default_file );
  fgets( buf, 1024, stdin );
  if ( buf[0] )
  {
    return buf;
  }
  __strcpy_chk( buf, default_file, 1024 );
  return buf;
}
int nogui_attribute_dialog( HID_Attribute *attrs, int n_attrs, HID_Attr_Val *results, char *title, char *descr )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_show_item( void *item )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called GUI function %s without having a GUI available.\n", __FUNCTION__ );
  abort( );
}
void nogui_beep( void )
{
  _IO_putc( 7, stdout );
  fflush( stdout );
  return;
}
int nogui_progress( int so_far, int total, char *message )
{
  return 0;
}
void apply_default_hid( HID *d, HID *s )
{
  int edx;
  s = s == 0 ? s : &hid_nogui;
  if ( d->get_export_options == 0 )
  {
    d->get_export_options = s->get_export_options;
    if ( d->do_export == 0 )
    {
    }
    else
    {
      if ( d->parse_arguments == 0 )
      {
        d->parse_arguments = s->parse_arguments;
        if ( d->invalidate_wh == 0 )
        {
          d->invalidate_wh = s->invalidate_wh;
          if ( d->invalidate_lr == 0 )
          {
            d->invalidate_lr = s->invalidate_lr;
            if ( d->invalidate_all == 0 )
            {
              d->invalidate_all = s->invalidate_all;
              if ( d->set_layer == 0 )
              {
                d->set_layer = s->set_layer;
                if ( d->make_gc == 0 )
                {
                  d->make_gc = s->make_gc;
                  if ( d->destroy_gc == 0 )
                  {
                    d->destroy_gc = s->destroy_gc;
                    if ( d->use_mask == 0 )
                    {
                      d->use_mask = s->use_mask;
                      if ( d->set_color == 0 )
                      {
                        d->set_color = s->set_color;
                        if ( d->set_line_cap == 0 )
                        {
                          d->set_line_cap = s->set_line_cap;
                          if ( d->set_line_width == 0 )
                          {
                            d->set_line_width = s->set_line_width;
                            if ( d->set_draw_xor == 0 )
                            {
                              d->set_draw_xor = s->set_draw_xor;
                              if ( d->set_line_cap_angle == 0 )
                              {
                                d->set_line_cap_angle = s->set_line_cap_angle;
                                if ( d->draw_line == 0 )
                                {
                                  d->draw_line = s->draw_line;
                                  if ( d->draw_arc == 0 )
                                  {
                                    d->draw_arc = s->draw_arc;
                                    if ( d->fill_circle == 0 )
                                    {
                                      d->fill_circle = s->fill_circle;
                                      if ( d->fill_polygon == 0 )
                                      {
                                        d->fill_polygon = s->fill_polygon;
                                        if ( d->fill_pcb_polygon == 0 )
                                        {
                                          d->fill_pcb_polygon = s->fill_pcb_polygon;
                                          if ( d->thindraw_pcb_polygon == 0 )
                                          {
                                            d->thindraw_pcb_polygon = s->thindraw_pcb_polygon;
                                            if ( d->calibrate == 0 )
                                            {
                                              d->calibrate = s->calibrate;
                                              if ( d->shift_is_pressed == 0 )
                                              {
                                                d->shift_is_pressed = s->shift_is_pressed;
                                                if ( d->control_is_pressed == 0 )
                                                {
                                                  d->control_is_pressed = s->control_is_pressed;
                                                  if ( d->mod1_is_pressed == 0 )
                                                  {
                                                    d->mod1_is_pressed = s->mod1_is_pressed;
                                                    if ( d->get_coords == 0 )
                                                    {
                                                      d->get_coords = s->get_coords;
                                                      if ( d->set_crosshair == 0 )
                                                      {
                                                        d->set_crosshair = s->set_crosshair;
                                                        if ( d->add_timer == 0 )
                                                        {
                                                          d->add_timer = s->add_timer;
                                                          if ( d->stop_timer == 0 )
                                                          {
                                                            d->stop_timer = s->stop_timer;
                                                            if ( d->watch_file == 0 )
                                                            {
                                                              d->watch_file = s->watch_file;
                                                              if ( d->unwatch_file == 0 )
                                                              {
                                                                d->unwatch_file = s->unwatch_file;
                                                                if ( d->add_block_hook == 0 )
                                                                {
                                                                  d->add_block_hook = s->add_block_hook;
                                                                  if ( d->stop_block_hook == 0 )
                                                                  {
                                                                    d->stop_block_hook = s->stop_block_hook;
                                                                    if ( d->log == 0 )
                                                                    {
                                                                      d->log = s->log;
                                                                      if ( d->logv == 0 )
                                                                      {
                                                                        d->logv = s->logv;
                                                                        if ( d->confirm_dialog == 0 )
                                                                        {
                                                                          d->confirm_dialog = s->confirm_dialog;
                                                                          if ( d->close_confirm_dialog == 0 )
                                                                          {
                                                                            d->close_confirm_dialog = s->close_confirm_dialog;
                                                                            if ( d->report_dialog == 0 )
                                                                            {
                                                                              d->report_dialog = s->report_dialog;
                                                                              if ( d->prompt_for == 0 )
                                                                              {
                                                                                d->prompt_for = s->prompt_for;
                                                                                if ( d->fileselect == 0 )
                                                                                {
                                                                                  d->fileselect = s->fileselect;
                                                                                  if ( d->attribute_dialog == 0 )
                                                                                  {
                                                                                    d->attribute_dialog = s->attribute_dialog;
                                                                                    if ( d->show_item == 0 )
                                                                                    {
                                                                                      d->show_item = s->show_item;
                                                                                      if ( d->beep == 0 )
                                                                                      {
                                                                                        d->beep = s->beep;
                                                                                        if ( d->progress == 0 )
                                                                                          d->progress = s->progress;
                                                                                        if ( d->drc_gui == 0 )
                                                                                        {
                                                                                          d->drc_gui = &s->drc_gui[10].log_drc_violations;
                                                                                          return;
                                                                                        }
                                                                                        return;
                                                                                      }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      if ( d->beep == 0 )
                                                                                        d->beep = s->beep;
                                                                                    }
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    if ( d->show_item == 0 )
                                                                                    {
                                                                                      d->show_item = s->show_item;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                    }
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                  if ( d->attribute_dialog == 0 )
                                                                                  {
                                                                                    d->attribute_dialog = s->attribute_dialog;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                  }
                                                                                }
                                                                              }
                                                                              else
                                                                              {
                                                                                if ( d->fileselect == 0 )
                                                                                {
                                                                                  d->fileselect = s->fileselect;
                                                                                }
                                                                                else
                                                                                {
                                                                                }
                                                                              }
                                                                            }
                                                                            else
                                                                            {
                                                                              if ( d->prompt_for == 0 )
                                                                              {
                                                                                d->prompt_for = s->prompt_for;
                                                                              }
                                                                              else
                                                                              {
                                                                              }
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            if ( d->report_dialog == 0 )
                                                                            {
                                                                              d->report_dialog = s->report_dialog;
                                                                            }
                                                                            else
                                                                            {
                                                                            }
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          if ( d->close_confirm_dialog == 0 )
                                                                          {
                                                                            d->close_confirm_dialog = s->close_confirm_dialog;
                                                                          }
                                                                          else
                                                                          {
                                                                          }
                                                                        }
                                                                      }
                                                                      else
                                                                      {
                                                                        if ( d->confirm_dialog == 0 )
                                                                        {
                                                                          d->confirm_dialog = s->confirm_dialog;
                                                                        }
                                                                        else
                                                                        {
                                                                        }
                                                                      }
                                                                    }
                                                                    else
                                                                    {
                                                                      if ( d->logv == 0 )
                                                                      {
                                                                        d->logv = s->logv;
                                                                      }
                                                                      else
                                                                      {
                                                                      }
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    if ( d->log == 0 )
                                                                    {
                                                                      d->log = s->log;
                                                                    }
                                                                    else
                                                                    {
                                                                    }
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  if ( d->stop_block_hook == 0 )
                                                                  {
                                                                    d->stop_block_hook = s->stop_block_hook;
                                                                  }
                                                                  else
                                                                  {
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                if ( d->add_block_hook == 0 )
                                                                {
                                                                  d->add_block_hook = s->add_block_hook;
                                                                }
                                                                else
                                                                {
                                                                }
                                                              }
                                                            }
                                                            else
                                                            {
                                                              if ( d->unwatch_file == 0 )
                                                              {
                                                                d->unwatch_file = s->unwatch_file;
                                                              }
                                                              else
                                                              {
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            if ( d->watch_file == 0 )
                                                            {
                                                              d->watch_file = s->watch_file;
                                                            }
                                                            else
                                                            {
                                                            }
                                                          }
                                                        }
                                                        else
                                                        {
                                                          if ( d->stop_timer == 0 )
                                                          {
                                                            d->stop_timer = s->stop_timer;
                                                          }
                                                          else
                                                          {
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        if ( d->add_timer == 0 )
                                                        {
                                                          d->add_timer = s->add_timer;
                                                        }
                                                        else
                                                        {
                                                        }
                                                      }
                                                    }
                                                    else
                                                    {
                                                      if ( d->set_crosshair == 0 )
                                                      {
                                                        d->set_crosshair = s->set_crosshair;
                                                      }
                                                      else
                                                      {
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    if ( d->get_coords == 0 )
                                                    {
                                                      d->get_coords = s->get_coords;
                                                    }
                                                    else
                                                    {
                                                    }
                                                  }
                                                }
                                                else
                                                {
                                                  if ( d->mod1_is_pressed == 0 )
                                                  {
                                                    d->mod1_is_pressed = s->mod1_is_pressed;
                                                  }
                                                  else
                                                  {
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                if ( d->control_is_pressed == 0 )
                                                {
                                                  d->control_is_pressed = s->control_is_pressed;
                                                }
                                                else
                                                {
                                                }
                                              }
                                            }
                                            else
                                            {
                                              if ( d->shift_is_pressed == 0 )
                                              {
                                                d->shift_is_pressed = s->shift_is_pressed;
                                              }
                                              else
                                              {
                                              }
                                            }
                                          }
                                          else
                                          {
                                            if ( d->calibrate == 0 )
                                            {
                                              d->calibrate = s->calibrate;
                                            }
                                            else
                                            {
                                            }
                                          }
                                        }
                                        else
                                        {
                                          if ( d->thindraw_pcb_polygon == 0 )
                                          {
                                            d->thindraw_pcb_polygon = s->thindraw_pcb_polygon;
                                          }
                                          else
                                          {
                                          }
                                        }
                                      }
                                      else
                                      {
                                        if ( d->fill_pcb_polygon == 0 )
                                        {
                                          d->fill_pcb_polygon = s->fill_pcb_polygon;
                                        }
                                        else
                                        {
                                        }
                                      }
                                    }
                                    else
                                    {
                                      if ( d->fill_polygon == 0 )
                                      {
                                        d->fill_polygon = s->fill_polygon;
                                      }
                                      else
                                      {
                                      }
                                    }
                                  }
                                  else
                                  {
                                    if ( d->fill_circle == 0 )
                                    {
                                      d->fill_circle = s->fill_circle;
                                    }
                                    else
                                    {
                                    }
                                  }
                                }
                                else
                                {
                                  if ( d->draw_arc == 0 )
                                  {
                                    d->draw_arc = s->draw_arc;
                                  }
                                  else
                                  {
                                  }
                                }
                              }
                              else
                              {
                                if ( d->draw_line == 0 )
                                {
                                  d->draw_line = s->draw_line;
                                }
                                else
                                {
                                }
                              }
                            }
                            else
                            {
                              if ( d->set_line_cap_angle == 0 )
                              {
                                d->set_line_cap_angle = s->set_line_cap_angle;
                              }
                              else
                              {
                              }
                            }
                          }
                          else
                          {
                            if ( d->set_draw_xor == 0 )
                            {
                              d->set_draw_xor = s->set_draw_xor;
                            }
                            else
                            {
                            }
                          }
                        }
                        else
                        {
                          if ( d->set_line_width == 0 )
                          {
                            d->set_line_width = s->set_line_width;
                          }
                          else
                          {
                          }
                        }
                      }
                      else
                      {
                        if ( d->set_line_cap == 0 )
                        {
                          d->set_line_cap = s->set_line_cap;
                        }
                        else
                        {
                        }
                      }
                    }
                    else
                    {
                      if ( d->set_color == 0 )
                      {
                        d->set_color = s->set_color;
                      }
                      else
                      {
                      }
                    }
                  }
                  else
                  {
                    if ( d->use_mask == 0 )
                    {
                      d->use_mask = s->use_mask;
                    }
                    else
                    {
                    }
                  }
                }
                else
                {
                  if ( d->destroy_gc == 0 )
                  {
                    d->destroy_gc = s->destroy_gc;
                  }
                  else
                  {
                  }
                }
              }
              else
              {
                if ( d->make_gc == 0 )
                {
                  d->make_gc = s->make_gc;
                }
                else
                {
                }
              }
            }
            else
            {
              if ( d->set_layer == 0 )
              {
                d->set_layer = s->set_layer;
              }
              else
              {
              }
            }
          }
          else
          {
            if ( d->invalidate_all == 0 )
            {
              d->invalidate_all = s->invalidate_all;
            }
            else
            {
            }
          }
        }
        else
        {
          if ( d->invalidate_lr == 0 )
          {
            d->invalidate_lr = s->invalidate_lr;
          }
          else
          {
          }
        }
      }
      else
      {
        if ( d->invalidate_wh == 0 )
        {
          d->invalidate_wh = s->invalidate_wh;
        }
        else
        {
        }
      }
    }
  }
  else
  if ( d->do_export == 0 )
    goto B3;
  else
  {
  }
B3:;
  d->do_export = s->do_export;
  if ( d->parse_arguments == 0 )
  {
    d->parse_arguments = s->parse_arguments;
  }
  else
  {
  }
}
#if 0
#endif
