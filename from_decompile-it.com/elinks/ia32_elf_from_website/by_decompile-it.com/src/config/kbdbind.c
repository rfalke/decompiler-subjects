#include "kbdbind.c.h"
static struct list_head_elinks keymaps[3];
static struct keymap keymap_table[3] = { { "main", 0, "Main mapping" }
, { "edit", 1, "Edit mapping" }
, { "menu", 2, "Menu mapping" }
 };
static struct named_key key_table[28] = { { "Enter", -256 }
, { "Space", 32 }
, { "Backspace", -257 }
, { "Tab", -258 }
, { "Escape", -259 }
, { "Left", -260 }
, { "Right", -261 }
, { "Up", -262 }
, { "Down", -263 }
, { "Insert", -264 }
, { "Delete", -265 }
, { "Home", -266 }
, { "End", -267 }
, { "PageUp", -268 }
, { "PageDown", -269 }
, { "F1", -288 }
, { "F2", -289 }
, { "F3", -290 }
, { "F4", -291 }
, { "F5", -292 }
, { "F6", -293 }
, { "F7", -294 }
, { "F8", -295 }
, { "F9", -296 }
, { "F10", -297 }
, { "F11", -298 }
, { "F12", -299 }
, { 0, -1 }
 };
static struct action main_action_table[120] = { { "none", 0, 0, "Do nothing", 0 }
, { " *scripting-function*", 1, 0, 0, 0 }
, { "abort-connection", 2, 0, "Abort connection", 0 }
, { "add-bookmark", 3, 0, "Add a new bookmark", 65536 }
, { "add-bookmark-link", 4, 0, "Add a new bookmark using current link", 1638400 }
, { "add-bookmark-tabs", 5, 0, "Bookmark all open tabs", 65536 }
, { "auth-manager", 6, 0, "Open authentication manager", 0 }
, { "backspace-prefix", 7, 0, "Backspace the last entered digit of the current prefix", 131072 }
, { "bookmark-manager", 8, 0, "Open bookmark manager", 0 }
, { "cache-manager", 9, 0, "Open cache manager", 0 }
, { "cache-minimize", 10, 0, "Free unused cache entries", 0 }
, { "cookie-manager", 11, 0, "Open cookie manager", 0 }
, { "cookies-load", 12, 0, "Reload cookies file", 65536 }
, { "copy-clipboard", 13, 0, "Copy text to clipboard", 1966080 }
, { "document-info", 14, 0, "Show information about the current page", 524288 }
, { "download-manager", 15, 0, "Open download manager", 0 }
, { "exmode", 16, 0, "Enter ex-mode (command line)", 0 }
, { "file-menu", 17, 0, "Open the File menu", 0 }
, { "find-next", 18, 0, "Find the next occurrence of the current search text", 393216 }
, { "find-next-back", 19, 0, "Find the previous occurrence of the current search text", 393216 }
, { "forget-credentials", 20, 0, "Forget authentication credentials", 0 }
, { "formhist-manager", 21, 0, "Open form history manager", 0 }
, { "frame-external-command", 22, 0, "Pass URI of current frame to external command", 458752 }
, { "frame-maximize", 23, 0, "Maximize the current frame", 393216 }
, { "frame-next", 24, 0, "Move to the next frame", 131072 }
, { "frame-prev", 25, 0, "Move to the previous frame", 131072 }
, { "goto-url", 26, 0, "Open \"Go to URL\" dialog box", 0 }
, { "goto-url-current", 27, 0, "Open \"Go to URL\" dialog box containing the current URL", 0 }
, { "goto-url-current-link", 28, 0, "Open \"Go to URL\" dialog box containing the current link URL", 1703936 }
, { "goto-url-home", 29, 0, "Go to the homepage", 0 }
, { "header-info", 30, 0, "Show information about the current page protocol headers", 0 }
, { "history-manager", 31, 0, "Open history manager", 0 }
, { "history-move-back", 32, 0, "Return to the previous document in history", 0 }
, { "history-move-forward", 33, 0, "Go forward in history", 0 }
, { "jump-to-link", 34, 0, "Jump to link", 655360 }
, { "keybinding-manager", 35, 0, "Open keybinding manager", 65536 }
, { "kill-backgrounded-connections", 36, 0, "Kill all backgrounded connections", 0 }
, { "link-download", 37, 0, "Download the current link", 2031616 }
, { "link-download-image", 38, 0, "Download the current image", 2031616 }
, { "link-download-resume", 39, 0, "Attempt to resume download of the current link", 2031616 }
, { "link-external-command", 40, 0, "Pass URI of current link to external command", 2031616 }
, { "link-follow", 41, 0, "Follow the current link", 1966080 }
, { "link-follow-reload", 42, 0, "Follow the current link, forcing reload of the target", 1966080 }
, { "link-menu", 43, 0, "Open the link context menu", 1703936 }
, { "link-form-menu", 44, 0, "Open the form fields menu", 3801088 }
, { "lua-console", 45, 0, "Open a Lua console", 65536 }
, { "mark-goto", 46, 0, "Go at a specified mark", 131072 }
, { "mark-set", 47, 0, "Set a mark", 131072 }
, { "menu", 48, 0, "Activate the menu", 0 }
, { "move-cursor-down", 49, 0, "Move cursor down", 131072 }
, { "move-cursor-left", 50, 0, "Move cursor left", 131072 }
, { "move-cursor-line-start", 51, 0, "Move cursor to the start of the line", 131072 }
, { "move-cursor-right", 52, 0, "Move cursor right", 131072 }
, { "move-cursor-up", 53, 0, "Move cursor up", 131072 }
, { "move-document-end", 54, 0, "Move to the end of the document", 131072 }
, { "move-document-start", 55, 0, "Move to the start of the document", 131072 }
, { "move-link-down", 56, 0, "Move one link down", 131072 }
, { "move-link-down-line", 57, 0, "Move to the next line with a link", 131072 }
, { "move-link-left", 58, 0, "Move one link left", 131072 }
, { "move-link-left-line", 59, 0, "Move one link left or to the previous link", 131072 }
, { "move-link-next", 60, 0, "Move to the next link", 131072 }
, { "move-link-prev", 61, 0, "Move to the previous link", 131072 }
, { "move-link-right", 62, 0, "Move one link right", 131072 }
, { "move-link-right-line", 63, 0, "Move one link right or to the next link", 131072 }
, { "move-link-up", 64, 0, "Move one link up", 131072 }
, { "move-link-up-line", 65, 0, "Move to the previous line with a link", 131072 }
, { "move-page-down", 66, 0, "Move downwards by a page", 131072 }
, { "move-page-up", 67, 0, "Move upwards by a page", 131072 }
, { "open-link-in-new-tab", 68, 0, "Open the current link in a new tab", 1703936 }
, { "open-link-in-new-tab-in-background", 69, 0, "Open the current link in a new tab in the background", 1703936 }
, { "open-link-in-new-window", 70, 0, "Open the current link in a new window", 1769472 }
, { "open-new-tab", 71, 0, "Open a new tab", 0 }
, { "open-new-tab-in-background", 72, 0, "Open a new tab in the background", 0 }
, { "open-new-window", 73, 0, "Open a new window", 65536 }
, { "open-os-shell", 74, 0, "Open an OS shell", 65536 }
, { "options-manager", 75, 0, "Open options manager", 65536 }
, { "quit", 76, 0, "Open a quit confirmation dialog box", 0 }
, { "really-quit", 77, 0, "Quit without confirmation", 0 }
, { "redraw", 78, 0, "Redraw the terminal", 131072 }
, { "reload", 79, 0, "Reload the current page", 0 }
, { "rerender", 80, 0, "Re-render the current page", 0 }
, { "reset-form", 81, 0, "Reset form items to their initial values", 393216 }
, { "resource-info", 82, 0, "Show information about the currently used resources", 0 }
, { "save-as", 83, 0, "Save the current document in source form", 327680 }
, { "save-formatted", 84, 0, "Save the current document in formatted form", 458752 }
, { "save-options", 85, 0, "Save options", 65536 }
, { "save-url-as", 86, 0, "Save URL as", 65536 }
, { "scroll-down", 87, 0, "Scroll down", 131072 }
, { "scroll-left", 88, 0, "Scroll left", 131072 }
, { "scroll-right", 89, 0, "Scroll right", 131072 }
, { "scroll-up", 90, 0, "Scroll up", 131072 }
, { "search", 91, 0, "Search for a text pattern", 393216 }
, { "search-back", 92, 0, "Search backwards for a text pattern", 393216 }
, { "search-typeahead", 93, 0, "Search link text by typing ahead", 393216 }
, { "search-typeahead-link", 94, 0, "Search link text by typing ahead", 393216 }
, { "search-typeahead-text", 95, 0, "Search document text by typing ahead", 393216 }
, { "search-typeahead-text-back", 96, 0, "Search document text backwards by typing ahead", 393216 }
, { "show-term-options", 97, 0, "Show terminal options dialog", 0 }
, { "submit-form", 98, 0, "Submit form", 393216 }
, { "submit-form-reload", 99, 0, "Submit form and reload", 393216 }
, { "tab-close", 100, 0, "Close tab", 0 }
, { "tab-close-all-but-current", 101, 0, "Close all tabs but the current one", 0 }
, { "tab-external-command", 102, 0, "Pass URI of current tab to external command", 327680 }
, { "tab-menu", 103, 0, "Open the tab menu", 0 }
, { "tab-move-left", 104, 0, "Move the current tab to the left", 0 }
, { "tab-move-right", 105, 0, "Move the current tab to the right", 0 }
, { "tab-next", 106, 0, "Next tab", 0 }
, { "tab-prev", 107, 0, "Previous tab", 0 }
, { "terminal-resize", 108, 0, "Open the terminal resize dialog", 0 }
, { "toggle-css", 109, 0, "Toggle rendering of page using CSS", 0 }
, { "toggle-display-images", 110, 0, "Toggle displaying of links to images", 0 }
, { "toggle-display-tables", 111, 0, "Toggle rendering of tables", 0 }
, { "toggle-document-colors", 112, 0, "Toggle usage of document specific colors", 0 }
, { "toggle-html-plain", 113, 0, "Toggle rendering page as HTML / plain text", 0 }
, { "toggle-mouse", 114, 0, "Toggle mouse handling", 0 }
, { "toggle-numbered-links", 115, 0, "Toggle displaying of links numbers", 0 }
, { "toggle-plain-compress-empty-lines", 116, 0, "Toggle plain renderer compression of empty lines", 0 }
, { "toggle-wrap-text", 117, 0, "Toggle wrapping of text", 0 }
, { "view-image", 118, 0, "View the current image", 1966080 }
, { 0, 0, 0, 0, 0 }
 };
