#include "povray.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
using namespace pov;
using namespace pov_frontend;
void povray_init( void )
{
  Stage = 0;
  if ( pre_init_flag == 0 )
  {
    int err;
    Cooperate_Render_Flag = 0;
    if ( err || err || err || err || err )
    {
      __fprintf_chk( stderr, 1, "POVMS_ASSERT failed in %s line %d: %s\n", "povray.cpp", 0, "Installing POVMS receive handler functions failed." );
    }
  }
  mem_init(  );
  pre_init_tokenizer(  );
  pre_init_flag = 1234;
  return;
}
void povray_terminate( void )
{
  close_all(  );
  UNIX_finish_povray(  );
  UNIX_free_globals(  );
  mem_release_all(  );
  POVMS_CloseContext( POVMS_Render_Context );
  pre_init_flag = 0;
  return;
}
void povray_exit( int i )
{
  int eax;
#error unstructured control flow
}
void povray_cooperate( void )
{
  if ( _setjmp( globalSetJmpEnv[0].__jmpbuf ) == 0 )
  {
    switch ( Cooperate_Render_Flag )
    {
    default:
      do
      {
      }
      while ( POVMS_ProcessMessages( POVMS_Render_Context, 0 ) - 1 );
      do
      {
      }
      while ( POVMS_ProcessMessages( POVMS_Output_Context, 0 ) - 1 );
      return;
      break;
    case 3:
      close_all(  );
      UNIX_finish_povray(  );
      UNIX_free_globals(  );
      mem_release_all(  );
      Send_RenderDone( 0 );
      Cooperate_Render_Flag = 1;
      if ( Binary_POVMS_Stream_Mode == 0 )
      {
        Cooperate_Render_Flag = -1;
      }
      else
      {
        init_vars(  );
      }
      break;
    case 0:
      Cooperate_Render_Flag = 1;
      povray_init(  );
      Stage = 1;
      UNIX_startup_povray(  );
      Stage = 2;
      Send_InitInfo(  );
      init_vars(  );
      break;
    case 1:
      POVMS_ProcessMessages( POVMS_Render_Context, 1 );
      break;
    case 2:
      Send_RenderStarted( ( opts.Options >> 7 ) & 1 );
      fix_up_scene_name(  );
      fix_up_animation_values(  );
      fix_up_rendering_window(  );
      init_output_file_handle(  );
      Send_RenderOptions(  );
      FrameLoop(  );
      close_all(  );
      UNIX_finish_povray(  );
      UNIX_free_globals(  );
      mem_release_all(  );
      Send_RenderDone( 0 );
      Cooperate_Render_Flag = 1;
      break;
    }
    return;
  }
}
void *povray_getoutputcontext( void )
{
{
  void *addr = 0;
  if ( POVMS_GetContextAddress( POVMS_Output_Context, &addr ) )
  {
    return 0;
  }
  return addr;
}
}
namespace pov {
void Do_Cooperate( int level )
{
  if ( level != 1 )
  {
    do
    {
    }
    while ( POVMS_ProcessMessages( POVMS_Render_Context, 0 ) - 1 );
    do
    {
    }
    while ( POVMS_ProcessMessages( POVMS_Output_Context, 0 ) - 1 );
  }
  return;
}
}
#if 0
#endif
