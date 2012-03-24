#include "dcigettext.c.h"
static void *root;
unsigned char _nl_default_default_domain__[9] = { 'm', 'e', 's', 's', 'a', 'g', 'e', 's' };
unsigned char *_nl_current_default_domain__ = _nl_default_default_domain__;
unsigned char _nl_default_dirname__[18] = { '/', 'u', 's', 'r', '/', 's', 'h', 'a', 'r', 'e', '/', 'l', 'o', 'c', 'a', 'l', 'e' };
unsigned char *LANGUAGE;
struct binding *_nl_domain_bindings__;
static int enable_secure;
int transcmp( void *p1, void *p2 )
{
  int eax;
  int result;
  return ((int*)p1) - ((int*)p2);
}
unsigned char *dcigettext__( unsigned char *domainname, unsigned char *msgid1, unsigned char *msgid2, int plural, unsigned long n, int category )
{
  int eax;
  int ecx;
  int edx;
#error unstructured control flow
}
unsigned char *_nl_find_msg( struct loaded_l10nfile *domain_file, struct binding *domainbinding, unsigned char *msgid, size_t *lengthp )
{
  int eax;
  int ecx;
  int edx;
  size_t act;
  unsigned char *result;
  size_t resultlen;
  if ( domain_file->decided == 0 )
    _nl_load_domain( domain_file, domainbinding );
  if ( domain_file->data )
  {
    if ( domain_file->data[7] > 2 && domain_file->data[8] )
    {
      nls_uint32 hash_val = 0;
      nls_uint32 idx;
      nls_uint32 incr;
      for ( ; msgid[0] == 0; msgid[0] = msgid[1] )
      {
        hash_val = ( hash_val << 4 ) + msgid[0];
        //msgid[0] = msgid[1];
      }
    }
    else
    {
      size_t top = domain_file->data[4];
      size_t bottom = 0;
      top = bottom;
      while ( bottom < top )
      {
        do
        {
          if ( cmp_val >= 0 )
          {
            if ( !1 )
            {
              bottom = act + 1;
              break;
              while ( bottom < top )
              {
                do
                {
                }
                while ( bottom < act );
                break;
              }
              break;
            }
            else
            {
            }
          }
          else
          {
            top = act;
          }
        }
        while ( bottom < act );
        break;
      }
    }
    if ( ebp_44 != eax )
    {
      _nl_free_domain_conv( &domain_file->data[0] );
      _nl_init_domain_conv( domain_file, &domain_file->data[0], domainbinding );
      act = act;
    }
    if ( domain_file->data[10] != -1 )
    {
      if ( domain_file->data[11] == 0 )
      {
        *(int*)(esi + 44) = eax;
        if ( esi + 44 == 0 )
        {
          *(int*)(esi + 44) = -1;
        }
      }
      if ( eax != -1 )
      {
        if ( *(int*)(eax + ( act << 2 )) == 0 )
        {
          static unsigned char *freemem;
          static size_t freemem_size;
          unsigned char *outbuf;
          int malloc_count = 0;
          transmem_block_t *transmem_list;
          transmem_list[0] = 0;
        {
          transmem_block_t *newmem;
          char *inptr;
          size_t inleft;
          char *outptr;
          size_t outleft;
          outbuf[0] = outbuf[4];
          outbuf[4] = outbuf[4];
          while ( 1 )
          {
            if ( freemem_size > 3 )
            {
              if ( eax != -1 )
              {
                freemem[0] = outbuf[0] - freemem - 4;
                freemem = outbuf[0] + ( __MOD(( freemem_size + ( freemem - outbuf[0] ) ),4) );
                freemem_size = ( freemem_size + ( freemem - outbuf[0] ) ) & -4;
              }
              else
              {
                if ( *(int*)(__errno_location(  )) != 7 )
                {
                  result[0] = result[0];
                  break;
                }
              }
            }
            if ( malloc_count )
            {
              malloc_count++;
              freemem_size = ( malloc_count + 1 ) * 4080;
              realloc( &transmem_list[0], ( malloc_count + 1 ) * 4080 );
            }
            else
            {
              freemem_size = 4080;
              malloc_count = 1;
              malloc( 4080 );
            }
            if ( realloc( &transmem_list[0], ( malloc_count + 1 ) * 4080 ) == 0 )
              break;
            freemem = (unsigned char*)realloc( &transmem_list[0], ( malloc_count + 1 ) * 4080 );
            outbuf[0] = realloc( &transmem_list[0], ( malloc_count + 1 ) * 4080 ) + 4;
            transmem_list[0] = realloc( &transmem_list[0], ( malloc_count + 1 ) * 4080 );
          }
          result[0] = result[0];
          freemem = 0;
          freemem_size = 0;
        }
        }
        resultlen = eax;
        result[0] = eax + 4;
      }
    }
    lengthp[0] = resultlen;
    return &result[0];
  }
  return 0;
}
unsigned char *plural_lookup( struct loaded_l10nfile *domain, unsigned long n, unsigned char *translation, size_t translation_len )
{
  int eax;
  struct loaded_domain *domaindata = &domain->data[0];
  unsigned long indexx;
  unsigned char *p;
  p[0] = translation[0];
  do
  {
    if ( ( (unsigned char)( ( plural_eval( domaindata->plural ) < *(int*)(domaindata[0].data + 52) ) ^ 1 ) ? plural_eval( domaindata->plural ) : 0 ) == 0 )
      break;
    p[0] = p[1];
  }
  while ( translation[ translation_len ] <= p[1] );
  return &translation[0];
}
unsigned long plural_eval( struct expression *pexp, unsigned long n )
{
  int ecx;
  if ( pexp == 1 )
    goto B1;
  do
  {
    if ( pexp >= 1 )
    {
      if ( pexp->nargs == 2 )
      {
        unsigned long leftarg = plural_eval( &pexp->val.num, n );
        if ( pexp->operation == lor )
        {
          if ( leftarg )
          {
            n = 1;
            break;
          }
        }
        else
        if ( pexp->operation == land )
        {
          if ( leftarg )
            goto B19;
        }
        else
        {
          unsigned long rightarg = plural_eval( pexp->val.args[1], n );
          switch ( pexp->operation )
          {
          case mult:
            n = rightarg * leftarg;
            break;
            break;
          case divide:
            n = (long long)( leftarg ) / rightarg;
            break;
            break;
          case module:
            n = __MOD((long long)( leftarg ),rightarg);
            break;
            break;
          case plus:
            n = leftarg + rightarg;
            break;
            break;
          case minus:
            n = leftarg - rightarg;
            break;
            break;
          case less_than:
            n = leftarg < rightarg;
            break;
            break;
          case greater_than:
            n = rightarg < leftarg;
            break;
            break;
          case less_or_equal:
            n = leftarg <= rightarg;
            break;
            break;
          case greater_or_equal:
            n = ( leftarg < rightarg ) ^ 1;
            break;
            break;
          case equal:
            n = rightarg == leftarg;
            break;
            break;
          case not_equal:
            n = rightarg != leftarg;
            break;
            break;
          default:
            break;
          }
        }
B19:        n = plural_eval( pexp->val.args[1], n ) != 0;
        break;
      }
      else
      {
        if ( pexp->nargs == 3 )
        {
          pexp = pexp->val.args[2][ ~( 0 - ( ( plural_eval( &pexp->val.num, n ) < 1 ) & 1 ) ) ];
        }
      }
    }
    else
    if ( pexp->nargs == 0 )
    {
      if ( pexp->operation == var )
        break;
      if ( pexp->operation == num )
      {
        n = pexp->val.num;
        break;
      }
    }
  {
    unsigned long boolarg;
    n = 0;
    break;
  }
  }
  while ( pexp->nargs != 1 );
{
B1:  unsigned long arg;
  n = plural_eval( &pexp->val.num, n ) == 0;
  return n;
}
}
#if 0
#endif
