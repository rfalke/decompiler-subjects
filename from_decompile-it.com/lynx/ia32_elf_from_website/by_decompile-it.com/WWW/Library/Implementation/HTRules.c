#include "HTRules.c.h"
char *HTBinDir;
char *HTSearchScript;
static rule *rules;
static rule *rule_tail;
int HTAddRule( HTRuleOp op, char *pattern, char *equiv, char *cond_op, char *cond )
{
  rule *temp;
  char *pPattern = 0;
  temp = calloc( 1, sizeof( rule ) );
  if ( temp == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTRules.c", "HTAddRule" );
  if ( equiv )
  {
    char *pEquiv = 0;
    HTSACopy( &pEquiv, equiv );
    temp->equiv = pEquiv;
  }
  else
    temp->equiv = 0;
  if ( cond_op )
  {
    HTSACopy( &temp->condition_op, cond_op );
    HTSACopy( &temp->condition, cond );
  }
  HTSACopy( &pPattern, pattern );
  temp->pattern = pPattern;
  temp->op = op;
  if ( equiv )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "Rule: For `%s' op %d `%s'", pattern, op, equiv );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "Rule: For `%s' op %d", pattern, op );
  }
  if ( cond_op )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "\t%s %s\n", cond_op, "(null)" );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "\n" );
  }
  temp->next = 0;
  if ( rule_tail )
  {
    rule_tail->next = temp;
  }
  rules = temp;
  rule_tail = temp;
  return 0;
}
void HTClearRules( void )
{
  while ( rules )
  {
    rule *temp = rules;
    rules = &temp->next;
    if ( temp->pattern )
    {
      free( &temp->pattern );
      temp->pattern = 0;
    }
    if ( temp->equiv )
    {
      free( &temp->equiv );
      temp->equiv = 0;
    }
    if ( temp->condition_op )
    {
      free( &temp->condition_op );
      temp->condition_op = 0;
    }
    if ( temp->condition )
    {
      free( &temp->condition );
      temp->condition = 0;
    }
    if ( temp )
    {
      free( temp );
      temp = 0;
    }
  }
  rule_tail = 0;
  return;
}
BOOLEAN rule_cond_ok( rule *r )
{
  int eax;
  BOOLEAN result;
  if ( r->condition_op == 0 )
  {
  }
  if ( strcmp( &r->condition_op, "if" ) && strcmp( &r->condition_op, "unless" ) )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "....... rule ignored, unrecognized `%s'!\n", &r->condition_op );
    }
  }
  else
  {
    if ( strcmp( &r->condition, "redirected" ) == 0 )
      result = redirection_attempts > 0;
    else
    {
      if ( strcmp( &r->condition, "userspec" ) == 0 )
        result = LYUserSpecifiedURL;
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "....... rule ignored, unrecognized `%s %s'!\n", &r->condition_op, "(null)" );
        }
      }
    }
    if ( strcmp( &r->condition_op, "if" ) == 0 )
    {
    }
  }
  return ( result == 0 );
}
char *HTTranslate( char *required )
{
  rule *r;
  char *current = 0;
  char *msgtmp = 0;
  char *pMsg;
  int proxy_none_flag = 0;
  int permitredir_flag = 0;
  HTSACopy( &current, required );
  HTAA_clearProtections( );
  r = rules;
  for ( ; r;  )
  {
    char *p = &r->pattern;
    int m = 0;
    char *q = current;
    for ( ; p[0] && q[0] && q[0] == p[0]; q++ )
    {
      p++;
      // q++;
    }
    if ( p[0] == '*' )
    {
      m = strlen( q ) - strlen( &p[1] );
      if ( m >= 0 && strcmp( &q[ m ], &p[1] ) == 0 )
        goto B15;
      else
      {
        r = &r->next;
      }
    }
    else
    if ( q == p )
      goto B15;
B15:;
    if ( rule_cond_ok( r ) & 255 )
    {
      switch ( r->op )
      {
      default:
        break;
      case 4:
      case 5:
      {
        char *local_copy = 0;
        char *p2;
        char *eff_ids = 0;
        char *prot_file = 0;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTRule: `%s' matched %s %s: `%s'\n", current, r->op == 5 ? "Protect" : "DefProt", "rule, setup", ebp_112 );
        }
        if ( r->equiv )
        {
          HTSACopy( &local_copy, &r->equiv );
          p2 = local_copy;
          prot_file = HTNextField( &p2 );
          eff_ids = HTNextField( &p2 );
        }
        if ( r->op == 5 )
          HTAA_setCurrentProtection( current, prot_file, eff_ids );
        else
          HTAA_setDefaultProtection( current, prot_file, eff_ids );
        if ( local_copy )
        {
          free( local_copy );
          local_copy = 0;
        }
      }
        break;
      case 8:
        LYFixCursesOn( "show rule message:" );
        HTUserMsg2( "Rule: %s", current );
        break;
      case 6:
      case 7:
      case 9:
        LYFixCursesOn( "show rule message:" );
      case 10:
        pMsg = ebp_92;
        if ( strchr( pMsg, '%' ) )
        {
          HTSprintf0( &msgtmp, pMsg, current );
          pMsg = msgtmp;
        }
        switch ( r->op )
        {
        case 7:
          HTInfoMsg( pMsg );
          if ( msgtmp )
          {
            free( msgtmp );
            msgtmp = 0;
          }
          break;
        case 6:
          HTProgress( pMsg );
          break;
        case 9:
          HTAlert( pMsg );
          break;
        case 10:
          HTAlwaysAlert( "Rule alert:", pMsg );
          break;
        default:
          break;
        }
        break;
      case 13:
        permitredir_flag = 1;
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTRule: Mark for redirection permitted\n" );
        }
        break;
      case 2:
        if ( r->equiv == 0 )
        {
          if ( proxy_none_flag )
          {
            char *temp = 0;
            HTSACopy( &temp, "NoProxy=" );
            HTSACat( &temp, current );
            if ( current )
            {
              free( current );
              current = 0;
            }
            current = temp;
          }
          if ( WWW_TraceFlag == 0 )
          {
            return current;
          }
          fprintf( TraceFP( ), "HTRule: Pass `%s'\n", current );
          return current;
        }
        else
      case 1:
      case 11:
      case 12:
        if ( q[0] == p[0] )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "For `%s' using `%s'\n", current, &r->equiv );
          }
          HTSACopy( &current, &r->equiv );
        }
        else
        {
          char *ins = strchr( &r->equiv, '*' );
          if ( ins )
          {
            char *temp = 0;
            HTSprintf0( &temp, "%.*s%.*s%s", ins - r->equiv, r->equiv, m, q, ins[1] );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "For `%s' using `%s'\n", current, temp );
            }
            if ( current )
            {
              free( current );
              current = 0;
            }
            current = temp;
          }
          else
          {
            char *temp = 0;
            HTSACopy( &temp, &r->equiv );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "For `%s' using `%s'\n", current, temp );
            }
            if ( current )
            {
              free( current );
              current = 0;
            }
            current = temp;
          }
        }
        if ( r->op == 2 )
        {
          if ( proxy_none_flag )
          {
            char *temp = 0;
            HTSACopy( &temp, "NoProxy=" );
            HTSACat( &temp, current );
            if ( current )
            {
              free( current );
              current = 0;
            }
            current = temp;
          }
          if ( WWW_TraceFlag == 0 )
          {
            return current;
          }
          fprintf( TraceFP( ), "HTRule: ...and pass `%s'\n", current );
          return current;
        }
        else
        {
          if ( r->op == 11 )
          {
            if ( WWW_TraceFlag == 0 )
            {
              redirecting_url = current;
              HTPermitRedir = permitredir_flag == 1;
              return 0;
            }
            fprintf( TraceFP( ), "HTRule: ...and redirect to `%s'\n", current );
            redirecting_url = current;
            HTPermitRedir = permitredir_flag == 1;
            return 0;
          }
          else
          {
            if ( r->op == 12 )
            {
              if ( WWW_TraceFlag == 0 )
              {
                redirecting_url = current;
                permanent_redirection = 1;
                HTPermitRedir = permitredir_flag == 1;
                return 0;
              }
              fprintf( TraceFP( ), "HTRule: ...and redirect like 301 to `%s'\n", current );
              redirecting_url = current;
              permanent_redirection = 1;
              HTPermitRedir = permitredir_flag == 1;
              return 0;
            }
          }
        }
        break;
      case 14:
        if ( r->equiv && strcasecomp( &r->equiv, "none" ) == 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "For `%s' will not use proxy\n", current );
          }
          proxy_none_flag = 1;
        }
        else
        {
          if ( proxy_none_flag )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "For `%s' proxy server ignored: %s\n", current, "(null)" );
            }
          }
          else
          {
            char *temp = 0;
            HTSACopy( &temp, "Proxied=" );
            HTSACat( &temp, &r->equiv );
            HTSACat( &temp, current );
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTRule: proxy server found: %s\n", "(null)" );
            }
            if ( current == 0 )
            {
              return temp;
            }
            free( current );
            current = 0;
            return temp;
          }
        }
        break;
      case 0:
      case 3:
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTRule: *** FAIL `%s'\n", current );
        }
        if ( current == 0 )
        {
          return 0;
        }
        free( current );
        current = 0;
        return 0;
        break;
      }
    }
  }
  if ( proxy_none_flag == 0 )
  {
    return current;
  }
{
  char *temp = 0;
  HTSACopy( &temp, "NoProxy=" );
  HTSACat( &temp, current );
  if ( current )
  {
    free( current );
    current = 0;
  }
  return temp;
}
}
int HTSetConfiguration( char *config )
{
  int edx;
  HTRuleOp op;
  char *line = 0;
  char *pointer = line;
  char *word1;
  char *word2;
  char *word3;
  char *cond_op = 0;
  char *cond = 0;
  float quality, secs, secs_per_byte;
  off_t maxbytes;
  int status;
  HTSACopy( &line, config );
{
  char *p = strchr( line, '#' );
  if ( p )
    *ebp_60 = 0;
  pointer = line;
  word1 = HTNextField( &pointer );
  if ( word1 == 0 )
  {
    if ( line )
    {
      free( line );
      line = 0;
    }
    return 0;
  }
  else
  {
    word2 = HTNextField( &pointer );
    if ( strcasecomp( word1, "defprot" ) == 0 || strcasecomp( word1, "protect" ) == 0 )
      word3 = pointer;
    else
    {
      word3 = HTNextField( &pointer );
    }
    if ( word2 == 0 )
    {
      fprintf( stderr, "HTRule: %s %s\n", gettext( "Insufficient operands:" ), line );
      if ( line )
      {
        free( line );
        line = 0;
      }
      return -2;
    }
    else
    {
      if ( strcasecomp( word1, "suffix" ) == 0 )
      {
        char *encoding = HTNextField( &pointer );
        if ( pointer )
        {
          status = sscanf( pointer, "%f", &quality );
        }
        else
          status = 0;
        HTSetSuffix5( word2, word3, "binary", 0, 1.000000000000 );
      }
      else
      {
        if ( strcasecomp( word1, "presentation" ) == 0 )
        {
          if ( pointer )
          {
            status = sscanf( pointer, "%f%f%f%lld", &quality, &secs, &secs_per_byte, &maxbytes );
          }
          else
            status = 0;
          HTSetPresentation( word2, word3, 0, 1.000000000000, 0.000000000000, 0.000000000000, 0, 4 );
        }
        else
        {
          if ( strncasecomp( word1, "htbin", 5 ) == 0 || strncasecomp( word1, "bindir", 6 ) == 0 )
            HTSACopy( &HTBinDir, word2 );
          else
          {
            if ( strncasecomp( word1, "search", 6 ) == 0 )
              HTSACopy( &HTSearchScript, word2 );
            else
            {
              if ( strcasecomp( word1, "map" ) )
              {
                if ( strcasecomp( word1, "pass" ) )
                {
                  if ( strcasecomp( word1, "fail" ) )
                  {
                    if ( strcasecomp( word1, "redirect" ) )
                    {
                      if ( strncasecomp( word1, "redirectperm", 12 ) )
                      {
                        if ( strcasecomp( word1, "redirecttemp" ) )
                        {
                          if ( strcasecomp( word1, "permitredirection" ) )
                          {
                            if ( strcasecomp( word1, "useproxy" ) )
                            {
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                          }
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
                else
                {
                }
              }
              else
              {
              }
              op = HT_Map;
              if ( op == HT_Invalid )
              {
                fprintf( stderr, "HTRule: %s '%s'\n", gettext( "Bad rule" ), config );
              }
              else
              {
                switch ( op )
                {
                case HT_Fail:
                case HT_PermitRedir:
                  cond_op = word3;
                  if ( cond_op && cond_op[0] )
                  {
                    word3 = 0;
                    cond = HTNextField( &pointer );
                    if ( cond_op && cond && cond[0] && strcasecomp( cond_op, "unless" ) == 0 )
                      cond_op = "unless";
                    else
                    if ( cond_op && cond && cond[0] && strcasecomp( cond_op, "if" ) == 0 )
                      cond_op = "if";
                    else
                    if ( cond_op || cond )
                    {
                      fprintf( stderr, "HTRule: %s '%s'\n", gettext( "Bad rule" ), config );
                      if ( line )
                      {
                        free( line );
                        line = 0;
                      }
                      return -2;
                    }
                    if ( cond && strncasecomp( cond, "redirected", strlen( cond ) ) == 0 )
                      cond = "redirected";
                    else
                    if ( cond && strlen( cond ) > 7 && strncasecomp( cond, "userspecified", strlen( cond ) ) == 0 )
                      cond = "userspec";
                    HTAddRule( op, word2, word3, cond_op, cond );
                  }
                  break;
                case HT_Pass:
                  if ( word3 && ( strcasecomp( word3, "if" ) == 0 || strcasecomp( word3, "unless" ) == 0 ) )
                  {
                    cond_op = word3;
                    word3 = 0;
                    cond = HTNextField( &pointer );
                  }
                  else
                case HT_Map:
                case HT_Redirect:
                case HT_RedirectPerm:
                case HT_UseProxy:
                  cond_op = HTNextField( &pointer );
                  if ( op == HT_Redirect && !strcasecomp( word1, "redirect" ) && cond_op && strcasecomp( cond_op, "if" ) && strcasecomp( cond_op, "unless" ) )
                  {
                    if ( strcmp( word2, "301" ) == 0 || strcasecomp( word2, "permanent" ) == 0 )
                      op = HT_RedirectPerm;
                    else
                    {
                      if ( strcmp( word2, "302" ) && strcmp( word2, "303" ) && strcasecomp( word2, "temp" ) && strcasecomp( word2, "seeother" ) && WWW_TraceFlag )
                      {
                        fprintf( TraceFP( ), "Rule: Ignoring `%s' in Redirect\n", word2 );
                      }
                    }
                    word2 = word3;
                    word3 = cond_op;
                    cond_op = HTNextField( &pointer );
                  }
                  if ( cond_op && cond_op[0] )
                  {
                    cond = HTNextField( &pointer );
                  }
                  break;
                case HT_Progress:
                case HT_InfoMsg:
                case HT_UserMsg:
                case HT_Alert:
                case HT_AlwaysAlert:
                  cond_op = HTNextField( &pointer );
                  if ( cond_op && cond_op[0] )
                  {
                    cond = HTNextField( &pointer );
                  }
                  if ( word3 )
                  {
                    char *cp = word3;
                    char *cp1, *cp2;
                    while ( cp1 == 0 )
                    {
                      if ( cp1[1] == 0 )
                      {
                        cp1[0] = 0;
                      }
                      else
                      {
                        if ( cp1[1] == '%' )
                        {
                          cp = &cp1[2];
                        }
                        else
                        {
                          while ( cp2 == 0 )
                          {
                            if ( cp2[1] == 0 )
                            {
                              cp2[0] = 0;
                            }
                            else
                            {
                              if ( cp2[1] == '%' )
                              {
                                cp1 = cp2;
                              }
                              else
                              {
                                cp2[0] = '?';
                                cp1 = cp2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  break;
                case HT_Invalid:
                case HT_DefProt:
                case HT_Protect:
                  break;
                }
              }
            }
          }
        }
      }
      if ( line )
      {
        free( line );
        line = 0;
      }
      return 0;
    }
  }
}
}
int HTLoadRules( char *filename )
{
  int eax;
  FILE *fp = fopen64( filename, "r" );
  char line[257];
  if ( fp == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTRules: Can't open rules file %s\n", filename );
    }
    return -1;
  }
  else
  {
    while ( fgets( line, 257, fp ) == 0 )
    {
      HTSetConfiguration( line );
    }
    fclose( fp );
    return 0;
  }
}
#if 0
#endif