static struct action edit_action_table[31] = { { "none", 0, 1, "Do nothing", 0 }
, { " *scripting-function*", 1, 1, 0, 0 }
, { "auto-complete", 2, 1, "Attempt to auto-complete the input", 0 }
, { "auto-complete-file", 3, 1, "Attempt to auto-complete a local file", 65536 }
, { "auto-complete-unambiguous", 4, 1, "Attempt to unambiguously auto-complete the input", 0 }
, { "backspace", 5, 1, "Delete character in front of the cursor", 0 }
, { "beginning-of-buffer", 6, 1, "Go to the first line of the buffer", 0 }
, { "cancel", 7, 1, "Cancel current state", 0 }
, { "copy-clipboard", 8, 1, "Copy text to clipboard", 0 }
, { "cut-clipboard", 9, 1, "Cut text to clipboard", 0 }
, { "delete", 10, 1, "Delete character under cursor", 0 }
, { "down", 11, 1, "Move cursor downwards", 0 }
, { "end", 12, 1, "Go to the end of the page/line", 0 }
, { "end-of-buffer", 13, 1, "Go to the last line of the buffer", 0 }
, { "enter", 14, 1, "Follow the current link", 0 }
, { "home", 15, 1, "Go to the start of the page/line", 0 }
, { "kill-to-bol", 16, 1, "Delete to beginning of line", 0 }
, { "kill-to-eol", 17, 1, "Delete to end of line", 0 }
, { "kill-word-back", 18, 1, "Delete backwards to start of word", 0 }
, { "left", 19, 1, "Move the cursor left", 0 }
, { "move-backward-word", 20, 1, "Move cursor before current word", 0 }
, { "move-forward-word", 21, 1, "Move cursor after current word", 0 }
, { "next-item", 22, 1, "Move to the next item", 0 }
, { "open-external", 23, 1, "Open in external editor", 65536 }
, { "paste-clipboard", 24, 1, "Paste text from the clipboard", 0 }
, { "previous-item", 25, 1, "Move to the previous item", 0 }
, { "redraw", 26, 1, "Redraw the terminal", 0 }
, { "right", 27, 1, "Move the cursor right", 0 }
, { "search-toggle-regex", 28, 1, "Toggle regex matching (type-ahead searching)", 0 }
, { "up", 29, 1, "Move cursor upwards", 0 }
, { 0, 0, 0, 0, 0 }
 };
