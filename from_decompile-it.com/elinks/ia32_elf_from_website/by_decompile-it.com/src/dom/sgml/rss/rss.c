#include "rss.c.h"
static struct sgml_node_info rss_attributes[2] = { { { 1, 0 }
, 0, 0 }
, { { 11, "ISPERMALINK" }
, 1, 0 }
 };
static struct sgml_node_info rss_elements[9] = { { { 8, 0 }
, 0, 0 }
, { { 6, "AUTHOR" }
, 1, 0 }
, { { 7, "CHANNEL" }
, 2, 0 }
, { { 11, "DESCRIPTION" }
, 3, 0 }
, { { 4, "GUID" }
, 4, 0 }
, { { 4, "ITEM" }
, 5, 0 }
, { { 4, "LINK" }
, 6, 0 }
, { { 7, "PUBDATE" }
, 7, 0 }
, { { 5, "TITLE" }
, 8, 0 }
 };
struct sgml_info sgml_rss_info = { 2, rss_attributes, rss_elements };
#if 0
#endif
