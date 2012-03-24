#include "strflags.c.h"
static FlagBitsType object_flagbits[23] = { { 1, "pin", 3, -1 }
, { 2, "via", 3, -1 }
, { 4, "found", 5, -1 }
, { 8, "hole", 4, 257 }
, { 16, "rat", 3, 32 }
, { 16, "pininpoly", 9, 769 }
, { 16, "clearpoly", 9, 8 }
, { 16, "hidename", 8, 2 }
, { 32, "showname", 8, 2 }
, { 32, "clearline", 9, 16404 }
, { 64, "selected", 8, -1 }
, { 128, "onsolder", 8, 514 }
, { 128, "auto", 4, -1 }
, { 256, "square", 6, 769 }
, { 512, "rubberend", 9, 16388 }
, { 512, "warn", 4, 769 }
, { 1024, "usetherm", 8, 16645 }
, { 2048, "octagon", 7, 769 }
, { 4096, "drc", 3, -1 }
, { 8192, "lock", 4, -1 }
, { 16384, "edge2", 5, -1 }
, { 32, "fullpoly", 8, 8 }
, { 8, "nopaste", 7, 512 }
 };
static FlagBitsType pcb_flagbits[22] = { { 1, "shownumber", 10, 1 }
, { 2, "localref", 8, 1 }
, { 4, "checkplanes", 11, 1 }
, { 8, "showdrc", 7, 1 }
, { 16, "rubberband", 10, 1 }
, { 32, "description", 11, 1 }
, { 64, "nameonpcb", 9, 1 }
, { 128, "autodrc", 7, 1 }
, { 256, "alldirection", 12, 1 }
, { 512, "swapstartdir", 12, 1 }
, { 1024, "uniquename", 10, 1 }
, { 2048, "clearnew", 8, 1 }
, { 1048576, "newfullpoly", 11, 1 }
, { 4096, "snappin", 7, 1 }
, { 8192, "showmask", 8, 1 }
, { 16384, "thindraw", 8, 1 }
, { 32768, "orthomove", 9, 1 }
, { 65536, "liveroute", 9, 1 }
, { 131072, "thindrawpoly", 12, 1 }
, { 262144, "locknames", 9, 1 }
, { 524288, "onlynames", 9, 1 }
, { 2097152, "hidenames", 9, 1 }
 };
