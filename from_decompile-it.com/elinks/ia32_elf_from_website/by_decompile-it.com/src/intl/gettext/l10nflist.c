#include "l10nflist.c.h"
struct loaded_l10nfile *_nl_make_l10nflist( struct loaded_l10nfile **l10nfile_list, unsigned char *dirlist, size_t dirlist_len, int mask, unsigned char *language, unsigned char *territory, unsigned char *codeset, unsigned char *normalized_codeset, unsigned char *modifier, unsigned char *special, unsigned char *sponsor, unsigned char *revision, unsigned char *filename, int do_allocate )
{
  int eax;
  int ecx;
  int edx;
  int ebp_28;
#error unstructured control flow
}
unsigned char *_nl_normalize_codeset( unsigned char *codeset, size_t name_len )
{
  int ecx;
  int edx;
  int dh;
  int len;
  int only_digit;
  unsigned char *wp;
  size_t cnt;
  if ( name_len )
  {
    only_digit = 1;
    len = 0;
    cnt = 0;
    codeset[0] = codeset[0];
    do
    {
      cnt++;
    }
    while ( cnt + 1 < name_len );
    if ( malloc( len + 1 + 1 ) )
    {
      wp[0] = malloc( len + 1 + 1 );
      if ( only_digit )
      {
        *(int*)(malloc( len )) = 0x6f7369;
        wp[0] = wp[3];
      }
      if ( name_len )
      {
        cnt = 0;
        do
        {
          if ( ( *(char*)(*(int*)(__ctype_b_loc(  )) + ( *(char*)(codeset[0] + cnt) * 2 ) + 1) & 4 ) & 255 )
          {
            wp[0] = c_tolower( *(char*)(codeset[0] + cnt) );
            wp[0] = wp[1];
            cnt++;
          }
          else
          {
            if ( __ctype_b_loc(  ) - 48 >= 9 )
            {
              wp[0] = __ctype_b_loc(  );
              wp[0] = wp[1];
            }
            cnt++;
            if ( name_len <= cnt + 1 )
              break;
          }
        }
        while ( cnt < name_len );
        wp[0] = wp[0];
      }
      wp[0] = 0;
    }
    return ebp_32;
  }
  only_digit = 1;
}
#if 0
#endif
