#include "bom.c.h"
static HID_Attribute bom_options[3] = { { "bomfile", "BOM output file", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "xyfile", "XY output file", 3, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
, { "xy-in-mm", "XY dimensions in mm instead of mils", 4, 0, 0, { 0, 0, 0.000000000000 }
, 0, 0, 0 }
 };
static HID_Attr_Val bom_values[3];
static char *bom_filename;
static char *xy_filename;
static int xy_dim_type;
HID bom_hid = { 208, "bom", "Exports a Bill of Materials", 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
;
HID_Attribute *bom_get_export_options( int *n )
{
  int eax;
  static char *last_bom_filename;
  static char *last_xy_filename;
  if ( PCB )
  {
    derive_default_filename( &PCB->Filename, bom_options, ".bom", &last_bom_filename );
    derive_default_filename( &PCB->Filename, &bom_options[1], ".xy", &last_xy_filename );
  }
  if ( n )
  {
    n[0] = 3;
  }
  return bom_options;
}
char *CleanBOMString( char *in )
{
  /* phantom */ char *out;
  int i;
  if ( calloc( 1, strlen( in ) + 1 ) == 0 )
  {
    __fprintf_chk( stderr, 1, "Error:  CleanBOMString() malloc() failed\n" );
    exit( 1 );
  }
  i = 0;
  do
  {
    i++;
  }
  while ( strlen( in ) < i );
  return (char*)calloc( 1, strlen( in ) + 1 );
}
double xyToAngle( double x, double y )
{
  double fp0;
  double fp5;
  double fp6;
  double fp7;
  double theta;
  if ( 0.000000000000 < x )
  {
    fp6 = 0.000000000000;
    if ( 0.000000000000 < 0.000000000000 )
      goto B4;
    else
    {
      return 0;
    }
  }
  else
  {
  }
B4:;
  if ( 0.000000000000 <= 0.000000000000 )
  {
    if ( 0.000000000000 <= 0.000000000000 )
      goto B9;
    else
    {
      return 0;
    }
  }
  else
  {
  }
B9:;
  if ( 0.000000000000 < 0.000000000000 )
  {
    if ( 0.000000000000 < 0.000000000000 )
    {
    }
    else
    {
      return 0;
    }
  }
  else
  {
  }
  if ( 0.000000000000 <= 0.000000000000 )
  {
    if ( 0.000000000000 < 0.000000000000 )
    {
      return 0;
    }
  }
  else
  {
  }
  Message( "xyToAngle(): unable to figure out angle of element\n     because the pin is at the centroid of the part.\n     This is a BUG!!!\n     Setting to %g degrees\n", 0.000000000000 );
  return 0;
}
StringList *string_insert( char *str, StringList *list )
{
  StringList *new, *cur;
  if ( calloc( 1, 8 ) == 0 )
  {
    __fprintf_chk( stderr, 1, "malloc() failed in string_insert()\n" );
    exit( 1 );
  }
  *(int*)calloc( 1, 8 )/*.4*/ = 0;
  *(int*)(calloc( 1, 8 )) = __strdup( str );
  if ( list )
  {
    cur = list;
    while ( cur = cur->next, cur->next )
    {
    }
    new->next = calloc( 1, sizeof( struct _StringList ) );
    new = list;
  }
  return new;
}
void print_and_free( FILE *fp, BomList *bom )
{
  /* phantom */ BomList *lastb;
  StringList *lasts;
  char *descr, *value;
  if ( bom )
  {
    while ( fp == 0 )
    {
      while ( bom->refdes )
      {
        if ( fp )
        {
          __fprintf_chk( fp, 1, "%s ", *(int*)(CleanBOMString( bom->value )) );
        }
        free( *(int*)(CleanBOMString( bom->value )) );
        lasts = bom->refdes;
        bom->refdes = &bom->refdes->next;
        free( bom->refdes );
      }
      if ( fp )
        __fprintf_chk( fp, 1, "\n" );
      bom = bom->next;
      free( bom );
      if ( bom == 0 )
        break;
    }
    descr = CleanBOMString( (char*)bom );
    __fprintf_chk( fp, 1, "%d,\"%s\",\"%s\",", bom->num, descr, CleanBOMString( bom->value ) );
    free( descr );
    free( value );
  }
  return;
}
void bom_do_export( HID_Attr_Val *options )
{
  int eax;
  int edx;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  int ebp_196;
  int ebp_172;
  int ebp_136;
  int ebp_120;
  /* phantom */ int i;
  if ( options == 0 )
  {
    bom_get_export_options( 0 );
    memcpy( &bom_values[0].int_value, *(int*)(0), 16 );
    memcpy( *(int*)(0), &bom_options[1].default_val.int_value, 16 );
    options = bom_values;
    memcpy( *(int*)(0), options, 16 );
  }
  bom_filename = *(int*)(bom_values[0].int_value + 4) != 0 ? "pcb-out.bom" : bom_values->str_value;
  xy_filename = *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value;
  xy_dim_type = bom_values[2].int_value;
  if ( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ) == 0 )
    gui->log( "Cannot open file %s for writing\n", xy_filename );
  else
  {
    strftime( ebp_92, 64, "%c UTC", gmtime( time( 0 ) ) );
    __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "# $Id" );
    __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "$\n" );
    __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "# PcbXY Version 1.0\n" );
    __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "# Date: %s\n", ebp_92 );
    __fprintf_chk( *ebp_376, 1, "# Author: %s\n", pcb_author( ) );
    __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "# Title: %s - PCB X-Y\n", PCB->Name ? *(char*)(PCB->Name) == 0 ? &PCB->Name : "(unknown)" : "(unknown)" );
    __fprintf_chk( *ebp_376, 1, "# RefDes, Description, Value, X, Y, rotation, top/bottom\n" );
    if ( xy_dim_type )
      __fprintf_chk( *ebp_376, 1, "# X,Y in mm.  rotation in degrees.\n" );
    else
      __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "# X,Y in mils.  rotation in degrees.\n" );
    __fprintf_chk( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ), 1, "# --------------------------------------------\n" );
    ebp_172 = PCB->Data->ElementN + -1;
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      ebp_196 = ( PCB->Data->ElementN * 300 ) + -300;
      while ( 1 )
      {
        ebp_120 = *(int*)(ebp_196 + PCB->Data->Element + 148);
        if ( *(int*)(ebp_196 + PCB->Data->Element + 148) )
        {
          ebp_120 = *ebp_120 != 0 ? "(unknown)" : ebp_120;
          if ( 0 )
          {
            while ( PCB->Data->ViaN == 0 || PCB->Data || PCB->Data->ViaMax == 0 || PCB->Data )
            {
              if ( PCB->Data->RatN == 0 )
              {
                if ( calloc( 1, 20 ) == 0 )
                {
                  __fprintf_chk( stderr, 1, "malloc() failed in bom_insert()\n" );
                  exit( 1 );
                }
                PCB->Data->RatN = calloc( 1, 20 );
                *(int*)calloc( 1, 20 )/*.16*/ = 0;
                PCB->Data->RatN = eax;
                PCB->Data->LayerN = 1;
                PCB->Data->RatMax = eax;
                PCB->Data->Via = string_insert( ebp_120, 0 );
                if ( *(int*)(ebp_196 + *(int*)string_insert( ebp_120, 0 )/*.32*/ + 224) )
                {
                  ebp_120 = 0;
                  while ( 1 )
                  {
                    if ( *(int*)(eax + 64) )
                    {
                      if ( edx == 49 && *(char*)(edx + 1) == 0 )
                      {
                      }
                      else
                      if ( ecx != 50 )
                      {
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                    ebp_120++;
                    if ( ebp_120 == esi )
                      ebp_136 = ebp_120;
                      for ( ; edx && ebx < edx; ebp_136++ )
                      {
                        ebp_120 = *(int*)(*(int*)(ebp_132 + 260) + ( ebx * 104 ));
                        if ( *(int*)(*(int*)(ebp_132 + 260) + ( ebx * 104 )) )
                        {
                          if ( eax/*.1_1of4*/ == 49 && *(char*)(eax + 1) == 0 )
                          {
                          }
                          else
                          if ( (unsigned char)( edi ) != 50 )
                          {
                          }
                          else
                          if ( *(char*)(eax + 1) )
                          {
                          }
                          else
                          {
                            atan2( (double)( ebp_120 - ebp_128 ), (double)( esi - ebp_300 ) );
                          }
                        }
                        else
                        {
                        }
                        // ebp_136++;
                      }
                      if ( ebp_136 )
                      {
                        ebp_120 = fp7 / (double)( ebp_136 );
                        fp6 = fp7 / (double)( ebp_136 );
                        fp7 = ( fp7 / (double)( ebp_136 ) ) / (double)( ebp_136 );
                        if ( 1 )
                        {
                          if ( ebp_136 != 1 )
                          {
                            if ( ebp_168 )
                            {
                            }
                            else
                            if ( ebp_168 == 0.000000000000 )
                            {
                              if ( ebp_152 == fp7 )
                              {
                                if ( ebp_160 )
                                {
                                }
                                else
                                {
                                  Message( "PrintBOM(): unable to figure out angle of element\n     %s because pin #1 is at the centroid of the part.\n     and I could not find pin #2's location\n     Setting to %g degrees\n", eax, ebp_216 );
                                }
                              }
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                          }
                          __fprintf_chk( ebp_204, 1, "%s,\"%s\",\"%s\",%.2f,%.2f,%g,%s\n", &edi, &esi, &ebx, fp7, fp6, ebp_216, ( ( *(int*)(ebp_132 + 20) >> 7 ) & 1 ) == Settings.ShowSolderSide ? "bottom" : "top" );
                          free( &edi );
                          free( &esi );
                          free( &ebx );
                        }
                        else
                        {
                          Message( "PrintBOM(): unable to figure out angle because I could\n     not find pin #1 of element %s\n     Setting to %g degrees\n", eax, 0.000000000000 );
                          __fprintf_chk( ebp_204, 1, "%s,\"%s\",\"%s\",%.2f,%.2f,%g,%s\n", &edi, &esi, &ebx, fp7, fp6, ebp_216, ( ( *(int*)(ebp_132 + 20) >> 7 ) & 1 ) == Settings.ShowSolderSide ? "bottom" : "top" );
                          free( &edi );
                          free( &esi );
                          free( &ebx );
                        }
                        __fprintf_chk( ebp_204, 1, "%s,\"%s\",\"%s\",%.2f,%.2f,%g,%s\n", &edi, &esi, &ebx, fp7, fp6, ebp_216, ( ( *(int*)(ebp_132 + 20) >> 7 ) & 1 ) == Settings.ShowSolderSide ? "bottom" : "top" );
                        free( &edi );
                        free( &esi );
                        free( &ebx );
                      }
                      else
                      {
                      }
                      ebp_172 += -1;
                      ebp_196 += -300;
                      if ( ebp_172 != -1 )
                      {
                        break;
                        while ( 1 )
                        {
                          ebp_120 = *(int*)(ebp_196 + PCB->Data->Element + 148);
                        }
                      }
                    else
                    {
                    }
                  }
                }
                else
                  ebp_136 = 0;
              }
              else
              {
              }
            }
            PCB->Data->ElementN++;
            PCB->Data->ElementMax = string_insert( ebp_120, &PCB->Data->ElementMax );
            if ( *(int*)(ebp_196 + *(int*)string_insert( ebp_120, &PCB->Data->ElementMax )/*.32*/ + 224) )
            {
              ebp_120 = 0;
              while ( 1 )
              {
              }
            }
            else
              ebp_136 = 0;
          }
        }
        else
        {
          ebp_120 = "(unknown)";
          if ( string_insert( ebp_120, &PCB->Data->ElementMax ) )
            continue;
        }
        if ( calloc( 1, 20 ) == 0 )
        {
          __fprintf_chk( stderr, 1, "malloc() failed in bom_insert()\n" );
          exit( 1 );
        }
        *(int*)calloc( 1, 20 )/*.16*/ = 0;
        *(int*)(calloc( 1, 20 )) = eax;
        *(int*)calloc( 1, 20 )/*.8*/ = 1;
        *(int*)calloc( 1, 20 )/*.4*/ = eax;
        *(int*)calloc( 1, 20 )/*.12*/ = string_insert( ebp_120, 0 );
      }
    }
    else
    {
    }
    fclose( fopen( *(int*)(bom_values[0].int_value + 20) != 0 ? "pcb-out.xy" : bom_values[1].str_value, "w" ) );
    if ( fopen( bom_filename, "w" ) )
    {
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# $Id" );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "$\n" );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# PcbBOM Version 1.0\n" );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# Date: %s\n", ebp_92 );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# Author: %s\n", pcb_author( ) );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# Title: %s - PCB BOM\n", PCB->Name ? *(char*)(PCB->Name) == 0 ? &PCB->Name : "(unknown)" : "(unknown)" );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# Quantity, Description, Value, RefDes\n" );
      __fprintf_chk( fopen( bom_filename, "w" ), 1, "# --------------------------------------------\n" );
      print_and_free( (FILE*)fopen( bom_filename, "w" ), &PCB->Data->ViaN );
      fclose( fopen( bom_filename, "w" ) );
    }
    else
    {
      gui->log( "Cannot open file %s for writing\n", bom_filename, ebp_216 );
      print_and_free( 0, &PCB->Data->ViaN );
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void bom_parse_arguments( int *argc, char ***argv )
{
  int ebx;
  int esi;
  hid_register_attributes( bom_options, 3 );
  argv = argv;
  argc = argc;
}
void hid_bom_init( void )
{
  apply_default_hid( &bom_hid, 0 );
  hid_register_hid( &bom_hid );
  return;
}
#if 0
#endif
