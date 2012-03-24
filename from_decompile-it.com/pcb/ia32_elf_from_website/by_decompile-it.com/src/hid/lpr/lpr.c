#include "lpr.c.h"
static HID_Attribute base_lpr_options[1] = { { "lprcommand", "Command to print", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static HID_Attribute *lpr_options;
static int num_lpr_options;
static HID_Attr_Val *lpr_values;
HID lpr_hid = { 208, "lpr", "Postscript print.", '\n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
HID_Attribute *lpr_get_export_options( int *n )
{
  int eax;
  int ebx;
  int esi;
  if ( base_lpr_options->default_val.str_value == 0 )
  {
    /* phantom */ size_t __len;
    /* phantom */ char *__retval;
    if ( calloc( 1, 4 ) == 0 )
      goto B10;
    else
      *(int*)(calloc( 1, 4 )) = 0x72706c;
B10:;
    base_lpr_options->default_val.str_value = (char*)calloc( 1, 4 );
  }
  if ( lpr_options == 0 )
  {
    HID_Attribute *ps_opts = ps_hid.get_export_options( &num_lpr_options );
    lpr_options = calloc( num_lpr_options, sizeof( HID_Attribute ) );
    memcpy( lpr_options, ps_opts, num_lpr_options * 48 );
    lpr_options->name[0] = base_lpr_options[0].name;
    lpr_options->help_text = base_lpr_options->help_text;
    lpr_options->type = base_lpr_options->type;
    lpr_options->min_val = base_lpr_options->min_val;
    lpr_options->max_val = base_lpr_options->max_val;
    lpr_options->default_val.int_value = base_lpr_options->default_val.int_value;
    lpr_options->default_val.str_value = base_lpr_options->default_val.str_value;
    lpr_options->default_val.real_value & 0xFFFFFFFF = (base_lpr_options->default_val.real_value & 0xFFFFFFFF);
    lpr_options->default_val.real_value << 32 = (base_lpr_options->default_val.real_value << 32);
    lpr_options->enumerations = base_lpr_options->enumerations;
    lpr_options->value = base_lpr_options->value;
    lpr_options->hash = base_lpr_options->hash;
    lpr_values = calloc( num_lpr_options, sizeof( HID_Attr_Val ) );
  }
  if ( n )
  {
    n[0] = num_lpr_options;
  }
  return lpr_options;
}
void lpr_do_export( HID_Attr_Val *options )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  FILE *f;
  int i;
  char *filename;
  if ( options == 0 )
  {
    lpr_get_export_options( 0 );
    if ( num_lpr_options > 0 )
    {
      options = lpr_values;
      i = 0;
      do
      {
        lpr_values->int_value = lpr_options->default_val.int_value;
        i++;
        lpr_values->str_value = lpr_options->default_val.str_value;
        lpr_values->real_value & 0xFFFFFFFF = lpr_options->default_val.real_value & 0xFFFFFFFF;
        lpr_options->name[0] = lpr_options + 48;
        lpr_values->real_value << 32 = lpr_options[1].default_val.real_value << 32;
        lpr_values->int_value = lpr_values + 16;
      }
      while ( num_lpr_options != i + 1 );
    }
    else
      options = lpr_values;
  }
  filename[0] = options->str_value;
  __printf_chk( 1, "LPR: open %s\n", options->str_value );
  if ( popen( filename, "w" ) == 0 )
  {
    options = &filename[0];
  }
  ps_start_file( (FILE*)popen( filename, "w" ) );
  ps_hid_export_to_file( f, options );
  options = &f[0]._flags;
}
void lpr_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  lpr_get_export_options( 0 );
  hid_register_attributes( lpr_options, num_lpr_options );
  argv = argv;
  argc = argc;
}
void lpr_calibrate( double xval, double yval )
{
  ps_calibrate_1( xval, yval, 1 );
  return;
}
void hid_lpr_init( void )
{
  apply_default_hid( &lpr_hid, &ps_hid );
  apply_default_hid( &lpr_hid, 0 );
  hid_register_hid( &lpr_hid );
  return;
}
#if 0
#endif
