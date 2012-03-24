#include "HTAAProt.c.h"
static HTList *prot_cache;
static HTAAProt *default_prot;
static HTAAProt *current_prot;
static HTList *known_grp;
static HTList *known_pwd;
static BOOLEAN uidgid_cache_inited;
BOOLEAN isNumber( char *s )
{
  char *cur = s;
  if ( s == 0 || s[0] == 0 )
  {
  }
  else
  if ( cur[0] == '-' )
  {
    cur++;
    while ( cur[0] )
    {
      if ( cur[0] <= '/' || '9' < cur[0] )
      {
        break;
      }
      else
      {
        cur++;
      }
    }
  }
  return 1;
}
int HTAA_getUid( void )
{
  int uid;
  if ( current_prot && current_prot->uid_name )
  {
    if ( isNumber( &current_prot->uid_name ) & 255 )
    {
      uid = atoi( &current_prot->uid_name );
      if ( *(char*)(HTAA_UidToName( uid )) )
      {
        return uid;
      }
    }
    else
    {
      uid = HTAA_NameToUid( &current_prot->uid_name );
      if ( uid != 65533 )
      {
        return uid;
      }
    }
  }
  uid = HTAA_NameToUid( "nobody" );
  if ( uid != 65533 )
  {
    return uid;
  }
  return 65534;
}
int HTAA_getGid( void )
{
  int gid;
  if ( current_prot && current_prot->gid_name )
  {
    if ( isNumber( &current_prot->gid_name ) & 255 )
    {
      gid = atoi( &current_prot->gid_name );
      if ( *(char*)(HTAA_GidToName( gid )) )
      {
        return gid;
      }
    }
    else
    {
      gid = HTAA_NameToGid( &current_prot->gid_name );
      if ( gid != 65533 )
      {
        return gid;
      }
    }
  }
  gid = HTAA_NameToGid( "nogroup" );
  if ( gid != 65533 )
  {
    return gid;
  }
  return 65534;
}
void HTAA_setIds( HTAAProt *prot, char *ids )
{
  if ( ids )
  {
    char *local_copy = 0;
    char *point;
    HTSACopy( &local_copy, ids );
    point = strchr( local_copy, '.' );
    if ( point )
    {
      point[0] = 0;
      point++;
      HTSACopy( &prot->gid_name, point );
    }
    else
      HTSACopy( &prot->gid_name, "nogroup" );
    HTSACopy( &prot->uid_name, local_copy );
    if ( local_copy == 0 )
    {
      return;
    }
    free( local_copy );
    local_copy = 0;
  }
  else
  {
    HTSACopy( &prot->uid_name, "nobody" );
    HTSACopy( &prot->gid_name, "nogroup" );
  }
  return;
}
void HTAA_parseProtFile( HTAAProt *prot, FILE *fp )
{
  if ( prot && fp )
  {
    LexItem lex_item;
    char *fieldname = 0;
    do
    {
      lex_item = lex( fp );
      if ( lex_item != LEX_EOF )
      {
        for ( ; lex_item == LEX_REC_SEP;  )
        {
          lex_item = lex( fp );
        }
        if ( lex_item == LEX_EOF )
          goto B7;
        else
        {
          if ( lex_item == LEX_ALPH_STR )
          {
            HTSACopy( &fieldname, HTlex_buffer );
            lex_item = lex( fp );
            if ( lex_item != LEX_FIELD_SEP )
              unlex( lex_item );
            if ( strncasecomp( fieldname, "Auth", 4 ) == 0 )
            {
              lex_item = lex( fp );
              do
              {
                if ( lex_item == LEX_ALPH_STR )
                {
                  HTAAScheme scheme = HTAAScheme_enum( HTlex_buffer );
                  if ( scheme )
                  {
                    if ( prot->valid_schemes == 0 )
                    {
                      prot->valid_schemes = HTList_new( );
                    }
                    HTList_addObject( &prot->valid_schemes, &scheme );
                    if ( WWW_TraceFlag )
                    {
                      fprintf( TraceFP( ), "%s %s `%s'\n", "HTAA_parseProtFile: valid", "authentication scheme:", HTAAScheme_name( scheme ) );
                    }
                  }
                  else
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "%s %s `%s'\n", "HTAA_parseProtFile: unknown", "authentication scheme:", HTlex_buffer );
                  }
                  lex( fp );
                  while ( lex_item = lex( fp ), lex_item == LEX_ITEM_SEP )
                  {
                    lex( fp );
                  }
                }
              }
              while ( lex_item != LEX_REC_SEP );
            }
            else
            {
              if ( strncasecomp( fieldname, "mask", 4 ) == 0 )
              {
                prot->mask_group = HTAA_parseGroupDef( fp );
                lex_item = LEX_REC_SEP;
                if ( WWW_TraceFlag )
                {
                  if ( prot->mask_group )
                  {
                    fwrite( "HTAA_parseProtFile: Mask group:\n", 1, 32, TraceFP( ) );
                    HTAA_printGroupDef( &prot->mask_group );
                  }
                  else
                  {
                    fwrite( "HTAA_parseProtFile: Mask group syntax error\n", 1, 44, TraceFP( ) );
                  }
                }
              }
              else
              {
                lex_item = lex( fp );
                if ( lex_item == LEX_ALPH_STR )
                {
                  if ( prot->values == 0 )
                  {
                    prot->values = HTAssocList_new( );
                  }
                  HTAssocList_add( &prot->values, fieldname, HTlex_buffer );
                  lex_item = lex( fp );
                  if ( WWW_TraceFlag )
                  {
                    fprintf( TraceFP( ), "%s `%s' bound to value `%s'\n", "HTAA_parseProtFile: Name", fieldname, HTlex_buffer );
                  }
                }
              }
            }
          }
          if ( lex_item != LEX_EOF && lex_item != LEX_REC_SEP )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "%s %s %d (that line ignored)\n", "HTAA_parseProtFile: Syntax error", "in protection setup file at line", HTlex_line );
            }
            do
            {
              lex_item = lex( fp );
            }
            while ( lex_item != LEX_EOF && lex_item != LEX_REC_SEP );
          }
        }
      }
