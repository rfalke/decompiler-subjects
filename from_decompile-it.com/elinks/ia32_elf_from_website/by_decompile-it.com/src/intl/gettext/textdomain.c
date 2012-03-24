#include "textdomain.c.h"
unsigned char *textdomain__( unsigned char *domainname )
{
  unsigned char *new_domain;
  unsigned char *old_domain;
  if ( domainname == 0 )
  {
    return _nl_current_default_domain__;
  }
  old_domain[0] = _nl_current_default_domain__;
  if ( domainname[0] == 0 || strcmp( &domainname[0], _nl_default_default_domain__ ) == 0 )
  {
    _nl_current_default_domain__ = _nl_default_default_domain__;
    new_domain[0] = _nl_default_default_domain__[0];
  }
  else
  {
    if ( strcmp( &domainname[0], &old_domain[0] ) )
    {
      if ( __strdup( &domainname[0] ) )
        _nl_current_default_domain__ = (unsigned char*)__strdup( &domainname[0] );
      else
      {
        return &new_domain[0];
      }
    }
    else
    if ( old_domain[0] )
    {
      _nl_msg_cat_cntr++;
      new_domain[0] = old_domain[0];
      return &new_domain[0];
    }
    new_domain[0] = old_domain[0];
    return &new_domain[0];
  }
  _nl_msg_cat_cntr++;
  if ( old_domain[0] != new_domain[0] )
  {
    if ( old_domain[0] != _nl_default_default_domain__[0] )
    {
      free( &old_domain[0] );
    }
    return &new_domain[0];
  }
  else
  {
    new_domain[0] = old_domain[0];
    return &new_domain[0];
  }
}
#if 0
#endif
