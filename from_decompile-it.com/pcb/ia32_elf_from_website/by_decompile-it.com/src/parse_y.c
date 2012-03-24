#include "parse_y.c.h"
static LayerTypePtr Layer;
static PolygonTypePtr Polygon;
static SymbolTypePtr Symbol;
static int pin_num;
static LibraryMenuTypePtr Menu;
static Boolean LayerFlag[18];
static char *layer_group_string;
static AttributeListTypePtr attr_list;
static yytype_uint8 yytranslate[292] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, '\'', '(', 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, '%', 2, '&', 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 3, 4, 5, 6, 7, 8, '\t', '\n', '', '', '\r', 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, ' ', '!', '"', '#', '$' };
static yytype_uint8 yyr1[197] = { 0, ')', '*', '*', '*', '*', ',', '+', '-', '+', '/', '.', '0', '0', '2', '1', '3', '3', '4', '4', '4', '5', '5', '5', '5', '6', '7', '8', '9', ':', ':', ':', ':', ';', ';', '<', '<', '=', '=', '=', '=', '>', '?', '@', 'A', 'A', 'A', 'B', 'B', 'C', 'C', 'C', 'D', 'D', 'E', 'E', 'F', 'G', 'F', 'F', 'F', 'H', 'F', 'F', 'I', 'I', 'I', 'I', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'O', 'Q', 'P', 'R', 'R', 'S', 'S', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'T', 'U', 'T', 'V', 'T', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', '`', 'a', 'a', 'a', 'b', 'b', 'b', 'b', 'b', 'd', 'c', 'f', 'e', 'h', 'g', 'j', 'i', 'l', 'k', 'm', 'm', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'o', 'n', 'p', 'p', 'q', 'q', 'q', 'q', 'q', 'q', 'q', 'q', 'r', 'q', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '|', '}', '}', 127, '~', 128, '~', 129, 129, 130, 130, 131, 131, 131, 132, 133, 134, 134, 135, 136, 136, 137, 137, 139, 138, 140, 140, 141, 141, 142, 143, 143, 144, 145, 145 };
static yytype_uint8 yyr2[197] = { 0, 2, 1, 1, 1, 1, 0, 14, 0, 2, 0, 2, 1, 0, 0, 2, 0, 4, 4, 6, 6, 1, 1, 1, 1, 6, 7, 7, 7, 6, 6, 6, 0, 0, 4, 0, 4, 0, 1, 1, 1, 6, 7, '\t', 4, 4, 0, 4, 0, 4, 4, 0, 1, 0, 1, 2, 1, 0, 2, 1, 1, 0, 2, 1, 1, 1, 1, 1, 1, '', '', '\n', '\t', 8, '\n', '\n', 0, '\n', 1, 0, 1, 2, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 0, 2, 0, 8, '\n', '\n', '\t', '', '', '', 8, '\t', '\t', 1, 2, 4, 4, 0, 1, 1, 1, 1, 1, 0, '', 0, 15, 0, 16, 0, 18, 0, 18, 1, 2, 1, 1, 1, 1, 1, 8, 8, '\n', '\n', 5, 5, 0, 2, 1, 2, 1, 1, 1, 1, 8, 8, '\n', '\n', 0, 2, '', '', '\n', '\t', 8, '\r', '\r', '', '\n', 1, 1, 1, 2, 0, '\t', 0, '\t', 1, 1, 1, 2, 1, 1, 0, 8, 8, 1, 0, 6, 1, 0, 1, 2, 0, '\t', 1, 0, 1, 2, 4, 1, 2, 5, 1, 0 };
static yytype_uint8 yydefact[609] = { 0, 5, 0, 2, 16, 0, 3, 0, 4, 0, 1, 0, 0, 0, '\t', 'n', 'o', 'p', 'q', 'r', '?', 0, 0, 0, '', 0, '6', 0, 0, '8', '@', 'A', 'B', 'C', 'D', ';', '<', 0, 15, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '7', 0, ':', 192, '>', 0, 0, 164, 0, 0, 0, 0, ' ', 21, 22, 23, 24, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 169, 170, 0, 0, 17, 0, 0, 0, 0, 0, '!', 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, '#', 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '%', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 165, 167, 20, 19, 0, 0, 0, 0, 0, 0, 0, 0, '.', '&', '\'', '(', 0, 0, 0, 0, 'L', 0, 0, 0, 0, 0, 0, 175, 175, 0, 0, 25, 0, 0, 0, 0, '"', 0, 0, 0, '0', 0, 0, 0, 0, 'O', 0, 0, 0, 0, 'I', 0, 0, 0, 0, 171, 173, 174, 0, 28, 26, 27, 30, 31, 29, '$', 0, 0, 0, '3', 0, 0, 0, 's', 0, 0, 0, 0, 0, 0, 'N', 'P', 0, 'R', 'S', 'T', 'U', 'V', 'W', '[', 'Z', 'Y', 0, 0, 0, 'H', 0, 0, 0, 0, 166, 172, 168, 0, 0, 0, 0, 0, '\r', 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 'M', 'Q', ']', 0, 0, 'G', 'J', 'K', 0, 0, 0, ',', '-', 0, 0, 0, 0, '', 0, 0, 0, 0, 0, 0, 0, 0, 138, '}', 0, 127, 128, 129, 130, 131, 0, 0, 0, 0, 0, 0, 0, 0, 'E', 'F', 0, 0, 0, ')', '/', 0, 0, 179, 0, 'u', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 't', '~', 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '*', '2', '1', 0, 7, 178, 0, 138, 0, 'w', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, '^', 0, 0, 0, 0, 0, 138, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'm', 0, 0, '+', 0, '{', 'v', 'y', 138, 0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'i', 177, 176, 182, 150, 150, 'x', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'X', 0, 0, 'f', 0, 0, '_', 'j', 0, 0, 181, 183, 0, 0, 0, 0, 150, 140, 0, 143, 142, 145, 144, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'b', 0, 0, 'h', 'g', 0, 0, 0, 180, 184, 0, 0, 0, 0, 0, 0, 0, 0, '|', 141, 151, 'z', 132, 133, 0, 0, 156, 0, 0, 0, '`', 'a', 0, 0, 'l', 'k', 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 'e', 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 160, 0, 134, 135, 'c', 'd', 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 185, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 189, 146, 147, 0, 0, 0, 0, 0, 0, 0, 186, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 149, 191, 0, 0, 0, 0, 152, 153, 0, 0, 157, 158 };
static yytype_int16 yydefgoto[105] = { -1, 2, 3, 4, 5, 6, 7, 281, 8, 9, 12, 42, 62, 63, 64, 65, 66, 89, 110, 132, 156, 157, 158, 159, 184, 213, 252, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 189, 223, 224, 225, 226, 393, 227, 228, 229, 230, 231, 232, 233, 234, 235, 420, 421, 14, 15, 256, 16, 350, 17, 376, 18, 426, 19, 425, 291, 292, 293, 455, 456, 457, 458, 459, 294, 295, 296, 460, 461, 297, 298, 69, 38, 39, 171, 172, 81, 198, 199, 200, 201, 347, 348, 448, 449, 450, 561, 571, 572, 573, 52, 53, 115 };
static yytype_int16 yypact[609] = { 11, -424, 16, -424, 47, 49, -424, 14, -424, 33, -424, 55, 77, 38, -424, -424, -424, -424, -424, -424, -424, 58, 117, 120, -424, 48, -424, 66, 49, -424, -424, -424, -424, -424, -424, -424, -424, 121, 33, -424, 100, 124, 92, 50, 73, 115, 122, 127, 137, 138, -424, 114, 66, -424, -424, 23, 23, -424, 132, 170, 175, 125, 177, -424, -424, -424, -424, -424, -424, 176, 193, 197, 198, 202, 203, 204, 205, 206, -424, -424, -424, 207, 208, -424, 210, 1, 209, 162, 129, 183, 211, 212, 216, 214, 219, 220, 221, 222, 223, 171, 186, 224, 225, -424, 227, 228, 229, 231, 232, 199, 213, 233, 105, 234, -424, 200, 235, 111, 239, 240, 215, 217, 218, 226, 230, 241, 242, 243, 245, 246, 247, 236, 237, 248, 250, 251, 255, 238, 256, 126, 257, 258, 259, -424, -424, -424, -424, -424, 260, 3, 262, 166, 263, 244, 264, 249, 253, -424, -424, -424, 265, 268, 272, 252, -424, 273, 133, 275, 254, 277, 278, 261, 261, 266, 267, -424, 269, 270, 274, 271, -424, 276, 280, 279, 286, 282, 284, 285, 281, 59, 283, 287, 288, 289, -424, 50, 292, 135, -10, -424, -424, -424, -6, -424, -424, -424, -424, -424, -424, -424, 293, 139, 291, 294, 295, 296, 297, -424, 136, 140, 298, 141, 299, 300, 59, -424, 66, -424, -424, -424, -424, -424, -424, -424, -424, -424, 50, 302, 301, -424, 290, 303, 312, 313, -424, -424, -424, 314, 304, 305, 315, 146, 309, 316, 306, 320, 108, 321, 322, 323, 324, 329, 330, 331, 50, -424, -424, 66, 310, 307, -424, -424, -424, 332, 333, 2, -424, -424, 311, 336, 343, 51, -424, 347, 317, 4, 147, 318, 319, 150, 151, 64, -424, 66, -424, -424, -424, -424, -424, 349, 350, 351, 352, 356, 357, 358, 325, -424, -424, 359, 360, 26, -424, -424, 326, 327, 338, 50, -424, 363, 334, 366, 367, 368, 369, 371, 372, 373, 374, -424, -424, 66, 375, 376, 377, 378, 379, 380, 381, 346, 383, 384, 385, -424, -424, -424, 353, -424, -424, 355, 108, 354, -424, 386, 387, 388, 392, 393, 394, 396, 397, 398, 399, 400, 401, 402, 403, 143, -424, 405, 406, 382, 370, 389, 75, 390, 108, 408, 409, 410, 411, 412, 413, 395, 391, 414, 415, 416, 418, 419, 417, 420, 421, 154, 404, 407, -424, 422, -424, -424, -424, 80, 424, 427, 144, 429, 431, 432, -424, -424, 433, 434, 435, 436, 423, 50, 438, 425, 440, 441, -2, -424, -424, -424, 308, 119, 119, -424, 442, 443, 444, 445, 446, 448, 449, 50, 5, 450, 451, -424, 426, 428, -424, 452, 453, -424, -424, 430, 437, 308, -424, 155, 158, 159, 163, 91, -424, 66, -424, -424, -424, -424, 103, 447, 439, 145, 454, 456, 455, 457, 458, 459, -424, 463, 464, -424, -424, 460, 461, 465, -424, -424, 467, 469, 470, 471, 472, 473, 475, 477, -424, -424, 66, -424, -424, -424, 462, 478, -424, 149, 479, 480, -424, -424, 50, 6, -424, -424, 481, 483, 485, 486, 487, 488, 489, 490, 492, -424, 466, 468, 494, 474, 476, 482, 484, -424, 491, 497, 500, 501, 502, 504, 506, 507, 508, -424, -424, 493, -424, -424, -424, -424, 495, 510, 511, 512, 514, 515, 516, 518, 519, -424, -424, 520, 522, 523, 524, 525, 526, 527, 529, 503, 498, 499, 534, 535, 537, 538, 539, 540, 505, 509, 503, -424, -424, -424, 541, 542, 543, 547, 548, 549, 550, -424, -424, 551, 552, 553, 554, 517, 513, 521, 50, 559, 557, 558, -424, -424, -424, 528, 530, 50, 562, -424, -424, 531, 532, -424, -424 };
static yytype_int16 yypgoto[105] = { -424, -424, -424, -424, -424, -424, -424, -424, 15, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -31, -424, 546, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, 78, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -130, 545, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -340, -288, -424, -129, -423, -424, -424, -424, -424, -424, -424, -424, -424, -424, -424, -194, -424, 536, -424, -424, 533, 131, -135, -424, -424, -424, -424, -424, -424, -148, -424, -424, -424, -266, -224, -52, -424 };
static yytype_int16 yytable[590] = { 78, 240, 267, 330, 102, 311, 174, 319, 471, 524, 374, -10, 1, 197, -53, 20, 10, 197, -6, -6, -10, -10, -10, 21, 22, 23, 79, 80, -8, 342, 244, -61, 491, -14, 246, 418, 401, 419, 445, 491, 312, 103, 268, 175, 320, 472, 525, -10, -52, 20, -57, -53, 20, 67, 11, 37, 68, 21, 22, 23, 21, 22, 23, 245, 343, -61, 13, 245, -61, 331, 306, 218, 219, 220, 221, 43, 70, 44, -52, 71, 286, -53, 287, 288, -57, 41, 330, -57, 222, 289, 290, 286, 40, 287, 288, -92, 286, 45, 287, 288, 289, 290, 51, 58, 329, 289, 290, 451, 134, 452, 453, 135, 61, 330, 139, 399, 454, 140, 72, 451, 427, 452, 453, 349, 286, 73, 287, 288, 454, 166, 74, 490, 167, 289, 290, 451, 191, 452, 453, 192, 75, 76, 248, 493, 454, 249, 391, 430, 496, 392, 431, 497, 519, 77, 46, 520, 47, 48, 55, 49, 56, 59, 86, 60, 87, 105, 107, 106, 108, 177, 83, 178, 242, 257, 243, 258, 84, 259, 262, 260, 263, 85, 90, 279, 321, 280, 322, 325, 327, 326, 328, 418, 482, 419, 483, 484, 486, 485, 487, 91, 488, 88, 489, 92, 93, 94, 95, 96, 97, 121, 99, 100, 98, 101, 104, 78, 109, 111, 112, 113, 114, 440, 116, 117, 118, 119, 122, 123, 124, 120, 125, 126, 127, 492, 128, 129, 130, 136, 138, 133, 137, 470, 141, 142, 148, 149, 150, 131, 151, 152, 316, 160, 153, 161, 162, 143, 144, 145, 163, 165, 168, 169, 170, 173, 146, 176, 179, 282, 185, 181, 147, 186, 155, 154, 183, 187, 190, 164, 193, 78, 195, 196, 180, 210, 197, 214, 182, 215, 216, 236, 446, 238, 188, 237, 194, 241, 247, 462, 253, 254, 255, 481, 266, 202, 203, 269, 584, 204, 206, 205, 523, 208, 207, 212, 209, 273, 274, 275, 211, 283, 217, 278, 251, 285, 299, 300, 301, 302, 271, 239, 250, -14, 303, 304, 305, 309, 310, 261, 264, 447, 265, 270, 314, 272, 276, 277, 284, 308, 307, 315, 317, 313, 332, 333, 334, 335, 318, 323, 324, 336, 337, 338, 340, 341, 344, 339, 351, 345, 346, 353, 354, 355, 356, 352, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 377, 378, 379, 372, 373, 375, 380, 381, 382, 599, 383, 384, 385, 386, 387, 388, 389, 390, 605, 394, 395, 397, 402, 403, 404, 405, 406, 407, 410, 411, 412, 396, 413, 414, 415, 417, 0, 416, 428, 398, 400, 429, 409, 432, 408, 433, 434, 435, 436, 437, 438, 78, 441, 422, 443, 444, 463, 464, 423, 466, 467, 465, 468, 469, 473, 474, 477, 478, 0, 500, 0, 501, 424, 499, 439, 475, 442, 504, 505, 476, 479, 509, 508, 510, 511, 512, 513, 514, 480, 515, 495, 516, 518, 521, 522, 0, 494, 527, 526, 528, 529, 530, 531, 532, 533, 498, 534, 502, 537, 506, 503, 543, 507, 517, 544, 545, 546, 535, 547, 536, 548, 549, 550, 538, 553, 554, 555, 539, 556, 557, 558, 540, 559, 560, 562, 541, 563, 564, 565, 566, 567, 568, 542, 569, 551, 552, 570, 574, 576, 577, 575, 578, 579, 580, 581, 582, 0, 587, 585, 586, 583, 588, 589, 590, 597, 0, 596, 591, 592, 593, 594, 595, 598, 600, 601, 602, 606, 603, 0, 0, 607, 604, 50, 608, 54, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82 };
static yytype_int16 yycheck[590] = { 52, 195, 226, 291, 3, 3, 3, 3, 3, 3, 350, 0, 1, 23, 0, 1, 0, 23, 7, 8, 9, 10, 11, 9, 10, 11, 3, 4, 17, 3, 40, 17, 455, 22, 40, 37, 376, 39, 40, 462, 38, 40, 236, 40, 40, 40, 40, 36, 0, 1, 36, 0, 1, 3, 7, 22, 6, 9, 10, 11, 9, 10, 11, 198, 38, 17, 17, 202, 17, 293, 264, 12, 13, 14, 15, 37, 3, 39, 30, 6, 16, 30, 18, 19, 36, 8, 374, 36, 29, 25, 26, 16, 37, 18, 19, 36, 16, 39, 18, 19, 25, 26, 36, 3, 40, 25, 26, 16, 3, 18, 19, 6, 20, 401, 3, 40, 25, 6, 3, 16, 40, 18, 19, 317, 16, 3, 18, 19, 25, 3, 3, 40, 6, 25, 26, 16, 3, 18, 19, 6, 3, 3, 3, 40, 25, 6, 3, 3, 3, 6, 6, 6, 3, 39, 37, 6, 39, 37, 37, 39, 39, 37, 37, 39, 39, 3, 37, 5, 39, 3, 38, 5, 37, 37, 39, 39, 6, 37, 37, 39, 39, 6, 6, 37, 37, 39, 39, 37, 37, 39, 39, 37, 37, 39, 39, 37, 37, 39, 39, 6, 37, 24, 39, 6, 6, 3, 3, 3, 3, 38, 3, 3, 6, 3, 5, 267, 33, 6, 6, 3, 6, 415, 3, 3, 3, 3, 40, 3, 3, 6, 3, 3, 3, 457, 3, 3, 37, 3, 3, 6, 40, 435, 3, 3, 3, 3, 3, 34, 3, 3, 281, 3, 5, 3, 3, 40, 39, 39, 3, 3, 3, 3, 3, 3, 38, 3, 3, 252, 3, 5, 40, 3, 35, 37, 21, 3, 3, 39, 3, 331, 3, 3, 38, 3, 23, 3, 37, 3, 3, 6, 420, 3, 40, 6, 40, 3, 3, 426, 3, 3, 3, 449, 224, 172, 38, 3, 572, 40, 38, 40, 504, 40, 38, 27, 38, 3, 3, 3, 39, 3, 39, 6, 28, 3, 3, 3, 3, 3, 38, 40, 39, 22, 3, 3, 3, 3, 3, 39, 39, 31, 40, 40, 6, 40, 40, 40, 40, 40, 38, 6, 3, 40, 3, 3, 3, 3, 39, 39, 39, 3, 3, 3, 3, 3, 38, 40, 3, 40, 30, 3, 3, 3, 3, 39, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 39, 3, 3, 3, 3, 3, 3, 39, 38, 40, 3, 3, 3, 592, 3, 3, 3, 3, 3, 3, 3, 3, 601, 3, 3, 40, 3, 3, 3, 3, 3, 3, 3, 3, 3, 38, 3, 3, 6, 3, -1, 6, 3, 39, 39, 3, 40, 3, 38, 3, 3, 3, 3, 3, 3, 492, 3, 38, 3, 3, 3, 3, 40, 3, 3, 6, 3, 3, 3, 3, 3, 3, -1, 3, -1, 3, 39, 6, 40, 38, 40, 3, 3, 40, 39, 3, 6, 3, 3, 3, 3, 3, 40, 3, 40, 3, 3, 3, 3, -1, 38, 3, 6, 3, 3, 3, 3, 3, 3, 40, 3, 38, 3, 38, 40, 3, 40, 40, 3, 3, 3, 40, 3, 40, 3, 3, 3, 38, 3, 3, 3, 40, 3, 3, 3, 38, 3, 3, 3, 40, 3, 3, 3, 3, 3, 3, 40, 3, 40, 39, 32, 38, 3, 3, 40, 3, 3, 3, 3, 39, -1, 3, 6, 6, 40, 3, 3, 3, 40, -1, 38, 6, 6, 6, 6, 6, 40, 3, 6, 6, 3, 38, -1, -1, 38, 40, 25, 40, 28, 38, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 56 };
int yychar;
YYSTYPE yylval;
int yynerrs;
int yyparse( void )
{
  int eax;
  int ecx;
  int edx;
  int ebx;
  int bh;
  int ebp_3248;
  int ebp_3216;
  int yystate;
  int yyn;
  int yyresult;
  int yyerrstatus;
  int yytoken;
  yytype_int16 yyssa[200];
  yytype_int16 *yyss;
  yytype_int16 *yyssp;
  YYSTYPE yyvsa[200];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;
  unsigned int yystacksize;
  YYSTYPE yyval;
  int yylen;
  yystate = 0;
{
  char p_number[8];
  yyssp[0] = yyssa[0];
  yynerrs = 0;
  yychar = -2;
  yyerrstatus = 0;
  while ( 1 )
  {
    yyssp[0] = yyn/*.1_2of4*/;
    if ( yyssa[0] <= yyssp )
    {
      if ( 9999 >= 200 && calloc( ( ( 10000 << 4 ) - ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) ) + 11, 10000 ) )
      {
        yyssp[0] = yyssp - yyssa[0];
      {
        /* phantom */ unsigned int yynewbytes;
        yyssp[0] = 1 + ( yyssp >> 1 );
        yysize = 1 + ( yyssp >> 1 );
        memcpy( calloc( ( ( 10000 << 4 ) - ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) ) + 11, 10000 ), yyssa, ( 1 + ( yyssp >> 1 ) ) * 2 );
      {
        /* phantom */ unsigned int yynewbytes;
        yyssp[0] = (/*HI*/int)( ( ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) + 11 ) * 0xaaaaaaab ) >> 3;
        memcpy( calloc( ( ( 10000 << 4 ) - ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) ) + 11, 10000 ) + ( ( (/*HI*/int)( ( ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) + 11 ) * 0xaaaaaaab ) >> 3 ) * 12 ), yyvs, ( yysize + ( ( 1 + ( yyssp >> 1 ) ) * 2 ) ) << 2 );
        yyssp[0] = yyssa[0];
        if ( yyssa[0] != yyssa[0] )
          free( yyssp );
        yyssp[0] = calloc( ( ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) << 4 ) - ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) ) + 11, ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) + ( ( ebp_3216 + -1 ) * 2 );
        if ( calloc( ( ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) << 4 ) - ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) ) + 11, ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) + ( ( ebp_3216 + -1 ) * 2 ) < calloc( ( ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) << 4 ) - ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ) ) + 11, ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) + ( ( ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) + -1 ) * 2 ) )
          ebp_3216 = ebp_3232 + ( ( ecx + eax ) << 2 );
        else
          yyresult = 1;
          yyssp += yyssp[0] / 2;
          if ( ebp_3220 != yyssp + edx )
            yyssp += ( ~( ( yyssp + -2 ) - ebp_3220 ) & -2 ) / 2;
            if ( ebp_3292 != yyssp )
              free( ebp_3220 );
            yyvs = 0;
            if ( ( 0 ^ 0 ) == 0 )
              break;
            __stack_chk_fail( );
            r_insert_entry( &Polygon->BoundingBox.X1, (int)( &Polygon->BoundingBox ), 0 );
            yyssp[0] = yyssp - ( yylen * 2 );
            ebp_3216 = ( ebp_3216 - ( yylen * 12 ) ) + 12;
            *(int*)(( ebp_3216 - ( yylen * 12 ) ) + 12) = yyval.number;
            *(int*)(( ebp_3216 - ( yylen * 12 ) ) + 16) = yyval.flagtype.t[0];
            *(int*)(( ebp_3216 - ( yylen * 12 ) ) + 20) = yyval.flagtype.t[4];
            yystate = *(short*)(yyssp - ( yylen * 2 )) + yypgoto[ yyr1[ ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ] + -41 ];
            if ( yyssp[0] + yypgoto[ yyr1[ ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ] + -41 ] <= 589 && yycheck[ yystate ] == yyssp[0] )
              yystate = yytable[ yystate ];
            else
              yyn = yydefgoto[ yyr1[ ( ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : ( yystacksize * 2 ) > 10000 ? yystacksize * 2 : 10000 ) * 2 ] + -41 ];
          else
            yyssp = ebp_3220;
      }
      }
      }
      else
      {
        yyresult = 2;
        Message( "ERROR parsing file '%s'\n    line:        %i\n    description: '%s'\n", yyfilename, yylineno, "memory exhausted" );
      }
    }
    yyn = yypact[ yyn ];
    if ( yypact[ yystate ] != -424 )
    {
      if ( yychar == -2 )
      {
        yychar = yylex( );
      }
      if ( yychar <= 0 )
      {
        yychar = 0;
        yytoken = 0;
      }
      else
      {
        yytoken = 2;
        if ( yychar <= 291 )
          yytoken = yytranslate[ yychar ];
      }
      yyn = yyn + yytoken;
      if ( yyn + yytoken <= 589 && yytoken == yycheck[ yyn ] )
      {
        yyn = yytable[ yyn ];
        if ( yytable[ yyn ] <= 0 )
        {
          if ( yyn == -93 )
          {
            if ( yyerrstatus )
            {
              if ( yyerrstatus == 3 )
              {
                if ( yychar <= 0 )
                {
                  if ( 1 )
                    yyresult = 1;
                }
                else
                {
                  yychar = -2;
                  yyvsp = ebp_3216;
                  yyss[0] = ebp_3220;
                  while ( yyn == -424 || yyn + 1 > 589 || yycheck[ yyn ] != 1 || yytable[ yyn ] <= 0 )
                  {
                    if ( yyssp == yyss )
                    {
                      yyssp = ebp_3220;
                      yyresult = 1;
                    }
                    else
                    {
                      yyssp[0] = yyssp + -2;
                      yyvsp = &yyvsp[ -12 ];
                      yyn = *(short*)(yyssp + -2);
                    }
                  }
                  if ( yyn != 10 )
                  {
                    ebp_3216 = yyvsp[1].number;
                    *ebp_3216 = yylval.number;
                    *(int*)(ebp_3216 + 4) = yylval.flagtype.t[0];
                    *(int*)(ebp_3216 + 8) = yylval.flagtype.t[4];
                    yyerrstatus = 3;
                  }
                  else
                    yyresult = 0;
                }
              }
              yyvsp = ebp_3216;
              yyss[0] = ebp_3220;
            }
            else
            {
              Message( "ERROR parsing file '%s'\n    line:        %i\n    description: '%s'\n", yyfilename, yylineno, "syntax error" );
              yyvsp = ebp_3216;
              yynerrs++;
              yyss[0] = ebp_3220;
            }
          }
          else
          {
            if ( yyn == 0 )
              continue;
            else
              yyn = 0 - yyn;
              yylen = yyr2[ 0 - yyn ];
              yyval.flagtype.t[0] = *(int*)(ebp_3216 + ( ( 1 - yyr2[ 0 - yyn ] ) * 12 ) + 4);
              yyval.flagtype.t[4] = *(int*)(ebp_3216 + ( ( 1 - yyr2[ 0 - yyn ] ) * 12 ) + 8);
              switch ( ( 0 - yyn ) + -5 )
              {
              case 1:
              {
                int i;
                if ( yyPCB )
                {
                  i = 0;
                  do
                  {
                    LayerFlag[ i ] = 0;
                    i++;
                  }
                  while ( i + 1 != 18 );
                  layer_group_string = 0;
                  yyFont = &yyPCB->Font;
                  yyData = &yyPCB->Data;
                  yyPCB->Data->pcb = yyPCB;
                  yyPCB->Data->LayerN = 0;
                }
                else
                {
                  Message( ebp_3384 );
                }
              }
                break;
              case 2:
                if ( layer_group_string == 0 )
                  layer_group_string = Settings.Groups;
                CreateNewPCBPost( yyPCB, 0 );
                if ( ParseGroupString( layer_group_string, &yyPCB->LayerGroups, yyData->LayerN ) )
                {
                  Message( ebp_3384 );
                }
                else
                {
                  ebp_3248 = 0;
                  PCB = yyPCB;
                  if ( yyData->LayerN >= -1 )
                  {
                    do
                    {
                      if ( yyData->Layer->PolygonN )
                      {
                        j = 0;
                        do
                        {
                          InitClip( yyData, ( ebp_3248 * 92 ) + 64 + yyData + 12, yyData->ViaN + ( 0 * 60 ) );
                          j++;
                        }
                        while ( yyData->Layer->PolygonN <= j );
                      }
                      ebp_3248++;
                    }
                    while ( ebp_3248 <= yyData->LayerN + 1 );
                    yyssp[0] = ebp_3256;
                  }
                  PCB = PCB;
                }
                break;
              case 3:
                PreLoadElementPCB( );
                layer_group_string = 0;
                break;
              case 4:
                LayerFlag[0] = 1;
                LayerFlag[1] = 1;
                yyData->LayerN = 2;
                PostLoadElementPCB( );
                break;
              case 5:
                if ( yyData == 0 || yyFont == 0 )
                {
                  Message( ebp_3384 );
                }
                else
                {
                  do
                  {
                    LayerFlag[ 0 ] = 0;
                  }
                  while ( 0 + 1 + 1 != 18 );
                  yyData->LayerN = 0;
                }
                break;
              case 9:
                if ( yyFont == 0 )
                  Message( "illegal fileformat\n" );
                else
                {
                  yyFont->Valid = 0;
                  do
                  {
                    yyFont->Symbol->Valid = 0;
                  }
                  while ( 0 + 28 + 28 != 7168 );
                }
                break;
              case 10:
                yyFont->Valid = 1;
                SetFontInfo( yyFont );
                break;
              case 12:
                if ( *(int*)(ebp_3216 + -12) > 0x1324007 )
                  Message( "ERROR:  The file you are attempting to load is in a format\nwhich is too new for this version of pcb.  To load this file\nyou need a version of pcb which is &gt;= %d.  If you are\nusing a version built from cvs sources, the source date\nmust be &gt;= %d.  This copy of pcb can only read files\nup to file version %d.\n", *(long long*)(ebp_3216 + -12), 20070407 );
                break;
              case 13:
                yyPCB->MaxWidth = 10000000;
                yyPCB->MaxHeight = 10000000;
                yyPCB->Name = *(int*)(ebp_3216 + -12);
                break;
              case 14:
                yyPCB->Name = *(int*)(ebp_3216 + -36);
                yyPCB->MaxWidth = *(int*)(ebp_3216 + -24) * 100;
                yyPCB->MaxHeight = *(int*)(ebp_3216 + -12) * 100;
                break;
              case 15:
                yyPCB->Name = *(int*)(ebp_3216 + -36);
                yyPCB->MaxWidth = *(int*)(ebp_3216 + -24);
                yyPCB->MaxHeight = *(int*)(ebp_3216 + -12);
                break;
              case 20:
                yyPCB->Grid = (double)( *(int*)(ebp_3216 + -36) * 100 );
                yyPCB->GridOffsetX = *(int*)(ebp_3216 + -24) * 100;
                yyPCB->GridOffsetY = *(int*)(ebp_3216 + -12) * 100;
                break;
              case 21:
                yyPCB->Grid = (double)( *(int*)(ebp_3216 + -48) * 100 );
                yyPCB->GridOffsetX = *(int*)(ebp_3216 + -36) * 100;
                yyPCB->GridOffsetY = *(int*)(ebp_3216 + -24) * 100;
                Settings.DrawGrid = *(int*)(ebp_3216 + -12) != 0;
                break;
              case 22:
                yyPCB->Grid = 100.000000000000 * *(float*)(ebp_3216 + -48);
                yyPCB->GridOffsetX = *(int*)(ebp_3216 + -36) * 100;
                yyPCB->GridOffsetY = *(int*)(ebp_3216 + -24) * 100;
                Settings.DrawGrid = *(int*)(ebp_3216 + -12) != 0;
                break;
              case 23:
                yyPCB->Grid = *(float*)(ebp_3216 + -48);
                yyPCB->GridOffsetX = *(int*)(ebp_3216 + -36);
                yyPCB->GridOffsetY = *(int*)(ebp_3216 + -24);
                Settings.DrawGrid = *(int*)(ebp_3216 + -12) != 0;
                break;
              case 24:
                yyPCB->CursorX = *(int*)(ebp_3216 + -36) * 100;
                yyPCB->CursorY = *(int*)(ebp_3216 + -24) * 100;
                yyPCB->Zoom = (double)( *(int*)(ebp_3216 + -12) * 2 );
                break;
              case 25:
                yyPCB->CursorX = *(int*)(ebp_3216 + -36);
                yyPCB->CursorY = *(int*)(ebp_3216 + -24);
                yyPCB->Zoom = (double)( *(int*)(ebp_3216 + -12) );
                break;
              case 26:
                yyPCB->CursorX = *(int*)(ebp_3216 + -36);
                yyPCB->CursorY = *(int*)(ebp_3216 + -24);
                yyPCB->Zoom = *(float*)(ebp_3216 + -12);
                break;
              case 29:
                yyPCB->IsleArea = *(float*)(ebp_3216 + -12);
                break;
              case 31:
                yyPCB->ThermScale = *(float*)(ebp_3216 + -12);
                break;
              case 36:
                yyPCB->Bloat = *(int*)(ebp_3216 + -36);
                yyPCB->Shrink = *(int*)(ebp_3216 + -24);
                yyPCB->minWid = *(int*)(ebp_3216 + -12);
                yyPCB->minRing = *(int*)(ebp_3216 + -12);
                break;
              case 37:
                yyPCB->Bloat = *(int*)(ebp_3216 + -48);
                yyPCB->Shrink = *(int*)(ebp_3216 + -36);
                yyPCB->minWid = *(int*)(ebp_3216 + -24);
                yyPCB->minSlk = *(int*)(ebp_3216 + -12);
                yyPCB->minRing = *(int*)(ebp_3216 + -24);
                break;
              case 38:
                yyPCB->Bloat = *(int*)(ebp_3216 + -72);
                yyPCB->Shrink = *(int*)(ebp_3216 + -60);
                yyPCB->minWid = *(int*)(ebp_3216 + -48);
                yyPCB->minSlk = *(int*)(ebp_3216 + -36);
                yyPCB->minDrill = *(int*)(ebp_3216 + -24);
                yyPCB->minRing = *(int*)(ebp_3216 + -12);
                break;
              case 39:
                *(int*)(ebp_3216 + -12) & 0xfffff = MakeFlags( yyssp );
                memcpy( yyPCB + 4, *(int*)(0), 12 );
                break;
              case 40:
                ebp = string_to_pcbflags( (char*)yyssp );
                memcpy( yyPCB + 4, *(int*)(0), 12 );
                break;
              case 42:
                layer_group_string = *(int*)(ebp_3216 + -12);
                break;
              case 44:
                if ( ParseRouteString( *(int*)(ebp_3216 + -12), ebp_3380, ebp_3376 ) )
                  Message( "illegal route-style string\n" );
                break;
              case 45:
                break;
              case 52:
                attr_list = &yyPCB->Attributes;
                break;
              case 56:
                yyElement = 0;
                break;
              case 64:
                // memcpy( ebp_3352, ebp_3216 + -12, 12 );
                CreateNewVia( yyData, *(int*)(ebp_3216 + -96), *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -60), *(int*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), ebp_3216 + -24 );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 65:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3352, *(int*)(0), 12 );
                CreateNewVia( yyData, yyData, yyData, *(int*)(ebp_3216 + -72) * 100, ebp_3380, ebp_3376, ebp_3372, ebp_3368, "badarg" );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 66:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                i = *(int*)(ebp_3216 + -60);
                // memcpy( ebp_3352, *(int*)(0), 12 );
                break;
              case 67:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3352, *(int*)(0), 12 );
                break;
              case 68:
              {
                BDimension hole = *(int*)(yysize + -36) * 40;
                ebp = OldFlags( *(int*)(yysize + -12) );
                // memcpy( ebp_3352, *(int*)(0), 12 );
                CreateNewVia( yyData, yyData, yyData, *(int*)(yysize + -60) * 100, *(int*)(yysize + -48) * 100, *(int*)(yysize + -36) * 100, 3000, ( *(int*)(yysize + -36) * 100 ) + 600, hole );
                SaveFree( *(int*)(yysize + -24) );
              }
                break;
              case 69:
                // memcpy( ebp_3352, ebp_3216 + -12, 12 );
                CreateNewRat( yyData, *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -60), *(int*)(ebp_3216 + -24), Settings.RatThickness, "badarg" );
                break;
              case 70:
                ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                // memcpy( ebp_3352, *(int*)(0), 12 );
                CreateNewRat( yyData, yyData, yyData, *(int*)(ebp_3216 + -84) * 100, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -48) * 100, *(int*)(ebp_3216 + -36) * 100, *(int*)(ebp_3216 + -60), ebp_3216 + -24 );
                break;
              case 71:
                if ( *(int*)(ebp_3216 + -48) + -1 <= 17 )
                {
                  if ( *(char*)(*(int*)(ebp_3216 + -48) + 0x817cb67) == 0 )
                  {
                    Layer = &yyData->Layer[ *(int*)(ebp_3216 + -48) + -1 ];
                    yyData->Layer[ *(int*)(ebp_3216 + -48) + -1 ].Name = *(int*)(ebp_3216 + -36);
                    *(char*)(*(int*)(ebp_3216 + -48) + 0x817cb67) = 1;
                    if ( yyData->LayerN + 2 < *(int*)(ebp_3216 + -48) )
                      yyData->LayerN = *(int*)(ebp_3216 + -48) + -2;
                  }
                  else
                  {
                    Message( "ERROR parsing file '%s'\n    line:        %i\n    description: '%s'\n", yyfilename, yylineno, ebp_3372 );
                  }
                }
                else
                {
                }
                break;
              case 83:
                ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                i = *(int*)(ebp_3216 + -60);
                // memcpy( ebp_3364, *(int*)(0), 12 );
                CreateNewPolygonFromRectangle( Layer, Layer, Layer, i * 100, *(int*)(ebp_3216 + -48) * 100, "badarg" );
                break;
              case 87:
                attr_list = &Layer->Attributes;
                break;
              case 89:
                // memcpy( ebp_3380, ebp_3216 + -24, 12 );
                Polygon = CreateNewPolygon( Layer, "badarg" );
                break;
              case 90:
                if ( Polygon->PointN > 2 )
                {
                  SetPolygonBoundingBox( Polygon );
                  if ( Layer->polygon_tree == 0 )
                  {
                    r_insert_entry( &Polygon->BoundingBox.X1, (int)( &Polygon->BoundingBox ), 0 );
                  }
                  else
                  {
                    r_insert_entry( &Polygon->BoundingBox.X1, (int)( &Polygon->BoundingBox ), 0 );
                  }
                }
                else
                {
                  Message( "WARNING parsing file '%s'\n    line:        %i\n    description: 'ignored polygon (&lt; 3 points)'\n", yyfilename, yylineno );
                  DestroyObject( yyData, 8, (void*)Layer, (void*)Polygon, (void*)Polygon );
                }
                break;
              case 91:
                // memcpy( ebp_3356, ebp_3216 + -12, 12 );
                CreateNewLineOnLayer( Layer, *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -60), *(int*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -24), "badarg" );
                break;
              case 92:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3356, *(int*)(0), 12 );
                CreateNewLineOnLayer( Layer, Layer, Layer, *(int*)(ebp_3216 + -72) * 100, ebp_3380, ebp_3376, ebp_3372, "badarg" );
                break;
              case 93:
                if ( ( ( (unsigned char)( *(int*)(ebp_3216 + -12) ) & 16 ) & 255 ) == 0 )
                {
                  ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                  // memcpy( ebp_3356, *(int*)(0), 12 );
                  CreateNewLineOnLayer( Layer, Layer, Layer, *(int*)(ebp_3216 + -72) * 100, ebp_3380, ebp_3376, ebp_3372, "badarg" );
                }
                break;
              case 94:
                // memcpy( ebp_3348, ebp_3216 + -12, 12 );
                CreateNewArcOnLayer( Layer, *(int*)(ebp_3216 + -108), *(int*)(ebp_3216 + -96), *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36), ebp_3216 + -24 );
                break;
              case 95:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3348, *(int*)(0), 12 );
                CreateNewArcOnLayer( Layer, Layer, Layer, *(int*)(ebp_3216 + -96) * 100, ebp_3380, ebp_3376, ebp_3372, ebp_3368, ebp_3364, "badarg" );
                break;
              case 96:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3348, *(int*)(0), 12 );
                CreateNewArcOnLayer( Layer, Layer, Layer, *(int*)(ebp_3216 + -96) * 100, ebp_3380, ebp_3376, ebp_3372, ebp_3368, ebp_3364, "badarg" );
                break;
              case 97:
                ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                // memcpy( ebp_3356, *(int*)(0), 12 );
                CreateNewText( Layer, &Layer->Name[0], Layer, yyFont, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -48) * 100, *(char*)(ebp_3216 + -36), "badarg" );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 98:
                if ( ( ch & 4 ) & 255 )
                {
                  LayerTypePtr lay;
                  i = yyData->Layer[ yyData->LayerN + ( ( ( *(int*)(ebp_3216 + -12) >> 7 ) ^ 1 ) & 1 ) ].Name;
                  ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                  // memcpy( ebp_3356, *(int*)(0), 12 );
                  CreateNewText( &i, &i, i, yyFont, *(int*)(yysize + -72) * 100, *(int*)(yysize + -60) * 100, *(char*)(yysize + -48), yysize + -36 );
                  SaveFree( &yysize );
                }
                else
                {
                  ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                  // memcpy( ebp_3356, *(int*)(0), 12 );
                  CreateNewText( Layer, &Layer->Name[0], yyFont, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -60) * 100, *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), ebp_3216 + -24 );
                }
                break;
              case 99:
                pcb_save = *(int*)(ebp_3216 + -12);
                if ( ( bh & 4 ) & 255 )
                {
                  /* phantom */ LayerTypePtr lay;
                  // memcpy( ebp_3356, *(int*)(0), 12 );
                  CreateNewText( &yyData->Layer[ yyData->LayerN + ( ( ( pcb_save >> 7 ) ^ 1 ) & 1 ) ], yyFont, *(int*)(yysize + -72), *(int*)(yysize + -60), *(char*)(yysize + -48), *(int*)(yysize + -36), *(int*)(yysize + -24), "badarg" );
                }
                else
                {
                  // memcpy( ebp_3356, *(int*)(0), 12 );
                  CreateNewText( Layer, yyFont, *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -60), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -24), "badarg" );
                }
                break;
              case 102:
                CreateNewPointInPolygon( Polygon, *(int*)(ebp_3216 + -24), ebp_3376 );
                break;
              case 103:
                CreateNewPointInPolygon( Polygon, *(int*)(ebp_3216 + -24), ebp_3376 );
                break;
              case 110:
                ebp = MakeFlags( 0 );
                ebp_3248 = *(int*)(ebp_3216 + -48) * 100;
                0 = MakeFlags( *(char*)(ebp_3216 + -24) );
                // memcpy( ebp_3336, *(int*)(0), 12 );
                // memcpy( ebp_3380, ebp_228, 12 );
                yyElement = CreateNewElement( yyData, &yyData->ViaN, &yyElement->BoundingBox.X1, yyFont[0].MaxHeight, *(int*)(ebp_3216 + -36) * 100, *(int*)(ebp_3216 + -36) * 100, *(char*)(ebp_3216 + -24), *(char*)(ebp_3216 + -24), 100, 100 );
                SaveFree( *(int*)(ebp_3216 + -72) );
                SaveFree( *(int*)(ebp_3216 + -60) );
                pin_num = 1;
                break;
              case 112:
                ebp = OldFlags( *(int*)(ebp_3216 + -24) );
                ebp_3248 = *(int*)(ebp_3216 + -72) * 100;
                *(int*)(ebp_3216 + -108) = OldFlags( *(int*)(ebp_3216 + -36) );
                // memcpy( ebp_3336, *(int*)(0), 12 );
                // memcpy( ebp_3380, ebp_252, 12 );
                yyElement = CreateNewElement( yyData, &yyData->ViaN, &yyElement->BoundingBox.X1, yyFont[0].MaxHeight, ebp_3248, ebp_3248, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36) );
                SaveFree( *(int*)(ebp_3216 + -96) );
                SaveFree( *(int*)(ebp_3216 + -84) );
                pin_num = 1;
                break;
              case 114:
                ebp = OldFlags( *(int*)(ebp_3216 + -24) );
                ebp_3248 = *(int*)(ebp_3216 + -96);
                *(int*)(ebp_3216 + -120) = OldFlags( *(int*)(ebp_3216 + -36) );
                // memcpy( ebp_3336, *(int*)(0), 12 );
                // memcpy( ebp_3380, ebp_276, 12 );
                yyElement = CreateNewElement( yyData, &yyData->ViaN, &yyElement->BoundingBox.X1, yyFont[0].MaxHeight, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36) );
                SaveFree( *(int*)(ebp_3216 + -108) );
                SaveFree( *(int*)(ebp_3216 + -96) );
                SaveFree( *(int*)(ebp_3216 + -84) );
                pin_num = 1;
                break;
              case 116:
                ebp = OldFlags( *(int*)(ebp_3216 + -24) );
                ebp_3248 = *(int*)(ebp_3216 + -108);
                ebp = OldFlags( *(int*)(ebp_3216 + -144) );
                // memcpy( ebp_3336, *(int*)(0), 12 );
                // memcpy( ebp_3380, ebp_300, 12 );
                yyElement = CreateNewElement( yyData, &yyData->ViaN, &yyElement->BoundingBox.X1, yyFont[0].MaxHeight, ( *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84) ) * 100, ( *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84) ) * 100, *(char*)(ebp_3216 + -48), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36) );
                *(int*)CreateNewElement( yyData, &yyData->ViaN, &yyElement->BoundingBox.X1, yyFont[0].MaxHeight, ( *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84) ) * 100, ( *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84) ) * 100, *(char*)(ebp_3216 + -48), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36) )/*.216*/ = *(int*)(ebp_3216 + -96) * 100;
                *(int*)CreateNewElement( yyData, &yyData->ViaN, &yyElement->BoundingBox.X1, yyFont[0].MaxHeight, ( *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84) ) * 100, ( *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84) ) * 100, *(char*)(ebp_3216 + -48), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36) )/*.220*/ = *(int*)(ebp_3216 + -84) * 100;
                SaveFree( *(int*)(ebp_3216 + -132) );
                SaveFree( *(int*)(ebp_3216 + -120) );
                SaveFree( *(int*)(ebp_3216 + -108) );
                break;
              case 118:
                // memcpy( ebp_3332, ebp_3216 + -24, 12 );
                // memcpy( ebp_3372, ebp_3216 + -144, 12 );
                yyElement = CreateNewElement( yyData, yyElement, yyFont, "badarg", *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84), *(char*)(ebp_3216 + -48), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36), ebp_3320, "badarg" );
                *(int*)CreateNewElement( yyData, yyElement, yyFont, "badarg", *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84), *(char*)(ebp_3216 + -48), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36), ebp_3320, "badarg" )/*.216*/ = *(int*)(ebp_3216 + -96);
                *(int*)CreateNewElement( yyData, yyElement, yyFont, "badarg", *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -60) + *(int*)(ebp_3216 + -84), *(char*)(ebp_3216 + -48), *(char*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -36), ebp_3320, "badarg" )/*.220*/ = *(int*)(ebp_3216 + -84);
                SaveFree( *(int*)(ebp_3216 + -132) );
                SaveFree( *(int*)(ebp_3216 + -120) );
                SaveFree( *(int*)(ebp_3216 + -108) );
                break;
              case 111:
              case 113:
              case 115:
              case 117:
              case 119:
                SetElementBoundingBox( yyData, yyElement, yyFont );
                break;
              case 127:
                CreateNewLineInElement( yyElement, *(int*)(ebp_3216 + -60) * 100, ebp_3376, ebp_3372, ebp_3368, ebp_3364 );
                break;
              case 128:
                CreateNewLineInElement( yyElement, *(int*)(ebp_3216 + -60) * 100, ebp_3376, ebp_3372, ebp_3368, ebp_3364 );
                break;
              case 129:
                CreateNewArcInElement( yyElement, *(int*)(ebp_3216 + -84) * 100, ebp_3376, ebp_3372, ebp_3368, ebp_3364, ebp_3360, ebp_3356 );
                break;
              case 130:
                CreateNewArcInElement( yyElement, *(int*)(ebp_3216 + -84) * 100, ebp_3376, ebp_3372, ebp_3368, ebp_3364, ebp_3360, ebp_3356 );
                break;
              case 131:
                yyElement->MarkX = *(int*)(ebp_3216 + -24);
                yyElement->MarkY = *(int*)(ebp_3216 + -12);
                break;
              case 132:
                yyElement->MarkX = *(int*)(ebp_3216 + -24) * 100;
                yyElement->MarkY = *(int*)(ebp_3216 + -12) * 100;
                break;
              case 141:
                CreateNewLineInElement( yyElement, yyElement->MarkX + *(int*)(ebp_3216 + -60), yyElement->MarkY + *(int*)(ebp_3216 + -48), yyElement->MarkX + *(int*)(ebp_3216 + -36), yyElement->MarkY + *(int*)(ebp_3216 + -24), *(int*)(ebp_3216 + -12) );
                break;
              case 142:
                CreateNewLineInElement( yyElement, yyElement->MarkX + ( *(int*)(ebp_3216 + -60) * 100 ), yyElement->MarkY + ( *(int*)(ebp_3216 + -48) * 100 ), yyElement->MarkX + ( *(int*)(ebp_3216 + -36) * 100 ), yyElement->MarkY + ( *(int*)(ebp_3216 + -24) * 100 ), *(int*)(ebp_3216 + -12) * 100 );
                break;
              case 143:
                CreateNewArcInElement( yyElement, yyElement->MarkX + *(int*)(ebp_3216 + -84), ebp_3376, ebp_3372, ebp_3368, ebp_3364, ebp_3360, ebp_3356 );
                break;
              case 144:
                CreateNewArcInElement( yyElement, yyElement->MarkX + *(int*)(ebp_3216 + -84), ebp_3376, ebp_3372, ebp_3368, ebp_3364, ebp_3360, ebp_3356 );
                break;
              case 133:
              case 145:
                attr_list = &yyElement->Attributes;
                break;
              case 147:
                // memcpy( ebp_3348, ebp_3216 + -12, 12 );
                CreateNewPin( yyElement, *(int*)(yyElement + 216) + *(int*)(ebp_3216 + -108), *(int*)(yyElement + 220) + *(int*)(ebp_3216 + -96), *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -60), *(int*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -24), "badarg" );
                SaveFree( *(int*)(ebp_3216 + -36) );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 148:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3348, *(int*)(0), 12 );
                CreateNewPin( yyElement, yyElement, yyElement, *(int*)(yyElement + 216) + ( *(int*)(ebp_3216 + -108) * 100 ), *(int*)(yyElement + 220) + ( *(int*)(ebp_3216 + -96) * 100 ), *(int*)(ebp_3216 + -84) * 100, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -48) * 100, ebp_3216 + -36 );
                SaveFree( *(int*)(ebp_3216 + -36) );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 149:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3348, *(int*)(0), 12 );
                CreateNewPin( yyElement, yyElement, yyElement, *(int*)(ebp_3216 + -84) * 100, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -60) * 100, 3000, ( *(int*)(ebp_3216 + -60) * 100 ) + 600, *(int*)(ebp_3216 + -48) * 100, ebp_3216 + -36 );
                SaveFree( *(int*)(ebp_3216 + -36) );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 150:
              {
                char p_number[8];
                pin_num++;
                __sprintf_chk( p_number, 1, 8, "%d", pin_num );
                esi = OldFlags( *(int*)(yysize + -12) );
                // memcpy( ebp_3348, *(int*)(0), 12 );
                CreateNewPin( yyElement, yyElement, yyElement, *(int*)(yysize + -72) * 100, *(int*)(yysize + -60) * 100, *(int*)(yysize + -48) * 100, 3000, ( *(int*)(yysize + -48) * 100 ) + 600, *(int*)(yysize + -36) * 100, yysize + -24 );
                SaveFree( *(int*)(ebp_3216 + -24) );
              }
                break;
              case 151:
              {
                BDimension hole = *(int*)(yysize + -36) * 40;
                char p_number[8];
                pin_num++;
                __sprintf_chk( p_number, 1, 8, "%d", pin_num );
                esi = OldFlags( *(int*)(yysize + -12) );
                // memcpy( ebp_3348, *(int*)(0), 12 );
                CreateNewPin( yyElement, yyElement, yyElement, *(int*)(yysize + -60) * 100, *(int*)(yysize + -48) * 100, *(int*)(yysize + -36) * 100, 3000, ( *(int*)(yysize + -36) * 100 ) + 600, &hole, yysize + -24 );
                SaveFree( *(int*)(yysize + -24) );
              }
                break;
              case 152:
                // memcpy( ebp_3344, ebp_3216 + -12, 12 );
                CreateNewPad( yyElement, yyElement->MarkX + *(int*)(ebp_3216 + -120), yyElement->MarkY + *(int*)(ebp_3216 + -108), yyElement->MarkX + *(int*)(ebp_3216 + -96), yyElement->MarkY + *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72), *(int*)(ebp_3216 + -60), *(int*)(ebp_3216 + -48), *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -24), "badarg" );
                SaveFree( *(int*)(ebp_3216 + -36) );
                SaveFree( *(int*)(ebp_3216 + -24) );
                break;
              case 153:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                pcb_save = &yyElement->MarkY;
                i = yyElement->MarkX;
                // memcpy( ebp_3344, ebp_360, 12 );
                CreateNewPad( yyElement, yyElement, yyElement, i + ( *(int*)(ebp_3216 + -120) * 100 ), pcb_save->ID, *(int*)(ebp_3216 + -108), i + ( *(int*)(ebp_3216 + -96) * 100 ), pcb_save->ID, *(int*)(ebp_3216 + -84), *(int*)(ebp_3216 + -72) * 100, "badarg" );
                break;
              case 154:
                *(int*)(ebp_3216 + -12) = OldFlags( yyssp );
                // memcpy( ebp_3344, ebp_372, 12 );
                CreateNewPad( yyElement, yyElement, yyElement, *(int*)(ebp_3216 + -96) * 100, *(int*)(ebp_3216 + -84) * 100, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -60) * 100, *(int*)(yyn + -48) * 100, 3000, ( *(int*)(yyn + -48) * 100 ) + 600, ebp_3216 + -36 );
                break;
              case 155:
                pin_num++;
                __sprintf_chk( p_number, 1, 8, "%d", pin_num );
                ebp = OldFlags( *(int*)(ebp_3216 + -12) );
                // memcpy( ebp_3344, ebp_384, 12 );
                CreateNewPad( yyElement, yyElement, yyElement, *(int*)(ebp_3216 + -84) * 100, *(int*)(ebp_3216 + -72) * 100, *(int*)(ebp_3216 + -60) * 100, *(int*)(ebp_3216 + -48) * 100, *(int*)(ebp_3216 + -36) * 100, 3000, ( *(int*)(ebp_3216 + -36) * 100 ) + 600, ebp_3216 + -24 );
                SaveFree( *(int*)(ebp_3216 + -24) );
              {
                int i, j;
                PCBTypePtr pcb_save;
              }
                break;
              case 156:
                yyval = OldFlags( *ebp_3216 );
                break;
              case 157:
                yyval = string_to_flags( (char*)yyssp );
                break;
              case 160:
                if ( *(int*)(ebp_3216 + -36) + -1 <= 254 )
                {
                  Symbol = &yyFont->Symbol[ *(int*)(ebp_3216 + -36) ];
                  if ( yyFont->Symbol[ *(int*)(ebp_3216 + -36) ].Valid == 0 )
                  {
                    yyFont->DefaultSymbol.BoxType = 1;
                    Symbol->Delta = *(int*)(ebp_3216 + -24);
                  }
                  else
                  {
                  }
                }
                else
                {
                }
                break;
              case 162:
                if ( *(int*)(ebp_3216 + -36) + -1 <= 254 )
                {
                  Symbol = &yyFont->Symbol[ *(int*)(ebp_3216 + -36) ];
                  if ( yyFont->Symbol[ *(int*)(ebp_3216 + -36) ].Valid == 0 )
                  {
                    yyFont->DefaultSymbol.BoxType = 1;
                    Symbol->Delta = *(int*)(ebp_3216 + -24) * 100;
                  }
                  else
                  {
                  }
                }
                else
                {
                }
                break;
              case 171:
                CreateNewLineInSymbol( Symbol, *(int*)(ebp_3216 + -60) * 100, ebp_3376, ebp_3372, ebp_3368, ebp_3364 );
                break;
              case 172:
                CreateNewLineInSymbol( Symbol, *(int*)(ebp_3216 + -60) * 100, ebp_3376, ebp_3372, ebp_3368, ebp_3364 );
                break;
              case 180:
                Menu = CreateNewNet( &yyPCB->NetlistLib, *(int*)(ebp_3216 + -36), *(int*)(ebp_3216 + -24) );
                break;
              case 186:
                CreateNewConnection( Menu, *(int*)(ebp_3216 + -12) );
                SaveFree( *(int*)(ebp_3216 + -12) );
                break;
              case 189:
                CreateNewAttribute( attr_list, *(int*)(ebp_3216 + -24), *(int*)(ebp_3216 + -12) );
                SaveFree( *(int*)(ebp_3216 + -24) );
                SaveFree( *(int*)(ebp_3216 + -12) );
                break;
              case 190:
                break;
              case 191:
                break;
              case 0:
              case 58:
                yyresult = 1;
                yyssp = 0 - ( yylen * 2 );
                break;
              default:
                break;
              }
              yyresult = 1;
          }
        }
        else
        {
          if ( yyn != 10 )
          {
            yyerrstatus = yyerrstatus + -1 + ( ( yyerrstatus < 1 ) & 1 );
            ebp_3216 += 12;
            yychar = yychar == 0 ? -2 : yychar;
            *ebp_3216 = yylval.number;
            *(int*)(ebp_3216 + 4) = yylval.flagtype.t[0];
            *(int*)(ebp_3216 + 8) = yylval.flagtype.t[4];
          }
          else
            yyresult = 0;
        }
      }
    }
    if ( yydefact[ yydefact[ yystate ] ] )
    {
      yylen = yyr2[ 0 - yyn ];
      yyval.flagtype.t[0] = *(int*)(ebp_3216 + ( ( 1 - yyr2[ 0 - yyn ] ) * 12 ) + 4);
      yyval.flagtype.t[4] = *(int*)(ebp_3216 + ( ( 1 - yyr2[ 0 - yyn ] ) * 12 ) + 8);
      switch ( ( 0 - yyn ) + -5 )
      {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 9:
        break;
      case 10:
        break;
      case 12:
        break;
      case 13:
        break;
      case 14:
        break;
      case 15:
        break;
      case 20:
        break;
      case 21:
        break;
      case 22:
        break;
      case 23:
        break;
      case 24:
        break;
      case 25:
        break;
      case 26:
        break;
      case 29:
        break;
      case 31:
        break;
      case 36:
        break;
      case 37:
        break;
      case 38:
        break;
      case 39:
        break;
      case 40:
        break;
      case 42:
        break;
      case 44:
        break;
      case 45:
        break;
      case 52:
        break;
      case 56:
        break;
      case 64:
        break;
      case 65:
        break;
      case 66:
        break;
      case 67:
        break;
      case 68:
        break;
      case 69:
        break;
      case 70:
        break;
      case 71:
        break;
      case 83:
        break;
      case 87:
        break;
      case 89:
        break;
      case 90:
        break;
      case 91:
        break;
      case 92:
        break;
      case 93:
        break;
      case 94:
        break;
      case 95:
        break;
      case 96:
        break;
      case 97:
        break;
      case 98:
        break;
      case 99:
        break;
      case 102:
        break;
      case 103:
        break;
      case 110:
        break;
      case 112:
        break;
      case 114:
        break;
      case 116:
        break;
      case 118:
        break;
      case 111:
      case 113:
      case 115:
      case 117:
      case 119:
        break;
      case 127:
        break;
      case 128:
        break;
      case 129:
        break;
      case 130:
        break;
      case 131:
        break;
      case 132:
        break;
      case 141:
        break;
      case 142:
        break;
      case 143:
        break;
      case 144:
        break;
      case 133:
      case 145:
        break;
      case 147:
        break;
      case 148:
        break;
      case 149:
        break;
      case 150:
        break;
      case 151:
        break;
      case 152:
        break;
      case 153:
        break;
      case 154:
        break;
      case 155:
        break;
      case 156:
        break;
      case 157:
        break;
      case 160:
        break;
      case 162:
        break;
      case 171:
        break;
      case 172:
        break;
      case 180:
        break;
      case 186:
        break;
      case 189:
        break;
      case 190:
        break;
      case 191:
        break;
      case 0:
      case 58:
        break;
      default:
        break;
      }
    }
  }
}
}
int yyerror( char *s )
{
  Message( "ERROR parsing file '%s'\n    line:        %i\n    description: '%s'\n", yyfilename, yylineno, s );
  return 0;
}
int yywrap( void )
{
  return 1;
}
#if 0
#endif
