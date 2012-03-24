#include "dngettext.c.h"
unsigned char *dngettext__( unsigned char *domainname, unsigned char *msgid1, unsigned char *msgid2, unsigned long n )
{
  return dcngettext__( domainname, msgid1, msgid2, n, 5 );
}
#if 0
#endif
