#include "color.c.h"
static struct color_spec color_specs[607] = { { "aliceblue", 15792383 }
, { "antiquewhite", 16444375 }
, { "aqua", 65535 }
, { "aquamarine", 8388564 }
, { "azure", 15794175 }
, { "beige", 16119260 }
, { "bisque", 16770244 }
, { "black", 0 }
, { "blanchedalmond", 16772045 }
, { "blue", 255 }
, { "blueviolet", 9055202 }
, { "brown", 10824234 }
, { "burlywood", 14596231 }
, { "cadetblue", 6266528 }
, { "chartreuse", 8388352 }
, { "chocolate", 13789470 }
, { "coral", 16744272 }
, { "cornflowerblue", 6591981 }
, { "cornsilk", 16775388 }
, { "crimson", 14423100 }
, { "cyan", 65535 }
, { "darkblue", 139 }
, { "darkcyan", 35723 }
, { "darkgoldenrod", 12092939 }
, { "darkgray", 11119017 }
, { "darkgreen", 25600 }
, { "darkkhaki", 12433259 }
, { "darkmagenta", 9109643 }
, { "darkolivegreen", 5597999 }
, { "darkorange", 16747520 }
, { "darkorchid", 10040012 }
, { "darkred", 9109504 }
, { "darksalmon", 15308410 }
, { "darkseagreen", 9419919 }
, { "darkslateblue", 4734347 }
, { "darkslategray", 3100495 }
, { "darkturquoise", 52945 }
, { "darkviolet", 9699539 }
, { "deeppink", 16716947 }
, { "deepskyblue", 49151 }
, { "dimgray", 6908265 }
, { "dodgerblue", 2003199 }
, { "firebrick", 11674146 }
, { "floralwhite", 16775920 }
, { "forestgreen", 2263842 }
, { "fuchsia", 16711935 }
, { "gainsboro", 14474460 }
, { "ghostwhite", 16316671 }
, { "gold", 16766720 }
, { "goldenrod", 14329120 }
, { "gray", 12500670 }
, { "green", 32768 }
, { "greenyellow", 11403055 }
, { "honeydew", 15794160 }
, { "hotpink", 16738740 }
, { "indianred", 13458524 }
, { "indigo", 4915330 }
, { "ivory", 16777200 }
, { "khaki", 15787660 }
, { "lavender", 15132410 }
, { "lavenderblush", 16773365 }
, { "lawngreen", 8190976 }
, { "lemonchiffon", 16775885 }
, { "lightblue", 11393254 }
, { "lightcoral", 15761536 }
, { "lightcyan", 14745599 }
, { "lightgoldenrodyellow", 16448210 }
, { "lightgreen", 9498256 }
, { "lightgrey", 13882323 }
, { "lightpink", 16758465 }
, { "lightsalmon", 16752762 }
, { "lightseagreen", 2142890 }
, { "lightskyblue", 8900346 }
, { "lightslategray", 7833753 }
, { "lightsteelblue", 11584734 }
, { "lightyellow", 16777184 }
, { "lime", 65280 }
, { "limegreen", 3329330 }
, { "linen", 16445670 }
, { "magenta", 16711935 }
, { "maroon", 8388608 }
, { "mediumaquamarine", 6737322 }
, { "mediumblue", 205 }
, { "mediumorchid", 12211667 }
, { "mediumpurple", 9662683 }
, { "mediumseagreen", 3978097 }
, { "mediumslateblue", 8087790 }
, { "mediumspringgreen", 64154 }
, { "mediumturquoise", 4772300 }
, { "mediumvioletred", 13047173 }
, { "midnightblue", 1644912 }
, { "mintcream", 16121850 }
, { "mistyrose", 16770273 }
, { "moccasin", 16770229 }
, { "navajowhite", 16768685 }
, { "navy", 128 }
, { "oldlace", 16643558 }
, { "olive", 8421376 }
, { "olivedrab", 7048739 }
, { "orange", 16753920 }
, { "orangered", 16729344 }
, { "orchid", 14315734 }
, { "palegoldenrod", 15657130 }
, { "palegreen", 10025880 }
, { "paleturquoise", 11529966 }
, { "palevioletred", 14381203 }
, { "papayawhip", 16773077 }
, { "peachpuff", 16767673 }
, { "peru", 13468991 }
, { "pink", 16761035 }
, { "plum", 14524637 }
, { "powderblue", 11591910 }
, { "purple", 8388736 }
, { "red", 16711680 }
, { "rosybrown", 12357519 }
, { "royalblue", 4286945 }
, { "saddlebrown", 9127187 }
, { "salmon", 16416882 }
, { "sandybrown", 16032864 }
, { "seagreen", 3050327 }
, { "seashell", 16774638 }
, { "sienna", 10506797 }
, { "silver", 12632256 }
, { "skyblue", 8900331 }
, { "slateblue", 6970061 }
, { "slategray", 7372944 }
, { "snow", 16775930 }
, { "springgreen", 65407 }
, { "steelblue", 4620980 }
, { "tan", 13808780 }
, { "teal", 32896 }
, { "thistle", 14204888 }
, { "tomato", 16737095 }
, { "turquoise", 4251856 }
, { "violet", 15631086 }
, { "wheat", 16113331 }
, { "white", 16777215 }
, { "whitesmoke", 16119285 }
, { "yellow", 16776960 }
, { "yellowgreen", 10145074 }
, { "alice blue", 15792383 }
, { "antique white", 16444375 }
, { "antiquewhite1", 16773083 }
, { "antiquewhite2", 15654860 }
, { "antiquewhite3", 13484208 }
, { "antiquewhite4", 9143160 }
, { "aquamarine1", 8388564 }
, { "aquamarine2", 7794374 }
, { "aquamarine3", 6737322 }
, { "azure1", 15794175 }
, { "azure2", 14741230 }
, { "azure3", 12701133 }
, { "azure4", 8620939 }
, { "bisque1", 16770244 }
, { "bisque2", 15652279 }
, { "bisque3", 13481886 }
, { "bisque4", 9141611 }
, { "blanched almond", 16772045 }
, { "blue violet", 9055202 }
, { "brown1", 16728128 }
, { "brown2", 15612731 }
, { "brown3", 13447987 }
, { "brown4", 9118499 }
, { "burlywood1", 16765851 }
, { "burlywood2", 15648145 }
, { "burlywood3", 13478525 }
, { "burlywood4", 9139029 }
, { "cadetblue1", 10024447 }
, { "cadetblue2", 9364974 }
, { "cadetblue3", 8046029 }
, { "chartreuse1", 8388352 }
, { "chartreuse2", 7794176 }
, { "chartreuse3", 6737152 }
, { "chocolate1", 16744228 }
, { "chocolate2", 15627809 }
, { "chocolate3", 13461021 }
, { "chocolate4", 9127187 }
, { "coral1", 16740950 }
, { "coral2", 15624784 }
, { "coral3", 13458245 }
, { "coral4", 9125423 }
, { "cornflower blue", 6591981 }
, { "cornsilk1", 16775388 }
, { "cornsilk2", 15657165 }
, { "cornsilk3", 13486257 }
, { "cornsilk4", 9144440 }
, { "dark blue", 139 }
, { "dark cyan", 35723 }
, { "dark goldenrod", 12092939 }
, { "darkgoldenrod1", 16759055 }
, { "darkgoldenrod2", 15641870 }
, { "darkgoldenrod3", 13473036 }
, { "darkgoldenrod4", 9135368 }
, { "dark gray", 11119017 }
, { "dark grey", 11119017 }
, { "darkgrey", 11119017 }
, { "dark khaki", 12433259 }
, { "dark magenta", 9109643 }
, { "darkolivegreen1", 13303664 }
, { "darkolivegreen2", 12381800 }
, { "darkolivegreen3", 10669402 }
, { "darkolivegreen4", 7244605 }
, { "dark orange", 16747520 }
, { "darkorange1", 16744192 }
, { "darkorange2", 15627776 }
, { "darkorange3", 13460992 }
, { "darkorange4", 9127168 }
, { "dark orchid", 10040012 }
, { "darkorchid1", 12533503 }
, { "darkorchid2", 11680494 }
, { "darkorchid3", 10105549 }
, { "darkorchid4", 6824587 }
, { "dark red", 9109504 }
, { "dark salmon", 15308410 }
, { "dark sea green", 9419919 }
, { "darkseagreen1", 12713921 }
, { "darkseagreen2", 11857588 }
, { "darkseagreen3", 10210715 }
, { "darkseagreen4", 6916969 }
, { "darkslategray1", 9961471 }
, { "darkslategray2", 9301742 }
, { "darkslategray3", 7982541 }
, { "dark violet", 9699539 }
, { "deep pink", 16716947 }
, { "deeppink1", 16716947 }
, { "deeppink2", 15602313 }
, { "deeppink3", 13439094 }
, { "deeppink4", 9112144 }
, { "dim gray", 6908265 }
, { "dim grey", 6908265 }
, { "dimgrey", 6908265 }
, { "firebrick1", 16724016 }
, { "firebrick2", 15608876 }
, { "firebrick3", 13444646 }
, { "firebrick4", 9116186 }
, { "floral white", 16775920 }
, { "ghost white", 16316671 }
, { "gold1", 16766720 }
, { "gold2", 15649024 }
, { "gold3", 13479168 }
, { "gold4", 9139456 }
, { "goldenrod1", 16761125 }
, { "goldenrod2", 15643682 }
, { "goldenrod3", 13474589 }
, { "goldenrod4", 9136404 }
, { "gray100", 16777215 }
, { "gray40", 6710886 }
, { "gray41", 6908265 }
, { "gray42", 7039851 }
, { "gray43", 7237230 }
, { "gray44", 7368816 }
, { "gray45", 7566195 }
, { "gray46", 7697781 }
, { "gray47", 7895160 }
, { "gray48", 8026746 }
, { "gray49", 8224125 }
, { "gray50", 8355711 }
, { "gray51", 8553090 }
, { "gray52", 8750469 }
, { "gray53", 8882055 }
, { "gray54", 9079434 }
, { "gray55", 9211020 }
, { "gray56", 9408399 }
, { "gray57", 9539985 }
, { "gray58", 9737364 }
, { "gray59", 9868950 }
, { "gray60", 10066329 }
, { "gray61", 10263708 }
, { "gray62", 10395294 }
, { "gray63", 10592673 }
, { "gray64", 10724259 }
, { "gray65", 10921638 }
, { "gray66", 11053224 }
, { "gray67", 11250603 }
, { "gray68", 11382189 }
, { "gray69", 11579568 }
, { "gray70", 11776947 }
, { "gray71", 11908533 }
, { "gray72", 12105912 }
, { "gray73", 12237498 }
, { "gray74", 12434877 }
, { "gray75", 12566463 }
, { "gray76", 12763842 }
, { "gray77", 12895428 }
, { "gray78", 13092807 }
, { "gray79", 13224393 }
, { "gray80", 13421772 }
, { "gray81", 13619151 }
, { "gray82", 13750737 }
, { "gray83", 13948116 }
, { "gray84", 14079702 }
, { "gray85", 14277081 }
, { "gray86", 14408667 }
, { "gray87", 14606046 }
, { "gray88", 14737632 }
, { "gray89", 14935011 }
, { "gray90", 15066597 }
, { "gray91", 15263976 }
, { "gray92", 15461355 }
, { "gray93", 15592941 }
, { "gray94", 15790320 }
, { "gray95", 15921906 }
, { "gray96", 16119285 }
, { "gray97", 16250871 }
, { "gray98", 16448250 }
, { "gray99", 16579836 }
, { "green yellow", 11403055 }
, { "grey", 12500670 }
, { "grey100", 16777215 }
, { "grey40", 6710886 }
, { "grey41", 6908265 }
, { "grey42", 7039851 }
, { "grey43", 7237230 }
, { "grey44", 7368816 }
, { "grey45", 7566195 }
, { "grey46", 7697781 }
, { "grey47", 7895160 }
, { "grey48", 8026746 }
, { "grey49", 8224125 }
, { "grey50", 8355711 }
, { "grey51", 8553090 }
, { "grey52", 8750469 }
, { "grey53", 8882055 }
, { "grey54", 9079434 }
, { "grey55", 9211020 }
, { "grey56", 9408399 }
, { "grey57", 9539985 }
, { "grey58", 9737364 }
, { "grey59", 9868950 }
, { "grey60", 10066329 }
, { "grey61", 10263708 }
, { "grey62", 10395294 }
, { "grey63", 10592673 }
, { "grey64", 10724259 }
, { "grey65", 10921638 }
, { "grey66", 11053224 }
, { "grey67", 11250603 }
, { "grey68", 11382189 }
, { "grey69", 11579568 }
, { "grey70", 11776947 }
, { "grey71", 11908533 }
, { "grey72", 12105912 }
, { "grey73", 12237498 }
, { "grey74", 12434877 }
, { "grey75", 12566463 }
, { "grey76", 12763842 }
, { "grey77", 12895428 }
, { "grey78", 13092807 }
, { "grey79", 13224393 }
, { "grey80", 13421772 }
, { "grey81", 13619151 }
, { "grey82", 13750737 }
, { "grey83", 13948116 }
, { "grey84", 14079702 }
, { "grey85", 14277081 }
, { "grey86", 14408667 }
, { "grey87", 14606046 }
, { "grey88", 14737632 }
, { "grey89", 14935011 }
, { "grey90", 15066597 }
, { "grey91", 15263976 }
, { "grey92", 15461355 }
, { "grey93", 15592941 }
, { "grey94", 15790320 }
, { "grey95", 15921906 }
, { "grey96", 16119285 }
, { "grey97", 16250871 }
, { "grey98", 16448250 }
, { "grey99", 16579836 }
, { "honeydew1", 15794160 }
, { "honeydew2", 14741216 }
, { "honeydew3", 12701121 }
, { "honeydew4", 8620931 }
, { "hot pink", 16738740 }
, { "hotpink1", 16740020 }
, { "hotpink2", 15624871 }
, { "hotpink3", 13459600 }
, { "hotpink4", 9124450 }
, { "indian red", 13458524 }
, { "indianred1", 16738922 }
, { "indianred2", 15623011 }
, { "indianred3", 13456725 }
, { "indianred4", 9124410 }
, { "ivory1", 16777200 }
, { "ivory2", 15658720 }
, { "ivory3", 13487553 }
, { "ivory4", 9145219 }
, { "khaki1", 16774799 }
, { "khaki2", 15656581 }
, { "khaki3", 13485683 }
, { "khaki4", 9143886 }
, { "lavender blush", 16773365 }
, { "lavenderblush1", 16773365 }
, { "lavenderblush2", 15655141 }
, { "lavenderblush3", 13484485 }
, { "lavenderblush4", 9143174 }
, { "lawn green", 8190976 }
, { "lemon chiffon", 16775885 }
, { "lemonchiffon1", 16775885 }
, { "lemonchiffon2", 15657407 }
, { "lemonchiffon3", 13486501 }
, { "lemonchiffon4", 9144688 }
, { "light blue", 11393254 }
, { "lightblue1", 12578815 }
, { "lightblue2", 11722734 }
, { "lightblue3", 10141901 }
, { "lightblue4", 6849419 }
, { "light coral", 15761536 }
, { "light cyan", 14745599 }
, { "lightcyan1", 14745599 }
, { "lightcyan2", 13758190 }
, { "lightcyan3", 11849165 }
, { "lightcyan4", 8031115 }
, { "light goldenrod", 15654274 }
, { "lightgoldenrod", 15654274 }
, { "lightgoldenrod1", 16772235 }
, { "lightgoldenrod2", 15654018 }
, { "lightgoldenrod3", 13483632 }
, { "lightgoldenrod4", 9142604 }
, { "light goldenrod yellow", 16448210 }
, { "light gray", 13882323 }
, { "lightgray", 13882323 }
, { "light green", 9498256 }
, { "light grey", 13882323 }
, { "light pink", 16758465 }
, { "lightpink1", 16756409 }
, { "lightpink2", 15639213 }
, { "lightpink3", 13470869 }
, { "lightpink4", 9133925 }
, { "light salmon", 16752762 }
, { "lightsalmon1", 16752762 }
, { "lightsalmon2", 15635826 }
, { "lightsalmon3", 13468002 }
, { "lightsalmon4", 9131842 }
, { "light sky blue", 8900346 }
, { "lightskyblue1", 11592447 }
, { "lightskyblue2", 10802158 }
, { "lightskyblue3", 9287373 }
, { "light slate blue", 8679679 }
, { "lightslateblue", 8679679 }
, { "light slate gray", 7833753 }
, { "light slate grey", 7833753 }
, { "lightslategrey", 7833753 }
, { "light steel blue", 11584734 }
, { "lightsteelblue1", 13296127 }
, { "lightsteelblue2", 12374766 }
, { "lightsteelblue3", 10663373 }
, { "lightsteelblue4", 7240587 }
, { "light yellow", 16777184 }
, { "lightyellow1", 16777184 }
, { "lightyellow2", 15658705 }
, { "lightyellow3", 13487540 }
, { "lightyellow4", 9145210 }
, { "magenta1", 16711935 }
, { "magenta2", 15597806 }
, { "magenta3", 13435085 }
, { "magenta4", 9109643 }
, { "maroon1", 16725171 }
, { "maroon2", 15610023 }
, { "maroon3", 13445520 }
, { "maroon4", 9116770 }
, { "medium aquamarine", 6737322 }
, { "medium orchid", 12211667 }
, { "mediumorchid1", 14706431 }
, { "mediumorchid2", 13721582 }
, { "mediumorchid3", 11817677 }
, { "mediumorchid4", 8009611 }
, { "medium purple", 9662683 }
, { "mediumpurple1", 11240191 }
, { "mediumpurple2", 10451438 }
, { "mediumpurple3", 9005261 }
, { "medium slate blue", 8087790 }
, { "medium violet red", 13047173 }
, { "mint cream", 16121850 }
, { "misty rose", 16770273 }
, { "mistyrose1", 16770273 }
, { "mistyrose2", 15652306 }
, { "mistyrose3", 13481909 }
, { "mistyrose4", 9141627 }
, { "navajo white", 16768685 }
, { "navajowhite1", 16768685 }
, { "navajowhite2", 15650721 }
, { "navajowhite3", 13480843 }
, { "navajowhite4", 9140574 }
, { "old lace", 16643558 }
, { "olive drab", 7048739 }
, { "olivedrab1", 12648254 }
, { "olivedrab2", 11791930 }
, { "olivedrab3", 10145074 }
, { "olivedrab4", 6916898 }
, { "orange1", 16753920 }
, { "orange2", 15636992 }
, { "orange3", 13468928 }
, { "orange4", 9132544 }
, { "orange red", 16729344 }
, { "orangered1", 16729344 }
, { "orangered2", 15613952 }
, { "orangered3", 13448960 }
, { "orangered4", 9118976 }
, { "orchid1", 16745466 }
, { "orchid2", 15629033 }
, { "orchid3", 13461961 }
, { "orchid4", 9127817 }
, { "pale goldenrod", 15657130 }
, { "pale green", 10025880 }
, { "palegreen1", 10157978 }
, { "palegreen2", 9498256 }
, { "palegreen3", 8179068 }
, { "pale turquoise", 11529966 }
, { "paleturquoise1", 12320767 }
, { "paleturquoise2", 11464430 }
, { "paleturquoise3", 9883085 }
, { "paleturquoise4", 6720395 }
, { "pale violet red", 14381203 }
, { "palevioletred1", 16745131 }
, { "palevioletred2", 15628703 }
, { "palevioletred3", 13461641 }
, { "palevioletred4", 9127773 }
, { "papaya whip", 16773077 }
, { "peach puff", 16767673 }
, { "peachpuff1", 16767673 }
, { "peachpuff2", 15649709 }
, { "peachpuff3", 13479829 }
, { "peachpuff4", 9140069 }
, { "pink1", 16758213 }
, { "pink2", 15641016 }
, { "pink3", 13472158 }
, { "pink4", 9134956 }
, { "plum1", 16759807 }
, { "plum2", 15642350 }
, { "plum3", 13473485 }
, { "plum4", 9135755 }
, { "powder blue", 11591910 }
, { "purple1", 10170623 }
, { "purple2", 9514222 }
, { "purple3", 8201933 }
, { "red1", 16711680 }
, { "red2", 15597568 }
, { "red3", 13434880 }
, { "red4", 9109504 }
, { "rosy brown", 12357519 }
, { "rosybrown1", 16761281 }
, { "rosybrown2", 15643828 }
, { "rosybrown3", 13474715 }
, { "rosybrown4", 9136489 }
, { "saddle brown", 9127187 }
, { "salmon1", 16747625 }
, { "salmon2", 15630946 }
, { "salmon3", 13463636 }
, { "salmon4", 9129017 }
, { "sandy brown", 16032864 }
, { "seashell1", 16774638 }
, { "seashell2", 15656414 }
, { "seashell3", 13485503 }
, { "seashell4", 9143938 }
, { "sienna1", 16745031 }
, { "sienna2", 15628610 }
, { "sienna3", 13461561 }
, { "sienna4", 9127718 }
, { "sky blue", 8900331 }
, { "skyblue1", 8900351 }
, { "skyblue2", 8306926 }
, { "skyblue3", 7120589 }
, { "slate blue", 6970061 }
, { "slateblue1", 8613887 }
, { "slateblue2", 8021998 }
, { "slateblue3", 6904269 }
, { "slate gray", 7372944 }
, { "slategray1", 13034239 }
, { "slategray2", 12178414 }
, { "slategray3", 10467021 }
, { "slategray4", 7109515 }
, { "slate grey", 7372944 }
, { "slategrey", 7372944 }
, { "snow1", 16775930 }
, { "snow2", 15657449 }
, { "snow3", 13486537 }
, { "snow4", 9144713 }
, { "tan1", 16753999 }
, { "tan2", 15637065 }
, { "tan3", 13468991 }
, { "tan4", 9132587 }
, { "thistle1", 16769535 }
, { "thistle2", 15651566 }
, { "thistle3", 13481421 }
, { "thistle4", 9141131 }
, { "tomato1", 16737095 }
, { "tomato2", 15621186 }
, { "tomato3", 13455161 }
, { "tomato4", 9123366 }
, { "violet red", 13639824 }
, { "violetred", 13639824 }
, { "violetred1", 16727702 }
, { "violetred2", 15612556 }
, { "violetred3", 13447800 }
, { "violetred4", 9118290 }
, { "wheat1", 16771002 }
, { "wheat2", 15653038 }
, { "wheat3", 13482646 }
, { "wheat4", 9141862 }
, { "white smoke", 16119285 }
, { "yellow1", 16776960 }
, { "yellow2", 15658496 }
, { "yellow3", 13487360 }
, { "yellow4", 9145088 }
, { "yellow green", 10145074 }
, { 0, 0 }
 };
