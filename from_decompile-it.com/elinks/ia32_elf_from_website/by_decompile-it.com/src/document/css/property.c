#include "property.c.h"
struct css_property_info css_property_info[10] = { { "background", 1, 1, &css_parse_background_value, 0 }
, { "background-color", 2, 1, &css_parse_color_value, 0 }
, { "color", 3, 1, &css_parse_color_value, 0 }
, { "display", 4, 2, &css_parse_display_value, 0 }
, { "font-style", 5, 3, &css_parse_font_style_value, 0 }
, { "font-weight", 6, 3, &css_parse_font_weight_value, 0 }
, { "text-align", 7, 4, &css_parse_text_align_value, 0 }
, { "text-decoration", 8, 3, &css_parse_text_decoration_value, 0 }
, { "white-space", 9, 3, &css_parse_white_space_value, 0 }
, { 0, 0, 0, 0, 0 }
 };
#if 0
#endif
