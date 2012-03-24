#include "dns.c.h"
static struct list_head_elinks dns_cache = { &dns_cache, &dns_cache };
void del_dns_cache_entry( struct dnsentry *dnsentry )
{
  dnsentry->prev = dnsentry->prev;
  *(int*)(((int*)p)[1]) = dnsentry;
{
  void *p = (void*)dnsentry->addr;
  if ( dnsentry->addr )
    mem_free( &((int*)p)[0] );
  mem_free( (void*)dnsentry[0].next );
  return;
}
}
enum dns_result  do_real_lookup( unsigned char *name, struct sockaddr_storage **addrs, int *addrno, int in_thread )
{
  int eax;
  int ecx;
  int edx;
  int ebp_76;
  struct addrinfo hint, *ai, *ai_cur;
  int i;
  if ( addrs && name[0] && addrno[0] )
  {
    hint.ai_flags = hint.ai_flags;
    do
    {
    }
    while ( 0 + 4 + 4 < 32 );
    hint.ai_family = 0;
    hint.ai_socktype = 1;
    if ( getaddrinfo( &name[0], 0, &hint.ai_flags, ai ) == 0 )
    {
      ai_cur[0].ai_flags = ai;
      i = 0;
      if ( ai )
      {
        do
        {
          ai_cur[0].ai_flags = ai_cur->ai_next;
          i++;
        }
        while ( ai_cur->ai_next );
      }
      addrs[0] = in_thread ? (struct sockaddr_storage*)calloc( i, 128 ) : (struct sockaddr_storage*)mem_calloc( i, 128 );
      if ( addrs[0] )
      {
        addrno[0] = i;
        ai_cur = ai;
        ebp_76 = 0;
        if ( ai )
        {
          do
          {
            if ( assert_failed == 0 )
            {
              assert_failed = (int)ai_cur->ai_addrlen > 128;
              if ( (int)ai_cur->ai_addrlen > 128 )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
                errline = 211;
                elinks_internal( "assertion ai_cur-&gt;ai_addrlen &lt;= sizeof(*addr) failed!" );
                if ( assert_failed == 0 )
                  goto B22;
              }
B22:              memcpy( ebp_76 + ( in_thread ? calloc( i, 128 ) : mem_calloc( i, 128 ) ), ai_cur->ai_addr, ai_cur->ai_addrlen );
              ai_cur = ai_cur->ai_next;
              ebp_76 += 128;
            }
            assert_failed = 0;
            freeaddrinfo( ai );
            if ( in_thread )
              free( addrs[0] );
            else
              mem_free( (void*)addrs[0] );
            addrs[0] = 0;
            addrs[0] |= -1;
            addrno[0] = 0;
            break;
          }
          while ( ai_cur->ai_next );
          ai = ai;
        }
        freeaddrinfo( ai );
        return 0 | -1;
      }
      else
      {
        return 0 | -1;
      }
    }
  }
}
enum dns_result  write_dns_data( int h, void *data, size_t datalen )
{
  int ecx;
  size_t done = 0;
{
  do
  {
    *ebp_28 = datalen;
    if ( w < 0 )
      break;
    done += w;
  }
  while ( done + write( h, &((int*)data)[ done ], datalen - done ) < datalen );
  if ( assert_failed == 0 )
  {
    assert_failed = done != datalen;
    if ( done != datalen )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
      errline = 256;
      elinks_internal( "assertion done == datalen failed!" );
      return DNS_SUCCESS;
    }
  }
  return DNS_SUCCESS;
}
}
void async_dns_writer( void *data, int h )
{
  int eax;
  int edx;
  struct sockaddr_storage *addrs;
  int addrno, i;
  if ( do_real_lookup( (unsigned char*)data, &addrs, &addrno, 1 ) != DNS_ERROR && set_blocking_fd( h ) >= 0 && write_dns_data( h, &addrno, 4 ) != DNS_ERROR )
  {
    if ( addrno >= 1 )
    {
      i = 0;
      do
      {
        if ( write_dns_data( h, &addrs[ i ].ss_family, 128 ) == DNS_ERROR )
        {
          h = h;
          break;
        }
        else
        {
          i++;
        }
      }
      while ( i + 1 < addrno );
    }
    free( addrs );
    return;
  }
  return;
}
enum dns_result  read_dns_data( int h, void *data, size_t datalen )
{
  int ecx;
  size_t done = 0;
{
  do
  {
    *ebp_28 = datalen;
    if ( r < 1 )
      break;
    done += r;
  }
  while ( done + read( h, &((int*)data)[ done ], datalen - done ) < datalen );
  if ( assert_failed == 0 )
  {
    assert_failed = done != datalen;
    if ( done != datalen )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
      errline = 303;
      elinks_internal( "assertion done == datalen failed!" );
      return DNS_SUCCESS;
    }
  }
  return DNS_SUCCESS;
}
}
void async_dns_reader( struct dnsquery *query )
{
  int eax;
  int edx;
  enum dns_result  result;
  int i;
  if ( set_blocking_fd( query->h ) >= 0 && read_dns_data( query->h, &query->addrno, 4 ) != DNS_ERROR )
  {
    query->addr = (struct sockaddr_storage*)mem_calloc( query->addrno, 128 );
    if ( query->addr )
    {
      if ( query->addrno >= 1 )
      {
        i = 0;
        for ( ; read_dns_data( query->h, query->addr + ( i << 7 ), 128 ) != DNS_ERROR; query->addr->ss_family = query->addr )
        {
          i++;
          if ( query->addrno <= i + 1 )
            goto B7;
          //query->addr->ss_family = query->addr;
        }
        i = i;
      }
B7:      result = DNS_SUCCESS;
    }
    else
    {
      query->addr = 0;
      result = DNS_ERROR;
    }
  }
  if ( query->addr )
    mem_free( (void*)query->addr );
B7:  result = DNS_SUCCESS;
}
void async_dns_error( struct dnsquery *query )
{
  int eax;
}
void done_dns_lookup( struct dnsquery *query, enum dns_result  result )
{
  struct dnsentry *dnsentry;
  if ( query->h != -1 )
  {
    set_handlers( query->h, 0, 0, 0, 0 );
    close( query->h );
    query->h = -1;
  }
  query->queryref[0] = 0;
  if ( query->done )
  {
    dnsentry = &dns_cache.next[0];
    if ( dns_cache.next != dns_cache.next )
    {
      do
      {
        if ( c_strcasecmp( &dnsentry->name[0], &query->name[0] ) == 0 )
        {
          if ( dnsentry[0].next != dns_cache.next )
          {
            dnsentry->prev = dnsentry->prev;
            &dnsentry->prev = &dnsentry;
            dnsentry->prev = &dns_cache.next[0];
            dnsentry = &dns_cache.next[0];
            dns_cache.next = (void*)dnsentry[0].next;
            dnsentry->prev = &dnsentry[0];
          }
          if ( dnsentry[0].next )
          {
            if ( result == DNS_ERROR )
              query[0](  );
            else
              del_dns_cache_entry( &dnsentry[0] );
          }
          dnsentry = &dns_cache.next[0];
          break;
        }
        else
        {
          dnsentry = &dnsentry;
        }
      }
      while ( dnsentry->next != dns_cache.next );
    }
    if ( result == DNS_SUCCESS )
    {
      if ( assert_failed == 0 )
      {
        assert_failed = query->addrno < 1;
        if ( query->addrno < 1 )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
          errline = 107;
          elinks_internal( "assertion addrno &gt; 0 failed!" );
        }
      }
      if ( eax )
      {
        *(int*)(ebp_44 + 8) = mem_alloc( query->addrno << 7 );
        if ( ebp_44 + 8 )
        {
          memcpy( edx + 24, &edi, ebp_32 );
          memcpy( *(int*)(ebp_44 + 8), ebp_40, ebp_36 );
          *(int*)(ebp_44 + 12) = query->addrno;
          timeval_now( ebp_44 + 16 );
          *ebp_44 = dnsentry->next;
          *(int*)(ebp_44 + 4) = dnsentry[0].next;
          dnsentry = ebp_44;
          *(int*)(*ebp_44 + 4) = ebp_44;
        }
        else
          mem_free( &edx );
      }
    }
    query[0](  );
  }
  if ( query->addr )
    mem_free( (void*)query->addr );
  query->addr = 0;
  mem_free( query[0].done );
  return;
}
enum dns_result  init_dns_lookup( unsigned char *name, void **queryref, dns_callback_T done, void *data )
{
  struct dnsquery *query;
  if ( mem_calloc( 1, strlen( &name[0] ) + 28 ) == 0 )
  {
    done( data );
    return DNS_ASYNC;
  }
  *(int*)(mem_calloc( 1, strlen( &name[0] ) + 28 )) = done[0];
  query->data = data;
  memcpy( &query->name[0], &name[0], strlen( &name[0] ) );
  query->queryref = &queryref[0][0];
  queryref[0] = query[0].done;
  if ( *(int*)(get_opt_( config_options, (unsigned char*)config_options )) == 0 )
    query->h = -1;
  else
  {
    queryref[5] = eax;
    if ( queryref[0] + 20 != -1 )
    {
      set_handlers( queryref[0] + 20, &async_dns_reader, 0, &async_dns_error, queryref[0] );
      return DNS_ASYNC;
    }
  }
  done_dns_lookup( &query[0], do_real_lookup( &query->name[0], &query->addr, &query->addrno, 0 ) );
  return esi;
}
enum dns_result  find_host( unsigned char *name, void **queryref, dns_callback_T done, void *data, int no_cache )
{
  int eax;
  int ecx;
  int edx;
  struct dnsentry *dnsentry;
  if ( assert_failed == 0 )
  {
    assert_failed = queryref == 0;
    if ( !(_Bool)( queryref != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
      errline = 501;
      elinks_internal( "assertion queryref failed!" );
    }
  }
  queryref[0] = 0;
  if ( no_cache == 0 && dns_cache.next != dns_cache.next )
  {
    do
    {
      if ( c_strcasecmp( &dnsentry->name[0], &name[0] ) == 0 )
      {
        if ( dnsentry[0].next != dns_cache.next )
        {
          dnsentry->prev = dnsentry->prev;
          &dnsentry->prev = &dnsentry;
          dnsentry->prev = &dns_cache.next[0];
          dnsentry = &dns_cache.next[0];
          dns_cache.next = (void*)dnsentry[0].next;
          dnsentry->prev = &dnsentry[0];
        }
        if ( dnsentry[0].next )
        {
          timeval_T age;
          timeval_T now;
          timeval_T max_age;
          if ( assert_failed == 0 )
          {
            if ( dnsentry->addrno >= 1 )
              assert_failed = 0;
            else
            {
              assert_failed = 1;
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
              errline = 514;
              elinks_internal( "assertion dnsentry && dnsentry-&gt;addrno &gt; 0 failed!" );
            }
          }
          timeval_from_seconds( &max_age, 3600 );
          timeval_now( &now );
          timeval_sub( &age, &dnsentry->creation_time, &now );
          if ( timeval_cmp( &age, &max_age ) < 1 )
          {
            done( data, dnsentry->addr, dnsentry->addrno );
            break;
          }
          break;
        }
        else
          break;
      }
      else
      {
        dnsentry = &dnsentry;
      }
    }
    while ( dnsentry->next != dns_cache.next );
    return name[0];
    init_dns_lookup( &name[0], queryref, done, data );
  }
}
void kill_dns_request( void **queryref )
{
  int eax;
  struct dnsquery *query = &queryref[0][0];
  if ( assert_failed == 0 )
  {
    assert_failed = query[0].done == 0;
    if ( !(_Bool)( query[0].done != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/network/dns.c";
      errline = 534;
      elinks_internal( "assertion query failed!" );
      *ebp_12 = query[0].done;
      query = 0;
    }
  }
}
void shrink_dns_cache( int whole )
{
  int eax;
  int edx;
  struct dnsentry *dnsentry, *next;
  if ( whole )
  {
    dnsentry = &dns_cache.next[0];
    next = &dns_cache.next[0];
    if ( dns_cache.next != dns_cache.next )
    {
      while ( 1 )
      {
        del_dns_cache_entry(  );
        next = &dnsentry;
        dnsentry = &next;
        if ( dns_cache->next == next[0].next )
          break;
        next = &next[0];
      }
    }
  }
  else
  {
    timeval_T now;
    timeval_T max_age;
    timeval_from_seconds( &max_age, 3600 );
    timeval_now( &now );
    dnsentry = &dns_cache.next[0];
    next = &dns_cache.next[0];
    if ( dns_cache.next != dns_cache.next )
    {
    {
      while ( 1 )
      {
        timeval_T age;
        timeval_sub( ebp_48, &dnsentry->creation_time, &now );
        if ( timeval_cmp( ebp_48, &max_age ) >= 1 )
          del_dns_cache_entry( &dnsentry[0] );
        next = &next;
        dnsentry = &next;
        if ( next->next == dns_cache.next )
          break;
        next = &next;
      }
    }
    }
  }
  return;
}
#if 0
#endif
