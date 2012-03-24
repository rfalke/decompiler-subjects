#include "eps.c.h"
static FILE *f;
static int linewidth = -1;
static int lastgroup = -1;
static int lastcap = -1;
static int lastcolor = -1;
static int print_group[16];
static int print_layer[16];
static int fast_erase = -1;
static HID_Attribute eps_attribute_list[5] = { { "eps-file", "Encapsulated Postscript output file", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "eps-scale", "EPS scale", 2, 0, 100, { 0, 0, 1.000000000000 }
, 0, 0, 0 }
, { "as-shown", "Export layers as shown on screen", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "monochrome", "Convert to monochrome (like the ps export)", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "only-visible", "Limit the bounds of the EPS file to the visible items", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val eps_values[5];
static int comp_layer;
static int solder_layer;
static char *filename;
static BoxType *bounds;
static int in_mono;
static int as_shown;
static int is_mask;
static int is_paste;
static int is_drill;
static HID eps_hid = { 208, "eps", "Encapsulated Postscript", 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
void register_eps_attribute_list( void )
{
  hid_register_attributes( eps_attribute_list, 5 );
  return;
}
HID_Attribute *eps_get_export_options( int *n )
{
  int eax;
  static char *last_made_filename;
  if ( PCB )
    derive_default_filename( &PCB->Filename, eps_attribute_list, ".eps", &last_made_filename );
  if ( n )
  {
    n[0] = 5;
  }
  return eps_attribute_list;
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
void eps_hid_export_to_file( FILE *the_file, HID_Attr_Val *options )
{
  int eax;
  int ecx;
  int edx;
  static int saved_layer_stack[16];
  int i;
  BoxType region;
  /* phantom */ FlagType save_thindraw;
  region.X1 = 0;
  region.Y1 = 0;
  PCB->Flags.f &= -147457;
  f = the_file;
  region.X2 = PCB->MaxWidth;
  region.Y2 = PCB->MaxHeight;
  if ( options[4].int_value )
  {
    bounds = GetDataBoundingBox( *(int*)GetLayerGroupNumberByNumber( ecx + 1 )/*.8716*/ );
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
      if ( PCB->Data->Layer->On )
      {
        if ( *(int*)(*(int*)(edx + 8716) + ( i * 92 ) + 80) == 0 && *(int*)(*(int*)(edx + 8716) + ( i * 92 ) + 84) == 0 && *(int*)(*(int*)(edx + 8716) + ( i * 92 ) + 92) == 0 )
        {
          if ( *(int*)(*(int*)(edx + 8716) + ( i * 92 ) + 88) )
          {
          }
        }
        print_group[ GetLayerGroupNumberByNumber( i ) ] = 1;
      }
      i++;
    }
    while ( i + 1 < PCB->Data->LayerN );
    fast_erase = 0;
    if ( PCB->Data->LayerN > 0 )
    {
      i = 0;
      while ( 1 )
      {
        if ( print_group[ i ] )
        {
          i++;
          if ( PCB->Data->LayerN != i + 1 )
            continue;
        }
        else
        {
          i++;
          if ( PCB->Data->LayerN != i + 1 )
            continue;
        }
        fast_erase = ebx;
        if ( edi )
        {
          fast_erase = eax;
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
          if ( fast_erase )
            eps_hid.bits_at_12 = ( eps_hid.bits_at_12 | 8 ) & -17;
          else
            eps_hid.bits_at_12 = ( eps_hid.bits_at_12 & -9 ) | 16;
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
          as_shown = options[2].int_value;
          if ( options[2].int_value == 0 )
          {
            comp_layer = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
            solder_layer = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
            qsort( LayerStack, PCB->Data->LayerN, 4, &layer_sort );
          }
          __fprintf_chk( f, 1, "%%!PS-Adobe-3.0 EPSF-3.0\n" );
          linewidth = -1;
          lastcap = -1;
          lastgroup = -1;
          in_mono = options[3].int_value;
          lastcolor = -1;
          __fprintf_chk( f, 1, "%%%%BoundingBox: 0 0 %d %d\n", (int)( ( *(double*)(&options[1].int_value + 8) * 72.000000000000 * ( (double)( bounds->X2 - bounds->X1 ) / 100000.000000000000 ) ) + 1.000000000000 ), (int)( ( ( (double)( bounds->Y2 - bounds->Y1 ) / 100000.000000000000 ) * 72.000000000000 * *(double*)(&options[1].int_value + 8) ) + 1.000000000000 ) );
          __fprintf_chk( f, 1, "%%%%Pages: 1\n" );
          __fprintf_chk( f, 1, "save countdictstack mark newpath /showpage {} def /setpagedevice {pop} def\n" );
          __fprintf_chk( f, 1, "%%%%EndProlog\n" );
          __fprintf_chk( f, 1, "%%%%Page: 1 1\n" );
          __fprintf_chk( f, 1, "%%%%BeginDocument: %s\n\n", filename );
          __fprintf_chk( f, 1, "72 72 scale\n" );
          __fprintf_chk( f, 1, "0.00001 dup neg scale\n" );
          __fprintf_chk( f, 1, "%g dup scale\n", options[1].real_value );
          __fprintf_chk( f, 1, "%d %d translate\n", 0 - bounds->X1, 0 - bounds->Y2 );
          if ( options[2].int_value == 0 || Settings.ShowSolderSide == 0 )
          {
            linewidth = -1;
            lastcap = -1;
            lastcolor = -1;
            __fprintf_chk( f, 1, "/nclip { %d %d moveto %d %d lineto %d %d lineto %d %d lineto %d %d lineto eoclip newpath } def\n", bounds->X1 + -1000, bounds->Y1 + -1000, bounds->X1 + -1000, bounds->Y2 + 1000, bounds->X2 + 1000, bounds->Y2 + 1000, bounds->X2 + 1000, bounds->Y1 + -1000, bounds->X1 + -1000, bounds->Y1 + -1000 );
            __fprintf_chk( f, 1, "/t { moveto lineto stroke } bind def\n" );
            __fprintf_chk( f, 1, "/tc { moveto lineto strokepath nclip } bind def\n" );
            __fprintf_chk( f, 1, "/r { /y2 exch def /x2 exch def /y1 exch def /x1 exch def\n" );
            __fprintf_chk( f, 1, "     x1 y1 moveto x1 y2 lineto x2 y2 lineto x2 y1 lineto closepath fill } bind def\n" );
            __fprintf_chk( f, 1, "/c { 0 360 arc fill } bind def\n" );
            __fprintf_chk( f, 1, "/cc { 0 360 arc nclip } bind def\n" );
            __fprintf_chk( f, 1, "/a { gsave setlinewidth translate scale 0 0 1 5 3 roll arc stroke grestore} bind def\n" );
            lastgroup = -1;
            hid_expose_callback( &eps_hid, bounds, 0 );
            __fprintf_chk( f, 1, "showpage\n" );
            __fprintf_chk( f, 1, "%%%%EndDocument\n" );
            __fprintf_chk( f, 1, "%%%%Trailer\n" );
            __fprintf_chk( f, 1, "cleartomark countdictstack exch sub { end } repeat restore\n" );
            __fprintf_chk( f, 1, "%%%%EOF\n" );
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
            PCB->Flags.t[7] = ebp_53;
            PCB->Flags.t[6] = ebp_54;
            PCB->Flags.t[5] = ebp_55;
            PCB->Flags.t[4] = ebp_56;
            PCB->Flags.t[3] = ebp_57;
            PCB->Flags.t[2] = ebp_58;
            PCB->Flags.t[1] = ebp_59;
            PCB->Flags.t[0] = ebp_60;
            PCB->Flags.f = ebp_52;
            return;
          }
          __fprintf_chk( f, 1, "-1 1 scale %d 0 translate\n", bounds->X1 - bounds->X2 );
          linewidth = -1;
          lastcap = -1;
          lastcolor = -1;
          __fprintf_chk( f, 1, "/nclip { %d %d moveto %d %d lineto %d %d lineto %d %d lineto %d %d lineto eoclip newpath } def\n", bounds->X1 + -1000, bounds->Y1 + -1000, bounds->X1 + -1000, bounds->Y2 + 1000, bounds->X2 + 1000, bounds->Y2 + 1000, bounds->X2 + 1000, bounds->Y1 + -1000, bounds->X1 + -1000, bounds->Y1 + -1000 );
          __fprintf_chk( f, 1, "/t { moveto lineto stroke } bind def\n" );
          __fprintf_chk( f, 1, "/tc { moveto lineto strokepath nclip } bind def\n" );
          __fprintf_chk( f, 1, "/r { /y2 exch def /x2 exch def /y1 exch def /x1 exch def\n" );
          __fprintf_chk( f, 1, "     x1 y1 moveto x1 y2 lineto x2 y2 lineto x2 y1 lineto closepath fill } bind def\n" );
          __fprintf_chk( f, 1, "/c { 0 360 arc fill } bind def\n" );
          __fprintf_chk( f, 1, "/cc { 0 360 arc nclip } bind def\n" );
          __fprintf_chk( f, 1, "/a { gsave setlinewidth translate scale 0 0 1 5 3 roll arc stroke grestore} bind def\n" );
          lastgroup = -1;
          hid_expose_callback( &eps_hid, bounds, 0 );
          __fprintf_chk( f, 1, "showpage\n" );
          __fprintf_chk( f, 1, "%%%%EndDocument\n" );
          __fprintf_chk( f, 1, "%%%%Trailer\n" );
          __fprintf_chk( f, 1, "cleartomark countdictstack exch sub { end } repeat restore\n" );
          __fprintf_chk( f, 1, "%%%%EOF\n" );
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
          PCB->Flags.t[7] = ebp_53;
          PCB->Flags.t[6] = ebp_54;
          PCB->Flags.t[5] = ebp_55;
          PCB->Flags.t[4] = ebp_56;
          PCB->Flags.t[3] = ebp_57;
          PCB->Flags.t[2] = ebp_58;
          PCB->Flags.t[1] = ebp_59;
          PCB->Flags.t[0] = ebp_60;
          PCB->Flags.f = ebp_52;
          return;
        }
      }
    }
  }
  }
  else
    fast_erase = 0;
  fast_erase = 1;
  print_group[ GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 ) ] = 1;
  fast_erase = eax;
}
void eps_do_export( HID_Attr_Val *options )
{
  int eax;
  int edx;
  /* phantom */ int i;
  int save_ons[18];
  if ( options == 0 )
  {
    eps_get_export_options( 0 );
    options = eps_values;
    do
    {
      eps_values[ 0 >> 4 ].int_value = eps_attribute_list->default_val.int_value;
      *(int*)(options + 0 + 4) = &eps_attribute_list->default_val.str_value[0];
      *(int*)(options + 0 + 8) = &eps_attribute_list->default_val.real_value & 0xFFFFFFFF;
      eps_attribute_list->default_val.int_value = eps_attribute_list[1].default_val.int_value;
      *(int*)(options + 0 + 12) = &eps_attribute_list[1].default_val.real_value << 32;
    }
    while ( 0 + 16 + 16 != 80 );
    options = eps_values;
  }
  filename = options->str_value;
  if ( options->str_value == 0 )
    filename = "pcb-out.eps";
  f = (FILE*)fopen( "pcb-out.eps", "w" );
  if ( f == 0 )
  {
    perror( filename );
  }
  else
  {
    if ( options[2].int_value == 0 )
    {
      hid_save_and_show_layer_ons( save_ons );
    }
    eps_hid_export_to_file( f, options );
    if ( options[2].int_value == 0 )
      hid_restore_layer_ons( save_ons );
    fclose( f );
  }
  return;
}
void eps_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  hid_register_attributes( eps_attribute_list, 5 );
  argv = argv;
  argc = argc;
}
int eps_set_layer( char *name, int group, int empty )
{
  int eax;
  int ecx;
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
          return PCB->ElementOn;
        }
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        strcmp( "invisible", name );
        if ( 1 )
        {
          return PCB->ElementOn;
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
              is_paste = 1;
            else
            {
            }
          }
        }
        is_paste = 0;
        if ( ecx )
        {
          return PCB->ElementOn;
        }
        __fprintf_chk( f, 1, "%% Layer %s group %d drill %d mask %d\n", name, group, esi, 0 );
        if ( as_shown )
        {
          if ( idx + 4079 <= 1 )
          {
            if ( (unsigned char)( ( ( idx >> 1 ) ^ 1 ) & 1 ) != (unsigned char)( Settings.ShowSolderSide != 0 ) )
            {
              return PCB->ElementOn;
            }
          }
        }
        else
        if ( idx + 4079 + 4079 <= 1 )
        {
          return txt[ idx + 4079 + 38512 ];
        }
      }
      }
      else
      {
        if ( ( idx & 240 ) == 112 )
        {
        }
        if ( ( idx & 240 ) + -128 == 0 )
        {
        }
        else
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          strcmp( "invisible", name );
        }
      }
    }
  }
  else
  {
    idx = PCB->Font.Symbol[255].Delta;
    if ( name == 0 )
      goto B5;
    else
    {
    }
  }
