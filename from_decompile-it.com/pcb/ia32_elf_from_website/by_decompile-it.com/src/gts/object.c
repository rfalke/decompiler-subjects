#include "object.c.h"
static GHashTable *class_table;
void gts_object_class_init( GtsObjectClass *klass, GtsObjectClass *parent_class )
{
  int edx;
  int ebx;
  int esi;
  if ( !1 )
  {
    gts_object_class_init( klass, &parent_class->parent_class );
    if ( parent_class->info.class_init_func )
    {
      eax( klass );
    }
  }
  return;
}
gpointer gts_object_class_new( GtsObjectClass *parent_class, GtsObjectClassInfo *info )
{
  int eax;
  /* phantom */ GtsObjectClass *klass;
{
  /* phantom */ int _g_boolean_var_;
  if ( info == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "info != NULL" );
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( parent_class )
  {
    if ( info->object_size < parent_class->info.object_size )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "parent_class == NULL || info-&gt;object_size &gt;= parent_class-&gt;info.object_size" );
    }
  {
    /* phantom */ int _g_boolean_var_;
    if ( info->class_size < parent_class->info.class_size )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "parent_class == NULL || info-&gt;class_size &gt;= parent_class-&gt;info.class_size" );
      return 0;
    }
  }
  }
  else
  {
  }
  *(int*)(g_malloc0( info->class_size )) = info->name[0];
  *(int*)g_malloc0( info->class_size )/*.4*/ = info->name[4];
  *(int*)g_malloc0( info->class_size )/*.8*/ = info->name[8];
  *(int*)g_malloc0( info->class_size )/*.12*/ = info->name[12];
  *(int*)g_malloc0( info->class_size )/*.16*/ = info->name[16];
  *(int*)g_malloc0( info->class_size )/*.20*/ = info->name[20];
  *(int*)g_malloc0( info->class_size )/*.24*/ = info->name[24];
  *(int*)g_malloc0( info->class_size )/*.28*/ = info->name[28];
  *(int*)g_malloc0( info->class_size )/*.32*/ = info->name[32];
  *(int*)g_malloc0( info->class_size )/*.36*/ = info->name[36];
  *(int*)g_malloc0( info->class_size )/*.40*/ = info->object_size;
  *(int*)g_malloc0( info->class_size )/*.44*/ = info->class_size;
  *(int*)g_malloc0( info->class_size )/*.48*/ = info->class_init_func;
  *(int*)g_malloc0( info->class_size )/*.52*/ = info->object_init_func;
  *(int*)g_malloc0( info->class_size )/*.56*/ = info->arg_set_func;
  *(int*)g_malloc0( info->class_size )/*.64*/ = parent_class[0].info.name[0];
  *(int*)g_malloc0( info->class_size )/*.60*/ = info->arg_get_func;
  gts_object_class_init( g_malloc0( info->class_size ), g_malloc0( info->class_size ) );
  if ( class_table == 0 )
  {
    class_table = g_hash_table_new( &g_str_hash, &g_str_equal );
  }
  g_hash_table_insert( &class_table, g_malloc0( info->class_size ), g_malloc0( info->class_size ) );
  return g_malloc0( info->class_size );
}
  return 0;
}
}
GtsObjectClass *gts_object_class_from_name( gchar *name )
{
  int edx;
{
  /* phantom */ int _g_boolean_var_;
  if ( name == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "name != NULL" );
    return 0;
  }
  if ( class_table )
  {
    g_hash_table_lookup( &class_table, name );
  }
  return g_hash_table_lookup( &class_table, name );
}
}
void object_destroy( GtsObject *object )
{
  object->klass->info.name[0] = 0;
}
void object_clone( GtsObject *clone, GtsObject *object )
{
  memcpy( clone, object, object->_GtsObject );
  clone->reserved = 0;
  return;
}
void object_class_init( GtsObjectClass *klass )
{
  klass->clone = object_clone;
  klass->destroy = object_destroy;
  klass->read = 0;
  klass->write = 0;
  klass->color = 0;
  klass->attributes = 0;
  return;
}
void object_init( GtsObject *object )
{
  object->reserved = 0;
  object->flags = 0;
  return;
}
GtsObjectClass *gts_object_class( void )
{
  int eax;
  int ecx;
  static GtsObjectClass *klass;
  if ( klass == 0 )
  {
    GtsObjectClassInfo object_info = { };
    object_info.name[0] = 'G';
    *(int*)&object_info.name[4] = 0x63656a62;
    *(int*)&object_info.name[8] = 116;
    do
    {
      *(int*)&object_info.name[11] = 0;
    }
    while ( klass + 4 + 4 < 28 );
    object_info.object_size = 12;
    object_info.class_size = 92;
    object_info.class_init_func = &object_class_init;
    object_info.object_init_func = &object_init;
    klass = gts_object_class_new( 0, &object_info );
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail( );
  }
  return klass;
}
gpointer gts_object_check_cast( gpointer object, gpointer klass )
{
  int eax;
  int ecx;
  if ( object == 0 )
  {
  }
  else
  if ( *(int*)(object) == 0 )
  {
  }
  else
  {
    if ( klass == 0 )
    {
      g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    }
    else
    if ( klass == *(int*)(object) )
    {
      return object;
    }
    do
    {
      if ( *(int*)(*(int*)(*(int*)(object) + 64) + 64) == 0 )
        goto B11;
      else
      {
      }
    }
    while ( klass != edx );
    return object;
B11:;
    g_log( 0, 16, "invalid cast from `%s' to `%s'", *(int*)(object), klass );
    return object;
  }
  g_log( 0, 16, ebp_48, ebp_48, ebp_44, ebp_44 );
  return object;
}
gpointer gts_object_class_check_cast( gpointer klass, gpointer from )
{
  if ( klass == 0 )
  {
    g_log( 0, 16, "invalid cast from (NULL) pointer to `%s'", from );
  }
  if ( from == 0 )
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "from != NULL" );
  else
  if ( klass == from )
  {
  }
  do
  {
    if ( klass[16] == 0 )
    {
      g_log( 0, 16, "invalid cast from `%s' to `%s'", klass, from );
      break;
    }
  }
  while ( from != edx );
  g_log( 0, 16, "invalid cast from `%s' to `%s'", klass, from );
  return klass;
}
void gts_object_init( GtsObject *object, GtsObjectClass *klass )
{
  int ebx;
  int esi;
  GtsObjectClass *parent_class;
{
  /* phantom */ int _g_boolean_var_;
  if ( object == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "object != NULL" );
    return;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
  }
  else
  {
    parent_class = klass->parent_class;
    if ( klass->parent_class )
      gts_object_init( object, parent_class );
    if ( klass->info.object_init_func )
    {
      ;
    }
  }
  return;
}
}
}
GtsObject *gts_object_new( GtsObjectClass *klass )
{
  int ebx;
  GtsObject *object;
{
  /* phantom */ int _g_boolean_var_;
  if ( klass == 0 )
  {
    object = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "klass != NULL" );
    return object;
  }
  object = &klass[0].info.name[0];
  gts_object_init( g_malloc0( klass->info.object_size ), klass );
  return *ebp_24;
}
}
GtsObject *gts_object_clone( GtsObject *object )
{
  int ebx;
  GtsObject *clone;
{
  /* phantom */ int _g_boolean_var_;
  if ( object == 0 )
  {
    clone = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "object != NULL" );
    return clone;
  }
{
  /* phantom */ int _g_boolean_var_;
  if ( object[5].flags == 0 )
  {
    clone = 0;
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "object-&gt;klass-&gt;clone" );
    return clone;
  }
  clone = g_malloc0( object[3].reserved );
  *(int*)g_malloc0( object[3].reserved )/*.4*/ = 0;
  *(int*)g_malloc0( object[3].reserved )/*.8*/ = 0;
  *(int*)(g_malloc0( object[3].reserved )) = object->_GtsObject;
  object[5].flags( g_malloc0( object[3].reserved ), object );
  return clone;
}
}
}
void gts_object_destroy( GtsObject *object )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( object->_GtsObject == 0 )
  {
    g_assertion_message_expr( 0, "../../src/gts/object.c", 294, __PRETTY_FUNCTION__, "object-&gt;klass-&gt;destroy" );
  }
  object->flags = object->flags | 1;
  ;
}
}
void gts_object_reset_reserved( GtsObject *object )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( object == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "object != NULL" );
    return;
  }
  object->reserved = 0;
  return;
}
}
void gts_object_attributes( GtsObject *object, GtsObject *from )
{
  int eax;
{
  /* phantom */ int _g_boolean_var_;
  if ( object == 0 )
  {
    g_return_if_fail_warning( 0, __PRETTY_FUNCTION__, "object != NULL" );
  }
  else
  if ( object[7].reserved[0] )
  {
    ;
  }
  return;
}
}
void free_class( gchar *name, GtsObjectClass *klass )
{
  name = (gchar*)klass;
}
void gts_finalize( void )
{
  if ( class_table )
  {
    g_hash_table_foreach( &class_table, &free_class, 0 );
    g_hash_table_destroy( &class_table );
    class_table = 0;
  }
  return;
}
#if 0
#endif
