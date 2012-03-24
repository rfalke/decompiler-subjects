#include "dcgettext.c.h"
unsigned char *dcgettext__( unsigned char *domainname, unsigned char *msgid, int category )
{
  return dcigettext__( domainname, msgid, 0, 0, 0, category );
}
#if 0
#endif
