#include "gettext.c.h"
unsigned char *gettext__( unsigned char *msgid )
{
  return dcgettext__( 0, msgid, 5 );
}
#if 0
#endif
