#include "povmsend.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
int BuildCommand( POVMSObjectPtr msg, unsigned int key, SHELLDATA *data )
{
{
  int err;
  if ( err == 0 && POVMSUtil_SetString( ebp_36, 0x436f6d53, &data->Command[0] ) == 0 )
  {
    switch ( data->Ret )
    {
    case 0:
      if ( data->Inverse == 1 )
      {
      }
      if ( POVMSUtil_SetInt( ebp_36, 0x52416374, 0 - 73 ) == 0 )
      {
        return POVMSObject_Set( msg, ebp_36, key );
      }
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      data = &data[0];
      break;
    default:
      break;
    }
  }
  return POVMSUtil_SetInt( &ebx, 0x52416374, edi );
}
}
int BuildRenderTime( POVMSObjectPtr msg, unsigned int key, int parse, int photon, int render, int total )
{
{
  POVMSObject obj;
  int err;
  if ( err == 0 && POVMSUtil_SetInt( &obj, 0x50617254, parse ) == 0 && POVMSUtil_SetInt( &obj, 0x50686f54, photon ) == 0 && POVMSUtil_SetInt( &obj, 0x54726154, render ) == 0 && POVMSUtil_SetInt( &obj, 0x546f7454, total ) == 0 )
  {
    return POVMSObject_Set( msg, &obj, key );
  }
  return POVMSObject_New( &obj, 0x5254696d );
}
}
int BuildRenderOptions( POVMSObjectPtr msg )
{
  int eax;
  int edx;
  double fp7;
{
  POVMSAttribute attr;
  int err;
  if ( msg == 0 )
  {
    return -1;
  }
  if ( err == 0 && POVMSAttr_Set( &attr, 0x2a2a2a2a, &opts.Preview_RefCon, 4 ) == 0 && POVMSObject_Set( msg, &attr, 0x50526566 ) == 0 && POVMSUtil_SetInt( msg, 0x48656967, Frame.Screen_Height ) == 0 && POVMSUtil_SetInt( msg, 0x57696474, Frame.Screen_Width ) == 0 && POVMSUtil_SetFloat( msg, 0x4c656674, (float)( opts.First_Column == -1 ? opts.First_Column_Percent : (double)( opts.First_Column ) ) ) == 0 && POVMSUtil_SetFloat( msg, 0x52696768, (float)( opts.Last_Column == -1 ? opts.Last_Column_Percent : (double)( opts.Last_Column ) ) ) == 0 && POVMSUtil_SetFloat( msg, 0x546f7020, (float)( opts.First_Line == -1 ? opts.First_Line_Percent : (double)( opts.First_Line ) ) ) == 0 && POVMSUtil_SetFloat( msg, 0x426f7474, (float)( (double)( opts.Last_Line ) ) ) == 0 && POVMSUtil_SetBool( msg, 0x54737441, ( opts.Options >> 6 ) & 1 ) == 0 && POVMSUtil_SetInt( msg, 0x54734143, opts.Abort_Test_Counter ) == 0 && POVMSUtil_SetBool( msg, 0x436f6e54, ( opts.Options >> 7 ) & 1 ) == 0 && POVMSUtil_SetString( msg, 0x43496e69, &opts.Ini_Output_File_Name[0] ) == 0 && POVMSUtil_SetFloat( msg, 0x436c636b, (float)( opts.FrameSeq.Clock_Value ) ) == 0 && POVMSUtil_SetInt( msg, 0x4946726d, 1 ) == 0 && POVMSUtil_SetInt( msg, 0x4646726d, 1 ) == 0 && POVMSUtil_SetFloat( msg, 0x49436c6b, (float)( opts.FrameSeq.InitialClock ) ) == 0 )
  {
    if ( opts.FrameSeq.FinalFrame <= 1 )
    {
      POVMSUtil_SetFloat( msg, 0x46436c6b, 1.000000000000 );
    }
    else
    {
      POVMSUtil_SetFloat( msg, 0x46436c6b, (float)( opts.FrameSeq.FinalClock ) );
    }
    if ( POVMSUtil_SetFloat( msg, 0x46436c6b, (float)( opts.FrameSeq.FinalClock ) ) == 0 && POVMSUtil_SetInt( msg, 0x53537446, 1 ) == 0 && POVMSUtil_SetInt( msg, 0x53456e46, 1 ) == 0 && POVMSUtil_SetBool( msg, 0x43796c41, ( opts.Options >> 15 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x466c6452, opts.FrameSeq.Field_Render_Flag ) == 0 && POVMSUtil_SetBool( msg, 0x4f646446, opts.FrameSeq.Odd_Field_Flag ) == 0 && POVMSUtil_SetBool( msg, 0x5057446f, ( opts.Options >> 3 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x56657262, ( opts.Options >> 1 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x44725669, ( opts.Options >> 13 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x44697370, opts.Options & 1 ) == 0 && POVMSUtil_SetInt( msg, 0x564d6f64, opts.DisplayFormat ) == 0 && POVMSUtil_SetInt( msg, 0x50616c74, opts.PaletteOption ) == 0 && POVMSUtil_SetFloat( msg, 0x4447616d, opts.DisplayGamma ) == 0 && POVMSUtil_SetInt( msg, 0x50537453, opts.PreviewGridSize_Start ) == 0 && POVMSUtil_SetInt( msg, 0x50456e53, opts.PreviewGridSize_End ) == 0 && POVMSUtil_SetBool( msg, 0x4f546f46, ( opts.Options >> 2 ) & 1 ) == 0 && POVMSUtil_SetInt( msg, 0x4f465479, opts.OutputFormat ) == 0 && POVMSUtil_SetInt( msg, 0x4f46436f, opts.OutputQuality ) == 0 && POVMSUtil_SetBool( msg, 0x4f416c70, ( opts.Options >> 16 ) & 1 ) == 0 && POVMSUtil_SetInt( msg, 0x4250436f, opts.OutputQuality ) == 0 && POVMSUtil_SetString( msg, 0x4f464e61, &opts.Output_File_Name[0] ) == 0 && POVMSUtil_SetString( msg, 0x4f506174, &opts.Output_Path[0] ) == 0 && POVMSUtil_SetBool( msg, 0x43486973, opts.histogram_on ) == 0 && POVMSUtil_SetInt( msg, 0x48465479, opts.histogram_type ) == 0 && POVMSUtil_SetString( msg, 0x48464e61, &opts.Histogram_File_Name[0] ) == 0 && POVMSUtil_SetInt( msg, 0x48475358, opts.histogram_x ) == 0 && POVMSUtil_SetInt( msg, 0x48475359, opts.histogram_y ) == 0 && POVMSObject_New( ebp_60, 0x436f6d6d ) == 0 && POVMSUtil_SetString( ebp_60, 0x436f6d53, &opts.Shellouts->Command[0] ) == 0 )
    {
      switch ( opts.Shellouts->Ret )
      {
      case 5:
        break;
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
      if ( eax == 0 && POVMSObject_Set( msg, ebp_60, 0x50725343 ) == 0 && POVMSObject_New( ebp_72, 0x436f6d6d ) == 0 && POVMSUtil_SetString( ebp_72, 0x436f6d53, &opts.Shellouts[1].Command[0] ) == 0 )
      {
        switch ( opts.Shellouts[1].Ret )
        {
        case 5:
          break;
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
        if ( eax == 0 && POVMSObject_Set( msg, ebp_72, 0x50724643 ) == 0 && POVMSObject_New( ebp_84, 0x436f6d6d ) == 0 && POVMSUtil_SetString( ebp_84, 0x436f6d53, &opts.Shellouts[3].Command[0] ) == 0 )
        {
          switch ( opts.Shellouts[3].Ret )
          {
          case 5:
            break;
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
          if ( eax == 0 && POVMSObject_Set( msg, ebp_84, 0x506f5363 ) == 0 && POVMSObject_New( ebp_96, 0x436f6d6d ) == 0 && POVMSUtil_SetString( ebp_96, 0x436f6d53, &opts.Shellouts[2].Command[0] ) == 0 )
          {
            switch ( opts.Shellouts[2].Ret )
            {
            case 5:
              break;
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
            if ( eax == 0 && POVMSObject_Set( msg, ebp_96, 0x506f4643 ) == 0 && POVMSObject_New( ebp_108, 0x436f6d6d ) == 0 && POVMSUtil_SetString( ebp_108, 0x436f6d53, &opts.Shellouts[4].Command[0] ) == 0 )
            {
              switch ( opts.Shellouts[4].Ret )
              {
              case 5:
                break;
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
              if ( eax == 0 && POVMSObject_Set( msg, ebp_108, 0x55416243 ) == 0 && POVMSObject_New( ebp_120, 0x436f6d6d ) == 0 && POVMSUtil_SetString( ebp_120, 0x436f6d53, &opts.Shellouts[5].Command[0] ) == 0 )
              {
                switch ( opts.Shellouts[5].Ret )
                {
                case 5:
                  break;
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
                if ( eax == 0 && POVMSObject_Set( msg, ebp_120, 0x46457243 ) == 0 && POVMSUtil_SetString( msg, 0x49464e61, &opts.Input_File_Name[0] ) == 0 && POVMSAttrList_New( &list ) == 0 )
                {
                  int ii;
                  if ( opts.Library_Path_Index >= 1 )
                  {
                    ii = 0;
                    do
                    {
                      if ( POVMSAttr_New( &attr ) == 0 )
                      {
                        if ( ( __MOD(opts.Library_Paths[ ii ],4) ) == 0 )
                          goto B202;
                        else
                        {
                          if ( ( __MOD(opts.Library_Paths[ ii ],4) ) == 2 )
                            goto B204;
                          else
                          if ( edx < 2 )
                          {
                            if ( *(char*)(POVMSAttr_New( &attr ) + 1) )
                            {
                              ii = ii;
                            }
                            else
                            {
                              if ( eax == 0 )
                              {
                                POVMSAttrList_Append( &list, &attr );
                                ii++;
                                if ( opts.Library_Path_Index <= ii + 1 )
                                {
                                  ii = ii;
                                  break;
                                }
                              }
                              else
                              {
                                POVMSAttr_Delete( &attr );
                              }
                            }
                          }
                          else
                          if ( opts.Library_Paths[ ii ][0] )
                          {
                          }
B204:                          if ( opts.Library_Paths[ ii ][1] )
                            opts.Library_Paths[ ii ][1]++;
                        }
B202:                        do
                        {
B202:                        }
                        while ( ( ( opts.Library_Paths[ ii ][4] - 0x1010101 ) & ~opts.Library_Paths[ ii ][4] & -2139062144 ) == 0 );
                        return eax - 3 - ( 0 & 1 );
                      }
                      ii++;
                    }
                    while ( ii + 1 < opts.Library_Path_Index );
                    msg = msg;
                    if ( POVMSAttr_Delete( &attr ) == 0 )
                      goto B194;
                  }
B194:                  if ( POVMSObject_Set( msg, &list, 0x4c696250 ) == 0 && POVMSUtil_SetFloat( msg, 0x56657273, (float)( (double)( opts.Language_Version ) / 100.000000000000 ) ) == 0 && POVMSUtil_SetInt( msg, 0x5175616c, opts.Quality ) == 0 && POVMSUtil_SetBool( msg, 0x426f756e, opts.Use_Slabs ) == 0 && POVMSUtil_SetInt( msg, 0x42645468, opts.BBox_Threshold ) == 0 && POVMSUtil_SetBool( msg, 0x4c427566, ( opts.Options >> 12 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x56427566, ( opts.Options >> 11 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x526d4264, ( opts.Options >> 14 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x53706c55, ( opts.Options >> 10 ) & 1 ) == 0 && POVMSUtil_SetBool( msg, 0x416e7469, ( opts.Options >> 4 ) & 1 ) == 0 && POVMSUtil_SetInt( msg, 0x4141534d, opts.Tracing_Method ) == 0 && POVMSUtil_SetFloat( msg, 0x41415468, (float)( opts.Antialias_Threshold ) ) == 0 && POVMSUtil_SetInt( msg, 0x41414465, opts.AntialiasDepth ) == 0 && POVMSUtil_SetBool( msg, 0x41414a69, ( opts.Options >> 8 ) & 1 ) == 0 && POVMSUtil_SetFloat( msg, 0x41414a41, (float)( opts.JitterScale ) ) == 0 )
                  {
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
}
int BuildParseStatistics( POVMSObjectPtr msg )
{
{
  int err;
  if ( err == 0 && POVMSUtil_SetInt( msg, 0x496e4f62, numberOfInfiniteObjects ) == 0 )
  {
    return POVMSUtil_SetInt( msg, 0x4c69536f, numberOfLightSources );
  }
  *ebp_4 = ebx;
  return POVMSUtil_SetInt( msg, 0x46694f62, numberOfFiniteObjects );
}
}
int BuildRenderStatistics( POVMSObjectPtr msg, COUNTER *pstats )
{
{
  POVMSAttributeList list;
  int err;
  if ( err == 0 && POVMSUtil_SetInt( msg, 0x57696474, Frame.Screen_Width ) == 0 && POVMSUtil_SetLong( msg, 0x50697865, pstats[0] ) == 0 && POVMSUtil_SetLong( msg, 0x50697853, pstats[2] ) == 0 && POVMSUtil_SetLong( msg, 0x52617973, pstats[3] ) == 0 && POVMSUtil_SetLong( msg, 0x52536176, pstats[6] ) == 0 && POVMSAttrList_New( ebp_36 ) == 0 )
  {
    int i;
    if ( "Bezier Patch" )
    {
      i = 0;
      do
      {
        if ( AddOIStatistic( ebp_36, i, &pstats[0] ) )
          goto B4;
        else
        {
          i++;
        }
      }
      while ( 'E' );
    }
    if ( POVMSObject_Set( msg, ebp_36, 0x4f495374 ) == 0 && POVMSUtil_SetLong( msg, 0x53686454, pstats[107] ) == 0 && POVMSUtil_SetLong( msg, 0x53686453, pstats[106] ) == 0 && POVMSUtil_SetLong( msg, 0x4946526f, pstats[92] ) == 0 && POVMSUtil_SetLong( msg, 0x46564d43, pstats[93] ) == 0 && POVMSUtil_SetLong( msg, 0x46564d49, pstats[94] ) == 0 && POVMSUtil_SetLong( msg, 0x506e6d54, pstats[113] ) == 0 && POVMSUtil_SetLong( msg, 0x52456c69, pstats[114] ) == 0 && POVMSUtil_SetLong( msg, 0x43544e6f, pstats[5] ) == 0 && POVMSUtil_SetLong( msg, 0x4354444e, pstats[4] ) == 0 && POVMSUtil_SetLong( msg, 0x4d655361, pstats[99] ) == 0 && POVMSUtil_SetLong( msg, 0x4d65496e, pstats[100] ) == 0 && POVMSUtil_SetLong( msg, 0x52666c52, pstats[101] ) == 0 && POVMSUtil_SetLong( msg, 0x49526552, pstats[104] ) == 0 && POVMSUtil_SetLong( msg, 0x52667254, pstats[102] ) == 0 && POVMSUtil_SetLong( msg, 0x54726152, pstats[103] ) == 0 )
    {
      (unsigned int)pstats[115] = mem_stats_smallest_alloc(  );
      (unsigned int)pstats[116] = mem_stats_largest_alloc(  );
      if ( POVMSUtil_SetLong( msg, 0x4953744f, pstats[7] ) || POVMSUtil_SetLong( msg, 0x4d696e41, pstats[115] ) )
      {
        (unsigned int)pstats[117] = mem_stats_largest_mem_usage(  );
        return 0;
      }
      (unsigned int)pstats[117] = mem_stats_largest_mem_usage(  );
      if ( POVMSUtil_SetLong( msg, 0x4d617841, pstats[116] ) || POVMSUtil_SetLong( msg, 0x504d5573, pstats[117] ) || POVMSUtil_SetInt( msg, 0x544c6576, Highest_Trace_Level ) || POVMSUtil_SetInt( msg, 0x4d61784c, Max_Trace_Level ) || POVMSUtil_SetInt( msg, 0x52474374, ra_gather_count ) || POVMSUtil_SetInt( msg, 0x52524374, ra_reuse_count ) || POVMSUtil_SetLong( msg, 0x5053686f, pstats[118] ) || POVMSUtil_SetLong( msg, 0x5053746f, pstats[119] ) || POVMSUtil_SetLong( msg, 0x47505374, pstats[120] ) || POVMSUtil_SetLong( msg, 0x4d505374, pstats[121] ) || POVMSUtil_SetLong( msg, 0x50505149, pstats[122] ) || POVMSUtil_SetLong( msg, 0x50505152, pstats[123] ) || POVMSUtil_SetLong( msg, 0x4750436e, pstats[124] ) )
      {
        return 0;
      }
      POVMSUtil_SetLong( msg, 0x4745436e, pstats[125] );
      return 0;
    }
  }
B4:  (unsigned int)pstats[115] = mem_stats_smallest_alloc(  );
  (unsigned int)pstats[116] = mem_stats_largest_alloc(  );
  (unsigned int)pstats[117] = mem_stats_largest_mem_usage(  );
  return 0;
}
}
int BuildProgress( POVMSObjectPtr msg, int progress )
{
  int eax;
  int ecx;
  int edx;
{
  int ret = POVMSUtil_SetInt( msg, 0x546f7454, (int)( (double)( tstop - tstart ) ) );
  switch ( progress )
  {
  case 4:
    POVMSUtil_SetInt( msg, 0x5450436e, GetPhotonStat( 0x5450436e ) );
    POVMSUtil_SetInt( msg, 0x4f50436e, GetPhotonStat( 0x4f50436e ) );
    POVMSUtil_SetInt( msg, 0x4d50436e, GetPhotonStat( 0x4d50436e ) );
    POVMSUtil_SetInt( msg, 0x50585361, GetPhotonStat( 0x50585361 ) );
    POVMSUtil_SetInt( msg, 0x50595361, GetPhotonStat( 0x50595361 ) );
    return ret;
    break;
  case 7:
    POVMSUtil_SetInt( msg, 0x4350436e, GetPhotonStat( 0x4350436e ) );
    POVMSUtil_SetInt( msg, 0x5450436e, GetPhotonStat( 0x5450436e ) );
    return ret;
    break;
  case 13:
    POVMSUtil_SetInt( msg, 0x43757246, ( opts.FrameSeq.FrameNumber + 1 ) - opts.FrameSeq.InitialFrame );
    POVMSUtil_SetInt( msg, 0x46436e74, ( opts.FrameSeq.FinalFrame + 1 ) - opts.FrameSeq.InitialFrame );
    POVMSUtil_SetInt( msg, 0x41627346, opts.FrameSeq.FrameNumber );
    POVMSUtil_SetFloat( msg, 0x46697243, (float)( opts.FrameSeq.InitialClock ) );
    POVMSUtil_SetFloat( msg, 0x43757243, (float)( opts.FrameSeq.Clock_Value ) );
    POVMSUtil_SetFloat( msg, 0x4c617343, (float)( opts.FrameSeq.FinalClock ) );
    return ret;
    break;
  case 14:
    POVMSUtil_SetLong( msg, 0x43757254, Current_Token_Count );
    break;
  case 16:
    POVMSUtil_SetInt( msg, 0x4375724c, ( Current_Line_Number + 1 ) - opts.First_Line );
    POVMSUtil_SetInt( msg, 0x4162734c, Current_Line_Number );
    POVMSUtil_SetInt( msg, 0x4c436e74, opts.Last_Line - opts.First_Line );
    if ( MosaicPreviewSize > 1 )
    {
      POVMSUtil_SetInt( msg, 0x4d505369, MosaicPreviewSize );
    }
    if ( ( opts.Options & 16 ) & 255 )
    {
      POVMSUtil_SetInt( msg, 0x5353436e, SuperSampleCount );
    }
    if ( opts.Radiosity_Enabled )
    {
      POVMSUtil_SetInt( msg, 0x52474374, ra_gather_count - RadiosityCount );
      return ret;
    }
  default:
    break;
  }
}
}
int AddStatistic( POVMSObjectPtr msg, unsigned int key, COUNTER *counter )
{
  return POVMSUtil_SetLong( msg, key, counter[0] );
}
int AddOIStatistic( POVMSAttributeListPtr list, int index, COUNTER *pstats )
{
{
  POVMSObject obj;
  int err;
  if ( err == 0 && POVMSUtil_SetString( &obj, 0x4f4e616d, txt[ 6376 + ( index << 2 ) ] ) == 0 && POVMSUtil_SetInt( &obj, 0x4f496465, intersection_stats[ index ].povms_id ) == 0 && POVMSUtil_SetLong( &obj, 0x49547374, pstats[ 8 ] ) == 0 && POVMSUtil_SetLong( &obj, 0x49537563, pstats[ 9 ] ) == 0 )
  {
    return POVMSAttrList_Append( list, &obj );
  }
  return POVMSObject_New( &obj, 0x4f495374 );
}
}
void Send_InitInfo( void )
{
  int eax;
  int ecx;
  int edx;
{
  POVMSAttributeList attrlist;
  POVMSAttribute attr;
  POVMSObject msg;
  int err;
  if ( err == 0 && err == 0 && err == 0 && err == 0 && err == 0 && err == 0 )
  {
    int i;
    if ( Primary_Developers[0] )
    {
      i = 0;
      do
      {
        if ( POVMSAttr_New( ebp_48 ) == 0 )
        {
          if ( ( __MOD(Primary_Developers[ i ],4) ) == 0 )
            goto B24;
          else
          {
            if ( ( __MOD(Primary_Developers[ i ],4) ) == 2 )
              goto B26;
            else
            if ( edx < 2 )
            {
              if ( *(char*)(POVMSAttr_New( ebp_48 ) + 1) )
              {
                *(int*)(POVMSAttr_New( ebp_48 ) + 1)++;
                i = i;
              }
              else
              {
                if ( eax == 0 )
                {
                  POVMSAttrList_Append( ebp_36, ebp_48 );
                  i++;
                  if ( Primary_Developers[ i + 1 ] == 0 )
                  {
                    i = i;
                    break;
                  }
                }
                else
                {
                  POVMSAttr_Delete( ebp_48 );
                }
              }
            }
            else
            if ( Primary_Developers[ i ][0] )
              *(int*)(ecx + 1) = Primary_Developers[ i ][1];
B26:            if ( Primary_Developers[ i ][1] )
              Primary_Developers[ i ][1]++;
          }
B24:          do
          {
B24:          }
          while ( ( ( Primary_Developers[ i ][4] - 0x1010101 ) & ~Primary_Developers[ i ][4] & -2139062144 ) == 0 );
          eax = eax - 3 - ( 0 & 1 );
        }
        i++;
      }
      while ( Primary_Developers[ i + 1 ] );
      if ( POVMSAttr_Delete( ebp_48 ) )
        goto B4;
    }
    if ( POVMSObject_Set( ebp_60, ebp_36, 0x5072696d ) == 0 && POVMSAttrList_New( ebp_36 ) == 0 )
    {
      int i;
      if ( Contributing_Authors[0] )
      {
        i = 0;
        do
        {
          if ( POVMSAttr_New( ebp_48 ) == 0 )
          {
            if ( ( __MOD(Contributing_Authors[ i ],4) ) == 0 )
              goto B54;
            else
            {
              if ( ( __MOD(Contributing_Authors[ i ],4) ) == 2 )
                goto B56;
              else
              if ( edx < 2 )
              {
                if ( *(char*)(POVMSAttr_New( ebp_48 ) + 1) )
                {
                  *(int*)(POVMSAttr_New( ebp_48 ) + 1)++;
                  i = i;
                }
                else
                {
                  if ( eax == 0 )
                  {
                    POVMSAttrList_Append( ebp_36, ebp_48 );
                    i++;
                    if ( Contributing_Authors[ i + 1 ] == 0 )
                    {
                      i = i;
                      break;
                    }
                  }
                  else
                  {
                    POVMSAttr_Delete( ebp_48 );
                  }
                }
              }
              else
              if ( Contributing_Authors[ i ][0] )
                *(int*)(ecx + 1) = Contributing_Authors[ i ][1];
B56:              if ( Contributing_Authors[ i ][1] )
                Contributing_Authors[ i ][1]++;
            }
B54:            do
            {
B54:            }
            while ( ( ( Contributing_Authors[ i ][4] - 0x1010101 ) & ~Contributing_Authors[ i ][4] & -2139062144 ) == 0 );
            eax = eax - 3 - ( 0 & 1 );
          }
          i++;
        }
        while ( Contributing_Authors[ i + 1 ] );
        if ( POVMSAttr_Delete( ebp_48 ) )
          goto B4;
      }
      if ( POVMSObject_Set( ebp_60, ebp_36, 0x436f6e74 ) == 0 && POVMSAttrList_New( ebp_36 ) == 0 && POVMSAttr_New( ebp_48 ) == 0 )
      {
        char *tempstr;
        if ( ( __MOD(tempstr[0],4) ) == 0 )
          goto B81;
        else
        {
          if ( ( __MOD(tempstr[0],4) ) == 2 )
            goto B83;
          else
          if ( ecx < 2 )
          {
            if ( edx )
            {
              edx++;
            }
            else
            {
              if ( eax == 0 )
              {
                POVMSAttrList_Append( ebp_36, ebp_48 );
              }
              else
              {
                POVMSAttr_Delete( ebp_48 );
              }
              if ( POVMSAttrList_Append( ebp_36, ebp_48 ) == 0 && POVMSAttr_New( ebp_48 ) == 0 )
              {
                char *tempstr;
                if ( ( __MOD(tempstr[0],4) ) == 0 )
                  goto B105;
                else
                {
                  if ( ( __MOD(tempstr[0],4) ) == 2 )
                    goto B107;
                  else
                  if ( ecx < 2 )
                  {
                    if ( edx )
                    {
                      edx++;
                    }
                    else
                    {
                      if ( eax == 0 )
                      {
                        POVMSAttrList_Append( ebp_36, ebp_48 );
                      }
                      else
                      {
                        POVMSAttr_Delete( ebp_48 );
                      }
                      if ( POVMSAttrList_Append( ebp_36, ebp_48 ) == 0 && POVMSAttr_New( ebp_48 ) == 0 )
                      {
                        char *tempstr;
                        if ( ( __MOD(tempstr[0],4) ) == 0 )
                          goto B129;
                        else
                        {
                          if ( ( __MOD(tempstr[0],4) ) == 2 )
                            goto B131;
                          else
                          if ( ecx < 2 )
                          {
                            if ( edx )
                            {
                              edx++;
                            }
                            else
                            {
                              if ( eax == 0 )
                              {
                                POVMSAttrList_Append( ebp_36, ebp_48 );
                              }
                              else
                              {
                                POVMSAttr_Delete( ebp_48 );
                              }
                              if ( POVMSAttrList_Append( ebp_36, ebp_48 ) == 0 && POVMSAttr_New( ebp_48 ) == 0 )
                              {
                                char *tempstr;
                                if ( ( __MOD(tempstr[0],4) ) == 0 )
                                  goto B154;
                                else
                                {
                                  if ( ( __MOD(tempstr[0],4) ) == 2 )
                                    goto B156;
                                  else
                                  if ( ecx < 2 )
                                  {
                                    if ( edx )
                                    {
                                      edx++;
                                    }
                                    else
                                    {
                                      if ( eax == 0 )
                                      {
                                        POVMSAttrList_Append( ebp_36, ebp_48 );
                                      }
                                      else
                                      {
                                        POVMSAttr_Delete( ebp_48 );
                                      }
                                      if ( POVMSAttrList_Append( ebp_36, ebp_48 ) == 0 && POVMSObject_Set( ebp_60, ebp_36, 0x494c5665 ) == 0 && POVMSMsg_SetupMessage( ebp_60, 0x4d697363, 0x496e496e ) == 0 && POVMSMsg_SetDestinationAddress( ebp_60, povray_getoutputcontext(  ) ) == 0 && POVMS_Send( POVMS_Render_Context, ebp_60, 0, 1 ) == 0 )
                                      {
                                        return;
                                      }
                                    }
                                  }
                                  else
                                  if ( tempstr[0] )
                                    tempstr[1] = tempstr[1];
B156:                                  if ( tempstr[1] )
                                    tempstr[1]++;
                                }
B154:                                do
                                {
B154:                                }
                                while ( ( ( *(int*)(pov_tsprintf( "LibTIFF %s, Copyright 1988-1997 Sam Leffler, 1991-1997 SGI" ) + 4) - 0x1010101 ) & ~*(int*)(pov_tsprintf( "LibTIFF %s, Copyright 1988-1997 Sam Leffler, 1991-1997 SGI" ) + 4) & -2139062144 ) == 0 );
                                edx = edx - 3 - ( 0 & 1 );
                              }
                            }
                          }
                          else
                          if ( tempstr[0] )
                            tempstr[1] = tempstr[1];
B131:                          if ( tempstr[1] )
                            tempstr[1]++;
                        }
B129:                        do
                        {
B129:                        }
                        while ( ( ( *(int*)(pov_tsprintf( "LibJPEG %s, Copyright 1998 Thomas G. Lane" ) + 4) - 0x1010101 ) & ~*(int*)(pov_tsprintf( "LibJPEG %s, Copyright 1998 Thomas G. Lane" ) + 4) & -2139062144 ) == 0 );
                        edx = edx - 3 - ( 0 & 1 );
                      }
                    }
                  }
                  else
                  if ( tempstr[0] )
                    tempstr[1] = tempstr[1];
B107:                  if ( tempstr[1] )
                    tempstr[1]++;
                }
B105:                do
                {
B105:                }
                while ( ( ( *(int*)(pov_tsprintf( "LibPNG %s, Copyright 1998-2002 Glenn Randers-Pehrson" ) + 4) - 0x1010101 ) & ~*(int*)(pov_tsprintf( "LibPNG %s, Copyright 1998-2002 Glenn Randers-Pehrson" ) + 4) & -2139062144 ) == 0 );
                edx = edx - 3 - ( 0 & 1 );
              }
            }
          }
          else
          if ( tempstr[0] )
            tempstr[1] = tempstr[1];
B83:          if ( tempstr[1] )
            tempstr[1]++;
        }
B81:        do
        {
B81:        }
        while ( ( ( *(int*)(pov_tsprintf( "ZLib %s, Copyright 1995-1998 Jean-loup Gailly and Mark Adler" ) + 4) - 0x1010101 ) & ~*(int*)(pov_tsprintf( "ZLib %s, Copyright 1995-1998 Jean-loup Gailly and Mark Adler" ) + 4) & -2139062144 ) == 0 );
        edx = edx - 3 - ( 0 & 1 );
      }
    }
  }
B4:  __fprintf_chk( stderr, 1, "POVMS_ASSERT failed in %s line %d: %s\n", "povmsend.cpp", 0, "Sending InitInfo failed!" );
  return;
}
}
int Send_Progress( char *statusString, int progressState )
{
{
  POVMSObject msg;
  int err;
  Previous_t = (long long)0;
  if ( err == 0 && POVMSUtil_SetString( &msg, 0x45547874, statusString ) == 0 && POVMSUtil_SetBool( &msg, 0x50726f53, 0 ) == 0 && BuildProgress( &msg, progressState ) == 0 && POVMSMsg_SetupMessage( &msg, 0x4f757470, 0x50726f67 ) == 0 && POVMSMsg_SetDestinationAddress( &msg, povray_getoutputcontext(  ) ) == 0 )
  {
    return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
  }
  return POVMSObject_New( &msg, 0x50726f67 );
}
}
int Send_ProgressUpdate( int progressState, int t )
{
  int eax;
{
  POVMSObject msg;
  int err;
  double time_dif;
  time( &tstop );
  if ( ( ( ah & 5 ) & 255 ) == 0 || t == 0 )
  {
    Previous_t = (double)( tstop - tstart );
    if ( err == 0 && POVMSUtil_SetBool( &msg, 0x50726f53, 1 ) == 0 && BuildProgress( &msg, progressState ) == 0 && POVMSMsg_SetupMessage( &msg, 0x4f757470, 0x50726f67 ) == 0 && POVMSMsg_SetDestinationAddress( &msg, povray_getoutputcontext(  ) ) == 0 )
    {
      return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
    }
    return POVMSObject_New( &msg, 0x50726f67 );
  }
  else
  {
    return 0;
  }
}
}
int Send_FrameStatistics( void )
{
{
  POVMSObject msg;
  int err;
  if ( err == 0 && err == 0 && err == 0 && err == 0 && err == 0 )
  {
    return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
  }
  return POVMSObject_New( &msg, 0x46537461 );
}
}
int Send_ParseStatistics( void )
{
{
  POVMSObject msg;
  int err;
  if ( err == 0 && err == 0 && err == 0 && err == 0 && err == 0 && err == 0 )
  {
    return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
  }
  return POVMSObject_New( &msg, 0x50537461 );
}
}
int Send_RenderStatistics( bool total )
{
{
  POVMSObject msg;
  int err;
  if ( err == 0 )
  {
    if ( total )
    {
      BuildRenderStatistics( &msg, totalstats );
    }
    else
    {
      BuildRenderStatistics( &msg, stats );
    }
    if ( err == 0 && err == 0 && err == 0 )
    {
      POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
    }
  }
  return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
}
}
int Send_RenderOptions( void )
{
{
  POVMSObject msg;
  int err;
  if ( err == 0 && err == 0 && err == 0 && err == 0 )
  {
    return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
  }
  return POVMSObject_New( &msg, 0x524f7074 );
}
}
int Send_RenderStarted( bool continuetrace )
{
{
  POVMSObject msg;
  int err;
  if ( err == 0 && POVMSObject_Copy( gStartedStreamMessage, &msg ) == 0 && POVMSUtil_SetBool( &msg, 0x436f6e54, continuetrace & 255 ) == 0 && POVMSMsg_SetupMessage( &msg, 0x4f757470, 0x5252756e ) == 0 && POVMSMsg_SetDestinationAddress( &msg, povray_getoutputcontext(  ) ) == 0 )
  {
    return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
  }
  return POVMSObject_New( &msg, 0x2a2a2a2a );
}
}
int Send_RenderDone( bool withtime )
{
  int eax;
  int ah;
  int edx;
  double fp4;
  double fp7;
{
  POVMSObject msg;
  int err;
  int tp, th, tr;
  trender = trender;
  if ( ( ( ( ah & 69 ) ^ 64 ) & 255 ) == 0 )
  {
    time( &tstop );
    trender = (double)( tstop - tstart );
  }
  tp = (int)( tparse_total );
  if ( (int)( tparse_total ) < 1 )
  {
  }
  th = (int)( tphoton_total );
  if ( (int)( tphoton_total ) < 1 )
  {
  }
  tr = (int)( trender_total );
  if ( err == 0 )
  {
    BuildRenderTime( &msg, 0x4154696d, tp, th, tr, tr + tp + th );
    if ( POVMSMsg_SetupMessage( &msg, 0x4f757470, 0x52456e64 ) == 0 && POVMSMsg_SetDestinationAddress( &msg, povray_getoutputcontext(  ) ) == 0 )
    {
      return POVMS_Send( POVMS_Render_Context, &msg, 0, 1 );
    }
  }
  return POVMSMsg_SetDestinationAddress( &ebx, POVMSMsg_SetupMessage( &ebx, 0x4f757470, 0x52456e64 ) );
}
}
}
#if 0
#endif
