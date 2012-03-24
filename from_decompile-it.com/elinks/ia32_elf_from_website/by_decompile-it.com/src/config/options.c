#include "options.c.h"
static struct option_info config_options_info[414] = { { { 0, 0, { 0 }
, "config", 0, 9, 0, 0, { 0, 135348936, 135435836, 0, 0, 0 }
, "Configuration handling options.", "Configuration system", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "comments", 0, 1, 0, 3, { 0, 135348968, 135435857, 0, 0, 0 }
, "Amount of comments automatically written to the config file:\n0 is no comments are written\n1 is only the \"blurb\" (name+type) is written\n2 is only the description is written\n3 is full comments are written", "Comments", 0, 0, 0 }
, "config" }
, { { 0, 0, { 0 }
, "indentation", 0, 1, 0, 16, { 0, 135349172, 135435866, 0, 0, 0 }
, "Shift width of one indentation level in the configuration file. Zero means that no indentation is performed at all when saving the configuration.", "Indentation", 0, 0, 0 }
, "config" }
, { { 0, 0, { 0 }
, "saving_style", 0, 1, 0, 3, { 0, 135349320, 135435878, 0, 0, 0 }
, "Determines what happens when you tell ELinks to save options:\n0 is only values of current options are altered\n1 is values of current options are altered and missing\n     options are added at the end of the file\n2 is the configuration file is rewritten from scratch\n3 is values of current options are altered and missing\n     options CHANGED during this ELinks session are added at\n     the end of the file", "Saving style", 0, 0, 0 }
, "config" }
, { { 0, 0, { 0 }
, "i18n", 0, 0, 0, 1, { 0, 135349728, 135435891, 0, 0, 0 }
, "If set to 1, comments in the configuration file will be translated to the language used by UI. Note that if you have different language set in different terminals, the language used in the configuration file MAY be the same as on the terminal where you saved the file, but it should be generally considered unpredictable.", "Comments localization", 0, 0, 0 }
, "config" }
, { { 0, 0, { 0 }
, "saving_style_w", 0, 0, 0, 1, { 0, 135350052, 135435913, 0, 0, 0 }
, "This is internal option used when displaying a warning about obsolete config.saving_style. You shouldn't touch it.", "Saving style warnings", 0, 0, 0 }
, "config" }
, { { 0, 0, { 0 }
, "show_template", 0, 0, 0, 1, { 0, 135350168, 135435935, 0, 0, 0 }
, "Show template options in autocreated trees in the options manager and save them to the configuration file.", "Show template", 0, 0, 0 }
, "config" }
, { { 0, 0, { 0 }
, "connection", 64, 9, 0, 0, { 0, 135435949, 135435969, 0, 0, 0 }
, "Connection options.", "Connections", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "async_dns", 0, 0, 0, 1, { 0, 135350276, 135435981, 0, 0, 0 }
, "Whether to use asynchronous DNS resolving.", "Asynchronous DNS", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "max_connections", 0, 1, 1, 16, { 0, 135350320, 135435998, 0, 0, 0 }
, "Maximum number of concurrent connections.", "Maximum connections", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "max_connections_to_host", 0, 1, 1, 8, { 0, 135350364, 135436042, 0, 0, 0 }
, "Maximum number of concurrent connections to a given host.", "Maximum connections per host", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "retries", 0, 1, 0, 16, { 0, 135350424, 135436071, 0, 0, 0 }
, "Number of tries to establish a connection. Zero means try forever.", "Connection retries", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "receive_timeout", 0, 1, 1, 1800, { 0, 135436090, 135436120, 0, 0, 0 }
, "Receive timeout (in seconds).", "Receive timeout", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "try_ipv4", 0, 0, 0, 1, { 0, 135350492, 135436136, 0, 0, 0 }
, "Whether to try to connect to a host over IPv4. Note that if connection.try_ipv6 is enabled too, it takes precedence. And better do not touch this at all unless you are sure what are you doing.\n\nNote that you can also force a given protocol to be used on a per-connection basis by using a URL in the style of e.g. http4://elinks.cz/.", "Try IPv4 when connecting", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "try_ipv6", 0, 0, 0, 1, { 0, 135350828, 135436161, 0, 0, 0 }
, "Whether to try to connect to a host over IPv6.\n\nNote that you can also force a given protocol to be used on a per-connection basis by using a URL in the style of e.g. http6://elinks.cz/.", "Try IPv6 when connecting", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "unrestartable_receive_timeout", 0, 1, 1, 1800, { 0, 135351016, 135351072, 0, 0, 0 }
, "Timeout for non-restartable connections (in seconds).", "Timeout for non-restartable connections", 0, 0, 0 }
, "connection" }
, { { 0, 0, { 0 }
, "document", 64, 9, 0, 0, { 0, 135436216, 135436234, 0, 0, 0 }
, "Document options.", "Document", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "browse", 0, 9, 0, 0, { 0, 135351112, 135436243, 0, 0, 0 }
, "Document browsing options (mainly interactivity).", "Browsing", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "accesskey", 0, 9, 0, 0, { 0, 135351164, 135436252, 0, 0, 0 }
, "Options for handling of link access keys. An HTML document can use the ACCESSKEY attribute to assign an access key to an element. When an access key is pressed, the corresponding element will be given focus.", "Access keys", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "auto_follow", 0, 0, 0, 1, { 0, 135351372, 135436292, 0, 0, 0 }
, "Automatically follow a link or submit a form if appropriate accesskey is pressed - this is the standard behaviour, but it's considered dangerous.", "Automatic links following", 0, 0, 0 }
, "document.browse.accesskey" }
, { { 0, 0, { 0 }
, "display", 0, 0, 0, 1, { 0, 135351520, 135351556, 0, 0, 0 }
, "Display access key in link info.", "Display access key in link info", 0, 0, 0 }
, "document.browse.accesskey" }
, { { 0, 0, { 0 }
, "priority", 0, 1, 0, 2, { 0, 135351588, 135436344, 0, 0, 0 }
, "Priority of 'accesskey' HTML attribute:\n0 is first try all normal bindings; if it fails,\n     check accesskey\n1 is first try only frame bindings; if it fails,\n     check accesskey\n2 is first check accesskey (this can be dangerous)", "Accesskey priority", 0, 0, 0 }
, "document.browse.accesskey" }
, { { 0, 0, { 0 }
, "forms", 0, 9, 0, 0, { 0, 135351820, 135436363, 0, 0, 0 }
, "Options for handling of the forms interaction.", "Forms", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "auto_submit", 0, 0, 0, 1, { 0, 135351868, 135436381, 0, 0, 0 }
, "Automagically submit a form when enter is pressed with a text field selected.", "Submit form automatically", 0, 0, 0 }
, "document.browse.forms" }
, { { 0, 0, { 0 }
, "confirm_submit", 0, 0, 0, 1, { 0, 135351948, 135436444, 0, 0, 0 }
, "Ask for confirmation when submitting a form.", "Confirm submission", 0, 0, 0 }
, "document.browse.forms" }
, { { 0, 0, { 0 }
, "input_size", 0, 1, 3, 300, { 0, 135351996, 135436474, 0, 0, 0 }
, "Default form input size if none is specified.", "Default form input size", 0, 0, 0 }
, "document.browse.forms" }
, { { 0, 0, { 0 }
, "insert_mode", 0, 0, 0, 1, { 0, 135352044, 135436510, 0, 0, 0 }
, "The setting for this option affects how key presses are handled when one selects a text-input form-field. When enabled, one must explicitly 'enter' a selected text-field to edit it; this prevents text fields from capturing key presses, such as presses of a scroll key, when it is inadvertently selected. When disabled, key presses are always inserted into a selected text field.", "Insert mode", 0, 0, 0 }
, "document.browse.forms" }
, { { 0, 0, { 0 }
, "editor", 0, 3, 0, 1024, { "", 135352424, 135436522, 0, 0, 0 }
, "Path to the executable that ELinks should launch when the user requests to edit a textarea with an external editor.\n\nIf this is blank, ELinks will use the value of the environmental variable $EDITOR. If $EDITOR is empty or not set, ELinks will then default to \"vi\".", "External editor", 0, 0, 0 }
, "document.browse.forms" }
, { { 0, 0, { 0 }
, "images", 0, 9, 0, 0, { 0, 135352692, 135436538, 0, 0, 0 }
, "Options for handling of images.", "Images", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "display_style", 0, 1, 0, 3, { 0, 135352724, 135436559, 0, 0, 0 }
, "Display style for image tags when displayed:\n0     means always display IMG\n1     means always display filename\n2     means display alt/title attribute if possible,\n      IMG if not\n3     means display alt/title attribute if possible,\n      filename if not", "Display style for image tags", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "filename_maxlen", 0, 1, 0, 500, { 0, 135352984, 135353200, 0, 0, 0 }
, "Maximum length of image filename when displayed:\n0     means always display full filename\n1-500 means display filename with this maximal length;\n      if it is longer, the middle is substituted by\n      an asterisk", "Maximum length for image filename", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "file_tags", 0, 8, 0, 38, { "document.browse.images.filename_maxlen", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "image_link_tagging", 0, 1, 0, 2, { 0, 135353276, 135436656, 0, 0, 0 }
, "When to enclose image links:\n0 means never\n1 means never if alt or title are provided (old behavior)\n2 means always", "Image links tagging", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "image_link_prefix", 0, 3, 0, 1024, { "[", 135353392, 135436694, 0, 0, 0 }
, "Prefix string to use to mark image links.", "Image link prefix", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "image_link_suffix", 0, 3, 0, 1024, { "]", 135353436, 135436730, 0, 0, 0 }
, "Suffix string to use to mark image links.", "Image link suffix", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "label_maxlen", 0, 1, 0, 500, { 0, 135353480, 135353684, 0, 0, 0 }
, "Maximum length of image label (alt/title):\n0     means always display full label\n1-500 means display label with this maximal length;\n      if it is longer, the middle is substituted by\n      an asterisk", "Maximum length for image label", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "show_as_links", 0, 0, 0, 1, { 0, 135353716, 135353828, 0, 0, 0 }
, "Display links to images without an alt attribute. If this option is off, these images are completely invisible.", "Display links to images w/o alt", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "show_any_as_links", 0, 0, 0, 1, { 0, 135353860, 135436793, 0, 0, 0 }
, "Display links to any images in the document, regardless of them having an alt attribute or not. If this option is off, the alt attribute contents is shown, but as normal text, not selectable as a link.", "Display links to images", 0, 0, 0 }
, "document.browse.images" }
, { { 0, 0, { 0 }
, "links", 0, 9, 0, 0, { 0, 135354064, 135445924, 0, 0, 0 }
, "Options for handling of links to other documents.", "Links", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "active_link", 0, 9, 0, 0, { 0, 135436829, 135436858, 0, 0, 0 }
, "Options for the active link.", "Active link", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "colors", 0, 9, 0, 0, { 0, 135436892, 135436912, 0, 0, 0 }
, "Active link colors.", "Colors", 0, 0, 0 }
, "document.browse.links.active_link" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "#0000ff", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "document.browse.links.active_link.colors" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "document.browse.links.active_link.colors" }
, { { 0, 0, { 0 }
, "enable_color", 0, 0, 0, 1, { 0, 135354196, 135437014, 0, 0, 0 }
, "Enable use of the active link background and text color settings instead of the link colors from the document.", "Enable color", 0, 0, 0 }
, "document.browse.links.active_link" }
, { { 0, 0, { 0 }
, "bold", 0, 0, 0, 1, { 0, 135354308, 135437032, 0, 0, 0 }
, "Make the active link text bold.", "Bold", 0, 0, 0 }
, "document.browse.links.active_link" }
, { { 0, 0, { 0 }
, "invert", 0, 0, 0, 1, { 0, 135354340, 135437044, 0, 0, 0 }
, "Invert the fore- and background color so the link stands out.", "Invert colors", 0, 0, 0 }
, "document.browse.links.active_link" }
, { { 0, 0, { 0 }
, "underline", 0, 0, 0, 1, { 0, 135437058, 135437085, 0, 0, 0 }
, "Underline the active link.", "Underline", 0, 0, 0 }
, "document.browse.links.active_link" }
, { { 0, 0, { 0 }
, "color_dirs", 0, 0, 0, 1, { 0, 135354404, 135437106, 0, 0, 0 }
, "Highlight links to directories in FTP and local directory listing.", "Directory highlighting", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "numbering", 0, 0, 0, 1, { 0, 135354472, 135437129, 0, 0, 0 }
, "Display numbers next to the links.", "Number links", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "target_blank", 0, 1, 0, 3, { 0, 135354508, 135437155, 0, 0, 0 }
, "Define how to handle links having target=_blank set:\n0 means open link in current tab\n1 means open link in new tab in foreground\n2 means open link in new tab in background\n3 means open link in new window", "Handling of target=_blank", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "typeahead_wraparound", 0, 8, 0, 33, { "document.browse.search.wraparound", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "typeahead_error", 0, 8, 0, 37, { "document.browse.search.show_not_found", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "use_tabindex", 0, 0, 0, 1, { 0, 135354748, 135437231, 0, 0, 0 }
, "Whether to navigate links using tabindex specified ordering. The TABINDEX attribute in HTML elements specifies the order in which links should receive focus when using the keyboard to navigate the document.", "Use tabindex", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "missing_fragment", 0, 0, 0, 1, { 0, 135354956, 135437261, 0, 0, 0 }
, "Open a message box when document has no tag with given id.", "Missing fragment reporting", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "number_keys_select_link", 0, 1, 0, 2, { 0, 135355016, 135437312, 0, 0, 0 }
, "Number keys select links rather than specify command prefixes. This is a tristate:\n0 means never\n1 means if document.browse.links.numbering = 1\n2 means always", "Number keys select links", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "warn_malicious", 0, 0, 0, 1, { 0, 135355176, 135355336, 0, 0, 0 }
, "When following a link the user ID part of the URI is checked and if a maliciously crafted URI is detected a warning dialog will ask before following the link.", "Warn about maliciously crafted URIs", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "wraparound", 0, 0, 0, 1, { 0, 135355372, 135437352, 0, 0, 0 }
, "When pressing 'down' on the last link, jump to the first one, and vice versa.", "Wrap-around links cycling", 0, 0, 0 }
, "document.browse.links" }
, { { 0, 0, { 0 }
, "scrolling", 64, 9, 0, 0, { 0, 135437378, 135437397, 0, 0, 0 }
, "Scrolling options.", "Scrolling", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "horizontal_step", 0, 1, 1, 9999, { 0, 135355452, 135437423, 0, 0, 0 }
, "Number of columns to scroll when a key bound to scroll-left or scroll-right is pressed and no prefix was given.", "Horizontal step", 0, 0, 0 }
, "document.browse.scrolling" }
, { { 0, 0, { 0 }
, "horizontal_extended", 0, 0, 0, 1, { 0, 135355564, 135437485, 0, 0, 0 }
, "Whether to allow horizontal scrolling when the document does not extend off the screen. Useful for copy/paste operations.", "Extended horizontal scrolling", 0, 0, 0 }
, "document.browse.scrolling" }
, { { 0, 0, { 0 }
, "margin", 0, 1, 0, 20, { 0, 135355688, 135437515, 0, 0, 0 }
, "Size of the virtual margin - when you click inside of that margin, document scrolls in that direction.", "Margin", 0, 0, 0 }
, "document.browse.scrolling" }
, { { 0, 0, { 0 }
, "vertical_step", 0, 1, 1, 9999, { 0, 135355792, 135437536, 0, 0, 0 }
, "Number of lines to scroll when a key bound to scroll-up or scroll-down is pressed and no prefix was given.", "Vertical step", 0, 0, 0 }
, "document.browse.scrolling" }
, { { 0, 0, { 0 }
, "search", 0, 9, 0, 0, { 0, 135437550, 135437573, 0, 0, 0 }
, "Options for searching.", "Searching", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "case", 0, 0, 0, 1, { 0, 135355900, 135437583, 0, 0, 0 }
, "Whether the search should match the document text while maintaining case sensitivity.", "Case sensitivity", 0, 0, 0 }
, "document.browse.search" }
, { { 0, 0, { 0 }
, "show_hit_top_bottom", 0, 0, 0, 1, { 0, 135355988, 135356072, 0, 0, 0 }
, "Whether to show a dialog when the search hits the top or bottom of the document.", "Show search hit top or bottom dialogs", 0, 0, 0 }
, "document.browse.search" }
, { { 0, 0, { 0 }
, "wraparound", 0, 0, 0, 1, { 0, 135356112, 135437643, 0, 0, 0 }
, "Wrap around when searching. Currently only used for typeahead.", "Wraparound", 0, 0, 0 }
, "document.browse.search" }
, { { 0, 0, { 0 }
, "show_not_found", 0, 1, 0, 2, { 0, 135356176, 135437669, 0, 0, 0 }
, "How to inform the user when nothing is matched:\n0 means do nothing\n1 means beep the terminal\n2 means pop up message box", "Show not found", 0, 0, 0 }
, "document.browse.search" }
, { { 0, 0, { 0 }
, "typeahead", 0, 1, 0, 2, { 0, 135356296, 135437684, 0, 0, 0 }
, "Start typeahead searching when an unbound key is pressed without any modifiers. Note that most keys have default bindings, so this feature will not be useful unless you unbind them.\n\n0 disables this feature; typeahead searching will only be\n  used when you press a key bound to search-typeahead or\n  similar\n1 automatically starts typeahead searching thru link text\n2 automatically starts typeahead searching thru all document\n  text", "Typeahead searching", 0, 0, 0 }
, "document.browse.search" }
, { { 0, 0, { 0 }
, "margin_width", 0, 1, 0, 9, { 0, 135437704, 135437728, 0, 0, 0 }
, "Horizontal text margin.", "Horizontal text margin", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "refresh", 0, 0, 0, 1, { 0, 135356732, 135437751, 0, 0, 0 }
, "Automatically follow document-specified refresh directives ('&lt;meta&gt; refresh' tags). Web-page authors use these to instruct the browser to reload a document at a given interval or to load another page. Regardless of the value the refresh URI is accessible as a link.\n\nUse the document.browse.minimum_refresh_time to control the minimum number of seconds a refresh will wait.", "Document meta refresh", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "minimum_refresh_time", 0, 1, 0, 2147483647, { 0, 135357108, 135357328, 0, 0, 0 }
, "The minimum number of milliseconds that should pass before refreshing. If set to zero the document refresh time is used unchanged. It can fix going back in history for some sites that use refreshing with zero values.", "Document meta refresh minimum time", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "table_move_order", 0, 0, 0, 1, { 0, 135357364, 135437811, 0, 0, 0 }
, "Move by columns in table, instead of rows.", "Tables navigation order", 0, 0, 0 }
, "document.browse" }
, { { 0, 0, { 0 }
, "cache", 64, 9, 0, 0, { 0, 135437835, 135445067, 0, 0, 0 }
, "Cache options.", "Cache", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "cache_redirects", 0, 0, 0, 1, { 0, 135357408, 135358456, 0, 0, 0 }
, "Cache even redirects sent by server (usually thru HTTP by a 302 HTTP code and a Location header). This was the original behaviour for quite some time, but it causes problems in a situation very common to various web login systems - frequently, when accessing a certain location, they will redirect you to a login page if they don't receive an auth cookie, the login page then gives you the cookie and redirects you back to the original page, but there you have already cached redirect back to the login page! If this option has value of 0, this malfunction is fixed, but occasionally you may get superfluous (depends on how you take it ;-) requests to the server. If this option has value of 1, experienced users can still workaround it by clever combination of usage of reload, jumping around in session history and hitting ctrl+enter.\n\nNote that this option is checked when retrieving the information from cache, not when saving it to cache - thus if you enable it, even previous redirects will be taken from cache instead of asking the server.", "Cache information about redirects", 0, 0, 0 }
, "document.cache" }
, { { 0, 0, { 0 }
, "ignore_cache_control", 0, 0, 0, 1, { 0, 135358492, 135358612, 0, 0, 0 }
, "Ignore Cache-Control and Pragma server headers. When set, the document is cached even with 'Cache-Control: no-cache'.", "Ignore cache-control info from server", 0, 0, 0 }
, "document.cache" }
, { { 0, 0, { 0 }
, "format", 0, 9, 0, 0, { 0, 135437902, 135437924, 0, 0, 0 }
, "Format cache options.", "Formatted documents", 0, 0, 0 }
, "document.cache" }
, { { 0, 0, { 0 }
, "size", 0, 1, 0, 256, { 0, 135358652, 135437944, 0, 0, 0 }
, "Number of cached formatted pages. Do not get too generous here, 'formatted' means that all the accompanying structures are kept in memory so that you get the cached document immediatelly, but these structures may take a lot - 2x the size of the HTML source is probably not unusual, but it can be even more if the document consists of a lot of short lines (padded right, if possible) and links and not much other markup. So if you set this to 256 and then you don't like your ELinks eating 90M, don't come complaining to us. ;-)\n\nAlso note that the format cache itself is not counted to the memory cache size, but the HTML source of the formatted documents is always cached, even if it is over the memory cache size threshold. (Then of course no other documents can be cached.)", "Number", 0, 0, 0 }
, "document.cache.format" }
, { { 0, 0, { 0 }
, "revalidation_interval", 0, 1, -1, 86400, { 0, 135359432, 135437995, 0, 0, 0 }
, "Period in seconds that a cache entry is considered to be up-to-date. When a document is loaded and this interval has elapsed since the document was initially loaded or most recently revalidated with the server, the server will be checked in case there is a more up-to-date version of the document.\n\nA value of -1 disables automatic revalidation.", "Revalidation interval", 0, 0, 0 }
, "document.cache" }
, { { 0, 0, { 0 }
, "memory", 0, 9, 0, 0, { 0, 135438017, 135438039, 0, 0, 0 }
, "Memory cache options.", "Memory cache", 0, 0, 0 }
, "document.cache" }
, { { 0, 0, { 0 }
, "size", 0, 2, 0, 2147483647, { 0, 135438052, 135429083, 0, 0, 0 }
, "Memory cache size (in bytes).", "Size", 0, 0, 0 }
, "document.cache.memory" }
, { { 0, 0, { 0 }
, "codepage", 0, 9, 0, 0, { 0, 135438104, 135446625, 0, 0, 0 }
, "Charset options.", "Charset", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "assume", 0, 4, 0, 0, { "System", 135359780, 135438121, 0, 0, 0 }
, "Default document codepage. 'System' stands for a codepage determined by a selected locale.", "Default codepage", 0, 0, 0 }
, "document.codepage" }
, { { 0, 0, { 0 }
, "force_assumed", 0, 0, 0, 1, { 0, 135359872, 135359908, 0, 0, 0 }
, "Ignore charset info sent by server.", "Ignore charset info from server", 0, 0, 0 }
, "document.codepage" }
, { { 0, 0, { 0 }
, "colors", 0, 9, 0, 0, { 0, 135359940, 135438170, 0, 0, 0 }
, "Default document color settings.", "Default color settings", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "#bfbfbf", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "#000000", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "link", 0, 6, 0, 0, { "#0000ff", 135438225, 135438245, 0, 0, 0 }
, "Default link color.", "Link color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "vlink", 0, 6, 0, 0, { "#ffff00", 135438264, 135438292, 0, 0, 0 }
, "Default visited link color.", "Visited-link color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "image", 0, 6, 0, 0, { "darkolivegreen", 135438326, 135438352, 0, 0, 0 }
, "Default image link color.", "Image-link color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "bookmark", 0, 6, 0, 0, { "hotpink", 135359976, 135438377, 0, 0, 0 }
, "Default bookmarked link color.", "Bookmarked-link color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "dirs", 0, 6, 0, 0, { "#ffff00", 135360008, 135438399, 0, 0, 0 }
, "Default directory color.\n\nSee document.browse.links.color_dirs option.", "Directory color", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "allow_dark_on_black", 256, 8, 0, 33, { "document.colors.increase_contrast", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "increase_contrast", 0, 0, 0, 1, { 0, 135360116, 135438453, 0, 0, 0 }
, "Increase the contrast between the foreground and background colors to ensure readability. For example it disallows dark colors on a black background. Note, this is different from ensuring the contrast with the ensure_contrast option.", "Increase contrast", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "ensure_contrast", 0, 0, 0, 1, { 0, 135360352, 135438487, 0, 0, 0 }
, "Makes sure that the back- and foreground colors are never equal.", "Ensure contrast", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "use_document_colors", 0, 1, 0, 2, { 0, 135360420, 135438523, 0, 0, 0 }
, "Use colors specified in document:\n0 is use always the default settings\n1 is use document colors if available, except background\n2 is use document colors, including background. This can\n  mostly look very impressive, but some sites will appear\n  really ugly. Note, that obviously if the background is\n  not black, it will break the behaviour of transparency.", "Use document-specified colors", 0, 0, 0 }
, "document.colors" }
, { { 0, 0, { 0 }
, "download", 0, 9, 0, 0, { 0, 135360780, 135438553, 0, 0, 0 }
, "Options regarding files downloading and handling.", "Downloading", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "directory", 0, 3, 0, 1024, { "./", 135438568, 135438596, 0, 0, 0 }
, "Default download directory.", "Default download directory", 0, 0, 0 }
, "document.download" }
, { { 0, 0, { 0 }
, "set_original_time", 0, 0, 0, 1, { 0, 135360832, 135438659, 0, 0, 0 }
, "Set the timestamp of each downloaded file to the timestamp stored on the server.", "Set original time", 0, 0, 0 }
, "document.download" }
, { { 0, 0, { 0 }
, "overwrite", 0, 1, 0, 2, { 0, 135360916, 135438677, 0, 0, 0 }
, "Prevent overwriting the local files:\n0 is files will silently be overwritten\n1 is add a suffix .{number} (for example '.1') to the name\n2 is ask the user", "Prevent overwriting", 0, 0, 0 }
, "document.download" }
, { { 0, 0, { 0 }
, "notify_bell", 0, 1, 0, 2, { 0, 135361072, 135361188, 0, 0, 0 }
, "Audio notification when download is completed:\n0 is never\n1 is when background notification is active\n2 is always", "Notify download completion by bell", 0, 0, 0 }
, "document.download" }
, { { 0, 0, { 0 }
, "dump", 0, 9, 0, 0, { 0, 135438697, 135438718, 0, 0, 0 }
, "Dump output options.", "Dump output", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "codepage", 0, 4, 0, 0, { "System", 135361224, 135438730, 0, 0, 0 }
, "Codepage used in dump output. 'System' stands for a codepage determined by a selected locale.", "Codepage", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "color_mode", 0, 1, -1, 4, { 0, 135361320, 135438753, 0, 0, 0 }
, "Color mode for dumps.\n\nSome modes may have been disabled at compile time. The Setup -&gt; Terminal options dialog lists the modes supported by this executable. If you select an unsupported mode, ELinks uses 16 colors.\n\nThe color modes are:\n-1 is standard dump mode\n0 is mono mode\n1 is 16 color mode\n2 is 88 color mode\n3 is 256 color mode\n4 is true color mode", "Color mode", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "footer", 0, 3, 0, 1024, { "", 135361676, 135438764, 0, 0, 0 }
, "Footer string used in dumps. %u is substituted by URL.", "Footer", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "header", 0, 3, 0, 1024, { "", 135361732, 135438771, 0, 0, 0 }
, "Header string used in dumps. %u is substituted by URL.", "Header", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "numbering", 0, 0, 0, 1, { 0, 135361788, 135438778, 0, 0, 0 }
, "Whether to print link numbers in dump output.", "Numbering", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "references", 0, 0, 0, 1, { 0, 135361836, 135438788, 0, 0, 0 }
, "Whether to print references (URIs) of document links in dump output.", "References", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "separator", 0, 3, 0, 1024, { "\n\n", 135361908, 135438799, 0, 0, 0 }
, "String which separates two dumps.", "Separator", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "width", 0, 1, 1, 65536, { 0, 135361944, 135438809, 0, 0, 0 }
, "Width of screen in characters when dumping documents.", "Width", 0, 0, 0 }
, "document.dump" }
, { { 0, 0, { 0 }
, "history", 64, 9, 0, 0, { 0, 135438815, 135442906, 0, 0, 0 }
, "History options.", "History", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "keep_unhistory", 0, 0, 0, 1, { 0, 135362000, 135438847, 0, 0, 0 }
, "Keep unhistory (\"forward history\").", "Keep unhistory", 0, 0, 0 }
, "document.history" }
, { { 0, 0, { 0 }
, "html", 0, 9, 0, 0, { 0, 135362036, 135438879, 0, 0, 0 }
, "Options concerning the display of HTML pages.", "HTML rendering", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "display_frames", 0, 0, 0, 1, { 0, 135438894, 135438910, 0, 0, 0 }
, "Display frames.", "Display frames", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "display_tables", 0, 0, 0, 1, { 0, 135438939, 135438955, 0, 0, 0 }
, "Display tables.", "Display tables", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "display_subs", 0, 0, 0, 1, { 0, 135362084, 135438970, 0, 0, 0 }
, "Display subscripts (as [thing]).", "Display subscripts", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "display_sups", 0, 0, 0, 1, { 0, 135362120, 135438989, 0, 0, 0 }
, "Display superscripts (as ^thing).", "Display superscripts", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "link_display", 0, 1, 0, 5, { 0, 135362156, 135362316, 0, 0, 0 }
, "How to render &lt;link&gt; tags from the HTML header:\n0 is nothing\n1 is title\n2 is name in addition\n3 is hreflang in addition\n4 is type in addition\n5 is everything", "Rendering of HTML link element", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "underline_links", 0, 0, 0, 1, { 0, 135439010, 135439027, 0, 0, 0 }
, "Underline links.", "Underline links", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "wrap_nbsp", 0, 0, 0, 1, { 0, 135362348, 135439043, 0, 0, 0 }
, "If set do not honour non breaking space (the nbsp entity) but allow to wrap the text. This can help keeping the width of documents down so no horizontal scrolling is needed.", "Wrap non breaking space", 0, 0, 0 }
, "document.html" }
, { { 0, 0, { 0 }
, "plain", 0, 9, 0, 0, { 0, 135362524, 135439067, 0, 0, 0 }
, "Options concerning the display of plain text pages.", "Plain rendering", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "display_links", 0, 0, 0, 1, { 0, 135362576, 135439083, 0, 0, 0 }
, "Display URIs in the document as links.", "Display URIs", 0, 0, 0 }
, "document.plain" }
, { { 0, 0, { 0 }
, "compress_empty_lines", 0, 0, 0, 1, { 0, 135362616, 135439132, 0, 0, 0 }
, "Compress successive empty lines to only one in displayed text.", "Compress empty lines", 0, 0, 0 }
, "document.plain" }
, { { 0, 0, { 0 }
, "uri_passing", 66, 9, 0, 0, { 0, 135362680, 135439153, 0, 0, 0 }
, "Rules for passing URIs to external commands. When one rule is defined the link and tab menu will have a menu item that makes it possible to pass the the link, frame or tab URI to an external command. If several rules are defined the link and tab menu will have a submenu of items for each rule.\n\nNote, this is mostly useful for launching graphical viewers, since there is no support for releasing the terminal while the command runs. The action and submenus are also available by binding keys to the frame-external-command, the link-external-command, and the tab-external-command actions.", "URI passing", 0, 0, 0 }
, "document" }
, { { 0, 0, { 0 }
, "_template_", 0, 3, 0, 1024, { "", 135363272, 0, 0, 0, 0 }
, "A rule for passing URI to an external command. The format is:\n%c in the string means the current URL\n%% in the string means '%'\nDo _not_ put single- or double-quotes around %c.", 0, 0, 0, 0 }
, "document.uri_passing" }
, { { 0, 0, { 0 }
, "infofiles", 64, 9, 0, 0, { 0, 135363452, 135439196, 0, 0, 0 }
, "Options for information files in ~/.elinks.", "Information files", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "save_interval", 0, 1, 0, 2147483647, { 0, 135363496, 135439214, 0, 0, 0 }
, "Interval at which to trigger information files in ~/.elinks to be saved to disk if they have changed (seconds; 0 to disable)", "Save interval", 0, 0, 0 }
, "infofiles" }
, { { 0, 0, { 0 }
, "secure_save", 0, 0, 0, 1, { 0, 135363624, 135439228, 0, 0, 0 }
, "First write data to unique temporary file, then rename this file upon successfully finishing this. Note that this relates only to config files, not downloaded files. You may want to disable it if you are using some exotic permissions for concerned files. Secure file saving is automagically disabled if file is symlink.\n\nWarning: some systems (ie. OS/2, Win32) require that destination file doesn't exist when rename(3) is called, breaking atomicity, and reducing reliability of this feature.", "Use secure file saving", 0, 0, 0 }
, "infofiles" }
, { { 0, 0, { 0 }
, "secure_save_fsync", 0, 0, 0, 1, { 0, 135364120, 135364324, 0, 0, 0 }
, "When using secure file saving, call fsync(3), if the OS supports it, to force the OS immediately to write the data to permanent storage. This is optional for those who wish to avoid excessive disk I/O.", "Use fsync(3) with secure file saving", 0, 0, 0 }
, "infofiles" }
, { { 0, 0, { 0 }
, "terminal", 2, 9, 0, 0, { 0, 135439251, 135439269, 0, 0, 0 }
, "Terminal options.", "Terminals", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "_template_", 0, 9, 0, 0, { 0, 135364364, 0, 0, 0, 0 }
, "Options specific to this terminal type (according to $TERM value).", 0, 0, 0, 0 }
, "terminal" }
, { { 0, 0, { 0 }
, "type", 0, 1, 0, 4, { 0, 135364432, 135474023, 0, 0, 0 }
, "Terminal type; matters mostly only when drawing frames and dialog box borders:\n0 is dumb terminal type, ASCII art\n1 is VT100, simple but portable\n2 is Linux, you get double frames and other goodies\n3 is KOI-8\n4 is FreeBSD", "Type", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "latin1_title", 0, 0, 0, 1, { 0, 135364656, 135365100, 0, 0, 0 }
, "When updating the window title of xterm or a similar terminal emulator, encode the title in ISO-8859-1 (Latin-1), rather than in the charset used for other text in the window. Cyrillic and other characters get replaced with Latin ones. Xterm requires this unless you explicitly enable UTF-8 titles in it.\n\nIf this option does not take effect immediately, try switching to a different page so that ELinks notices it needs to update the title.", "Always encode xterm title in ISO-8859-1", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "m11_hack", 0, 0, 0, 1, { 0, 135365140, 135439312, 0, 0, 0 }
, "Switch fonts when drawing lines, enabling both local characters and lines working at the same time. ELinks uses this option only if UTF-8 I/O is disabled and the terminal type is Linux or FreeBSD.", "Switch fonts for line drawing", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "utf_8_io", 0, 0, 0, 1, { 0, 135365340, 135439351, 0, 0, 0 }
, "Enable I/O in UTF-8 for Unicode terminals. Note that currently, only the subset of UTF-8 according to terminal codepage is used. ELinks ignores this option if the terminal codepage is UTF-8.", "UTF-8 I/O", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "restrict_852", 0, 0, 0, 1, { 0, 135365532, 135439374, 0, 0, 0 }
, "Restrict the characters used when drawing lines. Makes sense only with linux terminals using the cp850/852 character sets.", "Restrict frames in cp850/852", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "block_cursor", 0, 0, 0, 1, { 0, 135365656, 135439416, 0, 0, 0 }
, "Move cursor to bottom right corner when done drawing. This is particularly useful when we have a block cursor, so that inversed text is displayed correctly.", "Block cursor", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "colors", 0, 1, 0, 4, { 0, 135365816, 135438753, 0, 0, 0 }
, "The color mode controls what colors are used and how they are output to the terminal.\n\nSome modes may have been disabled at compile time. The Setup -&gt; Terminal options dialog lists the modes supported by this executable. If you select an unsupported mode, ELinks uses 16 colors.\n\nThe color modes are:\n0 is mono mode, only 2 colors are used\n1 is 16 color mode, uses the common ANSI colors\n2 is 88 color mode, uses XTerm RGB codes\n3 is 256 color mode, uses XTerm RGB codes\n4 is true color mode, uses konsole RGB codes", "Color mode", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "transparency", 0, 0, 0, 1, { 0, 135366332, 135439442, 0, 0, 0 }
, "If we should not set the background to black. This is particularly useful when we have a terminal (typically in some windowing environment) with a background image or a transparent background - it will be visible in ELinks as well (but ELinks document color handling will still assume the background is black so if you have a bright background you might experience contrast problems). Note that this option makes sense only when colors are enabled.", "Transparency", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "underline", 0, 0, 0, 1, { 0, 135366784, 135437085, 0, 0, 0 }
, "If we should use underline or enhance the color instead.", "Underline", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "charset", 0, 4, 0, 0, { "System", 135366844, 135438730, 0, 0, 0 }
, "Codepage of charset used for displaying content on terminal. 'System' stands for a codepage determined by a selected locale.", "Codepage", 0, 0, 0 }
, "terminal._template_" }
, { { 0, 0, { 0 }
, "ui", 64, 9, 0, 0, { 0, 135439455, 135439479, 0, 0, 0 }
, "User interface options.", "User interface", 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, "colors", 0, 9, 0, 0, { 0, 135366972, 135439494, 0, 0, 0 }
, "Default user interface color settings.", "Color settings", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "color", 0, 9, 0, 0, { 0, 135367012, 135439509, 0, 0, 0 }
, "Color settings for color terminal.", "Color terminals", 0, 0, 0 }
, "ui.colors" }
, { { 0, 0, { 0 }
, "mono", 0, 9, 0, 0, { 0, 135367048, 135439535, 0, 0, 0 }
, "Color settings for non-color terminal.", "Non-color terminals", 0, 0, 0 }
, "ui.colors" }
, { { 0, 0, { 0 }
, "mainmenu", 0, 9, 0, 0, { 0, 135439555, 135439577, 0, 0, 0 }
, "Main menu bar colors.", "Main menu bar", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "mainmenu", 0, 9, 0, 0, { 0, 135439555, 135439577, 0, 0, 0 }
, "Main menu bar colors.", "Main menu bar", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135367088, 135439591, 0, 0, 0 }
, "Unselected main menu bar item colors.", "Unselected main menu bar item", 0, 0, 0 }
, "ui.colors.color.mainmenu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.mainmenu.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.mainmenu.normal" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135367088, 135439591, 0, 0, 0 }
, "Unselected main menu bar item colors.", "Unselected main menu bar item", 0, 0, 0 }
, "ui.colors.mono.mainmenu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.normal" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135367192, 135439670, 0, 0, 0 }
, "Selected main menu bar item colors.", "Selected main menu bar item", 0, 0, 0 }
, "ui.colors.color.mainmenu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "green", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.mainmenu.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.mainmenu.selected" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135367192, 135439670, 0, 0, 0 }
, "Selected main menu bar item colors.", "Selected main menu bar item", 0, 0, 0 }
, "ui.colors.mono.mainmenu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.selected" }
, { { 0, 0, { 0 }
, "hotkey", 0, 9, 0, 0, { 0, 135439698, 135439723, 0, 0, 0 }
, "Main menu hotkey colors.", "Hotkey", 0, 0, 0 }
, "ui.colors.color.mainmenu" }
, { { 0, 0, { 0 }
, "hotkey", 0, 9, 0, 0, { 0, 135439698, 135439723, 0, 0, 0 }
, "Main menu hotkey colors.", "Hotkey", 0, 0, 0 }
, "ui.colors.mono.mainmenu" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135367300, 135439730, 0, 0, 0 }
, "Main menu unselected hotkey colors.", "Unselected hotkey", 0, 0, 0 }
, "ui.colors.color.mainmenu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.mainmenu.hotkey.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.mainmenu.hotkey.normal" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135367300, 135439730, 0, 0, 0 }
, "Main menu unselected hotkey colors.", "Unselected hotkey", 0, 0, 0 }
, "ui.colors.mono.mainmenu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.hotkey.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.hotkey.normal" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135367480, 135439756, 0, 0, 0 }
, "Main menu selected hotkey colors.", "Selected hotkey", 0, 0, 0 }
, "ui.colors.color.mainmenu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.mainmenu.hotkey.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.mainmenu.hotkey.selected" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135367480, 135439756, 0, 0, 0 }
, "Main menu selected hotkey colors.", "Selected hotkey", 0, 0, 0 }
, "ui.colors.mono.mainmenu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.hotkey.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.mainmenu.hotkey.selected" }
, { { 0, 0, { 0 }
, "menu", 0, 9, 0, 0, { 0, 135439772, 135439789, 0, 0, 0 }
, "Menu bar colors.", "Menu bar", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "menu", 0, 9, 0, 0, { 0, 135439772, 135439789, 0, 0, 0 }
, "Menu bar colors.", "Menu bar", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135439798, 135439827, 0, 0, 0 }
, "Unselected menu item colors.", "Unselected menu item", 0, 0, 0 }
, "ui.colors.color.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.menu.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.menu.normal" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135439798, 135439827, 0, 0, 0 }
, "Unselected menu item colors.", "Unselected menu item", 0, 0, 0 }
, "ui.colors.mono.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.menu.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.menu.normal" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135439944, 135439971, 0, 0, 0 }
, "Selected menu item colors.", "Selected menu item", 0, 0, 0 }
, "ui.colors.color.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.menu.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.menu.selected" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135439944, 135439971, 0, 0, 0 }
, "Selected menu item colors.", "Selected menu item", 0, 0, 0 }
, "ui.colors.mono.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.menu.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.menu.selected" }
, { { 0, 0, { 0 }
, "marked", 0, 9, 0, 0, { 0, 135440049, 135440074, 0, 0, 0 }
, "Marked menu item colors.", "Marked menu item", 0, 0, 0 }
, "ui.colors.color.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "red", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.menu.marked" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.menu.marked" }
, { { 0, 0, { 0 }
, "marked", 0, 9, 0, 0, { 0, 135440049, 135440074, 0, 0, 0 }
, "Marked menu item colors.", "Marked menu item", 0, 0, 0 }
, "ui.colors.mono.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.menu.marked" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.menu.marked" }
, { { 0, 0, { 0 }
, "hotkey", 0, 9, 0, 0, { 0, 135440146, 135439723, 0, 0, 0 }
, "Menu item hotkey colors.", "Hotkey", 0, 0, 0 }
, "ui.colors.color.menu" }
, { { 0, 0, { 0 }
, "hotkey", 0, 9, 0, 0, { 0, 135440146, 135439723, 0, 0, 0 }
, "Menu item hotkey colors.", "Hotkey", 0, 0, 0 }
, "ui.colors.mono.menu" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135367600, 135439730, 0, 0, 0 }
, "Menu item unselected hotkey colors.", "Unselected hotkey", 0, 0, 0 }
, "ui.colors.color.menu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.menu.hotkey.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.menu.hotkey.normal" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135367600, 135439730, 0, 0, 0 }
, "Menu item unselected hotkey colors.", "Unselected hotkey", 0, 0, 0 }
, "ui.colors.mono.menu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.menu.hotkey.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.menu.hotkey.normal" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135367708, 135439756, 0, 0, 0 }
, "Menu item selected hotkey colors.", "Selected hotkey", 0, 0, 0 }
, "ui.colors.color.menu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.menu.hotkey.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.menu.hotkey.selected" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135367708, 135439756, 0, 0, 0 }
, "Menu item selected hotkey colors.", "Selected hotkey", 0, 0, 0 }
, "ui.colors.mono.menu.hotkey" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.menu.hotkey.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.menu.hotkey.selected" }
, { { 0, 0, { 0 }
, "frame", 0, 9, 0, 0, { 0, 135440226, 135440245, 0, 0, 0 }
, "Menu frame colors.", "Menu frame", 0, 0, 0 }
, "ui.colors.color.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.menu.frame" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.menu.frame" }
, { { 0, 0, { 0 }
, "frame", 0, 9, 0, 0, { 0, 135440226, 135440245, 0, 0, 0 }
, "Menu frame colors.", "Menu frame", 0, 0, 0 }
, "ui.colors.mono.menu" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.menu.frame" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.menu.frame" }
, { { 0, 0, { 0 }
, "dialog", 0, 9, 0, 0, { 0, 135440309, 135440324, 0, 0, 0 }
, "Dialog colors.", "Dialog", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "dialog", 0, 9, 0, 0, { 0, 135440309, 135440324, 0, 0, 0 }
, "Dialog colors.", "Dialog", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "background", 0, 8, 0, 41, { "ui.colors.color.dialog.generic.background", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "background", 0, 8, 0, 40, { "ui.colors.mono.dialog.generic.background", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "generic", 0, 9, 0, 0, { 0, 135440376, 135440399, 0, 0, 0 }
, "Generic dialog colors.", "Generic", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.generic" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.generic" }
, { { 0, 0, { 0 }
, "generic", 0, 9, 0, 0, { 0, 135440376, 135440399, 0, 0, 0 }
, "Generic dialog colors.", "Generic", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.generic" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.generic" }
, { { 0, 0, { 0 }
, "frame", 0, 9, 0, 0, { 0, 135440437, 135448178, 0, 0, 0 }
, "Dialog frame colors.", "Frame", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.frame" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.frame" }
, { { 0, 0, { 0 }
, "frame", 0, 9, 0, 0, { 0, 135440437, 135448178, 0, 0, 0 }
, "Dialog frame colors.", "Frame", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.frame" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.frame" }
, { { 0, 0, { 0 }
, "scrollbar", 0, 9, 0, 0, { 0, 135440515, 135440533, 0, 0, 0 }
, "Scrollbar colors.", "Scrollbar", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.scrollbar" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.scrollbar" }
, { { 0, 0, { 0 }
, "scrollbar", 0, 9, 0, 0, { 0, 135440515, 135440533, 0, 0, 0 }
, "Scrollbar colors.", "Scrollbar", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.scrollbar" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.scrollbar" }
, { { 0, 0, { 0 }
, "scrollbar-selected", 0, 9, 0, 0, { 0, 135440543, 135440570, 0, 0, 0 }
, "Scrollbar selected colors.", "Selected scrollbar", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.scrollbar-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.scrollbar-selected" }
, { { 0, 0, { 0 }
, "scrollbar-selected", 0, 9, 0, 0, { 0, 135440543, 135440570, 0, 0, 0 }
, "Scrollbar selected colors.", "Selected scrollbar", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.scrollbar-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.scrollbar-selected" }
, { { 0, 0, { 0 }
, "title", 0, 9, 0, 0, { 0, 135440589, 135428512, 0, 0, 0 }
, "Dialog title colors.", "Title", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.title" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.title" }
, { { 0, 0, { 0 }
, "title", 0, 9, 0, 0, { 0, 135440589, 135428512, 0, 0, 0 }
, "Dialog title colors.", "Title", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.title" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.title" }
, { { 0, 0, { 0 }
, "text", 0, 9, 0, 0, { 0, 135440667, 135440687, 0, 0, 0 }
, "Dialog text colors.", "Text", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.text" }
, { { 0, 0, { 0 }
, "text", 0, 9, 0, 0, { 0, 135440667, 135440687, 0, 0, 0 }
, "Dialog text colors.", "Text", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.text" }
, { { 0, 0, { 0 }
, "checkbox", 0, 9, 0, 0, { 0, 135440747, 135440771, 0, 0, 0 }
, "Dialog checkbox colors.", "Checkbox", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.checkbox" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.checkbox" }
, { { 0, 0, { 0 }
, "checkbox", 0, 9, 0, 0, { 0, 135440747, 135440771, 0, 0, 0 }
, "Dialog checkbox colors.", "Checkbox", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.checkbox" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.checkbox" }
, { { 0, 0, { 0 }
, "checkbox-selected", 0, 9, 0, 0, { 0, 135368160, 135440780, 0, 0, 0 }
, "Dialog selected checkbox colors.", "Selected checkbox", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "yellow", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.checkbox-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.checkbox-selected" }
, { { 0, 0, { 0 }
, "checkbox-selected", 0, 9, 0, 0, { 0, 135368160, 135440780, 0, 0, 0 }
, "Dialog selected checkbox colors.", "Selected checkbox", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.checkbox-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.checkbox-selected" }
, { { 0, 0, { 0 }
, "checkbox-label", 0, 9, 0, 0, { 0, 135440798, 135440828, 0, 0, 0 }
, "Dialog checkbox label colors.", "Checkbox label", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.checkbox-label" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.checkbox-label" }
, { { 0, 0, { 0 }
, "checkbox-label", 0, 9, 0, 0, { 0, 135440798, 135440828, 0, 0, 0 }
, "Dialog checkbox label colors.", "Checkbox label", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.checkbox-label" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.checkbox-label" }
, { { 0, 0, { 0 }
, "button", 0, 9, 0, 0, { 0, 135440843, 135440865, 0, 0, 0 }
, "Dialog button colors.", "Button", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.button" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.button" }
, { { 0, 0, { 0 }
, "button", 0, 9, 0, 0, { 0, 135440843, 135440865, 0, 0, 0 }
, "Dialog button colors.", "Button", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.button" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.button" }
, { { 0, 0, { 0 }
, "button-selected", 0, 9, 0, 0, { 0, 135368360, 135440931, 0, 0, 0 }
, "Dialog selected button colors.", "Selected button", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "yellow", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.button-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.button-selected" }
, { { 0, 0, { 0 }
, "button-selected", 0, 9, 0, 0, { 0, 135368360, 135440931, 0, 0, 0 }
, "Dialog selected button colors.", "Selected button", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.button-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.button-selected" }
, { { 0, 0, { 0 }
, "button-shortcut", 0, 9, 0, 0, { 0, 135440843, 135440947, 0, 0, 0 }
, "Dialog button colors.", "Button shortcut", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "yellow", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.button-shortcut" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.button-shortcut" }
, { { 0, 0, { 0 }
, "button-shortcut", 0, 9, 0, 0, { 0, 135440843, 135440947, 0, 0, 0 }
, "Dialog button colors.", "Button shortcut", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.button-shortcut" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.button-shortcut" }
, { { 0, 0, { 0 }
, "button-shortcut-selected", 0, 9, 0, 0, { 0, 135368360, 135440988, 0, 0, 0 }
, "Dialog selected button colors.", "Selected button shortcut", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.button-shortcut-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.button-shortcut-selected" }
, { { 0, 0, { 0 }
, "button-shortcut-selected", 0, 9, 0, 0, { 0, 135368360, 135440988, 0, 0, 0 }
, "Dialog selected button colors.", "Selected button shortcut", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.button-shortcut-selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.button-shortcut-selected" }
, { { 0, 0, { 0 }
, "field", 0, 9, 0, 0, { 0, 135441013, 135441039, 0, 0, 0 }
, "Dialog text field colors.", "Text field", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.field" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.field" }
, { { 0, 0, { 0 }
, "field", 0, 9, 0, 0, { 0, 135441013, 135441039, 0, 0, 0 }
, "Dialog text field colors.", "Text field", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.field" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.field" }
, { { 0, 0, { 0 }
, "field-text", 0, 9, 0, 0, { 0, 135441107, 135441133, 0, 0, 0 }
, "Dialog field text colors.", "Text field text", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "yellow", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.field-text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.field-text" }
, { { 0, 0, { 0 }
, "field-text", 0, 9, 0, 0, { 0, 135441107, 135441133, 0, 0, 0 }
, "Dialog field text colors.", "Text field text", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.field-text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.field-text" }
, { { 0, 0, { 0 }
, "meter", 0, 9, 0, 0, { 0, 135441149, 135441170, 0, 0, 0 }
, "Dialog meter colors.", "Meter", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "white", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.meter" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "blue", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.meter" }
, { { 0, 0, { 0 }
, "meter", 0, 9, 0, 0, { 0, 135441149, 135441170, 0, 0, 0 }
, "Dialog meter colors.", "Meter", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.meter" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.meter" }
, { { 0, 0, { 0 }
, "shadow", 0, 9, 0, 0, { 0, 135368720, 135441233, 0, 0, 0 }
, "Dialog shadow colors (see ui.shadows option).", "Shadow", 0, 0, 0 }
, "ui.colors.color.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.dialog.shadow" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.dialog.shadow" }
, { { 0, 0, { 0 }
, "shadow", 0, 9, 0, 0, { 0, 135368720, 135441233, 0, 0, 0 }
, "Dialog shadow colors (see ui.shadows option).", "Shadow", 0, 0, 0 }
, "ui.colors.mono.dialog" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.dialog.shadow" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.dialog.shadow" }
, { { 0, 0, { 0 }
, "title", 0, 9, 0, 0, { 0, 135441299, 135441317, 0, 0, 0 }
, "Title bar colors.", "Title bar", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "title", 0, 9, 0, 0, { 0, 135441299, 135441317, 0, 0, 0 }
, "Title bar colors.", "Title bar", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "title-bar", 0, 9, 0, 0, { 0, 135441327, 135441353, 0, 0, 0 }
, "Generic title bar colors.", "Generic title bar", 0, 0, 0 }
, "ui.colors.color.title" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.title.title-bar" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.title.title-bar" }
, { { 0, 0, { 0 }
, "title-bar", 0, 9, 0, 0, { 0, 135441327, 135441353, 0, 0, 0 }
, "Generic title bar colors.", "Generic title bar", 0, 0, 0 }
, "ui.colors.mono.title" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.title.title-bar" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.title.title-bar" }
, { { 0, 0, { 0 }
, "title-text", 0, 9, 0, 0, { 0, 135441414, 135441437, 0, 0, 0 }
, "Title bar text colors.", "Title bar text", 0, 0, 0 }
, "ui.colors.color.title" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.title.title-text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.title.title-text" }
, { { 0, 0, { 0 }
, "title-text", 0, 9, 0, 0, { 0, 135441414, 135441437, 0, 0, 0 }
, "Title bar text colors.", "Title bar text", 0, 0, 0 }
, "ui.colors.mono.title" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.title.title-text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.title.title-text" }
, { { 0, 0, { 0 }
, "status", 0, 9, 0, 0, { 0, 135441452, 135441471, 0, 0, 0 }
, "Status bar colors.", "Status bar", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "status", 0, 9, 0, 0, { 0, 135441452, 135441471, 0, 0, 0 }
, "Status bar colors.", "Status bar", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "status-bar", 0, 9, 0, 0, { 0, 135441482, 135441509, 0, 0, 0 }
, "Generic status bar colors.", "Generic status bar", 0, 0, 0 }
, "ui.colors.color.status" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.status.status-bar" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.status.status-bar" }
, { { 0, 0, { 0 }
, "status-bar", 0, 9, 0, 0, { 0, 135441482, 135441509, 0, 0, 0 }
, "Generic status bar colors.", "Generic status bar", 0, 0, 0 }
, "ui.colors.mono.status" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.status.status-bar" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.status.status-bar" }
, { { 0, 0, { 0 }
, "status-text", 0, 9, 0, 0, { 0, 135441573, 135441597, 0, 0, 0 }
, "Status bar text colors.", "Status bar text", 0, 0, 0 }
, "ui.colors.color.status" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.status.status-text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.status.status-text" }
, { { 0, 0, { 0 }
, "status-text", 0, 9, 0, 0, { 0, 135441573, 135441597, 0, 0, 0 }
, "Status bar text colors.", "Status bar text", 0, 0, 0 }
, "ui.colors.mono.status" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.status.status-text" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.status.status-text" }
, { { 0, 0, { 0 }
, "tabs", 0, 9, 0, 0, { 0, 135441613, 135441630, 0, 0, 0 }
, "Tabs bar colors.", "Tabs bar", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "tabs", 0, 9, 0, 0, { 0, 135441613, 135441630, 0, 0, 0 }
, "Tabs bar colors.", "Tabs bar", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "unvisited", 0, 9, 0, 0, { 0, 135369044, 135441639, 0, 0, 0 }
, "Tab colors for tabs that have not been selected since they completed loading.", "Unvisited tab", 0, 0, 0 }
, "ui.colors.color.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkblue", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.tabs.unvisited" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.tabs.unvisited" }
, { { 0, 0, { 0 }
, "unvisited", 0, 9, 0, 0, { 0, 135369044, 135441639, 0, 0, 0 }
, "Tab colors for tabs that have not been selected since they completed loading.", "Unvisited tab", 0, 0, 0 }
, "ui.colors.mono.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.tabs.unvisited" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.tabs.unvisited" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135441733, 135441756, 0, 0, 0 }
, "Unselected tab colors.", "Unselected tab", 0, 0, 0 }
, "ui.colors.color.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.tabs.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.tabs.normal" }
, { { 0, 0, { 0 }
, "normal", 0, 9, 0, 0, { 0, 135441733, 135441756, 0, 0, 0 }
, "Unselected tab colors.", "Unselected tab", 0, 0, 0 }
, "ui.colors.mono.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.tabs.normal" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.tabs.normal" }
, { { 0, 0, { 0 }
, "loading", 0, 9, 0, 0, { 0, 135369156, 135441826, 0, 0, 0 }
, "Tab colors for tabs that are loading in the background.", "Loading tab", 0, 0, 0 }
, "ui.colors.color.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "darkred", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.tabs.loading" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.tabs.loading" }
, { { 0, 0, { 0 }
, "loading", 0, 9, 0, 0, { 0, 135369156, 135441826, 0, 0, 0 }
, "Tab colors for tabs that are loading in the background.", "Loading tab", 0, 0, 0 }
, "ui.colors.mono.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.tabs.loading" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.tabs.loading" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135441895, 135441916, 0, 0, 0 }
, "Selected tab colors.", "Selected tab", 0, 0, 0 }
, "ui.colors.color.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.tabs.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "green", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.tabs.selected" }
, { { 0, 0, { 0 }
, "selected", 0, 9, 0, 0, { 0, 135441895, 135441916, 0, 0, 0 }
, "Selected tab colors.", "Selected tab", 0, 0, 0 }
, "ui.colors.mono.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.tabs.selected" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "black", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.tabs.selected" }
, { { 0, 0, { 0 }
, "separator", 0, 9, 0, 0, { 0, 135441988, 135442010, 0, 0, 0 }
, "Tab separator colors.", "Tab separator", 0, 0, 0 }
, "ui.colors.color.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "brown", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.tabs.separator" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.tabs.separator" }
, { { 0, 0, { 0 }
, "separator", 0, 9, 0, 0, { 0, 135441988, 135442010, 0, 0, 0 }
, "Tab separator colors.", "Tab separator", 0, 0, 0 }
, "ui.colors.mono.tabs" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "gray", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.tabs.separator" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.tabs.separator" }
, { { 0, 0, { 0 }
, "searched", 0, 9, 0, 0, { 0, 135369244, 135442054, 0, 0, 0 }
, "Searched string highlight colors.", "Searched strings", 0, 0, 0 }
, "ui.colors.color" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.color.searched" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "lime", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.color.searched" }
, { { 0, 0, { 0 }
, "searched", 0, 9, 0, 0, { 0, 135369244, 135442054, 0, 0, 0 }
, "Searched string highlight colors.", "Searched strings", 0, 0, 0 }
, "ui.colors.mono" }
, { { 0, 0, { 0 }
, "text", 0, 6, 0, 0, { "black", 135436970, 135436990, 0, 0, 0 }
, "Default text color.", "Text color", 0, 0, 0 }
, "ui.colors.mono.searched" }
, { { 0, 0, { 0 }
, "background", 0, 6, 0, 0, { "white", 135436927, 135436953, 0, 0, 0 }
, "Default background color.", "Background color", 0, 0, 0 }
, "ui.colors.mono.searched" }
, { { 0, 0, { 0 }
, "dialogs", 0, 9, 0, 0, { 0, 135369280, 135442125, 0, 0, 0 }
, "Dialogs-specific appearance and behaviour settings.", "Dialog settings", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "listbox_min_height", 0, 1, 1, 20, { 0, 135369332, 135369416, 0, 0, 0 }
, "Minimal height of the listbox widget (used e.g. for bookmarks or global history).", "Minimal height of listbox widget", 0, 0, 0 }
, "ui.dialogs" }
, { { 0, 0, { 0 }
, "shadows", 0, 0, 0, 1, { 0, 135369452, 135442152, 0, 0, 0 }
, "Make dialogs drop shadows (the shadows are solid, you can adjust their color by ui.colors.*.dialog.shadow). You may also want to eliminate the wide borders by adjusting setup.h.", "Drop shadows", 0, 0, 0 }
, "ui.dialogs" }
, { { 0, 0, { 0 }
, "underline_hotkeys", 0, 0, 0, 1, { 0, 135369632, 135442165, 0, 0, 0 }
, "Whether to underline hotkeys in menus to make them more visible. Requires that underlining is enabled for the terminal.", "Underline menu hotkeys", 0, 0, 0 }
, "ui.dialogs" }
, { { 0, 0, { 0 }
, "underline_button_shortcuts", 0, 0, 0, 1, { 0, 135369752, 135442215, 0, 0, 0 }
, "Whether to underline button shortcuts to make them more visible. Requires that underlining is enabled for the terminal.", "Underline button shortcuts", 0, 0, 0 }
, "ui.dialogs" }
, { { 0, 0, { 0 }
, "timer", 0, 9, 0, 0, { 0, 135369872, 135442242, 0, 0, 0 }
, "Timed action after certain interval of user inactivity. Someone can even find this useful, although you may not believe that.", "Timer options", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "enable", 0, 1, 0, 2, { 0, 135370000, 135427955, 0, 0, 0 }
, "Whether to enable the timer or not:\n0 is don't count down anything\n1 is count down, but don't show the timer\n2 is count down and show the timer near LEDs", "Enable", 0, 0, 0 }
, "ui.timer" }
, { { 0, 0, { 0 }
, "duration", 0, 1, 1, 86400, { 0, 135370156, 135442256, 0, 0, 0 }
, "Inactivity timeout in seconds. The maximum of one day should be enough for just everyone (TM).", "Duration", 0, 0, 0 }
, "ui.timer" }
, { { 0, 0, { 0 }
, "action", 0, 3, 0, 1024, { "", 135370252, 135430790, 0, 0, 0 }
, "Keybinding action to be triggered when timer reaches zero.", "Action", 0, 0, 0 }
, "ui.timer" }
, { { 0, 0, { 0 }
, "tabs", 0, 9, 0, 0, { 0, 135442265, 135442287, 0, 0, 0 }
, "Window tabs settings.", "Window tabs", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "show_bar", 0, 1, 0, 2, { 0, 135370312, 135442299, 0, 0, 0 }
, "Show tabs bar on the screen:\n0 means never\n1 means only if two or more tabs are open\n2 means always", "Display tabs bar", 0, 0, 0 }
, "ui.tabs" }
, { { 0, 0, { 0 }
, "top", 0, 0, 0, 1, { 0, 135370412, 135442324, 0, 0, 0 }
, "Whether display tab bar at top like other browsers do.", "Tab bar at top", 0, 0, 0 }
, "ui.tabs" }
, { { 0, 0, { 0 }
, "wraparound", 0, 0, 0, 1, { 0, 135370468, 135442339, 0, 0, 0 }
, "When moving right from the last tab, jump to the first one, and vice versa.", "Wrap-around tabs cycling", 0, 0, 0 }
, "ui.tabs" }
, { { 0, 0, { 0 }
, "confirm_close", 0, 0, 0, 1, { 0, 135370544, 135442364, 0, 0, 0 }
, "When closing a tab show confirmation dialog.", "Confirm tab closing", 0, 0, 0 }
, "ui.tabs" }
, { { 0, 0, { 0 }
, "language", 0, 5, 0, 0, { 0, 135370592, 135444513, 0, 0, 0 }
, "Language of user interface. 'System' means that the language will be extracted from the environment dynamically.", "Language", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "show_menu_bar_always", 0, 0, 0, 1, { 0, 135370708, 135442384, 0, 0, 0 }
, "Always show menu bar on the screen.", "Display menu bar always", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "show_status_bar", 0, 0, 0, 1, { 0, 135370744, 135442408, 0, 0, 0 }
, "Show status bar on the screen.", "Display status bar", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "show_title_bar", 0, 0, 0, 1, { 0, 135442427, 135442457, 0, 0, 0 }
, "Show title bar on the screen.", "Display title bar", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "startup_goto_dialog", 0, 0, 0, 1, { 0, 135370776, 135370896, 0, 0, 0 }
, "Pop up goto dialog in newly created tabs when there's no homepage set. This means also showing goto dialog on startup.", "Display goto dialog in new tabs", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "success_msgbox", 0, 0, 0, 1, { 0, 135370928, 135371068, 0, 0, 0 }
, "When you pressed a [ Save ] button in some manager, this option will make sure that a box confirming success of the operation will pop up.", "Show a message box when file is saved successfully", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "sessions", 64, 9, 0, 0, { 0, 135442475, 135442494, 0, 0, 0 }
, "Sessions settings.", "Sessions", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "keep_session_active", 0, 0, 0, 1, { 0, 135371120, 135442523, 0, 0, 0 }
, "Keep the session active even if the last terminal exits.", "Keep session active", 0, 0, 0 }
, "ui.sessions" }
, { { 0, 0, { 0 }
, "auto_save", 0, 0, 0, 1, { 0, 135371180, 135442543, 0, 0, 0 }
, "Automatically save the session when quitting.\n\nThis feature requires bookmark support.", "Auto save session", 0, 0, 0 }
, "ui.sessions" }
, { { 0, 0, { 0 }
, "auto_restore", 0, 0, 0, 1, { 0, 135371268, 135442561, 0, 0, 0 }
, "Automatically restore the session at start.\n\nThis feature requires bookmark support.", "Auto restore session", 0, 0, 0 }
, "ui.sessions" }
, { { 0, 0, { 0 }
, "auto_save_foldername", 0, 3, 0, 1024, { "Auto saved session", 135371356, 135371552, 0, 0, 0 }
, "Name of the bookmarks folder used for auto saving and restoring session. The name has to be unique. Any folders with the same name will be deleted.\n\nThis only makes sense with bookmark support.", "Auto save and restore session folder name", 0, 0, 0 }
, "ui.sessions" }
, { { 0, 0, { 0 }
, "homepage", 0, 3, 0, 1024, { "", 135371596, 135442622, 0, 0, 0 }
, "The URI to load either at startup time when no URI was given on the command line or when requested by the goto-url-home action. Set to \"\" if the environment variable WWW_HOME should be used as homepage URI instead.", "Homepage URI", 0, 0, 0 }
, "ui.sessions" }
, { { 0, 0, { 0 }
, "date_format", 0, 3, 0, 1024, { "%b %e %H:%M", 135371812, 135442647, 0, 0, 0 }
, "Date format to use in dialogs. See strftime(3).", "Date format", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "window_title", 0, 0, 0, 1, { 0, 135371860, 135442659, 0, 0, 0 }
, "Set the window title when running in a windowing environment in an xterm-like terminal. This way the document's title is shown on the window titlebar.", "Set window title", 0, 0, 0 }
, "ui" }
, { { 0, 0, { 0 }
, "secure_file_saving", 0, 8, 0, 21, { "infofiles.secure_save", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
static struct list_head_elinks options_root_tree = { &options_root_tree, &options_root_tree };
static struct option_elinks options_root = { 0, 0, { 0 }
, "", 0, 9, 0, 0, { &options_root_tree, 135455704, 0, 0, 0, 0 }
, "", 0, 0, 0, 0 };
struct option_elinks *config_options;
struct option_elinks *cmdline_options;
static int no_autocreate;
static struct change_hook_info change_hooks[14] = { { "config.show_template", &change_hook_stemplate }
, { "connection", &change_hook_connection }
, { "document.browse", &change_hook_html }
, { "document.browse.forms.insert_mode", &change_hook_insert_mode }
, { "document.browse.links.active_link", &change_hook_active_link }
, { "document.cache", &change_hook_cache }
, { "document.codepage", &change_hook_html }
, { "document.colors", &change_hook_html }
, { "document.html", &change_hook_html }
, { "document.plain", &change_hook_html }
, { "terminal", &change_hook_terminal }
, { "ui.language", &change_hook_language }
, { "ui", &change_hook_ui }
, { 0, 0 }
 };
struct option_elinks *get_opt_rec( struct option_elinks *tree, unsigned char *name_ )
{
  int eax;
  struct option_elinks *option_elinks;
  unsigned char *aname;
  unsigned char *name;
  &option_elinks[0] = 0;
  if ( stracpy( name_ ) )
  {
    if ( strrchr( (char*)stracpy( name_ ), 46 ) )
    {
      *(char*)(strrchr( (char*)stracpy( name_ ), 46 )) = 0;
      tree = get_opt_rec( tree, &aname[0] );
      if ( get_opt_rec( tree, &aname[0] ) && *(int*)(get_opt_rec( tree, &aname[0] ) + 20) == 9 && ( ( *(char*)(get_opt_rec( tree, &aname[0] ) + 16) & 1 ) & 255 ) == 0 )
        *(char*)(strrchr( (char*)stracpy( name_ ), 46 )) = '.';
      else
      {
        &option_elinks[0] = 0;
        mem_free( &aname[0] );
        return &option_elinks[0];
      }
    }
    &option_elinks[0] = &tree->value.tree[0].next[0];
    if ( tree->value.tree[0].next != tree->value.tree )
    {
      name[0] = ebp_32;
      do
      {
        if ( option_elinks->name && strcmp( (char*)option_elinks->name, &name[0] ) == 0 )
        {
          aname[0] = aname[0];
          mem_free( &aname[0] );
          return &option_elinks[0];
        }
        &option_elinks[0] = &option_elinks;
      }
      while ( option_elinks->next != tree->value.tree );
      aname[0] = aname[0];
    }
    if ( ( ( tree->flags & 2 ) & 255 ) && no_autocreate == 0 )
    {
      struct option_elinks *template;
      get_opt_rec( tree, "_template_" );
      if ( assert_failed == 0 )
      {
        assert_failed = template[0].next == 0;
        if ( !(_Bool)( template[0].next != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
          errline = 209;
          elinks_internal( "assertion template != NULL failed: Requested %s should be autocreated but %.*s._template_ is missing!" );
          if ( assert_failed )
            goto B26;
        }
        &option_elinks[0] = copy_option( &template[0] );
        if ( copy_option( &template[0] ) )
        {
          if ( *(int*)(copy_option( &template[0] ) + 12) )
            mem_free( *(int*)(copy_option( &template[0] ) + 12) );
          option_elinks->name = eax;
          add_opt_rec( tree, "", &option_elinks[0] );
        }
        mem_free( &aname[0] );
      }
B26:      &option_elinks[0] = 0;
      assert_failed = 0;
      mem_free( &aname[0] );
      return &option_elinks[0];
    }
    else
    {
      &option_elinks[0] = 0;
      mem_free( &aname[0] );
      return &option_elinks[0];
    }
  }
  return &option_elinks[0];
}
struct option_elinks *get_opt_rec_real( struct option_elinks *tree, unsigned char *name )
{
  struct option_elinks *opt;
  no_autocreate = 1;
  no_autocreate = 0;
  return get_opt_rec( tree, name );
}
struct option_elinks *indirect_option( struct option_elinks *alias )
{
  int eax;
  struct option_elinks *real;
  if ( alias->type == OPT_ALIAS )
  {
    get_opt_rec( config_options, (unsigned char*)alias->value.tree );
    if ( assert_failed == 0 )
    {
      assert_failed = real[0].next == 0;
      if ( !(_Bool)( real[0].next != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
        errline = 266;
        elinks_internal( "assertion real != NULL failed: %s aliased to unknown option %s!" );
        if ( assert_failed )
        {
        }
      }
      &alias[0] = &real[0];
    }
    assert_failed = 0;
  }
  &alias = &alias;
  return &alias;
}
union option_value *get_opt_( struct option_elinks *tree, unsigned char *name )
{
  &tree = &tree->value.tree[0].next[0];
  return &tree->value;
}
void add_opt_rec( struct option_elinks *tree, unsigned char *path, struct option_elinks *option_elinks )
{
  int edx;
  int abi;
  if ( assert_failed == 0 )
  {
    if ( option_elinks[0] && path[0] && tree[0] )
    {
      assert_failed = 0;
      if ( path[0] )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = tree[0].next == 0;
          if ( !(_Bool)( tree[0].next != 0 ) )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
            errline = 422;
            elinks_internal( "assertion tree != NULL failed: Missing option tree for '%s'" );
          }
        }
        if ( tree->value.tree/*union*/ )
        {
          if ( option_elinks->box_item && option_elinks->name )
          {
            strcmp( "_template_", *(int*)(0) );
            if ( 1 )
            {
              &config_options = config_options;
              option_elinks->box_item->bits_at_24/*.1_1of4*/ = ( *(char*)(option_elinks->box_item + 24) & -3 ) | ( ( *(int*)(get_opt_rec( config_options, "config.show_template" ) + 32) & 1 ) * 2 );
              if ( ( *(char*)(&tree->flags) & 2 ) & 255 )
              {
                if ( option_elinks->desc == 0 )
                {
                  struct option_elinks *template;
                  get_opt_rec( &tree[0], "_template_" );
                  if ( assert_failed == 0 )
                  {
                    assert_failed = template[0].next == 0;
                    if ( !(_Bool)( template[0].next != 0 ) )
                    {
                      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
                      errline = 433;
                      elinks_internal( "assertion template failed!" );
                    }
                  }
                  option_elinks->desc = &template->desc[36];
                  option_elinks->root = &tree[0];
                  if ( tree->box_item && option_elinks->box_item )
                  {
                    abi = 1;
                    if ( tree->box_item->next )
                      option_elinks->box_item->depth = tree->box_item->depth + 1;
                    if ( ( *(char*)(tree[0].next + 16) & 64 ) & 255 )
                    {
                      if ( tree->value.tree->next == tree->value.tree/*union*/ )
                      {
                        option_elinks = &ecx;
                        option_elinks->prev = &ecx;
                        ecx = option_elinks[0].next;
                        option_elinks->prev = &option_elinks[0];
                        if ( abi )
                        {
                          &option_elinks->box_item = *(int*)(esi + 8);
                          option_elinks->box_item->prev = &edi;
                          *(int*)(esi + 8) = option_elinks->box_item;
                          option_elinks->box_item->prev = option_elinks->box_item;
                        }
                        update_hierbox_browser( &option_browser );
                        return;
                      }
                      else
                      {
                        if ( option_elinks->type != OPT_TREE )
                        {
                        }
                        else
                        if ( *(int*)(*(int*)(*(int*)(get_opt_rec( config_options, "config.show_template" ) + 32) + 4) + 20) != 9 )
                        {
                          if ( ebp_32 != ebp_28 )
                          {
                            do
                            {
                              if ( *(char*)(ecx + 16) >= 0 && *(int*)(ecx + 52) && assert_failed == 0 )
                              {
                                assert_failed = ebp_40 == eax;
                                if ( !(_Bool)( ebp_40 != eax ) )
                                {
                                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
                                  errline = 373;
                                  elinks_internal( "assertion bpos != (struct listbox_item *) bcat failed!" );
                                }
                                else
                                {
                                }
                              }
                              if ( option_elinks->type == OPT_TREE && *(int*)(ecx + 20) != 9 )
                              {
                              }
                              else
                              {
                                if ( eax >= 1 )
                                {
                                  if ( edi != 9 )
                                  {
                                    if ( *(int*)(ecx + 20) != 9 )
                                    {
                                    }
                                  }
                                  else
                                  {
                                  }
                                  if ( option_elinks->type == option_elinks->type && '_' <= option_elinks->name[0] )
                                  {
                                    strcmp( "_template_", ebp_44 );
                                    if ( 1 )
                                    {
                                      if ( abi )
                                      {
                                        &option_elinks->box_item = *ebp_36;
                                        option_elinks->box_item->prev = ebp_36;
                                        *ebp_36 = option_elinks->box_item;
                                        option_elinks->box_item->prev = option_elinks->box_item;
                                      }
                                      option_elinks->prev = ebp_28;
                                      option_elinks = *ebp_28;
                                      *ebp_28 = option_elinks[0].next;
                                      option_elinks->prev = &option_elinks[0];
                                    }
                                  }
                                }
                              }
                              if ( abi )
                              {
                                &option_elinks->box_item = *(int*)(*(int*)(ebp_36 + 4));
                                option_elinks->box_item->prev = *(int*)(ebp_36 + 4);
                                *(int*)(*(int*)(ebp_36 + 4)) = option_elinks->box_item;
                                option_elinks->box_item->prev = option_elinks->box_item;
                              }
                              option_elinks = *(int*)(*(int*)(ebp_28 + 4));
                              option_elinks->prev = *(int*)(ebp_28 + 4);
                              *(int*)(*(int*)(ebp_28 + 4)) = option_elinks[0].next;
                              option_elinks->prev = &option_elinks[0];
                            }
                            while ( ebp_32 != ecx );
                          }
                          if ( assert_failed == 0 )
                          {
                            assert_failed = ebp_32 == ebp_28;
                            if ( !(_Bool)( ebp_32 != ebp_28 ) )
                            {
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
                              errline = 408;
                              elinks_internal( "assertion pos != (struct option *) cat failed!" );
                              if ( assert_failed )
                                continue;
                            }
                            assert_failed = ebp_40 == ebp_36;
                            if ( !(_Bool)( ebp_40 != ebp_36 ) )
                            {
                              errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
                              errline = 409;
                              elinks_internal( "assertion bpos != (struct listbox_item *) bcat failed!" );
                            }
                          }
                        }
                        if ( strcmp( (char*)option_elinks->name, &option_elinks->type ) < 1 || ( option_elinks->type != OPT_TREE && *(int*)(edi + 20) == 9 ) )
                        {
                          option_elinks = *(int*)(*(int*)(*(int*)(get_opt_rec( config_options, "config.show_template" ) + 32) + 4));
                          option_elinks->prev = *(int*)(*(int*)(get_opt_rec( config_options, "config.show_template" ) + 32) + 4);
                          option_elinks->prev = &option_elinks[0];
                          if ( abi )
                          {
                            &option_elinks->box_item = *(int*)(*(int*)(*(int*)(get_opt_rec( config_options, "config.show_template" ) + 52) + 12));
                            option_elinks->box_item->prev = *(int*)(*(int*)(get_opt_rec( config_options, "config.show_template" ) + 52) + 12);
                            *(int*)(*(int*)(esi + 12)) = option_elinks->box_item;
                            option_elinks->box_item->prev = option_elinks->box_item;
                          }
                        }
                        else
                        {
                        }
                      }
                    }
                  }
                  else
                  {
                    abi = 0;
                    if ( ( *(char*)(&tree->flags) & 64 ) & 255 )
                    {
                    }
                  }
                  option_elinks = &tree->value.tree->prev[0];
                  option_elinks->prev = &tree->value.tree->prev[0];
                  tree->value.tree->prev[0] = option_elinks[0].next;
                  option_elinks->prev = &option_elinks[0];
                  if ( abi )
                  {
                    &option_elinks->box_item = &tree->box_item->child.prev[0];
                    option_elinks->box_item->prev = &tree->box_item->child.prev[0];
                    *(int*)(*(int*)(esi + 12)) = option_elinks->box_item;
                    option_elinks->box_item->prev = option_elinks->box_item;
                  }
                }
              }
            }
          }
          if ( ( *(char*)(tree[0].next + 16) & 2 ) & 255 )
          {
          }
        }
        else
        {
          return;
        }
      }
    }
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
      errline = 419;
      elinks_internal( "assertion path && option && tree failed!" );
      path[0] = path[0];
    }
  }
  if ( path[0] )
  {
  }
}
struct option_elinks *add_opt( struct option_elinks *tree, unsigned char *path, unsigned char *capt, unsigned char *name, enum option_flags  flags, enum option_type  type, long min, long max, longptr_T value, unsigned char *desc )
{
  int eax;
  int ecx;
  int edx;
  struct option_elinks *option_elinks;
  if ( mem_calloc( 1, 56 ) )
  {
    option_elinks->name = stracpy( name );
    if ( option_elinks->name )
    {
      option_elinks->type = type;
      option_elinks->flags = flags | 32;
      option_elinks->min = min;
      option_elinks->max = max;
      option_elinks->capt = capt;
      option_elinks->desc = desc;
      switch ( type )
      {
      case OPT_STRING:
      case OPT_TREE:
        tree = &tree[0];
        if ( value )
          option_elinks->value.tree/*union*/ = &value;
          if ( ( ( tree->flags & 16 ) & 255 ) || ( ( *(char*)(option_elinks[0].next + 16) & 16 ) & 255 ) )
          {
            if ( mem_calloc( 1, 32 ) )
            {
              *(char*)(mem_calloc( 1, 32 ) + 24) |= 2;
              *(int*)(mem_calloc( 1, 32 ) + 12) = mem_calloc( 1, 32 ) + 8;
              *(int*)(mem_calloc( 1, 32 ) + 8) = mem_calloc( 1, 32 ) + 8;
              *(int*)(mem_calloc( 1, 32 ) + 28) = option_elinks[0];
              *(int*)(mem_calloc( 1, 32 ) + 16) = *(int*)(option_elinks[0].next + 20) == 9;
              option_elinks->box_item = (struct listbox_item*)mem_calloc( 1, 32 );
            }
            else
              option_elinks->box_item = 0;
          }
        break;
      case OPT_ALIAS:
        option_elinks->value.tree = &value;
        break;
      case OPT_COLOR:
        decode_color( &value, strlen( &value ), (color_T*)option_elinks->value.tree );
        type = option_elinks->type;
        if ( type != OPT_ALIAS )
        {
        }
        break;
      case OPT_BOOL:
      case OPT_INT:
      case OPT_LONG:
      case OPT_CODEPAGE:
      case OPT_COMMAND:
        option_elinks->value.tree/*union*/ = &value;
        break;
      case OPT_LANGUAGE:
        break;
      }
      add_opt_rec( &tree[0], path, mem_calloc( 1, 56 ) + 28 );
      return mem_calloc( 1, 56 ) + 28;
    }
    &option_elinks[0] = 0;
    mem_free( (void*)option_elinks[0].next );
    return mem_calloc( 1, 56 ) + 28;
  }
  else
  {
    return mem_calloc( 1, 56 ) + 28;
  }
}
void delete_option_do( struct option_elinks *option_elinks, int recursive )
{
  if ( option_elinks )
  {
    option_elinks->prev = option_elinks->prev;
    &option_elinks->prev = &option_elinks;
    option_elinks = 0;
    option_elinks->prev = 0;
  }
  if ( recursive == -1 )
  {
    errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
    errline = 596;
    elinks_error( "Orphaned option %s" );
  }
  if ( option_elinks->type != OPT_TREE )
  {
    if ( option_elinks->type == OPT_STRING )
      goto B7;
    else
    {
      if ( option_elinks->type == OPT_TREE )
      {
        if ( option_elinks->value.tree )
          mem_free( (void*)option_elinks->value.tree );
        if ( option_elinks->box_item )
          done_listbox_item( &option_browser, option_elinks->box_item );
        if ( option_elinks->flags & 32 )
        {
          if ( option_elinks->name )
            mem_free( (void*)option_elinks->name );
          mem_free( (void*)option_elinks[0].next );
          return;
        }
        else
        {
          if ( option_elinks->capt == 0 )
          {
            memset( option_elinks[0].next, 0, 56 );
          }
          return;
        }
      }
    }
  }
  else
  if ( option_elinks->value.tree == 0 || option_elinks->value.tree == option_elinks->value.tree/*union*/ )
  {
  }
  else
  {
    if ( recursive == 0 && ( ( option_elinks->flags & 2 ) & 255 ) == 0 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
      recursive = -1;
      errline = 605;
      elinks_error( "Orphaned unregistered option in subtree %s!" );
      if ( option_elinks->value.tree[0].next != option_elinks->value.tree )
      {
        do
        {
          delete_option_do(  );
        }
        while ( option_elinks->value.tree/*union*/ == option_elinks->value.tree );
      }
    }
    if ( option_elinks->type == OPT_STRING )
      goto B7;
    else
    {
    }
  }
B7:  if ( option_elinks->value.tree )
    mem_free( (void*)option_elinks->value.tree );
}
void mark_option_as_deleted( struct option_elinks *option_elinks )
{
  if ( option_elinks->type == OPT_TREE )
  {
    struct option_elinks *unmarked;
    if ( assert_failed == 0 )
    {
      assert_failed = option_elinks->value.tree == 0;
      if ( !(_Bool)( option_elinks->value.tree != 0 ) )
      {
        errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
        errline = 623;
        elinks_internal( "assertion option-&gt;value.tree failed!" );
        option_elinks = &option_elinks[0];
        do
        {
          mark_option_as_deleted( &unmarked[0] );
        }
        while ( option_elinks->value.tree == unmarked->next );
        option_elinks->box_item->bits_at_24/*.1_1of4*/ &= 253;
        option_elinks->flags |= 136;
        return;
      }
    }
    unmarked = &option_elinks->value.tree[0].next[0];
    if ( option_elinks->value.tree[0].next != option_elinks->value.tree )
    {
      option_elinks = &option_elinks[0];
      do
      {
        mark_option_as_deleted( &unmarked[0] );
      }
      while ( option_elinks->value.tree == unmarked->next );
      option_elinks->box_item->bits_at_24/*.1_1of4*/ &= 253;
      option_elinks->flags |= 136;
      return;
    }
    else
    {
      option_elinks->box_item->bits_at_24/*.1_1of4*/ &= 253;
      option_elinks->flags |= 136;
      return;
    }
  }
  else
  {
    option_elinks->box_item->bits_at_24/*.1_1of4*/ &= 253;
    option_elinks->flags |= 136;
    return;
  }
}
void delete_option( struct option_elinks *option_elinks )
{
  int eax;
}
struct option_elinks *copy_option( struct option_elinks *template )
{
  struct option_elinks *option_elinks;
  if ( mem_calloc( 1, 56 ) )
  {
    if ( template->name )
      stracpy( template->name );
    option_elinks->name = stracpy( template->name );
    option_elinks->flags = template->flags | 32;
    option_elinks->type = template->type;
    option_elinks->min = template->min;
    option_elinks->max = template->max;
    option_elinks->capt = template->capt;
    option_elinks->desc = template->desc;
    option_elinks->change_hook = template->change_hook;
    if ( mem_calloc( 1, 32 ) )
    {
      *(char*)(mem_calloc( 1, 32 ) + 24) |= 2;
      *(int*)(mem_calloc( 1, 32 ) + 12) = mem_calloc( 1, 32 ) + 8;
      *(int*)(mem_calloc( 1, 32 ) + 8) = mem_calloc( 1, 32 ) + 8;
      *(int*)(mem_calloc( 1, 32 ) + 28) = option_elinks[0];
      *(int*)(mem_calloc( 1, 32 ) + 16) = *(int*)(option_elinks[0].next + 20) == 9;
      option_elinks->box_item = (struct listbox_item*)mem_calloc( 1, 32 );
      if ( template->box_item )
        *(int*)(mem_calloc( 1, 32 ) + 28 + 68) = template->box_item->type;
    }
    else
      option_elinks->box_item = 0;
    if ( txt[ 152 + ( template->type << 3 ) ] )
    {
      eax( mem_calloc( 1, 32 ) + 28, template[0].next );
    }
    option_elinks->value = template->value;
    return &option_elinks[0];
  }
  return mem_calloc( 1, 32 ) + 28;
}
struct list_head_elinks *init_options_tree( void )
{
  struct list_head_elinks *ptr;
  if ( ptr[0].next )
  {
    ptr->prev = ptr[0].next;
    *(int*)(mem_alloc( 8 )) = ptr[0];
  }
  return &ptr[0];
}
void init_options( void )
{
  cmdline_options = add_opt( &options_root, "", "", "cmdline", 0, OPT_TREE, 0, 0, init_options_tree(  ), "" );
  register_options( cmdline_options_info, add_opt( &options_root, "", "", "cmdline", 0, OPT_TREE, 0, 0, init_options_tree(  ), "" ) );
  config_options = add_opt( &options_root, "", "", "config", OPT_SORT, OPT_TREE, 0, 0, init_options_tree(  ), "" );
  *(int*)(add_opt( &options_root, "", "", "config", OPT_SORT, OPT_TREE, 0, 0, init_options_tree(  ), "" ) + 16) |= 16;
  config_options->box_item = &option_browser.root;
  register_options( config_options_info, config_options );
  *(int*)(get_opt_rec( config_options, "terminal.linux.type" ) + 32) = 2;
  *(int*)(get_opt_rec( config_options, "terminal.linux.colors" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.linux.m11_hack" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.vt100.type" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.vt110.type" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm.type" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm.underline" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-color.type" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-color.colors" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-color.underline" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-88color.type" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-88color.colors" ) + 32) = 2;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-88color.underline" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-256color.type" ) + 32) = 1;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-256color.colors" ) + 32) = 3;
  *(int*)(get_opt_rec( config_options, "terminal.xterm-256color.underline" ) + 32) = 1;
  register_change_hooks( change_hooks );
  return;
}
void done_options( void )
{
  unregister_options( config_options_info, config_options );
  unregister_options( cmdline_options_info, cmdline_options );
  config_options->box_item = 0;
  if ( options_root_tree.next != options_root_tree.next )
  {
    do
    {
      delete_option_do(  );
    }
    while ( options_root_tree.next == options_root_tree.next );
  }
  return;
}
void register_change_hooks( struct change_hook_info *change_hooks )
{
  int eax;
  if ( change_hooks[0].name )
  {
    do
    {
      get_opt_rec( config_options, change_hooks->name );
      if ( assert_failed == 0 )
      {
        assert_failed = get_opt_rec( config_options, change_hooks->name ) == 0;
        if ( !(_Bool)( get_opt_rec( config_options, change_hooks->name ) != 0 ) )
        {
          errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
          errline = 755;
          elinks_internal( "assertion option failed!" );
          *ebp_12 = get_opt_rec( config_options, change_hooks->name );
        }
      }
    {
      struct option_elinks *option_elinks;
      *(int*)(ebp_12 + 48) = change_hooks->change_hook;
      change_hooks++;
    }
    }
    while ( change_hooks->name == 0 );
  }
  return;
}
void prepare_mustsave_flags( struct list_head_elinks *tree, int set_all )
{
  int eax;
  struct option_elinks *option_elinks = &tree[0].next[0];
  if ( tree[0].next != tree )
  {
    do
    {
      if ( set_all )
        option_elinks->flags = option_elinks->flags;
      else
      if ( !( ( (unsigned char)( option_elinks->flags ) & 136 ) & 255 ) && option_elinks->type != OPT_LANGUAGE )
      {
        option_elinks->flags &= -5;
        if ( option_elinks->type == OPT_TREE )
          tree = &tree[0];
          prepare_mustsave_flags( option_elinks->value.tree, set_all );
          option_elinks = &option_elinks;
          if ( tree->next == option_elinks->next )
          {
            tree = &tree[0];
            break;
          }
        else
        {
          option_elinks = &option_elinks;
        }
      }
      option_elinks->flags |= OPT_MUST_SAVE;
      if ( option_elinks->type == OPT_TREE )
      {
        prepare_mustsave_flags( option_elinks->value.tree, set_all );
        option_elinks = &option_elinks;
      }
      else
      {
        option_elinks = &option_elinks;
      }
    }
    while ( tree->next != option_elinks->next );
  }
  return;
}
void untouch_options( struct list_head_elinks *tree )
{
  struct option_elinks *option_elinks = &tree[0].next[0];
  if ( tree[0].next != tree )
  {
    do
    {
      option_elinks->flags &= -9;
      if ( option_elinks->type == OPT_TREE )
      {
        untouch_options( option_elinks->value.tree );
        option_elinks = &option_elinks;
        if ( tree->next == option_elinks->next )
        {
          tree = &tree[0];
          break;
        }
      }
      else
      {
        option_elinks = &option_elinks;
      }
    }
    while ( tree->next != option_elinks->next );
  }
  return;
}
int check_nonempty_tree( struct list_head_elinks *options )
{
  struct option_elinks *opt = &options->next[0];
  if ( options->next != options[0].next )
  {
    do
    {
      if ( opt->type == OPT_TREE )
      {
        if ( check_nonempty_tree( opt->value.tree ) )
          break;
      }
      else
      if ( ( opt->flags & 4 ) & 255 )
        break;
      opt = &opt;
    }
    while ( options->next != opt->next );
  }
  return 0;
}
void smart_config_string( struct string *str, int print_comment, int i18n, struct list_head_elinks *options, unsigned char *path, int depth, void (*fn)( struct string *, struct option_elinks *, unsigned char *, int , int , int , int  ) )
{
  int eax;
  int edx;
  struct option_elinks *option_elinks = &options[0].next[0];
  if ( options[0].next != options )
  {
    struct string newpath;
    int pc;
    do
    {
      if ( !( option_elinks->flags & 1 ) && option_elinks->type != OPT_ALIAS )
      {
        strcmp( "_template_", (char*)option_elinks->name );
        if ( !1 )
        {
          if ( option_elinks->type != OPT_TREE )
            option_elinks->flags = ( ( option_elinks->flags >> 2 ) ^ 1 ) & 1;
          else
          {
            *(char*)(check_nonempty_tree( option_elinks->value.tree )) = check_nonempty_tree( option_elinks->value.tree ) == 0;
          }
          if ( ( ( ( ( option_elinks->flags >> 2 ) ^ 1 ) & 1 ) & 255 ) == 0 )
          {
            if ( print_comment == 0 )
            {
              option_elinks->type = option_elinks->type;
              do_print_comment = 0;
            }
            else
            {
              if ( print_comment == 1 )
              {
                strcmp( "_template_", (char*)option_elinks->name );
                if ( !1 && ( ( option_elinks->flags & 2 ) & 255 ) )
                {
                  if ( option_elinks->type == OPT_TREE )
                    print_comment = 1;
                    fn( str, &option_elinks[0], path, depth, print_comment, 0, i18n );
                    fn( str, &option_elinks[0], path, depth, do_print_comment, 1, i18n );
                    if ( txt[ 152 + ( option_elinks->type << 3 ) ] )
                    {
                    }
                    else
                    if ( option_elinks->type == OPT_TREE && init_string( ebp_32 ) )
                    {
                      if ( print_comment == 2 )
                      {
                      }
                      else
                      if ( print_comment == 1 )
                      {
                      }
                      fn( str, &option_elinks[0], path, depth, 1, 3, i18n );
                      if ( path )
                      {
                        add_to_string( ebp_32, path );
                        add_char_to_string( ebp_32, 46 );
                      }
                      add_to_string( ebp_32, option_elinks->name );
                      smart_config_string( str, strcmp( (char*)option_elinks->name, "_template_" ) == 0, i18n, option_elinks->value.tree, ebp_32, depth + 1, fn );
                      done_string( ebp_32 );
                    }
                    fn( str, &option_elinks[0], path, depth );
                  else
                    print_comment = do_print_comment;
                }
              }
              option_elinks->type = option_elinks->type;
            }
            if ( option_elinks->type != OPT_TREE )
              print_comment = do_print_comment;
          }
        }
      }
      option_elinks = &option_elinks;
    }
    while ( option_elinks->next != options );
  }
  return;
}
int change_hook_cache( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  shrink_memory( 0 );
  return 0;
}
int change_hook_connection( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  register_check_queue(  );
  return 0;
}
int change_hook_html( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
#error unstructured control flow
}
int change_hook_insert_mode( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  update_status(  );
  return 0;
}
int change_hook_active_link( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  update_cached_document_options(  );
  return 0;
}
int change_hook_terminal( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  cls_redraw_all_terminals(  );
  return 0;
}
int change_hook_ui( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  update_status(  );
  return 0;
}
void update_visibility( struct list_head_elinks *tree, int show )
{
  struct option_elinks *opt = &tree->next[0];
  if ( tree->next != tree[0].next )
  {
    show &= 2;
    do
    {
      if ( opt->flags >= 0 )
      {
        strcmp( "_template_", (char*)opt->name );
        if ( 1 )
        {
          if ( opt->box_item )
            opt->box_item->bits_at_24/*.1_1of4*/ = (unsigned char)( ( show & 1 ) * 2 ) | (unsigned char)( *(char*)(opt->box_item + 24) & -3 );
          if ( opt->type == OPT_TREE )
            update_visibility( opt->value.tree, show | 2 );
        }
        else
        {
          if ( opt->box_item && ( show & 2 ) )
            opt->box_item->bits_at_24/*.1_1of4*/ = (unsigned char)( ( show & 1 ) * 2 ) | (unsigned char)( *(char*)(opt->box_item + 24) & -3 );
          if ( opt->type == OPT_TREE )
          {
            update_visibility( opt->value.tree, show );
            opt = &opt;
            if ( tree->next == opt->next )
            {
              break;
            }
          }
        }
      }
      opt = &opt;
    }
    while ( tree->next != opt->next );
    return;
  }
  else
  {
    return;
  }
}
void update_options_visibility( void )
{
  int eax;
  int edx;
}
void toggle_option( struct session *ses, struct option_elinks *option_elinks )
{
  long number = option_elinks->value.tree->next[0];
  if ( assert_failed == 0 )
  {
    assert_failed = option_elinks->type > 1;
    if ( option_elinks->type > 1 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
      errline = 988;
      elinks_internal( "assertion option-&gt;type == OPT_BOOL || option-&gt;type == OPT_INT failed!" );
      if ( assert_failed == 0 )
        goto B3;
    }
B3:    assert_failed = option_elinks->max == 0;
    if ( !(_Bool)( option_elinks->max != 0 ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
      errline = 989;
      elinks_internal( "assertion option-&gt;max failed!" );
    }
  }
  option_elinks->value.tree = &number;
  option_elinks = &option_elinks[0];
  ses = &ses[0];
}
int change_hook_stemplate( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  int eax;
  int edx;
  update_visibility( config_options->value.tree, changed->value.tree );
  return 0;
}
int change_hook_language( struct session *ses, struct option_elinks *current, struct option_elinks *changed )
{
  set_language( changed->value.tree );
  return 0;
}
void call_change_hooks( struct session *ses, struct option_elinks *current, struct option_elinks *option_elinks )
{
  if ( current )
  {
    do
    {
    }
    while ( ( current->change_hook == 0 || !eax( ses[0].next, current[0].next, option_elinks[0].next ) ) && current->root );
  }
  return;
}
void option_changed( struct session *ses, struct option_elinks *option_elinks )
{
  option_elinks->flags |= OPT_TOUCHED;
  call_change_hooks( ses, option_elinks, option_elinks );
  return;
}
int commit_option_values( struct option_resolver *resolvers, struct option_elinks *root, union option_value *values, int size )
{
  int edx;
  int touched;
  int i;
  if ( assert_failed == 0 )
  {
    if ( root && resolvers[0] && size && values )
      assert_failed = 0;
    else
    {
      assert_failed = 1;
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
      errline = 1061;
      elinks_internal( "assertion resolvers && root && values && size failed!" );
    }
  }
  i = 0;
  touched = 0;
  if ( size >= 1 )
  {
    struct option_elinks *option_elinks;
    do
    {
      strcmp( (char*)values[ *(int*)(ebp_36 + ( i << 3 )) ].tree, (char*)option_elinks->value.tree );
      if ( !1 )
      {
        option_elinks->flags |= OPT_TOUCHED;
        option_elinks->value = values[ *(int*)(ebp_36 + ( i << 3 )) ];
        if ( option_elinks->change_hook )
          ecx( 0, (long long)( option_elinks[0].next ), values[ *(int*)(ebp_36 + ( i << 3 )) ].tree );
        touched++;
      }
      i++;
    }
    while ( size <= i + 1 );
  }
  call_change_hooks( 0, root, 0 );
  return touched;
}
void checkout_option_values( struct option_resolver *resolvers, struct option_elinks *root, union option_value *values, int size )
{
  int i;
  if ( size >= 1 )
  {
    i = 0;
  {
    do
    {
      i++;
      values[ resolvers[ i ].id ].tree = *(int*)(get_opt_rec( &root[0], resolvers[ i ].name ) + 32);
    }
    while ( i + 1 < size );
  }
  }
  return;
}
void register_options( struct option_info *info, struct option_elinks *tree )
{
  int eax;
  int ecx;
  int edx;
  if ( info->path )
  {
    do
    {
      if ( info->option_elinks.type != OPT_ALIAS )
      {
        if ( ( ( tree->flags & 16 ) & 255 ) || ( ( info->option_elinks.flags & 16 ) & 255 ) )
        {
          if ( mem_calloc( 1, 32 ) )
          {
            *(char*)(mem_calloc( 1, 32 ) + 24) |= 2;
            *(int*)(mem_calloc( 1, 32 ) + 12) = mem_calloc( 1, 32 ) + 8;
            *(int*)(mem_calloc( 1, 32 ) + 8) = mem_calloc( 1, 32 ) + 8;
            *(int*)(mem_calloc( 1, 32 ) + 28) = info[0];
            *(int*)(mem_calloc( 1, 32 ) + 16) = info->option_elinks.type == OPT_TREE;
            info->option_elinks.box_item = (struct listbox_item*)mem_calloc( 1, 32 );
            info->option_elinks.type = info->option_elinks.type;
          }
          else
          {
            info->option_elinks.box_item = 0;
            delete_option( &info[0].option_elinks );
          }
        }
        if ( info->option_elinks.type != OPT_CODEPAGE )
        {
          if ( ccdep1 < ccdep2 )
          {
            if ( info->option_elinks.type == OPT_COLOR )
            {
              info->option_elinks.value = info->option_elinks.value;
              if ( assert_failed == 0 )
              {
                assert_failed = info->option_elinks.value.tree == 0;
                if ( !(_Bool)( info->option_elinks.value.tree != 0 ) )
                {
                  errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
                  errline = 1152;
                  elinks_internal( "assertion string failed!" );
                  *ebp_28 = info->option_elinks.value.tree;
                }
              }
              decode_color( ebp_28, eax, (color_T*)info->option_elinks.value.tree );
            }
            else
            {
              if ( info->option_elinks.type == OPT_TREE )
              {
                info->option_elinks.value.tree = init_options_tree(  );
                if ( info->option_elinks.value.tree == 0 )
                  goto B35;
              }
            }
          }
          else
        {
          unsigned char *string;
          if ( eax != 3 )
            tree = &tree[0];
          else
          {
            if ( mem_alloc( 1024 ) )
            {
              safe_strncpy( (unsigned char*)mem_alloc( 1024 ), (unsigned char*)info->option_elinks.value.tree, 1024 );
              info->option_elinks.value.tree = (struct list_head_elinks*)mem_alloc( 1024 );
            }
          }
        }
B35:          info = &info[1].option_info;
          delete_option( &info[0].option_elinks );
          if ( info[1].option_info )
            continue;
          else
            break;
        }
        else
        {
          info->option_elinks.value = info->option_elinks.value;
          if ( assert_failed == 0 )
          {
            assert_failed = info->option_elinks.value.tree == 0;
            if ( !(_Bool)( info->option_elinks.value.tree != 0 ) )
            {
              errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/options.c";
              errline = 1158;
              elinks_internal( "assertion string failed!" );
              *ebp_28 = info->option_elinks.value.tree;
            }
          }
          info->option_elinks.value.tree = &eax[0];
        }
      }
      add_opt_rec( &tree[0], info->path, &info[0].option_elinks );
    }
    while ( info[1].option_info );
    return;
  }
  else
  {
    return;
  }
}
void unregister_options( struct option_info *info, struct option_elinks *tree )
{
  int eax;
  int ecx;
  int i;
  if ( info->path )
  {
    &info->option_elinks = &info[0].option_elinks;
    i = 0;
    while ( i = i + 1, info[1].option_info )
    {
      i = i;
    }
    if ( i != -1 )
    {
      do
      {
        i--;
        delete_option_do( (int)( info - 60 ), 0 );
      }
      while ( i == -1 );
    }
  }
  return;
}
#if 0
#endif
