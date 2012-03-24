#include "nelma.c.h"
static struct color_struct *black;
static struct color_struct *white;
static int linewidth = -1;
static int lastgroup = -1;
static gdImagePtr lastbrush = 0;
static int lastcap = -1;
static int lastcolor = -1;
static gdImagePtr nelma_im;
static FILE *nelma_f;
static int is_mask;
static int is_drill;
static int nelma_export_group[16];
static int nelma_cur_group;
static char *nelma_basename;
static int nelma_dpi = -1;
static int nelma_copperh = -1;
static int nelma_substrateh = -1;
static double nelma_substratee = -1.000000000000;
HID_Attribute nelma_attribute_list[5] = { { "basename", "File name prefix", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "dpi", "Horizontal scale factor (grid points/inch).", 1, 0, 1000, { 100, 0, 0.000000000000 }
, 0, 0, 0 }
, { "copper-height", "Copper layer height (um).", 1, 0, 200, { 100, 0, 0.000000000000 }
, 0, 0, 0 }
, { "substrate-height", "Substrate layer height (um).", 1, 0, 10000, { 2000, 0, 0.000000000000 }
, 0, 0, 0 }
, { "substrate-epsilon", "Substrate relative epsilon.", 2, 0, 100, { 0, 0, 4.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val nelma_values[5];
HID nelma_hid = { 208, "nelma", "Numerical analysis package export.", '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
void register_nelma_attribute_list( void )
{
  hid_register_attributes( nelma_attribute_list, 5 );
  return;
}
char *nelma_get_png_name( char *basename, char *suffix )
{
  int ebx;
  int esi;
  int edi;
  /* phantom */ char *buf;
  /* phantom */ int len;
  __sprintf_chk( (char*)calloc( 1, strlen( ebp_56 ) + eax + 6 ), 1, -1, "%s.%s.png", basename, suffix );
  return *ebp_56;
}
void nelma_write_material( FILE *out, char *name, char *type, double e )
{
  __fprintf_chk( out, 1, "material %s {\n", name );
  __fprintf_chk( out, 1, "\ttype = \"%s\"\n", type );
  __fprintf_chk( out, 1, "\tpermittivity = %e\n", e );
  __fprintf_chk( out, 1, "\tconductivity = 0.0\n" );
  __fprintf_chk( out, 1, "\tpermeability = 0.0\n" );
  __fprintf_chk( out, 1, "}\n" );
  return;
}
void nelma_write_layer( FILE *out, int z, int h, char *name, int full, char *mat )
{
  int edx;
  /* phantom */ LibraryType netlist;
  LibraryMenuTypePtr net;
  /* phantom */ LibraryEntryTypePtr pin;
  int n, m;
  __fprintf_chk( out, 1, "layer %s {\n", name );
  __fprintf_chk( out, 1, "\theight = %d\n", h );
  *ebp_88 = out;
  __fprintf_chk( out, 1, "\tz-order = %d\n", z );
  __fprintf_chk( out, 1, "\tmaterial = \"%s\"\n", mat );
  if ( full )
  {
    __fprintf_chk( out, 1, "\tobjects = {\n" );
    if ( PCB->NetlistLib.MenuN )
    {
      n = 0;
      do
      {
        net = PCB->NetlistLib.Menu + ( net * 28 );
        if ( net->EntryN )
        {
          m = 0;
          do
          {
            if ( m || n )
            {
              __fprintf_chk( out, 1, ",\n" );
            }
            __fprintf_chk( out, 1, "\t\t\"%s-%s\"", &z, name );
            m++;
          }
          while ( net->EntryN <= m );
        }
        n++;
      }
      while ( PCB->NetlistLib.MenuN <= n );
    }
    __fprintf_chk( out, 1, "\n\t}\n" );
  }
  mat = "}\n";
  full = 1;
  name = (char*)out;
}
void nelma_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  hid_register_attributes( nelma_attribute_list, 5 );
  argv = argv;
  argc = argc;
}
HID_Attribute *nelma_get_export_options( int *n )
{
  int eax;
  static char *last_made_filename;
  if ( PCB )
    derive_default_filename( &PCB->Filename, nelma_attribute_list, ".nelma", &last_made_filename );
  if ( n )
  {
    n[0] = 5;
  }
  return nelma_attribute_list;
}
void nelma_choose_groups( void )
{
  int ecx;
  int n, m;
  /* phantom */ LayerType *layer;
  mymemset( nelma_export_group, 0, 64 );
  if ( PCB->Data->LayerN > 0 )
  {
    n = 0;
    do
    {
      if ( PCB->Data->Layer->LineN == 0 && *(int*)(*(int*)(ecx + 8716) + ( n * 92 ) + 84) == 0 && *(int*)(*(int*)(ecx + 8716) + ( n * 92 ) + 92) == 0 )
      {
        if ( *(int*)(*(int*)(ecx + 8716) + ( n * 92 ) + 88) )
        {
        }
        else
        {
          n++;
        }
      }
      nelma_export_group[ m ] = 1;
    }
    while ( n + 1 < PCB->Data->LayerN );
  }
  return;
}
void nelma_start_png_export( void )
{
  int eax;
  BoxType region;
  region.X1 = 0;
  region.Y1 = 0;
  lastbrush = -1;
  region.X2 = PCB->MaxWidth;
  linewidth = -1;
  region.Y2 = PCB->MaxHeight;
  lastcap = -1;
  lastcolor = -1;
  lastgroup = -1;
  hid_expose_callback( &nelma_hid, &region, 0 );
  return;
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void nelma_do_export( HID_Attr_Val *options )
{
  int eax;
  int ecx;
  int edx;
  int ebp_252;
  int ebp_244;
  int ebp_236;
  int save_ons[18];
  int i, idx;
  FILE *nelma_config;
  /* phantom */ char *buf;
  /* phantom */ int len;
  time_t t;
  if ( options == 0 )
  {
    nelma_get_export_options( 0 );
    do
    {
      memcpy( &nelma_values[ ( 0 + 16 ) >> 4 ].int_value, &nelma_attribute_list[1].default_val.int_value, 4 * 4 );
    }
    while ( 1 );
    options = nelma_values;
  }
  nelma_basename = options->str_value != 0 ? "pcb-out" : options->str_value;
  nelma_dpi = options[1].int_value;
  if ( options[1].int_value >= 0 )
  {
    i = 0;
    nelma_substratee = options[4].real_value;
    nelma_copperh = options[2].int_value;
    nelma_substrateh = options[3].int_value;
    nelma_choose_groups( );
    do
    {
      if ( nelma_export_group[ i ] )
      {
        idx = i;
        nelma_cur_group = i;
        nelma_im = gdImageCreate( ( PCB->MaxWidth * nelma_dpi ) / 0, ( PCB->MaxHeight * nelma_dpi ) / 0 );
        nelma_f = (FILE*)fopen( nelma_get_png_name( nelma_basename, layer_type_to_file_name( idx ) ), "wb" );
        *(int*)calloc( 1, 16 )/*.12*/ = 255;
        *(int*)calloc( 1, 16 )/*.8*/ = 255;
        *(int*)calloc( 1, 16 )/*.4*/ = 255;
        white.c = calloc( 1, 16 );
        white.c = gdImageColorAllocate( nelma_im, 255, 255, 255 );
        *(int*)calloc( 1, 16 )/*.12*/ = 0;
        *(int*)calloc( 1, 16 )/*.8*/ = 0;
        *(int*)calloc( 1, 16 )/*.4*/ = 0;
        black.c = calloc( 1, 16 );
        black.c = gdImageColorAllocate( nelma_im, 0, 0, 0 );
        free( nelma_get_png_name( nelma_basename, layer_type_to_file_name( idx ) ) );
        hid_save_and_show_layer_ons( save_ons );
        nelma_start_png_export( );
        hid_restore_layer_ons( save_ons );
        gdImagePng( nelma_im, nelma_f );
        gdImageDestroy( nelma_im );
        fclose( nelma_f );
        free( &white.c );
        free( &black.c );
        nelma_im = 0;
        nelma_f = 0;
      }
      i++;
    }
    while ( i + 1 != 16 );
    __sprintf_chk( (char*)calloc( 1, ~strlen( nelma_basename ) + 3 ), 1, -1, "%s.em" );
    nelma_config = (FILE*)fopen( *ebp_344, "w" );
    free( *ebp_344 );
    __fprintf_chk( nelma_config, 1, "/* Made with PCB Nelma export HID */" );
    t = time( 0 );
    __fprintf_chk( nelma_config, 1, "/* %s */", ctime( &t ) );
    __fprintf_chk( nelma_config, 1, "\n/* **** Nets **** */\n\n" );
    if ( PCB->NetlistLib.MenuN )
    {
      ebp_252 = 0;
      do
      {
        ebp_244 = PCB->NetlistLib.Menu + ( ebp_252 * 28 );
        __fprintf_chk( nelma_config, 1, "net %s {\n", PCB->NetlistLib.Menu->Name[0] + 2 );
        __fprintf_chk( nelma_config, 1, "\tobjects = {\n" );
        if ( *(int*)(ebp_244 + 12) )
        {
          ebp_236 = 0;
          do
          {
            nelma_config = nelma_config;
            do
            {
              if ( nelma_export_group[ 0 + 1 ] )
              {
                if ( ( 0 + 1 ) || ebp_236 )
                  __fprintf_chk( nelma_config, 1, ",\n" );
                __fprintf_chk( nelma_config, 1, "\t\t\"%s-%s\"", *(int*)(*(int*)(ebp_244 + 20) + ( ebp_236 * 24 )), 0 );
              }
            }
            while ( 0 + 1 + 1 != 16 );
            ebp_236++;
          }
          while ( *(int*)(ebp_244 + 12) <= ebp_236 );
        }
        __fprintf_chk( nelma_config, 1, "\n" );
        __fprintf_chk( nelma_config, 1, "\t}\n" );
        __fprintf_chk( nelma_config, 1, "}\n" );
        ebp_252++;
      }
      while ( ebp_252 < PCB->NetlistLib.MenuN );
      nelma_config = nelma_config;
    }
    __fprintf_chk( nelma_config, 1, "\n/* **** Objects **** */\n\n" );
    if ( PCB->NetlistLib.MenuN )
    {
      ebp_252 = 0;
      do
      {
        if ( PCB->NetlistLib.Menu->EntryN )
        {
          ebp_244 = 0;
          do
          {
            do
            {
              if ( nelma_export_group[ 0 ] )
              {
                __fprintf_chk( nelma_config, 1, "object %s-%s {\n", &edi, &eax );
                __fprintf_chk( nelma_config, 1, "\tposition = { 0, 0 }\n" );
                __fprintf_chk( nelma_config, 1, "\tmaterial = \"copper\"\n" );
                __fprintf_chk( nelma_config, 1, "\ttype = \"image\"\n" );
                __fprintf_chk( nelma_config, 1, "\trole = \"net\"\n" );
                __fprintf_chk( nelma_config, 1, "\tfile = \"%s\"\n", &eax );
                free( ebp_264 );
                __fprintf_chk( nelma_config, 1, "\tfile-pos = { %d, %d }\n", 0, ebp_236 );
                __fprintf_chk( nelma_config, 1, "}\n" );
              }
            }
            while ( 0 + 1 + 1 != 16 );
            ebp_244++;
          }
          while ( *(int*)(ebp_248 + 12) <= ebp_244 );
        }
        ebp_252++;
      }
      while ( ebp_252 < PCB->NetlistLib.MenuN );
    }
    ebp_244 = nelma_substrateh / nelma_copperh;
    __fprintf_chk( nelma_config, 1, "\n/* **** Layers **** */\n\n" );
    nelma_write_layer( nelma_config, 1, ebp_244 * 2, "air-top", 0, "air" );
    nelma_write_layer( nelma_config, 1000, ebp_244 * 2, "air-bottom", 0, "air" );
    while ( 1 )
    {
      if ( nelma_export_group[ 0 ] )
      {
        if ( nelma_config != 10 )
        {
          __sprintf_chk( ebp_128, 1, 100, "substrate-%d", nelma_config );
          nelma_write_layer( nelma_config, nelma_config, ebp_244, ebp_128, 0, "composite" );
        }
        nelma_write_layer( nelma_config, &nelma_config->_flags, 1, ebp_236, 1, "air" );
      }
      if ( 0 + 1 + 1 == 16 )
        break;
      else
      {
      }
    }
    nelma_config = nelma_config;
    __fprintf_chk( nelma_config, 1, "\n/* **** Materials **** */\n\n" );
    nelma_write_material( nelma_config, "copper", "metal", 0.000000000009 );
    nelma_write_material( nelma_config, "air", "dielectric", 0.000000000009 );
    nelma_write_material( nelma_config, "composite", "dielectric", 0.000000000009 * nelma_substratee );
    __fprintf_chk( nelma_config, 1, "\n/* **** Space **** */\n\n" );
    __fprintf_chk( nelma_config, 1, "space pcb {\n" );
    __fprintf_chk( nelma_config, 1, "\tstep = { %e, %e, %e }\n", 0.025400000000 / (double)( nelma_dpi ), 0.025400000000 / (double)( nelma_dpi ), (double)( nelma_copperh ) * 0.000001000000 );
    __fprintf_chk( nelma_config, 1, "\tlayers = {\n" );
    __fprintf_chk( nelma_config, 1, "\t\t\"air-top\",\n" );
    __fprintf_chk( nelma_config, 1, "\t\t\"air-bottom\"" );
    do
    {
      if ( nelma_export_group[ 0 + 1 ] )
      {
        if ( 11 != 10 )
        {
          __fprintf_chk( nelma_config, 1, ",\n" );
          __fprintf_chk( nelma_config, 1, "\t\t\"substrate-%d\"", 11 + 2 );
        }
        else
        {
        }
        __fprintf_chk( nelma_config, 1, ",\n" );
        __fprintf_chk( nelma_config, 1, "\t\t\"%s\"", ebp_236 );
      }
    }
    while ( 0 + 1 + 1 != 16 );
    __fprintf_chk( nelma_config, 1, "\n\t}\n" );
    __fprintf_chk( nelma_config, 1, "}\n" );
    fclose( nelma_config );
  }
  else
    __fprintf_chk( stderr, 1, "ERROR:  dpi may not be &lt; 0\n" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
int nelma_set_layer( char *name, int group, int empty )
{
  int eax;
  int esi;
  int idx;
  if ( group >= 0 && group < PCB->Data->LayerN )
  {
    idx = PCB->Font.Symbol[255].Delta;
    if ( name == 0 )
      goto B5;
    else
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "invisible", *(int*)(0) );
      if ( (unsigned char)( ccdep2 < ccdep1 ) )
      {
        if ( idx >= 0 )
        {
          is_drill = 0;
          is_mask = 0;
        }
        else
        {
          if ( ( idx & 240 ) != 64 && ( idx & 240 ) != 48 )
            is_drill = 0;
          else
            is_drill = 1;
          if ( ( idx & 240 ) == 32 )
          {
            is_mask = 1;
          }
          is_mask = 0;
          if ( 0 )
          {
          }
        }
        return nelma_cur_group == group;
      }
    }
  }
  else
  {
    idx = group;
    if ( name == 0 )
      goto B5;
  }
B5:;
  name[0] = PCB->Data->Layer[ idx ].Name;
}
hidGC nelma_make_gc( void )
{
  /* phantom */ hidGC rv;
  *(int*)(calloc( 1, 32 )) = nelma_hid;
  *(int*)calloc( 1, 32 )/*.4*/ = 0;
  *(int*)calloc( 1, 32 )/*.8*/ = 1;
  *(int*)calloc( 1, 16 )/*.12*/ = 0;
  *(int*)calloc( 1, 16 )/*.8*/ = 0;
  *(int*)calloc( 1, 16 )/*.4*/ = 0;
  *(int*)(calloc( 1, 16 )) = 0;
  *(int*)calloc( 1, 32 )/*.24*/ = calloc( 1, 16 );
  return calloc( 1, 32 );
}
void nelma_destroy_gc( hidGC gc )
{
}
void nelma_use_mask( int use_it )
{
  return;
}
void nelma_set_color( hidGC gc, char *name )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  if ( nelma_im )
  {
    if ( name )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "drill", name );
      if ( !1 )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "erase", name );
        if ( 1 )
        {
          gc->erase = 1;
          gc->color = white.c;
        }
      }
    }
    gc->erase = 0;
    gc->color = black.c;
  }
  return;
}
void nelma_set_line_cap( hidGC gc, EndCapStyle style )
{
  gc->cap = style;
  return;
}
void nelma_set_line_width( hidGC gc, int width )
{
  gc->width = width;
  return;
}
void nelma_set_draw_xor( hidGC gc, int xor )
{
  return;
}
void nelma_set_draw_faded( hidGC gc, int faded )
{
  gc->faded = faded;
  return;
}
void nelma_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented PNG function %s.\n", __FUNCTION__ );
  abort( );
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void use_gc( hidGC gc )
{
  /* phantom */ int need_brush;
  gc = 0;
  if ( gc->me_pointer->struct_size != nelma_hid.struct_size )
  {
    __fprintf_chk( stderr, 1, "Fatal: GC from another HID passed to nelma HID\n" );
    abort( );
  }
  if ( gc->width != linewidth )
  {
Missing divisor:  0x14f8b589(13)
    gdImageSetThickness( nelma_im, ( nelma_dpi * gc->width ) / 0 );
    linewidth = gc->width;
  }
  else
  if ( gc->brush == lastbrush )
  {
    if ( lastcolor != ( gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 ) ) )
    {
      if ( is_drill || is_mask )
        lastcolor = 0;
      else
      {
        /* phantom */ double r, g, b;
        lastcolor = gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 );
      }
    }
    if ( gc ^ 0 )
    {
      __stack_chk_fail( );
    }
    return;
  }
{
  static void *bcache;
  hidval bval;
  char name[256];
  char type;
  int r;
  if ( gc->cap && gc->cap != 2 )
Missing divisor:  0x14f8b589(13)
  {
Missing divisor:  0x14f8b589(13)
    type = 'S';
    r = ( gc->width * nelma_dpi ) / 0;
  }
  else
Missing divisor:  0x14f8b589(13)
  {
Missing divisor:  0x14f8b589(13)
    type = 'C';
    r = ( nelma_dpi * ( gc->width / 2 ) ) / 0;
  }
  __sprintf_chk( name, 1, 256, "#%.2x%.2x%.2x_%c_%d", gc->color->r, gc->color->g, gc->color->b, edx, r );
  if ( hid_cache_color( 0, name, &bval, &bcache ) )
    gc->brush = bval.lval;
  else
  {
    int bg, fg;
    if ( type == 'C' )
    {
      gc->brush = gdImageCreate( ( r * 2 ) + 1, ( r * 2 ) + 1 );
    }
    else
    {
      gc->brush = gdImageCreate( r + 1, r + 1 );
    }
    bg = gdImageColorAllocate( gc + 28, 255, 255, 255 );
    gdImageColorTransparent( &gc->brush, gdImageColorAllocate( &gc->brush, gc->color->r, gc->color->g, gc->color->b ) );
    if ( r == 0 )
    {
    }
    else
    if ( type == 'C' )
      gdImageFilledEllipse( &gc->brush, r, r, r * 2, r * 2, gdImageColorAllocate( &gc->brush, gc->color->r, gc->color->g, gc->color->b ) );
      bval.lval = gc->brush;
      hid_cache_color( 1, name, &bval, &bcache );
    else
    {
    }
    gdImageFilledRectangle( &gc->brush, 0, 0, ebp_348, ebp_348, ebp_344 );
    bval.lval = gc->brush;
    hid_cache_color( 1, name, &bval, &bcache );
  }
  gdImageSetBrush( nelma_im, &bval.lval );
  lastbrush = &gc->brush;
}
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void nelma_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
  use_gc( gc );
  gdImageRectangle( nelma_im, ( x1 * nelma_dpi ) / 0, ( y1 * nelma_dpi ) / 0, ( x2 * nelma_dpi ) / 0, ( y2 * nelma_dpi ) / 0, gc->color->c );
  return;
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void nelma_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
  use_gc( gc );
  gdImageSetThickness( nelma_im, 0 );
  linewidth = 0;
  gdImageFilledRectangle( nelma_im, ( x1 * nelma_dpi ) / 0, ( y1 * nelma_dpi ) / 0, ( x2 * nelma_dpi ) / 0, ( y2 * nelma_dpi ) / 0, gc->color->c );
  return;
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void nelma_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  if ( y2 == y1 && x2 == x1 )
  {
    /* phantom */ int w;
    y2 = y1 + ( gc->width / 2 );
    y1 -= gc->width / 2;
    x1 -= gc->width / 2;
    x2 = x1 + ( gc->width / 2 );
  }
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
  use_gc( gc );
  gdImageSetThickness( nelma_im, 0 );
  linewidth = 0;
  gdImageLine( nelma_im, ( nelma_dpi * x1 ) / 0, ( nelma_dpi * y1 ) / 0, ( nelma_dpi * x2 ) / 0, ( y2 * nelma_dpi ) / 0, -3 );
  return;
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void nelma_draw_arc( hidGC gc, int cx, int cy, int width, int height, int start_angle, int delta_angle )
{
  int eax;
  int edx;
#error unstructured control flow
}
void nelma_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  use_gc( gc );
  gdImageSetThickness( nelma_im, 0 );
  linewidth = 0;
  gdImageFilledEllipse( nelma_im, ( (/*HI*/int)( ( nelma_dpi * cx ) * 0x14f8b589 ) >> 13 ) - ( ( nelma_dpi * cx ) >> 31 ), ( (/*HI*/int)( ( nelma_dpi * cy ) * 0x14f8b589 ) >> 13 ) - ( ( nelma_dpi * cy ) >> 31 ), ( (/*HI*/int)( ( radius * ( nelma_dpi * 2 ) ) * 0x14f8b589 ) >> 13 ) - ( ( radius * ( nelma_dpi * 2 ) ) >> 31 ), ( (/*HI*/int)( ( radius * ( nelma_dpi * 2 ) ) * 0x14f8b589 ) >> 13 ) - ( ( radius * ( nelma_dpi * 2 ) ) >> 31 ), gc->color->c );
  return;
}
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
void nelma_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  int eax;
  int i;
  /* phantom */ gdPoint *points;
  if ( calloc( 1, n_coords << 3 ) == 0 )
  {
    __fprintf_chk( stderr, 1, "ERROR:  nelma_fill_polygon():  malloc failed\n" );
    exit( 1 );
  }
  use_gc( gc );
  if ( n_coords > 0 )
  {
    i = 0;
    do
    {
Missing divisor:  0x14f8b589(13)
Missing divisor:  0x14f8b589(13)
      i++;
    }
    while ( n_coords != i + 1 );
  }
  gdImageSetThickness( nelma_im, 0 );
  linewidth = 0;
  gdImageFilledPolygon( nelma_im, calloc( 1, n_coords << 3 ), n_coords, gc->color->c );
  gc = (struct hid_gc_struct*)calloc( 1, n_coords << 3 );
}
void nelma_calibrate( double xval, double yval )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented PNG function %s.\n", __FUNCTION__ );
  abort( );
}
void nelma_set_crosshair( int x, int y, int a )
{
  return;
}
void hid_nelma_init( void )
{
  apply_default_hid( &nelma_hid, 0 );
  hid_register_hid( &nelma_hid );
}
#if 0
#endif
