#include "rats.c.h"
static Boolean badnet;
static Cardinal SLayer;
static Cardinal CLayer;
Boolean SeekPad( LibraryEntryType *entry, ConnectionType *conn, Boolean Same )
{
  int eax;
  int ecx;
  int edx;
  int j;
  char ElementName[256];
  char PinNum[256];
  if ( entry->ListEntry != '-' && ( entry->ListEntry & 255 ) )
  {
    do
    {
      *(char*)(ElementName[0] + 0) = entry->ListEntry;
      if ( entry->ListEntry[2] == '-' )
      {
        if ( 0 + 1 == 0 )
          goto B9;
        else
        if ( '`' < ElementName[ 0 + 1 + 1 ] )
        {
          do
          {
            if ( 0 + 1 + -1 == 1 )
            {
            }
            else
            {
            }
          }
          while ( '`' < *(char*)(ElementName[0] + 0 + -2) );
          ecx += edx;
          if ( entry->ListEntry[2] )
          {
            do
            {
              *(char*)(PinNum[0] + 0) = ebx;
            }
            while ( *(char*)(ecx + eax + 2) );
          }
          if ( PinNum[0] )
          {
            j = 0;
            while ( j = j + 1, *(char*)(PinNum[0] + j + 1) )
            {
              j++;
            }
            if ( SearchElementByName( &PCB->Data, ElementName ) )
            {
              if ( *(int*)SearchElementByName( &PCB->Data, ElementName )/*.232*/ )
              {
                do
                {
                  if ( *(int*)(*(int*)SearchElementByName( &PCB->Data, ElementName )/*.260*/ + 92) != ( "huge", 0 ) && SearchElementByName( &PCB->Data, ElementName ) == 0 && ( Same == 0 || ( ( *(char*)(*(int*)SearchElementByName( &PCB->Data, ElementName )/*.260*/ + 0 + 21) & 16 ) & 255 ) == 0 ) )
                  {
                    conn->type = 512;
                    j = ebp_576;
                    conn->ptr2 = edi + *(int*)(ebp_568 + 260);
                    conn->group = (unsigned char)( ( ( *(char*)(edi + *(int*)(ebp_568 + 260) + 20) >> 7 ) & 1 ) ^ 1 ) ? SLayer : CLayer;
                    if ( ( *(char*)(edi + *(int*)(ebp_568 + 260) + 21) & 64 ) & 255 )
                      conn->X = *(int*)(eax + 64);
                    else
                      conn->X = *(int*)(ebp_556 + 44);
                    conn->Y = eax;
                  }
                  else
                  {
                  }
                  if ( j + 1 == *(int*)SearchElementByName( &PCB->Data, ElementName )/*.232*/ )
                    goto B30;
                  else
                    conn->ptr1 = SearchElementByName( &PCB->Data, ElementName );
                    if ( 0 ^ 0 )
                    {
                      __stack_chk_fail( );
                    }
                    break;
                }
                while ( *(int*)SearchElementByName( &PCB->Data, ElementName )/*.232*/ <= j + 1 + 1 );
                j = ebp_576;
              }
B30:;
              if ( *(int*)(ebp_568 + 224) )
              {
                do
                {
                  if ( !( *(int*)(edx + edi + 20) & 8 ) && *(int*)(edx + edi + 64) && eax == 0 && ( Same == 0 || ( PinNum[0] & 4096 ) == 0 ) )
                  {
                    j = j;
                    conn->type = 256;
                    conn->ptr2 = edi + *(int*)(ebp_568 + 256);
                    conn->group = SLayer;
                    conn->X = *(int*)(edi + *(int*)(ebp_568 + 256) + 52);
                    conn->Y = *(int*)(edi + *(int*)(ebp_568 + 256) + 56);
                  }
                  else
                  if ( ebp_588 != ebp_556 )
                    conn->ptr1 = SearchElementByName( &PCB->Data, ElementName );
                }
                while ( ebp_556 <= ebx + 1 );
                j = j;
              }
            }
            if ( Same == 0 )
            {
              if ( PinNum[ j ] + -48 < 9 )
              {
                Message( "WARNING! Pin number ending with '%c' encountered in netlist file\nProbably a bad netlist file format\n", PinNum[ j ] );
              }
            }
          }
          else
          {
            Message( "Error! Netlist file is missing pin!\nwhite space after \"%s-\"\n", ElementName[0] );
            badnet = 1;
          }
          Message( "Can't find %s pin %s called for in netlist.\n", ElementName[0], PinNum[0] );
        }
B9:;
      }
      else
    }
    while ( entry->ListEntry & 255 );
  }
  else
  {
  }
  if ( ecx == '-' )
  {
  }
  else
  {
    ElementName[ 0 ] = 0;
    Message( "Bad net-list format encountered near: \"%s\"\n", ElementName[0] );
  }
}
NetListTypePtr ProcNetlist( LibraryTypePtr net_menu )
{
  int eax;
  int ecx;
  int edx;
  int ebp_76;
  int ebp_68;
  int ebp_64;
#error unstructured control flow
}
void TransferNet( NetListTypePtr Netl, NetTypePtr SourceNet, NetTypePtr DestNet )
{
  ConnectionTypePtr conn;
{
  Cardinal n = SourceNet->ConnectionN + -1;
  ConnectionTypePtr connection;
  if ( SourceNet->ConnectionN + -1 != -1 )
  {
    do
    {
      conn = &connection->X;
      conn->Y = connection->Y;
      conn->type = connection->type;
      conn->ptr1 = connection->ptr1;
      conn->ptr2 = connection->ptr2;
      conn->group = connection->group;
      conn->menu = connection->menu;
    }
    while ( n != -1 );
    SourceNet = SourceNet;
  }
  DestNet->Style = SourceNet->Style;
  FreeNetMemory( SourceNet );
  Netl->NetN += -1;
  SourceNet = &Netl->Net->ConnectionN;
  SourceNet->ConnectionMax = Netl->Net->ConnectionN;
  SourceNet->Connection = Netl->Net->ConnectionN;
  SourceNet->Style = Netl->Net->ConnectionN;
  mymemset( Netl->Net + ( Netl->NetN << 4 ), 0, 16 );
  return;
}
}
Boolean GatherSubnets( NetListTypePtr Netl, Boolean NoWarn, Boolean AndRats )
{
  int eax;
  int ecx;
  int ch;
  int edx;
  int ebp_52;
  int ebp_44;
  NetTypePtr a;
  NetTypePtr b;
  ConnectionTypePtr conn;
  Cardinal m = 0;
  Cardinal n;
  Boolean Warned = 0;
  if ( Netl->NetN )
  {
    do
    {
      if ( m < Netl->NetN )
      {
        m = m + 1;
        ResetFoundPinsViasAndPads( 0 );
        ResetFoundLinesAndPolygons( 0 );
        RatFindHook( Netl->Net->Connection->type, &Netl->Net->Connection->ptr1, &Netl->Net->Connection->ptr2, &Netl->Net->Connection->ptr2, 0, AndRats );
        Netl->Net[1].Connection->ptr2[5] &= -4097;
        if ( m + 1 < Netl->NetN )
        {
          a = Netl->Net + ( ( m + 1 ) << 4 );
          Netl = Netl;
          do
          {
            b = Netl->Net + ( n << 4 );
            b->Connection->ptr2[5] = Netl->Net->Connection->ptr2[5];
            if ( ( ch & 16 ) & 255 )
            {
              n += -1;
              b->Connection->ptr2[5] = b->Connection->ptr2[5];
              TransferNet( Netl, b, a );
              n++;
            }
            else
            {
              n++;
              if ( n + 1 < Netl->NetN )
                continue;
              else
                break;
            }
          }
          while ( n + 1 < Netl->NetN );
        }
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
              layer = ebx + 76;
              if ( esi != -2 )
              {
                l = 0;
              {
                while ( n = layer->PolygonN + -1, layer->PolygonN + -1 == -1 )
                {
                  l++;
                  if ( PCB->Data->LayerN + 2 <= l )
                    goto B15;
                  else
                  {
                    layer++;
                  }
                }
                do
                {
                  polygon = layer->Polygon + ( layer->PolygonN * 60 ) + -60 + -60;
                  if ( ( ( polygon->Flags.f/*.2_2of4*/ & 16 ) & 255 ) == 0 )
                  {
                    n += -1;
                    if ( n + -1 != -1 )
                      continue;
                    else
                      break;
                  }
                  else
                  {
                    n += -1;
                    conn = &eax[0][0];
                    *(int*)(eax + 12) = (void**)&layer->Name;
                    *(int*)(eax + 8) = 8;
                    *(int*)(eax + 16) = &polygon->BoundingBox.X1;
                    eax[0] = &polygon->Clipped->contours->head.point;
                    *(int*)(eax + 4) = polygon->Clipped->contours->head.point[1];
                    *(int*)(ebp_76 + 24) = 0;
                    *(int*)(ebp_76 + 20) = GetLayerGroupNumberByPointer( layer );
                  }
                }
                while ( n != -1 );
                l++;
              }
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
            if ( ( ( line->Flags.f/*.2_2of4*/ & 16 ) & 255 ) && ( line->Point2.X == line->Point1.X || line->Point2.Y == line->Point1.Y ) )
            {
              n += -1;
              conn = GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) );
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.12*/ = layer->Name[0];
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.8*/ = 4;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.16*/ = line->BoundingBox.BoxType;
              *(int*)(GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )) = line->Point1.X;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.4*/ = line->Point1.Y;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.24*/ = 0;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.20*/ = GetLayerGroupNumberByPointer( layer );
              *ebp_136 = Netl->Net + ( ( m + 1 ) << 4 );
              conn = GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) );
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.12*/ = layer->Name[0];
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.8*/ = 4;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.16*/ = line->BoundingBox.BoxType;
              *(int*)(GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )) = line->Point2.X;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.4*/ = line->Point2.Y;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.24*/ = 0;
              *(int*)GetConnectionMemory( Netl->Net + ( ( m + 1 ) << 4 ) )/*.20*/ = GetLayerGroupNumberByPointer( layer );
              if ( n != -1 )
                continue;
            }
            else
            {
              n += -1;
            }
          }
          while ( n + -1 != -1 );
          l++;
        }
        }
      {
B15:;
        Cardinal n;
        Cardinal sn = PCB->Data->ViaN;
        PinTypePtr via;
        if ( PCB->Data->ViaN )
        {
          n = 0;
          while ( 1 )
          {
            via = PCB->Data->Via + ( n * 76 );
            if ( ( ( via->Flags.f/*.2_2of4*/ & 16 ) & 255 ) == 0 )
            {
              sn = PCB->Data->ViaN;
              if ( PCB->Data->ViaN )
                goto B35;
            }
            else
            {
              conn = &via->X;
              conn->type = 1;
              conn->ptr1 = via;
              conn->ptr2 = via;
              conn->Y = via->Y;
              *(int*)(eax + 20) = SLayer;
              sn = PCB->Data->ViaN;
              if ( PCB->Data->ViaN )
                goto B35;
            }
B35:;
            n = ( sn + n + 1 ) - sn;
            if ( sn <= ( sn + n + 1 ) - a->ConnectionN )
              goto B30;
            else
            {
            }
          }
        }
      {
B30:;
        Cardinal l;
        LayerTypePtr layer;
        if ( NoWarn == 0 )
        {
          *(int*)(GetPointerMemory( MyCalloc( 1, 12, "CheckShorts" ) )) = ebp_48;
          ebp_44 = PCB->Data->ElementN + -1;
          if ( PCB->Data->ElementN + -1 != -1 )
          {
            ebp_52 = ( PCB->Data->ElementN * 300 ) + -300;
            while ( *(int*)(ebp_52 + *(int*)(PCB->Data + 32) + 224) == 0 )
            {
              ebp_44 += -1;
              ebp_52 += -300;
              if ( ebp_44 == -1 )
              {
                ebp_44 = *(int*)(ecx + 8) + -1;
                if ( *(int*)(ecx + 8) + -1 != -1 )
                {
                  ebp_52 = ( eax * 300 ) + -300;
                  while ( *(int*)(ebp_52 + *(int*)(ecx + 32) + 232) == 0 )
                  {
                    ebp_44 += -1;
                    ebp_52 += -300;
                    if ( ebp_44 == -1 )
                      goto B57;
                    else
                    {
                    }
                  }
                  do
                  {
                    if ( ebp_28 < edi )
                    {
                      if ( ( ( *(char*)(*(int*)(ebp_36 + 260) + ( ebp_28 * 104 )) & 16 ) & 255 ) == 0 )
                        continue;
                      else
                      if ( *(int*)(ebx + 100) == 0 )
                      {
                        Message( "Warning! Net \"%s\" is shorted  to %s pad %s\n", *ebp_48 + 2, eax, edx );
                        *(int*)(ebx + 20) |= 512;
                      }
                      else
                      {
                        if ( *(int*)(MyCalloc( 1, 12, "CheckShorts" )) + -1 != -1 )
                        {
                          if ( esi != *(int*)(*(int*)(ebp_32 + 8) + ( eax << 2 )) )
                          {
                            do
                            {
                              if ( *(int*)(MyCalloc( 1, 12, "CheckShorts" )) + -1 + -1 + -1 == -1 )
                                goto B96;
                              else
                            }
                            while ( esi != edx );
                          }
                        }
B96:;
                        *(int*)(GetPointerMemory( MyCalloc( 1, 12, "CheckShorts" ) )) = *(int*)(ebx + 100);
                        Message( "Warning! Net \"%s\" is shorted to net \"%s\"\n", *ebp_48 + 2, *(int*)(*(int*)(ebx + 100)) + 2 );
                        *(int*)(ebx + 20) |= 512;
                      }
                    }
                  }
                  while ( edi );
                }
              }
              else
              {
              }
            }
            while ( 1 )
            {
              if ( ( ( *(char*)(*(int*)(ebp_52 + *(int*)(*(int*)GetPointerMemory( MyCalloc( 1, 12, "CheckShorts" ) )/*.8716*/ + 32) + 256) + ( 0 * 76 )) & 16 ) & 255 ) == 0 )
                goto B61;
              else
              {
                if ( *(int*)(esi + 72) == 0 )
                {
                  Message( "Warning! Net \"%s\" is shorted to %s pin %s\n", *ebp_48 + 2, eax, edx );
                }
                else
                {
                  if ( *(int*)(MyCalloc( 1, 12, "CheckShorts" )) + -1 != -1 )
                  {
                    if ( edi != *(int*)(*(int*)(ebp_32 + 8) + ( eax << 2 )) )
                    {
                      do
                      {
                        if ( *(int*)(MyCalloc( 1, 12, "CheckShorts" )) + -1 + -1 + -1 == -1 )
                          goto B65;
                        else
                      }
                      while ( edx != edi );
                    }
                    if ( ebp_28 )
                    {
                      if ( ebp_28 <= ( ebp_28 + ebx + 1 ) - ebp_36 )
                      {
                        ebp_44 += -1;
                        ebp_52 += -300;
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                  }
B65:;
                  *(int*)(GetPointerMemory( MyCalloc( 1, 12, "CheckShorts" ) )) = *(int*)(esi + 72);
                  Message( "Warning! net \"%s\" is shorted to net \"%s\"\n", *ebp_48 + 2, *(int*)(*(int*)(esi + 72)) + 2 );
                }
                *(int*)(esi + 20) |= 512;
              }
B61:;
              if ( ebp_28 )
              {
              }
            }
          }
B57:;
          FreePointerListMemory( MyCalloc( 1, 12, "CheckShorts" ) );
          SaveFree( *ebp_136 );
          Warned |= 1;
        }
        m = ebp_60;
      }
      }
      }
      }
      else
        break;
    }
    while ( Netl->NetN );
  }
  ResetFoundPinsViasAndPads( 0 );
  ResetFoundLinesAndPolygons( 0 );
  return Warned;
}
Boolean AddAllRats( Boolean SelectedOnly, void (*funcp)( void ) )
{
  int eax;
  int ecx;
  int edx;
  double fp6;
  double fp7;
  int ebp_88;
  int ebp_80;
  int ebp_72;
  int ebp_68;
#error unstructured control flow
}
NetListListType CollectSubnets( Boolean SelectedOnly )
{
  int eax;
  int edx;
  int ebp_52;
  NetListListType result;
  NetListTypePtr Nets;
  NetListTypePtr Wantlist;
  NetTypePtr lonesome;
  ConnectionTypePtr onepin;
  result.NetListN = 0;
  result.NetListMax = 0;
  result.NetList = 0;
  Wantlist = ProcNetlist( &PCB->NetlistLib );
  if ( Wantlist == 0 )
  {
    Message( "Can't add rat lines because no netlist is loaded.\n" );
  }
  else
  {
    InitConnectionLookup( );
    SaveFindFlag( 4096 );
  {
    Cardinal n = Wantlist->NetN + -1;
    NetTypePtr net;
    if ( Wantlist->NetN + -1 != -1 )
    {
      ebp_52 = ( Wantlist->NetN + 0xfffffff ) << 4;
      do
      {
        Cardinal n;
        ConnectionTypePtr connection;
        net = &Wantlist->Net[ ebp_52 >> 4 ];
        Nets = GetNetListMemory( &result );
        n = Wantlist->Net[ ebp_52 >> 4 ].ConnectionN + -1;
        if ( Wantlist->Net[ ebp_52 >> 4 ].ConnectionN + -1 != -1 )
        {
          do
          {
            connection = net->Connection + ( Wantlist->Net[ ebp_52 >> 4 ].ConnectionN * 28 ) + -28 + -28;
            if ( SelectedOnly && ( ( connection->ptr2[5] & 64 ) & 255 ) == 0 )
              goto B16;
            else
            {
              lonesome = GetNetMemory( Nets );
              onepin = &connection->X;
              onepin->Y = connection->Y;
              onepin->type = connection->type;
              onepin->ptr1 = connection->ptr1;
              onepin->ptr2 = connection->ptr2;
              onepin->group = connection->group;
              *(int*)GetConnectionMemory( lonesome )/*.24*/ = connection->menu;
              lonesome->Style = net->Style;
            }
B16:;
            n += -1;
          }
          while ( n + -1 != -1 );
        }
        GatherSubnets( Nets, SelectedOnly, 0 );
        n += -1;
        ebp_52 += -16;
      }
      while ( n != -1 );
    }
    FreeConnectionLookupMemory( );
    RestoreFindFlag( );
  }
  }
  result.NetListN = result.NetListN;
  return;
}
RatTypePtr AddNet( void )
{
  int eax;
  int ecx;
  int edx;
  static int ratDrawn;
  char name1[256], *name2;
  Cardinal group1;
  Cardinal group2;
  char ratname[20];
  int found;
  void *ptr1, *ptr2, *ptr3;
  LibraryMenuTypePtr menu;
  LibraryEntryTypePtr entry;
  if ( Crosshair.AttachedLine.Point2.X != Crosshair.AttachedLine.Point1.X )
  {
  }
  else
  if ( Crosshair.AttachedLine.Point2.Y == Crosshair.AttachedLine.Point1.Y )
  {
    if ( 0 ^ 0 )
    {
      __stack_chk_fail( );
    }
    return &eax;
  }
  if ( SearchObjectByLocation( 768, &ptr1, &ptr2, &ptr3, Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, 5 ) )
  {
    if ( ((int*)ptr1) == 0 || *(char*)(((int*)ptr1)) == 0 )
    {
      Message( "You must name the starting element first\n" );
    }
    else
    {
      if ( ((int*)ptr2) < 0 )
      {
        group1 = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
      }
      else
      {
        group1 = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
      }
      __strcpy_chk( name1, ConnectionName( name1[0], ptr1, ptr2 ), 256 );
      if ( SearchObjectByLocation( 768, &ptr1, &ptr2, &ptr3, Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, 5 ) == 0 )
        goto B7;
      else
      {
        if ( ((int*)ptr1) == 0 || *(char*)(((int*)ptr1)) == 0 )
        {
          Message( "You must name the ending element first\n" );
        }
        else
        {
          if ( ((int*)ptr2) < 0 )
          {
            group2 = GetLayerGroupNumberByNumber( PCB->Data->LayerN );
          }
          else
          {
            group2 = GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 );
          }
          name2 = ConnectionName( found, ptr1, ptr2 );
          if ( netnode_to_netname( name1 ) )
          {
            if ( netnode_to_netname( name2 ) )
            {
              Message( "Both connections already in netlist - cannot merge nets\n" );
            }
            else
            {
              entry = GetLibraryEntryMemory( menu );
              entry = (struct {
                 char *ListEntry;
                 char *AllocatedMemory;
                 char *Template;
                 char *Package;
                 char *Value;
                 char *Description;
              }*)MyStrdup( name2, "AddNet" );
              netnode_to_netname( name2 );
            }
          }
          else
          {
            if ( netnode_to_netname( name2 ) )
            {
              entry = GetLibraryEntryMemory( menu );
              entry = (struct {
                 char *ListEntry;
                 char *AllocatedMemory;
                 char *Template;
                 char *Package;
                 char *Value;
                 char *Description;
              }*)MyStrdup( name1, "AddNet" );
              netnode_to_netname( name1 );
            }
            else
            {
              ratDrawn++;
              __sprintf_chk( ratname, 1, 20, "  ratDrawn%i", ratDrawn + 1 );
              while ( PCB->NetlistLib.MenuN + -1 != -1 )
              {
                do
                {
                  if ( PCB->NetlistLib.Menu->Name[0] && PCB == 0 )
                  {
                    ratDrawn++;
                    __sprintf_chk( ratname, 1, 20, "  ratDrawn%i", ratDrawn + 1 );
                    break;
                    while ( PCB->NetlistLib.MenuN + -1 != -1 )
                    {
                      do
                      {
                      }
                      while ( PCB->NetlistLib.MenuN + -1 + -1 + -1 != -1 );
                      break;
                    }
                    break;
                  }
                  else
                }
                while ( PCB->NetlistLib.MenuN + -1 + -1 + -1 != -1 );
                break;
              }
              menu = GetLibraryMenuMemory( PCB + 8692 );
              menu = (struct {
                 char *Name;
                 char *directory;
                 char *Style;
                 Cardinal EntryN;
                 Cardinal EntryMax;
                 LibraryEntryTypePtr Entry;
                 char flag;
                 char internal;
                 char __pad[2];
              }*)MyStrdup( ratname, "AddNet" );
              entry = GetLibraryEntryMemory( menu );
              entry = (struct {
                 char *ListEntry;
                 char *AllocatedMemory;
                 char *Template;
                 char *Package;
                 char *Value;
                 char *Description;
              }*)MyStrdup( name1, "AddNet" );
              entry = GetLibraryEntryMemory( menu );
              entry = (struct {
                 char *ListEntry;
                 char *AllocatedMemory;
                 char *Template;
                 char *Package;
                 char *Value;
                 char *Description;
              }*)MyStrdup( name2, "AddNet" );
              menu->flag = 1;
            }
          }
          hid_action( "NetlistChanged" );
          CreateNewRat( &PCB->Data, Crosshair.AttachedLine.Point1.X, Crosshair.AttachedLine.Point1.Y, Crosshair.AttachedLine.Point2.X, Crosshair.AttachedLine.Point2.Y, group1, group2, Settings.RatThickness, "badarg" );
        }
      }
    }
  }
B7:;
  Message( "No pad/pin under rat line\n" );
}
char *ConnectionName( int type, void *ptr1, void *ptr2 )
{
  int ecx;
  static char name[256];
  char *num;
  if ( type == 256 )
    num[0] = ptr2[16];
  else
  if ( type == 512 )
    num[0] = ptr2[23];
  else
  {
    return 0;
  }
  __strcpy_chk( name, "(unknown)", 256 );
  __strcat_chk( name, "-", 256 );
  __strcat_chk( name, &num[0], 256 );
  return name;
}
#if 0
#endif
