#include "sgml.c.h"
struct sgml_info *sgml_info[4] = { &sgml_docbook_info, &sgml_html_info, &sgml_rss_info, &sgml_xbel_info };
int sgml_info_strcmp( void *key_, void *node_ )
{
  int eax;
  return ((int*)key_)[1] - ((int*)node_)[0];
}
struct sgml_info *get_sgml_info( enum sgml_document_type  doctype )
{
  int eax;
  return doctype <= 3 ? 0 : sgml_info[ doctype ];
}
#if 0
#endif
