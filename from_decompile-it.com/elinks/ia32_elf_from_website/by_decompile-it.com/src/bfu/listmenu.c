#include "listmenu.c.h"
int menu_contains( struct menu_item *m, int f )
{
  int eax;
  if ( m->func != do_select_submenu )
  {
    return f == *(int*)(&m->data);
  }
  m = &m->data[0];
  if ( m->text )
  {
    do
    {
      if ( menu_contains( &m[0], f ) )
        break;
      m++;
    }
    while ( m->text );
  }
  return 0;
}
void do_select_submenu( struct terminal *term, void *menu_, void *ses_ )
{
  int eax;
  int edx;
  struct menu_item *m;
  int def = 0;
  int sel;
  def = (unsigned char)( ( ( get_current_state( &ses_[0] ) >> 31 ) & 1 ) ^ 1 ) ? def : get_current_state( &ses_[0] );
  do_menu_selected( term, &((int*)menu_)[0], ses_, sel, 0 );
  return;
}
void new_menu_item( struct list_menu *menu, unsigned char *name, int data, int fullname )
{
  int ecx;
  int edx;
  struct menu_item *new_menu_item;
  struct menu_item **items;
  if ( name == 0 )
  {
    menu->stack_size--;
    return;
  }
  if ( data == -1 || menu->stack_size )
  {
    clr_spaces( &name[0] );
    *ebp_32 = data;
    if ( name[0] == 0 )
    {
      mem_free( &name[0] );
      *ebp_32 = data;
      name[0] = stracpy( " " );
      if ( stracpy( " " ) == 0 )
      {
        return;
      }
    }
    if ( data == -1 )
    {
      if ( mem_realloc( (void*)&menu->stack, ( menu->stack_size + 1 ) * 4 ) )
      {
        menu = (struct list_menu*)mem_realloc( (void*)&menu->stack, ( menu->stack_size + 1 ) * 4 );
        if ( new_menu_item[0].text )
        {
          menu->stack[0][0] = new_menu_item[0];
          menu->stack_size++;
          if ( menu->stack_size + 1 == 1 )
          {
          }
          else
            items[0] = menu->stack + ( ( menu->stack_size << 2 ) - 4 );
        }
      }
    }
    else
      items[0] = menu->stack + ( ( menu->stack_size << 2 ) - 4 );
    add_to_menu( &items[0], &name[0], 0, ACT_MAIN_NONE );
    if ( menu->stack_size > 1 )
    {
      struct menu_item *below = *(int*)(menu->stack - menu->stack_size);
      if ( below->text )
      {
        do
        {
          below++;
        }
        while ( below->text );
      }
      *(int*)(below[1].text - 16) = (unsigned char*)items[0];
      return;
    }
    else
    {
      return;
    }
  }
  menu = &name[0];
}
void init_menu( struct list_menu *menu )
{
  menu->stack_size = 0;
  menu[0].stack = 0;
  new_menu_item( menu, stracpy( "" ), -1, 0 );
  return;
}
void free_menu( struct menu_item *m )
{
  struct menu_item *mm;
  if ( m )
  {
    if ( m->text )
    {
      mm = &m[0];
      do
      {
        mem_free( (void*)m->text );
        if ( mm->func == do_select_submenu )
        {
          m = &mm->data[0];
          ebp_4 = free_menu+4b;
          free_menu(  );
        }
        mm++;
      }
      while ( mm->text == 0 );
      m = &m[0];
    }
    else
    {
      m = &m[0];
    }
  }
  else
  {
    return;
  }
}
struct menu_item *detach_menu( struct list_menu *menu )
{
  struct menu_item *i;
  i[0].text = 0;
  if ( menu[0].stack )
  {
    menu->stack_size = menu->stack_size;
    if ( menu->stack_size )
      i[0].text = (unsigned char*)&menu->stack;
    mem_free( (void*)&menu[0].stack );
  }
  return &i[0];
}
void destroy_menu( struct list_menu *menu )
{
  if ( menu[0].stack )
    free_menu( menu->stack[0] );
  menu = &menu[0];
}
void menu_labels( struct menu_item *items, unsigned char *base, unsigned char **lbls )
{
  int eax;
  struct menu_item *item;
  unsigned char *bs;
  if ( items[0].text )
  {
    do
    {
      base[0] = ( ( item->flags & 16 ) & 255 ) == 0 ? "" : base;
      bs = ( ( item->flags & 16 ) & 255 ) == 0 ? "" : base;
      bs = straconcat( ( ( item->flags & 16 ) & 255 ) == 0 ? "" : base );
      if ( bs )
      {
        if ( item->func == do_select_submenu )
        {
          add_to_strn( &bs, " " );
          menu_labels( &item->data[0], bs, lbls );
          mem_free( (void*)bs );
        }
        else
        {
          if ( assert_failed == 0 )
          {
            assert_failed = selected_item != item->func;
            if ( item->func != selected_item )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/listmenu.c";
              errline = 188;
              elinks_internal( "assertion item-&gt;func == selected_item failed!" );
              bs[0] = bs;
            }
          }
          lbls[ item->data ] = bs;
        }
      }
      item++;
    }
    while ( item->text == 0 );
    return;
  }
  else
  {
    return;
  }
}
void add_select_item( struct list_menu *menu, struct string *string, struct string *orig_string, unsigned char **value, int order, int dont_add )
{
  int eax;
  int pos;
  if ( assert_failed == 0 )
  {
    assert_failed = ( ( menu == 0 ) | ( string[0].source == 0 ) ) & 1;
    if ( ( ( menu == 0 ) | ( string[0].source == 0 ) ) & 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/listmenu.c";
      errline = 201;
      elinks_internal( "assertion menu && string failed!" );
      if ( string->source )
      {
        pos--;
        if ( assert_failed == 0 )
        {
          assert_failed = ( pos >> 31 ) | ( value == 0 );
          if ( ( pos >> 31 ) | ( value == 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/listmenu.c";
            errline = 205;
            elinks_internal( "assertion value && pos &gt;= 0 failed!" );
            *ebp_36 = value[0];
          }
        }
        if ( *(int*)(ebp_36 + ( pos << 2 )) == 0 )
        {
        }
        if ( dont_add )
          done_string( &string[0] );
          menu = &orig_string[0].source[0];
        else
        {
          new_menu_item( menu, string->source, pos, 1 );
          string = 0;
          string->length = 0;
          menu = &orig_string[0].source[0];
        }
      }
      else
      {
        return;
      }
    }
  }
  if ( string->source )
  {
    pos--;
  }
  else
  {
    return;
  }
}
#if 0
#endif
