#include "pov_util.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
void POV_Std_Split_Time( double time_dif, unsigned int *hrs, unsigned int *mins, double *secs )
{
{
  int t;
  hrs[0] = ( (/*HI*/int)( (int)( time_dif * 10.000000000000 ) * 0x7482296b ) >> 14 ) - ( (int)( time_dif * 10.000000000000 ) >> 31 );
  mins[0] = ( "Huge expression, analysis aborted...", 0 );
  secs[0] = (double)( (int)( time_dif * 10.000000000000 ) - ( ( ( (/*HI*/int)( (int)( time_dif * 10.000000000000 ) * 0x1b4e81b5 ) >> 6 ) - ( (int)( time_dif * 10.000000000000 ) >> 31 ) ) * 600 ) ) / 10.000000000000;
  return;
}
}
unsigned int closest_power_of_2( unsigned int theNumber )
{
  int eax;
  int edx;
{
  int PowerOf2Counter;
  if ( theNumber == 0 )
  {
    return 0;
  }
  if ( theNumber <= 1 )
  {
    return 1;
  }
  PowerOf2Counter = 1;
  do
  {
    PowerOf2Counter <<= 1;
    theNumber >>= 1;
  }
  while ( ( theNumber >> 1 ) > 1 );
  return PowerOf2Counter * 2;
}
}
int POVMSUtil_SetFormatString( POVMSObjectPtr object, unsigned int key, char *format )
{
  int eax;
{
  char buffer[1024];
  __vsprintf_chk( buffer, 1, 1024, format, ebp_20 );
  POVMSUtil_SetString( object, key, buffer );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return POVMSUtil_SetString( object, key, buffer );
}
}
struct IStream *New_Checked_IStream( char *filename, unsigned int stype )
{
  if ( UNIX_allow_file_read( filename, stype ) - 1 == 0 )
  {
    stype = stype;
    filename = &filename[0];
  }
  return 0;
}
struct OStream *New_Checked_OStream( char *filename, unsigned int stype, bool append )
{
  if ( UNIX_allow_file_write( filename, stype ) - 1 == 0 )
  {
    append = append & 255;
    append = append & 255;
    stype = stype;
    filename = &filename[0];
  }
  return 0;
}
struct IStream *Locate_File( char *filename, unsigned int stype, char *buffer, bool err_flag )
{
{
  struct IStream *result;
  char *qualified_name;
  err_flag = err_flag = 0;
  qualified_name[0] = Locate_Filename( filename, stype, err_flag );
  if ( Locate_Filename( filename, stype, err_flag ) == 0 )
  {
    return 0;
  }
  if ( buffer[0] )
  {
    strcpy( &buffer[0], &qualified_name[0] );
  }
  operator delete[]( &qualified_name[0] );
  return &result;
}
}
char *Locate_Filename( char *filename, unsigned int stype, bool err_flag )
{
  int eax;
  int ecx;
  int edx;
{
  int i;
  int l[4];
  char pathname[4096];
  char file[4096];
  char file_x[4][4096];
  char *result;
  if ( Has_Extension( filename ) )
  {
    l[0] = 0;
    l[1] = 0;
    l[2] = 0;
    l[3] = 0;
  }
  else
  {
    if ( ( __MOD(gPOV_File_Extensions[ stype ].ext[0],4) ) == 0 )
      goto B12;
    else
    {
      if ( ( __MOD(gPOV_File_Extensions[ stype ].ext[0],4) ) == 2 )
        goto B136;
      else
      if ( edx < 2 )
      {
        if ( *(char*)(( ( *(int*)(__MOD(gPOV_File_Extensions[ stype ].ext[0],4)) - 0x1010101 ) & ~*(int*)(__MOD(gPOV_File_Extensions[ stype ].ext[0],4)) & -2139062144 ) + 1) )
        {
        }
        else
        {
          if ( gPOV_File_Extensions[ stype ].ext[0] - gPOV_File_Extensions[ stype ].ext[0] >= 1 )
          {
            strcpy( ebp_24620, &filename[0] );
            strcat( ebp_24620, gPOV_File_Extensions[ stype ].ext[0] );
          }
          if ( ( __MOD(gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0],4) ) == 0 )
            goto B30;
          else
          {
            if ( ( __MOD(gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0],4) ) == 2 )
              goto B32;
            else
            if ( edx < 2 )
            {
              if ( gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0][1] )
              {
                eax++;
              }
              else
              {
                if ( ( gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0][1] + 1 ) - gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0] >= 1 )
                {
                  strcpy( ebp_20524, &filename[0] );
                  strcat( ebp_20524, gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0] );
                }
                if ( ( __MOD(gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0],4) ) == 0 )
                  goto B98;
                else
                {
                  if ( ( __MOD(gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0],4) ) == 2 )
                    goto B100;
                  else
                  if ( edx < 2 )
                  {
                    if ( gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0][1] )
                    {
                      eax++;
                      filename[0] = filename[0];
                    }
                    else
                    {
                      if ( ( gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0][1] + 1 ) - gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0] >= 1 )
                      {
                        strcpy( ebp_16428, &filename[0] );
                        strcat( ebp_16428, gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0] );
                      }
                      if ( ( __MOD(*(int*)(0x818ed4c + ( stype << 4 )),4) ) == 0 )
                        goto B115;
                      else
                      {
                        if ( ( __MOD(*(int*)(0x818ed4c + ( stype << 4 )),4) ) == 2 )
                          goto B117;
                        else
                        if ( edx < 2 )
                        {
                          if ( *(char*)(*(int*)(0x818ed4c + ( stype << 4 )) + 2) != ( "Huge expression, analysis aborted...", 0 ) )
                          {
                            eax++;
                          }
                          else
                          {
                            if ( ( *(int*)(0x818ed4c + ( stype << 4 )) + 1 + 1 ) - *(int*)(0x818ed4c + ( stype << 4 )) >= 1 )
                            {
                              strcpy( ebp_12332, &filename[0] );
                              strcat( ebp_12332, *(int*)(0x818ed4c + ( stype << 4 )) );
                            }
                            if ( ( *(int*)(0x818ed4c + ( stype << 4 )) - *(int*)(0x818ed4c + ( stype << 4 )) ) && ( File_Exist( ebp_24620 ) & 255 ) )
                            {
                              if ( ( __MOD(ebp_24620,4) ) == 0 )
                                goto B143;
                              else
                              {
                                if ( ( __MOD(ebp_24620,4) ) == 2 )
                                  goto B174;
                                else
                                if ( edx < 2 )
                                {
                                  if ( *(char*)(ebp_20524 + 1 + 1) )
                                  {
                                    eax++;
                                  }
                                  else
                                  {
                                    result[0] = operator new[](  );
                                    if ( operator new[](  ) )
                                    {
                                      strcpy( &result[0], pathname );
                                      if ( 0 ^ 0 )
                                      {
                                        __stack_chk_fail(  );
                                      }
                                      return &result[0];
                                    }
                                  }
                                }
                                else
                                if ( *ebp_20524 )
                                {
                                }
B174:                                if ( *(char*)(ebp_20524 + 1) )
                                {
                                }
                              }
B143:                              do
                              {
B143:                              }
                              while ( ( ( *(int*)(ebp_24620 + 4) - 0x1010101 ) & ~*(int*)(ebp_24620 + 4) & -2139062144 ) == 0 );
                              if ( ( edx & 32896 ) == 0 )
                              {
                                edx >>= 16;
                                eax += 2;
                              }
                              return eax - 3 - ( 0 & 1 );
                            }
                          }
                        }
                        else
                        if ( *(char*)(*(int*)(0x818ed4c + ( stype << 4 ))) )
                        {
                        }
B117:                        if ( *(char*)(*(int*)(0x818ed4c + ( stype << 4 )) + 1) )
                        {
                        }
                      }
