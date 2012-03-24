#include "LYStyle.c.h"
static char *TrimLowercase( char *buffer );
static void parse_either( char *attrs, int dft_color, int *monop, int *colorp );
static void parse_attributes( char *mono, char *fg, char *bg, int style, char *element );
static void parse_style( char *param );
static void style_deleteStyleList( void );
static void free_colorstylestuff( void );
static void initialise_default_stylesheet( void );
static void style_initialiseHashTable( void );
static void HStyle_addStyle( char *buffer );
static int style_readFromFileREC( char *lss_filename, char *parent_filename );
static unsigned int *RefCachedStyle( int y, int x );
static HTList *lss_styles;
static unsigned int *cached_styles_ptr;
static int cached_styles_rows;
static int cached_styles_cols;
int last_styles[129];
int last_colorattr_ptr;
bucket hashStyles[8193];
bucket special_bucket = { "&lt;special&gt;", 0, 0, 0, 0, 0,  }
;
bucket nostyle_bucket = { "&lt;NOSTYLE&gt;", 0, 0, 0, 0, 0,  }
;
int cached_tag_styles[118];
int current_tag_style;
BOOLEAN force_current_tag_style;
char *forced_classname;
BOOLEAN force_classname;
int s_a = -1;
int s_aedit = -1;
int s_aedit_arr = -1;
int s_aedit_pad = -1;
int s_aedit_sel = -1;
int s_alert = -1;
int s_alink = -1;
int s_curedit = -1;
int s_forw_backw = -1;
int s_hot_paste = -1;
int s_menu_active = -1;
int s_menu_bg = -1;
int s_menu_entry = -1;
int s_menu_frame = -1;
int s_menu_number = -1;
int s_menu_sb = -1;
int s_normal = -1;
int s_prompt_edit = -1;
int s_prompt_edit_arr = -1;
int s_prompt_edit_pad = -1;
int s_prompt_sel = -1;
int s_status = -1;
int s_title = -1;
int s_whereis = -1;
int s_sb_aa = -1;
int s_sb_bar = -1;
int s_sb_bg = -1;
int s_sb_naa = -1;
static int colorPairs;
static unsigned char our_pairs[2][1][17][17];
char *TrimLowercase( char *buffer )
{
  LYRemoveBlanks( buffer );
  strtolower( buffer );
  return buffer;
}
void parse_either( char *attrs, int dft_color, int *monop, int *colorp )
{
  int value;
  while ( ( attrs[0] & 255 ) != 0 )
  {
    char *next = strchr( attrs, 43 );
    char save = next == 0 ? 0 : next[0];
    if ( next == 0 )
    {
      next = attrs + strlen( attrs );
    }
    if ( save != 0 )
      next[0] = 0;
    value = string_to_attr( attrs );
    if ( value != 0 )
      monop[0] |= value;
    else
    if ( colorp != 0 )
    {
      value = check_color( attrs, dft_color );
      if ( value != -3 )
        colorp[0] = value;
    }
    attrs = next;
    if ( save != 0 )
    {
      attrs[0] = save;
      attrs++;
    }
  }
  return;
}
void parse_attributes( char *mono, char *fg, char *bg, int style, char *element )
{
  int mA = 0;
  int fA = default_fg;
  int bA = default_bg;
  int cA = 0;
  int newstyle = hash_code( element );
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
  {
    fprintf( TraceFP( ), "CSS(PA):style d=%d / h=%d, e=%s\n", style, newstyle, element );
  }
  parse_either( mono, -3, &mA, 0 );
  parse_either( bg, default_bg, &cA, &bA );
  parse_either( fg, default_fg, &cA, &fA );
  if ( style == -1 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
    {
      fprintf( TraceFP( ), "CSS(DEF):default_fg=%d, default_bg=%d\n", fA, bA );
    }
    default_fg = fA;
    default_bg = bA;
    default_color_reset = 1;
  }
  else
  {
    if ( fA == -2 )
      bA = -2;
    else
    if ( *(int*)(135963712) != 0 )
    {
      if ( *(int*)(135963712) <= fA || *(int*)(135963712) <= bA )
        cA = 2097152;
      if ( *(int*)(135963712) <= fA )
        fA = fA % *(int*)(135963712);
      if ( *(int*)(135963712) <= bA )
        bA = bA % *(int*)(135963712);
    }
    else
    {
      cA = 2097152;
      fA = -2;
      bA = -2;
    }
    if ( lynx_has_color != 0 && colorPairs < *(int*)(135967644) - 1 && fA != -2 )
    {
      int curPair = 0;
      int iFg = ( fA & ~( fA >> 31 ) ) + 1;
      int iBg = ( bA & ~( bA >> 31 ) ) + 1;
      int iBold = ( cA & 2097152 ) != 0;
      int iBlink = 0;
      if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
      {
        fprintf( TraceFP( ), "parse_attributes %d/%d %d/%d %#x\n", fA, default_fg, bA, default_bg, cA );
      }
      if ( fA <= 15 && bA <= 15 && ( cA != 0 || fA != default_fg || default_bg != bA ) && curPair <= 254 )
      {
        if ( ( our_pairs[ iBold + iBlink ][0][ iFg ][ iBg ] & 255 ) != 0 )
          curPair = our_pairs[ iBold + iBlink ][0][ iFg ][ iBg ];
        else
        {
          colorPairs++;
          curPair = colorPairs;
          init_pair( &curPair, &fA, &bA );
          our_pairs[ iBold + iBlink ][0][ iFg ][ iBg ] = curPair;
        }
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
      {
        fprintf( TraceFP( ), "CSS(CURPAIR):%d\n", curPair );
      }
      if ( style <= 132 )
        setStyle( style, cA | ( curPair << 8 ), cA, mA );
      setHashStyle( newstyle, cA | ( curPair << 8 ), cA, mA, element );
    }
    else
    {
      if ( lynx_has_color != 0 && fA != -2 && ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
      {
        fprintf( TraceFP( ), "CSS(NC): maximum of %d colorpairs exhausted\n", *(int*)(135967644) - 1 );
      }
      if ( style <= 132 )
        setStyle( style, -1, -1, mA );
      setHashStyle( newstyle, -1, -1, mA, element );
    }
  }
  return;
}
void parse_style( char *param )
{
  static struct {
     char *name;
     int style;
     int *set_hash;
  } table[27] = { { "default", -1, 0,  }
, { "alink", 127, 0,  }
, { "a", 8, 0,  }
, { "a", 0, 0,  }
, { "status", 126, 0,  }
, { "label", 129, 0,  }
, { "value", 130, 0,  }
, { "normal", 128, 0,  }
, { "candy", 131, 0,  }
, { "whereis", 132, &s_whereis,  }
, { "edit.active.pad", 133, &s_aedit_pad,  }
, { "edit.active.arrow", 133, &s_aedit_arr,  }
, { "edit.active.marked", 133, &s_aedit_sel,  }
, { "edit.active", 133, &s_aedit,  }
, { "edit.current", 133, &s_curedit,  }
, { "edit.prompt.pad", 133, &s_prompt_edit_pad,  }
, { "edit.prompt.arrow", 133, &s_prompt_edit_arr,  }
, { "edit.prompt.marked", 133, &s_prompt_sel,  }
, { "edit.prompt", 133, &s_prompt_edit,  }
, { "forwbackw.arrow", 133, &s_forw_backw,  }
, { "hot.paste", 133, &s_hot_paste,  }
, { "menu.frame", 133, &s_menu_frame,  }
, { "menu.bg", 133, &s_menu_bg,  }
, { "menu.n", 133, &s_menu_number,  }
, { "menu.entry", 133, &s_menu_entry,  }
, { "menu.active", 133, &s_menu_active,  }
, { "menu.sb", 133, &s_menu_sb,  }
,  };
  unsigned int n;
  BOOLEAN found = 0;
  char *buffer = 0;
  char *tmp = 0;
  char *element, *mono, *fg, *bg;
  if ( param != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
    {
      fprintf( TraceFP( ), "parse_style(%s)\n", param );
    }
    HTSACopy( &buffer, param );
    if ( buffer != 0 )
    {
      TrimLowercase( buffer );
      tmp = strchr( buffer, 58 );
      if ( tmp == 0 )
      {
        fprintf( *(int*)(135965404), gettext( "Syntax Error parsing style in lss file:\n[%s]\nThe line must be of the form:\nOBJECT:MONO:COLOR (ie em:bold:brightblue:white)\nwhere OBJECT is one of EM,STRONG,B,I,U,BLINK etc.\n\n" ), buffer );
        exit_immediately( 1 );
      }
      tmp[0] = 0;
      element = buffer;
      mono = &tmp[1];
      tmp = strchr( mono, 58 );
      if ( tmp == 0 )
      {
        fg = "nocolor";
        bg = "nocolor";
      }
      else
      {
        tmp[0] = 0;
        fg = &tmp[1];
        tmp = strchr( fg, 58 );
        if ( tmp == 0 )
          bg = "default";
        else
        {
          tmp[0] = 0;
          bg = &tmp[1];
        }
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
      {
        fprintf( TraceFP( ), "CSSPARSE:%s =&gt; %d %s\n", element, hash_code( element ), hashStyles[ TraceFP( ) ].name == 0 ? "" : "used" );
      }
      n = 0;
      for ( ; n <= 26; n++ )
      {
        if ( strcasecomp( element, table[ n ].name ) == 0 )
        {
          parse_attributes( mono, fg, bg, table[ n ].style, table[ n ].name );
          if ( table[ n ].set_hash != 0 )
          {
            table[ n ].set_hash[0] = hash_code( table[ n ].name );
          }
          found = 1;
          break;
        }
        else
        {
          //n++;
        }
      }
      if ( found != 0 )
      {
        if ( strcasecomp( element, "normal" ) == 0 )
        {
          parse_attributes( mono, fg, bg, 128, "html" );
          s_normal = hash_code( "html" );
          LYnormalColor( );
        }
      }
      else
      {
        int element_number = -1;
        HTTag *t = SGMLFindTag( &HTML_dtd, element );
        if ( t != 0 && t->name != 0 )
          element_number = ( ( t - tags[0].name ) >> 3 ) * -1227133513;
        if ( element_number >= 0 && element_number <= 117 )
        {
          parse_attributes( mono, fg, bg, element_number + 8, element );
        }
        parse_attributes( mono, fg, bg, 133, element );
      }
      if ( buffer != 0 )
      {
        free( buffer );
        buffer = 0;
        return;
      }
      else
      {
        return;
      }
    }
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
}
void style_deleteStyleList( void )
{
  LYFreeStringList( lss_styles );
  lss_styles = 0;
  return;
}
void free_colorstylestuff( void )
{
  style_initialiseHashTable( );
  style_deleteStyleList( );
  memset( our_pairs[0][0][0], 0, 578 );
  FreeCachedStyles( );
  return;
}
void initialise_default_stylesheet( void )
{
  static struct {
     int color;
     char *type;
  } table2[27] = { { 0, "normal",  }
, { 1, "a",  }
, { 2, "status",  }
, { 4, "b",  }
, { 4, "blink",  }
, { 4, "cite",  }
, { 4, "del",  }
, { 4, "em",  }
, { 4, "i",  }
, { 4, "ins",  }
, { 4, "strike",  }
, { 4, "strong",  }
, { 4, "u",  }
, { 6, "alink",  }
, { 7, "whereis",  }
, { 4, "span.htmlsrc_comment",  }
, { 4, "span.htmlsrc_tag",  }
, { 4, "span.htmlsrc_attrib",  }
, { 4, "span.htmlsrc_attrval",  }
, { 4, "span.htmlsrc_abracket",  }
, { 4, "span.htmlsrc_entity",  }
, { 4, "span.htmlsrc_href",  }
, { 4, "span.htmlsrc_entire",  }
, { 4, "span.htmlsrc_badseq",  }
, { 4, "span.htmlsrc_badtag",  }
, { 4, "span.htmlsrc_badattr",  }
, { 4, "span.htmlsrc_sgmlspecial",  }
,  };
  unsigned int n;
  char *normal = LYgetTableString( 0 );
  char *strong = LYgetTableString( 4 );
  if ( ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 ) || ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 ) )
  {
    fprintf( TraceFP( ), "initialise_default_stylesheet\n" );
  }
  n = 0;
  for ( ; n < 118; n++ )
  {
    char *name = 0;
    HTSprintf0( &name, "%s:%s", tags[ n ].name, normal );
    parse_style( name );
    if ( name != 0 )
    {
      free( name );
    }
    //n++;
  }
  n = 0;
  for ( ; n <= 26; n++ )
  {
    int code = table2[ n ].color;
    char *name = 0;
    char *value = 0;
    switch ( code )
    {
    default:
      value = LYgetTableString( code );
      break;
    case 0:
      value = normal;
      break;
    case 4:
      value = strong;
      break;
    }
    HTSprintf0( &name, "%s:%s", table2[ n ].type, value );
    parse_style( name );
    if ( name != 0 )
    {
      free( name );
      name = 0;
    }
    if ( value != normal && value != strong && value != 0 )
      free( value );
    //n++;
  }
  if ( normal != 0 )
  {
    free( normal );
    normal = 0;
  }
  if ( strong != 0 )
  {
    free( strong );
    strong = 0;
  }
  return;
}
void style_initialiseHashTable( void )
{
  static int firsttime = 1;
  int i = 0;
  for ( ; i <= 8192; i++ )
  {
    if ( firsttime != 0 )
      hashStyles[ i ].name = 0;
    else
    if ( hashStyles[ i ].name != 0 )
    {
      free( hashStyles[ i ].name );
      hashStyles[ i ].name = 0;
    }
    hashStyles[ i ].color = 0;
    hashStyles[ i ].cattr = 0;
    hashStyles[ i ].mono = 0;
    //i++;
  }
  if ( firsttime != 0 )
    firsttime = 0;
  s_alink = hash_code( "alink" );
  s_a = hash_code( "a" );
  s_status = hash_code( "status" );
  s_alert = hash_code( "alert" );
  s_title = hash_code( "title" );
  s_sb_bar = hash_code( "scroll.bar" );
  s_sb_bg = hash_code( "scroll.back" );
  s_sb_aa = hash_code( "scroll.arrow" );
  s_sb_naa = hash_code( "scroll.noarrow" );
  return;
}
void parse_userstyles( void )
{
  char *name;
  HTList *cur = lss_styles;
  colorPairs = 0;
  style_initialiseHashTable( );
  if ( cur == 0 || cur->next == 0 )
  {
    initialise_default_stylesheet( );
  }
  while ( 1 )
  {
    if ( cur != 0 )
    {
      cur = cur->next;
      name = cur == 0 ? 0 : (char*)cur->object;
      if ( name != 0 )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
        {
          fprintf( TraceFP( ), "LSS:%s\n", name == 0 ? "!?! empty !?!" : name );
        }
        if ( name != 0 )
        {
          parse_style( name );
        }
      }
      else
        break;
    }
    name = cur == 0 ? 0 : (char*)cur->object;
  }
  if ( s_prompt_edit == -1 )
    s_prompt_edit = s_normal;
  if ( s_prompt_edit_arr == -1 )
    s_prompt_edit_arr = s_prompt_edit;
  if ( s_prompt_edit_pad == -1 )
    s_prompt_edit_pad = s_prompt_edit;
  if ( s_prompt_sel == -1 )
    s_prompt_sel = s_prompt_edit;
  if ( s_aedit == -1 )
    s_aedit = s_alink;
  if ( s_aedit_arr == -1 )
    s_aedit_arr = s_aedit;
  if ( s_aedit_pad == -1 )
    s_aedit_pad = s_aedit;
  if ( s_curedit == -1 )
    s_curedit = s_aedit;
  if ( s_aedit_sel == -1 )
    s_aedit_sel = s_aedit;
  if ( s_menu_bg == -1 )
    s_menu_bg = s_normal;
  if ( s_menu_entry == -1 )
    s_menu_entry = s_menu_bg;
  if ( s_menu_frame == -1 )
    s_menu_frame = s_menu_bg;
  if ( s_menu_number == -1 )
    s_menu_number = s_menu_bg;
  if ( s_menu_active == -1 )
  {
    s_menu_active = s_alink;
  }
  return;
}
void HStyle_addStyle( char *buffer )
{
  char *name = 0;
  if ( ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 ) || ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 ) )
  {
    fprintf( TraceFP( ), "HStyle_addStyle(%s)\n", buffer );
  }
  HTSACopy( &name, buffer );
  TrimLowercase( name );
  if ( lss_styles == 0 )
  {
    lss_styles = HTList_new( );
  }
  if ( strncasecomp( name, "default:", 8 ) == 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
    {
      fprintf( TraceFP( ), "READCSS.default%s:%s\n", ( default_color_reset & 255 ) == 0 ? "" : ".ignore", name == 0 ? "!?! empty !?!" : name );
    }
    if ( ( default_color_reset & 255 ) == 0 )
    {
      parse_style( name );
    }
    return;
  }
  else
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
    {
      fprintf( TraceFP( ), "READCSS:%s\n", name == 0 ? "!?! empty !?!" : name );
    }
    HTList_addObject( lss_styles, (void*)name );
    return;
  }
}
int style_readFromFileREC( char *lss_filename, char *parent_filename )
{
  FILE *fh;
  char *buffer = 0;
  int len;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
  {
    fprintf( TraceFP( ), "CSS:Reading styles from file: %s\n", lss_filename == 0 ? "?!? empty ?!?" : lss_filename );
  }
  if ( lss_filename == 0 || ( lss_filename[0] & 255 ) == 0 )
  {
    return -1;
  }
  fh = LYOpenCFG( lss_filename, parent_filename, "/etc/lynx-cur/lynx.lss" );
  if ( fh == 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
    {
      fprintf( TraceFP( ), "CSS:Can't open style file '%s', using defaults\n", lss_filename );
    }
    return -1;
  }
  else
  {
    if ( parent_filename == 0 )
    {
      free_colorstylestuff( );
    }
    while ( LYSafeGets( &buffer, fh ) == 0 )
    {
      LYTrimTrailing( buffer );
      LYTrimTail( buffer );
      LYTrimHead( buffer );
      if ( strncasecomp( buffer, "include:", 8 ) == 0 )
      {
        style_readFromFileREC( LYSkipBlanks( &buffer[8] ), lss_filename );
      }
      if ( buffer[0] == '#' )
        continue;
      else
      {
        len = strlen( buffer );
        if ( len < 1 )
          continue;
        else
        {
          HStyle_addStyle( buffer );
        }
      }
    }
  }
}
int style_readFromFile( char *filename )
{
  return style_readFromFileREC( filename, 0 );
}
void TrimColorClass( char *tagname, char *styleclassname, int *phcode )
{
  char *end, *start = 0, *lookfrom;
  char tmp[64];
  sprintf( tmp, ";%.*s", 61, tagname );
  TrimLowercase( tmp );
  lookfrom = styleclassname;
  if ( lookfrom != 0 )
  {
    do
    {
      end = start;
      start = strstr( lookfrom, tmp );
      if ( start != 0 )
        lookfrom = &start[1];
    }
    while ( start == 0 );
    if ( end != 0 )
      end[0] = 0;
  }
  phcode[0] = hash_code( lookfrom == 0 || ( lookfrom[0] & 255 ) == 0 ? &tmp[1] : lookfrom );
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
void FastTrimColorClass( char *tag_name, int name_len, char *stylename, char **pstylename_end, int *phcode )
{
  char *tag_start = pstylename_end[0];
  BOOLEAN found = 0;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
  {
    fprintf( TraceFP( ), "STYLE.fast-trim: [%s] from [%s]: ", tag_name, stylename );
    while ( stylename <= tag_start )
    {
      for ( ; stylename <= tag_start && tag_start[0] != ';'; tag_start = &tag_start[ -1 ] )
      {
        //tag_start = &tag_start[ -1 ];
      }
      if ( strncasecomp( &tag_start[1], tag_name, name_len ) == 0 )
      {
        found = 1;
        break;
      }
      else
      {
        tag_start = &tag_start[ -1 ];
      }
    }
    if ( found != 0 )
    {
      tag_start[0] = 0;
      pstylename_end[0] = tag_start;
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
    {
      fprintf( TraceFP( ), found == 0 ? "failed.\n" : "success.\n" );
    }
    phcode[0] = hash_code( &tag_start[1] );
    return;
  }
}
void cache_tag_styles( void )
{
  char buf[200];
  int i = 0;
  for ( ; i <= 117; i++ )
  {
    LYstrncpy( buf, tags[ i ].name, 199 );
    LYLowerCase( buf );
    cached_tag_styles[ i ] = hash_code( buf );
    //i++;
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
unsigned int *RefCachedStyle( int y, int x )
{
  unsigned int *result = 0;
  if ( cached_styles_ptr == 0 )
  {
    cached_styles_rows = display_lines;
    cached_styles_cols = LYcols;
    cached_styles_ptr = calloc( cached_styles_rows * cached_styles_cols, sizeof( unsigned int ) );
  }
  if ( y >= 0 && x >= 0 && y < cached_styles_rows && x < cached_styles_cols )
  {
    result = &cached_styles_ptr[ x + ( y * cached_styles_cols ) ];
  }
  return result;
}
BOOLEAN ValidCachedStyle( int y, int x )
{
  return RefCachedStyle( y, x ) != 0;
}
unsigned int GetCachedStyle( int y, int x )
{
  unsigned int value = 0;
  unsigned int *cache = RefCachedStyle( y, x );
  if ( cache != 0 )
  {
    value = cache[0];
  }
  return value;
}
void SetCachedStyle( int y, int x, unsigned int value )
{
  unsigned int *cache = RefCachedStyle( y, x );
  if ( cache != 0 )
  {
    cache[0] = value;
  }
  return;
}
void ResetCachedStyles( void )
{
  if ( cached_styles_ptr != 0 )
  {
    memset( cached_styles_ptr, 0, ( cached_styles_rows * cached_styles_cols ) << 2 );
  }
  return;
}
void FreeCachedStyles( void )
{
  if ( cached_styles_ptr != 0 )
  {
    if ( cached_styles_ptr != 0 )
    {
      free( cached_styles_ptr );
      cached_styles_ptr = 0;
    }
    cached_styles_rows = 0;
    cached_styles_cols = 0;
  }
  return;
}
