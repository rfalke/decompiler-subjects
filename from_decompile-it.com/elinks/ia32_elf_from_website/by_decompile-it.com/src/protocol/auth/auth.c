#include "auth.c.h"
static struct list_head_elinks auth_entry_list = { &auth_entry_list, &auth_entry_list };
struct module auth_module = { "Authentication", 0, 0, 0, 0, 0, &done_auth };
struct auth_entry *find_auth_entry( struct uri *uri, unsigned char *realm )
{
  struct auth_entry *match, *entry = &auth_entry_list.next[0];
  match = 0;
  if ( auth_entry_list.next != auth_entry_list.next )
  {
    entry = &entry[0];
    do
    {
      if ( compare_uri( entry->uri, &uri[0], URI_HTTP_AUTH ) )
      {
        if ( realm[0] == 0 || ( entry->realm && strcmp( (char*)entry->realm, &realm[0] ) == 0 ) )
          break;
        match = &entry[0];
      }
      entry = &entry;
    }
    while ( entry->next != auth_entry_list.next );
  }
  return match;
}
void set_auth_user( struct auth_entry *entry, struct uri *uri )
{
  int userlen = uri->bits_at_40/*.3_4of4*/;
  if ( uri->bits_at_40/*.3_4of4*/ > 38 )
    userlen = 39;
  else
  if ( userlen )
  {
  }
  else
  {
    return;
  }
  memcpy( &entry->user[0], uri->user, 39 );
  return;
}
void set_auth_password( struct auth_entry *entry, struct uri *uri )
{
  int passwordlen = (int)uri->bits_at_44/*.1_2of4*/;
  if ( (int)uri->bits_at_44/*.1_2of4*/ > 38 )
    passwordlen = 39;
  else
  if ( passwordlen )
  {
  }
  else
  {
    return;
  }
  memcpy( &entry->password[0], uri->password, 39 );
  return;
}
struct auth_entry *add_auth_entry( struct uri *uri, unsigned char *realm, unsigned char *nonce, unsigned char *opaque, unsigned int digest )
{
  int eax;
  int edx;
  struct auth_entry *entry;
  if ( find_auth_entry( uri, realm ) == 0 )
  {
    entry = (struct auth_entry*)mem_calloc( 1, 116 );
    if ( mem_calloc( 1, 116 ) == 0 )
    {
      return &entry[0];
    }
    uri->object.refcount = uri->object.refcount;
    *(int*)(mem_calloc( 1, 116 ) + 12) = uri[0];
    if ( realm )
    {
      *(int*)(mem_calloc( 1, 116 ) + 16) = stracpy( realm );
      if ( mem_calloc( 1, 116 ) + 16 == 0 )
      {
        mem_free( &ecx );
        return &entry[0];
      }
    }
    set_auth_user( &ecx, &uri[0] );
    set_auth_password( ebp_28, &uri[0] );
    *(int*)(ebp_28 + 28) = eax;
    if ( ebp_28 + 28 == 0 )
    {
      done_auth_entry( &ecx );
      return &entry[0];
    }
    *(int*)(ecx + 4) = auth_entry_list.next;
    ecx = auth_entry_list.next;
    auth_entry_list.next = &ecx;
    *(int*)(ecx + 4) = ecx;
    if ( nonce )
    {
      auth_entry_list.next[6] = stracpy( nonce );
      if ( auth_entry_list.next + 4 + 20 == 0 )
      {
        del_auth_entry( &ecx );
        return &entry[0];
      }
    }
    if ( opaque )
    {
      *(int*)(ebp_28 + 24) = stracpy( opaque );
      if ( ebp_28 + 24 == 0 )
      {
        del_auth_entry( &ecx );
        return &entry[0];
      }
    }
    auth_entry_list.next[29] = ( *(char*)(auth_entry_list.next + 4 + 112) & -5 ) | ( ( (int)digest/*.1_1of4*/ & 1 ) << 2 );
  }
  else
  {
    if ( ( ( *(char*)(find_auth_entry( uri, realm ) + 112) & 1 ) & 255 ) == 0 )
    {
      if ( (unsigned char)( realm != 0 ) == ( *(int*)(entry[0].next + 16) != 0 ) )
      {
        if ( ( ( realm != 0 ) & 255 ) && ebp_41 && stracpy( opaque ) )
          entry->realm[0] = entry->realm;
        else
        {
          if ( entry->user[0] && uri->user && uri->bits_at_40/*.3_4of4*/ )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/auth.c";
            errline = 185;
            if ( elinks_strlcmp( &entry->user[0], -1, uri->user, uri->bits_at_40/*.3_4of4*/ ) == 0 )
            {
              if ( entry->password[0] && uri->password && uri->bits_at_44/*.1_2of4*/ )
              {
                errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/auth.c";
                errline = 192;
                if ( elinks_strlcmp( &entry->password[0], -1, uri->password, (int)uri->bits_at_44/*.1_2of4*/ ) )
                  goto B36;
              }
B36:              entry->bits_at_112/*.1_1of4*/ &= 253;
              set_auth_password( &entry[0], &uri[0] );
            }
          }
          entry->bits_at_112/*.1_1of4*/ &= 253;
          set_auth_user( &entry[0], &uri[0] );
        }
      }
      entry->bits_at_112/*.1_1of4*/ = (int)entry->bits_at_112/*.1_1of4*/ & -3;
      if ( entry->realm )
        mem_free( (void*)entry->realm );
      entry->realm = 0;
      if ( ( realm != 0 ) & 255 )
      {
        entry->realm = stracpy( realm );
        if ( entry->realm )
        {
          if ( nonce )
          {
            if ( entry->nonce )
              mem_free( (void*)entry->nonce );
            entry->nonce = stracpy( nonce );
            if ( entry->nonce == 0 )
              goto B23;
          }
          if ( opaque )
          {
            if ( entry->opaque )
              mem_free( (void*)entry->opaque );
            entry->opaque = stracpy( opaque );
            if ( entry->opaque == 0 )
            {
              del_auth_entry( &entry[0] );
              uri = &uri[0];
              return 0;
            }
          }
          entry->bits_at_112/*.1_1of4*/ = ( *(char*)(entry[0].next + 112) & -5 ) | ( ( (int)digest/*.1_1of4*/ & 1 ) << 2 );
        }
B23:        &entry[0] = 0;
        del_auth_entry( &entry[0] );
        return &entry[0];
      }
    }
    else
    {
      return 0;
    }
  }
  if ( !( ( entry->bits_at_112/*.1_1of4*/ & 2 ) & 255 ) && entry->realm )
  {
    add_questions_entry( &do_auth_dialog, (void*)entry[0].next );
    return &entry[0];
  }
  return &entry[0];
}
struct auth_entry *find_auth( struct uri *uri )
{
  int eax;
  struct auth_entry *entry;
  &entry[0] = find_auth_entry( uri, 0 );
  if ( ( entry[0].next & 65535 ) || uri->bits_at_44/*.1_2of4*/ )
  {
    if ( entry[0].next )
    {
      if ( uri->bits_at_40/*.3_4of4*/ & 65535 )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/auth.c";
        errline = 249;
        if ( elinks_strlcmp( &entry->user[0], -1, uri->user, uri->bits_at_40/*.3_4of4*/ ) == 0 )
        {
          if ( uri->password == 0 )
            &entry[0] = &entry[0];
            if ( ( ( entry->bits_at_112/*.1_1of4*/ & 1 ) & 255 ) == 0 )
            {
              if ( entry->user[0] == 0 && entry->password[0] == 0 )
              {
                del_auth_entry( &entry[0] );
                &entry[0] = &entry[0];
              }
              return &entry[0];
            }
            return 0;
        }
      }
      else
      if ( uri->password == 0 )
        continue;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/auth/auth.c";
      errline = 250;
      if ( elinks_strlcmp( &entry->password[0], -1, uri->password, (int)uri->bits_at_44/*.1_2of4*/ ) == 0 )
        continue;
    }
    &entry[0] = add_auth_entry( &uri[0], 0, 0, 0, 0 );
  }
  if ( entry[0].next )
    continue;
  else
  {
    return &entry[0];
  }
}
void done_auth_entry( struct auth_entry *entry )
{
  if ( entry->box_item )
    done_listbox_item( &auth_browser, entry->box_item );
  done_uri( entry->uri );
{
  void *p = (void*)entry->realm;
  if ( entry->realm )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)entry->nonce;
  if ( entry->nonce )
    mem_free( &((int*)p)[0] );
{
  void *p = (void*)entry->opaque;
  if ( entry->opaque )
    mem_free( &((int*)p)[0] );
  mem_free( (void*)entry[0].next );
  return;
}
}
}
}
void del_auth_entry( struct auth_entry *entry )
{
  entry->prev = entry->prev;
  &entry->prev[0] = &entry[0];
}
void free_auth( void )
{
  if ( auth_entry_list.next != auth_entry_list.next )
  {
    do
    {
      del_auth_entry( &auth_entry_list.next[0] );
    }
    while ( auth_entry_list.next == auth_entry_list.next );
  }
{
  struct xlist_head *head = &questions_queue.next[0], *next;
  if ( questions_queue.next != questions_queue.next )
  {
    do
    {
      head = &(struct xlist_head*)(head);
    }
    while ( head->next != questions_queue.next );
  }
  head = &questions_queue.prev[0];
  if ( questions_queue.prev != head[0].next )
  {
    do
    {
      head = head->prev;
    }
    while ( head->prev != head[0].next );
  }
  next = &questions_queue.next[0];
  if ( head[0].next != questions_queue.next )
  {
    next = &next[0];
    do
    {
      next->prev = head->prev;
      &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
      mem_free( (void*)head->next );
    }
    while ( next[0].next == head[0].next );
  }
  return;
}
}
void done_auth( struct module *xxx )
{
}
struct auth_entry *get_invalid_auth_entry( void )
{
  struct auth_entry *entry = &auth_entry_list.next[0];
  if ( auth_entry_list.next != auth_entry_list.next )
  {
    do
    {
      if ( ( ( entry->bits_at_112/*.1_1of4*/ & 2 ) & 255 ) == 0 )
        break;
      entry = &entry;
    }
    while ( entry->next != auth_entry_list.next );
  }
  return 0;
}
#if 0
#endif
