#include "povmsrec.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
bool Matches( char *v1, char *v2 )
{
{
  while ( v1[ i ] && v2[ i ] )
  {
    if ( v1[ i ] != tolower( v2[ i ] ) )
      break;
  }
  return 1;
}
}
bool IsTrue( char *value )
{
  int ebx;
  int esi;
  int ebp_28;
  ebp_28 = value;
  do
  {
    if ( 'o' && value[0] )
    {
    }
  }
  while ( ebp_32 != eax );
  do
  {
    if ( 't' && value[0] )
    {
    }
  }
  while ( ebp_32 != eax );
  do
  {
    if ( 'y' && *ebp_28 )
    {
      ebp_28++;
    }
  }
  while ( ebp_32 != eax );
  return Matches( "1", &value[0] );
}
bool IsFalse( char *value )
{
  int ebx;
  int esi;
  int ebp_28;
  ebp_28 = value;
  do
  {
    if ( 'o' && value[0] )
    {
    }
  }
  while ( ebp_32 != eax );
  do
  {
    if ( 'f' && value[0] )
    {
    }
  }
  while ( ebp_32 != eax );
  do
  {
    if ( 'n' && *ebp_28 )
    {
      ebp_28++;
    }
  }
  while ( ebp_32 != eax );
  return Matches( "0", &value[0] );
}
int SetCommandOption( POVMSObjectPtr msg, unsigned int key, SHELLDATA *data )
{
{
  POVMSObject obj;
  int len = 250;
  int err = POVMSObject_Get( msg, &obj, key );
  if ( POVMSObject_Get( msg, &obj, key ) == 0 )
  {
    if ( POVMSUtil_GetString( &obj, 0x436f6d53, &data->Command[0], ebp_28 ) == 0 )
    {
      int ret = 0;
      if ( POVMSUtil_GetInt( &obj, 0x52416374, &ret ) == 0 )
      {
        data->Inverse = ret >> 31;
        if ( ret < 0 )
          ret = 0 - ( POVMSUtil_GetInt( &obj, 0x52416374, &ret ) - 65 );
        switch ( 0 - ret )
        {
        case 'I':
        case 'i':
          data = 0;
          break;
        case 'Q':
        case 'q':
          data = 1;
          break;
        case 'U':
        case 'u':
          data = 2;
          break;
        case 'F':
        case 'f':
          data = 3;
          break;
        case 'S':
        case 's':
          data = 4;
          break;
        case 'A':
        case 'a':
          data = 5;
        default:
          break;
        }
        return POVMSUtil_GetString( &obj, 0x436f6d53, &data->Command[0], ebp_28 );
      }
    }
    POVMSObject_Delete( &obj );
    return POVMSUtil_GetString( &obj, 0x436f6d53, &data->Command[0], ebp_28 );
  }
  else
  {
    return err;
  }
}
}
int Receive_RenderOptions( POVMSObjectPtr msg, POVMSObjectPtr result, int , void * )
{
  int eax;
  double fp7;
  int ebp_28;
{
  POVMSAttribute attr;
  int i;
  float f;
  int b;
  int l;
  if ( Cooperate_Render_Flag == 1 )
  {
    if ( gStartedStreamMessage == 0 && POVMSObject_New( &gStartedStreamMessageData, 0x2a2a2a2a ) == 0 )
      gStartedStreamMessage = &gStartedStreamMessageData;
    if ( POVMSObject_Get( msg, ebp_56, 0x50526566 ) )
    {
    }
    else
    {
      POVMSAttr_Get( ebp_56, 0x2a2a2a2a, &opts.Preview_RefCon, ebp_40 );
      POVMSAttr_Delete( ebp_56 );
    }
    if ( POVMSUtil_GetInt( msg, 0x574c6576, ebp_28 ) == 0 )
      opts.Warning_Level = ebp_28;
    if ( POVMSUtil_GetInt( msg, 0x48656967, ebp_28 ) == 0 )
      Frame.Screen_Height = ebp_28;
    if ( POVMSUtil_GetInt( msg, 0x57696474, ebp_28 ) == 0 )
      Frame.Screen_Width = ebp_28;
    if ( POVMSUtil_GetFloat( msg, 0x4c656674, ebp_32 ) == 0 )
    {
      if ( ( ( ah & 5 ) & 255 ) == 0 && ( ( ah & 69 ) & 255 ) == 0 )
      {
        opts.First_Column = -1;
        opts.First_Column_Percent = ebp_32;
      }
      else
        opts.First_Column = (int)( ebp_32 );
    }
    if ( POVMSUtil_GetFloat( msg, 0x52696768, ebp_32 ) == 0 )
    {
      if ( ( ( ah & 5 ) & 255 ) == 0 )
      {
        if ( ( 12 & 69 ) & 255 )
        {
          if ( ( ( 12 & 5 ) & 255 ) == 0 )
          {
            if ( opts.First_Column >= 1 )
            {
            }
          }
        }
        opts.Last_Column = -1;
        opts.Last_Column_Percent = ebp_32;
      }
      opts.Last_Column = (int)( ebp_32 );
    }
    if ( POVMSUtil_GetFloat( msg, 0x546f7020, ebp_32 ) == 0 )
    {
      if ( ( ( ah & 5 ) & 255 ) == 0 && ( ( ah & 69 ) & 255 ) == 0 )
      {
        opts.First_Line = -1;
        opts.First_Line_Percent = ebp_32;
      }
      else
        opts.First_Line = (int)( ebp_32 );
    }
    if ( POVMSUtil_GetFloat( msg, 0x426f7474, ebp_32 ) == 0 )
    {
      if ( ( ( ah & 5 ) & 255 ) == 0 )
      {
        if ( ( 12 & 69 ) & 255 )
        {
          if ( ( ( 12 & 5 ) & 255 ) == 0 )
          {
            if ( opts.First_Line >= 1 )
            {
            }
          }
        }
        opts.Last_Line = -1;
        opts.Last_Line_Percent = ebp_32;
      }
      opts.Last_Line = (int)( ebp_32 );
    }
    if ( POVMSUtil_GetBool( msg, 0x54737441, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 64;
      else
        opts.Options &= -65;
    }
    if ( POVMSUtil_GetInt( msg, 0x54734143, ebp_28 ) == 0 )
      opts.Abort_Test_Counter = ebp_28;
    if ( POVMSUtil_GetBool( msg, 0x436f6e54, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 128;
      else
        opts.Options &= -129;
    }
    POVMSUtil_GetString( msg, 0x43496e69, &opts.Ini_Output_File_Name[0] );
    if ( POVMSUtil_GetFloat( msg, 0x436c636b, ebp_32 ) == 0 )
      opts.FrameSeq.Clock_Value = ebp_32;
    if ( POVMSUtil_GetInt( msg, 0x4946726d, ebp_28 ) == 0 )
      opts.FrameSeq.InitialFrame = ebp_28;
    if ( POVMSUtil_GetInt( msg, 0x4646726d, ebp_28 ) == 0 )
      opts.FrameSeq.FinalFrame = ebp_28;
    if ( POVMSUtil_GetFloat( msg, 0x49436c6b, ebp_32 ) == 0 )
      opts.FrameSeq.InitialClock = ebp_32;
    if ( POVMSUtil_GetFloat( msg, 0x46436c6b, ebp_32 ) == 0 )
      opts.FrameSeq.FinalClock = ebp_32;
    if ( POVMSUtil_GetFloat( msg, 0x53537446, ebp_32 ) == 0 )
    {
      if ( ( ( ah & 69 ) & 255 ) == 0 && ( ( ah & 69 ) & 255 ) == 0 )
        opts.FrameSeq.SubsetStartPercent = ebp_32;
      else
        opts.FrameSeq.SubsetStartFrame = (int)( ebp_32 );
    }
    if ( POVMSUtil_GetFloat( msg, 0x53456e46, ebp_32 ) == 0 )
    {
      if ( ( ( ah & 69 ) & 255 ) == 0 && ( ( ah & 69 ) & 255 ) == 0 )
        opts.FrameSeq.SubsetEndPercent = ebp_32;
      else
        opts.FrameSeq.SubsetEndFrame = (int)( ebp_32 );
    }
    if ( POVMSUtil_GetBool( msg, 0x43796c41, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 32768;
      else
        opts.Options &= -32769;
    }
    if ( POVMSUtil_GetBool( msg, 0x466c6452, ebp_36 ) == 0 )
      opts.FrameSeq.Field_Render_Flag = ebp_36 != 0;
    if ( POVMSUtil_GetBool( msg, 0x4f646446, ebp_36 ) == 0 )
      opts.FrameSeq.Odd_Field_Flag = ebp_36 != 0;
    if ( POVMSUtil_GetBool( msg, 0x5057446f, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 8;
      else
        opts.Options &= -9;
    }
    if ( POVMSUtil_GetBool( msg, 0x56657262, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 2;
      else
        opts.Options &= -3;
    }
    if ( POVMSUtil_GetBool( msg, 0x44725669, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 8192;
      else
        opts.Options &= -8193;
    }
    if ( POVMSUtil_GetBool( msg, 0x44697370, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 1;
      else
        opts.Options &= -2;
    }
    if ( POVMSUtil_GetInt( msg, 0x564d6f64, ebp_28 ) == 0 )
    {
      opts.DisplayFormat = toupper(  );
    }
    if ( POVMSUtil_GetInt( msg, 0x50616c74, ebp_28 ) == 0 )
    {
      opts.PaletteOption = toupper(  );
    }
    if ( POVMSUtil_GetFloat( msg, 0x4447616d, ebp_32 ) == 0 )
    {
      if ( ( ah & 69 ) & 255 )
      {
      }
      else
        opts.DisplayGamma = ebp_32;
    }
    if ( POVMSUtil_GetInt( msg, 0x50537453, ebp_28 ) == 0 )
      opts.PreviewGridSize_Start = ebp_28;
    if ( POVMSUtil_GetInt( msg, 0x50456e53, ebp_28 ) == 0 )
      opts.PreviewGridSize_End = ebp_28;
    if ( POVMSUtil_GetBool( msg, 0x4f546f46, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 4;
      else
        opts.Options &= -5;
    }
    if ( POVMSUtil_GetInt( msg, 0x4f465479, ebp_28 ) == 0 )
    {
      opts.OutputFormat = tolower(  );
    }
    if ( POVMSUtil_GetInt( msg, 0x4f46436f, ebp_28 ) == 0 && opts.OutputFormat == 'j' )
    {
      if ( ebp_28 >= 1 )
      {
        if ( ebp_28 > 99 )
        {
        }
      }
      else
      {
      }
      opts.OutputQuality = 100;
    }
    if ( POVMSUtil_GetBool( msg, 0x4f416c70, ebp_36 ) == 0 )
    {
      if ( ebp_36 == 1 )
        opts.Options |= 0x10000;
      else
        opts.Options &= -65537;
    }
    if ( !POVMSUtil_GetInt( msg, 0x4250436f, ebp_28 ) && opts.OutputFormat != 'j' )
    {
      if ( ebp_28 > 5 )
      {
        if ( ebp_28 > 15 )
        {
        }
      }
      else
      {
      }
      opts.OutputQuality = 16;
    }
    if ( POVMSUtil_GetString( msg, 0x4f464e61, &opts.Output_File_Name[0], ebp_40 ) == 0 )
    {
      strcmp( "-", &opts.Output_File_Name[0] );
      if ( 1 )
      {
      }
      else
      {
        strcmp( "stdout", &opts.Output_File_Name[0] );
        if ( (unsigned char)( ccdep2 < ccdep1 ) == 0 )
          goto B181;
      }
B181:      memcpy( &opts.Output_File_Name[0], ebp_40, 4 );
      opts.Output_File_Name[0] = 's';
      *(int*)&opts.Output_File_Name[6] = 0;
      opts.Options |= 0x100000;
    }
    opts.Ini_Output_File_Name[0] = 0;
    POVMSUtil_GetString( msg, 0x43496e69, &opts.Ini_Output_File_Name[0] );
    if ( POVMSUtil_GetBool( msg, 0x43486973, ebp_36 ) == 0 )
      opts.histogram_on = ebp_36 != 0;
    if ( POVMSUtil_GetInt( msg, 0x48465479, ebp_28 ) == 0 )
    {
      char *def_ext;
      switch ( ebp_28 )
      {
      case 'C':
      case 'c':
        opts.histogram_type = CSV;
        opts.histogram_file_type = 0;
        break;
      case 'S':
      case 's':
        opts.histogram_type = SYS;
        opts.histogram_file_type = 4;
        break;
      case 'P':
      case 'p':
        opts.histogram_type = PPM;
        opts.histogram_file_type = 128;
        break;
      case 'T':
      case 't':
        opts.histogram_type = TARGA;
        opts.histogram_file_type = 16;
        break;
      case 'N':
      case 'n':
        opts.histogram_type = PNG;
        opts.histogram_file_type = 256;
        break;
      default:
        opts.histogram_type = TARGA;
        opts.histogram_file_type = 16;
        Warning( 0, "Unknown histogram output type '%c'." );
        *(int*)&def_ext[0] = 0;
        break;
      }
      if ( opts.histogram_on && opts.Histogram_File_Name[0] == 0 && def_ext[0] )
      {
        __sprintf_chk( &opts.Histogram_File_Name[0], 1, 4096, "histgram%s", &def_ext[0] );
      }
    }
    if ( !POVMSUtil_GetString( msg, 0x48464e61, &opts.Histogram_File_Name[0], ebp_40 ) && opts.histogram_on && opts.Histogram_File_Name[0] == 0 )
    {
      char *def_ext;
      __sprintf_chk( &opts.Histogram_File_Name[0], 1, 4096, "histgram%s", &def_ext[0] );
    }
    if ( POVMSUtil_GetInt( msg, 0x48475358, ebp_28 ) == 0 )
      opts.histogram_x = ebp_28;
    if ( POVMSUtil_GetInt( msg, 0x48475359, ebp_28 ) == 0 )
      opts.histogram_y = ebp_28;
    SetCommandOption( msg, 0x50725343, &opts.Shellouts );
    SetCommandOption( msg, 0x50724643, &opts->Shellouts[1] );
    SetCommandOption( msg, 0x506f5363, &opts.Shellouts[3] );
    SetCommandOption( msg, 0x506f4643, &opts.Shellouts[2] );
    SetCommandOption( msg, 0x55416243, &opts.Shellouts[4] );
    SetCommandOption( msg, 0x46457243, &opts.Shellouts[5] );
    if ( POVMSUtil_GetString( msg, 0x49464e61, &opts.Input_File_Name[0] ) == 0 )
    {
      strcmp( "-", &opts.Input_File_Name[0] );
      if ( !1 )
      {
        strcmp( "stdin", &opts.Input_File_Name[0] );
        if ( 1 )
          goto B222;
      }
B222:      *(int*)&opts.Input_File_Name[0] = 0x69647473;
      opts.Input_File_Name[4] = 'n';
      opts.Options |= 0x80000;
    }
    if ( POVMSObject_Get( msg, ebp_56, 0x4c696250 ) == 0 )
    {
      int cnt = 0;
      if ( !POVMSAttrList_Count( ebp_56, &cnt ) && cnt >= 1 )
      {
        ii = 1;
        do
        {
          if ( POVMSAttrList_GetNth( ebp_56, ii, &item ) == 0 )
          {
            if ( !POVMSAttr_Size( &item ) && 0 >= 1 )
            {
              if ( opts.Library_Path_Index > 24 )
              {
                Error( "Too many library directories specified." );
                ebp_40 = 0;
              }
              opts.Library_Paths[ opts.Library_Path_Index ] = (char*)pov_malloc( 0, "povmsrec.cpp", 571, "library paths" );
              if ( opts.Library_Path_Index - 1 >= 1 )
              {
                iii = 0;
                do
                {
                  if ( strcmp( opts.Library_Paths[ iii ], opts.Library_Paths[ opts.Library_Path_Index ] ) == 0 )
                    ii = ii;
                    pov_free( (void*)opts.Library_Paths[ opts.Library_Path_Index ], "povmsrec.cpp", 589 );
                    opts.Library_Paths[ opts.Library_Path_Index ] = 0;
                  else
                  {
                    iii++;
                  }
                }
                while ( opts.Library_Path_Index - 1 <= iii + 1 );
              }
              if ( ebp_28 - 67 )
              {
                pov_free( (void*)opts.Library_Paths[ opts.Library_Path_Index ], "povmsrec.cpp", 589 );
                opts.Library_Paths[ opts.Library_Path_Index ] = 0;
              }
              else
                opts.Library_Path_Index++;
            }
            POVMSAttr_Delete( &item );
          }
          ii++;
        }
        while ( ii + 1 <= cnt );
        msg = msg;
      }
      POVMSAttr_Delete( ebp_56 );
    }
    if ( POVMSUtil_GetFloat( msg, 0x56657273, ebp_32 ) == 0 )
      opts.Language_Version = (int)( ( 100.000000000000 * ebp_32 ) + 0.500000000000 );
    POVMSObject_Delete( gStartedStreamMessage );
    POVMSObject_New( gStartedStreamMessage, 0x2a2a2a2a );
    if ( POVMSUtil_GetBool( msg, 0x41436f6e, ebp_36 ) == 0 )
    {
      POVMSUtil_SetBool( gStartedStreamMessage, 0x41436f6e );
      POVMSUtil_SetBool( gStartedStreamMessage, 0x44436f6e );
      POVMSUtil_SetBool( gStartedStreamMessage, 0x46436f6e );
      POVMSUtil_SetBool( gStartedStreamMessage, 0x52436f6e );
      POVMSUtil_SetBool( gStartedStreamMessage, 0x53436f6e );
      POVMSUtil_SetBool( gStartedStreamMessage, 0x57436f6e );
    }
    if ( POVMSUtil_GetBool( msg, 0x44436f6e, ebp_36 ) == 0 )
    {
      POVMSUtil_SetBool( gStartedStreamMessage, 0x44436f6e );
    }
    if ( POVMSUtil_GetBool( msg, 0x46436f6e, ebp_36 ) == 0 )
    {
      POVMSUtil_SetBool( gStartedStreamMessage, 0x46436f6e );
    }
    if ( POVMSUtil_GetBool( msg, 0x52436f6e, ebp_36 ) == 0 )
    {
      POVMSUtil_SetBool( gStartedStreamMessage, 0x52436f6e );
    }
    if ( POVMSUtil_GetBool( msg, 0x53436f6e, ebp_36 ) == 0 )
    {
      POVMSUtil_SetBool( gStartedStreamMessage, 0x53436f6e );
    }
    if ( POVMSUtil_GetBool( msg, 0x57436f6e, ebp_36 ) == 0 )
    {
      POVMSUtil_SetBool( gStartedStreamMessage, 0x57436f6e );
      ebp_28 = 0;
    }
    else
      ebp_28 = 0;
    do
    {
      if ( POVMSUtil_GetStringLength( msg, gStreamTypeUtilData[ ebp_28 + 1 ], ebp_40 ) == 0 )
      {
        char *str;
        str[0] = pov_malloc( 0, "povmsrec.cpp", 631, "stream name" );
        if ( !POVMSUtil_GetString( msg, gStreamTypeUtilData[ ebp_28 ], (char*)pov_malloc( 0, "povmsrec.cpp", 631, "stream name" ), ebp_40 ) && 0 > 1 )
        {
          if ( IsTrue( &str[0] ) & 255 )
          {
            POVMSUtil_SetString( gStartedStreamMessage, gStreamTypeUtilData[ ebp_28 ], gStreamDefaultFile[ ebp_28 ] );
            str[0] = str[0];
          }
          else
          {
            if ( ( IsFalse( &str[0] ) & 255 ) == 0 )
            {
              POVMSUtil_SetString( gStartedStreamMessage, gStreamTypeUtilData[ ebp_28 ], &str[0] );
            }
          }
        }
        pov_free( &str[0], "povmsrec.cpp", 644 );
        ebp_28++;
        if ( ebp_28 + 1 <= 5 )
          continue;
        else
      }
      else
      {
        ebp_28++;
      }
      if ( POVMSUtil_GetInt( msg, 0x5175616c, ebp_28 ) == 0 )
      {
        opts.Quality = ebp_28;
        if ( ebp_28 - 10 <= 1 )
        {
          Warning( 0, "Quality settings 10 and 11 are no longer valid." );
          opts.Quality = 9;
        }
        else
        if ( opts.Quality > 9 )
        {
          Error( "Illegal Quality setting." );
          opts.Quality = opts.Quality;
        }
        opts.Quality_Flags = Quality_Values[ opts.Quality ];
      }
      if ( POVMSUtil_GetBool( msg, 0x426f756e, ebp_36 ) == 0 )
        opts.Use_Slabs = ebp_36 != 0;
      if ( POVMSUtil_GetInt( msg, 0x42645468, ebp_28 ) == 0 )
      {
        if ( opts.BBox_Threshold < 1 )
        {
          Warning( 0, "Too small bounding threshold adjusted to its minimum of one." );
        }
        if ( ebp_28 < 1 )
        {
        }
        opts.BBox_Threshold = 1;
      }
      if ( POVMSUtil_GetBool( msg, 0x4c427566, ebp_36 ) == 0 )
      {
        if ( ebp_36 == 1 )
          opts.Options |= 4096;
        else
          opts.Options &= -4097;
      }
      if ( POVMSUtil_GetBool( msg, 0x56427566, ebp_36 ) == 0 )
      {
        if ( ebp_36 == 1 )
          opts.Options |= 2048;
        else
          opts.Options &= -2049;
      }
      if ( POVMSUtil_GetBool( msg, 0x52616469, ebp_36 ) == 0 )
      {
        Warning( 0, "Radiosity commandline/INI switch is not needed in POV-Ray 3.5.\nAdd a radiosity{}-block to your scene to turn on radiosity." );
      }
      if ( POVMSUtil_GetBool( msg, 0x526d4264, ebp_36 ) == 0 )
      {
        if ( ebp_36 == 1 )
          opts.Options |= 16384;
        else
          opts.Options &= -16385;
      }
      if ( POVMSUtil_GetBool( msg, 0x53706c55, ebp_36 ) == 0 )
      {
        if ( ebp_36 == 1 )
          opts.Options |= 1024;
        else
          opts.Options &= -1025;
      }
      if ( POVMSUtil_GetBool( msg, 0x416e7469, ebp_36 ) == 0 )
      {
        if ( ebp_36 == 1 )
          opts.Options |= 16;
        else
          opts.Options &= -17;
      }
      if ( POVMSUtil_GetInt( msg, 0x4141534d, ebp_28 ) == 0 )
        opts.Tracing_Method = ebp_28;
      if ( POVMSUtil_GetFloat( msg, 0x41415468, ebp_32 ) == 0 )
        opts.Antialias_Threshold = ebp_32;
      if ( POVMSUtil_GetInt( msg, 0x41414465, ebp_28 ) == 0 )
      {
        opts.AntialiasDepth = ebp_28;
        if ( ebp_28 < 1 )
          opts.AntialiasDepth = 1;
        else
        if ( opts.AntialiasDepth > 9 )
          opts.AntialiasDepth = 9;
      }
      if ( POVMSUtil_GetBool( msg, 0x41414a69, ebp_36 ) == 0 )
      {
        if ( ebp_36 == 1 )
          opts.Options |= 256;
        else
          opts.Options &= -257;
      }
      if ( POVMSUtil_GetFloat( msg, 0x41414a41, ebp_32 ) == 0 )
      {
        opts.JitterScale = ebp_32;
        if ( ( ( ah & 5 ) & 255 ) == 0 )
          opts.Options &= -257;
      }
      if ( POVMSObject_Exist( msg, 0x496e6348 ) == 0 )
      {
        opts.Header_File_Name[0] = 0;
        POVMSUtil_GetString( msg, 0x496e6348, &opts.Header_File_Name[0], ebp_40 );
      }
      POVMSObject_Get( msg, &opts.Declared_Variables, 0x4465636c );
      if ( result == 0 )
      {
        break;
      }
      BuildRenderOptions( result );
      return 0;
    }
    while ( ebp_28 + 1 > 5 );
  }
  else
  {
  }
  return -1;
}
}
int Receive_RenderAll( POVMSObjectPtr , POVMSObjectPtr , int , void * )
{
  if ( Cooperate_Render_Flag != 1 )
  {
    return -1;
  }
  Cooperate_Render_Flag = 2;
  return 0;
}
int Receive_RenderArea( POVMSObjectPtr msg, POVMSObjectPtr , int , void * )
{
{
  int l, r, t, b;
  int err;
  if ( Cooperate_Render_Flag != 1 )
  {
  }
  if ( POVMSUtil_GetInt( msg, 0x4c656674, ebp_12 ) == 0 && POVMSUtil_GetInt( msg, 0x52696768, ebp_16 ) == 0 && POVMSUtil_GetInt( msg, 0x546f7020, ebp_20 ) == 0 && POVMSUtil_GetInt( msg, 0x426f7474, ebp_24 ) == 0 )
  {
    opts.First_Column = ebp_12;
    opts.Last_Column = ebp_16;
    opts.First_Line = ebp_20;
    opts.Last_Line = ebp_24;
    Cooperate_Render_Flag = 2;
    return POVMSUtil_GetInt( msg, 0x426f7474, ebp_24 );
  }
  return -1;
}
}
int Receive_RenderStop( POVMSObjectPtr , POVMSObjectPtr , int , void * )
{
  if ( Cooperate_Render_Flag - 1 > 1 )
  {
    return -1;
  }
  if ( Cooperate_Render_Flag == 1 )
  {
    Cooperate_Render_Flag = 3;
    return 0;
  }
  Stop_Flag = 1;
  return 0;
}
}
#if 0
#endif
