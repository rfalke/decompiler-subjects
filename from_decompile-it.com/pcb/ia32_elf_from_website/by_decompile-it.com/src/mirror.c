#include "mirror.c.h"
void MirrorElementCoordinates( DataTypePtr Data, ElementTypePtr Element, LocationType yoff )
{
  int eax;
  int ecx;
  int ebp_32;
  r_delete_element( Data, Element );
{
  Cardinal n = Element->LineN + -1;
  /* phantom */ LineTypePtr line;
  if ( Element->LineN + -1 != -1 )
  {
    Element->LineN = Element->Line + ( Element->LineN * 88 ) + -44;
    do
    {
      n += -1;
      Element->Line->BoundingBox.X1 = yoff + ( PCB->MaxHeight - Element->Line->BoundingBox.X1 );
      Element->Line->BoundingBox.X1 = yoff + ( PCB->MaxHeight - Element->Line->BoundingBox.X1 );
      Element->Line->BoundingBox.X1 = Element->Line + ( Element->LineN * 88 ) + -44 + -88;
    }
    while ( n + -1 != -1 );
  }
{
  Cardinal n;
  Cardinal sn;
  PinTypePtr pin;
  if ( Element->PinN )
  {
    n = 0;
    while ( 1 )
    {
      pin = Element->Pin + ( n * 76 );
      RestoreToPolygon( Data, 256, (void*)Element, Element->Pin + ( n * 76 ) );
      pin->Y = ( ebp_32 + PCB->MaxHeight ) - pin->Y;
      sn = Element->PinN;
      if ( Element->PinN == 0 || sn <= ( sn + n + 1 ) - Element->PinN )
        yoff = ebp_32;
      else
      {
      }
    }
  }
{
  Cardinal n;
  Cardinal sn;
  PadTypePtr pad;
  ebp_32 = 0;
  n = 0;
  while ( 1 )
  {
    sn = Element->PadN;
    do
    {
      if ( sn && n < sn )
      {
        pad = ebp_32 + Element->Pad;
        RestoreToPolygon( Data, 512, (void*)Element, ebp_32 + Element->Pad );
        pad->Flags.f ^= 128;
        pad->Point1.Y = yoff + ( PCB->MaxHeight - pad->Point1.Y );
        pad->Point2.Y = yoff + ( PCB->MaxHeight - pad->Point2.Y );
        sn = Element->PadN;
      }
      else
      {
        Cardinal n = Element->ArcN + -1;
        /* phantom */ ArcTypePtr arc;
        if ( Element->ArcN + -1 != -1 )
        {
          do
          {
            n += -1;
            Element->Arc->BoundingBox.X1 = 0 - Element->Arc->BoundingBox.X1;
            Element->Arc->BoundingBox.X1 = 0 - Element->Arc->BoundingBox.X1;
            Element->Arc->BoundingBox.X1 = yoff + ( PCB->MaxHeight - *(int*)(Element->Arc + ( Element->ArcN * 68 ) + -68 + 56) );
            Element->Arc->BoundingBox.X1 = Element->Arc + ( Element->ArcN * 68 ) + -68 + 52 + -68;
          }
          while ( n + -1 != -1 );
        }
        else
        {
        }
      {
        do
        {
          /* phantom */ Cardinal n;
          /* phantom */ TextTypePtr text;
          Element->Name[2].Flags.f ^= 128;
          Element->Name[2].Y = PCB->MaxHeight + ( yoff - Element->Name[2].Y );
        }
        while ( 0 + -60 + -60 != -180 );
        Element->Flags.f ^= 128;
        Element->MarkY = PCB->MaxHeight + ( yoff - Element->MarkY - Element->MarkY );
        SetElementBoundingBox( Data, Element, sn + 184 );
        ClearFromPolygon( Data, 2, (void*)Element, (void*)Element );
        return;
      }
      }
    }
    while ( Element->PadN != Element->PadN );
    n++;
    ebp_32 += 104;
  }
}
}
}
}
#if 0
#endif
