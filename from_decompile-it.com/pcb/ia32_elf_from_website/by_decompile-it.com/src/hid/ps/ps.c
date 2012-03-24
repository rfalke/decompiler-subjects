#include "ps.c.h"
static double calibration_x = 1.000000000000;
static double calibration_y = 1.000000000000;
static FILE *f;
static int pagecount;
static int linewidth = -1;
static int lastgroup = -1;
static int lastcap = -1;
static int lastcolor = -1;
static int print_group[16];
static int print_layer[16];
static double fade_ratio = 0.400000000000;
static double antifade_ratio = 0.600000000000;
static int multi_file;
static double media_width;
static double media_height;
static double ps_width;
static double ps_height;
static char *medias[35] = { "A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "B0", "B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8", "B9", "B10", "Letter", "11x17", "Ledger", "Legal", "Executive", "A-Size", "B-size", "C-Size", "D-size", "E-size", "US-Business_Card", "Intl-Business_Card", 0 };
static MediaType media_data[34] = { { "A0", 3311023, 4681102, 50000, 50000 }
, { "A1", 2338582, 3311023, 50000, 50000 }
, { "A2", 1653543, 2338582, 50000, 50000 }
, { "A3", 1169291, 1653543, 50000, 50000 }
, { "A4", 826771, 1169291, 50000, 50000 }
, { "A5", 582677, 826771, 50000, 50000 }
, { "A6", 413385, 582677, 50000, 50000 }
, { "A7", 291338, 413385, 50000, 50000 }
, { "A8", 204724, 291338, 50000, 50000 }
, { "A9", 145669, 204724, 50000, 50000 }
, { "A10", 102362, 145669, 50000, 50000 }
, { "B0", 3937007, 5566929, 50000, 50000 }
, { "B1", 2783464, 3937007, 50000, 50000 }
, { "B2", 1968503, 2783464, 50000, 50000 }
, { "B3", 1389763, 1968503, 50000, 50000 }
, { "B4", 984251, 1389763, 50000, 50000 }
, { "B5", 692913, 984251, 50000, 50000 }
, { "B6", 492125, 692913, 50000, 50000 }
, { "B7", 346456, 492125, 50000, 50000 }
, { "B8", 244094, 346456, 50000, 50000 }
, { "B9", 173228, 244094, 50000, 50000 }
, { "B10", 122047, 173228, 50000, 50000 }
, { "Letter", 850000, 1100000, 50000, 50000 }
, { "11x17", 1100000, 1700000, 50000, 50000 }
, { "Ledger", 1700000, 1100000, 50000, 50000 }
, { "Legal", 850000, 1400000, 50000, 50000 }
, { "Executive", 750000, 1000000, 50000, 50000 }
, { "A-size", 850000, 1100000, 50000, 50000 }
, { "B-size", 1100000, 1700000, 50000, 50000 }
, { "C-size", 1700000, 2200000, 50000, 50000 }
, { "D-size", 2200000, 3400000, 50000, 50000 }
, { "E-size", 3400000, 4400000, 50000, 50000 }
, { "US-Business_Card", 350000, 200000, 0, 0 }
, { "Intl-Business_Card", 337500, 212500, 0, 0 }
 };
HID_Attribute ps_attribute_list[18] = { { "psfile", "Postscript output file", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "drill-helper", "Prints a centering target in large drill holes", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "align-marks", "Prints alignment marks on each layer", 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, 0, 0 }
, { "outline", "Prints outline on each layer", 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, 0, 0 }
, { "mirror", "Prints mirror image of each layer", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "fill-page", "Scale board to fill page", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "auto-mirror", "Prints mirror image of appropriate layers", 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, 0, 0 }
, { "ps-color", "Prints in color", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "ps-bloat", "Amount to add to trace/pad/pin edges (1 = 1/100 mil)", 1, -10000, 10000, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "ps-invert", "Draw images as white-on-black", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "media", "media type", 5, 0, 0, { 22, 0, 0.000000000000 }
, &medias, 0, 0 }
, { "psfade", "Fade amount for assembly drawings (0.0=missing, 1.0=solid)", 2, 0, 1, { 0, 0, 0.400000000000 }
, 0, 0, 0 }
, { "scale", "Scale value to compensate for printer sizing errors (1.0 = full scale)", 2, 0, 4, { 0, 0, 1.000000000000 }
, 0, 0, 0 }
, { "multi-file", "Produce multiple files, one per page, instead of a single file.", 4, 0, 0, { 0, 0, 0.400000000000 }
, 0, 0, 0 }
, { "xcalib", "X-Axis calibration (paper width).", 2, 0, 0, { 0, 0, 1.000000000000 }
, 0, 0, 0 }
, { "ycalib", "Y-Axis calibration (paper height).", 2, 0, 0, { 0, 0, 1.000000000000 }
, 0, 0, 0 }
, { "drill-copper", "Draw drill holes in pins / vias, instead of leaving solid copper.", 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, 0, 0 }
, { "show-legend", "Print file name and scale on printout", 4, 0, 0, { 1, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val ps_values[18];
static char *filename;
static int drill_helper;
static int align_marks;
static int outline;
static int mirror;
static int fillpage;
static int automirror;
static int incolor;
static int doing_toc;
static int bloat;
static int invert;
static int media;
static int drillcopper;
static int legend;
static LayerTypePtr outline_layer;
static double fill_zoom;
static double scale_value;
static BoxType region;
static int is_mask;
static int is_drill;
static int is_assy;
static int is_copper;
static int is_paste;
HID_Attribute ps_calib_attribute_list[1] = { { "lprcommand", "Command to print", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static char *calib_lines[68] = { "%!PS-Adobe\n", "\n", "72 72 scale\n", "\n", "0 setlinewidth\n", "0.375 0.375 moveto\n", "8.125 0.375 lineto\n", "8.125 10.625 lineto\n", "0.375 10.625 lineto\n", "closepath stroke\n", "\n", "0.5 0.5 translate\n", "0.001 setlinewidth\n", "\n", "/Times-Roman findfont 0.2 scalefont setfont\n", "\n", "/sign {\n", "    0 lt { -1 } { 1 } ifelse\n", "} def\n", "\n", "/cbar {\n", "    /units exch def\n", "    /x exch def\n", "    /y exch def  \n", "\n", "    /x x sign 0.5 mul def\n", "\n", "    0 setlinewidth\n", "    newpath x y 0.25 0 180 arc gsave 0.85 setgray fill grestore closepath stroke\n", "    newpath x 0 0.25 180 360 arc gsave 0.85 setgray fill grestore closepath stroke\n", "    0.001 setlinewidth\n", "\n", "    x 0 moveto\n", "    x y lineto\n", "%    -0.07 -0.2 rlineto 0.14 0 rmoveto -0.07 0.2 rlineto\n", "    x y lineto\n", "    -0.1 0 rlineto 0.2 0 rlineto\n", "    stroke\n", "    x 0 moveto\n", "%    -0.07 0.2 rlineto 0.14 0 rmoveto -0.07 -0.2 rlineto\n", "    x 0 moveto\n", "    -0.1 0 rlineto 0.2 0 rlineto\n", "     stroke\n", "\n", "    x 0.1 add\n", "    y 0.2 sub moveto\n", "    units show\n", "} bind def\n", "\n", "/y 9 def\n", "/t {\n", "    /str exch def\n", "    1.5 y moveto str show\n", "    /y y 0.25 sub def\n", "} bind def\n", "\n", "(Please measure ONE of the horizontal lines, in the units indicated for)t\n", "(that line, and enter that value as X.  Similarly, measure ONE of the)t\n", "(vertical lines and enter that value as Y.  Measurements should be)t\n", "(between the flat faces of the semicircles.)t\n", "()t\n", "(The large box is 10.25 by 7.75 inches)t\n", "\n", "/in { } bind def\n", "/cm { 2.54 div } bind def\n", "/mm { 25.4 div } bind def\n", "\n", 0 };
HID ps_hid = { 208, "ps", "Postscript export.", '', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
void register_ps_attribute_list( void )
{
  hid_register_attributes( ps_attribute_list, 18 );
  return;
}
HID_Attribute *ps_get_export_options( int *n )
{
  int eax;
  static char *last_made_filename;
  if ( PCB )
    derive_default_filename( &PCB->Filename, ps_attribute_list, ".ps", &last_made_filename );
  if ( n )
  {
    n[0] = 18;
  }
  return ps_attribute_list;
}
int layer_sort( void *va, void *vb )
{
  int edx;
  int ebx;
  int edi;
  int a = ((int*)va);
  int b = ((int*)vb);
  int d;
  PCB->Data->LayerN = PCB->Data->LayerN + 1;
  if ( ((int*)vb) < 0 || PCB->Data->LayerN + 1 < b )
  {
    if ( a <= PCB->Data->LayerN + 1 )
      goto B4;
    else
    {
      return PCB->Data->LayerN + a + 3 == GetLayerGroupNumberByNumber( a ) ? ( PCB->Data->LayerN + a + 3 ) - GetLayerGroupNumberByNumber( a ) : b - a;
    }
  }
  else
  {
    if ( PCB->Data->LayerN + 1 < a )
    {
      return PCB->Data->LayerN + a + 3 == GetLayerGroupNumberByNumber( a ) ? ( PCB->Data->LayerN + a + 3 ) - GetLayerGroupNumberByNumber( a ) : b - a;
    }
  }
B4:;
  if ( a >= 0 )
  {
    GetLayerGroupNumberByNumber( a );
    return PCB->Data->LayerN + a + 3 == GetLayerGroupNumberByNumber( a ) ? ( PCB->Data->LayerN + a + 3 ) - GetLayerGroupNumberByNumber( a ) : b - a;
  }
}
void ps_start_file( FILE *f )
{
  __fprintf_chk( f, 1, "%%!PS-Adobe-3.0\n\n" );
  return;
}
FILE *psopen( char *base, char *which )
{
  int ebx;
  int esi;
  int edi;
  FILE *f;
  /* phantom */ char *buf, *suff, *buf2;
  base[0] = f;
  f = &multi_file;
  if ( multi_file == 0 )
  {
    fopen( base, "w" );
  }
  f = f + f + 5;
  if ( f )
  {
    strcpy( (char*)f, base );
    __sprintf_chk( (char*)f, 1, -1, ".%s.%s", which, &f->_flags );
  }
  else
    __sprintf_chk( (char*)f, 1, -1, "%s.%s.ps", base, which );
  __printf_chk( 1, "PS: open %s\n", (char*)f );
  free( f );
  f = f;
  return f;
}
void ps_hid_export_to_file( FILE *the_file, HID_Attr_Val *options )
{
  int edx;
  double fp0;
  double fp4;
  double fp6;
  double fp7;
  static int saved_layer_stack[16];
  int i;
  /* phantom */ FlagType save_thindraw;
  PCB->Flags.f &= -147457;
  f = the_file;
  drill_helper = options[1].int_value;
  align_marks = options[2].int_value;
  outline = options[3].int_value;
  fade_ratio = options[11].real_value;
  mirror = options[4].int_value;
  fillpage = options[5].int_value;
  automirror = options[6].int_value;
  incolor = options[7].int_value;
  bloat = options[8].int_value;
  invert = options[9].int_value;
  media = options[10].int_value;
  media_width = (double)( media_data[ options[10].int_value ].Width ) / 100000.000000000000;
  media_height = (double)( media_data[ options[10].int_value ].Height ) / 100000.000000000000;
  ps_width = ( (double)( media_data[ options[10].int_value ].Width ) / 100000.000000000000 ) + ( ( (double)( media_data[ options[10].int_value ].MarginX ) * 0.000000000000 ) / -100000.000000000000 );
  ps_height = ( (double)( media_data[ options[10].int_value ].Height ) / 100000.000000000000 ) + ( ( (double)( media_data[ options[10].int_value ].MarginY ) * 0.000000000000 ) / -100000.000000000000 );
  scale_value = options[12].real_value;
  calibration_x = options[14].real_value;
  calibration_y = options[15].real_value;
  drillcopper = options[16].int_value;
  legend = options[17].int_value;
  if ( 0.000000000000 <= options[11].real_value )
  {
    if ( 1.000000000000 < options[11].real_value )
    {
    }
    else
    {
      antifade_ratio = 1.000000000000 - fade_ratio;
      if ( options[5].int_value )
      {
        double zx, zy;
      }
      else
        fill_zoom = 0.000010000000;
      mymemset( print_group, 0, 64 );
      mymemset( print_layer, 0, 64 );
      outline_layer = 0;
      if ( PCB->Data->LayerN > 0 )
      {
        i = 0;
      {
        do
        {
          /* phantom */ LayerType *layer;
          if ( PCB->Data->Layer->LineN == 0 && PCB->Data->Layer->TextN == 0 && PCB->Data->Layer->ArcN == 0 )
          {
            if ( PCB->Data->Layer->PolygonN )
            {
            }
            else
            {
              /* phantom */ size_t __s1_len;
              /* phantom */ size_t __s2_len;
              strcmp( "outline", *(int*)(edx + ( i * 92 ) + 76) );
              if ( !1 )
              {
                /* phantom */ size_t __s1_len;
                /* phantom */ size_t __s2_len;
                strcmp( "route", ebp_76 );
                if ( !1 )
                {
                  i++;
                }
              }
              __printf_chk( 1, "see outline layer\n" );
              outline_layer = ebp_44 + ( i * 92 ) + 76;
            }
          }
          print_group[ GetLayerGroupNumberByNumber( i ) ] = 1;
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          strcmp( "outline", *(int*)(edx + ( i * 92 ) + 76) );
        }
        }
        while ( i + 1 < PCB->Data->LayerN );
      }
      }
      print_group[ GetLayerGroupNumberByNumber( PCB->Data->LayerN ) ] = 1;
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
      qsort( LayerStack, PCB->Data->LayerN, 4, &layer_sort );
      region.X1 = 0;
      region.Y1 = 0;
      lastgroup = -1;
      linewidth = -1;
      lastcap = -1;
      region.X2 = PCB->MaxWidth;
      lastcolor = -1;
      region.Y2 = PCB->MaxHeight;
      if ( multi_file == 0 )
      {
        pagecount = 1;
        __fprintf_chk( f, 1, "%%%%Page: 1\n" );
        __fprintf_chk( f, 1, "/Times-Roman findfont 24 scalefont setfont\n" );
        __fprintf_chk( f, 1, "/rightshow { /s exch def s stringwidth pop -1 mul 0 rmoveto s show } def\n" );
        __fprintf_chk( f, 1, "/y 72 9 mul def /toc { 100 y moveto show /y y 24 sub def } bind def\n" );
        __fprintf_chk( f, 1, "/tocp { /y y 12 sub def 90 y moveto rightshow } bind def\n" );
        doing_toc = 1;
        hid_expose_callback( &ps_hid, &region, 0 );
      }
      pagecount = 1;
      doing_toc = 0;
      lastgroup = -1;
      hid_expose_callback( &ps_hid, &region, 0 );
      if ( f )
      {
        __fprintf_chk( f, 1, "showpage\n" );
      }
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
      PCB->Flags.t[7] = PCB->Flags.t[7];
      PCB->Flags.t[6] = PCB->Flags.t[6];
      PCB->Flags.t[5] = PCB->Flags.t[5];
      PCB->Flags.t[4] = PCB->Flags.t[4];
      PCB->Flags.t[3] = PCB->Flags.t[3];
      PCB->Flags.t[2] = PCB->Flags.t[2];
      PCB->Flags.t[1] = PCB->Flags.t[1];
      PCB->Flags.t[0] = PCB->Flags.t[0];
      PCB->Flags.f = PCB->Flags.f;
      return;
    }
  }
  else
  {
  }
  fade_ratio = ( (double)( media_data[ options[10].int_value ].Height ) / 100000.000000000000 ) + ( ( (double)( media_data[ options[10].int_value ].MarginY ) * 0.000000000000 ) / -100000.000000000000 );
  antifade_ratio = 1.000000000000 - fade_ratio;
}
void ps_do_export( HID_Attr_Val *options )
{
  int edx;
  int save_ons[18];
  /* phantom */ int i;
  if ( options == 0 )
  {
    ps_get_export_options( 0 );
    options = ps_values;
    do
    {
      ps_values[ 0 >> 4 ].int_value = ps_attribute_list->default_val.int_value;
      *(int*)(options + 0 + 4) = &ps_attribute_list->default_val.str_value[0];
      *(int*)(options + 0 + 8) = &ps_attribute_list->default_val.real_value & 0xFFFFFFFF;
      ps_attribute_list->default_val.int_value = ps_attribute_list[1].default_val.int_value;
      *(int*)(options + 0 + 12) = &ps_attribute_list[1].default_val.real_value << 32;
    }
    while ( 0 + 16 + 16 != 288 );
    options = ps_values;
  }
  filename = options->str_value != 0 ? "pcb-out.ps" : options->str_value;
  multi_file = options[13].int_value;
  if ( options[13].int_value )
    f = 0;
  else
  {
    f = psopen( (char*)f, "toc" );
    if ( f == 0 )
    {
      perror( filename );
      return;
    }
    else
      ps_start_file( f );
  }
  hid_save_and_show_layer_ons( save_ons );
  ps_hid_export_to_file( f, options );
  hid_restore_layer_ons( save_ons );
  multi_file = 0;
  if ( f )
  {
    fclose( f );
  }
  return;
}
void ps_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  hid_register_attributes( ps_attribute_list, 18 );
  argv = argv;
  argc = argc;
}
void corner( int x, int y, int dx, int dy )
{
  /* phantom */ int len;
  /* phantom */ int len2;
  /* phantom */ int thick;
  __fprintf_chk( f, 1, "gsave %d setlinewidth %d %d translate %d %d scale\n", 0, x, y, dx, dy );
  __fprintf_chk( f, 1, "%d %d moveto %d %d %d 0 90 arc %d %d lineto\n", 0x30d40, 0, 0, 0, 20000, 0, 0x30d40 );
  if ( dy < 0 && dx < 0 )
    __fprintf_chk( f, 1, "%d %d moveto 0 %d rlineto\n", 40000, 0, -20000 );
  __fprintf_chk( f, 1, "stroke grestore\n" );
  return;
}
int ps_set_layer( char *name, int group, int empty )
{
  int eax;
  int edx;
  double fp6;
  double fp7;
  int idx;
  if ( group >= 0 && group < PCB->Data->LayerN )
  {
    idx = PCB->Font.Symbol[255].Delta;
    if ( name == 0 )
      goto B5;
    else
    {
      if ( empty == 0 && ( idx < 0 || PCB->Data->LayerN <= idx || print_layer[ idx ] ) )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "invisible", name );
        if ( !1 )
        {
          if ( idx >= 0 )
          {
            is_drill = 0;
            is_mask = 0;
            is_assy = 0;
            is_copper = 1;
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
              is_assy = 0;
              is_copper = 0;
            }
            else
            {
              is_mask = 0;
              if ( ( idx & 240 ) == 128 )
              {
                is_assy = 1;
                is_copper = 0;
              }
              else
              {
                is_copper = ( idx & 240 ) == 0;
                is_assy = 0;
                is_paste = 1;
                if ( doing_toc )
                {
                  if ( group < 0 || lastgroup != group )
                  {
                    lastgroup = group;
                    pagecount++;
                    __fprintf_chk( f, 1, "(%d.) tocp\n", pagecount + 1 );
                  }
                  __fprintf_chk( f, 1, "(%s) toc\n", name );
                  return 0;
                }
                else
                {
                  if ( group < 0 || lastgroup != group )
                  {
                    double boffset;
                    int mirror_this;
                    lastgroup = group;
                    if ( f )
                    {
                      if ( pagecount )
                      {
                        __fprintf_chk( f, 1, "showpage\n" );
                      }
                    }
                    else
                    {
                    }
                    pagecount++;
                    if ( multi_file )
                    {
                      if ( f )
                        fclose( f );
                      f = psopen( filename, layer_type_to_file_name( idx ) );
                      if ( f == 0 )
                      {
                        perror( filename );
                        return 0;
                      }
                      ps_start_file( f );
                    }
                    __fprintf_chk( f, 1, "%%%%Page: %d\n", pagecount );
                    mirror_this = mirror != 0;
                    if ( automirror == 0 )
                      goto B38;
                    else
                    {
                      if ( idx < 0 )
                      {
                        if ( ( idx & 15 ) == 2 )
                        {
                        }
                      }
                      else
                      {
                        if ( group != GetLayerGroupNumberByNumber( PCB->Data->LayerN ) )
                          goto B38;
                      }
                      mirror_this = 1 - mirror_this;
                    }
B38:;
                    __fprintf_chk( f, 1, "/Helvetica findfont 10 scalefont setfont\n" );
                    if ( legend )
                    {
                      __fprintf_chk( f, 1, "30 30 moveto (%s) show\n", &PCB->Filename );
                      if ( PCB->Name )
                      {
                        __fprintf_chk( f, 1, "30 41 moveto (%s, %s) show\n", &PCB->Name, layer_type_to_file_name( idx ) );
                      }
                      else
                      {
                        __fprintf_chk( f, 1, "30 41 moveto (%s) show\n", layer_type_to_file_name( idx ) );
                      }
                      if ( mirror_this )
                        __fprintf_chk( f, 1, "( \\(mirrored\\)) show\n" );
                      if ( fillpage )
                        __fprintf_chk( f, 1, "(, not to scale) show\n" );
                      else
                        __fprintf_chk( f, 1, "(, scale = 1:%.3f) show\n", scale_value );
                    }
                    __fprintf_chk( f, 1, "newpath\n" );
                    __fprintf_chk( f, 1, "72 72 scale %g %g translate\n", media_width * 0.500000000000, media_height * 0.500000000000 );
                    if ( PCB->MaxHeight < PCB->MaxWidth )
                    {
                      __fprintf_chk( f, 1, "90 rotate\n" );
                      boffset = 0.500000000000 * media_width;
                    }
                    else
                      boffset = media_height * 0.500000000000;
                    __fprintf_chk( f, 1, "%g %g scale %% calibration\n", calibration_y, ebp_84 );
                    if ( mirror_this )
                      __fprintf_chk( f, 1, "1 -1 scale\n" );
                    if ( idx >= 0 || ( idx & 240 ) != 112 )
                    {
                      __fprintf_chk( f, 1, "%g dup neg scale\n", scale_value * fill_zoom );
                      __fprintf_chk( f, 1, "%d %d translate\n", 0 - ( PCB->MaxWidth / 2 ), 0 - ( PCB->MaxHeight / 2 ) );
                      if ( idx < 0 && ( idx & 240 ) == 112 )
                        goto B94;
                      else
                      {
                        if ( invert )
                        {
                          __fprintf_chk( f, 1, "/gray { 1 exch sub setgray } bind def\n" );
                          __fprintf_chk( f, 1, "/rgb { 1 1 3 { pop 1 exch sub 3 1 roll } for setrgbcolor } bind def\n" );
                        }
                        else
                        {
                          __fprintf_chk( f, 1, "/gray { setgray } bind def\n" );
                          __fprintf_chk( f, 1, "/rgb { setrgbcolor } bind def\n" );
                        }
                        if ( outline == 0 || outline_layer )
                        {
                          if ( invert == 0 )
                          {
                            if ( align_marks )
                            {
                              corner( 0, 0, -1, -1 );
                              corner( PCB->MaxWidth, 0, 1, -1 );
                              corner( PCB->MaxWidth, PCB->MaxHeight, 1, 1 );
                              corner( 0, PCB->MaxHeight, -1, 1 );
                            }
                            linewidth = -1;
                            lastcap = -1;
                            lastcolor = -1;
                            __fprintf_chk( f, 1, "/ts 10000 def\n" );
                            __fprintf_chk( f, 1, "/ty ts neg def /tx 0 def /Helvetica findfont ts scalefont setfont\n" );
                            __fprintf_chk( f, 1, "/t { moveto lineto stroke } bind def\n" );
                            __fprintf_chk( f, 1, "/r { /y2 exch def /x2 exch def /y1 exch def /x1 exch def\n" );
                            __fprintf_chk( f, 1, "     x1 y1 moveto x1 y2 lineto x2 y2 lineto x2 y1 lineto closepath fill } bind def\n" );
                            __fprintf_chk( f, 1, "/c { 0 360 arc fill } bind def\n" );
                            __fprintf_chk( f, 1, "/a { gsave setlinewidth translate scale 0 0 1 5 3 roll arc stroke grestore} bind def\n" );
                            if ( drill_helper )
                              __fprintf_chk( f, 1, "/dh { gsave %d setlinewidth 0 gray %d 0 360 arc stroke grestore} bind def\n", 400, 600 );
                          }
                        }
                        else
                        {
                          __fprintf_chk( f, 1, "0 setgray 0 setlinewidth 0 0 moveto 0 %d lineto %d %d lineto %d 0 lineto closepath %s\n", PCB->MaxHeight, PCB->MaxWidth, PCB->MaxHeight, PCB->MaxWidth, "stroke" );
                        }
                        __fprintf_chk( f, 1, "0 setgray 0 setlinewidth 0 0 moveto 0 %d lineto %d %d lineto %d 0 lineto closepath %s\n", PCB->MaxHeight, PCB->MaxWidth, PCB->MaxHeight, PCB->MaxWidth, "stroke" );
                      }
                    }
                    else
                    {
                      __fprintf_chk( f, 1, "0.00001 dup neg scale\n" );
                      __fprintf_chk( f, 1, "%d %d translate\n", 0 - ( PCB->MaxWidth / 2 ), 0 - ( PCB->MaxHeight / 2 ) );
                    }
                  {
B94:;
                    int natural = (int)( ( boffset - 0.500000000000 ) * 100000.000000000000 ) - ( PCB->MaxHeight / 2 );
                    int needed = PrintFab_overhang( );
                    __fprintf_chk( f, 1, "%% PrintFab overhang natural %d, needed %d\n", natural, PrintFab_overhang( ) );
                    if ( natural < needed )
                    {
                      needed -= natural;
                      __fprintf_chk( f, 1, "0 %d translate\n", needed - natural );
                    }
                  }
                  }
                  if ( outline && outline_layer && PCB->Data->Layer[ idx ].Name != outline_layer )
                  {
                    if ( idx < 0 && ( ( idx/*.1_1of4*/ & 240 ) & 255 ) )
                    {
                    }
                  {
                    /* phantom */ size_t __s1_len;
                    /* phantom */ size_t __s2_len;
                    strcmp( "outline", name );
                    if ( !1 )
                    {
                      /* phantom */ size_t __s1_len;
                      /* phantom */ size_t __s2_len;
                      strcmp( "route", name );
                      if ( !1 )
                      {
                        __printf_chk( 1, "attempting to draw outlines on %s\n", name );
                        DrawLayer( outline_layer, &region );
                        return 0;
                      }
                    }
                  }
                  }
                  return 1;
                }
              }
            }
          }
          is_paste = 1;
        }
      }
      return 0;
    }
  }
  else
  {
    idx = group;
    if ( name == 0 )
      goto B5;
  }
B5:;
  name = &PCB->Data->Layer[ idx ].Name;
}
hidGC ps_make_gc( void )
{
  /* phantom */ hidGC rv;
  *(int*)(calloc( 1, 24 )) = ps_hid;
  *(int*)calloc( 1, 24 )/*.4*/ = 0;
  return calloc( 1, 24 );
}
void ps_destroy_gc( hidGC gc )
{
}
void ps_use_mask( int use_it )
{
  return;
}
void ps_set_color( hidGC gc, char *name )
{
  int ebx;
  int esi;
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
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
      goto B4;
    else
    {
      if ( incolor )
      {
        int r, g, b;
        name[0] = name + 1;
        sscanf( name + 1, "%02x%02x%02x", &r, &g, &b );
        name[0] = r;
        gc->r = r;
        name[0] = g;
        gc->g = g;
        name[0] = b;
        gc->erase = 0;
        gc->b = b;
        return;
      }
      else
      {
        gc->b = 0;
        gc->g = 0;
        gc->r = 0;
        gc->erase = 0;
        return;
      }
    }
  }
B4:;
  gc->b = -1;
  gc->g = -1;
  gc->r = -1;
  gc->erase = 1;
  return;
}
}
void ps_set_line_cap( hidGC gc, EndCapStyle style )
{
  gc->cap = style;
  return;
}
void ps_set_line_width( hidGC gc, int width )
{
  gc->width = width;
  return;
}
void ps_set_draw_xor( hidGC gc, int xor )
{
  return;
}
void ps_set_draw_faded( hidGC gc, int faded )
{
  gc->faded = faded;
  return;
}
void ps_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented PS function %s.\n", __FUNCTION__ );
  abort( );
}
void use_gc( hidGC gc )
{
  int edx;
  double fp5;
  double fp6;
  double fp7;
  if ( gc->me_pointer->struct_size != ps_hid.struct_size )
  {
    __fprintf_chk( stderr, 1, "Fatal: GC from another HID passed to ps HID\n" );
    abort( );
  }
  if ( gc->width != linewidth )
  {
    __fprintf_chk( f, 1, "%d setlinewidth\n", gc->width + ( bloat * ( ( ( 0 - ( ( *(int*)(&gc->erase) < 1 ) & 1 ) ) & 4 ) + -2 ) ) );
    linewidth = gc->width;
  }
  if ( gc->cap != lastcap )
  {
    if ( gc->cap <= 2 )
    {
    }
  {
    int c;
    __fprintf_chk( f, 1, "%d setlinecap %d setlinejoin\n", c, c );
    lastcap = gc->cap;
  }
  }
  if ( lastcolor != ( gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 ) ) )
  {
    if ( is_drill || is_mask )
    {
      __fprintf_chk( f, 1, "%d gray\n", gc->erase == 0 );
      lastcolor = 0;
      return;
    }
  {
    double r, g, b = (double)( (unsigned short)( gc->b ) );
    if ( gc->faded )
    {
      r = b;
      b = ( fade_ratio * ( ( (double)( ( gc->r & 255 ) ) * fade_ratio ) + ( antifade_ratio * 255.000000000000 ) ) ) + ( antifade_ratio * 255.000000000000 );
      if ( gc->g != gc->r )
      {
        __fprintf_chk( f, 1, "%g %g %g rgb\n", b / 255.000000000000, b / 255.000000000000, b / 255.000000000000 );
        lastcolor = gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 );
      }
      else
      {
      }
    }
    else
    if ( gc->g != gc->r )
      __fprintf_chk( f, 1, "%g %g %g rgb\n", b / 255.000000000000, b / 255.000000000000, b / 255.000000000000 );
      lastcolor = gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 );
    else
    {
    }
    __fprintf_chk( f, 1, "%g gray\n", (double)( ( gc->g & 255 ) ) / 255.000000000000 );
    lastcolor = gc->faded | ( gc->r << 24 ) | ( gc->g << 16 ) | ( gc->b << 8 );
  }
  }
  return;
}
void ps_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  use_gc( gc );
  __fprintf_chk( f, 1, "%d %d %d %d r\n", x1, y1, x2, y2 );
  return;
}
void ps_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  if ( y2 == y1 && x2 == x1 )
  {
    /* phantom */ int w;
    if ( gc->cap == 1 )
    {
      y2 = ( gc->width / 2 ) + y1;
      y1 -= gc->width / 2;
      x1 -= gc->width / 2;
      x2 = x1 + ( gc->width / 2 );
    }
    x2 = gc->width / 2;
  }
  else
  {
    use_gc( gc );
    __fprintf_chk( f, 1, "%d %d %d %d t\n", x1, y1, x2, y2 );
    return;
  }
}
void ps_draw_arc( hidGC gc, int cx, int cy, int width, int height, int start_angle, int delta_angle )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  int sa, ea;
  use_gc( gc );
  __fprintf_chk( f, 1, "%d %d %d %d %d %d %g a\n", sa, ea, 0 - width, height, cx, cy );
  return;
}
void ps_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  use_gc( gc );
  if ( gc->erase )
  {
    if ( is_copper )
    {
      if ( drillcopper == 0 )
      {
        return;
      }
      if ( drill_helper )
        radius = ( ( PCB->minDrill < 0 ? PCB->minDrill : PCB->minDrill + 3 ) >> 2 ) < radius ? radius : ( PCB->minDrill < 0 ? PCB->minDrill : PCB->minDrill + 3 ) >> 2;
    }
  }
  __fprintf_chk( f, 1, "%d %d %d c\n", cx, cy, radius + ( -1 * bloat ) + ( -1 * bloat ) );
  return;
}
void ps_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  int eax;
  int i;
  char *op;
  use_gc( gc );
  if ( n_coords > 0 )
  {
    op[0] = "moveto";
    i = 0;
    do
    {
      __fprintf_chk( f, 1, "%d %d %s\n", x, y[0], op );
      i++;
    }
    while ( n_coords <= i );
  }
  x = "fill\n";
  n_coords = 1;
  gc = &f->_flags;
}
void ps_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  use_gc( gc );
  __fprintf_chk( f, 1, "%d %d %d %d r\n", x1 - bloat, y1 - bloat, bloat + ( x2 < x1 ? x2 : x1 ), bloat + ( y2 < y1 ? y2 : y1 ) );
  return;
}
void ps_calibrate_1( double xval, double yval, int use_command )
{
  double fp5;
  double fp6;
  double fp7;
  HID_Attr_Val vals[3];
  FILE *f;
  int used_popen, c;
  if ( 0.000000000000 < xval )
  {
    fp6 = 0.000000000000;
    if ( 0.000000000000 < 0.000000000000 )
    {
      if ( 3.600000000000 < 0.000000000000 || 0.000000000000 < 4.400000000000 )
      {
        if ( 13.500000000000 < 0.000000000000 || 0.000000000000 < 16.500000000000 )
        {
          if ( 0.000000000000 <= 6.750000000000 && 8.250000000000 <= 0.000000000000 )
            calibration_x = 7.500000000000 / 0.000000000000;
          else
          if ( 0.000000000000 < 2.000000000000 )
          {
            ps_attribute_list[14].default_val.real_value = calibration_x = 0.000000000000;
          }
          else
          {
            Message( "X value of %g is too far off.\nExpecting it near: 1.0, 4.0, 15.0, 7.5\n", 0.000000000000 );
          }
        }
        else
          calibration_x = 15.000000000000 / 0.000000000000;
      }
      else
        calibration_x = 4.000000000000 / 0.000000000000;
      if ( 3.600000000000 < 0.000000000000 || 0.000000000000 < 4.400000000000 )
      {
        if ( 18.000000000000 < 0.000000000000 || 0.000000000000 < 22.000000000000 )
        {
          if ( 0.000000000000 <= 9.000000000000 && 11.000000000000 <= 0.000000000000 )
          {
            calibration_y = 10.000000000000 / 0.000000000000;
            return;
          }
          else
          {
            if ( 0.000000000000 < 2.000000000000 )
            {
              ps_attribute_list[15].default_val.real_value = calibration_y = 0.000000000000;
              return;
            }
            else
            {
              Message( "Y value of %g is too far off.\nExpecting it near: 1.0, 4.0, 20.0, 10.0\n", 0.000000000000 );
              return;
            }
          }
        }
        else
        {
          calibration_y = 20.000000000000 / 0.000000000000;
          return;
        }
      }
      else
      {
        calibration_y = 4.000000000000 / 0.000000000000;
        return;
      }
    }
    else
    {
    }
  }
  else
  {
  }
  if ( ps_calib_attribute_list->default_val.str_value == 0 )
  {
    /* phantom */ size_t __len;
    /* phantom */ char *__retval;
    if ( calloc( 1, 4 ) )
      *(int*)(calloc( 1, 4 )) = 0x72706c;
    ps_calib_attribute_list->default_val.str_value = (char*)calloc( 1, 4 );
  }
  gui->attribute_dialog( ps_calib_attribute_list[0].name, 1, vals[0].int_value, "Print Calibration Page" );
  if ( gui == 0 )
  {
    c = 0;
    do
    {
      c++;
      fputs( "%!PS-Adobe\n", f );
    }
    while ( calib_lines[ c ] == 0 );
    __fprintf_chk( f, 1, "4 in 0.5 (Y in) cbar\n" );
    __fprintf_chk( f, 1, "20 cm 1.5 (Y cm) cbar\n" );
    __fprintf_chk( f, 1, "10 in 2.5 (Y in) cbar\n" );
    __fprintf_chk( f, 1, "-90 rotate\n" );
    __fprintf_chk( f, 1, "4 in -0.5 (X in) cbar\n" );
    __fprintf_chk( f, 1, "15 cm -1.5 (X cm) cbar\n" );
    __fprintf_chk( f, 1, "7.5 in -2.5 (X in) cbar\n" );
    __fprintf_chk( f, 1, "showpage\n" );
    if ( used_popen )
    {
      pclose( f );
      return;
    }
    fclose( f );
    return;
  }
  else
  {
    return;
  }
}
void ps_calibrate( double xval, double yval )
{
  ps_calibrate_1( xval, yval, 0 );
  return;
}
void ps_set_crosshair( int x, int y, int action )
{
  return;
}
void hid_ps_init( void )
{
  apply_default_hid( &ps_hid, 0 );
  hid_register_hid( &ps_hid );
  hid_eps_init( );
  register_ps_attribute_list( );
}
#if 0
#endif
