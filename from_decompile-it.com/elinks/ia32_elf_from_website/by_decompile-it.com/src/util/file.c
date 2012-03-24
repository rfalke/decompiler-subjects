#include "file.c.h"
int file_exists( unsigned char *filename )
{
  return ~access( (char*)filename, 0 ) >> 31;
}
int file_can_read( unsigned char *filename )
{
  return ~access( (char*)filename, 4 ) >> 31;
}
int file_is_dir( unsigned char *filename )
{
  int eax;
  struct stat st;
  return ( st.st_mode & 61440 ) == 16384;
}
unsigned char *get_filename_position( unsigned char *filename )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = filename[0] == 0;
    if ( !(_Bool)( filename[0] != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/file.c";
      errline = 98;
      elinks_internal( "assertion filename failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( filename[0] )
    {
      filename[1] = filename[1];
      do
      {
        filename[0] = filename[1] == '/' ? filename[0] : filename[1];
        filename[1]++;
      }
      while ( filename[1] );
      return filename[1] == '/' ? &filename[0] : &filename[1];
    }
    else
    {
      return 0;
    }
  }
B2:  assert_failed = 0;
  return 0;
}
unsigned char *expand_tilde( unsigned char *filename )
{
  int eax;
  int edx;
  struct string file;
  if ( init_string( &file ) )
  {
    if ( filename[0] == '~' )
    {
      filename[0] = filename[1];
      if ( filename[1] == 0 || filename[1] == '/' )
      {
        if ( getenv( "HOME" ) )
        {
          add_to_string( &file, (unsigned char*)getenv( "HOME" ) );
          ebp_44 = filename[0];
          add_to_string( &file, &filename[0] );
          return file.source;
        }
      }
      else
      do
      {
      }
      while ( *(char*)(0 + 1 + filename + 2) && filename[1] != '/' );
      if ( memacpy( &filename[0], 0 + 1 ) )
      {
        mem_free( ebp_44 );
        if ( ebp_44 && *(int*)(&eax[2].length) )
        {
          add_to_string( &edi, (unsigned char*)eax );
          filename[0] = 0 + 1 + filename + 1;
        }
      }
    }
  {
    struct passwd *passwd;
    unsigned char *user;
    int userlen;
    filename[0] = filename;
  }
  }
}
unsigned char *get_unique_name( unsigned char *fileprefix )
{
  unsigned char *file;
  int memtrigger;
  int suffix;
  int digits = 0;
  suffix = 1;
  file[0] = fileprefix;
  memtrigger = 1;
  while ( file_exists( &file[0] ) == 0 )
  {
    if ( memtrigger <= suffix )
    {
      if ( suffix > 9999 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/file.c";
        errline = 162;
        elinks_internal( "Too big suffix in get_unique_name()." );
      }
      digits++;
      if ( file[0] != fileprefix )
        mem_free( &file[0] );
      file[0] = mem_alloc( digits + strlen( (char*)fileprefix ) + 2 );
      if ( mem_alloc( digits + strlen( (char*)fileprefix ) + 2 ) )
      {
        memtrigger *= 10;
        memcpy( &file[0], fileprefix, strlen( (char*)fileprefix ) );
        elinks_longcat( &file[ strlen( (char*)fileprefix ) + 1 ], 0, suffix, digits + 1, 0, 10, 0 );
        suffix++;
      }
    }
    else
    {
      elinks_longcat( &file[ strlen( (char*)fileprefix ) + 1 ], 0, suffix, digits + 1, 0, 10, 0 );
      suffix++;
    }
  }
}
unsigned char *get_tempdir_filename( unsigned char *name )
{
  unsigned char *tmpdir;
  return straconcat( &tmpdir[0] );
}
unsigned char *file_read_line( unsigned char *line, size_t *size, FILE *file, int *lineno )
{
  int eax;
  int ecx;
  size_t offset;
  if ( line )
  {
  }
  else
  {
    line[0] = mem_alloc( 1024 );
    if ( mem_alloc( 1024 ) )
      size[0] = 1024;
    else
    {
      return &line[0];
    }
  }
  offset = 0;
  while ( fgets( &line[ offset ], size[0] - offset, file ) == 0 )
  {
    unsigned char *linepos;
    if ( strchr( &line[ offset ], 10 ) == 0 )
    {
      int next;
      if ( next == -1 )
      {
        lineno[0]++;
        break;
      }
      ungetc( next, file );
      size[0] += 1024;
      if ( mem_realloc( &line[0], size[0] + 1024 ) )
      {
        offset--;
        line[0] = mem_realloc( &line[0], size[0] + 1024 );
      }
      else
        break;
    }
    else
    {
      lineno[0]++;
      if ( line[0] < strchr( &line[ offset ], 10 ) )
      {
        if ( linepos[0] != '\\' )
          break;
      }
      else
      if ( linepos[0] != '\\' )
        break;
      offset += ~line[0];
    }
    size[0] = size[0];
  }
  line[0] = 0;
  mem_free( &line[0] );
  return &line[0];
}
int safe_mkstemp( unsigned char *template )
{
  mode_t saved_mask = umask( 127 );
  int fd = mkstemp64( (char*)template );
  umask( saved_mask );
  return fd;
}
int compare_dir_entries( void *v1, void *v2 )
{
  if ( ((int*)v1)[1] == '.' && ((int*)v1)[1] == '.' && ((int*)v1)[1] == 0 )
  {
  }
  else
  {
    if ( ((int*)v2)[1] != '.' || ((int*)v2)[1] != '.' || ((int*)v2)[1] )
    {
      if ( *(char*)(*(int*)(((int*)v1)[0])) == 'd' )
      {
        if ( *(char*)(((int*)v2)[0]) == 'd' )
        {
          v2 = &((int*)v2)[1];
          v1 = &((int*)v1)[1];
        }
      }
      else
      if ( *(char*)(((int*)v2)[0]) != 'd' )
      {
        v2 = &((int*)v2)[1];
        v1 = &((int*)v1)[1];
      }
    }
    return 1;
  }
  return 1;
}
struct directory_entry *get_directory_entries( unsigned char *dirname, int get_hidden )
{
  int eax;
  int edx;
  struct directory_entry *entries;
  DIR *directory;
  int size;
  struct dirent *entry;
  int is_root_directory = 0;
  if ( dirname[0] == '/' )
    is_root_directory = *(char*)(dirname + 1) == 0;
  entries = 0;
  size = 0;
  if ( opendir( (char*)dirname ) )
  {
    struct stat st;
    struct directory_entry *new_entries;
    unsigned char *name;
    struct string attrib;
    is_root_directory ^= 1;
    while ( entry[0].d_ino == 0 )
    {
      do
      {
        entry->d_name[0] = entry->d_name[0];
        if ( entry->d_name[0] == '.' )
        {
          if ( entry->d_name[1] == 0 || get_hidden == 0 )
            continue;
          else
          {
          }
        }
        if ( mem_realloc( ebp_204, ( size + 2 ) * 8 ) == 0 || straconcat( dirname ) == 0 )
          continue;
        else
        {
          if ( init_string( &attrib ) )
          {
            if ( eax == 0 )
            {
              add_char_to_string( &attrib, ( ebp_184 & 61440 ) == 49152 ? 63 : 115 );
              *ebp_184 = ebp_184;
              do
              {
                if ( ( ah & 1 ) & 255 )
                  *(char*)(ebp_92 + 0) = 114;
                if ( (_Bool)( ( ( ebp_184 << ( 0 + 3 ) ) >> 7 ) & 1 ) )
                  *(char*)(ebp_92 + 0 + 1) = 119;
                if ( ( ( ebp_184 << ( 0 + 3 ) ) & 64 ) & 255 )
                  *(char*)(ebp_92 + 0 + 2) = 120;
              }
              while ( 0 + 3 + 3 != 9 );
              add_to_string( &attrib, ebp_92 );
              add_char_to_string( &attrib, 32 );
              elinks_ulongcat(  );
              add_to_string( &attrib, ebp_92 );
              add_char_to_string( &attrib, 32 );
              if ( ebp_176 != last_uid )
              {
                if ( getpwuid(  ) && *(int*)(getpwuid(  )) )
                  __sprintf_chk( last_user, 1, 64, "%-8.8s", *(int*)(getpwuid(  )) );
                else
                  __sprintf_chk( last_user, 1, 64, "%-8d" );
                last_uid = ebp_176;
              }
              add_to_string( &attrib, last_user );
              add_char_to_string( &attrib, 32 );
              if ( ebp_172 != last_gid )
              {
                if ( getgrgid(  ) && *(int*)(getgrgid(  )) )
                  __sprintf_chk( last_group, 1, 64, "%-8.8s", *(int*)(getgrgid(  )) );
                else
                  __sprintf_chk( last_group, 1, 64, "%-8d" );
                last_gid = ebp_172;
              }
              add_to_string( &attrib, last_group );
              add_char_to_string( &attrib, 32 );
              if ( ebp_152 )
                add_to_string( &attrib, "         " );
              else
              {
                if ( elinks_ulongcat( ebp_92, 0, ebp_156, 9, 32, 10, 0 ) - 1 <= 62 )
                  elinks_ulongcat(  );
                add_to_string( &attrib, ebp_92 );
                add_char_to_string( &attrib, 32 );
              }
              add_date_to_string( &attrib, time( 0 ) <= ebp_128 + 0xed4e00 && ebp_128 - 3600 <= time( 0 ) ? "%b %e %H:%M" : "%b %e  %Y", ebp_96 );
              add_char_to_string( &attrib, 32 );
            }
            else
            {
              add_char_to_string( &attrib, 63 );
              add_to_string( &attrib, ebp_92 );
              add_char_to_string( &attrib, 32 );
              add_to_string( &attrib, "    " );
              add_to_string( &attrib, "         " );
              add_to_string( &attrib, "         " );
              add_to_string( &attrib, "         " );
              add_to_string( &attrib, "             " );
            }
            *(int*)(ebp_204 + ( size << 3 ) + 4) = straconcat( dirname );
            size++;
          }
          else
          {
            mem_free( (void*)dirname );
            break;
          }
        }
      }
      while ( entry[0].d_ino );
      break;
    }
    entries = ebp_212;
    closedir( &directory );
    if ( size == 0 )
    {
      if ( entries[0].attrib )
      {
        entries = 0;
        mem_free( (void*)entries[0].attrib );
      }
      if ( 0 ^ 0 )
      {
        __stack_chk_fail(  );
      }
      return &entries[0];
    }
    else
    {
      qsort( entries[0].attrib, size, 8, &compare_dir_entries );
      entries[ size ].attrib = 0;
      entries[ size ].name = 0;
    }
  }
}
int mkalldirs( unsigned char *path )
{
  int edx;
  int ret;
  unsigned char *p;
  if ( path[0] && mem_alloc( strlen( &path[0] ) + 1 ) )
  {
    ret = 0;
    memcpy( mem_alloc( strlen( &path[0] ) + 1 ), &path[0], strlen( &path[0] ) + 1 );
    if ( p[1] )
    {
      do
      {
        if ( p[2] == '/' )
        {
          p[2] = 0;
          *ebp_28 = 47;
          ret = mkdir( &p[0], 448 );
          if ( mkdir( &p[0], 448 ) < 0 )
          {
            if ( *(int*)(__errno_location(  )) == 17 )
              ret = 0;
            else
              break;
          }
        }
      }
      while ( p[2] );
    }
    mem_free( &p[0] );
    return ret;
  }
  else
  {
    ret = -1;
    return ret;
  }
}
#if 0
#endif
