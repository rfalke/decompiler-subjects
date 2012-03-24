#include "res_parse.c.h"
static Resource *parsed_res;
static Resource *current_res;
static char *res_filename;
static FILE *res_file;
static char **res_strings;
static int res_string_idx;
int res_lineno;
static yytype_uint8 yytranslate[260] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 7, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 5, 2, 6, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 3, 4 };
static char *yytname[16] = { "$end", "error", "$undefined", "STRING", "INCLUDE", "'{'", "'}'", "'='", "$accept", "top_res", "$@1", "res", "$@2", "res_item_zm", "res_item", 0 };
static yytype_uint8 yyr1[14] = { 0, 8, '\n', '\t', '', '', '\r', '\r', 14, 14, 14, 14, 14, 14 };
static yytype_uint8 yyr2[14] = { 0, 2, 0, 2, 0, 4, 2, 0, 1, 3, 1, 1, 3, 1 };
static yytype_uint8 yydefact[18] = { 2, 0, 0, 1, '\r', 8, '\n', '', 0, 3, 0, 4, 0, 6, '\t', '', 0, 5 };
static yytype_int8 yydefgoto[7] = { -1, 1, 2, 7, 8, '\t', '\n' };
static yytype_int8 yypact[18] = { -1, 2, 7, -1, -1, '\r', -1, -1, 4, -1, 0, '', '', -1, -1, -1, 16, -1 };
static yytype_int8 yypgoto[7] = { -1, -1, -1, 14, -1, '\t', -1 };
static yytype_int8 yytable[26] = { -7, 4, 3, 5, 6, -4, -7, -7, 4, '', 5, 6, -4, 4, 14, 5, 6, -4, -7, '\r', '', 16, 17, 0, 0, 15 };
static yytype_int8 yycheck[26] = { 0, 1, 0, 3, 4, 5, 6, 0, 1, 5, 3, 4, 5, 1, 3, 3, 4, 5, 6, '\n', 7, '', 6, -1, -1, '' };
int reschar;
YYSTYPE reslval;
int resnerrs;
int res_parse_getchars( char *buf, int max_size )
{
  int eax;
  if ( res_file )
  {
    int i;
    buf[0] = i/*.1_1of4*/;
  }
  if ( res_strings[0] )
  {
    buf[0] = res_strings[0];
    res_string_idx++;
    if ( res_strings[0] == 0 )
    {
      res_strings++;
      res_string_idx = 0;
      buf[0] = '\n';
      return 1;
    }
  }
  return eax;
}
Resource *resource_parse( char *filename, char **strings )
{
  int eax;
  res_lineno = 1;
  if ( filename )
  {
    res_filename = filename;
    res_file = (FILE*)fopen( filename, "r" );
    if ( res_file == 0 )
    {
      perror( filename );
      return 0;
    }
  }
  else
  if ( strings == 0 )
  {
    return 0;
  }
  res_filename = 0;
  res_strings = strings;
  res_string_idx = 0;
  if ( resparse( ) == 0 )
  {
    if ( filename )
      fclose( res_file );
    else
      res_strings = 0;
    return 0;
  }
  else
  {
    return 0;
  }
}
Resource *resource_create( Resource *parent )
{
  /* phantom */ Resource *rv;
  *(int*)malloc( 20 )/*.8*/ = 0;
  *(int*)malloc( 20 )/*.12*/ = 0;
  *(int*)(malloc( 20 )) = parent->Resource;
  *(int*)malloc( 20 )/*.16*/ = malloc( 12 );
  return (Resource*)malloc( 20 );
}
void resource_add_val( Resource *n, char *name, char *value, Resource *subres )
{
  n->v = realloc( &n->v, ( n->c + 1 ) * 12 );
  *(int*)(realloc( &n->v, ( n->c + 1 ) * 12 ) + ( *(int*)(n + 12) * 12 ) + 8) = subres->Resource;
  *(int*)(realloc( &n->v, ( n->c + 1 ) * 12 ) + ( *(int*)(n + 12) * 12 ) + 4) = value[0];
  n->c++;
  return;
}
char *resource_value( Resource *res, char *name )
{
  int eax;
  int ebx;
  int i;
  if ( name && res && res->c > 0 )
  {
    i = 0;
    do
    {
      if ( res->v->name[0] && res->v->value && res == 0 )
        break;
      i++;
      res->v->name[0] = res->v + 12;
    }
    while ( i + 1 < res->c );
  }
  return *(int*)(ebx + 4);
}
Resource *resource_subres( Resource *res, char *name )
{
  int eax;
  int ebx;
  int i;
  if ( name && res && res->c > 0 )
  {
    i = 0;
    do
    {
      if ( res->v->name[0] && res->v->subres && res == 0 )
        break;
      i++;
      res->v->name[0] = res->v + 12;
    }
    while ( i + 1 < res->c );
  }
  return *(int*)(ebx + 8);
}
int reserror( char *str )
{
  int edx;
  __fprintf_chk( stderr, ebp_36, ebp_36, ebp_32, ebp_32, 0 ? "internal strings" : res_filename, res_lineno, str );
  return 0;
}
void dump_res( Resource *n, int l )
{
  int ecx;
  int edx;
  int i;
  if ( n->c > 0 )
  {
    l += 3;
    i = 0;
    do
    {
      if ( n->v->subres )
      {
        __printf_chk( 1, "%*cn[%s] = {\n", l, 32, n == 0 ? (char*)n : "" );
        i++;
        dump_res( &n->v->subres, l + 3 );
        __printf_chk( 1, "%*c}\n", l, 32 );
      }
      else
      {
        __printf_chk( 1, "%*cn[%s] = v[%s]\n", l, 32, *(int*)(n->v + 0 + 12) == 0 ? &n->v[1].name : "", *(int*)(n->v + 0 + 12 + 4) == 0 ? &n->v[1].value : "" );
        i++;
        if ( n->c <= i )
          break;
      }
    }
    while ( i < n->c );
  }
  return;
}
void resource_dump( Resource *r )
{
  int eax;
}
unsigned int yytnamerr( char *yyres, char *yystr )
{
  int eax;
  int ebx;
  int edi;
  yyres[0] = yyres;
  if ( 1 )
  {
    yystr[0] = yystr;
  {
    while ( yyp[0] = yyp + 1, yyp[0] != '\'' )
    {
      if ( yyp[0] < '\'' )
      {
        if ( (unsigned char)( yyp[0] ) != ',' )
        {
          if ( yyp[0] == '\\' && yyp[0] != '\\' )
          {
            break;
          }
        }
        else
          break;
      }
      else
      if ( yyp[0] == '"' )
      {
        if ( yyres )
        {
          yyres = 0;
          break;
        }
        break;
      }
      if ( yyres )
        yyres = &yyp[0];
      yyn++;
    }
  }
  }
  if ( yyres )
  {
    return yyn + 1;
  }
  strlen( yystr );
  return yyn + 1;
}
unsigned int yysyntax_error( char *yyresult, int yystate, int reschar )
{
  int eax;
  int edx;
  /* phantom */ int yyn;
  if ( yypact[ yystate ] <= 25 )
  {
    static char yyexpecting[15] = { ',', ' ', 'e', 'x', 'p', 'e', 'c', 't', 'i', 'n', 'g', ' ', '%', 's' };
    static char yyor[7] = { ' ', 'o', 'r', ' ', '%', 's' };
    int yytype;
    unsigned int yysize0;
    unsigned int yysize;
    unsigned int yysize1;
    /* phantom */ int yysize_overflow;
    char *yyarg[5];
    int yyx;
    char *yyfmt;
    char *yyf;
    /* phantom */ char yyunexpected[28];
    char yyformat[60];
    char *yyprefix;
    /* phantom */ int yyxbegin;
    /* phantom */ int yychecklim;
    int yyxend;
    int yycount;
    if ( reschar <= 259 )
      yytype = yytranslate[ reschar ];
    yycount = 1;
    yyarg[0] = yytname[ yytype ];
    *(int*)&yyformat[0] = 0x746e7973;
    yysize0 = yytnamerr( 0, yytname[ yytranslate[ reschar ] ] );
    yyxend = 26 - yypact[ yystate ] > 8 ? 26 - yypact[ yystate ] : 8;
    yyx = 0;
    *(int*)&yyformat[4] = 0x65207861;
    *(int*)&yyformat[8] = 0x726f7272;
    *(int*)&yyformat[12] = 0x6e75202c;
    *(int*)&yyformat[16] = 0x65707865;
    *(int*)&yyformat[20] = 0x64657463;
    *(int*)&yyformat[24] = 0x732520;
    yyfmt = &yyformat[27];
    yysize1 = yysize0;
    yyprefix = yyexpecting;
    do
    {
      if ( yycheck[ yyx + yypact[ yystate ] ] == yyx && yyx != 1 )
      {
        if ( yycount == 5 )
        {
          yyformat[27] = 0;
          yysize1 = yysize0;
          break;
        }
        else
        {
          yyarg[ yycount ] = yytname[ yyx ];
          yycount++;
          yysize1 += yytnamerr( 0, yytname[ yyx ] );
          yyprefix = yyor;
          yyfmt = stpcpy( yyfmt, yyprefix );
        }
      }
      yyx++;
    }
    while ( yyx + 1 < ( 26 - yypact[ yystate ] > 8 ? 26 - yypact[ yystate ] : 8 ) );
    yyf[0] = yyformat[0];
    do
    {
      yyformat[0] = yyformat[4];
    }
    while ( ( ( yyformat[4] + 0xfefefeff ) & ~yyformat[4] & 0x80808080 ) == 0 );
    yysize1 += ( ( ( ( yyformat[4] + 0xfefefeff ) & ~yyformat[4] & 0x80808080 & 32896 ) == 0 ? yyformat[4] : yyformat[4] + 2 ) + -3 ) - ( 0 & 1 ) - yyf;
    if ( 0 | 0 )
      yysize = -1;
    else
    {
      if ( yyresult )
      {
      {
        char *yyp;
        int yyi;
        yyp[0] = yyformat[0];
        if ( yyp & 255 )
        {
          do
          {
            yyp[0] = yyf[1];
          }
          while ( yyp & 255 );
        }
      }
      }
      yysize = yysize1;
    }
  }
  yystate = 0;
  return 0 ^ 0;
}
int resparse( void )
{
  int eax;
  int ecx;
  int edx;
  int yystate;
  int yyerrstatus;
  yytype_int16 yyssa[200];
  yytype_int16 *yyss;
  yytype_int16 *yyssp;
  YYSTYPE yyvsa[200];
  YYSTYPE *yyvs;
  YYSTYPE *yyvsp = yyvsa;
  unsigned int yystacksize;
  int yyn;
  int yyresult;
  int yytoken;
  YYSTYPE yyval;
  char yymsgbuf[128];
  char *yymsg;
  unsigned int yymsg_alloc;
  int yylen;
  yyssp[0] = yyssa[0];
  yyss[0] = yyssa[0];
  yymsg = yymsgbuf;
  yyvs = yyvsa;
  resnerrs = 0;
  reschar = -2;
  yymsg_alloc = 128;
  yyerrstatus = 0;
  while ( yyssp[0] = yyn, yyssp < yyss )
  {
    if ( 0 == 3 )
      yyresult = 0;
      if ( yyssp != malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) )
        yyssp += ( ~( ( yyssp + -2 ) - malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) ) & -2 ) / 2;
        if ( yyssa[0] != yyssp )
        {
          *ebp_1448 = malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 );
          free( malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) );
        }
        if ( yymsgbuf[0] != yymsg )
          free( yymsg );
        yyvs = 0;
        return 0 ^ 0;
      else
        yyssp = yyss;
    else
    {
      yyn = yypact[ 0 ];
      if ( yypact[ 0 ] != -1 )
      {
        if ( reschar == -2 )
        {
          reschar = reslex( );
        }
        if ( reschar <= 0 )
        {
          reschar = 0;
          yytoken = 0;
        }
        else
        {
          yytoken = 2;
          if ( reschar <= 259 )
            yytoken = yytranslate[ reschar ];
        }
        yyn += yytoken;
        if ( yyn + yytoken <= 25 && yytoken == yycheck[ yyn ] )
        {
          yyn = yytable[ yyn ];
          if ( yytable[ yyn ] <= 0 )
          {
            if ( yyn != -8 && yyn )
              yyn = 0 - yyn;
              yylen = yyr2[ yyn ];
              yyval = yyvsp[ 1 - yyr2[ yyn ] ];
              switch ( yyn )
              {
              case 2:
                parsed_res = resource_create( 0 );
                current_res = resource_create( 0 );
                yyssp[0] = yyssp - ( yylen * 2 );
                yyvsp = ( yyvsp - ( yylen << 2 ) ) + 4;
                yystate = *(short*)(yyssp - ( yylen * 2 )) + yypgoto[ yyr1[ yystate ] + -8 ];
                if ( yyssp[0] + yypgoto[ yyr1[ yystate ] + -8 ] <= 25 && yyssp[0] == yycheck[ yystate ] )
                {
                  yyssp[0] = yyssp + 2;
                  yyvs = yyvsp->ival + ( &yyvs->ival & -4 );
                  yyss[0] = malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 );
                }
                else
                {
                }
                break;
              case 4:
                current_res = resource_create( current_res );
                break;
              case 5:
                yyval.ival/*union*/ = current_res;
                current_res = &current_res->parent;
                break;
              case 8:
                resource_add_val( current_res, 0, (char*)yyvsp, &yyval->ival/*union*/ );
                current_res->flags |= 1;
                break;
              case 9:
                resource_add_val( current_res, &yyvsp[ -8 ].ival, (char*)yyvsp, &yyval.ival/*union*/ );
                current_res->flags |= 2;
                break;
              case 10:
                break;
              case 11:
                break;
              case 12:
                resource_add_val( current_res, &yyvsp[ -8 ].ival, (char*)yyvsp, &yyval.ival/*union*/ );
                current_res->flags |= 8;
                break;
              case 0:
              case 1:
              case 3:
              case 6:
              case 7:
                break;
              }
              resource_add_val( current_res, 0, ebp_1440, &yyval.ival/*union*/ );
              current_res->flags |= 4;
            else
            {
              if ( yyerrstatus == 0 )
              {
                unsigned int yysize;
                resnerrs++;
                if ( yymsg_alloc < yysyntax_error( 0, yytable[ yytable[ yystate ] ], reschar ) && yymsg_alloc != -1 )
                {
                  unsigned int yyalloc = ( yysyntax_error( 0, yytable[ yytable[ yystate ] ], reschar ) * 2 ) < yysyntax_error( 0, yytable[ yytable[ yystate ] ], reschar ) ? yysyntax_error( 0, yytable[ yytable[ yystate ] ], reschar ) * 2 : -1;
                  if ( yymsgbuf[0] != yymsg )
                  {
                    free( yymsg );
                    yyalloc = yyalloc;
                    yysize = yysize;
                  }
                  yymsg_alloc = yyalloc;
                  yymsg = malloc( ( yyalloc ) * sizeof( char ) );
                  if ( yymsg == 0 )
                  {
                    yymsg_alloc = 128;
                    yymsg = yymsgbuf;
                  }
                }
                if ( yysize <= yymsg_alloc && ( ( yysize != 0 ) & 255 ) )
                {
                  yysyntax_error( yymsg, yytable[ yytable[ yystate ] ], reschar );
                  reserror( yymsg );
                  yyss = (yytype_int16*)malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 );
                  while ( yyn == -1 || yyn + 1 > 25 || yycheck[ yyn ] != 1 || yytable[ yyn ] <= 0 )
                  {
                    if ( yyssp == yyss )
                    {
                      yyssp = (yytype_int16*)malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 );
                      yyresult = 1;
                    }
                    else
                    {
                      yyssp[0] = yyssp + -2;
                      yyvsp = &yyvsp[ -4 ];
                      yyn = yypact[ *(short*)(yyssp + -2) ];
                    }
                  }
                  yyvsp = &yyvsp[1];
                  yyerrstatus = 3;
                  yyvsp[1] = reslval;
                }
                else
                {
                  reserror( "syntax error" );
                  if ( ( yysize != 0 ) == 0 )
                    goto B37;
                  else
                  {
                    yyresult = 2;
                    reserror( "memory exhausted" );
                  }
                }
              }
              else
              {
                if ( yyerrstatus == 3 )
                {
                  if ( reschar <= 0 )
                  {
                    if ( 1 )
                      yyresult = 1;
                  }
                  else
                  {
                    reschar = -2;
                    yyss = (yytype_int16*)malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 );
                  }
                }
              }
B37:;
              yyss = (yytype_int16*)malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 );
            }
          }
          else
          {
            yyerrstatus = yyerrstatus + -1 + ( ( yyerrstatus < 1 ) & 1 );
            yyvsp = &yyvsp[1];
            reschar = -2;
            yyvsp[1] = reslval;
          }
        }
      }
      yyn = yydefact[ yyn ];
      if ( yydefact[ yyn ] )
      {
        yylen = yyr2[ yyn ];
        yyval = yyvsp[ 1 - yyr2[ yyn ] ];
        switch ( yyn )
        {
        case 2:
          break;
        case 4:
          break;
        case 5:
          break;
        case 8:
          break;
        case 9:
          break;
        case 10:
          break;
        case 11:
          break;
        case 12:
          break;
        case 0:
        case 1:
        case 3:
        case 6:
        case 7:
          break;
        }
        resource_add_val( current_res, 0, ebp_1440, &yyval.ival/*union*/ );
        current_res->flags |= 4;
      }
      else
      {
      }
    }
  }
{
  unsigned int yysize;
  if ( 9999 >= 200 && malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) )
  {
    yysize = 1 + ( ( yysize - yyss ) >> 1 );
  {
    /* phantom */ unsigned int yynewbytes;
    memcpy( malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ), yyss, yysize * 2 );
  {
    /* phantom */ unsigned int yynewbytes;
    // memcpy( ebp_1448, yyvs, yysize << 2 );
    if ( yyssa[0] != yyss )
      free( yyss );
    yyssp[0] = malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) + ( ( yysize + -1 ) * 2 );
    if ( malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) + ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + -1 ) * 2 ) <= malloc( ( ( ( ( yystacksize * 2 ) <= 10000 ? 10000 : yystacksize * 2 ) + ( ( ( 200 * 2 ) <= 10000 ? 10000 : 200 * 2 ) * 2 ) ) * 2 ) + 3 ) + ( ( yyssp + -1 ) * 2 ) )
      yyresult = 1;
    else
      yyvsp = ebp_1376 + ( eax << 2 );
  }
  }
  }
  else
  {
    yyresult = 2;
    reserror( "memory exhausted" );
  }
}
}
#if 0
#endif
