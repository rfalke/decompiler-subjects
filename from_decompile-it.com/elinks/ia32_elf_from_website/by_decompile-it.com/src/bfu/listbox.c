#include "listbox.c.h"
struct widget_ops listbox_ops = { &display_listbox, &init_listbox, &mouse_listbox, &kbd_listbox, 0, 0 };
void add_dlg_listbox( struct dialog *dlg, void *box_data )
{
  dlg->number_of_widgets++;
  dlg->widgets[ dlg->number_of_widgets ].type = WIDGET_LISTBOX;
  dlg->widgets[ dlg->number_of_widgets ].data = box_data;
  return;
}
struct listbox_data *get_listbox_widget_data( struct widget_data *widget_data )
{
  if ( assert_failed == 0 )
  {
    assert_failed = widget_data->info.text.scroller_last_dir != 4;
    if ( widget_data->info.text.scroller_last_dir != 4 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/listbox.c";
      errline = 38;
      elinks_internal( "assertion widget_data-&gt;widget-&gt;type == WIDGET_LISTBOX failed!" );
      return &widget_data->box.y;
    }
  }
  return &widget_data->box.y;
}
void dlg_format_listbox( struct terminal *term, struct widget_data *widget_data, int x, int *y, int w, int max_height, int *rw, enum format_align  align, int format_only )
{
  int edx;
  int min;
  int height = max_height - 3;
  min = *(int*)(get_opt_( config_options, (unsigned char*)config_options ));
  widget_data->box.x = x < 0 ? x : 0;
  widget_data->box.y = y[0] < 0 ? y[0] : 0;
  widget_data->box.width = w < 0 ? w : 0;
  widget_data->box.height = (unsigned char)( ( ( height >> 31 ) & 1 ) ^ 1 ) ? 0 : height;
  y[0] += height;
  if ( rw )
  {
    rw[0] = w;
  }
  return;
}
struct listbox_item *traverse_listbox_items_list( struct listbox_item *item, struct listbox_data *box, int offset, int follow_visible, int (*fn)( struct listbox_item *, void *, int * ), void *d )
{
  int eax;
  int edx;
  struct listbox_item *visible_item = 0;
  int levmove;
  int stop;
  int infinite;
  if ( item )
  {
    infinite = 0;
    if ( offset == 0 )
    {
      offset = 1;
      infinite = 1;
    }
    visible_item = &item[0];
    stop = 0;
    item = &item[0];
    while ( stop == 0 )
    {
      do
      {
        if ( eax )
        {
          struct listbox_item *croot, *cprev = item->prev, *cnext;
          &cnext[0] = &item;
          croot = box->ops->get_root( &item[0] );
          if ( fn == 0 || ( follow_visible && ( ( item->bits_at_24/*.1_1of4*/ & 2 ) & 255 ) == 0 ) )
            offset = offset;
          else
          {
            item = fn( &item[0], d, &offset ) != 0 ? &item[0] : 0;
            if ( offset == 0 )
            {
              infinite = 0;
              stop = 0;
            }
          }
          if ( offset >= 1 )
          {
            struct listbox_item *cragsman;
            if ( infinite == 0 )
              offset--;
            if ( item[0] && item->child.next != item->child.next && ( ( item->bits_at_24/*.1_1of4*/ & 1 ) & 255 ) && ( follow_visible == 0 || ( ( (int)item->bits_at_24/*.1_1of4*/ & 2 ) & 255 ) ) )
            {
              item += 0;
              box->ops->get_root( &item->child.next[0] );
              stop = 0;
            }
            else
            {
              if ( croot[0].next )
              {
                if ( cnext[0].next == croot->child.next )
                {
                  while ( box->ops->get_root( &croot[0] ) == 0 )
                  {
                    if ( cnext[0].next != fn( &item[0], d, &offset ) + 8 )
                    {
                      box->ops->get_root( (int)( &croot ) );
                      item = &croot;
                      stop = 0;
                    }
                    else
                    {
                    }
                  }
                  item = &croot;
                }
              }
              if ( croot && box->items != croot->next )
              {
              }
              else
              {
                if ( item[0].next == 0 ? item[0].next : croot[0].next )
                {
                  item = item[0].next == 0 ? &item[0] : &croot[0];
                  box->ops->get_root( item[0].next == 0 ? &item[0] : &croot[0] );
                }
                stop = 1;
              }
            }
            if ( item[0].next == 0 || ( follow_visible && ( ( item->bits_at_24/*.1_1of4*/ & 2 ) & 255 ) == 0 ) )
            {
              offset++;
            }
          }
          else
          {
            if ( infinite == 0 )
              offset++;
            levmove = 0;
            if ( croot[0].next )
            {
              if ( cprev[0].next == croot->child.next )
              {
                if ( box->ops->get_root( &croot[0] ) )
                {
                  item = &croot[0];
                  stop = 0;
                  if ( follow_visible && ( ( item->bits_at_24/*.1_1of4*/ & 2 ) & 255 ) == 0 )
                  {
                    offset--;
                  }
                }
                else
                {
                  item = &croot[0];
                  levmove = 1;
                }
              }
              else
              {
                box = box;
                box->ops->get_root( &cprev[0] );
                if ( cprev[0].next )
                {
                  if ( cprev->child.next == cprev->child.next || ( ( *(char*)(cprev[0].next + 24) & 1 ) & 255 ) == 0 )
                    item = &cprev[0];
                  else
                  {
                    do
                    {
                      if ( follow_visible && ( ( (int)item->bits_at_24/*.1_1of4*/ & 2 ) & 255 ) == 0 )
                        stop = 0;
                        if ( item[0].next )
                          continue;
                      else
                      {
                        item = &item->child.prev[0];
                        box->ops->get_root( &item->child.prev[0] );
                        if ( item[0].next )
                          continue;
                      }
                    }
                    while ( item->child.next != item->child.next && ( ( item->bits_at_24/*.1_1of4*/ & 1 ) & 255 ) );
                  }
                  stop = 0;
                }
                stop = 0;
                item = 0;
              }
            }
            stop = 1;
            if ( box->items != cprev[0].next )
            {
              if ( levmove == 0 )
              {
                box = box;
                box->ops->get_root( &cprev[0] );
              }
              else
                stop = 0;
            }
            else
            {
            }
          }
          visible_item = &item[0];
          break;
        }
        else
          break;
      }
      while ( stop );
      break;
    }
  }
  return visible_item;
}
int calc_dist( struct listbox_item *item, void *data_, int *offset )
{
  int eax;
  if ( offset[0] < 0 )
  {
    *(int*)(data_) = ((int*)data_)[ -1 ];
    return 0;
  }
  if ( !1 )
  {
    *(int*)(data_) = ((int*)data_)[0];
  }
  return 0;
}
void listbox_sel_move( struct widget_data *widget_data, int dist )
{
  int eax;
  struct listbox_data *box = get_listbox_widget_data( widget_data );
  if ( box->items[0].next != box->items )
  {
    if ( box->top )
    {
      if ( box->sel )
      {
        if ( !get_listbox_widget_data( widget_data ) || ( ( *(char*)(box->top + 24) & 2 ) & 255 ) )
        {
        }
        else
        {
          box->top = traverse_listbox_items_list( box->sel, &box[0], 1, 1, 0, 0 );
          box->sel = traverse_listbox_items_list( box->sel, &box[0], 1, 1, 0, 0 );
        }
        if ( dist == 0 )
        {
          if ( ( ( *(char*)(box->sel + 24) & 2 ) & 255 ) == 0 )
          {
          }
          else
          {
            if ( box->sel_offset < 0 )
            {
              box->sel_offset = 0;
              box->top = box->sel;
            }
            else
            {
              if ( widget_data->box.height <= box->sel_offset )
              {
                box->sel_offset = widget_data->box.height - 1;
                box->top = traverse_listbox_items_list( box->sel, &box[0], 1 - widget_data->box.height, 1, 0, 0 );
              }
            }
          }
        }
        box->sel = traverse_listbox_items_list( box->sel, &box[0], 1, 1, &calc_dist, &box->sel_offset );
      }
    }
    else
    {
      box->top = &box->items[0].next[0];
      if ( box->sel )
        continue;
    }
    box->sel = box->top;
    &box->top = box->top;
  }
  return;
}
int test_search( struct listbox_item *item, void *data_, int *offset )
{
  if ( ((int*)data_)[1] != item )
  {
    ((int*)data_)[6]++;
    return 0;
  }
  offset[0] = 0;
  return 0;
}
int listbox_item_offset( struct listbox_data *box, struct listbox_item *item )
{
  struct listbox_context ctx;
  do
  {
  }
  while ( 0 + 4 + 4 < 28 );
  ctx.item = &item[0];
  ctx.offset = 0;
  traverse_listbox_items_list( &box->items->next[0], &box[0], 0, 1, &test_search, (void*)ctx.term );
  return ctx.offset;
}
void listbox_sel( struct widget_data *widget_data, struct listbox_item *item )
{
  int eax;
  int edx;
  struct listbox_data *box = get_listbox_widget_data( widget_data );
  widget_data = widget_data;
  item = listbox_item_offset(  ) - listbox_item_offset( &box[0], box->sel );
}
int display_listbox_item( struct listbox_item *item, void *data_, int *offset )
{
  int eax;
  int edx;
  int ebp_64;
  int ebp_60;
  int len;
  struct color_pair *tree_color, *text_color;
  int depth = item->depth + 1;
  int d;
  int x, y;
  tree_color = get_bfu_color( &((int*)data_)[0], "menu.normal" );
  if ( item == ((int*)data_)[2] )
  {
    text_color = get_bfu_color( &((int*)data_)[0], "menu.selected" );
  }
  else
  {
    text_color = tree_color;
    if ( ( item->bits_at_24/*.1_1of4*/ & 4 ) & 255 )
    {
      text_color = get_bfu_color( &((int*)data_)[0], "menu.marked" );
    }
  }
  if ( item->depth >= 1 )
  {
    ebp_64 = 0;
    d = 0;
    ebp_60 = depth;
    do
    {
      struct listbox_item *root = item;
      struct listbox_item *child = item;
      int i, x;
      &root[0] = item;
      if ( ebp_60 )
      {
        while ( &root[0] = 0, root[0].next == 0 )
          ((int*)data_)[2]( root[0].next );
          i--;
          if ( i == 1 )
            child = &root[0];
          else
          {
            &root = &root;
          }
      }
      x = ((int*)data_);
      draw_text( &((int*)data_), ((int*)data_), ebp_64, &((int*)data_), ((int*)data_), "     ", 5 );
      *ebp_92 = child->next;
      if ( ( eax & 255 ) == 0 )
        draw_border_char( &((int*)data_)[0], x + 1, ((int*)data_)[6], ((int*)data_)[4], 179 );
      d++;
      ebp_60--;
      ebp_64 += 5;
    }
    while ( d < item->depth );
  }
  if ( depth )
  {
    enum border_char  str[5];
    int i;
    str[0] = 32;
    str[1] = BORDER_SRTEE;
    str[2] = BORDER_SHLINE;
    str[3] = BORDER_SHLINE;
    str[4] = 32;
    if ( item->type == BI_FOLDER )
    {
    }
    else
    if ( item->type == BI_SEPARATOR )
    {
      struct listbox_item *root;
      ((int*)data_)[2]( item );
      if ( root[0].next )
      {
        if ( root->child.prev != item )
        {
          struct list_head_elinks *p;
          &item = (int)item->bits_at_24/*.1_1of4*/;
        }
      }
      else
      if ( ((int*)data_)[2] == item )
      {
      }
      else
      if ( ((int*)data_)[2] != item )
        continue;
    }
    else
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/listbox.c";
      errline = 426;
      elinks_internal( "Unknown item type" );
    }
    if ( child[0].next & 4 )
      str[4] = 42;
    i = 0;
    ((int*)data_)[0] = ((int*)data_)[0];
    ((int*)data_)[4] = ((int*)data_)[4];
    x = x + ( item->depth * 5 );
    do
    {
      draw_border_char( &((int*)data_)[0], x + i, ((int*)data_)[6], ((int*)data_)[4], &str[ i ] );
      i++;
    }
    while ( i == 5 );
    data_ = &((int*)data_)[0];
  }
  x = ((int*)data_)[4];
  if ( item->type == BI_SEPARATOR )
  {
    int i;
    int width = ( 0 - ( depth * 5 ) ) + ((int*)data_)[4];
    if ( ((int*)data_)[4] + ( 0 - ( depth * 5 ) ) >= 1 )
    {
      data_ = &((int*)data_)[0];
      y = ((int*)data_)[6];
      i = 0;
      do
      {
        draw_border_char( &((int*)data_)[0], x + i, y, BORDER_SHLINE, text_color );
        i++;
      }
      while ( width <= i );
    }
  }
  else
  if ( ((int*)data_)[2] && ((int*)data_)[2] )
    edx( item, ((int*)data_)[0], x, ((int*)data_)[6], ((int*)data_)[4] );
  else
  {
    unsigned char *text;
    int len_bytes;
    if ( assert_failed == 0 )
    {
      if ( ((int*)data_)[2] && ((int*)data_)[2] )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/bfu/listbox.c";
        errline = 458;
        elinks_internal( "assertion ops && ops-&gt;get_info failed!" );
      }
    }
    ;
  }
  if ( ((int*)data_)[2] == item )
  {
    x = ((int*)data_)[4];
    set_cursor( &((int*)data_)[0], ((int*)data_)[4], *(int*)(item + 20), ((int*)data_)[6] );
    ((int*)data_)[3] = x;
    ((int*)data_)[3] = ((int*)data_)[6];
    ((int*)data_)[6]++;
    return 0;
  }
  ((int*)data_)[6]++;
  return 0;
}
widget_handler_status_T display_listbox( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int edx;
  struct terminal *term = &dlg_data->box.width;
  struct listbox_data *box = get_listbox_widget_data( widget_data );
  struct listbox_context data;
  listbox_sel_move( widget_data, 0 );
  draw_box( &term[0], widget_data + 8, 32, 0, get_bfu_color( &term[0], "menu.normal" ) );
  data.term = data.term;
  do
  {
    &data.term = 0;
  }
  while ( 0 + 4 + 4 < 28 );
  data->term = &term[0];
  data.widget_data = &widget_data[0];
  data.dlg_data = &dlg_data[0];
  data.box = box;
  traverse_listbox_items_list( box->top, box, widget_data->box.height, 1, &display_listbox_item, (void*)data.term );
  return 0;
}
int check_old_state( struct listbox_item *item, void *info_, int *offset )
{
  if ( ((int*)info_)[3] == item )
    ((int*)info_)[3] = 0;
  else
  {
    if ( ((int*)info_)[4] == item[0].next )
      ((int*)info_)[4] = 0;
    if ( ((int*)info_)[3] == 0 )
      goto B5;
    return 0;
  }
B5:  if ( ((int*)info_)[4] == 0 )
  {
    offset[0] = 0;
  }
  return 0;
}
widget_handler_status_T init_listbox( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  struct hierbox_browser *browser = &dlg_data->dlg->udata2[0];
  struct listbox_data *box = get_listbox_widget_data( widget_data );
  if ( browser->root.child.next != browser->root.child.next && browser->box_data.items )
  {
    box = &browser->box_data;
    box->prev = browser->box_data.prev;
    box->ops = browser->box_data.ops;
    box->sel = browser->box_data.sel;
    box->top = browser->box_data.top;
    box->sel_offset = browser->box_data.sel_offset;
    box->items = browser->box_data.items;
    traverse_listbox_items_list( &browser->root.child.next[0], &box[0], 0, 0, &check_old_state, (void*)box[0].next );
    if ( box->sel )
    {
      box->sel = 0;
      if ( box->top )
      {
        box->top = 0;
        if ( box->sel == 0 )
          box->sel = browser->box_data.top;
        if ( box->top == 0 )
        {
          box->top = box->sel;
        }
      }
    }
    else
    {
      box->sel = browser->box_data.sel;
      if ( box->top )
      {
        box->top = 0;
      }
    }
    box->top = browser->box_data.top;
    if ( browser->box_data.sel == 0 )
      browser = &browser[0];
      box->sel = browser->box_data.top;
  }
  box->items = &browser->root.child;
  box->ops = browser->ops;
  box->prev = &browser->boxes.next[0];
  box = &browser->boxes.next[0];
  browser->boxes.next = (void*)box[0].next;
  box->prev = &box[0];
  return 0;
}
widget_handler_status_T mouse_listbox( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int eax;
  int edx;
  struct listbox_data *box;
  struct term_event *ev = dlg_data->term_event;
  box = get_listbox_widget_data( widget_data );
  if ( box->items[0].next != box->items )
  {
    if ( box->top == 0 )
    {
      box->top = &box->items[0].next[0];
      if ( box->sel == 0 )
        goto B6;
    }
    else
    if ( box->sel == 0 )
      goto B6;
B6:    box->sel = box->top;
  }
  if ( ( ev->info.mouse.button & 7 ) <= 2 && widget_data->box.x <= ev->info.mouse.x && widget_data->box.y <= ev->info.mouse.y && ev->info.mouse.x < widget_data->box.width + widget_data->box.x && ev->info.mouse.y < widget_data->box.height + widget_data->box.y )
  {
    int offset = ev->info.mouse.y - widget_data->box.y;
    box->sel_offset = ev->info.mouse.y - widget_data->box.y;
    if ( ev->info.mouse.y - widget_data->box.y )
    {
      traverse_listbox_items_list( box->top, &box[0], ev->info.mouse.y - widget_data->box.y, 1, 0, 0 );
    }
    else
      box->top = box->top;
    box->sel = traverse_listbox_items_list( box->top, &box[0], box->top, 1, 0, 0 );
    if ( box->sel && box->sel->type == BI_FOLDER && widget_data->box.x + ( box->sel->depth * 5 ) <= x && x <= xdepth + 2 + 2 )
      box->sel->bits_at_24/*.1_1of4*/ = ( *(char*)(&box->sel->bits_at_24) & -2 ) | ( ( *(char*)(&box->sel->bits_at_24) ^ 1 ) & 1 );
    display_widget( &dlg_data[0], &widget_data[0] );
  }
  else
  {
  }
  return 1;
}
widget_handler_status_T kbd_listbox( struct dialog_data *dlg_data, struct widget_data *widget_data )
{
  int edx;
  struct term_event *ev;
  ev[0].ev = dlg_data->term_event->ev;
  if ( ev->ev == 1 )
  {
    switch ( kbd_action( KEYMAP_MENU, &ev[0], 0 ) )
    {
    default:
      *ebp_8 = ebx;
      return 0;
      break;
    case 4:
      break;
    case 20:
      break;
    case 12:
      listbox_sel_move( &dlg_data->widgets_data, 0 - dlg_data->widgets_data->box.height - *(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 20) );
      display_widget( &dlg_data, &dlg_data->widgets_data );
      return 0;
      break;
    case 13:
      listbox_sel_move( &dlg_data->widgets_data, 0 - dlg_data->widgets_data->box.height - *(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 20) );
      break;
    case 8:
      break;
    case 5:
      break;
    case 10:
      if ( *(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) == 0 )
        continue;
      *(char*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 24) = ( *(char*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 24) & -5 ) | ( ( ( ( *(char*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 12) + 24) >> 2 ) ^ 1 ) & 1 ) << 2 );
      listbox_sel_move( &dlg_data->widgets_data, 1 );
      break;
    case 3:
      if ( *(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 8) && *(int*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 8) + 36) && *(int*)(*(int*)(get_listbox_widget_data( &dlg_data->widgets_data ) + 8) + 32) )
      {
        push_hierbox_delete_button( &dlg_data, widget_data );
        *ebp_8 = ebx;
        return 0;
      }
      *ebp_8 = ebx;
      return 0;
      break;
    }
    listbox_sel_move( &dlg_data->widgets_data );
  }
  else
  {
    *ebp_8 = ebx;
    return 0;
  }
}
#if 0
#endif
