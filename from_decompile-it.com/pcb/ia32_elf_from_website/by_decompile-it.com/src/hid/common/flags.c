#include "flags.c.h"
HID_FlagNode *hid_flag_nodes;
static int n_flags;
static HID_Flag *all_flags;
void hid_register_flags( HID_Flag *a, int n )
{
  /* phantom */ HID_FlagNode *ha;
  *(int*)(calloc( 1, 12 )) = hid_flag_nodes->HID_FlagNode;
  *(int*)calloc( 1, 12 )/*.8*/ = n;
  hid_flag_nodes = calloc( 1, sizeof( HID_FlagNode ) );
  n_flags += n;
  *(int*)calloc( 1, 12 )/*.4*/ = a->(null);
  if ( all_flags )
  {
    free( all_flags );
    all_flags = 0;
  }
  return;
}
int flag_sort( void *va, void *vb )
{
  /* phantom */ HID_Flag *a;
  /* phantom */ HID_Flag *b;
{
  /* phantom */ size_t __s1_len;
  /* phantom */ size_t __s2_len;
  va = &((int*)va);
  vb = &((int*)vb);
}
}
HID_Flag *hid_find_flag( char *name )
{
  int eax;
  int ecx;
  int edx;
  HID_FlagNode *hf;
  int i, n, lower, upper;
  if ( all_flags == 0 )
  {
    hf = hid_flag_nodes;
    all_flags = (HID_Flag*)calloc( 1, n_flags * 12 );
    if ( hid_flag_nodes )
    {
      while ( hf->n <= 0 )
      {
        if ( hf == 0 )
          goto B14;
        else
        {
        }
      }
      do
      {
        *(int*)(ecx + eax + 4) = hf->flags->function;
        *(int*)(ecx + eax + 8) = hf->flags->parm;
        i = 1;
      }
      while ( i + 1 < hf->n );
    }
B14:;
    qsort( ebp_36, n_flags, 12, &flag_sort );
  }
  upper = n_flags + 1;
  for ( ; ( upper + eax ) / 2 < ( ( upper + eax ) / 2 ) + -1;  )
  {
    do
    {
      if ( n == 0 )
        break;
      if ( n >= 0 )
        continue;
      else
      {
        upper = ( upper + eax ) / 2;
        break;
      }
    }
    while ( ebx < ebp_32 );
    break;
  }
  __printf_chk( 1, "unknown flag `%s'\n", name );
  return 0;
}
int hid_get_flag( char *name )
{
  int eax;
  int ebx;
  int esi;
  int edi;
  static char *buf;
  static int nbuf;
  /* phantom */ char *cp;
  HID_Flag *f;
  if ( strchr( name, ',' ) )
  {
    int wv;
    if ( strchr( name, ',' ) - name < nbuf )
    {
    }
    else
    {
      nbuf = ebx + 10;
      buf = (char*)eax;
    }
    memcpy( buf, name, strchr( name, ',' ) - name );
    *(char*)(( strchr( name, ',' ) - name ) + buf) = 0;
    wv = strtol( strchr( name, ',' ) + 1, 0, 0 );
    if ( f )
    {
      ;
    }
  }
  else
  {
    if ( f )
    {
      name = &f->parm;
      ;
    }
  }
  return 0;
}
void hid_save_and_show_layer_ons( int *save_array )
{
  int eax;
  int edx;
  int i = PCB;
  if ( i >= -1 )
  {
    i = 0;
    save_array[0] = save_array;
    do
    {
      save_array = i/*.1_1of4*/;
      i++;
      i/*.1_1of4*/ = 1;
      i = i + 92;
    }
    while ( i + 1 <= i + 1 );
  }
  return;
}
void hid_restore_layer_ons( int *save_array )
{
  int edx;
  int i = PCB;
  if ( i >= -1 )
  {
    i = 0;
    do
    {
      i++;
      i/*.1_1of4*/ = save_array;
      i = i + 92;
    }
    while ( i + 1 <= i + 1 );
  }
  return;
}
char *layer_type_to_file_name( int idx )
{
  int esi;
  int group;
  switch ( idx + 4079 )
  {
  case 16:
    break;
  case 1:
    break;
  case 0:
    break;
  case 17:
    break;
  case 31:
    break;
  case 47:
    break;
  case 64:
    break;
  case 65:
    break;
  case 79:
    break;
  case 95:
    break;
  case 112:
    break;
  case 113:
    break;
  default:
    group = GetLayerGroupNumberByNumber( idx );
    if ( group == GetLayerGroupNumberByNumber( PCB->Data->LayerN + 1 ) || group == GetLayerGroupNumberByNumber( PCB->Data->LayerN ) )
    {
      return "backassembly";
    }
    if ( PCB->LayerGroups.Number[ group ] != 1 || ( strcasecmp( &PCB->Data->ViaN, "route" ) && strcasecmp( &PCB->Data->ViaN, "outline" ) ) )
    {
      static char buf[20];
      __sprintf_chk( buf, 1, 20, "group%d", group );
      esi = group;
    }
    break;
  }
  return "backassembly";
}
#if 0
#endif
