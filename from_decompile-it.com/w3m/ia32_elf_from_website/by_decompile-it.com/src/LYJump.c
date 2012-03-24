#include "LYJump.c.h"
static unsigned int LYRead_Jumpfile( struct JumpTable *jtp );
static int LYCompare( void *e1, void *e2 );
struct JumpTable *JThead;
void LYJumpTable_free( void )
{
  struct JumpTable *cur = JThead;
  struct JumpTable *next;
  for ( ; cur != 0; cur = next )
  {
    next = cur->next;
    if ( cur->msg != 0 )
    {
      free( cur->msg );
      cur->msg = 0;
    }
    if ( cur->file != 0 )
    {
      free( cur->file );
      cur->file = 0;
    }
    if ( cur->shortcut != 0 )
    {
      free( cur->shortcut );
      cur->shortcut = 0;
    }
    if ( cur->history != 0 )
    {
      LYFreeStringList( cur->history );
      cur->history = 0;
    }
    if ( cur->table != 0 )
    {
      free( cur->table );
      cur->table = 0;
    }
    if ( cur->mp != 0 )
    {
      free( cur->mp );
      cur->mp = 0;
    }
    if ( cur != 0 )
    {
      free( cur );
      cur = 0;
    }
    //cur = next;
  }
  JThead = 0;
  return;
}
void LYAddJumpShortcut( HTList *historyp, char *shortcut )
{
  char *tmp = 0;
  char *old;
  HTList *cur = historyp;
  if ( historyp != 0 )
  {
    if ( shortcut != 0 )
    {
      if ( ( shortcut[0] & 255 ) != 0 )
      {
        HTSACopy( &tmp, shortcut );
      }
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
BOOLEAN LYJumpInit( char *config )
{
  struct JumpTable *jtp = calloc( 1, sizeof( struct JumpTable ) );
  char *cp;
  if ( jtp == 0 )
    outofmem( "./LYJump.c", "LYJumpInit" );
  cp = strtok( config, ":\n" );
  if ( cp == 0 )
  {
    if ( jtp != 0 )
    {
      free( jtp );
      jtp = 0;
    }
  }
  else
  {
    cp = strtok( 0, ":\n" );
    if ( cp == 0 )
    {
      if ( jtp != 0 )
      {
        free( jtp );
        jtp = 0;
      }
    }
    else
    {
      HTSACopy( &jtp->file, cp );
      cp = strtok( 0, ":\n" );
      if ( cp == 0 && JThead != 0 )
      {
        struct JumpTable *jtptmp = JThead;
        jumpfile = jtp->file;
        if ( jtp != 0 )
        {
          free( jtp );
          jtp = 0;
        }
        while ( jtptmp != 0 && jtptmp->key != 0 )
        {
          jtptmp = jtptmp->next;
        }
        if ( jtptmp == 0 )
        {
        }
        else
        {
          HTSACopy( &jtptmp->file, jumpfile );
          HTSACopy( &jtptmp->msg, jumpprompt );
        }
      }
      else
      {
        if ( cp != 0 && JThead == 0 )
        {
          JThead = jtp;
          HTSACopy( &JThead->msg, jumpprompt );
          if ( jumpfile == 0 )
            HTSACopy( &jumpfile, JThead->file );
          jtp = calloc( 1, sizeof( struct JumpTable ) );
          if ( jtp == 0 )
            outofmem( "./LYJump.c", "LYJumpInit" );
          HTSACopy( &jtp->file, JThead->file );
        }
        if ( cp != 0 )
        {
          jtp->key = remap( cp, "JUMP", 0 );
          cp = strtok( 0, "\n" );
          if ( cp != 0 && ( cp[0] & 255 ) != 0 )
          {
            HTSACopy( &jtp->msg, cp );
          }
          cp = 0;
        }
        if ( cp == 0 )
          HTSACopy( &jtp->msg, jumpprompt );
        if ( *(char*)(jtp->msg + ( strlen( jtp->msg ) - 1 )) != ' ' )
          HTSACat( &jtp->msg, " " );
        jtp->history = HTList_new( );
        jtp->next = JThead;
        JThead = jtp;
      }
    }
  }
  return 1;
}
char *LYJump( int key )
{
  static char buf[124];
  JumpDatum seeking;
  JumpDatum *found;
  char *bp, *cp;
  struct JumpTable *jtp;
  int ch;
  RecallType recall;
  int ShortcutTotal;
  int ShortcutNum;
  BOOLEAN FirstShortcutRecall = 1;
  if ( JThead == 0 )
  {
    return 0;
  }
  jtp = JThead;
  for ( ; jtp != 0 && jtp->key != 0 && jtp->key != key; jtp = jtp->next )
  {
    //jtp = jtp->next;
  }
  if ( jtp == 0 )
  {
    char *msg = 0;
    HTSprintf0( &msg, gettext( "Key '%c' is not mapped to a jump file!" ), key );
    HTAlert( msg );
    if ( msg != 0 )
    {
      free( msg );
      msg = 0;
    }
    return 0;
  }
  else
  {
    if ( jtp->table == 0 )
    {
      jtp->nel = LYRead_Jumpfile( jtp );
    }
    if ( jtp->nel == 0 )
    {
      return 0;
    }
    if ( ( jump_buffer & 255 ) == 0 || jtp->shortcut == 0 || ( jtp->shortcut[0] & 255 ) == 0 )
      buf[0] = 0;
    else
    if ( jtp->shortcut != 0 && ( jtp->shortcut[0] & 255 ) != 0 )
    {
      if ( strlen( jtp->shortcut ) > 119 )
        jtp->shortcut[119] = 0;
      strcpy( buf, jtp->shortcut );
    }
    ShortcutTotal = jtp->history == 0 ? 0 : HTList_count( jtp->history );
    if ( ( jump_buffer & 255 ) != 0 && ( buf[0] & 255 ) != 0 )
    {
      recall = ShortcutTotal > 1;
      ShortcutNum = 0;
      FirstShortcutRecall = 0;
    }
    else
    {
      recall = ( ShortcutTotal < 1 ) ^ 1;
      ShortcutNum = ShortcutTotal;
      FirstShortcutRecall = 1;
    }
    statusline( jtp->msg );
    ch = LYgetstr( buf, 0, 120, recall );
    if ( ch < 0 )
    {
      HTInfoMsg( gettext( "Cancelled!!!" ) );
      return 0;
    }
    do
    {
      bp = buf;
      if ( ( toupper( key ) == 71 ) != 0 && strncmp( buf, "o ", 2 ) == 0 )
        bp++;
      bp = LYSkipBlanks( bp );
      if ( ( bp[0] & 255 ) == 0 && ( recall == NORECALL || ( ch != 256 && ch != 257 ) ) )
      {
        buf[0] = 0;
        HTSACopy( &jtp->shortcut, buf );
        HTInfoMsg( gettext( "Cancelled!!!" ) );
        return 0;
      }
      if ( recall != NORECALL && ch == 256 )
      {
        if ( FirstShortcutRecall != 0 )
        {
          FirstShortcutRecall = 0;
          ShortcutNum = 0;
        }
        else
          ShortcutNum++;
        if ( ShortcutTotal <= ShortcutNum )
          ShortcutNum = 0;
        cp = HTList_objectAt( jtp->history, ShortcutNum );
        if ( cp != 0 )
        {
          LYstrncpy( buf, cp, 123 );
          if ( ( jump_buffer & 255 ) != 0 && jtp->shortcut != 0 && strcmp( buf, jtp->shortcut ) == 0 )
          {
            mustshow = 1;
            statusline( gettext( "Edit the current shortcut: " ) );
          }
          if ( ( ( jump_buffer & 255 ) != 0 && ShortcutTotal == 2 ) || ( ( jump_buffer & 255 ) == 0 && ShortcutTotal == 1 ) )
          {
            mustshow = 1;
            statusline( gettext( "Edit the previous shortcut: " ) );
          }
          mustshow = 1;
          statusline( gettext( "Edit a previous shortcut: " ) );
          ch = LYgetstr( buf, 0, 124, recall );
          if ( ch >= 0 )
            continue;
          else
          {
            HTInfoMsg( gettext( "Cancelled!!!" ) );
            return 0;
          }
        }
      }
      else
      {
        if ( recall != NORECALL && ch == 257 )
        {
          if ( FirstShortcutRecall != 0 )
          {
            FirstShortcutRecall = 0;
            ShortcutNum = ShortcutTotal - 1;
          }
          else
            ShortcutNum--;
          if ( ShortcutNum < 0 )
            ShortcutNum = ShortcutTotal - 1;
          cp = HTList_objectAt( jtp->history, ShortcutNum );
          if ( cp != 0 )
          {
            LYstrncpy( buf, cp, 123 );
            if ( ( jump_buffer & 255 ) != 0 && jtp->shortcut != 0 && strcmp( buf, jtp->shortcut ) == 0 )
            {
              mustshow = 1;
              statusline( gettext( "Edit the current shortcut: " ) );
            }
            if ( ( ( jump_buffer & 255 ) != 0 && ShortcutTotal == 2 ) || ( ( jump_buffer & 255 ) == 0 && ShortcutTotal == 1 ) )
            {
              mustshow = 1;
              statusline( gettext( "Edit the previous shortcut: " ) );
            }
            mustshow = 1;
            statusline( gettext( "Edit a previous shortcut: " ) );
            ch = LYgetstr( buf, 0, 124, recall );
          }
        }
      }
      seeking.key = bp;
      found = bsearch( seeking.key, jtp->table, jtp->nel, 8, &LYCompare );
      if ( found == 0 )
      {
        user_message( "Unknown target '%s'", buf );
        LYSleepAlert( );
      }
      HTSACopy( &jtp->shortcut, bp );
      LYAddJumpShortcut( jtp->history, jtp->shortcut );
      return found == 0 ? 0 : found->url;
    }
    while ( ch < 0 );
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    return 0;
  }
}
unsigned int LYRead_Jumpfile( struct JumpTable *jtp )
{
  int edx;
  struct stat st;
  unsigned int nel;
  char *mp;
  int fd;
  char *cp;
  unsigned int i;
  if ( jtp->file == 0 || ( jtp->file[0] & 255 ) == 0 )
  {
    return 0;
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "Read Jumpfile %s\n", jtp->file );
  }
  if ( stat64( jtp->file, &st.st_dev ) < 0 )
  {
    HTAlert( gettext( "Cannot locate jump file!" ) );
    return 0;
  }
  mp = calloc( (unsigned int)(st.st_size & 0xFFFFFFFF) + 1, sizeof( char ) );
  if ( mp == 0 )
  {
    HTAlert( gettext( "Out of memory reading jump file!" ) );
    return 0;
  }
  fd = open64( jtp->file, 0 );
  if ( fd < 0 )
  {
    HTAlert( gettext( "Cannot open jump file!" ) );
    if ( mp != 0 )
    {
      free( mp );
      mp = 0;
    }
    return 0;
  }
  else
  {
    if ( ( read( fd, mp, (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) >> 31 ) <= (int)(st.st_size << 32) && ( ( read( fd, mp, (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) >> 31 ) < (int)(st.st_size << 32) || read( fd, mp, (int)( (unsigned int)(st.st_size & 0xFFFFFFFF) ) ) < (unsigned int)(st.st_size & 0xFFFFFFFF) ) )
    {
      HTAlert( gettext( "Error reading jump file!" ) );
      if ( mp != 0 )
      {
        free( mp );
        mp = 0;
      }
      return 0;
    }
    else
    {
      mp[ (st.st_size & 0xFFFFFFFF) ] = 0;
      close( fd );
      nel = 0;
      cp = mp;
      for ( ; cp != 0; cp++ )
      {
        nel++;
        //cp++;
      }
      jtp->table = malloc( ( nel ) * sizeof( JumpDatum ) );
      if ( jtp->table == 0 )
      {
        HTAlert( gettext( "Out of memory reading jump table!" ) );
        if ( mp != 0 )
        {
          free( mp );
          mp = 0;
        }
        return 0;
      }
      else
      {
        cp = jtp->mp = mp;
        i = 0;
        do
        {
          if ( i < nel )
          {
            if ( strncmp( cp, "&lt;!--", 4 ) == 0 || strncmp( cp, "&lt;dl&gt;", 4 ) == 0 )
            {
              cp = strchr( cp, 10 );
              if ( cp != 0 )
              {
                cp++;
              }
              else
                break;
            }
            else
            {
              cp = LYstrstr( cp, "&lt;dt&gt;" );
              if ( cp != 0 )
              {
                cp += 4;
                jtp->table[ i ].key = cp;
                cp = LYstrstr( cp, "&lt;dd&gt;" );
                if ( cp != 0 )
                {
                  cp[0] = 0;
                  cp += 4;
                  cp = LYstrstr( cp, "href=\"" );
                  if ( cp != 0 )
                  {
                    cp += 6;
                    jtp->table[ i ].url = cp;
                    cp = strchr( cp, 34 );
                    if ( cp != 0 )
                    {
                      cp[0] = 0;
                      cp++;
                      cp = strchr( cp, 10 );
                      if ( cp != 0 )
                      {
                        cp++;
                        if ( ( WWW_TraceFlag & 255 ) != 0 )
                        {
                          fprintf( TraceFP( ), "Read jumpfile[%u] key='%s', url='%s'\n", i, jtp->table[ i ].key, jtp->table[ i ].url );
                        }
                        i++;
                      }
                    }
                  }
                }
              }
            }
          }
          else
            break;
        }
        while ( cp != 0 );
        return i;
      }
    }
  }
}
int LYCompare( void *e1, void *e2 )
{
  return strcasecomp( &((int*)e1)[0], &((int*)e2)[0] );
}