static struct action menu_action_table[22] = { { "none", 0, 2, "Do nothing", 0 }
, { " *scripting-function*", 1, 2, 0, 0 }
, { "cancel", 2, 2, "Cancel current state", 0 }
, { "delete", 3, 2, "Delete character under cursor", 0 }
, { "down", 4, 2, "Move cursor downwards", 0 }
, { "end", 5, 2, "Go to the end of the page/line", 0 }
, { "enter", 6, 2, "Follow the current link", 0 }
, { "expand", 7, 2, "Expand item", 0 }
, { "home", 8, 2, "Go to the start of the page/line", 0 }
, { "left", 9, 2, "Move the cursor left", 0 }
, { "mark-item", 10, 2, "Mark item", 0 }
, { "next-item", 11, 2, "Move to the next item", 0 }
, { "page-down", 12, 2, "Move downwards by a page", 0 }
, { "page-up", 13, 2, "Move upwards by a page", 0 }
, { "previous-item", 14, 2, "Move to the previous item", 0 }
, { "redraw", 15, 2, "Redraw the terminal", 0 }
, { "right", 16, 2, "Move the cursor right", 0 }
, { "search", 17, 2, "Search for a text pattern", 0 }
, { "select", 18, 2, "Select current highlighted item", 0 }
, { "unexpand", 19, 2, "Collapse item", 0 }
, { "up", 20, 2, "Move cursor upwards", 0 }
, { 0, 0, 0, 0, 0 }
 };
static struct action_list action_table[3] = { { main_action_table, 120 }
, { edit_action_table, 31 }
, { menu_action_table, 22 }
 };
static struct default_kb default_main_keymap[86] = { { { 32, 0 }
, 66 }
, { { 35, 0 }
, 93 }
, { { 37, 0 }
, 112 }
, { { 42, 0 }
, 110 }
, { { 44, 0 }
, 45 }
, { { 46, 0 }
, 115 }
, { { 47, 0 }
, 91 }
, { { 58, 0 }
, 16 }
, { { 60, 0 }
, 107 }
, { { 60, 4 }
, 104 }
, { { 61, 0 }
, 14 }
, { { 62, 0 }
, 106 }
, { { 62, 4 }
, 105 }
, { { 63, 0 }
, 92 }
, { { 65, 0 }
, 4 }
, { { 65, 2 }
, 55 }
, { { 66, 2 }
, 67 }
, { { 67, 0 }
, 9 }
, { { 68, 0 }
, 15 }
, { { 69, 0 }
, 28 }
, { { 69, 2 }
, 54 }
, { { 70, 0 }
, 21 }
, { { 70, 2 }
, 66 }
, { { 71, 0 }
, 27 }
, { { 72, 0 }
, 29 }
, { { 75, 0 }
, 11 }
, { { 75, 2 }
, 12 }
, { { 76, 0 }
, 43 }
, { { 76, 2 }
, 78 }
, { { 78, 0 }
, 19 }
, { { 78, 2 }
, 87 }
, { { 80, 2 }
, 90 }
, { { 81, 0 }
, 77 }
, { { 82, 2 }
, 79 }
, { { 84, 0 }
, 69 }
, { { 87, 0 }
, 117 }
, { { 91, 0 }
, 88 }
, { { 39, 0 }
, 46 }
, { { 92, 0 }
, 113 }
, { { 93, 0 }
, 89 }
, { { 97, 0 }
, 3 }
, { { 98, 0 }
, 67 }
, { { 99, 0 }
, 100 }
, { { 100, 0 }
, 37 }
, { { 101, 0 }
, 103 }
, { { 102, 0 }
, 23 }
, { { 103, 0 }
, 26 }
, { { 104, 0 }
, 31 }
, { { 107, 0 }
, 35 }
, { { 108, 0 }
, 34 }
, { { 109, 0 }
, 47 }
, { { 110, 0 }
, 18 }
, { { 111, 0 }
, 75 }
, { { 113, 0 }
, 76 }
, { { 114, 0 }
, 39 }
, { { 115, 0 }
, 8 }
, { { 116, 0 }
, 71 }
, { { 117, 0 }
, 33 }
, { { 118, 0 }
, 118 }
, { { 120, 0 }
, 42 }
, { { 122, 0 }
, 2 }
, { { 123, 0 }
, 88 }
, { { 124, 0 }
, 30 }
, { { 125, 0 }
, 89 }
, { { -257, 0 }
, 7 }
, { { -265, 0 }
, 87 }
, { { -263, 0 }
, 60 }
, { { -267, 0 }
, 54 }
, { { -256, 0 }
, 41 }
, { { -256, 2 }
, 42 }
, { { -259, 0 }
, 48 }
, { { -297, 0 }
, 17 }
, { { -296, 0 }
, 48 }
, { { -266, 0 }
, 55 }
, { { -264, 0 }
, 90 }
, { { -264, 2 }
, 13 }
, { { -260, 0 }
, 32 }
, { { -269, 0 }
, 66 }
, { { -268, 0 }
, 67 }
, { { -261, 0 }
, 41 }
, { { -261, 2 }
, 42 }
, { { -258, 0 }
, 24 }
, { { -258, 4 }
, 25 }
, { { -258, 1 }
, 25 }
, { { -262, 0 }
, 61 }
, { { 0, 0 }
, 0 }
 };
