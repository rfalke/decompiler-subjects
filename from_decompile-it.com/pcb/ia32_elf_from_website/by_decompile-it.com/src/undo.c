#include "undo.c.h"
static DataTypePtr RemoveList;
static UndoListTypePtr UndoList;
static int Serial = 1;
static int SavedSerial;
static size_t UndoN;
static size_t RedoN;
static size_t UndoMax;
static Boolean Locked;
static Boolean andDraw = 1;
UndoListTypePtr GetUndoSlot( int CommandType, int ID, int Kind )
{
  int eax;
  static size_t limit = 1048576;
  UndoListTypePtr ptr;
  void *ptr1, *ptr2, *ptr3;
  int type;
  if ( UndoMax <= UndoN )
  {
    size_t size;
    UndoMax += 500;
    size = ( size + 500 ) << 5;
    UndoList = (struct {
       int Serial;
       int Type;
       int Kind;
       int ID;
       union {
         ChangeNameType ChangeName;
         MoveType Move;
         RemovedPointType RemovedPoint;
         RotateType Rotate;
         MoveToLayerType MoveToLayer;
         FlagType Flags;
         BDimension Size;
         LayerChangeType LayerChange;
         ClearPolyType ClearPoly;
         NetlistChangeType NetlistChange;
      } Data;
    }*)MyRealloc( (void*)UndoList, ( size + 500 ) << 5, "AddCommandToUndoList()" );
    mymemset( UndoList + ( UndoN << 5 ), 0, 16000 );
    if ( limit < size )
    {
      limit = ( size & 0xfff00000 ) + 0x100000;
      Message( "Size of 'undo-list' exceeds %li kb\n", size >> 10 );
    }
  }
  ptr = &UndoList[ UndoN ];
  if ( RedoN )
  {
    while ( 1 )
    {
      if ( ptr->Type != 1 )
      {
        if ( ptr->Type == 4 && type )
          DestroyObject( RemoveList, type, ptr1, ptr2, ptr3 );
      }
      else
        SaveFree( &ptr->Data.ChangeName.(null) );
      RedoN += -1;
      if ( RedoN + -1 == 0 )
      {
        ptr = &UndoList[ UndoN ];
        break;
      }
      ptr++;
    }
  }
  UndoN = SearchObjectByID( RemoveList, &ptr1, &ptr2, &ptr3, ptr->ID, ptr->Kind ) + 1;
  ptr->Type = CommandType;
  ptr->Kind = Kind;
  ptr->ID = ID;
  ptr = &Serial;
  return ptr;
}
int Undo( Boolean draw )
{
  int eax;
  UndoListTypePtr ptr;
  int Types;
  /* phantom */ int unique;
  PCB->Flags.f = edx;
  andDraw = draw;
  do
  {
    if ( UndoN == 0 )
    {
      if ( Serial == 0 )
      {
        Types = 0;
        Message( "Nothing to undo - buffer is empty\n" );
        break;
      }
      break;
    }
    else
    {
      ptr = &UndoList[ UndoN + -1 ];
      if ( ptr->Serial != Serial + -1 )
      {
        Types = 0;
        Message( "Undo bad serial number %d expecting %d\n", Serial, Serial + -1 );
        Serial = ptr->Serial + 1;
        return Types;
      }
      Locked = 1;
      Types = 0;
      Serial = ptr->Serial;
      do
      {
        RedoN++;
        Types |= PerformUndo( ptr );
        UndoN += -1;
      }
      while ( !( UndoN + -1 ) || ptr->Serial != Serial );
      Locked = 0;
    }
  }
  while ( Types );
  if ( andDraw )
  {
    Draw( );
    if ( ( PCB->Flags.f & 1024 ) == 0 )
    {
      return Types;
    }
  }
  else
  if ( ( PCB->Flags.f & 1024 ) == 0 )
  {
    return Types;
  }
  PCB->Flags.f |= 1024;
  return Types;
}
int PerformUndo( UndoListTypePtr ptr )
{
  int ecx;
  int edx;
  int ebp_120;
  int ebp_116;
  ptr = 0;
  switch ( ptr->Type )
  {
  case 8192:
    if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) & 769 )
    {
      if ( andDraw )
      {
        EraseObject( ebp_56, ebp_76, ebp_72 );
      }
      if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) == 512 )
        *(int*)(ebp_72 + 84) = ptr->Data.ChangeName.(null);
      else
        *(int*)(ebp_72 + 44) = ptr->Data.ChangeName.(null);
      ptr->Data.ChangeName.(null) = SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) == 512 ? *(int*)(ebp_72 + 84) : *(int*)(ebp_72 + 44);
      if ( andDraw )
      {
        DrawObject( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), ebp_76, ebp_72, 0 );
      }
    }
    else
    {
    }
    break;
  case 256:
    if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) )
    {
      ebp_120 = *(char*)(ebp_72 + 24);
      esi = MaskFlags( ptr->Data.Move.DY );
      strcmp( ebp_52, ebp_40 );
      if ( !1 )
      {
        if ( andDraw )
          EraseObject( ebp_116, ebp_76, ebp_72 );
        *(int*)(ebp_72 + 20) = ptr->Data.ChangeName.(null);
        *(int*)(ebp_72 + 24) = ptr->Data.DX;
        *(int*)(ebp_72 + 28) = ptr->Data.X;
        ptr->Data.Index/*.0_0of4*/ = *(char*)(ebp_72 + 31);
        ptr->Data.Index/*.-1_-1of4*/ = *(char*)(ebp_72 + 30);
        ptr->Data.Index/*.-2_-2of4*/ = *(char*)(ebp_72 + 29);
        ptr->Data.Index/*.-3_-3of4*/ = *(char*)(ebp_72 + 28);
        ptr->Data.DY/*.4_4of4*/ = *(char*)(ebp_72 + 27);
        ptr->Data.DY/*.3_3of4*/ = *(char*)(ebp_72 + 26);
        ptr->Data.DY/*.2_2of4*/ = *(char*)(ebp_72 + 25);
        ptr->Data.DY/*.1_1of4*/ = ebp_120;
        ptr->Data.ChangeName.(null) = *(int*)(ebp_72 + 20);
        if ( andDraw )
        {
          DrawObject( ebp_116, ebp_76, ebp_72, 0 );
        }
      }
      else
      {
        *(int*)(ebp_72 + 20) = ptr->Data.ChangeName.(null);
        *(int*)(ebp_72 + 24) = ptr->Data.DX;
        *(int*)(ebp_72 + 28) = ptr->Data.X;
        ptr->Data.Index/*.0_0of4*/ = *(char*)(ebp_72 + 31);
        ptr->Data.Index/*.-1_-1of4*/ = *(char*)(ebp_72 + 30);
        ptr->Data.Index/*.-2_-2of4*/ = *(char*)(ebp_72 + 29);
        ptr->Data.Index/*.-3_-3of4*/ = *(char*)(ebp_72 + 28);
        ptr->Data.DY/*.4_4of4*/ = *(char*)(ebp_72 + 27);
        ptr->Data.DY/*.3_3of4*/ = *(char*)(ebp_72 + 26);
        ptr->Data.DY/*.2_2of4*/ = *(char*)(ebp_72 + 25);
        ptr->Data.DY/*.1_1of4*/ = ebp_120;
        ptr->Data.ChangeName.(null) = *(int*)(ebp_72 + 20);
      }
    }
    else
    {
      Message( "hace Internal error: Can't find ID %d type %08x\n", ptr->ID, ptr->Kind );
      Message( "for UndoFlag Operation. Previous flags: %s\n", flags_to_string( ptr->Data.ChangeName.Name[0], 0 ) );
    }
    break;
  case 8:
    if ( SearchObjectByID( &PCB->Data, ebp_56, ebp_60, ebp_68, ptr->ID, ptr->Kind ) != 8 )
      continue;
    else
    {
      if ( andDraw )
      {
        if ( *(char*)(ebp_56 + 68) )
        {
          ErasePolygon( ebp_60 );
        }
        else
        {
          InsertPointIntoObject( 8, ebp_72, ebp_60, ptr + 28, ptr->Data.ChangeName.(null), ptr->Data.DX, 1 );
          if ( andDraw && *(char*)(ebp_56 + 68) )
            DrawPolygon( ebp_56, ebp_60, 0 );
          ptr->Type = 16;
          ptr->Kind = 2048;
          ptr->ID = ptr->Data.X;
        }
      }
      InsertPointIntoObject( 8, ebp_72, ebp_60, ptr + 28, ptr->Data.ChangeName.(null), ptr->Data.DX, 1 );
    }
    break;
    if ( ccdep2 < ccdep1 )
    {
      if ( ptr->Type != 32768 )
      {
        if ( eax >= 32768 )
        {
          if ( ptr->Type == 65536 )
          {
            if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) )
            {
              if ( ptr->Data.Name )
                RestoreToPolygon( &PCB->Data, SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), &ptr->Data.DX, ebp_68 );
              else
                ClearFromPolygon( &PCB->Data, SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), &ptr->Data.DX, ebp_68 );
              ptr->Data.Name = ptr->Data.Name == 0;
            }
          }
          else
          {
            if ( ptr->Type == 131072 )
            {
              if ( ptr->Data.DX )
              {
                ebp_120 = 0;
                do
                {
                  if ( *(int*)(0 + ptr->Data.DX) )
                  {
                    free( *(int*)(0 + 28 + ptr->Data.DX) );
                  }
                  if ( ptr->Data.DX )
                  {
                    free( &ptr->Data.DX );
                  }
                  if ( ptr->Data.DX )
                  {
                    free( &ptr->Data.DX );
                  }
                  if ( ptr->Data.DX )
                  {
                    ebp_116 = 0;
                    do
                    {
                      if ( *(int*)(0 + *(int*)(ptr->Data.DX + 0 + 20)) )
                      {
                        free( *(int*)(0 + 24 + *(int*)(ptr->Data.DX + 0 + 20)) );
                      }
                      if ( ptr->Data.DX )
                      {
                        free( *(int*)(0 + 24 + *(int*)(0 + 28 + ptr->Data.DX + 20) + 4) );
                      }
                      if ( ptr->Data.DX )
                      {
                        free( &ptr->Data.DX );
                      }
                      if ( ptr->Data.DX )
                      {
                        free( &ptr->Data.DX );
                      }
                      if ( ptr->Data.DX )
                      {
                        free( &ptr->Data.DX );
                      }
                      if ( ptr->Data.DX )
                      {
                        free( &ptr->Data.DX );
                      }
                      ebp_116++;
                    }
                    while ( ptr->Data.DX <= ebp_116 );
                  }
                  ebp_120++;
                }
                while ( ptr->Data.DX <= ebp_120 );
              }
              else
              {
              }
              if ( ptr->Data.DX )
                free( &ptr->Data.DX );
              ptr->Data.DX = *ebp_124;
              ptr->Data.DX = *(int*)(ebp_124 + 4);
              ptr->Data.DX = *(int*)(ebp_124 + 8);
              hid_action( "NetlistChanged" );
            }
          }
        }
        else
        {
          if ( ptr->Type != 16384 )
            continue;
          else
          {
            if ( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) == 16384 )
            {
              r_delete_entry( *(int*)(ebp_68 + 64), ebp_72 );
              ebp_116 = *(int*)(ebp_72 + 64);
              if ( andDraw )
                EraseObject( 16384, ebp_68, ebp_72 );
              *(int*)(ebp_72 + 60) = ptr->Data.ChangeName.(null);
              *(int*)(ebp_72 + 64) = ptr->Data.DX;
              SetArcBoundingBox( ebp_72 );
              r_insert_entry( *(int*)(ebp_68 + 64), ebp_72, 0 );
              ptr->Data.ChangeName.(null) = *(int*)(ebp_72 + 60);
              ptr->Data.DX = ebp_116;
              DrawObject( 16384, ebp_68, ebp_72, 0 );
            }
          }
        }
      }
      else
      {
        ptr->Data.ChangeName.(null) = ptr->Data.DX = ptr->Data.ChangeName.(null);
        if ( MoveLayer( ptr->Data.DX, ptr->Data.ChangeName.(null) ) )
          continue;
      }
    }
    else
    {
      if ( ptr->Type != 1024 )
      {
        if ( eax >= 1024 )
        {
          if ( ptr->Type == 2048 )
          {
            if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) == 2 )
            {
              if ( andDraw )
                EraseElement( ebp_68 );
              MirrorElementCoordinates( &PCB->Data, ebp_68, ptr->Data.DX );
              if ( andDraw )
              {
                DrawElement( ebp_68, 0 );
              }
            }
            else
            {
              Message( "hace Internal error: UndoMirror on object type %d\n", SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) );
            }
          }
          else
          {
            if ( ptr->Type == 4096 )
            {
              if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) )
              {
                RestoreToPolygon( &PCB->Data, SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), ebp_76, ebp_72 );
                if ( andDraw )
                  EraseObject( ptr->Data.DX, ebp_76, ebp_72 );
                *(int*)(ebp_72 + 40) = ptr->Data.ChangeName.(null);
                ClearFromPolygon( &PCB->Data, SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), ebp_76, ebp_72 );
                ptr->Data.ChangeName.(null) = *(int*)(ebp_72 + 40);
                if ( andDraw )
                {
                  DrawObject( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), ebp_76, ebp_72, 0 );
                }
              }
            }
          }
        }
        else
        {
          if ( ptr->Type != 512 )
            continue;
          else
          {
            if ( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) )
            {
              RestoreToPolygon( &PCB->Data, SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72 );
              if ( andDraw )
                EraseObject( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72 );
              ptr->Data.ChangeName.(null) = *(int*)(ebp_72 + 36) = ptr->Data.ChangeName.(null);
              ClearFromPolygon( &PCB->Data, SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72 );
              if ( andDraw )
              {
                DrawObject( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72, 0 );
              }
            }
          }
        }
      }
      else
      {
        if ( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) )
        {
          if ( andDraw )
          {
            EraseObject( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72 );
          }
          ptr->Data.ChangeName.(null) = *(int*)(ebp_72 + 48) = ptr->Data.ChangeName.(null);
          DrawObject( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72, 0 );
        }
      }
    }
    break;
  default:
    if ( eax < 8 )
    {
      if ( ptr->Type != 32 )
      {
        if ( eax < 32 )
        {
          if ( ptr->Type != 64 )
          {
            if ( !( ptr->Type + -128 ) && SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) )
            {
              MoveObjectToLayer( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72, ebp_76, &PCB->Data->Layer[ ptr->Data.ChangeName.(null) ], 1 );
              ptr->Data.ChangeName.(null) = GetLayerNumber( &PCB->Data, ebp_68 );
            }
          }
          else
          {
            if ( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) )
            {
              if ( RemoveList == 0 )
              {
                RemoveList = CreateNewBuffer( );
              }
              if ( andDraw )
              {
                EraseObject( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72 );
              }
              MoveObjectToBuffer( RemoveList, &PCB->Data, SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72, ebp_76 );
              ptr->Type = 4;
            }
          }
        }
        else
        {
          if ( ptr->Type != 16 )
            continue;
          else
          {
            if ( SearchObjectByID( &PCB->Data, ebp_56, ebp_60, ebp_64, ptr->ID, ptr->Kind ) != 2048 )
              continue;
            else
            {
              if ( andDraw )
              {
                ebp_116 = ebp_56;
                if ( *(char*)(ebp_56 + 68) )
                {
                  ErasePolygon( ebp_60 );
                  ebp_116 = ebp_56;
                }
              }
              else
                ebp_116 = ebp_56;
              ptr->Data.ChangeName.(null) = *ebp_64;
              ptr->Kind = 8;
              ptr->Type = 8;
              ptr->Data.DX = *(int*)(ebp_64 + 4);
              ptr->Data.X = *(int*)(ebp_64 + 16);
              ptr->ID = *(int*)(ebp_60 + 16);
              if ( *(int*)(ebp_60 + 36) + -1 != -1 )
              {
                if ( ebp_64 != *(int*)(ebp_60 + 56) + ( ( *(int*)(ebp_60 + 36) + -1 ) * 20 ) )
                {
                  do
                  {
                    if ( *(int*)(ebp_60 + 36) + -1 + -1 + -1 == -1 )
                      goto B116;
                    else
                  }
                  while ( ebp_64 != *(int*)(ebp_60 + 56) + ( *(int*)(ebp_60 + 36) * 20 ) + -40 + -20 );
                }
                ptr->Data.X = *(int*)(ebp_60 + 36) + -1 + -1;
              }
B116:;
              DestroyObject( &PCB->Data, 2048, ebp_116, ebp_60, ebp_64 );
              if ( andDraw && *(char*)(ebp_56 + 68) )
              {
                DrawPolygon( ebp_56, ebp_60, 0 );
              }
              else
              {
              }
            }
          }
        }
      }
      else
      {
        if ( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) )
        {
          RotateObject( SearchObjectByID( &PCB->Data, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72, ebp_76, ptr->Data.ChangeName.(null), ptr->Data.DX, __MOD(( 4 - ptr->Data.Index/*.-3_-3of4*/ ),4) );
          ptr->Data.Index/*.-3_-3of4*/ = __MOD(( 4 - ptr->Data.Index/*.-3_-3of4*/ ),4);
        }
      }
    }
    else
    {
      switch ( ptr->Type )
      {
      case 1:
        if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) )
        {
          ptr->Data.ChangeName.(null) = ChangeObjectName( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), ebp_76, ebp_72, ebp_68, &ptr->Data.ChangeName.(null) );
        }
        break;
      case 2:
        if ( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ) )
        {
          MoveObject( SearchObjectByID( &PCB->Data, ebp_76, ebp_72, ebp_68, ptr->ID, ptr->Kind ), ebp_76, ebp_72, ebp_68, 0 - ptr->Data.ChangeName.(null), 0 - ptr->Data.DX );
          ptr->Data.ChangeName.(null) = 0 - ptr->Data.ChangeName.(null);
          ptr->Data.DX = 0 - ptr->Data.DX;
        }
        break;
      case 4:
        if ( SearchObjectByID( RemoveList, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) )
        {
          if ( andDraw )
          {
            if ( SearchObjectByID( RemoveList, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ) & 16412 )
            {
              DrawObject( SearchObjectByID( RemoveList, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), PCB->Data + ( GetLayerNumber( RemoveList, ebp_68 ) * 92 ) + 76, ebp_72, 0 );
            }
            else
              DrawObject( *(int*)(ebp_72 + 36) + -1 + -1, ebp_60, ebp_72, 0 );
          }
          MoveObjectToBuffer( &PCB->Data, RemoveList, SearchObjectByID( RemoveList, ebp_68, ebp_72, ebp_76, ptr->ID, ptr->Kind ), ebp_68, ebp_72, ebp_76 );
          ptr->Type = 64;
        }
        break;
      }
      if ( ptr ^ 0 )
      {
        __stack_chk_fail( );
      }
      return 0x20000;
    }
    break;
  }
}
int Redo( Boolean draw )
{
  int eax;
  int edx;
  UndoListTypePtr ptr;
  int Types;
  andDraw = draw;
  do
  {
    if ( RedoN == 0 )
    {
      Types = 0;
      Message( "Nothing to redo. Perhaps changes have been made since last undo\n" );
      return Types;
    }
    Types = 0;
    Locked = 1;
    ptr = &UndoList[ UndoN ];
    Serial = UndoList[ UndoN ].Serial;
    do
    {
      UndoN++;
      Types |= PerformUndo( ptr );
      RedoN += -1;
      if ( RedoN + -1 == 0 )
      {
      }
      else
      {
        ptr++;
      }
      Serial++;
      Locked = 0;
      if ( Types )
      {
        if ( andDraw )
        {
          Draw( );
          return Types;
        }
        break;
      }
      else
      {
        do
        {
        }
        while ( Types );
      }
    }
    while ( ptr->Serial != Serial );
    Serial++;
    Locked = 0;
  }
  while ( Types );
}
void RestoreUndoSerialNumber( void )
{
  Serial = SavedSerial;
  return;
}
void SaveUndoSerialNumber( void )
{
  Bumped = 0;
  SavedSerial = Serial;
  return;
}
void IncrementUndoSerialNumber( void )
{
  if ( Locked == 0 && UndoN && UndoList[ UndoN + -1 ].Serial == Serial )
  {
    Serial = UndoList[ UndoN + -1 + 0 ].Serial;
    Bumped = 1;
    SetChangedFlag( 1 );
    return;
  }
  return;
}
void ClearUndoList( Boolean Force )
{
  int eax;
  int ecx;
  UndoListTypePtr undo;
  if ( UndoN )
  {
    if ( ( Force & 255 ) == 0 )
    {
      gui->confirm_dialog( (long long)( "OK to clear 'undo' buffer?" ) );
      if ( gui == 0 )
      {
        Serial = 1;
        return;
      }
      undo = UndoList;
      if ( UndoN )
      {
        while ( 1 )
        {
          if ( undo->Type == 1 )
            SaveFree( &undo->Data.ChangeName.(null) );
          UndoN += -1;
          if ( UndoN + -1 == 0 )
            break;
          else
          {
            undo++;
          }
        }
        undo = UndoList;
      }
    }
    else
    {
      undo = UndoList;
    }
    SaveFree( (void*)undo );
    UndoList = 0;
    if ( RemoveList )
    {
      FreeDataMemory( RemoveList );
      free( RemoveList );
      RemoveList = 0;
    }
    RedoN = 0;
    UndoMax = 0;
    UndoN = 0;
  }
  Serial = 1;
  return;
}
void AddObjectToClearPolyUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3, Boolean clear )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 65536;
    undo->Data.Name = clear;
    undo->Data.DX = Ptr1;
  }
  return;
}
void AddObjectToMirrorUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType yoff )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 2048;
    undo->Data.DX = yoff;
    return;
  }
  return;
}
void AddObjectToRotateUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType CenterX, LocationType CenterY, BYTE Steps )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 32;
    undo->Data.ChangeName.(null) = CenterX;
    undo->Data.Index/*.-3_-3of4*/ = Steps;
    undo->Data.DX = CenterY;
  }
  return;
}
void MoveObjectToRemoveUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int ecx;
  int edx;
  int ebx;
  int esi;
  /* phantom */ UndoListTypePtr undo;
  if ( 1 )
  {
    if ( RemoveList == 0 )
    {
      RemoveList = CreateNewBuffer( );
    }
    GetUndoSlot( 4, Ptr3[4], Type );
    MoveObjectToBuffer( RemoveList, &PCB->Data, Type, Ptr1, Ptr2, Ptr3 );
  }
  return;
}
void AddObjectToRemovePointUndoList( int Type, void *Ptr1, void *Ptr2, Cardinal index )
{
  int edx;
  UndoListTypePtr undo;
  /* phantom */ PolygonTypePtr polygon;
  if ( Locked == 0 && Type == 2048 )
  {
    undo = 8;
    undo->Data.ChangeName.(null) = Ptr2[14];
    undo->Data.DX = Ptr2[14];
    undo->Data.X = index;
    undo->Data.X = Ptr2[14];
    return;
  }
  return;
}
void AddObjectToInsertPointUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int eax;
  int ecx;
  int edx;
  /* phantom */ UndoListTypePtr undo;
  if ( 1 )
  {
  }
  return;
}
void AddObjectToMoveUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3, LocationType DX, LocationType DY )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 2;
    undo->Data.ChangeName.(null) = DX;
    undo->Data.DX = DY;
    return;
  }
  return;
}
void AddObjectToChangeNameUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3, char *OldName )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 1;
    undo->Data.ChangeName.(null) = OldName;
    return;
  }
  return;
}
void AddObjectToMoveToLayerUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = GetUndoSlot( 128, ((int*)Ptr3), Type );
    undo->Data.ChangeName.(null) = GetLayerNumber( &PCB->Data, &Ptr1[0] );
  }
  return;
}
void AddObjectToCreateUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int esi;
  int edi;
  /* phantom */ UndoListTypePtr undo;
  if ( Locked == 0 )
    GetUndoSlot( 64, ((int*)Ptr3), Type );
  Ptr3 = Ptr2;
  Ptr2 = Ptr1;
  Ptr1 = &Type;
  Type = PCB->Data;
}
void AddObjectToFlagUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 256;
    undo->Data.ChangeName.(null) = Ptr2[5];
    undo->Data.DX = Ptr2[6];
    undo->Data.X = Ptr2[7];
  }
  return;
}
void AddObjectToSizeUndoList( int Type, void *ptr1, void *ptr2, void *ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    GetUndoSlot( 512, ptr2[4], Type );
    switch ( Type )
    {
    case 32768:
      break;
    case 256:
      break;
    case 1024:
      break;
    case 1:
      break;
    case 4:
    case 16:
    case 512:
    case 8192:
    case 16384:
      break;
    default:
      return;
      break;
    }
    undo->Data.ChangeName.(null) = ptr2[9];
    return;
  }
  else
  {
    return;
  }
}
void AddObjectToClearSizeUndoList( int Type, void *ptr1, void *ptr2, void *ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    GetUndoSlot( 4096, ptr2[4], Type );
    switch ( Type )
    {
    case 16384:
      break;
    case 4:
      break;
    case 1:
    case 256:
    case 512:
      break;
    default:
      return;
      break;
    }
    undo->Data.ChangeName.(null) = ptr2[10];
    return;
  }
  else
  {
    return;
  }
}
void AddObjectToMaskSizeUndoList( int Type, void *ptr1, void *ptr2, void *ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    GetUndoSlot( 8192, ptr2[4], Type );
    switch ( Type )
    {
    case 1:
    case 256:
      undo->Data.ChangeName.(null) = ptr2[11];
      return;
      break;
    case 512:
      break;
    default:
      return;
      break;
    }
    undo->Data.ChangeName.(null) = ptr2[21];
    return;
  }
  else
  {
    return;
  }
}
void AddObjectTo2ndSizeUndoList( int Type, void *ptr1, void *ptr2, void *ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    GetUndoSlot( 1024, ptr2[4], Type );
    if ( Type == 1 || Type == 256 )
    {
      undo->Data.ChangeName.(null) = ptr2[12];
      return;
    }
  }
  return;
}
void AddObjectToChangeAnglesUndoList( int Type, void *Ptr1, void *Ptr2, void *Ptr3 )
{
  int ecx;
  int edx;
  UndoListTypePtr undo;
  /* phantom */ ArcTypePtr a;
  if ( Locked == 0 )
  {
    undo = 16384;
    undo->Data.ChangeName.(null) = Ptr3[15];
    undo->Data.DX = Ptr3[16];
  }
  return;
}
void AddLayerChangeToUndoList( int old_index, int new_index )
{
  UndoListTypePtr undo;
  if ( Locked == 0 )
  {
    undo = 32768;
    undo->Data.ChangeName.(null) = old_index;
    undo->Data.DX = new_index;
    return;
  }
  return;
}
void AddNetlistLibToUndoList( LibraryTypePtr lib )
{
  int eax;
  int ecx;
  int edx;
  UndoListTypePtr undo;
  unsigned int i, j;
  /* phantom */ LibraryTypePtr old;
  if ( Locked == 0 )
  {
    undo = GetUndoSlot( 0x20000, 0, 0 );
    *(int*)GetUndoSlot( 0x20000, 0, 0 )/*.20*/ = lib->(null);
    undo->Data.ChangeName.(null) = calloc( 1, 4 );
    *(int*)(calloc( 1, 4 )) = lib->MenuN;
    *(int*)calloc( 1, 4 )/*.4*/ = lib->MenuMax;
    *(int*)calloc( 1, 4 )/*.8*/ = calloc( 1, lib->MenuMax * 28 );
    if ( calloc( 1, 4 ) + 8 )
    {
      if ( lib->MenuN == 0 )
      {
        return;
      }
      i = 0;
      while ( *(int*)(lib->Menu + 0) == 0 )
      {
        if ( lib->Menu->directory )
        {
          __strdup( *(int*)(0 + 28 + lib->Menu + 4) );
        }
        *(int*)(esi + ebx + 4) = __strdup( *(int*)(0 + 28 + lib->Menu + 4) );
        if ( lib->Menu->Style )
          __strdup( *(int*)(0 + 28 + lib->Menu + 8) );
        *(int*)(esi + edi + 8) = __strdup( *(int*)(0 + 28 + lib->Menu + 8) );
        *(int*)(ebx + 20) = eax;
        if ( *(int*)(esi + *(int*)(ebp_32 + 8) + 20) == 0 )
        {
          __fprintf_chk( stderr, 1, "malloc() failed in %s\n", __FUNCTION__ );
          exit( 1 );
        }
        j = 0;
        if ( lib->Menu->EntryN )
        {
          while ( *(int*)(0 + *(int*)(lib->Menu + 0 + 20)) == 0 )
          {
            if ( lib->Menu->Entry->AllocatedMemory == 0 )
              goto B26;
            else
            {
              __strdup( *(int*)(0 + 24 + *(int*)(lib->Menu + 0 + 28 + 20) + 4) );
            }
B26:;
            *(int*)(ebp_28 + ebx + 4) = __strdup( *(int*)(0 + 24 + *(int*)(lib->Menu + 0 + 28 + 20) + 4) );
            if ( lib->Menu->Entry->Template == 0 )
              goto B29;
            else
            {
              __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 8) );
            }
B29:;
            *(int*)(ebp_28 + ebx + 8) = __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 8) );
            if ( lib->Menu->Entry->Package == 0 )
              goto B32;
            else
            {
              __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 12) );
            }
B32:;
            *(int*)(ebp_28 + ebx + 12) = __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 12) );
            if ( lib->Menu->Entry->Value == 0 )
              goto B35;
            else
            {
              __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 16) );
            }
B35:;
            *(int*)(ebp_28 + ebx + 16) = __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 16) );
            if ( lib->Menu->Entry->Description )
              __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 20) );
            *(int*)(edi + ebx + 20) = __strdup( *(int*)(0 + 24 + *(int*)(0 + 28 + lib->Menu + 20) + 20) );
            j++;
            if ( lib->Menu->EntryN <= j )
              goto B22;
            else
            {
            }
          }
          __strdup( *(int*)(0 + 24 + *(int*)(lib->Menu + 0 + 20)) );
        }
B22:;
        i++;
        if ( lib->MenuN <= i )
          break;
      }
      __strdup( &lib->Menu[1].Name );
    }
    __fprintf_chk( stderr, 1, "malloc() failed in %s\n", __FUNCTION__ );
    exit( 1 );
  }
  return;
}
void LockUndo( void )
{
  Locked = 1;
  return;
}
void UnlockUndo( void )
{
  Locked = 0;
  return;
}
Boolean Undoing( void )
{
  return Locked;
}
#if 0
#endif
