#include "xbel.c.h"
static struct sgml_node_info xbel_attributes[10] = { { { 9, 0 }
, 0, 0 }
, { { 5, "ADDED" }
, 1, 0 }
, { { 6, "FOLDED" }
, 2, 0 }
, { { 4, "HREF" }
, 3, 2 }
, { { 2, "ID" }
, 4, 1 }
, { { 8, "MODIFIED" }
, 5, 0 }
, { { 5, "OWNER" }
, 6, 0 }
, { { 3, "REF" }
, 7, 0 }
, { { 7, "VERSION" }
, 8, 0 }
, { { 7, "VISITED" }
, 9, 0 }
 };
static struct sgml_node_info xbel_elements[10] = { { { 9, 0 }
, 0, 0 }
, { { 5, "ALIAS" }
, 1, 2 }
, { { 8, "BOOKMARK" }
, 2, 0 }
, { { 4, "DESC" }
, 3, 0 }
, { { 6, "FOLDER" }
, 4, 0 }
, { { 4, "INFO" }
, 5, 0 }
, { { 8, "METADATA" }
, 6, 0 }
, { { 9, "SEPARATOR" }
, 7, 0 }
, { { 5, "TITLE" }
, 8, 0 }
, { { 4, "XBEL" }
, 9, 0 }
 };
struct sgml_info sgml_xbel_info = { 3, xbel_attributes, xbel_elements };
#if 0
#endif
