#include "ngettext.c.h"
unsigned char *ngettext__( unsigned char *msgid1, unsigned char *msgid2, unsigned long n )
{
  return dcngettext__( 0, msgid1, msgid2, n, 5 );
}
#if 0
#endif