B115:                      do
                      {
B115:                      }
                      while ( ( ( *(int*)(*(int*)(0x818ed4c + ( stype << 4 )) + 4) - 0x1010101 ) & ~*(int*)(*(int*)(0x818ed4c + ( stype << 4 )) + 4) & -2139062144 ) == 0 );
                      return eax - 3 - ( 0 & 1 );
                    }
                  }
                  else
                  if ( gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0] )
                  {
                  }
B100:                  if ( gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0][1] )
                    gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[0][1]++;
                }
B98:                do
                {
B98:                }
                while ( ( ( gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[1] - 0x1010101 ) & ~gPOV_File_Extensions[ ( ( stype * 2 ) + 1 ) >> 1 ].ext[1] & -2139062144 ) == 0 );
                return eax - 3 - ( 0 & 1 );
              }
            }
            else
            if ( gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0] )
            {
            }
B32:            if ( gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0][1] )
              gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[0][1]++;
          }
B30:          do
          {
B30:          }
          while ( ( ( gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[1] - 0x1010101 ) & ~gPOV_File_Extensions[ ( ( stype << 2 ) + 1 ) >> 2 ].ext[1] & -2139062144 ) == 0 );
          return eax - 3 - ( 0 & 1 );
        }
      }
      else
      if ( gPOV_File_Extensions[ stype ].ext[0] )
      {
      }
B136:      if ( gPOV_File_Extensions[ stype ].ext[0][1] )
        gPOV_File_Extensions[ stype ].ext[0][1]++;
    }
