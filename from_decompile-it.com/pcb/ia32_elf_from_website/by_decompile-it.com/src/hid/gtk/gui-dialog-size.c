#include "gui-dialog-size.c.h"
static SizesDialog route_sizes;
void via_hole_cb( GtkWidget *widget, SizesDialog *sd )
{
  double fp0;
  double fp1;
  gdouble via_hole_size;
  gdouble via_size;
  gtk_spin_button_get_value( (GtkSpinButton*)g_type_check_instance_cast( &widget->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) );
  via_hole_size = 0.000000000000;
  gtk_spin_button_get_value( (GtkSpinButton*)g_type_check_instance_cast( &sd->via_size_spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) );
  if ( 0.000000000000 < via_hole_size + fp0 )
  {
    gtk_spin_button_set_value( (GtkSpinButton*)g_type_check_instance_cast( &sd->via_size_spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ), ( Settings.grid_units_mm & 255 ? 0.101600000000 : 4.000000000000 ) + via_hole_size );
  }
  return;
}
void via_size_cb( GtkWidget *widget, SizesDialog *sd )
{
  double fp0;
  double fp1;
  gdouble via_hole_size;
  gdouble via_size;
  gtk_spin_button_get_value( (GtkSpinButton*)g_type_check_instance_cast( &widget->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) );
  via_size = 0.000000000000;
  gtk_spin_button_get_value( (GtkSpinButton*)g_type_check_instance_cast( &sd->via_hole_spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) );
  if ( via_size - fp0 < 0.000000000000 )
  {
    gtk_spin_button_set_value( (GtkSpinButton*)g_type_check_instance_cast( &sd->via_hole_spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ), via_size - ( g_type_check_instance_cast( &sd->via_hole_spin_button->object.parent_instance.g_type_instance, gtk_spin_button_get_type( ) ) & 255 ? 0.101600000000 : 4.000000000000 ) );
  }
  return;
}
void use_temp_cb( GtkWidget *button, gpointer data )
{
  int eax;
  int ebx;
  int esi;
  /* phantom */ gint which;
  gboolean active;
  if ( active )
  {
    if ( data == 1 )
    {
    }
    else
    if ( data == 2 )
    {
    }
    data = 0;
    button = (GtkWidget*)g_type_check_instance_cast( &route_sizes.set_temp2_button->object.parent_instance.g_type_instance, ebp_20 );
  }
  return;
}
void ghid_route_style_dialog( gint index, RouteStyleType *temp_rst )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp6;
#error unstructured control flow
}
#if 0
#endif
