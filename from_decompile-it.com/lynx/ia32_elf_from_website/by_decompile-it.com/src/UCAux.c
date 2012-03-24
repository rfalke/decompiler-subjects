#include "UCAux.c.h"
BOOLEAN UCCanUniTranslateFrom( int from )
{
  if ( from < 0 )
  {
  }
  if ( strcmp( LYCharSet_UC[ from ].MIMEname, "x-transparent" ) == 0 )
  {
  }
  return 1;
}
BOOLEAN UCCanTranslateUniTo( int to )
{
  return ( to < 0 ? 0 : 1 );
}
BOOLEAN UCCanTranslateFromTo( int from, int to )
{
  if ( to == from )
  {
  }
  if ( from < 0 || to < 0 )
  {
  }
  if ( from == LATIN1 )
  {
  }
  if ( to == LATIN1 || LYCharSet_UC[ to ].enc == 7 )
  {
  }
{
  char *fromname = LYCharSet_UC[ from ].MIMEname;
  char *toname = LYCharSet_UC[ to ].MIMEname;
  if ( strcmp( fromname, "x-transparent" ) == 0 || strcmp( toname, "x-transparent" ) == 0 )
  {
  }
  if ( strcmp( fromname, "us-ascii" ) == 0 )
  {
  }
  if ( LYCharSet_UC[ from ].enc == 5 )
  {
    if ( LYCharSet_UC[ to ].enc != 5 )
    {
    }
    if ( ( strcmp( toname, "euc-jp" ) == 0 || strcmp( toname, "shift_jis" ) == 0 ) && ( strcmp( fromname, "euc-jp" ) == 0 || strcmp( fromname, "shift_jis" ) == 0 ) )
    {
    }
  }
  else
  {
  }
}
  return 1;
}
BOOLEAN UCNeedNotTranslate( int from, int to )
{
  char *fromname;
  char *toname;
  if ( to == from )
  {
  }
  if ( from < 0 )
  {
  }
  if ( LYCharSet_UC[ from ].enc == 0 )
  {
  }
  fromname = LYCharSet_UC[ from ].MIMEname;
  if ( strcmp( fromname, "x-transparent" ) == 0 || strcmp( fromname, "us-ascii" ) == 0 )
  {
  }
  if ( to < 0 )
  {
  }
  if ( to == LATIN1 && ( LYCharSet_UC->MIMEname & 1 ) )
  {
  }
  toname = LYCharSet_UC[ to ].MIMEname;
  if ( strcmp( toname, "x-transparent" ) == 0 )
  {
  }
  if ( LYCharSet_UC[ to ].enc == 7 )
  {
  }
  if ( from == LATIN1 && ( LYCharSet_UC->MIMEname & 2 ) )
  {
  }
  if ( LYCharSet_UC[ from ].enc == 5 )
  {
    if ( HTCJK == NOCJK )
    {
    }
    if ( HTCJK == JAPANESE && ( strcmp( fromname, "euc-jp" ) == 0 || strcmp( fromname, "shift_jis" ) == 0 ) )
    {
    }
  }
  else
  {
  }
  return 0;
}
void UCSetTransParams( UCTransParams *pT, int cs_in, LYUCcharset *p_in, int cs_out, LYUCcharset *p_out )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "UCSetTransParams: from %s(%d) to %s(%d)\n", &p_in->MIMEname, UCGetLYhndl_byMIME( &p_in->MIMEname ), &p_out->MIMEname, UCGetLYhndl_byMIME( &p_out->MIMEname ) );
  }
  pT->trans_C0_to_uni = 0;
  pT->transp = strcmp( &p_in->MIMEname, "x-transparent" ) == 0 || strcmp( &p_out->MIMEname, "x-transparent" ) == 0 ? 1 : 0;
  if ( pT->transp )
  {
    pT->do_cjk = 0;
    pT->decode_utf8 = 0;
    pT->output_utf8 = 0;
    pT->do_8bitraw = 1;
    pT->use_raw_char_in = 1;
    pT->strip_raw_char_in = 0;
    pT->pass_160_173_raw = 1;
    pT->repl_translated_C0 = p_out->enc == 3;
    pT->trans_C0_to_uni = p_in->enc == 3 || p_out->enc == 3 ? 1 : 0;
  }
  else
  {
    BOOLEAN intm_ucs = 0;
    BOOLEAN use_ucs = 0;
    pT->do_cjk = 0;
    pT->decode_utf8 = p_in->enc == 7;
    pT->output_utf8 = p_out->enc == 7;
    if ( pT->do_cjk )
    {
      intm_ucs = 0;
      pT->trans_to_uni = 0;
      use_ucs = 0;
      pT->do_8bitraw = 0;
      pT->pass_160_173_raw = 1;
      pT->use_raw_char_in = 0;
      pT->repl_translated_C0 = 0;
      pT->trans_from_uni = 0;
    }
    else
    {
      intm_ucs = cs_in == LATIN1 || pT->decode_utf8 || ( p_in->codepoints & 5 ) ? 1 : 0;
      pT->trans_to_uni = 0;
      pT->trans_C0_to_uni = 0;
      pT->repl_translated_C0 = p_out->enc == 3;
      pT->strip_raw_char_in = 0;
      *(int*)&use_ucs = 0;
      pT->do_8bitraw = use_ucs == 0;
      pT->pass_160_173_raw = use_ucs == 0 && ( p_in->like8859 & 128 ) == 0 ? 1 : 0;
      pT->use_raw_char_in = pT->output_utf8 == 0 && cs_out == cs_in && pT->trans_C0_to_uni == 0 ? 1 : 0;
      pT->trans_from_uni = 0;
    }
  }
  return;
}
void UCTransParams_clear( UCTransParams *pT )
{
  pT->transp = 0;
  pT->do_cjk = 0;
  pT->decode_utf8 = 0;
  pT->output_utf8 = 0;
  pT->do_8bitraw = 0;
  pT->use_raw_char_in = 0;
  pT->strip_raw_char_in = 0;
  pT->pass_160_173_raw = 0;
  pT->trans_to_uni = 0;
  pT->trans_C0_to_uni = 0;
  pT->repl_translated_C0 = 0;
  pT->trans_from_uni = 0;
  return;
}
void UCSetBoxChars( int cset, int *pvert_out, int *phori_out, int vert_in, int hori_in )
{
  BOOLEAN fix_lines = 0;
  if ( fix_lines )
  {
    if ( vert_in == 0 )
      vert_in = 124;
    if ( hori_in == 0 )
    {
      hori_in = 45;
    }
  }
  pvert_out[0] = vert_in;
  phori_out[0] = hori_in;
  return;
}
BOOLEAN UCPutUtf8_charstring( HTStream *target, putc_func_t *myPutc, long code )
{
  if ( code <= 127 )
  {
  }
  if ( code <= 2047 )
  {
    target = myPutc( );
    target = myPutc( );
  }
  else
  if ( code <= 65535 )
  {
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
  }
  else
  if ( code <= 0x1fffff )
  {
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
  }
  else
  if ( code <= 0x3ffffff )
  {
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
  }
  else
  {
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
    target = myPutc( );
  }
  return 1;
}
BOOLEAN UCConvertUniToUtf8( UCode_t code, char *buffer )
{
  char *ch = buffer;
  if ( ch == 0 )
  {
  }
  else
  if ( code <= 0 )
  {
    ch[0] = 0;
  }
  else
  {
    if ( code <= 2047 )
    {
      ch[0] = ( code >> 6 ) | -64;
      ch++;
      ch[0] = ( code & 63 ) | -128;
      ch++;
      ch[0] = 0;
    }
    else
    if ( code <= 65535 )
    {
      ch[0] = ( code >> 12 ) | -32;
      ch++;
      ch[0] = ( ( code >> 6 ) & 63 ) | -128;
      ch++;
      ch[0] = ( code & 63 ) | -128;
      ch++;
      ch[0] = 0;
    }
    else
    if ( code <= 0x1fffff )
    {
      ch[0] = ( code >> 18 ) | -16;
      ch++;
      ch[0] = ( ( code >> 12 ) & 63 ) | -128;
      ch++;
      ch[0] = ( ( code >> 6 ) & 63 ) | -128;
      ch++;
      ch[0] = ( code & 63 ) | -128;
      ch++;
      ch[0] = 0;
    }
    else
    if ( code <= 0x3ffffff )
    {
      ch[0] = ( code >> 24 ) | -8;
      ch++;
      ch[0] = ( ( code >> 18 ) & 63 ) | -128;
      ch++;
      ch[0] = ( ( code >> 12 ) & 63 ) | -128;
      ch++;
      ch[0] = ( ( code >> 6 ) & 63 ) | -128;
      ch++;
      ch[0] = ( code & 63 ) | -128;
      ch++;
      ch[0] = 0;
    }
    else
    {
      ch[0] = ( code >> 30 ) | -4;
      ch++;
      ch[0] = ( ( code >> 24 ) & 63 ) | -128;
      ch++;
      ch[0] = ( ( code >> 18 ) & 63 ) | -128;
      ch++;
      ch[0] = ( ( code >> 12 ) & 63 ) | -128;
      ch++;
      ch[0] = ( ( code >> 6 ) & 63 ) | -128;
      ch++;
      ch[0] = ( code & 63 ) | -128;
      ch++;
      ch[0] = 0;
    }
  }
  return 1;
}
UCode_t UCGetUniFromUtf8String( char **ppuni )
{
  UCode_t uc_out = 0;
  char *p = ppuni[0];
  int utf_count, i;
  if ( ppuni[0] >= 0 )
  {
    return ppuni[0];
  }
  if ( ( ppuni[0] & 64 ) == 0 )
  {
    return -1;
  }
  if ( ( p[0] & 224 ) == 192 )
    utf_count = 1;
  else
  if ( ( p[0] & 240 ) == 224 )
    utf_count = 2;
  else
  if ( ( p[0] & 248 ) == 240 )
    utf_count = 3;
  else
  if ( ( p[0] & 252 ) == 248 )
    utf_count = 4;
  else
  if ( ( p[0] & 254 ) == 252 )
    utf_count = 5;
  else
  {
    return -1;
  }
  p = ppuni[0];
  i = 0;
  for ( ; i < utf_count; i++ )
  {
    p++;
    if ( ( p[0] & 192 ) != 128 )
    {
      return -1;
    }
    // i++;
  }
  p = ppuni[0];
  switch ( utf_count )
  {
  case 1:
    uc_out = ( p[1] & 63 ) | ( ( p[0] & 31 ) << 6 );
    ppuni[0] = &p[ utf_count ];
    return uc_out;
    break;
  case 2:
    uc_out = ( p[2] & 63 ) | ( ( ( p[1] & 63 ) | ( ( p[0] & 15 ) << 6 ) ) << 6 );
    break;
  case 3:
    uc_out = ( p[3] & 63 ) | ( ( ( p[2] & 63 ) | ( ( ( p[1] & 63 ) | ( ( p[0] & 7 ) << 6 ) ) << 6 ) ) << 6 );
    break;
  case 4:
    uc_out = ( p[4] & 63 ) | ( ( ( p[3] & 63 ) | ( ( ( p[2] & 63 ) | ( ( ( p[1] & 63 ) | ( p[0] << 6 ) ) << 6 ) ) << 6 ) ) << 6 );
    break;
  case 5:
    uc_out = ( p[5] & 63 ) | ( ( ( p[4] & 63 ) | ( ( ( p[3] & 63 ) | ( ( ( p[2] & 63 ) | ( ( ( p[1] & 63 ) | ( ( p[0] & 1 ) << 6 ) ) << 6 ) ) << 6 ) ) << 6 ) ) << 6 );
    break;
  case 0:
    break;
  }
}
#if 0
#endif