static struct {
   char *ptr;
   int len;
} buffers[10];
static int bufptr;
static char *layers;
static int max_layers;
static int num_layers;
static FlagType empty_flags;
char *alloc_buf( int len )
{
  len = len + 1;
  bufptr = __MOD(( bufptr + 1 ),10);
  if ( buffers[ __MOD(( bufptr + 1 ),10) ].len < len + 1 )
  {
    if ( buffers[ __MOD(( bufptr + 1 ),10) ].ptr )
    {
      buffers[ __MOD(( bufptr + 1 ),10) ].ptr = (char*)realloc( buffers[ __MOD(( bufptr + 1 ),10) ].ptr, len );
    }
    else
    {
      buffers[ __MOD(( bufptr + 1 ),10) ].ptr = (char*)malloc( len );
    }
    buffers[ bufptr ].len = len;
  }
  return buffers[ bufptr ].ptr;
}
void grow_layer_list( int num )
{
  if ( layers == 0 )
  {
    max_layers = num;
    layers = calloc( (unsigned char)( num > 0 ) ? 1 : num, sizeof( char ) );
  }
  else
  if ( max_layers < num )
  {
    max_layers = num;
    layers = realloc( layers, ( num ) * sizeof( char ) );
  }
  if ( num_layers < num )
  {
    mymemset( &layers[0], 0, num + ~num_layers );
  }
  num_layers = num;
  return;
}
int error_ignore( char *msg )
{
  return 0;
}
FlagType common_string_to_flags( char *flagstring, int (*error)( char * ), FlagBitsType *flagbits, int n_flagbits )
{
  int eax;
  int ecx;
  int edx;
  int ebp_52;
  int ebp_48;
#error unstructured control flow
}
FlagType string_to_flags( char *flagstring, int (*error)( char * ) )
{
  int eax;
  int ecx;
  int edx;
  return common_string_to_flags( flagstring, error, ebp_4, ebp_4 );
  return;
}
FlagType string_to_pcbflags( char *flagstring, int (*error)( char * ) )
{
  int eax;
  int ecx;
  int edx;
  return common_string_to_flags( flagstring, error, ebp_4, ebp_4 );
  return;
}
char *common_flags_to_string( FlagType flags, int object_type, FlagBitsType *flagbits, int n_flagbits )
{
  int eax;
  int edx;
  int len;
  int i;
  FlagHolder fh;
  /* phantom */ FlagHolder savef;
  char *buf, *bp;
  flags.f = eax;
  flags.t[0] = edx;
  flags.t[4] = ecx;
  fh.Flags.t[7] = ecx >> 24;
  fh.Flags.t[6] = ecx >> 16;
  fh.Flags.t[4] = flags.t[4];
  fh.Flags.t[5] = (LOchar)( (unsigned short)( ecx >> 8 ) );
  fh.Flags.t[3] = edx >> 24;
  fh.Flags.t[2] = edx >> 16;
  fh.Flags.t[1] = (LOchar)( (unsigned short)( edx >> 8 ) );
  fh.Flags.t[0] = edx;
  fh.Flags.f = eax;
  switch ( object_type )
  {
  case 1:
    fh.Flags.f = fh.Flags.f;
    len = 3;
    if ( n_flagbits > 0 )
    {
      i = 0;
      do
      {
        i++;
        flagbits++;
      }
      while ( n_flagbits != i + 1 );
      fh.Flags.f &= ~flagbits->mask;
      fh.Flags.f &= ~flagbits->mask;
    }
    if ( mem_any_set( &fh.Flags.t[0], 8 ) )
    {
      len += 10;
      i = 0;
      do
      {
        if ( fh.Flags.t[ i >> 1 ] & ( 15 << ( ( i & 1 ) << 2 ) ) )
        {
          if ( i > 9 )
          {
            if ( ( ( i >> ( flagbits->mask & 31 ) ) & 15 ) == 0 )
              goto B23;
            else
              len = len + 2 + 1;
          }
          else
          if ( ( ( fh.Flags.t[ i >> 1 ] >> ( ( ( i & 1 ) << 2 ) & 31 ) ) & 15 ) == 0 )
            continue;
B23:;
        }
        i++;
      }
      while ( i + 1 != 16 );
    }
    buf = alloc_buf( len + 2 );
    *(char*)(alloc_buf( len + 2 )) = '"';
    fh.Flags.t[6] = ebp_168;
    fh.Flags.t[7] = ebp_152;
    fh.Flags.t[5] = fh.Flags.t[5];
    fh.Flags.t[3] = fh.Flags.t[3];
    fh.Flags.t[4] = fh.Flags.t[4];
    fh.Flags.t[2] = fh.Flags.t[2];
    fh.Flags.t[0] = fh.Flags.t[0];
    bp[0] = buf + 1;
    fh.Flags.t[1] = fh.Flags.t[1];
    fh.Flags.f = ebp_64;
    if ( n_flagbits > 0 )
    {
      i = 0;
      bp[0] = bp;
      bp[0] = bp;
      do
      {
        if ( ( flagbits->object_types & bp[0] ) && ( flagbits->mask & fh.Flags.f ) )
        {
          if ( buf != bp )
          {
            bp[0] = ',';
            bp[0] = bp + 1;
          }
          strcpy( bp, &flagbits->name );
          bp[0] = bp + flagbits->nlen;
          fh.Flags.f &= ~flagbits->mask;
        }
        i++;
      }
      while ( i + 1 < n_flagbits );
      bp[0] = bp;
    }
    if ( mem_any_set( &fh.Flags.t[0], 8 ) )
    {
      if ( buf != bp )
      {
        bp[0] = ',';
        bp[0] = bp + 1;
      }
      *(int*)&bp[0] = 0x72656874;
      *(int*)&bp[4] = 0x6c616d;
      bp[7] = bp + 7;
      grow_layer_list( 0 );
      do
      {
        if ( fh.Flags.t[ ( 0 + 1 ) >> 1 ] & ( 15 << ( ( ( 0 + 1 ) & 1 ) << 2 ) ) )
        {
          if ( num_layers <= 0 + 1 )
          {
            grow_layer_list( 1 + 1 );
          }
          layers[1] = ( fh.Flags.t[ ( 0 + 1 ) >> 1 ] >> ( n_flagbits & 31 ) ) & 15;
        }
        else
        if ( 0 + 1 + 1 == 16 )
          break;
      }
      while ( 0 + 1 + 1 != 16 );
      if ( num_layers > 0 )
      {
        do
        {
          if ( layers[1] )
          {
            if ( 0 + 1 > 9 && 0 + 1 > 99 )
            {
              do
              {
              }
              while ( ( ( 0 + 1 ) / 10 ) / 10 > 9 );
            }
          }
        }
        while ( edi != ecx + 1 );
      }
      if ( buf[2] + 1 <= buflen )
      {
      }
      else
      {
        if ( buf )
        {
          buf = realloc( buf, ( buf[2] + 1 ) * sizeof( char ) );
        }
        else
        {
          buf = (char*)eax;
        }
        buflen = 2 + realloc( buf, buf[2] + 1 ) + 1;
      }
      buf[0] = '(';
      if ( ebx > 0 )
      {
        while ( layers[0] == 0 )
        {
          if ( num_layers <= 0 + 1 )
          {
          }
          else
          {
          }
        }
        if ( ebx <= ecx + 1 || layers[1] != 1 )
        {
        }
        else
        {
          do
          {
          }
          while ( 0 + 1 + 1 + 1 < num_layers && *(char*)(eax + 2) == 1 );
        }
        if ( 0 + 1 + 1 <= 0 + 2 )
        {
          if ( layers[1] != 2 )
          {
            if ( ebp_56 < 2 )
            {
              if ( layers[1] != 3 )
              {
                if ( layers[1] != 4 )
                {
                }
                else
                {
                }
              }
              else
                __sprintf_chk( ebp_60, 1, -1, "%dS,", ecx );
            }
            else
            if ( layers[1] != 1 )
            {
            }
            else
            {
            }
            __sprintf_chk( ebp_60, 1, -1, ebp_220, ebp_220, ebp_216, ebp_216 );
          }
          else
          {
          }
          __sprintf_chk( ebp_60, 1, -1, ebp_220, ebp_220, ebp_216, ebp_216 );
        }
        else
          __sprintf_chk( ebp_60, 1, -1, "%d-%d,", ecx, esi + -1 );
      }
      *(char*)(buf[1] + buf + -1) = ')';
      strcpy( bp[0] + 7, 1 + 1 + 1 );
    }
    bp[0] = '"';
    bp[1] = 0;
    if ( 0 ^ 0 )
    {
      __stack_chk_fail( );
    }
    return buf;
    break;
  case 32:
    fh.Flags.f = fh.Flags.f;
    len = 3;
    break;
  case 256:
    fh.Flags.f = fh.Flags.f;
    len = 3;
    break;
  default:
    len = 3;
    break;
  }
}
char *flags_to_string( FlagType flags, int object_type )
{
  int eax;
  int ecx;
  int edx;
  return common_flags_to_string( object_type );
}
char *pcbflags_to_string( FlagType flags )
{
  int eax;
  int ecx;
  int edx;
  return common_flags_to_string( "badarg", 22 );
}
#if 0
#endif