B7:;
      if ( fieldname == 0 )
        break;
      free( fieldname );
      break;
    }
    while ( lex_item != LEX_REC_SEP );
  }
  return;
}
HTAAProt *HTAAProt_new( char *cur_docname, char *prot_filename, char *ids )
{
  int eax;
  HTList *cur = prot_cache;
  HTAAProtCache *cache_item = 0;
  HTAAProt *prot;
  FILE *fp;
  if ( prot_cache == 0 )
  {
    prot_cache = HTList_new( );
    do
    {
      if ( cur )
      {
        cur = &cur->next;
        cache_item = 0;
      }
    }
    while ( cache_item && strcmp( &cache_item->prot_filename[0], prot_filename ) );
    if ( cache_item )
    {
      prot = &cache_item->prot;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "%s `%s' already in cache\n", "HTAAProt_new: Protection file", prot_filename );
      }
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAAProt_new: Loading protection file `%s'\n", prot_filename );
      }
      prot = calloc( 1, sizeof( HTAAProt ) );
      if ( prot == 0 )
        outofmem( "../../../WWW/Library/Implementation/HTAAProt.c", "HTAAProt_new" );
      *(int*)&prot->ctemplate[0] = 0;
      *(int*)&prot->filename = 0;
      *(int*)&prot->uid_name = 0;
      *(int*)&prot->gid_name = 0;
      prot->valid_schemes = HTList_new( );
      *(int*)&prot->mask_group = 0;
      prot->values = HTAssocList_new( );
      if ( prot_filename )
      {
        fp = fopen64( prot_filename, "r" );
        if ( fp )
        {
          HTAA_parseProtFile( prot, fp );
          fclose( fp );
          cache_item = calloc( 1, sizeof( HTAAProtCache ) );
          if ( cache_item == 0 )
            outofmem( "../../../WWW/Library/Implementation/HTAAProt.c", "HTAAProt_new" );
          cache_item->prot = prot;
          *(int*)&cache_item->prot_filename[0] = 0;
          HTSACopy( &cache_item->prot_filename, prot_filename );
          HTList_addObject( prot_cache, (void*)cache_item );
        }
      }
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTAAProt_new: %s `%s'\n", "Unable to open protection setup file", "(null)" );
      }
    }
    if ( cur_docname )
      HTSACopy( &prot->filename, cur_docname );
    HTAA_setIds( prot, ids );
    return prot;
  }
}
void HTAA_setDefaultProtection( char *cur_docname, char *prot_filename, char *ids )
{
  default_prot = 0;
  if ( prot_filename )
  {
    default_prot = HTAAProt_new( cur_docname, prot_filename, ids );
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "%s %s\n", "HTAA_setDefaultProtection: ERROR: Protection file", "not specified (obligatory for DefProt rule)!!\n" );
  }
  return;
}
void HTAA_setCurrentProtection( char *cur_docname, char *prot_filename, char *ids )
{
  current_prot = 0;
  if ( prot_filename )
  {
    current_prot = HTAAProt_new( cur_docname, prot_filename, ids );
  }
  else
  if ( default_prot )
  {
    current_prot = default_prot;
    HTAA_setIds( current_prot, ids );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "%s %s %s\n", "HTAA_setCurrentProtection: Protection file", "not specified for Protect rule", "-- using default protection" );
    }
  }
  else
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "%s %s %s\n", "HTAA_setCurrentProtection: ERROR: Protection", "file not specified for Protect rule, and", "default protection is not set!!" );
  }
  return;
}
HTAAProt *HTAA_getCurrentProtection( void )
{
  return current_prot;
}
HTAAProt *HTAA_getDefaultProtection( void )
{
  if ( current_prot == 0 )
  {
    current_prot = default_prot;
    default_prot = 0;
  }
  return current_prot;
}
void HTAA_clearProtections( void )
{
  current_prot = 0;
  default_prot = 0;
  return;
}
void save_gid_info( char *name, int user )
{
  USER_DATA *data = calloc( 1, sizeof( USER_DATA ) );
  if ( data )
  {
    if ( known_grp == 0 )
    {
      known_grp = HTList_new( );
      if ( uidgid_cache_inited == 0 )
        uidgid_cache_inited = 1;
    }
    HTSACopy( &data->name, name );
    data->user = user;
    HTList_addObject( known_grp, (void*)data );
  }
  return;
}
void save_uid_info( char *name, int user )
{
  USER_DATA *data = calloc( 1, sizeof( USER_DATA ) );
  if ( data )
  {
    if ( known_pwd == 0 )
    {
      known_pwd = HTList_new( );
      if ( uidgid_cache_inited == 0 )
        uidgid_cache_inited = 1;
    }
    HTSACopy( &data->name, name );
    data->user = user;
    HTList_addObject( known_pwd, (void*)data );
  }
  return;
}
char *HTAA_UidToName( int uid )
{
  int eax;
  struct passwd *pw;
  HTList *me = known_pwd;
  do
  {
    if ( me )
    {
      me = &me->next;
      if ( me && me->object[0] )
      {
        USER_DATA *data = &me->object[0];
      }
    }
    pw = (struct passwd*)getpwuid( uid );
    if ( pw == 0 || pw->pw_name[0] == 0 )
    {
      return "";
    }
    if ( WWW_TraceFlag == 0 )
    {
      save_uid_info( &pw->pw_name[0], pw->pw_uid );
      return &pw->pw_name[0];
    }
    fprintf( TraceFP( ), "%s(%d) returned (%s:%d:...)\n", "HTAA_UidToName: getpwuid", uid, &pw->pw_name[0], pw->pw_uid );
    save_uid_info( &pw->pw_name[0], pw->pw_uid );
    return &pw->pw_name[0];
  }
  while ( data->user != uid );
  return &data->name[0];
}
int HTAA_NameToUid( char *name )
{
  int eax;
  struct passwd *pw;
  HTList *me = known_pwd;
  do
  {
    if ( me )
    {
      me = &me->next;
      if ( me && me->object[0] )
      {
        USER_DATA *data = &me->object[0];
      }
    }
    pw = (struct passwd*)getpwnam( name );
    if ( pw == 0 )
    {
      return 65533;
    }
    if ( WWW_TraceFlag == 0 )
    {
      save_uid_info( &pw->pw_name[0], pw->pw_uid );
      return pw->pw_uid;
    }
    fprintf( TraceFP( ), "%s(%s) returned (%s:%d:...)\n", "HTAA_NameToUid: getpwnam", name, &pw->pw_name[0], pw->pw_uid );
    save_uid_info( &pw->pw_name[0], pw->pw_uid );
    return pw->pw_uid;
  }
  while ( strcmp( name, &data->name[0] ) );
  return data->user;
}
char *HTAA_GidToName( int gid )
{
  int eax;
  struct group *gr;
  HTList *me = known_grp;
  do
  {
    if ( me )
    {
      me = &me->next;
      if ( me && me->object[0] )
      {
        USER_DATA *data = &me->object[0];
      }
    }
    gr = (struct group*)getgrgid( gid );
    if ( gr == 0 || gr->gr_name[0] == 0 )
    {
      return "";
    }
    if ( WWW_TraceFlag == 0 )
    {
      save_gid_info( &gr->gr_name[0], gr->gr_gid );
      return &gr->gr_name[0];
    }
    fprintf( TraceFP( ), "%s(%d) returned (%s:%d:...)\n", "HTAA_GidToName: getgrgid", gid, &gr->gr_name[0], gr->gr_gid );
    save_gid_info( &gr->gr_name[0], gr->gr_gid );
    return &gr->gr_name[0];
  }
  while ( data->user != gid );
  return &data->name[0];
}
int HTAA_NameToGid( char *name )
{
  int eax;
  struct group *gr;
  HTList *me = known_grp;
  do
  {
    if ( me )
    {
      me = &me->next;
      if ( me && me->object[0] )
      {
        USER_DATA *data = &me->object[0];
      }
    }
    gr = (struct group*)getgrnam( name );
    if ( gr == 0 )
    {
      return 65533;
    }
    if ( WWW_TraceFlag == 0 )
    {
      save_gid_info( &gr->gr_name[0], gr->gr_gid );
      return gr->gr_gid;
    }
    fprintf( TraceFP( ), "%s(%s) returned (%s:%d:...)\n", "HTAA_NameToGid: getgrnam", name, &gr->gr_name[0], gr->gr_gid );
    save_gid_info( &gr->gr_name[0], gr->gr_gid );
    return gr->gr_gid;
  }
  while ( strcmp( name, &data->name[0] ) );
  return data->user;
}
#if 0
#endif
