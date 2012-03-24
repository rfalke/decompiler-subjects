#include "hid_resource.c.h"
static int button_count;
static int *button_nums;
static int *mod_count;
static unsigned int *mods;
static Resource **actions;
Resource *res_wrap( char *value )
{
  int ebx;
  Resource *tmp = resource_create( ebp_24 );
  resource_add_val( resource_create( ebp_24 ), 0, value, 0 );
  return tmp;
}
unsigned int parse_mods( char *value )
{
  int edx;
  unsigned int m;
  long mod_num;
  char *s;
  if ( value[0] )
  {
    __ctype_tolower_loc( );
    s = value;
    value[0] = value;
    do
    {
      s[0] = *(int*)(*(int*)(__ctype_tolower_loc( )) + ( value[0] << 2 ));
      s++;
    }
    while ( s[0] );
  }
  if ( strstr( value, "mod" ) )
  {
    *(int*)(__errno_location( )) = 0;
    strtol( strstr( value, "mod" ) + 3, 0, 0 );
    return strstr( value, "up" ) != 0 ? m : m | 0x80000000;
  }
  m = 0;
  m = strstr( value, "shift" ) != 0 ? m : m | 1;
  m = strstr( value, "ctrl" ) != 0 ? m : m | 2;
  m = strstr( value, "alt" ) != 0 ? m : m | 4;
  return strstr( value, "up" ) != 0 ? m : m | 0x80000000;
}
void load_mouse_resource( Resource *res )
{
  int eax;
  int ebp_44;
  int ebp_40;
  int bi, mi, a;
  int action_count;
  button_count = res->c;
  button_nums = malloc( ( res->c ) * sizeof( int ) );
  mod_count = malloc( ( res->c ) * sizeof( int ) );
  if ( res->c > 0 )
  {
    res->parent = res->v;
    bi = 0;
    do
    {
      bi++;
      res->v->name[0] = res->v + 12;
    }
    while ( res->c != bi + 1 );
  }
  mods = malloc( 0 << 2 );
  actions = (GtkActionGroup*)malloc( 0 << 2 );
  if ( res->c > 0 )
  {
    ebp_44 = 0;
    a = 0;
    ebp_40 = 0;
  {
    do
    {
      int button_num;
      if ( *(int*)(ebp_44 + res->v) )
      {
        button_num = 1;
        if ( strcasecmp( *(int*)(ebp_44 + res->v), "left" ) && strcasecmp( *(int*)(ebp_44 + res->v), "middle" ) && strcasecmp( *(int*)(ebp_44 + res->v), "right" ) && strcasecmp( *(int*)(ebp_44 + res->v), "up" ) )
        {
          button_num = 5;
          if ( strcasecmp( *(int*)(ebp_44 + res->v), "down" ) )
          {
            if ( strtol( *(int*)(ebp_44 + res->v), 0, 10 ) < 0 )
            {
            }
          }
          else
          {
          }
        }
        button_nums[ ebp_40 ] = button_num;
        mod_count[ ebp_40 ] = 0;
        if ( *(int*)(ebp_44 + res->v + 4) )
        {
          mods = 0;
          actions->parent.g_type_instance._GTypeInstance = (GTypeClass*)res_wrap( *(int*)(ebp_44 + *(int*)(res + 16) + 4) );
          mod_count[ ebp_40 ] = 1;
          a++;
        }
        if ( *(int*)(ebp_44 + res->v + 8) )
        {
          /* phantom */ Resource *m;
          mod_count[0] += res->v;
          if ( *(int*)(*(int*)(ebp_44 + res->v + 8) + 12) > 0 )
          {
            mi = 0;
            do
            {
              if ( ( ~( 0 - ( ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16)) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 4) < 1 ) & 1 ) ) & 10 ) != 10 )
              {
                if ( ( ~( 0 - ( ( *(int*)(ebx + *(int*)(edi + 16)) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(ebx + *(int*)(edi + 16) + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(ebx + *(int*)(edi + 16) + 4) < 1 ) & 1 ) ) & 10 ) >= 10 )
                {
                  if ( ( ~( 0 - ( ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16)) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 4) < 1 ) & 1 ) ) & 10 ) == 101 )
                  {
                    mods = eax;
                    actions->parent.ref_count = *(int*)(ebx + *(int*)(edi + 16) + 8);
                  }
                  else
                  if ( ( ~( 0 - ( ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16)) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(0 + 12 + *(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 4) < 1 ) & 1 ) ) & 10 ) == 110 )
                  {
                    mods = eax;
                  }
                  else
                  {
                    mi++;
                    a++;
                  }
                }
                else
                if ( res == 1 )
                {
                  mods = 0;
                  actions->parent.g_type_instance.g_class->g_type = *(int*)(*(int*)(*(int*)(ebp_44 + res->v + 8) + 16) + 8);
                }
              }
              else
                mods = 0;
              actions->parent.ref_count = eax;
            }
            while ( mi < *(int*)(*(int*)(ebp_44 + res->v + 8) + 12) );
          }
        }
      }
      ebp_40++;
      ebp_44 += 12;
    }
    while ( ebp_40 < res->c );
  }
  }
  return;
}
void do_mouse_action( int button, int mod_mask )
{
  int eax;
  int ecx;
  int edx;
  Resource *action;
  int bi, i, a;
  if ( button_count > 0 )
  {
    if ( button_nums[0] != button )
    {
      a = 0;
      bi = 0;
      do
      {
        bi++;
        if ( bi + 1 < ebp_28 )
        {
          a += *(int*)(esi + ecx);
        }
      }
      while ( button_nums[0] != button );
    }
    else
      a = 0;
    if ( a < a + mod_count[0] )
    {
      if ( mods != mod_mask )
      {
        while ( a++, a + 1 < edi )
        {
          if ( mod_mask == mods )
            goto B11;
          else
          {
          }
        }
        a = a;
      }
B11:;
      action = *(int*)(ebx + actions);
      if ( action == 0 || action->c <= 0 )
      {
        return;
      }
      i = 0;
      do
      {
        if ( action->v->value == 0 || hid_parse_actions( &action->v[1].value, &hid_actionv ) == 0 )
        {
          i++;
        }
      }
      while ( i + 1 < action->c );
      return;
    }
    if ( ( mod_mask & 0x7fffffff ) + -1 < 0 )
    {
      return;
    }
    do
    {
      if ( ( mod_mask & 0x7fffffff ) + -1 + -1 == ( mod_mask & 0x7fffffff & ( ( mod_mask & 0x7fffffff ) + -1 + -1 ) ) && ebp_36 < ebp_28 )
      {
        if ( *(int*)(mods + ( a << 2 )) != ( ( mod_mask & 0x80000000 ) | ( ( mod_mask & 0x7fffffff ) + -1 + -1 ) ) )
        {
          a = a;
          while ( a++, a + 1 < ebp_28 )
          {
            if ( *(int*)(mods + ( ( a + 1 ) * 4 ) + 4) == ( ( mod_mask & 0x80000000 ) | ( ( mod_mask & 0x7fffffff ) + -1 + -1 ) ) )
            {
            }
            else
            {
            }
          }
        }
        action = &actions[ ebp_44 >> 4 ].parent.g_type_instance.g_class[0].g_type;
      }
    }
    while ( ebp_60 + -1 >= 0 );
  }
  return;
}
#if 0
#endif
