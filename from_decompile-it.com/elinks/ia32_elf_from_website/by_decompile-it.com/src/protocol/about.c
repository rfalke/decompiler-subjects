#include "about.c.h"
static struct about_page about_pages[5] = { { "bloat", "&lt;html&gt;&lt;body&gt;&lt;p&gt;Bloat? What bloat?&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;" }
, { "links", "&lt;html&gt;&lt;body&gt;&lt;pre&gt;/*                 D~~)w  */\n/*                /    |  */\n/*             /'m_O   /  */\n/*           /'.\"//~~~~\\  */\n/*           `\\/`\\`--') , */\n/*             /  `~~~  | */\n/*            |         | */\n/*            |         , */\n/*            `_'p~~~~~/  */\n/*              .  ||_|   */\n/*          `  .  _|| |   */\n/*           `, ((____|   */\n&lt;/pre&gt;&lt;/body&gt;&lt;/html&gt;" }
, { "mozilla", "&lt;html&gt;&lt;body text=\"white\" bgcolor=\"red\"&gt;&lt;p align=\"center\"&gt;And the &lt;em&gt;beste&lt;/em&gt; shall meet a &lt;em&gt;being&lt;/em&gt; and the being shall wear signs of EL and the signs shall have colour of enke. And the being shall be of &lt;em&gt;Good Nature&lt;/em&gt;. From on high the beste hath looked down upon the being and the being was &lt;em&gt;smal&lt;/em&gt; compared to it. Yet &lt;em&gt;faster&lt;/em&gt; and &lt;em&gt;leaner&lt;/em&gt; it hath been and it would come through doors closed to the beste. And there was truly great &lt;em&gt;respect&lt;/em&gt; twix the beste and the &lt;em&gt;smal being&lt;/em&gt; and they bothe have &lt;em&gt;served&lt;/em&gt; to naciouns. Yet only the &lt;em&gt;true believers&lt;/em&gt; would choose betwene them and the followers of &lt;em&gt;mammon&lt;/em&gt; stayed &lt;em&gt;blinded&lt;/em&gt; to bothe.&lt;/p&gt;&lt;p align=\"right\"&gt;from &lt;em&gt;The Book of Mozilla&lt;/em&gt; (Apocryphon of ELeasar), 12:24&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;" }
, { "fear", "&lt;html&gt;&lt;body text=\"yellow\"&gt;&lt;p&gt;I must not fear. Fear is the mind-killer. Fear is the little-death that brings total obliteration. I will face my fear. I will permit it to pass over me and through me. And when it has gone past I will turn the inner eye to see its path. Where the fear has gone there will be nothing. Only I will remain.&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;" }
, { 0, 0 }
 };
void about_protocol_handler( struct connection *conn )
{
  struct cache_entry *cached;
  if ( get_cache_entry( conn->uri ) && *(int*)(get_cache_entry( conn->uri ) + 36) == 0 )
  {
    struct about_page *page;
    if ( "bloat" )
    {
      page = about_pages;
    {
      do
      {
        if ( strcmp( (char*)conn->uri->data, (char*)page->name ) == 0 )
        {
          add_fragment( &cached[0], (long long)0, page->string );
          (unsigned int)conn->from = strlen( (char*)page->string );
          if ( cached->content_type )
            mem_free( (void*)cached->content_type );
        }
        else
        {
          page++;
        }
      }
      while ( page->name );
      cached = &cached[0];
    }
    }
    cached->content_type = stracpy( "text/html" );
  }
  conn->cached = &cached[0];
  if ( assert_failed == 0 )
    assert_failed = 0;
  else
    assert_failed = 0;
  abort_connection( &conn[0], (long long)( eax ) );
  return;
}
#if 0
#endif
