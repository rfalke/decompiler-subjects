#include "insert.c.h"
static LocationType InsertX;
static LocationType InsertY;
static Cardinal InsertAt;
static Boolean Forcible;
static ObjectFunctionType InsertFunctions = { &InsertPointIntoLine, 0, &InsertPointIntoPolygon, 0, 0, 0, 0, 0, 0, 0, 0, &InsertPointIntoRat }
;
void *InsertPointIntoRat( RatTypePtr Rat )
{
  int eax;
  int ecx;
  int edx;
  LineTypePtr new = eax;
  if ( eax )
  {
    AddObjectToCreateUndoList( 4, PCB->Data + ( LayerStack[0] * 92 ) + 76, (void*)new, (void*)new );
    EraseRat( Rat );
    DrawLine( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB + 8716) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, new, 0 );
    if ( CreateDrawnLineOnLayer( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, Rat->Point2.X, Rat->Point2.Y, InsertX, InsertY, Settings.LineThickness, Settings.Keepaway * 2, Rat->Flags ) )
    {
      AddObjectToCreateUndoList( 4, PCB->SilkActive == 0 ? *(int*)(PCB + 8716) + ( LayerStack[0] * 92 ) + 76 : PCB->Data + ( ( PCB->Data->LayerN + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, (void*)new, (void*)new );
      DrawLine( PCB->SilkActive == 0 ? ( LayerStack[0] * 92 ) + *(int*)(PCB->Data + ( LayerStack[0] * 92 ) + 76 + 8716) + 76 : PCB->Data[5].via_tree + ( ( PCB->Data[5].via_tree[3].root + ( Settings.ShowSolderSide == 0 ) ) * 92 ) + 76, new, 0 );
    }
    MoveObjectToRemoveUndoList( 32, (void*)Rat, (void*)Rat, (void*)Rat );
    Draw( );
    return (void*)new;
  }
}
void *InsertPointIntoLine( LayerTypePtr Layer, LineTypePtr Line )
{
  int eax;
  int ecx;
  int edx;
  LineTypePtr line;
  /* phantom */ LocationType X;
  /* phantom */ LocationType Y;
  if ( Line->Point1.X != InsertX )
  {
  }
  else
  if ( Line->Point1.Y == InsertY )
  {
    return (void*)line;
  }
  if ( Line->Point2.X != InsertX )
  {
  }
  else
  if ( Line->Point2.Y == ecx )
  {
    return (void*)line;
  }
  AddObjectToMoveUndoList( 4096, (void*)Layer, (void*)Line, Line + 64, InsertX - Line->Point2.X, ecx - edx );
  EraseLine( Line );
  r_delete_entry( &Layer->line_tree, (int)( &Line->BoundingBox ) );
  Line->Point2.X = InsertX;
  Line->Point2.Y = InsertY;
  SetLineBoundingBox( Line );
  r_insert_entry( &Layer->line_tree, (int)( &Line->BoundingBox ), 0 );
  DrawLine( Layer, Line, 0 );
  if ( CreateDrawnLineOnLayer( Layer, InsertX, InsertY, Line->Point2.X, Line->Point2.Y, Line->Thickness, Line->Clearance, Line->Flags ) )
  {
    AddObjectToCreateUndoList( 4, (void*)Layer, CreateDrawnLineOnLayer( Layer, InsertX, InsertY, Line->Point2.X, Line->Point2.Y, Line->Thickness, Line->Clearance, Line->Flags ), CreateDrawnLineOnLayer( Layer, InsertX, InsertY, Line->Point2.X, Line->Point2.Y, Line->Thickness, Line->Clearance, Line->Flags ) );
    DrawLine( Layer, line, 0 );
  }
  Draw( );
  return (void*)line;
}
void *InsertPointIntoPolygon( LayerTypePtr Layer, PolygonTypePtr Polygon )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ PointType save;
  Cardinal n;
  LineType line;
  if ( Forcible == 0 )
  {
    line.Thickness = 0;
    line.Point1.X = Polygon->Points->X;
    line.Point1.Y = Polygon->Points->Y;
    line.Point1.X2 = Polygon->Points->X2;
    line.Point1.Y2 = Polygon->Points->Y2;
    line.Point1.ID = Polygon->Points->ID;
    line.Point2.X = Polygon->Points->X;
    line.Point2.Y = Polygon->Points->Y;
    line.Point2.X2 = Polygon->Points->X2;
    line.Point2.Y2 = Polygon->Points->Y2;
    line.Point2.ID = Polygon->Points->ID;
    if ( ( IsPointOnLine( (float)( (double)( InsertX ) ), (float)( (double)( InsertY ) ), 0.0, &line ) & 255 ) == 0 )
      goto B3;
    else
    {
      if ( 0 ^ 0 )
      {
        __stack_chk_fail( );
      }
      return Polygon->Points + ( InsertAt * 20 );
    }
  }
B3:;
  ErasePolygon( Polygon );
  r_delete_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ) );
  n = Polygon->PointN + -1;
  if ( InsertAt < Polygon->PointN + -1 )
  {
    Polygon->PointN = ( Polygon->PointN * 20 ) + -20;
    do
    {
      n += -1;
      Polygon->Points->X = Polygon->Points->X = Polygon->Points->X = Polygon->Points->X = Polygon->Points->X = Polygon->Points->X;
    }
    while ( InsertAt < n + -1 );
  }
  Polygon->Points->ID = *(int*)CreateNewPointInPolygon( Polygon, InsertX, InsertY )/*.16*/;
  Polygon->Points->Y2 = *(int*)CreateNewPointInPolygon( Polygon, InsertX, InsertY )/*.12*/;
  Polygon->Points->X2 = *(int*)CreateNewPointInPolygon( Polygon, InsertX, InsertY )/*.8*/;
  Polygon->Points->Y = *(int*)CreateNewPointInPolygon( Polygon, InsertX, InsertY )/*.4*/;
  Polygon->Points->X = *(int*)(CreateNewPointInPolygon( Polygon, InsertX, InsertY ));
  SetChangedFlag( 1 );
  AddObjectToInsertPointUndoList( 2048, (void*)Layer, (void*)Polygon, Polygon->Points + ( InsertAt * 20 ) );
  SetPolygonBoundingBox( Polygon );
  r_insert_entry( &Layer->polygon_tree, (int)( &Polygon->BoundingBox ), 0 );
  InitClip( &PCB->Data, Layer, Polygon );
  if ( Forcible || ( RemoveExcessPolygonPoints( Layer, Polygon ) & 255 ) == 0 )
  {
    DrawPolygon( Layer, Polygon, 0 );
    Draw( );
  }
}
void *InsertPointIntoObject( int Type, void *Ptr1, void *Ptr2, Cardinal *Ptr3, LocationType DX, LocationType DY, Boolean Force )
{
  void *ptr;
  InsertX = DX;
  InsertY = DY;
  InsertAt = Ptr3[0];
  Forcible = Force;
  if ( ObjectOperation( &InsertFunctions, Type, Ptr1, Ptr2, (void*)Ptr3 ) )
  {
    IncrementUndoSerialNumber( );
  }
  return ptr;
}
PointTypePtr AdjustInsertPoint( void )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  double fp7;
  static PointType InsertedPoint;
  /* phantom */ float m;
  LocationType x;
  LocationType y;
  LocationType dx;
  /* phantom */ LocationType dy;
  LocationType m1;
  LocationType m2;
  /* phantom */ LineTypePtr line;
  if ( Crosshair.AttachedObject.State )
  {
    Crosshair.AttachedObject.Ptr3 = &InsertedPoint.X;
    gui->shift_is_pressed( );
    if ( gui )
    {
      AttachedLineType myline;
      if ( (double)( ( ( Crosshair.Y - *(int*)(Crosshair.AttachedObject.Ptr2 + 48) ) * ( Crosshair.Y - *(int*)(Crosshair.AttachedObject.Ptr2 + 48) ) ) + ( ( Crosshair.X - *(int*)(Crosshair.AttachedObject.Ptr2 + 44) ) * ( Crosshair.X - *(int*)(Crosshair.AttachedObject.Ptr2 + 44) ) ) ) < (double)( ( ( Crosshair.Y - *(int*)(Crosshair.AttachedObject.Ptr2 + 68) ) * ( Crosshair.Y - *(int*)(Crosshair.AttachedObject.Ptr2 + 68) ) ) + ( ( Crosshair.X - *(int*)(Crosshair.AttachedObject.Ptr2 + 64) ) * ( Crosshair.X - *(int*)(Crosshair.AttachedObject.Ptr2 + 64) ) ) ) )
      {
        myline.Point2.X = Crosshair.AttachedObject.Ptr2[11];
        myline.Point2.Y = Crosshair.AttachedObject.Ptr2[12];
        myline.Point2.X2 = Crosshair.AttachedObject.Ptr2[13];
        myline.Point2.Y2 = Crosshair.AttachedObject.Ptr2[14];
      }
      else
      {
        myline.Point2.X = Crosshair.AttachedObject.Ptr2[16];
        myline.Point2.Y = Crosshair.AttachedObject.Ptr2[17];
        myline.Point2.X2 = Crosshair.AttachedObject.Ptr2[18];
        myline.Point2.Y2 = Crosshair.AttachedObject.Ptr2[19];
      }
      myline.Point2.ID = Crosshair.AttachedObject.Ptr2[15];
      myline.Point1.ID = Crosshair.AttachedObject.Ptr2[15];
      myline.Point1.X = Crosshair.AttachedObject.Ptr2[11];
      myline.Point1.Y = Crosshair.AttachedObject.Ptr2[12];
      myline.Point1.X2 = Crosshair.AttachedObject.Ptr2[13];
      myline.Point1.Y2 = Crosshair.AttachedObject.Ptr2[14];
      FortyFiveLine( &myline );
      InsertedPoint.X = myline.Point2.X;
      InsertedPoint.Y = myline.Point2.Y;
    }
    else
    if ( ( PCB->Flags.f/*.2_2of4*/ & 1 ) & 255 )
    {
      InsertedPoint.X = Crosshair.X;
      InsertedPoint.Y = Crosshair.Y;
    }
    else
    {
      x = Crosshair.AttachedObject.Ptr2[11];
      dx = Crosshair.X - Crosshair.AttachedObject.Ptr2[11];
      if ( Crosshair.AttachedObject.Ptr2[11] != Crosshair.X )
      {
        if ( 0.577350269000 < (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2[12] ) / (double)( dx ) )
        {
          m1 = 1;
          if ( (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2 ) / (double)( dx ) <= 1.732050808000 )
          {
            x = Crosshair.AttachedObject.Ptr2[16];
            dx -= Crosshair.AttachedObject.Ptr2[16];
            if ( Crosshair.AttachedObject.Ptr2[16] != dx )
            {
              if ( 0.577350269000 < (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2[17] ) / (double)( dx ) )
              {
                m2 = 1;
                if ( (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2 ) / (double)( dx ) <= 1.732050808000 )
                {
                  if ( m2 == m1 )
                  {
                    InsertedPoint.X = x;
                    InsertedPoint.Y = ebp_80;
                  }
                  else
                  {
                    if ( m1 == 2 )
                    {
                      x = x;
                      y = m2 + ( m2 * ( x - x ) );
                    }
                    else
                    if ( m2 == 2 )
                      y = Crosshair.AttachedObject.Ptr2[12] + ( m1 * ( x - x ) );
                    else
                      x = ( ( ( ebp_84 - ebp_80 ) + ( m1 * edi ) ) - ( x * m2 ) ) / ( m1 - m2 );
                    InsertedPoint.Y = eax;
                    InsertedPoint.X = x;
                  }
                }
              }
              else
              {
                m2 = 0;
                if ( (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2[17] ) / (double)( dx ) < -0.577350269000 )
                {
                  m2 = -1;
                  if ( (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2[17] ) / (double)( dx ) < -1.732050808000 )
                  {
                  }
                }
                else
                {
                }
              }
            }
            m2 = 2;
          }
        }
        else
        {
          m1 = 0;
          if ( (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2[12] ) / (double)( dx ) < -0.577350269000 )
          {
            m1 = -1;
            if ( (double)( Crosshair.Y - Crosshair.AttachedObject.Ptr2[12] ) / (double)( dx ) < -1.732050808000 )
            {
            }
          }
          else
          {
          }
        }
      }
      m1 = 2;
    }
  }
  return &InsertedPoint;
}
#if 0
#endif
