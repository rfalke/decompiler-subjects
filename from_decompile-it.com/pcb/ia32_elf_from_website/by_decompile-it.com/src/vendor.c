#include "vendor.c.h"
static int *vendor_drills;
static int n_vendor_drills;
static int cached_drill = -1;
static int cached_map = -1;
static char **ignore_refdes;
static int n_refdes;
static char **ignore_value;
static int n_value;
static char **ignore_descr;
static int n_descr;
static char *vendor_name;
static double sf;
static Boolean vendorMapEnable;
static int rounding_method;
static char apply_vendor_syntax[14] = { 'A', 'p', 'p', 'l', 'y', 'V', 'e', 'n', 'd', 'o', 'r', '(', ')' };
static char apply_vendor_help[71] = { 'A', 'p', 'p', 'l', 'i', 'e', 's', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', 'l', 'y', ' ', 'l', 'o', 'a', 'd', 'e', 'd', ' ', 'v', 'e', 'n', 'd', 'o', 'r', ' ', 'd', 'r', 'i', 'l', 'l', ' ', 't', 'a', 'b', 'l', 'e', ' ', 't', 'o', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'd', 'e', 's', 'i', 'g', 'n', '.' };
static char toggle_vendor_syntax[15] = { 'T', 'o', 'g', 'g', 'l', 'e', 'V', 'e', 'n', 'd', 'o', 'r', '(', ')' };
static char toggle_vendor_help[51] = { 'T', 'o', 'g', 'g', 'l', 'e', 's', ' ', 't', 'h', 'e', ' ', 's', 't', 'a', 't', 'e', ' ', 'o', 'f', ' ', 'a', 'u', 't', 'o', 'm', 'a', 't', 'i', 'c', ' ', 'd', 'r', 'i', 'l', 'l', ' ', 's', 'i', 'z', 'e', ' ', 'm', 'a', 'p', 'p', 'i', 'n', 'g', '.' };
static char enable_vendor_syntax[15] = { 'E', 'n', 'a', 'b', 'l', 'e', 'V', 'e', 'n', 'd', 'o', 'r', '(', ')' };
static char enable_vendor_help[38] = { 'E', 'n', 'a', 'b', 'l', 'e', 's', ' ', 'a', 'u', 't', 'o', 'm', 'a', 't', 'i', 'c', ' ', 'd', 'r', 'i', 'l', 'l', ' ', 's', 'i', 'z', 'e', ' ', 'm', 'a', 'p', 'p', 'i', 'n', 'g', '.' };
static char disable_vendor_syntax[16] = { 'D', 'i', 's', 'a', 'b', 'l', 'e', 'V', 'e', 'n', 'd', 'o', 'r', '(', ')' };
static char disable_vendor_help[39] = { 'D', 'i', 's', 'a', 'b', 'l', 'e', 's', ' ', 'a', 'u', 't', 'o', 'm', 'a', 't', 'i', 'c', ' ', 'd', 'r', 'i', 'l', 'l', ' ', 's', 'i', 'z', 'e', ' ', 'm', 'a', 'p', 'p', 'i', 'n', 'g', '.' };
static char unload_vendor_syntax[15] = { 'U', 'n', 'l', 'o', 'a', 'd', 'V', 'e', 'n', 'd', 'o', 'r', '(', ')' };
static char unload_vendor_help[48] = { 'U', 'n', 'l', 'o', 'a', 'd', 's', ' ', 't', 'h', 'e', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', ' ', 'v', 'e', 'n', 'd', 'o', 'r', ' ', 'd', 'r', 'i', 'l', 'l', ' ', 'm', 'a', 'p', 'p', 'i', 'n', 'g', ' ', 't', 'a', 'b', 'l', 'e', '.' };
static char load_vendor_syntax[25] = { 'L', 'o', 'a', 'd', 'V', 'e', 'n', 'd', 'o', 'r', 'F', 'r', 'o', 'm', '(', 'f', 'i', 'l', 'e', 'n', 'a', 'm', 'e', ')' };
static char load_vendor_help[42] = { 'L', 'o', 'a', 'd', 's', ' ', 't', 'h', 'e', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', ' ', 'v', 'e', 'n', 'd', 'o', 'r', ' ', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', ' ', 'f', 'i', 'l', 'e', '.' };
HID_Action vendor_action_list[6] = { { "ApplyVendor", 0, &ActionApplyVendor, &apply_vendor_help, &apply_vendor_syntax }
, { "ToggleVendor", 0, &ActionToggleVendor, &toggle_vendor_help, &toggle_vendor_syntax }
, { "EnableVendor", 0, &ActionEnableVendor, &enable_vendor_help, &enable_vendor_syntax }
, { "DisableVendor", 0, &ActionDisableVendor, &disable_vendor_help, &disable_vendor_syntax }
, { "UnloadVendor", 0, &ActionUnloadVendor, &unload_vendor_help, &unload_vendor_syntax }
, { "LoadVendorFrom", 0, &ActionLoadVendorFrom, &load_vendor_help, &load_vendor_syntax }
 };
HID_Flag vendor_flag_list[1] = { { "VendorMapOn", &vendor_get_enabled, 0 }
 };
int ActionApplyVendor( int argc, char **argv, int x, int y )
{
  hid_action( "Busy" );
  apply_vendor_map( );
  return 0;
}
int ActionToggleVendor( int argc, char **argv, int x, int y )
{
  vendorMapEnable = vendorMapEnable == 0;
  return 0;
}
int ActionEnableVendor( int argc, char **argv, int x, int y )
{
  vendorMapEnable = 1;
  return 0;
}
int ActionDisableVendor( int argc, char **argv, int x, int y )
{
  vendorMapEnable = 0;
  return 0;
}
int ActionUnloadVendor( int argc, char **argv, int x, int y )
{
  cached_drill = -1;
  n_vendor_drills = 0;
  n_refdes = 0;
  n_value = 0;
  n_descr = 0;
  if ( vendor_drills )
  {
    free( vendor_drills );
    vendor_drills = 0;
  }
  if ( ignore_refdes )
  {
    free( ignore_refdes );
    ignore_refdes = 0;
  }
  if ( ignore_value )
  {
    free( ignore_value );
    ignore_value = 0;
  }
  if ( ignore_descr )
  {
    free( ignore_descr );
    ignore_descr = 0;
  }
  return 0;
}
// Lost vars at line 332 through condition folding
int ActionLoadVendorFrom( int argc, char **argv, int x, int y )
{
  int eax;
  int edx;
  int ebp_52;
  int ebp_44;
  int ebp_40;
  static char *default_file;
  int i;
  char *fname, *name;
  char *sval;
  Resource *res, *drcres, *drlres;
  /* phantom */ int type;
  cached_drill = -1;
  if ( argc )
  {
    fname = argv[0];
    if ( argv[0] == 0 || argv[0] == 0 )
      goto B2;
    else
    {
      n_vendor_drills = 0;
      n_refdes = 0;
      n_value = 0;
      n_descr = 0;
      if ( vendor_drills )
      {
        free( vendor_drills );
        vendor_drills = 0;
      }
      if ( ignore_refdes )
      {
        free( ignore_refdes );
        ignore_refdes = 0;
      }
      if ( ignore_value )
      {
        free( ignore_value );
        ignore_value = 0;
      }
      if ( ignore_descr )
      {
        free( ignore_descr );
        ignore_descr = 0;
      }
      res = resource_parse( fname, 0 );
      if ( res == 0 )
      {
        Message( "Could not load vendor resource file \"%s\"\n", fname );
        return 0;
      }
      else
      {
        vendor_name = resource_value( res, "vendor" ) == 0 || *(char*)(resource_value( res, "vendor" )) == 0 ? "(unknown)" : resource_value( res, "vendor" );
        if ( resource_value( res, "units" ) && ( *(char*)(resource_value( res, "units" )) != 109 || sval[1] != 105 || sval[2] != 108 || sval[3] ) )
        {
          /* phantom */ size_t __s1_len;
          /* phantom */ size_t __s2_len;
          strcmp( "mils", sval );
          if ( 1 )
            goto B38;
          else
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            strcmp( "inch", sval );
            if ( !1 && strcmp( sval, "inches" ) )
            {
              /* phantom */ size_t __s1_len;
              /* phantom */ size_t __s2_len;
              /* phantom */ unsigned char *__s1;
              /* phantom */ int __result;
              if ( *(char*)(resource_value( res, "units" )) == 109 && sval[1] == 109 && sval[2] == 0 )
                sf = 3937.007874015748;
                rounding_method = 0;
                drlres = resource_subres( res, "drillmap" );
                if ( drlres == 0 )
                  Message( "No drillmap resource found\n" );
                else
                {
                  if ( resource_value( drlres, "round" ) )
                  {
                    /* phantom */ size_t __s1_len;
                    /* phantom */ size_t __s2_len;
                    /* phantom */ unsigned char *__s1;
                    /* phantom */ int __result;
                    if ( sval[0] != 117 || sval[1] != 112 || sval[2] )
                    {
                      /* phantom */ size_t __s1_len;
                      /* phantom */ size_t __s2_len;
                      strcmp( "nearest", sval );
                      if ( 1 )
                        rounding_method = 1;
                      else
                        Message( "\"%s\" is not a valid rounding type.  Defaulting to up\n", resource_value( drlres, "round" ) );
                    }
                    rounding_method = 0;
                  }
                  if ( resource_subres( drlres, "skips" ) && *(int*)resource_subres( drlres, "skips" )/*.12*/ > 0 )
                  {
                    ebp_44 = 0;
                    ebp_52 = 0;
                    do
                    {
                      if ( ( ~( 0 - ( ( *(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 4) < 1 ) & 1 ) ) & 10 ) == 1 )
                      {
                        i = *(int*)(*(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) + 16) + 4);
                        if ( *(int*)(*(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) + 16) + 4) == 0 )
                          Message( "Error:  null skip value\n" );
                        else
                        {
                          strcmp( "refdes", &i );
                          ebp_40 = ignore_refdes;
                          if ( (unsigned char)( ccdep2 < ccdep1 ) )
                          {
                            strcmp( "value", &i );
                            ebp_40 = ignore_value;
                            if ( (unsigned char)( ccdep2 < ccdep1 ) )
                            {
                              strcmp( "descr", &i );
                              if ( 1 )
                                ebp_40 = ignore_descr;
                            }
                          }
                          if ( *(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) + 12) > 1 )
                          {
                            while ( 1 )
                            {
                              i = *(int*)(12 + 12 + *(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) + 16) + 4);
                              n_refdes++;
                              *ebp_40 = realloc( *ebp_40, ( n_refdes + 1 ) << 2 );
                              if ( ebp_40 == 0 )
                              {
                                __fprintf_chk( stderr, 1, "realloc() failed\n" );
                                exit( -1 );
                              }
                              *(int*)(ebp_40 + ( n_refdes << 2 ) + -4) = __strdup( &i );
                              if ( 1 + 1 < *(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) + 12) )
                              {
                                *(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8)) = *(int*)(*(int*)(ebp_44 + *(int*)resource_subres( drlres, "skips" )/*.16*/ + 8) + 16);
                              }
                            }
                          }
                        }
                      }
                      else
                        Message( "Ignored resource type = %d in skips= section\n", ( ~( 0 - ( ( *(int*)(ebp_44 + *(int*)(ebp_48 + 16)) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(ebp_44 + *(int*)(ebp_48 + 16) + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(ebp_44 + *(int*)(ebp_48 + 16) + 4) < 1 ) & 1 ) ) & 10 ) );
                      ebp_52++;
                      ebp_44 += 12;
                    }
                    while ( *(int*)resource_subres( drlres, "skips" )/*.12*/ <= ebp_52 );
                  }
                  if ( drlres->c > 0 )
                  {
                    ebp_40 = 0;
                    i = 0;
                    do
                    {
                      if ( ( ~( 0 - ( ( *(int*)(ebp_40 + drlres->v) < 1 ) & 1 ) ) & 100 ) + ( *(int*)(ebp_40 + drlres->v + 8) != 0 ) + ( ~( 0 - ( ( *(int*)(ebp_40 + drlres->v + 4) < 1 ) & 1 ) ) & 10 ) == 10 )
                      {
                        n_vendor_drills++;
                        vendor_drills = realloc( vendor_drills, ( n_vendor_drills + 1 ) * sizeof( int ) );
                        if ( vendor_drills )
                        {
                          if ( n_vendor_drills + -1 > 0 )
                          {
                            if ( vendor_drills[0] < (int)( floor( ( sf * strtod( *(int*)(ebp_40 + drlres->v + 4), 0 ) ) + 0.500000000000 ) ) )
                            {
                              do
                              {
                                if ( n_vendor_drills + -1 <= 0 + 1 + 1 )
                                {
                                }
                                else
                              }
                              while ( *(int*)(edi + ( eax << 2 )) < edx );
                              if ( 0 + 1 < n_vendor_drills + -1 )
                              {
                                do
                                {
                                  vendor_drills[0] = vendor_drills[0];
                                }
                                while ( ebp_44 != n_vendor_drills + -1 + -1 + -1 );
                              }
                            }
                            else
                              ebp_52 = 0;
                          }
                          else
                          {
                          }
                          if ( n_vendor_drills + -1 != 0 + 1 )
                            ebp_52 = ( 0 + 1 ) << 2;
                          else
                            vendor_drills[0] = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                        }
                        else
                          __fprintf_chk( stderr, 1, "realloc() failed to allocate %ld bytes\n", n_vendor_drills << 2 );
                      }
                      i++;
                      ebp_40 += 12;
                    }
                    while ( i < drlres->c );
                  }
                }
                drcres = resource_subres( res, "drc" );
                if ( sval )
                {
                  PCB->Bloat = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                  Message( "Set DRC minimum copper spacing to %.2f mils\n", (double)( PCB->Bloat ) * 0.010000000000 );
                }
                if ( sval )
                {
                  PCB->Shrink = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                  Message( "Set DRC minimum copper overlap to %.2f mils\n", (double)( PCB->Shrink ) * 0.010000000000 );
                }
                if ( sval )
                {
                  PCB->minWid = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                  Message( "Set DRC minimum copper spacing to %.2f mils\n", (double)( PCB->minWid ) * 0.010000000000 );
                }
                if ( sval )
                {
                  PCB->minSlk = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                  Message( "Set DRC minimum silk width to %.2f mils\n", (double)( PCB->minSlk ) * 0.010000000000 );
                }
                if ( sval )
                {
                  PCB->minDrill = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                  Message( "Set DRC minimum drill diameter to %.2f mils\n", (double)( PCB->minDrill ) * 0.010000000000 );
                }
                if ( sval )
                {
                  PCB->minRing = (int)( floor( ( sf * strtod( sval, 0 ) ) + 0.500000000000 ) );
                  Message( "Set DRC minimum annular ring to %.2f mils\n", (double)( PCB->minRing ) * 0.010000000000 );
                }
                Message( "Loaded %d vendor drills from %s\n", n_vendor_drills, fname );
                Message( "Loaded %d RefDes skips, %d Value skips, %d Descr skips\n", n_refdes, n_value, n_descr );
                vendorMapEnable = 1;
                apply_vendor_map( );
                free( 0 );
                return 0;
              else
                Message( "\"%s\" is not a supported units.  Defaulting to inch\n", sval );
            }
            sf = 100000.000000000000;
          }
        }
