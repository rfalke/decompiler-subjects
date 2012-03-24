#include "report.c.h"
static char reportdialog_syntax[15] = { 'R', 'e', 'p', 'o', 'r', 't', 'D', 'i', 'a', 'l', 'o', 'g', '(', ')' };
static char reportdialog_help[41] = { 'R', 'e', 'p', 'o', 'r', 't', ' ', 'o', 'n', ' ', 't', 'h', 'e', ' ', 'o', 'b', 'j', 'e', 'c', 't', ' ', 'u', 'n', 'd', 'e', 'r', ' ', 't', 'h', 'e', ' ', 'c', 'r', 'o', 's', 's', 'h', 'a', 'i', 'r' };
static char report_syntax[61] = { 'R', 'e', 'p', 'o', 'r', 't', '(', 'O', 'b', 'j', 'e', 'c', 't', '|', 'D', 'r', 'i', 'l', 'l', 'R', 'e', 'p', 'o', 'r', 't', '|', 'F', 'o', 'u', 'n', 'd', 'P', 'i', 'n', 's', '|', 'N', 'e', 't', 'L', 'e', 'n', 'g', 't', 'h', '|', 'A', 'l', 'l', 'N', 'e', 't', 'L', 'e', 'n', 'g', 't', 'h', 's', ')' };
static char report_help[24] = { 'P', 'r', 'o', 'd', 'u', 'c', 'e', ' ', 'v', 'a', 'r', 'i', 'o', 'u', 's', ' ', 'r', 'e', 'p', 'o', 'r', 't', '.' };
HID_Action report_action_list[2] = { { "ReportObject", "Click on an object", &ReportDialog, &reportdialog_help, &reportdialog_syntax }
, { "Report", 0, &Report, &report_help, &report_syntax }
 };
