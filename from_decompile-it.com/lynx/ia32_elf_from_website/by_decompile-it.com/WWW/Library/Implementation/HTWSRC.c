#include "HTWSRC.c.h"
static char *par_name[24];
static HTStreamClass WSRCParserClass;
char from_hex( char c )
{
  return 0;
}
void WSRCParser_put_character( HTStream *me, char c )
{
  switch ( me->state )
  {
  case 0:
    if ( c == '(' )
    {
      *(int*)&me->state = 1;
    }
    break;
  case 1:
    if ( c == ')' )
    {
      *(int*)&me->state = 8;
    }
    else
    {
      if ( c == ':' )
      {
        *(int*)&me->param_count = 0;
        *(int*)&me->state = 2;
      }
    }
    break;
  case 2:
    if ( ' ' <= c )
    {
      me->param[ me->param_count ] = 0;
      me->param_count++;
      *(int*)&me->param_number = 0;
      for ( ; par_name[ me->param_number ] && strcmp( par_name[ me->param_number ], &me->param[0] ); me->param_number++ )
      {
        // me->param_number++;
      }
      if ( par_name[ me->param_number ] == 0 )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTWSRC: Unknown field `%s' in source file\n", &me->param[0] );
        }
        *(int*)&me->param_number = 22;
        *(int*)&me->state = 3;
      }
      else
      {
        *(int*)&me->state = 3;
      }
    }
    else
    {
      if ( me->param_count <= 9999 )
      {
        me->param[ me->param_count ] = c;
        me->param_count++;
      }
    }
    break;
  case 3:
    if ( c == ')' )
    {
      *(int*)&me->state = 8;
    }
    else
    {
      if ( ' ' <= c )
      {
        return;
      }
      *(int*)&me->param_count = 0;
      if ( c == '"' )
      {
        *(int*)&me->state = 6;
      }
      else
      {
        *(int*)&me->state = 6;
        me->param[ me->param_count ] = c;
        me->param_count++;
      }
    }
    break;
  case 4:
    if ( ' ' <= c )
    {
      me->param[ me->param_count ] = 0;
      HTSACopy( &me->par_value[ me->param_number ], &me->param[0] );
      *(int*)&me->state = 1;
    }
    else
    {
      if ( me->param_count <= 9999 )
      {
        me->param[ me->param_count ] = c;
        me->param_count++;
      }
    }
    break;
  case 5:
    if ( c == ')' )
    {
      me->param[ me->param_count ] = 0;
      HTSACopy( &me->par_value[ me->param_number ], &me->param[0] );
      *(int*)&me->state = 1;
    }
    else
    {
      if ( me->param_count <= 9999 )
      {
        me->param[ me->param_count ] = c;
        me->param_count++;
      }
    }
    break;
  case 6:
    if ( c == '"' )
    {
      me->param[ me->param_count ] = 0;
      HTSACopy( &me->par_value[ me->param_number ], &me->param[0] );
      *(int*)&me->state = 1;
    }
    else
    {
      if ( c == '\\' )
      {
        *(int*)&me->state = 7;
      }
      else
    }
  case 7:
    if ( me->param_count <= 9999 )
    {
      me->param[ me->param_count ] = c;
      me->param_count++;
    }
    *(int*)&me->state = 6;
    break;
  case 8:
    break;
  }
  return;
}
void give_parameter( HTStream *me, int p )
{
  ;
}
void WSRC_gen_html( HTStream *me, BOOLEAN source_file )
{
  if ( me->par_value[4] == 0 )
  {
    ;
  }
{
  char *shortname = 0;
  int l;
  HTSACopy( &shortname, &me->par_value[4] );
  l = strlen( shortname );
  if ( l > 4 && strcasecomp( &shortname[ l + -4 ], ".src" ) == 0 )
    shortname[ l + -4 ] = 0;
  ;
}
}
void WSRCParser_put_string( HTStream *context, char *str )
{
  char *p = str;
  for ( ; p[0]; p++ )
  {
    WSRCParser_put_character( context, p[0] );
    // p++;
  }
  return;
}
void WSRCParser_write( HTStream *context, char *str, int l )
{
  char *p;
  char *e = &str[ l ];
  p = str;
  for ( ; p < e; p++ )
  {
    WSRCParser_put_character( context, p[0] );
    // p++;
  }
  return;
}
void WSRCParser_free( HTStream *me )
{
  WSRC_gen_html( me, ebp_20 );
{
  int p = 0;
  for ( ; par_name[ p ]; p++ )
  {
    if ( me->par_value[ p ] )
    {
      free( &me->par_value[ p ] );
      me->par_value[ p ] = 0;
    }
    // p++;
  }
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
}
void WSRCParser_abort( HTStream *me, HTError e )
{
  WSRCParser_free( me );
  return;
}
HTStream *HTWSRCConvert( HTPresentation *pres, HTParentAnchor *anchor, HTStream *sink )
{
  HTStream *me = malloc( ( 1 ) * sizeof( HTStream ) );
  if ( me == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTWSRC.c", "HTWSRCConvert" );
  me->isa->name[0] = WSRCParserClass.name;
  me->target = HTML_new( anchor, &pres->rep_out, &sink->isa->name[0] );
{
  int p = 0;
  for ( ; p <= 22; p++ )
  {
    me->par_value[ p ] = 0;
    // p++;
  }
  *(int*)&me->state = 0;
  return me;
}
}
#if 0
#endif
