#include "docbook.c.h"
static struct sgml_node_info docbook_attributes[145] = { { { 144, 0 }
, 0, 0 }
, { { 4, "ABBR" }
, 1, 0 }
, { { 6, "ACTION" }
, 2, 0 }
, { { 5, "ALIGN" }
, 3, 0 }
, { { 11, "APPLICATION" }
, 4, 0 }
, { { 4, "ARCH" }
, 5, 0 }
, { { 8, "AREAREFS" }
, 6, 0 }
, { { 8, "AUDIENCE" }
, 7, 0 }
, { { 4, "AXIS" }
, 8, 0 }
, { { 8, "BASEFORM" }
, 9, 0 }
, { { 7, "BGCOLOR" }
, 10, 0 }
, { { 6, "BORDER" }
, 11, 0 }
, { { 11, "CELLSPACING" }
, 12, 0 }
, { { 4, "CHAR" }
, 13, 0 }
, { { 7, "CHAROFF" }
, 14, 0 }
, { { 6, "CHOICE" }
, 15, 0 }
, { { 5, "CLASS" }
, 16, 0 }
, { { 9, "CMDLENGTH" }
, 17, 0 }
, { { 7, "COLNAME" }
, 18, 0 }
, { { 6, "COLNUM" }
, 19, 0 }
, { { 7, "COLNUMS" }
, 20, 0 }
, { { 4, "COLS" }
, 21, 0 }
, { { 6, "COLSEP" }
, 22, 0 }
, { { 7, "COLSPAN" }
, 23, 0 }
, { { 8, "COLWIDTH" }
, 24, 0 }
, { { 9, "CONDITION" }
, 25, 0 }
, { { 11, "CONFORMANCE" }
, 26, 0 }
, { { 12, "CONTENTDEPTH" }
, 27, 0 }
, { { 8, "CONTENTS" }
, 28, 0 }
, { { 12, "CONTENTWIDTH" }
, 29, 0 }
, { { 12, "CONTINUATION" }
, 30, 0 }
, { { 6, "COORDS" }
, 31, 0 }
, { { 3, "DEF" }
, 32, 0 }
, { { 12, "DEFAULTLABEL" }
, 33, 0 }
, { { 5, "DEPTH" }
, 34, 0 }
, { { 8, "ENCODING" }
, 35, 0 }
, { { 7, "ENDTERM" }
, 36, 0 }
, { { 9, "ENTITYREF" }
, 37, 2 }
, { { 7, "FILEREF" }
, 38, 2 }
, { { 5, "FLOAT" }
, 39, 0 }
, { { 10, "FLOATSTYLE" }
, 40, 0 }
, { { 6, "FORMAT" }
, 41, 0 }
, { { 3, "FPI" }
, 42, 0 }
, { { 5, "FRAME" }
, 43, 0 }
, { { 8, "FUNCTION" }
, 44, 0 }
, { { 7, "HEADERS" }
, 45, 0 }
, { { 6, "HEIGHT" }
, 46, 0 }
, { { 2, "ID" }
, 47, 1 }
, { { 10, "INHERITNUM" }
, 48, 0 }
, { { 5, "LABEL" }
, 49, 0 }
, { { 4, "LANG" }
, 50, 0 }
, { { 8, "LANGUAGE" }
, 51, 0 }
, { { 5, "LEVEL" }
, 52, 0 }
, { { 13, "LINENUMBERING" }
, 53, 0 }
, { { 7, "LINKEND" }
, 54, 0 }
, { { 8, "LINKENDS" }
, 55, 0 }
, { { 8, "LINKMODE" }
, 56, 0 }
, { { 9, "LOCALINFO" }
, 57, 0 }
, { { 4, "MARK" }
, 58, 0 }
, { { 8, "MOREINFO" }
, 59, 0 }
, { { 8, "MOREROWS" }
, 60, 0 }
, { { 7, "NAMEEND" }
, 61, 0 }
, { { 9, "NAMESPACE" }
, 62, 0 }
, { { 6, "NAMEST" }
, 63, 0 }
, { { 6, "NOWRAP" }
, 64, 0 }
, { { 10, "NUMERATION" }
, 65, 0 }
, { { 7, "ONCLICK" }
, 66, 0 }
, { { 10, "ONDBLCLICK" }
, 67, 0 }
, { { 9, "ONKEYDOWN" }
, 68, 0 }
, { { 10, "ONKEYPRESS" }
, 69, 0 }
, { { 7, "ONKEYUP" }
, 70, 0 }
, { { 11, "ONMOUSEDOWN" }
, 71, 0 }
, { { 11, "ONMOUSEMOVE" }
, 72, 0 }
, { { 10, "ONMOUSEOUT" }
, 73, 0 }
, { { 11, "ONMOUSEOVER" }
, 74, 0 }
, { { 9, "ONMOUSEUP" }
, 75, 0 }
, { { 6, "ORIENT" }
, 76, 0 }
, { { 6, "ORIGIN" }
, 77, 0 }
, { { 2, "OS" }
, 78, 0 }
, { { 11, "OTHERACTION" }
, 79, 0 }
, { { 10, "OTHERCLASS" }
, 80, 0 }
, { { 13, "OTHERFUNCTION" }
, 81, 0 }
, { { 12, "OTHERSPATIAL" }
, 82, 0 }
, { { 13, "OTHERTEMPORAL" }
, 83, 0 }
, { { 9, "OTHERTERM" }
, 84, 0 }
, { { 9, "OTHERTYPE" }
, 85, 0 }
, { { 10, "OTHERUNITS" }
, 86, 0 }
, { { 8, "OVERRIDE" }
, 87, 0 }
, { { 7, "PAGENUM" }
, 88, 0 }
, { { 10, "PARENTBOOK" }
, 89, 0 }
, { { 4, "PATH" }
, 90, 0 }
, { { 11, "PERFORMANCE" }
, 91, 0 }
, { { 6, "PGWIDE" }
, 92, 0 }
, { { 7, "PUBWORK" }
, 93, 0 }
, { { 8, "RELATION" }
, 94, 0 }
, { { 5, "REMAP" }
, 95, 0 }
, { { 8, "RENDERAS" }
, 96, 0 }
, { { 3, "REP" }
, 97, 0 }
, { { 8, "REVISION" }
, 98, 0 }
, { { 12, "REVISIONFLAG" }
, 99, 0 }
, { { 4, "ROLE" }
, 100, 0 }
, { { 6, "ROTATE" }
, 101, 0 }
, { { 6, "ROWSEP" }
, 102, 0 }
, { { 7, "ROWSPAN" }
, 103, 0 }
, { { 5, "RULES" }
, 104, 0 }
, { { 5, "SCALE" }
, 105, 0 }
, { { 8, "SCALEFIT" }
, 106, 0 }
, { { 6, "SCHEME" }
, 107, 0 }
, { { 5, "SCOPE" }
, 108, 0 }
, { { 8, "SECURITY" }
, 109, 0 }
, { { 7, "SEPCHAR" }
, 110, 0 }
, { { 10, "SHORTENTRY" }
, 111, 0 }
, { { 12, "SIGNIFICANCE" }
, 112, 0 }
, { { 6, "SORTAS" }
, 113, 0 }
, { { 7, "SPACING" }
, 114, 0 }
, { { 4, "SPAN" }
, 115, 0 }
, { { 8, "SPANNAME" }
, 116, 0 }
, { { 7, "SPATIAL" }
, 117, 0 }
, { { 9, "SRCCREDIT" }
, 118, 0 }
, { { 18, "STARTINGLINENUMBER" }
, 119, 0 }
, { { 8, "STARTREF" }
, 120, 0 }
, { { 6, "STATUS" }
, 121, 0 }
, { { 5, "STYLE" }
, 122, 0 }
, { { 7, "SUBJECT" }
, 123, 0 }
, { { 7, "SUMMARY" }
, 124, 0 }
, { { 8, "TABSTYLE" }
, 125, 0 }
, { { 9, "TARGETDOC" }
, 126, 0 }
, { { 12, "TARGETDOCENT" }
, 127, 0 }
, { { 9, "TARGETPTR" }
, 128, 0 }
, { { 8, "TEMPORAL" }
, 129, 0 }
, { { 10, "TERMLENGTH" }
, 130, 0 }
, { { 11, "TGROUPSTYLE" }
, 131, 0 }
, { { 5, "TITLE" }
, 132, 0 }
, { { 8, "TOCENTRY" }
, 133, 0 }
, { { 4, "TYPE" }
, 134, 0 }
, { { 5, "UNITS" }
, 135, 0 }
, { { 3, "URL" }
, 136, 2 }
, { { 9, "USERLEVEL" }
, 137, 0 }
, { { 6, "VALIGN" }
, 138, 0 }
, { { 6, "VENDOR" }
, 139, 0 }
, { { 6, "WEIGTH" }
, 140, 0 }
, { { 5, "WIDTH" }
, 141, 0 }
, { { 9, "XREFLABEL" }
, 142, 0 }
, { { 9, "XREFSTYLE" }
, 143, 0 }
, { { 4, "ZONE" }
, 144, 0 }
 };
