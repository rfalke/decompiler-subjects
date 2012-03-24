#include "DefaultStyle.c.h"
static HTTabStop tabs_8[23] = { { 0, 524288,  }
, { 0, 1048576,  }
, { 0, 1572864,  }
, { 0, 2097152,  }
, { 0, 2621440,  }
, { 0, 3145728,  }
, { 0, 3670016,  }
, { 0, 4194304,  }
, { 0, 4718592,  }
, { 0, 5242880,  }
, { 0, 5767168,  }
, { 0, 6291456,  }
, { 0, 6815744,  }
, { 0, 7340032,  }
, { 0, 7864320,  }
, { 0, 8388608,  }
, { 0, 8912896,  }
, { 0, 9437184,  }
, { 0, 9961472,  }
, { 0, 10485760,  }
, { 0, 11010048,  }
, { 0, 11534336,  }
, { 0, 0,  }
,  };
static HTStyle HTStyleNormal = { 0, "Normal", 0, "P", 0, 1, 0, 0, 0, 3, 3, 6, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleDivCenter = { &HTStyleNormal, "DivCenter", 1, "DCENTER", 0, 1, 0, 0, 0, 3, 3, 6, 3, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleDivLeft = { &HTStyleDivCenter, "DivLeft", 2, "DLEFT", 0, 1, 0, 0, 0, 3, 3, 6, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleDivRight = { &HTStyleDivLeft, "DivRight", 3, "DRIGHT", 0, 1, 0, 0, 0, 3, 3, 6, 2, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleBanner = { &HTStyleDivRight, "Banner", 4, "BANNER", 0, 1, 0, 0, 0, 3, 3, 6, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleBlockquote = { &HTStyleBanner, "Blockquote", 5, "BLOCKQUOTE", 0, 1, 0, 0, 0, 5, 5, 7, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleBq = { &HTStyleBlockquote, "Bq", 6, "BQ", 0, 1, 0, 0, 0, 5, 5, 7, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleFootnote = { &HTStyleBq, "Footnote", 7, "FN", 0, 1, 0, 0, 0, 5, 5, 7, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleList = { &HTStyleFootnote, "List", 8, "UL", 0, 1, 0, 0, 0, 3, 7, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleList1 = { &HTStyleList, "List1", 9, "UL", 0, 1, 0, 0, 0, 8, 12, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleList2 = { &HTStyleList1, "List2", 10, "UL", 0, 1, 0, 0, 0, 13, 17, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleList3 = { &HTStyleList2, "List3", 11, "UL", 0, 1, 0, 0, 0, 18, 22, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleList4 = { &HTStyleList3, "List4", 12, "UL", 0, 1, 0, 0, 0, 23, 27, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleList5 = { &HTStyleList4, "List5", 13, "UL", 0, 1, 0, 0, 0, 28, 32, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleList6 = { &HTStyleList5, "List6", 14, "UL", 0, 1, 0, 0, 0, 33, 37, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu = { &HTStyleList6, "Menu", 15, "MENU", 0, 1, 0, 0, 0, 3, 7, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu1 = { &HTStyleMenu, "Menu1", 16, "MENU", 0, 1, 0, 0, 0, 8, 12, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu2 = { &HTStyleMenu1, "Menu2", 17, "MENU", 0, 1, 0, 0, 0, 13, 17, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu3 = { &HTStyleMenu2, "Menu3", 18, "MENU", 0, 1, 0, 0, 0, 18, 22, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu4 = { &HTStyleMenu3, "Menu4", 19, "MENU", 0, 1, 0, 0, 0, 23, 27, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu5 = { &HTStyleMenu4, "Menu5", 20, "MENU", 0, 1, 0, 0, 0, 28, 33, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleMenu6 = { &HTStyleMenu5, "Menu6", 21, "MENU", 0, 1, 0, 0, 0, 33, 38, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossary = { &HTStyleMenu6, "Glossary", 22, "DL", 0, 1, 0, 0, 0, 3, 10, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossary1 = { &HTStyleGlossary, "Glossary1", 23, "DL", 0, 1, 0, 0, 0, 8, 16, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossary2 = { &HTStyleGlossary1, "Glossary2", 24, "DL", 0, 1, 0, 0, 0, 14, 22, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossary3 = { &HTStyleGlossary2, "Glossary3", 25, "DL", 0, 1, 0, 0, 0, 20, 28, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossary4 = { &HTStyleGlossary3, "Glossary4", 26, "DL", 0, 1, 0, 0, 0, 26, 34, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossary5 = { &HTStyleGlossary4, "Glossary5", 27, "DL", 0, 1, 0, 0, 0, 32, 40, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossary6 = { &HTStyleGlossary5, "Glossary6", 28, "DL", 0, 1, 0, 0, 0, 38, 46, 6, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleGlossaryCompact = { &HTStyleGlossary6, "GlossaryCompact", 29, "DLC", 0, 1, 0, 0, 0, 3, 10, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossaryCompact1 = { &HTStyleGlossaryCompact, "GlossaryCompact1", 30, "DLC", 0, 1, 0, 0, 0, 8, 15, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossaryCompact2 = { &HTStyleGlossaryCompact1, "GlossaryCompact2", 31, "DLC", 0, 1, 0, 0, 0, 13, 20, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossaryCompact3 = { &HTStyleGlossaryCompact2, "GlossaryCompact3", 32, "DLC", 0, 1, 0, 0, 0, 18, 25, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossaryCompact4 = { &HTStyleGlossaryCompact3, "GlossaryCompact4", 33, "DLC", 0, 1, 0, 0, 0, 23, 30, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossaryCompact5 = { &HTStyleGlossaryCompact4, "GlossaryCompact5", 34, "DLC", 0, 1, 0, 0, 0, 28, 35, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleGlossaryCompact6 = { &HTStyleGlossaryCompact5, "GlossaryCompact6", 35, "DLC", 0, 1, 0, 0, 0, 33, 40, 6, 1, 65536, 0, 0, 0, 0, 257, 0, 0,  }
;
static HTStyle HTStyleExample = { &HTStyleGlossaryCompact6, "Example", 36, "XMP", 0, 1, 0, 0, 0, 0, 0, 0, 1, 65536, 0, 0, 22, 8, 0, 0, 0,  }
;
static HTStyle HTStylePreformatted = { &HTStyleExample, "Preformatted", 37, "PRE", 0, 1, 0, 0, 0, 0, 0, 0, 1, 65536, 0, 0, 22, 8, 0, 0, 0,  }
;
static HTStyle HTStyleListing = { &HTStylePreformatted, "Listing", 38, "LISTING", 0, 1, 0, 0, 0, 0, 0, 0, 1, 65536, 0, 0, 22, 8, 0, 0, 0,  }
;
static HTStyle HTStyleAddress = { &HTStyleListing, "Address", 39, "ADDRESS", 0, 1, 0, 0, 0, 4, 4, 7, 1, 65536, 0, 0, 22, 8, 257, 2, 0,  }
;
static HTStyle HTStyleNote = { &HTStyleAddress, "Note", 40, "NOTE", 0, 1, 0, 0, 0, 5, 5, 7, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleHeading1 = { &HTStyleNote, "Heading1", 41, "H1", 2, 1, 0, 0, 0, 0, 0, 0, 3, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleHeading2 = { &HTStyleHeading1, "Heading2", 42, "H2", 2, 1, 0, 0, 0, 0, 0, 0, 1, 65536, 0, 0, 0, 0, 257, 1, 1,  }
;
static HTStyle HTStyleHeading3 = { &HTStyleHeading2, "Heading3", 43, "H3", 2, 1, 0, 0, 0, 2, 2, 0, 1, 65536, 0, 0, 0, 0, 257, 1, 0,  }
;
static HTStyle HTStyleHeading4 = { &HTStyleHeading3, "Heading4", 44, "H4", 2, 1, 0, 0, 0, 4, 4, 0, 1, 65536, 0, 0, 0, 0, 257, 1, 0,  }
;
static HTStyle HTStyleHeading5 = { &HTStyleHeading4, "Heading5", 45, "H5", 2, 1, 0, 0, 0, 6, 6, 0, 1, 65536, 0, 0, 0, 0, 257, 1, 0,  }
;
static HTStyle HTStyleHeading6 = { &HTStyleHeading5, "Heading6", 46, "H6", 2, 1, 0, 0, 0, 8, 8, 0, 1, 65536, 0, 0, 0, 0, 257, 1, 0,  }
;
static HTStyle HTStyleHeadingCenter = { &HTStyleHeading6, "HeadingCenter", 47, "HCENTER", 2, 1, 0, 0, 0, 0, 0, 3, 3, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleHeadingLeft = { &HTStyleHeadingCenter, "HeadingLeft", 48, "HLEFT", 2, 1, 0, 0, 0, 0, 0, 3, 1, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyle HTStyleHeadingRight = { &HTStyleHeadingLeft, "HeadingRight", 49, "HRIGHT", 2, 1, 0, 0, 0, 0, 0, 3, 2, 65536, 0, 0, 22, 8, 257, 1, 0,  }
;
static HTStyleSheet sheet = { "default.style", &HTStyleHeadingRight,  }
;
static HTStyle *st_array[50];
static HTStyleSheet *result;
DefaultStyle.c:482:0x80D6EDC: Warning:  non-constant src expr:  LDle:I32(Add32(GET:I32(20),0xFFFFFFF4:I32))
DefaultStyle.c:466:0x80D6E38: Warning:  non-constant src expr:  LDle:I32(Add32(GET:I32(20),0xFFFFFFF4:I32))
HTStyleSheet *DefaultStyle( HTStyle ***result_array )
{
  int ecx;
  HTStyle *p, *q;
  if ( result == 0 )
  {
    result = HTStyleSheetNew( );
    result->name = sheet.name;
    result->styles = sheet.styles;
    result->styles = 0;
    p = sheet.styles;
    for ( ; p != 0; p = &p )
    {
      q = HTStyleNew( );
      memcpy( q, p, 20 * 4 );
      if ( ( no_margins & 255 ) != 0 )
      {
        q->indent1st = 0;
        q->leftIndent = 0;
        q->rightIndent = 0;
      }
      st_array[ q->id ] = q;
      result->styles = q;
      //p = &p;
    }
  }
  else
  {
    p = sheet->styles;
    for ( ; p != 0 && q != 0; q = &q )
    {
      HTStyle *r = &q;
      memcpy( q, p, 20 * 4 );
      if ( ( no_margins & 255 ) != 0 )
      {
        q->indent1st = 0;
        q->leftIndent = 0;
        q->rightIndent = 0;
      }
      st_array[ q->id ] = q;
      &q = r;
      p = &p;
      //q = &q;
    }
  }
  result_array = st_array;
  return result;
}
