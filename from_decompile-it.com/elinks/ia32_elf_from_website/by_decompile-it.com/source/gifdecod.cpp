#include "gifdecod.cpp.h"
using namespace std;
using namespace __debug;
using namespace pov_base;
namespace pov {
short get_next_code( void )
{
  int eax;
  int ecx;
{
  short i, x;
  ULONG ret;
  if ( nbits_left & 65535 )
    b1 = b1;
  else
  {
    if ( navail_bytes > 0 )
    {
    }
    else
    {
      pbytes = byte_buff;
      navail_bytes = gif_get_byte(  );
      if ( x >= 0 )
      {
        if ( !1 )
        {
          do
          {
            if ( x < 0 )
              break;
            byte_buff[ 0 ] = x/*.1_1of2*/;
            i = 0 + 1;
          }
          while ( i + 1 < navail_bytes );
        }
      }
      else
      {
        return code_mask[ curr_size ] & ret;
      }
    }
    b1 = pbytes[0];
    pbytes++;
    nbits_left = 8;
    navail_bytes--;
  }
  ret = ( b1 & 255 ) >> ( ( 8 - nbits_left ) & 31 );
  if ( nbits_left < curr_size )
  {
    navail_bytes = navail_bytes;
    do
    {
      if ( eax <= 0 )
      {
        pbytes = byte_buff;
        navail_bytes = gif_get_byte(  );
        if ( x >= 0 )
        {
          if ( !1 )
          {
            do
            {
              if ( x < 0 )
                break;
              byte_buff[ 0 ] = x/*.1_1of2*/;
              i = 0 + 1;
            }
            while ( i + 1 < navail_bytes );
          }
          else
          {
          }
        }
        else
          break;
      }
      b1 = pbytes[0];
      pbytes++;
      ret |= pbytes[0] << nbits_left;
      nbits_left += 8;
      navail_bytes--;
    }
    while ( curr_size <= nbits_left + 8 );
  }
  nbits_left = ( nbits_left + 8 ) - curr_size;
  return code_mask[ curr_size ] & ret;
}
}
void cleanup_gif_decoder( void )
{
  pov_free( (void*)dstack, "gifdecod.cpp", 312 );
  dstack = 0;
  pov_free( (void*)suffix, "gifdecod.cpp", 313 );
  suffix = 0;
  pov_free( (void*)prefix, "gifdecod.cpp", 314 );
  dstack = 0;
  suffix = 0;
  prefix = 0;
  return;
}
short decoder( int i_linewidth )
{
  int eax;
  int ecx;
  int edx;
{
  short linewidth;
  UTINY *sp, *bufptr;
  UTINY *buf;
  short code, fc, oc, bufcnt;
  short c, size, ret;
  if ( size >= 0 )
  {
    if ( gif_get_byte(  ) - 2 >= 7 )
    {
      curr_size = gif_get_byte(  ) + 1;
      top_slot = 1 << (unsigned short)( gif_get_byte(  ) + 1 );
      clear_code = 1 << gif_get_byte(  );
      ending = ( 1 << gif_get_byte(  ) ) + 1;
      newcodes = ( 1 << gif_get_byte(  ) ) + 2;
      slot = ( 1 << gif_get_byte(  ) ) + 2;
      nbits_left = 0;
      navail_bytes = 0;
      dstack = (UTINY*)pov_malloc( 4096, "gifdecod.cpp", 339, "GIF dstack" );
      suffix = (UTINY*)pov_malloc( 4096, "gifdecod.cpp", 340, "GIF suffix" );
      prefix = (UWORD*)pov_malloc( 8192, "gifdecod.cpp", 341, "GIF prefix" );
      bad_code_count = 0;
      while ( ending == get_next_code(  ) )
      {
        Do_Cooperate( 0 );
        if ( get_next_code(  ) < 0 )
        {
          cleanup_gif_decoder(  );
          break;
        }
        else
        {
          if ( clear_code == get_next_code(  ) )
          {
            curr_size = (unsigned short)( gif_get_byte(  ) + 1 );
            slot = newcodes;
            top_slot = 1 << (unsigned short)( gif_get_byte(  ) + 1 );
            do
            {
            }
            while ( clear_code != get_next_code(  ) );
            if ( ending != get_next_code(  ) )
            {
              *ebp_76 = 0;
              if ( ( i_linewidth/*.1_2of4*/ - 1 ) << 16 )
              {
              }
              else
              {
                Do_Cooperate( 1 );
                *ebp_64 = 0;
                if ( out_line( decoderline, i_linewidth/*.1_2of4*/ ) >= 0 )
                {
                }
              }
            }
          }
          else
          {
            if ( get_next_code(  ) < slot )
              *ebp_30 = get_next_code(  );
            else
            {
              if ( ccdep2 < ccdep1 )
                bad_code_count++;
              ebx = suffix[ slot ];
              *ebp_46 = get_next_code(  );
            }
            if ( newcodes <= get_next_code(  ) )
            {
              suffix[0] = suffix;
              do
              {
                ebx = *(char*)(suffix + ebp_46);
              }
              while ( newcodes <= *(short*)(prefix + ( *(short*)(prefix + ( ebp_46 * 2 )) * 2 )) );
            }
            ebx = *(short*)(prefix + ( ebp_46 * 2 ));
            if ( slot < top_slot )
            {
              suffix[ slot ] = eax;
              prefix[ slot ] = 0;
              slot = slot + 1;
              if ( slot + 1 < top_slot )
              {
                dstack[0] = dstack;
                while ( edx < ebx )
                {
                  do
                  {
                    edi = *(char*)(ebx - 1);
                    if ( ( ( i_linewidth - 1 ) << 16 ) == 0 )
                    {
                      Do_Cooperate( 1 );
                      if ( out_line( decoderline, i_linewidth/*.1_2of4*/ ) >= 0 )
                      {
                        dstack[0] = dstack;
                        break;
                        while ( edx < ebx )
                        {
                          do
                          {
                            edi = *(char*)(ebx - 1);
                          }
                          while ( ebx <= edx );
                          break;
                        }
                      }
                    }
                    else
                    break;
                  }
                  while ( ebx <= edx );
                  break;
                }
              }
              else
              {
              }
            }
            if ( curr_size <= 11 )
            {
              top_slot = top_slot * 2;
              curr_size++;
            }
          }
          cleanup_gif_decoder(  );
          *ebp_64 = ebp_64;
          break;
        }
      }
      cleanup_gif_decoder(  );
      ebx = 0;
    }
    else
    {
    }
  }
  return -20;
}
}
}
#if 0
#endif
