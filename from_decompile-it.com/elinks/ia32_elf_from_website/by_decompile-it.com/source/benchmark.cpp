#include "benchmark.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
bool Write_Benchmark_File( char *Scene_File_Name, char *INI_File_Name )
{
  int eax;
  int ecx;
  int edx;
{
  FILE *outF = fopen( Scene_File_Name, "wt" );
  if ( fopen( Scene_File_Name, "wt" ) )
  {
    if ( 0 != fputs( Benchmark_File, &outF[0] ) + 1 )
    {
      fclose( &outF[0] );
      outF = fopen( INI_File_Name, "wt" );
      if ( fopen( INI_File_Name, "wt" ) )
      {
        if ( 0 != fputs( Benchmark_Options, &outF[0] ) + 1 )
        {
          fclose( &outF[0] );
          return 1;
        }
      }
    }
    fclose( &outF[0] );
    return 0;
  }
  return 0;
}
}
unsigned int Get_Benchmark_Version( void )
{
  return 258;
}
}
#if 0
#endif
