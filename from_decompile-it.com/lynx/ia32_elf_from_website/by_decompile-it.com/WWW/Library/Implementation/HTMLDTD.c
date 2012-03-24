#include "HTMLDTD.c.h"
static char *entities[112];
static attr core_attr_list[5];
static AttrType core_attr_type[2];
static attr i18n_attr_list[3];
static AttrType i18n_attr_type[2];
static attr events_attr_list[11];
static AttrType events_attr_type[2];
static attr align_attr_list[2];
static AttrType align_attr_type[2];
static attr cellalign_attr_list[5];
static AttrType cellalign_attr_type[2];
static attr bgcolor_attr_list[2];
static HTTag tags[119];
static AttrType bgcolor_attr_type[2];
SGML_dtd HTML_dtd;
static attr A_attr_list[20];
static AttrType A_attr_type[5];
HTTag HTTag_unrecognized;
static attr ADDRESS_attr_list[3];
static AttrType ADDRESS_attr_type[4];
static attr APPLET_attr_list[11];
static AttrType APPLET_attr_type[5];
static attr AREA_attr_list[13];
static AttrType AREA_attr_type[5];
static attr BASE_attr_list[3];
static AttrType BASE_attr_type[3];
static attr BGSOUND_attr_list[4];
static AttrType BGSOUND_attr_type[4];
static attr BODY_attr_list[9];
static AttrType BODY_attr_type[5];
static attr BODYTEXT_attr_list[9];
static AttrType BODYTEXT_attr_type[4];
static attr BQ_attr_list[4];
static AttrType BQ_attr_type[4];
static attr BUTTON_attr_list[10];
static AttrType BUTTON_attr_type[5];
static attr CAPTION_attr_list[3];
static AttrType CAPTION_attr_type[6];
static attr COL_attr_list[4];
static AttrType COL_attr_type[6];
static attr CREDIT_attr_list[2];
static AttrType CREDIT_attr_type[4];
static attr DEL_attr_list[3];
static AttrType DEL_attr_type[5];
static attr DIV_attr_list[2];
static AttrType DIV_attr_type[5];
static attr DL_attr_list[3];
static AttrType DL_attr_type[4];
static attr EMBED_attr_list[15];
static AttrType EMBED_attr_type[5];
static attr FIELDSET_attr_list[2];
static AttrType FIELDSET_attr_type[4];
static attr FIG_attr_list[11];
static AttrType FIG_attr_type[5];
static attr FN_attr_list[2];
static AttrType FN_attr_type[4];
static attr FONT_attr_list[6];
static AttrType FONT_attr_type[4];
static attr FORM_attr_list[12];
static AttrType FORM_attr_type[4];
static attr FRAME_attr_list[9];
static AttrType FRAME_attr_type[3];
static attr FRAMESET_attr_list[5];
static AttrType FRAMESET_attr_type[2];
static attr GEN_attr_list[2];
static AttrType GEN_attr_type[5];
static attr H_attr_list[8];
static AttrType H_attr_type[6];
static attr HR_attr_list[7];
static AttrType HR_attr_type[5];
static attr IFRAME_attr_list[10];
static AttrType IFRAME_attr_type[4];
static attr IMG_attr_list[16];
static AttrType IMG_attr_type[6];
static attr INPUT_attr_list[29];
static AttrType INPUT_attr_type[6];
static attr ISINDEX_attr_list[4];
static AttrType ISINDEX_attr_type[4];
static attr KEYGEN_attr_list[3];
static AttrType KEYGEN_attr_type[4];
static attr LABEL_attr_list[6];
static AttrType LABEL_attr_type[5];
static attr LEGEND_attr_list[3];
static AttrType LEGEND_attr_type[6];
static attr LI_attr_list[8];
static AttrType LI_attr_type[5];
static attr LINK_attr_list[9];
static AttrType LINK_attr_type[5];
static attr MAP_attr_list[3];
static AttrType MAP_attr_type[4];
static attr MATH_attr_list[3];
static AttrType MATH_attr_type[4];
static attr META_attr_list[5];
static AttrType META_attr_type[2];
static attr NEXTID_attr_list[2];
static AttrType NEXTID_attr_type[2];
static attr NOTE_attr_list[5];
static AttrType NOTE_attr_type[4];
static attr OBJECT_attr_list[20];
static AttrType OBJECT_attr_type[6];
static attr OL_attr_list[7];
static AttrType OL_attr_type[4];
static attr OPTION_attr_list[8];
static AttrType OPTION_attr_type[5];
static attr OVERLAY_attr_list[9];
static AttrType OVERLAY_attr_type[3];
static attr P_attr_list[3];
static AttrType P_attr_type[5];
static attr PARAM_attr_list[13];
static AttrType PARAM_attr_type[4];
static attr Q_attr_list[3];
static AttrType Q_attr_type[4];
static attr SCRIPT_attr_list[11];
static AttrType SCRIPT_attr_type[4];
static attr SELECT_attr_list[16];
static AttrType SELECT_attr_type[5];
static attr STYLE_attr_list[4];
static AttrType STYLE_attr_type[4];
static attr TAB_attr_list[5];
static AttrType TAB_attr_type[5];
static attr TABLE_attr_list[16];
static AttrType TABLE_attr_type[6];
static attr TD_attr_list[14];
static AttrType TD_attr_type[5];
static attr TEXTAREA_attr_list[16];
static AttrType TEXTAREA_attr_type[6];
static attr TR_attr_list[4];
static AttrType TR_attr_type[6];
static attr UL_attr_list[9];
static AttrType UL_attr_type[4];
static attr A_attr[26];
static attr ADDRESS_attr[9];
static attr APPLET_attr[18];
static attr AREA_attr[19];
static attr BASE_attr[7];
static attr BGSOUND_attr[10];
static attr BODY_attr[16];
static attr BODYTEXT_attr[15];
static attr BQ_attr[10];
static attr BUTTON_attr[16];
static attr CAPTION_attr[10];
static attr COL_attr[14];
static attr CREDIT_attr[8];
static attr DEL_attr[9];
static attr DIV_attr[9];
static attr DL_attr[9];
static attr EMBED_attr[22];
static attr FIELDSET_attr[8];
static attr FIG_attr[18];
static attr FN_attr[8];
static attr FONT_attr[12];
static attr FORM_attr[18];
static attr FRAME_attr[13];
static attr FRAMESET_attr[5];
static attr GEN_attr[8];
static attr H_attr[15];
static attr HR_attr[14];
static attr IFRAME_attr[15];
static attr IMG_attr[23];
static attr INPUT_attr[36];
static attr ISINDEX_attr[10];
static attr KEYGEN_attr[9];
static attr LABEL_attr[12];
static attr LEGEND_attr[10];
static attr LI_attr[14];
static attr LINK_attr[15];
static attr MAP_attr[9];
static attr MATH_attr[9];
static attr META_attr[5];
static attr NEXTID_attr[2];
static attr NOTE_attr[11];
static attr OBJECT_attr[27];
static attr OL_attr[13];
static attr OPTION_attr[14];
static attr OVERLAY_attr[13];
static attr P_attr[10];
static attr PARAM_attr[19];
static attr Q_attr[9];
static attr SCRIPT_attr[17];
static attr SELECT_attr[23];
static attr STYLE_attr[10];
static attr TAB_attr[12];
static attr TABLE_attr[23];
static attr TD_attr[24];
static attr TEXTAREA_attr[23];
static attr TR_attr[14];
static attr UL_attr[15];
static HTTag tags_table0[119];
static HTTag tags_table1[119];
void HTSwitchDTD( int new_flag )
{
  if ( WWW_TraceFlag && WWW_TraceFlag )
  {
    fprintf( TraceFP( ), "HTMLDTD: Copying %s DTD element info of size %d, %d * %d\n", "tagsoup", 6664, 119, 56 );
  }
  if ( new_flag )
  {
    memcpy( tags[0].name, tags_table1[0].name, 6664 );
  }
  else
  {
    memcpy( tags[0].name, tags_table0[0].name, 6664 );
  }
  return;
}
void HTStartAnchor( HTStructured *obj, char *name, char *href )
{
  BOOLEAN present[25];
  char *value[25];
  int i = 0;
  for ( ; i <= 24; i++ )
  {
    present[ i ] = 0;
    // i++;
  }
  if ( name && name[0] )
  {
    present[12] = 1;
    value[12] = name;
  }
  if ( href )
  {
    present[6] = 1;
    value[6] = href;
  }
  ;
}
void HTStartAnchor5( HTStructured *obj, char *name, char *href, char *linktype, int tag_charset )
{
  BOOLEAN present[25];
  char *value[25];
  int i = 0;
  for ( ; i <= 24; i++ )
  {
    present[ i ] = 0;
    // i++;
  }
  if ( name && name[0] )
  {
    present[12] = 1;
    value[12] = name;
  }
  if ( href && href[0] )
  {
    present[6] = 1;
    value[6] = href;
  }
  if ( linktype && linktype[0] )
  {
    present[23] = 1;
    value[23] = linktype;
  }
  ;
}
void HTStartIsIndex( HTStructured *obj, char *prompt, char *href )
{
  BOOLEAN present[9];
  char *value[9];
  int i = 0;
  for ( ; i <= 8; i++ )
  {
    present[ i ] = 0;
    // i++;
  }
  if ( prompt && prompt[0] )
  {
    present[6] = 1;
    value[6] = prompt;
  }
  if ( href )
  {
    present[3] = 1;
    value[3] = href;
  }
  ;
}
#if 0
#endif
