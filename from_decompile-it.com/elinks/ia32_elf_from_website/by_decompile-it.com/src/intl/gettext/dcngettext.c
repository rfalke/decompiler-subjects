#include "dcngettext.c.h"
unsigned char *dcngettext__( unsigned char *domainname, unsigned char *msgid1, unsigned char *msgid2, unsigned long n, int category )
{
  return dcigettext__( domainname, msgid1, msgid2, 1, n, category );
}
#if 0
#endif
