#include "idcache.c.h"
static struct userid *user_alist;
static struct userid *nouser_alist;
static struct userid *group_alist;
static struct userid *nogroup_alist;
char *getuser( uid_t uid )
{
  struct userid *tail;
  struct userid *match = 0;
  tail = user_alist;
  for ( ; tail != 0; tail = tail->next )
  {
    if ( tail->id.u/*union*/ == uid )
    {
      match = tail;
      break;
    }
    else
    {
      //tail = tail->next;
    }
  }
  if ( match == 0 )
  {
    struct passwd *pwent = getpwuid( &uid );
    char *name = pwent == 0 ? "" : pwent->pw_name;
    match = xmalloc( strlen( name ) + 9 );
    match->id.u/*union*/ = uid;
    strcpy( &match[1].id.u, name );
    match->next = user_alist;
    user_alist = match;
  }
  return ( (int)match[1].id.gid_t/*.1_1of4*/ & 255 ) == 0 ? 0 : &match[1].id.u;
}
uid_t *getuidbyname( char *user )
{
  struct userid *tail = user_alist;
  struct passwd *pwent;
  for ( ; tail != 0; tail = tail->next )
  {
    if ( tail[1].id.gid_t/*.1_1of4*/ == user[0] && strcmp( &tail[1].id.u, user ) == 0 )
    {
      return (uid_t*)tail;
    }
    //tail = tail->next;
  }
  tail = nouser_alist;
  for ( ; tail != 0; tail = tail->next )
  {
    if ( tail[1].id.gid_t/*.1_1of4*/ == user[0] && strcmp( &tail[1].id.u, user ) == 0 )
    {
      return 0;
    }
    //tail = tail->next;
  }
  pwent = getpwnam( user );
  tail = xmalloc( strlen( user ) + 9 );
  strcpy( &tail[1].id.u, user );
  if ( pwent != 0 )
  {
    tail->id.u/*union*/ = pwent->pw_uid;
    tail->next = user_alist;
    user_alist = tail;
    return (uid_t*)tail;
  }
  tail->next = nouser_alist;
  nouser_alist = tail;
  return 0;
}
char *getgroup( gid_t gid )
{
  struct userid *tail;
  struct userid *match = 0;
  tail = group_alist;
  for ( ; tail != 0; tail = tail->next )
  {
    if ( tail->id.u/*union*/ == gid )
    {
      match = tail;
      break;
    }
    else
    {
      //tail = tail->next;
    }
  }
  if ( match == 0 )
  {
    struct group *grent = getgrgid( &gid );
    char *name = grent == 0 ? "" : grent->gr_name;
    match = xmalloc( strlen( name ) + 9 );
    match->id.u/*union*/ = gid;
    strcpy( &match[1].id.u, name );
    match->next = group_alist;
    group_alist = match;
  }
  return ( (int)match[1].id.gid_t/*.1_1of4*/ & 255 ) == 0 ? 0 : &match[1].id.u;
}
gid_t *getgidbyname( char *group )
{
  struct userid *tail = group_alist;
  struct group *grent;
  for ( ; tail != 0; tail = tail->next )
  {
    if ( tail[1].id.gid_t/*.1_1of4*/ == group[0] && strcmp( &tail[1].id.u, group ) == 0 )
    {
      return (gid_t*)tail;
    }
    //tail = tail->next;
  }
  tail = nogroup_alist;
  for ( ; tail != 0; tail = tail->next )
  {
    if ( tail[1].id.gid_t/*.1_1of4*/ == group[0] && strcmp( &tail[1].id.u, group ) == 0 )
    {
      return 0;
    }
    //tail = tail->next;
  }
  grent = getgrnam( group );
  tail = xmalloc( strlen( group ) + 9 );
  strcpy( &tail[1].id.u, group );
  if ( grent != 0 )
  {
    tail->id.u/*union*/ = grent->gr_gid;
    tail->next = group_alist;
    group_alist = tail;
    return (gid_t*)tail;
  }
  tail->next = nogroup_alist;
  nogroup_alist = tail;
  return 0;
}
