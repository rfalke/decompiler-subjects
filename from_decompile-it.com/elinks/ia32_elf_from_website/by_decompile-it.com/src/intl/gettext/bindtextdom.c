#include "bindtextdom.c.h"
void set_binding_values( unsigned char *domainname, unsigned char **dirnamep, unsigned char **codesetp )
{
  struct binding *binding;
  int modified;
  if ( domainname && domainname )
  {
    binding = _nl_domain_bindings__;
    if ( _nl_domain_bindings__ )
    {
      do
      {
        if ( strcmp( &domainname, &binding->domainname[0] ) == 0 )
        {
          if ( binding[0].next )
          {
            modified = 0;
            if ( dirnamep[0] )
            {
              unsigned char *dirname;
              dirname[0] = dirnamep[0];
              if ( dirnamep[0] == 0 )
                dirnamep[0] = binding->dirname;
              else
              {
                unsigned char *result;
                result[0] = binding->dirname;
                modified = 0;
                eax[0] = strcmp( &dirname[0], (char*)binding->dirname );
                if ( strcmp( &dirname[0], (char*)binding->dirname ) )
                {
                  result[0] = _nl_default_dirname__[0];
                  if ( result[0] )
                  {
                    modified = 0;
                    if ( __strdup( &dirname[0] ) )
                    {
                    }
                  }
                  if ( binding->dirname != _nl_default_dirname__[0] )
                  {
                    free( &result[0] );
                  }
                  binding->dirname = _nl_default_dirname__;
                  modified = 1;
                }
                dirnamep[0] = &result[0];
              }
            }
            if ( codesetp[0] )
            {
              unsigned char *codeset;
              codeset[0] = codesetp[0];
              if ( codesetp[0] == 0 )
                codesetp[0] = binding->codeset;
              else
              {
                unsigned char *result;
                result[0] = binding->codeset;
                if ( ( binding->codeset == 0 || strcmp( &codeset[0], &result[0] ) ) && __strdup( &codeset[0] ) )
                {
                  if ( binding->codeset )
                    free( binding->codeset );
                  binding->codeset_cntr++;
                  modified = 1;
                  binding->codeset = (unsigned char*)__strdup( &codeset[0] );
                }
                codesetp[0] = &result[0];
              }
            }
            if ( modified )
              break;
            break;
          }
          else
            break;
        }
        else
        {
          int compare;
        }
      }
      while ( ccdep2 <= ccdep1 && binding );
    }
    if ( ( dirnamep == 0 || dirnamep[0] == 0 ) && ( domainname == 0 || codesetp == 0 ) )
    {
      if ( dirnamep )
        dirnamep[0] = _nl_default_dirname__;
      if ( codesetp )
      {
        codesetp = 0;
      }
      return;
    }
    else
    {
      if ( malloc( strlen( &domainname ) + 17 ) )
      {
        memcpy( malloc( strlen( &domainname ) + 17 ) + 16, &domainname, strlen( &domainname ) + 1 );
        if ( dirnamep )
        {
          unsigned char *dirname = dirnamep[0];
          dirname = _nl_default_dirname__;
          if ( dirnamep[0] == 0 || !dirname || __strdup( &dirname ) )
          {
            dirnamep[0] = &dirname;
            *(int*)(malloc( strlen( &domainname ) + 17 ) + 4) = dirname;
          }
          else
            free( malloc( strlen( &domainname ) + 17 ) );
        }
        else
          *(int*)(malloc( strlen( &domainname ) + 17 ) + 4) = _nl_default_dirname__;
        *(int*)(malloc( strlen( &domainname ) + 17 ) + 8) = 0;
        if ( codesetp )
        {
          unsigned char *codeset = codesetp;
          if ( codesetp )
          {
            if ( __strdup( &codeset ) )
              *(int*)(malloc( strlen( &domainname ) + 17 ) + 8)++;
            else
            if ( _nl_default_dirname__ != *(int*)(malloc( strlen( &domainname ) + 17 ) + 4) )
              free( eax );
          }
          codesetp = &codeset;
          *(int*)(malloc( strlen( &domainname ) + 17 ) + 12) = codeset;
        }
        else
          *(int*)(malloc( strlen( &domainname ) + 17 ) + 12) = 0;
        binding = _nl_domain_bindings__;
        if ( _nl_domain_bindings__ && strcmp( &domainname, &binding->domainname[0] ) >= 0 )
        {
          while ( binding = &binding, binding && strcmp( &domainname, &binding->domainname[0] ) >= 1 )
          {
            binding = &dirnamep[0][0];
          }
          *ebp_28 = binding[0].next;
          &binding = ebp_28;
          _nl_msg_cat_cntr++;
          return;
        }
        else
        {
          *(int*)(malloc( strlen( &domainname ) + 17 )) = binding;
          _nl_domain_bindings__ = (struct binding*)malloc( strlen( &domainname ) + 17 );
          _nl_msg_cat_cntr++;
          return;
        }
      }
    }
  }
{
  size_t len;
  if ( dirnamep )
    dirnamep[0] = 0;
  if ( codesetp )
  {
    codesetp = 0;
  }
  return;
}
}
unsigned char *bindtextdomain__( unsigned char *domainname, unsigned char *dirname )
{
  int eax;
  int edx;
  set_binding_values( domainname, &dirname, 0 );
  return dirname;
}
unsigned char *bind_textdomain_codeset__( unsigned char *domainname, unsigned char *codeset )
{
  int eax;
  int ecx;
  set_binding_values( domainname, 0, &codeset );
  return codeset;
}
#if 0
#endif