static struct color_spec *internal_pointer;
static struct fastfind_index ff_colors_index = { "colors_lookup", &colors_list_reset, &colors_list_next, 0 };
void colors_list_reset( void )
{
  internal_pointer = color_specs;
  return;
}
struct fastfind_key_value *colors_list_next( void )
{
  static struct fastfind_key_value kv;
  if ( internal_pointer->name )
  {
    kv.data = (void*)internal_pointer;
    kv.key = (unsigned char*)internal_pointer[0].name;
    internal_pointer++;
  }
  return &kv;
}
void init_colors_lookup( void )
{
  fastfind_index( &ff_colors_index, 6 );
  return;
}
void free_colors_lookup( void )
{
  fastfind_done( &ff_colors_index );
  return;
}
int decode_color( unsigned char *str, int slen, color_T *color )
{
  int eax;
  int ecx;
  if ( str[0] == '#' && ( slen == 4 || slen == 7 ) )
  {
    unsigned char buffer[7];
    unsigned char *end;
    color_T string_color;
    str[0] = str[1];
  }
  else
  {
    if ( fastfind_search( &ff_colors_index, &str[0], slen ) && *(int*)(fastfind_search( &ff_colors_index, &str[0], slen )) )
    {
      color[0] = *(int*)(fastfind_search( &ff_colors_index, &str[0], slen ) + 4);
      return -1;
    }
    else
    if ( slen == 3 || slen == 6 )
    {
      if ( slen >= 1 )
      {
        return *(int*)(__ctype_b_loc(  ));
      }
      if ( slen != 0 + 1 )
      {
        int len;
        return -1;
      }
    }
  }
  if ( slen == 4 )
    str[0] = ebp_35;
  *(int*)(__errno_location(  )) = 0;
  strtoul( &str[0], (char**)&end, 16 );
  if ( *(int*)(__errno_location(  )) == 0 && ebp_28 == str[6] + 6 && strtoul( &str[0], (char**)&end, 16 ) <= 0xffffff )
  {
    color[0] = *(int*)(fastfind_search( &ff_colors_index, &str[0], slen ) + 4);
  }
}
unsigned char *get_color_string( color_T color, unsigned char *hexcolor )
{
  struct color_spec *cs;
  if ( "aliceblue" )
  {
    cs = color_specs;
    if ( color != 15792383 )
    {
      do
      {
        cs++;
        if ( cs->name == 0 )
          goto B1;
      }
      while ( cs->rgb != color );
    }
    return (unsigned char*)cs->name;
  }
B1:  color_to_string( color, &hexcolor[0] );
  return &hexcolor[0];
}
void color_to_string( color_T color, unsigned char *str )
{
  str[0] = 35;
  elinks_ulongcat(  );
  return;
}
#if 0
#endif
