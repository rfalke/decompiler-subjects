#include "set.c.h"
static int mode_position;
static int mode_stack[16];
void SetGrid( float Grid, Boolean align )
{
  int eax;
  double fp7;
  if ( Grid <= 1.000000000000 )
  {
    if ( 100000.000000000000 <= Grid )
    {
      if ( ( align & 255 ) == 0 )
      {
      }
      else
      {
        PCB->GridOffsetX = (int)( (double)( Crosshair.X ) + 0.500000000000 );
        PCB->GridOffsetY = (int)( 0.500000000000 + (double)( Crosshair.Y ) );
      }
      PCB->Grid = (double)( Crosshair.Y );
      if ( Settings.DrawGrid )
      {
      }
    }
    else
    {
    }
  }
  else
  {
  }
  return;
}
void SetLineSize( BDimension Size )
{
  if ( Size + -1 <= 0x98967f )
  {
    Settings.LineThickness = Size;
    if ( PCB->Flags.f/*.1_1of4*/ < 0 )
    {
      FitCrosshairIntoGrid( Crosshair.X, Crosshair.Y );
      return;
    }
  }
  return;
}
void SetViaSize( BDimension Size, Boolean Force )
{
  int eax;
  if ( Force || ( Size + -2000 <= 0x988eb0 && Settings.ViaDrillingHole + 399 < Size ) )
  {
    Settings.ViaThickness = Size;
  }
  return;
}
void SetViaDrillingHole( BDimension Size, Boolean Force )
{
  int eax;
  if ( Force || ( Size + -400 <= 0x9894f0 && Size < Settings.ViaThickness + -399 ) )
  {
    Settings.ViaDrillingHole = Size;
  }
  return;
}
void pcb_use_route_style( RouteStyleType *rst )
{
  Settings.LineThickness = rst->Thick;
  Settings.ViaThickness = rst->Diameter;
  Settings.ViaDrillingHole = rst->Hole;
  Settings.Keepaway = rst->Keepaway;
  return;
}
void SetKeepawayWidth( BDimension Width )
{
  if ( Width <= 0x989680 )
  {
    Settings.Keepaway = Width;
  }
  return;
}
void SetTextScale( Dimension Scale )
{
  if ( Scale + -10 >= 9990 )
  {
    Settings.TextScale = Scale = Scale;
  }
  return;
}
void SetChangedFlag( Boolean New )
{
  if ( PCB->Changed != (unsigned char)( New ) )
  {
    PCB->Changed = New;
  }
  return;
}
void SetCrosshairRangeToBuffer( void )
{
  if ( Settings.Mode == 5 )
  {
    SetBufferBoundingBox( &Buffers[ Settings.BufferNumber ] );
    SetCrosshairRange( Buffers[ Settings.BufferNumber ].X - Buffers[ Settings.BufferNumber ].BoundingBox.X1, Buffers[ Settings.BufferNumber ].Y - Buffers[ Settings.BufferNumber ].BoundingBox.Y1, ( PCB->MaxWidth + Buffers[ Settings.BufferNumber ].X ) - Buffers[ Settings.BufferNumber ].BoundingBox.X2, ( PCB->MaxHeight + Buffers[ Settings.BufferNumber ].Y ) - Buffers[ Settings.BufferNumber ].BoundingBox.Y2 );
    return;
  }
  return;
}
void SetBufferNumber( int Number )
{
  if ( Number <= 4 )
  {
    Settings.BufferNumber = Number;
  }
  return;
}
void SaveMode( void )
{
  mode_stack[ mode_position ] = Settings.Mode;
  if ( mode_position <= 14 )
  {
    mode_position++;
  }
  return;
}
void RestoreMode( void )
{
  if ( mode_position == 0 )
  {
    Message( "hace: underflow of restore mode\n" );
    return;
  }
  mode_position += -1;
  SetMode( mode_stack[ mode_position + -1 ] );
  return;
}
void SetMode( int Mode )
{
  int eax;
  int ecx;
  int edx;
  static Boolean recursing;
  if ( recursing == 0 )
  {
    recursing = 1;
    HideCrosshair( 1 );
    addedLines = 0;
    Crosshair.AttachedObject.Type = 0;
    Crosshair.AttachedObject.State = 0;
    Crosshair.AttachedPolygon.PointN = 0;
    if ( PCB->RatDraw )
    {
      switch ( Mode )
      {
      case 1:
      case 3:
      case 4:
      case 6:
      case 106:
      case 108:
      case 109:
        Message( "That mode is NOT allowed when drawing ratlines!\n" );
        Mode = 0;
        if ( ( ( Settings.Mode == 2 ) & 255 ) || ( ( Settings.Mode == 109 ) & 255 ) )
        {
          SetLocalRef( 0, 0, 0 );
        }
        Crosshair.AttachedBox.State = 0;
        Crosshair.AttachedLine.State = 0;
        if ( edx & 255 )
        {
          if ( PCB->Flags.f/*.1_1of4*/ < 0 )
          {
            SaveUndoSerialNumber( );
            ResetFoundPinsViasAndPads( 1 );
            RestoreUndoSerialNumber( );
            ResetFoundLinesAndPolygons( 1 );
            IncrementUndoSerialNumber( );
            Settings.Mode = Mode;
            SetCrosshairRange( 0, 0, PCB->MaxWidth, PCB->MaxHeight );
            recursing = 0;
            MoveCrosshairRelative( 0, 0 );
            Mode = 1;
          }
        }
        else
        {
          Settings.Mode = Mode;
          if ( Mode != 5 )
          {
            SetCrosshairRange( 0, 0, PCB->MaxWidth, PCB->MaxHeight );
            recursing = 0;
            MoveCrosshairRelative( 0, 0 );
            Mode = 1;
          }
          else
            SetCrosshairRangeToBuffer( );
            recursing = 0;
            MoveCrosshairRelative( 0, 0 );
            Mode = 1;
        }
        break;
      default:
        break;
      }
    }
    else
    if ( Settings.Mode == 2 && Mode == 109 && Crosshair.AttachedLine.State )
    {
      Crosshair.AttachedLine.State = 0;
      Crosshair.AttachedBox.State = 1;
      Crosshair.AttachedBox.Point2.X = Crosshair.AttachedLine.Point1.X;
      Crosshair.AttachedBox.Point1.X = Crosshair.AttachedLine.Point1.X;
      Crosshair.AttachedBox.Point2.Y = Crosshair.AttachedLine.Point1.Y;
      Crosshair.AttachedBox.Point1.Y = Crosshair.AttachedLine.Point1.Y;
      AdjustAttachedObjects( );
    }
    if ( Mode == 2 && ( ( Settings.Mode == 109 ) & 255 ) && Crosshair.AttachedBox.State )
    {
      Crosshair.AttachedBox.State = 0;
      Crosshair.AttachedLine.State = 1;
      Settings.Mode = 2;
      Crosshair.AttachedLine.Point2.X = Crosshair.AttachedBox.Point1.X;
      Crosshair.AttachedLine.Point1.X = Crosshair.AttachedBox.Point1.X;
      Crosshair.AttachedLine.Point2.Y = Crosshair.AttachedBox.Point1.Y;
      Crosshair.AttachedLine.Point1.Y = Crosshair.AttachedBox.Point1.Y;
      AdjustAttachedObjects( );
    }
    else
    {
    }
  }
  else
  {
    return;
  }
}
void SetRouteStyle( char *name )
{
  char num[10];
{
  do
  {
    Cardinal n;
    /* phantom */ RouteStyleTypePtr style;
    if ( name && PCB->RouteStyle->Name && strcmp( name, &PCB->RouteStyle->Name ) == 0 )
    {
      __sprintf_chk( num, 1, 10, "%d", n + 1 );
      hid_actionl( "RouteStyle", (long long)( num[0] ) );
      break;
    }
    else
    {
      n++;
    }
  }
  while ( n + 1 != 4 );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
}
void SetLocalRef( LocationType X, LocationType Y, Boolean Showing )
{
  int ebx;
  int esi;
  static MarkType old;
  static int count;
  if ( Showing )
  {
    HideCrosshair( 1 );
    if ( count == 0 )
    {
      old.status = Marked.status;
      old.X = Marked.X;
      old.Y = Marked.Y;
    }
    Marked.X = X;
    Marked.Y = Y;
    Marked.status = 1;
    count++;
    X = 0;
  }
  else
  {
    if ( count <= 0 )
    {
      return;
    }
    HideCrosshair( 0 );
    count = 0;
    Marked.status = old.status;
    Marked.X = old.X;
    Marked.Y = old.Y;
    X = 0;
  }
}
#if 0
#endif
