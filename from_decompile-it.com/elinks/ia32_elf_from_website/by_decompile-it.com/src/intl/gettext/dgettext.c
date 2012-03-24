#include "dgettext.c.h"
unsigned char *dgettext__( unsigned char *domainname, unsigned char *msgid )
{
  return dcgettext__( domainname, msgid, 5 );
}
#if 0
#endif
