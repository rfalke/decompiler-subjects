#include "hidinit.c.h"
HID **hid_list;
int hid_num_hids;
HID *gui = &hid_nogui;
HID *exporter;
int pixel_slop = 1;
static void (*gui_start)( int *, char *** );
static HID *default_gui;
HID_AttrNode *hid_attr_nodes;
void hid_load_dir( char *dirname )
{
  int edx;
  DIR *dir = opendir( ebp_152 );
  struct dirent *de;
  if ( dir )
  {
    while ( de == 0 )
    {
      basename[0] = __strdup( &de->d_name[0] );
      if ( strlen( __strdup( &de->d_name[0] ) ) > 3 )
      {
        if ( strcasecmp( basename + strlen( __strdup( &de->d_name[0] ) ) + -3, ".so" ) == 0 )
        {
          void *sym;
          /* phantom */ void (*symv)( void );
          void *so;
          char *basename, *path, *symname;
          struct stat st;
          *ebp_136 = 0;
        }
        else
        if ( strlen( __strdup( &de->d_name[0] ) ) != 4 && strcasecmp( basename + strlen( __strdup( &de->d_name[0] ) ) + -4, ".dll" ) == 0 )
          *(char*)(basename + strlen( __strdup( &de->d_name[0] ) ) + -4) = 0;
      }
      path[0] = Concat( dirname, "/", (long long)( &de->d_name[0] ) );
      if ( !__xstat( 3, Concat( dirname, "/", (long long)( &de->d_name[0] ) ), &st.st_dev ) && ( ( (unsigned char)( st.st_mode ) & 73 ) & 255 ) && ( st.st_mode & 61440 ) == 32768 )
      {
        if ( dlopen( path, 258 ) == 0 )
        {
          __fprintf_chk( stderr, 1, "dl_error: %s\n", dlerror( ) );
        }
        else
        {
          symname = Concat( "hid_", basename, (long long)( "_init" ) );
          if ( sym || sym )
            sym( sym );
          free( symname );
        }
      }
      free( basename );
      free( path );
    }
  }
  free( dirname );
  return;
}
void hid_init( void )
{
  gui = &hid_nogui;
  hid_gtk_init( );
  hid_lpr_init( );
  hid_bom_init( );
  hid_gerber_init( );
  hid_nelma_init( );
  hid_png_init( );
  hid_ps_init( );
  Concat( exec_prefix, "/", "lib", "/", "pcb", "/", "plugins", "/", (long long)( "i686-pc-linux-gnu" ) );
  hid_load_dir( eax );
  Concat( exec_prefix, "/", "lib", "/", "pcb", "/", (long long)( "plugins" ) );
  hid_load_dir( eax );
  if ( homedir )
  {
    Concat( homedir, "/", ".pcb", "/", "plugins", "/", (long long)( "i686-pc-linux-gnu" ) );
    hid_load_dir( eax );
    Concat( homedir, "/", ".pcb", "/", (long long)( "plugins" ) );
    hid_load_dir( eax );
  }
  Concat( "plugins", "/", (long long)( "i686-pc-linux-gnu" ) );
  hid_load_dir( eax );
  Concat( "plugins", 0 );
}
void hid_register_hid( HID *hid )
{
  int eax;
  int ecx;
  int edx;
  int i;
  /* phantom */ int sz;
  if ( hid->struct_size != 208 )
  {
    __fprintf_chk( stderr, 1, "Warning: hid \"%s\" has an incompatible ABI.\n", hid->name );
    return;
  }
  if ( hid_num_hids <= 0 )
  {
  }
  else
  {
    i = 0;
    if ( hid_list[0] == hid )
    {
      return;
    }
    do
    {
      i++;
      if ( hid_num_hids <= i + 1 )
        goto B9;
      else
      {
      }
    }
    while ( hid_list[0] != hid );
    return;
  }
B9:;
  hid_num_hids++;
  if ( hid_list )
  {
    hid_list = realloc( hid_list, ( hid_num_hids + 2 ) * sizeof( HID* ) );
  }
  else
  {
    hid_list = (HID**)calloc( 1, ( hid_num_hids + 2 ) * 4 );
  }
  hid_list = &hid;
  i = 0;
  return;
}
void hid_register_gui( HID *Pgui, void (*func)( int *, char *** ) )
{
  if ( gui_start == 0 )
  {
    default_gui = Pgui;
    gui_start = func;
    return;
  }
  return;
}
HID *hid_find_gui( void )
{
  int i;
  if ( hid_num_hids > 0 )
  {
    i = 0;
    if ( ( hid_list[0]->bits_at_12 & 6 ) & 255 )
    {
      do
      {
        i++;
        if ( hid_num_hids <= i + 1 )
        {
          __fprintf_chk( stderr, 1, "Error: No GUI available.\n" );
          exit( 1 );
        }
      }
      while ( ( *(char*)(*(int*)(hid_list + ( i << 2 )) + 12) & 6 ) & 255 );
    }
    return hid_list[0];
  }
  __fprintf_chk( stderr, 1, "Error: No GUI available.\n" );
  exit( 1 );
}
HID *hid_find_printer( void )
{
  int i;
  if ( hid_num_hids <= 0 )
  {
    return hid_list[0];
  }
  do
  {
    i = 0;
    if ( ( hid_list[0]->bits_at_12 & 2 ) & 255 )
      break;
    i++;
  }
  while ( i + 1 < hid_num_hids );
  return hid_list[0];
}
HID *hid_find_exporter( char *which )
{
  int edx;
  int i;
  if ( hid_num_hids > 0 )
  {
    i = 0;
    do
    {
      if ( ( ( *(char*)(*(int*)(hid_list + ( i << 2 )) + 12) & 4 ) & 255 ) && eax == 0 )
        break;
      i++;
    }
    while ( hid_num_hids <= i + 1 );
  }
  __fprintf_chk( stderr, 1, "Invalid exporter %s, available ones:", which );
  if ( hid_num_hids > 0 )
  {
    i = 0;
    do
    {
      if ( ( hid_list[ i ]->bits_at_12 & 4 ) & 255 )
      {
        __fprintf_chk( stderr, 1, " %s", &hid_list[ i ]->name );
        i++;
      }
      else
      {
        i++;
        if ( hid_num_hids <= i + 1 )
          break;
      }
    }
    while ( i < hid_num_hids );
  }
  __fprintf_chk( stderr, 1, "\n" );
  return 0;
}
HID **hid_enumerate( void )
{
  return hid_list;
}
void hid_register_attributes( HID_Attribute *a, int n )
{
  /* phantom */ HID_AttrNode *ha;
  *(int*)(calloc( 1, 12 )) = hid_attr_nodes->HID_AttrNode;
  hid_attr_nodes = calloc( 1, sizeof( HID_AttrNode ) );
  *(int*)calloc( 1, 12 )/*.4*/ = a->(null);
  *(int*)calloc( 1, 12 )/*.8*/ = n;
  return;
}
void hid_parse_command_line( int *argc, char ***argv )
{
  int edx;
  HID_AttrNode *ha = hid_attr_nodes;
  int i, e, ok;
  argc[0] += -1;
  argv[0]++;
  if ( hid_attr_nodes )
  {
    do
    {
      i = 0;
      if ( ha->n > 0 )
      {
      {
        do
        {
          switch ( a->type )
          {
          case HID_Label:
            i++;
            break;
          case HID_Boolean:
            if ( a->value )
              *(char*)(a->value) = a->default_val.int_value;
            break;
          case HID_Real:
            if ( a->value )
              *(double*)(a->value) = a->default_val.real_value;
            break;
          case HID_String:
            if ( a->value )
              *(int*)(a->value) = a->default_val.str_value[24];
            break;
          case HID_Integer:
          case HID_Enum:
            if ( a->value )
              *(int*)(a->value) = ha->attributes[1].default_val.int_value;
            break;
          default:
            abort( );
            break;
          }
        }
        while ( ha->n <= i + 1 );
      }
      }
    }
    while ( ha );
  }
  if ( argc[0] )
  {
    if ( argv[0][0] == '-' )
    {
      do
      {
        if ( argv[0][0][1] == '-' )
        {
          do
          {
            if ( hid_attr_nodes )
            {
              do
              {
                if ( hid_attr_nodes->n > 0 )
                {
                  i = 0;
                {
                  do
                  {
                    if ( eax == 0 )
                    {
                      switch ( hid_attr_nodes->attributes[1].type )
                      {
                      case 1:
                      {
                        int bool_val;
                        int arg_ofs;
                        /* phantom */ HID_Attribute *a;
                        char *ep;
                        if ( hid_attr_nodes->attributes[1].value )
                        {
                          i = strtol( argv[0][1], 0, 0 );
                        }
                        else
                        {
                          hid_attr_nodes->attributes[1].default_val = strtol( argv[0][2], 0, 0 );
                        }
                        argc[0] += -1;
                        argv[0]++;
                        argc[0] += -1;
                        argv[0]++;
                        if ( argc[0] )
                        {
                          if ( argv[0][1][0] != '-' )
                          {
                            do
                            {
                            }
                            while ( argv[0][1][0] != '-' );
                            if ( argv[0][1][1] == '-' )
                              continue;
                          }
                        }
                      }
                        break;
                      case 2:
                        if ( hid_attr_nodes->attributes[1].value )
                        {
                          esi = strtod( argv[0][2], 0 );
                        }
                        else
                        {
                          hid_attr_nodes->attributes[1].default_val.real_value = strtod( argv[0][2], 0 );
                        }
                        break;
                      case 3:
                        if ( hid_attr_nodes->attributes[1].value )
                          eax = argv[0][2];
                        else
                          hid_attr_nodes->attributes[1].default_val.str_value = argv[0][2];
                        break;
                      case 4:
                        if ( hid_attr_nodes->attributes[1].value )
                          eax = &bool_val;
                        else
                          hid_attr_nodes->attributes[1].default_val = bool_val;
                        break;
                      case 5:
                        if ( hid_attr_nodes->attributes[1].enumerations[0] == 0 )
                        {
                          __fprintf_chk( stderr, 1, "ERROR:  \"%s\" is an unknown value for the --%s option\n", argv[0][1], &edi );
                          exit( 1 );
                        }
                        e = 0;
                        ep[0] = argv[0][2];
                      {
                        do
                        {
                          if ( eax == 0 )
                          {
                            *(int*)(ebp_32 + 20) = e;
                            *(int*)(ebp_32 + 24) = argv[0][2];
                          }
                          else
                          {
                            e++;
                          }
                        }
                        while ( *(int*)(edi + ( ( e + 1 ) << 2 )) );
                      }
                        __fprintf_chk( stderr, 1, "ERROR:  \"%s\" is an unknown value for the --%s option\n", argv[0][1], &edi );
                        exit( 1 );
                        break;
                      case 6:
                      case 7:
                        abort( );
                        break;
                      case 0:
                        break;
                      }
                      argc[0] += -1;
                      argv[0]++;
                    }
                    else
                    {
                      i++;
                    }
                  }
                  while ( i + 1 < hid_attr_nodes->n );
                }
                }
              }
              while ( hid_attr_nodes->next );
            }
            if ( bool_val == 1 )
            {
              arg_ofs = 5;
              strcmp( "--no-", argv[0][1] );
              bool_val = 0;
            }
            __fprintf_chk( stderr, 1, "unrecognized option: %s\n", argv[0][1] );
            exit( 1 );
          }
          while ( (unsigned char)( ccdep2 < ccdep1 ) );
          __fprintf_chk( stderr, 1, "unrecognized option: %s\n", argv[0][1] );
          exit( 1 );
        }
      }
      while ( argv[0][1][0] != '-' );
    }
    argc[0]++;
    argv[0] = argv[0];
    argc[0] = 1 + 1;
    return;
  }
  argv[0] = argv[0];
  argc[0] = 1 + 1;
  return;
}
void hid_save_settings( int locally )
{
  int eax;
  int edx;
  double fp7;
  char *fname;
  struct stat st;
  FILE *f;
  HID_AttrNode *ha;
  int i;
  if ( locally )
  {
  }
  else
  if ( homedir == 0 )
  {
    return;
  }
  fname[0] = Concat( homedir, "/", (long long)( ".pcb" ) );
  if ( __xstat( 3, Concat( homedir, "/", (long long)( ".pcb" ) ), &st.st_dev ) && mkdir( fname, 511 ) )
  {
    free( fname );
    return;
  }
  else
  {
    free( fname );
  }
  f = (FILE*)fopen( Concat( homedir, "/", ".pcb", "/", (long long)( "settings" ) ), "w" );
  if ( f == 0 )
  {
    Message( "Can't open %s", ebp_136 );
    free( ebp_136 );
    return;
  }
  else
  {
    ha = hid_attr_nodes;
    if ( hid_attr_nodes )
    {
      do
      {
        i = 0;
        if ( ha->n > 0 )
        {
          do
          {
            char *str;
            HID_Attribute *a = ha->attributes + 0 + 48;
            do
            {
            }
            while ( 0 + 1 + 1 != 44 );
            if ( a->hash == ( ( ( 0 >> 16 ) ^ ( 0 * 13 ) ) ^ *(char*)(a + 0 + 1) ) )
              __fprintf_chk( f, 1, "# " );
            switch ( a->type )
            {
            case HID_Label:
              i++;
              break;
            case HID_Integer:
              __fprintf_chk( f, 1, "%s = %d\n", (char*)a, a->value ? *(int*)(a->value) : a->default_val.int_value );
              i++;
              if ( i < ha->n )
                continue;
              break;
            case HID_Boolean:
              __fprintf_chk( f, 1, "%s = %d\n", (char*)a, a->value ? *(char*)(a->value) : a->default_val.int_value );
              i++;
              if ( i < ha->n )
                continue;
              break;
            case HID_Real:
              __fprintf_chk( f, 1, "%s = %f\n", (char*)a, a->value ? *(double*)(a->value) : a->default_val.real_value );
              i++;
              if ( i < ha->n )
                continue;
              break;
            case HID_String:
            case HID_Path:
              __fprintf_chk( f, 1, "%s = %s\n", (char*)a, str == 0 ? str : "" );
              break;
            case HID_Enum:
              __fprintf_chk( f, 1, "%s = %s\n", (char*)a, *(int*)(a->enumerations + ( a->value ? *(int*)(a->value) << 2 : a->default_val.int_value << 2 )) );
              i++;
              if ( i < ha->n )
                continue;
              break;
            case HID_Mixed:
              abort( );
              break;
            }
          }
          while ( ha->n <= i );
        }
        __fprintf_chk( f, 1, "\n" );
      }
      while ( ha );
    }
    fclose( f );
    free( ebp_136 );
    return;
  }
}
void hid_load_settings_1( char *fname )
{
  int ecx;
  int edx;
  char line[1024], *namep, *valp, *cp;
  FILE *f;
  *(int*)&fname[0] = 0;
  f = (FILE*)fopen( fname, ebp_1140 );
  if ( f == 0 )
    free( fname );
  else
  {
    free( fname );
    do
    {
      if ( fgets( line, 1024, f ) )
      {
        if ( line[0] && line[0] != '#' && namep[0] )
        {
          valp[0] = namep;
          namep[0] = 0;
          valp[0] = namep + 1;
          if ( valp[0] )
          {
            do
            {
              if ( valp[0] == '=' )
              {
                valp[0] = valp + 1;
              }
              else
              {
                cp[0] = valp + cp + -1;
                if ( hid_attr_nodes )
                {
                  if ( hid_attr_nodes->n > 0 )
                  {
                    do
                    {
                      if ( strcmp( namep, *(int*)(0 + 48 + *(int*)(hid_attr_nodes->next + 4)) ) == 0 )
                      {
                        switch ( *(int*)(0 + 48 + hid_attr_nodes->attributes + 8) )
                        {
                        case 0:
                          break;
                        case 1:
                          *(int*)(0 + 48 + hid_attr_nodes->attributes + 20) = (HID_Attribute*)strtol( valp, 0, 0 );
                          break;
                        case 2:
                          *(double*)(valp[0] + hid_attr_nodes->attributes + 28) = strtod( valp, 0 );
                          break;
                        case 3:
                          *(int*)(valp[0] + hid_attr_nodes->attributes + 24) = __strdup( valp );
                          break;
                        case 4:
                          *(int*)&*(int*)(valp[0] + hid_attr_nodes->attributes + 20) = 1;
                          break;
                        case 6:
                          abort( );
                          break;
                        case 5:
                          if ( *(int*)(*(int*)(ebp_1088 + *(int*)(hid_attr_nodes->next + 4) + 36)) )
                          {
                            valp = valp;
                            do
                            {
                              if ( eax == 0 )
                              {
                                *(int*)(ebp_1092 + 20) = 0 + 1;
                                *(int*)(ebp_1092 + 24) = valp;
                              }
                              else
                            }
                            while ( *(int*)(edi + ( ( ebx + 1 ) << 2 )) );
                          }
                          else
                            valp = valp;
                          __fprintf_chk( stderr, 1, "ERROR:  \"%s\" is an unknown value for the %s option\n", valp, *(int*)(valp + *(int*)(hid_attr_nodes->next + 4)) );
                          exit( 1 );
                          break;
                        case 7:
                          *(int*)(valp + hid_attr_nodes->attributes + 24) = valp;
                          break;
                        }
                      }
                    }
                    while ( *(int*)(hid_attr_nodes + 8) <= ebp_1096 + 1 );
                  }
                  if ( hid_attr_nodes->next )
                  {
                  }
                }
              }
            }
            while ( valp[0] );
          }
        }
      }
      else
        fclose( f );
    }
    while ( hid_attr_nodes->next );
  }
  if ( fname ^ 0 )
  {
    valp[0] = valp;
    __stack_chk_fail( );
  }
  return;
}
void hid_load_settings( void )
{
  int eax;
  HID_AttrNode *ha = hid_attr_nodes;
  int i;
  if ( hid_attr_nodes )
  {
    do
    {
      if ( ha->n > 0 )
      {
        i = 0;
        do
        {
          do
          {
          }
          while ( 0 + 1 + 1 != 44 );
          ha->attributes->hash = ( ( 0 >> 16 ) ^ ( 0 * 13 ) ) ^ ha->attributes[1].name[1];
          i++;
        }
        while ( ha->n <= i + 1 );
      }
    }
    while ( ha );
  }
  Concat( pcblibdir, "/", (long long)( "settings" ) );
  hid_load_settings_1( eax );
  if ( homedir )
  {
    Concat( homedir, "/", ".pcb", "/", (long long)( "settings" ) );
    hid_load_settings_1( eax );
  }
  Concat( "pcb.settings", 0 );
}
void copy_color( int set, hidval *cval, hidval *aval )
{
  if ( set )
  {
    cval = aval;
    return;
  }
  aval = cval;
  return;
}
int hid_cache_color( int set, char *name, hidval *val, void **vcache )
{
  int eax;
  int ecx;
  int edx;
  unsigned long hash;
  char *cp;
  ccache *cache = &vcache[0][0];
  ecache *e;
  if ( vcache[0] == 0 )
  {
    vcache[0] = calloc( 128, 1 );
    cache = (ccache*)calloc( 128, 1 );
  }
  if ( cache->lru && strcmp( (char*)cache->lru->name, name ) == 0 )
  {
    copy_color( set, &cache->colors[0][0].next[0], ( hash - ( ( ( ( ( hash - (/*HI*/int)( hash * 0x8421085 ) ) >> 1 ) + (/*HI*/int)( hash * 0x8421085 ) ) >> 4 ) * 31 ) ) + 2 );
    return 1;
  }
  hash = 0;
  cp = name;
  if ( name[0] )
  {
    name[0] = name;
    do
    {
      hash += ( hash << 5 ) + name[0];
      cp++;
    }
    while ( cp[0] );
  }
  e = cache->colors[0];
  if ( cache->colors[0] )
  {
    do
    {
      if ( strcmp( e->name, name ) == 0 )
      {
        copy_color( set, &e->val.lval, val );
        cache->lru = e;
        break;
      }
    }
    while ( e );
  }
  if ( set )
  {
    *(int*)(calloc( 1, 12 )) = cache;
    cache->colors[0] = (ecache*)calloc( 1, 12 );
    cache->colors[0] = (ecache*)__strdup( name );
    cache->lru = cache->colors[0] = &val->lval;
    return 1;
  }
  return 1;
}
void derive_default_filename( char *pcbfile, HID_Attribute *filename_attrib, char *suffix, char **memory )
{
  int edx;
  int ebx;
  int esi;
  int edi;
  char *buf;
  char *pf;
  if ( pcbfile == 0 )
  {
    /* phantom */ size_t __len;
    /* phantom */ char *__retval;
    if ( calloc( 1, 12 ) == 0 )
    {
      return;
    }
    *(int*)(calloc( 1, 12 )) = 0x6e6b6e75;
    pf[0] = calloc( 1, 12 );
    *(int*)calloc( 1, 12 )/*.4*/ = 0x2e6e776f;
    *(int*)calloc( 1, 12 )/*.8*/ = 0x626370;
  }
  else
  {
    pf[0] = __strdup( pcbfile );
  }
  if ( pf == 0 )
  {
    return;
  }
  if ( memory )
  {
    if ( filename_attrib->default_val.str_value == memory[0] )
    {
      buf = (char*)calloc( 1, strlen( pf ) + strlen( suffix ) + 1 );
      memory[0] = (char*)calloc( 1, strlen( pf ) + strlen( suffix ) + 1 );
    }
    else
    {
      return;
    }
  }
  else
  {
    buf = (char*)calloc( 1, strlen( pf ) + strlen( suffix ) + 1 );
  }
  if ( buf )
  {
    strcpy( buf, &edx );
  {
    /* phantom */ size_t bl;
    if ( strlen( buf ) > 4 )
    {
      /* phantom */ size_t __s1_len;
      /* phantom */ size_t __s2_len;
      strcmp( ".pcb", buf + strlen( buf ) + -4 );
      if ( 1 )
      {
      }
    }
    strcat( buf, suffix );
    if ( filename_attrib->default_val.str_value )
    {
      free( filename_attrib->default_val.str_value );
    }
    filename_attrib->default_val.str_value = buf;
  }
  }
  pcbfile = &edx;
}
#if 0
#endif
