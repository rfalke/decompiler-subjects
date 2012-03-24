#include "png.c.h"
static void *color_cache;
static void *brush_cache;
static double bloat;
static double scale = 1.000000000000;
static int x_shift;
static int y_shift;
static color_struct *black;
static color_struct *white;
static gdImagePtr im;
static gdImagePtr master_im;
static FILE *f;
static int linewidth = -1;
static int lastgroup = -1;
static gdImagePtr lastbrush = 0;
static int lastcap = -1;
static int lastcolor = -1;
static int print_group[16];
static int print_layer[16];
static int photo_mode;
static int photo_flip;
static gdImagePtr photo_copper[18];
static gdImagePtr photo_silk;
static gdImagePtr photo_mask;
static gdImagePtr photo_drill;
static gdImagePtr *photo_im;
static gdImagePtr photo_outline;
static int photo_groups[18];
static int photo_ngroups;
static char *filetypes[4] = { "GIF", "JPEG", "PNG", 0 };
HID_Attribute png_attribute_list[17] = { { "outfile", "Graphics output file", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "dpi", "Scale factor (pixels/inch). 0 to scale to fix specified size", 1, 0, 1000, { 100, 0, 0.000000000000 }
, 0, 0, 0 }
, { "x-max", "Maximum width (pixels).  0 to not constrain.", 1, 0, 10000, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "y-max", "Maximum height (pixels).  0 to not constrain.", 1, 0, 10000, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "xy-max", "Maximum width and height (pixels).  0 to not constrain.", 1, 0, 10000, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "as-shown", "Export layers as shown on screen", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "monochrome", "Convert to monochrome", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "only-visible", "Limit the bounds of the PNG file to the visible items", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "use-alpha", "Make the background and any holes transparent", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "format", "Graphics file format", 5, 0, 0, { 2, 0, 0.000000000000 }
, &filetypes, 0, 0 }
, { "png-bloat", "Amount (in/mm/mil/pix) to add to trace/pad/pin edges (1 = 1/100 mil)", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "photo-mode", "Photo-realistic mode", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "photo-flip-x", "Show reverse side of the board, left-right flip", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "photo-flip-y", "Show reverse side of the board, up-down flip", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "ben-mode", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "ben-flip-x", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "ben-flip-y", 0, 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val png_values[17];
static int comp_layer;
static int solder_layer;
static char *filename;
static BoxType *bounds;
static int in_mono;
static int as_shown;
static int smshadows[3][3] = { { 1, 20, 1 }, { 10, 0, -10 }, { -1, -20, -1 } };
static int shadows[5][5] = { { 1, 1, 1, 1, -1 }, { 1, 1, 1, -1, -1 }, { 1, 1, 0, -1, -1 }, { 1, -1, -1, -1, -1 }, { -1, -1, -1, -1, -1 } };
static int is_mask;
static int is_drill;
HID png_hid = { 208, "png", "GIF/JPEG/PNG export.", '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
void register_png_attribute_list( void )
{
  hid_register_attributes( png_attribute_list, 17 );
  return;
}
HID_Attribute *png_get_export_options( int *n )
{
  int eax;
  int esi;
  static char *last_made_filename;
  char *suffix;
  if ( filetypes[ png_attribute_list[9].default_val.int_value ][0] != 71 || filetypes[ png_attribute_list[9].default_val.int_value ][1] != 73 || filetypes[ png_attribute_list[9].default_val.int_value ][2] != 70 || filetypes[ png_attribute_list[9].default_val.int_value ][3] )
  {
    strcmp( "JPEG", filetypes[ png_attribute_list[9].default_val.int_value ] );
    suffix = ".jpg";
    if ( (unsigned char)( ccdep2 < ccdep1 ) )
    {
      if ( filetypes[ filetypes[ png_attribute_list[9].default_val.int_value ] ][0] != 80 || filetypes[ png_attribute_list[9].default_val.int_value ][1] != 78 || filetypes[ png_attribute_list[9].default_val.int_value ][2] != 71 || filetypes[ png_attribute_list[9].default_val.int_value ][3] )
      {
        __fprintf_chk( stderr, 1, "Error:  Invalid graphic file format\n" );
        suffix = ".???";
      }
      else
        suffix = ".png";
    }
  }
  else
    suffix = ".gif";
  if ( PCB )
    derive_default_filename( &PCB->Filename, png_attribute_list, suffix, &last_made_filename );
  if ( n )
  {
    n[0] = 17;
  }
  return png_attribute_list;
}
int layer_sort( void *va, void *vb )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  int edi;
  int a = ((int*)va);
  int b = ((int*)vb);
  int al;
  int bl;
  int d;
  if ( !( ( ~((int*)va) >> 31 ) & 255 ) || PCB->Data->LayerN + 1 < a )
    al = PCB->Data->LayerN + a + 3;
  else
  {
    al = GetLayerGroupNumberByNumber( a );
    PCB->Data->LayerN = PCB->Data->LayerN + 1;
  }
  if ( b <= PCB->Data->LayerN + 1 && b >= 0 )
  {
    GetLayerGroupNumberByNumber( b );
  }
  else
    bl = bl + b + 3;
  return d == al ? d - al : b - a;
}
void png_hid_export_to_file( FILE *the_file, HID_Attr_Val *options )
{
  int eax;
  int edx;
  static int saved_layer_stack[16];
  int i;
  BoxType region;
  /* phantom */ FlagType save_flags;
  region.X1 = 0;
  region.Y1 = 0;
  f = the_file;
  region.X2 = PCB->MaxWidth;
  region.Y2 = PCB->MaxHeight;
  if ( options[7].int_value )
  {
    bounds = GetDataBoundingBox( &PCB->Data );
  }
  else
    bounds = &region;
  mymemset( print_group, 0, 64 );
  mymemset( print_layer, 0, 64 );
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
  {
    do
    {
      /* phantom */ LayerType *layer;
      if ( PCB->Data->Layer->LineN == 0 && *(int*)(*(int*)(eax + 8716) + ( i * 92 ) + 84) == 0 && *(int*)(*(int*)(eax + 8716) + ( i * 92 ) + 92) == 0 )
      {
        if ( *(int*)(*(int*)(eax + 8716) + ( i * 92 ) + 88) )
        {
        }
        else
        {
          i++;
        }
      }
      print_group[ GetLayerGroupNumberByNumber( i ) ] = 1;
    }
    while ( i + 1 < *(int*)(*(int*)GetLayerGroupNumberByNumber( i )/*.8716*/ + 24) );
  }
  }
  print_group[ eax ] = 1;
  print_group[ GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 ) ] = 1;
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
    do
    {
      if ( print_group[ GetLayerGroupNumberByNumber( i ) ] )
        print_layer[ i ] = 1;
      i++;
    }
    while ( i + 1 < PCB->Data->LayerN );
  }
  saved_layer_stack[0] = LayerStack[0];
  saved_layer_stack[1] = LayerStack[1];
  saved_layer_stack[2] = LayerStack[2];
  saved_layer_stack[3] = LayerStack[3];
  saved_layer_stack[4] = LayerStack[4];
  saved_layer_stack[5] = LayerStack[5];
  saved_layer_stack[6] = LayerStack[6];
  saved_layer_stack[7] = LayerStack[7];
  saved_layer_stack[8] = LayerStack[8];
  saved_layer_stack[9] = LayerStack[9];
  saved_layer_stack[10] = LayerStack[10];
  saved_layer_stack[11] = LayerStack[11];
  saved_layer_stack[12] = LayerStack[12];
  saved_layer_stack[13] = LayerStack[13];
  saved_layer_stack[14] = LayerStack[14];
  saved_layer_stack[15] = LayerStack[15];
  as_shown = options[5].int_value;
  if ( options[5].int_value == 0 )
  {
    comp_layer = GetLayerGroupNumberByNumber( *(int*)(*(int*)GetDataBoundingBox( &PCB->Data )/*.8716*/ + 24) + 1 );
    solder_layer = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
    qsort( LayerStack, PCB->Data->LayerN, 4, &layer_sort );
    PCB->Flags.f &= -147457;
    if ( photo_mode )
    {
      int i = comp_layer, n = 0;
      if ( comp_layer < solder_layer )
      {
        do
        {
          photo_groups[ i - i ] = comp_layer;
          i++;
        }
        while ( i + 1 <= solder_layer );
        n = solder_layer + ~i + 2;
      }
      else
      {
        do
        {
          photo_groups[ n ] = comp_layer;
          i += -1;
          n++;
        }
        while ( solder_layer <= i + -1 );
        n = ( i - solder_layer ) + 1;
      }
      photo_ngroups = n;
      if ( photo_flip && n + -1 + -1 > 0 )
      {
        i = 0;
      {
        do
        {
          int tmp;
          photo_groups[ i ] = photo_groups[ n + -1 ];
          i++;
          photo_groups[ n + -1 ] = photo_groups[ i ];
        }
        while ( i + 1 < ( n + -1 ) - ( i + 1 ) );
      }
      }
    }
  }
  linewidth = -1;
  lastbrush = -1;
  lastcap = -1;
  in_mono = options[6].int_value;
  lastcolor = -1;
  lastgroup = -1;
  hid_expose_callback( &png_hid, bounds, 0 );
  LayerStack[0] = saved_layer_stack[0];
  LayerStack[1] = saved_layer_stack[1];
  LayerStack[2] = saved_layer_stack[2];
  LayerStack[3] = saved_layer_stack[3];
  LayerStack[4] = saved_layer_stack[4];
  LayerStack[5] = saved_layer_stack[5];
  LayerStack[6] = saved_layer_stack[6];
  LayerStack[7] = saved_layer_stack[7];
  LayerStack[8] = saved_layer_stack[8];
  LayerStack[9] = saved_layer_stack[9];
  LayerStack[10] = saved_layer_stack[10];
  LayerStack[11] = saved_layer_stack[11];
  LayerStack[12] = saved_layer_stack[12];
  LayerStack[13] = saved_layer_stack[13];
  LayerStack[14] = saved_layer_stack[14];
  LayerStack[15] = saved_layer_stack[15];
  if ( options[5].int_value == 0 )
  {
    PCB->Flags.t[7] = ebp_45;
    PCB->Flags.t[6] = ebp_46;
    PCB->Flags.t[5] = ebp_47;
    PCB->Flags.t[4] = ebp_48;
    PCB->Flags.t[3] = ebp_49;
    PCB->Flags.t[2] = ebp_50;
    PCB->Flags.t[1] = ebp_51;
    PCB->Flags.t[0] = ebp_52;
    PCB->Flags.f = ebp_44;
  }
  return;
}
void ts_bs( gdImagePtr im )
{
  int x = 0, y, sx, sy, si;
  if ( ccdep2 < ccdep1 )
  {
    do
    {
      y = 0;
      if ( im->sy > 0 )
      {
        do
        {
          si = 0;
          do
          {
            im = im;
            sy = -2;
            do
            {
              if ( gdImageGetPixel( im, x + -2 + 1, y + sy ) == 0 )
                si += *(int*)(ebp_36 + shadows[2][2] + ( sy << 2 ));
              sy++;
            }
            while ( sy + 1 != 3 );
          }
          while ( ebp_36 + 20 == 60 );
          y = y;
          if ( gdImageGetPixel( im, x, y ) )
          {
            if ( si > 1 )
            {
            }
            else
            if ( si < -1 )
            {
            }
            gdImageSetPixel( im, x, y, ebp_60 );
          }
          y++;
        }
        while ( im->sy <= y + 1 );
      }
      x++;
    }
    while ( x < im->sx );
  }
  return;
}
void png_do_export( HID_Attr_Val *options )
{
  int eax;
  int ecx;
  int edx;
  double fp5;
  double fp7;
  int ebp_172;
  int ebp_168;
  int ebp_140;
  int save_ons[18];
  /* phantom */ int i;
  BoxType *bbox;
  int w, h;
  int xmax, ymax, dpi;
  char *fmt;
  if ( color_cache )
  {
    free( color_cache );
    color_cache = 0;
  }
  if ( brush_cache )
  {
    free( brush_cache );
    brush_cache = 0;
  }
  if ( options == 0 )
  {
    png_get_export_options( 0 );
    options = png_values;
    do
    {
      png_values[ 0 >> 4 ].int_value = png_attribute_list->default_val.int_value;
      *(int*)(options + 0 + 4) = &png_attribute_list->default_val.str_value[0];
      *(int*)(options + 0 + 8) = &png_attribute_list->default_val.real_value & 0xFFFFFFFF;
      png_attribute_list->default_val.int_value = png_attribute_list[1].default_val.int_value;
      *(int*)(options + 0 + 12) = &png_attribute_list[1].default_val.real_value << 32;
    }
    while ( 0 + 16 + 16 != 272 );
  }
  if ( options[11].int_value )
  {
    photo_mode = 1;
    png_values[6].int_value = 1;
    png_values[5].int_value = 0;
    mymemset( (void*)photo_copper[0], 0, 72 );
    photo_drill = 0;
    photo_mask = 0;
    photo_silk = 0;
    photo_outline = 0;
    if ( options[12].int_value )
      photo_flip = 1;
    else
      photo_flip = ~( 0 - ( ( *(int*)(options + 208) < 1 ) & 1 ) ) & 2;
  }
  else
    photo_mode = 0;
  filename = *(int*)(png_values[0].int_value + 4) != 0 ? "pcb-out.png" : png_values->str_value;
  if ( options[7].int_value )
  {
    y_shift = bbox->Y1;
    x_shift = bbox;
    w = bbox->X2 - bbox;
  }
  else
  {
    x_shift = 0;
    y_shift = 0;
    w = PCB->MaxWidth;
  }
  dpi = png_values[1].int_value;
  if ( options[1].int_value == 0 || options[1].int_value >= 0 )
  {
    xmax = options[2].int_value;
    ymax = png_values[3].int_value;
    xmax = png_values[4].int_value;
    if ( options[4].int_value > 0 )
    {
      if ( ymax == 0 || xmax < ymax )
        ymax = xmax;
    }
    else
    if ( dpi )
    {
      scale = 100000.000000000000 / (double)( dpi );
      w = (int)( (double)( w ) / ( 100000.000000000000 / (double)( dpi ) ) );
      ymax = (int)( (double)( bbox->Y2 - bbox->Y1 ) / ( 100000.000000000000 / (double)( dpi ) ) );
      im = gdImageCreate( w, ymax );
      if ( im == 0 )
        Message( "%s():  gdImageCreate(%d, %d) returned NULL.  Aborting export.\n", __FUNCTION__[0], w, ymax );
      else
      {
        master_im = im;
        bloat = 0.000000000000;
        if ( options[10].str_value )
        {
          sscanf( &options[10].str_value, "%lf %s", ebp_48, 0 );
          if ( strcasecmp( ebp_38, "in" ) == 0 )
            bloat = ebp_48 * 100000.000000000000;
          else
          {
            if ( strcasecmp( ebp_38, "mil" ) == 0 )
              bloat = ebp_48 * 100.000000000000;
            else
            {
              if ( strcasecmp( ebp_38, "mm" ) == 0 )
                bloat = ebp_48 * 3937.007874000000;
              else
              {
                if ( strcasecmp( ebp_38, "um" ) == 0 )
                  bloat = ebp_48 * 3937.007874000000 * 1000.000000000000;
                else
                {
                  if ( strcasecmp( ebp_38, "pix" ) == 0 || strcasecmp( ebp_38, "px" ) == 0 )
                    bloat = ebp_48 * scale;
                  else
                    (int)bloat = ebp_48;
                }
              }
            }
          }
        }
        *(int*)calloc( 1, 20 )/*.12*/ = 255;
        *(int*)calloc( 1, 20 )/*.8*/ = 255;
        *(int*)calloc( 1, 20 )/*.4*/ = 255;
        white = calloc( 1, sizeof( color_struct ) );
        *(int*)calloc( 1, 20 )/*.16*/ = ~( 0 - ( ( *(int*)(options + 128) < 1 ) & 1 ) ) & 127;
        white = gdImageColorAllocateAlpha( im, 255, 255, 255, ~( 0 - ( ( *(int*)(options + 128) < 1 ) & 1 ) ) & 127 );
        if ( white->c == -1 )
          Message( "%s():  gdImageColorAllocateAlpha() returned NULL.  Aborting export.\n", __FUNCTION__[0], w, ymax );
        else
        {
          *(int*)calloc( 1, 20 )/*.16*/ = 0;
          *(int*)calloc( 1, 20 )/*.12*/ = 0;
          *(int*)calloc( 1, 20 )/*.8*/ = 0;
          *(int*)calloc( 1, 20 )/*.4*/ = 0;
          black = calloc( 1, sizeof( color_struct ) );
          black = gdImageColorAllocate( im, 0, 0, 0 );
          if ( black->c == -1 )
            Message( "%s():  gdImageColorAllocateAlpha() returned NULL.  Aborting export.\n", __FUNCTION__[0] );
          else
          {
            f = (FILE*)fopen( filename, "wb" );
            if ( f == 0 )
              perror( filename );
            else
            {
              if ( png_values[5].int_value == 0 )
              {
                hid_save_and_show_layer_ons( save_ons );
              }
              png_hid_export_to_file( f, options );
              if ( options[5].int_value == 0 )
                hid_restore_layer_ons( save_ons );
              if ( photo_mode )
              {
                /* phantom */ static struct color_struct *white, *black;
                int x, y;
                /* phantom */ color_struct fr4;
                im = master_im;
                ts_bs( photo_copper[ photo_groups[0] ] );
                ts_bs( photo_silk );
                ebp_172 = 0;
                if ( photo_mask->sx > 0 )
                {
                  do
                  {
                    ebp_168 = 0;
                    if ( photo_mask->sy > 0 )
                    {
                      do
                      {
                        ebp_140 = -1;
                        do
                        {
                          ebp_140++;
                          do
                          {
                          }
                          while ( 0 + 1 + 1 == 3 );
                        }
                        while ( ebp_140 == 2 );
                        if ( gdImageGetPixel( photo_mask, ebp_172, ebp_168 ) )
                        {
                          if ( smshadows[ ebp_140 ][0] + 0 > 1 )
                            gdImageSetPixel( photo_mask, ebp_172, ebp_168, 2 );
                          else
                          if ( mask < -1 )
                            gdImageSetPixel( &transparent, ebp_172, ebp_168, 3 );
                        }
                        ebp_168++;
                      }
                      while ( ebp_168 < photo_mask->sy );
                    }
                    ebp_172++;
                  }
                  while ( photo_mask->sx <= ebp_172 );
                }
                if ( photo_outline == 0 )
                {
                }
                else
                {
                  static int black;
                  black = gdImageColorResolve( photo_outline, 0, 0, 0 );
                  if ( im->sx > 0 )
                  {
                    x = 0;
                    do
                    {
                      gdImageFillToBorder( photo_outline, x, 0, black, black );
                      gdImageFillToBorder( photo_outline, x, im->sy, black, black );
                      x++;
                    }
                    while ( im->sx <= x );
                  }
                  if ( im->sy > 2 )
                  {
                    y = 1;
                    do
                    {
                      gdImageFillToBorder( photo_outline, 0, y, black, black );
                      y++;
                      gdImageFillToBorder( photo_outline, im->sx, y, black, black );
                    }
                    while ( im->sy <= y );
                  }
                }
                ebp_140 = 0;
                if ( im->sx > 0 )
                {
                  do
                  {
                    y = 0;
                    if ( im->sy > 0 )
                    {
                      do
                      {
                        transparent = 0;
                        if ( photo_outline )
                        {
                          transparent = gdImageGetPixel( photo_outline, ebp_140, y );
                        }
                        mask = 0;
                        if ( photo_mask )
                        {
                          mask = gdImageGetPixel( photo_mask, ebp_140, y );
                        }
                        silk = 0;
                        if ( photo_silk )
                        {
                          silk = gdImageGetPixel( photo_silk, ebp_140, y );
                        }
                        if ( photo_ngroups == 2 )
                          ebp_168 = (long long)( ( (double)( (long long)( ( ( 0 - ( ( gdImageColorResolveAlpha( im, 0, 0, 0, 127 ) < 1 ) & 1 ) ) & 60 ) + 40 ) ) * 0.300000011921 ) + 49.000000000000 );
                        if ( gdImageGetPixel( photo_copper[ photo_groups[0] ], ebp_140, y ) )
                        {
                          /* phantom */ int r;
                          if ( mask == 0 )
                          {
                            if ( gdImageGetPixel( photo_copper[ photo_groups[0] ], ebp_140, y ) == 2 )
                              goto B178;
                            else
                            {
                              if ( cc == 3 )
                              {
                                ebp_168 = (long long)( (double)( ebp_168 ) * 0.700000000000 );
                                ebp_168 = (long long)( 0.700000000000 * (double)( ebp_168 ) );
                              }
                            }
                          }
                          else
                          if ( cc == 2 )
                            goto B178;
                          else
                          {
                          }
B178:;
                          ebp_168 = 255 - ( ( ( __MOD(gdImageGetPixel( photo_copper[ photo_groups[0] ], ebp_140, y ),5) ) * 2 ) + 136 );
                          ebp_168 = (long long)( ( (double)( ebp_168 ) * -0.700000000000 ) + 255.000000000000 );
                          ebp_168 = 255 - ( ( ( __MOD(gdImageGetPixel( photo_copper[ photo_groups[0] ], ebp_140, y ),5) ) * 2 ) + 156 );
                          ebp_168 = (long long)( 255.000000000000 + ( -0.700000000000 * (double)( ebp_168 ) ) );
                        }
                        if ( photo_drill && gdImageGetPixel( photo_drill, ebp_140, y ) == 0 )
                          transparent = 1;
                        else
                        if ( silk )
                        {
                          if ( silk == 2 )
                          {
                          }
                          else
                          {
                          }
                        }
                        else
                        if ( mask )
                        {
                          if ( mask != 2 )
                          {
                            if ( mask == 3 )
                              silk = ebp_168 >> 1;
                          }
                          else
                            silk = 220 >> 1;
                          silk = (long long)( ( (double)( silk ) * 0.699999988079 ) + 0.000000000000 );
                        }
                        if ( options[8].int_value )
                        {
                          /* phantom */ color_struct p;
                          /* phantom */ color_struct cop;
                          int cc, mask, silk;
                          int transparent;
                          if ( transparent )
                            gdImageColorResolveAlpha( im, 0, 0, 0, 127 );
                          else
                            gdImageColorResolveAlpha( im, silk == 3 ? 224 : 192, silk == 3 ? 224 : 192, silk == 3 ? 224 : 192, 0 );
                        }
                        else
                        if ( transparent )
                        {
                          gdImageColorResolve( im, 0, 0, 0 );
                          if ( photo_flip == 1 )
                          {
                            gdImageSetPixel( im, im->sx + ~ebp_140, y, gdImageColorResolve( im, 0, 0, 0 ) );
                            y++;
                            if ( y < im->sy )
                              continue;
                            else
                              break;
                          }
                          else
                          {
                            if ( photo_flip == 2 )
                              gdImageSetPixel( im, ebp_140, im->sy + ~y, gdImageColorResolve( im, 0, 0, 0 ) );
                            else
                              gdImageSetPixel( im, ebp_140, y, gdImageColorResolve( im, 0, 0, 0 ) );
                            y++;
                          }
                        }
                        else
                          gdImageColorResolve( im, silk == 3 ? 224 : 192, silk == 3 ? 224 : 192, silk == 3 ? 224 : 192 );
                        if ( photo_flip == 1 )
                        {
                          gdImageSetPixel( im, im->sx + ~ebp_140, y, gdImageColorResolve( im, 0, 0, 0 ) );
                          y++;
                        }
                        else
                        {
                        }
                      }
                      while ( y + 1 < im->sy );
                    }
                    ebp_140++;
                  }
                  while ( ebp_140 < *(int*)((long long)( (double)( (long long)( 145 ) ) * 0.700000000000 ) + 4) );
                }
              }
            {
              /* phantom */ size_t __s1_len;
              /* phantom */ size_t __s2_len;
              /* phantom */ unsigned char *__s1;
              /* phantom */ int __result;
              fmt[0] = filetypes[ png_values[9].int_value ];
              if ( fmt[0] == 71 && fmt[1] == 73 && fmt[2] == 70 && fmt[3] == 0 )
                gdImageGif( im, f );
              else
              {
                /* phantom */ size_t __s1_len;
                /* phantom */ size_t __s2_len;
                fmt[0] = fmt;
                strcmp( "JPEG", fmt );
                if ( 1 )
                  gdImageJpeg( im, f, -1 );
                else
              {
                /* phantom */ size_t __s1_len;
                /* phantom */ size_t __s2_len;
                /* phantom */ unsigned char *__s1;
                /* phantom */ int __result;
                if ( fmt[0] != 80 || fmt[1] != 78 || fmt[2] != 71 || fmt[3] )
                  __fprintf_chk( stderr, 1, "Error:  Invalid graphic file format.  This is a bug.  Please report it.\n" );
                else
                  gdImagePng( im, f );
              }
              }
              fclose( f );
              gdImageDestroy( im );
            }
            }
          }
        }
      }
    }
    if ( ymax == 0 )
    {
      if ( xmax == 0 )
        __fprintf_chk( stderr, 1, "ERROR:  You may not set both xmax, ymax,and xy-max to zero\n" );
    }
    else
    if ( xmax == 0 || w / xmax <= ( bbox->Y2 - bbox->Y1 ) / ymax )
    {
      w = ( ymax * w ) / ( bbox->Y2 - bbox->Y1 );
      scale = (double)( ( bbox->Y2 - bbox->Y1 ) / ymax );
    }
    h = ( ( bbox->Y2 - bbox->Y1 ) * xmax ) / w;
    w = xmax;
    scale = (double)( w / xmax );
  }
  else
    __fprintf_chk( stderr, 1, "ERROR:  dpi may not be &lt; 0\n" );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void png_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  hid_register_attributes( png_attribute_list, 17 );
  argv = argv;
  argc = argc;
}
int png_set_layer( char *name, int group, int empty )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int idx;
  if ( group < 0 || PCB->Data->LayerN <= group )
  {
    idx = group;
    if ( name == 0 )
      goto B5;
    else
    {
      if ( idx >= 0 )
      {
        if ( idx < PCB->Data->LayerN && print_layer[ idx ] == 0 )
        {
          return 1;
        }
      }
      else
      if ( ( idx & 240 ) != 112 )
      {
        if ( ( idx & 240 ) + -128 == 0 )
        {
          return 1;
        }
      }
      else
      {
      }
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "invisible", name );
      if ( 1 )
      {
        return 1;
      }
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
          is_mask = 1;
        else
        {
          is_mask = 0;
          if ( ( idx & 240 ) == 80 )
          {
            return 1;
          }
        }
      }
      if ( photo_mode )
      {
        switch ( idx & 240 )
        {
        case 0:
          if ( photo_flip == 0 )
            photo_im = (gdImagePtr*)photo_silk;
          break;
        case 1:
          if ( photo_flip == 0 )
          {
            return 1;
          }
          photo_im = (gdImagePtr*)photo_silk;
          break;
        case 16:
          if ( photo_flip == 0 )
            photo_im = (gdImagePtr*)photo_mask;
          break;
        case 17:
          if ( photo_flip == 0 )
          {
            return 1;
          }
          photo_im = (gdImagePtr*)photo_mask;
          break;
        case 31:
        case 47:
          photo_im = (gdImagePtr*)photo_drill;
          break;
        default:
          if ( idx < 0 )
          {
            return 1;
          }
          if ( strcasecmp( name, "outline" ) == 0 )
            photo_im = (gdImagePtr*)photo_outline;
          else
            photo_im = (gdImagePtr*)photo_copper[ group ];
          break;
        }
        if ( photo_drill == 0 )
        {
          static color_struct *black, *white;
          photo_drill = gdImageCreate( im->sx, im->sy );
          if ( photo_im == 0 )
          {
            Message( "%s():  gdImageCreate(%d, %d) returned NULL.  Aborting export.\n", __FUNCTION__[0], im->sx );
            return 1;
          }
          *(int*)calloc( 1, 20 )/*.12*/ = 255;
          *(int*)calloc( 1, 20 )/*.8*/ = 255;
          *(int*)calloc( 1, 20 )/*.4*/ = 255;
          *(int*)calloc( 1, 20 )/*.16*/ = 0;
          white = calloc( 1, sizeof( color_struct ) );
          white = gdImageColorAllocate( photo_im[0], 255, 255, 255 );
          if ( white->c == -1 )
          {
            Message( "%s():  gdImageColorAllocate() returned NULL.  Aborting export.\n", __FUNCTION__[0] );
            return 1;
          }
          *(int*)calloc( 1, 20 )/*.16*/ = 0;
          *(int*)calloc( 1, 20 )/*.12*/ = 0;
          *(int*)calloc( 1, 20 )/*.8*/ = 0;
          *(int*)calloc( 1, 20 )/*.4*/ = 0;
          black = calloc( 1, sizeof( color_struct ) );
          black = gdImageColorAllocate( photo_im[0], 0, 0, 0 );
          if ( black->c == -1 )
          {
            Message( "%s(): gdImageColorAllocate() returned NULL.  Aborting export.\n", __FUNCTION__[0] );
            return 1;
          }
          if ( idx == -4032 || idx == -4048 )
            gdImageFilledRectangle( photo_im[0], 0, 0, im->sx, im->sy, black->c );
        }
        im = photo_im[0];
        return 1;
      }
      else
      {
        if ( as_shown )
        {
          if ( idx >= -4079 )
          {
            if ( idx <= -4078 )
            {
              if ( (unsigned char)( ( ( idx >> 1 ) ^ 1 ) & 1 ) != (unsigned char)( Settings.ShowSolderSide != 0 ) )
              {
                return PCB->ElementOn;
              }
            }
            else
            if ( idx + 4063 <= 1 )
            {
              return ( ( ( idx >> 1 ) ^ 1 ) & 1 ) ^ ( Settings.ShowSolderSide != 0 );
            }
          }
        }
        else
        if ( ecx )
        {
        }
        if ( idx + 4079 + 4079 <= 1 )
        {
          return txt[ idx + 4079 + 36810 ];
        }
      }
    }
    }
  }
  else
  {
    idx = PCB->Font.Symbol[255].Delta;
    if ( name == 0 )
      goto B5;
  }
