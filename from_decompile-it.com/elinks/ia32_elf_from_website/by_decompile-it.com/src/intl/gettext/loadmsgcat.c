#include "loadmsgcat.c.h"
int _nl_msg_cat_cntr;
static struct expression plvar;
static struct expression plone;
static struct expression germanic_plural;
unsigned char *_nl_init_domain_conv( struct loaded_l10nfile *domain_file, struct loaded_domain *domain, struct binding *domainbinding )
{
  int eax;
  int ecx;
  unsigned char *nullentry;
  size_t nullentrylen;
  domain->codeset_cntr = domainbinding ? domainbinding->codeset_cntr : 0;
  domain->conv = -1;
  domain->conv_tab = 0;
  nullentry = _nl_find_msg( domain_file, &domainbinding[0], "", &nullentrylen );
  if ( nullentry == 0 || strstr( (char*)nullentry, "charset=" ) == 0 )
  {
    return nullentry;
  }
{
  size_t len;
  unsigned char *charset;
  unsigned char *outcharset;
  charsetstr[0] = strstr( (char*)nullentry, "charset=" ) + 8;
  if ( *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) && *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) != ' ' && *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) != 9 && *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) != 10 )
  {
    len = 0;
    do
    {
      len++;
    }
    while ( *(char*)(len + strstr( (char*)nullentry, "charset=" ) + 9) && *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) != ' ' && *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) != 9 && *(char*)(strstr( (char*)nullentry, "charset=" ) + 8) != 10 );
  }
  else
  {
  }
  charset = (unsigned char*)mem_alloc( len + 1 );
  *(char*)(mempcpy( charset, &charsetstr[0], len )) = 0;
  if ( ( domainbinding[0].next == 0 || domainbinding->codeset == 0 ) && ( getenv( "OUTPUT_CHARSET" ) == 0 || *(char*)(getenv( "OUTPUT_CHARSET" )) == 0 ) )
  {
    domainbinding = &domainbinding[0];
    elinks_locale_charset(  );
  }
  domain->conv = iconv_open( &outcharset[0], (char*)charset );
  mem_free( (void*)charset );
  return nullentry;
}
}
void _nl_free_domain_conv( struct loaded_domain *domain )
{
  if ( domain->conv_tab[ 0 ] <= -3 )
  {
    free( domain->conv_tab );
    if ( domain->conv != -1 )
    {
      domain = &domain->conv[0];
    }
  }
  else
  if ( domain->conv != -1 )
  {
    domain = &domain->conv[0];
  }
  return;
}
void _nl_load_domain( struct loaded_l10nfile *domain_file, struct binding *domainbinding )
{
  int eax;
  int ecx;
  int edx;
  int esi;
  int edi;
  int ebp_148;
  int fd;
  struct stat st;
  struct mo_file_header *data;
  int use_mmap;
  unsigned char *nullentry;
{
  struct string filename;
  domain_file->decided = 1;
  domain_file->data = 0;
  if ( init_string( ebp_32 ) && strrchr( (char*)program.path, 47 ) && ( strrchr( (char*)program.path, 47 ) - program.path ) + 1 > 3 )
  {
    strcmp( "src", ( program.path + ( strrchr( (char*)program.path, 47 ) - program.path ) + 1 ) - 4 );
    if ( 1 && add_bytes_to_string__( &filename ) && add_to_string( &filename, "../po/" ) && add_bytes_to_string__( &filename, domain_file->langdirname, domain_file->langdirnamelen ) && add_to_string( &filename, ".gmo" ) )
    {
      fd = open64( ebp_32, 0 );
      done_string( &filename );
      if ( fd == -1 )
      {
        if ( domain_file[0].filename == 0 || open64( (char*)domain_file[0].filename, 0 ) == -1 )
        {
          return;
        }
        if ( !__fxstat64( 3, fd, &st.st_dev ) && (st.st_size << 32) == 0 && (unsigned int)(st.st_size & 0xFFFFFFFF) > 27 )
        {
          if ( data[0].magic != -1 )
          {
            close( fd );
            *ebp_156 = data[0].magic;
            use_mmap = 1;
          }
          else
          {
            if ( data[0].magic )
            {
            {
              while ( __result == -1 )
              {
                if ( malloc( (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) < 1 )
                {
                  size_t to_read;
                  unsigned char *read_ptr;
                  close( fd );
                  break;
                }
                else
                if ( (unsigned int)(st.st_size & 0xFFFFFFFF) - malloc( (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) == malloc( (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) )
                {
                  close( fd );
                  use_mmap = 0;
                  *ebp_156 = data[0].magic;
                }
                else
                {
                  ebp_148 += malloc( (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) );
                }
              }
              if ( *(int*)(__errno_location(  )) == 4 )
                continue;
            }
            }
            else
            {
              return;
            }
          }
          if ( data->magic != -569244523 && data->magic != -1794895138 )
          {
            if ( use_mmap )
            {
              munmap( &data[0].magic, (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) );
              return;
            }
            else
            {
              fd = fd;
              free( &data[0].magic );
              fd = fd;
              return;
            }
          }
          else
          {
            *ebp_156 = data[0].magic;
            *ebp_160 = use_mmap;
            if ( malloc( 56 ) )
            {
              domain_file->data = malloc( 56 );
              *(int*)(malloc( 56 )) = data[0];
              *(int*)(malloc( 56 ) + 4) = use_mmap;
              *(int*)(malloc( 56 ) + 8) = (st.st_size & 0xFFFFFFFF);
              ebp_148 = data->magic != -1794895138;
              *(int*)(malloc( 56 ) + 12) = data->magic != -1794895138;
              if ( ( data->magic == -1794895138 ? data->revision : ( data->revision >> 24 ) | ( data->revision << 24 ) | ( ( data->revision & 65280 ) << 8 ) | ( ( data->revision >> 8 ) & 65280 ) ) == 0 )
              {
                if ( ebp_148 )
                {
                  domain_file->data[4] = ( data->nstrings >> 24 ) | ( data->nstrings << 24 ) | ( ( data->nstrings & 65280 ) << 8 ) | ( ( data->nstrings >> 8 ) & 65280 );
                  domain_file->data[5] = data[0].magic + ( ( data->orig_tab_offset >> 24 ) | ( data->orig_tab_offset << 24 ) | ( ( data->orig_tab_offset & 65280 ) << 8 ) | ( ( data->orig_tab_offset >> 8 ) & 65280 ) );
                  domain_file->data[6] = data[0].magic + ( ( data->trans_tab_offset >> 24 ) | ( data->trans_tab_offset << 24 ) | ( ( data->trans_tab_offset & 65280 ) << 8 ) | ( ( data->trans_tab_offset >> 8 ) & 65280 ) );
                  domain_file->data[7] = ( data->hash_tab_size >> 24 ) | ( data->hash_tab_size << 24 ) | ( ( data->hash_tab_size & 65280 ) << 8 ) | ( ( data->hash_tab_size >> 8 ) & 65280 );
                }
                else
                {
                  domain_file->data[4] = data->nstrings;
                  domain_file->data[5] = data->orig_tab_offset + data[0].magic;
                  domain_file->data[6] = data->trans_tab_offset + data[0].magic;
                  domain_file->data[7] = data->hash_tab_size;
                  data->hash_tab_offset = data->hash_tab_offset;
                }
                domain_file->data[8] = data[0].magic + ( ( data->hash_tab_offset >> 24 ) | ( data->hash_tab_offset << 24 ) | ( ( data->hash_tab_offset & 65280 ) << 8 ) | ( ( data->hash_tab_offset >> 8 ) & 65280 ) );
                if ( _nl_init_domain_conv( domain_file, &domain_file->data[0], domainbinding ) && strstr( &nullentry[0], "nplurals=" ) && ( data->magic == -1794895138 ? data->revision : ( data->revision >> 24 ) | ( data->revision << 24 ) | ( ( data->revision & 65280 ) << 8 ) | ( ( data->revision >> 8 ) & 65280 ) ) )
                {
                  unsigned char *endp;
                  unsigned long n;
                  struct parse_args args;
                  nplurals[0] = strstr( &nullentry[0], "nplurals=" ) + 9;
                  if ( nplurals[0] - 48 >= 9 )
                  {
                    n = 0;
                    do
                    {
                      ebp_148++;
                      n = ( nplurals[0] + ( n * 10 ) ) - 48;
                    }
                    while ( *ebp_148 - 48 >= 9 );
                    endp[0] = ebp_148;
                    nplurals[0] = nplurals[0];
                    domain_file->data[13] = n;
                    if ( ebp_148 != nplurals[0] )
                    {
                      args.cp = ebp_140 + 7;
                      if ( gettext__parse( (void*)filename.source ) == 0 )
                      {
                        domain_file->data[12] = ebp_28;
                        return;
                      }
                    }
                  }
                  else
                    domain_file->data[13] = 0;
                }
                if ( plone.val.num == 0 )
                  plone.val.num = plone.val.num;
                  plone.val.num = 1;
                  germanic_plural.val.num = plvar.nargs;
                {
                  plone.val.num = 1;
                  germanic_plural.val.num = plvar.nargs;
                  plvar.nargs = 0;
                  plvar.operation = var;
                  plone.nargs = 0;
                  plone.operation = num;
                  germanic_plural.nargs = 2;
                  germanic_plural.operation = not_equal;
                  germanic_plural.val.args[1] = &plone;
                }
                domain_file->data[12] = germanic_plural.nargs;
                domain_file->data[13] = 2;
                return;
              }
              else
              {
                if ( use_mmap )
                  munmap( &data[0].magic, domain_file->data + 8 );
                else
                  free( &data[0].magic );
                free( domain_file->data );
                domain_file->data = 0;
                return;
              }
            }
            else
            {
              return;
            }
          }
        }
      }
      else
      {
      }
    }
  }
  done_string( &filename );
}
}
struct string *add_bytes_to_string__( struct string *string, unsigned char *bytes, int length )
{
  int ecx;
  int edx;
  int newlength;
  if ( assert_failed == 0 )
  {
    if ( bytes[0] && string && length >= 0 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
      errline = 255;
      elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
      if ( assert_failed )
        goto B2;
    }
    if ( length )
    {
      newlength = string->length + length;
      if ( ( ( string->length + 255 ) & -256 ) < ( ( newlength + 256 ) & -256 ) )
      {
        ebp_32 = bytes[0];
        *ebp_36 = length;
        if ( mem_realloc( (void*)string->source, length ) )
        {
          string = (struct string*)mem_realloc( (void*)string->source, length );
          memset( string[0].source + ( ( string->length + 255 ) & -256 ), 0, ( ( newlength + 256 ) & -256 ) - ( ( string->length + 255 ) & -256 ) );
        }
        else
        {
          string[0].source = 0;
          return &string[0];
        }
      }
      if ( string->source )
      {
        memcpy( string->length + string->source, &bytes[0], length );
        string->length = newlength;
        return &string[0];
      }
      string[0].source = 0;
      return &string[0];
    }
    else
    {
      return &string[0];
    }
  }
B2:  assert_failed = 0;
  string[0].source = 0;
  return &string[0];
}
#if 0
#endif