static struct default_kb default_edit_keymap[35] = { { { 60, 4 }
, 6 }
, { { 62, 4 }
, 13 }
, { { 65, 2 }
, 15 }
, { { 98, 4 }
, 20 }
, { { 68, 2 }
, 10 }
, { { 69, 2 }
, 12 }
, { { 102, 4 }
, 21 }
, { { 72, 2 }
, 5 }
, { { 75, 2 }
, 17 }
, { { 76, 2 }
, 26 }
, { { 114, 4 }
, 28 }
, { { 70, 2 }
, 3 }
, { { 82, 2 }
, 4 }
, { { 84, 2 }
, 23 }
, { { 85, 2 }
, 16 }
, { { 86, 2 }
, 24 }
, { { 87, 2 }
, 2 }
, { { 88, 2 }
, 9 }
, { { -257, 4 }
, 18 }
, { { -257, 0 }
, 5 }
, { { -265, 0 }
, 10 }
, { { -263, 0 }
, 11 }
, { { -267, 0 }
, 12 }
, { { -256, 0 }
, 14 }
, { { -259, 0 }
, 7 }
, { { -291, 0 }
, 23 }
, { { -266, 0 }
, 15 }
, { { -264, 2 }
, 8 }
, { { -260, 0 }
, 19 }
, { { -261, 0 }
, 27 }
, { { -258, 0 }
, 22 }
, { { -258, 4 }
, 25 }
, { { -258, 1 }
, 25 }
, { { -262, 0 }
, 29 }
, { { 0, 0 }
, 0 }
 };
static struct default_kb default_menu_keymap[34] = { { { 32, 0 }
, 18 }
, { { 42, 0 }
, 10 }
, { { 43, 0 }
, 7 }
, { { 45, 0 }
, 19 }
, { { 47, 0 }
, 17 }
, { { 61, 0 }
, 7 }
, { { 65, 2 }
, 8 }
, { { 66, 2 }
, 13 }
, { { 69, 2 }
, 5 }
, { { 70, 2 }
, 12 }
, { { 76, 2 }
, 15 }
, { { 78, 2 }
, 4 }
, { { 80, 2 }
, 20 }
, { { 86, 4 }
, 13 }
, { { 86, 2 }
, 12 }
, { { 91, 0 }
, 7 }
, { { 93, 0 }
, 19 }
, { { 95, 0 }
, 19 }
, { { -265, 0 }
, 3 }
, { { -263, 0 }
, 4 }
, { { -267, 0 }
, 5 }
, { { -256, 0 }
, 6 }
, { { -259, 0 }
, 2 }
, { { -266, 0 }
, 8 }
, { { -264, 0 }
, 10 }
, { { -260, 0 }
, 9 }
, { { -269, 0 }
, 12 }
, { { -268, 0 }
, 13 }
, { { -261, 0 }
, 16 }
, { { -258, 0 }
, 11 }
, { { -258, 4 }
, 14 }
, { { -258, 1 }
, 14 }
, { { -262, 0 }
, 20 }
, { { 0, 0 }
, 0 }
 };
static struct default_kb *default_keybindings[3] = { default_main_keymap, default_edit_keymap, default_menu_keymap };
static struct action_alias main_action_aliases[17] = { { "back", 32 }
, { "down", 60 }
, { "download", 37 }
, { "download-image", 38 }
, { "end", 54 }
, { "enter", 41 }
, { "enter-reload", 42 }
, { "home", 55 }
, { "next-frame", 24 }
, { "page-down", 66 }
, { "page-up", 67 }
, { "previous-frame", 25 }
, { "resume-download", 39 }
, { "unback", 33 }
, { "up", 61 }
, { "zoom-frame", 23 }
, { 0, 0 }
 };
static struct action_alias edit_action_aliases[2] = { { "edit", 23 }
, { 0, 0 }
 };
