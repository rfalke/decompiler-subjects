#include "libintl.c.h"
int current_charset = -1;
struct language languages[34] = { { "System", "system" }
, { "English", "en" }
, { "Afrikaans", "af" }
, { "Belarusian", "be" }
, { "Brazilian Portuguese", "pt-BR" }
, { "Bulgarian", "bg" }
, { "Catalan", "ca" }
, { "Croatian", "hr" }
, { "Czech", "cs" }
, { "Danish", "da" }
, { "Dutch", "nl" }
, { "Estonian", "et" }
, { "Finnish", "fi" }
, { "French", "fr" }
, { "Galician", "gl" }
, { "German", "de" }
, { "Greek", "el" }
, { "Hungarian", "hu" }
, { "Icelandic", "is" }
, { "Indonesian", "id" }
, { "Italian", "it" }
, { "Lithuanian", "lt" }
, { "Norwegian", "no" }
, { "Polish", "pl" }
, { "Portuguese", "pt" }
, { "Romanian", "ro" }
, { "Russian", "ru" }
, { "Serbian", "sr" }
, { "Slovak", "sk" }
, { "Spanish", "es" }
, { "Swedish", "sv" }
, { "Turkish", "tr" }
, { "Ukrainian", "uk" }
, { 0, 0 }
 };
int system_language;
int current_language;
int iso639_to_language( unsigned char *iso639 )
{
  unsigned char *l;
  unsigned char *p;
  int i = 1, ll;
  if ( stracpy( iso639 ) )
  {
    if ( strchr( (char*)stracpy( iso639 ), 46 ) )
      *(char*)(strchr( (char*)stracpy( iso639 ), 46 )) = 0;
    if ( strchr( &l[0], 95 ) )
      *(char*)(strchr( &l[0], 95 )) = '-';
    else
    {
      p[0] = strchr( &l[0], 45 );
    }
    if ( languages[0].name )
    {
      i = 0;
      do
      {
        if ( strcmp( *(int*)(0x81452a4 + ( i << 3 )), &l[0] ) == 0 )
        {
          mem_free( &l[0] );
          return i;
        }
        i++;
      }
      while ( languages[ i + 1 ].name );
    }
    if ( p[0] )
    {
      p[0] = 0;
      if ( languages[0].name )
      {
        i = 0;
        do
        {
          if ( strcmp( *(int*)(0x81452a4 + ( i << 3 )), &l[0] ) == 0 )
            continue;
          i++;
        }
        while ( languages[ i + 1 ].name );
        strlen( &l[0] );
      }
      else
      {
        i = 1;
        mem_free( &l[0] );
      }
    }
    else
    {
      strlen( &l[0] );
      if ( languages[0].name == 0 )
        continue;
    }
    ll = strlen( &l[0] );
    i = 0;
    do
    {
      if ( strncmp( *(int*)(0x81452a4 + ( i << 3 )), &l[0], ll < 0 + 1 ? 0 + 1 : ll ) == 0 )
        continue;
      i++;
    }
    while ( languages[ i + 1 ].name );
  }
  return i;
}
unsigned char *language_to_iso639( int language )
{
  if ( language == 0 && system_language == 0 )
  {
    return *(int*)(( get_system_language_index(  ) << 3 ) + 0x81452a4);
  }
  return *(int*)(( system_language << 3 ) + 0x81452a4);
}
int name_to_language( unsigned char *name )
{
  int i;
  if ( languages[0].name )
  {
    i = 0;
    do
    {
      if ( c_strcasecmp( (char*)languages[ i + 1 ].name, &name[0] ) == 0 )
        break;
      i++;
    }
    while ( languages[ i + 1 ].name );
  }
  i = 1;
  name[0] = name[0];
  return i;
}
unsigned char *language_to_name( int language )
{
  return languages[ language ].name;
}
int get_system_language_index( void )
{
  unsigned char *l;
  if ( l[0] || l[0] || l[0] || l[0] )
  {
    return iso639_to_language( &l[0] );
  }
  return 1;
}
void set_language( int language )
{
  if ( system_language == 0 )
  {
    system_language = get_system_language_index(  );
  }
  if ( language != current_language )
  {
    current_language = language;
    language = language == 0 ? language : system_language;
    if ( LANGUAGE == 0 )
    {
      LANGUAGE = (unsigned char*)malloc( 256 );
    }
    strcpy( (char*)LANGUAGE, (char*)language_to_iso639( language ) );
    if ( strchr( (char*)LANGUAGE, 45 ) )
      *(char*)(strchr( (char*)LANGUAGE, 45 )) = '_';
    _nl_msg_cat_cntr++;
  }
  return;
}
#if 0
#endif
