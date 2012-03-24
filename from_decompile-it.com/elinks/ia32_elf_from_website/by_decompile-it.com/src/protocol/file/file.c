#include "file.c.h"
static struct option_info file_options[5] = { { { 0, 0, { 0 }
, "file", 0, 9, 0, 0, { 0, 135402616, 135472900, 0, 0, 0 }
, "Options specific to local browsing.", "Local files", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, "allow_special_files", 0, 0, 0, 1, { 0, 135402652, 135472932, 0, 0, 0 }
, "Whether to allow reading from non-regular files. Note this can be dangerous; reading /dev/urandom or /dev/zero can ruin your day!", "Allow reading special files", 0, 0, 0 }
, "protocol.file" }
, { { 0, 0, { 0 }
, "show_hidden_files", 0, 0, 0, 1, { 0, 135402784, 135402884, 0, 0, 0 }
, "When set to false, files with name starting with a dot will be hidden in local directory listings.", "Show hidden files in directory listing", 0, 0, 0 }
, "protocol.file" }
, { { 0, 0, { 0 }
, "try_encoding_extensions", 0, 0, 0, 1, { 0, 135402924, 135473002, 0, 0, 0 }
, "When set, if we can't open a file named 'filename', we'll try to open 'filename' with some encoding extension appended (ie. 'filename.gz'); it depends on the supported encodings.", "Try encoding extensions", 0, 0, 0 }
, "protocol.file" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct module file_protocol_module = { "File", file_options, 0, 0, 0, 0, 0 };
void add_dir_entry( struct directory_entry *entry, struct string *page, int pathlen, unsigned char *dircolor )
{
  unsigned char *lnk = &pathlen;
  struct string html_encoded_name;
  struct string uri_encoded_name;
  if ( init_string( &html_encoded_name ) )
  {
    if ( init_string( &uri_encoded_name ) == 0 )
      done_string( &html_encoded_name );
      if ( 0 ^ 0 )
      {
        __stack_chk_fail(  );
      }
      return;
    else
    {
      encode_uri_string( &uri_encoded_name, &lnk[ entry->name ], -1, 1 );
      add_html_to_string( &html_encoded_name, &entry->name[ lnk ], strlen( (char*)entry->name ) - lnk );
      add_html_to_string( &page[0], entry->attrib, strlen( (char*)entry->attrib ) );
      add_to_string( &page[0], "&lt;a href=\"" );
      add_string_to_string( &page[0], &uri_encoded_name );
      if ( entry->attrib == 'd' )
      {
        add_char_to_string( &page[0], 47 );
        lnk = 0;
      }
      else
      {
        lnk = 0;
        if ( entry->attrib == 'l' )
        {
          struct stat st;
          unsigned char buf[1024];
          int readlen;
          if ( readlen == 1024 || readlink( (char*)entry->name, buf, 1024 ) < 1 )
            lnk = 0;
          else
          {
            *(char*)(( ebp_2147483632 + readlink( (char*)entry->name, buf, 1024 ) ) - 1052) = 0;
            lnk = straconcat( " -&gt; " );
          }
          if ( __xstat64( 3, (char*)entry->name, &st.st_dev ) == 0 && ( st.st_mode & 61440 ) == 16384 )
            add_char_to_string( &page[0], 47 );
        }
      }
      add_to_string( &page[0], "\"&gt;" );
      if ( entry->attrib == 'd' && dircolor[0] )
        string_concat( &page[0] );
      add_string_to_string( &page[0], &html_encoded_name );
      done_string( &uri_encoded_name );
      done_string( &html_encoded_name );
      if ( entry->attrib == 'd' && dircolor[0] )
        add_to_string( &page[0], "&lt;/b&gt;&lt;/font&gt;" );
      add_to_string( &page[0], "&lt;/a&gt;" );
      if ( lnk )
      {
        add_html_to_string( &page[0], lnk, strlen( (char*)lnk ) );
        mem_free( (void*)lnk );
        add_char_to_string( &page[0], 10 );
      }
      else
        add_char_to_string( &page[0], 10 );
    }
  }
}
struct connection_state connection_state( enum connection_basic_state  basic )
{
  int eax;
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = edx == -1;
    if ( !(_Bool)( edx != -1 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/state.h";
      errline = 132;
      elinks_internal( "assertion basic != S_ERRNO failed!" );
      *ebp_12 = basic;
      if ( assert_failed )
        goto B2;
    }
    *(int*)(ebp_12 + 4) = 0;
    *ebp_12 = ebp_16;
    return ebp_12;
  }
B2:  assert_failed = 0;
  basic = 0;
  basic = S_INTERNAL;
  return basic;
}
void file_protocol_handler( struct connection *connection )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
#if 0
#endif
