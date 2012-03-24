#include "UCdomap.c.h"
static unsigned char dfont_unicount_windows_1250[256];
static unsigned char dfont_unicount_windows_1251[256];
static unsigned char dfont_unicount_windows_1252[256];
static unsigned char dfont_unicount_windows_1253[256];
static unsigned char dfont_unicount_windows_1255[256];
static unsigned char dfont_unicount_windows_1256[256];
static unsigned char dfont_unicount_windows_1257[256];
static unsigned char dfont_unicount_cp437[256];
static unsigned char dfont_unicount_cp737[256];
static unsigned char dfont_unicount_cp775[256];
static unsigned char dfont_unicount_cp850[256];
static unsigned char dfont_unicount_cp852[256];
static unsigned char dfont_unicount_cp857[256];
static unsigned char dfont_unicount_cp862[256];
static unsigned char dfont_unicount_cp864[256];
static unsigned char dfont_unicount_cp866[256];
static unsigned char dfont_unicount_cp869[256];
static unsigned char dfont_unicount[256];
static unsigned char dfont_unicount_dec_mcs[256];
static unsigned char dfont_unicount_hp_roman8[256];
static unsigned char dfont_unicount_iso_8859_1[256];
static unsigned char dfont_unicount_iso_8859_2[256];
static unsigned char dfont_unicount_iso_8859_3[256];
static unsigned char dfont_unicount_iso_8859_4[256];
static unsigned char dfont_unicount_iso_8859_5[256];
static unsigned char dfont_unicount_iso_8859_6[256];
static unsigned char dfont_unicount_iso_8859_7[256];
static unsigned char dfont_unicount_iso_8859_8[256];
static unsigned char dfont_unicount_iso_8859_9[256];
static unsigned char dfont_unicount_iso_8859_10[256];
static unsigned char dfont_unicount_iso_8859_13[256];
static unsigned char dfont_unicount_iso_8859_14[256];
static unsigned char dfont_unicount_iso_8859_15[256];
static unsigned char dfont_unicount_koi8_r[256];
static unsigned char dfont_unicount_macintosh[256];
static unsigned char dfont_unicount_mnemonic[256];
static unsigned char dfont_unicount_next[256];
static unsigned char dfont_unicount_mnemonic_ascii_0[256];
static unsigned char dfont_unicount_viscii[256];
static unsigned char dfont_unicount_cp866u[256];
static unsigned char dfont_unicount_koi8_u[256];
static unsigned char dfont_unicount_ptcp154[256];
static unsigned short dfont_unitable_windows_1250[235];
static unsigned short dfont_unitable_windows_1251[222];
static unsigned short dfont_unitable_windows_1252[229];
static unsigned short dfont_unitable_windows_1253[208];
static unsigned short dfont_unitable_windows_1255[200];
static unsigned short dfont_unitable_windows_1256[223];
static unsigned short dfont_unitable_windows_1257[211];
static unsigned short dfont_unitable_cp437[247];
static unsigned short dfont_unitable_cp737[231];
static unsigned short dfont_unitable_cp775[223];
static unsigned short dfont_unitable_cp850[247];
static unsigned short dfont_unitable_cp852[251];
static unsigned short dfont_unitable_cp857[221];
static unsigned short dfont_unitable_cp862[224];
static unsigned short dfont_unitable_cp864[218];
static unsigned short dfont_unitable_cp866[224];
static unsigned short dfont_unitable_cp869[217];
static unsigned short dfont_unitable[616];
static unsigned short dfont_unitable_dec_mcs[176];
static unsigned short dfont_unitable_hp_roman8[190];
static unsigned short dfont_unitable_iso_8859_1[201];
static unsigned short dfont_unitable_iso_8859_2[209];
static unsigned short dfont_unitable_iso_8859_3[184];
static unsigned short dfont_unitable_iso_8859_4[97];
static unsigned short dfont_unitable_iso_8859_5[208];
static unsigned short dfont_unitable_iso_8859_6[146];
static unsigned short dfont_unitable_iso_8859_7[220];
static unsigned short dfont_unitable_iso_8859_8[155];
static unsigned short dfont_unitable_iso_8859_9[205];
static unsigned short dfont_unitable_iso_8859_10[191];
static unsigned short dfont_unitable_iso_8859_13[191];
static unsigned short dfont_unitable_iso_8859_14[191];
static unsigned short dfont_unitable_iso_8859_15[191];
static unsigned short dfont_unitable_koi8_r[239];
static unsigned short dfont_unitable_macintosh[226];
static unsigned short dfont_unitable_mnemonic[1];
static unsigned short dfont_unitable_next[222];
static unsigned short dfont_unitable_mnemonic_ascii_0[1];
static unsigned short dfont_unitable_viscii[142];
static unsigned short dfont_unitable_cp866u[224];
static unsigned short dfont_unitable_koi8_u[224];
static unsigned short dfont_unitable_ptcp154[223];
static struct unipair_str repl_map_mnemonic[1851];
static struct unipair_str repl_map_mnemonic_ascii_0[1941];
static char *UC_GNsetMIMEnames[4];
static struct unimapdesc_str dfont_replacedesc_iso_8859_4;
static int UC_GNhandles[4];
static struct unipair_str repl_map_viscii[8];
static struct unipair_str repl_map_iso_8859_8[22];
static struct unimapdesc_str dfont_replacedesc_iso_8859_6;
static struct unipair_str repl_map_dec_mcs[17];
static struct unipair_str repl_map_iso_8859_10[1];
static struct unimapdesc_str dfont_replacedesc_viscii;
static struct unimapdesc_str dfont_replacedesc_iso_8859_3;
static struct unimapdesc_str dfont_replacedesc_hp_roman8;
static struct unipair_str repl_map_iso_8859_1[67];
static struct unipair_str repl_map_iso_8859_5[4];
static struct unipair_str repl_map_iso_8859_9[8];
static struct unimapdesc_str dfont_replacedesc_iso_8859_13;
static struct unimapdesc_str dfont_replacedesc_iso_8859_14;
static struct unimapdesc_str dfont_replacedesc_iso_8859_15;
static struct unimapdesc_str dfont_replacedesc_windows_1255;
static struct unipair_str repl_map_iso_8859_2[7];
static unsigned short translations[4][256];
static struct unimapdesc_str dfont_replacedesc_windows_1253;
static struct unipair_str repl_map_iso_8859_7[6];
static struct unipair_str repl_map_windows_1252[9];
static struct unimapdesc_str dfont_replacedesc_windows_1257;
static struct unipair_str repl_map_cp737[9];
static struct unimapdesc_str dfont_replacedesc_iso_8859_10;
static struct unipair_str repl_map_macintosh[14];
static struct unipair_str repl_map_windows_1250[8];
static struct unimapdesc_str dfont_replacedesc_windows_1251;
static struct unimapdesc_str dfont_replacedesc_windows_1256;
static struct unimapdesc_str dfont_replacedesc_cp775;
static struct unimapdesc_str dfont_replacedesc_cp857;
static struct unimapdesc_str dfont_replacedesc_cp862;
static struct unimapdesc_str dfont_replacedesc_cp864;
static struct unimapdesc_str dfont_replacedesc_cp866;
static struct unimapdesc_str dfont_replacedesc_cp869;
static struct unimapdesc_str dfont_replacedesc_iso_8859_8;
static struct unimapdesc_str dfont_replacedesc_next;
static struct unimapdesc_str dfont_replacedesc_cp866u;
static struct unimapdesc_str dfont_replacedesc_koi8_u;
static struct unimapdesc_str dfont_replacedesc_ptcp154;
static struct unipair_str repl_map_cp437[12];
static struct unipair_str repl_map_cp850[8];
static struct unimapdesc_str dfont_replacedesc_dec_mcs;
static struct unimapdesc_str dfont_replacedesc_iso_8859_5;
static struct unipair_str repl_map_cp852[7];
static struct unimapdesc_str dfont_replacedesc_iso_8859_9;
static struct unimapdesc_str dfont_replacedesc_koi8_r;
static struct unimapdesc_str dfont_replacedesc_iso_8859_2;
static struct unimapdesc_str dfont_replacedesc_iso_8859_7;
static struct unimapdesc_str dfont_replacedesc_windows_1250;
static struct unimapdesc_str dfont_replacedesc_windows_1252;
static struct unimapdesc_str dfont_replacedesc_cp737;
static struct unimapdesc_str dfont_replacedesc_cp850;
static struct unimapdesc_str dfont_replacedesc_macintosh;
static struct unimapdesc_str dfont_replacedesc_cp437;
static struct unimapdesc_str dfont_replacedesc_cp852;
static struct unimapdesc_str dfont_replacedesc_iso_8859_1;
static struct unipair_str repl_map[2610];
static unsigned short *UC_translate;
static struct UC_charset UCInfo[60];
static unsigned char *inv_translate;
static unsigned char inv_norm_transl[512];
static unsigned char *inverse_translations[4];
static int default_UChndl;
static int hashtable_contents_valid;
static int hashtable_str_contents_valid;
static unsigned short **uni_pagedir[32];
static char ***uni_pagedir_str[32];
static unsigned short *UC_current_unitable;
static struct unimapdesc_str *UC_current_unitable_str;
static int unidefault_contents_valid;
static int unidefault_str_contents_valid;
static unsigned short **unidefault_pagedir[32];
static char ***unidefault_pagedir_str[32];
static unsigned short *UC_default_unitable;
static struct unimapdesc_str *UC_default_unitable_str;
static struct unimapdesc_str dfont_replacedesc_mnemonic;
static struct unimapdesc_str dfont_replacedesc_mnemonic_ascii_0;
int UCNumCharsets;
int UCLYhndl_HTFile_for_unspec;
int UCLYhndl_HTFile_for_unrec;
int UCLYhndl_for_unspec;
int UCLYhndl_for_unrec;
int LATIN1;
int US_ASCII;
int UTF8_handle;
int TRANSPARENT;
int UCInitialized;
static struct unimapdesc_str dfont_replacedesc;
static int UC_lastautoGN;
static char **remember_allocated_LYCharSets[60];
void set_inverse_transl( int i )
{
  int j, glyph;
  unsigned short *p = translations[0];
  unsigned char *q = inverse_translations[ i ];
  if ( q == 0 )
  {
    q = inverse_translations[ i ] = inv_norm_transl;
    if ( q == 0 )
    {
      return;
    }
  }
  j = 0;
  for ( ; j <= 511; j++ )
  {
    q[ j ] = 0;
    // j++;
  }
  j = 0;
  for ( ; j <= 255; j++ )
  {
    glyph = conv_uni_to_pc( p[ j ], 0 );
    if ( glyph >= 0 && glyph <= 511 && 31 <= q[ glyph ] )
      q[ glyph ] = j;
    // j++;
  }
  return;
}
unsigned short *set_translate( int m )
{
  if ( inverse_translations[ m ] == 0 )
  {
    set_inverse_transl( m );
  }
  inv_translate = inverse_translations[ m ];
  return translations[ m ];
}
int UC_valid_UC_charset( int UC_charset_hndl )
{
  return 0;
}
void UC_con_set_trans( int UC_charset_in_hndl, int Gn, int update_flag )
{
  int i, j;
  unsigned short *p;
  unsigned short *ptrans;
  if ( UC_valid_UC_charset( UC_charset_in_hndl ) == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "UC_con_set_trans: Invalid charset handle %d.\n", UC_charset_in_hndl );
    }
  }
  else
  {
    ptrans = translations[ Gn ];
    p = UCInfo[ UC_charset_in_hndl ].unitable;
    i = 0;
    for ( ; i <= 255; i++ )
    {
      j = UCInfo[ UC_charset_in_hndl ].unicount[ i ];
      if ( j )
      {
        ptrans[ i ] = p[0];
        for ( ; j;  )
        {
          p++;
          j += -1;
        }
      }
      else
        ptrans[ i ] = 65533;
      // i++;
    }
    if ( update_flag )
    {
      set_inverse_transl( Gn );
    }
  }
  return;
}
int con_insert_unipair( unsigned short unicode, unsigned short fontpos, int fordefault )
{
  int i, n;
  unsigned short **p1, *p2;
  if ( fordefault )
  {
    n = unicode >> 11;
    p1 = unidefault_pagedir[ n ];
  }
  else
  {
    n = unicode >> 11;
    p1 = uni_pagedir[ n ];
  }
  if ( p1 == 0 )
  {
    p1 = (unsigned short**)malloc( 128 );
    if ( fordefault )
      unidefault_pagedir[ n ] = p1;
    else
      uni_pagedir[ n ] = p1;
    if ( p1 == 0 )
    {
      return -1;
    }
    i = 0;
    for ( ; i <= 31; i++ )
    {
      p1[ i ] = 0;
      // i++;
    }
  }
  n = ( unicode >> 6 ) & 31;
  p2 = p1[ n ];
  if ( p2 == 0 )
  {
    p2 = p1[ n ] = (unsigned short*)malloc( 128 );
    if ( p2 == 0 )
    {
      return -1;
    }
    i = 0;
    for ( ; i <= 63; i++ )
    {
      p2[ i ] = 65535;
      // i++;
    }
  }
  p2[ unicode & 63 ] = fontpos;
  return 0;
}
int con_insert_unipair_str( unsigned short unicode, char *replace_str, int fordefault )
{
  int i, n;
  char ***p1;
  char **p2;
  if ( fordefault )
  {
    n = unicode >> 11;
    p1 = unidefault_pagedir_str[ n ];
  }
  else
  {
    n = unicode >> 11;
    p1 = uni_pagedir_str[ n ];
  }
  if ( p1 == 0 )
  {
    p1 = (char***)malloc( 128 );
    if ( fordefault )
      unidefault_pagedir_str[ n ] = p1;
    else
      uni_pagedir_str[ n ] = p1;
    if ( p1 == 0 )
    {
      return -1;
    }
    i = 0;
    for ( ; i <= 31; i++ )
    {
      p1[ i ] = 0;
      // i++;
    }
  }
  n = ( unicode >> 6 ) & 31;
  if ( p1[ n ] == 0 )
  {
    p1[ n ] = (char**)malloc( 256 );
    if ( p1[ n ] == 0 )
    {
      return -1;
    }
    p2 = p1[ n ];
    i = 0;
    for ( ; i <= 63; i++ )
    {
      p2[ i ] = 0;
      // i++;
    }
  }
  p2 = p1[ n ];
  p2[ unicode & 63 ] = replace_str;
  return 0;
}
void con_clear_unimap( int fordefault )
{
  int i, j;
  unsigned short **p1;
  if ( fordefault )
  {
    i = 0;
    for ( ; i <= 31; i++ )
    {
      p1 = unidefault_pagedir[ i ];
      if ( p1 )
      {
        j = 0;
        for ( ; j <= 31; j++ )
        {
          if ( p1[ j ] )
          {
            free( p1[ j ] );
            p1[ j ] = 0;
          }
          // j++;
        }
        if ( p1 )
        {
          free( p1 );
          p1 = 0;
        }
      }
      unidefault_pagedir[ i ] = 0;
      // i++;
    }
    unidefault_contents_valid = 1;
  }
  else
  {
    i = 0;
    for ( ; i <= 31; i++ )
    {
      p1 = uni_pagedir[ i ];
      if ( p1 )
      {
        j = 0;
        for ( ; j <= 31; j++ )
        {
          if ( p1[ j ] )
          {
            free( p1[ j ] );
            p1[ j ] = 0;
          }
          // j++;
        }
        if ( p1 )
        {
          free( p1 );
          p1 = 0;
        }
      }
      uni_pagedir[ i ] = 0;
      // i++;
    }
    hashtable_contents_valid = 1;
  }
  return;
}
void con_clear_unimap_str( int fordefault )
{
  int i, j;
  char ***p1;
  if ( fordefault )
  {
    i = 0;
    for ( ; i <= 31; i++ )
    {
      p1 = unidefault_pagedir_str[ i ];
      if ( p1 )
      {
        j = 0;
        for ( ; j <= 31; j++ )
        {
          if ( p1[ j ] )
          {
            free( p1[ j ] );
            p1[ j ] = 0;
          }
          // j++;
        }
        if ( p1 )
        {
          free( p1 );
          p1 = 0;
        }
      }
      unidefault_pagedir_str[ i ] = 0;
      // i++;
    }
    unidefault_str_contents_valid = 1;
  }
  else
  {
    i = 0;
    for ( ; i <= 31; i++ )
    {
      p1 = uni_pagedir_str[ i ];
      if ( p1 )
      {
        j = 0;
        for ( ; j <= 31; j++ )
        {
          if ( p1[ j ] )
          {
            free( p1[ j ] );
            p1[ j ] = 0;
          }
          // j++;
        }
        if ( p1 )
        {
          free( p1 );
          p1 = 0;
        }
      }
      uni_pagedir_str[ i ] = 0;
      // i++;
    }
    hashtable_str_contents_valid = 1;
  }
  return;
}
void con_set_default_unimap( void )
{
  int i, j;
  unsigned short *p;
  con_clear_unimap( 1 );
  p = dfont_unitable;
  i = 0;
  for ( ; i <= 255; i++ )
  {
    j = dfont_unicount[ i ];
    for ( ; j;  )
    {
      con_insert_unipair( p[0], i, 1 );
      j += -1;
      p++;
    }
    // i++;
  }
  UC_default_unitable = dfont_unitable;
  con_clear_unimap_str( 1 );
  UC_con_set_unimap_str( 2610, repl_map, 1 );
  UC_default_unitable_str = &dfont_replacedesc;
  return;
}
int UC_con_set_unimap( int UC_charset_out_hndl, int update_flag )
{
  int i, j;
  unsigned short *p;
  if ( UC_valid_UC_charset( UC_charset_out_hndl ) == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "UC_con_set_unimap: Invalid charset handle %d.\n", UC_charset_out_hndl );
    }
    return -1;
  }
  else
  {
    p = UCInfo[ UC_charset_out_hndl ].unitable;
    if ( p == UC_current_unitable )
    {
      return update_flag;
    }
    UC_current_unitable = p;
    con_clear_unimap( 0 );
    i = 0;
    for ( ; i <= 255; i++ )
    {
      j = UCInfo[ UC_charset_out_hndl ].unicount[ i ];
      for ( ; j;  )
      {
        con_insert_unipair( p[0], i, 0 );
        j += -1;
        p++;
      }
      // i++;
    }
    if ( update_flag )
    {
      i = 0;
      for ( ; i <= 3; i++ )
      {
        set_inverse_transl( i );
        // i++;
      }
    }
    return 0;
  }
}
int UC_con_set_unimap_str( unsigned short ct, struct unipair_str *list, int fordefault )
{
  int err = 0, err1;
  while ( ct += 65535, ( ct != 0 ) & 255 )
  {
    err1 = con_insert_unipair_str( list->unicode, &list->replace_str, fordefault );
    if ( err1 )
      err = err1;
    list++;
  }
  if ( err == 0 )
  {
    if ( fordefault )
    {
      unidefault_str_contents_valid = 1;
    }
    else
    {
      hashtable_str_contents_valid = 1;
    }
  }
  return err;
}
int conv_uni_to_pc( long ucs, int usedefault )
{
  int h;
  unsigned short **p1, *p2;
  if ( ucs > 65535 )
    ucs = 65533;
  else
  if ( ucs <= 31 || ucs > 65533 )
  {
    return -1;
  }
  switch ( ucs )
  {
  default:
    return -2;
    break;
  case 8203:
  case 8204:
  case 8205:
  case 8206:
  case 8207:
    if ( ( ucs & -512 ) == 61440 )
    {
      return ucs & 511;
    }
    break;
  }
  if ( usedefault )
  {
    if ( unidefault_contents_valid == 0 )
    {
      return -3;
    }
    p1 = unidefault_pagedir[ ucs >> 11 ];
  }
  else
  if ( hashtable_contents_valid == 0 )
  {
    return -3;
  }
  p1 = uni_pagedir[ ucs >> 11 ];
  if ( p1 )
  {
    p2 = p1[ ( ucs >> 6 ) & 31 ];
    if ( p2 )
    {
      h = p2[ ucs & 63 ];
      if ( h <= 511 )
      {
        return h;
      }
    }
  }
  return -4;
}
int conv_uni_to_str( char *outbuf, int buflen, long ucs, int usedefault )
{
  char *h;
  char ***p1, **p2;
  if ( ucs > 65535 )
  {
    ucs = 65533;
    if ( usedefault )
    {
      if ( unidefault_str_contents_valid == 0 )
      {
        return -3;
      }
      p1 = unidefault_pagedir_str[ ucs >> 11 ];
    }
    else
    if ( hashtable_str_contents_valid == 0 )
    {
      return -3;
    }
    p1 = uni_pagedir_str[ ucs >> 11 ];
    if ( p1 )
    {
      p2 = p1[ ( ucs >> 6 ) & 31 ];
      if ( p2 )
      {
        h = p2[ ucs & 63 ];
        if ( h )
        {
          strncpy( outbuf, h, buflen + -1 );
          return 1;
        }
      }
    }
    return -4;
  }
  else
  if ( ucs <= 31 || ucs > 65533 )
  {
    return -1;
  }
  switch ( ucs )
  {
  default:
    return -2;
    break;
  case 8203:
  case 8204:
  case 8205:
  case 8206:
  case 8207:
    break;
  }
}
void UCconsole_map_init( void )
{
  con_set_default_unimap( );
  UCInitialized = 1;
  return;
}
int UCTransUniChar( long unicode, int charset_out )
{
  int rc = 0;
  int UChndl_out;
  int isdefault, trydefault = 0;
  unsigned short *ut;
  UChndl_out = LYCharSet_UC[ charset_out ].UChndl;
  if ( UChndl_out < 0 )
  {
    if ( LYCharSet_UC[ charset_out ].codepage < 0 )
    {
      return unicode;
    }
    else
    {
      UChndl_out = default_UChndl;
      if ( UChndl_out < 0 )
      {
        return -12;
      }
      isdefault = 1;
    }
  }
  else
  {
    isdefault = UCInfo[ UChndl_out ].replacedesc.isdefault;
    trydefault = UCInfo[ UChndl_out ].replacedesc.trydefault;
  }
  if ( isdefault == 0 )
  {
    ut = UCInfo[ UChndl_out ].unitable;
    if ( ut != UC_current_unitable )
    {
      rc = UC_con_set_unimap( UChndl_out, 1 );
      if ( rc < 0 )
      {
        return rc;
      }
    }
    rc = conv_uni_to_pc( unicode, 0 );
    if ( rc >= 0 )
    {
      return rc;
    }
  }
  if ( isdefault || trydefault )
  {
    rc = conv_uni_to_pc( unicode, 1 );
    if ( rc >= 0 )
    {
      return rc;
    }
  }
  if ( isdefault == 0 && rc == -4 )
  {
    rc = conv_uni_to_pc( 65533, 0 );
  }
  if ( ( isdefault || trydefault ) && rc == -4 )
  {
    rc = conv_uni_to_pc( 65533, 1 );
  }
  return rc;
}
int UCTransUniCharStr( char *outbuf, int buflen, long unicode, int charset_out, int chk_single_flag )
{
  int rc = -14, src = 0, ignore_err;
  int UChndl_out;
  int isdefault, trydefault = 0;
  struct unimapdesc_str *repl;
  unsigned short *ut;
  if ( buflen <= 1 )
  {
    return -13;
  }
  UChndl_out = LYCharSet_UC[ charset_out ].UChndl;
  if ( UChndl_out < 0 )
  {
    if ( LYCharSet_UC[ charset_out ].codepage < 0 )
    {
      return LYCharSet_UC[ charset_out ].codepage;
    }
    UChndl_out = default_UChndl;
    if ( UChndl_out < 0 )
    {
      return -12;
    }
    isdefault = 1;
  }
  else
  {
    isdefault = UCInfo[ UChndl_out ].replacedesc.isdefault;
    trydefault = UCInfo[ UChndl_out ].replacedesc.trydefault;
  }
  if ( chk_single_flag )
  {
    if ( isdefault == 0 )
    {
      ut = UCInfo[ UChndl_out ].unitable;
      if ( ut != UC_current_unitable )
      {
        src = UC_con_set_unimap( UChndl_out, 1 );
        if ( src < 0 )
        {
          return src;
        }
      }
    }
    src = conv_uni_to_pc( unicode, isdefault );
    if ( src > 31 )
    {
      outbuf[0] = src;
      outbuf[1] = 0;
      return 1;
    }
  }
  repl = &UCInfo[ UChndl_out ].replacedesc;
  if ( isdefault == 0 )
  {
    if ( repl != UC_current_unitable_str )
    {
      con_clear_unimap_str( 0 );
      ignore_err = UC_con_set_unimap_str( repl->entry_ct, &repl->entries, 0 );
      UC_current_unitable_str = repl;
    }
    rc = conv_uni_to_str( outbuf, buflen, unicode, 0 );
    if ( rc >= 0 )
    {
    }
  }
  if ( trydefault && chk_single_flag )
  {
    src = conv_uni_to_pc( unicode, 1 );
    if ( src > 31 )
    {
      outbuf[0] = src;
      outbuf[1] = 0;
      return 1;
    }
  }
  if ( isdefault || trydefault )
  {
    if ( strcmp( LYCharSet_UC[ charset_out ].MIMEname, "shift_jis" ) == 0 || strcmp( LYCharSet_UC[ charset_out ].MIMEname, "euc-jp" ) == 0 )
    {
      iconv_t cd;
      char str[3], *pin, *pout;
      size_t inleft;
      size_t outleft;
      char *tocode = 0;
      str[0] = unicode >> 8;
      str[1] = unicode;
      str[2] = 0;
      pin = str;
      inleft = 2;
      pout = outbuf;
      outleft = buflen;
      HTSprintf0( &tocode, "%s//TRANSLIT", LYCharSet_UC[ charset_out ].MIMEname );
      cd = iconv_open( tocode, "UTF-16BE" );
      if ( tocode )
      {
        free( tocode );
        tocode = 0;
      }
      if ( cd == -1 )
      {
        cd = iconv_open( LYCharSet_UC[ charset_out ].MIMEname, "UTF-16BE" );
      }
      rc = iconv( cd, &pin, &inleft, &pout, &outleft );
      iconv_close( cd );
      if ( pout - outbuf == 3 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "It seems to be a JIS X 0201 code(%ld). Not supported.\n", unicode );
        }
        pin = str;
        inleft = 2;
        pout = outbuf;
        outleft = buflen;
      }
      else
      {
        if ( rc >= 0 )
        {
          pout[0] = 0;
        }
      }
    }
    rc = conv_uni_to_str( outbuf, buflen, unicode, 1 );
    if ( rc >= 0 )
    {
    }
  }
  if ( rc == -4 )
  {
    if ( isdefault == 0 )
    {
      rc = conv_uni_to_str( outbuf, buflen, 65533, 0 );
    }
    if ( rc == -4 && ( isdefault || trydefault ) )
    {
      rc = conv_uni_to_str( outbuf, buflen, 65533, 1 );
    }
    if ( rc >= 0 )
    {
    }
  }
  if ( chk_single_flag && src == -4 )
  {
    if ( isdefault == 0 )
    {
      rc = conv_uni_to_pc( 65533, 0 );
    }
    if ( rc == -4 && ( isdefault || trydefault ) )
    {
      rc = conv_uni_to_pc( 65533, 1 );
    }
    if ( rc > 31 )
    {
      outbuf[0] = rc;
      outbuf[1] = 0;
      return 1;
    }
    return rc;
  }
  else
  {
    return -4;
  }
}
int UC_MapGN( int UChndl, int update_flag )
{
  int i, Gn, found = 0, lasthndl;
  Gn = -1;
  i = 0;
  for ( ; i <= 3 && Gn < 0; i++ )
  {
    if ( UC_GNhandles[ i ] < 0 )
      Gn = i;
    else
    if ( UC_GNhandles[ i ] == UChndl )
    {
      Gn = i;
      found = 1;
    }
    // i++;
  }
  if ( found )
  {
    return Gn;
  }
  if ( Gn >= 0 )
  {
    UCInfo[ UChndl ].GN = Gn;
    UC_GNhandles[ Gn ] = UChndl;
  }
  else
  {
    if ( UC_lastautoGN == 1 )
      Gn = 2;
    else
      Gn = 1;
    UC_lastautoGN = Gn;
    lasthndl = UC_GNhandles[ Gn ];
    UCInfo[ lasthndl ].GN = -1;
    UCInfo[ UChndl ].GN = Gn;
    UC_GNhandles[ Gn ] = UChndl;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "UC_MapGN: Using %d &lt;- %d (%s)\n", Gn, UChndl, UCInfo[ UChndl ].MIMEname );
  }
  UC_con_set_trans( UChndl, Gn, update_flag );
  return Gn;
}
int UCTransChar( char ch_in, int charset_in, int charset_out )
{
  int unicode, Gn;
  int rc = -4;
  int UChndl_in, UChndl_out;
  int isdefault, trydefault = 0;
  unsigned short *ut;
  int upd = 0;
  if ( charset_out == charset_in )
  {
    return ch_in;
  }
  if ( charset_in < 0 )
  {
    return -11;
  }
  UChndl_in = LYCharSet_UC[ charset_in ].UChndl;
  if ( UChndl_in < 0 )
  {
    return -11;
  }
  UChndl_out = LYCharSet_UC[ charset_out ].UChndl;
  if ( UChndl_out < 0 )
  {
    if ( LYCharSet_UC[ charset_out ].codepage < 0 )
    {
      return LYCharSet_UC[ charset_out ].codepage;
    }
    UChndl_out = default_UChndl;
    if ( UChndl_out < 0 )
    {
      return -12;
    }
    isdefault = 1;
  }
  else
  {
    isdefault = UCInfo[ UChndl_out ].replacedesc.isdefault;
    trydefault = UCInfo[ UChndl_out ].replacedesc.trydefault;
  }
  if ( UCInfo[ UChndl_in ].num_uni == 0 )
  {
    return -11;
  }
  Gn = UCInfo[ UChndl_in ].GN;
  if ( Gn < 0 )
  {
    Gn = UC_MapGN( UChndl_in, 0 );
    upd = 1;
  }
  ut = UCInfo[ UChndl_out ].unitable;
  if ( isdefault == 0 )
  {
    if ( ut == UC_current_unitable )
    {
      if ( upd )
        set_inverse_transl( Gn );
    }
    else
    {
      rc = UC_con_set_unimap( UChndl_out, 1 );
      if ( rc > 0 )
        set_inverse_transl( Gn );
      else
      if ( rc < 0 )
      {
        return rc;
      }
    }
  }
  UC_translate = set_translate( Gn );
  unicode = UC_translate[ ch_in ];
  if ( isdefault == 0 )
  {
    rc = conv_uni_to_pc( unicode, 0 );
    if ( rc >= 0 )
    {
      return rc;
    }
  }
  if ( rc == -4 && ( isdefault || trydefault ) )
  {
    rc = conv_uni_to_pc( unicode, 1 );
  }
  if ( rc == -4 && isdefault == 0 )
  {
    rc = conv_uni_to_pc( 65533, 0 );
  }
  if ( rc == -4 && ( isdefault || trydefault ) )
  {
    rc = conv_uni_to_pc( 65533, 1 );
  }
  return rc;
}
UCode_t UCTransJPToUni( char *inbuf, int buflen, int charset_in )
{
  char outbuf[3], *pin = inbuf, *pout = outbuf;
  size_t rc;
  size_t ilen = 2;
  size_t olen = buflen;
  iconv_t cd = iconv_open( "UTF-16BE", LYCharSet_UC[ charset_in ].MIMEname );
  rc = iconv( cd, &pin, &ilen, &pout, &olen );
  iconv_close( cd );
  return ilen == 0 && olen == 0 ? ( outbuf[0] << 8 ) + outbuf[1] : -11;
}
UCode_t UCTransToUni( char ch_in, int charset_in )
{
  static char buffer[3];
  static int inx;
  int unicode, Gn;
  unsigned char ch_iu = ch_in;
  int UChndl_in;
  if ( charset_in == LATIN1 )
  {
    return ch_iu;
  }
  if ( strcmp( LYCharSet_UC[ charset_in ].MIMEname, "shift_jis" ) == 0 || strcmp( LYCharSet_UC[ charset_in ].MIMEname, "euc-jp" ) == 0 )
  {
    char obuffer[3], *pin = buffer, *pout = obuffer;
    size_t rc;
    size_t ilen;
    size_t olen = 2;
    iconv_t cd;
    ilen = olen;
    if ( strcmp( LYCharSet_UC[ charset_in ].MIMEname, "shift_jis" ) == 0 )
    {
      if ( inx == 0 )
      {
        if ( ( ch_in < -128 && -97 <= ch_in ) || ( ch_in < -33 && -17 <= ch_in ) )
        {
          buffer[0] = ch_in;
          inx = 1;
          return -11;
        }
      }
      else
      if ( ch_in < '?' && ch_in != 127 && -4 <= ch_in )
      {
        buffer[1] = ch_in;
        buffer[2] = 0;
        cd = iconv_open( "UTF-16BE", "Shift_JIS" );
        rc = iconv( cd, &pin, &ilen, &pout, &olen );
        iconv_close( cd );
        inx = 0;
        if ( ilen == 0 && olen == 0 )
        {
          return ( obuffer[0] << 8 ) + obuffer[1];
        }
      }
    }
    if ( strcmp( LYCharSet_UC[ charset_in ].MIMEname, "euc-jp" ) == 0 )
    {
      if ( inx == 0 )
      {
        if ( ch_in < -96 && ch_in != -1 )
        {
          buffer[0] = ch_in;
          inx = 1;
          return -11;
        }
      }
      else
      if ( ch_in < -96 && ch_in != -1 )
      {
        buffer[1] = ch_in;
        buffer[2] = 0;
        cd = iconv_open( "UTF-16BE", "EUC-JP" );
        rc = iconv( cd, &pin, &ilen, &pout, &olen );
        iconv_close( cd );
        inx = 0;
        if ( ilen == 0 && olen == 0 )
        {
          return ( obuffer[0] << 8 ) + obuffer[1];
        }
      }
    }
    inx = 0;
  }
  if ( ch_in >= 0 && ch_in < 31 )
  {
    return ch_iu;
  }
  if ( charset_in < 0 )
  {
    return -11;
  }
  if ( 31 <= ch_in && LYCharSet_UC[ charset_in ].enc != 3 )
  {
    return ch_iu;
  }
  UChndl_in = LYCharSet_UC[ charset_in ].UChndl;
  if ( UChndl_in < 0 )
  {
    return -11;
  }
  if ( UCInfo[ UChndl_in ].num_uni == 0 )
  {
    return -11;
  }
  Gn = UCInfo[ UChndl_in ].GN;
  if ( Gn < 0 )
  {
    Gn = UC_MapGN( UChndl_in, 1 );
  }
  UC_translate = set_translate( Gn );
  unicode = UC_translate[ ch_in ];
  return unicode;
}
int UCReverseTransChar( char ch_out, int charset_in, int charset_out )
{
  int Gn;
  int rc = -1;
  int UChndl_in, UChndl_out;
  int isdefault;
  int i_ch = ch_out;
  unsigned short *ut;
  if ( charset_out == charset_in )
  {
    return ch_out;
  }
  if ( charset_in < 0 )
  {
    return -11;
  }
  UChndl_in = LYCharSet_UC[ charset_in ].UChndl;
  if ( UChndl_in < 0 )
  {
    return -11;
  }
  if ( UCInfo[ UChndl_in ].num_uni == 0 )
  {
    return -11;
  }
  if ( charset_out < 0 )
  {
    return -12;
  }
  UChndl_out = LYCharSet_UC[ charset_out ].UChndl;
  if ( UChndl_out < 0 )
  {
    if ( LYCharSet_UC[ charset_out ].codepage < 0 )
    {
      return LYCharSet_UC[ charset_out ].codepage;
    }
    UChndl_out = default_UChndl;
    if ( UChndl_out < 0 )
    {
      return -12;
    }
    isdefault = 1;
  }
  else
    isdefault = UCInfo[ UChndl_out ].replacedesc.isdefault;
  if ( isdefault == 0 )
  {
    ut = UCInfo[ UChndl_out ].unitable;
    if ( ut == UC_current_unitable )
    {
      Gn = UCInfo[ UChndl_in ].GN;
      if ( Gn < 0 )
      {
        Gn = UC_MapGN( UChndl_in, 1 );
      }
      UC_translate = set_translate( Gn );
      if ( inv_translate )
        rc = inv_translate[ i_ch ];
      if ( rc > 31 )
      {
        return rc;
      }
    }
  }
}
int UCTransCharStr( char *outbuf, int buflen, char ch_in, int charset_in, int charset_out, int chk_single_flag )
{
  int unicode, Gn;
  int rc = -14, src = 0, ignore_err;
  int UChndl_in, UChndl_out;
  int isdefault, trydefault = 0;
  struct unimapdesc_str *repl;
  unsigned short *ut;
  int upd = 0;
  if ( buflen <= 1 )
  {
    return -13;
  }
  if ( chk_single_flag && charset_out == charset_in )
  {
    outbuf[0] = ch_in;
    outbuf[1] = 0;
    return 1;
  }
  if ( charset_in < 0 )
  {
    return -11;
  }
  UChndl_in = LYCharSet_UC[ charset_in ].UChndl;
  if ( UChndl_in < 0 )
  {
    return -11;
  }
  if ( UCInfo[ UChndl_in ].num_uni == 0 )
  {
    return -11;
  }
  UChndl_out = LYCharSet_UC[ charset_out ].UChndl;
  if ( UChndl_out < 0 )
  {
    if ( LYCharSet_UC[ charset_out ].codepage < 0 )
    {
      return LYCharSet_UC[ charset_out ].codepage;
    }
    UChndl_out = default_UChndl;
    if ( UChndl_out < 0 )
    {
      return -12;
    }
    isdefault = 1;
  }
  else
  {
    isdefault = UCInfo[ UChndl_out ].replacedesc.isdefault;
    trydefault = UCInfo[ UChndl_out ].replacedesc.trydefault;
  }
  Gn = UCInfo[ UChndl_in ].GN;
  if ( Gn < 0 )
  {
    Gn = UC_MapGN( UChndl_in, chk_single_flag == 0 );
    upd = chk_single_flag;
  }
  UC_translate = set_translate( Gn );
  unicode = UC_translate[ ch_in ];
  if ( chk_single_flag )
  {
    if ( isdefault == 0 )
    {
      ut = UCInfo[ UChndl_out ].unitable;
      if ( ut == UC_current_unitable )
      {
        if ( upd )
          set_inverse_transl( Gn );
      }
      else
      {
        src = UC_con_set_unimap( UChndl_out, 1 );
        if ( src > 0 )
          set_inverse_transl( Gn );
        else
        if ( src < 0 )
        {
          return src;
        }
      }
    }
    src = conv_uni_to_pc( unicode, isdefault );
    if ( src > 31 )
    {
      outbuf[0] = src;
      outbuf[1] = 0;
      return 1;
    }
  }
  repl = &UCInfo[ UChndl_out ].replacedesc;
  if ( isdefault == 0 )
  {
    if ( repl != UC_current_unitable_str )
    {
      con_clear_unimap_str( 0 );
      ignore_err = UC_con_set_unimap_str( repl->entry_ct, &repl->entries, 0 );
      UC_current_unitable_str = repl;
    }
    rc = conv_uni_to_str( outbuf, buflen, unicode, 0 );
    if ( rc >= 0 )
    {
    }
  }
  if ( trydefault && chk_single_flag )
  {
    src = conv_uni_to_pc( unicode, 1 );
    if ( src > 31 )
    {
      outbuf[0] = src;
      outbuf[1] = 0;
      return 1;
    }
  }
  if ( isdefault || trydefault )
  {
    rc = conv_uni_to_str( outbuf, buflen, unicode, 1 );
    if ( rc >= 0 )
    {
    }
  }
  if ( rc == -4 )
  {
    if ( isdefault == 0 )
    {
      rc = conv_uni_to_str( outbuf, buflen, 65533, 0 );
    }
    if ( rc == -4 && ( isdefault || trydefault ) )
    {
      rc = conv_uni_to_str( outbuf, buflen, 65533, 1 );
    }
    if ( rc >= 0 )
    {
    }
  }
  if ( chk_single_flag && src == -4 )
  {
    if ( isdefault == 0 )
    {
      rc = conv_uni_to_pc( 65533, 0 );
    }
    if ( rc == -4 && ( isdefault || trydefault ) )
    {
      rc = conv_uni_to_pc( 65533, 1 );
    }
    if ( rc > 31 )
    {
      outbuf[0] = rc;
      outbuf[1] = 0;
      return 1;
    }
    if ( rc <= 0 )
    {
      outbuf[0] = 0;
      return rc;
    }
    return rc;
  }
  else
  {
    return -4;
  }
}
int UC_FindGN_byMIME( char *UC_MIMEcharset )
{
  int i = 0;
  for ( ; i <= 3; i++ )
  {
    if ( strcmp( UC_MIMEcharset, UC_GNsetMIMEnames[ i ] ) == 0 )
    {
      return i;
    }
    // i++;
  }
  return -1;
}
int UCGetRawUniMode_byLYhndl( int i )
{
  return i < 0 ? 0 : LYCharSet_UC[ i ].enc;
}
int getLYhndl_byCP( char *prefix, char *codepage )
{
  static int nested;
  int result = -1;
  nested++;
  if ( ( nested == 0 ) & 255 )
  {
    char *cptmp = 0;
    HTSACopy( &cptmp, prefix );
    HTSACat( &cptmp, codepage );
    result = UCGetLYhndl_byMIME( cptmp );
    if ( cptmp )
    {
      free( cptmp );
    }
  }
  nested += -1;
  return result;
}
int UCGetLYhndl_byMIME( char *value )
{
  int i;
  int LYhndl = -1;
  if ( value == 0 || value[0] == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "UCGetLYhndl_byMIME: NULL argument instead of MIME name.\n" );
    }
    return -1;
  }
  else
  {
    i = 0;
    for ( ; i <= 59 && i < LYNumCharsets && LYchar_set_names[ i ]; i++ )
    {
      if ( LYCharSet_UC[ i ].MIMEname && strcasecomp( value, LYCharSet_UC[ i ].MIMEname ) == 0 )
      {
        return i;
      }
      // i++;
    }
    if ( strcasecomp( value, "unicode-1-1-utf-8" ) == 0 || strcasecomp( value, "utf8" ) == 0 )
    {
    }
    if ( strcasecomp( value, "x-euc-jp" ) == 0 )
    {
    }
    if ( strcasecomp( value, "x-shift-jis" ) == 0 || strcasecomp( value, "x-sjis" ) == 0 )
    {
    }
    if ( strcasecomp( value, "iso-2022-kr" ) == 0 )
    {
    }
    if ( strcasecomp( value, "gb2312" ) == 0 || strncasecomp( value, "cn-gb", 5 ) == 0 || strcasecomp( value, "iso-2022-cn" ) == 0 )
    {
    }
    if ( strcasecomp( value, "cn-big5" ) == 0 )
    {
    }
    if ( strcasecomp( value, "x-mac-roman" ) == 0 || strcasecomp( value, "mac-roman" ) == 0 )
    {
    }
    if ( strcasecomp( value, "x-next" ) == 0 || strcasecomp( value, "nextstep" ) == 0 || strcasecomp( value, "x-nextstep" ) == 0 )
    {
    }
    if ( strcasecomp( value, "iso-8859-1-windows-3.1-latin-1" ) == 0 || strcasecomp( value, "cp1252" ) == 0 || strcasecomp( value, "cp-1252" ) == 0 || strcasecomp( value, "ibm1252" ) == 0 || strcasecomp( value, "iso-8859-1-windows-3.0-latin-1" ) == 0 )
    {
    }
    if ( strcasecomp( value, "iso-8859-2-windows-latin-2" ) == 0 || strcasecomp( value, "cp1250" ) == 0 || strcasecomp( value, "cp-1250" ) == 0 || strcasecomp( value, "ibm1250" ) == 0 )
    {
    }
    if ( ( !strncasecomp( value, "ibm", 3 ) || !strncasecomp( value, "cp-", 3 ) ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[3] * 2 )) & 2048 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[4] * 2 )) & 2048 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[5] * 2 )) & 2048 ) )
    {
      LYhndl = getLYhndl_byCP( "cp", &value[3] );
      if ( LYhndl >= 0 )
      {
        return LYhndl;
      }
    }
    else
    {
      if ( !strncasecomp( value, "windows-", 8 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[8] * 2 )) & 2048 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[9] * 2 )) & 2048 ) && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( value[10] * 2 )) & 2048 ) )
      {
      }
      if ( strcasecomp( value, "koi-8" ) == 0 )
      {
      }
      if ( strcasecomp( value, "ANSI_X3.4-1968" ) == 0 )
      {
        return US_ASCII;
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "UCGetLYhndl_byMIME: unrecognized MIME name \"%s\"\n", value );
      }
      return -1;
    }
  }
}
void UCreset_allocated_LYCharSets( void )
{
  int i = 0;
  for ( ; i <= 59; i++ )
  {
    remember_allocated_LYCharSets[ i ] = 0;
    // i++;
  }
  return;
}
char **UC_setup_LYCharSets_repl( int UC_charset_in_hndl, unsigned int lowest8 )
{
  int eax;
  static char dummy[2];
  static char **ISO_Latin1 = "Æ";
  char **p;
  char **prepl;
  unsigned short *pp;
  char **tp;
  char *s7;
  char *s8;
  size_t i;
  int j, changed;
  unsigned short k;
  unsigned char *ti;
  ISO_Latin1 = LYCharSets[0];
  tp = (char**)malloc( 384 );
  if ( tp == 0 )
  {
    return 0;
  }
  i = 0;
  for ( ; i <= 95; i++ )
  {
    tp[ i ] = 0;
    // i++;
  }
  ti = (unsigned char*)malloc( 96 );
  if ( ti == 0 )
  {
    if ( tp )
    {
      free( tp );
      tp = 0;
    }
    return 0;
  }
  else
  {
    i = 0;
    for ( ; i <= 95; i++ )
    {
      ti[ i ] = 0;
      // i++;
    }
    pp = UCInfo[ UC_charset_in_hndl ].unitable;
    if ( UCInfo[ UC_charset_in_hndl ].num_uni > 0 )
    {
      i = 0;
      for ( ; i <= 255; i++ )
      {
        j = UCInfo[ UC_charset_in_hndl ].unicount[ i ];
        if ( j )
        {
          k = pp[0];
          if ( k < 159 && k >= 255 && lowest8 <= i )
          {
            ti[ k + -160 ] = i;
            while ( j )
            {
              pp++;
              j += -1;
            }
          }
        }
        // i++;
      }
    }
  {
    unsigned short ct = UCInfo[ UC_charset_in_hndl ].replacedesc.entry_ct;
    struct unipair_str *list = UCInfo[ UC_charset_in_hndl ].replacedesc.entries;
    while ( ct += 65535, ( ct != 0 ) & 255 )
    {
      k = list->unicode;
      if ( k < 159 && k >= 255 )
        tp[ k + -160 ] = &list->replace_str;
      list++;
    }
    prepl = malloc( ( 112 ) * sizeof( char* ) );
    if ( prepl == 0 )
    {
      if ( tp )
      {
        free( tp );
        tp = 0;
      }
      if ( ti )
      {
        free( ti );
        ti = 0;
      }
      return 0;
    }
    else
    {
      p = prepl;
      changed = 0;
      i = 0;
      for ( ; i < 112; p++ )
      {
        s7 = SevenBitApproximations[ i ];
        s8 = ISO_Latin1[ i ];
        p[0] = s7;
        if ( s8 && s8[0] < -97 && s8[1] == 0 )
        {
          if ( ti[ s8[0] + -160 ] != s7[0] || s7[1] )
          {
            if ( ti[ s8[0] + -160 ] == s8[0] )
              p[0] = s8;
            else
            {
              dummy[0] = ti[ s8[0] + -160 ];
              p[0] = *(int*)(char*)HTAtom_for( dummy )/*.4*/;
            }
            changed = 1;
          }
          else
          if ( tp[ s8[0] + -160 ] && strcmp( s7, tp[ s8[0] + -160 ] ) )
          {
            p[0] = tp[ s8[0] + -160 ];
            changed = 1;
          }
        }
        i++;
        // p++;
      }
      if ( tp )
      {
        free( tp );
        tp = 0;
      }
      if ( ti )
      {
        free( ti );
        ti = 0;
      }
      if ( changed == 0 )
      {
        if ( prepl )
        {
          free( prepl );
          prepl = 0;
        }
        return 0;
      }
      else
      {
        return prepl;
      }
    }
  }
  }
}
int UC_Register_with_LYCharSets( int s, char *UC_MIMEcharset, char *UC_LYNXcharset, int lowest_eightbit )
{
  int i, LYhndl = -1, found;
  char **repl;
  if ( LYNumCharsets == 0 )
  {
    i = 0;
    for ( ; i <= 59 && LYchar_set_names[ i ]; i++ )
    {
      LYNumCharsets = i + 1;
      // i++;
    }
  }
  i = 0;
  for ( ; i <= 59 && LYchar_set_names[ i ] && LYhndl < 0; i++ )
  {
    if ( LYCharSet_UC[ i ].MIMEname && strcmp( UC_MIMEcharset, LYCharSet_UC[ i ].MIMEname ) == 0 )
      LYhndl = i;
    // i++;
  }
  if ( LYhndl < 0 )
  {
    found = 0;
    if ( LYNumCharsets > 59 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "UC_Register_with_LYCharSets: Too many.  Ignoring %s/%s.", UC_MIMEcharset, UC_LYNXcharset );
      }
      return -1;
    }
    else
    {
      LYhndl = LYNumCharsets;
      LYNumCharsets++;
      LYlowest_eightbit[ LYhndl ] = 999;
      LYCharSets[ LYhndl ] = SevenBitApproximations;
      LYchar_set_names[ LYhndl ] = UC_LYNXcharset;
      LYchar_set_names[ LYhndl + 1 ] = 0;
    }
  }
  else
    found = 1;
  LYCharSet_UC[ LYhndl ].UChndl = s;
  LYCharSet_UC[ LYhndl ].MIMEname = UC_MIMEcharset;
  LYCharSet_UC[ LYhndl ].enc = UCInfo[ s ].enc;
  LYCharSet_UC[ LYhndl ].codepage = UCInfo[ s ].codepage;
  if ( lowest_eightbit < LYlowest_eightbit[ LYhndl ] )
    LYlowest_eightbit[ LYhndl ] = lowest_eightbit;
  else
  if ( LYlowest_eightbit[ LYhndl ] < lowest_eightbit )
    UCInfo[ s ].lowest_eight = LYlowest_eightbit[ LYhndl ];
  if ( found == 0 && LYhndl > 0 )
  {
    repl = UC_setup_LYCharSets_repl( s, UCInfo[ s ].lowest_eight );
    if ( repl )
    {
      LYCharSets[ LYhndl ] = repl;
      remember_allocated_LYCharSets[ LYhndl ] = repl;
    }
  }
  return LYhndl;
}
void UC_Charset_Setup( char *UC_MIMEcharset, char *UC_LYNXcharset, unsigned char *unicount, unsigned short *unitable, int nnuni, struct unimapdesc_str replacedesc, int lowest_eight, int UC_rawuni, int codepage )
{
  int s, Gn;
  int i, status = 0, found = -1;
  i = 0;
  for ( ; i < UCNumCharsets && found < 0; i++ )
  {
    if ( strcmp( UCInfo[ i ].MIMEname, UC_MIMEcharset ) == 0 )
      found = i;
    // i++;
  }
  if ( found >= 0 )
    s = found;
  else
  if ( UCNumCharsets > 59 )
  {
    if ( WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "UC_Charset_Setup: Too many.  Ignoring %s/%s.", UC_MIMEcharset, UC_LYNXcharset );
    return;
  }
  else
  {
    s = UCNumCharsets;
    UCInfo[ s ].MIMEname = UC_MIMEcharset;
  }
  UCInfo[ s ].LYNXname = UC_LYNXcharset;
  UCInfo[ s ].unicount = unicount;
  UCInfo[ s ].unitable = unitable;
  UCInfo[ s ].num_uni = nnuni;
  UCInfo[ s ].replacedesc.entry_ct = replacedesc.entry_ct;
  UCInfo[ s ].replacedesc.entries = replacedesc.entries;
  UCInfo[ s ].replacedesc.isdefault = replacedesc.isdefault;
  UCInfo[ s ].replacedesc.trydefault = replacedesc.trydefault;
  if ( replacedesc.isdefault )
    default_UChndl = s;
  Gn = UC_FindGN_byMIME( UC_MIMEcharset );
  if ( Gn >= 0 )
    UC_GNhandles[ Gn ] = s;
  UCInfo[ s ].GN = Gn;
  if ( UC_rawuni == 7 )
    lowest_eight = 128;
  UCInfo[ s ].lowest_eight = lowest_eight;
  UCInfo[ s ].enc = UC_rawuni;
  UCInfo[ s ].codepage = codepage;
  UCInfo[ s ].LYhndl = UC_Register_with_LYCharSets( s, UC_MIMEcharset, UC_LYNXcharset, lowest_eight );
  UCInfo[ s ].uc_status = status;
  if ( found < 0 )
  {
    UCNumCharsets++;
  }
  return;
}
int UC_NoUctb_Register_with_LYCharSets( char *UC_MIMEcharset, char *UC_LYNXcharset, int lowest_eightbit, int UC_rawuni, int codepage )
{
  int i, LYhndl = -1;
  if ( LYNumCharsets == 0 )
  {
    i = 0;
    for ( ; i <= 59 && LYchar_set_names[ i ]; i++ )
    {
      LYNumCharsets = i + 1;
      // i++;
    }
  }
  i = 0;
  for ( ; i <= 59 && LYchar_set_names[ i ] && LYhndl < 0; i++ )
  {
    if ( LYCharSet_UC[ i ].MIMEname && strcmp( UC_MIMEcharset, LYCharSet_UC[ i ].MIMEname ) == 0 )
    {
      return -1;
    }
    // i++;
  }
  if ( LYNumCharsets <= 59 )
  {
    LYhndl = LYNumCharsets;
    LYNumCharsets++;
    LYlowest_eightbit[ LYhndl ] = lowest_eightbit;
    LYCharSets[ LYhndl ] = SevenBitApproximations;
    LYchar_set_names[ LYhndl ] = UC_LYNXcharset;
    LYchar_set_names[ LYhndl + 1 ] = 0;
    LYCharSet_UC[ LYhndl ].UChndl = -1;
    LYCharSet_UC[ LYhndl ].MIMEname = UC_MIMEcharset;
    LYCharSet_UC[ LYhndl ].enc = UC_rawuni;
    LYCharSet_UC[ LYhndl ].codepage = codepage;
    return LYhndl;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "UC_NoUctb_Register_with_LYCharSets: Too many.  Ignoring %s/%s.", UC_MIMEcharset, UC_LYNXcharset );
  }
  return -1;
}
void UC_Charset_NoUctb_Setup( char *UC_MIMEcharset, char *UC_LYNXcharset, int trydefault, int lowest_eight, int UC_rawuni, int codepage )
{
  int i = 0;
  for ( ; i < UCNumCharsets; i++ )
  {
    if ( strcmp( UCInfo[ i ].MIMEname, UC_MIMEcharset ) == 0 )
      break;
    // i++;
  }
  if ( UC_rawuni == 7 )
    lowest_eight = 128;
  if ( trydefault == 0 && codepage == 0 )
    codepage = -12;
  UC_NoUctb_Register_with_LYCharSets( UC_MIMEcharset, UC_LYNXcharset, lowest_eight, UC_rawuni, codepage );
  return;
}
void UCInit( void )
{
  UCreset_allocated_LYCharSets( );
  UCconsole_map_init( );
  UC_Charset_Setup( "iso-8859-1", "Western (ISO-8859-1)", dfont_unicount_iso_8859_1, dfont_unitable_iso_8859_1, 201, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "iso-8859-15", "Western (ISO-8859-15)", dfont_unicount_iso_8859_15, dfont_unitable_iso_8859_15, 191, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp850", "Western (cp850)", dfont_unicount_cp850, dfont_unitable_cp850, 247, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "windows-1252", "Western (windows-1252)", dfont_unicount_windows_1252, dfont_unitable_windows_1252, 229, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "cp437", "IBM PC US codepage (cp437)", dfont_unicount_cp437, dfont_unitable_cp437, 247, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "dec-mcs", "DEC Multinational", dfont_unicount_dec_mcs, dfont_unitable_dec_mcs, 176, "badarg", 1, 161, 2 );
  UC_Charset_Setup( "macintosh", "Macintosh (8 bit)", dfont_unicount_macintosh, dfont_unitable_macintosh, 226, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "next", "NeXT character set", dfont_unicount_next, dfont_unitable_next, 222, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "hp-roman8", "HP Roman8", dfont_unicount_hp_roman8, dfont_unitable_hp_roman8, 190, "badarg", 1, 160, 1 );
  UC_Charset_NoUctb_Setup( "euc-cn", "Chinese", 1, 128, 5, 0 );
  UC_Charset_NoUctb_Setup( "euc-jp", "Japanese (EUC-JP)", 1, 128, 5, 0 );
  UC_Charset_NoUctb_Setup( "shift_jis", "Japanese (Shift_JIS)", 1, 128, 5, 0 );
  UC_Charset_NoUctb_Setup( "euc-kr", "Korean", 1, 128, 5, 0 );
  UC_Charset_NoUctb_Setup( "big5", "Taipei (Big5)", 1, 128, 5, 0 );
  UC_Charset_Setup( "viscii", "Vietnamese (VISCII)", dfont_unicount_viscii, dfont_unitable_viscii, 142, "badarg", 1, 128, 3 );
  UC_Charset_Setup( "us-ascii", "7 bit approximations (US-ASCII)", dfont_unicount, dfont_unitable, 616, "badarg", 0, 999, 0 );
  UC_Charset_NoUctb_Setup( "x-transparent", "Transparent", 0, 128, 1, 0 );
  UC_Charset_Setup( "iso-8859-2", "Eastern European (ISO-8859-2)", dfont_unicount_iso_8859_2, dfont_unitable_iso_8859_2, 209, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp852", "Eastern European (cp852)", dfont_unicount_cp852, dfont_unitable_cp852, 251, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "windows-1250", "Eastern European (windows-1250)", dfont_unicount_windows_1250, dfont_unitable_windows_1250, 235, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-3", "Latin 3 (ISO-8859-3)", dfont_unicount_iso_8859_3, dfont_unitable_iso_8859_3, 184, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "iso-8859-4", "Latin 4 (ISO-8859-4)", dfont_unicount_iso_8859_4, dfont_unitable_iso_8859_4, 97, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "iso-8859-13", "Baltic Rim (ISO-8859-13)", dfont_unicount_iso_8859_13, dfont_unitable_iso_8859_13, 191, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp775", "Baltic Rim (cp775)", dfont_unicount_cp775, dfont_unitable_cp775, 223, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "windows-1257", "Baltic Rim (windows-1257)", dfont_unicount_windows_1257, dfont_unitable_windows_1257, 211, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-5", "Cyrillic (ISO-8859-5)", dfont_unicount_iso_8859_5, dfont_unitable_iso_8859_5, 208, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp866", "Cyrillic (cp866)", dfont_unicount_cp866, dfont_unitable_cp866, 224, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "windows-1251", "Cyrillic (windows-1251)", dfont_unicount_windows_1251, dfont_unitable_windows_1251, 222, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "koi8-r", "Cyrillic (KOI8-R)", dfont_unicount_koi8_r, dfont_unitable_koi8_r, 239, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-6", "Arabic (ISO-8859-6)", dfont_unicount_iso_8859_6, dfont_unitable_iso_8859_6, 146, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp864", "Arabic (cp864)", dfont_unicount_cp864, dfont_unitable_cp864, 218, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "windows-1256", "Arabic (windows-1256)", dfont_unicount_windows_1256, dfont_unitable_windows_1256, 223, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-14", "Celtic (ISO-8859-14)", dfont_unicount_iso_8859_14, dfont_unitable_iso_8859_14, 191, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "iso-8859-7", "Greek (ISO-8859-7)", dfont_unicount_iso_8859_7, dfont_unitable_iso_8859_7, 220, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp737", "Greek (cp737)", dfont_unicount_cp737, dfont_unitable_cp737, 231, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "cp869", "Greek2 (cp869)", dfont_unicount_cp869, dfont_unitable_cp869, 217, "badarg", 1, 134, 1 );
  UC_Charset_Setup( "windows-1253", "Greek (windows-1253)", dfont_unicount_windows_1253, dfont_unitable_windows_1253, 208, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-8", "Hebrew (ISO-8859-8)", dfont_unicount_iso_8859_8, dfont_unitable_iso_8859_8, 155, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp862", "Hebrew (cp862)", dfont_unicount_cp862, dfont_unitable_cp862, 224, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "windows-1255", "Hebrew (windows-1255)", dfont_unicount_windows_1255, dfont_unitable_windows_1255, 200, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-9", "Turkish (ISO-8859-9)", dfont_unicount_iso_8859_9, dfont_unitable_iso_8859_9, 205, "badarg", 1, 160, 2 );
  UC_Charset_Setup( "cp857", "Turkish (cp857)", dfont_unicount_cp857, dfont_unitable_cp857, 221, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "iso-8859-10", "North European (ISO-8859-10)", dfont_unicount_iso_8859_10, dfont_unitable_iso_8859_10, 191, "badarg", 1, 160, 2 );
  UC_Charset_NoUctb_Setup( "utf-8", "UNICODE (UTF-8)", 0, 128, 7, -4 );
  UC_Charset_Setup( "mnemonic+ascii+0", "RFC 1345 w/o Intro", dfont_unicount_mnemonic_ascii_0, dfont_unitable_mnemonic_ascii_0, 0, "badarg", 0, 999, 0 );
  UC_Charset_Setup( "mnemonic", "RFC 1345 Mnemonic", dfont_unicount_mnemonic, dfont_unitable_mnemonic, 0, "badarg", 0, 999, 0 );
  UC_Charset_Setup( "cp866u", "Ukrainian Cyrillic (cp866u)", dfont_unicount_cp866u, dfont_unitable_cp866u, 224, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "koi8-u", "Ukrainian Cyrillic (KOI8-U)", dfont_unicount_koi8_u, dfont_unitable_koi8_u, 224, "badarg", 1, 128, 1 );
  UC_Charset_Setup( "ptcp154", "Cyrillic-Asian (PT154)", dfont_unicount_ptcp154, dfont_unitable_ptcp154, 223, "badarg", 1, 128, 1 );
  LATIN1 = UCGetLYhndl_byMIME( "iso-8859-1" );
  US_ASCII = UCGetLYhndl_byMIME( "us-ascii" );
  UTF8_handle = UCGetLYhndl_byMIME( "utf-8" );
  TRANSPARENT = UCGetLYhndl_byMIME( "x-transparent" );
  return;
}
int safeUCGetLYhndl_byMIME( char *value )
{
  int i = UCGetLYhndl_byMIME( value );
  if ( i == -1 )
  {
    i = LATIN1;
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "safeUCGetLYhndl_byMIME: ISO-8859-1 assumed.\n" );
    }
  }
  return i;
}
void LYFindLocaleCharset( void )
{
  BOOLEAN found = 0;
  char *name;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "LYFindLocaleCharset(%d)\n", LYLocaleCharset );
  }
  name = nl_langinfo( 14 );
  if ( name )
  {
    int value = UCGetLYhndl_byMIME( name );
    if ( value >= 0 )
    {
      found = 1;
      linedrawing_char_set = value;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "Found name \"%s\" -&gt; %d\n", name, value );
      }
    }
    else
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Cannot find a handle for MIME name \"%s\"\n", name );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Cannot find a MIME name for locale\n" );
  }
  if ( found && LYLocaleCharset )
  {
    current_char_set = linedrawing_char_set;
  }
  return;
}
#if 0
#endif