B5:;
  name = &PCB->Data->Layer[ idx ].Name;
  if ( idx >= 0 )
  {
  }
  else
  {
  }
}
hidGC eps_make_gc( void )
{
  /* phantom */ hidGC rv;
  *(int*)(calloc( 1, 16 )) = 0;
  *(int*)calloc( 1, 16 )/*.4*/ = 0;
  *(int*)calloc( 1, 16 )/*.8*/ = 0;
  return calloc( 1, 16 );
}
void eps_destroy_gc( hidGC gc )
{
}
void eps_use_mask( int use_it )
{
  static int mask_pending;
  if ( use_it )
  {
    if ( use_it == 2 && mask_pending == 0 )
    {
      mask_pending = 1;
      __fprintf_chk( f, 1, "gsave\n" );
      return;
    }
  }
  else
  if ( mask_pending )
  {
    mask_pending = 0;
    __fprintf_chk( f, 1, "grestore\n" );
    lastcolor = -1;
    return;
  }
  return;
}
void eps_set_color( hidGC gc, char *name )
{
  int edx;
  int ebx;
  int esi;
  static void *cache;
  hidval cval;
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  strcmp( "erase", name );
  if ( 1 )
  {
    gc->color = 16777215;
    gc->erase = fast_erase == 0;
  }
  else
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( "drill", name );
    if ( 1 )
    {
      gc->color = 16777215;
      gc->erase = 0;
    }
    else
    {
      gc->erase = 0;
      if ( hid_cache_color( 0, name, &cval, &cache ) )
      {
        gc->color = cval.lval;
      }
      else
      if ( in_mono == 0 && name[0] == '#' )
      {
        unsigned int r, g, b;
        sscanf( name + 1 + 1, "%2x%2x%2x", &r, &g, &b );
        gc->color = b + ( r << 16 ) + ( g << 8 );
      }
      else
      {
        gc->color = 0;
      }
    }
  }
  return;
}
}
void eps_set_line_cap( hidGC gc, EndCapStyle style )
{
  gc->cap = style;
  return;
}
void eps_set_line_width( hidGC gc, int width )
{
  gc->width = width;
  return;
}
void eps_set_draw_xor( hidGC gc, int xor )
{
  return;
}
void eps_set_draw_faded( hidGC gc, int faded )
{
  return;
}
void eps_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented EPS function %s.\n", __FUNCTION__ );
  abort( );
}
void use_gc( hidGC gc )
{
  int edx;
  if ( gc->width != linewidth )
  {
    __fprintf_chk( f, 1, "%d setlinewidth\n", gc->width );
    linewidth = gc->width;
  }
  if ( gc->cap != lastcap )
  {
    if ( gc->cap <= 2 )
    {
    }
  {
    int c;
    __fprintf_chk( f, 1, "%d setlinecap\n", c );
    lastcap = gc->cap;
  }
  }
  if ( gc->color != lastcolor )
  {
    /* phantom */ int c;
    __fprintf_chk( f, 1, "%g %g %g setrgbcolor\n", (double)( ( gc->color >> 16 ) & 255 ) / 255.000000000000, (double)( ah ) / 255.000000000000, (double)( gc->color ) / 255.000000000000 );
    lastcolor = gc->color;
  }
  return;
}
void eps_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  use_gc( gc );
  __fprintf_chk( f, 1, "%d %d %d %d r\n", x1, y1, x2, y2 );
  return;
}
eps.c:534:0x81182B6: sincos:  literal arg 1:  esi:{ }
// Lost vars at line 98 through condition folding
void eps_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ int w;
  if ( y2 == y1 && x2 == x1 )
  {
    if ( gc->cap == 1 )
    {
      y2 = y1 + ( gc->width / 2 );
      y1 -= gc->width / 2;
      x2 = x1 + ( gc->width / 2 );
      x1 -= gc->width / 2;
    }
    x2 = gc->width / 2;
  }
  else
  {
    use_gc( gc );
    if ( gc->erase && !1 )
    {
      ;
      __fprintf_chk( f, 1, "%d %d moveto ", (int)( (double)( x1 ) + ( ebp_32 * (double)( gc->width / 2 ) ) ), (int)( (double)( y1 ) + ( cos( atan2( (double)( y2 - y1 ), (double)( x2 - x1 ) ) ) * (double)( 0 - ( gc->width / 2 ) ) ) ) );
      __fprintf_chk( f, 1, "%d %d %d %g %g arc\n", ebp_52, ebp_60, ebx, ebp_72 - 90.000000000000, 90.000000000000 );
      __fprintf_chk( f, 1, "%d %d %d %g %g arc\n", ebp_56, y1, ebx, ebp_88, ebp_72 + 270.000000000000 );
      y1 = "nclip\n";
      x1 = 1;
      gc = &f->_flags;
    }
    __fprintf_chk( f, 1, "%d %d %d %d %s\n", x1, y1, x2, y2, "tc" );
    return;
  }
}
void eps_draw_arc( hidGC gc, int cx, int cy, int width, int height, int start_angle, int delta_angle )
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
void eps_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  use_gc( gc );
  __fprintf_chk( f, 1, "%d %d %d %s\n", cx, cy, radius, *(int*)(gc + 12) != 0 ? "c" : "cc" );
  return;
}
void eps_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
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
void eps_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  use_gc( gc );
  __fprintf_chk( f, 1, "%d %d %d %d r\n", x1, y1, x2, y2 );
  return;
}
void eps_calibrate( double xval, double yval )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented EPS function %s.\n", __FUNCTION__ );
  abort( );
}
void eps_set_crosshair( int x, int y, int action )
{
  return;
}
void hid_eps_init( void )
{
  apply_default_hid( &eps_hid, 0 );
  hid_register_hid( &eps_hid );
  return;
}
#if 0
#endif
