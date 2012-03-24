#include "explodename.c.h"
unsigned char *_nl_find_language( unsigned char *name )
{
  if ( name[0] && name[0] != '_' )
  {
    do
    {
    }
    while ( name[0] != '@' && name[0] != '+' && name[0] != ',' && name[0] != '_' && ( name[0] & 255 ) );
  }
  return &name[1];
}
int _nl_explode_name( unsigned char *name, unsigned char **language, unsigned char **modifier, unsigned char **territory, unsigned char **codeset, unsigned char **normalized_codeset, unsigned char **special, unsigned char **sponsor, unsigned char **revision )
{
  int eax;
  int edx;
  enum  { undecided = 0, xpg = 1, cen = 2, } syntax;
  unsigned char *cp;
  int mask;
  modifier[0] = 0;
  territory[0] = 0;
  codeset[0] = 0;
  normalized_codeset[0] = 0;
  special[0] = 0;
  sponsor[0] = 0;
  revision[0] = 0;
  language[0] = name;
  if ( name[0] != '_' && ( name[0] & 255 ) && name[0] != '@' && name[0] != '+' && name[0] != ',' )
  {
    cp[0] = name[0];
    do
    {
      cp[0] = cp[1];
    }
    while ( cp[0] != '_' && ( cp[0] & 255 ) && cp[0] != '@' && cp[0] != '+' && cp[0] != ',' );
    if ( name[0] != cp[0] )
    {
      mask = 0;
      syntax = undecided;
      if ( cp[0] == '_' )
      {
        cp[0] = 0;
        cp[0] = cp[1];
        territory[0] = &cp[1];
        if ( cp[0] != '.' )
        {
          do
          {
            if ( cp[0] & 255 )
            {
              if ( cp[0] != '@' && cp[0] != '+' && cp[0] != ',' && cp[0] != '_' )
              {
                cp[0] = cp[1];
              }
            }
            else
            if ( cp[0] == '.' )
              break;
            mask = 32;
            syntax = undecided;
            if ( cp[0] != '@' )
            {
              if ( syntax != xpg )
              {
                if ( cp[0] == '+' )
                {
                  cp[0] = 0;
                  cp[0] = cp[1];
                  modifier[0] = &cp[1];
                  if ( cp[0] && (unsigned char)( cp[0] ) != '+' && cp[0] != ',' && cp[0] != '_' )
                  {
                    cp[0] = cp[1];
                    for ( ; cp[0]; cp[0] = cp[1] )
                    {
                      if ( cp[0] != '+' )
                      {
                        if ( cp[0] != ',' )
                        {
                          if ( cp[0] == '_' )
                          {
                          }
                          else
                          {
                            //cp[0] = cp[1];
                          }
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                      }
                      mask |= -64;
                      if ( 0 - 43 < 1 )
                      {
                        if ( (unsigned char)( cp[0] ) == '_' )
                        {
                          if ( (unsigned char)( cp[0] ) == '+' )
                          {
                            cp[0] = 0;
                            cp[0] = cp[1];
                            special[0] = &cp[1];
                            if ( cp[0] && cp[0] != ',' )
                            {
                              do
                              {
                              }
                              while ( cp[0] != '_' && cp[0] != ',' && ( cp[0] & 255 ) );
                            }
                            mask |= 4;
                            if ( (unsigned char)( cp[0] ) != ',' )
                            {
                              if ( (unsigned char)( cp[0] ) == '_' )
                                break;
                              break;
                            }
                          }
                          else
                          {
                            if ( (unsigned char)( cp[0] ) != ',' )
                            {
                            }
                          }
                          cp[0] = 0;
                          cp[0] = cp[1];
                          sponsor[0] = &cp[1];
                          if ( cp[0] && cp[0] != '_' )
                          {
                            do
                            {
                              cp[0] = cp[1];
                            }
                            while ( cp[0] != '_' && ( cp[0] & 255 ) );
                          }
                          mask |= 2;
                          if ( (unsigned char)( cp[0] ) == '_' )
                            break;
                          break;
                        }
                        else
                        {
                          if ( 0 == 1 )
                            territory[0] = territory[0];
                            if ( modifier[0] )
                              break;
                            break;
                          else
                            break;
                        }
                      }
                    }
                  }
                  else
                    mask |= -64;
                }
                if ( cp[0] - 43 < 1 )
                {
                }
              }
            }
            else
            {
              cp[0] = 0;
              mask |= -64;
              modifier[0] = cp[0] + 1;
            }
          }
          while ( cp[0] != '.' );
        }
        cp[0] = 0;
        cp[0] = cp[1];
        codeset[0] = &cp[1];
        if ( cp[0] && cp[0] != '@' )
        {
          do
          {
            cp[0] = cp[1];
          }
          while ( cp[0] != '@' && ( 32 & 255 ) );
          if ( cp[0] != cp[0] )
          {
            normalized_codeset[0] = _nl_normalize_codeset( &cp[0], cp[0] - cp[0] );
            if ( strcmp( (char*)codeset[0], (char*)&normalized_codeset ) )
            {
              syntax = xpg;
              mask = 56;
            }
            else
            {
              free( normalized_codeset );
              cp[0] = syntax;
            }
          }
          else
            mask = 48;
        }
        mask = 48;
        syntax = xpg;
      }
    }
  }
  syntax = undecided;
  mask = 0;
}
#if 0
#endif
