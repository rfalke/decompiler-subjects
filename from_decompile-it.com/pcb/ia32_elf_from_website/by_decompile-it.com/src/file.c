#include "file.c.h"
static char TMPFilename[80];
static int netlist_sort_offset;
static Boolean dont_save_any_more;
static hidval backup_timer;
int string_cmp( char *a, char *b )
{
  int ecx;
  if ( b & 255 )
  {
    if ( b[0] )
    {
      do
      {
        if ( ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( __res/*.1_1of4*/ * 2 ) + 1) & 8 ) & 255 ) == 0 || ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( b[0] * 2 ) + 1) & 8 ) & 255 ) == 0 )
        {
          int __res;
          if ( __res + 128 <= 383 )
          {
          }
        {
          int __res;
          if ( __res + 128 <= 383 )
          {
          }
          if ( ebp_28 == eax )
            goto B15;
          else
          {
            int __res = __res;
            if ( __res + 128 <= 383 )
            {
              __res = *(int*)(*(int*)(__ctype_tolower_loc( )) + ( __res << 2 ));
            }
          {
            int __res = b[0];
            if ( __res + 128 <= 383 )
            {
              __res = *(int*)(__res + ( ebp_44 << 2 ));
              break;
            }
          }
          }
        }
        }
        else
        {
          int ia = strtol( a, 0, 10 );
          int ib;
          if ( ib != ia )
          {
            ia -= ib;
            break;
          }
          while ( 1 )
          {
            if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( b[0] * 2 ) + 1) & 8 ) & 255 )
            {
              b[0] = b;
              do
              {
                b[0] = b + 1;
              }
              while ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( b[0] * 2 ) + 1) & 8 ) & 255 );
              a[0] = a + 1;
              b[0] = b + 1;
              if ( a[0] == 0 )
              {
                break;
              }
              if ( b[0] == 0 )
                break;
              do
              {
              }
              while ( b[0] );
              break;
            }
          }
        }