static struct sgml_node_info docbook_elements[410] = { { { 409, 0 }
, 0, 0 }
, { { 6, "ABBREV" }
, 1, 0 }
, { { 8, "ABSTRACT" }
, 2, 0 }
, { { 5, "ACCEL" }
, 3, 0 }
, { { 5, "ACKNO" }
, 4, 0 }
, { { 7, "ACRONYM" }
, 5, 0 }
, { { 6, "ACTION" }
, 6, 0 }
, { { 7, "ADDRESS" }
, 7, 0 }
, { { 11, "AFFILIATION" }
, 8, 0 }
, { { 3, "ALT" }
, 9, 0 }
, { { 6, "ANCHOR" }
, 10, 0 }
, { { 6, "ANSWER" }
, 11, 0 }
, { { 8, "APPENDIX" }
, 12, 0 }
, { { 12, "APPENDIXINFO" }
, 13, 0 }
, { { 11, "APPLICATION" }
, 14, 0 }
, { { 4, "AREA" }
, 15, 0 }
, { { 7, "AREASET" }
, 16, 0 }
, { { 8, "AREASPEC" }
, 17, 0 }
, { { 3, "ARG" }
, 18, 0 }
, { { 7, "ARTICLE" }
, 19, 0 }
, { { 11, "ARTICLEINFO" }
, 20, 0 }
, { { 11, "ARTPAGENUMS" }
, 21, 0 }
, { { 11, "ATTRIBUTION" }
, 22, 0 }
, { { 9, "AUDIODATA" }
, 23, 0 }
, { { 11, "AUDIOOBJECT" }
, 24, 0 }
, { { 6, "AUTHOR" }
, 25, 0 }
, { { 11, "AUTHORBLURB" }
, 26, 0 }
, { { 11, "AUTHORGROUP" }
, 27, 0 }
, { { 14, "AUTHORINITIALS" }
, 28, 0 }
, { { 9, "BEGINPAGE" }
, 29, 0 }
, { { 14, "BIBLIOCOVERAGE" }
, 30, 0 }
, { { 9, "BIBLIODIV" }
, 31, 0 }
, { { 11, "BIBLIOENTRY" }
, 32, 0 }
, { { 12, "BIBLIOGRAPHY" }
, 33, 0 }
, { { 16, "BIBLIOGRAPHYINFO" }
, 34, 0 }
, { { 8, "BIBLIOID" }
, 35, 0 }
, { { 10, "BIBLIOMISC" }
, 36, 0 }
, { { 11, "BIBLIOMIXED" }
, 37, 0 }
, { { 10, "BIBLIOMSET" }
, 38, 0 }
, { { 14, "BIBLIORELATION" }
, 39, 0 }
, { { 9, "BIBLIOSET" }
, 40, 0 }
, { { 12, "BIBLIOSOURCE" }
, 41, 0 }
, { { 9, "BLOCKINFO" }
, 42, 0 }
, { { 10, "BLOCKQUOTE" }
, 43, 0 }
, { { 4, "BOOK" }
, 44, 0 }
, { { 8, "BOOKINFO" }
, 45, 0 }
, { { 10, "BRIDGEHEAD" }
, 46, 0 }
, { { 7, "CALLOUT" }
, 47, 0 }
, { { 11, "CALLOUTLIST" }
, 48, 0 }
, { { 7, "CAPTION" }
, 49, 0 }
, { { 7, "CAUTION" }
, 50, 0 }
, { { 7, "CHAPTER" }
, 51, 0 }
, { { 11, "CHAPTERINFO" }
, 52, 0 }
, { { 8, "CITATION" }
, 53, 0 }
, { { 12, "CITEBIBLIOID" }
, 54, 0 }
, { { 12, "CITEREFENTRY" }
, 55, 0 }
, { { 9, "CITETITLE" }
, 56, 0 }
, { { 4, "CITY" }
, 57, 0 }
, { { 9, "CLASSNAME" }
, 58, 0 }
, { { 13, "CLASSSYNOPSIS" }
, 59, 0 }
, { { 17, "CLASSSYNOPSISINFO" }
, 60, 0 }
, { { 11, "CMDSYNOPSIS" }
, 61, 0 }
, { { 2, "CO" }
, 62, 0 }
, { { 4, "CODE" }
, 63, 0 }
, { { 3, "COL" }
, 64, 0 }
, { { 8, "COLGROUP" }
, 65, 0 }
, { { 6, "COLLAB" }
, 66, 0 }
, { { 10, "COLLABNAME" }
, 67, 0 }
, { { 8, "COLOPHON" }
, 68, 0 }
, { { 7, "COLSPEC" }
, 69, 0 }
, { { 7, "COMMAND" }
, 70, 0 }
, { { 14, "COMPUTEROUTPUT" }
, 71, 0 }
, { { 9, "CONFDATES" }
, 72, 0 }
, { { 9, "CONFGROUP" }
, 73, 0 }
, { { 7, "CONFNUM" }
, 74, 0 }
, { { 11, "CONFSPONSOR" }
, 75, 0 }
, { { 9, "CONFTITLE" }
, 76, 0 }
, { { 8, "CONSTANT" }
, 77, 0 }
, { { 10, "CONSTRAINT" }
, 78, 0 }
, { { 13, "CONSTRAINTDEF" }
, 79, 0 }
, { { 19, "CONSTRUCTORSYNOPSIS" }
, 80, 0 }
, { { 11, "CONTRACTNUM" }
, 81, 0 }
, { { 15, "CONTRACTSPONSOR" }
, 82, 0 }
, { { 7, "CONTRIB" }
, 83, 0 }
, { { 9, "COPYRIGHT" }
, 84, 0 }
, { { 5, "COREF" }
, 85, 0 }
, { { 10, "CORPAUTHOR" }
, 86, 0 }
, { { 10, "CORPCREDIT" }
, 87, 0 }
, { { 8, "CORPNAME" }
, 88, 0 }
, { { 7, "COUNTRY" }
, 89, 0 }
, { { 8, "DATABASE" }
, 90, 0 }
, { { 4, "DATE" }
, 91, 0 }
, { { 10, "DEDICATION" }
, 92, 0 }
, { { 18, "DESTRUCTORSYNOPSIS" }
, 93, 0 }
, { { 7, "EDITION" }
, 94, 0 }
, { { 6, "EDITOR" }
, 95, 0 }
, { { 5, "EMAIL" }
, 96, 0 }
, { { 8, "EMPHASIS" }
, 97, 0 }
, { { 5, "ENTRY" }
, 98, 0 }
, { { 8, "ENTRYTBL" }
, 99, 0 }
, { { 5, "ENVAR" }
, 100, 0 }
, { { 8, "EPIGRAPH" }
, 101, 0 }
, { { 8, "EQUATION" }
, 102, 0 }
, { { 9, "ERRORCODE" }
, 103, 0 }
, { { 9, "ERRORNAME" }
, 104, 0 }
, { { 9, "ERRORTEXT" }
, 105, 0 }
, { { 9, "ERRORTYPE" }
, 106, 0 }
, { { 7, "EXAMPLE" }
, 107, 0 }
, { { 13, "EXCEPTIONNAME" }
, 108, 0 }
, { { 3, "FAX" }
, 109, 0 }
, { { 13, "FIELDSYNOPSIS" }
, 110, 0 }
, { { 6, "FIGURE" }
, 111, 0 }
, { { 8, "FILENAME" }
, 112, 0 }
, { { 9, "FIRSTNAME" }
, 113, 0 }
, { { 9, "FIRSTTERM" }
, 114, 0 }
, { { 8, "FOOTNOTE" }
, 115, 0 }
, { { 11, "FOOTNOTEREF" }
, 116, 0 }
, { { 13, "FOREIGNPHRASE" }
, 117, 0 }
, { { 10, "FORMALPARA" }
, 118, 0 }
, { { 7, "FUNCDEF" }
, 119, 0 }
, { { 10, "FUNCPARAMS" }
, 120, 0 }
, { { 13, "FUNCPROTOTYPE" }
, 121, 0 }
, { { 12, "FUNCSYNOPSIS" }
, 122, 0 }
, { { 16, "FUNCSYNOPSISINFO" }
, 123, 0 }
, { { 8, "FUNCTION" }
, 124, 0 }
, { { 8, "GLOSSARY" }
, 125, 0 }
, { { 12, "GLOSSARYINFO" }
, 126, 0 }
, { { 8, "GLOSSDEF" }
, 127, 0 }
, { { 8, "GLOSSDIV" }
, 128, 0 }
, { { 10, "GLOSSENTRY" }
, 129, 0 }
, { { 9, "GLOSSLIST" }
, 130, 0 }
, { { 8, "GLOSSSEE" }
, 131, 0 }
, { { 12, "GLOSSSEEALSO" }
, 132, 0 }
, { { 9, "GLOSSTERM" }
, 133, 0 }
, { { 7, "GRAPHIC" }
, 134, 0 }
, { { 9, "GRAPHICCO" }
, 135, 0 }
, { { 5, "GROUP" }
, 136, 0 }
, { { 9, "GUIBUTTON" }
, 137, 0 }
, { { 7, "GUIICON" }
, 138, 0 }
, { { 8, "GUILABEL" }
, 139, 0 }
, { { 7, "GUIMENU" }
, 140, 0 }
, { { 11, "GUIMENUITEM" }
, 141, 0 }
, { { 10, "GUISUBMENU" }
, 142, 0 }
, { { 8, "HARDWARE" }
, 143, 0 }
, { { 10, "HIGHLIGHTS" }
, 144, 0 }
, { { 6, "HOLDER" }
, 145, 0 }
, { { 9, "HONORIFIC" }
, 146, 0 }
, { { 9, "IMAGEDATA" }
, 147, 0 }
, { { 11, "IMAGEOBJECT" }
, 148, 0 }
, { { 13, "IMAGEOBJECTCO" }
, 149, 0 }
, { { 9, "IMPORTANT" }
, 150, 0 }
, { { 5, "INDEX" }
, 151, 0 }
, { { 8, "INDEXDIV" }
, 152, 0 }
, { { 10, "INDEXENTRY" }
, 153, 0 }
, { { 9, "INDEXINFO" }
, 154, 0 }
, { { 9, "INDEXTERM" }
, 155, 0 }
, { { 16, "INFORMALEQUATION" }
, 156, 0 }
, { { 15, "INFORMALEXAMPLE" }
, 157, 0 }
, { { 14, "INFORMALFIGURE" }
, 158, 0 }
, { { 13, "INFORMALTABLE" }
, 159, 0 }
, { { 11, "INITIALIZER" }
, 160, 0 }
, { { 14, "INLINEEQUATION" }
, 161, 0 }
, { { 13, "INLINEGRAPHIC" }
, 162, 0 }
, { { 17, "INLINEMEDIAOBJECT" }
, 163, 0 }
, { { 9, "INTERFACE" }
, 164, 0 }
, { { 13, "INTERFACENAME" }
, 165, 0 }
, { { 13, "INVPARTNUMBER" }
, 166, 0 }
, { { 4, "ISBN" }
, 167, 0 }
, { { 4, "ISSN" }
, 168, 0 }
, { { 8, "ISSUENUM" }
, 169, 0 }
, { { 12, "ITEMIZEDLIST" }
, 170, 0 }
, { { 8, "ITERMSET" }
, 171, 0 }
, { { 8, "JOBTITLE" }
, 172, 0 }
, { { 6, "KEYCAP" }
, 173, 0 }
, { { 7, "KEYCODE" }
, 174, 0 }
, { { 8, "KEYCOMBO" }
, 175, 0 }
, { { 6, "KEYSYM" }
, 176, 0 }
, { { 7, "KEYWORD" }
, 177, 0 }
, { { 10, "KEYWORDSET" }
, 178, 0 }
, { { 5, "LABEL" }
, 179, 0 }
, { { 11, "LEGALNOTICE" }
, 180, 0 }
, { { 3, "LHS" }
, 181, 0 }
, { { 7, "LINEAGE" }
, 182, 0 }
, { { 14, "LINEANNOTATION" }
, 183, 0 }
, { { 4, "LINK" }
, 184, 0 }
, { { 8, "LISTITEM" }
, 185, 0 }
, { { 7, "LITERAL" }
, 186, 0 }
, { { 13, "LITERALLAYOUT" }
, 187, 0 }
, { { 3, "LOT" }
, 188, 0 }
, { { 8, "LOTENTRY" }
, 189, 0 }
, { { 9, "MANVOLNUM" }
, 190, 0 }
, { { 6, "MARKUP" }
, 191, 0 }
, { { 10, "MEDIALABEL" }
, 192, 0 }
, { { 11, "MEDIAOBJECT" }
, 193, 0 }
, { { 13, "MEDIAOBJECTCO" }
, 194, 0 }
, { { 6, "MEMBER" }
, 195, 0 }
, { { 10, "MENUCHOICE" }
, 196, 0 }
, { { 10, "METHODNAME" }
, 197, 0 }
, { { 11, "METHODPARAM" }
, 198, 0 }
, { { 14, "METHODSYNOPSIS" }
, 199, 0 }
, { { 8, "MODESPEC" }
, 200, 0 }
, { { 8, "MODIFIER" }
, 201, 0 }
, { { 11, "MOUSEBUTTON" }
, 202, 0 }
, { { 3, "MSG" }
, 203, 0 }
, { { 6, "MSGAUD" }
, 204, 0 }
, { { 8, "MSGENTRY" }
, 205, 0 }
, { { 9, "MSGEXPLAN" }
, 206, 0 }
, { { 7, "MSGINFO" }
, 207, 0 }
, { { 8, "MSGLEVEL" }
, 208, 0 }
, { { 7, "MSGMAIN" }
, 209, 0 }
, { { 7, "MSGORIG" }
, 210, 0 }
, { { 6, "MSGREL" }
, 211, 0 }
, { { 6, "MSGSET" }
, 212, 0 }
, { { 6, "MSGSUB" }
, 213, 0 }
, { { 7, "MSGTEXT" }
, 214, 0 }
, { { 11, "NONTERMINAL" }
, 215, 0 }
, { { 4, "NOTE" }
, 216, 0 }
, { { 10, "OBJECTINFO" }
, 217, 0 }
, { { 5, "OLINK" }
, 218, 0 }
, { { 7, "OOCLASS" }
, 219, 0 }
, { { 11, "OOEXCEPTION" }
, 220, 0 }
, { { 11, "OOINTERFACE" }
, 221, 0 }
, { { 6, "OPTION" }
, 222, 0 }
, { { 8, "OPTIONAL" }
, 223, 0 }
, { { 11, "ORDEREDLIST" }
, 224, 0 }
, { { 6, "ORGDIV" }
, 225, 0 }
, { { 7, "ORGNAME" }
, 226, 0 }
, { { 9, "OTHERADDR" }
, 227, 0 }
, { { 11, "OTHERCREDIT" }
, 228, 0 }
, { { 9, "OTHERNAME" }
, 229, 0 }
, { { 8, "PAGENUMS" }
, 230, 0 }
, { { 4, "PARA" }
, 231, 0 }
, { { 8, "PARAMDEF" }
, 232, 0 }
, { { 9, "PARAMETER" }
, 233, 0 }
, { { 4, "PART" }
, 234, 0 }
, { { 8, "PARTINFO" }
, 235, 0 }
, { { 9, "PARTINTRO" }
, 236, 0 }
, { { 11, "PERSONBLURB" }
, 237, 0 }
, { { 10, "PERSONNAME" }
, 238, 0 }
, { { 5, "PHONE" }
, 239, 0 }
, { { 6, "PHRASE" }
, 240, 0 }
, { { 3, "POB" }
, 241, 0 }
, { { 8, "POSTCODE" }
, 242, 0 }
, { { 7, "PREFACE" }
, 243, 0 }
, { { 11, "PREFACEINFO" }
, 244, 0 }
, { { 7, "PRIMARY" }
, 245, 0 }
, { { 9, "PRIMARYIE" }
, 246, 0 }
, { { 12, "PRINTHISTORY" }
, 247, 0 }
, { { 9, "PROCEDURE" }
, 248, 0 }
, { { 10, "PRODUCTION" }
, 249, 0 }
, { { 15, "PRODUCTIONRECAP" }
, 250, 0 }
, { { 13, "PRODUCTIONSET" }
, 251, 0 }
, { { 11, "PRODUCTNAME" }
, 252, 0 }
, { { 13, "PRODUCTNUMBER" }
, 253, 0 }
, { { 14, "PROGRAMLISTING" }
, 254, 0 }
, { { 16, "PROGRAMLISTINGCO" }
, 255, 0 }
, { { 6, "PROMPT" }
, 256, 0 }
, { { 8, "PROPERTY" }
, 257, 0 }
, { { 7, "PUBDATE" }
, 258, 0 }
, { { 9, "PUBLISHER" }
, 259, 0 }
, { { 13, "PUBLISHERNAME" }
, 260, 0 }
, { { 10, "PUBSNUMBER" }
, 261, 0 }
, { { 8, "QANDADIV" }
, 262, 0 }
, { { 10, "QANDAENTRY" }
, 263, 0 }
, { { 8, "QANDASET" }
, 264, 0 }
, { { 8, "QUESTION" }
, 265, 0 }
, { { 5, "QUOTE" }
, 266, 0 }
, { { 8, "REFCLASS" }
, 267, 0 }
, { { 13, "REFDESCRIPTOR" }
, 268, 0 }
, { { 8, "REFENTRY" }
, 269, 0 }
, { { 12, "REFENTRYINFO" }
, 270, 0 }
, { { 13, "REFENTRYTITLE" }
, 271, 0 }
, { { 9, "REFERENCE" }
, 272, 0 }
, { { 13, "REFERENCEINFO" }
, 273, 0 }
, { { 7, "REFMETA" }
, 274, 0 }
, { { 11, "REFMISCINFO" }
, 275, 0 }
, { { 7, "REFNAME" }
, 276, 0 }
, { { 10, "REFNAMEDIV" }
, 277, 0 }
, { { 10, "REFPURPOSE" }
, 278, 0 }
, { { 8, "REFSECT1" }
, 279, 0 }
, { { 12, "REFSECT1INFO" }
, 280, 0 }
, { { 8, "REFSECT2" }
, 281, 0 }
, { { 12, "REFSECT2INFO" }
, 282, 0 }
, { { 8, "REFSECT3" }
, 283, 0 }
, { { 12, "REFSECT3INFO" }
, 284, 0 }
, { { 10, "REFSECTION" }
, 285, 0 }
, { { 14, "REFSECTIONINFO" }
, 286, 0 }
, { { 14, "REFSYNOPSISDIV" }
, 287, 0 }
, { { 18, "REFSYNOPSISDIVINFO" }
, 288, 0 }
, { { 11, "RELEASEINFO" }
, 289, 0 }
, { { 6, "REMARK" }
, 290, 0 }
, { { 11, "REPLACEABLE" }
, 291, 0 }
, { { 11, "RETURNVALUE" }
, 292, 0 }
, { { 14, "REVDESCRIPTION" }
, 293, 0 }
, { { 10, "REVHISTORY" }
, 294, 0 }
, { { 8, "REVISION" }
, 295, 0 }
, { { 9, "REVNUMBER" }
, 296, 0 }
, { { 9, "REVREMARK" }
, 297, 0 }
, { { 3, "RHS" }
, 298, 0 }
, { { 3, "ROW" }
, 299, 0 }
, { { 3, "SBR" }
, 300, 0 }
, { { 6, "SCREEN" }
, 301, 0 }
, { { 8, "SCREENCO" }
, 302, 0 }
, { { 10, "SCREENINFO" }
, 303, 0 }
, { { 10, "SCREENSHOT" }
, 304, 0 }
, { { 9, "SECONDARY" }
, 305, 0 }
, { { 11, "SECONDARYIE" }
, 306, 0 }
, { { 5, "SECT1" }
, 307, 0 }
, { { 9, "SECT1INFO" }
, 308, 0 }
, { { 5, "SECT2" }
, 309, 0 }
, { { 9, "SECT2INFO" }
, 310, 0 }
, { { 5, "SECT3" }
, 311, 0 }
, { { 9, "SECT3INFO" }
, 312, 0 }
, { { 5, "SECT4" }
, 313, 0 }
, { { 9, "SECT4INFO" }
, 314, 0 }
, { { 5, "SECT5" }
, 315, 0 }
, { { 9, "SECT5INFO" }
, 316, 0 }
, { { 7, "SECTION" }
, 317, 0 }
, { { 11, "SECTIONINFO" }
, 318, 0 }
, { { 3, "SEE" }
, 319, 0 }
, { { 7, "SEEALSO" }
, 320, 0 }
, { { 9, "SEEALSOIE" }
, 321, 0 }
, { { 5, "SEEIE" }
, 322, 0 }
, { { 3, "SEG" }
, 323, 0 }
, { { 11, "SEGLISTITEM" }
, 324, 0 }
, { { 13, "SEGMENTEDLIST" }
, 325, 0 }
, { { 8, "SEGTITLE" }
, 326, 0 }
, { { 13, "SERIESVOLNUMS" }
, 327, 0 }
, { { 3, "SET" }
, 328, 0 }
, { { 8, "SETINDEX" }
, 329, 0 }
, { { 12, "SETINDEXINFO" }
, 330, 0 }
, { { 7, "SETINFO" }
, 331, 0 }
, { { 7, "SGMLTAG" }
, 332, 0 }
, { { 10, "SHORTAFFIL" }
, 333, 0 }
, { { 8, "SHORTCUT" }
, 334, 0 }
, { { 7, "SIDEBAR" }
, 335, 0 }
, { { 11, "SIDEBARINFO" }
, 336, 0 }
, { { 7, "SIMPARA" }
, 337, 0 }
, { { 10, "SIMPLELIST" }
, 338, 0 }
, { { 14, "SIMPLEMSGENTRY" }
, 339, 0 }
, { { 10, "SIMPLESECT" }
, 340, 0 }
, { { 8, "SPANSPEC" }
, 341, 0 }
, { { 5, "STATE" }
, 342, 0 }
, { { 4, "STEP" }
, 343, 0 }
, { { 16, "STEPALTERNATIVES" }
, 344, 0 }
, { { 6, "STREET" }
, 345, 0 }
, { { 11, "STRUCTFIELD" }
, 346, 0 }
, { { 10, "STRUCTNAME" }
, 347, 0 }
, { { 7, "SUBJECT" }
, 348, 0 }
, { { 10, "SUBJECTSET" }
, 349, 0 }
, { { 11, "SUBJECTTERM" }
, 350, 0 }
, { { 9, "SUBSCRIPT" }
, 351, 0 }
, { { 8, "SUBSTEPS" }
, 352, 0 }
, { { 8, "SUBTITLE" }
, 353, 0 }
, { { 11, "SUPERSCRIPT" }
, 354, 0 }
, { { 7, "SURNAME" }
, 355, 0 }
, { { 6, "SYMBOL" }
, 356, 0 }
, { { 13, "SYNOPFRAGMENT" }
, 357, 0 }
, { { 16, "SYNOPFRAGMENTREF" }
, 358, 0 }
, { { 8, "SYNOPSIS" }
, 359, 0 }
, { { 10, "SYSTEMITEM" }
, 360, 0 }
, { { 5, "TABLE" }
, 361, 0 }
, { { 4, "TASK" }
, 362, 0 }
, { { 17, "TASKPREREQUISITES" }
, 363, 0 }
, { { 11, "TASKRELATED" }
, 364, 0 }
, { { 11, "TASKSUMMARY" }
, 365, 0 }
, { { 5, "TBODY" }
, 366, 0 }
, { { 2, "TD" }
, 367, 0 }
, { { 4, "TERM" }
, 368, 0 }
, { { 8, "TERTIARY" }
, 369, 0 }
, { { 10, "TERTIARYIE" }
, 370, 0 }
, { { 8, "TEXTDATA" }
, 371, 0 }
, { { 10, "TEXTOBJECT" }
, 372, 0 }
, { { 5, "TFOOT" }
, 373, 0 }
, { { 6, "TGROUP" }
, 374, 0 }
, { { 2, "TH" }
, 375, 0 }
, { { 5, "THEAD" }
, 376, 0 }
, { { 3, "TIP" }
, 377, 0 }
, { { 5, "TITLE" }
, 378, 0 }
, { { 11, "TITLEABBREV" }
, 379, 0 }
, { { 3, "TOC" }
, 380, 0 }
, { { 7, "TOCBACK" }
, 381, 0 }
, { { 7, "TOCCHAP" }
, 382, 0 }
, { { 8, "TOCENTRY" }
, 383, 0 }
, { { 8, "TOCFRONT" }
, 384, 0 }
, { { 9, "TOCLEVEL1" }
, 385, 0 }
, { { 9, "TOCLEVEL2" }
, 386, 0 }
, { { 9, "TOCLEVEL3" }
, 387, 0 }
, { { 9, "TOCLEVEL4" }
, 388, 0 }
, { { 9, "TOCLEVEL5" }
, 389, 0 }
, { { 7, "TOCPART" }
, 390, 0 }
, { { 5, "TOKEN" }
, 391, 0 }
, { { 2, "TR" }
, 392, 0 }
, { { 9, "TRADEMARK" }
, 393, 0 }
, { { 4, "TYPE" }
, 394, 0 }
, { { 5, "ULINK" }
, 395, 0 }
, { { 3, "URI" }
, 396, 0 }
, { { 9, "USERINPUT" }
, 397, 0 }
, { { 7, "VARARGS" }
, 398, 0 }
, { { 12, "VARIABLELIST" }
, 399, 0 }
, { { 12, "VARLISTENTRY" }
, 400, 0 }
, { { 7, "VARNAME" }
, 401, 0 }
, { { 9, "VIDEODATA" }
, 402, 0 }
, { { 11, "VIDEOOBJECT" }
, 403, 0 }
, { { 4, "VOID" }
, 404, 0 }
, { { 9, "VOLUMENUM" }
, 405, 0 }
, { { 7, "WARNING" }
, 406, 0 }
, { { 10, "WORDASWORD" }
, 407, 0 }
, { { 4, "XREF" }
, 408, 0 }
, { { 4, "YEAR" }
, 409, 0 }
 };
struct sgml_info sgml_docbook_info = { 0, docbook_attributes, docbook_elements };
#if 0
#endif
