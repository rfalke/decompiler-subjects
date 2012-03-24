#include "digest.c.h"
void convert_to_md5_digest_hex_T( unsigned char *bin, unsigned char *hex )
{
  int i = 0;
  do
  {
    hex[ i ] = ( *(char*)(bin[0] + 0) >> 4 ) < 10 ? 87 + ( *(char*)(bin[0] + 0) >> 4 ) : 48 + ( *(char*)(bin[0] + 0) >> 4 );
    hex[ i * 2 ] = ( *(char*)(bin[0] + 0) & 15 ) < 10 ? ( *(char*)(bin[0] + 0) & 15 ) + 87 : ( *(char*)(bin[0] + 0) & 15 ) + 48;
    i++;
  }
  while ( i + 1 != 16 );
  return;
}
unsigned char *get_http_auth_digest_response( struct auth_entry *entry, struct uri *uri )
{
  int eax;
  int ecx;
  int edx;
  struct string string;
  md5_digest_hex_T cnonce;
  md5_digest_hex_T response;
  if ( init_string( &string ) )
  {
    srand( time( 0 ) );
    digest_md5( ebp_368, 4, ebp_44 );
    convert_to_md5_digest_hex_T( ebp_44, cnonce );
    init_md5( ebp_364 );
    entry->user[0] = entry->user[0];
    do
    {
      entry->user[0] += 4;
    }
    while ( ( ( entry->user[4] - 0x1010101 ) & ~entry->user[4] & -2139062144 ) == 0 );
    update_md5( ebp_364, &entry->user[0], ( ( ( entry->user[4] - 0x1010101 ) & ~*(int*)(entry->user[0] + 4) & -2139062144 & 32896 ) == 0 ? entry->user[0] + 4 : entry->user[0] + 4 + 2 ) - 3 - ( 0 & 1 ) - entry->user[0] );
    update_md5( ebp_364, ":", 1 );
    update_md5( ebp_364, entry->realm, strlen( (char*)entry->realm ) );
    update_md5( ebp_364, ":", 1 );
    entry->password[0] = entry->password[0];
    do
    {
      entry->password[0] += 4;
    }
    while ( ( ( entry->password[4] - 0x1010101 ) & ~entry->password[4] & -2139062144 ) == 0 );
    update_md5( ebp_364, &entry->password[0], ( ( ( entry->password[4] - 0x1010101 ) & ~*(int*)(entry->password[0] + 4) & -2139062144 & 32896 ) == 0 ? entry->password[0] + 4 : entry->password[0] + 4 + 2 ) - 3 - ( 0 & 1 ) - entry->password[0] );
    done_md5( ebp_364, ebp_60 );
    convert_to_md5_digest_hex_T( ebp_60, ebp_156 );
    init_md5( ebp_364 );
    update_md5( ebp_364, "GET", 3 );
    update_md5( ebp_364, ":/", 2 );
    update_md5( ebp_364, uri->data, uri->bits_at_48/*.2_3of4*/ );
    done_md5( ebp_364, ebp_60 );
    convert_to_md5_digest_hex_T( ebp_60, ebp_188 );
    init_md5( ebp_276 );
    update_md5( ebp_276, ebp_156, 32 );
    update_md5( ebp_276, ":", 1 );
    if ( entry->nonce )
    {
      update_md5( ebp_276, entry->nonce, strlen( (char*)entry->nonce ) );
    }
    update_md5( ebp_276, ":", 1 );
    update_md5( ebp_276, "00000001", 8 );
    update_md5( ebp_276, ":", 1 );
    update_md5( ebp_276, cnonce, 32 );
    update_md5( ebp_276, ":", 1 );
    update_md5( ebp_276, "auth", 4 );
    update_md5( ebp_276, ":", 1 );
    update_md5( ebp_276, ebp_188, 32 );
    done_md5( ebp_276, ebp_44 );
    convert_to_md5_digest_hex_T( ebp_44, response );
    add_to_string( &string, "username=\"" );
    add_to_string( &string, &entry->user[0] );
    add_to_string( &string, "\", " );
    add_to_string( &string, "realm=\"" );
    if ( entry->realm )
      add_to_string( &string, entry->realm );
    add_to_string( &string, "\", " );
    add_to_string( &string, "nonce=\"" );
    if ( entry->nonce )
      add_to_string( &string, entry->nonce );
    add_to_string( &string, "\", " );
    add_to_string( &string, "uri=\"/" );
    if ( assert_failed == 0 )
    {
      if ( uri->data )
        assert_failed = 0;
      else
      {
        assert_failed = 1;
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
        errline = 255;
        elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
        if ( assert_failed == 0 )
          goto B83;
      }
B83:      if ( uri->bits_at_48/*.2_3of4*/ == 0 )
      {
        add_to_string( &string, "\", " );
        add_to_string( &string, "qop=auth, nc=00000001, " );
        add_to_string( &string, "cnonce=\"" );
        if ( assert_failed )
          assert_failed = 0;
        else
        {
          assert_failed = 0;
          string.length = string.length + 255;
          if ( 0 < 0 )
          {
            ebp_396 = 0;
            *ebp_392 = 0;
            if ( mem_realloc( (void*)string.source, 0 ) )
            {
              string.source = (unsigned char*)mem_realloc( (void*)string.source, 0 );
              memset( &string.source[0], 0, 0 - 0 );
            }
          }
          if ( string.source )
          {
            *(char*)(string.source + string.length + 32) = 0;
            string.length += 32;
          }
        }
        add_to_string( &string, "\", " );
        add_to_string( &string, "response=\"" );
        if ( assert_failed )
          assert_failed = 0;
        else
        {
          assert_failed = 0;
          string.length = string.length + 255;
          if ( 0 < 0 )
          {
            ebp_396 = 0;
            *ebp_392 = 0;
            if ( mem_realloc( (void*)string.source, 0 ) )
            {
              string.source = (unsigned char*)mem_realloc( (void*)string.source, 0 );
              memset( &string.source[0], 0, 0 - 0 );
            }
          }
          if ( string.source )
          {
            *(char*)(string.source + string.length + 32) = 0;
            string.length += 32;
          }
        }
        add_to_string( &string, "\"" );
        if ( entry->opaque )
        {
          add_to_string( &string, ", opaque=\"" );
          add_to_string( &string, entry->opaque );
          add_to_string( &string, "\"" );
        }
      }
      else
      {
        if ( 0 < 0 )
        {
          *ebp_392 = 0;
          if ( eax )
          {
            string.source = (unsigned char*)eax;
            memset( string.source + 0, 0, 0 - 0 );
          }
        }
        if ( string.source )
        {
          memcpy( string.length + string.source, uri->data, uri->bits_at_48/*.2_3of4*/ );
          string.source[ ebp_384 ] = 0;
          string.length = ebp_384;
        }
      }
    }
    assert_failed = 0;
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return string.source;
}
#if 0
#endif
