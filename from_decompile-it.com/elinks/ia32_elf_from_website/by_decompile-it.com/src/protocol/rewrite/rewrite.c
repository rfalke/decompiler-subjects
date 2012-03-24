#include "rewrite.c.h"
static struct option_info uri_rewrite_options[92] = { { { 0, 0, { 0 }
, "rewrite", 64, 9, 0, 0, { 0, 135408496, 135475606, 0, 0, 0 }
, "Rules for rewriting URIs entered in the goto dialog. It makes it possible to define a set of prefixes that will be expanded if they match a string entered in the goto dialog. The prefixes can be dumb, meaning that they work only like URI abbreviations, or smart ones, making it possible to pass arguments to them like search engine keywords.", "URI rewriting", 0, 0, 0 }
, "protocol" }
, { { 0, 0, { 0 }
, "enable-dumb", 0, 0, 0, 1, { 0, 135408840, 135475632, 0, 0, 0 }
, "Enable dumb prefixes - simple URI abbreviations which can be written to the Goto URL dialog instead of actual URIs - i.e. if you write 'elinks' there, you are directed to http://elinks.cz/.", "Enable dumb prefixes", 0, 0, 0 }
, "protocol.rewrite" }
, { { 0, 0, { 0 }
, "enable-smart", 0, 0, 0, 1, { 0, 135409032, 135475683, 0, 0, 0 }
, "Enable smart prefixes - URI templates triggered by writing given abbreviation to the Goto URL dialog followed by a list of arguments from which the actual URI is composed - i.e. 'gg:search keywords' or 'gn search keywords for news'.", "Enable smart prefixes", 0, 0, 0 }
, "protocol.rewrite" }
, { { 0, 0, { 0 }
, "dumb", 66, 9, 0, 0, { 0, 135409268, 135475705, 0, 0, 0 }
, "Dumb prefixes, see enable-dumb description for details.", "Dumb Prefixes", 0, 0, 0 }
, "protocol.rewrite" }
, { { 0, 0, { 0 }
, "_template_", 0, 3, 0, 1024, { "", 135409324, 0, 0, 0, 0 }
, "Replacement URI for this dumbprefix:\n%c in the string means the current URL\n%% in the string means '%'", 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "smart", 66, 9, 0, 0, { 0, 135409428, 135475741, 0, 0, 0 }
, "Smart prefixes, see enable-smart description for details.", "Smart Prefixes", 0, 0, 0 }
, "protocol.rewrite" }
, { { 0, 0, { 0 }
, "_template_", 0, 3, 0, 1024, { "", 135409488, 0, 0, 0, 0 }
, "Replacement URI for this smartprefix:\n%c in the string means the current URL\n%s in the string means the whole argument to smartprefix\n%0,%1,...,%9 means argument 0, 1, ..., 9\n%% in the string means '%'", 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "default_template", 0, 3, 0, 1024, { "", 135409692, 135475796, 0, 0, 0 }
, "Default URI template used when the string entered in the goto dialog does not appear to be a URI or a filename (i.e. contains no '.', ':' or '/' characters), and does not match any defined prefixes. Set the value to \"\" to disable use of the default template rewrite rule.\n\n%c in the template means the current URL,\n%s in the template means the whole string from the goto\n   dialog,\n%0,%1,...,%9 mean the 1st,2nd,...,10th space-delimited part\n   of %s,\n%% in the template means '%'.", "Default template", 0, 0, 0 }
, "protocol.rewrite" }
, { { 0, 0, { 0 }
, "elinks", 0, 3, 0, 1024, { "http://elinks.cz/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "documentation", 0, 3, 0, 1024, { "http://elinks.cz/documentation/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "bz", 0, 3, 0, 1024, { "http://bugs.debian.org/src:elinks", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "bug", 0, 3, 0, 1024, { "http://bugs.debian.org/src:elinks", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "arc", 0, 3, 0, 1024, { "http://web.archive.org/web/*/%c", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "cia", 0, 3, 0, 1024, { "http://cia.navi.cx/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "b", 0, 3, 0, 1024, { "http://babelfish.altavista.com/babelfish/tr", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "d", 0, 3, 0, 1024, { "http://www.dict.org", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "g", 0, 3, 0, 1024, { "http://www.google.com/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "gg", 0, 3, 0, 1024, { "http://www.google.com/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "go", 0, 3, 0, 1024, { "http://www.google.com/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "fm", 0, 3, 0, 1024, { "http://freshmeat.net/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "sf", 0, 3, 0, 1024, { "http://www.sourceforge.net/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "dbug", 0, 3, 0, 1024, { "http://bugs.debian.org/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "dpkg", 0, 3, 0, 1024, { "http://packages.debian.org/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "lua", 0, 3, 0, 1024, { "file:///usr/share/doc/lua40-doc/manual/idx.html", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "pycur", 0, 3, 0, 1024, { "http://www.python.org/doc/current/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "pydev", 0, 3, 0, 1024, { "http://www.python.org/dev/doc/devel/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "pyhelp", 0, 3, 0, 1024, { "http://starship.python.net/crew/theller/pyhelp.cgi", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "pyvault", 0, 3, 0, 1024, { "http://www.vex.net/parnassus/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "e2", 0, 3, 0, 1024, { "http://www.everything2.org/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "sd", 0, 3, 0, 1024, { "http://slashdot.org/", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "vhtml", 0, 3, 0, 1024, { "http://validator.w3.org/check?uri=%c", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "vcss", 0, 3, 0, 1024, { "http://jigsaw.w3.org/css-validator/validator?uri=%c", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.dumb" }
, { { 0, 0, { 0 }
, "bug", 0, 3, 0, 1024, { "http://bugs.debian.org/src:elinksshow_bug.cgi?id=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "arc", 0, 3, 0, 1024, { "http://web.archive.org/web/*/%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "bb", 0, 3, 0, 1024, { "http://babelfish.altavista.com/babelfish/tr?urltext=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "bb_fr_en", 0, 3, 0, 1024, { "http://babelfish.altavista.com/babelfish/tr?lp=fr_en&submit=1&urltext=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "bb_en_fr", 0, 3, 0, 1024, { "http://babelfish.altavista.com/babelfish/tr?lp=en_fr&submit=1&urltext=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "cambridge", 0, 3, 0, 1024, { "http://dictionary.cambridge.org/results.asp?searchword=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "cliki", 0, 3, 0, 1024, { "http://www.cliki.net/admin/search?words=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "d", 0, 3, 0, 1024, { "http://www.dict.org/bin/Dict?Query=%s&Form=Dict1&Strategy=*&Database=*&submit=Submit+query", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "dmoz", 0, 3, 0, 1024, { "http://search.dmoz.org/cgi-bin/search?search=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "foldoc", 0, 3, 0, 1024, { "http://wombat.doc.ic.ac.uk/foldoc/foldoc.cgi?%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "g", 0, 3, 0, 1024, { "http://www.google.com/search?q=%s&btnG=Google+Search", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gd", 0, 3, 0, 1024, { "http://www.google.com/search?q=%s&cat=gwd/Top", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gg", 0, 3, 0, 1024, { "http://www.google.com/search?q=%s&btnG=Google+Search", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gi", 0, 3, 0, 1024, { "http://images.google.com/images?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gn", 0, 3, 0, 1024, { "http://news.google.com/news?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "go", 0, 3, 0, 1024, { "http://www.google.com/search?q=%s&btnG=Google+Search", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gr", 0, 3, 0, 1024, { "http://groups.google.com/groups?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "google", 0, 3, 0, 1024, { "http://www.google.com/search?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gwho", 0, 3, 0, 1024, { "http://www.googlism.com/?ism=%s&name=1", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gwhat", 0, 3, 0, 1024, { "http://www.googlism.com/?ism=%s&name=2", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gwhere", 0, 3, 0, 1024, { "http://www.googlism.com/?ism=%s&name=3", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "gwhen", 0, 3, 0, 1024, { "http://www.googlism.com/?ism=%s&name=4", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "fm", 0, 3, 0, 1024, { "http://freshmeat.net/search/?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "savannah", 0, 3, 0, 1024, { "http://savannah.nongnu.org/search/?words=%s&type_of_search=soft&exact=1", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sf", 0, 3, 0, 1024, { "http://sourceforge.net/search/?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sfp", 0, 3, 0, 1024, { "http://sourceforge.net/projects/%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sd", 0, 3, 0, 1024, { "http://slashdot.org/search.pl?query=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sdc", 0, 3, 0, 1024, { "http://slashdot.org/search.pl?query=%s&op=comments", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sdu", 0, 3, 0, 1024, { "http://slashdot.org/search.pl?query=%s&op=users", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sdp", 0, 3, 0, 1024, { "http://slashdot.org/search.pl?query=%s&op=polls", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "sdj", 0, 3, 0, 1024, { "http://slashdot.org/search.pl?query=%s&op=journals", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "dbug", 0, 3, 0, 1024, { "http://bugs.debian.org/%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "dpkg", 0, 3, 0, 1024, { "http://packages.debian.org/%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "emacs", 0, 3, 0, 1024, { "http://www.emacswiki.org/cgi-bin/wiki.pl?search=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "lyrics", 0, 3, 0, 1024, { "http://music.lycos.com/lyrics/results.asp?QT=L&QW=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "lxr", 0, 3, 0, 1024, { "http://lxr.linux.no/ident?i=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "onelook", 0, 3, 0, 1024, { "http://onelook.com/?w=%s&ls=a", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "py", 0, 3, 0, 1024, { "http://starship.python.net/crew/theller/pyhelp.cgi?keyword=%s&version=current", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "pydev", 0, 3, 0, 1024, { "http://starship.python.net/crew/theller/pyhelp.cgi?keyword=%s&version=devel", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "pyvault", 0, 3, 0, 1024, { "http://py.vaults.ca/apyllo.py?find=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "e2", 0, 3, 0, 1024, { "http://www.everything2.org/?node=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "encz", 0, 3, 0, 1024, { "http://www.slovnik.cz/bin/ecd?ecd_il=1&ecd_vcb=%s&ecd_trn=translate&ecd_trn_dir=0&ecd_lines=15&ecd_hptxt=0", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "czen", 0, 3, 0, 1024, { "http://www.slovnik.cz/bin/ecd?ecd_il=1&ecd_vcb=%s&ecd_trn=translate&ecd_trn_dir=1&ecd_lines=15&ecd_hptxt=0", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "dict", 0, 3, 0, 1024, { "http://dictionary.reference.com/search?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "thes", 0, 3, 0, 1024, { "http://thesaurus.reference.com/search?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "a", 0, 3, 0, 1024, { "http://acronymfinder.com/af-query.asp?String=exact&Acronym=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "imdb", 0, 3, 0, 1024, { "http://www.imdb.com/find?s=all&q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "mw", 0, 3, 0, 1024, { "http://www.m-w.com/cgi-bin/dictionary?book=Dictionary&va=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "mwt", 0, 3, 0, 1024, { "http://www.m-w.com/cgi-bin/thesaurus?book=Thesaurus&va=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "whatis", 0, 3, 0, 1024, { "http://uptime.netcraft.com/up/graph/?host=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "wiki", 0, 3, 0, 1024, { "http://en.wikipedia.org/w/wiki.phtml?search=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "wn", 0, 3, 0, 1024, { "http://www.cogsci.princeton.edu/cgi-bin/webwn1.7.1?stage=1&word=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "fsd", 0, 3, 0, 1024, { "http://directory.fsf.org/search/fsd-search.py?q=%s", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "rfc", 0, 3, 0, 1024, { "http://www.rfc-editor.org/rfc/rfc%s.txt", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "rfcs", 0, 3, 0, 1024, { "http://www.rfc-editor.org/cgi-bin/rfcsearch.pl?searchwords=%s&format=http&abstract=abson&keywords=keyon&num=25", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "cr", 0, 3, 0, 1024, { "http://www.rfc-editor.org/cgi-bin/rfcsearch.pl?searchwords=%s&format=http&abstract=abson&keywords=keyon&num=25", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "rfcid", 0, 3, 0, 1024, { "http://www.rfc-editor.org/cgi-bin/idsearch.pl?searchwords=%s&format=http&abstract=abson&keywords=keyon&num=25", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "id", 0, 3, 0, 1024, { "http://www.rfc-editor.org/cgi-bin/idsearch.pl?searchwords=%s&format=http&abstract=abson&keywords=keyon&num=25", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, "draft", 0, 3, 0, 1024, { "http://www.rfc-editor.org/cgi-bin/idsearch.pl?searchwords=%s&format=http&abstract=abson&keywords=keyon&num=25", 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, "protocol.rewrite.smart" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct event_hook_info uri_rewrite_hooks[2] = { { "goto-url", -1, &goto_url_hook, 0 }
, { 0, 0, 0, 0 }
 };
struct module uri_rewrite_module = { "URI rewrite", uri_rewrite_options, uri_rewrite_hooks, 0, 0, 0, 0 };
unsigned char *get_uri_rewrite_prefix( enum uri_rewrite_type  type, unsigned char *url )
{
  int edx;
  enum uri_rewrite_option  tree = ( ( 0 - ( ( type < 1 ) & 1 ) ) & -2 ) + 5;
  struct option_elinks *opt;
  unsigned char *exp;
  if ( assert_failed == 0 )
  {
    assert_failed = ( tree != URI_REWRITE_DUMB_TREE ) & ( tree != URI_REWRITE_SMART_TREE );
    if ( ( tree != URI_REWRITE_DUMB_TREE ) & ( tree != URI_REWRITE_SMART_TREE ) )
    {
      errfile = "/home/naftali/source/elinks-0.12~pre5/src/protocol/rewrite/rewrite.c";
      errline = 230;
      elinks_internal( "assertion tree == URI_REWRITE_DUMB_TREE || tree == URI_REWRITE_SMART_TREE failed!" );
      *ebp_12 = url[0];
    }
  }
  if ( opt[0] && ( exp[32] == 0 || exp[0] ) )
  {
    return (unsigned char*)opt->value.tree;
  }
  return 0;
}
enum evhook_status  goto_url_hook( va_list ap, void *data )
{
  int eax;
  int ecx;
  int edx;
  unsigned char **url = ap[0];
  struct session *ses = &ap[4];
  unsigned char *uu;
  unsigned char *arg;
  unsigned char *argstart;
  argstart[0] = argstart[ 0 + 1 ];
  if ( uri_rewrite_options[2].option_elinks.value && argstart[0] )
  {
    argstart[0] = argstart[0] = 0;
    if ( get_uri_rewrite_prefix( URI_REWRITE_SMART, url[0] ) )
    {
      if ( uu[0] == 0 )
      {
        if ( !strchr( (char*)url[0], 58 ) && !strchr( (char*)url[0], 46 ) && !strchr( (char*)url[0], 47 ) && *(int*)(get_opt_( config_options, (unsigned char*)config_options )) && uu[0] )
        {
        {
          struct uri *uri;
          if ( ses[0] && ses->history.current )
            uri = ses->history.current->vs.uri;
          else
          {
          }
          if ( init_string( ebp_32 ) )
          {
            while ( *(int*)(( ebp_2147483632 + ( 0 << 2 ) ) - 72) = arg[ ecx ], *(char*)(ecx + eax) == ' ' )
            {
              if ( ( 0 + 1 ) & 255 )
              {
                arg[0] = *(int*)(( ebp_2147483632 + ( 0 << 2 ) ) - 72);
              }
              else
              {
                *(int*)(( ebp_2147483632 + ( ( 0 + 1 ) << 2 ) ) - 112) = 1;
                do
                {
                  if ( uu[0] & 255 )
                  {
                    do
                    {
                      if ( '%' != 1 )
                      {
                        do
                        {
                          uu[0] = uu[0] + 0 + 1 + 1;
                        }
                        while ( *(char*)(0 + 1 + uu[0] + 1) != '%' && ( strchr( (char*)url[0], 58 ) & 255 ) );
                      }
                      if ( assert_failed == 0 )
                      {
                        if ( 0 + 1 >= 0 )
                          assert_failed = 0;
                        else
                        {
                          assert_failed = 1;
                          errfile = "/home/naftali/source/elinks-0.12~pre5/src/util/string.h";
                          errline = 255;
                          elinks_internal( "assertion string && bytes && length &gt;= 0 failed: [add_bytes_to_string]" );
                          if ( assert_failed )
                            goto B43;
                        }
                        if ( 0 + 1 )
                        {
                          if ( 0 < 0 )
                          {
                            ebp_144 = 0;
                            if ( mem_realloc( 0, 0 ) )
                            {
                              memset( 0 + mem_realloc( 0, 0 ), 0, 0 - 0 );
                            }
                            else
                            {
                              if ( uu[0] != '%' )
                                continue;
                              else
                              {
                                uu[0] = uu[0] + 1;
                                if ( uu[1] < '9' )
                                {
                                  if ( uu[1] != 'c' )
                                  {
                                    if ( uu[1] != 's' )
                                    {
                                      if ( assert_failed )
                                        assert_failed = 0;
                                        if ( ( ( 0 + 1 + 0 ) & 255 ) == 0 )
                                          continue;
                                        else
                                          uu[0] = uu[1];
                                      else
                                      {
                                        assert_failed = 0;
                                        *(int*)(ebp_28 + 255) = 0 + 255;
                                        if ( 0 < 0 )
                                        {
                                          ebp_144 = 0;
                                          *ebp_148 = 0;
                                          if ( eax )
                                            memset( ecx + eax, 0, edx - ecx );
                                          else
                                          {
                                          }
                                        }
                                        if ( 0 )
                                        {
                                        }
                                      }
                                    }
                                    else
                                    if ( "" )
                                    {
                                      encode_uri_string( ebp_32, "", -1, 1 );
                                    }
                                  }
                                  else
                                  if ( ebp_136 )
                                  {
                                    add_uri_to_string( ebp_32, ebp_136, URI_ORIGINAL );
                                  }
                                }
                                else
                                if ( 0 )
                                {
                                  if ( uu[1] != '%' )
                                  {
                                  }
                                  else
                                  {
                                    add_char_to_string( ebp_32, 37 );
                                  }
                                }
                                else
                                if ( uu[1] - 48 < 0 + 1 + 1 )
                                {
                                  encode_uri_string( ebp_32, *(int*)(( ebp_2147483632 + ( eax << 2 ) ) - 72), *(int*)(( ebp_2147483632 + ( eax << 2 ) ) - 112), 1 );
                                }
                                uu[0] = uu[1];
                              }
                            }
                          }
                          if ( 0 )
                          {
                            memcpy( 0 + 0, &uu[0], 0 + 1 + 1 );
                          }
                        }
                      }
B43:                      assert_failed = 0;
                    }
                    while ( uu[0] & 255 );
                  }
                  uu[0] = 0;
                  if ( 0 )
                  {
                    mem_free( (void*)url[0] );
                    url[0] = &uu[0];
                    return EVENT_HOOK_STATUS_NEXT;
                  }
                  break;
                }
                while ( ( 0 + 1 + 0 ) & 255 );
              }
            }
          }
          else
          {
            return EVENT_HOOK_STATUS_NEXT;
          }
        }
        }
        else
        {
          return EVENT_HOOK_STATUS_NEXT;
        }
      }
      else
      {
        struct uri *uri;
      }
    }
  }
  else
    uu[0] = 0;
  if ( uri_rewrite_options[1].option_elinks.value.tree )
  {
    if ( argstart[0] == 0 )
    {
      uu[0] = get_uri_rewrite_prefix( URI_REWRITE_DUMB, url[0] );
    }
    else
    {
    }
  }
}
#if 0
#endif