B5:;
  name = &PCB->Data->Layer[ idx ].Name;
}
hidGC png_make_gc( void )
{
  /* phantom */ hidGC rv;
  *(int*)(calloc( 1, 32 )) = png_hid;
  *(int*)calloc( 1, 32 )/*.4*/ = 0;
  *(int*)calloc( 1, 32 )/*.8*/ = 1;
  *(int*)calloc( 1, 20 )/*.16*/ = 0;
  *(int*)calloc( 1, 20 )/*.12*/ = 0;
  *(int*)calloc( 1, 20 )/*.8*/ = 0;
  *(int*)calloc( 1, 20 )/*.4*/ = 0;
  *(int*)(calloc( 1, 20 )) = 0;
  *(int*)calloc( 1, 32 )/*.24*/ = calloc( 1, 20 );
  return calloc( 1, 32 );
}
void png_destroy_gc( hidGC gc )
{
}
void png_use_mask( int use_it )
{
  return;
}
void png_set_color( hidGC gc, char *name )
{
  int edx;
  int ebx;
  int esi;
  hidval cval;
  if ( im )
  {
    if ( name )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "erase", name );
      if ( !1 )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "drill", name );
        if ( 1 )
          goto B7;
      }
B7:;
      gc->erase = 1;
      gc->color = white;
    }
    else
      name[0] = "#ff0000";
    gc->erase = 0;
    if ( in_mono == 0 )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( "#000000", name );
      if ( 1 )
        goto B12;
      else
      {
        if ( hid_cache_color( 0, "#ff0000", &cval, &color_cache ) )
        {
          gc->color = cval.lval;
        }
        else
        if ( name[0] != '#' )
        {
          __printf_chk( 1, "WE SHOULD NOT BE HERE!!!\n" );
          gc->color = black;
        }
        else
        {
          gc->color = calloc( 1, 20 );
          sscanf( name + 1, "%2x%2x%2x", gc + 24 + 4, gc + 24 + 8, gc + 24 + 12 );
          gc->color->c = gdImageColorAllocate( im, gc->color->r, gc->color->g, gc->color->b );
          if ( gc->color->c == -1 )
          {
            Message( "%s():  gdImageColorAllocate() returned NULL.  Aborting export.\n", __FUNCTION__[0] );
          }
          else
          {
            cval.lval = gc->color;
            hid_cache_color( 1, name, &cval, &color_cache );
          }
        }
      }
    }
