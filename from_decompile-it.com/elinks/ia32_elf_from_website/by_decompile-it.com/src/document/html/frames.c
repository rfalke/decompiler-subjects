#include "frames.c.h"
void add_frameset_entry( struct frameset_desc *frameset_desc, struct frameset_desc *subframe, unsigned char *name, unsigned char *url )
{
  int edx;
  if ( assert_failed == 0 )
  {
    assert_failed = frameset_desc[0].n == 0;
    if ( !(_Bool)( frameset_desc[0].n != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
      errline = 36;
      elinks_internal( "assertion frameset_desc failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( frameset_desc->box.y < frameset_desc->box.height )
    {
      frameset_desc->frame_desc->subframe = subframe;
      if ( name )
        stracpy( &name[0] );
      frameset_desc->frame_desc->name = stracpy( &name[0] );
      if ( url[0] && url[0] )
      {
        *(int*)(ebp_28 + 28) = get_uri( &url[0], 0 );
        if ( ebp_28 + 28 )
        {
          frameset_desc->box.x = frameset_desc->box.x;
          if ( frameset_desc->box.width <= frameset_desc->box.x )
          {
            frameset_desc->box.y++;
            frameset_desc->box.x = 0;
          }
          return;
        }
      }
      else
        frameset_desc->frame_desc->uri = 0;
      frameset_desc->frame_desc->uri = get_uri( "about:blank", 0 );
      frameset_desc->box.x = frameset_desc->box.x;
    }
    else
    {
      return;
    }
  }
  assert_failed = 0;
  return;
}
struct frameset_desc *create_frameset( struct frameset_param *fp )
{
  int eax;
  struct frameset_desc *fd;
  if ( assert_failed == 0 )
  {
    assert_failed = fp[0].parent == 0;
    if ( !(_Bool)( fp[0].parent != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
      errline = 70;
      elinks_internal( "assertion fp failed!" );
      if ( assert_failed )
      {
      }
    }
    if ( fp->x >= 1 && fp->y >= 1 )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
      errline = 74;
      elinks_internal( "assertion fp-&gt;x &gt; 0 && fp-&gt;y &gt; 0 failed: Bad size of frameset: x=%d y=%d" );
      if ( assert_failed )
      {
        assert_failed = 0;
        if ( fp->x < 1 )
          fp->x = 1;
        if ( fp->y < 1 )
          fp->y = 1;
        fd = (struct frameset_desc*)mem_calloc( 1, ( ( fp->x * 1 * 5 ) + 5 ) << 2 );
        if ( fd )
        {
          int i;
          if ( fp->x * 1 )
          {
            i = 0;
            while ( fd->frame_desc->width = fp->width[ __MOD(i,fp->x) ], i++, fd->frame_desc->height = fp->height[ i / fp->x ], i + 1 < fp->x * fd )
            {
            }
          }
          fd[0].n = fp->x * fd;
          fd->box.width = fp->x;
          fd->box.height = fp->y;
          if ( fp->parent )
          {
            add_frameset_entry( fp->parent, fd, 0, 0 );
            return fd;
          }
          return fd;
        }
        else
        {
          return fd;
        }
      }
    }
    fp->y = fp->y;
  }
  assert_failed = 0;
  fd = 0;
  return fd;
}
void format_frames( struct session *ses, struct frameset_desc *fsd, struct document_options *op, int depth )
{
  int eax;
  int edx;
  struct document_options o;
  int j, n;
  if ( assert_failed == 0 )
  {
    if ( fsd && !( ses == 0 ) && op )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
      errline = 220;
      elinks_internal( "assertion ses && fsd && op failed!" );
      if ( assert_failed )
        goto B2;
    }
    if ( depth <= 5 )
    {
      memcpy( &o.color_mode, op, 136 );
      o.margin = o.margin != 0;
      if ( fsd->box.height >= 1 )
      {
        struct frame_desc *frame_desc;
        struct document_view *doc_view;
        n = 0;
        j = 0;
        do
        {
          o.box.x = op->box.x;
          if ( fsd->box.width >= 1 )
          {
            i = 0;
            do
            {
              o.box.width = fsd->frame_desc->width;
              o.box.height = fsd->frame_desc->width;
              o.framename = &fsd->frame_desc->width;
              if ( fsd->frame_desc->width )
              {
                format_frames( ses, &edx, &o, depth + 1 );
                o.box.width = o.box.width;
              }
              else
              {
                if ( fsd->frame_desc->width )
                {
                  if ( assert_failed == 0 )
                  {
                    if ( ses == 0 )
                    {
                      assert_failed = 1;
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
                      errline = 174;
                      elinks_internal( "assertion ses && frame_desc && o failed!" );
                      if ( assert_failed == 0 )
                      {
                        while ( ses_find_frame( ses, fsd->frame_desc[ n ].name ) == 0 || ses_find_frame( ses, fsd->frame_desc[ n ].name ) == 0 )
                        {
                          if ( *(int*)(ebx + 56) != -1 )
                            o.bits_at_68/*.2_2of4*/ = ( edx & -65 ) | ( ( ecx & 1 ) << 6 );
                          if ( *(int*)(edi + 28) && *(int*)(ebx + 12) <= 9 )
                          {
                            *(int*)(ebx + 12)++;
                            done_uri( *(int*)(ebx + 20) );
                            *(int*)(ebx + 20) = *(int*)(edi + 28);
                            *(int*)(*(int*)(edi + 28) + 56)++;
                            o.bits_at_68/*.2_2of4*/ = ( o.bits_at_68/*.2_2of4*/ & -65 ) | ( ( ( ( o.bits_at_68/*.2_2of4*/ >> 6 ) & 1 ) & 1 ) << 6 );
                          }
                          else
                          {
                            if ( assert_failed == 0 )
                            {
                              assert_failed = ( ( *(int*)(ebp_192 - 8) == 0 ) | ( ses == 0 ) ) & 1;
                              if ( ( ( *(int*)(ebp_192 - 8) == 0 ) | ( ses == 0 ) ) & 1 )
                              {
                                errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
                                errline = 135;
                                elinks_internal( "assertion ses && name failed!" );
                                if ( assert_failed )
                                {
                                }
                              }
                              if ( ses->scrn_frames.prev != ses->scrn_frames.next )
                              {
                                do
                                {
                                  if ( ses->scrn_frames.prev[1] == 0 && ( ( o.bits_at_68/*.2_2of4*/ >> 6 ) & 1 ) == 0 )
                                  {
                                    ses->scrn_frames.prev[1] = 1;
                                    ses->scrn_frames.prev[1] = depth;
                                    render_document( ebp_180, &edx, &o );
                                    *ebp_220 = ebp_220;
                                    if ( assert_failed == 0 )
                                    {
                                      assert_failed = *(int*)(edx + 20) == 0;
                                      if ( !(_Bool)( *(int*)(edx + 20) != 0 ) )
                                      {
                                        errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
                                        errline = 205;
                                        elinks_internal( "assertion doc_view-&gt;document failed!" );
                                        *ebp_220 = ebp_220;
                                      }
                                    }
                                    *(int*)(*(int*)(edx + 20) + 196) = fsd->frame_desc[ n ].subframe;
                                    o.bits_at_68/*.2_2of4*/ = ( o.bits_at_68/*.2_2of4*/ & -65 ) | ( ( ( o.bits_at_68/*.2_2of4*/ >> 6 ) & 1 & 1 ) << 6 );
                                    if ( edx == 0 )
                                    {
                                      o.box.width = o.box.width;
                                    }
                                    else
                                    {
                                      if ( *(int*)(edx + 20) )
                                      {
                                        if ( *(int*)(ebx + 200) )
                                        {
                                          *(int*)(ebx + 8)++;
                                          format_frames( ses, *(int*)(ebx + 200), &o, ebp_188 );
                                          *(int*)(ebx + 8)--;
                                        }
                                      }
                                      else
                                        o.box.width = o.box.width;
                                    }
                                  }
                                  else
                                }
                                while ( ses->scrn_frames.prev[1] != ses->scrn_frames.next );
                              }
                              if ( mem_calloc( 1, 60 ) )
                              {
                                *(int*)(mem_calloc( 1, 60 ) + 56) = 1;
                                *(int*)(mem_calloc( 1, 60 ) + 8) = stracpy( *(int*)(ebp_192 - 8) );
                                if ( mem_calloc( 1, 60 ) + 8 == 0 )
                                  mem_free( &edx );
                                else
                                {
                                  *(int*)(edx + 52) = depth;
                                  *(int*)(edx + 16) = ses;
                                  *(int*)(edx + 28) = o.box.x < 0 ? o.box.x : 0;
                                  *(int*)(edx + 12) = ses->search_word;
                                  *(int*)(edx + 36) = 0;
                                  *(int*)(edx + 40) = 0;
                                  *(int*)(edx + 32) = (unsigned char)( ( ( o.box.y >> 31 ) & 1 ) ^ 1 ) ? 0 : o.box.y;
                                  if ( assert_failed )
                                    assert_failed = 0;
                                  else
                                  {
                                    assert_failed = 0;
                                    if ( ses->scrn_frames.next != ses->scrn_frames.next )
                                    {
                                      if ( *(int*)(ecx + 32) <= *(int*)(edx + 32) && ( ebx != eax || ebp_212 <= ebp_204 ) )
                                      {
                                        do
                                        {
                                          if ( ses->scrn_frames.next == ses->scrn_frames.next[0] )
                                            goto B78;
                                          else
                                        }
                                        while ( *(int*)(ecx + 32) <= ebp_192 && ( ebx <= ebp_204 || ebp_192 != eax ) );
                                      }
                                      edx = ses->scrn_frames.next[1];
                                      *(int*)(edx + 4) = ses->scrn_frames.next[1];
                                      ses->scrn_frames.next[1] = edx;
                                      *(int*)(edx + 4) = edx;
                                    }
B78:                                    edx = *(int*)(ses->scrn_frames.prev);
                                    *(int*)(edx + 4) = ses->scrn_frames.prev;
                                    *(int*)(ses->scrn_frames.prev) = edx;
                                    *(int*)(edx + 4) = edx;
                                  }
                                }
                              }
                              o.bits_at_68/*.2_2of4*/ = ( o.bits_at_68/*.2_2of4*/ & -65 ) | ( ( ( o.bits_at_68/*.2_2of4*/ >> 6 ) & 1 & 1 ) << 6 );
                              o.box.width = o.box.width;
                            }
                            assert_failed = 0;
                            o.bits_at_68/*.2_2of4*/ = ( o.bits_at_68/*.2_2of4*/ & -65 ) | ( ( ( o.bits_at_68/*.2_2of4*/ >> 6 ) & 1 & 1 ) << 6 );
                            o.box.width = o.box.width;
                          }
                        }
                      }
                    }
                    else
                    {
                      assert_failed = 0;
                    }
                  }
                  assert_failed = 0;
                }
              }
              o.box.x = o.box.x + o.box.width + 1;
              i++;
              n++;
            }
            while ( i < fsd->box.width );
          }
          o.box.y = o.box.height + o.box.y + 1;
          j++;
        }
        while ( j < fsd->box.height );
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
B2:  assert_failed = 0;
  return;
}
int distribute_rows_or_cols( int *val_, int max_value, int *values, int values_count )
{
  int ecx;
  int i = 0;
  int divisor;
  int val = i - max_value;
  if ( values_count >= 1 )
  {
    divisor = 0;
    do
    {
      values[ i ] = values[ i ];
      if ( values[ i ] < 1 )
      {
        values[ i ] = 1;
        i++;
        divisor++;
        if ( values_count == i + 1 )
          break;
      }
      else
      {
        i++;
        divisor += max_value;
      }
    }
    while ( values_count != i + 1 );
  }
  if ( assert_failed == 0 )
  {
    assert_failed = divisor == 0;
    if ( !(_Bool)( divisor != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
      errline = 314;
      elinks_internal( "assertion divisor failed!" );
    }
  }
  if ( values_count >= 1 )
  {
    i = 0;
    values_count = values_count;
    do
    {
      values[ i ] = ( ( divisor - val ) * values[ i ] ) / divisor;
      val += ( ( ( divisor - val ) * values[ i ] ) / divisor ) - values[ i ];
      i++;
    }
    while ( values_count != i + 1 );
    values_count = values_count;
  }
  if ( val && values_count >= 1 )
  {
    values_count = values_count;
    do
    {
      i = 0;
      do
      {
        if ( val < 0 )
        {
          val++;
          values[ i ]++;
          if ( val + 1 )
          {
          }
        }
        else
        if ( !1 )
        {
          if ( values[ i ] > 1 )
          {
            val--;
            values[ i ]--;
            if ( val - 1 )
            {
            }
          }
          else
          {
            i++;
          }
        }
        else
        {
          val = 0;
          break;
        }
        val = 0;
        break;
      }
      while ( i + 1 < values_count );
    }
    while ( 1 == 0 || val == 0 );
  }
  val_[0] = val;
  return 1;
}
void parse_frame_widths( unsigned char *str, int max_value, int pixels_per_char, int **new_values, int *new_values_count )
{
  int eax;
  int ecx;
  int edx;
  int val, ret;
  int *values;
  int values_count = 0;
  int i;
  values[0] = 0;
  new_values_count[0] = 0;
  *ebp_64 = str;
  values_count = values_count;
  while ( 1 )
  {
    strtoul( &str[0], ebp_32, 10 );
    str[0] = str[0];
    if ( str[0] == str[0] )
    {
    }
    else
    if ( strtoul( &str[0], ebp_32, 10 ) > 65535 )
    {
      values_count++;
      *ebp_68 = (long long)( ebp_56 + mem_realloc( &values[0], ( values_count + 1 ) << 2 ) ) / pixels_per_char;
      values[0] = mem_realloc( &values[0], ( values_count + 1 ) << 2 );
      if ( mem_realloc( &values[0], ( values_count + 1 ) << 2 ) )
      {
        if ( strchr( &str[0], 44 ) == 0 )
        {
          val = ( values_count * 2 ) - 1;
          if ( values_count >= 1 )
          {
            i = 0;
            while ( 1 )
            {
              if ( values[ i ] >= 1 )
                val = ( val + values[ i ] ) - 1;
              i++;
              if ( values_count == i + 1 )
                break;
              else
              {
              }
            }
            val = val;
          }
          if ( val < max_value && values_count >= 1 )
          {
            values_count = values_count;
            do
            {
              neg = values[ i ] < 0 ? neg : 1;
              i++;
            }
            while ( values_count != i + 1 );
            if ( neg )
            {
              *ebp_68 = values_count << 2;
              if ( mem_alloc( values_count << 2 ) )
              {
                memcpy( mem_alloc( values_count << 2 ), &values[0], values_count << 2 );
                do
                {
                  if ( values[ 0 ] < 1 )
                  {
                    values[ 0 ] = 1;
                    if ( values_count != 0 + 1 + 1 )
                      continue;
                    else
                      break;
                  }
                  else
                }
                while ( values_count != 0 + 1 + 1 );
                do
                {
                  if ( *(int*)(edi + ( eax << 2 )) < 0 )
                  {
                    if ( values_count != 0 + 1 + 1 )
                      continue;
                    else
                      break;
                  }
                  else
                }
                while ( values_count != 0 + 1 + 1 );
                if ( assert_failed == 0 )
                {
                  assert_failed = ecx == 0;
                  if ( !(_Bool)( ecx != 0 ) )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
                    errline = 364;
                    elinks_internal( "assertion divisor failed!" );
                  }
                }
                do
                {
                  if ( *(int*)(edi + ( ecx << 2 )) < 0 )
                  {
                    values[ 0 ] = values[ ecx ] + ( ( ebp_60 * ( 0 - eax ) ) / ebp_48 );
                    if ( values_count != 0 + 1 + 1 )
                      continue;
                    else
                      break;
                  }
                  else
                }
                while ( values_count != 0 + 1 + 1 );
                if ( assert_failed == 0 )
                {
                  assert_failed = ebp_44 >> 31;
                  if ( ebp_44 >> 31 )
                  {
                    errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
                    errline = 374;
                    elinks_internal( "assertion val &gt;= 0 failed: distribute_rows_or_cols_that_left: val &lt; 0" );
                    if ( assert_failed == 0 )
                    {
                      *ebp_44 = 0;
                      values_count = values_count;
                      do
                      {
                        if ( 0 && *(int*)(edi + ( eax << 2 )) < 0 )
                          values[ 0 ]++;
                      }
                      while ( values_count != 0 + 1 + 1 );
                      if ( assert_failed == 0 )
                      {
                        assert_failed = edx > 0;
                        if ( edx > 0 )
                        {
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/document/html/frames.c";
                          errline = 381;
                          elinks_internal( "assertion val &lt;= 0 failed: distribute_rows_or_cols_that_left: val &gt; 0" );
                          if ( assert_failed == 0 )
                          {
                            mem_free( &edi );
                            val = ebp_44;
                            if ( values_count >= 1 )
                            {
                              i = 0;
                              do
                              {
                                if ( values[ i ] == 0 )
                                {
                                  for ( ; values_count != 0 + 1 + 1; edx = edx )
                                  {
                                    //edx = edx;
                                  }
                                {
                                  int j;
                                  int maxval;
                                  int maxpos;
                                  if ( maxval )
                                    values[ i ] = 1;
                                }
                                }
                                i++;
                              }
                              while ( values_count != i + 1 );
                            }
                            new_values[0] = &values[0];
                            new_values_count[0] = values_count;
                            break;
                          }
                        }
                      }
                      assert_failed = 0;
                    }
                  }
                }
                assert_failed = 0;
              }
            }
          }
          if ( ret )
          {
          }
        }
        else
        {
          str[0] = strchr( &str[0], 44 ) + 1;
        }
      }
    }
    if ( str[0] == '%' )
    {
    }
    else
    {
      if ( str[0] != '*' )
      {
      }
      else
      {
        if ( 0 )
        {
        }
        else
        {
        }
      }
    }
  }
}
#if 0
#endif
