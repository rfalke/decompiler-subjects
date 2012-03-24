#include "select.c.h"
void SelectPin( LibraryEntryTypePtr entry, Boolean toggle )
{
  int ebx;
  ConnectionType conn;
  if ( SeekPad( entry, &conn, 0 ) & 255 )
  {
    if ( conn.type == 256 )
    {
      PinTypePtr pin = &conn.ptr2[0];
      AddObjectToFlagUndoList( 256, conn.ptr1, conn.ptr2, conn.ptr2 );
      if ( toggle & 255 )
      {
        pin->Flags.f ^= 64;
        CenterDisplay( pin->X, pin->Y, 0 );
      }
      else
        pin->Flags.f |= 64;
      DrawPin( pin, 0 );
      return;
    }
    else
    {
      if ( conn.type == 512 )
      {
        PadTypePtr pad = &conn.ptr2[0];
        AddObjectToFlagUndoList( 512, conn.ptr1, conn.ptr2, conn.ptr2 );
        if ( toggle & 255 )
        {
          pad->Flags.f ^= 64;
          CenterDisplay( pad->Point1.X, pad->Point1.Y, 0 );
        }
        else
          pad->Flags.f |= 64;
        DrawPad( pad, 0 );
        return;
      }
    }
  }
  return;
}
Boolean SelectObject( void )
{
  void *ptr1, *ptr2, *ptr3;
  /* phantom */ LayerTypePtr layer;
  int type;
  Boolean changed;
  if ( type )
  {
  }
  return 0;
}
Boolean SelectBlock( BoxTypePtr Box, Boolean Flag )
{
  int eax;
  int ecx;
  int edx;
  int ebp_28;
#error unstructured control flow
}
void *ObjectOperation( ObjectFunctionTypePtr F, int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int ecx;
  int edx;
  switch ( Type )
  {
  case 4:
    if ( F->Line == 0 )
    {
      return 0;
    }
    Type = Ptr2;
    F = &Ptr1[0];
    ;
    break;
  case 16384:
    if ( F->Arc == 0 )
    {
      return 0;
    }
    break;
  case 4096:
    if ( F->LinePoint == 0 )
    {
      return 0;
    }
    Ptr1 = Ptr3;
    Type = Ptr2;
    F = &Ptr1[0];
    ;
    break;
  case 16:
    if ( F->Text == 0 )
  case 8:
    if ( F->Polygon == 0 )
    {
      return 0;
    }
    break;
  case 2048:
    if ( F->Point )
    {
      Ptr1 = Ptr3;
      Type = Ptr2;
      F = &Ptr1[0];
      ;
    }
    return 0;
    break;
  case 1:
    if ( F->Via == 0 )
    {
      return 0;
    }
    break;
  case 2:
    if ( F->Element )
    {
      F = &Ptr1[0];
      ;
    }
    return 0;
    break;
  case 256:
    if ( F->Pin == 0 )
    {
      return 0;
    }
    break;
  case 512:
    if ( F->Pad == 0 )
    {
      return 0;
    }
    break;
  case 1024:
    if ( F->ElementName )
    {
      F = &Ptr1[0];
      ;
    }
    return 0;
    break;
  case 32:
    if ( F->Rat == 0 )
    {
      return 0;
    }
    break;
  default:
    return 0;
    break;
  }
}
// Lost vars at line 567 through condition folding
// Lost vars at line 567 through condition folding
// Lost vars at line 584 through condition folding
// Lost vars at line 584 through condition folding
// Lost vars at line 601 through condition folding
// Lost vars at line 618 through condition folding
// Lost vars at line 618 through condition folding
// Lost vars at line 635 through condition folding
// Lost vars at line 650 through condition folding
// Lost vars at line 710 through condition folding
Boolean SelectedOperation( ObjectFunctionTypePtr F, Boolean Reset, int type )
{
  int eax;
  int ecx;
  int edx;
  int ebp_36;
  Boolean changed;
  if ( ( ( type/*.1_1of4*/ & 4 ) & 255 ) && F->Line && PCB->Data->LayerN != -2 )
  {
    l = 0;
    *(int*)&changed = 0;
    while ( layer->On == 0 || layer->LineN + -1 == -1 )
    {
      n++;
      if ( PCB->Data->LayerN + 2 <= n )
        goto B143;
      else
      {
        layer++;
      }
    }
    do
    {
      line = layer->Line + ( layer->LineN * 88 ) + -88 + -88;
      if ( ( ( line->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
      {
        n += -1;
      }
      else
      {
        if ( Reset == 0 )
        {
          ;
        }
        AddObjectToFlagUndoList( 4, (void*)layer, (void*)line, (void*)line );
        line->Flags.f &= -65;
        ;
      }
      n++;
    }
    while ( n + -1 != -1 );
    n++;
  }
  else
    *(int*)&changed = 0;
B143:;
  if ( ( type & 16384 ) && F->Arc && PCB->Data->LayerN != -2 )
  {
    l = 0;
    while ( layer->On == 0 || layer->ArcN + -1 == -1 )
    {
      n++;
      if ( PCB->Data->LayerN + 2 <= n )
        goto B16;
      else
      {
        layer++;
      }
    }
    do
    {
      arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
      if ( ( ( arc->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
        goto B24;
      else
      {
        if ( Reset )
        {
          AddObjectToFlagUndoList( 16384, (void*)layer, (void*)arc, (void*)arc );
          arc->Flags.f &= -65;
        }
        F->Arc( layer, &arc->BoundingBox.X1 );
        *(int*)&changed = 1;
      }
B24:;
      n += -1;
    }
    while ( n + -1 != -1 );
    n++;
  }
B16:;
  if ( ( ( type/*.1_1of4*/ & 16 ) & 255 ) && F->Text && PCB->Data->LayerN != -2 )
  {
    l = 0;
  {
    while ( n = layer->TextN + -1, layer->TextN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l )
        goto B31;
      else
      {
        layer++;
      }
    }
    do
    {
      text = layer->Text + ( layer->TextN * 60 ) + -60 + -60;
      if ( ( ( text->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 || layer->On == 0 )
        goto B38;
      else
      {
        if ( Reset )
        {
          AddObjectToFlagUndoList( 16, (void*)layer, (void*)text, (void*)text );
          text->Flags.f &= -65;
        }
        F->Text( layer, &text->BoundingBox.X1 );
        *(int*)&changed = 1;
      }
B38:;
      n += -1;
    }
    while ( n + -1 != -1 );
    l++;
  }
  }
B31:;
  if ( ( ( type/*.1_1of4*/ & 8 ) & 255 ) && F->Polygon && PCB->Data->LayerN != -2 )
  {
    l = 0;
    while ( layer->On == 0 || layer->PolygonN + -1 == -1 )
    {
      n++;
      if ( PCB->Data->LayerN + 2 <= n )
        goto B47;
      else
      {
        layer++;
      }
    }
    do
    {
      polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60;
      if ( ( ( polygon->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
        goto B55;
      else
      {
        if ( Reset )
        {
          AddObjectToFlagUndoList( 8, (void*)layer, (void*)polygon, (void*)polygon );
          polygon->Flags.f &= -65;
        }
        F->Polygon( layer, &polygon->BoundingBox.X1 );
        *(int*)&changed = 1;
      }
B55:;
      n += -1;
    }
    while ( n + -1 != -1 );
    n++;
  }
B47:;
  if ( ( ( type/*.1_1of4*/ & 2 ) & 255 ) && PCB->ElementOn && F->Element && PCB->Data->ElementN + -1 != -1 )
  {
    while ( element = element->net + ebx, ( ( element->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
    {
      n += -1;
      if ( n + -1 == -1 )
        goto B62;
      else
      {
      }
    }
    if ( Reset )
    {
      AddObjectToFlagUndoList( 2, (void*)element, (void*)element, (void*)element );
      element->Flags.f &= -65;
    }
    ;
  }
B62:;
  if ( ( type & 1024 ) && PCB->ElementOn && F->ElementName && PCB->Data->ElementN + -1 != -1 )
  {
    while ( 1 )
    {
      if ( ( *(char*)(( PCB->Flags.f & 64 ? 60 : ( 0 - ( ( ( 1 & 32 ) < 1 ) & 1 ) ) & 120 ) + element + 36 + 20) & 64 ) & 255 )
      {
        if ( Reset )
        {
          AddObjectToFlagUndoList( 1024, (void*)element, ebp_36, PCB->Flags.f & 64 ? 60 : ( 0 - ( ( ( 1 & 32 ) < 1 ) & 1 ) ) & 120 );
          *(int*)(ecx + 20) &= -65;
        }
        F->ElementName( &element->BoundingBox.X1, ebp_36 );
        ebp_36 = 1;
      }
      n += -1;
      if ( n + -1 == -1 )
        break;
      else
      {
      }
    }
    changed = ebp_36;
  }
  if ( ( type & 256 ) && PCB->PinOn && F->Pin )
  {
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      ebp_36 = ( PCB->Data->ElementN * 300 ) + -300;
      while ( element = ebp_36 + PCB->Data->Element, element->PinN == 0 )
      {
        n += -1;
        ebp_36 += -300;
        if ( n == -1 )
          goto B92;
        else
        {
        }
      }
      n = 0;
      while ( pin = element->Pin + ( n * 76 ), ( ( pin->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
      {
        if ( sn == 0 || sn <= ( sn + n + 1 ) - element->PinN )
        {
          n += -1;
          ebp_36 += -300;
        }
        else
        {
        }
      }
      if ( Reset )
      {
        AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
        pin->Flags.f &= -65;
      }
      F->Pin( &element->BoundingBox.X1, &pin->BoundingBox.X1 );
      sn = element->PinN;
      *(int*)&changed = 1;
    }
  }
B92:;
  if ( ( type & 512 ) && PCB->PinOn && F->Pad )
  {
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      ebp_36 = ( PCB->Data->ElementN * 300 ) + -300;
      while ( 1 )
      {
        Cardinal n = 0;
        Cardinal sn;
        PadTypePtr pad;
        element += PCB->Data->Element / 300;
        sn = element->PadN;
        element->PadN = element->PadN;
        for ( ; sn && n < sn;  )
        {
          pad = element->Pad + ( n * 104 );
          if ( ( ( pad->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
            continue;
          else
          {
            if ( Reset )
            {
              AddObjectToFlagUndoList( 512, (void*)element, (void*)pad, (void*)pad );
              pad->Flags.f &= -65;
            }
            F->Pad( &element->BoundingBox.X1, &pad->BoundingBox.X1 );
            sn = element->PadN;
            *(int*)&changed = 1;
          }
          n += sn == sn;
        }
        n += -1;
        ebp_36 += -300;
        if ( n == -1 )
          goto B109;
        else
        {
        }
      }
    }
  }
B109:;
  if ( ( ( type/*.1_1of4*/ & 1 ) & 255 ) && PCB->ViaOn && F->Via && PCB->Data->ViaN )
  {
    n = 0;
    while ( via = PCB->Data->Via + ( n * 76 ), ( ( via->Flags.f/*.1_1of4*/ & 64 ) & 255 ) == 0 )
    {
      sn = PCB->Data->ViaN;
      if ( PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
        goto B125;
      else
      {
      }
    }
    if ( Reset )
    {
      AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
      via->Flags.f &= -65;
    }
    F->Via( &via->BoundingBox.X1 );
    *(int*)&changed = 1;
    sn = PCB->Data->ViaN;
  }
B125:;
  if ( ( changed & 255 ) && Reset )
  {
    IncrementUndoSerialNumber( );
    return changed;
  }
  return 1;
}
// Lost vars at line 770 through condition folding
// Lost vars at line 781 through condition folding
// Lost vars at line 792 through condition folding
// Lost vars at line 831 through condition folding
Boolean SelectConnection( Boolean Flag )
{
  int eax;
  int ecx;
  int edx;
  int ebp_36;
  Boolean changed;
  if ( PCB->RatOn == 0 )
  {
  }
  else
  {
    Cardinal n = PCB->Data->RatN + -1;
    RatTypePtr line;
    if ( PCB->Data->RatN + -1 != -1 )
    {
      *(int*)&changed = 0;
      while ( 1 )
      {
        line = ( PCB->Data->RatN * 92 ) + -92 + -92 + PCB->Data->Rat;
        if ( ( ( line->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
        {
          n += -1;
          if ( n + -1 != -1 )
            continue;
        }
        else
        {
          AddObjectToFlagUndoList( 32, (void*)line, (void*)line, (void*)line );
          n += -1;
          line->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( line->Flags.f & -65 );
          DrawRat( line, 0 );
          *(int*)&changed = 1;
          if ( n != -1 )
            continue;
        }
      }
    }
  }
{
  Cardinal l;
  LayerTypePtr layer = PCB->Data + 76;
  if ( PCB->Data->LayerN != -2 )
  {
    l = 0;
    while ( layer->On == 0 || layer->LineN + -1 == -1 )
    {
      l++;
      if ( PCB->Data->LayerN + 2 <= l + 1 )
      {
        Cardinal l;
        LayerTypePtr layer = PCB->Data + 76;
        if ( PCB->Data->LayerN != -2 )
        {
          n = 0;
          while ( layer->On == 0 || layer->ArcN + -1 == -1 )
          {
            n++;
            if ( PCB->Data->LayerN + 2 <= n )
            {
              Cardinal l;
              LayerTypePtr layer = PCB->Data + 76;
              if ( PCB->Data->LayerN != -2 )
              {
                changed = 1;
                n = 0;
                while ( layer->On == 0 || layer->PolygonN + -1 == -1 )
                {
                  n++;
                  if ( PCB->Data->LayerN + 2 <= n )
                  {
                  }
                  else
                  {
                    layer++;
                  }
                }
                do
                {
                  polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60;
                  if ( ( polygon->Flags.f & 8196 ) == 4 )
                  {
                    AddObjectToFlagUndoList( 8, (void*)layer, (void*)polygon, (void*)polygon );
                    n += -1;
                    polygon->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( polygon->Flags.f & -65 );
                    DrawPolygon( layer, polygon, 0 );
                    *(int*)&changed = 1;
                    if ( n != -1 )
                      continue;
                    else
                    {
                      break;
                    }
                  }
                  else
                  {
                    n += -1;
                  }
                }
                while ( n + -1 != -1 );
                n++;
              }
            }
            else
            {
              layer++;
            }
          }
          do
          {
            arc = layer->Arc + ( layer->ArcN * 68 ) + -68 + -68;
            if ( ( arc->Flags.f & 8196 ) == 4 )
            {
              AddObjectToFlagUndoList( 16384, (void*)layer, (void*)arc, (void*)arc );
              n += -1;
              arc->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( arc->Flags.f & -65 );
              DrawArc( layer, arc, 0 );
              if ( n != -1 )
                continue;
              else
                break;
            }
            else
            {
              n += -1;
            }
          }
          while ( n + -1 != -1 );
          n++;
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
      if ( ( line->Flags.f & 8196 ) == 4 )
      {
        AddObjectToFlagUndoList( 4, (void*)layer, (void*)line, (void*)line );
        n += -1;
        line->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( line->Flags.f & -65 );
        DrawLine( layer, line, 0 );
        if ( n != -1 )
          continue;
        else
          break;
      }
      else
      {
        n += -1;
      }
    }
    while ( n + -1 != -1 );
    l = l;
    l++;
  }
  if ( PCB->PinOn && PCB->ElementOn )
  {
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( n != -1 )
    {
      ebp_36 = ( PCB->Data->ElementN * 300 ) + -300;
      do
      {
        Cardinal n;
        Cardinal sn = element->PinN;
        PinTypePtr pin;
        if ( element->PinN )
        {
          n = 0;
          while ( 1 )
          {
            pin = &pin->BoundingBox.X1;
            if ( ( ( pin->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
            {
              if ( element->PinN == 0 )
              {
              }
            }
            else
            {
              AddObjectToFlagUndoList( 256, (void*)element, (void*)pin, (void*)pin );
              pin->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( pin->Flags.f & -65 );
              DrawPin( pin, 0 );
              sn = element->PinN;
              if ( element->PinN == 0 )
              {
              }
            }
            n = ( sn + n + 1 ) - sn;
            if ( sn <= ( sn + n + 1 ) - element->PinN )
              continue;
            else
            {
              sn = element->PinN;
            }
          }
        }
        n += -1;
        ebp_36 += -300;
      }
      while ( n != -1 );
    }
  {
    Cardinal n = PCB->Data->ElementN + -1;
    ElementTypePtr element;
    if ( PCB->Data->ElementN + -1 != -1 )
    {
      ebp_36 = ( PCB->Data->ElementN * 300 ) + -300;
      while ( 1 )
      {
        Cardinal n = 0;
        Cardinal sn;
        PadTypePtr pad;
        element += sn / 300;
        sn = sn;
        element->PadN = sn;
        for ( ; sn && n < sn;  )
        {
          pad = element->Pad + ( n * 104 );
          if ( ( ( pad->Flags.f/*.1_1of4*/ & 4 ) & 255 ) == 0 )
            continue;
          else
          {
            AddObjectToFlagUndoList( 512, (void*)element, (void*)pad, (void*)pad );
            pad->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( pad->Flags.f & -65 );
            DrawPad( pad, 0 );
            sn = element->PadN;
          }
          n += sn == pin;
        }
        n += -1;
        ebp_36 += -300;
        if ( n == -1 )
        {
        }
        else
        {
        }
      }
    }
  }
  }
  if ( PCB->ViaOn && PCB->Data->ViaN )
  {
    n = 0;
    while ( 1 )
    {
      via = PCB->Data->Via + ( n * 76 );
      if ( ( via->Flags.f & 8196 ) != 4 )
      {
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN == 0 )
        {
          Draw( );
          return 1;
        }
      }
      else
      {
        AddObjectToFlagUndoList( 1, (void*)via, (void*)via, (void*)via );
        via->Flags.f = ( ~( 0 - ( ( Flag < ( 1 & 255 ) ) & 1 ) ) & 64 ) | ( via->Flags.f & -65 );
        DrawVia( via, 0 );
        sn = PCB->Data->ViaN;
        if ( PCB->Data->ViaN == 0 )
        {
          Draw( );
          return 1;
        }
      }
      n = ( sn + n + 1 ) - sn;
      if ( sn <= ( sn + n + 1 ) - sn )
      {
        Draw( );
        return 1;
      }
      sn = PCB->Data->ViaN;
    }
  }
}
}
int regexec_match_all( regex_t *preg, char *string )
{
  regmatch_t match;
  if ( regexec( preg, string, 1, &match.rm_so, 0 ) == 0 && match.rm_so == 0 )
  {
    return match.rm_eo == strlen( string );
  }
  return 0;
}
// Lost vars at line 991 through condition folding
Boolean SelectObjectByName( int Type, char *Pattern, Boolean Flag )
{
  int eax;
  int ecx;
  int edx;
  int ebp_228;
  int ebp_208;
  Boolean changed;
  int result;
  regex_t compiled;
  if ( result )
  {
    char errorstring[128];
    regerror( result, &compiled, errorstring, 128 );
    Message( "regexp error: %s\n", errorstring[0] );
    regfree( &compiled );
    changed = 0;
  }
  else
  {
    if ( ( ( Type/*.1_1of4*/ & 16 ) & 255 ) == 0 )
      changed = 0;
    else
    {
      Cardinal l;
      LayerTypePtr layer;
      changed = 0;
      layer = &PCB->Data->Layer;
      if ( PCB->Data->LayerN != -2 )
      {
        Cardinal n;
        TextTypePtr text;
        l = 0;
        ebp_208 = Flag;
        while ( n = layer->TextN + -1, layer->TextN + -1 == -1 )
        {
          l++;
          if ( PCB->Data->LayerN + 2 <= l )
            goto B7;
          else
          {
            layer++;
          }
        }
        do
        {
          n += -1;
        }
        while ( n + -1 != -1 );
        l++;
      }
    }
B7:;
    if ( PCB->ElementOn && ( ( Type/*.1_1of4*/ & 2 ) & 255 ) )
    {
      Cardinal n = PCB->Data->ElementN + -1;
      ElementTypePtr element;
      if ( PCB->Data->ElementN + -1 != -1 )
      {
        while ( element = ( PCB->Data->ElementN * 300 ) + -300 + -300 + PCB->Data->Element, n == -1 )
        {
        }
      }
    }
    if ( PCB->PinOn )
    {
      if ( Type & 256 )
      {
        Cardinal n = PCB->Data->ElementN + -1;
        ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
          ebp_208 = ( PCB->Data->ElementN * 300 ) + -300;
        {
          Cardinal n;
          Cardinal sn;
          PinTypePtr pin;
          while ( element = ebp_208 + PCB->Data->ElementN, sn = *(int*)(ebp_208 + *(int*)(PCB->Data->ElementN + 32) + 224), element->PinN = *(int*)(ebp_208 + *(int*)(PCB->Data->ElementN + 32) + 224), element->PinN == 0 )
          {
            n += -1;
            ebp_208 += -300;
            if ( n == -1 )
            {
              if ( PCB->PinOn )
                goto B25;
            }
            else
            {
            }
          }
          n = 0;
          for ( ; sn && ( sn + n + 1 ) - element->PinN < sn;  )
          {
            sn = element->PinN;
          }
          n += -1;
          ebp_208 += -300;
        }
        }
      }
B25:;
      if ( Type & 512 )
      {
        Cardinal n = PCB->Data->ElementN + -1;
        ElementTypePtr element;
        if ( PCB->Data->ElementN + -1 != -1 )
        {
        {
          Cardinal n;
          Cardinal sn;
          PadTypePtr pad;
          ebp_228 = ( PCB->Data->ElementN * 300 ) + -300;
          while ( 1 )
          {
            n = 0;
            element = ebp_228 + PCB->Data->Element;
            ebp_208 = *(int*)(ebp_228 + *(int*)(*(int*)(PCB + 8716) + 32) + 232);
            sn = *(int*)(ebp_228 + *(int*)(*(int*)(PCB + 8716) + 32) + 232);
            for ( ; sn && n < sn;  )
            {
              n += ebp_208 == sn;
            }
            n += -1;
            ebp_228 += -300;
            if ( n == -1 )
            {
            }
            else
            {
            }
          }
        }
        }
      }
    }
    if ( PCB->ViaOn && ( ( Type/*.1_1of4*/ & 1 ) & 255 ) && PCB->Data->ViaN )
    {
      n = 0;
      n = Flag;
      while ( via = PCB->Data->Via + ( n * 76 ), PCB->Data->ViaN == 0 || sn <= ( sn + n + 1 ) - sn )
      {
      }
    }
    regfree( &compiled );
    if ( changed )
    {
      IncrementUndoSerialNumber( );
      Draw( );
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return changed;
}
#if 0
#endif