B38:;
        sf = 100.000000000000;
      }
    }
  }
B2:;
  gui->fileselect( "Load Vendor Resource File...", "Picks a vendor resource file to load.\nThis file can contain drc settings for a\nparticular vendor as well as a list of\npredefined drills which are allowed.", default_file, ".res" );
  fname = (char*)gui;
  if ( fname == 0 )
  {
    Message( "Syntax error.  Usage:\n%s\n", load_vendor_syntax[0] );
    return 0;
  }
  else
  {
    if ( default_file )
    {
      free( default_file );
      default_file = 0;
    }
    if ( fname[0] )
    {
      default_file = __strdup( fname );
    }
  }
}
// Lost vars at line 527 through condition folding
void apply_vendor_map( void )
{
  int eax;
  int ecx;
  int ebp_56;
  int i;
  int changed, tot;
  Boolean state;
  state = vendorMapEnable = 1;
  if ( ccdep2 < ccdep1 )
  {
    Cardinal n;
    Cardinal sn;
    PinTypePtr via;
    tot = 0;
    changed = 0;
    if ( PCB->Data->ViaN )
    {
      n = 0;
      while ( 1 )
      {
        via = PCB->Data->Via + ( n * 76 );
        tot++;
        if ( via->DrillingHole != vendorDrillMap( via->DrillingHole ) )
        {
          Message( "Locked via at %.2f, %.2f not changed.\n", (double)( via->X ) * 0.010000000000, (double)( via->Y ) * 0.010000000000 );
        }
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - PCB->Data->ViaN )
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
      ebp_56 = ( PCB->Data->ElementN * 300 ) + -300;
      while ( element = ebp_56 + PCB->Data->Element, ( vendorIsElementMappable( ebp_56 + PCB->Data->Element ) & 255 ) == 0 || element->PinN == 0 )
      {
        n += -1;
        ebp_56 += -300;
        if ( n == -1 )
          goto B8;
        else
        {
        }
      }
      n = 0;
      while ( 1 )
      {
        pin = element->Pin + ( n * 76 );
        tot++;
        if ( pin->DrillingHole != vendorDrillMap( pin->DrillingHole ) )
        {
          Message( "Locked pin at %-6.2f, %-6.2f not changed.\n", 0.010000000000 * (double)( pin->X ), (double)( pin->Y ) * 0.010000000000 );
          sn = element->PinN;
          if ( element->PinN == 0 )
          {
          }
        }
        else
        {
          sn = element->PinN;
          if ( element->PinN == 0 )
            continue;
        }
        n = ( sn + n + 1 ) - sn;
        if ( sn <= ( sn + n + 1 ) - element->PinN )
          continue;
        else
        {
        }
      }
    }
B8:;
    Message( "Updated %d drill sizes out of %d total\n", changed, tot );
    if ( Settings.ViaDrillingHole != vendorDrillMap( Settings.ViaDrillingHole ) )
    {
      Settings.ViaDrillingHole = vendorDrillMap( Settings.ViaDrillingHole );
      Message( "Adjusted active via hole size to be %6.2f mils\n", (double)( vendorDrillMap( Settings.ViaDrillingHole ) ) * 0.010000000000 );
      changed++;
    }
    i = 0;
    do
    {
      if ( PCB->RouteStyle[ i ].Hole != vendorDrillMap( PCB->RouteStyle[ i ].Hole ) )
      {
        changed++;
        PCB->LayerGroups.Entries[15][14] = vendorDrillMap( PCB->ID );
        Message( "Adjusted %s routing style via hole size to be %6.2f mils\n", PCB->ID, (double)( PCB->ID ) * 0.010000000000 );
        if ( PCB->ID <= PCB->ID + 399 )
          Message( "Increased %s routing style via diameter to %6.2f mils\n", *(int*)(( i * 24 ) + 8612), (double)( PCB->ID + 400 ) * 0.010000000000 );
      }
      i++;
    }
    while ( i + 1 != 4 );
    if ( changed == 0 )
    {
      vendorMapEnable = state;
      return;
    }
    SetChangedFlag( 1 );
    ClearAndRedrawOutput( );
    IncrementUndoSerialNumber( );
  }
  }
  vendorMapEnable = state;
  return;
}
int vendorDrillMap( int in )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ int i, min, max;
  if ( in == cached_drill )
  {
    in = cached_map;
    return cached_map;
  }
  cached_drill = in;
  if ( n_vendor_drills == 0 || vendor_drills == 0 || vendorMapEnable == 0 )
  {
    cached_map = in;
    in = in;
  }
  in = vendor_drills[0];
  if ( vendor_drills[0] < in )
  {
    min = 0;
    if ( vendor_drills[0] < in )
    {
      Message( "Vendor drill list does not contain a drill &gt;= %6.2f mil\nUsing %6.2f mil instead.\n", 0.010000000000 * (double)( in ), (double)( vendor_drills[0] ) * 0.010000000000 );
      in = vendor_drills[ n_vendor_drills + -1 ];
      cached_map = vendor_drills[ n_vendor_drills + -1 ];
    }
    for ( ; max - min > 1;  )
    {
      min = *(int*)(vendor_drills + ( ( ( min + max ) / 2 ) << 2 )) < in ? min : ( min + max ) / 2;
      max = in <= *(int*)(vendor_drills + ( ( ( min + max ) / 2 ) << 2 )) ? max : ( min + max ) / 2;
    }
    if ( rounding_method == 1 )
    {
      in = vendor_drills[0];
      in = vendor_drills[0];
      if ( vendor_drills[0] - in < in - vendor_drills[0] )
      {
        cached_map = in;
        return in;
      }
    }
    else
    {
      return vendor_drills[0];
    }
  }
  cached_map = vendor_drills[0];
}
Boolean vendorIsElementMappable( ElementTypePtr element )
{
  int eax;
  int edx;
  int i;
  int noskip;
  if ( vendorMapEnable )
  {
    i = 0;
    noskip = 1;
    if ( n_refdes > 0 )
    {
      do
      {
        if ( ignore_refdes[ i ] == 0 || strcmp( "(unknown)", ignore_refdes[ i ] ) )
        {
          if ( eax & 255 )
          {
          }
          else
          {
            i++;
          }
        }
        Message( "Vendor mapping skipped because refdes = %s matches %s\n", element->Name[1].TextString, ignore_refdes[ i ] );
        noskip = 0;
      }
      while ( i + 1 < n_refdes );
      if ( noskip == 0 )
      {
        return 0;
      }
    }
    if ( n_value > 0 )
    {
      i = 0;
      do
      {
        if ( ignore_value[ i ] == 0 || strcmp( "(unknown)", ignore_value[ i ] ) )
        {
          if ( eax & 255 )
          {
          }
          else
          {
            i++;
          }
        }
        Message( "Vendor mapping skipped because value = %s matches %s\n", element->Name[2].TextString, ignore_value[ i ] );
        noskip = 0;
      }
      while ( i + 1 < n_value );
      if ( noskip == 0 )
      {
        return 0;
      }
    }
    if ( n_descr > 0 )
    {
      i = 0;
      do
      {
        if ( ignore_descr[ i ] == 0 || strcmp( "(unknown)", ignore_descr[ i ] ) )
        {
          if ( eax & 255 )
          {
          }
          else
          {
            i++;
          }
        }
        Message( "Vendor mapping skipped because descr = %s matches %s\n", element->Name->TextString, ignore_descr[ i ] );
        noskip = 0;
      }
      while ( i + 1 < n_descr );
      if ( noskip == 0 )
      {
        return 0;
      }
    }
    Message( "Vendor mapping skipped because element %s is locked\n", "(unknown)" );
    return 0;
  }
  return 0;
}
Boolean rematch( char *re, char *s )
{
  int eax;
  int result;
  regmatch_t match;
  regex_t compiled;
  if ( result )
  {
    char errorstring[128];
    regerror( result, &compiled, errorstring, 128 );
    Message( "regexp error: %s\n", errorstring[0] );
    regfree( &compiled );
  }
  else
  {
    result = regexec( &compiled, s, 1, &match.rm_so, 0 );
    regfree( &compiled );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return eax;
}
void register_vendor_action_list( void )
{
  hid_register_actions( vendor_action_list, 6 );
  return;
}
int vendor_get_enabled( int unused )
{
  return vendorMapEnable;
}
void register_vendor_flag_list( void )
{
  hid_register_flags( vendor_flag_list, 1 );
  return;
}
#if 0
#endif
