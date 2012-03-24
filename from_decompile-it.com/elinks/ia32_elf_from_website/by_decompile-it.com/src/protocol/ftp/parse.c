#include "parse.c.h"
struct ftp_file_info *parse_ftp_winnt_response( struct ftp_file_info *info, unsigned char *src, int len )
{
  int eax;
  int ecx;
  int edx;
  struct tm mtime;
  unsigned char *end;
  if ( len > 39 )
  {
    info->name.source = &src[39];
    info->name.length = len - 39;
    memset( &mtime.tm_sec, 0, 44 );
    mtime.tm_isdst = -1;
    if ( src < src + len && src[0] - 48 >= 9 )
    {
      end[0] = src + len;
      do
      {
      }
      while ( src[1] + 1 < end[0] && src[0] - 48 >= 9 );
      info[0] = info[0];
      src++;
      if ( ebp_100 < 1 && ( ccdep1 < ccdep2 || eax <= 12 ) )
      {
        if ( edx < 1 )
        {
          if ( ccdep2 <= ccdep1 )
          {
            if ( eax < 1 )
            {
            }
          }
        }
      }
    }
    else
      src = src;
    if ( src[1] + 2 < src + len )
    {
      mtime.tm_mon = -1;
      if ( src[1] == '-' )
      {
        src = src[1] + 1;
        parse_day( &src, src + len );
        if ( src[2] < src + len )
        {
          mtime.tm_mday = parse_day( &src, src + len );
          if ( src[0] == '-' )
          {
            src++;
            mtime.tm_year = parse_year( &src, src + len );
            if ( src < src + len && mtime.tm_year != -1 )
            {
              do
              {
                if ( src[0] != ' ' )
                {
                  if ( parse_time( &src, &mtime, src + len ) )
                  {
                    info->mtime = mktime( &mtime.tm_sec );
                    src[0] = src;
                    while ( src < src + len && src[1] != ' ' )
                    {
                      src++;
                    }
                    return &src[1];
                  }
                }
                else
                {
                  src = src[1] + 1;
                }
              }
              while ( src[1] + 1 < src + len );
            }
          }
        }
      }
    }
  }
  info[0].type = 0;
}
struct ftp_file_info *parse_ftp_file_info( struct ftp_file_info *info, unsigned char *src, int len )
{
  int eax;
  int ecx;
  int edx;
  int dh;
  if ( assert_failed == 0 )
  {
    if ( src[0] && info && len >= 1 )
    {
      assert_failed = 0;
      if ( src[0] < 'd' )
        len = len;
        if ( src[0] == 'p' || src[0] == 's' || src[0] == 'l' )
        {
          if ( src[0] == 'd' || src[0] == 'l' || src[0] == '-' )
            info[0].type = src[0];
          else
            info[0].type = FTP_FILE_UNKNOWN;
          memset( ebp_76, 0, 44 );
          if ( src[1] < src[ len ] )
          {
            while ( src[ len ] <= edi + 1 )
            {
              switch ( 0 )
              {
              case 0:
                if ( ebx - eax == 9 )
                {
                  if ( eax != '-' )
                  {
                    if ( ecx != 'r' )
                    {
                      info->permissions = edx;
                      while ( ebx < esi )
                      {
                        if ( ebx != ' ' )
                        {
                          break;
                        }
                        else
                        {
                        }
                      }
                      break;
                    }
                  }
                  else
                  {
                  }
                  if ( src[1] != '-' )
                  {
                    if ( src[1] == 'w' )
                    {
                    }
                  }
                  if ( src[2] != 's' )
                  {
                    if ( ccdep1 < ccdep2 )
                    {
                      if ( info->name.length/*.1_1of4*/ != 'x' )
                        continue;
                    }
                    else
                    if ( src[2] != '-' )
                    {
                      if ( src[2] == 'S' )
                      {
                        if ( src[3] != '-' )
                        {
                          if ( src[3] == 'r' )
                          {
                          }
                        }
                        if ( src[4] != '-' )
                        {
                          if ( src[4] == 'w' )
                          {
                          }
                        }
                        if ( src[5] != 's' )
                        {
                          if ( ccdep1 < ccdep2 )
                          {
                            if ( info->name.length/*.1_1of4*/ == 'x' )
                            {
                            }
                          }
                          else
                          if ( src[5] != '-' )
                          {
                            if ( src[5] == 'S' )
                            {
                              if ( src[6] != '-' )
                              {
                                if ( src[6] == 'r' )
                                {
                                }
                              }
                              if ( src[7] != '-' )
                              {
                                if ( src[7] == 'w' )
                                {
                                }
                              }
                              if ( src[8] != 'l' )
                              {
                                if ( ccdep1 < ccdep2 )
                                {
                                  if ( info->name.length/*.1_1of4*/ != 't' )
                                  {
                                    if ( info->name.length/*.1_1of4*/ != 'x' )
                                      continue;
                                  }
                                  else
                                  {
                                  }
                                  edx |= 1;
                                }
                                else
                                if ( src[8] != 'L' )
                                {
                                  if ( src[8] != 'T' )
                                  {
                                    if ( src[8] == '-' )
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }
                                }
                              }
                              edx &= -9;
                            }
                          }
                        }
                        else
                        {
                        }
                      }
                    }
                  }
                  else
                  {
                  }
                }
                break;
              case 1:
                if ( ( (unsigned int)(info->size << 32) & (unsigned int)(info->size & 0xFFFFFFFF) ) != -1 && ebx - eax == 3 && parse_month( ebp_28, (unsigned char*)info ) != -1 )
                {
                }
                else
                {
                  if ( *ebp_28 - 48 < 9 )
                  {
                    info->size = (long long)-1;
                  }
                  else
                  {
                    if ( ecx < ebx )
                    {
                      do
                      {
                      }
                      while ( ecx + 1 < edi && ecx - 48 >= 9 );
                      ebp_136 = ebp_136;
                      if ( ebp_132 < 0 )
                      {
                      }
                    }
                    else
                    {
                    }
                    info->size = (long long)0;
                  }
                }
                break;
              case 2:
                break;
              case 3:
                if ( eax - 48 >= 9 )
                {
                  if ( eax == 0 )
                  {
                  }
                  else
                  {
                    if ( eax == 0 )
                    {
                    }
                  }
                }
                break;
              case 4:
                info->name.source = (unsigned char*)eax;
                info->name.length = esi - ebp_28;
                if ( info[0].type == 100 )
                {
                  if ( esi >= 1 && *(char*)(( esi + eax ) - 1) == '/' )
                    info->name.length = esi - 1;
                }
                else
                if ( info[0].type != 108 )
                {
                  if ( info[0].type == 45 && ( ( info->permissions/*.1_1of4*/ & 73 ) & 255 ) && len - src >= 1 && *(char*)(( ( len - src ) + info->name.source ) - 1) == '*' )
                    info->name.length = len - src - 1;
                }
                else
                {
                  if ( ebx )
                  {
                    if ( ebx + 3 < edx )
                    {
                      ebx = ebx;
                      do
                      {
                        strcmp( " -&gt; ", (char*)eax );
                        if ( 1 )
                        {
                          info->symlink.source = eax + 4;
                          info->symlink.length = ebx - 4 - eax;
                          info->name.length = eax - ebp_28;
                          if ( eax == 0 )
                            break;
                          if ( info->name.length >= 1 && *(char*)(( info->name.length + *(int*)(info + 4) ) - 1) == '@' )
                            info->name.length = parse_month( ebp_28, (unsigned char*)info ) - 1;
                          if ( info->symlink.length >= 1 && *(char*)(( info->symlink.length + *(int*)(info + 12) ) - 1) == '/' )
                            info->symlink.length--;
                        }
                        else
                        {
                          if ( eax == 0 )
                            goto B223;
                          else
                        }
                      }
                      while ( ebx <= eax + 3 );
                    }
                    info->symlink.source = info->symlink.source;
                  }
B223:                  info->symlink.source = info->symlink.source;
                }
                if ( !ebp_56 && *(int*)(localtime( ebp_32 ) + 16) < ebp_60 )
                {
                }
                info->bits_at_32/*.1_1of4*/ |= 1;
                info->mtime = mktime( ebp_76 );
                return info;
                break;
              default:
                break;
              }
            }
            do
            {
            }
            while ( edi != ' ' && edi + 1 < ebp_104 );
            switch ( 0 )
            {
            case 0:
              break;
            case 1:
              break;
            case 2:
              break;
            case 3:
              break;
            case 4:
              break;
            default:
              break;
            }
          }
          else
          {
            info = 0;
            return info;
          }
        }
        else
        {
          if ( memchr( &src[0], 59, len ) )
          {
            if ( memchr( &src[0], 59, len ) == 0 )
            {
              info = 0;
              return info;
            }
            info->name.source = &src[0];
            info->name.length = ebp_96 - ebp_28;
            if ( ebp_96 - ebp_28 > 4 )
            {
              strcmp( ".DIR", memchr( &src[0], 59, len ) - 4 );
              if ( 1 )
              {
                info[0].type = FTP_FILE_DIRECTORY;
                info->name.length = memchr( &src[0], 59, len ) - src[0] - 4;
                if ( edx <= ebp_96 )
                {
                  info = 0;
                  return info;
                }
                if ( *ebp_96 != ' ' )
                {
                  do
                  {
                    if ( src[ len ] <= memchr( &src[0], 59, len ) + 1 + 1 )
                      break;
                  }
                  while ( *(char*)(memchr( &src[0], 59, len ) + 1) != ' ' );
                }
                do
                {
                  if ( edx <= eax + 1 )
                    break;
                }
                while ( eax != ' ' );
                do
                {
                  if ( eax == ' ' )
                  {
                    do
                    {
                      if ( edx <= eax + 1 )
                        break;
                    }
                    while ( eax != ' ' );
                    info->mtime = parse_date( ebp_28, &src[ len ], 1, 0 );
                    if ( info->mtime == 0 )
                      break;
                    ebp_28 = ebp_28;
                    while ( eax < edx && eax == ' ' )
                    {
                    }
                    while ( ecx < edx && ecx != ' ' )
                    {
                    }
                    while ( eax < edx )
                    {
                      if ( eax != ' ' )
                      {
                        if ( eax && ebx < edx && eax )
                        {
                          while ( ecx < esi )
                          {
                            info->permissions = 0;
                            break;
                          }
                          info->permissions = 0;
                          break;
                        }
                        else
                          break;
                      }
                      else
                      {
                      }
                    }
                    break;
                  }
                  else
                  {
                  }
                }
                while ( eax + 1 < edx );
                info = 0;
                return info;
              }
            }
            info[0].type = FTP_FILE_PLAINFILE;
          }
          else
          {
            if ( src[0] - 48 < 9 )
              continue;
            else
            {
              info = parse_ftp_winnt_response( info, &src[0], len );
              return info;
            }
          }
        }
    }
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/ftp/parse.c";
      errline = 605;
      elinks_internal( "assertion info && src && len &gt; 0 failed!" );
      if ( assert_failed == 0 )
      {
        if ( src[0] < 'd' )
        {
        }
      }
    }
    if ( !0 )
      continue;
    else
    {
      if ( src[0] == '+' )
      {
        src[ len ] = src[ len ];
        if ( src[1] < src[ len ] + src )
        {
          do
          {
            src[0] = src[0] == 0 ? src[0] : src[ len ] + src[1];
            if ( src[1] != 'r' )
            {
              if ( 'r' <= ebx )
              {
                if ( src[1] == 's' && src[1] + 1 < src[0] )
                {
                  if ( src[1] - 48 >= 9 )
                  {
                    return src[1] + 1;
                  }
                  info->size = (long long)-1;
                }
              }
              else
              if ( ecx != 'm' )
              {
                if ( ccdep2 <= ccdep1 )
                {
                  if ( ecx != 9 )
                  {
                    if ( ecx == '/' )
                      info[0].type = FTP_FILE_DIRECTORY;
                  }
                  else
                  if ( src[1] + 1 < src[ len ] + src[1] )
                  {
                    info->name.source = src[1] + 1;
                    info->name.length = ( src[ len ] + src[1] ) - ( src[1] + 1 );
                    break;
                  }
                }
              }
              else
              if ( src[1] + 1 < src[0] )
              {
                info->mtime = src[1] - 48 >= 9 ? -1 : (int)( 10 * 0 );
              }
            }
            else
              info[0].type = FTP_FILE_PLAINFILE;
          }
          while ( src[1] < src[ len ] + src && src[0] );
          info = 0;
        }
        else
        {
          info = 0;
        }
      }
      else
      {
        len = len;
        if ( src[0] == '-' )
          continue;
        else
        {
        }
      }
    }
  }
  assert_failed = 0;
  info = 0;
}
#if 0
#endif
