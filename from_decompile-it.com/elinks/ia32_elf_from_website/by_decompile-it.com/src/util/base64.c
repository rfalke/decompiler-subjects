#include "base64.c.h"
static unsigned char base64_chars[65] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/' };
unsigned char *base64_encode( unsigned char *in )
{
  if ( assert_failed == 0 )
  {
    if ( in && in )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/base64.c";
      errline = 21;
      elinks_internal( "assertion in && *in failed!" );
      if ( assert_failed )
        goto B2;
    }
    return base64_encode_bin( &in, strlen( &in ), 0 );
  }
B2:  assert_failed = 0;
  return 0;
}
unsigned char *base64_encode_bin( unsigned char *in, int inlen, int *outlen )
{
  int edx;
  unsigned char *out;
  unsigned char *outstr;
  if ( assert_failed == 0 )
  {
    if ( in && in )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/base64.c";
      errline = 33;
      elinks_internal( "assertion in && *in failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( outstr )
    {
      out = outstr;
      if ( inlen > 2 )
      {
        inlen = inlen;
        do
        {
          inlen -= 3;
          out = base64_chars[ in >> 2 ];
          out = base64_chars[ ( ( in >> 4 ) | ( in << 4 ) ) & 63 ];
          out = base64_chars[ ( ( in >> 6 ) | ( in << 2 ) ) & 63 ];
          in = in;
          out = out = base64_chars[ in & 63 ];
        }
        while ( inlen - 3 > 2 );
      }
      if ( inlen == 1 )
      {
        out = base64_chars[ in >> 2 ];
        out = 61;
        out = 61;
        out = out = base64_chars[ ( in << 4 ) & 63 ];
      }
      else
      if ( inlen == 2 )
      {
        out = base64_chars[ in >> 2 ];
        out = base64_chars[ ( ( in >> 4 ) | ( in << 4 ) ) & 63 ];
        out = 61;
        out = out = base64_chars[ ( in << 2 ) & 63 ];
      }
      out = 0;
      if ( outlen )
      {
        outlen = out - outstr - mem_alloc( ( ( inlen / 3 ) << 2 ) + 5 );
        return (unsigned char*)mem_alloc( ( ( inlen / 3 ) << 2 ) + 5 );
      }
      return 0;
    }
    else
    {
      return 0;
    }
  }
B2:  assert_failed = 0;
  outstr = 0;
  return 0;
}
unsigned char *base64_decode( unsigned char *in )
{
  if ( assert_failed == 0 )
  {
    if ( in && in )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/base64.c";
      errline = 73;
      elinks_internal( "assertion in && *in failed!" );
      if ( assert_failed )
        goto B2;
    }
    return base64_decode_bin( &in, strlen( &in ), 0 );
  }
B2:  assert_failed = 0;
  return 0;
}
unsigned char *base64_decode_bin( unsigned char *in, int inlen, int *outlen )
{
  int edx;
  static unsigned char is_base64_char[256];
  static unsigned char decode[256];
  static int once;
  unsigned char *out;
  unsigned char *outstr;
  int count;
  unsigned int bits;
  if ( assert_failed == 0 )
  {
    if ( in && in )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/base64.c";
      errline = 97;
      elinks_internal( "assertion in && *in failed!" );
      if ( assert_failed )
        goto B2;
    }
    outstr = 0;
    if ( out )
    {
      if ( once == 0 )
      {
      {
        do
        {
          int i;
          decode[ base64_chars[ i ] ] = i/*.1_1of4*/;
          i--;
          is_base64_char[ base64_chars[ i ] ] = 1;
        }
        while ( i - 1 != -1 );
        once = 1;
      }
      }
      if ( in && in != '=' )
      {
        if ( is_base64_char[ in ] )
        {
          bits = 0;
          count = 0;
          do
          {
            bits = bits + decode[ bits ];
            count++;
            if ( count + 1 == 4 )
            {
              in = in;
              bits = 0;
              out = bits >> 16;
              out = bits >> 8;
              count = 0;
              out = out = bits;
              if ( in )
              {
                if ( in == '=' )
                {
                  switch ( count )
                  {
                  case 1:
                    bits = bits;
                    break;
                    break;
                  case 2:
                    out = out = bits >> 10;
                    break;
                  case 3:
                    out = bits >> 16;
                    out = out = bits >> 8;
                    break;
                  }
                }
                else
                {
                }
              }
            }
            else
            {
              in = in;
              bits = bits << 6;
              if ( in )
              {
              }
            }
            if ( count )
              break;
          }
          while ( is_base64_char[ in ] );
        }
        bits = bits;
        mem_free( &out );
        outstr = 0;
        return 0;
      }
      else
      {
      }
      out = 0;
      outstr = mem_alloc( ( ( ( bits < 0 ? bits : bits + 3 ) >> 2 ) * 3 ) + 1 );
      if ( outlen )
      {
        outlen = out - out;
        outstr = out;
        *(int*)(mem_alloc( ( ( ( bits < 0 ? bits : bits + 3 ) >> 2 ) * 3 ) + 1 )) = out;
        return &out;
      }
      return &outstr;
    }
    else
    {
      return &outstr;
    }
  }
B2:  assert_failed = 0;
  outstr = 0;
  return &outstr;
}
#if 0
#endif
