#include "misc.c.h"
static struct {
   Boolean ElementOn;
   Boolean InvisibleObjectsOn;
   Boolean PinOn;
   Boolean ViaOn;
   Boolean RatOn;
   int LayerStack[16];
   Boolean LayerOn[16];
   int cnt;
} SavedStack;
float GetValue( char *val, char *units, Boolean *absolute )
{
  int ebx;
  double fp7;
  float value;
  if ( val[0] == '=' )
  {
    absolute[0] = 1;
  }
  else
  {
    absolute[0] = ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( val[0] * 2 ) + 1) & 8 ) & 255 ) != 0;
  }
  if ( units && units[0] )
  {
    if ( strncasecmp( units, "mm", 2 ) == 0 )
    {
      *(double*)(strtod( val, 0 )) *= 3937.007874000000;
    }
    if ( strncasecmp( units, "mil", 3 ) == 0 )
    {
      fp7 *= 100.000000000000;
    }
  }
  return 0.0;
}
void SetPointBoundingBox( PointTypePtr Pnt )
{
  Pnt->X2 = Pnt->X + 1;
  Pnt->Y2 = Pnt->Y + 1;
  return;
}
void SetPinBoundingBox( PinTypePtr Pin )
{
  BDimension width;
  Pin->BoundingBox.X1 = Pin->X - ( (unsigned char)( ( ( Pin->Clearance + Pin->Thickness + 1 ) / 2 < ( Pin->Mask + 1 ) / 2 ) ^ 1 ) ? ( Pin->Mask + 1 ) / 2 : ( Pin->Clearance + Pin->Thickness + 1 ) / 2 );
  Pin->BoundingBox.Y1 = Pin->Y - ( (unsigned char)( ( ( Pin->Clearance + Pin->Thickness + 1 ) / 2 < ( Pin->Mask + 1 ) / 2 ) ^ 1 ) ? ( Pin->Mask + 1 ) / 2 : ( Pin->Clearance + Pin->Thickness + 1 ) / 2 );
  Pin->BoundingBox.X2 = Pin->X + ( (unsigned char)( ( ( Pin->Clearance + Pin->Thickness + 1 ) / 2 < ( Pin->Mask + 1 ) / 2 ) ^ 1 ) ? ( Pin->Mask + 1 ) / 2 : ( Pin->Clearance + Pin->Thickness + 1 ) / 2 ) + 1;
  Pin->BoundingBox.Y2 = Pin->Y + ( (unsigned char)( ( ( Pin->Clearance + Pin->Thickness + 1 ) / 2 < ( Pin->Mask + 1 ) / 2 ) ^ 1 ) ? ( Pin->Mask + 1 ) / 2 : ( Pin->Clearance + Pin->Thickness + 1 ) / 2 ) + 1;
  return;
}
void SetPadBoundingBox( PadTypePtr Pad )
{
  int edx;
  BDimension width;
  BDimension deltax;
  BDimension deltay = Pad->Point1.Y;
  width = ( Pad->Clearance + Pad->Thickness + 1 ) / 2 < ( Pad->Mask + 1 ) / 2 ? ( Pad->Clearance + Pad->Thickness + 1 ) / 2 : ( Pad->Mask + 1 ) / 2;
  deltax = Pad->Point2.X - Pad->Point1.X;
  if ( Pad->Point2.X != Pad->Point1.X && ( ( Pad->Flags.f/*.2_2of4*/ & 1 ) & 255 ) )
  {
    deltay = Pad->Point2.Y - deltay;
    if ( Pad->Point2.Y != deltay )
    {
      /* phantom */ float tx, ty, theta;
      BDimension btx;
      BDimension bty;
      ;
      deltay = (int)( (double)( width ) * cos( (double)( width ) + 0.785398163397 ) * 1.414213562373 );
      deltax = (int)( 1.414213562373 * (double)( width ) * sin( (double)( width ) + 0.785398163397 ) );
      Pad = Pad->Point1.X - deltay < ( Pad->Point1.X - deltax < ( Pad->Point2.X + deltay <= Pad->Point2.X + deltax ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) ? Pad->Point2.X + deltay <= Pad->Point2.X + deltax ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax ) ? Pad->Point1.X - deltax < ( Pad->Point2.X + deltay <= Pad->Point2.X + deltax ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) ? Pad->Point2.X + deltay <= Pad->Point2.X + deltax ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax : Pad->Point1.X - deltay;
      Pad->BoundingBox.X2 = ( ( (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) < Pad->Point1.X - deltax ? (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax ) < Pad->Point1.X - deltay ? ( (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) < Pad->Point1.X - deltax ? (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax : Pad->Point1.X - deltay;
      deltax = Pad->Point1.Y + deltay;
      Pad->BoundingBox.Y1 = ( Pad->Point1.Y - deltax < ( Pad->Point2.Y - deltay <= Pad->Point2.Y + deltax ? Pad->Point2.Y + deltax : Pad->Point2.Y - deltay ) ? Pad->Point2.Y - deltay <= Pad->Point2.Y + deltax ? Pad->Point2.Y + deltax : Pad->Point2.Y - deltay : Pad->Point1.Y - deltax ) <= Pad->Point1.Y + deltay ? Pad->Point1.Y + deltay : Pad->Point1.Y - deltax < ( Pad->Point2.Y - deltay <= Pad->Point2.Y + deltax ? Pad->Point2.Y + deltax : Pad->Point2.Y - deltay ) ? Pad->Point2.Y - deltay <= Pad->Point2.Y + deltax ? Pad->Point2.Y + deltax : Pad->Point2.Y - deltay : Pad->Point1.Y - deltax;
      Pad->BoundingBox.Y2 = ( "huge", 0 );
      Pad->BoundingBox.Y2++;
      Pad->BoundingBox.X2 = ( ( ( (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) < Pad->Point1.X - deltax ? (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax ) < Pad->Point1.X - deltay ? ( (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) < Pad->Point1.X - deltax ? (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax : Pad->Point1.X - deltay ) + 1;
      return;
    }
  }
  Pad = ( Pad->Point2.X < Pad->Point1.X ? Pad->Point1.X : Pad->Point2.X ) - width;
  Pad->BoundingBox.X2 = width + ( (unsigned char)( ( Pad->Point1.X < Pad->Point2.X ) ^ 1 ) ? Pad->Point2.X : Pad->Point1.X );
  Pad->BoundingBox.Y1 = ( Pad->Point1.Y <= Pad->Point2.Y ? Pad->Point2.Y : Pad->Point1.Y ) - width;
  Pad->BoundingBox.Y2 = width + ( (unsigned char)( ( Pad->Point1.Y < Pad->Point2.Y ) ^ 1 ) ? Pad->Point2.Y : Pad->Point1.Y );
  Pad->BoundingBox.Y2++;
  Pad->BoundingBox.X2 = ( ( ( (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) < Pad->Point1.X - deltax ? (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax ) < Pad->Point1.X - deltay ? ( (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay ) < Pad->Point1.X - deltax ? (unsigned char)( ( Pad->Point2.X + deltay < Pad->Point2.X + deltax ) ^ 1 ) ? Pad->Point2.X + deltax : Pad->Point2.X + deltay : Pad->Point1.X - deltax : Pad->Point1.X - deltay ) + 1;
  return;
}
void SetLineBoundingBox( LineTypePtr Line )
{
  /* phantom */ BDimension width;
  Line->BoundingBox.X1 = ( Line->Point1.X <= Line->Point2.X ? Line->Point2.X : Line->Point1.X ) - ( ( Line->Clearance + Line->Thickness + 1 ) / 2 );
  Line->BoundingBox.X2 = ( ( Line->Clearance + Line->Thickness + 1 ) / 2 ) + ( (unsigned char)( ( Line->Point1.X < Line->Point2.X ) ^ 1 ) ? Line->Point2.X : Line->Point1.X ) + 1;
  Line->BoundingBox.Y1 = ( Line->Point1.Y <= Line->Point2.Y ? Line->Point2.Y : Line->Point1.Y ) - ( ( Line->Clearance + Line->Thickness + 1 ) / 2 );
  Line->Point2.X2 = Line->Point2.X + 1;
  Line->BoundingBox.Y2 = ( (unsigned char)( ( Line->Point1.Y < Line->Point2.Y ) ^ 1 ) ? Line->Point2.Y : Line->Point1.Y ) + ( ( Line->Clearance + Line->Thickness + 1 ) / 2 ) + 1;
  Line->Point2.Y2 = Line->Point2.Y + 1;
  Line->Point1.X2 = Line->Point1.X + 1;
  Line->Point1.Y2 = Line->Point1.Y + 1;
  return;
}
void SetPolygonBoundingBox( PolygonTypePtr Polygon )
{
  int eax;
  int ecx;
{
  Cardinal n;
  /* phantom */ PointTypePtr point;
  Polygon->BoundingBox.Y1 = 10000000;
  Polygon->BoundingBox.X1 = 10000000;
  Polygon->BoundingBox.Y2 = 0;
  Polygon->BoundingBox.X2 = 0;
  n = Polygon->PointN + -1;
  if ( Polygon->PointN + -1 != -1 )
  {
    while ( 1 )
    {
      if ( ecx < eax )
        Polygon = &edx;
      if ( *(int*)(ecx + 4) < Polygon->BoundingBox.Y1 )
        Polygon->BoundingBox.Y1 = eax;
      n += -1;
      if ( n == -1 )
        break;
      else
      {
      }
    }
    Polygon->BoundingBox.X2 = ( (unsigned char)( ( Polygon < 0 ) ^ 1 ) ? 0 : Polygon ) + 1;
    Polygon->BoundingBox.Y2 = ( (unsigned char)( ( Polygon + 4 < 0 ) ^ 1 ) ? 0 : Polygon + 4 ) + 1;
  }
  return;
}
}
void SetElementBoundingBox( DataTypePtr Data, ElementTypePtr Element, FontTypePtr Font )
{
  int eax;
  int edx;
  int ebp_60;
  int ebp_44;
  int ebp_32;
  /* phantom */ BoxTypePtr box;
  /* phantom */ BoxTypePtr vbox;
  ebp_32 = Font;
  if ( Data && Data->element_tree )
    r_delete_entry( &Data->element_tree, (int)( &Element->BoundingBox ) );
  Data = Data;
{
  do
  {
    Cardinal n;
    TextTypePtr text = Element->BoundingBox.X1 + 36;
    if ( Data )
    {
      if ( Data->pad_tree )
        r_delete_entry( &Data->pad_tree, (int)( &text->BoundingBox ) );
      SetTextBoundingBox( ebp_32, text );
      if ( Data->pad_tree == 0 )
      {
        Data->pad_tree = r_create_tree( 0, 0, 0 );
      }
      r_insert_entry( Data + ( n << 2 ) + 56, (int)( &text->BoundingBox ), 0 );
    }
    else
      SetTextBoundingBox( ebp_32, text );
    n += -1;
  }
  while ( n + -1 != -1 );
  Element = Element;
{
  Cardinal n;
  LineTypePtr line;
  Element->BoundingBox.Y1 = 10000000;
  Element = 10000000;
  Element->BoundingBox.Y2 = 0;
  Element->BoundingBox.X2 = 0;
  n = Element->LineN + -1;
  if ( Element->LineN + -1 != -1 )
  {
    ebp_32 = ( Element->LineN * 88 ) + -88;
    do
    {
      line = ebp_32 + Element->Line;
      SetLineBoundingBox( ebp_32 + Element->Line );
      if ( line->Point1.X + ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) < Element->BoundingBox.X1 )
        Element = line->Point1.X + ( 0 - ( ( line->Thickness + 1 ) / 2 ) );
      if ( line->Point1.Y + ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) < Element->BoundingBox.Y1 )
        Element->BoundingBox.Y1 = line->Point1.Y + ( 0 - ( ( line->Thickness + 1 ) / 2 ) );
      ebp_44 = line->Point2.X + ( 0 - ( ( line->Thickness + 1 ) / 2 ) );
      if ( line->Point2.X + ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) < Element->BoundingBox.X1 )
        Element = line->Point2.X + ( 0 - ( ( line->Thickness + 1 ) / 2 ) );
      if ( line->Point2.Y + ( 0 - ( ( line->Thickness + 1 ) / 2 ) ) < Element->BoundingBox.Y1 )
        Element->BoundingBox.Y1 = 0 - ( ( line->Thickness + 1 ) / 2 );
      if ( Element->BoundingBox.X2 < line->Point1.X + ( ( line->Thickness + 1 ) / 2 ) )
        Element->BoundingBox.X2 = line->Point1.X + ( ( line->Thickness + 1 ) / 2 );
      if ( Element->BoundingBox.Y2 < line->Point1.Y + ( ( line->Thickness + 1 ) / 2 ) )
        Element->BoundingBox.Y2 = line->Point1.Y + ( ( line->Thickness + 1 ) / 2 );
      if ( Element->BoundingBox.X2 < line->Point2.X + ( ( line->Thickness + 1 ) / 2 ) )
        Element->BoundingBox.X2 = line->Point2.X + ( ( line->Thickness + 1 ) / 2 );
      if ( Element->BoundingBox.Y2 < line->Point2.Y + ( ( line->Thickness + 1 ) / 2 ) )
        Element->BoundingBox.Y2 = ( line->Thickness + 1 ) / 2;
      n += -1;
      ebp_32 += -88;
    }
    while ( n == -1 );
  }
{
  Cardinal n = Element->ArcN + -1;
  ArcTypePtr arc;
  if ( Element->ArcN + -1 != -1 )
  {
    n = n;
    do
    {
      arc = Element->Arc + ( n * 68 ) + -68 + -68;
      SetArcBoundingBox( Element->Arc + ( n * 68 ) + -68 );
      if ( arc->BoundingBox.X1 < Element->BoundingBox.X1 )
        Element = &arc->BoundingBox.X1;
      if ( arc->BoundingBox.Y1 < Element->BoundingBox.Y1 )
        Element->BoundingBox.Y1 = arc->BoundingBox.Y1;
      if ( Element->BoundingBox.X2 < arc->BoundingBox.X2 )
        Element->BoundingBox.X2 = arc->BoundingBox.X2;
      if ( Element->BoundingBox.Y2 < arc->BoundingBox.Y2 )
        Element->BoundingBox.Y2 = arc->BoundingBox.Y2;
      n += -1;
    }
    while ( n + -1 == -1 );
  }
  Element->VBox.Y1 = Element->BoundingBox.Y1;
  Element->VBox.X2 = Element->BoundingBox.X2;
  Element->VBox.Y2 = Element->BoundingBox.Y2;
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  ebp_32 = Element->PinN;
  if ( Element->PinN )
  {
    n = 0;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      if ( Data )
      {
        if ( Data->pin_tree )
          r_delete_entry( &Data->pin_tree, (int)( &pin->BoundingBox ) );
        SetPinBoundingBox( pin );
        if ( Data->pin_tree == 0 )
        {
          Data->pin_tree = r_create_tree( 0, 0, 0 );
        }
        r_insert_entry( Data + 48, (int)( &pin->BoundingBox ), 0 );
      }
      else
        SetPinBoundingBox( pin );
      if ( pin->BoundingBox.X1 < Element->BoundingBox.X1 )
        Element = &pin->BoundingBox.X1;
      if ( pin->BoundingBox.Y1 < Element->BoundingBox.Y1 )
        Element->BoundingBox.Y1 = pin->BoundingBox.Y1;
      if ( Element->BoundingBox.X2 < pin->BoundingBox.X2 )
        Element->BoundingBox.X2 = pin->BoundingBox.X2;
      if ( Element->BoundingBox.Y2 < pin->BoundingBox.Y2 )
        Element->BoundingBox.Y2 = pin->BoundingBox.Y2;
      if ( pin->X + ( 0 - ( pin->Thickness / 2 ) ) < Element->VBox.X1 )
        Element->VBox.X1 = pin->X + ( 0 - ( pin->Thickness / 2 ) );
      if ( pin->Y + ( 0 - ( pin->Thickness / 2 ) ) < Element->VBox.Y1 )
        Element->VBox.Y1 = 0 - ( pin->Thickness / 2 );
      if ( Element->VBox.X2 < pin->X + ( pin->Thickness / 2 ) )
        Element->VBox.X2 = pin->X + ( pin->Thickness / 2 );
      if ( Element->VBox.Y2 < pin->Y + ( pin->Thickness / 2 ) )
        Element->VBox.Y2 = pin->Thickness / 2;
      sn = Element->PinN;
      if ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - ebp_32 )
        goto B51;
      else
      {
      }
    }
  }
{
B51:;
  Cardinal n;
  Cardinal sn;
  PadTypePtr pad;
  ebp_44 = 0;
  n = 0;
  while ( 1 )
  {
    sn = Element->PadN;
    do
    {
      if ( sn )
      {
        if ( sn <= n )
        {
          ebp_44 = Element->BoundingBox.Y1;
          ebp_32 = Element->BoundingBox.X1;
          ebp_60 = 0;
        {
          do
          {
            Cardinal n;
            /* phantom */ Cardinal sn;
            /* phantom */ PadTypePtr pad;
            if ( Element->Pad->Point2.Y == Element->Pad->Point1.Y )
            {
              if ( Element->BoundingBox.X2 - Element->Pad[1].Point2.X < Element->Pad[1].Point1.X - ebp_32 )
                goto B133;
              else
                Element->Pad[1].Flags.f &= -16385;
            }
            else
            if ( Element->BoundingBox.Y2 - Element->Pad[1].Point2.Y < Element->Pad[1].Point1.Y - ebp_44 )
              goto B133;
            else
              Element->Pad[1].Flags.f &= -16385;
B133:;
            Element->Pad[1].Flags.f |= 16384;
          }
          while ( sn <= ebp_60 );
          Element = Element;
        }
        }
        else
        {
          pad = ebp_44 + Element->Pad;
          if ( Data )
          {
            if ( Data->pad_tree )
              r_delete_entry( &Data->pad_tree, (int)( &pad->BoundingBox ) );
            SetPadBoundingBox( pad );
            if ( Data->pad_tree == 0 )
            {
              Data->pad_tree = r_create_tree( 0, 0, 0 );
            }
            r_insert_entry( Data + 52, (int)( &pad->BoundingBox ), 0 );
          }
          else
            SetPadBoundingBox( pad );
          if ( pad->BoundingBox.X1 < Element->BoundingBox.X1 )
            Element = &pad->BoundingBox.X1;
          if ( pad->BoundingBox.Y1 < Element->BoundingBox.Y1 )
            Element->BoundingBox.Y1 = pad->BoundingBox.Y1;
          if ( Element->BoundingBox.X2 < pad->BoundingBox.X2 )
            Element->BoundingBox.X2 = pad->BoundingBox.X2;
          if ( Element->BoundingBox.Y2 < pad->BoundingBox.Y2 )
            Element->BoundingBox.Y2 = pad->BoundingBox.Y2;
          ebp_32 = pad->Point2.X;
          if ( ( 0 - ( pad->Thickness / 2 ) ) + ( pad->Point1.X <= ebp_32 ? ebp_32 : pad->Point1.X ) < Element->VBox.X1 )
            Element->VBox.X1 = ( 0 - ( pad->Thickness / 2 ) ) + ( pad->Point1.X <= ebp_32 ? ebp_32 : pad->Point1.X );
          if ( ( 0 - ( pad->Thickness / 2 ) ) + ( *(int*)(pin->BoundingBox.X1 + 48) <= pad->Point2.Y ? pad->Point2.Y : pin->DrillingHole ) < Element->VBox.Y1 )
            Element->VBox.Y1 = ( 0 - ( pad->Thickness / 2 ) ) + ( *(int*)(pad->BoundingBox.X1 + 48) <= pad->Point2.Y ? pad->Point2.Y : pad->Point1.Y );
          if ( Element->VBox.X2 < ( pad->Thickness / 2 ) + ( pad->Point1.X < ebp_32 ? pad->Point1.X : ebp_32 ) )
            Element->VBox.X2 = ( pad->Thickness / 2 ) + ( pad->Point1.X < ebp_32 ? pad->Point1.X : ebp_32 );
          if ( Element->VBox.Y2 < ( pad->Thickness / 2 ) + ( pad->Point1.Y < pad->Point2.Y ? pad->Point1.Y : pad->Point2.Y ) )
            Element->VBox.Y2 = ( pad->Thickness / 2 ) + ( pad->Point1.Y < pad->Point2.Y ? pad->Point1.Y : pad->Point2.Y );
          sn = Element->PadN;
        }
      }
      else
      {
        ebp_32 = Element->BoundingBox.X1;
        ebp_44 = Element->BoundingBox.Y1;
      }
      if ( Element->BoundingBox.Y2 - ebp_44 < Element->BoundingBox.X2 - ebp_32 )
      {
        Cardinal n;
        Cardinal sn = Element->PinN;
        /* phantom */ PinTypePtr pin;
        if ( Element->PinN )
        {
          n = 1;
          Element->Pin->Flags.f |= 16384;
          for ( ; n < sn; n++ )
          {
            *(int*)(r_create_tree( 0, 0, 0 ) + 76 + 20) |= 16384;
            // n++;
          }
        }
      }
      else
      {
        Cardinal n;
        Cardinal sn = Element->PinN;
        /* phantom */ PinTypePtr pin;
        if ( Element->PinN )
        {
          n = 1;
          Element->Pin->Flags.f &= -16385;
          for ( ; n < sn; n++ )
          {
            Data->Layer->arc_tree &= -16385;
            // n++;
          }
        }
      }
      Element->BoundingBox.X2++;
      Element->BoundingBox.Y2++;
      Element->VBox.X2++;
      Element->VBox.Y2++;
      if ( Data == 0 )
        break;
      if ( Data->element_tree == 0 )
      {
        Data->element_tree = r_create_tree( 0, 0, 0 );
      }
      Font = 0;
      Data += 0;
    }
    while ( Element->PadN != Element->PadN );
    n++;
    ebp_44 += 104;
  }
}
}
}
}
}
}
void SetTextBoundingBox( FontTypePtr FontPtr, TextTypePtr Text )
{
  int eax;
  int ecx;
  /* phantom */ SymbolTypePtr symbol;
  unsigned char *s = &Text->TextString;
  LocationType width;
  LocationType height;
  BDimension maxThick;
  int i;
  if ( Text->TextString && Text->TextString[0] )
  {
    maxThick = 0;
    height = 0;
    width = 0;
    do
    {
      if ( FontPtr->Symbol[ Text->TextString[0] ].Valid )
      {
        LineTypePtr line = FontPtr->Symbol->Line;
        if ( FontPtr->MaxWidth )
        {
          i = 0;
          do
          {
            maxThick = maxThick < line->Thickness ? maxThick : line->Thickness;
            line++;
            i++;
          }
          while ( i != esi );
        }
        width += FontPtr->Symbol[ ( line + 88 ) ].Delta;
        width += FontPtr->Symbol[ ( line + 88 ) ].Width;
        height = height < FontPtr->Symbol[ ( line + 88 ) ].Height ? height : FontPtr->Symbol[ ( line + 88 ) ].Height;
      }
      else
      {
        width += ( ( FontPtr->DefaultSymbol.X2 - FontPtr->DefaultSymbol.X1 ) * 6 ) / 5;
        height = FontPtr->DefaultSymbol.Y2 - FontPtr->DefaultSymbol.Y1;
      }
      s++;
    }
    while ( s[1] && s[0] );
  }
  else
  {
    maxThick = 0;
    height = 0;
    width = 0;
  }
  s = (int)( (double)( width ) * ( (double)( Text->Scale ) / 100.000000000000 ) );
  height = (int)( ( (double)( Text->Scale ) / 100.000000000000 ) * (double)( height ) );
  maxThick = (int)( (double)( height ) * ( (double)( Text->Scale ) / 200.000000000000 ) ) <= 399 ? (int)( (double)( height ) * ( (double)( Text->Scale ) / 200.000000000000 ) ) : 400;
  Text->BoundingBox.Y1 = Text->Y;
  Text->BoundingBox.X1 = Text->X;
  if ( Text->Flags.f/*.1_1of4*/ < 0 )
  {
    Text->BoundingBox.X1 = Text->X - maxThick;
    width = Text->X - maxThick;
    Text->BoundingBox.Y1 = maxThick + Text->Y;
    Text->BoundingBox.X2 = width + s + ( height <= 399 ? height : 400 );
    Text->BoundingBox.Y2 = ( maxThick + Text->Y + ( ( 0 - ( height <= 399 ? height : 400 ) ) * 2 ) ) - height;
    RotateBoxLowLevel( (int)( &Text->BoundingBox ), Text->X, Text->Y, __MOD(( 4 - Text->Direction ),4) );
  }
  else
  {
    width = Text->X - maxThick;
    Text->BoundingBox.X1 = Text->X - maxThick;
    Text->BoundingBox.Y1 = Text->Y - maxThick;
    Text->BoundingBox.X2 = s[0] + width;
    Text->BoundingBox.Y2 = ( Text->Y - maxThick ) + ( ( height <= 399 ? height : 400 ) * 2 ) + height + ( Text->Y - maxThick ) + ( ( height <= 399 ? height : 400 ) * 2 );
    RotateBoxLowLevel( (int)( &Text->BoundingBox ), Text->X, Text->Y, Text->Direction );
  }
  Text->BoundingBox.X1 -= PCB->Bloat;
  Text->BoundingBox.Y1 -= PCB->Bloat;
  Text->BoundingBox.X2 += PCB->Bloat;
  Text->BoundingBox.X2 = PCB->Bloat + Text->BoundingBox.X2 + 1;
  Text->BoundingBox.Y2 = PCB->Bloat + Text->BoundingBox.Y2 + 1;
  return;
}
Boolean IsDataEmpty( DataTypePtr Data )
{
  int eax;
  int ecx;
  Boolean hasNoObjects;
  Cardinal i = Data->ViaN == 0;
  hasNoObjects = Data->ElementN == 0;
  hasNoObjects = ( Data->ElementN == 0 ) & ( Data->ViaN == 0 );
  i = PCB->Data;
  if ( i + 2 )
  {
    i = 0;
    do
    {
      if ( hasNoObjects & 255 )
      {
        if ( Data->Layer[1].LineN == 0 && Data->Layer->ArcN == 0 && Data->Layer->TextN == 0 )
          hasNoObjects = *(int*)(Data + 92 + 88) == 0;
        else
        {
          i++;
          *(int*)&hasNoObjects = 0;
        }
      }
      i++;
      if ( i + 1 < i + 2 )
        continue;
      else
        break;
    }
    while ( i + 2 <= i + 1 );
  }
  return 0;
}
int FlagIsDataEmpty( int parm )
{
  int eax;
  int i = i/*.1_1of4*/;
  return IsDataEmpty( &PCB->Data ) == 0;
}
BoxTypePtr GetDataBoundingBox( DataTypePtr Data )
{
  int eax;
  int ecx;
  int edx;
  int ebp_16;
  static BoxType box;
{
  Cardinal n;
  Cardinal sn;
  /* phantom */ PinTypePtr via;
  box.Y1 = 0x989680;
  box.X1 = 0x989680;
  box.Y2 = 0xff676980;
  box.X2 = 0xff676980;
  sn = Data->ViaN;
  if ( Data->ViaN )
  {
    ebp_16 = -10000000;
    n = 0;
    do
    {
      Data->Via += 76;
      ebp_16 = (unsigned char)( ( ebp_16 < ( ( *(int*)(Data->Via + 76 + 36) + ( *(int*)(Data->Via + 76 + 36) >> 31 ) ) >> 1 ) + *(int*)(Data->Via + 76 + 56) ) ^ 1 ) ? *(int*)(Data->Via + 76 + 56) + ( ( Data->Via[1].Thickness + ( *(int*)(Data->Via + 76 + 36) >> 31 ) ) >> 1 ) : ebp_16;
      n++;
    }
    while ( n < sn );
    box.X1 = ( 0 - ( *(int*)(Data->Via + 36) / 2 ) ) + *(int*)(Data->Via + 52) < 0x989680 ? 0x989680 : ( 0 - ( Data->Via->Thickness / 2 ) ) + Data->Via->X;
    box.Y1 = ( 0 - ( *(int*)(Data->Via + 36) / 2 ) ) + *(int*)(Data->Via + 56) < 0x989680 ? 0x989680 : ( 0 - ( Data->Via->Thickness / 2 ) ) + Data->Via->Y;
    box.X2 = ( ( *(int*)(Data->Via + 36) + ( *(int*)(Data->Via + 36) >> 31 ) ) >> 1 ) + *(int*)(Data->Via + 52) > 0xff676980 ? 0xff676980 : *(int*)(Data->Via + 52) + ( ( Data->Via->Thickness + ( *(int*)(Data->Via + 36) >> 31 ) ) >> 1 );
    box.Y2 = (unsigned char)( ( ebp_16 < ( ( *(int*)(Data->Via + 36) + ( *(int*)(Data->Via + 36) >> 31 ) ) >> 1 ) + *(int*)(Data->Via + 56) ) ^ 1 ) ? *(int*)(Data->Via + 56) + ( ( Data->Via->Thickness + ( *(int*)(Data->Via + 36) >> 31 ) ) >> 1 ) : ebp_16;
  }
{
  Cardinal n = Data->ElementN + -1;
  /* phantom */ ElementTypePtr element;
  if ( Data->ElementN + -1 != -1 )
  {
    Data->ElementN = Data->Element[ Data->ElementN - 1 ].BoundingBox.X1;
    do
    {
      /* phantom */ TextTypePtr text;
      Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 += -300;
      n += -1;
    }
    while ( n != -1 );
    box.X1 = ebx;
    box.Y1 = *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 100) < ( *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 4) <= box.Y1 ? box.Y1 : *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 4) ) ? *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 4) <= box.Y1 ? box.Y1 : Data->Element[ Data->ElementN + -1 + 0 ].BoundingBox.Y1 : Data->Element[ Data->ElementN + -1 + 0 ].Name[1].BoundingBox.Y1;
    box.X2 = ( (unsigned char)( ( *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 8) < box.X2 ) ^ 1 ) ? box.X2 : *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 8) ) < *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 104) ? (unsigned char)( ( *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 8) < box.X2 ) ^ 1 ) ? box.X2 : Data->Element[ Data->ElementN + -1 + 0 ].BoundingBox.X2 : Data->Element[ Data->ElementN + -1 + 0 ].Name[1].BoundingBox.X2;
    box.Y2 = box.Y2 < ( (unsigned char)( ( *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 108) < *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 12) ) ^ 1 ) ? *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 12) : *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 108) ) ? box.Y2 : (unsigned char)( ( *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 108) < *(int*)(Data->Element[ Data->ElementN - 1 ].BoundingBox.X1 + 12) ) ^ 1 ) ? Data->Element[ Data->ElementN + -1 + 0 ].BoundingBox.Y2 : Data->Element[ Data->ElementN + -1 + 0 ].Name[1].BoundingBox.Y2;
  }
{
  Cardinal l;
  LayerTypePtr layer;
  if ( PCB->Data->LayerN + 2 )
  {
    layer = &Data->Layer;
    l = 0;
  {
    while ( n = layer->LineN + -1, layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l )
      {
        box.X2 = (unsigned char)( ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) < box.X2 ? *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) : box.X2 ) < ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 20) ) ^ 1 ) ? ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 20) : *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) < box.X2 ? *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( ( layer->Line->BoundingBox.X1 + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) : box.X2;
        box.X1 = ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 20) < ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) < box.X1 ? box.X1 : *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) ) ? *(int*)(layer->Line + ( layer->LineN * 88 ) + -44) + ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) < box.X1 ? box.X1 : layer->Line->BoundingBox.X1 + ( 0 - ( layer->Line->BoundingBox.X1 / 2 ) ) : ( 0 - ( layer->Line->BoundingBox.X1 / 2 ) ) + layer->Line->BoundingBox.X1;
        box.Y1 = box.Y1 <= ( ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) < ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) ? ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) : ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ) ? ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) < ( 0 - ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) / 2 ) ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) ? ( 0 - ( layer->Line->BoundingBox.X1 / 2 ) ) + layer->Line->BoundingBox.X1 : ( 0 - ( layer->Line->BoundingBox.X1 / 2 ) ) + layer->Line->BoundingBox.X1 : box.Y1;
        box.Y2 = box.Y2 < ( ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) < ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ? ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) : ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ) ? box.Y2 : ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) < ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ? ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) : *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) + ( ( layer->Line->BoundingBox.X1 + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 );
      {
        while ( n = l + -1, ebp_16 = l, l + -1 == -1 )
        {
          l++;
          if ( PCB->Data->LayerN + 2 <= l )
          {
            box.X1 = *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -68) < box.X1 ? box.X1 : *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -68);
            box.Y1 = esi;
            box.X2 = box.X2 < *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -68 + 8) ? box.X2 : *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -60);
            box.Y2 = box.Y2 < *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -68 + 12) ? box.Y2 : *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -56);
            l = layer;
            l = 0;
            ebp_16 = box.Y2 < *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -68 + 12) ? box.Y2 : *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -56);
          {
            while ( n = l + -1, l + -1 == -1 )
            {
              l++;
              if ( PCB->Data->LayerN + 2 <= l )
              {
                box.X1 = *(int*)(( l * 60 ) + -60 + l) < box.X1 ? box.X1 : l;
                box.Y1 = *(int*)(( l * 60 ) + -60 + l + 4) < box.Y1 ? box.Y1 : *(int*)(( l * 60 ) + -60 + l + 4);
                box.X2 = box.X2 < *(int*)(( l * 60 ) + -60 + l + 8) ? box.X2 : *(int*)(( l * 60 ) + -60 + l + 8);
                box.Y2 = ebp_16;
                l = 0;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN + 2 <= l )
                  {
                    box.X1 = *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -88) < box.X1 ? box.X1 : layer->Line->BoundingBox.X1;
                    box.Y1 = *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -88 + 4) < box.Y1 ? box.Y1 : layer->Line->BoundingBox.X1;
                    box.X2 = box.X2 < *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -88 + 8) ? box.X2 : layer->Line->BoundingBox.X1;
                    box.Y2 = ebp_16;
                  }
                  else
                  {
                    layer++;
                  }
                }
                layer->PolygonN = layer->Polygon[ layer->PolygonN - 1 ].BoundingBox.X1;
                do
                {
                  ebp_16 = ebp_16 < *(int*)(layer->Polygon[ layer->PolygonN - 1 ].BoundingBox.X1 + 12) ? ebp_16 : layer->Polygon[ layer->PolygonN + -1 + 0 ].BoundingBox.Y2;
                  layer->Polygon[ layer->PolygonN - 1 ].BoundingBox.X1 += -60;
                  ebp_16 += -1;
                }
                while ( ebp_16 != -1 );
                l++;
              }
              }
              else
              {
                l += 92;
              }
            }
            l = ( l * 60 ) + -60 + l;
            do
            {
              ebp_16 = ebp_16 < *(int*)(( l * 60 ) + -60 + l + 12) ? ebp_16 : *(int*)(( l * 60 ) + -60 + l + 12);
              l = ( l * 60 ) + -60 + l + -60;
              ebp_16 += -1;
            }
            while ( ebp_16 != -1 );
            l++;
          }
          }
          else
          {
            l += 92;
          }
        }
        do
        {
          box.Y2 = box.Y2 < *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -68 + 12) ? box.Y2 : *(int*)(l + ( l << 6 ) + ( ebp_16 << 2 ) + -56);
          ebp_16 += -1;
        }
        while ( ebp_16 != -1 );
        l++;
      }
      }
      else
      {
        layer++;
      }
    }
    layer->LineN = layer->Line + ( layer->LineN * 88 ) + -44;
    do
    {
      box.Y2 = box.Y2 < ( ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) < ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ? ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) : ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ) ? box.Y2 : ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) < ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) ? ( ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 ) + *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 24) : *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + 4) + ( ( layer->Line->BoundingBox.X1 + ( *(int*)(layer->Line + ( layer->LineN * 88 ) + -44 + -8) >> 31 ) ) >> 1 );
      layer->Line->BoundingBox.X1 = layer->Line + ( layer->LineN * 88 ) + -44 + -88;
      n += -1;
    }
    while ( n != -1 );
    l++;
  }
  }
  return ( IsDataEmpty( Data ) & 255 ) == 0 ? 0 : &box;
}
}
}
}
void CenterDisplay( LocationType X, LocationType Y, Boolean Delta )
{
  int eax;
  int ecx;
  int edx;
  double save_grid = PCB->Grid;
  PCB->Grid = 1.000000000000;
  if ( Delta )
    MoveCrosshairRelative( X, Y );
  else
  {
    if ( MoveCrosshairAbsolute( X, Y ) & 255 )
      RestoreCrosshair( 0 );
  }
  gui->set_crosshair( Crosshair.X, 1 );
  PCB->Grid = save_grid;
  return;
}
void SetFontInfo( FontTypePtr Ptr )
{
  int eax;
  int ebp_36;
  int ebp_32;
  int ebp_16;
  /* phantom */ Cardinal i;
  Cardinal j;
  SymbolTypePtr symbol;
  LineTypePtr line;
  LocationType totalminy = 0x989680;
  ebp_36 = 0;
  Ptr->MaxWidth = 50;
  Ptr->MaxHeight = 50;
  symbol = &Ptr->Symbol;
{
  do
  {
    LocationType minx;
    LocationType miny;
    LocationType maxx;
    LocationType maxy;
    if ( *(char*)(ebp_36 + symbol + 4) && *(int*)(ebp_36 + symbol + 8) )
    {
      line = *(int*)(ebp_36 + symbol);
      ebp_32 = *(int*)(ebp_36 + symbol + 8);
      ebp_16 = 10000000;
      minx = 0x989680;
      do
      {
        miny = ebp_16 <= ( line->Point2.Y <= line->Point1.Y ? line->Point1.Y : line->Point2.Y ) ? line->Point2.Y <= line->Point1.Y ? line->Point1.Y : line->Point2.Y : ebp_16;
        maxx = (unsigned char)( ( ( (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X ) > 0 ) ^ 1 ) ? (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X : 0;
        maxy = (unsigned char)( ( ( (unsigned char)( ( line->Point2.Y < line->Point1.Y ) ^ 1 ) ? line->Point1.Y : line->Point2.Y ) > 0 ) ^ 1 ) ? (unsigned char)( ( line->Point2.Y < line->Point1.Y ) ^ 1 ) ? line->Point1.Y : line->Point2.Y : 0;
        line++;
        ebp_32 += -1;
        ebp_16 = ebp_16 <= ( line->Point2.Y <= line->Point1.Y ? line->Point1.Y : line->Point2.Y ) ? line->Point2.Y <= line->Point1.Y ? line->Point1.Y : line->Point2.Y : ebp_16;
      }
      while ( ebp_32 != 1 );
      minx = ( line->Point2.X <= line->Point1.X ? line->Point1.X : line->Point2.X ) >= 0x989680 ? line->Point2.X <= line->Point1.X ? line->Point1.X : line->Point2.X : 10000000;
      line = *(int*)(ebp_36 + symbol);
      j = *(int*)(ebp_36 + symbol + 8);
      do
      {
        line->Point1.X -= minx;
        line->Point2.X -= minx;
        line++;
        SetLineBoundingBox( line );
      }
      while ( j == 1 );
      *(int*)(ebp_36 + symbol + 16) = ( ( (unsigned char)( ( ( (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X ) > 0 ) ^ 1 ) ? (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X : 0 ) + 1 ) - minx;
      *(int*)(ebp_36 + symbol + 20) = ( (unsigned char)( ( ( (unsigned char)( ( line->Point2.Y < line->Point1.Y ) ^ 1 ) ? line->Point1.Y : line->Point2.Y ) > 0 ) ^ 1 ) ? (unsigned char)( ( line->Point2.Y < line->Point1.Y ) ^ 1 ) ? line->Point1.Y : line->Point2.Y : 0 ) + 1;
      Ptr->MaxWidth = ( ( (unsigned char)( ( ( (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X ) > 0 ) ^ 1 ) ? (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X : 0 ) + 1 ) - minx < Ptr->MaxWidth ? ( ( (unsigned char)( ( ( (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X ) > 0 ) ^ 1 ) ? (unsigned char)( ( line->Point2.X < line->Point1.X ) ^ 1 ) ? line->Point1.X : line->Point2.X : 0 ) + 1 ) - minx : Ptr->MaxWidth;
      Ptr->MaxHeight = (unsigned char)( ( Ptr->MaxHeight < *(int*)(ebp_36 + symbol + 20) ) ^ 1 ) ? *(int*)(ebp_36 + symbol + 20) : Ptr->MaxHeight;
    }
    ebp_36 += 28;
  }
  while ( ebp_36 != 7168 );
  totalminy = totalminy <= ebp_16 ? ebp_16 : totalminy;
  ebp_16 = 0;
  do
  {
    if ( *(char*)(ebp_16 + symbol + 4) )
    {
      j = *(int*)(ebp_16 + symbol + 8);
      line->Flags.f = *(int*)(ebp_16 + symbol + 20) - totalminy;
      line = &line->BoundingBox.X1;
      if ( line->BoundingBox.X2 == 0 )
        goto B10;
      else
      {
        do
        {
          line->Point1.Y -= totalminy;
          line->Point2.Y -= totalminy;
          line++;
          SetLineBoundingBox( line );
        }
        while ( j == 1 );
      }
    }
B10:;
    ebp_16 += 28;
  }
  while ( ebp_16 != 7168 );
  Ptr->DefaultSymbol.Y1 = 0;
  Ptr->DefaultSymbol.X1 = 0;
  Ptr->DefaultSymbol.X2 = Ptr->MaxWidth;
  return;
}
}
void GetNum( char **s, BDimension *num )
{
  int ecx;
  num[0] = strtol( s[0], 0, 10 );
  for ( ; ( *(char*)(*(int*)(__ctype_b_loc( )) + ( s * 2 ) + 1) & 8 ) & 255;  )
  {
    s[0] = __ctype_b_loc( ) + 1;
  }
  return;
}
int ParseRouteString( char *s, RouteStyleTypePtr routeStyle, int scale )
{
  int eax;
  int ecx;
  int edx;
  int dh;
#error unstructured control flow
}
int ParseGroupString( char *s, LayerGroupTypePtr LayerGroup, int LayerN )
{
  int eax;
  int ecx;
  int ch;
  int edx;
  int ebp_112;
  int ebp_108;
  int group, member, layer;
  Boolean c_set;
  Boolean s_set;
  int groupnum[18];
  mymemset( (void*)LayerGroup, 0, 1216 );
  layer = 0;
  do
  {
    groupnum[ layer ] = -1;
    layer++;
  }
  while ( layer + 1 != 18 );
  if ( s )
  {
    if ( LayerN > 0 && ( s[0] & 255 ) )
    {
      s_set = 0;
      c_set = 0;
      ebp_112 = 0;
      do
      {
        if ( ( s[0] & 255 ) && ( s[0] & 255 ) )
        {
          member = 0;
          ebp_108 = LayerGroup->Entries[ ebp_112 ][0];
          do
          {
            if ( s[0] != 'S' )
            {
              if ( eax < 'S' )
              {
                if ( s[0] != 'c' )
                {
                  if ( s[0] == 's' )
                    goto B18;
                  else
                  {
                    if ( ( ( ch & 32 & 8 & 32 & 8 & 32 & 8 & 32 & 8 & 8 ) & 255 ) == 0 )
                    {
                      mymemset( (void*)LayerGroup, 0, 1216 );
                      break;
                    }
                    layer += -1;
                    if ( ( ( LayerN + 1 < layer + -1 ) & 255 ) == 0 )
                    {
                      if ( LayerN < member )
                      {
                        mymemset( (void*)LayerGroup, 0, 1216 );
                        break;
                      }
                      s[0] = s + 1;
                      groupnum[ layer ] = ebp_112;
                      *ebp_108 = layer;
                      member++;
                      if ( s[0] )
                      {
                        do
                        {
                          if ( ( ( ch & 8 ) & 255 ) == 0 )
                          {
                            if ( s[0] != ':' )
                            {
                              if ( s[0] != ',' )
                              {
                                mymemset( (void*)LayerGroup, 0, 1216 );
                                break;
                              }
                              s[0] = s + 1;
                              ebp_108 += 4;
                              if ( s[0] )
                              {
                                do
                                {
                                }
                                while ( s[0] );
                                break;
                              }
                              else
                                break;
                            }
                            else
                              break;
                          }
                          else
                          {
                            s[0] = s + 1;
                          }
                        }
                        while ( s[0] );
                        break;
                      }
                      else
                        break;
                    }
                  }
                }
              }
              else
              if ( s[0] == 'C' )
                goto B22;
              else
              {
              }
B22:;
              layer = LayerN + 1;
              c_set = 1;
            }
B18:;
            s_set = 1;
            layer = LayerN;
          }
          while ( s[0] );
        }
        else
        {
        }
        LayerGroup->Number[0] = member;
        s[0] = s + ( s[0] == ':' );
        ebp_112++;
        if ( s == 0 )
        {
          break;
        }
        else
      }
      while ( s[0] && ( ( ebp_112 + 1 < LayerN ) & 255 ) );
      if ( s_set == 0 )
      {
        LayerGroup->Entries[0][ LayerGroup->Number[0] ] = LayerN;
        LayerGroup->Number[0]++;
        if ( c_set == 0 )
        {
          LayerGroup->Entries[1][ LayerGroup->Number[1] ] = LayerN + 1;
          LayerGroup->Number[1]++;
        }
        if ( ( ( ebp_112 < LayerN ) & 255 ) && ( (unsigned char)( LayerN > 0 ) & 255 ) )
        {
          layer = 0;
          group = ebp_112;
          do
          {
            if ( groupnum[ layer ] == -1 )
            {
              LayerGroup->Number[0] = 1;
              group++;
              LayerGroup->Entries[0][0] = layer;
            }
            layer++;
          }
          while ( group < LayerN && layer < LayerN );
        }
        return 1;
      }
      else
      {
      }
    }
  }
  else
  {
  }
  c_set = 0;
  ebp_112 = 0;
  LayerGroup->Entries[0][ LayerGroup->Number[0] ] = LayerN;
  LayerGroup->Number[0]++;
}
void QuitApplication( void )
{
  if ( PCB->Changed && Settings.SaveInTMP )
    EmergencySave( );
  else
    DisableEmergencySave( );
  if ( Settings.init_done > 0 )
  {
    exit( 0 );
  }
  Settings.init_done = -1;
  return;
}
char *EvaluateFilename( char *Template, char *Path, char *Filename, char *Parameter )
{
  int ecx;
  static DynamicStringType command;
  char *p;
  if ( Settings.verbose )
  {
    __printf_chk( 1, "EvaluateFilename:\n" );
    __printf_chk( 1, "\tTemplate: \033[33m%s\033[0m\n", Template );
    __printf_chk( 1, "\tPath: \033[33m%s\033[0m\n", Path );
    __printf_chk( 1, "\tFilename: \033[33m%s\033[0m\n", Filename );
    __printf_chk( 1, "\tParameter: \033[33m%s\033[0m\n", Parameter );
  }
  DSClearString( &command );
  Path[0] = Path;
  while ( p )
  {
    do
    {
      if ( p[0] )
      {
        if ( p[0] == '%' )
        {
          p[0] = p + 1;
          if ( p[0] != 'p' )
          {
            if ( p[0] != 'f' )
            {
              if ( p[0] == 'a' )
              {
                p[0] = p + 1;
                DSAddString( &command, Parameter );
              }
            }
            else
            {
              p[0] = p + 1;
              DSAddString( &command, Filename );
            }
          }
          else
          {
            p[0] = p + 1;
            DSAddString( &command, Path );
          }
        }
        else
          p[0] = p + 1;
        DSAddCharacter( &command, p[0] );
        break;
      }
      DSAddCharacter( &command, 0 );
      if ( Settings.verbose == 0 )
      {
        Path = "EvaluateFilename()";
        Template = command.Data;
      }
      __printf_chk( 1, "EvaluateFilename: \033[32m%s\033[0m\n", command.Data );
      Path = "EvaluateFilename()";
      Template = command.Data;
    }
    while ( p );
    Path[0] = Path;
  }
}
char *ExpandFilename( char *Dirname, char *Filename )
{
  static DynamicStringType answer;
  char *command;
  FILE *pipe;
  int c;
  DSClearString( &answer );
  if ( Dirname )
  {
    command[0] = MyCalloc( strlen( Filename ) + strlen( Dirname ) + 7, 1, "ExpandFilename()" );
    __sprintf_chk( (char*)MyCalloc( strlen( Filename ) + strlen( Dirname ) + 7, 1, "ExpandFilename()" ), 1, -1, "echo %s/%s", Dirname, Filename );
  }
  else
  {
    command[0] = MyCalloc( strlen( Filename ) + 6, 1, "Expand()" );
    __sprintf_chk( (char*)MyCalloc( strlen( Filename ) + 6, 1, "Expand()" ), 1, -1, "echo %s", Filename );
  }
  if ( popen( command, "r" ) == 0 )
  {
    PopenErrorMessage( command );
    SaveFree( (void*)command );
  }
  while ( 1 )
  {
    switch ( c )
    {
    default:
      c = c/*.1_1of4*/;
      DSAddCharacter( &answer, c/*.1_1of4*/ );
      break;
    case 10:
    case 13:
    case -1:
      SaveFree( (void*)command );
      break;
      break;
    }
  }
  return &eax;
}
int GetLayerNumber( DataTypePtr Data, LayerTypePtr Layer )
{
  int ecx;
  do
  {
  }
  while ( Data->ViaN != Layer && 0 + 1 + 1 != 18 );
  return 0 + 1;
}
int ChangeGroupVisibility( int Layer, Boolean On, Boolean ChangeStackOrder )
{
  int eax;
  int ecx;
  int edx;
  int ebp_36;
  int group, i, changed;
  if ( Settings.verbose )
  {
    On = On;
    __printf_chk( 1, "ChangeGroupVisibility(Layer=%d, On=%d, ChangeStackOrder=%d)\n", Layer, On, esi );
  }
  changed = PCB->Data->LayerN;
  if ( PCB->Data->LayerN != Layer )
  {
    group = 0;
    ebp_36 = PCB;
    if ( changed > 0 )
    {
      do
      {
        if ( PCB->Font.Valid )
        {
          if ( Layer != *(int*)(ebp_36 + 7444) )
          {
            do
            {
              if ( 0 + 1 + 1 < PCB->Font.Valid )
                continue;
            }
            while ( PCB->LayerGroups.Entries[0][2] != Layer );
          }
          if ( changed <= group )
            goto B4;
          else
          {
            changed = 1;
            ebp_36 = ChangeStackOrder != 0;
            group = Layer;
            ebp_36 &= On != 0;
            do
            {
              layer = *(int*)(PCB + ( i * 4 ) + ( group * 72 ) + 7436);
              i += -1;
              if ( group != *(int*)(PCB + ( i * 4 ) + ( group * 72 ) + 7436) && layer < PCB->Data->LayerN )
              {
                PCB->Data->Layer->On = On;
                if ( ebp_36 )
                {
                  if ( layer < PCB->Data->LayerN )
                  {
                    if ( PCB->Data->LayerN > 0 && layer != LayerStack[0] )
                    {
                      do
                      {
                      }
                      while ( 0 + 1 + 1 < PCB->Data->LayerN && LayerStack[ LayerStack[ 0 + 1 ] + -4 ] != layer );
                      do
                      {
                        LayerStack[ 0 + 1 ] = *(int*)(LayerStack[ 0 + 1 ] + -4);
                      }
                      while ( LayerStack[0] != LayerStack[ 0 + 1 ] + -4 + -4 );
                    }
                    LayerStack[0] = layer;
                  }
                }
                else
                {
                }
              {
                int layer;
                changed++;
              }
              }
            }
            while ( i );
            Layer = group;
            PCB->Data->Layer->On = On;
            if ( ebp_36 && Layer < PCB->Data->LayerN )
            {
              if ( PCB->Data->LayerN > 0 && LayerStack[0] != Layer )
              {
                do
                {
                }
                while ( 0 + 1 + 1 < PCB->Data->LayerN && LayerStack[ 0 + 1 ] != Layer );
                do
                {
                  LayerStack[ 0 + 1 ] = *(int*)(LayerStack[ 0 + 1 ] + -4);
                }
                while ( LayerStack[0] != LayerStack[ 0 + 1 ] + -4 + -4 );
              }
              LayerStack[0] = Layer;
            }
            hid_action( "LayersChanged" );
            return changed;
          }
        }
        group++;
        ebp_36 += 72;
      }
      while ( group < changed );
    }
  }
B4:;
  changed = 1;
  ebp_36 = ChangeStackOrder != 0;
  ebp_36 &= On != 0;
  PCB->Data->Layer->On = On;
}
void LayerStringToLayerStack( char *s )
{
  int eax;
  static int listed_layers;
  /* phantom */ int l;
  /* phantom */ char **args;
  int i = -1, argn, lno;
  int prev_sep;
  if ( strlen( s ) > 0 )
  {
    argn = 0;
    prev_sep = 1;
    i = 0;
    do
    {
      switch ( ecx )
      {
      case 0:
      case 23:
      case 35:
      case 49:
      case 50:
        *(char*)(__strdup( s )) = 0;
        prev_sep = 1;
        break;
      default:
        if ( prev_sep )
        {
          prev_sep = 0;
          argn++;
        }
        break;
      }
      i++;
    }
    while ( strlen( s ) == i + 1 );
    i = argn + -1;
  }
  if ( PCB->Data->LayerN >= -1 )
  {
    i = 0;
    do
    {
      if ( i < PCB->Data->LayerN )
        LayerStack[ i ] = i;
      i++;
      PCB->Data->Layer->On = 0;
    }
    while ( i + 1 <= PCB->Data->LayerN + 1 );
  }
  PCB->ElementOn = 0;
  PCB->InvisibleObjectsOn = 0;
  PCB->PinOn = 0;
  PCB->ViaOn = 0;
  PCB->RatOn = 0;
  if ( i != -1 )
  {
    do
    {
      if ( eax == 0 )
        PCB->RatOn = 1;
      else
      {
        if ( eax == 0 )
        {
          i += -1;
          PCB->InvisibleObjectsOn = 1;
          if ( i + -1 == -1 )
            break;
        }
        else
        {
          if ( strcasecmp( &prev_sep, "pins" ) == 0 )
            PCB->PinOn = 1;
          else
          {
            if ( strcasecmp( &prev_sep, "vias" ) == 0 )
              PCB->ViaOn = 1;
            else
            {
              if ( strcasecmp( &prev_sep, "elements" ) == 0 )
                PCB->ElementOn = 1;
              else
              {
                if ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( *(char*)(prev_sep) * 2 ) + 1) & 8 ) & 255 )
                {
                  ChangeGroupVisibility( strtol( lno + 1, 0, 10 ), 1, 1 );
                }
                else
                {
                  /* phantom */ int found;
                  lno = 0;
                  if ( PCB->Data->LayerN > 0 )
                  {
                    do
                    {
                      if ( strcasecmp( &lno, &PCB->Data->Layer[1].Name ) == 0 )
                      {
                        i = i;
                        ChangeGroupVisibility( lno, 1, 1 );
                      }
                      else
                      {
                        lno++;
                      }
                    }
                    while ( PCB->Data->LayerN <= lno + 1 );
                    i = i;
                  }
                  __fprintf_chk( stderr, 1, "Warning: layer \"%s\" not known\n", &lno );
                  if ( listed_layers == 0 )
                  {
                    __fprintf_chk( stderr, 1, "Named layers in this board are:\n" );
                    listed_layers = 1;
                    if ( PCB->Data->LayerN > 0 )
                    {
                      lno = 0;
                      do
                      {
                        lno++;
                        __fprintf_chk( stderr, 1, "\t%s\n", &PCB->Data->Layer->Name );
                      }
                      while ( PCB->Data->LayerN <= lno );
                    }
                  }
                }
              }
            }
          }
        }
      }
      i += -1;
    }
    while ( i + -1 != -1 );
  }
  return;
}
int GetGroupOfLayer( int Layer )
{
  int eax;
  int edx;
  int ebp_24;
  int group;
  return PCB->Data->LayerN;
}
int GetLayerGroupNumberByPointer( LayerTypePtr Layer )
{
  int eax;
  int ecx;
  int edx;
  int ebp_20;
  do
  {
  }
  while ( Layer != PCB->Data + ( 0 * 92 ) + 76 && 0 + 1 + 1 != 18 );
  ebp_20 = PCB;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
      if ( *(int*)(ebp_16 + ( eax << 2 ) + 7380) )
      {
        if ( 0 + 1 == *(int*)(ebp_20 + 7444) )
          break;
        do
        {
          if ( edx + 1 < edi )
            continue;
        }
        while ( ecx != ebx );
        break;
      }
      ebp_20 += 72;
    }
    while ( ebp_24 <= eax + 1 );
  }
  return 0 + 1;
}
int GetLayerGroupNumberByNumber( Cardinal Layer )
{
  int eax;
  int ecx;
  int ebp_20;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
      if ( *(int*)(ebp_16 + ( eax << 2 ) + 7380) )
      {
        if ( Layer == *(int*)(ebp_20 + 7444) )
          break;
        do
        {
          if ( edx + 1 < esi )
            continue;
        }
        while ( ecx != Layer );
        break;
      }
      ebp_20 += 72;
    }
    while ( ebp_24 <= eax + 1 );
  }
  return 0 + 1;
}
BoxTypePtr GetObjectBoundingBox( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  switch ( Type )
  {
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
    if ( Type + -1 <= 1 )
    {
      return &Ptr1[0];
    }
    Message( "Request for bounding box of unsupported type %d\n", Type );
    return &Ptr2[0];
    break;
  case 16384:
    return &Ptr2[0];
    break;
//  case 8:
    return &Ptr2[0];
    break;
  case 2048:
  case 4096:
    break;
  default:
    break;
  case 4:
  case 16:
  case 256:
  case 512:
    return &Ptr2[0];
    break;
  }
  return &Ptr3[0];
}
void SetArcBoundingBox( ArcTypePtr Arc )
{
  int eax;
  int ecx;
  int edx;
  double fp2;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double ca1, ca2, sa1, sa2;
  LocationType ang1;
  LocationType ang2;
  /* phantom */ LocationType width;
  if ( Arc->Delta > 360 )
  {
    ang1 = Arc->StartAngle;
    Arc->Delta = 360;
    ang2 = Arc->StartAngle + 360;
  }
  else
  {
    ang1 = Arc->StartAngle;
    ang2 = Arc->StartAngle + Arc->Delta;
    if ( Arc->Delta < 0 )
    {
      ang2 = ang1 = ang2;
      if ( ang2 < 0 )
      {
        ang1 += 360;
        ang2 += 360;
        if ( ang1 + 360 != 90 )
        {
          switch ( ang1 )
          {
          case 0:
            sa2 = 0.000000000000;
            sa1 = 1.000000000000;
            break;
          case 180:
            sa2 = 0.000000000000;
            break;
          case 270:
            sa2 = -1.000000000000;
            sa1 = 0.000000000000;
            break;
          default:
            ;
            sa2 = sin( (double)( ang1 ) * 0.017453292520 );
            sa1 = cos( (double)( ang1 ) * 0.017453292520 );
            break;
          }
          if ( ang2 != 90 )
          {
            switch ( ang2 )
            {
            case 0:
              break;
            case 180:
              break;
            case 270:
              break;
            default:
              ;
              sa2 = sin( (double)( ang2 ) * 0.017453292520 );
              sa1 = cos( (double)( ang2 ) * 0.017453292520 );
              break;
            }
            if ( ang2 > 180 )
            {
              Arc->BoundingBox.X2 = (int)( 0.000000000000 );
              if ( ang2 > 360 )
              {
                Arc = (int)( (double)( Arc->X ) - ( 1.000000000000 * (double)( Arc->Width ) ) );
                Arc->BoundingBox.Y2 = (int)( 1.000000000000 * (double)( Arc->Height ) );
                if ( ang2 > 270 )
                {
                  Arc = (int)( (double)( Arc->Height ) - ( 1.000000000000 * (double)( Arc->Width ) ) ) - ( ( Arc->Clearance + Arc->Thickness ) / 2 );
                  Arc->BoundingBox.Y1 = (int)( ( sa1 * (double)( Arc->Height ) ) + (double)( Arc->Y ) ) - ( ( Arc->Clearance + Arc->Thickness ) / 2 );
                  Arc->BoundingBox.X2 = ( ( Arc->Clearance + Arc->Thickness ) / 2 ) + 1 + (int)( 0.000000000000 );
                  Arc->BoundingBox.Y2 = ( ( Arc->Clearance + Arc->Thickness ) / 2 ) + 1 + (int)( sa1 * (double)( Arc->Height ) );
                  return;
                }
                else
                {
                }
                sa1 = sa1 < sa1 ? sa1 : sa1;
                Arc = (int)( (double)( Arc->Height ) - ( 1.000000000000 * (double)( Arc->Width ) ) ) - ( ( Arc->Clearance + Arc->Thickness ) / 2 );
                Arc->BoundingBox.Y1 = (int)( ( sa1 * (double)( Arc->Height ) ) + (double)( Arc->Y ) ) - ( ( Arc->Clearance + Arc->Thickness ) / 2 );
                Arc->BoundingBox.X2 = ( ( Arc->Clearance + Arc->Thickness ) / 2 ) + 1 + (int)( 0.000000000000 );
                Arc->BoundingBox.Y2 = ( ( Arc->Clearance + Arc->Thickness ) / 2 ) + 1 + (int)( sa1 * (double)( Arc->Height ) );
                return;
              }
              else
              {
              }
              sa1 = -1.000000000000;
              Arc = (int)( (double)( Arc->X ) - ( 1.000000000000 * (double)( Arc->Width ) ) );
              Arc->BoundingBox.Y2 = (int)( 1.000000000000 * (double)( Arc->Height ) );
            }
            else
            {
              Arc->BoundingBox.X2 = (int)( 0.000000000000 );
            }
          }
          else
          {
            if ( ang2 > 180 )
            {
              sa2 = sa1 = 0.000000000000;
              Arc->BoundingBox.X2 = (int)( 0.000000000000 );
            }
            else
            {
              sa1 = sa2 = 1.000000000000;
            }
          }
        }
        else
        {
          sa2 = 1.000000000000;
          sa1 = 0.000000000000;
          if ( ang2 != 90 )
          {
            switch ( ang2 )
            {
            case 0:
              break;
            case 180:
              break;
            case 270:
              break;
            default:
              break;
            }
          }
          else
          {
          }
        }
      }
      else
      {
        if ( ang1 != 90 )
        {
          switch ( ang1 )
          {
          case 0:
            break;
          case 180:
            break;
          case 270:
            break;
          default:
            break;
          }
        }
        else
        {
          sa2 = 1.000000000000;
          sa1 = 0.000000000000;
        }
      }
    }
  }
  if ( ang1 < 0 )
  {
    ang1 += 360;
    ang2 += 360;
  }
  else
  {
  }
}
void ResetStackAndVisibility( void )
{
  int edx;
  int ebp_32;
  int comp_group;
  Cardinal i;
  if ( PCB->Data->LayerN != -2 )
  {
    i = 0;
    do
    {
      if ( i < PCB->Data->LayerN )
        LayerStack[ i ] = i;
      i++;
      PCB->Data->Layer->On = 1;
    }
    while ( i + 1 < PCB->Data->LayerN + 2 );
  }
  PCB->ElementOn = 1;
  PCB->InvisibleObjectsOn = 1;
  PCB->PinOn = 1;
  PCB->ViaOn = 1;
  PCB->RatOn = 1;
  comp_group = 0;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
      if ( PCB->Font.Valid )
      {
        if ( PCB->Data->LayerN + 1 == *(int*)(ebp_32 + 7444) )
        {
          ChangeGroupVisibility( ebp_36, 1, 1 );
          return;
        }
        do
        {
          if ( 0 + 1 + 1 < PCB->Font.Valid )
            continue;
        }
        while ( PCB->LayerGroups.Entries[0][2] != PCB->LayerGroups.Entries[0][8] + 1 );
      }
      comp_group++;
      ebp_32 += 72;
    }
    while ( comp_group < PCB->LayerGroups.Entries[0][8] );
  }
  else
  {
  }
}
void SaveStackAndVisibility( void )
{
  int edx;
  static Boolean run;
  Cardinal i;
  if ( run == 0 )
  {
    SavedStack.cnt = 0;
    run = 1;
  }
  else
  if ( SavedStack.cnt )
  {
    __fprintf_chk( stderr, 1, "SaveStackAndVisibility()  layerstack was already saved and notyet restored.  cnt = %d\n", SavedStack.cnt );
  }
  if ( PCB->Data->LayerN + 2 )
  {
    i = 0;
    do
    {
      if ( i < PCB->Data->LayerN )
        SavedStack.LayerStack[ i ] = LayerStack[ i ];
      SavedStack.LayerOn[ i ] = PCB->Data->Layer[1].On;
      i++;
    }
    while ( i + 1 < PCB->Data->LayerN + 2 );
  }
  SavedStack.ElementOn = PCB->ElementOn;
  SavedStack.InvisibleObjectsOn = PCB->InvisibleObjectsOn;
  SavedStack.PinOn = PCB->PinOn;
  SavedStack.ViaOn = PCB->ViaOn;
  SavedStack.RatOn = PCB->RatOn;
  SavedStack.cnt++;
  return;
}
void RestoreStackAndVisibility( void )
{
  Cardinal i;
  if ( SavedStack.cnt == 0 )
  {
    __fprintf_chk( stderr, 1, "RestoreStackAndVisibility()  layerstack has not been saved.  cnt = %d\n", 0 );
    return;
  }
  if ( SavedStack.cnt != 1 )
  {
    __fprintf_chk( stderr, 1, "RestoreStackAndVisibility()  layerstack save count is wrong.  cnt = %d\n", SavedStack.cnt );
  }
  if ( PCB->Data->LayerN != -2 )
  {
    i = 0;
    do
    {
      if ( i < PCB->Data->LayerN )
        LayerStack[ i ] = SavedStack.LayerStack[ i ];
      i++;
      PCB->Data->Layer->On = SavedStack.LayerOn[ i ];
    }
    while ( i + 1 < PCB->Data->LayerN + 2 );
  }
  PCB->ElementOn = SavedStack.ElementOn;
  PCB->InvisibleObjectsOn = SavedStack.InvisibleObjectsOn;
  PCB->PinOn = SavedStack.PinOn;
  PCB->ViaOn = SavedStack.ViaOn;
  PCB->RatOn = SavedStack.RatOn;
  SavedStack.cnt += -1;
  return;
}
char *GetWorkingDirectory( char *path )
{
  return getcwd( path, 4096 );
}
void CreateQuotedString( DynamicStringTypePtr DS, char *S )
{
  DSClearString( DS );
  while ( 1 )
  {
    DSAddCharacter( DS, ebp_20 );
    if ( S[0] == 0 )
    {
      S = 34;
    }
    if ( S[0] == '\\' || S[0] == '"' )
      DSAddCharacter( DS, '\\' );
    S[0] = S + 1;
  }
}
void RightAngles( int Angle, float *cosa, float *sina )
{
  int ebx;
  int esi;
  sina[0] = sina[0];
  ;
  cosa[0] = cos( (double)( Angle ) * 0.017453292520 );
  sina[0] = sin( (double)( Angle ) * 0.017453292520 );
  return;
}
BoxTypePtr GetArcEnds( ArcTypePtr Arc )
{
  int eax;
  int ecx;
  int edx;
  static BoxType box;
  float ca, sa;
  RightAngles( Arc->StartAngle, &ca, &sa );
  box.X1 = (int)( (double)( *(int*)(Arc + 52) ) - ( (double)( *(int*)(Arc + 44) ) * ca ) );
  box.Y1 = (int)( (double)( *(int*)(Arc + 56) ) + ( (double)( *(int*)(Arc + 48) ) * sa ) );
  RightAngles( Arc->Delta + Arc->StartAngle, &ca, &sa );
  box.X2 = (int)( (double)( *(int*)(Arc + 52) ) - ( (double)( *(int*)(Arc + 44) ) * ca ) );
  box.Y2 = (int)( (double)( *(int*)(Arc + 56) ) + ( (double)( *(int*)(Arc + 48) ) * sa ) );
  return &box;
}
void ChangeArcAngles( LayerTypePtr Layer, ArcTypePtr a, long new_sa, long new_da )
{
  int edx;
  int ebx;
  int esi;
  int edi;
  RestoreToPolygon( &PCB->Data, 16384, (void*)Layer, (void*)a );
  r_delete_entry( &Layer->arc_tree, (int)( &a->BoundingBox ) );
  AddObjectToChangeAnglesUndoList( 16384, (void*)a, (void*)a, (void*)a );
  a->Delta = new_da;
  a->StartAngle = new_sa;
  SetArcBoundingBox( a );
  r_insert_entry( &Layer->arc_tree, (int)( &a->BoundingBox ), 0 );
  new_da = a;
  new_sa = Layer;
  a = 16384;
  Layer = &PCB->Data->ViaN;
}
char *UniqueElementName( DataTypePtr Data, char *Name )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ Boolean unique;
  if ( Name && Name[0] )
  {
    while ( n = Data->ElementN + -1, Data->ElementN + -1 != -1 )
    {
      do
      {
        if ( Data->Element->BoundingBox.X1 && Data->ElementN == 0 )
        {
          Name[0] = Name;
          if ( Name[0] )
          {
            do
            {
              Name[0] = Name + 1;
            }
            while ( Name[0] );
          }
          while ( ( *(char*)(*(int*)(__ctype_b_loc( )) + ( *(char*)(Name + -1 + -1) * 2 ) + 1) & 8 ) & 255 )
          {
          }
          if ( *(char*)(Name + -1 + 0) )
          {
            eax++;
          }
          return 0;
          __sprintf_chk( temp, 1, 256, "%s%d", Name, 1 );
          if ( temp[0] == Name )
          {
          }
          return &ecx;
          Name = temp;
          break;
        {
          while ( n = Data->ElementN + -1, Data->ElementN + -1 != -1 )
          {
            do
            {
            }
            while ( n + -1 != -1 );
            break;
          }
          break;
        }
        }
        else
        {
          n += -1;
        }
      }
      while ( n + -1 != -1 );
      break;
    }
  }
}
void AttachForCopy( LocationType PlaceX, LocationType PlaceY )
{
  int eax;
  int ecx;
  int edx;
  double (null);
  double (null);
  double (null);
  double (null);
  BoxTypePtr box;
  LocationType mx;
  LocationType my = 0;
  mx = 0;
  Crosshair.AttachedObject.RubberbandN = 0;
  if ( ( ( PCB->Flags.f/*.2_2of4*/ & 16 ) & 255 ) == 0 )
  {
    switch ( Crosshair.AttachedObject.Type )
    {
      if ( edx < 2048 )
      {
        if ( Crosshair.AttachedObject.Type == 4096 )
        {
          mx = my;
          my = my;
        }
        else
        if ( Crosshair.AttachedObject.Type == 16384 )
        {
          mx = *(int*)(GetArcEnds( &Crosshair.AttachedObject.Ptr2[0] ));
          my = *(int*)GetArcEnds( &Crosshair.AttachedObject.Ptr2[0] )/*.4*/;
        }
        else
        {
          my = 0;
          mx = 0;
        }
      }
      else
      if ( Crosshair.AttachedObject.Type != 1024 )
        continue;
      else
    default:
      if ( edx < 2 )
      {
        if ( Crosshair.AttachedObject.Type == 4 )
        {
          mx = Crosshair.AttachedObject.Ptr2[11];
          my = Crosshair.AttachedObject.Ptr2[12];
        }
        else
        if ( Crosshair.AttachedObject.Type == 8 )
        {
          mx = Crosshair.AttachedObject.Ptr2[14];
          my = Crosshair.AttachedObject.Ptr2[14];
        }
      }
      else
      if ( Crosshair.AttachedObject.Type != 1 )
        continue;
      else
      {
        my = Crosshair.AttachedObject.Ptr2[14];
        mx = Crosshair.AttachedObject.Ptr2[13];
      }
      break;
    case 16:
      mx = Crosshair.AttachedObject.Ptr2[10];
      my = Crosshair.AttachedObject.Ptr2[11];
      break;
    case 2:
      mx = Crosshair.AttachedObject.Ptr2[54];
      my = Crosshair.AttachedObject.Ptr2[55];
      break;
    case 2048:
      break;
    }
    mx = (int)( ( (double)( (int)( ( (double)( mx - *(int*)(PCB + 136) ) + ( *(double*)(PCB + 152) * 0.500000000000 ) ) / *(double*)(PCB + 152) ) ) * *(double*)(PCB + 152) ) + 0.500000000000 + (double)( *(int*)(PCB + 136) ) ) - mx;
    my = (int)( ( *(double*)(PCB + 152) * (double)( (int)( ( ( *(double*)(PCB + 152) * 0.500000000000 ) + (double)( my - *(int*)(PCB + 140) ) ) / *(double*)(PCB + 152) ) ) ) + 0.500000000000 + (double)( *(int*)(PCB + 140) ) ) - my;
  }
  Crosshair.AttachedObject.X = PlaceX - mx;
  PlaceY -= my;
  Crosshair.AttachedObject.Y = PlaceY - my;
  if ( !Marked.status || ( ( *(char*)(PCB + 4) & 2 ) & 255 ) )
    SetLocalRef( PlaceX - mx, PlaceY - my, 1 );
  Crosshair.AttachedObject.State = 1;
  SetCrosshairRange( Crosshair.AttachedObject.X - box->X1, Crosshair.AttachedObject.Y - box->Y1, ( PCB->MaxWidth + Crosshair.AttachedObject.X ) - box->X2, ( PCB->MaxHeight + Crosshair.AttachedObject.Y ) - box->Y2 );
  if ( Settings.Mode != 105 )
  {
    if ( ( PCB->Flags.f/*.1_1of4*/ & 16 ) & 255 )
    {
      LookupRubberbandLines( Crosshair.AttachedObject.Type, Crosshair.AttachedObject.Ptr1, Crosshair.AttachedObject.Ptr2, Crosshair.AttachedObject.Ptr3 );
      if ( Settings.Mode == 105 )
      {
        return;
      }
    }
    if ( Crosshair.AttachedObject.Type + -1 <= 1 || Crosshair.AttachedObject.Type == 4 || Crosshair.AttachedObject.Type == 4096 )
    {
      LookupRatLines( Crosshair.AttachedObject.Type, Crosshair.AttachedObject.Ptr1, Crosshair.AttachedObject.Ptr2, Crosshair.AttachedObject.Ptr3 );
      return;
    }
  }
  return;
}
int FileExists( char *name )
{
  FILE *f = (FILE*)fopen( name, "r" );
  if ( fopen( name, "r" ) )
  {
    fclose( f );
  }
  return 1;
}
char *Concat( char *first, ... )
{
  int edx;
  char *rv;
  int len = strlen( first );
  va_list a;
  rv = (char*)calloc( 1, len + 1 );
  strcpy( (char*)calloc( 1, len + 1 ), first );
{
  char *s;
  __builtin_va_start( a, rv );
  if ( ebp_12 )
  {
    do
    {
      rv = realloc( rv, ( len + 1 ) * sizeof( char ) );
      strcat( (char*)realloc( rv, len + 1 ), s );
      s[0] = a[0] = a[4];
    }
    while ( a[0] == 0 );
  }
  return rv;
}
}
int mem_any_set( unsigned char *ptr, int bytes )
{
  int eax;
  int edx;
  for ( ; bytes;  )
  {
    return 1;
  }
  return 1;
}
FlagType MakeFlags( unsigned int flags )
{
  int eax;
  int ebx;
  int esi;
  FlagType rv;
  mymemset( &rv.f, 0, 12 );
  rv.f = flags;
  rv.f = flags;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
FlagType OldFlags( unsigned int flags )
{
  int eax;
  int edx;
  FlagType rv;
  int i, f;
  mymemset( &rv.f, 0, 12 );
  f = 0x10000;
  rv.f = (int)flags;
  i = 0;
  while ( 1 )
  {
    if ( flags & f )
      rv.t[ i >> 1 ] |= (unsigned char)( 1 << ( ( i & 1 ) << 2 ) );
    i++;
    if ( i + 1 == 8 )
      break;
    else
    {
      f <<= 1;
    }
  }
  rv.f = rv.f;
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
FlagType AddFlags( FlagType flag, unsigned int flags )
{
  result.t[7] = flag.t[7];
  result.f = flags | flag.f;
  result.t[6] = flag.t[6];
  result.t[5] = flag.t[5];
  result.t[4] = flag.t[4];
  result.t[3] = flag.t[3];
  result.t[2] = flag.t[2];
  result.t[1] = flag.t[1];
  result.t[0] = flag.t[0];
  return;
}
FlagType MaskFlags( FlagType flag, unsigned int flags )
{
  result.t[7] = flag.t[7];
  result.t[6] = flag.t[6];
  result.f = flag.f & ~flags;
  result.t[5] = flag.t[5];
  result.t[4] = flag.t[4];
  result.t[3] = flag.t[3];
  result.t[2] = flag.t[2];
  result.t[1] = flag.t[1];
  result.t[0] = flag.t[0];
  return;
}
int MoveLayerToGroup( int layer, int group )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  int ebp_32;
  int ebp_24;
  int prev, i, j;
  if ( layer < 0 || PCB->Data->LayerN + 1 < layer )
  {
  }
  prev = 0;
  if ( PCB->Data->LayerN > 0 )
  {
    do
    {
      if ( PCB->Font.Valid )
      {
        if ( layer != *(int*)(ebp_24 + 7444) )
        {
          do
          {
            if ( 0 + 1 + 1 < PCB->Font.Valid )
              continue;
          }
          while ( PCB->LayerGroups.Entries[0][2] != layer );
        }
      }
      prev++;
      ebp_24 += 72;
    }
    while ( prev + 1 < PCB->Data->LayerN );
  }
  if ( PCB->Data->LayerN == layer )
  {
    ebp_24 = 0;
    ebp_32 = PCB;
    if ( layer > 0 )
    {
      do
      {
        if ( PCB->Font.Valid )
        {
          if ( PCB->Data->LayerN + 1 != *(int*)(ebp_32 + 7444) )
          {
            do
            {
              if ( 0 + 1 + 1 < PCB->Font.Valid )
                continue;
            }
            while ( PCB->LayerGroups.Entries[0][2] != PCB->Data->LayerN + 1 );
            prev = prev;
          }
        }
        ebp_24++;
        ebp_32 += 72;
      }
      while ( ebp_24 < layer );
    }
    if ( ebp_24 == group )
    {
      return group;
    }
  }
  if ( PCB->Data->LayerN + 1 == layer )
  {
    ebp_24 = PCB;
    if ( PCB->Data->LayerN > 0 )
    {
      do
      {
        if ( PCB->Font.Valid )
        {
          if ( PCB->Data->LayerN != *(int*)(ebp_24 + 7444) )
          {
            do
            {
              if ( 0 + 1 + 1 < PCB->LayerGroups.Number[0] )
                continue;
            }
            while ( PCB->Data->LayerN != PCB->LayerGroups.Entries[0][2] );
            prev = prev;
            layer = ebp_32;
          }
        }
        ebp_24 += 72;
      }
      while ( 0 + 1 + 1 < PCB->Data->LayerN );
    }
    if ( group == 0 + 1 )
    {
      return group;
    }
  }
  if ( group < 0 || PCB->Data->LayerN <= group || prev == group )
  {
    return group;
  }
  if ( PCB->Font.Valid )
  {
    i = 0;
    ebp_24 = i * 18;
    j = 0;
    do
    {
      if ( ebp_32 != PCB->LayerGroups.Entries[0][0] )
      {
        PCB->LayerGroups.Number[15] = PCB->LayerGroups.Entries[0][1];
        j++;
      }
      i++;
      PCB->LayerGroups.Entries[0][0] = PCB->ID + 7444 + 4;
    }
    while ( i + 1 < PCB->Font.Valid );
    layer = ebp_32;
  }
  PCB->Font.Valid += -1;
  PCB->Font.Valid++;
  prev = group;
  return group;
}
char *LayerGroupsToString( LayerGroupTypePtr lg )
{
  int eax;
  int ecx;
  int edx;
  static char buf[91];
  char *cp;
  char sep;
  int group, entry;
  cp[0] = buf[0];
  if ( PCB->Data->LayerN > 0 )
  {
    *(int*)&sep = 0;
    group = 0;
    while ( 1 )
    {
      if ( PCB->Font.Valid == 0 )
      {
      }
      else
      {
        if ( sep & 255 )
        {
          cp[0] = ':';
          cp[0] = cp + 1;
        }
        *(int*)&sep = 1;
        if ( PCB->Font.Valid )
        {
          int layer;
          entry = 0;
          while ( 1 )
          {
            layer = *(int*)(PCB + ( entry * 4 ) + ( group * 18 * 4 ) + 7444);
            if ( PCB->Data->LayerN + 1 == *(int*)(PCB + ( entry * 4 ) + ( group * 18 * 4 ) + 7444) )
            {
              cp[0] = 'c';
              cp[0] = cp + 1;
            }
            else
            if ( PCB->Data->LayerN != layer )
            {
              __sprintf_chk( cp, 1, 91, "%d", layer + 1 + 1 );
              do
              {
                cp[0] = cp + 1;
              }
              while ( cp[0] );
            }
            else
            {
              cp[0] = 's';
              cp[0] = cp + 1;
            }
            if ( PCB->Font.Valid + -1 )
            {
              cp[0] = ',';
              cp[0] = cp + 1;
            }
            entry++;
            if ( PCB->Font.Valid <= entry + 1 )
              *(int*)&sep = 1;
            else
            {
            }
          }
        }
      }
      group++;
      if ( PCB->Data->LayerN <= group )
        break;
    }
  }
  cp[0] = 0;
  return buf;
}
char *pcb_author( void )
{
  int ebx;
  static struct passwd *pwentry;
  static char *fab_author;
  if ( fab_author == 0 )
  {
    if ( Settings.FabAuthor && Settings.FabAuthor[0] )
    {
      fab_author = Settings.FabAuthor;
    }
  {
    int len;
    /* phantom */ char *comma, *gecos;
    gecos[0] = *(int*)getpwuid( getuid( ) )/*.16*/;
    pwentry = (struct passwd*)getpwuid( getuid( ) );
    fab_author = (char*)calloc( 1, len + 1 );
    if ( fab_author )
    {
      memcpy( fab_author, gecos, len );
      return fab_author;
    }
    perror( "pcb: out of memory.\n" );
    exit( -1 );
  }
  }
  return fab_author;
}
char *c_dtostr( double d )
{
  double fp7;
  static char buf[100];
  /* phantom */ static int f;
  /* phantom */ int i;
  char *bufp;
  bufp[0] = buf[0];
  if ( d < 0.000000000000 )
  {
    buf[0] = '-';
    d = -( d );
    bufp[0] = buf[1];
  }
  __sprintf_chk( bufp, 1, 100, "%d" );
  __sprintf_chk( bufp + strlen( bufp ) + 1, 1, -1, "%06d" );
  return buf;
}
double c_strtod( char *s )
{
  int eax;
  int edx;
  double fp3;
  double fp4;
  double fp5;
  double fp6;
  double fp7;
  double rv;
  double sign;
  double scale;
  if ( s[0] )
  {
    do
    {
      if ( s[0] == '\t' || s[0] == ' ' )
      {
        s++;
      }
      else
      {
        if ( s[0] + -48 < 9 )
        {
        }
        else
        {
          do
          {
            s++;
          }
          while ( s[0] + -48 >= 9 );
        }
        if ( s[0] == '.' && s[0] + -48 >= 9 )
        {
          scale = 0.100000000000;
          do
          {
            s++;
          }
          while ( s[0] + -48 >= 9 );
          if ( s[0] != 101 )
          {
            if ( s[0] == 'E' )
            {
              int e;
              sign = 0.000000000000;
              if ( sscanf( s + 1 + 1, "%d", &e ) == 1 )
              {
                if ( e > 0 )
                {
                  scale = 10.000000000000;
                  do
                  {
                    e += -1;
                  }
                  while ( e + -1 != 1 );
                  sign = 0.000000000000;
                  break;
                }
                else
                if ( 1 )
                {
                  sign *= 1.000000000000;
                  break;
                }
                scale = 0.100000000000;
                do
                {
                }
                while ( e + 1 + 1 );
                sign = 0.000000000000;
                break;
              }
              else
                break;
            }
            else
              break;
          }
          else
          {
          }
        }
        else
        {
          if ( s[0] != 'e' )
          {
          }
        }
      }
    }
    while ( s[0] );
  }
  sign = 1.000000000000;
}
void r_delete_element( DataType *data, ElementType *element )
{
  int eax;
  int ebp_28;
  r_delete_entry( &data->element_tree, (int)( &element->BoundingBox ) );
{
  Cardinal n;
  Cardinal sn;
  /* phantom */ PinTypePtr pin;
  ebp_28 = element->PinN;
  if ( element->PinN )
  {
    n = 0;
    while ( 1 )
    {
      r_delete_entry( data->pin_tree, &element->Pin->BoundingBox.X1 );
      sn = element->PinN;
      if ( element->PinN == 0 || sn <= ( sn + n + 1 ) - ebp_28 )
        goto B3;
      else
      {
      }
    }
  }
{
B3:;
  Cardinal n = 0;
  Cardinal sn;
  /* phantom */ PadTypePtr pad;
  ebp_28 = 0;
  while ( 1 )
  {
    sn = element->PadN;
    do
    {
      if ( sn == 0 || sn <= n )
      {
        /* phantom */ Cardinal n;
        /* phantom */ TextTypePtr text;
        r_delete_entry( data->name_tree[2], &element->Name[2].BoundingBox.X1 );
        r_delete_entry( data->name_tree[1], element + 96 );
        element += 0;
        data = &(DataType*)(data->name_tree[0]->root);
      }
      r_delete_entry( data->pad_tree, ebp_28 + element->Pad );
      sn = element->PadN;
    }
    while ( element->PadN != element->PadN );
    n++;
    ebp_28 += 104;
  }
}
}
}
char *GetInfoString( void )
{
  static DynamicStringType info;
  static int first_time = 1;
  HID **hids;
  /* phantom */ int i;
  if ( first_time )
  {
    first_time = 0;
    DSAddString( &info, "This is PCB, an interactive\n" );
    DSAddString( &info, "printed circuit board editor\n" );
    DSAddString( &info, "version " );
    DSAddString( &info, "20091103" );
    DSAddString( &info, "\n\n" );
    DSAddString( &info, "Compiled on Jul  3 2011 at 14:17:43" );
    DSAddString( &info, "\n\nby harry eaton\n\n" );
    DSAddString( &info, "Copyright (C) Thomas Nau 1994, 1995, 1996, 1997\n" );
    DSAddString( &info, "Copyright (C) harry eaton 1998-2007\n" );
    DSAddString( &info, "Copyright (C) C. Scott Ananian 2001\n" );
    DSAddString( &info, "Copyright (C) DJ Delorie 2003, 2004, 2005, 2006, 2007, 2008\n" );
    DSAddString( &info, "Copyright (C) Dan McMahill 2003, 2004, 2005, 2006, 2007, 2008\n\n" );
    DSAddString( &info, "It is licensed under the terms of the GNU\n" );
    DSAddString( &info, "General Public License version 2\n" );
    DSAddString( &info, "See the LICENSE file for more information\n\n" );
    DSAddString( &info, "For more information see:\n\n" );
    DSAddString( &info, "PCB homepage: http://pcb.gpleda.org\n" );
    DSAddString( &info, "gEDA homepage: http://www.gpleda.org\n" );
    DSAddString( &info, "gEDA Wiki: http://geda.seul.org/wiki/ \n\n" );
    DSAddString( &info, "----- Compile Time Options -----\n" );
    hids[0] = hid_enumerate( );
    DSAddString( &info, "GUI:\n" );
    if ( hids[0] )
    {
      do
      {
        if ( ( *(char*)(hids[2] + 12) & 1 ) & 255 )
        {
          DSAddString( &info, "    " );
          DSAddString( &info, &hids[1]->struct_size );
          DSAddString( &info, " : " );
          hids[0] = hids + 4;
          DSAddString( &info, &hids[2]->struct_size );
          DSAddString( &info, "\n" );
        }
        else
        {
          hids[0] = hids + 4 + 4;
          if ( hids[2] )
            continue;
          else
            break;
        }
      }
      while ( hids[2] );
    }
    DSAddString( &info, "Exporters:\n" );
    if ( hids[0] )
    {
      do
      {
        if ( ( *(char*)(hids[2] + 12) & 4 ) & 255 )
        {
          DSAddString( &info, "    " );
          DSAddString( &info, &hids[1]->struct_size );
          DSAddString( &info, " : " );
          hids[0] = hids + 4;
          DSAddString( &info, &hids[2]->struct_size );
          DSAddString( &info, "\n" );
        }
        else
        {
          hids[0] = hids + 4 + 4;
          if ( hids[2] )
            continue;
          else
            break;
        }
      }
      while ( hids[2] );
    }
    DSAddString( &info, "Printers:\n" );
    if ( hids[0] == 0 )
    {
      return info.Data;
    }
    do
    {
      if ( ( *(char*)(hids[1] + 12) & 2 ) & 255 )
      {
        DSAddString( &info, "    " );
        DSAddString( &info, &hids[1]->struct_size );
        DSAddString( &info, " : " );
        DSAddString( &info, &hids[2]->struct_size );
        DSAddString( &info, "\n" );
      }
      hids[0] = hids + 4;
    }
    while ( hids[1] );
  }
  return info.Data;
}
#if 0
#endif
