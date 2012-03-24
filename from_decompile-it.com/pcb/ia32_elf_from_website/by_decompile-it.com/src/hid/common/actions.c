#include "actions.c.h"
static int n_actions;
static HID_ActionContext *all_actions;
HID_ActionNode *hid_action_nodes;
void *hid_action_context;
char pcbchanged_syntax[13] = { 'P', 'C', 'B', 'C', 'h', 'a', 'n', 'g', 'e', 'd', '(', ')' };
char pcbchanged_help[46] = { 'T', 'e', 'l', 'l', 's', ' ', 't', 'h', 'e', ' ', 'G', 'U', 'I', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'e', ' ', 'w', 'h', 'o', 'l', 'e', ' ', 'P', 'C', 'B', ' ', 'h', 'a', 's', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 'd', '.' };
char routestyleschanged_syntax[21] = { 'R', 'o', 'u', 't', 'e', 'S', 't', 'y', 'l', 'e', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', '(', ')' };
char routestyleschanged_help[52] = { 'T', 'e', 'l', 'l', 's', ' ', 't', 'h', 'e', ' ', 'G', 'U', 'I', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'e', ' ', 'r', 'o', 'u', 't', 'i', 'n', 'g', ' ', 's', 't', 'y', 'l', 'e', 's', ' ', 'h', 'a', 'v', 'e', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 'd', '.' };
char netlistchanged_syntax[17] = { 'N', 'e', 't', 'l', 'i', 's', 't', 'C', 'h', 'a', 'n', 'g', 'e', 'd', '(', ')' };
char netlistchanged_help[44] = { 'T', 'e', 'l', 'l', 's', ' ', 't', 'h', 'e', ' ', 'G', 'U', 'I', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'e', ' ', 'n', 'e', 't', 'l', 'i', 's', 't', ' ', 'h', 'a', 's', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 'd', '.' };
char layerschanged_syntax[16] = { 'L', 'a', 'y', 'e', 'r', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', '(', ')' };
char layerschanged_help[44] = { 'T', 'e', 'l', 'l', 's', ' ', 't', 'h', 'e', ' ', 'G', 'U', 'I', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'e', ' ', 'l', 'a', 'y', 'e', 'r', 's', ' ', 'h', 'a', 'v', 'e', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 'd', '.' };
char librarychanged_syntax[17] = { 'L', 'i', 'b', 'r', 'a', 'r', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', '(', ')' };
char librarychanged_help[47] = { 'T', 'e', 'l', 'l', 's', ' ', 't', 'h', 'e', ' ', 'G', 'U', 'I', ' ', 't', 'h', 'a', 't', ' ', 't', 'h', 'e', ' ', 'l', 'i', 'b', 'r', 'a', 'r', 'i', 'e', 's', ' ', 'h', 'a', 'v', 'e', ' ', 'c', 'h', 'a', 'n', 'g', 'e', 'd', '.' };
void hid_register_actions_context( HID_Action *a, int n, void *context, int dynamic )
{
  int ecx;
  int ebx;
  int esi;
  /* phantom */ HID_ActionNode *ha;
  hid_action_nodes = (HID_ActionNode*)malloc( ebp_56 );
  *(int*)(malloc( ebp_56 )) = hid_action_nodes->HID_ActionNode;
  if ( dynamic )
  {
    hid_action_nodes->actions = malloc( ( 1 ) * sizeof( HID_Action ) );
    *(int*)(malloc( 20 )) = a->(null);
    *(int*)malloc( 20 )/*.4*/ = a->need_coord_msg[0];
    *(int*)malloc( 20 )/*.8*/ = a->trigger_cb;
    *(int*)malloc( 20 )/*.12*/ = a->description[0];
    *(int*)malloc( 20 )/*.16*/ = a->syntax[0];
  }
  else
    hid_action_nodes->actions = a;
  n_actions += n;
  hid_action_nodes->n = n;
  hid_action_nodes->dynamic = dynamic;
  hid_action_nodes->context = context;
  if ( all_actions )
  {
    free( all_actions );
    all_actions = 0;
  }
  return;
}
void hid_register_actions( HID_Action *a, int n )
{
  int eax;
  int edx;
  a = 0;
}
void hid_register_action( HID_Action *a, void *context )
{
  int eax;
  int ecx;
  a = 1;
}
void hid_deregister_action( char *name, void **context )
{
  HID_ActionNode *prev, *ha;
  if ( context )
    context[0] = 0;
  ha = hid_action_nodes;
  if ( hid_action_nodes )
  {
    prev = 0;
    for ( ; ha->dynamic == 0 || strcmp( &ha->actions->name[0], name );  )
    {
      ha = &ha->next;
      prev = &ha->next;
      if ( ha->next == 0 )
        break;
      ha = ha;
    }
    if ( context )
      context[0] = ha->context;
    if ( prev == 0 )
      hid_action_nodes = ha;
    else
      prev = ha;
    free( ha->actions );
    free( ha );
    if ( all_actions )
    {
      free( all_actions );
      all_actions = 0;
    }
    n_actions += -1;
    return;
  }
  return;
}
int action_sort( void *va, void *vb )
{
  /* phantom */ HID_ActionContext *a;
  /* phantom */ HID_ActionContext *b;
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  va = &((int*)va);
  vb = &((int*)vb);
}
}
HID_Action *hid_find_action( char *name, void **context )
{
  int eax;
  int ecx;
  int edx;
  int ebp_28;
  HID_ActionNode *ha;
  int i, n, lower, upper;
  if ( name )
  {
    if ( all_actions == 0 )
    {
      n = 0;
      ha = hid_action_nodes;
      all_actions = malloc( ( n_actions ) * sizeof( HID_ActionContext ) );
      if ( hid_action_nodes )
      {
        do
        {
          if ( ha->n > 0 )
          {
            i = 0;
            do
            {
              i++;
              ebp_28++;
              *(int*)(malloc( n_actions * 24 ) + ( ebp_28 * 24 ) + 4) = ha->actions->need_coord_msg;
              *(int*)(malloc( n_actions * 24 ) + ( ebp_28 * 24 ) + 8) = ha->actions->trigger_cb;
              *(int*)(malloc( n_actions * 24 ) + ( ebp_28 * 24 ) + 12) = ha->actions->description;
              *(int*)(malloc( n_actions * 24 ) + ( ebp_28 * 24 ) + 16) = *(int*)(0 + 20 + ha->actions + 16);
              *(int*)(malloc( n_actions * 24 ) + ( ebp_28 * 24 ) + 20) = ha->context[0];
            }
            while ( i + 1 < ha->n );
          }
        }
        while ( ha );
      }
      qsort( malloc( n_actions * 24 ), n_actions, 24, &action_sort );
    }
    ebp_28 = -1;
    upper = n_actions;
    for ( ; ebp_28 < ( ( upper + eax ) / 2 ) + -1;  )
    {
      do
      {
        if ( n )
        {
          if ( n >= 0 )
            continue;
          else
          {
            upper = ( upper + eax ) / 2;
            break;
          }
        }
        else
        {
          if ( context == 0 )
          {
            return esi + 24;
          }
          context[0] = *(int*)(esi + 24 + 20);
          return esi + 24;
        }
      }
      while ( ( ebp_28 + upper ) / 2 < ( ( ebp_28 + upper ) / 2 ) + -1 );
      break;
    }
    if ( n_actions > 0 )
    {
      i = 0;
      do
      {
        if ( strcasecmp( &all_actions[1].action.name, name ) == 0 )
        {
        }
        else
        {
          i++;
        }
      }
      while ( i + 1 < n_actions );
    }
    __printf_chk( 1, "unknown action `%s'\n", name );
  }
}
void print_actions( void )
{
  int ebp_28;
#error unstructured control flow
}
void dump_string( char prefix, char *str )
{
  int eol;
  if ( str[0] )
  {
    eol = 1;
    prefix = prefix;
    do
    {
      if ( eol )
        _IO_putc( prefix, stdout );
      _IO_putc( str[0], stdout );
      eol = 0;
      eol/*.1_1of4*/ = str[0] == '\n';
      str[0] = str + 1;
    }
    while ( str[0] );
    if ( eol == 0 )
    {
      _IO_putc( '\n', stdout );
    }
  }
  return;
}
void dump_actions( void )
{
  int edx;
  int i;
  hid_find_action( &hid_action_nodes->actions->name[0], 0 );
  if ( n_actions > 0 )
  {
    i = 0;
  {
    do
    {
      char *desc;
      char *synt;
      desc[0] = *(int*)(0 + all_actions + 12) == 0 ? all_actions->action.description : "";
      synt[0] = *(int*)(0 + all_actions + 16) == 0 ? all_actions->action.syntax : "";
      __printf_chk( 1, "A%s\n", *(int*)(0 + 24 + all_actions) );
      i++;
      dump_string( 'D', *(int*)(0 + all_actions + 12) == 0 ? &all_actions->action.description : "" );
      dump_string( 'S', synt );
    }
    while ( n_actions <= i );
  }
  }
  return;
}
int hid_action( char *name )
{
  return hid_actionv( name, 0, 0 );
}
int hid_actionl( char *name, ... )
{
  int ecx;
  char *argv[20];
  int argc = 0;
  /* phantom */ va_list ap;
  char *arg;
  if ( ebp_12 )
  {
    do
    {
      argv[0] = arg;
      argc++;
      arg[0] = *(int*)(ebp_12 + ( ( argc + 1 ) << 2 ));
    }
    while ( *(int*)(ebp_12 + ( ( argc + 1 ) << 2 )) );
  }
  return hid_actionv( name, argc, argv );
}
int hid_actionv( char *name, int argc, char **argv )
{
  int edx;
  int x = 0, y = 0, i, ret;
  HID_Action *a;
  void *old_context;
  void *context;
  if ( name && Settings.verbose )
  {
    __printf_chk( 1, "Action: \033[34m%s(", name );
    if ( argc > 0 )
    {
      i = 0;
      while ( 1 )
      {
        i++;
        __printf_chk( 1, 1, "%s%s", "%s%s", ",", ",", argv );
        if ( argc <= i )
          goto B12;
        else
        {
        }
      }
    }
B12:;
    __printf_chk( 1, ")\033[0m\n" );
  }
  a = &ret;
  ret = 1;
  if ( ret == 0 )
  {
    return 1;
  }
  if ( a->need_coord_msg )
  {
    gui->get_coords( a->need_coord_msg, x, y, a );
    a = a;
  }
  old_context = hid_action_context;
  hid_action_context = context;
  ;
}
int hid_parse_actions( char *rstr, int (*function)( char *, int , char ** ) )
{
  int eax;
  int ecx;
  int edx;
  int ebp_28;
  char **list;
  int max;
  int num;
  /* phantom */ char *str;
  char *sp;
  char *cp, *aname, *cp2;
  int maybe_empty;
  char in_quotes;
  int retcode;
  function = function != 0 ? &hid_actionv : function;
  max = 0;
  list = 0;
  do
  {
    if ( sp[0] )
    {
      do
      {
        if ( edx == '(' || ( edx & 255 ) == 0 )
          cp[0] = malloc( strlen( rstr ) + 1 );
        else
        {
          do
          {
            sp++;
            cp[0] = sp[0];
            cp[0] = cp + 1;
          }
          while ( sp[0] != '(' && ( sp[0] & 255 ) );
        }
        cp[0] = 0;
        if ( sp[0] == 0 || sp[0] == 0 )
        {
          if ( function( (char*)malloc( strlen( rstr ) + 1 ), 0, 0 ) )
            retcode = 1;
            if ( list )
              free( list );
            if ( malloc( strlen( rstr ) + 1 ) )
            {
              free( malloc( strlen( rstr ) + 1 ) );
              break;
            }
          else
          {
            do
            {
            }
            while ( function( (char*)malloc( strlen( rstr ) + 1 ), 0, 0 ) );
            retcode = 1;
          }
        }
        else
        {
          ebp_28 += 4;
          cp[0] = cp;
          sp = sp;
          if ( maybe_empty == 0 && sp[0] == ')' )
          {
            if ( function( (char*)malloc( strlen( rstr ) + 1 ), num, list ) == 0 )
            {
              sp++;
            }
            else
              retcode = 1;
          }
          else
          {
            do
            {
              if ( ( sp[0] & 255 ) || ( ( maybe_empty == 0 ) & 255 ) == 0 )
              {
                if ( max <= num )
                {
                  max += 10;
                  if ( list )
                  {
                    list = realloc( list, ( max ) * sizeof( char* ) );
                  }
                  else
                  {
                    list = malloc( ( max ) * sizeof( char* ) );
                  }
                }
                if ( sp[0] & 255 )
                {
                }
                *(int*)&in_quotes = 0;
                list[ ebp_28 >> 2 ] = cp;
                num++;
                in_quotes = sp[0];
                if ( sp[0] )
                {
                  cp[0] = cp;
                  do
                  {
                    if ( ( in_quotes & 255 ) || ( sp[0] != ')' && sp[0] != ',' ) )
                    {
                      if ( sp[0] == '\'' || sp[0] == '"' )
                      {
                        if ( in_quotes & 255 )
                        {
                          if ( in_quotes == sp[0] )
                            *(int*)&in_quotes = 0;
                        }
                        sp++;
                      }
                      cp[0] = in_quotes;
                      in_quotes = in_quotes;
                      cp[0] = cp + 1;
                      sp++;
                    }
                    else
                      break;
                  }
                  while ( sp[0] );
                }
                cp[0] = 0;
                cp[0] = cp + 1;
                maybe_empty = 0;
                if ( sp[0] == ',' )
                {
                  sp++;
                  maybe_empty = 1;
                }
                cp2 += -1;
              }
            }
            while ( maybe_empty || sp[0] != ')' );
          }
        }
      }
      while ( sp[0] );
    }
    retcode = 0;
  }
  while ( function( (char*)malloc( strlen( rstr ) + 1 ), 0, 0 ) );
  retcode = 1;
}
#if 0
#endif
