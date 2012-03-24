#include "marks.c.h"
static struct view_state *marks[52];
struct module viewer_marks_module = { "Marks", 0, 0, 0, 0, 0, &done_marks };
void goto_mark( unsigned char mark, struct view_state *vs )
{
  int ecx;
  int old_current_link;
  struct document_view *doc_view;
  int i;
  if ( mark - 97 >= 25 || 25 <= mark - 65 )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = ( ( 25 & 255 ) < ( ( mark - 65 ) & 255 ) ) & ( ( 25 & 255 ) < ( ( mark - 97 ) & 255 ) );
      if ( ( ( 25 & 255 ) < ( ( mark - 65 ) & 255 ) ) & ( ( 25 & 255 ) < ( ( mark - 97 ) & 255 ) ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/marks.c";
        errline = 67;
        elinks_internal( "assertion is_valid_mark_char(mark) failed!" );
        i -= 71;
        if ( assert_failed == 0 )
        {
          assert_failed = i > 51;
          if ( i > 51 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/marks.c";
            errline = 90;
            elinks_internal( "assertion is_valid_mark_index(i) failed!" );
            i = i;
          }
        }
        if ( marks[ i ] && compare_uri( marks[ i ]->uri, vs->uri, 0 ) )
        {
          old_current_link = vs->current_link;
          doc_view = vs->doc_view;
          destroy_vs( &vs[0], 0 );
          copy_vs( &vs[0], marks[ i ] );
          vs = &doc_view[0].next[0];
          doc_view->vs = &vs[0];
          vs->old_current_link = vs->current_link;
        }
      }
    }
  }
  return;
}
void free_mark_by_index( int i )
{
  if ( assert_failed == 0 )
  {
    assert_failed = i > 51;
    if ( i > 51 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/marks.c";
      errline = 118;
      elinks_internal( "assertion is_valid_mark_index(i) failed!" );
    }
  }
  if ( marks[ i ] )
  {
    destroy_vs( marks[ i ], 1 );
    if ( marks[ i ] )
      mem_free( (void*)marks[ i ] );
    marks[ i ] = 0;
    return;
  }
  else
  {
    return;
  }
}
void set_mark( unsigned char mark, struct view_state *mark_vs )
{
  int eax;
  int ecx;
  int i;
  if ( mark - 97 >= 25 || 25 <= mark - 65 )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = ( ( 25 & 255 ) < ( ( mark - 65 ) & 255 ) ) & ( ( 25 & 255 ) < ( ( mark - 97 ) & 255 ) );
      if ( ( ( 25 & 255 ) < ( ( mark - 65 ) & 255 ) ) & ( ( 25 & 255 ) < ( ( mark - 97 ) & 255 ) ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/viewer/text/marks.c";
        errline = 67;
        elinks_internal( "assertion is_valid_mark_char(mark) failed!" );
        i -= 71;
        free_mark_by_index( i );
        if ( mark_vs[0] && mem_calloc( 1, 48 ) )
        {
          copy_vs( (struct view_state*)mem_calloc( 1, 48 ), &mark_vs[0] );
          marks[ i ] = (struct view_state*)mem_calloc( 1, 48 );
        }
      }
    }
    free_mark_by_index( i );
  }
  return;
}
void done_marks( struct module *xxx )
{
  int i = 0;
  do
  {
    i++;
    free_mark_by_index( i );
  }
  while ( i == 52 );
  return;
}
#if 0
#endif
