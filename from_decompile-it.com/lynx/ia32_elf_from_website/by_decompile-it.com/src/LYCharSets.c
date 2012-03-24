#include "LYCharSets.c.h"
HTkcode kanji_code;
BOOLEAN LYHaveCJKCharacterSet;
BOOLEAN DisplayCharsetMatchLocale;
BOOLEAN force_old_UCLYhndl_on_reload;
int forced_UCLYhdnl;
int LYNumCharsets;
int current_char_set;
int linedrawing_char_set;
char **p_entity_values;
static char *ISO_Latin1[112];
char *SevenBitApproximations[112];
char **LYCharSets[60];
char *LYchar_set_names[61];
LYUCcharset LYCharSet_UC[60];
int LYlowest_eightbit[60];
static names_pairs OLD_charset_names[47];
static char *LYEntityNames[96];
void HTMLSetCharacterHandling( int i )
{
  int chndl = safeUCGetLYhndl_byMIME( UCAssume_MIMEcharset );
  BOOLEAN LYRawMode_flag = LYRawMode;
  int UCLYhndl_for_unspec_flag = UCLYhndl_for_unspec;
  if ( LYCharSet_UC[ i ].enc != 5 )
  {
    HTCJK = NOCJK;
    kanji_code = NOKANJI;
    if ( i == chndl )
      LYRawMode = LYUseDefaultRawMode;
    else
      LYRawMode = LYUseDefaultRawMode == 0;
    *(int*)&HTPassEightBitNum = 0;
    if ( LYRawMode )
      HTPassEightBitRaw = LYlowest_eightbit[ i ] <= 160;
    else
      HTPassEightBitRaw = 0;
    if ( LYRawMode || i == chndl )
      HTPassHighCtrlRaw = LYlowest_eightbit[ i ] <= 130;
    else
      HTPassHighCtrlRaw = 0;
    HTPassHighCtrlNum = 0;
  }
  else
  {
    char *mime = LYCharSet_UC[ i ].MIMEname;
    if ( strcmp( mime, "euc-cn" ) == 0 )
    {
      HTCJK = CHINESE;
      kanji_code = EUC;
    }
    else
    {
      if ( strcmp( mime, "euc-jp" ) == 0 )
      {
        HTCJK = JAPANESE;
        kanji_code = EUC;
      }
      else
      {
        if ( strcmp( mime, "shift_jis" ) == 0 )
        {
          HTCJK = JAPANESE;
          kanji_code = SJIS;
        }
        else
        {
          if ( strcmp( mime, "euc-kr" ) == 0 )
          {
            HTCJK = KOREAN;
            kanji_code = EUC;
          }
          else
          {
            if ( strcmp( mime, "big5" ) == 0 )
            {
              HTCJK = TAIPEI;
              kanji_code = EUC;
            }
          }
        }
      }
    }
    if ( LYUseDefaultRawMode == 0 )
      HTCJK = NOCJK;
    LYRawMode = HTCJK != NOCJK;
    HTPassEightBitRaw = 0;
    HTPassEightBitNum = 0;
    HTPassHighCtrlRaw = HTCJK != NOCJK;
    HTPassHighCtrlNum = 0;
  }
  if ( LYRawMode )
    UCLYhndl_for_unspec = i;
  else
  if ( i != chndl && ( LYCharSet_UC[ i ].enc != 5 || LYCharSet_UC[ chndl ].enc != 5 ) )
    UCLYhndl_for_unspec = chndl;
  else
    UCLYhndl_for_unspec = LATIN1;
  ena_csi( LYlowest_eightbit[ current_char_set ] > 155 );
  if ( WWW_TraceFlag )
  {
    if ( LYRawMode_flag != LYRawMode && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTMLSetCharacterHandling: LYRawMode changed %s -&gt; %s\n", "OFF", "OFF" );
    }
    if ( UCLYhndl_for_unspec_flag == UCLYhndl_for_unspec || WWW_TraceFlag == 0 )
    {
      return;
    }
    fprintf( TraceFP( ), "HTMLSetCharacterHandling: UCLYhndl_for_unspec changed %d -&gt; %d\n", UCLYhndl_for_unspec_flag, UCLYhndl_for_unspec );
  }
  return;
}
void Set_HTCJK( char *inMIMEname, char *outMIMEname )
{
  if ( LYRawMode )
  {
    if ( ( strcmp( inMIMEname, "euc-jp" ) == 0 || strcmp( inMIMEname, "utf-8" ) == 0 || strcmp( inMIMEname, "shift_jis" ) == 0 ) && ( strcmp( outMIMEname, "euc-jp" ) == 0 || strcmp( outMIMEname, "shift_jis" ) == 0 ) )
    {
      HTCJK = JAPANESE;
    }
    else
    {
      if ( strcmp( inMIMEname, "euc-cn" ) == 0 && strcmp( outMIMEname, "euc-cn" ) == 0 )
      {
        HTCJK = CHINESE;
      }
      else
      {
        if ( strcmp( inMIMEname, "big5" ) == 0 && strcmp( outMIMEname, "big5" ) == 0 )
        {
          HTCJK = TAIPEI;
        }
        else
        {
          if ( strcmp( inMIMEname, "euc-kr" ) == 0 && strcmp( outMIMEname, "euc-kr" ) == 0 )
          {
            HTCJK = KOREAN;
          }
          else
          {
            HTCJK = NOCJK;
          }
        }
      }
    }
  }
  else
  {
    HTCJK = NOCJK;
  }
  return;
}
void HTMLSetRawModeDefault( int i )
{
  LYDefaultRawMode = LYCharSet_UC[ i ].enc == 5;
  return;
}
void HTMLSetUseDefaultRawMode( int i, BOOLEAN modeflag )
{
  if ( LYCharSet_UC[ i ].enc != 5 )
  {
    int chndl = safeUCGetLYhndl_byMIME( UCAssume_MIMEcharset );
    if ( i == chndl )
    {
      LYUseDefaultRawMode = modeflag;
    }
    else
    {
      LYUseDefaultRawMode = modeflag == 0;
    }
  }
  else
  {
    LYUseDefaultRawMode = modeflag;
  }
  return;
}
void HTMLSetHaveCJKCharacterSet( int i )
{
  LYHaveCJKCharacterSet = LYCharSet_UC[ i ].enc == 5;
  return;
}
void HTMLSetDisplayCharsetMatchLocale( int i )
{
  BOOLEAN match;
  if ( LYHaveCJKCharacterSet )
  {
    DisplayCharsetMatchLocale = 1;
  }
  else
  {
    if ( strncasecomp( LYCharSet_UC[ i ].MIMEname, "cp", 2 ) || strncasecomp( LYCharSet_UC[ i ].MIMEname, "windows", 7 ) )
      match = 0;
    else
    {
      match = 1;
      if ( UCForce8bitTOUPPER )
        match = 0;
    }
    DisplayCharsetMatchLocale = match;
  }
  return;
}
int UCGetLYhndl_byAnyName( char *value )
{
  int i;
  LYTrimTrailing( value );
  if ( value == 0 )
  {
    return -1;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "UCGetLYhndl_byAnyName(%s)\n", value );
  }
  i = 0;
  for ( ; i <= 59 && LYchar_set_names[ i ]; i++ )
  {
    if ( strcmp( value, LYchar_set_names[ i ] ) == 0 )
    {
      return i;
    }
    // i++;
  }
  i = 0;
  for ( ; OLD_charset_names[ i ].fullname; i++ )
  {
    if ( strcmp( value, OLD_charset_names[ i ].fullname ) == 0 )
    {
      break;
    }
    // i++;
  }
}
char *HTMLGetEntityName( UCode_t code )
{
  int MaxValue = 95;
  return code < 0 || MaxValue < code ? "" : LYEntityNames[ code ];
}
UCode_t HTMLGetEntityUCValue( char *name )
{
  static UC_entity_info unicode_entities[996] = { { "AElig", 198, { 0 } }
, { "Aacgr", 902, { 0 } }
, { "Aacute", 193, { 0 } }
, { "Abreve", 258, { 0 } }
, { "Acirc", 194, { 0 } }
, { "Acy", 1040, { 0 } }
, { "Agr", 913, { 0 } }
, { "Agrave", 192, { 0 } }
, { "Alpha", 913, { 0 } }
, { "Amacr", 256, { 0 } }
, { "Aogon", 260, { 0 } }
, { "Aring", 197, { 0 } }
, { "Atilde", 195, { 0 } }
, { "Auml", 196, { 0 } }
, { "Barwed", 8966, { 0 } }
, { "Bcy", 1041, { 0 } }
, { "Beta", 914, { 0 } }
, { "Bgr", 914, { 0 } }
, { "CHcy", 1063, { 0 } }
, { "Cacute", 262, { 0 } }
, { "Cap", 8914, { 0 } }
, { "Ccaron", 268, { 0 } }
, { "Ccedil", 199, { 0 } }
, { "Ccirc", 264, { 0 } }
, { "Cdot", 266, { 0 } }
, { "Chi", 935, { 0 } }
, { "Cup", 8915, { 0 } }
, { "DJcy", 1026, { 0 } }
, { "DScy", 1029, { 0 } }
, { "DZcy", 1039, { 0 } }
, { "Dagger", 8225, { 0 } }
, { "Dcaron", 270, { 0 } }
, { "Dcy", 1044, { 0 } }
, { "Delta", 916, { 0 } }
, { "Dgr", 916, { 0 } }
, { "Dot", 168, { 0 } }
, { "DotDot", 8412, { 0 } }
, { "Dstrok", 272, { 0 } }
, { "EEacgr", 905, { 0 } }
, { "EEgr", 919, { 0 } }
, { "ENG", 330, { 0 } }
, { "ETH", 208, { 0 } }
, { "Eacgr", 904, { 0 } }
, { "Eacute", 201, { 0 } }
, { "Ecaron", 282, { 0 } }
, { "Ecirc", 202, { 0 } }
, { "Ecy", 1069, { 0 } }
, { "Edot", 278, { 0 } }
, { "Egr", 917, { 0 } }
, { "Egrave", 200, { 0 } }
, { "Emacr", 274, { 0 } }
, { "Eogon", 280, { 0 } }
, { "Epsilon", 917, { 0 } }
, { "Eta", 919, { 0 } }
, { "Euml", 203, { 0 } }
, { "Fcy", 1060, { 0 } }
, { "GJcy", 1027, { 0 } }
, { "Gamma", 915, { 0 } }
, { "Gbreve", 286, { 0 } }
, { "Gcedil", 290, { 0 } }
, { "Gcirc", 284, { 0 } }
, { "Gcy", 1043, { 0 } }
, { "Gdot", 288, { 0 } }
, { "Gg", 8921, { 0 } }
, { "Ggr", 915, { 0 } }
, { "Gt", 8811, { 0 } }
, { "HARDcy", 1066, { 0 } }
, { "Hcirc", 292, { 0 } }
, { "Hstrok", 294, { 0 } }
, { "IEcy", 1045, { 0 } }
, { "IJlig", 306, { 0 } }
, { "IOcy", 1025, { 0 } }
, { "Iacgr", 906, { 0 } }
, { "Iacute", 205, { 0 } }
, { "Icirc", 206, { 0 } }
, { "Icy", 1048, { 0 } }
, { "Idigr", 938, { 0 } }
, { "Idot", 304, { 0 } }
, { "Igr", 921, { 0 } }
, { "Igrave", 204, { 0 } }
, { "Imacr", 298, { 0 } }
, { "Iogon", 302, { 0 } }
, { "Iota", 921, { 0 } }
, { "Itilde", 296, { 0 } }
, { "Iukcy", 1030, { 0 } }
, { "Iuml", 207, { 0 } }
, { "Jcirc", 308, { 0 } }
, { "Jcy", 1049, { 0 } }
, { "Jsercy", 1032, { 0 } }
, { "Jukcy", 1028, { 0 } }
, { "KHcy", 1061, { 0 } }
, { "KHgr", 935, { 0 } }
, { "KJcy", 1036, { 0 } }
, { "Kappa", 922, { 0 } }
, { "Kcedil", 310, { 0 } }
, { "Kcy", 1050, { 0 } }
, { "Kgr", 922, { 0 } }
, { "LJcy", 1033, { 0 } }
, { "Lacute", 313, { 0 } }
, { "Lambda", 923, { 0 } }
, { "Larr", 8606, { 0 } }
, { "Lcaron", 317, { 0 } }
, { "Lcedil", 315, { 0 } }
, { "Lcy", 1051, { 0 } }
, { "Lgr", 923, { 0 } }
, { "Ll", 8920, { 0 } }
, { "Lmidot", 319, { 0 } }
, { "Lstrok", 321, { 0 } }
, { "Lt", 8810, { 0 } }
, { "Mcy", 1052, { 0 } }
, { "Mgr", 924, { 0 } }
, { "Mu", 924, { 0 } }
, { "NJcy", 1034, { 0 } }
, { "Nacute", 323, { 0 } }
, { "Ncaron", 327, { 0 } }
, { "Ncedil", 325, { 0 } }
, { "Ncy", 1053, { 0 } }
, { "Ngr", 925, { 0 } }
, { "Ntilde", 209, { 0 } }
, { "Nu", 925, { 0 } }
, { "OElig", 338, { 0 } }
, { "OHacgr", 911, { 0 } }
, { "OHgr", 937, { 0 } }
, { "Oacgr", 908, { 0 } }
, { "Oacute", 211, { 0 } }
, { "Ocirc", 212, { 0 } }
, { "Ocy", 1054, { 0 } }
, { "Odblac", 336, { 0 } }
, { "Ogr", 927, { 0 } }
, { "Ograve", 210, { 0 } }
, { "Omacr", 332, { 0 } }
, { "Omega", 937, { 0 } }
, { "Omicron", 927, { 0 } }
, { "Oslash", 216, { 0 } }
, { "Otilde", 213, { 0 } }
, { "Ouml", 214, { 0 } }
, { "PHgr", 934, { 0 } }
, { "PSgr", 936, { 0 } }
, { "Pcy", 1055, { 0 } }
, { "Pgr", 928, { 0 } }
, { "Phi", 934, { 0 } }
, { "Pi", 928, { 0 } }
, { "Prime", 8243, { 0 } }
, { "Psi", 936, { 0 } }
, { "Racute", 340, { 0 } }
, { "Rarr", 8608, { 0 } }
, { "Rcaron", 344, { 0 } }
, { "Rcedil", 342, { 0 } }
, { "Rcy", 1056, { 0 } }
, { "Rgr", 929, { 0 } }
, { "Rho", 929, { 0 } }
, { "SHCHcy", 1065, { 0 } }
, { "SHcy", 1064, { 0 } }
, { "SOFTcy", 1068, { 0 } }
, { "Sacute", 346, { 0 } }
, { "Scaron", 352, { 0 } }
, { "Scedil", 350, { 0 } }
, { "Scirc", 348, { 0 } }
, { "Scy", 1057, { 0 } }
, { "Sgr", 931, { 0 } }
, { "Sigma", 931, { 0 } }
, { "Sub", 8912, { 0 } }
, { "Sup", 8913, { 0 } }
, { "THORN", 222, { 0 } }
, { "THgr", 920, { 0 } }
, { "TSHcy", 1035, { 0 } }
, { "TScy", 1062, { 0 } }
, { "Tau", 932, { 0 } }
, { "Tcaron", 356, { 0 } }
, { "Tcedil", 354, { 0 } }
, { "Tcy", 1058, { 0 } }
, { "Tgr", 932, { 0 } }
, { "Theta", 920, { 0 } }
, { "Tstrok", 358, { 0 } }
, { "Uacgr", 910, { 0 } }
, { "Uacute", 218, { 0 } }
, { "Ubrcy", 1038, { 0 } }
, { "Ubreve", 364, { 0 } }
, { "Ucirc", 219, { 0 } }
, { "Ucy", 1059, { 0 } }
, { "Udblac", 368, { 0 } }
, { "Udigr", 939, { 0 } }
, { "Ugr", 933, { 0 } }
, { "Ugrave", 217, { 0 } }
, { "Umacr", 362, { 0 } }
, { "Uogon", 370, { 0 } }
, { "Upsi", 933, { 0 } }
, { "Upsilon", 933, { 0 } }
, { "Uring", 366, { 0 } }
, { "Utilde", 360, { 0 } }
, { "Uuml", 220, { 0 } }
, { "Vcy", 1042, { 0 } }
, { "Vdash", 8873, { 0 } }
, { "Verbar", 8214, { 0 } }
, { "Vvdash", 8874, { 0 } }
, { "Wcirc", 372, { 0 } }
, { "Xgr", 926, { 0 } }
, { "Xi", 926, { 0 } }
, { "YAcy", 1071, { 0 } }
, { "YIcy", 1031, { 0 } }
, { "YUcy", 1070, { 0 } }
, { "Yacute", 221, { 0 } }
, { "Ycirc", 374, { 0 } }
, { "Ycy", 1067, { 0 } }
, { "Yuml", 376, { 0 } }
, { "ZHcy", 1046, { 0 } }
, { "Zacute", 377, { 0 } }
, { "Zcaron", 381, { 0 } }
, { "Zcy", 1047, { 0 } }
, { "Zdot", 379, { 0 } }
, { "Zeta", 918, { 0 } }
, { "Zgr", 918, { 0 } }
, { "aacgr", 940, { 0 } }
, { "aacute", 225, { 0 } }
, { "abreve", 259, { 0 } }
, { "acirc", 226, { 0 } }
, { "acute", 180, { 0 } }
, { "acy", 1072, { 0 } }
, { "aelig", 230, { 0 } }
, { "agr", 945, { 0 } }
, { "agrave", 224, { 0 } }
, { "alefsym", 8501, { 0 } }
, { "aleph", 8501, { 0 } }
, { "alpha", 945, { 0 } }
, { "amacr", 257, { 0 } }
, { "amalg", 8720, { 0 } }
, { "amp", 38, { 0 } }
, { "and", 8743, { 0 } }
, { "ang", 8736, { 0 } }
, { "ang90", 8735, { 0 } }
, { "angmsd", 8737, { 0 } }
, { "angsph", 8738, { 0 } }
, { "angst", 8491, { 0 } }
, { "aogon", 261, { 0 } }
, { "ap", 8776, { 0 } }
, { "ape", 8778, { 0 } }
, { "apos", 700, { 0 } }
, { "aring", 229, { 0 } }
, { "ast", 42, { 0 } }
, { "asymp", 8776, { 0 } }
, { "atilde", 227, { 0 } }
, { "auml", 228, { 0 } }
, { "b.Delta", 916, { 0 } }
, { "b.Gamma", 915, { 0 } }
, { "b.Lambda", 923, { 0 } }
, { "b.Omega", 937, { 0 } }
, { "b.Phi", 934, { 0 } }
, { "b.Pi", 928, { 0 } }
, { "b.Psi", 936, { 0 } }
, { "b.Sigma", 931, { 0 } }
, { "b.Theta", 920, { 0 } }
, { "b.Upsi", 933, { 0 } }
, { "b.Xi", 926, { 0 } }
, { "b.alpha", 945, { 0 } }
, { "b.beta", 946, { 0 } }
, { "b.chi", 967, { 0 } }
, { "b.delta", 948, { 0 } }
, { "b.epsi", 949, { 0 } }
, { "b.epsis", 949, { 0 } }
, { "b.epsiv", 949, { 0 } }
, { "b.eta", 951, { 0 } }
, { "b.gamma", 947, { 0 } }
, { "b.gammad", 988, { 0 } }
, { "b.iota", 953, { 0 } }
, { "b.kappa", 954, { 0 } }
, { "b.kappav", 1008, { 0 } }
, { "b.lambda", 955, { 0 } }
, { "b.mu", 956, { 0 } }
, { "b.nu", 957, { 0 } }
, { "b.omega", 974, { 0 } }
, { "b.phis", 966, { 0 } }
, { "b.phiv", 981, { 0 } }
, { "b.pi", 960, { 0 } }
, { "b.piv", 982, { 0 } }
, { "b.psi", 968, { 0 } }
, { "b.rho", 961, { 0 } }
, { "b.rhov", 1009, { 0 } }
, { "b.sigma", 963, { 0 } }
, { "b.sigmav", 962, { 0 } }
, { "b.tau", 964, { 0 } }
, { "b.thetas", 952, { 0 } }
, { "b.thetav", 977, { 0 } }
, { "b.upsi", 965, { 0 } }
, { "b.xi", 958, { 0 } }
, { "b.zeta", 950, { 0 } }
, { "barwed", 8892, { 0 } }
, { "bcong", 8780, { 0 } }
, { "bcy", 1073, { 0 } }
, { "bdquo", 8222, { 0 } }
, { "becaus", 8757, { 0 } }
, { "bepsi", 8717, { 0 } }
, { "bernou", 8492, { 0 } }
, { "beta", 946, { 0 } }
, { "beth", 8502, { 0 } }
, { "bgr", 946, { 0 } }
, { "blank", 9251, { 0 } }
, { "blk12", 9618, { 0 } }
, { "blk14", 9617, { 0 } }
, { "blk34", 9619, { 0 } }
, { "block", 9608, { 0 } }
, { "bottom", 8869, { 0 } }
, { "bowtie", 8904, { 0 } }
, { "boxDL", 9559, { 0 } }
, { "boxDR", 9556, { 0 } }
, { "boxDl", 9558, { 0 } }
, { "boxDr", 9555, { 0 } }
, { "boxH", 9552, { 0 } }
, { "boxHD", 9574, { 0 } }
, { "boxHU", 9577, { 0 } }
, { "boxHd", 9572, { 0 } }
, { "boxHu", 9575, { 0 } }
, { "boxUL", 9565, { 0 } }
, { "boxUR", 9562, { 0 } }
, { "boxUl", 9564, { 0 } }
, { "boxUr", 9561, { 0 } }
, { "boxV", 9553, { 0 } }
, { "boxVH", 9580, { 0 } }
, { "boxVL", 9571, { 0 } }
, { "boxVR", 9568, { 0 } }
, { "boxVh", 9579, { 0 } }
, { "boxVl", 9570, { 0 } }
, { "boxVr", 9567, { 0 } }
, { "boxdL", 9557, { 0 } }
, { "boxdR", 9554, { 0 } }
, { "boxdl", 9488, { 0 } }
, { "boxdr", 9484, { 0 } }
, { "boxh", 9472, { 0 } }
, { "boxhD", 9573, { 0 } }
, { "boxhU", 9576, { 0 } }
, { "boxhd", 9516, { 0 } }
, { "boxhu", 9524, { 0 } }
, { "boxuL", 9563, { 0 } }
, { "boxuR", 9560, { 0 } }
, { "boxul", 9496, { 0 } }
, { "boxur", 9492, { 0 } }
, { "boxv", 9474, { 0 } }
, { "boxvH", 9578, { 0 } }
, { "boxvL", 9569, { 0 } }
, { "boxvR", 9566, { 0 } }
, { "boxvh", 9532, { 0 } }
, { "boxvl", 9508, { 0 } }
, { "boxvr", 9500, { 0 } }
, { "bprime", 8245, { 0 } }
, { "breve", 728, { 0 } }
, { "brkbar", 166, { 0 } }
, { "brvbar", 166, { 0 } }
, { "bsim", 8765, { 0 } }
, { "bsime", 8909, { 0 } }
, { "bsol", 92, { 0 } }
, { "bull", 8226, { 0 } }
, { "bump", 8782, { 0 } }
, { "bumpe", 8783, { 0 } }
, { "cacute", 263, { 0 } }
, { "cap", 8745, { 0 } }
, { "caret", 8257, { 0 } }
, { "caron", 711, { 0 } }
, { "ccaron", 269, { 0 } }
, { "ccedil", 231, { 0 } }
, { "ccirc", 265, { 0 } }
, { "cdot", 267, { 0 } }
, { "cedil", 184, { 0 } }
, { "cent", 162, { 0 } }
, { "chcy", 1095, { 0 } }
, { "check", 10003, { 0 } }
, { "chi", 967, { 0 } }
, { "cir", 9675, { 0 } }
, { "circ", 710, { 0 } }
, { "cire", 8791, { 0 } }
, { "clubs", 9827, { 0 } }
, { "colon", 58, { 0 } }
, { "colone", 8788, { 0 } }
, { "comma", 44, { 0 } }
, { "commat", 64, { 0 } }
, { "comp", 8705, { 0 } }
, { "compfn", 8728, { 0 } }
, { "cong", 8773, { 0 } }
, { "conint", 8750, { 0 } }
, { "coprod", 8720, { 0 } }
, { "copy", 169, { 0 } }
, { "copysr", 8471, { 0 } }
, { "crarr", 8629, { 0 } }
, { "cross", 10007, { 0 } }
, { "cuepr", 8926, { 0 } }
, { "cuesc", 8927, { 0 } }
, { "cularr", 8630, { 0 } }
, { "cup", 8746, { 0 } }
, { "cupre", 8828, { 0 } }
, { "curarr", 8631, { 0 } }
, { "curren", 164, { 0 } }
, { "cuvee", 8910, { 0 } }
, { "cuwed", 8911, { 0 } }
, { "dArr", 8659, { 0 } }
, { "dagger", 8224, { 0 } }
, { "daleth", 8504, { 0 } }
, { "darr", 8595, { 0 } }
, { "darr2", 8650, { 0 } }
, { "dash", 8208, { 0 } }
, { "dashv", 8867, { 0 } }
, { "dblac", 733, { 0 } }
, { "dcaron", 271, { 0 } }
, { "dcy", 1076, { 0 } }
, { "deg", 176, { 0 } }
, { "delta", 948, { 0 } }
, { "dgr", 948, { 0 } }
, { "dharl", 8643, { 0 } }
, { "dharr", 8642, { 0 } }
, { "diam", 8900, { 0 } }
, { "diams", 9830, { 0 } }
, { "die", 168, { 0 } }
, { "divide", 247, { 0 } }
, { "divonx", 8903, { 0 } }
, { "djcy", 1106, { 0 } }
, { "dlarr", 8601, { 0 } }
, { "dlcorn", 8990, { 0 } }
, { "dlcrop", 8973, { 0 } }
, { "dollar", 36, { 0 } }
, { "dot", 729, { 0 } }
, { "drarr", 8600, { 0 } }
, { "drcorn", 8991, { 0 } }
, { "drcrop", 8972, { 0 } }
, { "dscy", 1109, { 0 } }
, { "dstrok", 273, { 0 } }
, { "dtri", 9663, { 0 } }
, { "dtrif", 9662, { 0 } }
, { "dzcy", 1119, { 0 } }
, { "eDot", 8785, { 0 } }
, { "eacgr", 941, { 0 } }
, { "eacute", 233, { 0 } }
, { "ecaron", 283, { 0 } }
, { "ecir", 8790, { 0 } }
, { "ecirc", 234, { 0 } }
, { "ecolon", 8789, { 0 } }
, { "ecy", 1101, { 0 } }
, { "edot", 279, { 0 } }
, { "eeacgr", 942, { 0 } }
, { "eegr", 951, { 0 } }
, { "efDot", 8786, { 0 } }
, { "egr", 949, { 0 } }
, { "egrave", 232, { 0 } }
, { "egs", 8925, { 0 } }
, { "ell", 8467, { 0 } }
, { "els", 8924, { 0 } }
, { "emacr", 275, { 0 } }
, { "emdash", 8212, { 0 } }
, { "empty", 8709, { 0 } }
, { "emsp", 8195, { 0 } }
, { "emsp13", 8196, { 0 } }
, { "emsp14", 8197, { 0 } }
, { "endash", 8211, { 0 } }
, { "eng", 331, { 0 } }
, { "ensp", 8194, { 0 } }
, { "eogon", 281, { 0 } }
, { "epsi", 949, { 0 } }
, { "epsilon", 949, { 0 } }
, { "epsis", 8714, { 0 } }
, { "equals", 61, { 0 } }
, { "equiv", 8801, { 0 } }
, { "erDot", 8787, { 0 } }
, { "esdot", 8784, { 0 } }
, { "eta", 951, { 0 } }
, { "eth", 240, { 0 } }
, { "euml", 235, { 0 } }
, { "euro", 8364, { 0 } }
, { "excl", 33, { 0 } }
, { "exist", 8707, { 0 } }
, { "fcy", 1092, { 0 } }
, { "female", 9792, { 0 } }
, { "ffilig", 64259, { 0 } }
, { "fflig", 64256, { 0 } }
, { "ffllig", 64260, { 0 } }
, { "filig", 64257, { 0 } }
, { "flat", 9837, { 0 } }
, { "fllig", 64258, { 0 } }
, { "fnof", 402, { 0 } }
, { "forall", 8704, { 0 } }
, { "fork", 8916, { 0 } }
, { "frac12", 189, { 0 } }
, { "frac13", 8531, { 0 } }
, { "frac14", 188, { 0 } }
, { "frac15", 8533, { 0 } }
, { "frac16", 8537, { 0 } }
, { "frac18", 8539, { 0 } }
, { "frac23", 8532, { 0 } }
, { "frac25", 8534, { 0 } }
, { "frac34", 190, { 0 } }
, { "frac35", 8535, { 0 } }
, { "frac38", 8540, { 0 } }
, { "frac45", 8536, { 0 } }
, { "frac56", 8538, { 0 } }
, { "frac58", 8541, { 0 } }
, { "frac78", 8542, { 0 } }
, { "frasl", 8260, { 0 } }
, { "frown", 8994, { 0 } }
, { "gE", 8807, { 0 } }
, { "gacute", 501, { 0 } }
, { "gamma", 947, { 0 } }
, { "gammad", 988, { 0 } }
, { "gbreve", 287, { 0 } }
, { "gcedil", 291, { 0 } }
, { "gcirc", 285, { 0 } }
, { "gcy", 1075, { 0 } }
, { "gdot", 289, { 0 } }
, { "ge", 8805, { 0 } }
, { "gel", 8923, { 0 } }
, { "ges", 8805, { 0 } }
, { "ggr", 947, { 0 } }
, { "gimel", 8503, { 0 } }
, { "gjcy", 1107, { 0 } }
, { "gl", 8823, { 0 } }
, { "gnE", 8809, { 0 } }
, { "gne", 8809, { 0 } }
, { "gnsim", 8935, { 0 } }
, { "grave", 96, { 0 } }
, { "gsdot", 8919, { 0 } }
, { "gsim", 8819, { 0 } }
, { "gt", 62, { 0 } }
, { "gvnE", 8809, { 0 } }
, { "hArr", 8660, { 0 } }
, { "hairsp", 8202, { 0 } }
, { "half", 189, { 0 } }
, { "hamilt", 8459, { 0 } }
, { "hardcy", 1098, { 0 } }
, { "harr", 8596, { 0 } }
, { "harrw", 8621, { 0 } }
, { "hcirc", 293, { 0 } }
, { "hearts", 9829, { 0 } }
, { "hellip", 8230, { 0 } }
, { "hibar", 175, { 0 } }
, { "horbar", 8213, { 0 } }
, { "hstrok", 295, { 0 } }
, { "hybull", 8259, { 0 } }
, { "hyphen", 45, { 0 } }
, { "iacgr", 943, { 0 } }
, { "iacute", 237, { 0 } }
, { "icirc", 238, { 0 } }
, { "icy", 1080, { 0 } }
, { "idiagr", 912, { 0 } }
, { "idigr", 970, { 0 } }
, { "iecy", 1077, { 0 } }
, { "iexcl", 161, { 0 } }
, { "iff", 8660, { 0 } }
, { "igr", 953, { 0 } }
, { "igrave", 236, { 0 } }
, { "ijlig", 307, { 0 } }
, { "imacr", 299, { 0 } }
, { "image", 8465, { 0 } }
, { "incare", 8453, { 0 } }
, { "infin", 8734, { 0 } }
, { "inodot", 305, { 0 } }
, { "int", 8747, { 0 } }
, { "intcal", 8890, { 0 } }
, { "iocy", 1105, { 0 } }
, { "iogon", 303, { 0 } }
, { "iota", 953, { 0 } }
, { "iquest", 191, { 0 } }
, { "isin", 8712, { 0 } }
, { "itilde", 297, { 0 } }
, { "iukcy", 1110, { 0 } }
, { "iuml", 239, { 0 } }
, { "jcirc", 309, { 0 } }
, { "jcy", 1081, { 0 } }
, { "jsercy", 1112, { 0 } }
, { "jukcy", 1108, { 0 } }
, { "kappa", 954, { 0 } }
, { "kappav", 1008, { 0 } }
, { "kcedil", 311, { 0 } }
, { "kcy", 1082, { 0 } }
, { "kgr", 954, { 0 } }
, { "kgreen", 312, { 0 } }
, { "khcy", 1093, { 0 } }
, { "khgr", 967, { 0 } }
, { "kjcy", 1116, { 0 } }
, { "lAarr", 8666, { 0 } }
, { "lArr", 8656, { 0 } }
, { "lE", 8806, { 0 } }
, { "lacute", 314, { 0 } }
, { "lagran", 8466, { 0 } }
, { "lambda", 955, { 0 } }
, { "lang", 9001, { 0 } }
, { "laquo", 171, { 0 } }
, { "larr", 8592, { 0 } }
, { "larr2", 8647, { 0 } }
, { "larrhk", 8617, { 0 } }
, { "larrlp", 8619, { 0 } }
, { "larrtl", 8610, { 0 } }
, { "lcaron", 318, { 0 } }
, { "lcedil", 316, { 0 } }
, { "lceil", 8968, { 0 } }
, { "lcub", 123, { 0 } }
, { "lcy", 1083, { 0 } }
, { "ldot", 8918, { 0 } }
, { "ldquo", 8220, { 0 } }
, { "ldquor", 8222, { 0 } }
, { "le", 8804, { 0 } }
, { "leg", 8922, { 0 } }
, { "les", 8804, { 0 } }
, { "lfloor", 8970, { 0 } }
, { "lg", 8822, { 0 } }
, { "lgr", 955, { 0 } }
, { "lhard", 8637, { 0 } }
, { "lharu", 8636, { 0 } }
, { "lhblk", 9604, { 0 } }
, { "ljcy", 1113, { 0 } }
, { "lmidot", 320, { 0 } }
, { "lnE", 8808, { 0 } }
, { "lne", 8808, { 0 } }
, { "lnsim", 8934, { 0 } }
, { "lowast", 8727, { 0 } }
, { "lowbar", 95, { 0 } }
, { "loz", 9674, { 0 } }
, { "lozf", 10022, { 0 } }
, { "lpar", 40, { 0 } }
, { "lrarr2", 8646, { 0 } }
, { "lrhar2", 8651, { 0 } }
, { "lrm", 8206, { 0 } }
, { "lsaquo", 8249, { 0 } }
, { "lsh", 8624, { 0 } }
, { "lsim", 8818, { 0 } }
, { "lsqb", 91, { 0 } }
, { "lsquo", 8216, { 0 } }
, { "lsquor", 8218, { 0 } }
, { "lstrok", 322, { 0 } }
, { "lt", 60, { 0 } }
, { "lthree", 8907, { 0 } }
, { "ltimes", 8905, { 0 } }
, { "ltri", 9667, { 0 } }
, { "ltrie", 8884, { 0 } }
, { "ltrif", 9666, { 0 } }
, { "lvnE", 8808, { 0 } }
, { "macr", 175, { 0 } }
, { "male", 9794, { 0 } }
, { "malt", 10016, { 0 } }
, { "map", 8614, { 0 } }
, { "marker", 9646, { 0 } }
, { "mcy", 1084, { 0 } }
, { "mdash", 8212, { 0 } }
, { "mgr", 956, { 0 } }
, { "micro", 181, { 0 } }
, { "mid", 8739, { 0 } }
, { "middot", 183, { 0 } }
, { "minus", 8722, { 0 } }
, { "minusb", 8863, { 0 } }
, { "mldr", 8230, { 0 } }
, { "mnplus", 8723, { 0 } }
, { "models", 8871, { 0 } }
, { "mu", 956, { 0 } }
, { "mumap", 8888, { 0 } }
, { "nVDash", 8879, { 0 } }
, { "nVdash", 8878, { 0 } }
, { "nabla", 8711, { 0 } }
, { "nacute", 324, { 0 } }
, { "nap", 8777, { 0 } }
, { "napos", 329, { 0 } }
, { "natur", 9838, { 0 } }
, { "nbsp", 160, { 0 } }
, { "ncaron", 328, { 0 } }
, { "ncedil", 326, { 0 } }
, { "ncong", 8775, { 0 } }
, { "ncy", 1085, { 0 } }
, { "ndash", 8211, { 0 } }
, { "ne", 8800, { 0 } }
, { "nearr", 8599, { 0 } }
, { "nequiv", 8802, { 0 } }
, { "nexist", 8708, { 0 } }
, { "nge", 8817, { 0 } }
, { "nges", 8817, { 0 } }
, { "ngr", 957, { 0 } }
, { "ngt", 8815, { 0 } }
, { "nhArr", 8654, { 0 } }
, { "nharr", 8622, { 0 } }
, { "ni", 8715, { 0 } }
, { "njcy", 1114, { 0 } }
, { "nlArr", 8653, { 0 } }
, { "nlarr", 8602, { 0 } }
, { "nldr", 8229, { 0 } }
, { "nle", 8816, { 0 } }
, { "nles", 8816, { 0 } }
, { "nlt", 8814, { 0 } }
, { "nltri", 8938, { 0 } }
, { "nltrie", 8940, { 0 } }
, { "nmid", 8740, { 0 } }
, { "not", 172, { 0 } }
, { "notin", 8713, { 0 } }
, { "npar", 8742, { 0 } }
, { "npr", 8832, { 0 } }
, { "npre", 8928, { 0 } }
, { "nrArr", 8655, { 0 } }
, { "nrarr", 8603, { 0 } }
, { "nrtri", 8939, { 0 } }
, { "nrtrie", 8941, { 0 } }
, { "nsc", 8833, { 0 } }
, { "nsce", 8929, { 0 } }
, { "nsim", 8769, { 0 } }
, { "nsime", 8772, { 0 } }
, { "nspar", 8742, { 0 } }
, { "nsub", 8836, { 0 } }
, { "nsubE", 8840, { 0 } }
, { "nsube", 8840, { 0 } }
, { "nsup", 8837, { 0 } }
, { "nsupE", 8841, { 0 } }
, { "nsupe", 8841, { 0 } }
, { "ntilde", 241, { 0 } }
, { "nu", 957, { 0 } }
, { "num", 35, { 0 } }
, { "numero", 8470, { 0 } }
, { "numsp", 8199, { 0 } }
, { "nvDash", 8877, { 0 } }
, { "nvdash", 8876, { 0 } }
, { "nwarr", 8598, { 0 } }
, { "oS", 9416, { 0 } }
, { "oacgr", 972, { 0 } }
, { "oacute", 243, { 0 } }
, { "oast", 8859, { 0 } }
, { "ocir", 8858, { 0 } }
, { "ocirc", 244, { 0 } }
, { "ocy", 1086, { 0 } }
, { "odash", 8861, { 0 } }
, { "odblac", 337, { 0 } }
, { "odot", 8857, { 0 } }
, { "oelig", 339, { 0 } }
, { "ogon", 731, { 0 } }
, { "ogr", 959, { 0 } }
, { "ograve", 242, { 0 } }
, { "ohacgr", 974, { 0 } }
, { "ohgr", 969, { 0 } }
, { "ohm", 8486, { 0 } }
, { "olarr", 8634, { 0 } }
, { "oline", 8254, { 0 } }
, { "omacr", 333, { 0 } }
, { "omega", 969, { 0 } }
, { "omicron", 959, { 0 } }
, { "ominus", 8854, { 0 } }
, { "oplus", 8853, { 0 } }
, { "or", 8744, { 0 } }
, { "orarr", 8635, { 0 } }
, { "order", 8500, { 0 } }
, { "ordf", 170, { 0 } }
, { "ordm", 186, { 0 } }
, { "oslash", 248, { 0 } }
, { "osol", 8856, { 0 } }
, { "otilde", 245, { 0 } }
, { "otimes", 8855, { 0 } }
, { "ouml", 246, { 0 } }
, { "par", 8741, { 0 } }
, { "para", 182, { 0 } }
, { "part", 8706, { 0 } }
, { "pcy", 1087, { 0 } }
, { "percnt", 37, { 0 } }
, { "period", 46, { 0 } }
, { "permil", 8240, { 0 } }
, { "perp", 8869, { 0 } }
, { "pgr", 960, { 0 } }
, { "phgr", 966, { 0 } }
, { "phi", 966, { 0 } }
, { "phis", 966, { 0 } }
, { "phiv", 981, { 0 } }
, { "phmmat", 8499, { 0 } }
, { "phone", 9742, { 0 } }
, { "pi", 960, { 0 } }
, { "piv", 982, { 0 } }
, { "planck", 8463, { 0 } }
, { "plus", 43, { 0 } }
, { "plusb", 8862, { 0 } }
, { "plusdo", 8724, { 0 } }
, { "plusmn", 177, { 0 } }
, { "pound", 163, { 0 } }
, { "pr", 8826, { 0 } }
, { "pre", 8828, { 0 } }
, { "prime", 8242, { 0 } }
, { "prnsim", 8936, { 0 } }
, { "prod", 8719, { 0 } }
, { "prop", 8733, { 0 } }
, { "prsim", 8830, { 0 } }
, { "psgr", 968, { 0 } }
, { "psi", 968, { 0 } }
, { "puncsp", 8200, { 0 } }
, { "quest", 63, { 0 } }
, { "quot", 34, { 0 } }
, { "rAarr", 8667, { 0 } }
, { "rArr", 8658, { 0 } }
, { "racute", 341, { 0 } }
, { "radic", 8730, { 0 } }
, { "rang", 9002, { 0 } }
, { "raquo", 187, { 0 } }
, { "rarr", 8594, { 0 } }
, { "rarr2", 8649, { 0 } }
, { "rarrhk", 8618, { 0 } }
, { "rarrlp", 8620, { 0 } }
, { "rarrtl", 8611, { 0 } }
, { "rarrw", 8605, { 0 } }
, { "rcaron", 345, { 0 } }
, { "rcedil", 343, { 0 } }
, { "rceil", 8969, { 0 } }
, { "rcub", 125, { 0 } }
, { "rcy", 1088, { 0 } }
, { "rdquo", 8221, { 0 } }
, { "rdquor", 8220, { 0 } }
, { "real", 8476, { 0 } }
, { "rect", 9645, { 0 } }
, { "reg", 174, { 0 } }
, { "rfloor", 8971, { 0 } }
, { "rgr", 961, { 0 } }
, { "rhard", 8641, { 0 } }
, { "rharu", 8640, { 0 } }
, { "rho", 961, { 0 } }
, { "rhov", 1009, { 0 } }
, { "ring", 730, { 0 } }
, { "rlarr2", 8644, { 0 } }
, { "rlhar2", 8652, { 0 } }
, { "rlm", 8207, { 0 } }
, { "rpar", 41, { 0 } }
, { "rsaquo", 8250, { 0 } }
, { "rsh", 8625, { 0 } }
, { "rsqb", 93, { 0 } }
, { "rsquo", 8217, { 0 } }
, { "rsquor", 8216, { 0 } }
, { "rthree", 8908, { 0 } }
, { "rtimes", 8906, { 0 } }
, { "rtri", 9657, { 0 } }
, { "rtrie", 8885, { 0 } }
, { "rtrif", 9656, { 0 } }
, { "rx", 8478, { 0 } }
, { "sacute", 347, { 0 } }
, { "samalg", 8720, { 0 } }
, { "sbquo", 8218, { 0 } }
, { "sbsol", 92, { 0 } }
, { "sc", 8827, { 0 } }
, { "scaron", 353, { 0 } }
, { "sccue", 8829, { 0 } }
, { "sce", 8829, { 0 } }
, { "scedil", 351, { 0 } }
, { "scirc", 349, { 0 } }
, { "scnsim", 8937, { 0 } }
, { "scsim", 8831, { 0 } }
, { "scy", 1089, { 0 } }
, { "sdot", 8901, { 0 } }
, { "sdotb", 8865, { 0 } }
, { "sect", 167, { 0 } }
, { "semi", 59, { 0 } }
, { "setmn", 8726, { 0 } }
, { "sext", 10038, { 0 } }
, { "sfgr", 962, { 0 } }
, { "sfrown", 8994, { 0 } }
, { "sgr", 963, { 0 } }
, { "sharp", 9839, { 0 } }
, { "shchcy", 1097, { 0 } }
, { "shcy", 1096, { 0 } }
, { "shy", 173, { 0 } }
, { "sigma", 963, { 0 } }
, { "sigmaf", 962, { 0 } }
, { "sigmav", 962, { 0 } }
, { "sim", 8764, { 0 } }
, { "sime", 8771, { 0 } }
, { "smile", 8995, { 0 } }
, { "softcy", 1100, { 0 } }
, { "sol", 47, { 0 } }
, { "spades", 9824, { 0 } }
, { "spar", 8741, { 0 } }
, { "sqcap", 8851, { 0 } }
, { "sqcup", 8852, { 0 } }
, { "sqsub", 8847, { 0 } }
, { "sqsube", 8849, { 0 } }
, { "sqsup", 8848, { 0 } }
, { "sqsupe", 8850, { 0 } }
, { "squ", 9633, { 0 } }
, { "square", 9633, { 0 } }
, { "squf", 9642, { 0 } }
, { "ssetmn", 8726, { 0 } }
, { "ssmile", 8995, { 0 } }
, { "sstarf", 8902, { 0 } }
, { "star", 9734, { 0 } }
, { "starf", 9733, { 0 } }
, { "sub", 8834, { 0 } }
, { "subE", 8838, { 0 } }
, { "sube", 8838, { 0 } }
, { "subnE", 8842, { 0 } }
, { "subne", 8842, { 0 } }
, { "sum", 8721, { 0 } }
, { "sung", 9834, { 0 } }
, { "sup", 8835, { 0 } }
, { "sup1", 185, { 0 } }
, { "sup2", 178, { 0 } }
, { "sup3", 179, { 0 } }
, { "supE", 8839, { 0 } }
, { "supe", 8839, { 0 } }
, { "supnE", 8843, { 0 } }
, { "supne", 8843, { 0 } }
, { "szlig", 223, { 0 } }
, { "target", 8982, { 0 } }
, { "tau", 964, { 0 } }
, { "tcaron", 357, { 0 } }
, { "tcedil", 355, { 0 } }
, { "tcy", 1090, { 0 } }
, { "tdot", 8411, { 0 } }
, { "telrec", 8981, { 0 } }
, { "tgr", 964, { 0 } }
, { "there4", 8756, { 0 } }
, { "theta", 952, { 0 } }
, { "thetas", 952, { 0 } }
, { "thetasym", 977, { 0 } }
, { "thetav", 977, { 0 } }
, { "thgr", 952, { 0 } }
, { "thinsp", 8201, { 0 } }
, { "thkap", 8776, { 0 } }
, { "thksim", 8764, { 0 } }
, { "thorn", 254, { 0 } }
, { "tilde", 732, { 0 } }
, { "times", 215, { 0 } }
, { "timesb", 8864, { 0 } }
, { "top", 8868, { 0 } }
, { "tprime", 8244, { 0 } }
, { "trade", 8482, { 0 } }
, { "trie", 8796, { 0 } }
, { "tscy", 1094, { 0 } }
, { "tshcy", 1115, { 0 } }
, { "tstrok", 359, { 0 } }
, { "twixt", 8812, { 0 } }
, { "uArr", 8657, { 0 } }
, { "uacgr", 973, { 0 } }
, { "uacute", 250, { 0 } }
, { "uarr", 8593, { 0 } }
, { "uarr2", 8648, { 0 } }
, { "ubrcy", 1118, { 0 } }
, { "ubreve", 365, { 0 } }
, { "ucirc", 251, { 0 } }
, { "ucy", 1091, { 0 } }
, { "udblac", 369, { 0 } }
, { "udiagr", 944, { 0 } }
, { "udigr", 971, { 0 } }
, { "ugr", 965, { 0 } }
, { "ugrave", 249, { 0 } }
, { "uharl", 8639, { 0 } }
, { "uharr", 8638, { 0 } }
, { "uhblk", 9600, { 0 } }
, { "ulcorn", 8988, { 0 } }
, { "ulcrop", 8975, { 0 } }
, { "umacr", 363, { 0 } }
, { "uml", 168, { 0 } }
, { "uogon", 371, { 0 } }
, { "uplus", 8846, { 0 } }
, { "upsi", 965, { 0 } }
, { "upsih", 978, { 0 } }
, { "upsilon", 965, { 0 } }
, { "urcorn", 8989, { 0 } }
, { "urcrop", 8974, { 0 } }
, { "uring", 367, { 0 } }
, { "utilde", 361, { 0 } }
, { "utri", 9653, { 0 } }
, { "utrif", 9652, { 0 } }
, { "uuml", 252, { 0 } }
, { "vArr", 8661, { 0 } }
, { "vDash", 8872, { 0 } }
, { "varr", 8597, { 0 } }
, { "vcy", 1074, { 0 } }
, { "vdash", 8866, { 0 } }
, { "veebar", 8891, { 0 } }
, { "vellip", 8942, { 0 } }
, { "verbar", 124, { 0 } }
, { "vltri", 8882, { 0 } }
, { "vprime", 8242, { 0 } }
, { "vprop", 8733, { 0 } }
, { "vrtri", 8883, { 0 } }
, { "vsubnE", 8842, { 0 } }
, { "vsubne", 8842, { 0 } }
, { "vsupnE", 8843, { 0 } }
, { "vsupne", 8843, { 0 } }
, { "wcirc", 373, { 0 } }
, { "wedgeq", 8793, { 0 } }
, { "weierp", 8472, { 0 } }
, { "wreath", 8768, { 0 } }
, { "xcirc", 9675, { 0 } }
, { "xdtri", 9661, { 0 } }
, { "xgr", 958, { 0 } }
, { "xhArr", 8596, { 0 } }
, { "xharr", 8596, { 0 } }
, { "xi", 958, { 0 } }
, { "xlArr", 8656, { 0 } }
, { "xrArr", 8658, { 0 } }
, { "xutri", 9651, { 0 } }
, { "yacute", 253, { 0 } }
, { "yacy", 1103, { 0 } }
, { "ycirc", 375, { 0 } }
, { "ycy", 1099, { 0 } }
, { "yen", 165, { 0 } }
, { "yicy", 1111, { 0 } }
, { "yucy", 1102, { 0 } }
, { "yuml", 255, { 0 } }
, { "zacute", 378, { 0 } }
, { "zcaron", 382, { 0 } }
, { "zcy", 1079, { 0 } }
, { "zdot", 380, { 0 } }
, { "zeta", 950, { 0 } }
, { "zgr", 950, { 0 } }
, { "zhcy", 1078, { 0 } }
, { "zwj", 8205, { 0 } }
, { "zwnj", 8204, { 0 } }
 };
  UCode_t value = 0;
  size_t i;
  size_t high;
  size_t low;
  int diff = 0;
  size_t number_of_unicode_entities = 996;
  if ( name == 0 || name[0] == 0 )
  {
    return value;
  }
  low = 0;
  high = number_of_unicode_entities;
  while ( low < high )
  {
    i = low + ( ( high - low ) >> 1 );
    diff = strcmp( unicode_entities[ i ].name, name );
    if ( diff )
    {
      if ( diff < 0 )
      {
        low = i + 1;
      }
      else
      {
        high = i;
      }
    }
    else
    {
      value = unicode_entities[ i ].code;
      break;
    }
  }
  return value;
}
void HTMLUseCharacterSet( int i )
{
  HTMLSetRawModeDefault( i );
  p_entity_values = LYCharSets[ i ];
  HTMLSetCharacterHandling( i );
  HTMLSetHaveCJKCharacterSet( i );
  HTMLSetDisplayCharsetMatchLocale( i );
  return;
}
int LYCharSetsDeclared( void )
{
  UCInit( );
  return UCInitialized;
}
#if 0
#endif
