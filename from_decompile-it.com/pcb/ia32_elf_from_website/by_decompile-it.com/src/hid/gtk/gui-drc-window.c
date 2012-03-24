#include "gui-drc-window.c.h"
static GtkWidget *drc_window;
static GtkWidget *drc_list;
static GtkListStore *drc_list_model;
static int num_violations;
static GObjectClass *ghid_drc_violation_parent_class;
static GObjectClass *ghid_violation_renderer_parent_class;
gint drc_window_configure_event_cb( GtkWidget *widget, GdkEventConfigure *ev, gpointer data )
{
  ghidgui->drc_window_width = widget->allocation.width;
  ghidgui->config_modified = 1;
  ghidgui->drc_window_height = widget->allocation.height;
  return 0;
}
void drc_close_cb( gpointer data )
{
  gtk_widget_destroy( drc_window );
  drc_window = 0;
  return;
}
void drc_refresh_cb( gpointer data )
{
  hid_actionl( "DRC", 0 );
  return;
}
void drc_destroy_cb( GtkWidget *widget, gpointer data )
{
  drc_window = 0;
  return;
}
void unset_found_flags( int AndDraw )
{
  int eax;
  int ecx;
  int ebx;
  int esi;
  int edi;
  int ebp_32;
  /* phantom */ int flag;
  int change;
  Cardinal n;
  Cardinal sn;
  PinTypePtr via;
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr via;
  change = 0;
  n = 0;
  sn = PCB->Data->ViaN;
  if ( PCB->Data->ViaN )
  {
    while ( 1 )
    {
      via = PCB->Data->Via + ( n * 76 );
      if ( ( ( via->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
      {
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN )
          goto B7;
      }
      else
      {
        AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
        via->Flags.f &= -5;
        DrawVia( via, 0 );
        change = 1;
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN )
          goto B7;
      }
B7:;
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - sn )
        goto B4;
      else
      {
      }
    }
  }
{
B4:;
  Cardinal n = PCB->Data->ElementN + -1;
  ElementTypePtr element;
  if ( PCB->Data->ElementN + -1 != -1 )
  {
    ebp_32 = ( PCB->Data->ElementN * 300 ) + -300;
    while ( element = ebp_32 + PCB->Data->Element, element->PinN == 0 )
    {
      Cardinal n;
      Cardinal sn = element->PadN;
      PadTypePtr pad;
      n = 0;
      for ( ; sn && n < sn;  )
      {
        pad = element->Pad + ( n * 104 );
        if ( ( ( pad->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
          continue;
        else
        {
          AddObjectToFlagUndoList( 512, (void*)element, (void*)pad, (void*)pad );
          pad->Flags.f &= -5;
          DrawPad( pad, 0 );
          sn = element->PadN;
          change = 1;
        }
        n += sn == element;
      }
      n += -1;
      ebp_32 += -300;
      if ( n == -1 )
      {
      }
      else
      {
      }
    }
    n = 0;
    while ( 1 )
    {
      pin = element->Pin + ( n * 76 );
      if ( ( ( pin->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
      {
        if ( *(int*)(ebp_40 + 224) == 0 )
        {
        {
          Cardinal n;
          Cardinal sn = element->PadN;
          PadTypePtr pad;
          n = 0;
        }
        }
      }
      else
      {
        AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
        pin->Flags.f &= -5;
        DrawPin( pin, 0 );
        change = 1;
        sn = element->PinN;
        if ( element->PinN == 0 )
          continue;
      }
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - sn )
        continue;
      else
      {
        sn = element->PinN;
      }
    }
  }
{
  Cardinal n = PCB->Data->RatN + -1;
  RatTypePtr line;
  if ( PCB->Data->RatN + -1 != -1 )
  {
    PCB->Data->RatN = ( PCB->Data->RatN * 92 ) + -92;
    while ( 1 )
    {
      line = esi + *(int*)(ecx + 36);
      if ( ( ( line->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
      {
        n += -1;
        if ( n + -1 != -1 )
          continue;
      }
      else
      {
        n += -1;
        AddObjectToFlagUndoList( 32, (void*)line, (void*)line, (void*)line );
        line->Flags.f &= -5;
        DrawRat( line, 0 );
        change = 1;
        if ( n != -1 )
          continue;
      }
    }
  }
{
  Cardinal l;
  LayerTypePtr layer = PCB->Data + 76;
  if ( PCB->Data->LayerN )
  {
    l = 0;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN <= l )
      {
        Cardinal l;
        LayerTypePtr layer = PCB->Data + 76;
        if ( PCB->Data->LayerN )
        {
          l = 0;
        {
          while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
          {
            l++;
            if ( PCB->Data->LayerN <= l )
            {
              Cardinal l;
              LayerTypePtr layer = PCB->Data + 76;
              if ( PCB->Data->LayerN )
              {
                l = 0;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN <= l )
                    goto B44;
                  else
                  {
                    layer++;
                  }
                }
                layer->PolygonN = ( layer->PolygonN * 60 ) + -60;
                do
                {
                  polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60;
                  if ( ( ( polygon->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
                  {
                    n += -1;
                    if ( n + -1 != -1 )
                      continue;
                    else
                      break;
                  }
                  else
                  {
                    n += -1;
                    AddObjectToFlagUndoList( 8, (void*)layer, (void*)polygon, (void*)polygon );
                    polygon->Flags.f &= -5;
                    DrawPolygon( layer, polygon, 0 );
                    change = 1;
                  }
                }
                while ( n != -1 );
                l++;
              }
              }
            }
            else
            {
              layer++;
            }
          }
          do
          {
            arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
            if ( ( ( arc->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
            {
              n += -1;
              if ( n + -1 != -1 )
                continue;
              else
                break;
            }
            else
            {
              n += -1;
              AddObjectToFlagUndoList( 16384, (void*)layer, (void*)arc, (void*)arc );
              arc->Flags.f &= -5;
              DrawArc( layer, arc, 0 );
              change = 1;
            }
          }
          while ( n != -1 );
          l++;
        }
        }
      }
      else
      {
        layer++;
      }
    }
    layer->LineN = ( layer->LineN * 88 ) + -88;
    do
    {
      line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
      if ( ( ( line->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
      {
        n += -1;
        if ( n + -1 != -1 )
          continue;
        else
          break;
      }
      else
      {
        n += -1;
        AddObjectToFlagUndoList( 4, (void*)layer, (void*)line, (void*)line );
        line->Flags.f &= -5;
        DrawLine( layer, line, 0 );
        change = 1;
      }
    }
    while ( n != -1 );
    l++;
  }
  }
B44:;
  if ( change )
  {
    SetChangedFlag( 1 );
    if ( AndDraw )
    {
      IncrementUndoSerialNumber( );
    }
  }
  return;
}
}
}
}
}
void selection_changed_cb( GtkTreeSelection *selection, gpointer user_data )
{
  int eax;
  GtkTreeModel *model;
  GtkTreeIter iter;
  GhidDrcViolation *violation;
  int i;
  if ( gtk_tree_selection_get_selected( selection, &model, &iter ) == 0 )
  {
    unset_found_flags( 1 );
    return;
  }
  if ( gtk_tree_model_iter_has_child( &model, &iter ) == 0 )
  {
    gtk_tree_model_get( &model, &iter, 1, violation, -1 );
    unset_found_flags( 0 );
    if ( violation )
    {
      if ( violation->object_count > 0 )
      {
        i = 0;
        do
        {
          if ( found_type == 0 )
          {
            int object_id;
            int object_type;
            int found_type;
            void *ptr1, *ptr2, *ptr3;
            Message( dcgettext( "pcb", "Object ID %i identified during DRC was not found. Stale DRC window?\n", 5 ), object_id );
            i++;
            if ( violation->object_count <= i )
              break;
          }
          else
          {
            AddObjectToFlagUndoList( object_type, ptr1, ptr2, ptr3 );
            ((int*)ptr2) |= 4;
            if ( violation->object_type_list[ i ] == 8 || violation->object_type_list[ i ] == 16384 || violation->object_type_list[ i ] == 4 )
            {
              ChangeGroupVisibility( GetLayerNumber( &PCB->Data, &ptr1[0] ), 1, 1 );
            }
            DrawObject( object_type, ptr1, SearchObjectByID( &PCB->Data, &ptr1, &ptr2, &ptr3, violation->object_id_list[0], violation->object_type_list[0] ), 0 );
            i++;
          }
        }
        while ( i < violation->object_count );
      }
      SetChangedFlag( 1 );
      IncrementUndoSerialNumber( );
      Draw( );
      return;
    }
  }
  return;
}
void row_activated_cb( GtkTreeView *view, GtkTreePath *path, GtkTreeViewColumn *column, gpointer user_data )
{
  GtkTreeModel *model = gtk_tree_view_get_model( view );
  GtkTreeIter iter;
  GhidDrcViolation *violation;
  gtk_tree_model_get_iter( gtk_tree_view_get_model( view ), &iter, &path );
  gtk_tree_model_get( &model, &iter, 1, violation, -1 );
  if ( violation )
  {
    CenterDisplay( violation->x_coord, violation->y_coord, 0 );
  }
  return;
}
void ghid_drc_violation_finalize( GObject *object )
{
  /* phantom */ GhidDrcViolation *violation;
  g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.12*/ );
  g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.16*/ );
  g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.56*/ );
  g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.64*/ );
  g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.68*/ );
  if ( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.72*/ )
    g_object_unref( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.72*/ );
  ;
}
void ghid_drc_violation_set_property( GObject *object, guint property_id, GValue *value, GParamSpec *pspec )
{
  int ebx;
  int esi;
  int edi;
  GhidDrcViolation *violation = (GhidDrcViolation*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) );
  /* phantom */ struct object_list *obj_list;
  switch ( property_id )
  {
  case 1:
    g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.12*/ );
    violation->title = g_value_dup_string( value );
    break;
  case 2:
    g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.16*/ );
    violation->explanation = g_value_dup_string( value );
    break;
  case 3:
    violation->x_coord = g_value_get_int( value );
    break;
  case 4:
    violation->y_coord = g_value_get_int( value );
    break;
  case 5:
    violation->angle = g_value_get_int( value );
    break;
  case 6:
    violation->have_measured = g_value_get_int( value );
    break;
  case 7:
    g_value_get_double( value );
    violation->measured_value = 0.000000000000;
    break;
  case 8:
    g_value_get_double( value );
    violation->required_value = 0.000000000000;
    break;
  case 9:
    violation->value_digits = g_value_get_int( value );
    break;
  case 10:
    g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.56*/ );
    violation->value_units = g_value_dup_string( value );
    break;
  case 11:
    g_free( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.64*/ );
    g_free( violation->object_type_list );
    violation->object_count = *(int*)(g_value_get_pointer( value ));
  {
    /* phantom */ gsize __n;
    /* phantom */ gsize __s;
    /* phantom */ gpointer __p;
    violation->object_id_list = g_malloc_n( *(int*)(g_value_get_pointer( value )), 4 );
  {
    /* phantom */ gsize __n;
    /* phantom */ gsize __s;
    /* phantom */ gpointer __p;
    violation->object_type_list = g_malloc_n( *(int*)(g_value_get_pointer( value )), 4 );
    memcpy( violation->object_id_list, *(int*)g_value_get_pointer( value )/*.4*/, *(int*)(g_value_get_pointer( value )) << 2 );
    value = *(int*)(g_value_get_pointer( value )) << 2;
    property_id = *(int*)g_value_get_pointer( value )/*.8*/;
    object = &violation->object_type_list[0];
  }
  }
    break;
  case 12:
    if ( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.72*/ )
      g_object_unref( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_drc_violation_get_type( ) )/*.72*/ );
    violation->pixmap = g_value_dup_object( value );
    break;
  case 0:
  {
    /* phantom */ GObject *_object;
    /* phantom */ GParamSpec *_pspec;
    /* phantom */ guint _property_id;
    g_log( 0, 16, "%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", "../../src/hid/gtk/gui-drc-window.c:391", "property", property_id, pspec->name, g_type_name( pspec->g_type_instance._GTypeInstance ), g_type_name( object->g_type_instance.g_class->g_type ) );
  }
    break;
  }
  return;
}
void ghid_drc_violation_get_property( GObject *object, guint property_id, GValue *value, GParamSpec *pspec )
{
{
  /* phantom */ GObject *_object;
  /* phantom */ GParamSpec *_pspec;
  /* phantom */ guint _property_id;
  g_log( 0, 16, "%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", "../../src/hid/gtk/gui-drc-window.c:416", "property", pspec->name, g_type_name( pspec->g_type_instance._GTypeInstance ), g_type_name( object->g_type_instance.g_class ) );
  return;
}
}
void ghid_drc_violation_class_init( GhidViolationRendererClass *klass )
{
  /* phantom */ GObjectClass *gobject_class;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.24*/ = ghid_drc_violation_finalize;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.12*/ = ghid_drc_violation_set_property;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.16*/ = ghid_drc_violation_get_property;
  ghid_drc_violation_parent_class = g_type_class_peek_parent( &klass );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 1, g_param_spec_string( "title", "", "", "", 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 2, g_param_spec_string( "explanation", "", "", "", 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 3, g_param_spec_int( "x-coord", "", "", -2147483648, 2147483647, 0, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 4, g_param_spec_int( "y-coord", "", "", -2147483648, 2147483647, 0, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 5, g_param_spec_int( "angle", "", "", -2147483648, 2147483647, 0, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 6, g_param_spec_int( "have-measured", "", "", -2147483648, 2147483647, 0, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 7, g_param_spec_double( "measured-value", "", "", -179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010, 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010, 0.000000000000, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 8, g_param_spec_double( "required-value", "", "", -0.000000000000, 179769313486231570836821758715560956531137807779752802614843739933294909958805881558134498418064360190394726521625574851322560197037718571305809263682513016389665230001399719060438531356446873763973509889857364559260107438543924444644218991667621836769105500631165851900974832716088539793173016279835454620192.502977497010, 0.000000000000, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 9, g_param_spec_int( "value-digits", "", "", 0, 2147483647, 0, 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 10, g_param_spec_string( "value-units", "", "", "", 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 11, g_param_spec_pointer( "object-list", "", "", 2 ) );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 12, g_param_spec_object( "pixmap", "", "", gdk_drawable_get_type( ), 2 ) );
  return;
}
GType ghid_drc_violation_get_type( void )
{
  static GType ghid_drc_violation_type;
  if ( ghid_drc_violation_type == 0 )
  {
    static GTypeInfo ghid_drc_violation_info = { 68, 0, 0, 0, 0, 0, 0, 76, 0, 0 }
;
    ghid_drc_violation_type = g_type_register_static( 80, "GhidDrcViolation", &ghid_drc_violation_info.class_size, 0 );
    return g_type_register_static( 80, "GhidDrcViolation", &ghid_drc_violation_info.class_size, 0 );
  }
  return ghid_drc_violation_type;
}
GhidDrcViolation *ghid_drc_violation_new( DrcViolationType *violation, GdkDrawable *pixmap )
{
  struct object_list obj_list;
  obj_list.count = violation->object_count;
  obj_list.id_list = &violation->object_id_list;
  obj_list.type_list = &violation->object_type_list;
  return g_object_new( eax, "title", ebp_44, "explanation", ebp_48, "x-coord", ebp_52, "y-coord", ebp_56, "angle", ebx, "have-measured", esi, "measured-value", ebp_72, "required-value", ebp_88, "value-digits", edi, "value-units", ebp_92, "object-list", obj_list.count, "pixmap", (long long)( pixmap ) );
}
void ghid_violation_renderer_finalize( GObject *object )
{
  /* phantom */ GhidViolationRenderer *renderer;
  if ( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_violation_renderer_get_type( ) )/*.88*/ )
    g_object_unref( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_violation_renderer_get_type( ) )/*.88*/ );
  ;
}
void ghid_violation_renderer_set_property( GObject *object, guint property_id, GValue *value, GParamSpec *pspec )
{
  /* phantom */ GhidViolationRenderer *renderer;
  char *markup;
  if ( property_id == 1 )
  {
    if ( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_violation_renderer_get_type( ) )/*.88*/ )
      g_object_unref( *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_violation_renderer_get_type( ) )/*.88*/ );
    *(int*)g_type_check_instance_cast( &object->g_type_instance, ghid_violation_renderer_get_type( ) )/*.88*/ = g_value_dup_object( value );
    if ( g_type_check_instance_cast( &object->g_type_instance, ghid_violation_renderer_get_type( ) ) + 88 == 0 )
    {
      return;
    }
    g_object_set( &object, "markup", (long long)( markup ) );
    object = &markup[0];
  }
  else
  {
    /* phantom */ GObject *_object;
    /* phantom */ GParamSpec *_pspec;
    /* phantom */ guint _property_id;
    g_log( 0, 16, "%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", "../../src/hid/gtk/gui-drc-window.c:648", "property", property_id, pspec->name, g_type_name( pspec->g_type_instance._GTypeInstance ), g_type_name( object->g_type_instance.g_class->g_type ) );
    return;
  }
}
void ghid_violation_renderer_get_property( GObject *object, guint property_id, GValue *value, GParamSpec *pspec )
{
{
  /* phantom */ GObject *_object;
  /* phantom */ GParamSpec *_pspec;
  /* phantom */ guint _property_id;
  g_log( 0, 16, "%s: invalid %s id %u for \"%s\" of type `%s' in `%s'", "../../src/hid/gtk/gui-drc-window.c:712", "property", pspec->name, g_type_name( pspec->g_type_instance._GTypeInstance ), g_type_name( object->g_type_instance.g_class ) );
  return;
}
}
void ghid_violation_renderer_get_size( GtkCellRenderer *cell, GtkWidget *widget, GdkRectangle *cell_area, gint *x_offset, gint *y_offset, gint *width, gint *height )
{
  ;
}
void ghid_violation_renderer_render( GtkCellRenderer *cell, GdkDrawable *window, GtkWidget *widget, GdkRectangle *background_area, GdkRectangle *cell_area, GdkRectangle *expose_area, GtkCellRendererState flags )
{
  /* phantom */ GdkDrawable *mydrawable;
  /* phantom */ GhidViolationRenderer *renderer;
  GhidDrcViolation *violation;
  /* phantom */ int pixmap_size;
  cell_area->width += -100;
  violation = *(int*)(GhidDrcViolation*)g_type_check_instance_cast( &cell->parent.parent_instance.g_type_instance, ghid_violation_renderer_get_type( ) )/*.88*/;
  ;
}
void ghid_violation_renderer_class_init( GhidViolationRendererClass *klass )
{
  /* phantom */ GObjectClass *gobject_class;
  /* phantom */ GtkCellRendererClass *cellrenderer_class;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.24*/ = ghid_violation_renderer_finalize;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.12*/ = ghid_violation_renderer_set_property;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 )/*.16*/ = ghid_violation_renderer_get_property;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, gtk_cell_renderer_get_type( ) )/*.80*/ = ghid_violation_renderer_get_size;
  *(int*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, gtk_cell_renderer_get_type( ) )/*.84*/ = ghid_violation_renderer_render;
  ghid_violation_renderer_parent_class = g_type_class_peek_parent( &klass );
  g_object_class_install_property( (GObjectClass*)g_type_check_class_cast( &klass->parent_class.parent_class.parent_class.parent_class.g_type_class, 80 ), 1, g_param_spec_object( "violation", "", "", ghid_drc_violation_get_type( ), 2 ) );
  return;
}
GType ghid_violation_renderer_get_type( void )
{
  static GType ghid_violation_renderer_type;
  if ( ghid_violation_renderer_type == 0 )
  {
    static GTypeInfo ghid_violation_renderer_info = { 132, 0, 0, 0, 0, 0, 0, 92, 0, 0 }
;
    ghid_violation_renderer_type = g_type_register_static( gtk_cell_renderer_text_get_type( ), "GhidViolationRenderer", &ghid_violation_renderer_info.class_size, 0 );
    return g_type_register_static( gtk_cell_renderer_text_get_type( ), "GhidViolationRenderer", &ghid_violation_renderer_info.class_size, 0 );
  }
  return ghid_violation_renderer_type;
}
GtkCellRenderer *ghid_violation_renderer_new( void )
{
  /* phantom */ GhidViolationRenderer *renderer;
  return g_type_check_instance_cast( g_object_new( ghid_violation_renderer_get_type( ), "ypad", (long long)6 ), gtk_cell_renderer_get_type( ) );
}
void ghid_drc_window_show( gboolean raise )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  GtkWidget *vbox, *hbox, *button, *scrolled_window;
  GtkCellRenderer *violation_renderer;
  if ( drc_window )
  {
    if ( raise )
    {
      raise = g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) );
    }
    return;
  }
  else
  {
    drc_window = gtk_window_new( 0 );
    g_signal_connect_data( g_type_check_instance_cast( &drc_window[0].object.parent_instance.g_type_instance, 80 ), "destroy", &drc_destroy_cb, 0, 0, 0 );
    g_signal_connect_data( g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, 80 ), "configure_event", &drc_window_configure_event_cb, 0, 0, 0 );
    gtk_window_set_title( (GtkWindow*)g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), dcgettext( "pcb", "PCB DRC", 5 ) );
    gtk_window_set_wmclass( (GtkWindow*)g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), "PCB_DRC", "PCB" );
    gtk_window_set_default_size( (GtkWindow*)g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, gtk_window_get_type( ) ), ghidgui->drc_window_width, ghidgui->drc_window_height );
    vbox = gtk_vbox_new( 0, 0 );
    gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, gtk_container_get_type( ) ), vbox );
    gtk_container_set_border_width( (GtkContainer*)g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), 6 );
    gtk_box_set_spacing( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), 6 );
    drc_list_model = gtk_list_store_new( 2, 24, 80 );
    scrolled_window = gtk_scrolled_window_new( 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), scrolled_window, 1, 1, 0 );
    gtk_scrolled_window_set_policy( g_type_check_instance_cast( &scrolled_window[0].object.parent_instance.g_type_instance, gtk_scrolled_window_get_type( ) ), 1, 1 );
    drc_list = gtk_tree_view_new_with_model( (GtkTreeModel*)g_type_check_instance_cast( &drc_list_model->parent.g_type_instance, gtk_tree_model_get_type( ) ) );
    gtk_container_add( (GtkContainer*)g_type_check_instance_cast( &scrolled_window[0].object.parent_instance.g_type_instance, gtk_container_get_type( ) ), drc_list );
    gtk_tree_view_set_rules_hint( (GtkTreeView*)g_type_check_instance_cast( &drc_list->object.parent_instance.g_type_instance, gtk_tree_view_get_type( ) ), 1 );
    g_signal_connect_data( gtk_tree_view_get_selection( (GtkTreeView*)g_type_check_instance_cast( &drc_list->object.parent_instance.g_type_instance, gtk_tree_view_get_type( ) ) ), "changed", &selection_changed_cb, 0, 0, 0 );
    g_signal_connect_data( &drc_list, "row-activated", &row_activated_cb, 0, 0, 0 );
    gtk_tree_view_insert_column_with_attributes( (GtkTreeView*)g_type_check_instance_cast( &drc_list->object.parent_instance.g_type_instance, gtk_tree_view_get_type( ) ), -1, dcgettext( "pcb", "No.", 5 ), gtk_cell_renderer_text_new( ), (long long)( "text" ), 0 );
    gtk_tree_view_insert_column_with_attributes( (GtkTreeView*)g_type_check_instance_cast( &drc_list->object.parent_instance.g_type_instance, gtk_tree_view_get_type( ) ), -1, dcgettext( "pcb", "Violation details", 5 ), ghid_violation_renderer_new( ), "violation", (long long)1 );
    hbox = gtk_hbutton_box_new( );
    gtk_button_box_set_layout( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_button_box_get_type( ) ), 4 );
    gtk_box_pack_start( g_type_check_instance_cast( &vbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), hbox, 0, 0, 0 );
    gtk_box_set_spacing( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), 6 );
    g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-refresh" ), 80 ), "clicked", &drc_refresh_cb, 0, 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
    button = gtk_button_new_from_stock( "gtk-close" );
    g_signal_connect_data( g_type_check_instance_cast( (GTypeInstance*)gtk_button_new_from_stock( "gtk-close" ), 80 ), "clicked", &drc_close_cb, 0, 0, 0 );
    gtk_box_pack_start( g_type_check_instance_cast( &hbox[0].object.parent_instance.g_type_instance, gtk_box_get_type( ) ), button, 1, 1, 0 );
    gtk_widget_realize( drc_window );
    if ( Settings.AutoPlace )
    {
      gtk_widget_set_uposition( (GtkWidget*)g_type_check_instance_cast( &drc_window->object.parent_instance.g_type_instance, gtk_widget_get_type( ) ), 10, 10 );
    }
    raise = drc_window;
  }
}
void ghid_drc_window_append_violation( DrcViolationType *violation )
{
  GhidDrcViolation *violation_obj;
  GtkTreeIter iter;
  ghid_drc_window_show( ebp_56 );
  num_violations++;
  violation_obj = ghid_drc_violation_new( violation, 0 );
  gtk_list_store_append( drc_list_model, &iter );
  gtk_list_store_set( drc_list_model, &iter, 0, num_violations, 1, violation_obj, -1 );
  g_object_unref( &violation_obj );
  return;
}
void ghid_drc_window_reset_message( void )
{
  if ( drc_list_model )
  {
    gtk_list_store_clear( drc_list_model );
  }
  num_violations = 0;
  return;
}
int ghid_drc_window_throw_dialog( void )
{
  ghid_drc_window_show( 1 );
  return 1;
}
#if 0
#endif
