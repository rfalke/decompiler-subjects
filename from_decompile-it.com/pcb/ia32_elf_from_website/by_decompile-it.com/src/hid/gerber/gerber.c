#include "gerber.c.h"
static int verbose;
static int all_layers;
static int is_mask;
static int was_drill;
static int is_drill;
static int current_mask;
static int flash_drills;
static int global_aperture_count;
static int global_aperture_sizes[2560];
static ApertureShape global_aperture_shapes[2560];
static Apertures *layerapps;
static Apertures *curapp;
static int n_layerapps;
static int c_layerapps;
PendingDrills *pending_drills;
int n_pending_drills;
int max_pending_drills;
static FILE *f;
static char *filename;
static char *filesuff;
static char *layername;
static int lncount;
static int finding_apertures;
static int pagecount;
static int linewidth = -1;
static int lastgroup = -1;
static int lastcap = -1;
static int lastcolor = -1;
static int print_group[16];
static int print_layer[16];
static int lastX;
static int lastY;
static HID_Attribute gerber_options[3] = { { "gerberfile", "Gerber output file base", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "all-layers", "Print all layers, even empty ones", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "verbose", "print file names and aperture counts", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val gerber_values[3];
static HID gerber_hid = { 208, "gerber", "RS-274X (Gerber) export.", '$', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
int findApertureCode( int width, ApertureShape shape )
{
  int i;
  if ( width )
  {
    i = global_aperture_count;
    if ( global_aperture_count > 0 )
    {
      i = 0;
      do
      {
        if ( global_aperture_sizes[ i ] == width && global_aperture_shapes[ i ] == shape )
        {
          curapp->aperture_used[ i ] = 1;
          curapp->some_apertures = 1;
          break;
        }
        i++;
      }
      while ( i <= i + 1 );
      if ( i <= 2559 )
      {
        global_aperture_sizes[ i ] = width;
        global_aperture_count = i + 1;
        global_aperture_shapes[ i ] = shape;
        curapp->aperture_used[ i ] = 1;
        curapp->some_apertures = 1;
        return i + 11;
      }
      Message( "Error, too many apertures needed for Gerber file.\n" );
      return 10;
    }
    global_aperture_sizes[ i ] = width;
    global_aperture_count = i + 1;
    global_aperture_shapes[ i ] = shape;
    curapp->aperture_used[ i ] = 1;
    curapp->some_apertures = 1;
    return i + 11;
  }
  return i + 11;
}
HID_Attribute *gerber_get_export_options( int *n )
{
  int eax;
  static char *last_made_filename;
  if ( PCB )
    derive_default_filename( &PCB->Filename, gerber_options, "", &last_made_filename );
  if ( n )
  {
    n[0] = 3;
  }
  return gerber_options;
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
void maybe_close_f( void )
{
  if ( f )
  {
    if ( was_drill )
      __fprintf_chk( f, 1, "M30\r\n" );
    else
      __fprintf_chk( f, 1, "M02*\r\n" );
    fclose( f );
  }
  f = 0;
  return;
}
void gerber_do_export( HID_Attr_Val *options )
{
  int eax;
  static int saved_layer_stack[16];
  char *fnbase;
  int i;
  BoxType region;
  int save_ons[18];
  /* phantom */ FlagType save_thindraw;
  PCB->Flags.f &= -147457;
  if ( options == 0 )
  {
    gerber_get_export_options( 0 );
    options = gerber_values;
    gerber_values[0].int_value = gerber_options->default_val.int_value;
    gerber_values->str_value = gerber_options->default_val.str_value;
    gerber_values->real_value = gerber_options->default_val.real_value;
    gerber_values[1].int_value = gerber_options[1].default_val.int_value;
    gerber_values[1].str_value = gerber_options[1].default_val.str_value;
    gerber_values[1].real_value = gerber_options[1].default_val.real_value;
    gerber_values[2].int_value = gerber_options[2].default_val.int_value;
    gerber_values[2].str_value = gerber_options[2].default_val.str_value;
    gerber_values[2].real_value = gerber_options[2].default_val.real_value;
  }
  fnbase[0] = options->str_value == 0 ? options->str_value : "pcb-out";
  verbose = options[2].int_value;
  all_layers = options[1].int_value;
  filename = (char*)MyRealloc( (void*)filename, strlen( options->str_value == 0 ? options->str_value : "pcb-out" ) + 40, "gerber" );
  strcpy( filename, fnbase );
  filesuff = filename + strlen( filename );
  if ( all_layers )
  {
    mymemset( print_group, 1, 64 );
    mymemset( print_layer, 1, 64 );
  }
  else
  {
    mymemset( print_group, 0, 64 );
    mymemset( print_layer, 0, 64 );
  }
  hid_save_and_show_layer_ons( save_ons );
  if ( PCB->Data->LayerN > 0 )
  {
    i = 0;
  {
    do
    {
      /* phantom */ LayerType *layer;
      if ( PCB->Data->Layer->LineN == 0 && *(int*)(*(int*)strlen( filename )/*.8716*/ + ( i * 92 ) + 84) == 0 && *(int*)(*(int*)strlen( filename )/*.8716*/ + ( i * 92 ) + 92) == 0 )
      {
        if ( *(int*)(*(int*)strlen( filename )/*.8716*/ + ( i * 92 ) + 88) )
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
  qsort( LayerStack, PCB->Data->LayerN, 4, &layer_sort );
  region.X1 = 0;
  region.Y1 = 0;
  linewidth = -1;
  lastcap = -1;
  lastcolor = -1;
  layerapps = 0;
  region.X2 = PCB->MaxWidth;
  f = 0;
  region.Y2 = PCB->MaxHeight;
  pagecount = 1;
  n_layerapps = 0;
  lastgroup = -1;
  c_layerapps = 0;
  finding_apertures = 1;
  hid_expose_callback( &gerber_hid, &region, 0 );
  c_layerapps = 0;
  finding_apertures = 0;
  hid_expose_callback( &gerber_hid, &region, 0 );
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
  maybe_close_f( );
  hid_restore_layer_ons( save_ons );
  PCB->Flags.t[7] = PCB->Flags.t[7];
  PCB->Flags.f = PCB->Flags.f;
  PCB->Flags.t[6] = PCB->Flags.t[6];
  PCB->Flags.t[5] = PCB->Flags.t[5];
  PCB->Flags.t[4] = PCB->Flags.t[4];
  PCB->Flags.t[3] = PCB->Flags.t[3];
  PCB->Flags.t[2] = PCB->Flags.t[2];
  PCB->Flags.t[1] = PCB->Flags.t[1];
  PCB->Flags.t[0] = PCB->Flags.t[0];
  return;
}
void gerber_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  hid_register_attributes( gerber_options, 3 );
  argv = argv;
  argc = argc;
}
int drill_sort( void *va, void *vb )
{
  int ecx;
  /* phantom */ PendingDrills *a;
  /* phantom */ PendingDrills *b;
  return ((int*)vb) != ((int*)va) ? 0 : ((int*)va) - ((int*)vb);
}
int gerber_set_layer( char *name, int group, int empty )
{
  int eax;
  int ecx;
  int edx;
  char *cp;
  int idx;
  if ( group >= 0 && group < PCB->Data->LayerN )
  {
    pwentry = &name[0];
    idx = pwentry[265].pw_shell;
    if ( name == 0 )
      goto B5;
    else
    {
      if ( idx < 0 || PCB->Data->LayerN <= idx || print_layer[ idx ] )
      {
        /* phantom */ size_t __s1_len;
        /* phantom */ size_t __s2_len;
        name[0] = name;
        strcmp( "invisible", name );
        if ( !1 && ( idx >= 0 || pwentry ) )
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          name[0] = name;
          flash_drills = 0;
          strcmp( "outline", name );
          if ( !1 )
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            name[0] = PCB->Data->Layer[ idx ].Name;
            strcmp( "route", &PCB->Data->Layer[ idx ].Name );
            if ( 1 )
              goto B16;
            else
            {
              if ( is_drill && n_pending_drills )
              {
                int i;
                pwentry = &pending_drills->diam;
                qsort( pending_drills, pwentry, 12, &drill_sort );
                if ( n_pending_drills > 0 )
                {
                  i = 0;
                  do
                  {
                    if ( i )
                    {
                      pwentry = &pending_drills[1].diam;
                      if ( *(int*)(pending_drills + 0 + 12) == *(int*)(pending_drills + 0) )
                      {
                        i++;
                        pwentry = &f->_flags;
                        __fprintf_chk( f, 1, "X%06ldY%06ld\r\n", pending_drills->x / 10, ( PCB->MaxHeight - pending_drills->y ) / 10 );
                      }
                    }
                    else
                      pwentry = &pending_drills[1].diam;
                  {
                    int ap;
                    pwentry = &f->_flags;
                    __fprintf_chk( f, 1, "T%02d\r\n", pwentry );
                    i++;
                    pwentry = &f->_flags;
                    __fprintf_chk( f, 1, "X%06ldY%06ld\r\n", pending_drills->x / 10, ( PCB->MaxHeight - pending_drills->y ) / 10 );
                  }
                  }
                  while ( i < n_pending_drills );
                }
                pwentry = &pending_drills->diam;
                free( pending_drills );
                max_pending_drills = 0;
                n_pending_drills = 0;
                pending_drills = 0;
              }
              if ( idx >= 0 )
                is_drill = 0;
              else
              {
                if ( ( idx & 240 ) != 64 && ( idx & 240 ) != 48 )
                  is_drill = 0;
                else
                  is_drill = 1;
                pwentry = 1;
                is_mask = 0;
                current_mask = 0;
                if ( group < 0 || lastgroup != group )
                {
                  time_t currenttime;
                  char utcTime[64];
                  struct passwd *pwentry;
                  char *sext;
                  int i;
                  int some_apertures;
                  lastX = -1;
                  lastY = -1;
                  lastgroup = group;
                  lastcolor = 0;
                  linewidth = -1;
                  lastcap = -1;
                  if ( n_layerapps <= c_layerapps )
                  {
                    n_layerapps = c_layerapps + 1;
                    pwentry = &layerapps->some_apertures;
                    layerapps = &pwentry[0].pw_name[0];
                    if ( pwentry + ( n_layerapps * 10244 ) <= pwentry + ( n_layerapps * 10244 ) )
                      goto B79;
                    else
                    {
                      do
                      {
                        *(int*)&pwentry[365].pw_shell[0] = 0;
                        pwentry = 0;
                        do
                        {
                          pwentry += 0;
                        }
                        while ( &pwentry->pw_name[1] != 2560 );
                      }
                      while ( pwentry + ( n_layerapps * 10244 ) <= pwentry + ( n_layerapps * 10244 ) + 10244 + 10244 );
                    }
B79:;
                    pwentry = &c_layerapps;
                  }
                  else
                    pwentry = &c_layerapps;
                  pwentry += 0;
                  c_layerapps = &pwentry->pw_name[1];
                  curapp = layerapps + ( c_layerapps * 10244 );
                  if ( finding_apertures == 0 )
                  {
                    if ( layerapps->some_apertures || all_layers )
                    {
                      maybe_close_f( );
                      sext[0] = ".gbr";
                      pwentry = idx + 4048;
                      pagecount++;
                      pwentry = &filesuff[0];
                      strcpy( filesuff, (char*)pwentry );
                      pwentry = &filesuff[0];
                      strcat( filesuff, sext );
                      pwentry = &filename[0];
                      f = &pwentry[0].pw_name[0];
                      if ( pwentry == 0 )
                      {
                        pwentry = &filename[0];
                        Message( "Error:  Could not open %s for writing.\n", filename );
                        pwentry = 1;
                        if ( 0 ^ 0 )
                        {
                          __stack_chk_fail( );
                        }
                        return pwentry;
                      }
                      else
                      {
                        was_drill = is_drill;
                        if ( verbose )
                        {
                          int c = 0;
                          pwentry = 0;
                          sext[0] = sext;
                          do
                          {
                            c = ( c + 1 ) - ( ( *(int*)(curapp + ( pwentry << 2 ) + 4) < 1 ) & 1 );
                            pwentry += 0;
                          }
                          while ( &pwentry->pw_name[1] != 2560 );
                          pwentry = c == 1 ? "s" : "";
                          __printf_chk( 1, "Gerber: %d aperture%s in %s\n", c, c == 1 ? "s" : "", filename );
                          pwentry = &f->_flags;
                        }
                        if ( is_drill )
                        {
                          i = 0;
                          __fprintf_chk( pwentry, 1, "M48\r\nINCH\r\n" );
                          do
                          {
                            pwentry = &curapp->some_apertures;
                            if ( curapp->aperture_used[ i ] )
                            {
                              pwentry = &f->_flags;
                              __fprintf_chk( f, 1, "T%02dC%.3f\r\n", i + 11 );
                            }
                            i++;
                          }
                          while ( i + 1 != 2560 );
                        }
                        else
                        {
                        {
                          /* phantom */ char *fmt;
                          __fprintf_chk( pwentry, 1, "G04 start of page %d for group %d idx %d *\r\n", pagecount, group, idx );
                          currenttime = pwentry;
                          pwentry = &currenttime;
                          strftime( utcTime, 64, "%c UTC", pwentry );
                          if ( PCB->Data->Layer[ idx ].Name == 0 || PCB->Data->Layer[ idx ].Name[0] == 0 )
                          {
                          }
                          pwentry = &PCB->Name[0];
                          if ( PCB->Name == 0 || pwentry == 0 )
                            pwentry = "(unknown)";
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 Title: %s, %s *\r\n", (char*)pwentry, &PCB->Data->Layer[ idx ].Name );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 Creator: %s 20091103 *\r\n", Progname );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 CreationDate: %s *\r\n", utcTime );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 For: %s *\r\n", (char*)pwentry );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 Format: Gerber/RS-274X *\r\n" );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 PCB-Dimensions: %d %d *\r\n", PCB->MaxWidth, PCB->MaxHeight );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "G04 PCB-Coordinate-Origin: lower left *\r\n" );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "%%MOIN*%%\r\n" );
                          pwentry = &f->_flags;
                          __fprintf_chk( f, 1, "%%FSLAX25Y25*%%\r\n" );
                          pwentry = &layername[0];
                          if ( layername )
                            free( pwentry );
                          pwentry = &filesuff[0];
                          layername = (char*)pwentry;
                          pwentry = 0;
                          cp[0] = layername;
                          if ( layername )
                          {
                            do
                            {
                              pwentry = pwentry;
                              if ( ( *(char*)(pwentry + ( layername * 2 )) & 8 ) & 255 )
                              {
                                int __res;
                                pwentry = &__res;
                                if ( cp[0] + 128 <= 383 )
                                {
                                  pwentry = &pwentry->pw_name[0];
                                }
                                cp[0] = pwentry;
                              }
                              else
                                cp[0] = '_';
                              cp[0] = cp + 1;
                            }
                            while ( cp[0] );
                            cp[0] = layername;
                          }
                          pwentry = &f->_flags;
                          some_apertures = 0;
                          i = 0;
                          __fprintf_chk( f, 1, "%%LN%s*%%\r\n", cp );
                          lncount = 1;
                          do
                          {
                            pwentry = &curapp->some_apertures;
                            if ( curapp->aperture_used[ i ] )
                            {
                              pwentry = &global_aperture_shapes[ i ];
                              some_apertures++;
                              if ( global_aperture_shapes[ i ] != OCTAGON )
                              {
                                if ( !0 )
                                {
                                  if ( pwentry == 2 )
                                    __fprintf_chk( f, 1, "%%ADD%dR,%.4fX%.4f*%%\r\n", i + 11 );
                                }
                                else
                                {
                                  __fprintf_chk( strlen( sext ), 1, "%%ADD%dC,%.4f*%%\r\n", cp[0] );
                                }
                              }
                              else
                                __fprintf_chk( f, 1, "%%AMOCT%d*5,0,8,0,0,%.4f,22.5*%%\r\n%%ADD%dOCT%d*%%\r\n", i + 11, i + 11, i + 11 );
                            }
                            i++;
                          }
                          while ( i + 1 != 2560 );
                          if ( some_apertures == 0 )
                          {
                          }
                        }
                        }
                        pwentry = &f->_flags;
                        __fprintf_chk( f, 1, ebp_160, ebp_160 );
                        pwentry = 1;
                      }
                    }
                  }
                }
                pwentry = 1;
              }
              is_mask = 0;
              current_mask = 0;
            }
          }
B16:;
          flash_drills = 1;
        }
      }
      pwentry = 0;
    }
  }
  else
  {
    idx = group;
    if ( name == 0 )
      goto B5;
  }
B5:;
  pwentry = &PCB->Data->Layer[ idx ].Name[0];
}
hidGC gerber_make_gc( void )
{
  /* phantom */ hidGC rv;
  *(int*)(calloc( 1, 20 )) = 0;
  return calloc( 1, 20 );
}
void gerber_destroy_gc( hidGC gc )
{
}
void gerber_use_mask( int use_it )
{
  current_mask = use_it;
  return;
}
void gerber_set_color( hidGC gc, char *name )
{
  int eax;
  int esi;
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  strcmp( "erase", name );
  if ( 1 )
  {
    gc->color = 1;
    gc->erase = 1;
    gc->drill = 0;
  }
  else
  {
    /* phantom */ size_t __s1_len;
    /* phantom */ size_t __s2_len;
    strcmp( "drill", name );
    if ( 1 )
    {
      gc->color = 1;
      gc->erase = 0;
      gc->drill = 1;
    }
    else
    {
      gc->color = 0;
      gc->erase = 0;
      gc->drill = 0;
    }
  }
  return;
}
}
void gerber_set_line_cap( hidGC gc, EndCapStyle style )
{
  gc->cap = style;
  return;
}
void gerber_set_line_width( hidGC gc, int width )
{
  gc->width = width;
  return;
}
void gerber_set_draw_xor( hidGC gc, int xor )
{
  return;
}
void gerber_set_draw_faded( hidGC gc, int faded )
{
  return;
}
void gerber_set_line_cap_angle( hidGC gc, int x1, int y1, int x2, int y2 )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented Gerber function %s.\n", __FUNCTION__ );
  abort( );
}
void use_gc( hidGC gc, int radius )
{
  int eax;
  int edx;
  int c;
  if ( radius )
  {
    radius = radius * 2;
    if ( linewidth == ( radius * 2 ) && lastcap == 2 )
    {
      return;
    }
    if ( findApertureCode( radius, 0 ) <= 0 )
      __fprintf_chk( stderr, 1, "error: aperture for radius %d type ROUND is %d\n", radius, findApertureCode( radius, 0 ) );
    if ( f && is_drill == 0 )
    {
      __fprintf_chk( f, 1, "G54D%d*", c );
    }
    linewidth = radius;
    lastcap = 2;
    return;
  }
  else
  {
    if ( gc->width != linewidth )
    {
    }
    else
    if ( gc->cap == lastcap )
    {
      return;
    }
  {
    int ap;
    linewidth = gc->width;
    c = 2;
    lastcap = gc;
    if ( findApertureCode( linewidth, radius ) <= 0 )
      __fprintf_chk( stderr, 1, "error: aperture for width %d type %s is %d\n", linewidth, c == 0 ? "SQUARE" : "ROUND", ap );
    if ( f )
    {
      __fprintf_chk( f, 1, "G54D%d*", ap );
    }
  }
  }
  return;
}
void gerber_draw_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int x[5];
  int y[5];
  y[4] = y1;
  y[0] = y1;
  y[3] = y1;
  y[1] = y2;
  y[2] = y2;
  x[4] = x1;
  x[0] = x1;
  x[1] = x1;
  x[2] = x2;
  x[3] = x2;
  gerber_fill_polygon( gc, 5, x, y );
  return;
}
void gerber_draw_line( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int eax;
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  double (null);
  Boolean m;
  if ( y2 != y1 && x2 != x1 && gc->cap == 1 )
  {
    int x[5], y[5];
    float tx, ty, theta;
    ;
    x[0] = (int)( (double)( x1 ) - ( (double)( gc->width ) * 0.500000000000 * cos( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    y[0] = (int)( (double)( y1 ) - ( (double)( gc->width ) * 0.500000000000 * sin( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    x[1] = (int)( (double)( x2 ) + ( (double)( gc->width ) * 0.500000000000 * sin( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    y[1] = (int)( 0.000000000000 - ( (double)( gc->width ) * 0.500000000000 * cos( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    y[4] = (int)( (double)( y1 ) - ( (double)( gc->width ) * 0.500000000000 * sin( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    x[4] = (int)( (double)( x1 ) - ( (double)( gc->width ) * 0.500000000000 * cos( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    x[2] = (int)( (double)( x2 ) + ( (double)( gc->width ) * 0.500000000000 * cos( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    y[2] = (int)( (double)( y2 ) + ( (double)( gc->width ) * 0.500000000000 * sin( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    x[3] = (int)( (double)( x1 ) - ( (double)( gc->width ) * 0.500000000000 * sin( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
    y[3] = (int)( ( (double)( gc->width ) * 0.500000000000 * cos( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) + (double)( y1 ) );
    gerber_fill_polygon( &x[4], x[4], &x[4], (float)( (double)( gc->width ) * 0.500000000000 * sin( ( (double)( gc->width ) * 0.500000000000 ) + 0.785398163397 ) * 1.414213562373 ) );
  }
  else
  {
    use_gc( gc, 0 );
    if ( f )
    {
      *(int*)&m = 0;
      if ( x1 != lastX )
      {
        lastX = x1;
        __fprintf_chk( f, 1, "X%ld", x1 );
        *(int*)&m = 1;
      }
      if ( y1 != lastY )
      {
        lastY = y1;
        __fprintf_chk( f, 1, "Y%ld", PCB->MaxHeight - y1 );
        *(int*)&m = 1;
      }
      if ( y2 == y1 && x2 == x1 )
      {
        __fprintf_chk( f, 1, "D03*\r\n" );
        return;
      }
      if ( m & 255 )
      {
        __fprintf_chk( f, 1, "D02*" );
        if ( x2 == lastX )
        {
          if ( y2 != lastY )
          {
            lastY = y2;
            __fprintf_chk( f, 1, "Y%ld", PCB->MaxHeight - y2 );
          }
          __fprintf_chk( f, 1, "D01*\r\n" );
        }
      }
      else
      if ( x2 == lastX )
        continue;
      lastX = x2;
      __fprintf_chk( f, 1, "X%ld", lastX );
    }
  }
  return;
}
void gerber_draw_arc( hidGC gc, int cx, int cy, int width, int height, int start_angle, int delta_angle )
{
  int eax;
  int ecx;
  int edx;
  double fp0;
  double fp4;
  double fp6;
  double fp7;
  Boolean m;
  float arcStartX, arcStopX, arcStartY, arcStopY;
  if ( gc->width )
  {
    use_gc( gc, 0 );
    if ( f )
    {
      ;
      arcStartX = (double)( cx ) - ( (double)( width ) * cos( 0.017453292520 * (double)( start_angle ) ) );
      arcStopY = (double)( height );
      arcStartY = ( sin( 0.017453292520 * (double)( start_angle ) ) * (double)( height ) ) + (double)( cy );
      if ( width != height )
      {
        double step, angle;
        int max = height < width ? height : width;
        int minr = ( max < width ? max : width ) <= ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) ? ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) : ( max < width ? max : width ) + -1;
        int nsteps = (int)( ( (double)( ( delta_angle ^ ( delta_angle >> 31 ) ) - ( delta_angle >> 31 ) ) / ( ( acos( (double)( ( max < width ? max : width ) <= ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) ? ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) : max + -1 ) / (double)( max < width ? max : width ) ) * 180.000000000000 ) / 3.141592653590 < 5.000000000000 ? ( acos( (double)( ( max < width ? max : width ) <= ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) ? ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) : max + -1 ) / (double)( max < width ? max : width ) ) * 180.000000000000 ) / 3.141592653590 : 5.000000000000 ) ) + 1.000000000000 );
        int x0, y0, x1, y1;
        if ( (int)( ( (double)( ( delta_angle ^ ( delta_angle >> 31 ) ) - ( delta_angle >> 31 ) ) / ( ( acos( (double)( ( max < width ? max : width ) <= ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) ? ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) : max + -1 ) / (double)( max < width ? max : width ) ) * 180.000000000000 ) / 3.141592653590 < 5.000000000000 ? ( acos( (double)( ( max < width ? max : width ) <= ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) ? ( max < width ? max : width ) + ( ( gc->width >> 31 ) - ( (/*HI*/int)( gc->width * 0x66666667 ) >> 2 ) ) : max + -1 ) / (double)( max < width ? max : width ) ) * 180.000000000000 ) / 3.141592653590 : 5.000000000000 ) ) + 1.000000000000 ) > 0 )
        {
          x0 = (int)( arcStartX );
          y0 = (int)( arcStartY );
          do
          {
            x1 = (int)( (double)( cx ) - ( (double)( width ) * cos( 0.017453292520 * ( ( (double)( delta_angle ) / (double)( nsteps ) ) + arcStartY ) ) ) );
            y1 = (int)( (double)( cy ) + ( sin( 0.017453292520 * ( ( (double)( delta_angle ) / (double)( nsteps ) ) + arcStartY ) ) * arcStopY ) );
            *ebp_184 = gc;
            gerber_draw_line( gc, x0, y0, (int)( (double)( cx ) - ( (double)( width ) * cos( 0.017453292520 * ( ( (double)( delta_angle ) / (double)( nsteps ) ) + arcStartY ) ) ) ), x1 );
            x0 = x1;
            y0 = y1;
            angle = ( (double)( delta_angle ) / (double)( nsteps ) ) + arcStartY;
          }
          while ( nsteps <= 0 );
          return;
        }
        else
        {
        }
      }
      else
      {
        ;
        *(int*)&m = 0;
        arcStopY = (double)( cy ) + ( sin( (double)( start_angle + delta_angle ) * 0.017453292520 ) * arcStopY );
        if ( arcStartX == (double)( lastX ) && (double)( lastX ) == arcStartX )
        {
        }
        else
        {
          lastX = (int)( arcStartX );
          __fprintf_chk( &eax, 1, "X%ld", (int)( fp6 ) );
          *(int*)&m = 1;
        }
        if ( arcStartY == (double)( lastY ) && (double)( lastY ) == arcStartY )
        {
          if ( ( m & 255 ) == 0 )
          {
            __fprintf_chk( &eax, 1, "G75*G0%1dX%ldY%ldI%ldJ%ldD01*G01*\r\n", 3 + ( delta_angle >> 31 ), (int)( ebp_104 - ( ebp_96 * fp7 ) ), (int)( (double)( PCB->MaxHeight ) - arcStopY ), (int)( (double)( cx ) - arcStartX ), (int)( -( (double)( cy ) - arcStartY ) ) );
            lastX = (int)( (double)( cx ) - ( (double)( width ) * cos( (double)( start_angle + delta_angle ) * 0.017453292520 ) ) );
            lastY = (int)( arcStopY );
          }
        }
        else
        {
          lastY = (int)( arcStartY );
          __fprintf_chk( f, 1, "Y%ld", PCB->MaxHeight - (int)( arcStartY ) );
        }
        __fprintf_chk( f, 1, "D02*" );
        __fprintf_chk( &eax, 1, "G75*G0%1dX%ldY%ldI%ldJ%ldD01*G01*\r\n", 3 + ( delta_angle >> 31 ), (int)( ebp_104 - ( ebp_96 * fp7 ) ), (int)( (double)( PCB->MaxHeight ) - arcStopY ), (int)( (double)( cx ) - arcStartX ), (int)( -( (double)( cy ) - arcStartY ) ) );
        lastX = (int)( (double)( cx ) - ( (double)( width ) * cos( (double)( start_angle + delta_angle ) * 0.017453292520 ) ) );
        lastY = (int)( arcStopY );
      }
    }
  }
  return;
}
void gerber_fill_circle( hidGC gc, int cx, int cy, int radius )
{
  int eax;
  int edx;
  int ebx;
  int esi;
  int edi;
  if ( radius <= 0 )
  {
    return;
  }
  if ( is_drill )
    radius = ( ( radius + 25 ) / 50 ) * 50;
  use_gc( gc, radius );
  if ( f == 0 )
  {
    return;
  }
  if ( is_drill )
  {
    if ( n_pending_drills < max_pending_drills )
    {
    }
    else
    {
      max_pending_drills += 100;
      pending_drills = realloc( pending_drills, ( max_pending_drills + 100 ) * sizeof( PendingDrills ) );
    }
    pending_drills->x = cx;
    pending_drills = radius * 2;
    pending_drills->y = cy;
    n_pending_drills++;
    return;
  }
  else
  {
    if ( gc->drill && flash_drills == 0 )
    {
      return;
    }
    if ( lastX != cx )
    {
      lastX = cx;
      __fprintf_chk( f, 1, "X%ld", cx );
    }
    if ( lastY != cy )
    {
      lastY = cy;
      __fprintf_chk( f, 1, "Y%ld", PCB->MaxHeight - cy );
    }
    cy = "D03*\r\n";
    cx = 1;
    gc = &f->_flags;
  }
}
void gerber_fill_polygon( hidGC gc, int n_coords, int *x, int *y )
{
  int eax;
  Boolean m;
  int i;
  int firstTime;
  LocationType startX;
  LocationType startY;
  if ( is_mask == 0 || current_mask != 1 )
  {
    use_gc( gc, 1000 );
    if ( f )
    {
      __fprintf_chk( f, 1, "G36*\r\n" );
      startY = 0;
      startX = 0;
      if ( n_coords > 0 )
      {
        firstTime = 1;
        i = 0;
        x[0] = x;
        do
        {
          *(int*)&m = 0;
          if ( x != lastX )
          {
            lastX = x;
            __fprintf_chk( f, 1, "X%ld", lastX );
            *(int*)&m = 1;
          }
          if ( y != lastY )
          {
            lastY = y;
            __fprintf_chk( f, 1, "Y%ld", PCB->MaxHeight - lastY );
            *(int*)&m = 1;
          }
          if ( firstTime )
          {
            startX = x;
            startY = y;
            if ( m & 255 )
              __fprintf_chk( f, 1, "D02*" );
          }
          else
          if ( m & 255 )
          {
            i++;
            firstTime = 0;
            __fprintf_chk( f, 1, "D01*\r\n" );
            if ( i < n_coords )
              continue;
            else
              break;
          }
          i++;
          firstTime = 0;
        }
        while ( i + 1 < n_coords );
      }
      *(int*)&m = 0;
      if ( startX != lastX )
      {
        lastX = startX;
        __fprintf_chk( f, 1, "X%ld", lastX );
        *(int*)&m = 1;
      }
      if ( startY != lastY )
      {
        lastY = startY;
        __fprintf_chk( f, 1, "Y%ld", PCB->MaxHeight - lastY );
      }
      else
      if ( ( m & 255 ) == 0 )
      {
        x = "G37*\r\n";
        n_coords = 1;
        gc = &f->_flags;
      }
      __fprintf_chk( f, 1, "D01*\r\n" );
      x = "G37*\r\n";
      n_coords = 1;
      gc = &f->_flags;
    }
  }
  return;
}
void gerber_fill_rect( hidGC gc, int x1, int y1, int x2, int y2 )
{
  int x[5];
  int y[5];
  y[4] = y1;
  y[0] = y1;
  y[3] = y1;
  y[1] = y2;
  y[2] = y2;
  x[4] = x1;
  x[0] = x1;
  x[1] = x1;
  x[2] = x2;
  x[3] = x2;
  gerber_fill_polygon( gc, 5, x, y );
  return;
}
void gerber_calibrate( double xval, double yval )
{
  __fprintf_chk( stderr, 1, "HID error: pcb called unimplemented Gerber function %s.\n", __FUNCTION__ );
  abort( );
}
void gerber_set_crosshair( int x, int y, int action )
{
  return;
}
void hid_gerber_init( void )
{
  apply_default_hid( &gerber_hid, 0 );
  hid_register_hid( &gerber_hid );
  return;
}
#if 0
#endif