int ReportDialog( int argc, char **argv, int x, int y )
{
  int ecx;
  int edx;
  int dh;
  double fp0;
  double fp1;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  void *ptr1, *ptr2, *ptr3;
  int type;
  char report[2048];
  if ( SearchScreen( x, y, 24383, &ptr1, &ptr2, &ptr3 ) == 0 )
  {
    type = SearchScreen( x, y, 0x15f3f, &ptr1, &ptr2, &ptr3 );
    if ( SearchScreen( x, y, 0x15f3f, &ptr1, &ptr2, &ptr3 ) != 32 )
    {
      if ( ebx >= 32 )
      {
        if ( type != 1024 )
        {
          if ( ebx < 1024 )
          {
            switch ( type )
            {
            case 16384:
            {
              ArcTypePtr Arc = &ptr2[0];
              BoxTypePtr box = GetArcEnds( &ptr2[0] );
              len = Arc->BoundingBox.X2;
              __sprintf_chk( report, 1, 2048, "ARC ID# %ld   Flags:%s\nCenterPoint(X,Y) = (%d, %d)\nRadius = %0.2f %s, Thickness = %0.2f %s\nClearance width in polygons = %0.2f %s\nStartAngle = %ld degrees, DeltaAngle = %ld degrees\nBounding Box is (%d,%d), (%d,%d)\nThat makes the end points at (%d,%d) and (%d,%d)\nIt is on layer %d\n%s", *(int*)(ebx + 16), &eax, edi, ebp_2184, ebp_2216, ebp_2132, ebp_2232, ebp_2136, ebp_2200, ebp_2140, ebp_2144, ebp_2148, ebp_2152, ebp_2156, len, ebp_2164, ebp_2168, ebp_2172, ebp_2176, ebp_2180, ebp_2188, &esi );
              if ( report[0] == 0 )
              {
                Message( "Nothing found to report on\n", ebp_2412, ebp_2408, ebp_2404, ebp_2400, ebp_2396, ebp_2392, ebp_2384, ebp_2380, ebp_2376 );
                if ( 0 ^ 0 )
                {
                  __stack_chk_fail( );
                }
                return 0;
              }
              else
              {
                HideCrosshair( 0 );
                gui->report_dialog( "Report", type );
                RestoreCrosshair( 0 );
              }
            }
              break;
            case 2048:
            case 4096:
            {
              PointTypePtr point = &ptr2[0];
              __sprintf_chk( report, 1, 2048, "POINT ID# %ld. Points don't have flags.\nLocated at (X,Y) = (%d,%d)\nIt belongs to a %s on layer %d\n", "POINT ID# %ld. Points don't have flags.\nLocated at (X,Y) = (%d,%d)\nIt belongs to a %s on layer %d\n", point->ID, point->ID, &point->X, point->X );
            }
              break;
            }
          }
          else
          {
            if ( type == 256 )
            {
              Pin = &ptr2[0];
            {
              Cardinal n;
              Cardinal sn = element->PinN;
              /* phantom */ PinTypePtr pin;
              if ( element->PinN && element->Pin != Pin )
              {
                for ( ; n < sn && Pin != element->Pin + 76 + 76; n++ )
                {
                  // n++;
                }
              }
              if ( ( (unsigned char)( Pin->Flags.f ) & 8 ) & 255 )
              {
              }
              else
              {
                if ( Settings.grid_units_mm )
                  len = "mm";
                else
                {
                }
                __sprintf_chk( report, 1, 2048, "PIN ID# %ld   Flags:%s\n(X,Y) = (%d, %d)\nCopper width = %0.2f %s  Drill width = %0.2f %s\nClearance width to Polygon = %0.2f %s\nAnnulus = %0.2f %s\nSolder mask hole = %0.2f %s (gap = %0.2f %s)\nName = \"%s\"\nIt is owned by element %s\nAs pin number %s\n%s", *(int*)(ebx + 16), &eax, ebp_2132, ebp_2164, ebp_2216, ebp_2140, ebp_2232, ebp_2144, ebp_2200, ebp_2148, ebp_2248, ebp_2152, ebp_2264, ebp_2156, ebp_2280, &len, &esi, &edi, ebp_2184, ebp_2136 );
              }
            }
            }
            else
            {
              if ( type != 512 )
              {
                __sprintf_chk( report, 1, 2048, "Unknown\n" );
              }
              else
              {
                int len, dx, dy, mgap;
                PadTypePtr Pad;
                ElementTypePtr element = &ptr1[0];
                Pad = &ptr2[0];
              {
                Cardinal n;
                Cardinal sn = element->PadN;
                /* phantom */ PadTypePtr pad;
                if ( element->PadN && element->Pad != Pad )
                {
                  for ( ; n < sn && Pad != element->Pad + 104 + 104; n++ )
                  {
                    // n++;
                  }
                }
                if ( sqrt( (double)( ( ( Pad->Point1.Y - Pad->Point2.Y ) * ( Pad->Point1.Y - Pad->Point2.Y ) ) + ( ( Pad->Point1.X - Pad->Point2.X ) * ( Pad->Point1.X - Pad->Point2.X ) ) ) ) == sqrt( (double)( ( ( Pad->Point1.Y - Pad->Point2.Y ) * ( Pad->Point1.Y - Pad->Point2.Y ) ) + ( ( Pad->Point1.X - Pad->Point2.X ) * ( Pad->Point1.X - Pad->Point2.X ) ) ) ) )
                {
                  if ( sqrt( (double)( ( ( Pad->Point1.Y - Pad->Point2.Y ) * ( Pad->Point1.Y - Pad->Point2.Y ) ) + ( ( Pad->Point1.X - Pad->Point2.X ) * ( Pad->Point1.X - Pad->Point2.X ) ) ) ) != sqrt( (double)( ( ( Pad->Point1.Y - Pad->Point2.Y ) * ( Pad->Point1.Y - Pad->Point2.Y ) ) + ( ( Pad->Point1.X - Pad->Point2.X ) * ( Pad->Point1.X - Pad->Point2.X ) ) ) ) )
                  {
                  }
                  else
                  {
                    len = (int)( 0.000000000000 );
                    if ( Settings.grid_units_mm )
                      len = "mm";
                    else
                      len = "mils";
                    __sprintf_chk( report, 1, 2048, "PAD ID# %ld   Flags:%s\nFirstPoint(X,Y)  = (%d, %d)  ID = %ld\nSecondPoint(X,Y) = (%d, %d)  ID = %ld\nWidth = %0.2f %s.  Length = %0.2f %s.\nClearance width in polygons = %0.2f %s.\nSolder mask = %0.2f x %0.2f %s (gap = %0.2f %s).\nName = \"%s\"\nIt is owned by SMD element %s\nAs pin number %s and is on the %s\nside of the board.\n%s", *(int*)(ebx + 16), &eax, ebp_2144, ebp_2148, ebp_2136, ebp_2152, ebp_2156, ebp_2180, ebp_2216, ebp_2140, ebp_2232, &len, ebp_2200, ebp_2164, ebp_2248, ebp_2264, ebp_2168, ebp_2280, ebp_2172, &esi, &edi, ebp_2184, ebp_2132, ebp_2176 );
                  }
                }
                else
                {
                }
                sqrt( (double)( ( ( Pad->Point1.Y - Pad->Point2.Y ) * ( Pad->Point1.Y - Pad->Point2.Y ) ) + ( ( Pad->Point1.X - Pad->Point2.X ) * ( Pad->Point1.X - Pad->Point2.X ) ) ) );
                len = (int)( 0.000000000000 );
              }
              }
            }
          }
        }
        else
        {
          char laynum[32];
          TextTypePtr text = &ptr2[0];
          if ( type == 16 )
          {
            __sprintf_chk( laynum, 1, 32, "is on layer %d", GetLayerNumber( &PCB->Data, &ptr1[0] ) );
          }
          __sprintf_chk( report, 1, 2048, "TEXT ID# %ld   Flags:%s\nLocated at (X,Y) = (%d,%d)\nCharacters are %0.2f %s tall\nValue is \"%s\"\nDirection is %d\nThe bounding box is (%d,%d) (%d, %d)\nIt %s\n%s", text->ID, &eax, ebp_2188, ebx, ebp_2200, ebp_2132, ebp_2136, ebp_2140, ebp_2144, ebp_2148, ebp_2152, ebp_2156, &edi, ebp_2184 );
        }
      }
      else
      {
        switch ( type )
        {
        default:
          break;
        case 1:
        {
          PinTypePtr via = &ptr2[0];
          if ( ( (unsigned char)( via->Flags.f ) & 8 ) & 255 )
          {
          }
          else
          {
            __sprintf_chk( report, 1, 2048, "VIA ID# %ld   Flags:%s\n(X,Y) = (%d, %d)\nCopper width = %0.2f %s  Drill width = %0.2f %s\nClearance width in polygons = %0.2f %s\nAnnulus = %0.2f %s\nSolder mask hole = %0.2f %s (gap = %0.2f %s)\nName = \"%s\"%s", *(int*)(ebx + 16), &eax, edi, ebp_2184, ebp_2216, ebp_2136, ebp_2232, ebp_2140, ebp_2200, ebp_2144, ebp_2248, ebp_2148, ebp_2264, ebp_2152, ebp_2280, ebp_2156, &esi, ebp_2132 );
          }
        }
          break;
        case 4:
        {
          LineTypePtr line = &ptr2[0];
          if ( line->Number == 0 || line->Number[0] == 0 )
          {
          }
          __sprintf_chk( report, 1, 2048, "LINE ID# %ld   Flags:%s\nFirstPoint(X,Y) = (%d, %d)  ID = %ld\nSecondPoint(X,Y) = (%d, %d)  ID = %ld\nWidth = %0.2f %s.\nClearance width in polygons = %0.2f %s.\nIt is on layer %d\nand has name %s\n%s", *(int*)(ebx + 16), &eax, ebp_2132, ebp_2136, ebp_2140, ebp_2144, ebp_2188, ebp_2184, ebp_2216, ebp_2148, ebp_2200, ebp_2152, ebp_2156, &esi, &edi );
        }
          break;
        case 8:
        {
          PolygonTypePtr Polygon = &ptr2[0];
          __sprintf_chk( report, 1, 2048 );
        }
          break;
        case 2:
        {
          ElementTypePtr element = &ptr2[0];
          len = ( ( (unsigned char)( ((int*)ptr2) ) & 16 ) & 255 ) != 0 ? "" : "But it's hidden\n";
          __sprintf_chk( report, 1, 2048, "ELEMENT ID# %ld   Flags:%s\nBoundingBox (%d,%d) (%d,%d)\nDescriptive Name \"%s\"\nName on board \"%s\"\nPart number name \"%s\"\nIt is %0.2f %s tall and is located at (X,Y) = (%d,%d)\n%sMark located at point (X,Y) = (%d,%d)\nIt is on the %s side of the board.\n%s", *(int*)(ebx + 16), &eax, ebp_2132, ebp_2136, ebp_2140, ebp_2144, &esi, &edi, ebp_2184, ebp_2200, ebp_2148, ebp_2152, ebp_2156, &len, ebp_2164, ebp_2168, ebp_2188, ebp_2172 );
        }
          break;
        case 16:
          break;
        case 0:
          report[0] = 0;
          Message( "Nothing found to report on\n", ebp_2412, ebp_2408, ebp_2404, ebp_2400, ebp_2396, ebp_2392, ebp_2384, ebp_2380, ebp_2376 );
          break;
        }
      }
      __sprintf_chk( report, 1, 2048 );
    }
  }
  else
  if ( type != 32 )
  {
  }
{
  RatTypePtr line = &ptr2[0];
  __sprintf_chk( report, 1, 2048 );
}
}
double XYtoNetLength( int x, int y, int *found )
{
  double fp6;
  double fp7;
  double length;
  found[0] = 0;
  LookupConnection( ebp_72, y, ebp_64, (int)( PCB->Grid ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
{
  Cardinal l;
  LayerTypePtr layer = &PCB->Data->Layer;
  if ( PCB->Data->LayerN != -2 )
  {
    l = 0;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l )
      {
        Cardinal l;
        LayerTypePtr layer = PCB->Data + 76;
        if ( PCB->Data->LayerN == -2 )
          break;
        l = 0;
      {
        /* phantom */ double l;
        while ( n = layer->ArcN + -1, layer->ArcN + -1 == -1 )
        {
          l++;
          if ( *(int*)(ebp_40 + 24) + 2 <= l )
          {
            break;
          }
          else
          {
            layer++;
          }
        }
        do
        {
          if ( ( *(char*)(layer->Arc + ( layer->ArcN * 68 ) + -68 + 20) & 4 ) & 255 )
            found[0] = 1;
          n += -1;
        }
        while ( n + -1 != -1 );
        l++;
      }
      }
      else
      {
        layer++;
      }
    }
    do
    {
      line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
      if ( ( ( line->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
      {
        n += -1;
        if ( n + -1 != -1 )
          continue;
      }
      else
      {
        /* phantom */ double l;
        /* phantom */ int dx, dy;
        n += -1;
        found[0] = 1;
      }
    }
    while ( n + -1 != -1 );
  }
  }
  else
  {
  }
  return 0;
}
}
Missing divisor:  0x38e38e39(1)
Missing divisor:  0x38e38e39(1)
int Report( int argc, char **argv, int x, int y )
{
  int eax;
  int ecx;
  int edx;
  double fp7;
  int ebp_148;
  int ebp_144;
  int ebp_136;
  int ebp_132;
  int ebp_128;
  int ebp_124;
  int ebp_120;
  int ebp_116;
  if ( argc <= 0 )
  {
    Message( "Usage:\n%s\n", report_syntax[0] );
  }
  else
  {
    if ( strcasecmp( argv[0], "Object" ) == 0 )
    {
      gui->get_coords( "Click on an object", x, y );
    }
    else
    {
      if ( strcasecmp( argv[0], "DrillReport" ) )
      {
        if ( strcasecmp( argv[0], "FoundPins" ) )
        {
          if ( strcasecmp( argv[0], "NetLength" ) == 0 )
          {
            SaveUndoSerialNumber( );
            ResetFoundPinsViasAndPads( 1 );
            RestoreUndoSerialNumber( );
            ResetFoundLinesAndPolygons( 1 );
            RestoreUndoSerialNumber( );
            gui->get_coords( "Click on a connection", ebp_96, ebp_100, ebp_144 );
            if ( 0 == 0 )
            {
              gui->log( "No net under cursor.\n" );
            }
            else
            {
              ebp_128 = PCB;
              ebp_136 = PCB->Data->ElementN + -1;
              if ( PCB->Data->ElementN + -1 != -1 )
              {
                ebp_144 = ( PCB->Data->ElementN * 300 ) + -300;
                while ( ebp_116 = ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32), ebp_120 = *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224), *(int*)(ebp_144 + *(int*)(PCB->Data + 32) + 224) == 0 )
                {
                  ebp_120 = 0;
                  ebp_124 = 0;
                  ebp_132 = *(int*)(ebp_116 + 232);
                  while ( 1 )
                  {
                    do
                    {
                      if ( !ebp_132 || ebp_132 <= ebp_124 )
                      {
                        ebp_136 += -1;
                        ebp_144 += -300;
                        if ( ebp_136 != -1 )
                        {
                          break;
                          while ( ebp_116 = ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32), ebp_120 = *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224), *(int*)(ebp_144 + *(int*)(PCB->Data + 32) + 224) == 0 )
                          {
                            ebp_120 = 0;
                            ebp_124 = 0;
                            ebp_132 = *(int*)(ebp_116 + 232);
                            while ( 1 )
                            {
                              do
                              {
                              }
                              while ( ebp_132 != ebp_132 );
                              ebp_124++;
                              ebp_120 += 104;
                            }
                          }
                          while ( ( ( *(char*)(*(int*)(ebp_116 + 256) + ( ( ( *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224) + 0 + 1 ) - ebp_120 ) * 76 )) & 4 ) & 255 ) == 0 || *(int*)(PCB->Data + 64) == 0 || *(int*)(ebp_116 + 148) == 0 )
                          {
                            if ( *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224) == 0 || *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224) <= ( ( ( *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224) + 0 + 1 ) - ebp_120 ) + *(int*)(ebp_144 + *(int*)(*(int*)(ebp_128 + 8716) + 32) + 224) + 1 ) - ebp_120 )
                            {
                              ebp_120 = 0;
                              ebp_124 = 0;
                              ebp_132 = *(int*)(ebp_116 + 232);
                              while ( 1 )
                              {
                                do
                                {
                                }
                                while ( ebp_132 != ebp_132 );
                              }
                            }
                            else
                            {
                            }
                          }
                          ebp_128 = PCB;
                          if ( PCB->NetlistLib.MenuN )
                          {
                            ebp_132 = 0;
                            ebp_148 = *(int*)(ebp_128 + 8700);
                            do
                            {
                              ebp_124 = ebp_148 + ( ebp_132 * 28 );
                              if ( *(int*)(ebp_148 + ( 0 * 28 ) + 12) )
                              {
                                do
                                {
                                  if ( eax == 0 )
                                  {
                                    HideCrosshair( 0 );
                                    if ( *ebp_124 + 2 )
                                      gui->log( "Net %s length: %0.2f %s\n", *ebp_124 + 2, 0.000000000000, Settings.grid_units_mm != 0 ? "mils" : "mm" );
                                      RestoreCrosshair( 0 );
                                    else
                                      gui->log( "Net length: %0.2f %s\n", 0.000000000000, Settings.grid_units_mm != 0 ? "mils" : "mm" );
                                      RestoreCrosshair( 0 );
                                    ebp_148++;
                                    if ( PCB->NetlistLib.MenuN <= ebp_148 )
                                    {
                                      if ( ebp_132 != ebp_132 )
                                      {
                                        do
                                        {
                                        }
                                        while ( ebp_132 != ebp_132 );
                                      }
                                    }
                                    else
                                    {
                                      do
                                      {
                                        if ( *(int*)(*(int*)(ebp_128 + 8700) + ( 0 * 28 ) + 12) )
                                        {
                                          do
                                          {
                                            if ( eax == 0 )
                                            {
                                              HideCrosshair( 0 );
                                            }
                                            else
                                          }
                                          while ( 0 + 1 + 1 < *(int*)(*(int*)(ebp_128 + 8700) + ( ( *(int*)(ebp_128 + 8700) + ( ebp_148 * 28 ) ) * 28 ) + 12) );
                                        }
                                        ebp_148++;
                                      }
                                      while ( ebp_148 < PCB->NetlistLib.MenuN );
                                    }
                                  }
                                  else
                                }
                                while ( *(int*)(ebp_148 + ( ( ebp_148 + ( ebp_132 * 28 ) ) * 28 ) + 12) <= 0 + 1 + 1 );
                              }
                              ebp_132++;
                            }
                            while ( PCB->NetlistLib.MenuN <= ebp_132 );
                          }
                        }
                      }
                      else
                      {
                        if ( ( ( *(char*)(ebp_120 + *(int*)(ebp_116 + 260) + 20) & 4 ) & 255 ) == 0 || *(int*)(ebp_120 + *(int*)(ebp_116 + 260) + 92) == 0 || *(int*)(ebp_116 + 148) == 0 )
                          continue;
                        else
                        {
                          ebp_128 = PCB;
                          if ( PCB->NetlistLib.MenuN )
                          {
                            ebp_148 = 0;
                            do
                            {
                            }
                            while ( ebp_148 < PCB->NetlistLib.MenuN );
                          }
                          else
                          {
                          }
                        }
                      }
                    }
                    while ( ebp_132 != ebp_132 );
                  }
                }
              }
              HideCrosshair( 0 );
              gui->log( "Net length: %0.2f %s\n", 0.000000000000, Settings.grid_units_mm != 0 ? "mils" : "mm" );
              RestoreCrosshair( 0 );
            }
          }
          else
          {
            if ( strcasecmp( argv[0], "AllNetLengths" ) )
            {
              Message( "Syntax error.  Usage:\n%s\n", report_syntax[0] );
            }
            else
            {
              ebp_144 = ~( 0 - ( ( Settings.grid_units_mm < ( 1 & 255 ) ) & 1 ) ) + 2;
              if ( argc != 1 )
              {
                __printf_chk( 1, "Units: %s\n", argv[1] );
                ebp_144 = 1;
                if ( strcasecmp( argv[1], "mm" ) && strcasecmp( argv[1], "mil" ) )
                {
                  ebp_144 = __MOD(( 0 - ( ( strcasecmp( argv[1], "in" ) < 1 ) & 1 ) ),4);
                }
              }
              ebp_124 = PCB;
              if ( PCB->NetlistLib.MenuN )
              {
                ebp_128 = 0;
                argv[0] = &argv;
                do
                {
                  if ( strchr( __strdup( *(int*)(*(int*)(*(int*)(ebp_124 + 8700) + ( ebp_128 * 28 ))) ), '-' ) == 0 )
                  {
                    free( ebp_132 );
                    ebp_124 = PCB;
                  }
                  else
                  {
                    *(char*)(strchr( __strdup( *(int*)(*(int*)(*(int*)(ebp_124 + 8700) + ( ebp_128 * 28 ))) ), '-' )) = 0;
                    ebp_124 = PCB;
                    ebp_120 = PCB->Data->ElementN + -1;
                    if ( PCB->Data->ElementN + -1 != -1 )
                    {
                      ebp_116 = PCB->Data->Element + ( PCB->Data->ElementN * 300 ) + -68;
                      do
                      {
                        if ( *(int*)(ebp_116 + -84) && strcmp( *(int*)(ebp_116 + -84), ebp_132 ) == 0 )
                        {
                          if ( *(int*)(ebp_116 + -8) )
                          {
                            do
                            {
                              if ( eax == 0 )
                              {
                                SaveUndoSerialNumber( );
                                ResetFoundPinsViasAndPads( 1 );
                                RestoreUndoSerialNumber( );
                                ResetFoundLinesAndPolygons( 1 );
                                RestoreUndoSerialNumber( );
                                XYtoNetLength( *(int*)(*(int*)(ebp_116 + 24) + 128), *(int*)(*(int*)(ebp_116 + 24) + 132), ebp_104 );
                                switch ( ebp_144 )
                                {
                                default:
                                  gui->log( "Net %s length %d\n", ebx, (int)( fp7 ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
                                  ebp_124 = PCB;
                                  break;
                                case 1:
                                  gui->log( "Net %s length %.2f mm\n", ebx, fp7 * 0.000254000000 );
                                  ebp_124 = PCB;
                                  break;
                                case 2:
                                  gui->log( "Net %s length %d mil\n", ebx, (int)( fp7 / 100.000000000000 ), "12 # (unsigned short)( ( ( fpround & 3 ) << 10 ) | 895 )" );
                                  ebp_124 = PCB;
                                  break;
                                case 3:
                                  gui->log( "Net %s length %.3f in\n", ebx, fp7 / 100000.000000000000 );
                                  ebp_124 = PCB;
                                  break;
                                }
                              }
                              else
                            }
                            while ( 0 + 1 + 1 < *(int*)(ebp_116 + -8) );
                          }
                          if ( *ebp_116 )
                          {
                            do
                            {
                              if ( eax == 0 )
                              {
                                SaveUndoSerialNumber( );
                                ResetFoundPinsViasAndPads( 1 );
                                RestoreUndoSerialNumber( );
                                ResetFoundLinesAndPolygons( 1 );
                                RestoreUndoSerialNumber( );
                                XYtoNetLength( *(int*)(*(int*)(ebp_116 + 24) + 128), *(int*)(*(int*)(ebp_116 + 24) + 132), ebp_104 );
                                switch ( ebp_144 )
                                {
                                default:
                                  break;
                                case 1:
                                  break;
                                case 2:
                                  break;
                                case 3:
                                  break;
                                }
                              }
                              else
                              {
                              }
                            }
                            while ( 0 + 1 + 1 < *ebp_116 );
                          }
                        }
                        ebp_120 += -1;
                        ebp_116 += -300;
                      }
                      while ( ebp_120 != -1 );
                    }
                  }
                  ebp_128++;
                }
                while ( *(int*)(ebp_124 + 8692) <= ebp_128 );
              }
            }
          }
        }
        else
        {
          DSClearString( &list );
          DSAddString( &list, "The following pins/pads are FOUND:\n" );
          ebp_116 = PCB->Data->ElementN + -1;
          if ( PCB->Data->ElementN + -1 != -1 )
          {
            ebp_120 = ( PCB->Data->ElementN * 300 ) + -300;
            while ( *(int*)(ebp_120 + *(int*)(PCB->Data + 32) + 224) == 0 )
            {
              while ( eax && esi < eax )
              {
                if ( ( ( *(char*)(*(int*)(ebx + 260) + ( esi * 104 )) & 4 ) & 255 ) == 0 )
                  continue;
                else
                {
Missing divisor:  0x38e38e39(1)
                  __sprintf_chk( ebp_92, 1, 64, "%s-%s,%c", *(int*)(ebx + 148), *(int*)(ecx + 92), edi - ( ( edi / 0 ) * 9 ) == 8 ? 32 : 10 );
                  DSAddString( &list, ebp_92 );
                }
              }
              ebp_116 += -1;
              ebp_120 += -300;
              if ( ebp_116 == -1 )
                goto B39;
              else
              {
              }
            }
            while ( ( ( *(char*)(*(int*)(ebx + 256) + ( esi * 76 )) & 4 ) & 255 ) == 0 )
            {
              if ( eax == 0 || *(int*)(ebp_120 + *(int*)(PCB->Data + 32) + 224) <= ( ( ( 0 + *(int*)(ebx + 224) + 1 ) - ebp_112 ) + *(int*)(ebp_120 + *(int*)(PCB->Data + 32) + 224) + 1 ) - ebp_112 )
              {
                while ( eax && esi < eax )
                {
                }
              }
              else
              {
              }
            }
Missing divisor:  0x38e38e39(1)
            __sprintf_chk( ebp_92, 1, 64, "%s-%s,%c", *(int*)(ebx + 148), *(int*)(ecx + 64), edi - ( ( edi / 0 ) * 9 ) == 8 ? 32 : 10 );
            DSAddString( &list, ebp_92 );
          }
B39:;
          HideCrosshair( 0 );
          gui->report_dialog( "Report", list.Data );
          RestoreCrosshair( 0 );
        }
      }
      else
      {
        RoundDrillInfo( GetDrillInfo( &PCB->Data ), 100 );
        if ( *(int*)(*ebp_216) )
        {
          do
          {
            *(int*)(*ebp_216 + 8) += 40;
          }
          while ( 0 + 1 + 1 < *(int*)(*ebp_216) );
        }
        __sprintf_chk( ebp_116, 1, -1, "There are %d different drill sizes used in this layout, %d holes total\n\nDrill Diam. (mils)\t# of Pins\t# of Vias\t# of Elements\t# Unplated\n", *(int*)(*ebp_216), *(int*)(*(int*)(*ebp_216 + 8) + 56) + ( "huge", 0 ) + *(int*)(*(int*)(*ebp_216 + 8) + 40 + 20) + 0 );
        if ( *ebp_116 )
        {
          do
          {
          }
          while ( *(char*)(ebp_116 + 1 + 1) );
        }
        if ( *(int*)(*ebp_216) )
        {
          do
          {
            __sprintf_chk( ebp_116 + 1, 1, -1, "\t%d\t\t\t%d\t\t%d\t\t%d\t\t%d\n", *(int*)(*(int*)(*ebp_216 + 8) + 12), *(int*)(*(int*)(*ebp_216 + 8) + 16), *(int*)(*(int*)(*ebp_216 + 8) + 4), *(int*)(*(int*)(*ebp_216 + 8) + 20) );
            if ( *(char*)(ebp_116 + 1) )
            {
              do
              {
              }
              while ( *(char*)(ebp_116 + 1 + 1) );
            }
          }
          while ( esi + 1 < ecx );
        }
        FreeDrillInfo( &esi );
        gui->report_dialog( "Drill Report", ebp_116 );
        SaveFree( ebp_116 );
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return 1;
}
void register_report_action_list( void )
{
  hid_register_actions( report_action_list, 2 );
  return;
}
#if 0
#endif
