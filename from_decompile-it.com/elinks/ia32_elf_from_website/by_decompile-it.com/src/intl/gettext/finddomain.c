#include "finddomain.c.h"
static struct loaded_l10nfile *_nl_loaded_domains;
struct loaded_l10nfile *_nl_find_domain( unsigned char *dirname, unsigned char *locale, unsigned char *domainname, struct binding *domainbinding )
{
  int edx;
  struct loaded_l10nfile *retval;
  unsigned char *language;
  unsigned char *modifier;
  unsigned char *territory;
  unsigned char *codeset;
  unsigned char *normalized_codeset;
  unsigned char *special;
  unsigned char *sponsor;
  unsigned char *revision;
  unsigned char *alias_value;
  int mask;
  if ( _nl_make_l10nflist( &_nl_loaded_domains, dirname, strlen( (char*)dirname ) + 1, 0, locale, 0, 0, 0, 0, 0, 0, 0, domainname, 0 ) )
  {
    int cnt;
    *(int*)(*(int*)(&eax->decided)) = *(int*)(_nl_make_l10nflist( &_nl_loaded_domains, dirname, strlen( (char*)dirname ) + 1, 0, locale, 0, 0, 0, 0, 0, 0, 0, domainname, 0 ) + 12);
    if ( *(int*)(_nl_make_l10nflist( &_nl_loaded_domains, dirname, strlen( (char*)dirname ) + 1, 0, locale, 0, 0, 0, 0, 0, 0, 0, domainname, 0 ) + 12) == 0 )
    {
      _nl_load_domain( &retval[0], domainbinding );
      if ( retval->data )
      {
        return &retval[0];
      }
    }
    else
    if ( retval->data )
    {
      return &retval[0];
    }
    if ( retval->successor[0] )
    {
      do
      {
        if ( retval->successor[ 0 + 1 + 1 ] == 0 )
          _nl_load_domain( retval->successor[ 0 + 1 + 1 ], &domainbinding[0] );
      }
      while ( !retval->successor[ 0 ] && retval->successor[ 0 + 1 + 1 ] );
      return 0 + 1 < 0 ? &retval[0] : 0;
    }
    else
    {
      return &retval[0];
    }
  }
  else
  {
    if ( !_nl_expand_alias( &locale[0] ) || __strdup( (char*)_nl_expand_alias( &locale[0] ) ) )
    {
      mask = _nl_explode_name( &locale[0], &language, &modifier, &territory, &codeset, &normalized_codeset, &special, &sponsor, &revision );
      retval[0].filename = (unsigned char*)_nl_make_l10nflist( &_nl_loaded_domains, &dirname[0], strlen( &dirname[0] ) + 1, mask, language, territory, codeset, normalized_codeset, modifier, special, sponsor, revision, domainname, 1 );
      if ( _nl_make_l10nflist( &_nl_loaded_domains, &dirname[0], strlen( &dirname[0] ) + 1, mask, language, territory, codeset, normalized_codeset, modifier, special, sponsor, revision, domainname, 1 ) )
      {
        if ( *(int*)(_nl_make_l10nflist( &_nl_loaded_domains, &dirname[0], strlen( &dirname[0] ) + 1, mask, language, territory, codeset, normalized_codeset, modifier, special, sponsor, revision, domainname, 1 ) + 12) == 0 )
        {
          &domainbinding = domainbinding;
          _nl_load_domain( &retval, domainbinding );
        }
        if ( retval->data == 0 && retval->successor[0] )
        {
          do
          {
            if ( retval[1].filename[12] == 0 )
              _nl_load_domain( (int)( &retval[1] ), &domainbinding[0] );
          }
          while ( retval->successor[0]->data == 0 && retval->langdirname[28] );
          alias_value[0] = alias_value[0];
          retval[0].filename = retval[0].filename;
          locale[0] = locale[0];
        }
        if ( alias_value[0] )
          free( &locale[0] );
        if ( ( mask/*.1_1of4*/ & 8 ) & 255 )
        {
          free( normalized_codeset );
        }
        return &retval[0];
      }
      else
      {
        return &retval[0];
      }
    }
    else
    {
      return &retval[0];
    }
  }
}
#if 0
#endif
