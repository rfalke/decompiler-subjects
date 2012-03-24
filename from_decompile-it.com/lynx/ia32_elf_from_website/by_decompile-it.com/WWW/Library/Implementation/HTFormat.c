#include "HTFormat.c.h"
static float HTMaxSecs;
BOOLEAN HTOutputSource;
HTList *HTPresentations;
HTPresentation *default_presentation;
static char input_buffer[4096];
static char *input_pointer;
static char *input_limit;
static int input_file_number;
int interrupted_in_htgetcharacter;
static HTStreamClass NetToTextClass;
static HTStream HTBaseStreamInstance;
static HTStreamClass HTErrorStreamClass;
void HTSetPresentation( char *representation, char *command, char *testcommand, double quality, double secs, double secs_per_byte, long maxbytes, AcceptMedia media )
{
  HTPresentation *pres = calloc( 1, sizeof( HTPresentation ) );
  if ( pres == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTFormat.c", "HTSetPresentation" );
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTSetPresentation rep=%s, command=%s, test=%s, qual=%f\n", "", "", "", quality );
  }
  pres->rep->next = HTAtom_for( representation );
  pres->rep_out = HTAtom_for( "www/present" );
  pres->converter = HTSaveAndExecute;
  pres->quality = quality;
  pres->secs = secs;
  pres->secs_per_byte = secs_per_byte;
  pres->maxbytes & 0xFFFFFFFF = maxbytes;
  pres->maxbytes << 32 = maxbytes >> 31;
  pres->get_accept = 0;
  pres->accept_opt = media;
  pres->command = 0;
  HTSACopy( &pres->command, command );
  pres->testcommand = 0;
  HTSACopy( &pres->testcommand, testcommand );
  if ( HTPresentations == 0 )
  {
    HTPresentations = HTList_new( );
  }
  if ( strcmp( representation, "*" ) == 0 )
  {
    if ( default_presentation )
    {
      free( default_presentation );
      default_presentation = 0;
    }
    default_presentation = pres;
  }
  else
  {
    HTList_addObject( HTPresentations, (void*)pres );
  }
  return;
}
void HTSetConversion( char *representation_in, char *representation_out, HTConverter *converter, float quality, float secs, float secs_per_byte, long maxbytes, AcceptMedia media )
{
  HTPresentation *pres = calloc( 1, sizeof( HTPresentation ) );
  if ( pres == 0 )
    outofmem( "../../../WWW/Library/Implementation/HTFormat.c", "HTSetConversion" );
  if ( WWW_TraceFlag && ( WWW_TraceMask & 8 ) )
  {
    fprintf( TraceFP( ), "HTSetConversion rep_in=%s, rep_out=%s, qual=%f\n", "", "", quality );
  }
  pres->rep->next = HTAtom_for( representation_in );
  pres->rep_out = HTAtom_for( representation_out );
  pres->converter = converter;
  pres->command = 0;
  pres->testcommand = 0;
  pres->quality = quality;
  pres->secs = secs;
  pres->secs_per_byte = secs_per_byte;
  pres->maxbytes & 0xFFFFFFFF = maxbytes;
  pres->maxbytes << 32 = maxbytes >> 31;
  pres->get_accept = 1;
  pres->accept_opt = media;
  if ( HTPresentations == 0 )
  {
    HTPresentations = HTList_new( );
  }
  HTList_addObject( HTPresentations, (void*)pres );
  return;
}
void HTInitInput( int file_number )
{
  input_file_number = file_number;
  input_pointer = input_limit = input_buffer;
  return;
}
int HTGetCharacter( void )
{
  char ch;
  interrupted_in_htgetcharacter = 0;
  do
  {
    if ( input_limit <= input_pointer )
    {
      int status = HTDoRead( input_file_number, input_buffer, 4096 );
      if ( status <= 0 )
      {
        if ( status == 0 )
        {
          return -1;
        }
        if ( status == -29998 )
        {
          if ( WWW_TraceFlag == 0 )
          {
            interrupted_in_htgetcharacter = 1;
            return -1;
          }
          fprintf( TraceFP( ), "HTFormat: Interrupted in HTGetCharacter\n" );
          interrupted_in_htgetcharacter = 1;
          return -1;
        }
        else
        {
          if ( WWW_TraceFlag == 0 )
          {
            return -1;
          }
          fprintf( TraceFP( ), "HTFormat: File read error %d\n", status );
          return -1;
        }
      }
      else
      {
        input_pointer = input_buffer;
        input_limit = &input_buffer[ status ];
      }
    }
    ch = input_pointer[0];
    input_pointer++;
  }
  while ( ch != '\r' );
  return ch;
}
int half_match( char *trial_type, char *target )
{
  char *cp = strchr( trial_type, ebp_36 );
  if ( cp == 0 || cp[1] != '*' )
  {
    return 0;
  }
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFormat: comparing %s and %s for half match\n", trial_type, target );
  }
  if ( strncmp( trial_type, target, ( cp - trial_type ) + -1 ) == 0 )
  {
    return 1;
  }
  return 0;
}
BOOLEAN failsMailcap( HTPresentation *pres, HTParentAnchor *anchor )
{
  return 0;
}
HTPresentation *HTFindPresentation( HTFormat rep_in, HTFormat rep_out, HTPresentation *fill_in, HTParentAnchor *anchor )
{
  HTAtom *wildcard = 0;
  int n;
  int i;
  HTPresentation *pres;
  HTPresentation *match;
  HTPresentation *strong_wildcard_match = 0;
  HTPresentation *weak_wildcard_match = 0;
  HTPresentation *last_default_match = 0;
  HTPresentation *strong_subtype_wildcard_match = 0;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFormat: Looking up presentation for %s to %s\n", &rep_in->name, &rep_out->name );
  }
  n = HTList_count( HTPresentations );
  i = 0;
  for ( ; i < n; i++ )
  {
    pres = (HTPresentation*)HTList_objectAt( HTPresentations, i );
    if ( pres->rep->next == rep_in )
    {
      if ( pres->rep_out == rep_out )
      {
        if ( ( failsMailcap( pres, anchor ) & 255 ) == 0 )
        {
          if ( WWW_TraceFlag == 0 )
          {
            return pres;
          }
          fprintf( TraceFP( ), "FindPresentation: found exact match: %s -&gt; %s\n", (char*)pres->rep_out, &pres->rep_out->name );
          return pres;
        }
        else
        {
          // i++;
        }
      }
      else
      {
        if ( fill_in )
        {
          if ( wildcard == 0 )
          {
            wildcard = HTAtom_for( "*" );
          }
          if ( pres->rep_out == wildcard )
          {
            if ( ( failsMailcap( pres, anchor ) & 255 ) == 0 )
            {
              if ( strong_wildcard_match == 0 )
                strong_wildcard_match = pres;
              if ( WWW_TraceFlag )
              {
                fprintf( TraceFP( ), "StreamStack: found strong wildcard match: %s -&gt; %s\n", (char*)pres->rep_out, &pres->rep_out->name );
              }
            }
          }
        }
      }
    }
    else
    {
      if ( fill_in )
      {
        if ( half_match( (char*)pres->rep_out, &rep_in->name ) && pres->rep_out == rep_out )
        {
          if ( ( failsMailcap( pres, anchor ) & 255 ) == 0 )
          {
            if ( strong_subtype_wildcard_match == 0 )
              strong_subtype_wildcard_match = pres;
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "StreamStack: found strong subtype wildcard match: %s -&gt; %s\n", (char*)pres->rep_out, &pres->rep_out->name );
            }
          }
        }
      }
    }
    if ( pres->rep->next == WWW_SOURCE )
    {
      if ( pres->rep_out == rep_out )
      {
        if ( ( failsMailcap( pres, anchor ) & 255 ) == 0 )
        {
          if ( weak_wildcard_match == 0 )
            weak_wildcard_match = pres;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "StreamStack: found weak wildcard match: %s\n", &pres->rep_out->name );
          }
        }
      }
      else
      {
        if ( last_default_match == 0 )
        {
          if ( wildcard == 0 )
          {
            wildcard = HTAtom_for( "*" );
          }
          if ( pres->rep_out == wildcard && ( failsMailcap( pres, anchor ) & 255 ) == 0 )
            last_default_match = pres;
        }
      }
    }
  }
  match = strong_subtype_wildcard_match ? strong_subtype_wildcard_match : strong_wildcard_match ? strong_wildcard_match : last_default_match;
  if ( match )
  {
    fill_in->rep->next = match->rep->next;
    fill_in->rep_out = match->rep_out;
    fill_in->converter = match->converter;
    fill_in->command = match->command;
    fill_in->testcommand = match->testcommand;
    fill_in->quality = match->quality;
    fill_in->secs = match->secs;
    fill_in->secs_per_byte = match->secs_per_byte;
    fill_in->maxbytes & 0xFFFFFFFF = match->maxbytes & 0xFFFFFFFF;
    fill_in->maxbytes << 32 = match->maxbytes << 32;
    fill_in->get_accept = match->get_accept;
    fill_in->accept_opt = match->accept_opt;
    fill_in->rep->next = rep_in;
    fill_in->rep_out = rep_out;
    return fill_in;
  }
  return 0;
}
HTStream *HTStreamStack( HTFormat rep_in, HTFormat rep_out, HTStream *sink, HTParentAnchor *anchor )
{
  HTPresentation temp;
  HTPresentation *match;
  HTStream *result;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFormat: Constructing stream stack for %s to %s (%s)\n", &rep_in->name, &rep_out->name, "(null)" );
  }
  if ( rep_out == rep_in )
    result = sink;
  else
  {
    match = HTFindPresentation( rep_in, rep_out, &temp, anchor );
    if ( match )
    {
      if ( temp.rep == match )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "StreamStack: Using %s\n", &temp.rep_out->name );
        }
      }
      else
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "StreamStack: found exact match: %s -&gt; %s\n", (char*)match->rep_out, &match->rep_out->name );
      }
      match->converter( match, anchor, sink );
      result = &(HTStream*)(match->rep->next);
    }
    else
      result = 0;
  }
  if ( WWW_TraceFlag )
  {
    if ( result && result->isa->name[0] && result )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "StreamStack: Returning \"%s\"\n", (char*)result->isa );
      }
    }
    else
    if ( result )
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "StreamStack: Returning *unknown* stream!\n" );
      }
    }
    else
    {
      if ( WWW_TraceFlag )
      {
        fprintf( TraceFP( ), "StreamStack: Returning NULL!\n" );
      }
      if ( WWW_TraceFlag )
      {
        fflush( TraceFP( ) );
      }
    }
  }
  return result;
}
void HTReorderPresentation( HTFormat rep_in, HTFormat rep_out )
{
  HTPresentation *match = HTFindPresentation( rep_in, rep_out, ebp_32, ebp_32 );
  if ( match )
  {
    HTList_removeObject( HTPresentations, (void*)match );
    HTList_addObject( HTPresentations, (void*)match );
  }
  return;
}
void HTFilterPresentations( void )
{
  int i, j;
  int n = HTList_count( HTPresentations );
  HTPresentation *p, *q;
  BOOLEAN matched;
  char *s, *t;
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFilterPresentations (AcceptMedia %#x)\n", LYAcceptMedia );
  }
  i = 0;
  for ( ; i < n; i++ )
  {
    p = (HTPresentation*)HTList_objectAt( HTPresentations, i );
    s = (char*)p->rep_out;
    p->get_accept = 0;
    if ( ( p->accept_opt & LYAcceptMedia ) && p->rep_out == HTAtom_for( "www/present" ) && p->rep->next != WWW_SOURCE && strcasecomp( s, "www/mime" ) && strcasecomp( s, "www/compressed" ) && p->quality <= 1.000000000000 && p->quality >= 0 )
    {
      matched = 1;
      j = 0;
      for ( ; j < i; j++ )
      {
        q = (HTPresentation*)HTList_objectAt( HTPresentations, j );
        t = (char*)q->rep_out;
        if ( strcasecomp( s, t ) == 0 )
        {
          matched = 0;
          if ( WWW_TraceFlag )
          {
            fprintf( TraceFP( ), "  match %s %s\n", s, t );
            break;
          }
          else
            break;
        }
        else
        {
          // j++;
        }
      }
      p->get_accept = matched;
    }
    // i++;
  }
  return;
}
float HTStackValue( HTFormat rep_in, HTFormat rep_out, float initial_value, long length )
{
  HTAtom *wildcard = HTAtom_for( "*" );
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTFormat: Evaluating stream stack for %s worth %.3f to %s\n", &rep_in->name, initial_value, &rep_out->name );
  }
  if ( rep_out == WWW_SOURCE || rep_out == rep_in )
  {
  }
{
  int n = HTList_count( HTPresentations );
  int i = 0;
  HTPresentation *pres;
  for ( ; i < n; i++ )
  {
    pres = (HTPresentation*)HTList_objectAt( HTPresentations, i );
    if ( pres->rep->next == rep_in && ( pres->rep_out == rep_out || pres->rep_out == wildcard ) )
    {
      float value = pres->quality * initial_value;
      if ( HTMaxSecs <= 0 )
      {
        break;
      }
      value -= ( ( (double)( length ) * pres->secs_per_byte ) + pres->secs ) / HTMaxSecs;
      break;
    }
    else
    {
      // i++;
    }
  }
}
  return -1000000015047466219920712269824.000000000000;
}
void HTDisplayPartial( void )
{
  if ( display_partial )
  {
    int Newline_partial = LYGetNewline( );
    if ( NumOfLines_partial < display_lines + Newline_partial + -1 && display_lines + Newline_partial + -1 <= HText_getNumOfLines( ) && ( LYMainLoop_pageDisplay( Newline_partial ) & 255 ) )
    {
      NumOfLines_partial = HText_getNumOfLines( );
    }
  }
  return;
}
void HTFinishDisplayPartial( void )
{
  display_partial = 0;
  return;
}
int HTCopy( HTParentAnchor *anchor, int file_number, void *handle, HTStream *sink )
{
  HTStreamClass targetClass;
  BOOLEAN suppress_readprogress = 0;
  int bytes;
  int rv = 0;
  targetClass.name = (char*)sink->isa;
  targetClass._free = &sink->had_cr;
  targetClass._abort = ((void)( HTStream *, HTError  )*)sink->sink->isa->name;
  targetClass.put_character = &sink->_HTStream;
  targetClass.put_string = &sink->_HTStream;
  targetClass.put_block = &sink->_HTStream;
  bytes = 0;
  HTReadProgress( (long long)0, (long long)0 );
{
  while ( LYCancelDownload == 0 )
  {
    if ( HTCheckForInterrupt( ) )
    {
      mustshow = 1;
      HTProgress( gettext( "Data transfer interrupted." ) );
      targetClass._abort( sink, 0 );
      if ( bytes )
        rv = -29998;
      else
        rv = -1;
    }
    else
    {
      status = HTDoRead( file_number, input_buffer, 4096 );
      if ( status <= 0 )
      {
        if ( status )
        {
          if ( status == -29998 )
          {
            mustshow = 1;
            HTProgress( gettext( "Data transfer interrupted." ) );
            targetClass._abort( sink, 0 );
            if ( bytes )
              rv = -29998;
            else
              rv = -1;
          }
          else
          {
            if ( *(int*)(__errno_location( )) == 107 || *(int*)(__errno_location( )) == 104 || *(int*)(__errno_location( )) == 32 )
            {
              if ( bytes <= 0 )
                rv = -2;
              else
              {
                HTInetStatus( "NETREAD" );
                HTAlert( "Unexpected server disconnect." );
                if ( WWW_TraceFlag )
                {
                  fprintf( TraceFP( ), "HTCopy: Unexpected server disconnect. Treating as completed.\n" );
                }
                status = 0;
              }
            }
            else
            {
              HTInetStatus( "NETREAD" );
              HTAlert( "Unexpected read error." );
              if ( bytes )
              {
                close( file_number );
                rv = 200;
              }
              else
              {
                targetClass._abort( sink, 0 );
                rv = -1;
              }
            }
          }
        }
        mustshow = 1;
        HTProgress( gettext( "Data transfer complete" ) );
        close( file_number );
        rv = 200;
      }
      else
      {
        *(int*)&suppress_readprogress = 0;
        targetClass.put_block( sink, input_buffer, status );
        bytes += status;
        if ( suppress_readprogress == 0 )
        {
          HTReadProgress( bytes, (long long)0 );
        }
        HTDisplayPartial( );
      }
    }
    HTFinishDisplayPartial( );
    return rv;
  }
  LYCancelDownload = 0;
  targetClass._abort( sink, 0 );
  rv = -1;
}
}
int HTFileCopy( FILE *fp, HTStream *sink )
{
  HTStreamClass targetClass;
  int status, bytes;
  int rv = 0;
  targetClass.name = (char*)sink->isa;
  targetClass._free = &sink->had_cr;
  targetClass._abort = ((void)( HTStream *, HTError  )*)sink->sink->isa->name;
  targetClass.put_character = &sink->_HTStream;
  targetClass.put_string = &sink->_HTStream;
  targetClass.put_block = &sink->_HTStream;
  bytes = 0;
  HTReadProgress( (long long)0, (long long)0 );
  do
  {
    status = fread( input_buffer, 1, 4096, fp );
    if ( status == 0 )
    {
      if ( ferror( fp ) == 0 )
        rv = 200;
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTFormat: Read error, read returns %d\n", ferror( fp ) );
        }
        if ( bytes )
          rv = 206;
        else
          rv = -1;
      }
    }
    else
    {
      targetClass.put_block( sink, input_buffer, status );
      bytes += status;
      HTReadProgress( bytes, (long long)0 );
      if ( display_partial && HTMainAnchor->content_length != bytes )
        HTDisplayPartial( );
    }
    HTFinishDisplayPartial( );
    return rv;
  }
  while ( HTCheckForInterrupt( ) );
  mustshow = 1;
  HTProgress( gettext( "Data transfer interrupted." ) );
  if ( bytes )
    rv = -29998;
  else
    rv = -1;
}
int HTMemCopy( HTChunk *chunk, HTStream *sink )
{
  HTStreamClass targetClass;
  int bytes = 0;
  int rv = 0;
  targetClass.name = (char*)sink->isa;
  targetClass._free = &sink->had_cr;
  targetClass._abort = ((void)( HTStream *, HTError  )*)sink->sink->isa->name;
  targetClass.put_character = &sink->_HTStream;
  targetClass.put_string = &sink->_HTStream;
  targetClass.put_block = &sink->_HTStream;
  HTReadProgress( (long long)0, (long long)0 );
  for ( ; chunk;  )
  {
    targetClass.put_block( sink, &chunk->data, chunk->size );
    bytes += chunk->size;
    HTReadProgress( bytes, (long long)0 );
    HTDisplayPartial( );
    if ( HTCheckForInterrupt( ) )
    {
      mustshow = 1;
      HTProgress( gettext( "Data transfer interrupted." ) );
      if ( bytes )
      {
        rv = -29998;
        break;
      }
      else
      {
        rv = -1;
        break;
      }
    }
    else
    {
      chunk = &chunk->next;
    }
  }
  HTFinishDisplayPartial( );
  return rv;
}
int HTGzFileCopy( gzFile gzfp, HTStream *sink )
{
  HTStreamClass targetClass;
  int status, bytes;
  int gzerrnum;
  int rv = 0;
  targetClass.name = (char*)sink->isa;
  targetClass._free = &sink->had_cr;
  targetClass._abort = ((void)( HTStream *, HTError  )*)sink->sink->isa->name;
  targetClass.put_character = &sink->_HTStream;
  targetClass.put_string = &sink->_HTStream;
  targetClass.put_block = &sink->_HTStream;
  bytes = 0;
  HTReadProgress( (long long)0, (long long)0 );
  do
  {
    status = gzread( gzfp, input_buffer, 4096 );
    if ( status <= 0 )
    {
      if ( status == 0 )
        rv = 200;
      else
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTGzFileCopy: Read error, gzread returns %d\n", status );
        }
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "gzerror   : %s\n", gzerror( gzfp, &gzerrnum ) );
        }
        if ( WWW_TraceFlag && gzerrnum == -1 )
          perror( "gzerror   " );
        if ( bytes )
          rv = 206;
        else
          rv = -1;
      }
    }
    else
    {
      targetClass.put_block( sink, input_buffer, status );
      bytes += status;
      HTReadProgress( bytes, (long long)-1 );
      HTDisplayPartial( );
    }
    HTFinishDisplayPartial( );
    return rv;
  }
  while ( HTCheckForInterrupt( ) );
  mustshow = 1;
  HTProgress( gettext( "Data transfer interrupted." ) );
  if ( bytes )
    rv = -29998;
  else
    rv = -1;
}
char *LynxZError( int status )
{
  static char result[80];
  sprintf( result, "zlib error %d", status );
  return result;
}
int HTZzFileCopy( FILE *zzfp, HTStream *sink )
{
  int eax;
  static char dummy_head[2] = { 'x', 1 };
  z_stream s;
  HTStreamClass targetClass;
  int bytes;
  int rv = 0;
  char output_buffer[4096];
  int status;
  int flush;
  int retry = 0;
  int len = 0;
  targetClass.name = (char*)sink->isa;
  targetClass._free = &sink->had_cr;
  targetClass._abort = ((void)( HTStream *, HTError  )*)sink->sink->isa->name;
  targetClass.put_character = &sink->_HTStream;
  targetClass.put_string = &sink->_HTStream;
  targetClass.put_block = &sink->_HTStream;
  s.zalloc = 0;
  s.zfree = 0;
  s.opaque = 0;
  status = inflateInit_( s.next_in, "1.2.3.3", 56 );
  if ( status )
  {
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTZzFileCopy inflateInit() %s\n", LynxZError( status ) );
    }
    exit_immediately( 1 );
  }
  s.avail_in = 0;
  s.next_out = output_buffer;
  s.avail_out = 4096;
  flush = 0;
  bytes = 0;
  HTReadProgress( (long long)0, (long long)0 );
  while ( 1 )
  {
    if ( s.avail_in == 0 )
    {
      s.next_in = input_buffer;
      len = s.avail_in = fread( input_buffer, 1, 4096, zzfp );
    }
    status = inflate( s.next_in, flush );
    if ( status == 1 || status == -5 )
      break;
    else
    {
      if ( status == -3 )
      {
        retry++;
        if ( ( ( ( retry == 0 ) ^ 1 ) & 255 ) == 0 )
        {
          status = inflateReset( s.next_in );
          if ( status )
          {
            if ( WWW_TraceFlag )
            {
              fprintf( TraceFP( ), "HTZzFileCopy inflateReset() %s\n", LynxZError( status ) );
            }
            rv = -1;
          }
          else
          {
            s.next_in = dummy_head;
            s.avail_in = 2;
            status = inflate( s.next_in, flush );
            s.next_in = input_buffer;
            s.avail_in = len;
          }
        }
      }
      if ( status )
      {
        if ( WWW_TraceFlag )
        {
          fprintf( TraceFP( ), "HTZzFileCopy inflate() %s\n", LynxZError( status ) );
        }
        rv = -1;
      }
      else
      {
        if ( s.avail_out == 0 )
        {
          len = 4096;
          s.next_out = output_buffer;
          s.avail_out = 4096;
          targetClass.put_block( sink, output_buffer, len );
          bytes += len;
          HTReadProgress( bytes, (long long)-1 );
          HTDisplayPartial( );
          if ( HTCheckForInterrupt( ) )
          {
            mustshow = 1;
            HTProgress( gettext( "Data transfer interrupted." ) );
            rv = -1;
          }
        }
        retry = 1;
      }
    }
    inflateEnd( s.next_in );
    HTFinishDisplayPartial( );
    return rv;
  }
  len = 4096 - s.avail_out;
  if ( len > 0 )
  {
    targetClass.put_block( sink, output_buffer, len );
    bytes += len;
    HTReadProgress( bytes, (long long)-1 );
    HTDisplayPartial( );
  }
  rv = 200;
}
void HTCopyNoCR( HTParentAnchor *anchor, int file_number, HTStream *sink )
{
  HTStreamClass targetClass;
  int character;
  targetClass.name = (char*)sink->isa;
  targetClass._free = &sink->had_cr;
  targetClass._abort = ((void)( HTStream *, HTError  )*)sink->sink->isa->name;
  targetClass.put_character = &sink->_HTStream;
  targetClass.put_string = &sink->_HTStream;
  targetClass.put_block = &sink->_HTStream;
  HTInitInput( file_number );
  while ( character == -1 )
  {
    targetClass.put_character( sink, character );
  }
  return;
}
int HTParseSocket( HTFormat rep_in, HTFormat format_out, HTParentAnchor *anchor, int file_number, HTStream *sink )
{
  HTStream *stream = HTStreamStack( rep_in, format_out, sink, anchor );
  HTStreamClass targetClass;
  int rv;
  if ( stream == 0 )
  {
    char *buffer = 0;
    if ( LYCancelDownload )
    {
      LYCancelDownload = 0;
      return -1;
    }
    HTSprintf0( &buffer, gettext( "Sorry, no known way of converting %s to %s." ), rep_in->name, format_out->name );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFormat: %s\n", buffer );
    }
    rv = HTLoadError( &sink->isa->name[0], 501, buffer );
    if ( buffer == 0 )
    {
      return rv;
    }
    free( buffer );
    buffer = 0;
  }
  else
  {
    targetClass.name = (char*)stream->isa;
    targetClass._free = &stream->had_cr;
    targetClass._abort = ((void)( HTStream *, HTError  )*)stream->sink->isa->name;
    targetClass.put_character = &stream->_HTStream;
    targetClass.put_string = &stream->_HTStream;
    targetClass.put_block = &stream->_HTStream;
    rv = HTCopy( anchor, file_number, 0, stream );
    if ( rv != -1 && rv != -29998 )
      targetClass._free( stream );
  }
}
int HTParseFile( HTFormat rep_in, HTFormat format_out, HTParentAnchor *anchor, FILE *fp, HTStream *sink )
{
  HTStream *stream = HTStreamStack( rep_in, format_out, sink, anchor );
  HTStreamClass targetClass;
  int rv;
  if ( stream == 0 )
  {
    char *buffer = 0;
    if ( LYCancelDownload )
    {
      LYCancelDownload = 0;
      return -1;
    }
    HTSprintf0( &buffer, gettext( "Sorry, no known way of converting %s to %s." ), rep_in->name, format_out->name );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFormat(in HTParseFile): %s\n", buffer );
    }
    rv = HTLoadError( &sink->isa->name[0], 501, buffer );
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
    return rv;
  }
  else
  {
    targetClass.name = (char*)stream->isa;
    targetClass._free = &stream->had_cr;
    targetClass._abort = ((void)( HTStream *, HTError  )*)stream->sink->isa->name;
    targetClass.put_character = &stream->_HTStream;
    targetClass.put_string = &stream->_HTStream;
    targetClass.put_block = &stream->_HTStream;
    rv = HTFileCopy( fp, stream );
    if ( rv == -1 || rv == -29998 )
      targetClass._abort( stream, 0 );
    else
      targetClass._free( stream );
    if ( rv == -1 )
    {
      return -204;
    }
    switch ( rv )
    {
    case 200:
    case -29998:
      return 206;
      break;
//    case 200:
      return 200;
      break;
    }
  }
}
int HTParseMem( HTFormat rep_in, HTFormat format_out, HTParentAnchor *anchor, HTChunk *chunk, HTStream *sink )
{
  HTStream *stream = HTStreamStack( rep_in, format_out, sink, anchor );
  HTStreamClass targetClass;
  int rv;
  if ( stream == 0 )
  {
    char *buffer = 0;
    HTSprintf0( &buffer, gettext( "Sorry, no known way of converting %s to %s." ), rep_in->name, format_out->name );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFormat(in HTParseMem): %s\n", buffer );
    }
    rv = HTLoadError( &sink->isa->name[0], 501, buffer );
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
    return rv;
  }
  else
  {
    targetClass.name = (char*)stream->isa;
    targetClass._free = &stream->had_cr;
    targetClass._abort = ((void)( HTStream *, HTError  )*)stream->sink->isa->name;
    targetClass.put_character = &stream->_HTStream;
    targetClass.put_string = &stream->_HTStream;
    targetClass.put_block = &stream->_HTStream;
    rv = HTMemCopy( chunk, stream );
    targetClass._free( stream );
    return 200;
  }
}
int HTCloseGzFile( gzFile gzfp )
{
  int gzres;
  if ( gzfp == 0 )
  {
    return 0;
  }
  gzres = gzclose( gzfp );
  if ( WWW_TraceFlag )
  {
    if ( gzres == -1 )
      perror( "gzclose   " );
    else
    if ( gzres && WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "gzclose   : error number %d\n", gzres );
    }
  }
  return gzres;
}
int HTParseGzFile( HTFormat rep_in, HTFormat format_out, HTParentAnchor *anchor, gzFile gzfp, HTStream *sink )
{
  HTStream *stream = HTStreamStack( rep_in, format_out, sink, anchor );
  HTStreamClass targetClass;
  int rv;
  if ( stream == 0 )
  {
    char *buffer = 0;
    HTCloseGzFile( gzfp );
    if ( LYCancelDownload )
    {
      LYCancelDownload = 0;
      return -1;
    }
    HTSprintf0( &buffer, gettext( "Sorry, no known way of converting %s to %s." ), rep_in->name, format_out->name );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFormat(in HTParseGzFile): %s\n", buffer );
    }
    rv = HTLoadError( &sink->isa->name[0], 501, buffer );
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
    return rv;
  }
  else
  {
    targetClass.name = (char*)stream->isa;
    targetClass._free = &stream->had_cr;
    targetClass._abort = ((void)( HTStream *, HTError  )*)stream->sink->isa->name;
    targetClass.put_character = &stream->_HTStream;
    targetClass.put_string = &stream->_HTStream;
    targetClass.put_block = &stream->_HTStream;
    rv = HTGzFileCopy( gzfp, stream );
    if ( rv == -1 || rv == -29998 )
      targetClass._abort( stream, 0 );
    else
      targetClass._free( stream );
    HTCloseGzFile( gzfp );
    if ( rv == -1 )
    {
      return -204;
    }
    switch ( rv )
    {
    case 200:
    case -29998:
      return 206;
      break;
//    case 200:
      return 200;
      break;
    }
  }
}
int HTParseZzFile( HTFormat rep_in, HTFormat format_out, HTParentAnchor *anchor, FILE *zzfp, HTStream *sink )
{
  HTStream *stream = HTStreamStack( rep_in, format_out, sink, anchor );
  HTStreamClass targetClass;
  int rv;
  if ( stream == 0 )
  {
    char *buffer = 0;
    fclose( zzfp );
    if ( LYCancelDownload )
    {
      LYCancelDownload = 0;
      return -1;
    }
    HTSprintf0( &buffer, gettext( "Sorry, no known way of converting %s to %s." ), rep_in->name, format_out->name );
    if ( WWW_TraceFlag )
    {
      fprintf( TraceFP( ), "HTFormat(in HTParseGzFile): %s\n", buffer );
    }
    rv = HTLoadError( &sink->isa->name[0], 501, buffer );
    if ( buffer )
    {
      free( buffer );
      buffer = 0;
    }
    return rv;
  }
  else
  {
    targetClass.name = (char*)stream->isa;
    targetClass._free = &stream->had_cr;
    targetClass._abort = ((void)( HTStream *, HTError  )*)stream->sink->isa->name;
    targetClass.put_character = &stream->_HTStream;
    targetClass.put_string = &stream->_HTStream;
    targetClass.put_block = &stream->_HTStream;
    rv = HTZzFileCopy( zzfp, stream );
    if ( rv == -1 || rv == -29998 )
      targetClass._abort( stream, 0 );
    else
      targetClass._free( stream );
    fclose( zzfp );
    if ( rv == -1 )
    {
      return -204;
    }
    switch ( rv )
    {
    case 200:
    case -29998:
      return 206;
      break;
//    case 200:
      return 200;
      break;
    }
  }
}
void NetToText_put_character( HTStream *me, char net_char )
{
  char c = net_char;
  if ( me->had_cr )
  {
    if ( c == '\n' )
    {
      me->sink->_HTStream( me->sink, 10 );
      me->had_cr = 0;
      return;
    }
    else
      me->sink->_HTStream( me->sink, 13 );
  }
  me->had_cr = c == '\r';
  if ( me->had_cr == 0 )
  {
    me->sink->_HTStream( me->sink, c );
  }
  return;
}
void NetToText_put_string( HTStream *me, char *s )
{
  char *p = s;
  for ( ; p[0]; p++ )
  {
    NetToText_put_character( me, p[0] );
    // p++;
  }
  return;
}
void NetToText_put_block( HTStream *me, char *s, int l )
{
  char *p = s;
  for ( ; p < s[ l ]; p++ )
  {
    NetToText_put_character( me, p[0] );
    // p++;
  }
  return;
}
void NetToText_free( HTStream *me )
{
  me->sink->had_cr( me->sink );
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
void NetToText_abort( HTStream *me, HTError e )
{
  me->sink->sink( me->sink, e );
  if ( me )
  {
    free( me );
    me = 0;
  }
  return;
}
HTStream *HTNetToText( HTStream *sink )
{
  HTStream *me = calloc( 1, sizeof( HTStream ) );
  if ( me == 0 )
  {
    outofmem( "../../../WWW/Library/Implementation/HTFormat.c", "NetToText" );
  }
  me->isa->name[0] = NetToTextClass.name;
  me->had_cr = 0;
  me->sink = sink;
  return me;
}
void HTErrorStream_put_character( HTStream *me, char c )
{
  LYCancelDownload = 1;
  return;
}
void HTErrorStream_put_string( HTStream *me, char *s )
{
  if ( s && s[0] )
  {
    LYCancelDownload = 1;
  }
  return;
}
void HTErrorStream_write( HTStream *me, char *s, int l )
{
  if ( l && s )
  {
    LYCancelDownload = 1;
  }
  return;
}
void HTErrorStream_free( HTStream *me )
{
  return;
}
void HTErrorStream_abort( HTStream *me, HTError e )
{
  return;
}
HTStream *HTErrorStream( void )
{
  if ( WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "ErrorStream. Created\n" );
  }
  HTBaseStreamInstance.isa = &HTErrorStreamClass;
  return &HTBaseStreamInstance;
}
#if 0
#endif
