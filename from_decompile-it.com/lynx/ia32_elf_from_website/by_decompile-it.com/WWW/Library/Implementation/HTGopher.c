#include "HTGopher.c.h"
static int s;
static HTStructured *target;
static HTStructuredClass targetClass;
static CSOfield_info *CSOfields;
static BOOLEAN acceptable[256];
static BOOLEAN acceptable_inited;
static char hex[17];
BOOLEAN HT_Is_Gopher_URL;
HTProtocol HTGopher;
HTProtocol HTCSO;
void init_acceptable( void )
{
  unsigned int i;
  char *good = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789./-_$";
  i = 0;
  for ( ; i <= 255; i++ )
  {
    acceptable[ i ] = 0;
    // i++;
  }
  for ( ; good[0]; good++ )
  {
    acceptable[ good[0] ] = 1;
    // good++;
  }
  acceptable_inited = 1;
  return;
}
char from_hex( char c )
{
  return 0;
}
void write_anchor( char *text, char *addr )
{
  BOOLEAN present[25];
  char *value[25];
  int i = 0;
  for ( ; i <= 24; i++ )
  {
    present[ i ] = 0;
    // i++;
  }
  present[6] = 1;
  value[6] = addr;
  present[22] = 1;
  value[22] = text;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTGopher: adding URL: %s\n", addr );
  }
  HT_Is_Gopher_URL = 1;
  targetClass.start_element( target, 0, present, value, -1, 0 );
  targetClass.put_string( target, text );
  targetClass.end_element( target, 0, 0 );
  return;
}
void parse_menu( char *arg, HTParentAnchor *anAnchor )
{
  char gtype;
  int ich;
  char line[1024];
  char *name = 0, *selector = 0;
  char *host = 0;
  char *port;
  char *p = line;
  char *title;
  int bytes = 0;
  int BytesReported = 0;
  char buffer[128];
  targetClass.start_element( target, 55, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 53, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 110, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    ebx( target, gettext( "Gopher Menu" ) );
  }
  targetClass.end_element( target, 110, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 53, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 17, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 47, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    ebx( target, gettext( "Gopher Menu" ) );
  }
  targetClass.end_element( target, 47, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 86, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  while ( ich == -1 )
  {
    if ( interrupted_in_htgetcharacter )
    {
      if ( WWW_TraceFlag == 0 )
        break;
      fprintf( TraceFP( ), "HTGopher: Interrupted in HTGetCharacter, apparently.\n" );
      break;
    }
    else
    if ( (unsigned char)( ich ) != '\n' )
    {
      p[0] = ich;
      if ( p < line[1023] )
      {
        p++;
      }
    }
    else
    {
      p[0] = 0;
      p++;
      bytes += p - line[0];
      p = line;
      port = 0;
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTGopher: Menu item: %s\n", line );
      }
      gtype = p[0];
      p++;
      if ( BytesReported + 1024 < bytes )
      {
        sprintf( buffer, gettext( "Transferred %d bytes" ), bytes );
        HTProgress( buffer );
        BytesReported = bytes;
      }
      if ( gtype == '.' && ( p[0] == '\r' || p[0] == 0 ) )
        break;
      if ( gtype && p[0] )
      {
        name = p;
        selector = strchr( name, '\t' );
        if ( selector )
        {
          selector[0] = 0;
          selector++;
          if ( gtype == '0' && ( selector[0] == '9' || selector[0] == '5' ) )
            gtype = selector[0];
          host = strchr( selector, '\t' );
          if ( host )
          {
            host[0] = 0;
            host++;
            port = strchr( host, '\t' );
            if ( port )
            {
              char *junk;
              port[0] = ':';
              junk = strchr( port, '\t' );
              if ( junk )
              {
                junk[0] = 0;
                junk++;
              }
              if ( port[1] == '0' && port[2] == 0 )
                port[0] = 0;
            }
          }
        }
      }
      if ( gtype == '0' )
      {
        int i = strlen( name ) + -1;
        for ( ; name[ i ] == ' ' && i >= 0;  )
        {
          name[ i ] = 0;
          i += -1;
        }
        if ( i < 0 )
          gtype = 'i';
      }
      if ( gtype == 'w' )
      {
        targetClass.put_string( target, "(HTML) " );
        write_anchor( name, selector );
      }
      else
      if ( gtype == 'i' )
      {
        targetClass.put_string( target, "       " );
        targetClass.put_string( target, name );
      }
      else
      if ( port )
      {
        char *address = 0;
        char *format = "%s//%s/";
        if ( gtype == '8' )
        {
          targetClass.put_string( target, " (TEL) " );
          HTSprintf0( &address, format, "telnet:", selector, host );
        }
        else
        if ( gtype == 'T' )
        {
          targetClass.put_string( target, "(3270) " );
          HTSprintf0( &address, format, "tn3270:", selector, host );
        }
        else
        {
          char *r;
          switch ( gtype + -48 )
          {
          case 0:
            targetClass.put_string( target, "(FILE) " );
            break;
          case 1:
            targetClass.put_string( target, " (DIR) " );
            break;
          case 2:
            targetClass.put_string( target, " (CSO) " );
            break;
          case 5:
            targetClass.put_string( target, " (BIN) " );
            break;
          case 6:
            targetClass.put_string( target, " (UUE) " );
            break;
          case 7:
            targetClass.put_string( target, "  (?)  " );
            break;
          case 9:
            targetClass.put_string( target, " (BIN) " );
            break;
          case 10:
          case 25:
          case 55:
            targetClass.put_string( target, " (IMG) " );
            break;
          case 12:
          case 67:
            targetClass.put_string( target, " (SND) " );
            break;
          case 4:
            targetClass.put_string( target, " (HQX) " );
            break;
          case 24:
          case 56:
            targetClass.put_string( target, "(HTML) " );
            break;
          case 61:
            targetClass.put_string( target, "(MIME) " );
            break;
          case 11:
            targetClass.put_string( target, " (MOV) " );
            break;
          case 32:
            targetClass.put_string( target, " (PDF) " );
            break;
          default:
            targetClass.put_string( target, "(UNKN) " );
            break;
          }
          HTSprintf0( &address, "//%s/%c", host, gtype );
          r = selector;
          for ( ; r[0]; r++ )
          {
            if ( acceptable[ r[0] ] )
              HTSprintf( &address, "%c", r[0] );
            else
              HTSprintf( &address, "%c%c%c", 37, hex[ r[0] >> 4 ], hex[ r[0] & 15 ] );
            // r++;
          }
        }
        if ( strcmp( address, "gopher://error.host:1/0" ) )
          write_anchor( name, address );
        else
          targetClass.put_string( target, name );
        if ( address )
        {
          free( address );
          address = 0;
        }
      }
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTGopher: Bad menu item.\n" );
        }
        targetClass.put_string( target, line );
      }
      targetClass.put_character( target, '\n' );
      p = line;
    }
  }
  targetClass.end_element( target, 86, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 17, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 55, 0 );
  targetClass.put_character( target, '\n' );
  targetClass._free( target );
  return;
}
void parse_cso( char *arg, HTParentAnchor *anAnchor )
{
  int ich;
  char line[1024];
  char *p = line;
  char *first_colon, *second_colon, last_char = 0;
  char *title;
  targetClass.start_element( target, 53, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 110, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    ebx( target, gettext( "CSO Search Results" ) );
  }
  targetClass.end_element( target, 110, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 53, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 47, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    targetClass.put_string( target, arg );
    ebx( target, gettext( " Search Results" ) );
  }
  targetClass.end_element( target, 47, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 86, 0, 0, -1, 0 );
  while ( ich == -1 )
  {
    if ( (unsigned char)( ich ) != '\n' )
    {
      p[0] = ich;
      if ( p < line[1023] )
      {
        p++;
      }
    }
    else
    {
      p[0] = 0;
      p = line;
      if ( p[0] == '2' )
      {
        targetClass.put_character( target, '\n' );
        targetClass.end_element( target, 86, 0 );
        targetClass.put_character( target, '\n' );
        targetClass._free( target );
        return;
      }
      if ( p[0] == '5' )
      {
        targetClass.start_element( target, 48, 0, 0, -1, 0 );
        targetClass.put_string( target, &p[4] );
        targetClass.end_element( target, 48, 0 );
      }
      else
      {
        if ( p[0] != '-' )
          continue;
        else
        {
          second_colon = 0;
          first_colon = strchr( p, ':' );
          if ( first_colon )
          {
            second_colon = strchr( &first_colon[1], ':' );
          }
          if ( second_colon )
          {
            if ( second_colon[ -1 ] != last_char )
            {
              targetClass.end_element( target, 86, 0 );
              targetClass.start_element( target, 48, 0, 0, -1, 0 );
            }
            targetClass.put_string( target, &second_colon[1] );
            targetClass.put_character( target, '\n' );
            if ( second_colon[ -1 ] != last_char )
            {
              targetClass.end_element( target, 48, 0 );
              targetClass.start_element( target, 86, 0, 0, -1, 0 );
            }
            last_char = second_colon[ -1 ];
          }
        }
      }
    }
  }
}
void display_cso( char *arg, HTParentAnchor *anAnchor )
{
  char *title;
  targetClass.start_element( target, 53, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 110, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    ebx( target, gettext( "CSO index" ) );
  }
  targetClass.end_element( target, 110, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 62, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 53, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 47, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    targetClass.put_string( target, arg );
    ebx( target, gettext( " index" ) );
  }
  targetClass.end_element( target, 47, 0 );
  ebx( target, gettext( "\nThis is a searchable index of a CSO database.\n" ) );
  targetClass.start_element( target, 83, 0, 0, -1, 0 );
  ebx( target, gettext( "\nPress the 's' key and enter search keywords.\n" ) );
  targetClass.start_element( target, 83, 0, 0, -1, 0 );
  ebx( target, gettext( "\nThe keywords that you enter will allow you to search on a" ) );
  ebx( target, gettext( " person's name in the database.\n" ) );
  if ( HTAnchor_title( anAnchor ) == 0 )
    HTAnchor_setTitle( anAnchor, arg );
  targetClass._free( target );
  return;
}
void display_index( char *arg, HTParentAnchor *anAnchor )
{
  char *title;
  targetClass.start_element( target, 53, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 110, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    ebx( target, gettext( "Gopher index" ) );
  }
  targetClass.end_element( target, 110, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 62, 0, 0, -1, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.end_element( target, 53, 0 );
  targetClass.put_character( target, '\n' );
  targetClass.start_element( target, 47, 0, 0, -1, 0 );
  title = HTAnchor_title( anAnchor );
  if ( title )
    targetClass.put_string( target, title );
  else
  {
    targetClass.put_string( target, arg );
    ebx( target, gettext( " index" ) );
  }
  targetClass.end_element( target, 47, 0 );
  ebx( target, gettext( "\nThis is a searchable Gopher index.\n" ) );
  targetClass.start_element( target, 83, 0, 0, -1, 0 );
  ebx( target, gettext( "\nPlease enter search keywords.\n" ) );
  if ( HTAnchor_title( anAnchor ) == 0 )
    HTAnchor_setTitle( anAnchor, arg );
  targetClass._free( target );
  return;
}
void de_escape( char *command, char *selector )
{
  char *p = selector;
  char *q = command;
  if ( command == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadGopher" );
    while ( p[0] )
    {
      if ( p[0] == '%' )
      {
        char c;
        unsigned int b;
        p++;
        c = p[0];
        p++;
        b = from_hex( c );
        c = p[0];
        p++;
        if ( c == 0 )
          break;
        q[0] = ( b << 4 ) + from_hex( c );
        q++;
      }
      else
      {
        q[0] = p[0];
        q++;
        p++;
      }
    }
    q[0] = 0;
    q++;
    return;
  }
}
void free_CSOfields( void )
{
  int eax;
  CSOfield_info *cur = CSOfields;
  CSOfield_info *prev;
  while ( cur )
  {
    if ( cur->name_buf[0] != cur->name && cur->name )
    {
      free( &cur->name );
      cur->name = 0;
    }
    if ( cur->attr_buf[0] != cur->attributes && cur->attributes )
    {
      free( &cur->attributes );
      cur->attributes = 0;
    }
    if ( cur->desc_buf[0] != cur->description && cur->description )
    {
      free( &cur->description );
      cur->description = 0;
    }
    prev = cur;
    cur = &cur->next;
    if ( prev )
    {
      free( prev );
      prev = 0;
    }
  }
  return;
}
void interpret_cso_key( char *key, char *buf, int *length, CSOformgen_context *ctx, HTStream *Target )
{
  CSOfield_info *fld = &ctx->fld;
  if ( fld )
  {
    int error = 0;
    if ( strncmp( key, "$(FID)", 6 ) == 0 )
      sprintf( buf, "%d", fld->id );
    else
    {
      if ( strncmp( key, "$(FDESC)", 8 ) == 0 )
        sprintf( buf, "%.2046s", &fld->description );
      else
      {
        if ( strncmp( key, "$(FDEF)", 7 ) == 0 )
        {
          strcpy( buf, "" );
        }
        else
        {
          if ( strncmp( key, "$(FNDX)", 7 ) == 0 )
          {
            strcpy( buf, "" );
          }
          else
          {
            if ( strncmp( key, "$(FSIZE)", 8 ) == 0 )
            {
              sprintf( buf, " size=%d maxlength=%d", 55, fld->max_size );
            }
            else
            {
              if ( strncmp( key, "$(FSIZE2)", 9 ) == 0 )
                sprintf( buf, " maxlength=%d", fld->max_size );
              else
                error = 1;
            }
          }
        }
      }
    }
    if ( error == 0 )
    {
      length[0] = strlen( buf );
      return;
    }
  }
  buf[0] = 0;
  if ( strncmp( key, "$(NEXTFLD)", 10 ) == 0 )
  {
    if ( ctx->fld == 0 )
      fld = CSOfields;
    else
      fld = &ctx->fld->next;
    switch ( ctx->field_select )
    {
    case 0:
      if ( fld && ( fld->gpublic == 0 || fld->lookup != 1 ) )
      {
        fld = &fld->next;
      }
      else
      {
        if ( fld )
        {
          ctx->cur_line = ctx->rep_line;
          ctx->cur_off = ctx->rep_off;
        }
        ctx->fld = fld;
      }
      break;
    case 1:
      if ( fld && fld->lookup != 1 )
      {
        fld = &fld->next;
      }
      break;
    case 2:
      if ( fld && fld->gpublic == 0 )
      {
        fld = &fld->next;
      }
      break;
    default:
      break;
    }
  }
  else
  {
    if ( strncmp( key, "$(QFIELDS)", 10 ) == 0 || strncmp( key, "$(RFIELDS)", 10 ) == 0 )
    {
      ctx->rep_line = ctx->cur_line;
      ctx->rep_off = ctx->cur_off;
      *(int*)&ctx->fld = 0;
      ctx->seek = "$(NEXTFLD)";
      ctx->field_select = key[2] == 'Q' ? 0 : 2;
      if ( ctx->public_override )
        ctx->field_select++;
    }
    else
    {
      if ( strncmp( key, "$(NAMEFLD)", 10 ) == 0 )
      {
        fld = CSOfields;
        for ( ; fld;  )
        {
          if ( strcmp( &fld->name, "name" ) == 0 || strcmp( &fld->name, "Name" ) == 0 )
          {
            if ( fld->lookup )
            {
              fld->lookup = 2;
              break;
            }
            else
              break;
          }
          else
          {
            fld = &fld->next;
          }
        }
        ctx->fld = fld;
      }
      else
      {
        if ( strncmp( key, "$(HOST)", 7 ) == 0 )
          strcpy( buf, &ctx->host[0] );
        else
        {
          if ( strncmp( key, "$(PORT)", 7 ) == 0 )
            sprintf( buf, "%d", ctx->port );
          else
          {
            size_t out = 0;
            while ( key[0] && key[0] != ')' )
            {
              buf[ out ] = key[0];
              out++;
              key++;
              if ( out > 2 )
              {
                buf[ out ] = 0;
                ebx( Target, buf, strlen( buf ) );
                out = 0;
              }
            }
            buf[ out ] = ')';
            out++;
            buf[ out ] = 0;
            length[0] = strlen( buf );
            return;
          }
        }
      }
    }
  }
  length[0] = strlen( buf );
  return;
}
int parse_cso_field_info( CSOfield_info *blk )
{
  char *info, *max_spec;
  blk->indexed = blk->lookup = blk->reserved = blk->max_size = blk->url = 0;
  blk->defreturn = blk->explicit_return = blk->gpublic = 0;
  info = &blk->attributes;
  LYLowerCase( info );
  if ( strstr( info, "indexed " ) )
    blk->indexed = 1;
  if ( strstr( info, "default " ) )
    blk->defreturn = 1;
  if ( strstr( info, "public " ) )
    blk->gpublic = 1;
  if ( strstr( info, "lookup " ) )
    blk->lookup = 1;
  if ( strstr( info, "url " ) )
  {
    blk->url = 1;
    blk->defreturn = 1;
  }
  max_spec = strstr( info, "max " );
  if ( max_spec )
  {
    sscanf( &max_spec[4], "%d", &blk->max_size );
  }
  blk->max_size = 32;
  return 0;
}
int parse_cso_fields( char *buf, int size )
{
  int ich;
  char *p = buf;
  int i, code = 0, prev_code;
  size_t alen;
  char *indx, *name;
  CSOfield_info *last, *newf;
  last = CSOfields = 0;
  prev_code = -2555;
  buf[0] = 0;
  while ( ich == -1 )
  {
    if ( interrupted_in_htgetcharacter )
    {
      if ( WWW_TraceFlag == 0 )
      {
        free_CSOfields( );
        buf[0] = 0;
        return -29998;
      }
      fprintf( TraceFP( ), "HTLoadCSO: Interrupted in HTGetCharacter, apparently.\n" );
      free_CSOfields( );
      buf[0] = 0;
      return -29998;
    }
    else
    if ( (unsigned char)( ich ) != '\n' )
    {
      p[0] = ich;
      if ( p < buf[ size + -1 ] )
      {
        p++;
      }
    }
    else
    {
      p[0] = 0;
      p = buf;
      if ( p[0] != '2' )
      {
        if ( p[0] == '5' )
        {
          strcpy( buf, p );
          return 5;
        }
        if ( p[0] != '-' || p[1] != '2' )
          continue;
        else
        {
          indx = 0;
          name = 0;
          i = 0;
          for ( ; p[ i ]; i++ )
          {
            if ( p[ i ] == ':' )
            {
              p[ i ] = 0;
              if ( indx == 0 )
              {
                indx = &p[ i + 1 ];
                code = atoi( indx );
              }
              else
              if ( name == 0 )
                name = &p[ i + 1 ];
              else
              {
                i++;
                break;
              }
            }
            // i++;
          }
          if ( name )
          {
            if ( prev_code == code )
            {
              alen = strlen( &p[ i ] ) + 1;
              if ( alen > 32 )
              {
                if ( last->desc_buf[0] != last->description && last->description )
                {
                  free( &last->description );
                  last->description = 0;
                }
                last->description = malloc( alen );
                if ( last->description == 0 )
                  outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadCSO" );
              }
              strcpy( &last->description, &p[ i ] );
            }
            else
            {
              newf = calloc( 1, sizeof( CSOfield_info ) );
              if ( newf == 0 )
                outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadCSO" );
              if ( last )
                last->next = newf;
              else
                CSOfields = newf;
              last = newf;
              newf->next = 0;
              newf->name = newf->name_buf[0];
              alen = strlen( name ) + 1;
              if ( alen > 16 )
              {
                newf->name = malloc( alen );
                if ( newf->name == 0 )
                  outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadCSO" );
              }
              strcpy( &newf->name, name );
              newf->attributes = newf->attr_buf[0];
              alen = strlen( &p[ i ] ) + 2;
              if ( alen > 80 )
              {
                newf->attributes = malloc( alen );
                if ( newf->attributes == 0 )
                  outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadCSO" );
              }
              strcpy( &newf->attributes, &p[ i ] );
              memcpy( &newf->attributes[ alen + -2 ], " ", 2 );
              newf->description = newf->desc_buf[0];
              newf->desc_buf[0] = 0;
              newf->id = atoi( indx );
              parse_cso_field_info( newf );
            }
            prev_code = code;
          }
        }
      }
      else
        break;
    }
  }
  if ( buf[0] == 0 )
  {
    return -1;
  }
  buf[0] = 0;
  return 0;
}
int generate_cso_form( char *host, int port, char *buf, HTStream *Target )
{
  static char *ctemplate[25] = { "&lt;HTML&gt;\n&lt;HEAD&gt;\n&lt;TITLE&gt;CSO/PH Query Form for $(HOST)&lt;/TITLE&gt;\n&lt;/HEAD&gt;\n&lt;BODY&gt;", "&lt;H2&gt;&lt;I&gt;CSO/PH Query Form&lt;/I&gt; for &lt;EM&gt;$(HOST)&lt;/EM&gt;&lt;/H2&gt;", "To search the database for a name, fill in one or more of the fields", "in the form below and activate the 'Submit query' button.  At least", "one of the entered fields must be flagged as indexed.", "&lt;HR&gt;&lt;FORM method=\"POST\" action=\"cso://$(HOST)/\"&gt;", "[ &lt;input type=\"submit\" value=\"Submit query\"&gt; | ", "&lt;input type=\"reset\" value=\"Clear fields\"&gt; ]", "&lt;P&gt;&lt;DL&gt;", "   &lt;DT&gt;Search parameters (* indicates indexed field):", "   &lt;DD&gt;", "$(NAMEFLD)    &lt;DL COMPACT&gt;\n    &lt;DT&gt;&lt;I&gt;$(FDESC)&lt;/I&gt;$(FNDX)", "    &lt;DD&gt;Last: &lt;input name=\"q_$(FID)\" type=\"text\" size=49$(FSIZE2)&gt;", "    &lt;DD&gt;First: &lt;input name=\"q_$(FID)\" type=\"text\" size=48$(FSIZE2)&gt;", "$(QFIELDS)    &lt;DT&gt;&lt;I&gt;$(FDESC)&lt;/I&gt;$(FNDX)", "    &lt;DD&gt;&lt;input name=\"q_$(FID)\" type=\"text\" $(FSIZE)&gt;\n$(NEXTFLD)", "    &lt;/DL&gt;", "   &lt;/DL&gt;\n&lt;P&gt;&lt;DL&gt;", "   &lt;DT&gt;Output format:", "   &lt;DD&gt;Returned data option: &lt;select name=\"return\"&gt;", "    &lt;option&gt;default&lt;option selected&gt;all&lt;option&gt;selected&lt;/select&gt;&lt;BR&gt;", "$(RFIELDS)    &lt;input type=\"checkbox\" name=\"r_$(FID)\"$(FDEF)&gt; $(FDESC)&lt;BR&gt;", "$(NEXTFLD)    ", "   &lt;/DL&gt;&lt;/FORM&gt;&lt;HR&gt;\n&lt;/BODY&gt;\n&lt;/HTML&gt;", 0 };
  int i, j, length;
  size_t out;
  int full_flag = 1;
  char *key;
  char *line;
  CSOformgen_context ctx;
  out = 0;
  memset( ctx.host, 0, 40 );
  ctx.host = host;
  ctx.seek = 0;
  ctx.port = port;
  ctx.fld = 0;
  ctx.public_override = full_flag;
  out = 0;
  buf[ out ] = 0;
  i = 0;
  for ( ; ctemplate[ i ]; i++ )
  {
    line = ctemplate[ i ];
    j = 0;
    for ( ; line[ j ]; j++ )
    {
      if ( line[ j ] == '$' && line[ j + 1 ] == '(' )
      {
        buf[ out ] = 0;
        if ( out )
        {
          ebx( Target, buf, strlen( buf ) );
        }
        out = 0;
        key = &line[ j ];
        for ( ; line[ j + 1 ] && line[ j ] != ')'; j++ )
        {
          // j++;
        }
        ctx.cur_line = i;
        ctx.cur_off = j;
        interpret_cso_key( key, buf, &length, &ctx, Target );
        i = ctx.cur_line;
        j = ctx.cur_off;
        line = ctemplate[ i ];
        out = length;
        if ( ctx.seek )
        {
          int slen = strlen( ctx.seek );
          for ( ; ctemplate[ i ]; i++ )
          {
            line = ctemplate[ i ];
            for ( ; line[ j ]; j++ )
            {
              if ( line[ j ] == '$' && strncmp( ctx.seek, &line[ j ], slen ) == 0 )
              {
                if ( j == 0 )
                {
                  i += -1;
                  j = strlen( ctemplate[ i ] ) + -1;
                }
                else
                  j += -1;
                line = ctemplate[ i ];
                ctx.seek = 0;
                break;
              }
              else
              {
                // j++;
              }
            }
            if ( ctx.seek == 0 )
              break;
            else
            {
              j = 0;
              // i++;
            }
          }
          if ( ctx.seek )
          {
            char *temp = 0;
            HTSprintf0( &temp, gettext( "Seek fail on %s\n" ), ctx.seek );
            ebx( Target, temp, strlen( temp ) );
            if ( temp )
            {
              free( temp );
              temp = 0;
            }
          }
        }
      }
      else
      {
        buf[ out ] = line[ j ];
        out++;
        if ( out > 1 )
        {
          buf[ out ] = 0;
          ebx( Target, buf, strlen( buf ) );
          out = 0;
        }
      }
      // j++;
    }
    buf[ out ] = '\n';
    out++;
    buf[ out ] = 0;
    // i++;
  }
  if ( out )
  {
    ebx( Target, buf, strlen( buf ) );
  }
  return 0;
}
int generate_cso_report( HTStream *Target )
{
  int ich;
  char line[1024];
  char *buf = 0;
  char *p = line, *href = 0;
  int len, i, prev_ndx, ndx;
  char *rcode, *ndx_str, *fname, *fvalue, *l;
  CSOfield_info *fld;
  BOOLEAN stop = 0;
  prev_ndx = -100;
  while ( stop == 0 )
  {
    ich = HTGetCharacter( );
    if ( ich != -1 )
    {
      if ( interrupted_in_htgetcharacter )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTLoadCSO: Interrupted in HTGetCharacter, apparently.\n" );
        }
        mustshow = 1;
        HTProgress( gettext( "Connection interrupted." ) );
        break;
      }
      else
      if ( (unsigned char)( ich ) != '\n' )
      {
        p = ich;
        if ( p < line )
        {
          p++;
        }
      }
      else
      {
        p = 0;
        p = line;
        if ( p != '-' && p != '1' )
          stop = 1;
        rcode = p == '-' ? &p : p;
        ndx_str = fname = 0;
        len = strlen( p );
        i = 0;
        for ( ; i < len; i++ )
        {
          if ( p[ i ] == ':' )
          {
            p[ i ] = 0;
            if ( ndx_str == 0 )
            {
              fname = ndx_str = &p[ i + 1 ];
            }
            else
            {
              fname = &p[ i + 1 ];
              break;
            }
          }
          // i++;
        }
        if ( ndx_str )
        {
          ndx = atoi( ndx_str );
          if ( prev_ndx != ndx )
          {
            if ( prev_ndx != -100 )
            {
              HTSprintf0( &buf, "&lt;/DL&gt;&lt;/DL&gt;\n" );
              ebx( Target, buf, strlen( buf ) );
            }
            if ( ndx == 0 )
            {
              HTSprintf0( &buf, "&lt;HR&gt;&lt;DL&gt;&lt;DT&gt;Information/status&lt;DD&gt;&lt;DL&gt;&lt;DT&gt;\n" );
              ebx( Target, buf, strlen( buf ) );
            }
            else
            {
              HTSprintf0( &buf, "&lt;HR&gt;&lt;DL&gt;&lt;DT&gt;Entry %d:&lt;DD&gt;&lt;DL COMPACT&gt;&lt;DT&gt;\n", ndx );
              ebx( Target, buf, strlen( buf ) );
            }
            prev_ndx = ndx;
          }
          if ( '1' < rcode && rcode <= '5' && ndx_str != fname )
          {
            for ( ; fname == ' '; fname++ )
            {
              // fname++;
            }
            fvalue = fname;
            for ( ; fvalue; fvalue++ )
            {
              if ( fvalue == ':' )
              {
                fvalue = 0;
                fvalue++;
                i = strlen( fname ) + -1;
                for ( ; i >= 0 && fname[ i ] == ' ';  )
                {
                  fname[ i ] = 0;
                  i += -1;
                }
                break;
              }
              else
              {
                // fvalue++;
              }
            }
            if ( fvalue )
            {
              for ( ; fvalue == ' '; fvalue++ )
              {
                // fvalue++;
              }
            }
            if ( fname )
            {
              fld = CSOfields;
              for ( ; fld;  )
              {
                if ( strcmp( &fld->name, fname ) == 0 )
                {
                  if ( fld->description )
                  {
                    fname = &fld->description;
                    break;
                  }
                  else
                    break;
                }
                else
                {
                  fld = &fld->next;
                }
              }
              if ( fld && fld->url )
              {
                HTSprintf0( &buf, "&lt;DT&gt;&lt;I&gt;%s&lt;/I&gt;&lt;DD&gt;&lt;A HREF=\"%s\"&gt;%s&lt;/A&gt;\n", fname, fvalue );
                ebx( Target, buf, strlen( buf ) );
              }
              else
              {
                HTSprintf0( &buf, "&lt;DT&gt;&lt;I&gt;%s&lt;/I&gt;&lt;DD&gt;", fname );
                ebx( Target, buf, strlen( buf ) );
                buf[0] = 0;
                l = fvalue;
                while ( l[0] )
                {
                  if ( l[0] == '<' )
                  {
                    HTSACat( &buf, "&lt;" );
                    l++;
                  }
                  else
                  {
                    if ( l[0] == '>' )
                    {
                      HTSACat( &buf, "&gt;" );
                      l++;
                    }
                    else
                    {
                      if ( strncmp( l, "news:", 5 ) == 0 || strncmp( l, "snews://", 8 ) == 0 || strncmp( l, "nntp://", 7 ) == 0 || strncmp( l, "snewspost:", 10 ) == 0 || strncmp( l, "snewsreply:", 11 ) == 0 || strncmp( l, "newspost:", 9 ) == 0 || strncmp( l, "newsreply:", 10 ) == 0 || strncmp( l, "ftp://", 6 ) == 0 || strncmp( l, "file:/", 6 ) == 0 || strncmp( l, "finger://", 9 ) == 0 || strncmp( l, "http://", 7 ) == 0 || strncmp( l, "https://", 8 ) == 0 || strncmp( l, "wais://", 7 ) == 0 || strncmp( l, "mailto:", 7 ) == 0 || strncmp( l, "cso://", 6 ) == 0 || strncmp( l, "gopher://", 9 ) == 0 )
                      {
                        HTSACat( &buf, "&lt;a href=\"" );
                        HTSACopy( &href, l );
                        HTSACat( &buf, strtok( href, " \r\n\t,&gt;)\"" ) );
                        HTSACat( &buf, "\"&gt;" );
                        while ( l[0] && strchr( " \r\n\t,&gt;)\"", l[0] ) == 0 )
                        {
                          HTSprintf( &buf, "%c", l[0] );
                          l++;
                        }
                        HTSACat( &buf, "&lt;/a&gt;" );
                        if ( href )
                        {
                          free( href );
                          href = 0;
                        }
                      }
                      else
                      {
                        HTSprintf( &buf, "%c", l[0] );
                        l++;
                      }
                    }
                  }
                }
                HTSACat( &buf, "\n" );
                ebx( Target, buf, strlen( buf ) );
              }
            }
            else
            {
              HTSprintf0( &buf, "&lt;DD&gt;" );
              ebx( Target, buf, strlen( buf ) );
              buf[0] = 0;
              l = fvalue;
              while ( l[0] )
              {
                if ( l[0] == '<' )
                {
                  HTSACat( &buf, "&lt;" );
                  l++;
                }
                else
                {
                  if ( l[0] == '>' )
                  {
                    HTSACat( &buf, "&gt;" );
                    l++;
                  }
                  else
                  {
                    if ( strncmp( l, "news:", 5 ) == 0 || strncmp( l, "snews://", 8 ) == 0 || strncmp( l, "nntp://", 7 ) == 0 || strncmp( l, "snewspost:", 10 ) == 0 || strncmp( l, "snewsreply:", 11 ) == 0 || strncmp( l, "newspost:", 9 ) == 0 || strncmp( l, "newsreply:", 10 ) == 0 || strncmp( l, "ftp://", 6 ) == 0 || strncmp( l, "file:/", 6 ) == 0 || strncmp( l, "finger://", 9 ) == 0 || strncmp( l, "http://", 7 ) == 0 || strncmp( l, "https://", 8 ) == 0 || strncmp( l, "wais://", 7 ) == 0 || strncmp( l, "mailto:", 7 ) == 0 || strncmp( l, "cso://", 6 ) == 0 || strncmp( l, "gopher://", 9 ) == 0 )
                    {
                      HTSACat( &buf, "&lt;a href=\"" );
                      HTSACopy( &href, l );
                      HTSACat( &buf, strtok( href, " \r\n\t,&gt;)\"" ) );
                      HTSACat( &buf, "\"&gt;" );
                      while ( l[0] && strchr( " \r\n\t,&gt;)\"", l[0] ) == 0 )
                      {
                        HTSprintf( &buf, "%c", l[0] );
                        l++;
                      }
                      HTSACat( &buf, "&lt;/a&gt;" );
                      if ( href )
                      {
                        free( href );
                        href = 0;
                      }
                    }
                    else
                    {
                      HTSprintf( &buf, "%c", l[0] );
                      l++;
                    }
                  }
                }
              }
              HTSACat( &buf, "\n" );
              ebx( Target, buf, strlen( buf ) );
            }
          }
          else
          {
            HTSprintf0( &buf, "&lt;DD&gt;%s\n", rcode );
            ebx( Target, buf, strlen( buf ) );
          }
        }
        else
        {
          HTSprintf0( &buf, "&lt;DD&gt;%s\n", rcode );
          ebx( Target, buf, strlen( buf ) );
        }
      }
    }
    else
      break;
  }
  if ( prev_ndx != -100 )
  {
    HTSprintf0( &buf, "&lt;/DL&gt;&lt;/DL&gt;\n" );
    ebx( Target, buf, strlen( buf ) );
  }
  if ( buf )
  {
    free( buf );
    buf = 0;
  }
  return 0;
}
int HTLoadCSO( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  int eax;
  static char end_form[17] = { '<', '/', 'B', 'O', 'D', 'Y', '>', '\n', '<', '/', 'H', 'T', 'M', 'L', '>', '\n' };
  char *host, *cp, *data;
  int port = 105;
  int status;
  bstring *command = 0;
  bstring *content = 0;
  int len, i, j, start, finish, flen, ndx;
  int return_type, has_indexed;
  CSOfield_info *fld;
  char buf[2048];
  HTFormat format_in = HTAtom_for( "text/html" );
  HTStream *Target = 0;
  if ( acceptable_inited == 0 )
    init_acceptable( );
  if ( arg == 0 )
    return -3;
  else
  if ( arg == 0 )
    return -2;
  else
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTLoadCSO: Looking for %s\n", arg );
    }
    status = HTDoConnect( arg, "cso", 105, &s );
    if ( status == -29998 )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTLoadCSO: Interrupted on connect; recovering cleanly.\n" );
      }
      mustshow = 1;
      HTProgress( gettext( "Connection interrupted." ) );
      return -29999;
    }
    else
    {
      if ( status < 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTLoadCSO: Unable to connect to remote host for `%s'.\n", arg );
        }
      }
      else
      {
        HTInitInput( s );
        HTBprintf( &command, "fields%c%c", 13, 10 );
        if ( WWW_TraceFlag )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTLoadCSO: Connected, writing command `" );
          }
          trace_bstring( command );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "' to socket %d\n", s );
          }
        }
        mustshow = 1;
        HTProgress( gettext( "Sending CSO/PH request." ) );
        status = write( s, 0, 0 );
        HTSABFree( &command );
        if ( status < 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTLoadCSO: Unable to send command.\n" );
          }
        }
        else
        {
          mustshow = 1;
          HTProgress( gettext( "CSO/PH request sent; waiting for response." ) );
          status = parse_cso_fields( buf, 2048 );
          if ( status )
          {
            close( s );
            if ( status == -29998 )
            {
              mustshow = 1;
              HTProgress( gettext( "Connection interrupted." ) );
            }
            else
            if ( buf )
              HTAlert( buf );
            else
            {
              HTAlert( gettext( "No response from server!" ) );
            }
            return -29999;
          }
          else
          {
            Target = HTStreamStack( format_in, format_out, &sink->_HTStream, anAnchor );
            if ( Target == 0 || Target == 0 )
            {
              char *temp = 0;
              HTSprintf0( &temp, gettext( "Sorry, no known way of converting %s to %s." ), format_in->name, format_out->name );
              HTAlert( temp );
              if ( temp )
              {
                free( temp );
                temp = 0;
              }
              close( s );
              return -29999;
            }
            else
            {
              host = HTParse( arg, "", 8 );
              cp = strchr( host, ':' );
              if ( cp && '/' < cp[1] && cp[1] <= '9' )
              {
                port = atoi( &cp[1] );
                if ( port == 105 )
                  cp[0] = 0;
              }
              anAnchor->safe = 1;
              if ( anAnchor->post_data == 0 || anAnchor->post_data == 0 || anAnchor->post_data->len == 0 )
              {
                generate_cso_form( host, port, buf, Target );
                ;
              }
              HTBprintf( &command, "&lt;HTML&gt;\n&lt;HEAD&gt;\n&lt;TITLE&gt;CSO/PH Results on %s&lt;/TITLE&gt;\n&lt;/HEAD&gt;\n&lt;BODY&gt;\n", host );
              ebp( (long long)( Target ), (long long)0 );
              HTSABFree( &command );
              if ( host )
              {
                free( host );
                host = 0;
              }
              HTSABCopy( &content, 0, 0 );
              if ( *(char*)(0 + -1) != '&' )
                HTSABCat0( &content, "&" );
              data = 0;
              len = 0;
              i = 0;
              for ( ; i < len; i++ )
              {
                if ( data[ i ] == '+' )
                  data[ i ] = ' ';
                // i++;
              }
              data = 0;
              HTUnEscape( data );
              len = 0;
              return_type = 0;
              has_indexed = 0;
              start = finish = 0;
              i = 0;
              for ( ; i < len; i++ )
              {
                if ( data[ i ] == 0 || data[ i ] == '&' )
                {
                  flen = i - start;
                  finish = start + flen;
                  data[ finish ] = 0;
                  j = start;
                  for ( ; j < finish; j++ )
                  {
                    if ( data[ j ] == '=' )
                    {
                      if ( data[ start + 1 ] == '_' && ( data[ start ] == 'r' || data[ start ] == 'q' ) )
                      {
                        sscanf( &data[ start + 2 ], "%d=", &ndx );
                        fld = CSOfields;
                        for ( ; fld;  )
                        {
                          if ( fld->id == ndx )
                          {
                            if ( finish <= j + 1 )
                              break;
                            else
                            if ( data[ start ] == 'q' )
                            {
                              if ( fld->lookup )
                              {
                                if ( fld->indexed )
                                  has_indexed = 1;
                                if ( command == 0 || command == 0 || command->len == 0 )
                                  HTSABCopy0( &command, "query " );
                                else
                                  HTSABCat0( &command, " " );
                                HTBprintf( &command, "%s=\"%s\"", fld->name, data[ j + 1 ] );
                                break;
                              }
                              else
                              {
                                memcpy( buf, "Warning: non-lookup field ignored&lt;BR&gt;\n", 39 );
                                ebx( Target, buf[0], strlen( buf ) );
                                break;
                              }
                            }
                            else
                            if ( data[ start ] != 'r' )
                              break;
                            else
                            {
                              fld->explicit_return = 1;
                              break;
                            }
                          }
                          else
                          {
                            fld = &fld->next;
                          }
                        }
                      }
                      else
                      {
                        if ( strncmp( &data[ start ], "return=", 7 ) == 0 )
                        {
                          if ( strcmp( &data[ start + 7 ], "all" ) == 0 )
                            return_type = 1;
                          else
                          {
                            if ( strcmp( &data[ start + 7 ], "selected" ) == 0 )
                              return_type = 2;
                          }
                        }
                      }
                    }
                    // j++;
                  }
                  start = i + 1;
                }
                // i++;
              }
              HTSABFree( &content );
              if ( command == 0 || command == 0 || command->len == 0 || has_indexed == 0 )
              {
                close( s );
                memcpy( buf, "&lt;EM&gt;Error:&lt;/EM&gt; At least one indexed field value must be specified!\n", 69 );
                ebx( Target, buf[0], strlen( buf ) );
                memcpy( buf, "&lt;/BODY&gt;\n&lt;/HTML&gt;\n", 17 );
                ebx( Target, buf[0], strlen( buf ) );
                ;
              }
              if ( return_type == 1 )
                HTSABCat0( &command, " return all" );
              else
              if ( return_type == 2 )
              {
                HTSABCat0( &command, " return" );
                fld = CSOfields;
                for ( ; fld;  )
                {
                  if ( fld->explicit_return )
                    HTBprintf( &command, (char*)command, " %s", fld->name );
                  fld = &fld->next;
                }
              }
              HTBprintf( &command, "%c%c", 13, 10 );
              memcpy( buf, "&lt;H2&gt;\n&lt;EM&gt;CSO/PH command:&lt;/EM&gt; ", 31 );
              ebx( Target, buf, strlen( buf ) );
              ebp( (long long)( Target ), (long long)0 );
              memcpy( buf, "&lt;/H2&gt;\n", 7 );
              ebx( Target, buf, strlen( buf ) );
              if ( WWW_TraceFlag )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTLoadCSO: Writing command `" );
                }
                trace_bstring( command );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "' to socket %d\n", s );
                }
              }
              status = write( s, 0, 0 );
              HTSABFree( &command );
              if ( status < 0 )
              {
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTLoadCSO: Unable to send command.\n" );
                }
                free_CSOfields( );
              }
              else
              {
                generate_cso_report( Target );
                close( s );
                ;
              }
            }
          }
        }
      }
    }
  }
}
int HTLoadGopher( char *arg, HTParentAnchor *anAnchor, HTFormat format_out, HTStream *sink )
{
  int ebp_48;
  char *command;
  int status;
  char gtype;
  char *selector;
  if ( acceptable_inited == 0 )
    init_acceptable( );
  if ( arg == 0 )
  {
    return -3;
  }
  if ( arg == 0 )
  {
    return -2;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTGopher: Looking for %s\n", arg );
  }
{
  int len = strlen( arg );
  if ( len > 5 && strcmp( &arg[ len + -6 ], ":105/2" ) == 0 )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTGopher: Passing to CSO/PH gateway.\n" );
    }
  }
  else
  {
    if ( strstr( arg, ":79/0" ) )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "HTGopher: Passing to finger gateway.\n" );
      }
    }
    else
    {
      char *p1 = HTParse( arg, "", 5 );
      gtype = '1';
      selector = p1;
      selector++;
      if ( ( ( selector == '/' ) & 255 ) && selector )
      {
        gtype = selector;
        selector++;
      }
      if ( gtype == '7' )
      {
        char *query;
        HTAnchor_setIndex( anAnchor, &anAnchor->address );
        query = strchr( selector, '?' );
        if ( query == 0 || query[1] == 0 )
        {
          target = HTML_new( anAnchor, format_out, &sink[0]._HTStream );
          targetClass.name = (char*)target[0]._HTStructured;
          targetClass._free = &target[0]._HTStructured;
          targetClass._abort = &target[0]._HTStructured;
          targetClass.put_character = &target[0]._HTStructured;
          targetClass.put_string = &target[0]._HTStructured;
          targetClass.put_block = &target[0]._HTStructured;
          targetClass.start_element = &target[0]._HTStructured;
          targetClass.end_element = &target[0]._HTStructured;
          targetClass.put_entity = &target[0]._HTStructured;
          display_index( arg, anAnchor );
          return 200;
        }
        query[0] = 0;
        query++;
        command = malloc( ( strlen( selector ) + strlen( query ) + 4 ) * sizeof( char ) );
        if ( command == 0 )
          outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadGopher" );
        de_escape( command, selector );
        memcpy( command + strlen( command ) );
      {
        char *p = query;
        for ( ; p[0]; p++ )
        {
          if ( p[0] == '+' )
            p[0] = ' ';
          // p++;
        }
        de_escape( command + strlen( command ), query );
      }
      }
      else
      {
        if ( gtype == '2' )
        {
          char *query = strchr( selector, '?' );
          if ( query == 0 || query[1] == 0 )
          {
            target = HTML_new( anAnchor, format_out, &sink[0]._HTStream );
            targetClass.name = (char*)target[0]._HTStructured;
            targetClass._free = &target[0]._HTStructured;
            targetClass._abort = &target[0]._HTStructured;
            targetClass.put_character = &target[0]._HTStructured;
            targetClass.put_string = &target[0]._HTStructured;
            targetClass.put_block = &target[0]._HTStructured;
            targetClass.start_element = &target[0]._HTStructured;
            targetClass.end_element = &target[0]._HTStructured;
            targetClass.put_entity = &target[0]._HTStructured;
            display_cso( arg, anAnchor );
            return 200;
          }
          HTAnchor_setIndex( anAnchor, &anAnchor->address );
          query[0] = 0;
          query++;
          command = malloc( ( strlen( query ) + 9 ) * sizeof( char ) );
          if ( command == 0 )
            outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadGopher" );
          de_escape( command, selector );
          memcpy( command, "query ", 7 );
        {
          char *p = query;
          for ( ; p[0]; p++ )
          {
            if ( p[0] == '+' )
              p[0] = ' ';
            // p++;
          }
          de_escape( command + strlen( command ), query );
        }
        }
        else
        {
          command = malloc( ( strlen( selector ) + 3 ) * sizeof( char ) );
          if ( command == 0 )
            outofmem( "../../../WWW/Library/Implementation/HTGopher.c", "HTLoadGopher" );
          de_escape( command, selector );
        }
      }
      if ( p1 )
      {
        free( p1 );
      }
    {
      char *p = command + strlen( command );
      p[0] = '\r';
      p++;
      p[0] = '\n';
      p++;
      p[0] = 0;
      ebp_48 = p[1];
      status = HTDoConnect( arg, "gopher", 70, &s );
      if ( status == -29998 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTGopher: Interrupted on connect; recovering cleanly.\n" );
        }
        mustshow = 1;
        HTProgress( gettext( "Connection interrupted." ) );
        if ( command )
        {
          free( command );
          command = 0;
        }
        return -29999;
      }
      else
      {
        if ( status < 0 )
        {
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTGopher: Unable to connect to remote host for `%s'.\n", arg );
          }
          if ( command )
          {
            free( command );
            command = 0;
          }
        }
        else
        {
          HTInitInput( s );
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "HTGopher: Connected, writing command `%s' to socket %d\n", command, s );
          }
          mustshow = 1;
          HTProgress( gettext( "Sending Gopher request." ) );
          status = write( s, command, strlen( command ) );
          if ( command )
          {
            free( command );
            command = 0;
          }
          if ( status < 0 )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTGopher: Unable to send command.\n" );
            }
          }
          else
          {
            mustshow = 1;
            HTProgress( gettext( "Gopher request sent; waiting for response." ) );
            switch ( gtype + -48 )
            {
            case 0:
              HTParseSocket( HTAtom_for( "text/plain" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            case 24:
            case 56:
              HTParseSocket( HTAtom_for( "text/html" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            case 10:
            case 25:
            case 55:
              HTParseSocket( HTAtom_for( "image/gif" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            case 1:
            case 7:
              target = HTML_new( anAnchor, format_out, &sink[0]._HTStream );
              targetClass.name = (char*)target[0]._HTStructured;
              targetClass._free = &target[0]._HTStructured;
              targetClass._abort = &target[0]._HTStructured;
              targetClass.put_character = &target[0]._HTStructured;
              targetClass.put_string = &target[0]._HTStructured;
              targetClass.put_block = &target[0]._HTStructured;
              targetClass.start_element = &target[0]._HTStructured;
              targetClass.end_element = &target[0]._HTStructured;
              targetClass.put_entity = &target[0]._HTStructured;
              parse_menu( arg, anAnchor );
              break;
            case 2:
              target = HTML_new( anAnchor, format_out, &sink[0]._HTStream );
              targetClass.name = (char*)target[0]._HTStructured;
              targetClass._free = &target[0]._HTStructured;
              targetClass._abort = &target[0]._HTStructured;
              targetClass.put_character = &target[0]._HTStructured;
              targetClass.put_string = &target[0]._HTStructured;
              targetClass.put_block = &target[0]._HTStructured;
              targetClass.start_element = &target[0]._HTStructured;
              targetClass.end_element = &target[0]._HTStructured;
              targetClass.put_entity = &target[0]._HTStructured;
              parse_cso( arg, anAnchor );
              break;
            case 12:
            case 67:
              HTParseSocket( HTAtom_for( "audio/basic" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            case 11:
              HTParseSocket( HTAtom_for( "video/mpeg" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            case 32:
              HTParseSocket( HTAtom_for( "application/pdf" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            default:
              HTParseSocket( HTAtom_for( "www/unknown" ), format_out, anAnchor, s, &sink[0]._HTStream );
              break;
            }
            close( s );
            return 200;
          }
        }
      }
    }
    }
  }
}
}
#if 0
#endif