B12:    do
    {
B12:    }
    while ( ( ( gPOV_File_Extensions[ stype ].ext[1] - 0x1010101 ) & ~gPOV_File_Extensions[ stype ].ext[1] & -2139062144 ) == 0 );
    return eax - 3 - ( 0 & 1 );
  }
  if ( l[1] )
  {
    if ( ( File_Exist( ebp_20524 ) & 255 ) == 0 )
    {
      if ( File_Exist( ebp_20524 ) - gPOV_File_Extensions[ stype ].ext[0] )
      {
        if ( ( File_Exist( ebp_16428 ) & 255 ) == 0 )
        {
          if ( File_Exist( ebp_16428 ) - gPOV_File_Extensions[ stype ].ext[0] )
          {
            if ( File_Exist( ebp_12332 ) & 255 )
              continue;
            else
            {
              if ( File_Exist( &filename[0] ) & 255 )
              {
                if ( ( __MOD(filename[0],4) ) == 0 )
                  goto B154;
                else
                {
                  if ( ( __MOD(filename[0],4) ) == 2 )
                    goto B160;
                  else
                  if ( edx < 2 )
                  {
                    if ( filename[1] )
                    {
                    }
                    else
                    {
                      if ( operator new[]( ( filename[0] - filename[0] ) + 1 ) )
                      {
                        strcpy( (char*)operator new[]( ( filename[0] - filename[0] ) + 1 ), &filename[0] );
                      }
                    }
                  }
                  else
                  if ( filename[0] )
                    filename[1] = filename[1];
B160:                  if ( filename[1] )
                    filename[1]++;
                }
B154:                do
                {
B154:                }
                while ( ( ( filename[4] - 0x1010101 ) & ~filename[4] & -2139062144 ) == 0 );
                if ( ( edx & 32896 ) == 0 )
                  edx >>= 16;
                return eax - 3 - ( 0 & 1 );
              }
              else
              {
                if ( opts.Library_Path_Index >= 1 )
                {
                  i = 0;
                  i = 0;
                  do
                  {
                    __strcpy_chk( file, opts.Library_Paths[ i ], 4096 );
                    esi = file[0];
                    while ( 1 )
                    {
                      file[ ( edx - 3 - ( 0 & 1 ) - esi ) + 1 ] = 0;
                      file[0] = file[0];
                      do
                      {
                      }
                      while ( ( ( file[4] - 0x1010101 ) & ~file[4] & -2139062144 ) == 0 );
                      if ( ( eax & 32896 ) == 0 )
                      {
                        eax >>= 16;
                        edx += 2;
                      }
                      if ( *(char*)(( ebp_2147483632 + ( file[4] - 3 - ( 0 & 1 ) - file[0] ) ) - 8221) != ':' )
                        file[ edx ] = '/';
                      if ( 0 )
                      {
                        __strcpy_chk( pathname, file, 4096 );
                        __strcat_chk( pathname, file_x[0], 4096 );
                        if ( File_Exist( pathname ) & 255 )
                        {
                          ebx = pathname[0];
                          do
                          {
                          }
                          while ( ( ( pathname[4] - 0x1010101 ) & ~pathname[4] & -2139062144 ) == 0 );
                          if ( ( eax & 32896 ) == 0 )
                            edx += 2;
                          result[0] = operator new[](  );
                        }
                      }
                      if ( l[1] )
                      {
                        __strcpy_chk( pathname, file, 4096 );
                        __strcat_chk( pathname, ebp_20524, 4096 );
                        if ( File_Exist( pathname ) & 255 )
                          continue;
                      }
                      if ( l[2] )
                      {
                        __strcpy_chk( pathname, file, 4096 );
                        __strcat_chk( pathname, ebp_16428, 4096 );
                        if ( ( File_Exist( pathname ) & 255 ) == 0 )
                        {
                          if ( ebp_8224 == 0 )
                          {
                            __strcpy_chk( pathname, file, 4096 );
                            __strcat_chk( pathname, &filename[0], 4096 );
                            if ( ( File_Exist( pathname ) & 255 ) == 0 )
                            {
                              i++;
                              if ( i + 1 < opts.Library_Path_Index )
                              {
                                do
                                {
                                  __strcpy_chk( file, opts.Library_Paths[ i ], 4096 );
                                }
                                while ( opts.Library_Path_Index <= i + 1 );
                                filename[0] = filename[0];
                              }
                            }
                            else
                            {
                              ebx = pathname[0];
                              do
                              {
                              }
                              while ( ( ( pathname[4] - 0x1010101 ) & ~pathname[4] & -2139062144 ) == 0 );
                            }
                          }
                        }
                      }
                      else
                      if ( ebp_8224 == 0 )
                        continue;
                      __strcpy_chk( pathname, file, 4096 );
                      __strcat_chk( pathname, ebp_12332, 4096 );
                      if ( ( File_Exist( pathname ) & 255 ) == 0 )
                        continue;
                    }
                  }
                  while ( opts.Library_Path_Index <= i + 1 );
                }
                if ( err_flag == 0 )
                {
                }
                else
                {
                  if ( 0 )
                  {
                    PossibleError( "Could not find file '%s%s'" );
                    *(int*)&result[0] = 0;
                  }
                  else
                  {
                    PossibleError( "Could not find file '%s'" );
                  }
                }
              }
            }
          }
          else
          {
            if ( File_Exist( &filename[0] ) & 255 )
            {
            }
            else
            {
            }
          }
        }
      }
    }
  }
  else
  if ( l[2] )
  {
  }
  if ( l[3] )
  {
  }
  else
  {
  }
}
}
}
#if 0
#endif
