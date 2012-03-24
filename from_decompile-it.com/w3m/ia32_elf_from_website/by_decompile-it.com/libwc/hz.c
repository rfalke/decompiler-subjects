#include "hz.c.h"
Str wc_conv_from_hz( Str is, wc_ces ces )
{
  int eax;
  Str os;
  wc_uchar *sp = (wc_uchar*)is->ptr;
  wc_uchar *ep = &sp[ is->length ];
  wc_uchar *p;
  int state = 0;
  p = sp;
  if ( p < ep )
  {
    if ( p[0] >= 0 )
    {
      if ( p[0] != '~' )
        p++;
      else
      {
        if ( p == ep )
        {
          is->ptr = (char*)is;
          return os;
        }
        else
        {
          os = Strnew_size( is->length );
          if ( sp < p )
            Strcat_charp_n( os, is->ptr, p - sp );
            p++;
            if ( p < ep )
            {
              switch ( state )
              {
              default:
                break;
              case 0:
                if ( p[0] == '~' )
                  state = 1;
                else
                {
                  if ( WC_ISO_MAP[ p[0] ] == '@' )
                    state = 5;
                  else
                  {
                    if ( p[0] < 0 )
                    {
                      wtf_push_unknown( os, p, 1 );
                    }
                    if ( os->area_size <= os->length + 1 )
                      Strgrow( os );
                      os->ptr[ os->length ] = p[0];
                      os->length++;
                      os->ptr[ os->length ] = 0;
                    else
                    {
                      os->ptr[ os->length ] = p[0];
                      os->length++;
                      os->ptr[ os->length ] = 0;
                    }
                  }
                }
                break;
              case 1:
                if ( p[0] == '{' )
                  state = 3;
                else
                {
                  if ( p[0] == '~' )
                  {
                    if ( os->area_size <= os->length + 1 )
                      Strgrow( os );
                      os->ptr[ os->length ] = p[0];
                      os->length++;
                      os->ptr[ os->length ] = 0;
                      state = 0;
                    else
                    {
                      os->ptr[ os->length ] = p[0];
                      os->length++;
                      os->ptr[ os->length ] = 0;
                      state = 0;
                    }
                  }
                  else
                  {
                    if ( p[0] == 10 )
                    {
                    }
                    else
                      wtf_push_unknown( os, &p[ -1 ], 2 );
                      state = 0;
                  }
                }
                break;
              case 2:
                if ( p[0] != '}' )
                {
                  if ( p[0] == 10 )
                    state = 0;
                  else
                  {
                    if ( ( WC_ISO_MAP[ p[0] & 127 ] & 255 ) == 0 )
                    {
                      wtf_push( os, 33089, p[0] | ( p[ -1 ] << 8 ) );
                    }
                    wtf_push_unknown( os, &p[ -1 ], 2 );
                    state = 3;
                  }
                }
                else
                  state = 0;
                break;
              case 3:
                if ( p[0] == '~' )
                  state = 2;
                else
                {
                  if ( ( WC_ISO_MAP[ p[0] & 127 ] & 255 ) == 0 )
                    state = 4;
                  else
                    wtf_push_unknown( os, p, 1 );
                }
                break;
              case 4:
                if ( ( WC_ISO_MAP[ p[0] & 127 ] & 255 ) == 0 )
                {
                  wtf_push( os, 33089, p[0] | ( p[ -1 ] << 8 ) );
                }
                wtf_push_unknown( os, &p[ -1 ], 2 );
                state = 3;
                break;
              case 5:
                if ( WC_ISO_MAP[ p[0] ] == '@' )
                {
                  wtf_push( os, 33089, p[0] | ( p[ -1 ] << 8 ) );
                }
                wtf_push_unknown( os, &p[ -1 ], 2 );
                state = 0;
                break;
              }
            }
            else
            {
              if ( state <= 5 )
              {
                if ( ( ( 1 << state ) & 54 ) != 0 )
                  wtf_push_unknown( os, &p[ -1 ], 1 );
                  os->ptr = (char*)os;
                  return os;
              }
            }
          else
          {
          }
        }
      }
    }
  }
}
void wc_push_to_hz( Str os, wc_wchar_t cc, wc_status *st )
{
  while ( 1 )
  {
    switch ( cc.ccs )
    {
      if ( ( WcOption.ucs_conv & 255 ) != 0 )
      {
        wc_any_to_any_ces( cc, &cc.ccs/*error:'I'*/ );
      }
      else
      {
        cc.ccs = ( cc.ccs & 98304 ) == 0 ? 16384 : 49152;
      }
      break;
    default:
      break;
    case 322:
      if ( ( st->gl & 255 ) != 0 )
      {
        if ( os->area_size <= os->length + 1 )
          Strgrow( os );
        os->ptr[ os->length ] = '~';
        os->length++;
        os->ptr[ os->length ] = 0;
        if ( os->area_size <= os->length + 1 )
          Strgrow( os );
        os->ptr[ os->length ] = '}';
        os->length++;
        os->ptr[ os->length ] = 0;
        st->gl = 0;
      }
      if ( (unsigned char)( cc.code ) == '~' )
      {
        if ( os->area_size <= os->length + 1 )
          Strgrow( os );
        os->ptr[ os->length ] = '~';
        os->length++;
        os->ptr[ os->length ] = 0;
      }
      if ( os->area_size <= os->length + 1 )
        Strgrow( os );
      os->ptr[ os->length ] = cc.code;
      os->length++;
      os->ptr[ os->length ] = 0;
      break;
    case 33089:
      if ( ( st->gl & 255 ) == 0 )
      {
        if ( os->area_size <= os->length + 1 )
          Strgrow( os );
        os->ptr[ os->length ] = '~';
        os->length++;
        os->ptr[ os->length ] = 0;
        if ( os->area_size <= os->length + 1 )
          Strgrow( os );
        os->ptr[ os->length ] = '{';
        os->length++;
        os->ptr[ os->length ] = 0;
        st->gl = 1;
      }
      if ( os->area_size <= os->length + 1 )
        Strgrow( os );
      os->ptr[ os->length ] = ( cc.code >> 8 ) & 127;
      os->length++;
      os->ptr[ os->length ] = 0;
      if ( os->area_size <= os->length + 1 )
        Strgrow( os );
      os->ptr[ os->length ] = cc.code & 127;
      os->length++;
      os->ptr[ os->length ] = 0;
      break;
    case 49152:
      if ( ( WcOption.no_replace & 255 ) != 0 )
      {
      }
      else
      {
        if ( ( st->gl & 255 ) != 0 )
        {
          if ( os->area_size <= os->length + 1 )
            Strgrow( os );
          os->ptr[ os->length ] = '~';
          os->length++;
          os->ptr[ os->length ] = 0;
          if ( os->area_size <= os->length + 1 )
            Strgrow( os );
          os->ptr[ os->length ] = '}';
          os->length++;
          os->ptr[ os->length ] = 0;
          st->gl = 0;
        }
        Strcat_charp( os, WcReplaceW );
      }
      break;
    case 16384:
      if ( ( WcOption.no_replace & 255 ) != 0 )
      {
      }
      else
      {
        if ( ( st->gl & 255 ) != 0 )
        {
          if ( os->area_size <= os->length + 1 )
            Strgrow( os );
          os->ptr[ os->length ] = '~';
          os->length++;
          os->ptr[ os->length ] = 0;
          if ( os->area_size <= os->length + 1 )
            Strgrow( os );
          os->ptr[ os->length ] = '}';
          os->length++;
          os->ptr[ os->length ] = 0;
          st->gl = 0;
        }
        Strcat_charp( os, WcReplace );
      }
      break;
    }
    break;
  }
}
void wc_push_to_hz_end( Str os, wc_status *st )
{
  if ( ( st->gl & 255 ) != 0 )
  {
    if ( os->area_size <= os->length + 1 )
      Strgrow( os );
    os->ptr[ os->length ] = '~';
    os->length++;
    os->ptr[ os->length ] = 0;
    if ( os->area_size <= os->length + 1 )
      Strgrow( os );
    os->ptr[ os->length ] = '}';
    os->length++;
    os->ptr[ os->length ] = 0;
    st->gl = 0;
  }
  return;
}
