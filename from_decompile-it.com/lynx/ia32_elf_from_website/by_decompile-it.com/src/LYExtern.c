#include "LYExtern.c.h"
void format( char **result, char *fmt, char *parm )
{
  result[0] = 0;
  HTAddParam( result, fmt, 1, parm );
  HTEndParam( result, fmt, 1 );
  return;
}
char *format_command( char *command, char *param )
{
  char *cmdbuf = 0;
  format( &cmdbuf, command, param );
  return cmdbuf;
}
char *lookup_external( char *param, BOOLEAN only_overriders )
{
  int pass, num_disabled, num_matched, num_choices, cur_choice;
  int length = 0;
  char *cmdbuf = 0;
  char **choices = 0;
  lynx_list_item_type *ptr = 0;
  pass = 0;
  for ( ; pass <= 1; pass++ )
  {
    num_disabled = 0;
    num_matched = 0;
    num_choices = 0;
    ptr = externals;
    for ( ; ptr;  )
    {
      if ( match_item_by_name( ptr, param, only_overriders ) )
      {
        num_matched++;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "EXTERNAL: '%s' &lt;==&gt; '%s'\n", &ptr->name, param );
        }
        if ( no_externals && ptr->always_enabled == 0 && only_overriders == 0 )
          num_disabled++;
        else
        {
          if ( pass == 0 )
            length++;
          else
          if ( pass )
          {
            cmdbuf = format_command( &ptr->command, param );
            if ( length > 1 )
              choices[ num_choices ] = cmdbuf;
          }
          num_choices++;
        }
      }
      ptr = &ptr->next;
    }
    if ( length > 1 )
    {
      if ( pass == 0 )
      {
        choices = calloc( length + 1, sizeof( char* ) );
      }
      else
        choices[ num_choices ] = 0;
    }
    // pass++;
  }
  if ( num_disabled && num_matched == num_disabled )
  {
    HTUserMsg( gettext( "External support is currently disabled." ) );
  }
  if ( num_choices > 1 )
  {
    int old_y = -1, old_x = -1;
    cur_choice = LYhandlePopupList( -1, 0, old_x, choices, -1, -1, 0, 1 );
    wmove( LYwin, old_y, old_x );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "selected choice %d of %d\n", cur_choice, num_choices );
    }
    if ( cur_choice < 0 )
    {
      HTInfoMsg( gettext( "Cancelled!!!" ) );
      cmdbuf = 0;
    }
    pass = 0;
    for ( ; choices[ pass ]; pass++ )
    {
      if ( pass == cur_choice )
        cmdbuf = choices[ pass ];
      else
      if ( choices[ pass ] )
      {
        free( choices[ pass ] );
        choices[ pass ] = 0;
      }
      // pass++;
    }
    if ( choices )
    {
      free( choices );
      choices = 0;
    }
  }
  return cmdbuf;
}
BOOLEAN run_external( char *param, BOOLEAN only_overriders )
{
  int redraw_flag = 1;
  char *cmdbuf = 0;
  BOOLEAN found = 0;
  int confirmed = 1;
  if ( externals == 0 )
  {
  }
  cmdbuf = lookup_external( param, only_overriders );
  if ( cmdbuf && cmdbuf )
  {
    HTUserMsg( cmdbuf );
    found = 1;
    if ( confirmed )
    {
      if ( redraw_flag )
      {
        stop_curses( );
        fflush( stdout );
      }
      LYSystem( cmdbuf );
      if ( redraw_flag )
      {
        fflush( stdout );
        start_curses( );
      }
    }
  }
  if ( cmdbuf )
  {
    free( cmdbuf );
    cmdbuf = 0;
  }
  return found;
}
#if 0
#endif