B12:;
    gc->color = black;
  }
  return;
}
void png_set_line_cap( hidGC gc, EndCapStyle style )
{
  gc->cap = style;
  return;
}
void png_set_line_width( hidGC gc, int width )
{
  gc->width = width;
  return;
}
void png_set_draw_xor( hidGC gc, int xor )
{
  return;
}
void png_set_draw_faded( hidGC gc, int faded )
{
  gc->faded = faded;
  return;
}
void png_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented PNG function %s.\n", __FUNCTION__ );
  abort( );
}
void use_gc( hidGC gc )
{
  int edx;
  double fp3;
  double fp4;
  /* phantom */ int need_brush;
  gc = 0;
  if ( gc->me_pointer->struct_size == png_hid.struct_size )
  {
    if ( gc->width != linewidth )
    {
      if ( !(int)( ( (double)( gc->width ) / scale ) + 0.500000000000 ) && gc->width > 0 )
        gdImageSetThickness( im, 1 );
      else
        gdImageSetThickness( im, (int)( ( ( bloat * 0.000000000000 ) / 0.000000000000 ) + 0.500000000000 ) );
      linewidth = gc->width;
    }
    else
    if ( gc->brush != lastbrush )
    {
    }
    else
    {
      if ( lastcolor != ( gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 ) ) )
      {
        if ( is_drill || is_mask )
          lastcolor = 0;
          if ( ( gc ^ 0 ) == 0 )
          {
            return;
          }
          __stack_chk_fail( );
        else
        {
          /* phantom */ double r, g, b;
          lastcolor = gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 );
        }
      }
    }
  {
    hidval bval;
    char name[256];
    char type = 'S';
    int r;
    if ( gc->cap <= 2 )
      type = 'C';
    r = 1;
    __sprintf_chk( name, 1, 256, "#%.2x%.2x%.2x_%c_%d", gc->color->r, gc->color->g, gc->color->b, 'C', gc->cap );
    if ( hid_cache_color( 0, name, &bval, &brush_cache ) )
      gc->brush = bval.lval;
    else
    {
      int bg, fg;
      gc->brush = gdImageCreate( r, r );
      if ( gc + 28 == 0 )
        Message( "%s():  gdImageCreate(%d, %d) returned NULL.  Aborting export.\n", __FUNCTION__[0], r );
      else
      {
        if ( gdImageColorAllocate( gc + 28, 255, 255, 255 ) == -1 || fg == -1 )
          Message( "%s():  gdImageColorAllocate() returned NULL.  Aborting export.\n", __FUNCTION__[0] );
        else
        {
          gdImageColorTransparent( &gc->brush, bg );
          if ( r <= 1 )
          {
          }
          else
          if ( type == 'C' )
          {
            type = r >> 1;
            gdImageFilledEllipse( &gc->brush, r >> 1, r >> 1, r, r, fg );
            gdImageSetPixel( &gc->brush, 0, type, fg );
            gdImageSetPixel( &gc->brush, r + -1, type, fg );
            gdImageSetPixel( &gc->brush, type, 0, fg );
            gdImageSetPixel( &gc->brush, type, r + -1, fg );
            bval.lval = gc->brush;
            hid_cache_color( 1, name, &bval, &brush_cache );
          }
          else
          {
          }
          gdImageFilledRectangle( &gc->brush, 0, 0, ebp_348, ebp_348, ebp_344 );
          bval.lval = gc->brush;
          hid_cache_color( 1, name, &bval, &brush_cache );
        }
      }
    }
    gdImageSetBrush( im, &bval.lval );
    lastbrush = &gc->brush;
  }
  }
  __fprintf_chk( stderr, 1, "Fatal: GC from another HID passed to png HID\n" );
  abort( );
}
void png_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  use_gc( gc );
  y1 -= y_shift;
  x1 -= x_shift;
  gdImageRectangle( im, (int)( (double)( x1 - x_shift ) / scale ), (int)( (double)( y1 - y_shift ) / scale ), (int)( (double)( x2 - x_shift ) / scale ), (int)( (double)( y2 - y_shift ) / scale ), x1 - x_shift );
  return;
}
void png_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  use_gc( gc );
  gdImageSetThickness( im, 0 );
  linewidth = 0;
  gdImageFilledRectangle( im, (int)( ( (double)( x1 ) - bloat - (double)( x_shift ) ) / scale ), (int)( ( (double)( y1 ) - bloat - (double)( y_shift ) ) / scale ), (int)( ( ( bloat + (double)( x2 < x1 ? x2 : x1 ) ) - (double)( x_shift ) ) / scale ) + -1, x1, x1 );
  return;
}
void png_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  if ( y2 == y1 && ( ( x2 == x1 ) & 255 ) )
  {
    /* phantom */ int w;
    png_fill_rect( gc, x1 - ( gc->width / 2 ), y1 - ( gc->width / 2 ), x1 + ( gc->width / 2 ), y1 + ( gc->width / 2 ) );
    return;
  }
  use_gc( gc );
  gdImageSetThickness( im, 0 );
  linewidth = 0;
  if ( ( x2 == x1 ) || gc->cap != 1 || ( ( y2 == y1 ) & 255 ) )
  {
    gdImageLine( im, (int)( (double)( x1 - x_shift - x_shift ) / scale ), (int)( (double)( y1 - y_shift - y_shift ) / scale ), (int)( (double)( x2 - x_shift ) / scale ), x1 - x_shift - x_shift, x1 - x_shift - x_shift );
    return;
  }
{
  int fg;
  int w = gc->width, dx = x2 - x1, dy, dwx, dwy;
  gdPoint p[4];
  double l;
  fg = gdImageColorResolve( im, gc->color->r, gc->color->g, gc->color->b );
  dy = y2 - y1;
  if ( sqrt( (double)( ( ( x2 - x1 ) * ( x2 - x1 ) ) + ( ( y2 - y1 ) * ( y2 - y1 ) ) ) ) == sqrt( (double)( ( ( x2 - x1 ) * ( x2 - x1 ) ) + ( ( y2 - y1 ) * ( y2 - y1 ) ) ) ) )
  {
    if ( sqrt( (double)( ( ( x2 - x1 ) * ( x2 - x1 ) ) + ( ( y2 - y1 ) * ( y2 - y1 ) ) ) ) == sqrt( (double)( ( ( x2 - x1 ) * ( x2 - x1 ) ) + ( ( y2 - y1 ) * ( y2 - y1 ) ) ) ) )
    {
      w = (int)( (double)( w ) );
      dwx = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
      dwy = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
      p[0].x = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
      p[1].x = (int)( (double)( x1 - x_shift ) / scale ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
      p[1].y = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
      p->y = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 3;
      p[2].x = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
      p[3].x = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 3;
      p[2].y = (int)( (double)( y2 - y_shift ) / scale ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
      p[3].y = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
      gdImageFilledPolygon( im, &p[0].x, 4, fg );
      return;
    }
    else
    {
    }
  }
  else
  {
  }
  sqrt( (double)( ( ( x2 - x1 ) * ( x2 - x1 ) ) + ( ( y2 - y1 ) * ( y2 - y1 ) ) ) );
  w = (int)( (double)( w ) );
  dwx = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
  dwy = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
  p[0].x = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
  p[1].x = (int)( (double)( x1 - x_shift ) / scale ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
  p[1].y = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
  p->y = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 3;
  p[2].x = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
  p[3].x = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 3;
  p[2].y = (int)( (double)( y2 - y_shift ) / scale ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) - (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) );
  p[3].y = (int)( ( (double)( w ) / ( scale * scale * 0.000000000000 ) ) * (double)( w ) ) * 1;
  gdImageFilledPolygon( im, &p[0].x, 4, fg );
  return;
}
}
void png_draw_arc( hidGC gc, int cx, int cy, int width, int height, int start_angle, int delta_angle )
{
  int eax;
#error unstructured control flow
}
void png_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  use_gc( gc );
  gdImageSetThickness( im, 0 );
  linewidth = 0;
  gdImageFilledEllipse( im, (int)( (double)( cx - x_shift ) / scale ), (int)( (double)( cy - y_shift ) / scale ), (int)( ( ( (double)( radius * 2 ) + ( bloat * 0.000000000000 ) ) / scale ) + 0.500000000000 ), gc->color->c, cx - x_shift );
  return;
}
void png_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  int eax;
  int edx;
  double fp2;
  double fp7;
  int i;
  /* phantom */ gdPoint *points;
  if ( calloc( 1, n_coords << 3 ) == 0 )
  {
    __fprintf_chk( stderr, 1, "ERROR:  png_fill_polygon():  malloc failed\n" );
    exit( 1 );
  }
  use_gc( gc );
  if ( n_coords > 0 )
  {
    i = 0;
    do
    {
      *(int*)(ebx + ( i << 3 ) + 4) = (int)( (double)( *(int*)(y + ( i << 2 )) - y_shift ) / 0.000000000000 );
      i++;
    }
    while ( n_coords != i + 1 );
  }
  gdImageSetThickness( im, 0 );
  linewidth = 0;
  gdImageFilledPolygon( im, &ebx, n_coords, *(int*)(*(int*)(ebp_44 + 24)) );
  gc = &ebx;
}
void png_calibrate( double xval, double yval )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented PNG function %s.\n", __FUNCTION__ );
  abort( );
}
void png_set_crosshair( int x, int y, int a )
{
  return;
}
void hid_png_init( void )
{
  apply_default_hid( &png_hid, 0 );
  hid_register_hid( &png_hid );
}
#if 0
#endif