static struct action_alias *action_aliases[3] = { main_action_aliases, edit_action_aliases, 0 };
struct module kbdbind_module = { "Keyboard Bindings", 0, 0, 0, 0, &init_keymaps, &free_keymaps };
struct keybinding *add_keybinding( enum keymap_id  keymap_id, action_id_T action_id, struct term_event_keyboard *kbd, int event )
{
  int ecx;
  int edx;
  struct keybinding *keybinding;
  struct listbox_item *root;
  if ( keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
  {
    kbd->key = kbd->key;
    do
    {
      if ( kbd->key == keymaps[ keymap_id ].next[5] && kbd->modifier == keymaps[ keymap_id ].next[6] )
      {
        if ( ( (unsigned char)( *(int*)(keymaps[ keymap_id ].next + 32) ) & 4 ) & 255 )
          keymaps[ keymap_id ].next[8] &= -5;
        free_keybinding( &keymaps[ keymap_id ].next[0] );
        if ( mem_calloc( 1, 40 ) )
        {
          keybinding->keymap_id = keymap_id;
          keybinding->action_id = action_id;
          keybinding->kbd.key = kbd->key;
          keybinding->kbd.modifier = kbd->modifier;
          keybinding->flags = edi << 2;
          keybinding->event = event;
          if ( default_keybindings[ keybinding->keymap_id ][0].kbd.key )
          {
            do
            {
              strcmp( default_keybindings[ keybinding->keymap_id ] + 12, ebp_36 );
              if ( 1 )
              {
                keybinding->flags |= KBDB_DEFAULT_BINDING;
                break;
              }
              else
            }
            while ( default_keybindings[ keybinding->keymap_id ][2].kbd.key == 0 );
          }
          keybinding = &keymaps[ keymap_id ].next[0];
          keybinding->prev = &keymaps[ keymap_id ].next[0];
          keymaps[ keymap_id ].next = (void*)keybinding[0].next;
          keybinding->prev = &keybinding[0];
          if ( action_id && root[0] )
          {
            keybinding->box_item = add_listbox_item( &keybinding_browser, &root[0], BI_LEAF, (void*)keybinding[0].next, 1 );
            break;
          }
          break;
        }
      }
      else
      {
      }
    }
    while ( keymaps[ keymap_id ].next[0] != keymaps[ keymap_id ].next );
  }
}
void free_keybinding( struct keybinding *keybinding )
{
  if ( keybinding->box_item )
  {
    done_listbox_item( &keybinding_browser, keybinding->box_item );
    keybinding->box_item = 0;
  }
  if ( ( (unsigned char)( keybinding->flags ) & 4 ) & 255 )
  {
    keybinding->flags &= -9;
    keybinding->action_id = 0;
    return;
  }
  keybinding->prev = keybinding->prev;
  &keybinding->prev = &keybinding;
  keybinding = &keybinding;
}
int keybinding_exists( enum keymap_id  keymap_id, struct term_event_keyboard *kbd, action_id_T *action_id )
{
  int ecx;
  struct keybinding *keybinding = &keymaps[ keymap_id ]->next[0];
  if ( keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
  {
    kbd->key = kbd->key;
    do
    {
      if ( keybinding->kbd.key == kbd->key && keybinding->kbd.modifier == kbd->modifier )
      {
        if ( action_id[0] )
        {
          action_id[0] = keybinding->action_id;
          break;
        }
      }
      else
      {
        keybinding = &keybinding;
      }
    }
    while ( keybinding->next != keymaps[ keymap_id ].next );
  }
  return 0;
}
action_id_T kbd_action( enum keymap_id  keymap_id, struct term_event *ev, int *event )
{
  int eax;
  int ecx;
  int edx;
  struct keybinding *keybinding;
  if ( ev[0].ev == 1 && keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
  {
    do
    {
      if ( keybinding->kbd.key == ev->info.mouse.x && keybinding->kbd.modifier == ev->info.mouse.y )
      {
        if ( event[0] && keybinding->action_id == 1 )
          ev->info.mouse.x = ev->info.mouse.x;
          event[0] = keybinding->event;
        &keybinding = &keybinding->action_id;
        break;
      }
      else
      {
        &keybinding[0] = &keybinding;
      }
    }
    while ( keybinding->next != keymaps[ keymap_id ].next );
  }
  return -1;
}
struct keybinding *kbd_ev_lookup( enum keymap_id  keymap_id, struct term_event_keyboard *kbd, int *event )
{
  int edx;
  if ( keymaps[ ebp_8 ].next != keymaps[ ebp_8 ].next )
  {
    do
    {
      if ( kbd->key == keymaps[ ebp_8 ].list_head_elinks && kbd->modifier == keymaps[ ebp_8 ].list_head_elinks )
      {
        if ( event[0] && keymaps[ ebp_8 ].list_head_elinks == 1 )
        {
          event[0] = keymaps[ ebp_8 ].list_head_elinks;
          break;
        }
        else
          break;
      }
      else
    }
    while ( keymaps[ ebp_8 ].next[0] != keymaps[ ebp_8 ].next );
  }
  return &keymaps[ ebp_8 ].next[0];
}
struct keybinding *kbd_nm_lookup( enum keymap_id  keymap_id, unsigned char *name )
{
  action_id_T action_id;
  if ( get_action_from_string( keymap_id, name ) >= 0 && keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
  {
    do
    {
      if ( action_id == keymaps[ keymap_id ].list_head_elinks )
        break;
    }
    while ( keymaps[ keymap_id ].next[0] != keymaps[ keymap_id ].next );
  }
  return &keymaps[ keymap_id ].next[0];
}
unsigned char *get_action_name_from_keystroke( enum keymap_id  keymap_id, unsigned char *keystroke_str )
{
  int ecx;
  struct action *action;
  if ( parse_keystroke( keystroke_str, ebp_16 ) >= 0 && keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
  {
    *ebp_16 = ebp_16;
    do
    {
      if ( ebp_16 == *(int*)(keymaps[ keymap_id ].next + 20) && ebp_12 == *(int*)(keymaps[ keymap_id ].next + 24) )
      {
        if ( action[0].str )
          break;
      }
      else
    }
    while ( keymaps[ keymap_id ].next[0] != keymaps[ keymap_id ].next );
  }
  return 0;
}
action_id_T get_action_from_string( enum keymap_id  keymap_id, unsigned char *str )
{
  struct action *action;
  if ( assert_failed == 0 )
  {
    assert_failed = keymap_id > 2;
    if ( keymap_id > 2 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/kbdbind.c";
      errline = 257;
      elinks_internal( "assertion keymap_id &gt;= 0 && keymap_id &lt; KEYMAP_MAX failed!" );
    }
  }
  action = action_table[ action[0].str ].actions;
  if ( action->str )
  {
    do
    {
      if ( strcmp( (char*)action->str, &str[0] ) == 0 )
        break;
      action++;
    }
    while ( action->str );
    return -1;
  }
  else
  {
    return -1;
  }
}
struct action *get_action( enum keymap_id  keymap_id, action_id_T action_id )
{
  if ( assert_failed == 0 )
  {
    assert_failed = keymap_id > 2;
    if ( keymap_id > 2 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/kbdbind.c";
      errline = 269;
      elinks_internal( "assertion keymap_id &gt;= 0 && keymap_id &lt; KEYMAP_MAX failed!" );
      if ( action_id >= 0 )
      {
        if ( action_id < action_table[ keymap_id ].num_actions )
        {
          return &action_table[ keymap_id ].actions[ action_id ];
        }
        return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  if ( action_id >= 0 )
  {
  }
  return 0;
}
unsigned char *get_action_name( enum keymap_id  keymap_id, action_id_T action_id )
{
  int eax;
  struct action *action = get_action( keymap_id, action_id );
  return action->str;
}
unsigned char *get_keymap_name( enum keymap_id  keymap_id )
{
  if ( assert_failed == 0 )
  {
    assert_failed = keymap_id > 2;
    if ( keymap_id > 2 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/kbdbind.c";
      errline = 298;
      elinks_internal( "assertion keymap_id &gt;= 0 && keymap_id &lt; KEYMAP_MAX failed!" );
      return keymap_table[ keymap_id ].str;
    }
  }
  return keymap_table[ keymap_id ].str;
}
term_event_key_T read_key( unsigned char *key_str )
{
  int eax;
  struct named_key *key;
  if ( !key_str[0] || key_str[1] )
  {
    key = key_table;
    if ( "Enter" )
    {
      do
      {
        if ( c_strcasecmp( (char*)key->str, &key_str[0] ) == 0 )
        {
          return key->num;
        }
        key++;
      }
      while ( key->str );
    }
  }
}
int parse_keystroke( unsigned char *s, struct term_event_keyboard *kbd )
{
  int ebx;
  kbd->modifier = KBD_MOD_NONE;
  while ( 1 )
  {
    if ( c_strncasecmp( &s[0], "Shift", 5 ) == 0 && ( s[5] == '+' || s[5] == '-' ) )
    {
      kbd->modifier |= KBD_MOD_SHIFT;
      s[0] = s[6];
    }
    else
    {
      if ( c_strncasecmp( &s[0], "Ctrl", 4 ) == 0 && ( s[4] == '+' || s[4] == '-' ) )
      {
        kbd->modifier |= KBD_MOD_CTRL;
        s[0] = s[5];
      }
      else
      {
        if ( c_strncasecmp( &s[0], "Alt", 3 ) == 0 )
        {
          if ( s[3] != '+' && s[3] != '-' )
          {
            kbd = &kbd[0];
            break;
          }
          else
          {
            kbd->modifier |= KBD_MOD_ALT;
            s[0] = s[4];
          }
        }
        else
          break;
      }
    }
  }
  kbd = read_key( &s[0] );
  if ( ( ( kbd->modifier & 2 ) & 255 ) && kbd[0].key >= 0 )
  {
    if ( kbd[0].key <= 127 )
    {
      kbd = c_toupper( kbd[0].key );
    }
    else
    {
      return 0;
    }
  }
  if ( kbd[0].key != -1 )
  {
    return 0;
  }
  return -1;
}
void add_keystroke_to_string( struct string *str, struct term_event_keyboard *kbd, int escape )
{
  int eax;
  int ecx;
  int edx;
  unsigned char key_buffer[3];
  unsigned char *key_string;
  struct named_key *key;
  key_buffer[0] = 30812;
  key_buffer[2] = 0;
  if ( kbd[0].key != -1 )
  {
    if ( kbd->modifier & 1 )
    {
      add_to_string( &str[0], "Shift-" );
      kbd->modifier = kbd->modifier;
    }
    if ( ( kbd->modifier & 2 ) & 255 )
    {
      add_to_string( &str[0], "Ctrl-" );
      kbd->modifier = kbd->modifier;
    }
    if ( ( kbd->modifier & 4 ) & 255 )
      add_to_string( &str[0], "Alt-" );
    key_string[0] = "Enter";
    if ( "Enter" == 0 )
      kbd->key = kbd->key;
    else
    {
      key = key_table;
      if ( kbd->key != -256 )
      {
        do
        {
          key++;
          key_string[0] = key[1].str;
          if ( key->str == 0 )
            goto B14;
          else
          {
          }
        }
        while ( key->num != kbd->key );
        add_to_string( &str[0], &key_string[0] );
        return;
      }
    }
B14:    key_string[0] = key_buffer[1];
    key_buffer[1] = kbd->key;
    if ( escape )
    {
      key_string[0] = key[0].str == 0 ? key_buffer[0] : key_buffer[1];
    }
  }
  else
  {
    return;
  }
}
void add_keystroke_action_to_string( struct string *string, action_id_T action_id, enum keymap_id  keymap_id )
{
  int ecx;
  struct keybinding *keybinding = &keymaps[ keymap_id ].next[0];
  if ( keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
  {
    do
    {
      if ( keybinding->action_id == action_id )
      {
        keymap_id = KEYMAP_MAIN;
        action_id = keybinding->kbd.term_event_keyboard;
        string = &string[0];
      }
      keybinding = &keybinding;
    }
    while ( keybinding->next != keymaps[ keymap_id ].next );
  }
  return;
}
unsigned char *get_keystroke( action_id_T action_id, enum keymap_id  keymap_id )
{
  int eax;
  struct string keystroke;
  if ( init_string( &keystroke ) )
  {
    add_keystroke_action_to_string( &keystroke, action_id, keymap_id );
    if ( keystroke.length == 0 )
      done_string( &keystroke );
    return keystroke.source;
  }
  else
  {
  }
}
void add_actions_to_string( struct string *string, action_id_T *action_ids, enum keymap_id  keymap_id, struct terminal *term )
{
  int edx;
  int ebp_28;
  if ( assert_failed == 0 )
  {
    assert_failed = keymap_id > 2;
    if ( keymap_id > 2 )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/kbdbind.c";
      errline = 502;
      elinks_internal( "assertion keymap_id &gt;= 0 && keymap_id &lt; KEYMAP_MAX failed!" );
    }
  }
  if ( *(int*)(0x81382e8 + ( keymap_id * 12 )) && *(char*)(*(int*)(0x81382e8 + ( keymap_id * 12 ))) )
  {
    if ( term && current_charset != get_terminal_codepage( term ) )
    {
      bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
      current_charset = get_terminal_codepage( term );
    }
  }
  add_format_to_string( &string[0], "%s:\n" );
  if ( action_ids[0] )
  {
  {
    do
    {
      struct keybinding *keybinding = &keymaps[ keymap_id ].next[0];
      int keystrokelen;
      unsigned char *desc;
      if ( keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
      {
        if ( keybinding->action_id != action_ids[0] )
        {
          *ebp_32 = keymaps[ keymap_id ].next;
          do
          {
            keybinding = &keybinding;
            if ( keybinding->next != keymaps[ keymap_id ].next )
              continue;
          }
          while ( keybinding->action_id != *(int*)(ebp_28 + 4) );
          desc[0] = 0;
          keystrokelen = string->length;
          if ( get_action( keymap_id, *(int*)(ebp_28 + 4) ) && *(int*)(get_action( keymap_id, *(int*)(ebp_28 + 4) ) + 12) == 0 )
          {
          }
          if ( keybinding[0].next )
          {
            add_char_to_string( &string[0], 10 );
            add_keystroke_to_string( &string[0], &keybinding->kbd, 0 );
            add_xchar_to_string( &string[0], 32, (unsigned char)( ( keystrokelen - string->length ) + 15 > 0 ) ? 1 : ( keystrokelen - string->length ) + 15 );
            if ( desc[0] && desc[0] )
            {
              if ( term && current_charset != get_terminal_codepage( term ) )
              {
                bind_textdomain_codeset( "elinks", get_cp_mime_name( get_terminal_codepage( term ) ) );
                current_charset = get_terminal_codepage( term );
              }
              desc[0] = gettext( &desc[0] );
            }
            add_to_string( &string[0], &desc[0] );
          }
          ebp_28 += 4;
        }
      }
    }
    while ( *(int*)(ebp_28 + 4) );
    return;
  }
  }
  else
  {
    return;
  }
}
void init_keymaps( struct module *xxx )
{
  keymaps->prev = keymaps[0].next;
  keymaps[0].next = keymaps[0].next;
  keymaps[1].prev = keymaps[1].next;
  keymaps[1].next = keymaps[1].next;
  keymaps[2].prev = keymaps[2].next;
  keymaps[2].next = keymaps[2].next;
  init_keybinding_listboxes( keymap_table, action_table );
  do
  {
    if ( default_keybindings[ 0 ][0].kbd.key )
    {
      do
      {
        *(int*)(&eax->flags) |= 12;
      }
      while ( ebx );
    }
  }
  while ( 0 + 1 + 1 != 3 );
  return;
}
void free_keymaps( struct module *xxx )
{
  int edx;
  enum keymap_id  keymap_id;
  done_keybinding_listboxes(  );
  keymap_id = KEYMAP_MAIN;
{
  do
  {
    struct xlist_head *head = &keymaps[ keymap_id ].next[0], *next;
    if ( keymaps[ keymap_id ].next != keymaps[0].next )
    {
      head = &keymaps[ keymap_id ].next[0];
      do
      {
        head = &(struct xlist_head*)(head);
      }
      while ( head->next != keymaps[1].next );
    }
    head = &keymaps[ keymap_id ].prev[0];
    if ( keymaps[ keymap_id ].prev != keymaps[0].next )
    {
      do
      {
        head = head->prev;
      }
      while ( head->prev != keymaps[1].next );
    }
    next = &keymaps[ keymap_id ].next[0];
    if ( keymaps[0].next != keymaps[ keymap_id ].next )
    {
      do
      {
        next->prev = head->prev;
        &(struct xlist_head*)(head->prev) = &(struct xlist_head*)(head);
        mem_free( (void*)head->next );
      }
      while ( keymaps[0].next == next[0].next );
    }
    keymap_id++;
  }
  while ( no_autocreate != keymaps[1].list_head_elinks );
  return;
}
}
int bind_key_to_event_name( unsigned char *ckmap, unsigned char *ckey, unsigned char *event_name, unsigned char **err )
{
  int event_id = register_event( event_name );
  if ( event_id == -1 )
  {
    err[0] = gettext( "Error registering event" );
    return event_id;
  }
  do
  {
    if ( strcmp( (char*)keymap_table[ 0 + 1 ].str, &ckmap[0] ) == 0 )
    {
      if ( parse_keystroke( ckey, ebp_32 ) < 0 )
        gettext( "Error parsing keystroke" );
        err[0] = gettext( "Unrecognised keymap" );
        break;
      else
      {
        if ( get_action_from_string( 0 + 1, " *scripting-function*" ) < 0 )
          gettext( "Unrecognised action (internal error)" );
        else
        {
          add_keybinding( 0 + 1, get_action_from_string( 0 + 1, " *scripting-function*" ), ebp_32, event_id );
        }
      }
    }
    else
    {
    }
  }
  while ( 0 + 1 + 1 != 3 );
  gettext( "Unrecognised keymap" );
}
int bind_do( unsigned char *keymap_str, unsigned char *keystroke_str, unsigned char *action_str, int is_system_conf )
{
  int edx;
  int esi;
  enum keymap_id  keymap_id = KEYMAP_MAIN;
  action_id_T action_id;
  struct term_event_keyboard kbd;
  struct keybinding *keybinding;
  do
  {
    if ( strcmp( (char*)keymap_table[ keymap_id ].str, (char*)keymap_str ) == 0 )
    {
      if ( parse_keystroke( keystroke_str, &kbd ) >= 0 )
      {
        if ( assert_failed == 0 )
        {
          assert_failed = keymap_id > 2;
          if ( keymap_id > 2 )
          {
            errfile = "/home/naftali/source/elinks-0.12~pre5/src/config/kbdbind.c";
            errline = 887;
            elinks_internal( "assertion keymap_id &gt;= 0 && keymap_id &lt; KEYMAP_MAX failed!" );
          }
        }
        if ( action_aliases[ keymap_id ] )
        {
          while ( action_aliases[ keymap_id ][1].str )
          {
            if ( eax == 0 )
              action_id = action_aliases[ keymap_id ][1].action_id;
              if ( action_id >= 0 )
              {
                if ( keybinding[0] && is_system_conf )
                {
                  keybinding->flags |= 12;
                  break;
                }
              }
              else
                break;
            else
            {
            }
          }
        }
        action_id = get_action_from_string( keymap_id, &action_str[0] );
      }
      else
        break;
    }
    else
    {
      keymap_id++;
    }
  }
  while ( 0 + 1 + 1 != 3 );
  return 1;
}
unsigned char *bind_act( unsigned char *keymap_str, unsigned char *keystroke_str )
{
  int ecx;
  int edx;
  int ebx;
  enum keymap_id  keymap_id = KEYMAP_MAIN;
  unsigned char *action;
  struct keybinding *keybinding;
  do
  {
    if ( strcmp( (char*)keymap_table[ keymap_id ].str, &keymap_str[0] ) == 0 )
    {
      if ( parse_keystroke( keystroke_str, ebp_32 ) >= 0 && keymaps[ keymap_id ].next != keymaps[ keymap_id ].next )
      {
        *ebp_32 = ebp_32;
        do
        {
          if ( keybinding->kbd.key == ebp_32 && keybinding->kbd.modifier == ebp_28 )
          {
            if ( action[0] )
            {
              keybinding->flags |= KBDB_WATERMARK;
              straconcat( "\"" );
              break;
            }
          }
          else
          {
            keybinding = &keybinding;
          }
        }
        while ( keybinding->next != keymaps[ keymap_id ].next );
        break;
      }
      else
        break;
    }
    else
    {
      keymap_id++;
    }
  }
  while ( 0 + 1 + 1 != 3 );
  return 0;
}
void bind_config_string( struct string *file )
{
  enum keymap_id  keymap_id = KEYMAP_MAIN;
{
  do
  {
    struct keybinding *keybinding = &keymaps[ keymap_id ].next[0];
    if ( keymaps[ keymap_id ].next != keymaps[0].next )
    {
      do
      {
        if ( !( ( keybinding->flags & 8 ) & 255 ) && get_action_name( keymap_id, keybinding->action_id ) && get_keymap_name( keymap_id ) && *(char*)(get_action_name( keymap_id, keybinding->action_id )) != ' ' )
        {
          if ( keybinding->flags & 1 )
          {
            keybinding->flags &= -2;
            keybinding = &keybinding;
            if ( keybinding->next == keymaps[0].next )
            {
              break;
            }
          }
          else
          {
            add_to_string( file, "bind \"" );
            add_to_string( file, get_keymap_name( keymap_id ) );
            add_to_string( file, "\" \"" );
            add_keystroke_to_string( file, &keybinding->kbd, 1 );
            add_to_string( file, "\" = \"" );
            add_to_string( file, get_action_name( keymap_id, keybinding->action_id ) );
            add_char_to_string( file, 34 );
            add_char_to_string( file, 10 );
          }
        }
        keybinding = &keybinding;
      }
      while ( keybinding->next != keymaps[1].next );
      keymap_id = keymap_id;
    }
    keymap_id++;
  }
  while ( no_autocreate != keymaps[1].list_head_elinks );
  return;
}
}
#if 0
#endif
