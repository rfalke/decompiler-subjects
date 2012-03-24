#include "unix.cpp.h"
void UNIX_free_globals( void )
{
  int eax;
  if ( config )
  {
    if ( config->sysconf )
    {
      pov_free( (void*)config->sysconf, "unix.cpp", 373 );
      config->sysconf = 0;
    }
    if ( config->userconf )
    {
      pov_free( (void*)config->userconf, "unix.cpp", 376 );
      config->userconf = 0;
    }
    if ( config->sysini )
    {
      pov_free( (void*)config->sysini, "unix.cpp", 379 );
      config->sysini = 0;
    }
    if ( config->sysini_old )
    {
      pov_free( (void*)config->sysini_old, "unix.cpp", 381 );
      config->sysini_old = 0;
    }
    if ( config->userini )
    {
      pov_free( (void*)config->userini, "unix.cpp", 384 );
      config->userini = 0;
    }
    if ( config->userini_old )
    {
      pov_free( (void*)config->userini_old, "unix.cpp", 386 );
      config->userini_old = 0;
    }
    if ( config->permitted_paths )
    {
      if ( config->permitted_paths->first )
      {
        while ( 1 )
        {
          if ( ebx )
          {
            pov_free( &eax, "unix.cpp", 1008 );
            ebx = 0;
          }
          pov_free( &ebx, "unix.cpp", 1010 );
          if ( esi == 0 )
            break;
          else
          {
          }
        }
        config->home = (char*)config;
      }
      config->permitted_paths->last = 0;
      config->permitted_paths->first = 0;
      pov_free( (void*)config->permitted_paths, "unix.cpp", 391 );
      config->permitted_paths = 0;
    }
    pov_free( (void*)config, "unix.cpp", 394 );
    config = 0;
  }
  return;
}
char *UNIX_strdup( char *str )
{
  int eax;
  int ecx;
  int edx;
  if ( str == 0 )
  {
    return pov_calloc( 1, 1, "unix.cpp", 427, "UNIX_strdup" );
  }
  if ( ( __MOD(str[0],4) ) == 0 )
    goto B3;
  else
  {
    if ( ( __MOD(str[0],4) ) == 2 )
      goto B5;
    else
    if ( eax < 2 )
    {
      if ( *(char*)(ebx + 1 + 1) )
      {
        str[0] = str[0];
      }
      else
      {
        if ( ( ( ebx + 1 + 1 ) - str[0] ) + 1 >= 4 )
        {
          if ( ( pov_calloc( ( ( ebx + 1 + 1 ) - str[0] ) + 1, 1, "unix.cpp", 430, "UNIX_strdup" ) & 1 ) & 255 )
          {
            return &str[0];
            str[0] = str[1];
          }
          if ( ( pov_calloc( ( ( ebx + 1 + 1 ) - str[0] ) + 1, 1, "unix.cpp", 430, "UNIX_strdup" ) + 1 ) & 2 )
          {
            edi = str[0];
            str[0] = str[2];
            edx -= 2;
          }
          memcpy( *(int*)(0), *(int*)(0), ( ( ( ( ebx + 1 ) - str[0] ) + 1 ) >> 2 ) * 4 );
        }
        if ( ( ( ( ( ebx + 1 + 1 ) - str[0] ) + 1 ) & 2 ) & 255 )
          *(short*)(pov_calloc( ( ( ebx + 1 ) - str[0] ) + 1, 1, "unix.cpp", 430, "UNIX_strdup" )) = str[0];
        if ( ( ( ( ebx + 1 + 1 ) - str[0] ) + 1 ) & 1 )
        {
        }
      }
    }
    else
    if ( str[0] )
    {
    }
B5:    if ( str[1] )
    {
    }
  }
B3:  do
  {
B3:  }
  while ( ( ( str[4] - 0x1010101 ) & ~str[4] & -2139062144 ) == 0 );
  if ( ( ( str[4] - 0x1010101 ) & ~*(int*)(str[0] + 4) & -2139062144 & 32896 ) == 0 )
  {
  }
}
char *UNIX_strndup( char *str, size_t n )
{
  int eax;
  int ecx;
  int edx;
{
  char *s;
  if ( str == 0 || n == 0 )
  {
    return pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
  }
  if ( ( __MOD(str[0],4) ) == 0 )
    goto B5;
  else
  {
    if ( ( __MOD(str[0],4) ) == 2 )
      goto B7;
    else
    if ( eax < 2 )
    {
      if ( *(char*)(ebx + 1 + 1) )
      {
        str[0] = str[0];
      }
      else
      {
        if ( n >= 4 )
        {
          if ( ( pov_malloc( n + 1, "unix.cpp", 469, "UNIX_strndup" ) & 1 ) & 255 )
          {
            *(char*)(pov_malloc( n + 1, "unix.cpp", 469, "UNIX_strndup" )) = str[0];
            str[0] = str[1];
          }
          if ( ( pov_malloc( n + 1, "unix.cpp", 469, "UNIX_strndup" ) + 1 ) & 2 )
          {
            *(short*)(pov_malloc( n + 1, "unix.cpp", 469, "UNIX_strndup" ) + 1) = str[0];
            str[0] = str[2];
          }
          memcpy( *(int*)(0), *(int*)(0), ( n >> 2 ) * 4 );
        }
        if ( ( n & 2 ) & 255 )
          s[0] = str[0];
        if ( n & 1 )
        {
          s[2] = str[ 2 ];
        }
        return (char*)pov_malloc( n + 1, "unix.cpp", 469, "UNIX_strndup" );
      }
    }
    else
    if ( str[0] )
    {
    }
B7:    if ( str[1] )
    {
    }
  }
B5:  do
  {
B5:  }
  while ( ( ( str[4] - 0x1010101 ) & ~str[4] & -2139062144 ) == 0 );
}
}
char *UNIX_stradd( char *s1, char *s2 )
{
  int eax;
  int ecx;
  int edx;
  int ebp_32;
{
  char *s;
  size_t s1len;
  size_t s2len;
  if ( s2 )
  {
    s2len = s2;
    if ( ( __MOD(s2,4) ) == 0 )
      goto B16;
    else
    {
      if ( ( __MOD(s2,4) ) == 2 )
        goto B18;
      else
      if ( eax < 2 )
      {
        if ( s2len/*.1_1of4*/ )
        {
          s2len++;
          s1[0] = s1[0];
        }
        else
        {
          s2len -= s2;
          return s1len + ( s2len - s2 );
        }
      }
      else
      if ( s2len/*.1_1of4*/ )
        s2len++;
B18:      if ( s2len/*.1_1of4*/ )
        s2len++;
    }
B16:    do
    {
B16:      s2len += 4;
    }
    while ( ( ( s2len - 0x1010101 ) & ~s2len & -2139062144 ) == 0 );
    if ( ( ( s2len - 0x1010101 ) & ~s2len & -2139062144 & 32896 ) == 0 )
      s2len += 2;
    s2len = s2len - 3 - ( 0 & 1 );
  }
  else
  {
  }
}
}
char *UNIX_getcwd( void )
{
{
  char *s, *tmp;
  size_t len;
  tmp[0] = s[0];
  len = 256;
  for ( ; s[0] == 0; tmp[0] = s[0] )
  {
    pov_free( &tmp[0], "unix.cpp", 554 );
    len <<= 1;
    //tmp[0] = s[0];
  }
  pov_free( &tmp[0], "unix.cpp", 578 );
  s[0] = s[0];
  return &s[0];
}
}
char *UNIX_canonicalize_path( char *path )
{
  int eax;
  int ecx;
  int edx;
  int ebp_96;
  int ebp_92;
  int ebp_88;
  int ebp_84;
  int ebp_76;
{
  char *s = { }, *tmp1, *tmp2, *tmp3;
  int i;
  struct typedef UNIX_canonicalize_path(const char*)::subst subst strings[5];
  strings[0].match = "%INSTALLDIR%";
  strings->replace = "/usr/share/povray-3.6";
  strings[1].match = "%HOME%";
  strings[2].match = "//";
  strings[2].replace = "/";
  strings[3].match = "/./";
  strings[3].replace = "/";
  strings[1].replace = config[0].home;
  if ( path )
  {
    if ( ( __MOD(path[0],4) ) == 0 )
      goto B5;
    else
    {
      if ( ( __MOD(path[0],4) ) == 2 )
        goto B7;
      else
      if ( eax < 2 )
      {
        if ( *(char*)(esi + 1 + 1) )
        {
        }
        else
        {
          if ( ( ( esi + 1 + 1 ) - path[0] ) + 1 >= 4 )
          {
            if ( ( pov_calloc( ( s[ i ] - path[0] ) + 1, 1, "unix.cpp", 430, "UNIX_strdup" ) & 1 ) & 255 )
            {
              eax[0] = path[0];
              path[0] = path[1];
            }
            if ( edi & 2 )
            {
              edi = path[0];
              path[0] = path[2];
              edx -= 2;
            }
            memcpy( *(int*)(0), &path[0], ( edx >> 2 ) * 4 );
            path[0] = path[0];
          }
          if ( ( ( ( ( esi + 1 + 1 ) - path[0] ) + 1 ) & 2 ) & 255 )
            *(short*)(pov_calloc( ( ( esi + 1 ) - path[0] ) + 1, 1, "unix.cpp", 430, "UNIX_strdup" )) = path[0];
          if ( ( ( ( esi + 1 + 1 ) - path[0] ) + 1 ) & 1 )
          {
          }
          ebp_92 = strings[2].match;
          ebp_96 = "%HOME%";
          ebp_76 = "%INSTALLDIR%";
          s[0] = pov_calloc( ( ( esi + 1 ) - path[0] ) + 1, 1, "unix.cpp", 430, "UNIX_strdup" );
          tmp2[0] = tmp2[0];
          tmp3[0] = strings[2].match;
          while ( strstr( &s[0] ) == 0 )
          {
            if ( s[0] == 0 || s[0] == strstr( &s[0] ) )
            {
              i = pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
            }
            else
            {
              if ( __MOD(s[0],4) )
              {
                i = eax;
                ebp_88 = ebp_100;
                tmp1[0] = eax;
                if ( ebp_100 >= 4 )
                {
                  if ( ( pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" ) & 1 ) & 255 )
                  {
                    tmp1[0] = s[0];
                    ebp_88 = edx - 1;
                  }
                  if ( tmp1[0] & 2 )
                  {
                    tmp1[0] = s[0];
                    ebp_88 -= 2;
                  }
                  memcpy( *(int*)(0), *(int*)(0), ( ebp_88 >> 2 ) * 4 );
                }
                if ( ( ebp_88 & 2 ) & 255 )
                  tmp1[0] = s[0];
                if ( ( ebp_88 & 1 ) & 255 )
                  tmp1[2] = s[ 2 ];
              }
              do
              {
                i = eax;
                ebp_88 = ebp_100;
                tmp1[0] = eax;
              }
              while ( ( ( s[4] - 0x1010101 ) & ~s[4] & -2139062144 ) == 0 );
              edx = edx - 3 - ( 0 & 1 );
              i = eax;
              ebp_88 = ebp_100;
              tmp1[0] = eax;
            }
            tmp2[0] = UNIX_stradd( &i, *(int*)(ebp_92 - 12) );
            if ( ( __MOD(ebp_76,4) ) == 0 )
              goto B64;
            else
            {
              if ( ( __MOD(ebp_76,4) ) != 2 )
              {
                if ( edx < 2 )
                {
                  if ( *(char*)(UNIX_stradd( &i, *(int*)(ebp_92 - 12) ) + 1) )
                  {
                    *(int*)(UNIX_stradd( &i, *(int*)(ebp_92 - 12) ) + 1)++;
                    tmp2[0] = tmp2[0];
                  }
                  else
                  {
                    tmp3[0] = eax;
                    pov_free( &i, "unix.cpp", 822 );
                    pov_free( &tmp2[0], "unix.cpp", 823 );
                    pov_free( &s[0], "unix.cpp", 824 );
                    s[0] = tmp3[0];
                  }
                }
                else
                if ( *ebp_76 )
                  *ebp_76++;
              }
              if ( *(char*)(ebp_76 + 1) )
                *(int*)(ebp_76 + 1)++;
            }
B64:            do
            {
B64:            }
            while ( ( ( *(int*)(ebp_76 + 4) - 0x1010101 ) & ~*(int*)(ebp_76 + 4) & -2139062144 ) == 0 );
            eax[0] = eax - 3 - ( 0 & 1 );
          }
          if ( ebp_96 )
          {
            ebp_92 += 8;
            ebp_76 = ebp_96;
            ebp_96 = *ebp_92;
          }
          else
          {
            strcmp( "./", &s[0] );
            if ( !1 )
            {
              if ( s[0] == '/' )
              {
                strcmp( "../", *(int*)(0) );
                if ( !1 )
                  i = 1;
                  s[0] = s[0];
                  do
                  {
                    if ( *(char*)(s[0] + tmp1[0]) & 255 )
                    {
                      do
                      {
                        if ( eax == '/' )
                          break;
                        else
                        {
                          i++;
                          s[0] = s[0];
                        }
                      }
                      while ( *(char*)(*(char*)(s[0] + tmp1[0]) + i) );
                    }
                    s[0] = i;
                    if ( i == 0 )
                    {
                    }
                    else
                    {
                      if ( ( __MOD(s[0],4) ) == 0 )
                        goto B100;
                      else
                      {
                        if ( ( __MOD(s[0],4) ) == 2 )
                          goto B102;
                        else
                        if ( eax < 2 )
                        {
                          if ( edx )
                          {
                            edx++;
                            s[0] = s[0];
                          }
                          else
                          {
                            ebp_88 = i;
                            tmp1[0] = pov_malloc( i + 1, "unix.cpp", 469, "UNIX_strndup" );
                            s[0] = s[0];
                            if ( i >= 4 )
                            {
                              if ( ( eax & 1 ) & 255 )
                              {
                                tmp1[0] = s[0];
                                ebp_88--;
                              }
                              if ( tmp1[0] & 2 )
                              {
                                tmp1[0] = s[0];
                                ebp_88 -= 2;
                              }
                              memcpy( *(int*)(0), *(int*)(0), ( ebp_88 >> 2 ) * 4 );
                            }
                            if ( ( ebp_88 & 2 ) & 255 )
                              tmp1[0] = s[0];
                            if ( ( ebp_88 & 1 ) & 255 )
                              tmp1[2] = s[ 2 ];
                          }
                        }
                        else
                        if ( s[0] )
                          s[0]++;
B102:                        if ( s[1] )
                          s[1] = s[0] + 1 + 1;
                      }
B100:                      do
                      {
B100:                      }
                      while ( ( ( s[4] - 0x1010101 ) & ~s[4] & -2139062144 ) == 0 );
                      edx = edx - 3 - ( 0 & 1 );
                    }
                    if ( ( __MOD(s[ i ],4) ) == 0 )
                      goto B130;
                    else
                    {
                      if ( ( __MOD(s[ i ],4) ) == 2 )
                        goto B132;
                      else
                      if ( eax < 2 )
                      {
                        if ( s[ i ] )
                        {
                          s[0] = s[0];
                        }
                        else
                        {
                          if ( esi >= 4 )
                          {
                            if ( ( pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" ) & 1 ) & 255 )
                            {
                              *ebp_88 = s[ i ];
                              *(int*)(ebp_88 + 1) = ebp_88 + 1;
                            }
                            if ( ( ( ebp_88 + 1 ) & 2 ) & 255 )
                            {
                              *(short*)(UNIX_strdup(  )) = s[0];
                              *(int*)(UNIX_strdup(  )) += 2;
                              s[0] -= 2;
                            }
                            memcpy( eax, *(int*)(0), ( edx >> 2 ) * 4 );
                          }
                          if ( ( edx & 2 ) & 255 )
                            eax[0] = s[ i ];
                          if ( edx & 1 )
                          {
                          }
                          tmp3[0] = pov_calloc( 256, 1, "unix.cpp", 715, "unix_readlink" );
                          for ( ; readlink( ebp_76, &tmp3[0], ( 256 * 2 ) - 1 ) >= 0; tmp3[0] = pov_calloc( ( 256 * 2 ) * 2, 1, "unix.cpp", 729, "unix_readlink" ) )
                          {
                            if ( s[ i ] + 1 + 1 == pov_calloc( 256, 1, "unix.cpp", 715, "unix_readlink" ) )
                            {
                              pov_free( &tmp3[0], "unix.cpp", 727 );
                              //tmp3[0] = pov_calloc( ( 256 * 2 ) * 2, 1, "unix.cpp", 729, "unix_readlink" );
                            }
                            else
                            {
                              if ( tmp3[0] == '/' )
                              {
                                if ( ( __MOD(tmp3[0],4) ) == 0 )
                                  goto B291;
                                else
                                {
                                  if ( ( __MOD(tmp3[0],4) ) == 2 )
                                    goto B293;
                                  else
                                  if ( eax < 2 )
                                  {
                                    if ( *(char*)(( tmp3[0] - ebp_76 ) + 1) )
                                    {
                                    }
                                    else
                                    {
                                      if ( ebp_92 >= 4 )
                                      {
                                        if ( ( pov_malloc( ebp_92 + 1, "unix.cpp", 469, "UNIX_strndup" ) & 1 ) & 255 )
                                          edx = tmp3[0];
                                        if ( ( pov_malloc( ebp_92 + 1, "unix.cpp", 469, "UNIX_strndup" ) + 1 ) & 2 )
                                        {
                                          edi = tmp3[1];
                                          tmp3[1] = tmp3[0] + 1 + 2;
                                          ebp_92 -= 2;
                                        }
                                        memcpy( *(int*)(0), &tmp3[0], ( ebp_92 >> 2 ) * 4 );
                                      }
                                      if ( ( ebp_92 & 2 ) & 255 )
                                        edi = tmp3[0];
                                      if ( ( ebp_92 & 1 ) & 255 )
                                      {
                                      }
                                      tmp3[0] = edx;
                                      pov_free( &tmp3[0], "unix.cpp", 748 );
                                      tmp3[0] = tmp3[0];
                                    }
                                  }
                                  else
                                  {
                                  }
B293:                                  if ( tmp3[1] )
                                  {
                                  }
                                }
B291:                                do
                                {
B291:                                }
                                while ( ( ( tmp3[4] - 0x1010101 ) & ~tmp3[4] & -2139062144 ) == 0 );
                              }
                              else
                              {
                                if ( ebp_76 == 0 )
                                {
                                  eax[0] = UNIX_strdup( "" );
                                }
                                else
                                {
                                  if ( ( __MOD(ebp_76,4) ) == 0 )
                                    goto B173;
                                  else
                                  {
                                    if ( ( __MOD(ebp_76,4) ) == 2 )
                                      goto B175;
                                    else
                                    if ( eax < 2 )
                                    {
                                      if ( tmp3[1] )
                                      {
                                      }
                                      else
                                      {
                                        if ( ( tmp3[0] + 1 ) - ebp_76 <= 1 )
                                        {
                                          eax[0] = UNIX_strdup(  );
                                        }
                                        else
                                        {
                                          if ( *(char*)(ebp_76 + ( ( tmp3[0] + 1 ) - ebp_76 - 1 )) == '/' )
                                          {
                                            if ( tmp3[0] - ebp_76 != 2 )
                                            {
                                              if ( *(char*)(( 1 + ebp_76 ) - 2) == '/' )
                                              {
                                                ebp_96 = ebp_92;
                                                tmp1[0] = ebp_76;
                                                if ( ebp_92 >= 4 )
                                                {
                                                  if ( ( pov_malloc( ebp_92 + 1, "unix.cpp", 469, "UNIX_strndup" ) & 1 ) & 255 )
                                                    ebp_96 = ebp_92 - 1;
                                                  if ( edi & 2 )
                                                  {
                                                    edi = *(short*)(ebp_76 + 1);
                                                    ebp_96 -= 2;
                                                  }
                                                  memcpy( *(int*)(0), *(int*)(0), ( ebp_96 >> 2 ) * 4 );
                                                }
                                                if ( ( ebp_96 & 2 ) & 255 )
                                                  *(short*)(pov_malloc( ebp_92 + 1, "unix.cpp", 469, "UNIX_strndup" )) = tmp1[0];
                                                if ( ( ebp_96 & 1 ) & 255 )
                                                {
                                                }
                                              }
                                            }
                                            else
                                            {
                                              eax[0] = pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
                                            }
                                          }
                                          do
                                          {
                                            if ( edx - 1 == 0 )
                                            {
                                              eax[0] = pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
                                            }
                                            else
                                            {
                                            }
                                          }
                                          while ( *(char*)(eax - 1) != '/' );
                                          ebp_96 = ebp_92;
                                          tmp1[0] = ebp_76;
                                        }
                                      }
                                    }
                                    else
                                    if ( *ebp_76 )
                                    {
                                    }
B175:                                    if ( *(char*)(ebp_76 + 1) )
                                    {
                                    }
                                  }
B173:                                  do
                                  {
B173:                                  }
                                  while ( ( ( *(int*)(ebp_76 + 4) - 0x1010101 ) & ~*(int*)(ebp_76 + 4) & -2139062144 ) == 0 );
                                }
                                tmp3[0] = eax;
                                pov_free( &tmp3[0], "unix.cpp", 741 );
                                pov_free( ebp_100, "unix.cpp", 742 );
                                pov_free( *ebp_120, "unix.cpp", 743 );
                                tmp3[0] = tmp3[0];
                              }
                              if ( eax & 255 )
                              {
                                pov_free( &s[0], "unix.cpp", 875 );
                                i = *(char*)(UNIX_stradd( &tmp3[0] )) == '/';
                                pov_free( ebp_76, "unix.cpp", 888 );
                                pov_free( ebp_88, "unix.cpp", 889 );
                                pov_free( &tmp3[0], "unix.cpp", 890 );
                                if ( *(char*)(s[0] + i) == 0 )
                                {
                                  s[0] = s[0];
                                  for ( ; strstr( &s[0], "/.." ); s[0] = tmp3[0] )
                                  {
                                    if ( s[0] == 0 || ebp_76 == s[0] )
                                    {
                                    }
                                    else
                                    {
                                      if ( __MOD(s[0],4) )
                                      {
                                        i = 2;
                                        tmp1[0] = pov_malloc( 2 + 1, "unix.cpp", 469, "UNIX_strndup" );
                                        if ( 2 >= 4 )
                                        {
                                          if ( ( eax & 1 ) & 255 )
                                          {
                                            tmp1[0] = s[0];
                                            ebp_84 = i - 1;
                                          }
                                          if ( tmp1[0] & 2 )
                                          {
                                            tmp1[0] = s[0];
                                            ebp_84 -= 2;
                                          }
                                          memcpy( *(int*)(0), *(int*)(0), ( i >> 2 ) * 4 );
                                        }
                                        if ( ( i/*.1_1of4*/ & 2 ) & 255 )
                                          tmp1[0] = s[0];
                                        if ( ( i/*.1_1of4*/ & 1 ) & 255 )
                                          tmp1[2] = s[ 2 ];
                                      }
                                      do
                                      {
                                        i = 2;
                                        tmp1[0] = pov_malloc( 2 + 1, "unix.cpp", 469, "UNIX_strndup" );
                                      }
                                      while ( ( ( s[4] - 0x1010101 ) & ~s[4] & -2139062144 ) == 0 );
                                      edx = edx - 3 - ( 0 & 1 );
                                      i = 2;
                                      tmp1[0] = pov_malloc( 2 + 1, "unix.cpp", 469, "UNIX_strndup" );
                                    }
                                    if ( s[0] == 0 || eax == 0 )
                                    {
                                      tmp2[0] = pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
                                    }
                                    else
                                    {
                                      if ( ( __MOD(s[0],4) ) == 0 )
                                        goto B228;
                                      else
                                      {
                                        if ( ( __MOD(s[0],4) ) == 2 )
                                          goto B230;
                                        else
                                        if ( edx < 2 )
                                        {
                                          if ( *(char*)(2 + 1) )
                                          {
                                            tmp3[0] = tmp3[0];
                                            tmp1[0] = tmp1[0];
                                          }
                                          else
                                          {
                                            i = ( 2 + 1 ) - s[0];
                                            if ( eax < ecx - s[0] )
                                              i = eax;
                                            tmp2[0] = pov_malloc( i + 1, "unix.cpp", 469, "UNIX_strndup" );
                                            ebp_88 = i;
                                            if ( i >= 4 )
                                            {
                                              if ( ( pov_malloc( i + 1, "unix.cpp", 469, "UNIX_strndup" ) & 1 ) & 255 )
                                              {
                                                tmp2[0] = s[0];
                                                ebp_88 = ebp_84 - 1;
                                              }
                                              if ( tmp2[0] & 2 )
                                              {
                                                edi = s[0];
                                                ebp_88 -= 2;
                                              }
                                              memcpy( *(int*)(0), *(int*)(0), ( ebp_88 >> 2 ) * 4 );
                                            }
                                            if ( ( ebp_88 & 2 ) & 255 )
                                              tmp2[0] = s[0];
                                            if ( ( ebp_88 & 1 ) & 255 )
                                              tmp2[2] = s[ 2 ];
                                          }
                                        }
                                        else
                                        if ( s[0] )
                                          s[1] = s[1];
B230:                                        if ( s[1] )
                                          s[1]++;
                                      }
B228:                                      do
                                      {
B228:                                      }
                                      while ( ( ( s[4] - 0x1010101 ) & ~s[4] & -2139062144 ) == 0 );
                                      ecx = ecx - 3 - ( 0 & 1 );
                                    }
                                    tmp3[0] = UNIX_stradd( &tmp2[0], ebp_76 + 3 );
                                    pov_free( ebp_80, "unix.cpp", 901 );
                                    pov_free( &tmp2[0], "unix.cpp", 902 );
                                    pov_free( &s[0], "unix.cpp", 903 );
                                    //s[0] = tmp3[0];
                                  }
                                  if ( strstr( &s[0], "/." ) && *(char*)(strstr( &s[0], "/." ) + 2) == 0 )
                                  {
                                    if ( s[0] == 0 || s[0] == strstr( &s[0], "/." ) )
                                    {
                                      tmp1[0] = pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
                                    }
                                    else
                                    {
                                      if ( ( __MOD(s[0],4) ) == 0 )
                                        goto B328;
                                      else
                                      {
                                        if ( ( __MOD(s[0],4) ) == 2 )
                                          goto B330;
                                        else
                                        if ( ecx < 2 )
                                        {
                                          if ( edx )
                                          {
                                            edx++;
                                          }
                                          else
                                          {
                                            tmp1[0] = eax;
                                            ebp_76 = ebp_100;
                                            s[0] = s[0];
                                            if ( ebp_100 >= 4 )
                                            {
                                              if ( ( eax & 1 ) & 255 )
                                              {
                                                tmp1[0] = s[0];
                                                ebp_76 = edx - 1;
                                              }
                                              if ( ( s[0] + 1 ) & 2 )
                                              {
                                                edi = s[0];
                                                ebp_76 -= 2;
                                              }
                                              memcpy( *(int*)(0), *(int*)(0), ( ebp_76 >> 2 ) * 4 );
                                            }
                                            if ( ( ebp_76 & 2 ) & 255 )
                                              tmp1[0] = s[0];
                                            if ( ( ebp_76 & 1 ) & 255 )
                                              tmp1[2] = s[ 2 ];
                                          }
                                        }
                                        else
                                        if ( s[0] )
                                          s[0]++;
B330:                                        if ( s[1] )
                                          s[1] = s[0] + 1 + 1;
                                      }
B328:                                      do
                                      {
B328:                                      }
                                      while ( ( ( s[4] - 0x1010101 ) & ~s[4] & -2139062144 ) == 0 );
                                      if ( ( ecx & 32896 ) == 0 )
                                      {
                                        ecx >>= 16;
                                        edx += 2;
                                      }
                                      edx = edx - 3 - ( 0 & 1 );
                                    }
                                    pov_free( &s[0], "unix.cpp", 914 );
                                    break;
                                  }
                                }
                                else
                                {
                                  do
                                  {
                                  }
                                  while ( *(char*)(s[0] + i) );
                                }
                              }
                            }
                            i++;
                            pov_free( ebp_76, "unix.cpp", 888 );
                            pov_free( ebp_88, "unix.cpp", 889 );
                            pov_free( &tmp3[0], "unix.cpp", 890 );
                          }
                          tmp3[0] = tmp3[0] = 0;
                          i++;
                          pov_free( ebp_76, "unix.cpp", 888 );
                          pov_free( ebp_88, "unix.cpp", 889 );
                          pov_free( &tmp3[0], "unix.cpp", 890 );
                        }
                      }
                      else
                      if ( s[ i ] )
                      {
                      }
B132:                      if ( s[ i ] )
                      {
                      }
                    }
B130:                    do
                    {
B130:                    }
                    while ( ( ( s[ i ] - 0x1010101 ) & ~s[ i ] & -2139062144 ) == 0 );
                  }
                  while ( *(char*)(s[0] + i) );
              }
              tmp1[0] = UNIX_getcwd(  );
              s[0] = UNIX_stradd( UNIX_getcwd(  ), &s[0] );
              pov_free( &tmp1[0], "unix.cpp", 850 );
            }
            else
            {
              pov_free( (void*)UNIX_getcwd(  ), "unix.cpp", 839 );
            }
            pov_free( &s[0], "unix.cpp" );
            if ( s[0] != '/' )
              i = 0;
              s[0] = s[0];
              do
              {
              }
              while ( *(char*)(s[0] + i) );
            else
              i = 1;
              s[0] = s[0];
              do
              {
              }
              while ( *(char*)(s[0] + i) );
          }
        }
      }
      else
      if ( path[0] )
      {
      }
B7:      if ( path[1] )
      {
      }
    }
B5:    do
    {
B5:    }
    while ( ( ( path[4] - 0x1010101 ) & ~path[4] & -2139062144 ) == 0 );
    if ( ( ( path[4] - 0x1010101 ) & ~*(int*)(path[0] + 4) & -2139062144 & 32896 ) == 0 )
    {
    }
  }
  else
  {
  }
  return &tmp1[0];
}
}
void unix_parse_conf_file( FILE *conf_file, char *conf_name, bool user_mode )
{
  int eax;
  int ecx;
  int edx;
  int ebp_176;
  int ebp_148;
  int ebp_140;
{
  char *line, *line2;
  unsigned long line_number;
  bool user_file_io_rejected;
  enum FileIO  file_io;
  bool file_io_is_set;
  enum ShellOut  shellout;
  bool shellout_is_set;
  PathList *paths;
  enum typedef unix_parse_conf_file(FILE*, const char*, bool)::SectionVal SectionVal  section;
  struct typedef unix_parse_conf_file(FILE*, const char*, bool)::Section Section sections[5];
  struct typedef unix_parse_conf_file(FILE*, const char*, bool)::IOSettings IOSettings io_settings[5];
  struct typedef unix_parse_conf_file(FILE*, const char*, bool)::SHLSettings SHLSettings shl_settings[4];
  memcpy( sections[0].label, "", 40 );
  memcpy( io_settings[0].label, "", 40 );
  memcpy( shl_settings[0].label, "", 32 );
  if ( user_mode )
  {
  }
  else
    paths = config->permitted_paths;
  section = NONE;
  shellout_is_set = 0;
  file_io_is_set = 0;
  user_file_io_rejected = 0;
  line_number = 0;
  while ( feof( conf_file ) == 0 )
  {
    eax = fgetc( conf_file );
    do
    {
      if ( fgetc( conf_file ) == -1 )
        goto B33;
      else
      do
      {
        if ( fgetc( conf_file ) != 10 )
        {
          eax = fgetc( conf_file );
          if ( 256 - 1 < 0 + 1 )
          {
          }
          else
          do
          {
          }
          while ( 0 + 1 <= 256 - 1 );
        }
      }
      while ( fgetc( conf_file ) != -1 );
B33:      ebp_140 = *(char*)(pov_realloc( pov_calloc( 256, 1, "unix.cpp", 1049, "unix_getline" ), 0 + 1 + 1, "unix.cpp", 1063, "unix_getline" ));
      if ( *(char*)(pov_realloc( pov_calloc( 256, 1, "unix.cpp", 1049, "unix_getline" ), 0 + 1 + 1, "unix.cpp", 1063, "unix_getline" )) )
      {
        line[0] = ebp_144;
        do
        {
          if ( isspace( ebp_140 ) == 0 )
          {
            if ( ebp_140 && ebp_140 != ';' )
            {
              line[0] = line[0];
              do
              {
                line[0] = line[1];
                if ( line[0] == 0 )
                {
                  if ( line[0] != line[0] )
                  {
                    if ( ';' )
                    {
                      if ( ebx - esi >= 1 )
                      {
                        do
                        {
                          if ( eax == 0 )
                            goto B61;
                          else
                          {
                          }
                        }
                        while ( edi - 1 >= 1 );
                        if ( esi == ebx )
                        {
                          pov_free( ebp_144, "unix.cpp", 1319 );
                          ebp_148++;
                          if ( ebx == 0 )
                          {
                            pov_free( pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" ), "unix.cpp", 1325 );
                          }
                          else
                          {
                            if ( eax == '[' )
                            {
                              if ( *(int*)(( ebp_2147483632 + ( ( ( ebp_96 == 0 ? 0 : 0 ) + 1 ) << 3 ) ) - 92) == 4 )
                              {
                                __fprintf_chk( stderr, 1, "%s: %s: %lu: unknown '%s' section.\n", "povray", conf_name, ebp_148, &ebx );
                              }
                            }
                            else
                            if ( ebp_152 == 1 )
                            {
                              if ( 0 != 1 )
                              {
                                __fprintf_chk( stderr, 1, "%s: %s: %lu: multiple settings for %s.\n", "povray", conf_name );
                              }
                              if ( esi )
                              {
                                if ( esi == 4 )
                                {
                                  __fprintf_chk( stderr, 1, "%s: %s: %lu: unknown '%s' setting for %s.  ", "povray", conf_name, ebp_148, &ebx, ebp_88 );
                                  if ( user_mode )
                                  {
                                    __fprintf_chk( stderr, 1, "Using system setting '%s'.\n", *(int*)(( ebp_2147483632 + ( config->file_io << 3 ) ) - 136) );
                                    config->file_io = config->file_io;
                                    if ( *(int*)(( ebp_2147483632 + ( config->permitted_paths << 3 ) ) - 132) < config->file_io )
                                    {
                                      __fprintf_chk( stderr, 1, "%s: %s: %lu: the user setting '%s' for %s is less restrictive than the system setting '%s' in '%s'.  Using system setting.\n", "povray", conf_name, ebp_148, *(int*)(( ebp_2147483632 + ( *(int*)(( ebp_2147483632 + ( config->permitted_paths << 3 ) ) - 132) << 3 ) ) - 136), ebp_88, *(int*)(( ebp_2147483632 + ( config->file_io << 3 ) ) - 136), *(int*)(config + 12) );
                                      config->file_io = IO_NONE;
                                    }
                                  }
                                  else
                                  {
                                    __fprintf_chk( stderr, 1, "I/O restrictions are disabled.\n" );
                                    config->home = (char*)config;
                                  }
                                }
                                else
                                {
                                }
                              }
                              if ( user_mode )
                                config->file_io = config->file_io;
                              else
                                config->home = (char*)config;
                            }
                            else
                            {
                              if ( ebp_152 == 2 )
                              {
                                if ( 0 != 1 )
                                {
                                  __fprintf_chk( stderr, 1, "%s: %s: %lu: multiple settings for %s.\n", "povray", conf_name );
                                }
                                if ( esi )
                                {
                                  if ( esi == 3 )
                                  {
                                    __fprintf_chk( stderr, 1, "%s: %s: %lu: unknown '%s' setting for %s.  ", "povray", conf_name, ebp_148, &ebx, ebp_80 );
                                    if ( user_mode )
                                    {
                                      __fprintf_chk( stderr, 1, "Using system setting '%s'.\n", *(int*)(( ebp_2147483632 + ( config->shellout << 3 ) ) - 56) );
                                      config->shellout = config->shellout;
                                      if ( config->shellout == SHL_FORBIDDEN && *(int*)(( ebp_2147483632 + ( config->permitted_paths << 3 ) ) - 52) != 2 )
                                      {
                                        __fprintf_chk( stderr, 1, "%s: %s: %lu: the user setting '%s' for %s is less restrictive than the system '%s' setting in '%s'.  Using system setting.\n", "povray", conf_name, ebp_148, *(int*)(( ebp_2147483632 + ( *(int*)(( ebp_2147483632 + ( ebp_80 << 3 ) ) - 52) << 3 ) ) - 56), ebp_80, shl_settings[2].label, *(int*)(config + 12) );
                                        config->shellout = SHL_ALLOWED;
                                      }
                                    }
                                    else
                                    {
                                      __fprintf_chk( stderr, 1, "Shellout security is disabled.\n" );
                                      config->home = (char*)config;
                                    }
                                  }
                                  else
                                  {
                                  }
                                }
                                if ( user_mode )
                                  config->shellout = config->shellout;
                                else
                                  config->home = (char*)config;
                              }
                              else
                              {
                                if ( ebp_152 == 3 )
                                {
                                  strcmp( "read", (char*)pov_malloc( *(int*)(ebp_164 + 4) + 1, "unix.cpp", 469, "UNIX_strndup" ) );
                                  if ( !1 )
                                  {
                                    __fprintf_chk( stderr, 1, "%s: %s: %lu: unknown '%s' setting.\n", "povray", conf_name, ebp_148, &ebx );
                                  }
                                  else
                                  {
                                    strcmp( "+write", pov_malloc( *(int*)(ebp_164 + 4) + 1, "unix.cpp", 469, "UNIX_strndup" ) + 4 );
                                    if ( eax == 0 )
                                    {
                                      __fprintf_chk( stderr, 1, "%s: %s: %lu: ignored entry: missing equal sign.\n", "povray", conf_name, ebp_148 );
                                    }
                                    else
                                    {
                                      ebp_140 = eax + 1;
                                      if ( *(char*)(eax + 1) )
                                      {
                                        do
                                        {
                                          if ( eax == 0 )
                                          {
                                            if ( ( edx & 255 ) == 0 )
                                            {
                                            }
                                            else
                                            if ( edx != ecx )
                                            {
                                              if ( 0 & 255 )
                                              {
                                                do
                                                {
                                                  if ( *(char*)(ebp_140 + 1 + 1) == 0 )
                                                    goto B188;
                                                  else
                                                  {
                                                  }
                                                }
                                                while ( ecx != eax );
                                                if ( ebp_140 == ebp_140 + 1 )
                                                {
                                                  __fprintf_chk( stderr, 1, "%s: %s: %lu: ignored entry: missing directory.\n", "povray", conf_name, ebp_148 );
                                                }
                                                else
                                                {
                                                  if ( ebp_140 == ebp_140 + 1 )
                                                  {
                                                    eax = pov_calloc( 1, 1, "unix.cpp", 464, "UNIX_strndup" );
                                                  }
                                                  else
                                                  {
                                                    if ( ~strlen(  ) - 1 > 1 )
                                                    {
                                                    }
                                                    ebp_176 = ~strlen(  ) - 1;
                                                    if ( ebp_144 >= 4 )
                                                    {
                                                      if ( ( eax & 1 ) & 255 )
                                                      {
                                                        edi = *ebp_140;
                                                        ebp_176 = ~0 - 1 - 1;
                                                      }
                                                      if ( edi & 2 )
                                                      {
                                                        edi = *ebp_140;
                                                        ebp_176 -= 2;
                                                      }
                                                      memcpy( *(int*)(0), *(int*)(0), ( ebp_176 >> 2 ) * 4 );
                                                    }
                                                    if ( ( ebp_176 & 2 ) & 255 )
                                                      edi = *ebp_140;
                                                    if ( ( ebp_176 & 1 ) & 255 )
                                                    {
                                                    }
                                                  }
                                                  pov_free( ebp_184, "unix.cpp", 1192 );
                                                  pov_free( &esi, "unix.cpp", 1194 );
                                                  *(int*)(pov_malloc( 12, "unix.cpp", 958, "Path" )) = edi;
                                                  *(char*)(pov_malloc( 12, "unix.cpp", 958, "Path" ) + 5) = 1 ? 1 : 0;
                                                  *(char*)(pov_malloc( 12, "unix.cpp", 958, "Path" ) + 4) = *(char*)(pov_malloc( 12, "unix.cpp", 958, "Path" )) == '*' ? 1 : 0;
                                                  *(int*)(pov_malloc( 12, "unix.cpp", 958, "Path" ) + 8) = 0;
                                                  if ( *ebp_164 == 0 )
                                                  {
                                                    *(int*)(ebp_164 + 4) = pov_malloc( 12, "unix.cpp", 958, "Path" );
                                                    *ebp_164 = pov_malloc( 12, "unix.cpp", 958, "Path" );
                                                  }
                                                  else
                                                  {
                                                    *(int*)(*(int*)(ebp_164 + 4) + 8) = pov_malloc( 12, "unix.cpp", 958, "Path" );
                                                    *(int*)(ebp_164 + 4) = pov_malloc( 12, "unix.cpp", 958, "Path" );
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                do
                                                {
                                                }
                                                while ( !eax && *(char*)(ebp_140 + 1 + 1) );
                                              }
                                            }
                                            else
                                            {
                                            }
B188:                                            if ( ecx & 255 )
                                            {
                                              __fprintf_chk( stderr, 1, "%s: %s: %lu: ignored entry: missing closing %c quote.\n", "povray", conf_name, ebp_148, ecx );
                                            }
                                          }
                                          else
                                        }
                                        while ( *(char*)(ebp_140 + 1 + 1) );
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            pov_free( &ebx, "unix.cpp", 1469 );
                            break;
                          }
                        }
                        else
                        {
                          if ( esi == ebx + 1 )
                            continue;
                          else
                          {
                            if ( ( __MOD(line[0],4) ) == 0 )
                              goto B67;
                            else
                            {
                              if ( ( __MOD(line[0],4) ) == 2 )
                                goto B69;
                              else
                              if ( eax < 2 )
                              {
                                if ( *(char*)(0 + 1) )
                                {
                                }
                                else
                                {
                                  ebp_140 = ebp_184;
                                  if ( ebp_184 >= 4 )
                                  {
                                    if ( ( eax & 1 ) & 255 )
                                    {
                                      ebx = esi;
                                      ebp_140 = edx - 1;
                                      if ( ( ( ebx + 1 ) & 2 ) == 0 )
                                        memcpy( *(int*)(0), *(int*)(0), ( ebp_140 >> 2 ) * 4 );
                                    }
                                    else
                                    if ( ( edi & 2 ) == 0 )
                                      continue;
                                    edi = esi;
                                    ebp_140 -= 2;
                                  }
                                  if ( ( ebp_140 & 2 ) & 255 )
                                    edi = line[0];
                                  if ( ( ebp_140 & 1 ) & 255 )
                                  {
                                  }
                                  pov_free( ebp_144, "unix.cpp", 1319 );
                                  ebp_148++;
                                }
                              }
                              else
                              if ( line[0] )
                                *(int*)(esi + 1) = line[0] + 1;
B69:                              if ( line[1] )
                                line[1] = line[0] + 1 + 1;
                            }
B67:                            do
                            {
B67:                            }
                            while ( ( ( line[4] - 0x1010101 ) & ~line[4] & -2139062144 ) == 0 );
                            edx = edx - 3 - ( 0 & 1 );
                          }
                        }
                      }
B61:                      if ( esi == ebx )
                        continue;
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
                else
              }
              while ( fgetc( conf_file ) != ';' );
              if ( line[0] != line[0] )
              {
              }
            }
          }
          else
          {
            line[0] = line[1];
            ebp_140 = line[1];
          }
        }
        while ( line[0] );
      }
      else
      {
      }
      ebx = line[0];
    }
    while ( 0 + 1 <= 256 - 1 );
  }
  if ( user_mode )
  {
    if ( ebp_166 )
    {
      if ( *ebp_164 )
      {
        while ( ebx == 0 )
        {
          pov_free( &ebx, "unix.cpp", 1010 );
          if ( esi == 0 )
            goto B26;
        }
        pov_free( &eax, "unix.cpp", 1008 );
        ebx = 0;
        pov_free( &ebx, "unix.cpp", 1010 );
      }
B26:      *(int*)(ebp_164 + 4) = 0;
      *ebp_164 = 0;
      pov_free( ebp_164, "unix.cpp", 1488 );
      __fprintf_chk( stderr, 1, "%s: %s: user permitted paths are ignored.  Using system paths.\n", "povray", conf_name );
      return;
    }
    else
    {
      if ( config->permitted_paths[0].first )
      {
        while ( 1 )
        {
          if ( ebx )
          {
            pov_free( &eax, "unix.cpp", 1008 );
            ebx = 0;
          }
          pov_free( &ebx, "unix.cpp", 1010 );
          if ( esi == 0 )
            break;
          else
          {
          }
        }
        config->home = (char*)config;
      }
      config->permitted_paths->last = 0;
      config->permitted_paths->first = 0;
      pov_free( (void*)config->permitted_paths, "unix.cpp", 1497 );
      config->permitted_paths = ebp_164;
    }
  }
  return;
}
}
int unix_parse_ini_file( char *filename, struct ProcessRenderOptions &renderopts, POVMSObjectPtr renderoptsobject )
{
  if ( filename[0] && ( File_Exist( &filename[0] ) & 255 ) == 0 )
  {
    return -8;
  }
  return (int)( &renderopts[0] )->ParseFile( &filename[0], renderoptsobject );
}
bool unix_subdir( char *Filename, PathList *list, bool write )
{
  int edx;
  int ebp_44;
  int ebp_32;
{
  char *dirname, *pathname;
  Path *path;
  if ( Filename[0] && (list) )
  {
    do
    {
      if ( path->descend == 0 )
      {
        if ( ( __MOD(Filename[0],4) ) == 0 )
          goto B26;
        else
        {
          if ( ( __MOD(Filename[0],4) ) == 2 )
            goto B28;
          else
          if ( ccdep1 < ccdep2 )
          {
            if ( Filename[0] )
            {
            }
            else
            {
              if ( Filename[0] - Filename[0] <= 1 )
              {
                Filename[0] = Filename[0];
                if ( edi >= 4 )
                {
                  if ( ( Filename[0] & 1 ) & 255 )
                  {
                    edx = Filename[0];
                    Filename[0]++;
                  }
                  if ( edi & 2 )
                  {
                    edi = Filename[0];
                    Filename[0] = Filename[2];
                    ebp_32 -= 2;
                  }
                  memcpy( *(int*)(0), &Filename[0], ( ebp_32 >> 2 ) * 4 );
                  Filename[0] = Filename[0];
                }
                if ( ( ebp_32 & 2 ) & 255 )
                  edi = Filename[0];
                if ( ( ebp_32 & 1 ) & 255 )
                {
                }
              }
              else
              {
                if ( *(char*)(Filename[0] + ( Filename[0] - Filename[0] - 1 )) == '/' )
                {
                  if ( esi != 2 )
                  {
                    if ( *(char*)(( esi + eax ) - 2) == '/' )
                    {
                      ebp_32 = ebp_56;
                      Filename[0] = Filename[0];
                      if ( ebp_56 >= 4 )
                      {
                        if ( ( eax & 1 ) & 255 )
                        {
                          Filename[0] = Filename[0];
                          Filename[0]++;
                          ebp_32 = edx - 1;
                        }
                        if ( edi & 2 )
                        {
                          edi = Filename[0];
                          Filename[0] = Filename[2];
                          ebp_32 -= 2;
                        }
                        memcpy( *(int*)(0), *(int*)(0), ( ebp_32 >> 2 ) * 4 );
                      }
                      if ( ( ebp_32 & 2 ) & 255 )
                        edi = Filename[0];
                      if ( ( ebp_32 & 1 ) & 255 )
                      {
                      }
                    }
                  }
                  else
                  {
                  }
                }
                do
                {
                  if ( edx - 1 == 0 )
                  {
                  }
                  else
                  {
                  }
                }
                while ( *(char*)(eax - 1) != '/' );
                ebp_32 = ebp_56;
                Filename[0] = Filename[0];
              }
              ebx = path->str;
              if ( ( __MOD(path->str,4) ) == 0 )
                goto B55;
              else
              {
                if ( ( __MOD(path->str,4) ) == 2 )
                  goto B57;
                else
                if ( edx < 2 )
                {
                  if ( eax )
                  {
                  }
                  else
                  {
                    if ( path && ( eax - 1 ) )
                    {
                      ebp_44 = ebp_32;
                      if ( ebp_32 >= 4 )
                      {
                        if ( ( edx & 1 ) & 255 )
                        {
                          Filename[0] = path->str;
                          ebp_44 = ebp_32 - 1;
                        }
                        if ( edi & 2 )
                        {
                          Filename[0] = eax;
                          ebp_44 -= 2;
                        }
                        memcpy( *(int*)(0), eax, ( ebp_44 >> 2 ) * 4 );
                      }
                      if ( ( ebp_44 & 2 ) & 255 )
                        *(short*)(pov_malloc( ebp_32 + 1, "unix.cpp", 469, "UNIX_strndup" )) = path->Path;
                      if ( ( ebp_44 & 1 ) & 255 )
                      {
                      }
                    }
                    else
                    {
                    }
                    if ( write == 0 || path->writable )
                    {
                      *ebp_56 = pov_malloc( ebp_32 + 1, "unix.cpp", 469, "UNIX_strndup" );
                      if ( eax == 0 )
                      {
                        pov_free( ebp_40, "unix.cpp", 1845 );
                        pov_free( ebp_56, "unix.cpp", 1846 );
                        break;
                      }
                      pov_free( ebp_40, "unix.cpp", 1852 );
                      pov_free( ebp_56, "unix.cpp", 1853 );
                    }
                  }
                }
                else
                if ( path->str )
                {
                }
B57:                if ( path->str[1] )
                {
                }
              }
B55:              do
              {
B55:              }
              while ( ( ( path->descend - 0x1010101 ) & ~path->descend & -2139062144 ) == 0 );
            }
          }
          else
          if ( Filename[0] )
          {
          }
B28:          if ( Filename[1] )
          {
          }
        }
B26:        do
        {
B26:        }
        while ( ( ( Filename[4] - 0x1010101 ) & ~Filename[4] & -2139062144 ) == 0 );
      }
      else
      {
        if ( write == 0 || path->writable )
        {
          if ( ( __MOD(path->str,4) ) == 0 )
            goto B10;
          else
          {
            if ( ( __MOD(path->str,4) ) == 2 )
              goto B12;
            else
            if ( edx < 2 )
            {
              if ( Filename[1] )
              {
              }
              else
              {
                if ( strncmp( &Filename[0], path->str, ( Filename + 1 ) - path->str ) == 0 )
                {
                  break;
                }
              }
            }
            else
            if ( path->str )
            {
            }
B12:            if ( path->str[1] )
            {
            }
          }
B10:          do
          {
B10:          }
          while ( ( ( path->descend - 0x1010101 ) & ~path->descend & -2139062144 ) == 0 );
          if ( ( ( path->descend - 0x1010101 ) & ~*(int*)(path->str + 4) & -2139062144 & 32896 ) == 0 )
            edx >>= 16;
          edx <<= 1;
        }
      }
      path = path->next;
    }
    while ( path->next );
  }
  return 0;
}
}
int UNIX_allow_file_read( char *Filename, unsigned int FileType )
{
  int eax;
  int edx;
{
  char *filename;
  char *errormsg;
  if ( config->file_io <= 2 )
  {
    return 1;
  }
  if ( Filename[0] )
  {
    filename[0] = UNIX_canonicalize_path( &Filename[0] );
    if ( unix_subdir( UNIX_canonicalize_path( &Filename[0] ), config->permitted_paths, 0 ) & 255 )
    {
      pov_free( &filename[0], "unix.cpp", 1916 );
      return 1;
    }
    errormsg[0] = pov_tsprintf( "Reading from '%s' is not permitted.  Check the configuration in '%s'." );
    pov_free( &filename[0], "unix.cpp", 1927 );
    UNIX_free_globals(  );
    if ( no_error_call )
    {
      __fprintf_chk( stderr, 1, "%s: %s\n", "povray", &errormsg[0] );
      exit( 1 );
    }
    Error( "%s" );
  }
  return 0;
}
}
int UNIX_allow_file_write( char *Filename, unsigned int FileType )
{
  int eax;
  int edx;
{
  char *filename;
  char *errormsg;
  if ( Filename )
  {
    filename[0] = UNIX_canonicalize_path( &Filename[0] );
    if ( ( config->sysconf && strcmp( config->sysconf, &filename[0] ) == 0 ) || ( config->userconf && strcmp( config->userconf, &filename[0] ) == 0 ) )
    {
      errormsg[0] = pov_tsprintf( "Writing to '%s' is not permitted.\n" );
    }
    else
    {
      if ( config->file_io <= 1 )
      {
      }
      else
      {
        if ( unix_subdir( &filename[0], config->permitted_paths, 1 ) & 255 )
        {
        }
        else
        {
        }
      }
      pov_free( &filename[0], "unix.cpp" );
      return 1;
    }
    pov_free( &filename[0], "unix.cpp" );
    UNIX_free_globals(  );
    if ( no_error_call )
    {
      __fprintf_chk( stderr, 1, "%s: %s\n", "povray", pov_tsprintf( "Writing to '%s' is not permitted.  Check the configuration in '%s'.\n" ) );
      exit( 1 );
    }
    Error( "%s" );
    pov_free( &filename[0], "unix.cpp" );
    return 1;
  }
  return 0;
}
}
char *unix_try_temp_file( char *Filename )
{
  int ecx;
  int edx;
  int ebp_36;
{
  char *filename, *basename, *tmp;
  Path *path;
  if ( Filename[0] == 0 )
  {
  }
  if ( ( __MOD(Filename[0],4) ) == 0 )
    goto B6;
  else
  {
    if ( ( __MOD(Filename[0],4) ) != 2 )
    {
      if ( eax < 2 )
      {
        if ( *(char*)(edi + 1 + 1) )
        {
        }
        else
        {
          if ( ( edi + 1 + 1 ) - Filename[0] <= 1 )
          {
          }
          else
          {
            if ( *(char*)(Filename[0] + ( ( ( ( edi + 1 ) - Filename[0] ) + 1 ) - Filename[0] - 1 )) != '/' )
            {
            }
            else
            if ( filename[0] - Filename[0] != 2 )
            {
              if ( Filename[ basename[0] - 2 ] == '/' )
              {
                if ( Filename[0] + esi + 1 == 0 || eax == 0 )
                {
                }
                else
                {
                  if ( __MOD(esi,4) )
                  {
                    if ( edx == 2 )
                      goto B32;
                    else
                    if ( edx >= 2 )
                    {
                      if ( esi )
                      {
                      }
                      else
                      {
                        basename[0] = eax;
                        if ( ebx >= 4 )
                        {
                          if ( basename[0] & 1 )
                            basename[0] = esi;
                          if ( edi & 2 )
                            basename[0] = *(short*)(Filename[0] + Filename[0] + 1);
                          memcpy( *(int*)(0), *(int*)(0), ( Filename[0] >> 2 ) * 4 );
                        }
                        if ( ( eax & 2 ) & 255 )
                          basename[0] = esi;
                        if ( ( eax & 1 ) & 255 )
                          basename[2] = *(char*)(esi + edx);
                        if ( config->permitted_paths == 0 )
                        {
                          path = 0;
                          filename[0] = ebp_28;
                          while ( ( config->sysconf && strcmp( config->sysconf, &filename[0] ) == 0 ) || ( config->userconf && strcmp( config->userconf, &filename[0] ) == 0 ) || ( config->file_io > 1 && ( unix_subdir( &filename[0], config->permitted_paths, 1 ) & 255 ) == 0 ) )
                          {
                            if ( path[0].str )
                            {
                              do
                              {
                                if ( path->writable )
                                {
                                  pov_free( &filename[0], "unix.cpp", 2130 );
                                  pov_free( *ebp_56, "unix.cpp", 2136 );
                                  break;
                                }
                                else
                              }
                              while ( path->next );
                            }
                            pov_free( ( filename - 0x1010101 ) & ~filename & -2139062144, "unix.cpp", 2121 );
                            pov_free( &filename, "unix.cpp", 2122 );
                            *(char*)(pov_calloc( 1, 1, "unix.cpp", 430, "UNIX_strdup" )) = 0;
                            return pov_calloc( 1, 1, "unix.cpp", 430, "UNIX_strdup" );
                          }
                          pov_free( ( filename - 0x1010101 ) & ~filename & -2139062144, "unix.cpp", 2106 );
                        }
                        else
                        {
                          path = config->permitted_paths->first;
                          filename[0] = ebp_28;
                        }
                      }
                    }
                    else
                    {
                      if ( Filename[1] )
                      {
                      }
                    }
B32:                    if ( ebx )
                    {
                    }
                  }
                  do
                  {
                  }
                  while ( ( ( ebx - 0x1010101 ) & ~ebx & -2139062144 ) == 0 );
                  if ( ( edx & 32896 ) == 0 )
                  {
                  }
                }
              }
            }
            else
            {
              ebp_36 = ebp_40;
              if ( ebp_40 >= 4 )
              {
                if ( ( pov_malloc( ( basename[0] - 2 ) + 1, "unix.cpp", 469, "UNIX_strndup" ) & 1 ) & 255 )
                {
                  edi = Filename[0];
                  Filename[0] = Filename[ 1 ];
                  ebp_36 = edx - 1;
                }
                if ( edi & 2 )
                {
                  edi = Filename[0];
                  Filename[0] = Filename[ 1 * 2 ];
                  ebp_36 -= 2;
                }
                memcpy( *(int*)(0), *(int*)(0), ( ebp_36 >> 2 ) * 4 );
              }
              if ( ( ebp_36 & 2 ) & 255 )
                edi = Filename[0];
              if ( ( ebp_36 & 1 ) & 255 )
              {
              }
            }
            do
            {
              if ( eax - 1 == 0 )
              {
                ebp_36 = ebp_40;
              }
              else
              {
              }
            }
            while ( *(char*)(edx - 1) != '/' );
          }
          if ( config->permitted_paths == 0 )
          {
            path = 0;
            filename[0] = ebp_28;
          }
          else
          {
            path = config->permitted_paths->first;
            filename[0] = ebp_28;
          }
        }
      }
      else
      if ( Filename[0] )
      {
      }
    }
    if ( Filename[1] )
    {
    }
  }
B6:  do
  {
B6:  }
  while ( ( ( Filename[4] - 0x1010101 ) & ~Filename[4] & -2139062144 ) == 0 );
  if ( ( ( Filename[4] - 0x1010101 ) & ~*(int*)(Filename[0] + 4) & -2139062144 & 32896 ) == 0 )
  {
  }
  return &filename[0];
}
}
int UNIX_system( char *string )
{
  if ( config->shellout > 1 )
  {
    Warning( 350, "Shellout not allowed under your configuration." );
    return -1;
  }
}
void UNIX_startup_povray( void )
{
  UNIX_finish_povray = &POV_Std_Finish_Povray;
  UNIX_display_init = &POV_Std_Display_Init;
  UNIX_display_plot = &POV_Std_Display_Plot;
  UNIX_display_plot_rect = &POV_Std_Display_Plot_Rect;
  UNIX_display_plot_box = &POV_Std_Display_Plot_Box;
  UNIX_display_finished = &POV_Std_Display_Finished;
  UNIX_display_close = &POV_Std_Display_Close;
  UNIX_test_abort = &POV_Std_Test_Abort;
  if ( is_using_xwin )
  {
    UNIX_finish_povray = &XWIN_finish_povray;
    UNIX_display_init = &XWIN_display_init;
    UNIX_display_plot = &XWIN_display_plot;
    UNIX_display_plot_rect = &XWIN_display_plot_rect;
    UNIX_display_plot_box = &XWIN_display_plot_box;
    UNIX_display_finished = &XWIN_display_finished;
    UNIX_display_close = &XWIN_display_close;
    UNIX_test_abort = &XWIN_test_abort;
  }
  return;
}
void POV_Std_Finish_Povray( void )
{
  return;
}
int POV_Std_Test_Abort( void )
{
  return 0;
}
void UNIX_timer_start( void )
{
  gettimeofday( &hstart.tv_sec, 0 );
  return;
}
void UNIX_timer_stop( void )
{
  gettimeofday( &hstop.tv_sec, 0 );
  return;
}
int UNIX_timer_count( void )
{
  return ( ( (/*HI*/int)( ( ( hstop.tv_usec + 5 ) - hstart.tv_usec ) * 0x66666667 ) >> 2 ) - ( ( ( hstop.tv_usec + 5 ) - hstart.tv_usec ) >> 31 ) ) + ( ( hstop.tv_sec - hstart.tv_sec ) * 0x186a0 );
}
void UNIX_abort_start( void )
{
  int eax;
  int ecx;
  int edx;
  signal( 15, &UNIX_abort_handler );
  signal( 2, &UNIX_abort_handler );
  signal( 13, &UNIX_abort_handler );
  return;
}
void UNIX_abort_handler( int signum )
{
  int eax;
  int ecx;
  int edx;
  signal( 15, &UNIX_abort_handler );
  signal( 2, &UNIX_abort_handler );
  signal( 13, &UNIX_abort_handler );
  if ( signum >= 1 )
  {
    Stop_Flag++;
    if ( Stop_Flag <= 4 )
    {
      switch ( signum )
      {
      case 2:
        PossibleError( "Got %d SIGINT." );
        if ( Stop_Flag > 10 )
        {
          signal( 15, 0 );
          signal( 2, 0 );
          signal( 13, 0 );
          return;
        }
        return;
        break;
      case 13:
        PossibleError( "Got %d SIGPIPE." );
        if ( Stop_Flag > 10 )
          continue;
        return;
        break;
      case 15:
        PossibleError( "Got %d SIGTERM." );
        if ( Stop_Flag > 10 )
          continue;
        return;
        break;
      default:
        PossibleError( "Got %d unknown signal (%d)." );
        if ( Stop_Flag > 10 )
          continue;
        return;
        break;
      }
    }
  }
  if ( signum )
  {
  }
}
int main( int argc, char **argv )
{
using namespace pov_base;
using namespace pov_frontend;
using namespace pov;
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
#if 0
#endif
