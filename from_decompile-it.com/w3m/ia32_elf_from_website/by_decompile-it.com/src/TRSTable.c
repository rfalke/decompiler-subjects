#include "TRSTable.c.h"
static char *cellstate_s( cellstate_t state );
static void free_rowinfo( STable_rowinfo *me );
static int Stbl_addCellToRow( STable_rowinfo *me, STable_cellinfo *colinfo, int ncolinfo, STable_states *s, int colspan, int alignment, int isheader, int lineno, int *ppos );
static int Stbl_reserveCellsInRow( STable_rowinfo *me, int icell, int colspan );
static int Stbl_finishCellInRow( STable_rowinfo *me, STable_states *s, int end_td, int lineno, int pos );
static int Stbl_reserveCellsInTable( STable_info *me, int icell, int colspan, int rowspan );
static void Stbl_cancelRowSpans( STable_info *me );
static int Stbl_finishRowInTable( STable_info *me );
static void update_sumcols0( STable_cellinfo *sumcols, STable_rowinfo *lastrow, int pos, int len, int icell, int ispan, int allocated_sumcols );
static int get_remaining_colspan( STable_rowinfo *me, STable_cellinfo *colinfo, int ncolinfo, int colspan, int ncols_sofar );
static int Stbl_fakeFinishCellInTable( STable_info *me, STable_rowinfo *lastrow, int lineno, int finishing );
static int get_fixup_positions( STable_rowinfo *me, int *oldpos, int *newpos, STable_cellinfo *sumcols );
char *cellstate_s( cellstate_t state )
{
  char *result = "?";
  switch ( state + 1 )
  {
  case 0:
    result = "CS_invalid";
    break;
  case 1:
    result = "CS__new";
    break;
  case 2:
    result = "CS__0new";
    break;
  case 3:
    result = "CS__0eb";
    break;
  case 4:
    result = "CS__eb";
    break;
  case 5:
    result = "CS__0cb";
    break;
  case 6:
    result = "CS__cb";
    break;
  case 7:
    result = "CS__0ef";
    break;
  case 8:
    result = "CS__ef";
    break;
  case 9:
    result = "CS__0cf";
    break;
  case 10:
    result = "CS__cf";
    break;
  case 11:
    result = "CS__ebc";
    break;
  case 12:
    result = "CS__cbc";
    break;
  default:
    break;
  }
  return result;
}
STable_info *Stbl_startTABLE( short alignment )
{
  STable_info *me = calloc( 1, sizeof( STable_info ) );
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_startTABLE(align=%d)\n", alignment );
  }
  if ( me != 0 )
  {
    me->alignment = alignment;
    me->rowgroup_align = -1;
    me->pending_colgroup_align = -1;
    me->s.x_td = -1;
    me->s.icell_core = -1;
    if ( ( nested_tables & 255 ) != 0 )
    {
      &me = 0;
    }
  }
  return me;
}
void free_rowinfo( STable_rowinfo *me )
{
  if ( me != 0 && me->allocated != 0 && me->cells != 0 )
  {
    free( me->cells );
    me->cells = 0;
  }
  return;
}
void Stbl_free( STable_info *me )
{
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_free()\n" );
  }
  if ( me != 0 && me->allocated_rows != 0 && me->rows != 0 )
  {
    int i = 0;
    for ( ; i < me->allocated_rows; i++ )
    {
      free_rowinfo( &me->rows[ i ] );
      //i++;
    }
    if ( me->rows != 0 )
    {
      free( me->rows );
      me->rows = 0;
    }
  }
  free_rowinfo( &me->rowspans2eog );
  if ( me != 0 && me->sumcols != 0 )
  {
    free( me->sumcols );
    me->sumcols = 0;
  }
  if ( me != 0 )
  {
    free( me );
    me = 0;
  }
  return;
}
int Stbl_addCellToRow( STable_rowinfo *me, STable_cellinfo *colinfo, int ncolinfo, STable_states *s, int colspan, int alignment, int isheader, int lineno, int *ppos )
{
  STable_cellinfo *cells;
  int i;
  int last_colspan = me->ncells == 0 ? 1 : me->cells[ me->ncells - 1 ].colspan;
  cellstate_t newstate;
  int ret;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_addCellToRow, line=%d, pos=%d, colspan=%d\n", lineno, ppos[0], colspan );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), " ncells=%d, stateLine=%d, pending_len=%d, pstate=%s, state=%s\n", me->ncells, s->lineno, s->pending_len, cellstate_s( s->prev_state ), cellstate_s( s->state ) );
  }
  if ( me->ncells == 0 )
    s->prev_state = CS_invalid;
  else
  if ( s->prev_state == -1 || ( s->state != CS__0new && s->state != CS__ef && s->state != CS__0ef ) )
    s->prev_state = s->state;
  if ( me->ncells == 0 || ppos[0] == 0 )
    newstate = CS__0new;
  else
    newstate = CS__new;
  if ( me->ncells >= 1 && s->pending_len >= 1 )
  {
    if ( s->prev_state != 11 )
      me->cells[ me->ncells - 1 ].len = s->pending_len;
    s->pending_len = 0;
  }
  s->x_td = ppos[0];
  if ( s->lineno != lineno )
  {
    if ( ( me->fixed_line & 255 ) == 0 )
    {
      if ( me->ncells == 0 || ppos[0] == 0 )
      {
        if ( s->prev_state + 1 <= 9 )
        {
          if ( ( ( 1 << ( s->prev_state + 1 ) ) & 685 ) == 0 )
          {
            if ( ( ( 1 << ( s->prev_state + 1 ) ) & 64 ) == 0 )
            {
            }
            else
              ppos[0] = me->cells[ me->ncells - 1 ].len + me->cells[ me->ncells - 1 ].pos;
          }
          else
          {
            if ( me->ncells >= 1 )
            {
              i = ( me->ncells + last_colspan ) - 2;
              for ( ; me->ncells - 1 <= i; i-- )
              {
                me->cells[ i ].pos = ppos[0];
                me->cells[ i ].cLine = lineno;
                //i--;
              }
            }
            me->Line = lineno;
          }
        }
      }
      else
      {
        switch ( s->prev_state )
        {
        case 4:
        case 8:
          if ( me->cells->pos < ppos[0] )
            me->Line = lineno;
          me->fixed_line = 1;
          break;
        case 0:
        case 3:
        case 7:
        case 10:
          me->fixed_line = 1;
        case 1:
        case 2:
        case 6:
          break;
        case 5:
        case 9:
        case 11:
          break;
        }
        ret = -1;
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
        {
          fprintf( TraceFP( ), " =&gt; prev_state=%s, state=%s, ret=%d\n", cellstate_s( s->prev_state ), cellstate_s( s->state ), ret );
        }
        return ret;
      }
    }
    if ( ( me->fixed_line & 255 ) != 0 && me->Line != lineno )
    {
      switch ( s->prev_state + 1 )
      {
      case 6:
      case 10:
        if ( ppos[0] < 1 )
          ppos[0] = me->cells[ me->ncells - 1 ].len + me->cells[ me->ncells - 1 ].pos;
        break;
      case 5:
      case 9:
        if ( ppos[0] == 0 || ppos[0] <= me->cells->pos )
          ppos[0] = me->cells[ me->ncells - 1 ].len + me->cells[ me->ncells - 1 ].pos;
        break;
      case 1:
      case 4:
      case 8:
      case 11:
        ppos[0] = me->cells[ me->ncells - 1 ].pos;
        break;
      case 0:
      case 2:
      case 3:
      case 7:
      case 12:
        break;
      }
    }
    s->lineno = lineno;
  }
  else
  {
    switch ( s->prev_state + 1 )
    {
    case 1:
    case 10:
      if ( ( me->fixed_line & 255 ) == 0 || me->Line == lineno )
      {
        me->fixed_line = 1;
        me->Line = lineno;
      }
    default:
      break;
    }
  }
  s->state = newstate;
  if ( me->ncells >= 1 && me->cells[ me->ncells - 1 ].colspan > 1 )
  {
    me->ncells += me->cells[ me->ncells - 1 ].colspan - 1;
  }
  while ( me->ncells < me->allocated && me->cells[ me->ncells ].alignment == -2 )
  {
    me->ncells++;
  }
{
  int growby = 0;
  for ( ; me->allocated + growby < me->ncells + colspan + 1; growby += 16 )
  {
    //growby += 16;
  }
  if ( growby != 0 )
  {
    if ( me->allocated == 0 && me->cells == 0 )
    {
      cells = calloc( growby, sizeof( STable_cellinfo ) );
    }
    else
    {
      cells = realloc( me->cells, ( ( me->allocated + growby ) * 4 ) + ( ( me->allocated + growby ) * 16 ) );
      i = 0;
      for ( ; cells != 0 && i < growby; i++ )
      {
        cells[ me->allocated + i ].alignment = -1;
        //i++;
      }
    }
    if ( cells != 0 )
    {
      me->allocated += growby;
      me->cells = cells;
    }
  }
  me->cells[ me->ncells ].cLine = lineno;
  me->cells[ me->ncells ].pos = ppos[0];
  me->cells[ me->ncells ].len = -1;
  me->cells[ me->ncells ].colspan = colspan;
  if ( alignment != -1 )
    me->cells[ me->ncells ].alignment = alignment;
  else
  {
    if ( me->ncells + 1 <= ncolinfo )
      me->cells[ me->ncells ].alignment = colinfo[ me->ncells ].alignment;
    else
      me->cells[ me->ncells ].alignment = me->alignment;
    if ( me->cells[ me->ncells ].alignment == -1 )
      me->cells[ me->ncells ].alignment = me->alignment;
    if ( me->cells[ me->ncells ].alignment == -1 )
    {
      me->cells[ me->ncells ].alignment = isheader == 0 ? 1 : 3;
    }
  }
  i = me->ncells + 1;
  for ( ; i < me->ncells + colspan; i++ )
  {
    me->cells[ i ].cLine = lineno;
    me->cells[ i ].pos = ppos[0];
    me->cells[ i ].len = -1;
    me->cells[ i ].colspan = 0;
    me->cells[ i ].alignment = 1;
    //i++;
  }
  me->cells[ me->ncells + colspan ].pos = -1;
  me->ncells++;
  ret = me->ncells - 1;
}
}
int Stbl_reserveCellsInRow( STable_rowinfo *me, int icell, int colspan )
{
  STable_cellinfo *cells;
  int i;
  int growby = ( colspan + icell + 1 ) - me->allocated;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_reserveCellsInRow(icell=%d, colspan=%d\n", icell, colspan );
  }
  if ( growby >= 1 )
  {
    cells = realloc( me->cells, ( ( me->allocated + growby ) * 4 ) + ( ( me->allocated + growby ) * 16 ) );
    if ( cells != 0 )
    {
      i = 0;
      for ( ; i < growby; i++ )
      {
        cells[ me->allocated + i ].alignment = -1;
        //i++;
      }
      me->allocated += growby;
      me->cells = cells;
    }
    else
    {
      return -1;
    }
  }
  i = icell;
  for ( ; i < icell + colspan; i++ )
  {
    me->cells[ i ].cLine = -1;
    me->cells[ i ].pos = -1;
    me->cells[ i ].len = -1;
    me->cells[ i ].colspan = 0;
    me->cells[ i ].alignment = -2;
    //i++;
  }
  me->cells[ icell ].colspan = colspan;
  return 0;
}
int Stbl_finishCellInRow( STable_rowinfo *me, STable_states *s, int end_td, int lineno, int pos )
{
  STable_cellinfo *lastcell;
  cellstate_t newstate = CS_invalid;
  int multiline = 0, empty;
  int ret;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_finishCellInRow line=%d pos=%d end_td=%d ncells=%d pnd_len=%d\n", lineno, pos, end_td, me->ncells, s->pending_len );
  }
  if ( me->ncells < 1 )
  {
    return -1;
  }
  lastcell = &me->cells[ me->ncells - 1 ];
  multiline = lastcell->cLine == lineno && s->lineno == lineno ? 0 : 1;
  empty = multiline == 0 ? ( s->x_td < pos ) ^ 1 : pos == 0;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), " [lines: lastCell=%d state=%d multi=%d] empty=%d (prev)state=(%s) %s\n", lastcell->cLine, s->lineno, multiline, empty, cellstate_s( s->prev_state ), cellstate_s( s->state ) );
  }
  if ( multiline != 0 )
  {
    if ( ( end_td & 1 ) == 0 )
    {
      switch ( s->state + 1 )
      {
      case 0:
        newstate = empty == 0 ? CS__cbc : CS_invalid;
        break;
      case 2:
        newstate = empty == 0 ? CS__0cb : CS__0eb;
        break;
      case 3:
        s->state = newstate = empty == 0 ? CS__ebc : CS__0eb;
        if ( ( me->fixed_line & 255 ) != 0 )
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
          {
            ret = lastcell->len < 1 ? 0 : -1;
          }
        }
        else
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
            ret = 0;
        }
        break;
      case 5:
        if ( ( me->fixed_line & 255 ) == 0 && empty == 0 && s->icell_core == -1 )
          me->Line = -1;
        if ( s->pending_len != 0 && empty != 0 )
        {
          if ( ( ( me->fixed_line & 255 ) != 0 && me->Line == lastcell->cLine ) || s->icell_core == me->ncells - 1 )
            lastcell->len = s->pending_len;
          s->pending_len = 0;
        }
        newstate = empty == 0 ? CS__cbc : CS__0cb;
        break;
      case 1:
        newstate = empty == 0 ? CS__cb : CS__eb;
        break;
      case 4:
        s->state = newstate = empty == 0 ? CS__ebc : CS__eb;
        if ( ( me->fixed_line & 255 ) != 0 )
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
          {
            ret = lastcell->len < 1 ? 0 : -1;
          }
        }
        else
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
          {
            ret = lastcell->len < 1 ? 0 : -1;
          }
        }
        break;
      case 6:
        if ( s->pending_len != 0 && empty != 0 )
        {
          lastcell->len = s->pending_len;
          s->pending_len = 0;
        }
        ret = -1;
        if ( empty != 0 )
        {
          if ( ( me->fixed_line & 255 ) == 0 )
          {
            me->fixed_line = 1;
            me->Line = lastcell->cLine;
          }
          else
          if ( me->Line != lastcell->cLine )
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
            {
              fprintf( TraceFP( ), " =&gt; prev_state=%s, state=%s, return=%d\n", cellstate_s( s->prev_state ), cellstate_s( s->state ), ret );
            }
            return ret;
          }
          newstate = empty == 0 ? CS__cbc : CS__cb;
        }
        else
        {
          if ( ( me->fixed_line & 255 ) == 0 )
          {
            me->fixed_line = 1;
            me->Line = lastcell->cLine;
          }
          s->state = CS__cbc;
        }
        break;
      case 8:
        ret = 0;
        break;
      case 10:
        ret = lastcell->len;
        break;
      case 12:
        if ( ( me->fixed_line & 255 ) == 0 )
        {
          if ( empty != 0 )
          {
            if ( s->icell_core == -1 )
              me->Line = lineno;
          }
          else
          if ( s->icell_core == -1 )
            me->Line = -1;
        }
        s->pending_len = 0;
        newstate = empty == 0 ? CS__cbc : CS_invalid;
      case 7:
      case 9:
      case 11:
        break;
      }
    }
    else
    {
      s->x_td = -1;
      switch ( s->state + 1 )
      {
      case 0:
        if ( empty == 0 && lastcell->len >= 1 )
        {
          s->state = newstate = CS__0cf;
          ret = -1;
        }
        else
        {
          lastcell->len = 0;
          lastcell->cLine = -1;
          newstate = empty == 0 ? CS__cbc : CS_invalid;
        }
        break;
      case 2:
        newstate = empty == 0 ? CS__0cf : CS__0ef;
        break;
      case 3:
        s->state = newstate = empty == 0 ? CS__0cf : CS__0ef;
        if ( ( me->fixed_line & 255 ) != 0 )
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
          {
            ret = lastcell->len < 1 ? 0 : -1;
          }
        }
        else
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
            ret = 0;
        }
        break;
      case 5:
        if ( s->pending_len != 0 )
        {
          if ( empty != 0 )
            lastcell->len = s->pending_len;
          else
            lastcell->len = 0;
          s->pending_len = 0;
        }
        if ( ( me->fixed_line & 255 ) == 0 )
        {
          if ( empty != 0 )
          {
            if ( s->icell_core == -1 )
              s->icell_core = me->ncells - 1;
          }
          else
          if ( s->icell_core == -1 )
            me->Line = -1;
        }
        if ( s->pending_len != 0 && empty != 0 )
        {
          lastcell->len = s->pending_len;
          s->pending_len = 0;
        }
        newstate = empty == 0 ? CS__cbc : CS__0cf;
        break;
      case 7:
        newstate = CS__0ef;
        break;
      case 1:
        newstate = empty == 0 ? CS__cf : CS__ef;
        break;
      case 4:
        s->state = newstate = CS__ef;
        if ( ( me->fixed_line & 255 ) != 0 )
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
          {
            ret = lastcell->len < 1 ? 0 : -1;
          }
        }
        else
        {
          if ( empty != 0 )
            ret = lastcell->len & ~( lastcell->len >> 31 );
          else
          {
            ret = lastcell->len < 1 ? 0 : -1;
          }
        }
        break;
      case 6:
        if ( s->pending_len != 0 && empty != 0 )
        {
          lastcell->len = s->pending_len;
          s->pending_len = 0;
        }
        ret = -1;
        if ( empty != 0 )
        {
          if ( ( me->fixed_line & 255 ) == 0 )
          {
            me->fixed_line = 1;
            me->Line = lastcell->cLine;
          }
          else
          if ( me->Line != lastcell->cLine )
            continue;
          newstate = empty == 0 ? CS__cbc : CS__cf;
        }
        break;
      case 11:
        lastcell->len = 0;
        if ( ( me->fixed_line & 255 ) == 0 && empty == 0 && s->icell_core == -1 )
          lastcell->cLine = -1;
        s->pending_len = 0;
        newstate = empty == 0 ? CS__cbc : CS_invalid;
        break;
      case 12:
        lastcell->len = 0;
        ret = -1;
        if ( ( me->fixed_line & 255 ) == 0 || me->Line != lastcell->cLine )
        {
          if ( ( me->fixed_line & 255 ) == 0 && empty != 0 && s->icell_core == -1 )
            me->Line = lineno;
          s->pending_len = 0;
          newstate = empty == 0 ? CS__cbc : CS_invalid;
        }
      case 8:
      case 9:
      case 10:
        break;
      }
    }
  }
  else
  if ( ( end_td & 1 ) == 0 )
  {
    switch ( s->state + 1 )
    {
    case 0:
    case 2:
      s->pending_len = empty == 0 ? pos - lastcell->pos : 0;
      s->state = newstate = empty == 0 ? CS__0cb : CS__0eb;
      ret = 0;
      break;
    case 3:
      newstate = CS__eb;
      break;
    case 5:
      newstate = CS__cb;
      break;
    case 1:
      ret = -1;
      if ( empty != 0 || s->prev_state != 11 )
      {
        if ( empty == 0 )
        {
          if ( ( me->fixed_line & 255 ) == 0 )
          {
            me->fixed_line = 1;
            me->Line = lineno;
          }
          else
          if ( me->Line != lineno )
            continue;
        }
        s->state = newstate = empty == 0 ? CS__cb : CS__eb;
        if ( ( me->fixed_line & 255 ) == 0 )
        {
          s->pending_len = empty == 0 ? pos - lastcell->pos : 0;
          ret = 0;
        }
        else
        {
          s->pending_len = 0;
          ret = lastcell->len = empty == 0 ? pos - lastcell->pos : 0;
        }
      }
      break;
    case 4:
      newstate = empty == 0 ? CS__ebc : CS__eb;
      break;
    case 6:
      newstate = empty == 0 ? CS__cbc : CS__cb;
      break;
    case 8:
      ret = 0;
      break;
    case 10:
      ret = lastcell->len;
      break;
    case 7:
    case 9:
      break;
    }
  }
  else
  {
    s->x_td = -1;
    switch ( s->state + 1 )
    {
    case 0:
      if ( ( me->fixed_line & 255 ) == 0 || me->Line != lastcell->cLine )
        lastcell->len = 0;
    case 2:
      newstate = empty == 0 ? CS__0cf : CS__0ef;
      lastcell->len = pos - lastcell->pos;
      break;
    case 3:
      newstate = CS__0ef;
      break;
    case 5:
      newstate = empty == 0 ? CS__cbc : CS__0cf;
      break;
    case 7:
      newstate = CS__0ef;
      break;
    case 1:
      ret = -1;
      if ( empty != 0 || s->prev_state != 11 )
      {
        if ( empty == 0 )
        {
          if ( ( me->fixed_line & 255 ) == 0 )
          {
            me->fixed_line = 1;
            me->Line = lineno;
          }
          else
          if ( me->Line != lineno )
            continue;
        }
        if ( lastcell->len < 0 )
        {
          lastcell->len = empty == 0 ? pos - lastcell->pos : 0;
        }
        s->state = newstate = empty == 0 ? CS__cf : CS__ef;
        ret = ( me->fixed_line & 255 ) == 0 || me->Line == lineno ? lastcell->len : -1;
      }
      break;
    case 4:
      newstate = empty == 0 ? CS__cf : CS__ef;
      break;
    case 6:
      newstate = CS__cf;
      break;
    case 8:
    case 9:
      break;
    }
  }
  s->state = newstate;
  ret = lastcell->len;
  if ( ( nested_tables & 255 ) != 0 && ret == -1 && pos == 0 )
    ret = 0;
}
int Stbl_reserveCellsInTable( STable_info *me, int icell, int colspan, int rowspan )
{
  STable_rowinfo *rows, *row;
  int growby;
  int i;
  if ( colspan > 200 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
    {
      fprintf( TraceFP( ), "TRST:*** COLSPAN=%d is too large, ignored!\n", colspan );
    }
    return -1;
  }
  else
  if ( rowspan > 200 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
    {
      fprintf( TraceFP( ), "TRST:*** ROWSPAN=%d is too large, ignored!\n", rowspan );
    }
    return -1;
  }
  else
  if ( me->nrows < 1 )
  {
    return -1;
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_reserveCellsInTable(icell=%d, colspan=%d, rowspan=%d)\n", icell, colspan, rowspan );
  }
  if ( rowspan == 0 )
  {
    if ( me->rowspans2eog.cells == 0 )
    {
      me->rowspans2eog.cells = calloc( 1, sizeof( STable_cellinfo ) );
      if ( me->rowspans2eog.cells == 0 )
      {
        return 0;
      }
      me->rowspans2eog.allocated = icell + colspan;
    }
    Stbl_reserveCellsInRow( &me->rowspans2eog, icell, colspan );
  }
  growby = ( me->nrows + rowspan ) - 1 - me->allocated_rows;
  if ( growby >= 1 )
  {
    rows = realloc( me->rows, ( ( me->allocated_rows + growby ) * 4 ) + ( ( me->allocated_rows + growby ) * 32 ) );
    if ( rows == 0 )
    {
      return 0;
    }
    i = 0;
    for ( ; i < growby; i++ )
    {
      row = &rows[ me->allocated_rows + i ];
      row->allocated = 0;
      row->offset = 0;
      row->content = 0;
      if ( me->rowspans2eog.allocated == 0 )
        row->cells = 0;
      else
      {
        row->cells = calloc( me->rowspans2eog.allocated, sizeof( STable_cellinfo ) );
        if ( row->cells != 0 )
        {
          row->allocated = me->rowspans2eog.allocated;
          memcpy( row->cells, me->rowspans2eog.cells, row->allocated * 20 );
        }
      }
      row->ncells = 0;
      row->fixed_line = 0;
      row->alignment = -1;
      //i++;
    }
    me->allocated_rows += growby;
    me->rows = rows;
  }
  i = me->nrows;
  for ( ; i < ( rowspan == 0 ? me->allocated_rows : ( me->nrows + rowspan ) - 1 ); i++ )
  {
    if ( me->rows[ i ].allocated == 0 )
    {
      me->rows[ i ].cells = calloc( 1, sizeof( STable_cellinfo ) );
      if ( me->rows[ i ].cells == 0 )
      {
        return 0;
      }
      me->rows[ i ].allocated = icell + colspan;
    }
    Stbl_reserveCellsInRow( &me->rows[ i ], icell, colspan );
    //i++;
  }
  return 0;
}
void Stbl_cancelRowSpans( STable_info *me )
{
  int i;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_cancelRowSpans()" );
  }
  i = me->nrows;
  for ( ; i < me->allocated_rows; i++ )
  {
    if ( me->rows[ i ].ncells == 0 )
    {
      if ( me->rows[ i ].cells != 0 )
      {
        free( me->rows[ i ].cells );
        me->rows[ i ].cells = 0;
      }
      me->rows[ i ].allocated = 0;
    }
    //i++;
  }
  free_rowinfo( &me->rowspans2eog );
  me->rowspans2eog.allocated = 0;
  return;
}
int Stbl_addRowToTable( STable_info *me, int alignment, int lineno )
{
  STable_rowinfo *rows, *row;
  STable_states *s = &me->s;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_addRowToTable(alignment=%d, lineno=%d)\n", alignment, lineno );
  }
  if ( me->nrows >= 1 && me->rows[ me->nrows - 1 ].ncells >= 1 )
  {
    if ( s->pending_len >= 1 )
    {
    }
    s->pending_len = 0;
  }
  Stbl_finishRowInTable( me );
  if ( me->nrows >= 1 && me->rows[ me->nrows - 1 ].Line == lineno )
    me->rows[ me->nrows - 1 ].Line = -1;
  s->pending_len = 0;
  s->x_td = -1;
{
  int i;
  int growby = 0;
  for ( ; me->allocated_rows + growby < me->nrows + 2; growby += 16 )
  {
    //growby += 16;
  }
  if ( growby != 0 )
  {
    if ( me->allocated_rows == 0 && me->rows == 0 )
    {
      rows = calloc( growby, sizeof( STable_rowinfo ) );
    }
    else
    {
      rows = realloc( me->rows, ( ( me->allocated_rows + growby ) * 4 ) + ( ( me->allocated_rows + growby ) * 32 ) );
      i = 0;
      for ( ; rows != 0 && i < growby; i++ )
      {
        row = &rows[ me->allocated_rows + i ];
        if ( me->rowspans2eog.allocated == 0 )
        {
          row->allocated = 0;
          row->cells = 0;
          row->ncells = 0;
          row->fixed_line = 0;
          row->alignment = -1;
          row->offset = 0;
          row->content = 0;
          //i++;
        }
        else
        {
          row->cells = calloc( me->rowspans2eog.allocated, sizeof( STable_cellinfo ) );
          if ( row->cells != 0 )
          {
            row->allocated = me->rowspans2eog.allocated;
            memcpy( row->cells, me->rowspans2eog.cells, row->allocated * 20 );
          }
          else
          if ( rows != 0 )
            goto B39;
B39:          free( rows );
          rows = 0;
          break;
        }
      }
    }
    if ( rows != 0 )
    {
      me->allocated_rows += growby;
      me->rows = rows;
    }
    else
    {
      return -1;
    }
  }
  me->rows[ me->nrows ].Line = lineno;
  if ( me->nrows == 0 )
    me->startline = lineno;
  if ( alignment != -1 )
    me->rows[ me->nrows ].alignment = alignment;
  else
  {
    me->rows[ me->nrows ].alignment = me->rowgroup_align == 65535 ? me->alignment : me->rowgroup_align;
  }
  me->nrows++;
  if ( me->ncolinfo < me->pending_colgroup_next )
  {
    me->ncolinfo = me->pending_colgroup_next;
    me->pending_colgroup_next = 0;
  }
  me->rows[ me->nrows ].Line = -1;
  me->rows[ me->nrows ].ended = ROW_not_ended;
  return me->nrows - 1;
}
}
int Stbl_finishRowInTable( STable_info *me )
{
  STable_rowinfo *lastrow;
  STable_states *s = &me->s;
  int ncells;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_finishRowInTable()\n" );
  }
  if ( me->rows == 0 || me->nrows == 0 )
  {
    return -1;
  }
  lastrow = &me->rows[ me->nrows - 1 ];
  ncells = lastrow->ncells;
  lastrow->ended = ROW_ended_by_endtr;
  if ( lastrow->ncells >= 1 )
  {
    if ( s->pending_len >= 1 )
      lastrow->cells[ lastrow->ncells - 1 ].len = s->pending_len;
    s->pending_len = 0;
  }
  s->prev_state = s->state = CS_invalid;
  s->lineno = -1;
  if ( s->icell_core >= 0 && ( lastrow->fixed_line & 255 ) == 0 && lastrow->cells[ s->icell_core ].cLine >= 0 )
    lastrow->Line = lastrow->cells[ s->icell_core ].cLine;
  s->icell_core = -1;
  return me->nrows;
}
void update_sumcols0( STable_cellinfo *sumcols, STable_rowinfo *lastrow, int pos, int len, int icell, int ispan, int allocated_sumcols )
{
  int i;
  if ( len >= 1 )
  {
    int sumpos = pos;
    int prevsumpos = sumcols[ ispan + icell ].pos;
    int advance;
    if ( ispan >= 1 )
    {
      if ( sumpos < lastrow->cells[ icell ].pos + len )
        sumpos = lastrow->cells[ icell ].pos + len;
      if ( sumpos < sumcols[ ( ispan + icell ) - 1 ].len + sumcols[ ( ispan + icell ) - 1 ].pos )
        sumpos = sumcols[ ( ispan + icell ) - 1 ].len + sumcols[ ( ispan + icell ) - 1 ].pos;
    }
    advance = sumpos - prevsumpos;
    if ( advance >= 1 )
    {
      i = ispan + icell;
      while ( i < allocated_sumcols )
      {
        if ( ispan >= 1 && sumcols[ i ].colspan < -1 && sumcols[ i ].colspan + i < ispan + icell )
        {
          advance = sumpos - sumcols[ i ].pos;
          if ( i >= 1 )
          {
            advance = advance;
          }
          if ( advance >= 1 )
            goto B11;
        }
B11:        if ( sumcols[ i ].pos < 0 )
        {
          sumcols[ i ].pos = sumpos;
          break;
        }
        else
        {
          sumcols[ i ].pos += advance;
          i++;
        }
      }
    }
  }
  return;
}
int get_remaining_colspan( STable_rowinfo *me, STable_cellinfo *colinfo, int ncolinfo, int colspan, int ncols_sofar )
{
  int i;
  int last_colspan = me->ncells == 0 ? 1 : me->cells[ me->ncells - 1 ].colspan;
  if ( ncolinfo == 0 || ncolinfo < me->ncells + last_colspan )
  {
    colspan = 200;
  }
  else
  {
    i = ( me->ncells + last_colspan ) - 1;
    for ( ; i < ncolinfo - 1 && colinfo[ i ].cLine != -2; i++ )
    {
      //i++;
    }
    colspan = i + ( 2 - ( me->ncells + last_colspan ) );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:get_remaining_colspan; colspan = %d\n", colspan );
  }
  return colspan;
}
int Stbl_fakeFinishCellInTable( STable_info *me, STable_rowinfo *lastrow, int lineno, int finishing )
{
  STable_states *s = &me->s;
  int fake = 0;
  if ( s->state - 2 > 3 )
  {
    if ( finishing == 0 )
      fake = 1;
  }
  else
    fake = 1;
  if ( fake != 0 )
  {
    int ncells = lastrow->ncells;
    int i;
    int al = lastrow->alignment;
    int cs = lastrow->cells[ lastrow->ncells - 1 ].colspan;
    int rs = 1;
    int ih = 0;
    int end_td = 3;
    int need_reserved = 0;
    int prev_reserved_last = -1;
    STable_rowinfo *prev_row;
    int prev_row_n2 = ( ( lastrow - me->rows ) >> 2 ) * 954437177;
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
    {
      fprintf( TraceFP( ), "TRST:Stbl_fakeFinishCellInTable(lineno=%d, finishing=%d) START FAKING\n", lineno, finishing );
    }
    if ( finishing != 0 && Stbl_finishCellInTable( me, end_td, lineno, 0, 0 ) < 0 )
    {
      return -1;
    }
    if ( Stbl_addRowToTable( me, al, lineno ) < 0 )
    {
      return -1;
    }
    lastrow = &me->rows[ me->nrows - 1 ];
    lastrow->content = 4;
    i = 0;
    for ( ; i < lastrow->allocated; i++ )
    {
      if ( lastrow->cells[ i ].alignment == -2 )
      {
        need_reserved = 1;
        break;
      }
      else
      {
        //i++;
      }
    }
    prev_row = &me->rows[ prev_row_n2 ];
    i = ncells;
    for ( ; i < prev_row->allocated; i++ )
    {
      if ( prev_row->cells[ i ].alignment == -2 )
        prev_reserved_last = i;
      //i++;
    }
    if ( need_reserved != 0 || prev_reserved_last >= 0 )
    {
      int prev_row_n = ( ( prev_row - me->rows ) >> 2 ) * 954437177;
      STable_rowinfo *rows = realloc( me->rows, ( me->allocated_rows * 4 ) + 4 + 32 + ( me->allocated_rows * 32 ) );
      int need_cells = prev_reserved_last + 1;
      int n;
      if ( rows == 0 )
      {
        return -1;
      }
      if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
      {
        fprintf( TraceFP( ), "TRST:Stbl_fakeFinishCellInTable REALLOC ROWSPAN\n" );
      }
      me->rows = rows;
      lastrow = &me->rows[ me->nrows - 1 ];
      prev_row = &me->rows[ prev_row_n ];
      me->allocated_rows++;
      n = me->allocated_rows - me->nrows - 1;
      for ( ; n >= 0; n-- )
      {
        lastrow[ n + 1 ].Line = lastrow[ n ].Line;
        lastrow[ n + 1 ].ncells = lastrow[ n ].ncells;
        lastrow[ n + 1 ].fixed_line = lastrow[ n ].fixed_line;
        lastrow[ n + 1 ].ended = lastrow[ n ].ended;
        lastrow[ n + 1 ].content = lastrow[ n ].content;
        lastrow[ n + 1 ].offset = lastrow[ n ].offset;
        lastrow[ n + 1 ].allocated = lastrow[ n ].allocated;
        lastrow[ n + 1 ].cells = lastrow[ n ].cells;
        lastrow[ n + 1 ].alignment = lastrow[ n ].alignment;
        //n--;
      }
      lastrow->allocated = 0;
      lastrow->cells = 0;
      if ( need_cells != 0 )
      {
        lastrow->cells = calloc( need_cells, sizeof( STable_cellinfo ) );
        if ( lastrow->cells == 0 )
        {
          return -1;
        }
        lastrow->allocated = need_cells;
        memcpy( lastrow->cells, prev_row->cells, lastrow->allocated * 20 );
        i = -1;
        while ( i++, i < ncells )
        {
          if ( lastrow->cells[ i ].alignment == -2 )
          {
            lastrow->cells[ i ].alignment = 1;
          }
        }
      }
    }
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
    {
      fprintf( TraceFP( ), "TRST:Stbl_fakeFinishCellInTable FAKE %d elts%s\n", ncells, finishing == 0 ? "" : ", last unfinished" );
    }
    i = 0;
    do
    {
      i++;
      if ( i <= ncells )
      {
        if ( Stbl_addCellToTable( me, ncells == i ? cs : 1, rs, al, ih, lineno, 0, 0 ) < 0 )
        {
          return -1;
        }
        lastrow->content &= -3;
      }
      else
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
        {
          fprintf( TraceFP( ), "TRST:Stbl_fakeFinishCellInTable(lineno=%d) FINISH FAKING\n", lineno );
        }
        return 1;
      }
    }
    while ( ( finishing != 0 && ncells == i ) || Stbl_finishCellInRow( lastrow, s, end_td, lineno, 0 ) >= 0 );
    return -1;
  }
  else
  {
    return 0;
  }
}
int Stbl_addCellToTable( STable_info *me, int colspan, int rowspan, int alignment, int isheader, int lineno, int offset_not_used_yet, int pos )
{
  STable_states *s = &me->s;
  STable_rowinfo *lastrow;
  STable_cellinfo *sumcols, *sumcol;
  int i, icell, ncells, sumpos;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_addCellToTable(lineno=%d, pos=%d, isheader=%d, cs=%d, rs=%d, al=%d)\n", lineno, pos, isheader, colspan, rowspan, alignment );
  }
  if ( me->rows == 0 || me->nrows == 0 )
  {
    return -1;
  }
  if ( me->rows[ me->nrows - 1 ].ended != ROW_not_ended )
    Stbl_addRowToTable( me, alignment, lineno );
  Stbl_finishCellInTable( me, 1, lineno, 0, pos );
  lastrow = &me->rows[ me->nrows - 1 ];
  if ( ( nested_tables & 255 ) != 0 && pos == 0 && lastrow->ncells >= 1 && lastrow->cells[ lastrow->ncells - 1 ].cLine != lineno )
  {
    int rc = Stbl_fakeFinishCellInTable( me, lastrow, lineno, 0 );
    if ( rc < 0 )
    {
      return -1;
    }
    if ( rc != 0 )
      lastrow = &me->rows[ me->nrows - 1 ];
  }
  if ( colspan == 0 )
  {
    colspan = get_remaining_colspan( lastrow, me->sumcols, me->ncolinfo, colspan, me->ncols );
  }
  ncells = lastrow->ncells;
  icell = Stbl_addCellToRow( lastrow, me->sumcols, me->ncolinfo, s, colspan, alignment, isheader, lineno, &pos );
  if ( icell < 0 )
  {
    return icell;
  }
  if ( me->nrows == 1 && me->startline < lastrow->Line )
    me->startline = lastrow->Line;
  if ( rowspan != 1 )
  {
    Stbl_reserveCellsInTable( me, icell, colspan, rowspan );
    lastrow = &me->rows[ me->nrows - 1 ];
  }
  lastrow->content |= 2;
{
  int growby = 0;
  for ( ; me->allocated_sumcols + growby < icell + colspan + 1; growby += 16 )
  {
    //growby += 16;
  }
  if ( growby != 0 )
  {
    if ( me->allocated_sumcols == 0 && me->sumcols == 0 )
    {
      sumcols = calloc( growby, sizeof( STable_cellinfo ) );
    }
    else
    {
      sumcols = realloc( me->sumcols, ( ( me->allocated_sumcols + growby ) * 4 ) + ( ( me->allocated_sumcols + growby ) * 16 ) );
      i = 0;
      for ( ; sumcols != 0 && i < growby; i++ )
      {
        sumcol = &sumcols[ me->allocated_sumcols + i ];
        sumcol->pos = sumcols[ me->allocated_sumcols - 1 ].pos;
        sumcol->len = 0;
        sumcol->colspan = 0;
        sumcol->cLine = 0;
        sumcol->alignment = -1;
        //i++;
      }
    }
    if ( sumcols != 0 )
    {
      me->allocated_sumcols += growby;
      me->sumcols = sumcols;
    }
    else
    {
      return -1;
    }
  }
  if ( me->ncols < icell + 1 )
    me->ncols = icell + 1;
  if ( colspan > 1 && me->sumcols[ icell + colspan ].colspan + colspan >= 1 )
    me->sumcols[ icell + colspan ].colspan = colspan * -1;
  sumpos = pos;
  if ( ncells >= 1 )
    sumpos += me->sumcols[ ncells - 1 ].pos - lastrow->cells[ ncells - 1 ].pos;
  update_sumcols0( me->sumcols, lastrow, sumpos, sumpos - me->sumcols[ icell ].pos, icell, 0, me->allocated_sumcols );
  me->maxpos = me->sumcols[ me->allocated_sumcols - 1 ].pos;
  if ( ( LYwideLines == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : 1013 ) < me->maxpos )
  {
    return -1;
  }
  return 0;
}
}
int Stbl_finishCellInTable( STable_info *me, int end_td, int lineno, int offset, int pos )
{
  STable_states *s = &me->s;
  STable_rowinfo *lastrow;
  int len, xlen, icell;
  int i;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_finishCellInTable(lineno=%d, pos=%d, off=%d, end_td=%d)\n", lineno, pos, offset, end_td );
  }
  if ( me->nrows == 0 )
  {
    return -1;
  }
  lastrow = &me->rows[ me->nrows - 1 ];
  icell = lastrow->ncells - 1;
  if ( icell < 0 )
  {
    return icell;
  }
  if ( s->x_td == -1 )
  {
    if ( ( end_td & 1 ) == 0 )
      lastrow->ended = ROW_ended_by_splitline;
    return 0;
  }
  else
  {
    if ( ( nested_tables & 255 ) != 0 && ( end_td & 2 ) == 0 )
    {
      int rc = Stbl_fakeFinishCellInTable( me, lastrow, lineno, 1 );
      if ( rc != 0 )
      {
        if ( rc < 0 )
        {
          return -1;
        }
        lastrow = &me->rows[ me->nrows - 1 ];
        icell = lastrow->ncells - 1;
      }
    }
    len = Stbl_finishCellInRow( lastrow, s, end_td, lineno, pos );
    if ( len == -1 )
    {
      return len;
    }
    xlen = len < 1 ? s->pending_len : len;
    if ( lastrow->Line == lineno )
      len = xlen;
    if ( lastrow->cells[ icell ].colspan > 1 )
    {
      int spanlen = 0, spanlend = 0;
      i = icell;
      for ( ; i < lastrow->cells[ icell ].colspan + icell; i++ )
      {
        if ( me->sumcols[ i ].len >= 1 )
        {
          spanlen += me->sumcols[ i ].len;
          if ( icell < i )
            spanlen++;
        }
        spanlend = spanlend;
        //i++;
      }
      if ( spanlend != 0 )
        spanlend--;
      if ( spanlen < spanlend )
        spanlen = spanlend;
      if ( spanlen < len )
        me->maxlen += len - spanlen;
    }
    else
    if ( me->sumcols[ icell ].len < len )
    {
      if ( me->sumcols[ icell + 1 ].colspan >= -1 )
        me->maxlen += len - me->sumcols[ icell ].len;
      me->sumcols[ icell ].len = len;
    }
    if ( len >= 1 )
    {
      update_sumcols0( me->sumcols, lastrow, pos, len, icell, lastrow->cells[ icell ].colspan, me->allocated_sumcols );
      me->maxpos = me->sumcols[ me->allocated_sumcols - 1 ].pos;
    }
    if ( ( end_td & 1 ) == 0 )
    {
      lastrow->ended = ROW_ended_by_splitline;
      lastrow->content |= 32;
      lastrow->offset = offset;
    }
    if ( ( nested_tables & 255 ) != 0 )
    {
      if ( ( LYwideLines == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : 1013 ) < me->maxlen )
      {
        return -1;
      }
    }
    else
    {
      if ( ( LYwideLines == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : 1013 ) < me->maxlen + ( xlen - len ) )
      {
        return -1;
      }
    }
    if ( ( LYwideLines == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : 1013 ) < me->maxpos )
    {
      return -1;
    }
    return 0;
  }
}
int Stbl_addColInfo( STable_info *me, int colspan, short alignment, BOOLEAN isgroup )
{
  STable_cellinfo *sumcols, *sumcol;
  int i, icolinfo;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_addColInfo(cs=%d, al=%d, isgroup=%d)\n", colspan, alignment, isgroup );
  }
  if ( isgroup != 0 )
  {
    if ( me->ncolinfo < me->pending_colgroup_next )
      me->ncolinfo = me->pending_colgroup_next;
    me->pending_colgroup_next = me->ncolinfo + colspan;
    if ( me->ncolinfo >= 1 )
      me->sumcols[ me->ncolinfo - 1 ].cLine = -2;
    me->pending_colgroup_align = alignment;
  }
  else
  {
    i = me->pending_colgroup_next - 1;
    for ( ; me->ncolinfo + colspan <= i; i-- )
    {
      me->sumcols[ i ].alignment = -1;
      //i--;
    }
    me->pending_colgroup_next = me->ncolinfo + colspan;
  }
  icolinfo = me->ncolinfo;
  if ( isgroup == 0 )
    me->ncolinfo += colspan;
{
  int growby = 0;
  for ( ; me->allocated_sumcols + growby < icolinfo + colspan + 1; growby += 16 )
  {
    //growby += 16;
  }
  if ( growby != 0 )
  {
    if ( me->allocated_sumcols == 0 )
    {
      sumcols = calloc( growby, sizeof( STable_cellinfo ) );
    }
    else
    {
      sumcols = realloc( me->sumcols, ( ( me->allocated_sumcols + growby ) * 4 ) + ( ( me->allocated_sumcols + growby ) * 16 ) );
      i = 0;
      for ( ; sumcols != 0 && i < growby; i++ )
      {
        sumcol = &sumcols[ me->allocated_sumcols + i ];
        sumcol->pos = sumcols[ me->allocated_sumcols - 1 ].pos;
        sumcol->len = 0;
        sumcol->colspan = 0;
        sumcol->cLine = 0;
        //i++;
      }
    }
    if ( sumcols != 0 )
    {
      me->allocated_sumcols += growby;
      me->sumcols = sumcols;
    }
    else
    {
      return -1;
    }
  }
  if ( alignment == 65535 )
    alignment = me->pending_colgroup_align;
  i = icolinfo;
  for ( ; i < icolinfo + colspan; i++ )
  {
    me->sumcols[ i ].alignment = alignment;
    //i++;
  }
  return 0;
}
}
int Stbl_finishColGroup( STable_info *me )
{
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_finishColGroup()\n" );
  }
  if ( me->ncolinfo <= me->pending_colgroup_next )
  {
    me->ncolinfo = me->pending_colgroup_next;
    if ( me->ncolinfo >= 1 )
    {
      me->sumcols[ me->ncolinfo - 1 ].cLine = -2;
    }
  }
  me->pending_colgroup_next = 0;
  me->pending_colgroup_align = -1;
  return 0;
}
int Stbl_addRowGroup( STable_info *me, short alignment )
{
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_addRowGroup()\n" );
  }
  Stbl_cancelRowSpans( me );
  me->rowgroup_align = alignment;
  return 0;
}
int Stbl_finishTABLE( STable_info *me )
{
  STable_states *s = &me->s;
  int i;
  int curpos = 0;
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
  {
    fprintf( TraceFP( ), "TRST:Stbl_finishTABLE()\n" );
  }
  if ( me == 0 || me->nrows < 1 || me->ncols < 1 )
  {
    return -1;
  }
  if ( me->nrows >= 1 && me->rows[ me->nrows - 1 ].ncells >= 1 )
  {
    if ( s->pending_len >= 1 )
    {
    }
    s->pending_len = 0;
  }
  Stbl_finishRowInTable( me );
  i = 0;
  for ( ; i < me->nrows - 1; i++ )
  {
    int j = i + 1, leading = i, non_empty = 0;
    STable_rowinfo *nextrow = &me->rows[ j ];
    int minoffset, have_offsets;
    int foundcell = -1, max_width;
    if ( ( nextrow->content & 38 ) == 36 )
    {
      minoffset = *(int*)(nextrow - 16);
      if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
      {
        fprintf( TraceFP( ), "TRST:Stbl_finishTABLE, l=%d, offset=%d, ended=%u.\n", i, *(int*)(nextrow - 16), *(int*)(nextrow - 24) );
      }
      while ( j < me->nrows && ( nextrow->content & 38 ) == 36 )
      {
        if ( nextrow->offset < minoffset )
          minoffset = nextrow->offset;
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
        {
          fprintf( TraceFP( ), "TRST:Stbl_finishTABLE, l=%d, offset=%d, ended=%u.\n", j, nextrow->offset, *(int*)(nextrow - 24) );
        }
        nextrow++;
        j++;
      }
      i = j - 1;
      j = leading;
      nextrow = &me->rows[ j ];
      have_offsets = 0;
      nextrow->content |= 16;
      for ( ; j <= i; j++ )
      {
        nextrow->offset -= minoffset;
        nextrow->content |= 8;
        if ( nextrow->offset != 0 )
          have_offsets = 1;
        nextrow++;
        //j++;
      }
      if ( have_offsets != 0 )
      {
        foundcell = -1;
        j = leading + 1;
        nextrow = &me->rows[ j ];
        for ( ; foundcell == -1 && j <= i; j++ )
        {
          int curcell = -1;
          while ( foundcell == -1 )
          {
            curcell++;
            if ( curcell < nextrow->ncells )
            {
              if ( nextrow->cells[ curcell ].len == 0 )
                continue;
              else
              {
                foundcell = curcell;
                non_empty = j;
              }
            }
            else
              break;
          }
          nextrow++;
          //j++;
        }
        if ( foundcell != -1 )
        {
          max_width = 0;
          j = leading;
          nextrow = &me->rows[ j ];
          for ( ; j <= i; j++ )
          {
            if ( foundcell < nextrow->ncells )
            {
              int curwid = nextrow->cells[ foundcell ].len + nextrow->offset;
              if ( max_width < curwid )
                max_width = curwid;
            }
            nextrow++;
            //j++;
          }
          j = non_empty;
          nextrow = &me->rows[ j ];
          update_sumcols0( me->sumcols, &me->rows[ non_empty ], 0, max_width, foundcell, nextrow->cells[ foundcell ].colspan, me->allocated_sumcols );
          j = leading;
          nextrow = &me->rows[ j ];
          for ( ; j <= i; j++ )
          {
            if ( foundcell < nextrow->ncells )
              nextrow->cells[ foundcell ].len = max_width;
            nextrow++;
            //j++;
          }
        }
      }
    }
    //i++;
  }
  i = 0;
  for ( ; i < me->ncols; i++ )
  {
    if ( me->sumcols[ i ].pos < curpos )
      me->sumcols[ i ].pos = curpos;
    else
      curpos = me->sumcols[ i ].pos;
    if ( me->sumcols[ i ].len >= 1 )
      curpos += me->sumcols[ i ].len;
    //i++;
  }
  return ( LYwideLines == 0 ? LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) : 1013 ) < curpos ? -1 : me->ncols;
}
short Stbl_getAlignment( STable_info *me )
{
  return ( me == 0 ? 65535 : me->alignment );
}
int get_fixup_positions( STable_rowinfo *me, int *oldpos, int *newpos, STable_cellinfo *sumcols )
{
  int i = 0, ip = 0;
  int next_i, newlen;
  int ninserts;
  if ( me == 0 )
  {
    return -1;
  }
  while ( i < me->ncells )
  {
    int offset;
    next_i = i + 1;
    if ( me->cells[ i ].cLine != me->Line )
    {
      if ( me->Line < me->cells[ i ].cLine )
        break;
      i = next_i;
    }
    else
    {
      oldpos[ ip ] = me->cells[ i ].pos;
      if ( ( me->content & 8 ) != 0 && ( i == me->ncells - 1 || ( me->content & 16 ) == 0 ) )
        offset = me->offset;
      else
        offset = 0;
      newpos[ ip ] = sumcols[ i ].pos + offset;
      if ( ( me->cells[ i ].alignment == 3 || me->cells[ i ].alignment == 2 ) && me->cells[ i ].len >= 1 )
      {
        newlen = sumcols[ next_i ].pos - newpos[ ip ] - 1;
        newlen = sumcols[ i ].len < newlen ? sumcols[ i ].len : newlen;
        if ( me->cells[ i ].len < newlen )
        {
          if ( me->cells[ i ].alignment == 2 )
            newpos[ ip ] += newlen - me->cells[ i ].len;
          else
            newpos[ ip ] += ( newlen - me->cells[ i ].len ) / 2;
        }
      }
      ip++;
      i = next_i;
    }
  }
  ninserts = ip;
  return ninserts;
}
int Stbl_getFixupPositions( STable_info *me, int lineno, int *oldpos, int *newpos )
{
  STable_rowinfo *row;
  int j;
  int ninserts = -1;
  if ( me == 0 || me->nrows == 0 )
  {
    return -1;
  }
  j = 0;
  for ( ; j < me->nrows; j++ )
  {
    row = &me->rows[ j ];
    if ( row->Line == lineno )
    {
      ninserts = get_fixup_positions( row, oldpos, newpos, me->sumcols );
      break;
    }
    else
    {
      //j++;
    }
  }
  return ninserts;
}
int Stbl_getStartLine( STable_info *me )
{
  return me == 0 ? -1 : me->startline;
}
int Stbl_getStartLineDeep( STable_info *me )
{
  if ( me == 0 )
  {
    return -1;
  }
  for ( ; me->enclosing != 0; me = &me )
  {
    //me = &me;
  }
  return me->startline;
}
void Stbl_update_enclosing( STable_info *me, int max_width, int last_lineno )
{
  int l;
  if ( me != 0 && me->enclosing != 0 && max_width != 0 )
  {
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
    {
      fprintf( TraceFP( ), "TRST:Stbl_update_enclosing, width=%d, lines=%d...%d.\n", max_width, me->startline, last_lineno );
    }
    l = me->startline;
    for ( ; l <= last_lineno; l++ )
    {
      if ( Stbl_finishCellInTable( (int)( &me ), 0, l, 0, max_width ) < 0 )
      {
        STable_info *stbl = &me;
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 4 ) != 0 )
        {
          fprintf( TraceFP( ), "TRST:Stbl_update_enclosing: width too large, aborting enclosing\n" );
        }
        &me = 0;
        for ( ; stbl != 0; stbl = enclosing )
        {
          STable_info *enclosing = &stbl;
          Stbl_free( stbl );
          //stbl = enclosing;
        }
        break;
      }
      else
      {
        //l++;
      }
    }
  }
  return;
}
void Stbl_set_enclosing( STable_info *me, STable_info *enclosing, struct _TextAnchor *enclosing_last_anchor_before_stbl )
{
  if ( me != 0 )
  {
    &me = enclosing;
    &me->enclosing_last_anchor_before_stbl = &enclosing_last_anchor_before_stbl;
  }
  return;
}
STable_info *Stbl_get_enclosing( STable_info *me )
{
  return me == 0 ? 0 : &me;
}
struct _TextAnchor *Stbl_get_last_anchor_before( STable_info *me )
{
  return me == 0 ? 0 : &me->enclosing_last_anchor_before_stbl;
}
