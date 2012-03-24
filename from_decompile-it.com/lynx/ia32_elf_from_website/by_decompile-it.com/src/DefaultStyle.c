#include "DefaultStyle.c.h"
static HTTabStop tabs_8[23];
static HTStyle HTStyleNormal;
static HTStyle HTStyleDivCenter;
static HTStyle HTStyleDivLeft;
static HTStyle HTStyleDivRight;
static HTStyle HTStyleBanner;
static HTStyle HTStyleBlockquote;
static HTStyle HTStyleBq;
static HTStyle HTStyleFootnote;
static HTStyle HTStyleList;
static HTStyle HTStyleList1;
static HTStyle HTStyleList2;
static HTStyle HTStyleList3;
static HTStyle HTStyleList4;
static HTStyle HTStyleList5;
static HTStyle HTStyleList6;
static HTStyle HTStyleMenu;
static HTStyle HTStyleMenu1;
static HTStyle HTStyleMenu2;
static HTStyle HTStyleMenu3;
static HTStyle HTStyleMenu4;
static HTStyle HTStyleMenu5;
static HTStyle HTStyleMenu6;
static HTStyle HTStyleGlossary;
static HTStyle HTStyleGlossary1;
static HTStyle HTStyleGlossary2;
static HTStyle HTStyleGlossary3;
static HTStyle HTStyleGlossary4;
static HTStyle HTStyleGlossary5;
static HTStyle HTStyleGlossary6;
static HTStyle HTStyleGlossaryCompact;
static HTStyle HTStyleGlossaryCompact1;
static HTStyle HTStyleGlossaryCompact2;
static HTStyle HTStyleGlossaryCompact3;
static HTStyle HTStyleGlossaryCompact4;
static HTStyle HTStyleGlossaryCompact5;
static HTStyle HTStyleGlossaryCompact6;
static HTStyle HTStyleExample;
static HTStyle HTStylePreformatted;
static HTStyle HTStyleListing;
static HTStyle HTStyleAddress;
static HTStyle HTStyleNote;
static HTStyle HTStyleHeading1;
static HTStyle HTStyleHeading2;
static HTStyle HTStyleHeading3;
static HTStyle HTStyleHeading4;
static HTStyle HTStyleHeading5;
static HTStyle HTStyleHeading6;
static HTStyle HTStyleHeadingCenter;
static HTStyle HTStyleHeadingLeft;
static HTStyle HTStyleHeadingRight;
static HTStyleSheet sheet;
static HTStyle *st_array[50];
static HTStyleSheet *result;
HTStyleSheet *DefaultStyle( HTStyle ***result_array )
{
  int ecx;
  HTStyle *p, *q;
  if ( result == 0 )
  {
    result = HTStyleSheetNew( );
    result->name[0] = sheet.name;
    result->styles = sheet.styles;
    *(int*)&result->styles = 0;
    p = sheet.styles;
    for ( ; p;  )
    {
      q = HTStyleNew( );
      memcpy( q, p, 20 * 4 );
      if ( no_margins )
      {
        q->indent1st = 0;
        q->leftIndent = 0;
        q->rightIndent = 0;
      }
      st_array[ q->id ] = q;
      result->styles = q;
      p = &p->next;
    }
  }
  else
  {
    p = sheet->styles;
    for ( ; p && q;  )
    {
      HTStyle *r = &q->next;
      memcpy( q, p, 20 * 4 );
      if ( no_margins )
      {
        q->indent1st = 0;
        q->leftIndent = 0;
        q->rightIndent = 0;
      }
      st_array[ q->id ] = q;
      q->next = r;
      p = &p->next;
      q = &q->next;
    }
  }
  result_array = st_array;
  return result;
}
#if 0
#endif
