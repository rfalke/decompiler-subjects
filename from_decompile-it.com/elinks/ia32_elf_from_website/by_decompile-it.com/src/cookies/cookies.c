#include "cookies.c.h"
static int cookies_nosave;
static struct list_head_elinks cookies = { &cookies, &cookies };
static struct list_head_elinks c_domains = { &c_domains, &c_domains };
static struct list_head_elinks cookie_servers = { &cookie_servers, &cookie_servers };
static int cookies_dirty;
static struct option_info cookies_options[7] = { { { 0, 0, { 0 }
, "cookies", 0, 9, 0, 0, { 0, 135442980, 135442972, 0, 0, 0 }
, "Cookies options.", "Cookies", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "accept_policy", 0, 1, 0, 2, { 0, 135372540, 135443011, 0, 0, 0 }
, "Cookies accepting policy:\n0 is accept no cookies\n1 is ask for confirmation before accepting cookie\n2 is accept all cookies", "Accept policy", 0, 0, 0 }
, "cookies" }
, { { 0, 0, { 0 }
, "max_age", 0, 1, -1, 10000, { 0, 135372664, 135443033, 0, 0, 0 }
, "Cookie maximum age (in days):\n-1 is use cookie's expiration date if any\n0  is force expiration at the end of session, ignoring\n   cookie's expiration date\n1+ is use cookie's expiration date, but limit age to the\n   given number of days", "Maximum age", 0, 0, 0 }
, "cookies" }
, { { 0, 0, { 0 }
, "paranoid_security", 0, 0, 0, 1, { 0, 135372900, 135443063, 0, 0, 0 }
, "When enabled, we'll require three dots in cookies domain for all non-international domains (instead of just two dots). Some countries have generic second level domains (eg. .com.pl, .co.uk) and allowing sites to set cookies for these generic domains could potentially be very bad. Note, it is off by default as it breaks a lot of sites.", "Paranoid security", 0, 0, 0 }
, "cookies" }
, { { 0, 0, { 0 }
, "save", 0, 0, 0, 1, { 0, 135373240, 135442881, 0, 0, 0 }
, "Whether cookies should be loaded from and saved to disk.", "Saving", 0, 0, 0 }
, "cookies" }
, { { 0, 0, { 0 }
, "resave", 0, 0, 0, 1, { 0, 135373300, 135443088, 0, 0, 0 }
, "Save cookies after each change in cookies list? No effect when cookie saving (cookies.save) is off.", "Resaving", 0, 0, 0 }
, "cookies" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct module cookies_module = { "Cookies", cookies_options, 0, 0, 0, &init_cookies, &done_cookies };
struct cookie_server *get_cookie_server( unsigned char *host, int hostlen )
{
  struct cookie_server *sort_spot;
  struct cookie_server *cs = &cookie_servers.next[0];
  if ( cookie_servers.next != cookie_servers.next )
  {
    sort_spot = 0;
  {
    while ( 1 )
    {
      c_strncasecmp( &cs->host[0], (char*)host, hostlen );
      if ( sort_spot == 0 )
      {
        if ( c_strncasecmp( &cs->host[0], (char*)host, hostlen ) < 1 )
        {
          if ( hostlen < cs->prev && c_strncasecmp( &cs->host[0], (char*)host, hostlen ) == 0 )
          {
          }
        }
        sort_spot = cs->prev;
      }
      if ( hostlen != strlen( &cs->host[0] ) || c_strncasecmp( &cs->host[0], (char*)host, hostlen ) )
      {
        cs = &cs;
        if ( cs->next == cookie_servers.next )
          goto B15;
        else
        {
        }
      }
      else
      {
        &cs[0] = &cs[0];
        cs->object.object++;
        break;
      }
    }
  }
  }
  else
    sort_spot = 0;
B15:  &cs[0] = (struct cookie_server*)mem_calloc( 1, hostlen + 20 );
  if ( mem_calloc( 1, hostlen + 20 ) )
  {
    memcpy( mem_calloc( 1, hostlen + 20 ) + 16, host, hostlen );
    cs->object.refcount = cs->object.refcount;
    cs->box_item = add_listbox_item( &cookie_browser, 0, BI_FOLDER, (void*)cs[0].next, 1 );
    if ( sort_spot == 0 )
    {
      cs = *(int*)(cookie_servers.prev);
      cs->prev = &cookie_servers.prev[0];
      *(int*)(cookie_servers.prev) = cs[0].next;
      cs->prev = &cs[0];
      cs->box_item->prev = cs->box_item->prev;
      &cs->box_item->prev = &cs->box_item[0];
      &cs->box_item = *(int*)(cookie_browser->root.child.prev);
      cs->box_item->prev = &cookie_browser.root.child.prev[0];
      *(int*)(cookie_browser.root.child.prev) = cs->box_item;
      cs->box_item->prev = cs->box_item;
      return &cs[0];
    }
    cs->prev = sort_spot;
    cs = &sort_spot[0];
    &sort_spot[0] = &cs[0];
    cs->prev = &cs[0];
    if ( sort_spot != cs[0].next )
    {
      cs->box_item->prev = cs->box_item->prev;
      &cs->box_item->prev = &cs->box_item[0];
      &cs->box_item = &sort_spot->box_item[0];
      cs->box_item->prev = sort_spot->box_item;
      &sort_spot->box_item[0] = cs->box_item;
      cs->box_item->prev = cs->box_item;
    }
    return &cs[0];
  }
  else
  {
    return &cs[0];
  }
}
void done_cookie_server( struct cookie_server *cs )
{
  cs->object.object--;
  if ( cs->object.object - 1 == 0 )
  {
    if ( cs->box_item )
      done_listbox_item( &cookie_browser, cs->box_item );
    cs->prev = cs->prev;
    &cs->prev = &cs;
    mem_free( (void*)cs->next );
  }
  return;
}
void done_cookie( struct cookie *c )
{
  if ( c->box_item )
    done_listbox_item( &cookie_browser, c->box_item );
  if ( c->server )
    done_cookie_server(  );
{
  void *p = (void*)c->name;
  if ( c->name )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)c->value;
  if ( c->value )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)c->path;
  if ( c->path )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)c->domain;
  if ( c->domain )
    mem_free( &((int*)p)[0] );
  c = &c[0];
}
}
}
}
}
void delete_cookie( struct cookie *c )
{
  c->prev = c->prev;
  &c->prev[0] = &c[0];
  c = c;
}
struct cookie *init_cookie( unsigned char *name, unsigned char *value, unsigned char *path, unsigned char *domain, struct cookie_server *server )
{
  int eax;
  struct cookie *cookie;
  if ( cookie[0].next )
  {
    if ( name[0] == 0 || path[0] == 0 || value[0] == 0 || server == 0 || domain == 0 )
    {
      if ( cookie[0].next )
        mem_free( (void*)cookie[0].next );
    }
    else
    {
      cookie->name = &name[0];
      cookie->value = &value[0];
      cookie->path = &path[0];
      cookie->domain = domain;
      *(int*)(mem_calloc( 1, name ) + 28) = server->cookie_server;
      return (struct cookie*)mem_calloc( 1, name );
    }
  }
  if ( name[0] )
    mem_free( &name[0] );
  if ( value[0] )
    mem_free( &value[0] );
  if ( path[0] )
    mem_free( &path[0] );
  if ( domain )
    mem_free( (void*)domain );
  &server = server;
  done_cookie_server( server );
  cookie = 0;
  return (struct cookie*)mem_calloc( 1, name );
}
void set_cookie( struct uri *uri, unsigned char *str )
{
  int ecx;
  int edx;
  unsigned char *path, *domain;
  struct cookie *cookie;
  struct cookie_str cstr;
  int max_age;
  if ( cookies_options->option_elinks.value && parse_cookie_str( &cstr, &str[0] ) )
  {
    if ( parse_header_param( &str[0], "path", &path ) )
    {
      if ( parse_header_param( &str[0], "path", &path ) == HEADER_PARAM_NOT_FOUND && path[0] )
      {
        path = &path[0];
        if ( strrchr( &path[0], 47 ) )
          *(char*)(strrchr( &path[0], 47 ) + 1) = 0;
      }
      else
      {
        return;
      }
    }
    else
    {
      if ( !path[0] || *(char*)(( path + strlen( (char*)path ) ) - 1) != '/' )
      {
        add_to_strn( &path, "/" );
      }
      if ( path[0] != '/' )
      {
        add_to_strn( &path, "x" );
        memmove( &path[1], path, strlen( (char*)path ) - 1 );
        path[0] = 47;
      }
    }
    if ( parse_header_param( &str[0], "domain", &domain ) != HEADER_PARAM_NOT_FOUND )
    {
    }
    else
    {
      domain = memacpy( uri->host, uri->bits_at_44/*.3_4of4*/ );
    }
    if ( domain && domain[0] == '.' )
    {
      memmove( domain, domain + 1, strlen( (char*)domain ) );
    }
    if ( eax )
    {
      max_age = cookies_options[2].option_elinks.value.tree;
      if ( cookies_options[2].option_elinks.value.tree )
      {
        unsigned char *date;
        time_t expires;
        if ( parse_header_param( &str[0], "expires", &date ) == HEADER_PARAM_FOUND )
        {
          expires = parse_date( &date, 0, 0, 1 );
          mem_free( (void*)date );
          *ebp_72 = max_age;
          if ( ebp_76 )
          {
            if ( max_age >= 1 )
            {
              time_t deadline;
              max_age *= 0x15180;
              deadline += max_age * 0x15180;
              expires = deadline + ( ebp_72 * 0x15180 ) < ebp_76 ? ebp_76 : deadline + ( ebp_72 * 0x15180 );
            }
            cookie->expires = expires;
            uri = &uri[0];
          }
        }
        else
        {
          uri = &uri[0];
          if ( parse_header_param( &str[0], "expires", &date ) == HEADER_PARAM_NOT_FOUND )
            goto B38;
          else
          {
            done_cookie( &cookie[0] );
            return;
          }
        }
      }
B38:      cookie->secure = parse_header_param( &str[0], "secure", 0 ) == HEADER_PARAM_FOUND;
      if ( strlen( *(char*)(*(int*)(cookie[0].next + 24)) != '.' ? &cookie->domain[1] : (char*)cookie->domain ) <= uri->bits_at_44/*.3_4of4*/ )
      {
        if ( eax == 0 )
        {
          if ( ebp_60 != edx )
          {
            if ( !is_ip_address( uri->host, uri->bits_at_44/*.3_4of4*/ ) && *(char*)(*(char*)(*(int*)(cookie[0].next + 24)) != '.' ? cookie->domain + 1 : cookie->domain) )
            {
              do
              {
                uri = &uri[0];
                if ( eax == '.' )
                {
                  if ( ecx != 1 )
                  {
                  }
                  else
                  {
                    if ( cookies_options[1].option_elinks.value.tree == 1 )
                    {
                      cookie->prev = &cookie_queries.next[0];
                      cookie = &cookie_queries.next[0];
                      cookie_queries.next = (void*)cookie[0].next;
                      cookie->prev = &cookie[0];
                      add_questions_entry( &accept_cookie_dialog, (void*)cookie[0].next );
                      break;
                    }
                    else
                    {
                      accept_cookie( &cookie[0] );
                      break;
                    }
                  }
                }
              }
              while ( *(char*)(edx + 1) );
            }
          }
        }
      }
      mem_free( (void*)cookie->domain );
      cookie->domain = memacpy( uri->host, uri->bits_at_44/*.3_4of4*/ );
    }
    else
    {
      return;
    }
  }
  else
  {
    return;
  }
}
void accept_cookie( struct cookie *cookie )
{
  int eax;
  int edx;
  struct c_domain *cd;
  struct listbox_item *root = cookie->server->box_item;
  if ( cookie->server->box_item )
  {
    cookie->box_item = add_listbox_item( &cookie_browser, &root[0], BI_LEAF, (void*)cookie[0].next, 1 );
  }
  if ( cookies_nosave == 0 )
  {
    struct cookie *c = &cookies->source[0], *next = &cookies[0].source[0];
    if ( cookies == cookies )
      cookie = &cookie[0];
    else
    {
      while ( c_strcasecmp( (char*)root->child.prev, (char*)cookie->name ) == 0 && c_strcasecmp( *(int*)(root[0].next + 24), (char*)cookie->domain ) == 0 )
      {
        edi = root->next;
        if ( next[0].next == cookies )
          goto B5;
        else
        {
        }
      }
      delete_cookie( &c[0] );
      edi = root->next;
    }
  }
B5:  cookie->prev = &cookies[0].source[0];
  cookie = &cookies->source[0];
  cookies = &cookie[0].next[0];
  cookie->prev = &cookie[0];
  set_cookies_dirty(  );
  cd = &c_domains.next[0];
  if ( c_domains.next != c_domains.next )
  {
    do
    {
      if ( c_strcasecmp( &cd->domain[0], (char*)cookie->domain ) == 0 )
        break;
      cd = &cd;
    }
    while ( cd->next != c_domains.next );
  }
  *ebp_28 = strlen( (char*)cookie->domain );
  if ( mem_alloc( strlen( (char*)cookie->domain ) + 12 ) )
  {
    memcpy( mem_alloc( strlen( (char*)cookie->domain ) + 12 ) + 8, cookie->domain, strlen( (char*)cookie->domain ) + 1 );
    *(int*)(mem_alloc( strlen( (char*)cookie->domain ) + 12 ) + 4) = cd[0];
    *(int*)(mem_alloc( strlen( (char*)cookie->domain ) + 12 )) = cd->c_domain;
    cd = (struct c_domain*)mem_alloc( strlen( (char*)cookie->domain ) + 12 );
    *(int*)(*(int*)(mem_alloc( strlen( (char*)cookie->domain ) + 12 )) + 4) = mem_alloc( strlen( (char*)cookie->domain ) + 12 );
    return;
  }
  return;
}
struct string *send_cookies( struct uri *uri )
{
  int eax;
  static struct string header;
  struct c_domain *cd;
  struct cookie *c, *next;
  unsigned char *path;
  time_t now;
  if ( uri->host && uri->data && c_domains.next != c_domains.next )
  {
    for ( ; is_in_domain( &cd->domain[0], uri->host, uri->bits_at_44/*.3_4of4*/ ) == 0; uri->host = uri->host )
    {
      cd = &cd;
      if ( cd->next == c_domains.next )
        goto B1;
      //uri->host = uri->host;
    }
    if ( get_uri_string( &uri[0], URI_PATH ) )
    {
      init_string( &header );
      c = &cookies->source[0];
      now = time( 0 );
      if ( cookies != cookies )
      {
        while ( is_in_domain( c->domain, uri->host, uri->bits_at_44/*.3_4of4*/ ) && strlen( (char*)c->path ) <= strlen( (char*)get_uri_string( &uri[0], URI_PATH ) ) )
        {
          &next[0] = &next;
          c = &next;
          if ( c->next == cookies )
            goto B14;
          else
          {
          }
        }
      }
B14:      mem_free( (void*)get_uri_string( &uri[0], URI_PATH ) );
      if ( header.length == 0 )
      {
        done_string( &header );
        return 0;
      }
      return 0;
    }
  }
B1:  return 0;
}
void load_cookies( void )
{
#error unstructured control flow
}
void resave_cookies_bottom_half( void *always_null )
{
  if ( cookies_options[4].option_elinks.value && cookies_options[5].option_elinks.value )
  {
    always_null = 0;
  }
  return;
}
void set_cookies_dirty( void )
{
  cookies_dirty = 1;
  register_bottom_half_do( &resave_cookies_bottom_half, 0 );
  return;
}
void save_cookies( struct terminal *term )
{
  struct cookie *c;
  unsigned char *cookfile;
  struct secure_save_info *ssi;
  time_t now;
  if ( cookies_nosave )
  {
    if ( assert_failed == 0 )
    {
      assert_failed = term[0].next != 0;
      if ( term[0].next )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/cookies/cookies.c";
        errline = 825;
        elinks_internal( "assertion term == NULL failed!" );
        if ( assert_failed )
        {
          assert_failed = 0;
        }
        *ebp_12 = ebx;
        return;
      }
      else
      {
        *ebp_12 = ebx;
        return;
      }
    }
    else
    {
      assert_failed = 0;
      *ebp_12 = ebx;
      return;
    }
  }
  else
  {
    if ( elinks_home == 0 )
    {
      if ( term[0].next )
      {
      }
      else
      {
        *ebp_12 = ebx;
        return;
      }
    }
    else
    if ( term[0] || cookies_dirty )
    {
      if ( *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) )
      {
        if ( term[0].next )
        {
        }
        else
        {
          *ebp_12 = ebx;
          return;
        }
      }
      else
      {
        if ( straconcat( elinks_home ) == 0 )
        {
          if ( term[0].next )
          {
          }
          else
          {
            *ebp_12 = ebx;
            return;
          }
        }
        else
        {
          ssi = secure_open( straconcat( elinks_home ) );
          mem_free( &cookfile[0] );
          if ( ssi )
          {
            c = &cookies->source[0];
            now = time( 0 );
            if ( cookies != cookies )
            {
              do
              {
              }
              while ( ( c->expires == 0 || c->expires <= now || secure_fprintf( ssi, "%s\t%s\t%s\t%s\t%s\t%ld\t%d\n" ) >= 0 ) && c->next != cookies );
              term = &term[0];
            }
            secsave_errno = SS_ERR_OTHER;
            if ( secure_close( ssi ) == 0 )
            {
              cookies_dirty = 0;
              *ebp_12 = ebx;
              return;
            }
          }
          if ( term[0].next )
          {
            info_box( &term[0], MSGBOX_NO_TEXT_INTL, "Cannot save cookies", ALIGN_LEFT );
            *ebp_12 = ebx;
            return;
          }
          else
          {
            *ebp_12 = ebx;
            return;
          }
        }
      }
    }
    else
    {
      *ebp_12 = ebx;
      return;
    }
    info_box( &term[0], 0, "Cannot save cookies", ALIGN_LEFT );
    *ebp_12 = ebx;
    return;
  }
}
void init_cookies( struct module *module )
{
  if ( cookies_options[4].option_elinks.value.tree )
  {
  }
  return;
}
void done_cookies( struct module *module )
{
#error unstructured control flow
}
#if 0
#endif