B15:;
        a[0] = a + 1;
        b[0] = b + 1;
        if ( a[0] == 0 )
        {
          break;
        }
      }
      while ( b[0] );
    }
    return 1;
  }
}
int netlist_sort( void *va, void *vb )
{
  int edx;
  /* phantom */ LibraryMenuType *am;
  /* phantom */ LibraryMenuType *bm;
  char *a;
  char *b;
  a[0] = ((int**)va);
  b[0] = ((int**)vb);
}
int netnode_sort( void *va, void *vb )
{
  int edx;
  /* phantom */ LibraryEntryType *am;
  /* phantom */ LibraryEntryType *bm;
  /* phantom */ char *a;
  /* phantom */ char *b;
}
void sort_library( LibraryTypePtr lib )
{
  int i;
  qsort( &lib->Menu, lib, 28, &netlist_sort );
  if ( lib->MenuN )
  {
    i = 0;
    do
    {
      i++;
      qsort( &lib->Menu->Entry, lib->Menu->EntryN, 24, &netnode_sort );
    }
    while ( lib->MenuN <= i );
  }
  return;
}
FILE *CheckAndOpenFile( char *Filename, Boolean Confirm, Boolean AllButton, Boolean *WasAllButton, Boolean *WasCancelButton )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  int edi;
  FILE *fp;
  struct stat buffer;
  char message[4176];
  int response;
  if ( Filename == 0 || Filename[0] == 0 )
    fp = 0;
  else
  {
    if ( !__xstat( 3, Filename, &buffer.st_dev ) && ( Confirm & 255 ) )
    {
      __sprintf_chk( message, 1, 4176, "File '%s' exists, use anyway?", Filename );
      if ( WasAllButton )
        WasAllButton[0] = 0;
      if ( WasCancelButton )
        WasCancelButton[0] = 0;
      gui->confirm_dialog( message[0], "Cancel", "Ok", "Sequence OK" );
      if ( response )
      {
        if ( response == 2 && WasAllButton )
          WasAllButton[0] = 1;
      }
      else
      {
        if ( WasCancelButton )
          WasCancelButton[0] = 1;
      }
    }
    if ( fp == 0 )
    {
      OpenErrorMessage( Filename );
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
FILE *OpenConnectionDataFile( void )
{
  static char *default_file;
  char *fname;
  FILE *fp = 0;
  Boolean result;
  gui->fileselect( "Save Connection Data As ...", "Choose a file to save all connection data to.", default_file, ".net" );
  if ( gui )
  {
    if ( default_file )
    {
      free( default_file );
      default_file = 0;
    }
    if ( fname )
    {
      default_file = __strdup( fname );
    }
    fp = CheckAndOpenFile( fname, 1, 0, &result, 0 );
    free( fname );
  }
  return fp;
}
int SaveBufferElements( char *Filename )
{
  int eax;
  int result;
  if ( Settings.ShowSolderSide )
    SwapBuffers( );
  result = Filename;
  WritePipe( Filename, 0 );
  if ( Settings.ShowSolderSide )
  {
    SwapBuffers( );
    return result;
  }
}
int SavePCB( char *Filename )
{
  int eax;
  int ebx;
  int retcode;
  char *copy;
  if ( WritePipe( Filename, edx ) == 0 )
  {
    copy[0] = MyStrdup( Filename, "SavePCB()" );
    SaveFree( &PCB->Filename );
    PCB->Filename = copy;
    SetChangedFlag( 0 );
  }
  return retcode;
}
int LoadPCB( char *Filename )
{
  int eax;
  double fp2;
  PCBTypePtr newPCB = CreateNewPCB( 0 );
  /* phantom */ Boolean units_mm;
  if ( ParsePCB( CreateNewPCB( 0 ), Filename ) == 0 )
  {
    RemovePCB( PCB );
    PCB = newPCB;
    CreateNewPCBPost( newPCB, 0 );
    ResetStackAndVisibility( );
    Crosshair.X = ( PCB->CursorX <= PCB->MaxWidth ? PCB->MaxWidth : PCB->CursorX ) < 0 ? PCB->CursorX <= PCB->MaxWidth ? PCB->MaxWidth : PCB->CursorX : ParsePCB( CreateNewPCB( 0 ), Filename );
    Crosshair.Y = ( PCB->MaxHeight < PCB->CursorY ? PCB->CursorY : PCB->MaxHeight ) < 0 ? PCB->MaxHeight < PCB->CursorY ? PCB->CursorY : PCB->MaxHeight : ParsePCB( CreateNewPCB( 0 ), Filename );
    Xorig = ( ( PCB->CursorX <= PCB->MaxWidth ? PCB->MaxWidth : PCB->CursorX ) < 0 ? PCB->CursorX <= PCB->MaxWidth ? PCB->MaxWidth : PCB->CursorX : ParsePCB( CreateNewPCB( 0 ), Filename ) ) - (int)( (double)( Output.Width / 2 ) / Zoom_Multiplier );
    Yorig = ( ( PCB->MaxHeight < PCB->CursorY ? PCB->CursorY : PCB->MaxHeight ) < 0 ? PCB->MaxHeight < PCB->CursorY ? PCB->CursorY : PCB->MaxHeight : ParsePCB( CreateNewPCB( 0 ), Filename ) ) - (int)( (double)( Output.Height / 2 ) / Zoom_Multiplier );
    ChangePCBSize( PCB->MaxWidth, PCB->MaxHeight );
    if ( PCB->Font.Valid == 0 )
    {
      Message( "File '%s' has no font information, using default font\n", Filename );
      CreateDefaultFont( );
    }
    SetChangedFlag( 0 );
    PCB->Filename = MyStrdup( Filename, "LoadPCB()" );
    Settings.grid_units_mm = ( ( ( ( ( (double)( (int)( PCB->Grid ) ) <> PCB->Grid ) & 69 ) >> 6 ) & 1 ) == 0 ) | ( PCB->Grid != (double)( (int)( PCB->Grid ) ) );
    netlist_sort_offset = 2;
    sort_library( &PCB->NetlistLib );
    netlist_sort_offset = 0;
    if ( hid_get_flag( "style" ) == 0 )
    {
      SetLineSize( PCB->RouteStyle->Thick );
      SetViaSize( PCB->RouteStyle->Diameter, 1 );
      SetViaDrillingHole( PCB->RouteStyle->Hole, 1 );
      SetKeepawayWidth( PCB->RouteStyle->Keepaway );
    }
    hid_action( "PCBChanged" );
    return 0;
  }
  else
  {
    hid_action( "PCBChanged" );
    RemovePCB( newPCB );
    return 1;
  }
}
void PreLoadElementPCB( void )
{
  if ( yyPCB )
  {
    yyFont = yyPCB + 184;
    yyData = &yyPCB->Data;
    yyPCB->Data->pcb = yyPCB;
    yyPCB->Data->LayerN = 0;
  }
  return;
}
void PostLoadElementPCB( void )
{
  PCBTypePtr pcb_save = PCB;
  ElementTypePtr e;
  if ( yyPCB )
  {
    CreateNewPCBPost( yyPCB, 0 );
    ParseGroupString( "1,c:2,s", &yyPCB->LayerGroups, yyData->LayerN );
    PCB = yyPCB;
    e = &yyPCB->Data->Element;
    MoveElementLowLevel( &yyPCB->Data, &yyPCB->Data->Element, 0 - e->BoundingBox.X1, 0 - e->BoundingBox.Y1 );
    PCB = pcb_save;
    yyPCB->MaxWidth = e->BoundingBox.X2;
    yyPCB->MaxHeight = e->BoundingBox.Y2;
  }
  return;
}
void PrintQuotedString( FILE *FP, char *S )
{
  static DynamicStringType ds;
  CreateQuotedString( &ds, S );
  fputs( ds.Data, FP );
  return;
}
void WritePCBInfoHeader( FILE *FP )
{
  static struct hostent *hostentry;
  struct passwd *pwentry;
  char hostname[256];
  time_t currenttime = time( ebp_312 );
  __fprintf_chk( FP, 1, "# release: %s 20091103\n", Progname );
  __fprintf_chk( FP, 1, "# date:    %s", asctime( localtime( &currenttime ) ) );
  __fprintf_chk( FP, 1, "# user:    %s (%s)\n", *(int*)(getpwuid( getuid( ) )), pwentry->pw_gecos );
  if ( gethostname( hostname, 255 ) != -1 )
  {
    if ( hostentry == 0 )
    {
      hostentry = (struct hostent*)gethostbyname( hostname );
      __fprintf_chk( FP, 1, "# host:    %s\n", (char*)hostentry );
    }
    __fprintf_chk( FP, 1, "# host:    %s\n", (char*)hostentry );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void WriteViaData( FILE *FP, DataTypePtr Data )
{
  int n;
  if ( Data->ViaN )
  {
    n = 0;
  {
    do
    {
      PinTypePtr via = ( via * 76 ) + *(int*)(ebp_28 + 28);
      __fprintf_chk( FP, 1, "Via[%i %i %i %i %i %i ", via->X, via->Y, via->Thickness, via->Clearance, via->Mask, via->DrillingHole );
      PrintQuotedString( FP, via->Name == 0 ? &via->Name : "" );
      n++;
      __fprintf_chk( FP, 1, " %s]\n", flags_to_string( via->Flags, 1 ) );
    }
    while ( *ebp_28 <= n );
  }
  }
  return;
}
void WriteElementData( FILE *FP, DataTypePtr Data )
{
  int ecx;
  int edx;
  int n, p;
  if ( Data->ElementN )
  {
    n = 0;
  {
    do
    {
      ElementTypePtr element = Data->Element + ( element * 300 );
      if ( element->LineN || element->PinN || element->ArcN || element->PadN )
      {
        __fprintf_chk( FP, 1, "\nElement[%s ", flags_to_string( element->Flags, 2 ) );
        PrintQuotedString( FP, element->Name->TextString == 0 ? &element->Name->TextString : "" );
        fputc( 32, FP );
        PrintQuotedString( FP, element->Name[1].TextString == 0 ? &element->Name[1].TextString : "" );
        fputc( 32, FP );
        PrintQuotedString( FP, element->Name[2].TextString == 0 ? &element->Name[2].TextString : "" );
        __fprintf_chk( FP, 1, " %i %i %i %i %i %i %s]\n(\n", element->MarkX, element->MarkY, element->Name->X - element->MarkX, element->Name->Y - element->MarkY, element->Name->Direction, element->Name->Scale, flags_to_string( element->Name->Flags, 1024 ) );
        if ( element->Attributes.Number > 0 )
        {
          do
          {
            __fprintf_chk( FP, 1, "%sAttribute(\"%s\" \"%s\")\n", "\t", &element->Attributes.List->name[0], &element->Attributes.List[1].value );
          }
          while ( 0 + 1 < element->Attributes.Number );
        }
        if ( element->PinN )
        {
          p = 0;
        {
          do
          {
            PinTypePtr pin = element->Pin + ( pin * 76 );
            __fprintf_chk( FP, 1, "\tPin[%i %i %i %i %i %i ", pin->X - element->MarkX, pin->Y - element->MarkY, pin->Thickness, pin->Clearance, pin->Mask, pin->DrillingHole );
            PrintQuotedString( FP, pin->Name == 0 ? &pin->Name : "" );
            __fprintf_chk( FP, 1, " " );
            PrintQuotedString( FP, pin->Number == 0 ? &pin->Number : "" );
            __fprintf_chk( FP, 1, " %s]\n", flags_to_string( pin->Flags, 256 ) );
          }
          while ( element->PinN <= p + 1 );
        }
        }
        if ( element->PadN )
        {
          p = 0;
        {
          do
          {
            PadTypePtr pad = element->Pad + ( pad * 104 );
            __fprintf_chk( FP, 1, "\tPad[%i %i %i %i %i %i %i ", pad->Point1.X - element->MarkX, pad->Point1.Y - element->MarkY, pad->Point2.X - element->MarkX, pad->Point2.Y - element->MarkY, pad->Thickness, pad->Clearance, pad->Mask );
            PrintQuotedString( FP, pad->Name == 0 ? &pad->Name : "" );
            __fprintf_chk( FP, 1, " " );
            PrintQuotedString( FP, pad->Number == 0 ? &pad->Number : "" );
            __fprintf_chk( FP, 1, " %s]\n", flags_to_string( pad->Flags, 512 ) );
          }
          while ( element->PadN <= p + 1 );
        }
        }
        if ( element->LineN )
        {
          p = 0;
        {
          do
          {
            LineTypePtr line;
            __fprintf_chk( FP, 1, "\tElementLine [%i %i %i %i %i]\n", element->Line->Point1.X - element->MarkX, element->Line->Point1.Y - element->MarkY, element->Line->Point2.X - element->MarkX, element->Line->Point2.Y - element->MarkY, element->Line->Thickness );
            p++;
          }
          while ( element->LineN <= p );
          FP = FP;
        }
        }
        if ( element->ArcN )
        {
          p = 0;
        {
          do
          {
            ArcTypePtr arc;
            p++;
            __fprintf_chk( FP, 1, "\tElementArc [%i %i %i %i %i %i %i]\n", element->Arc->X - element->MarkX, element->Arc->Y - element->MarkY, element->Arc->Width, element->Arc->Height, element->Arc->StartAngle, element->Arc->Delta, element->Arc->Thickness );
          }
          while ( element->ArcN <= p );
        }
        }
        fwrite( "\n\t)\n", 1, 4, FP );
      }
      n++;
    }
    while ( n < Data->ElementN );
  }
  }
  return;
}
void WriteLayerData( FILE *FP, Cardinal Number, LayerTypePtr layer )
{
  int eax;
  int edx;
  int ebp_36;
  int n;
  if ( layer->LineN == 0 && layer->ArcN == 0 && layer->TextN == 0 && layer->PolygonN == 0 )
  {
    if ( layer->Name[0] == 0 )
    {
      return;
    }
    if ( layer->Name == 0 )
    {
      return;
    }
  }
  __fprintf_chk( FP, 1, "Layer(%i ", Number + 1 + 1 );
  PrintQuotedString( FP, *(int*)(layer) == 0 ? &layer->Name[0] : "" );
  fwrite( ")\n(\n", 1, 4, FP );
  if ( layer->Attributes.Number > 0 )
  {
    FP = FP;
    layer = layer;
    do
    {
      __fprintf_chk( FP, 1, "%sAttribute(\"%s\" \"%s\")\n", "\t", &layer->Attributes.List->name[0], &layer->Attributes.List[1].value );
    }
    while ( 0 + 1 < layer->Attributes.Number );
  }
  if ( layer->LineN )
  {
    layer = layer;
    n = 0;
  {
    do
    {
      __fprintf_chk( FP, 1, "\tLine[%i %i %i %i %i %i %s]\n", line->Point1.X, line->Point1.Y, line->Point2.X, line->Point2.Y, line->Thickness, line->Clearance, flags_to_string( line->Flags, 4 ) );
    }
    while ( layer->LineN <= n );
  }
  }
  if ( layer->ArcN )
  {
    n = 0;
    layer = layer;
  {
    do
    {
      __fprintf_chk( FP, 1, "\tArc[%i %i %i %i %i %i %i %i %s]\n", arc->X, arc->Y, arc->Width, arc->Height, arc->Thickness, arc->Clearance, arc->StartAngle, arc->Delta, flags_to_string( arc->Flags, 16384 ) );
    }
    while ( layer->ArcN <= n );
  }
  }
  if ( layer->TextN )
  {
    n = 0;
  {
    TextTypePtr text;
    do
    {
      text = layer->Text + ( text * 60 );
      __fprintf_chk( FP, 1, "\tText[%i %i %i %i ", text->X, text->Y, text->Direction, text->Scale );
      n++;
      PrintQuotedString( FP, text->TextString == 0 ? &text->TextString : "" );
      __fprintf_chk( FP, 1, " %s]\n", flags_to_string( text->Flags, 16 ) );
    }
    while ( layer->TextN <= n );
  }
  }
  if ( layer->PolygonN )
  {
    ebp_36 = 0;
  {
    do
    {
      __fprintf_chk( FP, 1, "\tPolygon(%s)\n\t(", flags_to_string( polygon->Flags, 8 ) );
      if ( polygon->PointN )
      {
        p = 0;
        do
        {
          point = polygon->Points + ( p * 20 );
          if ( p == ( p / 5 ) * 5 )
            fwrite( "\n\t\t", 1, 3, FP );
        {
          PointTypePtr point;
          __fprintf_chk( FP, 1, "[%i %i] ", point->X, point->Y );
          p++;
        }
        }
        while ( p < polygon->PointN );
      }
      fwrite( "\n\t)\n", 1, 4, FP );
    }
    while ( layer->PolygonN <= ebp_36 );
  }
  }
  fwrite( ")\n", 1, 2, FP );
  return;
}
int WritePCB( FILE *FP )
{
  int eax;
  int ecx;
  int edx;
  int ebp_72;
  int ebp_68;
  int ebp_40;
  int ebp_36;
  Cardinal i;
  WritePCBInfoHeader( FP );
  __fprintf_chk( FP, 1, "\n# To read pcb files, the pcb version (or the cvs source date) must be &gt;= the file version\n" );
  __fprintf_chk( FP, 1, "FileVersion[%i]\n", 0x1324007 );
  fwrite( "\nPCB[", 1, 5, FP );
  PrintQuotedString( FP, PCB->Name == 0 ? &PCB->Name : "" );
  __fprintf_chk( FP, 1, " %i %i]\n\n", PCB->MaxWidth, PCB->MaxHeight );
  __fprintf_chk( FP, 1, "Grid[%s %i %i %i]\n", c_dtostr( PCB->Grid ), PCB->GridOffsetX, PCB->GridOffsetY, Settings.DrawGrid );
  __fprintf_chk( FP, 1, "Cursor[%i %i %s]\n", Xorig + (int)( (double)( Output.Width / 2 ) / 0.000000000000 ), Settings.ShowSolderSide == 0 ? Yorig + (int)( (double)( Output.Height / 2 ) / Zoom_Multiplier ) : PCB->MaxHeight - (int)( (double)( Output.Height / 2 ) / Zoom_Multiplier ) - Yorig, c_dtostr( PCB->Zoom ) );
  __fprintf_chk( FP, 1, "PolyArea[%s]\n", c_dtostr( PCB->IsleArea ) );
  __fprintf_chk( FP, 1, "Thermal[%s]\n", c_dtostr( PCB->ThermScale ) );
  __fprintf_chk( FP, 1, "DRC[%i %i %i %i %i %i]\n", PCB->Bloat, PCB->Shrink, PCB->minWid, PCB->minSlk, PCB->minDrill, PCB->minRing );
  __fprintf_chk( FP, 1, "Flags(%s)\n", pcbflags_to_string( PCB->Flags ) );
  __fprintf_chk( FP, 1, "Groups(\"%s\")\n", LayerGroupsToString( &PCB->LayerGroups ) );
  fwrite( "Styles[\"", 1, 8, FP );
  __fprintf_chk( FP, 1, "%s,%i,%i,%i,%i:", &PCB->RouteStyle->Name, PCB->RouteStyle->Thick, PCB->RouteStyle->Diameter, PCB->RouteStyle->Hole, PCB->RouteStyle->Keepaway );
  __fprintf_chk( FP, 1, "%s,%i,%i,%i,%i:", &PCB->RouteStyle[1].Name, PCB->RouteStyle[1].Thick, PCB->RouteStyle[1].Diameter, PCB->RouteStyle[1].Hole, PCB->RouteStyle[1].Keepaway );
  __fprintf_chk( FP, 1, "%s,%i,%i,%i,%i:", &PCB->RouteStyle[2].Name, PCB->RouteStyle[2].Thick, PCB->RouteStyle[2].Diameter, PCB->RouteStyle[2].Hole, PCB->RouteStyle[2].Keepaway );
  __fprintf_chk( FP, 1, "%s,%i,%i,%i,%i\"]\n\n", &PCB->RouteStyle[3].Name, PCB->RouteStyle[3].Thick, PCB->RouteStyle[3].Diameter, PCB->RouteStyle[3].Hole, PCB->RouteStyle[3].Keepaway );
  ebp_72 = 0;
  ebp_68 = PCB;
  do
  {
    if ( *(char*)(ebp_68 + 212) )
    {
      if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( ebp_72 * 2 ) + 1) & 64 ) & 255 )
      {
        if ( *(int*)(ebp_68 + 232) != ( *(int*)(ebp_68 + 232) / 100 ) * 100 )
          __fprintf_chk( FP, 1, "Symbol['%c' %i]\n(\n", ebp_72, *(int*)(ebp_68 + 232) );
        else
          __fprintf_chk( FP, 1, "Symbol('%c' %i)\n(\n", ebp_72, *(int*)(ebp_68 + 232) / 100 );
      }
      else
        __fprintf_chk( FP, 1, "Symbol[%i %i]\n(\n", ebp_72, *(int*)(ebp_68 + 232) );
      ebp_40 = *(int*)(ebp_68 + 216);
      if ( *(int*)(ebp_68 + 216) )
      {
        while ( 1 )
        {
          if ( *(int*)(*(int*)(ebp_68 + 208) + 132) != ( "huge", 0 ) )
          {
          }
          else
          {
            ebp_36 = *(int*)(*(int*)(ebp_68 + 208) + 136) / ( "huge", 0 );
            if ( *(int*)(*(int*)(ebp_68 + 208) + 136) != ( "huge", 0 ) )
            {
              __fprintf_chk( FP, 1, "\tSymbolLine[%i %i %i %i %i]\n", *(int*)(*(int*)(ebp_68 + 208) + 132), *(int*)(*(int*)(ebp_68 + 208) + 136), *(int*)(*(int*)(ebp_68 + 208) + 152), *(int*)(*(int*)(ebp_68 + 208) + 156), *(int*)(*(int*)(ebp_68 + 208) + 124) );
              ebp_40 += -1;
              if ( ebp_40 == 1 )
                goto B47;
              else
              {
              }
            }
            else
            if ( *(int*)(*(int*)(ebp_68 + 208) + 152) == ( "huge", 0 ) )
            {
              if ( *(int*)(*(int*)(ebp_68 + 208) + 156) != ( "huge", 0 ) )
              {
              }
              else
              if ( *(int*)(*(int*)(ebp_68 + 208) + 124) != ( "huge", 0 ) )
                continue;
              else
                __fprintf_chk( FP, 1, "\tSymbolLine(%i %i %i %i %i)\n", *(int*)(*(int*)(ebp_68 + 208) + 132) / ( "huge", 0 ), *(int*)(*(int*)(ebp_68 + 208) + 152) / ( "huge", 0 ), *(int*)(*(int*)(ebp_68 + 208) + 156) / ( "huge", 0 ), *(int*)(*(int*)(ebp_68 + 208) + 124) / ( "huge", 0 ) );
                ebp_40 += -1;
            }
          }
        }
      }
B47:;
      fwrite( ")\n", 1, 2, FP );
    }
    ebp_72++;
    ebp_68 += 28;
  }
  while ( ebp_72 != 256 );
  if ( PCB->Attributes.Number > 0 )
  {
    FP = FP;
    do
    {
      __fprintf_chk( FP, 1, "%sAttribute(\"%s\" \"%s\")\n", "", &PCB->Attributes.List->name[0], &PCB->Attributes.List->name[0] );
    }
    while ( 0 + 1 < PCB->Attributes.Number );
  }
  WriteViaData( FP, &PCB->Data );
  WriteElementData( FP, &PCB->Data );
  if ( PCB->Data->RatN )
  {
    FP = FP;
    do
    {
      __fprintf_chk( FP, 1, "Rat[%i %i %i %i %i %i ", PCB->Data->Rat->BoundingBox.X1, PCB->Data->Rat->BoundingBox.X1, PCB->Data->Rat->BoundingBox.X1, PCB->Data->Rat->BoundingBox.X1, PCB->Data->Rat->BoundingBox.X1, PCB->Data->Rat->BoundingBox.X1 );
      __fprintf_chk( FP, 1, " %s]\n", &eax );
    }
    while ( 0 + 1 < PCB->Data->RatN );
  }
  if ( PCB->Data->LayerN != -2 )
  {
    i = 0;
    FP = FP;
    do
    {
      i++;
      WriteLayerData( FP, i, PCB->Data + ( i * 92 ) + 76 );
    }
    while ( PCB->Data->LayerN + 2 <= i );
  }
  if ( PCB->NetlistLib.MenuN )
  {
    __fprintf_chk( FP, 1, "NetList()\n(\n" );
    if ( PCB->NetlistLib.MenuN )
    {
      FP = FP;
      ebp_36 = 0;
      do
      {
        __fprintf_chk( FP, 1, "\tNet(" );
        PrintQuotedString( FP, PCB->NetlistLib.Menu->Name[0] + 2 );
        __fprintf_chk( FP, 1, " " );
        PrintQuotedString( FP, &PCB->NetlistLib.Menu->Style );
        __fprintf_chk( FP, 1, ")\n\t(\n" );
        if ( PCB->NetlistLib.Menu->EntryN )
        {
          do
          {
            __fprintf_chk( FP, 1, "\t\tConnect(" );
            PrintQuotedString( FP, *ebp_76 );
            __fprintf_chk( FP, 1, ")\n" );
          }
          while ( 0 + 1 < *(int*)(*(int*)(1 + 8700) + ( ebp_36 * 28 ) + 12) );
        }
        __fprintf_chk( FP, 1, "\t)\n" );
        ebp_36++;
      }
      while ( ebp_36 < PCB->NetlistLib.MenuN );
    }
    __fprintf_chk( FP, 1, ")\n" );
  }
  return 0;
}
int WritePCBFile( char *Filename )
{
  int esi;
  FILE *fp;
  int result;
  if ( fopen( Filename, &ebx ) == 0 )
  {
    result = -1;
    OpenErrorMessage( Filename );
  }
  result = WritePCB( (FILE*)fopen( Filename, &ebx ) );
  fclose( fp );
  return result;
}
int WritePipe( char *Filename, Boolean thePcb )
{
  int ecx;
  int edx;
  static DynamicStringType command;
  FILE *fp;
  int result;
  char *p;
  int used_popen;
  if ( Settings.SaveCommand == 0 || Settings.SaveCommand[0] == 0 )
  {
    if ( fopen( Filename, "w" ) == 0 )
    {
      result = Filename | -1;
      Message( "Unable to write to file %s\n", Filename );
      return result;
    }
    used_popen = 0;
  }
  else
  {
    DSClearString( &command );
    p[0] = Settings.SaveCommand;
    while ( p[0] )
    {
      do
      {
        if ( p[0] != '%' )
          p[0] = p + 1;
        else
        {
          p[0] = p + 1;
          if ( p[0] == 'f' )
          {
            p[0] = p + 1;
            DSAddString( &command, Filename );
          }
        }
        DSAddCharacter( &command, fclose( fp ) );
        break;
        while ( p[0] )
        {
          do
          {
          }
          while ( p[0] );
          p[0] = p;
          break;
        }
        DSAddCharacter( &command, 0 );
        __printf_chk( 1, "write to pipe \"%s\"\n", command.Data );
        if ( popen( command.Data, "w" ) == 0 )
        {
          result = Filename | -1;
          PopenErrorMessage( command.Data );
          break;
        }
        used_popen = 1;
        DSAddCharacter( &command, fclose( fp ) );
        break;
        while ( p[0] )
        {
          do
          {
          }
          while ( p[0] );
        }
        DSAddCharacter( &command, 0 );
        __printf_chk( 1, "write to pipe \"%s\"\n", command.Data );
      }
      while ( p[0] );
    }
    DSAddCharacter( &command, 0 );
    __printf_chk( 1, "write to pipe \"%s\"\n", command.Data );
  }
  if ( thePcb )
  {
    result = WritePCB( fp );
    if ( used_popen )
    {
      if ( pclose( fp ) )
      {
        return -1;
      }
      return result;
    }
  }
  else
  {
    WriteViaData( fp, Buffers[ Settings.BufferNumber ].Data );
    WriteElementData( fp, Buffers[ Settings.BufferNumber ].Data );
    if ( PCB->Data->LayerN != -2 )
    {
      do
      {
        WriteLayerData( fp, 0 + 1, &Buffers[ Settings.BufferNumber ].Data->Layer[ 0 + 1 ] );
      }
      while ( 0 + 1 < PCB->Data->LayerN + 2 );
    }
    result = 0;
    if ( used_popen )
    {
    }
  }
  if ( fclose( fp ) )
  {
    return -1;
  }
  return result;
}
void SaveInTMP( void )
{
  int eax;
  char filename[80];
  if ( PCB && PCB->Changed )
  {
    __sprintf_chk( filename, 1, 80, "PCB.%.8i.save" );
    Message( "Trying to save your layout in '%s'\n", filename[0] );
    WritePCBFile( filename );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void EmergencySave( void )
{
  if ( dont_save_any_more == 0 )
  {
    SaveInTMP( );
    dont_save_any_more = 1;
    return;
  }
  return;
}
void DisableEmergencySave( void )
{
  dont_save_any_more = 1;
  return;
}
void backup_cb( hidval data )
{
  backup_timer.lval = 0;
  Backup( );
  if ( Settings.BackupInterval > 0 && gui->add_timer )
  {
    edx( ebp_12, backup_cb, Settings.BackupInterval * 1000, data.lval );
    backup_timer.lval = ebp_12;
  }
  return;
}
void EnableAutosave( void )
{
  /* phantom */ hidval x;
  if ( backup_timer && gui->stop_timer )
    eax( backup_timer.lval );
  backup_timer.lval = 0;
  if ( Settings.BackupInterval > 0 && gui->add_timer )
  {
    edx( ebp_12, backup_cb, (long long)( Settings.BackupInterval * 1000 ) );
    backup_timer.lval = ebp_12;
  }
  return;
}
void Backup( void )
{
  int eax;
  char *filename;
  if ( PCB && PCB->Filename )
  {
    if ( calloc( 1, strlen( &PCB->Filename ) + 2 ) )
      __sprintf_chk( filename, 1, -1, "%s-", &PCB->Filename );
      WritePCBFile( filename );
      free( filename );
      return;
  }
  else
  {
    if ( calloc( 1, 23 ) )
    {
      __sprintf_chk( filename, 1, 23, "PCB.%.8i.backup" );
      WritePCBFile( filename );
      free( filename );
      return;
    }
  }
  __fprintf_chk( stderr, 1, "Backup():  malloc failed\n" );
  exit( 1 );
}
void SaveTMPData( void )
{
  __sprintf_chk( TMPFilename, 1, 80, "PCB.%.8i.save" );
}
void RemoveTMPData( void )
{
  unlink( TMPFilename );
  return;
}
// Lost vars at line 1172 through condition folding
int ParseLibraryTree( void )
{
  int eax;
  int ecx;
  int edx;
  char path[4097];
  char working[4097];
  char *libpaths, *p;
  DIR *dir, *subdir;
  struct stat buffer;
  struct dirent *direntry, *e2;
  LibraryMenuTypePtr menu;
  LibraryEntryTypePtr entry;
  /* phantom */ size_t l;
  int n_footprints;
  mymemset( path, 0, 4097 );
  mymemset( working, 0, 4097 );
  GetWorkingDirectory( working );
  libpaths = MyStrdup( Settings.LibraryTree, "ParseLibraryTree" );
  if ( p && p[0] )
  {
    n_footprints = 0;
    do
    {
      strncpy( path, p, 4096 );
      chdir( working );
      dir = opendir( path );
      if ( dir == 0 )
        OpendirErrorMessage( path );
      else
      {
        chdir( path );
        GetWorkingDirectory( path );
        while ( readdir( &dir ) == 0 )
        {
          direntry->d_name[0] = &direntry->d_name[0];
          chdir( path );
          if ( !__xstat( 3, &direntry->d_name[0], &buffer.st_dev ) && ( buffer.st_mode & 61440 ) == 16384 && direntry->d_name[0] != '.' )
          {
            /* phantom */ size_t __s1_len;
            /* phantom */ size_t __s2_len;
            /* phantom */ unsigned char *__s1;
            /* phantom */ int __result;
            if ( direntry->d_name[0] == 67 && direntry->d_name[1] == 86 && direntry->d_name[2] == 83 )
            {
              if ( direntry->d_name[3] )
              {
              }
            }
            menu = GetLibraryMenuMemory( &Library );
            menu->Name[0] = MyStrdup( &direntry->d_name[0], "ParseLibraryTree()" );
            menu->directory = __strdup( strrchr( path, '/' ) == 0 ? strrchr( path, '/' ) + 1 : path );
            subdir = opendir( &direntry->d_name[0] );
            chdir( &direntry->d_name[0] );
            if ( subdir )
            {
              while ( readdir( &subdir ) == 0 )
              {
                if ( !__xstat( 3, &e2->d_name[0], &buffer.st_dev ) && ( buffer.st_mode & 61440 ) == 32768 && e2->d_name[0] != '.' && ( e2->d_name[0] != 67 || e2->d_name[1] != 86 || e2->d_name[2] != 83 || e2->d_name[3] ) )
                {
                  /* phantom */ size_t __s1_len;
                  /* phantom */ size_t __s2_len;
                  strcmp( "Makefile", &e2->d_name[0] );
                  if ( !1 )
                  {
                    /* phantom */ size_t __s1_len;
                    /* phantom */ size_t __s2_len;
                    strcmp( "Makefile.am", &e2->d_name[0] );
                    if ( !1 )
                    {
                      /* phantom */ size_t __s1_len;
                      /* phantom */ size_t __s2_len;
                      strcmp( "Makefile.in", &e2->d_name[0] );
                      if ( !1 && ( strlen( &e2->d_name[0] ) <= 3 || ( strcmp( e2 + strlen( &e2->d_name[0] ) + 7, ".png" ) && ( strlen( &e2->d_name[0] ) == 4 || strcmp( e2 + strlen( &e2->d_name[0] ) + 6, ".html" ) ) ) ) )
                      {
                        /* phantom */ long len;
                        n_footprints++;
                        entry = GetLibraryEntryMemory( menu );
                        entry->AllocatedMemory = eax;
                        strcat( entry + 4, path );
                        strcat( &entry->AllocatedMemory, "/" );
                        strcat( &entry->AllocatedMemory, &direntry->d_name[0] );
                        strcat( &entry->AllocatedMemory, "/" );
                        entry = entry->AllocatedMemory + ~strlen( &entry->AllocatedMemory ) + -1;
                        strcat( &entry->AllocatedMemory, &e2->d_name[0] );
                        *(int*)&entry->Template = -1;
                      }
                    }
                  }
                }
              }
            }
            closedir( &subdir );
          }
        }
        closedir( &dir );
      }
    }
    while ( p == 0 || p[0] == 0 );
  }
  else
    n_footprints = 0;
  free( libpaths );
  chdir( working );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return n_footprints;
}
int ReadLibraryContents( void )
{
  int eax;
  int edx;
  static char *command;
  char inputline[256];
  FILE *resultFP;
  LibraryMenuTypePtr menu;
  LibraryEntryTypePtr entry;
  SaveFree( (void*)command );
  command = 0;
  command = EvaluateFilename( Settings.LibraryContentsCommand, Settings.LibraryPath, Settings.LibraryFilename, 0 );
  if ( command && command )
  {
    resultFP = (FILE*)popen( 0, "r" );
    if ( resultFP == 0 )
      PopenErrorMessage( command );
    else
    {
      size_t len;
      menu = 0;
      while ( fgets( inputline, 255, resultFP ) == 0 )
      {
        len = inputline[0];
        do
        {
          len += 4;
        }
        while ( ( ( len + 0xfefefeff ) & ~len & 0x80808080 ) == 0 );
        len = ( ( ( ( len + 0xfefefeff ) & ~len & 0x80808080 & 32896 ) == 0 ? len : len + 2 ) + -3 ) - ( 0 & 1 ) - inputline[0];
        if ( inputline[0] != ( ( ( ( len + 0xfefefeff ) & ~len & 0x80808080 & 32896 ) == 0 ? len : len + 2 ) + -3 ) - ( 0 & 1 ) )
        {
          len += -1;
          if ( inputline[ len + 1 ] != '\n' )
            Message( "linelength (%i) exceeded; following characters will be ignored\n", 255 );
          else
            inputline[ len ] = 0;
        }
        strcmp( "TYPE=", inputline );
        if ( 1 )
        {
          menu = GetLibraryMenuMemory( &Library );
          menu->Name[0] = MyStrdup( inputline[5] != 0 ? "(unknown)" : &inputline[5], "ReadLibraryDescription()" );
          menu->directory = __strdup( Settings.LibraryFilename );
        }
        else
        {
          if ( menu == 0 )
          {
            menu = GetLibraryMenuMemory( &Library );
            menu->Name[0] = MyStrdup( "(unknown)", "ReadLibraryDescription()" );
            menu->directory = __strdup( Settings.LibraryFilename );
          }
          entry = GetLibraryEntryMemory( menu );
          entry->AllocatedMemory = MyStrdup( inputline, "ReadLibraryDescription()" );
          entry->Template = strtok( entry + 4, ":" );
          if ( entry + 8 )
          {
            entry->Package = strtok( 0, ":" );
            if ( entry + 12 == 0 )
              goto B42;
            else
            {
              entry->Value = strtok( 0, ":" );
              if ( entry + 16 == 0 )
              {
                if ( entry + 20 )
                  strlen( &entry->Description );
                entry = (struct {
                   char *ListEntry;
                   char *AllocatedMemory;
                   char *Template;
                   char *Package;
                   char *Value;
                   char *Description;
                }*)MyCalloc( 4 + strlen( entry + 20 ), 1, "ReadLibraryDescription()" );
                __sprintf_chk( (char*)entry, 1, -1, "%s, %s", *(int*)(entry->ListEntry[0] + 16) == 0 ? &entry->Value : "", *(int*)(entry->ListEntry[0] + 20) == 0 ? &entry->Description : "" );
              }
              else
              {
                entry->Description = strtok( 0, ":" );
                if ( entry->Value )
                {
                }
                else
                {
                }
              }
            }
          }
B42:;
        }
      }
      pclose( resultFP );
    }
  }
  else
    resultFP = 0;
  if ( ParseLibraryTree( ) > 0 || resultFP )
  {
    sort_library( &Library );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
int ReadNetlist( char *filename )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
int ImportNetlist( char *filename )
{
  int edx;
  FILE *fp;
  char buf[16];
  /* phantom */ int i;
  char *p;
  if ( filename && fopen( filename, "r" ) )
  {
    fclose( fp );
    buf[ fread( buf, 1, 15, fopen( filename, "r" ) ) ] = 0;
    if ( buf[0] )
    {
      p[0] = buf[0];
      filename[0] = filename;
    {
      do
      {
        int __res = __res/*.1_1of4*/;
        if ( __res + 128 <= 383 )
        {
        }
        p[0] = __res;
        p[0] = p + 1;
      }
      while ( p[0] );
    }
    }
    if ( strstr( buf, "edif" ) == 0 )
    {
      ReadNetlist( filename );
    }
    else
    {
      Message( "Importing edif netlist %s\n", filename );
      ParseEDIF( filename, 0 );
    }
  }
  else
  {
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 0;
}
#if 0
#endif
