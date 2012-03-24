#include "LYStrings.c.h"
static HTList *whichRecall( RecallType recall );
static void LYRemoveFromCloset( HTList *list );
static char *LYFindInCloset( RecallType recall, char *base );
static void LYAddToCloset( RecallType recall, char *str );
static int XYdist( int x1, int y1, int x2, int y2, int dx2 );
static int set_clicked_link( int x, int y, int code, int clicks );
static int lookup_tiname( char *name, char **names );
static char *expand_tiname( char *first, size_t len, char **result, char *final );
static char *expand_tichar( char *first, char **result, char *final );
static int expand_substring( char *dst, char *first, char *last, char *final );
static void unescaped_char( char *parse, int *keysym );
static BOOLEAN unescape_string( char *src, char *dst, char *final );
static char *skip_keysym( char *parse );
static int setkey_cmd( char *parse );
static int unsetkey_cmd( char *parse );
static int read_keymap_file( void );
static void setup_vtXXX_keymap( void );
static int LYmouse_menu( int x, int y, int atlink, int code );
static int LYgetch_for( int code );
static int mbcs_glyphs( char *s, int len );
static int mbcs_skip( char *s, int pos );
static int cell2char( char *s, int cells );
static void remember_column( EditFieldData *edit, int offset );
static void fill_edited_line( int prompting, int length, int ch );
static void reinsertEdit( EditFieldData *edit, char *result );
static int caselessCmpList( void *a, void *b );
static int normalCmpList( void *a, void *b );
static char **sortedList( HTList *list, BOOLEAN ignorecase );
static void FormatChoiceNum( char *dst, int num_choices, int choice, char *value );
static unsigned int options_width( char **list );
static void draw_option( WINDOW *win, int entry, int width, BOOLEAN reversed, int num_choices, int number, char *value );
static long UniToLowerCase( long upper );
static HTList *URL_edit_history;
static HTList *MAIL_edit_history;
static int mouse_link = -1;
static int have_levent;
static MEVENT levent;
static BOOLEAN csi_is_csi = 1;
static Keysym_String_List Keysym_Strings[16] = { { "UPARROW", 259,  }
, { "DNARROW", 258,  }
, { "RTARROW", 261,  }
, { "LTARROW", 260,  }
, { "PGDOWN", 338,  }
, { "PGUP", 339,  }
, { "HOME", 262,  }
, { "END", 360,  }
, { "F1", 265,  }
, { "DO_KEY", 280,  }
, { "FIND_KEY", 362,  }
, { "SELECT_KEY", 385,  }
, { "INSERT_KEY", 331,  }
, { "REMOVE_KEY", 330,  }
, { "DO_NOTHING", 1294,  }
, { 0, -1,  }
,  };
static char killbuffer[1024];
static unipair_case unicode_to_lower_case[705] = { { 65, 97,  }
, { 66, 98,  }
, { 67, 99,  }
, { 68, 100,  }
, { 69, 101,  }
, { 70, 102,  }
, { 71, 103,  }
, { 72, 104,  }
, { 73, 105,  }
, { 74, 106,  }
, { 75, 107,  }
, { 76, 108,  }
, { 77, 109,  }
, { 78, 110,  }
, { 79, 111,  }
, { 80, 112,  }
, { 81, 113,  }
, { 82, 114,  }
, { 83, 115,  }
, { 84, 116,  }
, { 85, 117,  }
, { 86, 118,  }
, { 87, 119,  }
, { 88, 120,  }
, { 89, 121,  }
, { 90, 122,  }
, { 192, 224,  }
, { 193, 225,  }
, { 194, 226,  }
, { 195, 227,  }
, { 196, 228,  }
, { 197, 229,  }
, { 198, 230,  }
, { 199, 231,  }
, { 200, 232,  }
, { 201, 233,  }
, { 202, 234,  }
, { 203, 235,  }
, { 204, 236,  }
, { 205, 237,  }
, { 206, 238,  }
, { 207, 239,  }
, { 208, 240,  }
, { 209, 241,  }
, { 210, 242,  }
, { 211, 243,  }
, { 212, 244,  }
, { 213, 245,  }
, { 214, 246,  }
, { 216, 248,  }
, { 217, 249,  }
, { 218, 250,  }
, { 219, 251,  }
, { 220, 252,  }
, { 221, 253,  }
, { 222, 254,  }
, { 256, 257,  }
, { 258, 259,  }
, { 260, 261,  }
, { 262, 263,  }
, { 264, 265,  }
, { 266, 267,  }
, { 268, 269,  }
, { 270, 271,  }
, { 272, 273,  }
, { 274, 275,  }
, { 276, 277,  }
, { 278, 279,  }
, { 280, 281,  }
, { 282, 283,  }
, { 284, 285,  }
, { 286, 287,  }
, { 288, 289,  }
, { 290, 291,  }
, { 292, 293,  }
, { 294, 295,  }
, { 296, 297,  }
, { 298, 299,  }
, { 300, 301,  }
, { 302, 303,  }
, { 304, 105,  }
, { 306, 307,  }
, { 308, 309,  }
, { 310, 311,  }
, { 313, 314,  }
, { 315, 316,  }
, { 317, 318,  }
, { 319, 320,  }
, { 321, 322,  }
, { 323, 324,  }
, { 325, 326,  }
, { 327, 328,  }
, { 330, 331,  }
, { 332, 333,  }
, { 334, 335,  }
, { 336, 337,  }
, { 338, 339,  }
, { 340, 341,  }
, { 342, 343,  }
, { 344, 345,  }
, { 346, 347,  }
, { 348, 349,  }
, { 350, 351,  }
, { 352, 353,  }
, { 354, 355,  }
, { 356, 357,  }
, { 358, 359,  }
, { 360, 361,  }
, { 362, 363,  }
, { 364, 365,  }
, { 366, 367,  }
, { 368, 369,  }
, { 370, 371,  }
, { 372, 373,  }
, { 374, 375,  }
, { 376, 255,  }
, { 377, 378,  }
, { 379, 380,  }
, { 381, 382,  }
, { 385, 595,  }
, { 386, 387,  }
, { 388, 389,  }
, { 390, 596,  }
, { 391, 392,  }
, { 393, 598,  }
, { 394, 599,  }
, { 395, 396,  }
, { 398, 477,  }
, { 399, 601,  }
, { 400, 603,  }
, { 401, 402,  }
, { 403, 608,  }
, { 404, 611,  }
, { 406, 617,  }
, { 407, 616,  }
, { 408, 409,  }
, { 412, 623,  }
, { 413, 626,  }
, { 415, 629,  }
, { 416, 417,  }
, { 418, 419,  }
, { 420, 421,  }
, { 423, 424,  }
, { 425, 643,  }
, { 428, 429,  }
, { 430, 648,  }
, { 431, 432,  }
, { 433, 650,  }
, { 434, 651,  }
, { 435, 436,  }
, { 437, 438,  }
, { 439, 658,  }
, { 440, 441,  }
, { 444, 445,  }
, { 452, 454,  }
, { 453, 454,  }
, { 455, 457,  }
, { 456, 457,  }
, { 458, 460,  }
, { 459, 460,  }
, { 461, 462,  }
, { 463, 464,  }
, { 465, 466,  }
, { 467, 468,  }
, { 469, 470,  }
, { 471, 472,  }
, { 473, 474,  }
, { 475, 476,  }
, { 478, 479,  }
, { 480, 481,  }
, { 482, 483,  }
, { 484, 485,  }
, { 486, 487,  }
, { 488, 489,  }
, { 490, 491,  }
, { 492, 493,  }
, { 494, 495,  }
, { 497, 499,  }
, { 498, 499,  }
, { 500, 501,  }
, { 506, 507,  }
, { 508, 509,  }
, { 510, 511,  }
, { 512, 513,  }
, { 514, 515,  }
, { 516, 517,  }
, { 518, 519,  }
, { 520, 521,  }
, { 522, 523,  }
, { 524, 525,  }
, { 526, 527,  }
, { 528, 529,  }
, { 530, 531,  }
, { 532, 533,  }
, { 534, 535,  }
, { 902, 940,  }
, { 904, 941,  }
, { 905, 942,  }
, { 906, 943,  }
, { 908, 972,  }
, { 910, 973,  }
, { 911, 974,  }
, { 913, 945,  }
, { 914, 946,  }
, { 915, 947,  }
, { 916, 948,  }
, { 917, 949,  }
, { 918, 950,  }
, { 919, 951,  }
, { 920, 952,  }
, { 921, 953,  }
, { 922, 954,  }
, { 923, 955,  }
, { 924, 956,  }
, { 925, 957,  }
, { 926, 958,  }
, { 927, 959,  }
, { 928, 960,  }
, { 929, 961,  }
, { 931, 963,  }
, { 932, 964,  }
, { 933, 965,  }
, { 934, 966,  }
, { 935, 967,  }
, { 936, 968,  }
, { 937, 969,  }
, { 938, 970,  }
, { 939, 971,  }
, { 994, 995,  }
, { 996, 997,  }
, { 998, 999,  }
, { 1000, 1001,  }
, { 1002, 1003,  }
, { 1004, 1005,  }
, { 1006, 1007,  }
, { 1025, 1105,  }
, { 1026, 1106,  }
, { 1027, 1107,  }
, { 1028, 1108,  }
, { 1029, 1109,  }
, { 1030, 1110,  }
, { 1031, 1111,  }
, { 1032, 1112,  }
, { 1033, 1113,  }
, { 1034, 1114,  }
, { 1035, 1115,  }
, { 1036, 1116,  }
, { 1038, 1118,  }
, { 1039, 1119,  }
, { 1040, 1072,  }
, { 1041, 1073,  }
, { 1042, 1074,  }
, { 1043, 1075,  }
, { 1044, 1076,  }
, { 1045, 1077,  }
, { 1046, 1078,  }
, { 1047, 1079,  }
, { 1048, 1080,  }
, { 1049, 1081,  }
, { 1050, 1082,  }
, { 1051, 1083,  }
, { 1052, 1084,  }
, { 1053, 1085,  }
, { 1054, 1086,  }
, { 1055, 1087,  }
, { 1056, 1088,  }
, { 1057, 1089,  }
, { 1058, 1090,  }
, { 1059, 1091,  }
, { 1060, 1092,  }
, { 1061, 1093,  }
, { 1062, 1094,  }
, { 1063, 1095,  }
, { 1064, 1096,  }
, { 1065, 1097,  }
, { 1066, 1098,  }
, { 1067, 1099,  }
, { 1068, 1100,  }
, { 1069, 1101,  }
, { 1070, 1102,  }
, { 1071, 1103,  }
, { 1120, 1121,  }
, { 1122, 1123,  }
, { 1124, 1125,  }
, { 1126, 1127,  }
, { 1128, 1129,  }
, { 1130, 1131,  }
, { 1132, 1133,  }
, { 1134, 1135,  }
, { 1136, 1137,  }
, { 1138, 1139,  }
, { 1140, 1141,  }
, { 1142, 1143,  }
, { 1144, 1145,  }
, { 1146, 1147,  }
, { 1148, 1149,  }
, { 1150, 1151,  }
, { 1152, 1153,  }
, { 1168, 1169,  }
, { 1170, 1171,  }
, { 1172, 1173,  }
, { 1174, 1175,  }
, { 1176, 1177,  }
, { 1178, 1179,  }
, { 1180, 1181,  }
, { 1182, 1183,  }
, { 1184, 1185,  }
, { 1186, 1187,  }
, { 1188, 1189,  }
, { 1190, 1191,  }
, { 1192, 1193,  }
, { 1194, 1195,  }
, { 1196, 1197,  }
, { 1198, 1199,  }
, { 1200, 1201,  }
, { 1202, 1203,  }
, { 1204, 1205,  }
, { 1206, 1207,  }
, { 1208, 1209,  }
, { 1210, 1211,  }
, { 1212, 1213,  }
, { 1214, 1215,  }
, { 1217, 1218,  }
, { 1219, 1220,  }
, { 1223, 1224,  }
, { 1227, 1228,  }
, { 1232, 1233,  }
, { 1234, 1235,  }
, { 1236, 1237,  }
, { 1238, 1239,  }
, { 1240, 1241,  }
, { 1242, 1243,  }
, { 1244, 1245,  }
, { 1246, 1247,  }
, { 1248, 1249,  }
, { 1250, 1251,  }
, { 1252, 1253,  }
, { 1254, 1255,  }
, { 1256, 1257,  }
, { 1258, 1259,  }
, { 1262, 1263,  }
, { 1264, 1265,  }
, { 1266, 1267,  }
, { 1268, 1269,  }
, { 1272, 1273,  }
, { 1329, 1377,  }
, { 1330, 1378,  }
, { 1331, 1379,  }
, { 1332, 1380,  }
, { 1333, 1381,  }
, { 1334, 1382,  }
, { 1335, 1383,  }
, { 1336, 1384,  }
, { 1337, 1385,  }
, { 1338, 1386,  }
, { 1339, 1387,  }
, { 1340, 1388,  }
, { 1341, 1389,  }
, { 1342, 1390,  }
, { 1343, 1391,  }
, { 1344, 1392,  }
, { 1345, 1393,  }
, { 1346, 1394,  }
, { 1347, 1395,  }
, { 1348, 1396,  }
, { 1349, 1397,  }
, { 1350, 1398,  }
, { 1351, 1399,  }
, { 1352, 1400,  }
, { 1353, 1401,  }
, { 1354, 1402,  }
, { 1355, 1403,  }
, { 1356, 1404,  }
, { 1357, 1405,  }
, { 1358, 1406,  }
, { 1359, 1407,  }
, { 1360, 1408,  }
, { 1361, 1409,  }
, { 1362, 1410,  }
, { 1363, 1411,  }
, { 1364, 1412,  }
, { 1365, 1413,  }
, { 1366, 1414,  }
, { 4256, 4304,  }
, { 4257, 4305,  }
, { 4258, 4306,  }
, { 4259, 4307,  }
, { 4260, 4308,  }
, { 4261, 4309,  }
, { 4262, 4310,  }
, { 4263, 4311,  }
, { 4264, 4312,  }
, { 4265, 4313,  }
, { 4266, 4314,  }
, { 4267, 4315,  }
, { 4268, 4316,  }
, { 4269, 4317,  }
, { 4270, 4318,  }
, { 4271, 4319,  }
, { 4272, 4320,  }
, { 4273, 4321,  }
, { 4274, 4322,  }
, { 4275, 4323,  }
, { 4276, 4324,  }
, { 4277, 4325,  }
, { 4278, 4326,  }
, { 4279, 4327,  }
, { 4280, 4328,  }
, { 4281, 4329,  }
, { 4282, 4330,  }
, { 4283, 4331,  }
, { 4284, 4332,  }
, { 4285, 4333,  }
, { 4286, 4334,  }
, { 4287, 4335,  }
, { 4288, 4336,  }
, { 4289, 4337,  }
, { 4290, 4338,  }
, { 4291, 4339,  }
, { 4292, 4340,  }
, { 4293, 4341,  }
, { 7680, 7681,  }
, { 7682, 7683,  }
, { 7684, 7685,  }
, { 7686, 7687,  }
, { 7688, 7689,  }
, { 7690, 7691,  }
, { 7692, 7693,  }
, { 7694, 7695,  }
, { 7696, 7697,  }
, { 7698, 7699,  }
, { 7700, 7701,  }
, { 7702, 7703,  }
, { 7704, 7705,  }
, { 7706, 7707,  }
, { 7708, 7709,  }
, { 7710, 7711,  }
, { 7712, 7713,  }
, { 7714, 7715,  }
, { 7716, 7717,  }
, { 7718, 7719,  }
, { 7720, 7721,  }
, { 7722, 7723,  }
, { 7724, 7725,  }
, { 7726, 7727,  }
, { 7728, 7729,  }
, { 7730, 7731,  }
, { 7732, 7733,  }
, { 7734, 7735,  }
, { 7736, 7737,  }
, { 7738, 7739,  }
, { 7740, 7741,  }
, { 7742, 7743,  }
, { 7744, 7745,  }
, { 7746, 7747,  }
, { 7748, 7749,  }
, { 7750, 7751,  }
, { 7752, 7753,  }
, { 7754, 7755,  }
, { 7756, 7757,  }
, { 7758, 7759,  }
, { 7760, 7761,  }
, { 7762, 7763,  }
, { 7764, 7765,  }
, { 7766, 7767,  }
, { 7768, 7769,  }
, { 7770, 7771,  }
, { 7772, 7773,  }
, { 7774, 7775,  }
, { 7776, 7777,  }
, { 7778, 7779,  }
, { 7780, 7781,  }
, { 7782, 7783,  }
, { 7784, 7785,  }
, { 7786, 7787,  }
, { 7788, 7789,  }
, { 7790, 7791,  }
, { 7792, 7793,  }
, { 7794, 7795,  }
, { 7796, 7797,  }
, { 7798, 7799,  }
, { 7800, 7801,  }
, { 7802, 7803,  }
, { 7804, 7805,  }
, { 7806, 7807,  }
, { 7808, 7809,  }
, { 7810, 7811,  }
, { 7812, 7813,  }
, { 7814, 7815,  }
, { 7816, 7817,  }
, { 7818, 7819,  }
, { 7820, 7821,  }
, { 7822, 7823,  }
, { 7824, 7825,  }
, { 7826, 7827,  }
, { 7828, 7829,  }
, { 7840, 7841,  }
, { 7842, 7843,  }
, { 7844, 7845,  }
, { 7846, 7847,  }
, { 7848, 7849,  }
, { 7850, 7851,  }
, { 7852, 7853,  }
, { 7854, 7855,  }
, { 7856, 7857,  }
, { 7858, 7859,  }
, { 7860, 7861,  }
, { 7862, 7863,  }
, { 7864, 7865,  }
, { 7866, 7867,  }
, { 7868, 7869,  }
, { 7870, 7871,  }
, { 7872, 7873,  }
, { 7874, 7875,  }
, { 7876, 7877,  }
, { 7878, 7879,  }
, { 7880, 7881,  }
, { 7882, 7883,  }
, { 7884, 7885,  }
, { 7886, 7887,  }
, { 7888, 7889,  }
, { 7890, 7891,  }
, { 7892, 7893,  }
, { 7894, 7895,  }
, { 7896, 7897,  }
, { 7898, 7899,  }
, { 7900, 7901,  }
, { 7902, 7903,  }
, { 7904, 7905,  }
, { 7906, 7907,  }
, { 7908, 7909,  }
, { 7910, 7911,  }
, { 7912, 7913,  }
, { 7914, 7915,  }
, { 7916, 7917,  }
, { 7918, 7919,  }
, { 7920, 7921,  }
, { 7922, 7923,  }
, { 7924, 7925,  }
, { 7926, 7927,  }
, { 7928, 7929,  }
, { 7944, 7936,  }
, { 7945, 7937,  }
, { 7946, 7938,  }
, { 7947, 7939,  }
, { 7948, 7940,  }
, { 7949, 7941,  }
, { 7950, 7942,  }
, { 7951, 7943,  }
, { 7960, 7952,  }
, { 7961, 7953,  }
, { 7962, 7954,  }
, { 7963, 7955,  }
, { 7964, 7956,  }
, { 7965, 7957,  }
, { 7976, 7968,  }
, { 7977, 7969,  }
, { 7978, 7970,  }
, { 7979, 7971,  }
, { 7980, 7972,  }
, { 7981, 7973,  }
, { 7982, 7974,  }
, { 7983, 7975,  }
, { 7992, 7984,  }
, { 7993, 7985,  }
, { 7994, 7986,  }
, { 7995, 7987,  }
, { 7996, 7988,  }
, { 7997, 7989,  }
, { 7998, 7990,  }
, { 7999, 7991,  }
, { 8008, 8000,  }
, { 8009, 8001,  }
, { 8010, 8002,  }
, { 8011, 8003,  }
, { 8012, 8004,  }
, { 8013, 8005,  }
, { 8025, 8017,  }
, { 8027, 8019,  }
, { 8029, 8021,  }
, { 8031, 8023,  }
, { 8040, 8032,  }
, { 8041, 8033,  }
, { 8042, 8034,  }
, { 8043, 8035,  }
, { 8044, 8036,  }
, { 8045, 8037,  }
, { 8046, 8038,  }
, { 8047, 8039,  }
, { 8072, 8064,  }
, { 8073, 8065,  }
, { 8074, 8066,  }
, { 8075, 8067,  }
, { 8076, 8068,  }
, { 8077, 8069,  }
, { 8078, 8070,  }
, { 8079, 8071,  }
, { 8088, 8080,  }
, { 8089, 8081,  }
, { 8090, 8082,  }
, { 8091, 8083,  }
, { 8092, 8084,  }
, { 8093, 8085,  }
, { 8094, 8086,  }
, { 8095, 8087,  }
, { 8104, 8096,  }
, { 8105, 8097,  }
, { 8106, 8098,  }
, { 8107, 8099,  }
, { 8108, 8100,  }
, { 8109, 8101,  }
, { 8110, 8102,  }
, { 8111, 8103,  }
, { 8120, 8112,  }
, { 8121, 8113,  }
, { 8122, 8048,  }
, { 8123, 8049,  }
, { 8124, 8115,  }
, { 8136, 8050,  }
, { 8137, 8051,  }
, { 8138, 8052,  }
, { 8139, 8053,  }
, { 8140, 8131,  }
, { 8152, 8144,  }
, { 8153, 8145,  }
, { 8154, 8054,  }
, { 8155, 8055,  }
, { 8168, 8160,  }
, { 8169, 8161,  }
, { 8170, 8058,  }
, { 8171, 8059,  }
, { 8172, 8165,  }
, { 8184, 8056,  }
, { 8185, 8057,  }
, { 8186, 8060,  }
, { 8187, 8061,  }
, { 8188, 8179,  }
, { 8544, 8560,  }
, { 8545, 8561,  }
, { 8546, 8562,  }
, { 8547, 8563,  }
, { 8548, 8564,  }
, { 8549, 8565,  }
, { 8550, 8566,  }
, { 8551, 8567,  }
, { 8552, 8568,  }
, { 8553, 8569,  }
, { 8554, 8570,  }
, { 8555, 8571,  }
, { 8556, 8572,  }
, { 8557, 8573,  }
, { 8558, 8574,  }
, { 8559, 8575,  }
, { 9398, 9424,  }
, { 9399, 9425,  }
, { 9400, 9426,  }
, { 9401, 9427,  }
, { 9402, 9428,  }
, { 9403, 9429,  }
, { 9404, 9430,  }
, { 9405, 9431,  }
, { 9406, 9432,  }
, { 9407, 9433,  }
, { 9408, 9434,  }
, { 9409, 9435,  }
, { 9410, 9436,  }
, { 9411, 9437,  }
, { 9412, 9438,  }
, { 9413, 9439,  }
, { 9414, 9440,  }
, { 9415, 9441,  }
, { 9416, 9442,  }
, { 9417, 9443,  }
, { 9418, 9444,  }
, { 9419, 9445,  }
, { 9420, 9446,  }
, { 9421, 9447,  }
, { 9422, 9448,  }
, { 9423, 9449,  }
, { 65313, 65345,  }
, { 65314, 65346,  }
, { 65315, 65347,  }
, { 65316, 65348,  }
, { 65317, 65349,  }
, { 65318, 65350,  }
, { 65319, 65351,  }
, { 65320, 65352,  }
, { 65321, 65353,  }
, { 65322, 65354,  }
, { 65323, 65355,  }
, { 65324, 65356,  }
, { 65325, 65357,  }
, { 65326, 65358,  }
, { 65327, 65359,  }
, { 65328, 65360,  }
, { 65329, 65361,  }
, { 65330, 65362,  }
, { 65331, 65363,  }
, { 65332, 65364,  }
, { 65333, 65365,  }
, { 65334, 65366,  }
, { 65335, 65367,  }
, { 65336, 65368,  }
, { 65337, 65369,  }
, { 65338, 65370,  }
,  };
static FILE *cmd_logfile;
static FILE *cmd_script;
int peek_mouse_levent( void )
{
  if ( have_levent >= 1 )
  {
    ungetmouse( &levent.id );
    have_levent--;
    return 1;
  }
  return 0;
}
int get_mouse_link( void )
{
  int t = mouse_link;
  mouse_link = -1;
  if ( t < 0 )
  {
    t = -1;
  }
  return t;
}
int peek_mouse_link( void )
{
  return mouse_link;
}
int fancy_mouse( WINDOW *win, int row, int *position )
{
  int cmd = 69;
  MEVENT event;
  getmouse( &event.id );
  if ( ( event.bstate & 28 ) != 0 )
  {
    int mypos = event.y - ( win == 0 ? -1 : win->_begy );
    int delta = mypos - row;
    if ( ( win == 0 ? -1 : win->_begx ) <= event.x )
    {
      if ( event.x < ( win == 0 ? -1 : win->_begx ) + ( win == 0 ? -1 : win->_maxx + 1 ) )
      {
        if ( mypos + 1 == ( win == 0 ? -1 : win->_maxy + 1 ) )
        {
          if ( ( event.bstate & 16 ) != 0 )
            cmd = 23;
          else
          {
            if ( ( event.bstate & 8 ) != 0 )
              cmd = 15;
            else
              cmd = 27;
          }
        }
        else
        {
          if ( ( win == 0 ? -1 : win->_maxy + 1 ) <= mypos )
          {
            if ( ( event.bstate & 24 ) != 0 )
              cmd = 23;
            else
              cmd = 15;
          }
          else
          {
            if ( mypos == 0 )
            {
              if ( ( event.bstate & 16 ) != 0 )
                cmd = 22;
              else
              {
                if ( ( event.bstate & 8 ) != 0 )
                  cmd = 16;
                else
                  cmd = 26;
              }
            }
            else
            {
              if ( mypos < 0 )
              {
                if ( ( event.bstate & 24 ) != 0 )
                  cmd = 22;
                else
                  cmd = 16;
              }
              else
              {
                if ( ( win == 0 ? 0 : win->_begx + 1 ) < event.x )
                {
                  if ( event.x < ( ( win == 0 ? -1 : win->_begx ) + ( win == 0 ? -1 : win->_maxx + 1 ) ) - 2 )
                  {
                    if ( ( event.bstate & 117440512 ) != 0 )
                    {
                      position[0] += delta;
                      cmd = -1;
                    }
                    else
                    {
                      position[0] += delta;
                      cmd = 39;
                    }
                  }
                }
                position[0] += delta;
                cmd = -1;
              }
            }
          }
        }
      }
    }
    if ( ( event.bstate & 117440512 ) == 0 )
    {
      return 13;
    }
  }
  else
  if ( ( event.bstate & 114688 ) != 0 )
    cmd = 13;
  return cmd;
}
HTList *whichRecall( RecallType recall )
{
  HTList **list;
  switch ( recall )
  {
  default:
    list = &URL_edit_history;
    if ( list[0] == 0 )
    {
      list[0] = HTList_new( );
    }
    return list[0];
    break;
  case RECALL_CMD:
    return LYcommandList( );
    break;
  case RECALL_MAIL:
    list = &MAIL_edit_history;
    break;
  }
}
void LYRemoveFromCloset( HTList *list )
{
  void *data = HTList_removeFirstObject( list );
  if ( data != 0 && data != 0 )
  {
    free( data );
    data = 0;
  }
  return;
}
void LYCloseCloset( RecallType recall )
{
  HTList *list = whichRecall( recall );
  while ( list != 0 && list->next != 0 )
  {
    LYRemoveFromCloset( list );
  }
  HTList_delete( list );
  return;
}
char *LYFindInCloset( RecallType recall, char *base )
{
  HTList *list = whichRecall( recall );
  char *data;
  unsigned int len = strlen( base );
  do
  {
    if ( list != 0 && list->next != 0 )
    {
      if ( list != 0 )
      {
        list = list->next;
        data = list == 0 ? 0 : (char*)list->object;
      }
      data = list == 0 ? 0 : (char*)list->object;
    }
    else
    {
      return 0;
    }
  }
  while ( strncmp( base, data, len ) != 0 );
  return data;
}
void LYAddToCloset( RecallType recall, char *str )
{
  HTList *list = whichRecall( recall );
  char *data = 0;
  HTSACopy( &data, str );
  HTList_addObject( list, (void*)data );
}
int XYdist( int x1, int y1, int x2, int y2, int dx2 )
{
  int xerr = ( x2 - x1 ) * 3, yerr = ( y2 - y1 ) * 9;
  if ( xerr < 0 )
    xerr = ( ( x1 - x2 - dx2 ) * 3 ) + 1;
  if ( xerr < 0 )
    xerr = 0;
  if ( yerr < 0 )
    yerr *= -1;
  if ( yerr == 0 )
  {
    return xerr < 1 ? 0 : ( xerr * 2 ) - 1;
  }
  else
  {
    if ( xerr <= 8 && yerr != 0 )
      yerr += 9 - xerr;
    return yerr + ( xerr * 2 );
  }
}
int set_clicked_link( int x, int y, int code, int clicks )
{
  int left = 6;
  int right = LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) - 5;
  int i;
  int c = -1;
  if ( y == LYlines - 1 || y == 0 )
  {
    int toolbar = y != 0 || ( HText_hasToolbar( HTMainText ) & 255 ) == 0 ? 0 : 1;
    mouse_link = -2;
    if ( x == 0 && toolbar != 0 )
      c = 2122;
    else
    if ( y == 0 && x == LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) && s_hot_paste != -1 )
      c = 2151;
    else
    if ( clicks > 1 )
    {
      if ( x < toolbar + left )
      {
        c = code != 3 || y == 0 ? 2096 : 262;
      }
      else
      if ( right < x )
      {
        c = code != 3 || y == 0 ? 2109 : 263;
      }
      else
      if ( y != 0 )
        c = 2071;
      else
        c = 2070;
    }
    else
    if ( x < toolbar + left )
    {
      c = code != 3 || y == 0 ? s_forw_backw == -1 || x - toolbar <= 2 ? 2085 : 2086 : 259;
    }
    else
    if ( right < x )
    {
      c = code != 3 || y == 0 ? 2084 : 258;
    }
    else
    if ( y != 0 )
      c = 2063;
    else
      c = 2064;
  }
  else
  if ( x == LYcols - 1 && ( LYShowScrollbar & 255 ) != 0 && LYsb_begin >= 0 )
  {
    int h = display_lines - ( ( LYsb_arrow & 255 ) == 0 ? 0 : 2 );
    mouse_link = -2;
    y -= ( LYsb_arrow & 255 ) == 0 ? 1 : 2;
    if ( y < 0 )
    {
      return 2065;
    }
    if ( h <= y )
    {
      return 2066;
    }
    if ( clicks > 1 )
    {
      double frac = (double)( y ) / (double)( h - 1 );
      int l = HText_getNumOfLines( ) + 1;
      l -= display_lines;
      if ( l >= 1 )
        LYSetNewline( (int)( ( frac * (double)( l ) ) + 1.000000000000 + 0.500000000000 ) );
      return LYReverseKeymap( 69 );
    }
    else
    if ( y < LYsb_begin )
    {
      return 2064;
    }
    if ( LYsb_end <= y )
    {
      return 2063;
    }
    mouse_link = -1;
  }
  else
  {
    int mouse_err = 29, cur_err;
    i = 0;
    for ( ; i < nlinks; i++ )
    {
      int len, lx = links[ i ].lx, is_text = 0;
      int count = 0;
      char *text = LYGetHiliteStr( i, count );
      if ( links[ i ].type == 1 && ( links[ i ].l_form->type == 1 || links[ i ].l_form->type == 12 || links[ i ].l_form->type == 2 || links[ i ].l_form->type == 11 || links[ i ].l_form->type == 9 ) )
        is_text = 1;
      if ( text != 0 )
      {
        if ( is_text != 0 )
          len = links[ i ].l_form->size;
        else
        {
          len = strlen( text );
        }
        cur_err = XYdist( x, y, links[ i ].lx, links[ i ].ly, len );
        for ( ; cur_err >= 1; cur_err = cur_err <= cur_err_2 ? cur_err : cur_err_2 )
        {
          count++;
          text = LYGetHiliteStr( i, count );
          if ( text != 0 )
          {
            int cur_err_2 = XYdist( x, y, LYGetHilitePos( i, count ), links[ i ].ly + count, strlen( text ) );
            //cur_err = cur_err <= cur_err_2 ? cur_err : cur_err_2;
          }
          else
            break;
        }
        if ( cur_err >= 1 && is_text != 0 )
          cur_err--;
        if ( cur_err == 0 )
        {
          int cury = LYwin == 0 ? -1 : LYwin->_cury, curx = LYwin == 0 ? -1 : LYwin->_curx;
          if ( clicks > 1 && is_text != 0 && links[ i ].l_form->type == 12 )
          {
            if ( code != 2 || y != cury || curx < lx || len < curx - lx )
            {
              c = 2088;
              mouse_link = i;
            }
            else
            {
              c = 2088;
              mouse_link = -1;
            }
            mouse_err = 0;
            break;
          }
          else
          {
            if ( code != 2 || y != cury || curx < lx || len < curx - lx )
            {
              if ( is_text != 0 )
                have_levent = 1;
              mouse_link = i;
            }
            else
              mouse_link = -1;
            mouse_err = 0;
            break;
          }
        }
        else
        {
          if ( cur_err < mouse_err )
          {
            mouse_err = cur_err;
            mouse_link = i;
          }
        }
      }
      //i++;
    }
    if ( mouse_link >= 0 )
    {
      if ( mouse_err == 0 )
      {
        if ( c == -1 )
          c = 2087;
      }
      else
      {
        if ( mouse_err >= 0 )
          c = 2132;
      }
    }
    else
    {
      if ( LYlines < ( y * 2 ) )
      {
        if ( ( y << 2 ) < LYlines * 3 )
          c = 2066;
        else
          c = 2068;
      }
      else
      {
        if ( ( y << 2 ) < LYlines )
          c = 2067;
        else
          c = 2065;
      }
    }
  }
  return c;
}
char *LYstrncpy( char *dst, char *src, int n )
{
  char *val;
  int len;
  if ( src == 0 )
    src = "";
  len = strlen( src );
  if ( n < 0 )
    n = 0;
  val = strncpy( dst, src, n );
  if ( len < n )
  {
    dst[ len ] = 0;
  }
  else
  {
    dst[ n ] = 0;
  }
  return val;
}
char *LYmbcsstrncpy( char *dst, char *src, int n_bytes, int n_glyphs, BOOLEAN utf_flag )
{
  char *val = dst;
  int i_bytes = 0, i_glyphs = 0;
  if ( n_bytes < 0 )
    n_bytes = 0;
  if ( n_glyphs < 0 )
  {
    n_glyphs = 0;
  }
  while ( ( src[0] & 255 ) != 0 && i_bytes < n_bytes )
  {
    if ( utf_flag != 0 && ( src[0] & 192 ) != 128 )
    {
      i_glyphs++;
      if ( ( ( ( i_glyphs < n_glyphs ) ^ 1 ) & 255 ) != 0 )
      {
        dst[0] = 0;
        return val;
      }
    }
    dst[0] = src[0];
    dst++;
    src++;
    i_bytes++;
  }
  dst[0] = 0;
  return val;
}
char *LYmbcs_skip_glyphs( char *data, int n_glyphs, BOOLEAN utf_flag )
{
  int i_glyphs = 0;
  if ( n_glyphs < 0 )
    n_glyphs = 0;
  if ( data != 0 && ( data[0] & 255 ) != 0 )
  {
    if ( utf_flag == 0 )
    {
      do
      {
        n_glyphs--;
        if ( ( ( ( n_glyphs < 1 ) ^ 1 ) & 255 ) == 0 )
        {
          break;
        }
        else
        {
          data++;
        }
      }
      while ( ( data[0] & 255 ) != 0 );
    }
    else
    for ( ; ( data[0] & 255 ) != 0; data++ )
    {
      if ( utf_flag != 0 && ( data[0] & 192 ) != 128 )
      {
        i_glyphs++;
        if ( ( ( ( i_glyphs < n_glyphs ) ^ 1 ) & 255 ) != 0 )
          break;
      }
      //data++;
    }
  }
  return data;
}
char *LYmbcs_skip_cells( char *data, int n_cells, BOOLEAN utf_flag )
{
  char *result;
  int actual;
  int target = n_cells;
  do
  {
    target--;
    result = LYmbcs_skip_glyphs( data, target, utf_flag );
    actual = LYstrExtent2( data, result - data );
  }
  while ( actual < 1 || actual <= n_cells );
  return result;
}
int LYmbcsstrlen( char *str, BOOLEAN utf_flag, BOOLEAN count_gcells )
{
  int i, j, len = 0;
  if ( str != 0 && ( str[0] & 255 ) != 0 )
  {
    if ( count_gcells != 0 )
    {
      len = LYstrCells( str );
    }
    else
    {
      i = 0;
      for ( ; ( str[ i ] & 255 ) != 0; i++ )
      {
        if ( str[ i ] <= 2 || str[ i ] > 8 )
        {
          len++;
          if ( utf_flag != 0 && ( str[ i ] & 192 ) != 128 )
          {
            j = 0;
            for ( ; ( str[ i + 1 ] & 255 ) != 0 && ( str[ i + 1 ] <= 2 || str[ i + 1 ] > 8 ) && j <= 4 && utf_flag != 0; j++ )
            {
              if ( ( str[ i + 1 ] & 192 ) != 128 )
              {
                break;
              }
              else
              {
                i++;
                //j++;
              }
            }
          }
          else
          if ( utf_flag == 0 && HTCJK != NOCJK && count_gcells == 0 && str[ i ] < 0 && ( str[ i + 1 ] & 255 ) != 0 && ( str[ i + 1 ] <= 2 || str[ i + 1 ] > 8 ) )
            i++;
        }
        //i++;
      }
    }
  }
  return len;
}
void ena_csi( BOOLEAN flag )
{
  csi_is_csi = flag;
  return;
}
int lookup_tiname( char *name, char **names )
{
  int code = 0;
  for ( ; names[ code ] != 0; code++ )
  {
    if ( strcmp( names[ code ], name ) == 0 )
    {
      return code;
    }
    //code++;
  }
  return -1;
}
char *expand_tiname( char *first, size_t len, char **result, char *final )
{
  int eax;
  char name[8192];
  int code;
  strncpy( name, first, len );
  name[ len ] = 0;
  code = lookup_tiname( name, 135963744 );
  if ( code < 0 )
  {
    code = lookup_tiname( name, 135965984 );
    if ( code < 0 )
    {
      if ( ( 0 ^ 0 ) != 0 )
      {
        __stack_chk_fail( );
      }
      return &first[ len ];
    }
  }
  if ( *(int*)(*(int*)(*(int*)(135965448) + 16) + ( code << 2 )) != 0 )
  {
    LYstrncpy( result[0], *(int*)(*(int*)(*(int*)(135965448) + 16) + ( code << 2 )), final - result[0] );
    result[0] += strlen( result[0] );
  }
}
char *expand_tichar( char *first, char **result, char *final )
{
  int eax;
  int ch;
  int limit = 0;
  int radix = 0;
  int value = 0;
  char *name = 0;
  ch = first[0];
  first++;
  switch ( ch )
  {
  case 69:
  case 101:
    value = 27;
    break;
  case 97:
    name = "bel";
    break;
  case 98:
    value = 8;
    break;
  case 102:
    value = 12;
    break;
  case 110:
    value = 10;
    break;
  case 114:
    value = 13;
    break;
  case 116:
    value = 9;
    break;
  case 118:
    value = 11;
    break;
  case 100:
    radix = 10;
    limit = 3;
    break;
  case 120:
    radix = 16;
    limit = 2;
    break;
  default:
    if ( ( *(short*)(*(int*)(__ctype_b_loc( ch - 69 )) + ( ch * 2 )) & 2048 ) != 0 )
    {
      radix = 8;
      limit = 3;
      first = &first[ -1 ];
    }
    else
      value = first[0];
    break;
  }
  if ( radix != 0 )
  {
    char *last = 0;
    char tmp[80];
    LYstrncpy( tmp, first, limit );
    value = strtol( tmp, &last, radix );
    if ( last != 0 && tmp[0] != last )
      first = &first[ last - tmp[0] ];
  }
  if ( name != 0 )
  {
    expand_tiname( name, strlen( name ), result, final );
  }
  result[0][0] = value;
  result[0]++;
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return first;
}
int expand_substring( char *dst, char *first, char *last, char *final )
{
  int ch;
  while ( first < last )
  {
    ch = first[0];
    first++;
    switch ( ch )
    {
    default:
      dst[0] = ch;
      dst++;
      break;
    case 92:
      first = expand_tichar( first, &dst, final );
      break;
    case 94:
      ch = first[0];
      first++;
      if ( ch == 40 )
      {
        char *s = strchr( first, 41 );
        char *was = dst;
        if ( s == 0 )
        {
          s = first + strlen( first );
        }
        first = expand_tiname( first, s - first, &dst, final );
        if ( was == dst )
        {
          return 0;
        }
        if ( ( first[0] & 255 ) != 0 )
        {
          first++;
        }
      }
      else
      {
        if ( ch == 63 )
        {
          dst[0] = 127;
          dst++;
        }
        else
        {
          if ( ( ch & 63 ) <= 31 )
          {
            dst[0] = ch & 31;
            dst++;
          }
          else
          {
            dst[0] = '^';
            dst++;
            first = &first[ -1 ];
          }
        }
      }
      break;
    case 0:
      ch = 128;
      dst[0] = ch;
      dst++;
      break;
    }
    break;
  }
  dst[0] = 0;
  return 1;
}
void unescaped_char( char *parse, int *keysym )
{
  size_t len = strlen( parse );
  char buf[8192];
  if ( len > 2 )
  {
    expand_substring( buf, &parse[1], &parse[ len - 1 ], &buf[8191] );
    if ( strlen( buf ) == 1 )
      keysym[0] = buf[0];
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
BOOLEAN unescape_string( char *src, char *dst, char *final )
{
  BOOLEAN ok = 0;
  if ( src[0] == '\'' )
  {
    int keysym = -1;
    unescaped_char( src, &keysym );
    if ( keysym >= 0 )
    {
      dst[0] = keysym;
      dst[1] = 0;
      ok = 1;
    }
  }
  else
  if ( src[0] == '"' )
  {
    ok = expand_substring( dst, &src[1], src + ( strlen( src ) - 1 ), final );
  }
  return ok;
}
int map_string_to_keysym( char *str, int *keysym )
{
  int eax;
  int dh;
  int modifier = 0;
  keysym[0] = -1;
  if ( strncasecomp( str, "LAC:", 4 ) == 0 )
  {
    char *other = strchr( &str[4], 58 );
    if ( other != 0 )
    {
      int othersym = lecname_to_lec( &other[1] );
      char buf[8192];
      if ( othersym >= 0 && other - str - 4 <= 8191 )
      {
        strncpy( buf, &str[4], other - str - 4 );
        *(char*)(( ebp_2147483632 + ( other - str - 4 ) ) - 8196) = 0;
        keysym[0] = lacname_to_lac( buf );
        if ( keysym[0] >= 0 )
          keysym[0] = edx;
          if ( ( 0 ^ 0 ) != 0 )
          {
            __stack_chk_fail( );
          }
          return keysym[0];
      }
    }
    keysym[0] = lacname_to_lac( &str[4] );
    if ( keysym[0] >= 0 )
      keysym[0] = edx;
  }
  if ( strncasecomp( str, "Meta-", 5 ) == 0 )
  {
    str += 5;
    modifier = 8192;
    if ( ( str[0] & 255 ) != 0 )
    {
      size_t len = strlen( str );
      if ( len == 1 )
        keysym[0] = modifier | str[0];
      else
      if ( len == 2 && str[0] == '^' && ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( str[1] * 2 )) & 1024 ) != 0 || ( str[1] > 63 && str[1] <= 95 ) ) )
        keysym[0] = modifier | ( str[1] & 31 );
      else
      if ( len == 2 && str[0] == '^' && str[1] == '?' )
        keysym[0] = modifier | 127;
      else
      if ( str[0] == '^' || str[0] == '\\' )
      {
        char buf[8192];
        expand_substring( buf, str, &str[ 28 ], &buf[8191] );
        if ( strlen( buf ) <= 1 )
          keysym[0] = modifier | buf[0];
      }
    }
  }
  if ( str[0] == '\'' )
  {
    unescaped_char( str, keysym );
  }
  if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( str[0] * 2 )) & 2048 ) != 0 )
  {
    char *tmp;
    long value = strtol( str, &tmp, 0 );
    if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( tmp[0] * 2 )) & 8 ) == 0 )
    {
      keysym[0] = value;
      if ( keysym[0] > 255 )
        keysym[0] = edx;
    }
  }
  else
  {
    Keysym_String_List *k = Keysym_Strings;
    for ( ; k->string != 0; k++ )
    {
      if ( strcmp( k->string, str ) == 0 )
      {
        keysym[0] = k->value;
        break;
      }
      else
      {
        //k++;
      }
    }
  }
  if ( keysym[0] >= 0 )
    keysym[0] |= modifier;
}
char *skip_keysym( char *parse )
{
  int quoted = 0;
  int escaped = 0;
  for ( ; ( parse[0] & 255 ) != 0; parse++ )
  {
    if ( escaped != 0 )
      escaped = 0;
    else
    if ( quoted != 0 )
    {
      if ( parse[0] == '\\' )
        escaped = 1;
      else
      if ( quoted == parse[0] )
        quoted = 0;
    }
    else
    if ( parse[0] == '\\' )
      escaped = 1;
    else
    if ( parse[0] == '"' || parse[0] == '\'' )
      quoted = parse[0];
    else
    {
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( parse[0] * 2 )) & 8192 ) != 0 )
        break;
    }
    //parse++;
  }
  return quoted == 0 && escaped == 0 ? parse : 0;
}
int setkey_cmd( char *parse )
{
  int eax;
  char *s, *t;
  int keysym;
  char buf[8192];
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
  {
    fprintf( TraceFP( ), "KEYMAP(PA): in=%s", parse );
  }
  s = skip_keysym( parse );
  if ( s != 0 )
  {
    if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( s[0] * 2 )) & 8192 ) != 0 )
    {
      s[0] = 0;
      s++;
      s = LYSkipBlanks( s );
      t = skip_keysym( s );
      if ( t == 0 )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
        {
          fprintf( TraceFP( ), "KEYMAP(SKIP) no key expansion found\n" );
        }
        if ( ( 0 ^ 0 ) != 0 )
        {
          __stack_chk_fail( );
        }
        return define_key( buf, &keysym );
      }
      else
      {
        if ( t != s )
          t[0] = 0;
        if ( map_string_to_keysym( s, &keysym ) >= 0 )
        {
          if ( ( unescape_string( parse, buf, &buf[8191] ) & 255 ) == 0 )
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
            {
              fprintf( TraceFP( ), "KEYMAP(SKIP) could unescape key\n" );
            }
          }
          else
          {
            if ( LYTraceLogFP == 0 )
            {
              if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
              {
                fprintf( TraceFP( ), "KEYMAP(DEF) keysym=%#x\n", keysym );
              }
            }
            else
            if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
            {
              fprintf( TraceFP( ), "KEYMAP(DEF) keysym=%#x, seq='%s'\n", keysym, buf );
            }
          }
        }
        else
        {
          if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
          {
            fprintf( TraceFP( ), "KEYMAP(SKIP) could not map to keysym\n" );
          }
        }
      }
    }
    else
    if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
    {
      fprintf( TraceFP( ), "KEYMAP(SKIP) junk after key description: '%s'\n", s );
    }
  }
  else
  if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 8 ) != 0 )
  {
    fprintf( TraceFP( ), "KEYMAP(SKIP) no key description\n" );
  }
}
int unsetkey_cmd( char *parse )
{
  char *s = skip_keysym( parse );
  if ( s != parse )
  {
    s[0] = 0;
  {
    int keysym;
    if ( map_string_to_keysym( parse, &keysym ) >= 0 )
    {
      define_key( 0, &keysym );
    }
  }
  }
  return 0;
}
int read_keymap_file( void )
{
  int eax;
  static struct {
     char *name;
     int (*func)( char * );
  } table[2] = { { "setkey", &setkey_cmd,  }
, { "unsetkey", &unsetkey_cmd,  }
,  };
  char *line = 0;
  FILE *fp;
  char file[256];
  int linenum;
  size_t n;
  LYAddPathToHome( file, 256, ".lynx-keymaps" );
  fp = fopen64( file, "r" );
  if ( fp == 0 )
  {
  }
  else
  {
    linenum = 0;
    do
    {
      if ( LYSafeGets( &line, fp ) != 0 )
      {
        char *s = LYSkipBlanks( line );
        linenum++;
        if ( ( s[0] & 255 ) == 0 || s[0] == '#' )
          continue;
        else
        {
          n = 0;
          for ( ; n <= 1; n++ )
          }
        }
        else
        {
          if ( line != 0 )
          {
            free( line );
            line = 0;
          }
          LYCloseInput( fp );
        }
      }
      while ( n > 1 );
    {
      size_t len = strlen( table[ n ].name );
      if ( len < strlen( s ) && strncmp( s, table[ n ].name, len ) == 0 )
      {
        ebx( LYSkipBlanks( &s[ len ] ) );
        if ( LYSkipBlanks( &s[ len ] ) < 0 )
        {
          fprintf( *(int*)(135965404), gettext( "Error processing line %d of %s\n" ), linenum, file[0] );
        }
      }
      n++;
    }
    }
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
    }
    return 0;
}
void setup_vtXXX_keymap( void )
{
  static Keysym_String_List table[21] = { { "\033[A", 259,  }
, { "\033OA", 259,  }
, { "\033[B", 258,  }
, { "\033OB", 258,  }
, { "\033[C", 261,  }
, { "\033OC", 261,  }
, { "\033[D", 260,  }
, { "\033OD", 260,  }
, { "\033[1~", 362,  }
, { "\033[2~", 331,  }
, { "\033[3~", 330,  }
, { "\033[4~", 385,  }
, { "\033[5~", 339,  }
, { "\033[6~", 338,  }
, { "\033[7~", 262,  }
, { "\033[8~", 360,  }
, { "\033[11~", 265,  }
, { "\033[28~", 265,  }
, { "\033OP", 265,  }
, { "\033[OP", 265,  }
, { "\033[29~", 280,  }
,  };
  size_t n = 0;
  for ( ; n <= 20; n++ )
  {
    define_key( table[ n ].string, &table[ n ].value );
    //n++;
  }
  return;
}
int lynx_initialize_keymaps( void )
{
  setup_vtXXX_keymap( );
  return read_keymap_file( );
}
int LYmouse_menu( int x, int y, int atlink, int code )
{
  static struct {
     char *txt;
     int action;
     unsigned int flag;
  } possible_entries[26] = { { "Quit", 14, 1,  }
, { "Home page", 48, 1,  }
, { "Previous document", 37, 1,  }
, { "Beginning of document", 22, 1,  }
, { "Page up", 16, 1,  }
, { "Half page up", 19, 1,  }
, { "Two lines up", 17, 1,  }
, { "History", 36, 1,  }
, { "Help", 43, 0,  }
, { "Do nothing (refresh)", 21, 0,  }
, { "Load again", 12, 1,  }
, { "Edit Doc URL and load", 42, 1,  }
, { "Edit Link URL and load", 83, 2,  }
, { "Show info", 56, 0,  }
, { "Search", 51, 1,  }
, { "Print", 57, 1,  }
, { "Two lines down", 18, 1,  }
, { "Half page down", 20, 1,  }
, { "Page down", 15, 1,  }
, { "End of document", 23, 1,  }
, { "Bookmarks", 60, 1,  }
, { "Cookie jar", 79, 1,  }
, { "Search index", 50, 1,  }
, { "Set Options", 49, 1,  }
, { "Activate this link", 40, 2,  }
, { "Download", 63, 2,  }
,  };
  char *choices[27];
  int actions[26];
  int c, c1, retlac, filter_out = atlink == 0 ? 2 : 1;
  c1 = 0;
  c = c1;
  for ( ; c <= 25; c++ )
  {
    if ( ( possible_entries[ c ].flag & filter_out ) == 0 )
    {
      choices[ c1 ] = possible_entries[ c ].txt;
      actions[ c1 ] = possible_entries[ c ].action;
      c1++;
    }
    //c++;
  }
  choices[ c1 ] = 0;
  c = popup_choice( atlink == 0 ? 9 : 1, y, x <= 5 ? 1 : x - 5, choices, c1, 0, 1 );
  if ( ( term_options & 255 ) != 0 )
  {
    retlac = 69;
    term_options = 0;
  }
  else
    retlac = actions[ c ];
  if ( code == 2 && mouse_link == -1 )
  {
    switch ( retlac )
    {
    case 14:
      retlac = 13;
    case 12:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 22:
    case 23:
    case 36:
    case 37:
    case 42:
    case 43:
    case 48:
    case 49:
    case 50:
    case 51:
    case 56:
    case 57:
    case 60:
    case 79:
      mouse_link = -3;
      break;
    default:
      break;
    }
  }
  if ( retlac == 69 || retlac == 21 )
    mouse_link = -1;
  if ( code == 2 && retlac == 69 )
  {
    repaint_main_statusline( 2 );
  }
  return retlac;
}
int LYgetch_for( int code )
{
  int eax;
  int ch;
  int dh;
  int a, b, c, d = -1;
  int current_modifier = 0;
  BOOLEAN done_esc = 0;
  have_levent = 0;
  while ( 1 )
  {
    if ( *(int*)(__errno_location( )) == 4 )
    {
      *(int*)(__errno_location( )) = 0;
    }
    clearerr( *(int*)(135965416) );
    c = wgetch( LYtopwindow( ) );
    lynx_nl2crlf( 0 );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "GETCH: Got %#x.\n", c );
    }
    if ( c == -1 && *(int*)(__errno_location( )) == 4 )
      break;
    else
    {
      if ( feof( *(int*)(135965416) ) != 0 || ferror( *(int*)(135965416) ) != 0 || c == -1 )
      {
        if ( ( recent_sizechange & 255 ) != 0 )
        {
          return 7;
        }
        cleanup( );
        exit_immediately( 0 );
      }
      if ( escape_bound == 0 && ( c == 27 || ( ( csi_is_csi & 255 ) != 0 && c == 155 ) ) )
      {
        done_esc = 1;
        b = wgetch( LYtopwindow( ) );
        if ( b == 91 || b == 79 )
        {
          a = wgetch( LYtopwindow( ) );
        }
        else
          a = b;
        switch ( a )
        {
        case 65:
          c = 256;
          break;
        case 66:
          c = 257;
          break;
        case 67:
          c = 258;
          break;
        case 68:
          c = 259;
          break;
        case 113:
          c = 263;
          break;
        case 114:
          c = 257;
          break;
        case 115:
          c = 260;
          break;
        case 116:
          c = 259;
          break;
        case 118:
          c = 258;
          break;
        case 119:
          c = 262;
          break;
        case 120:
          c = 256;
          break;
        case 121:
          c = 261;
          break;
        case 77:
          c = 10;
          break;
        case 109:
          c = 45;
          break;
        case 107:
          if ( b == 79 )
            c = 43;
          else
            done_esc = 0;
          break;
        case 108:
          c = 43;
          break;
        case 80:
          c = 264;
          break;
        case 117:
          c = 264;
          break;
        case 112:
          c = 48;
          break;
        case 49:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 266;
          }
          done_esc = 0;
          break;
        case 50:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 268;
            else
            {
              if ( ( d == 56 || d == 57 ) && wgetch( LYtopwindow( ) ) == 126 )
              {
                if ( d == 56 )
                  c = 264;
                else
                if ( d == 57 )
                  c = 265;
                d = -1;
              }
            }
          }
          else
            done_esc = 0;
          break;
        case 51:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 269;
          }
          done_esc = 0;
          break;
        case 52:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 267;
          }
          done_esc = 0;
          break;
        case 53:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 261;
          }
          done_esc = 0;
          break;
        case 54:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 126 )
              c = 260;
          }
          done_esc = 0;
          break;
        case 91:
          if ( b == 91 || c == 155 )
          {
            d = wgetch( LYtopwindow( ) );
            if ( d == 65 )
              c = 264;
          }
          else
        default:
          if ( c == 27 && b == a && b != 91 && c != 155 )
          {
            current_modifier = 8192;
            c = a;
            done_esc = 0 == 0;
          }
          else
          {
            if ( ( WWW_TraceFlag & 255 ) != 0 )
            {
              fprintf( TraceFP( ), "Unknown key sequence: %d:%d:%d\n", c, b, a );
            }
            if ( ( WWW_TraceFlag & 255 ) != 0 && LYTraceLogFP == 0 )
              sleep( MessageSecs );
          }
          break;
        }
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( a * 2 )) & 2048 ) != 0 && ( b == 91 || c == 155 ) && d != -1 && d != 126 )
        {
          d = wgetch( LYtopwindow( ) );
        }
        if ( done_esc == 0 && 0 == 0 )
        {
          if ( b == a && b != 91 && c != 155 && c == 27 )
          {
            current_modifier = 8192;
            c = a;
            done_esc = 1;
          }
          else
            done_esc = 1;
        }
      }
      if ( c >= 0 && ( c & 32768 ) != 0 )
      {
        if ( code != 2 && code != 3 )
        {
          c = c == -1 || ( c & 32768 ) == 0 ? c : ebp_92;
        }
      }
      else
      if ( c >= 0 && ( c & 1024 ) != 0 )
      {
        c &= -1025;
        done_esc = 1;
      }
      if ( c >= 0 && c >= 0 && ( c & 32768 ) == 0 && ( c & 8192 ) != 0 )
      {
        current_modifier = 8192;
        c &= 2047;
      }
      if ( c >= 0 && ( c & 34816 ) != 0 )
        done_esc = 1;
      if ( done_esc == 0 )
      {
        switch ( c )
        {
        case 258:
          c = 257;
          break;
        case 259:
          c = 256;
          break;
        case 260:
          c = 259;
          break;
        case 261:
          c = 258;
          break;
        case 262:
          c = 262;
          break;
        case 333:
          c = 18;
          break;
        case 338:
          c = 260;
          break;
        case 339:
          c = 261;
          break;
        case 347:
          c = 263;
          break;
        case 348:
          c = 262;
          break;
        case 349:
          c = 261;
          break;
        case 350:
          c = 270;
          break;
        case 351:
          c = 263;
          break;
        case 352:
          c = 260;
          break;
        case 343:
          c = 10;
          break;
        case 360:
          c = 263;
          break;
        case 363:
          c = 264;
          break;
        case 263:
          c = 127;
          break;
        case 265:
          c = 264;
          break;
        case 280:
          c = 265;
          break;
        case 371:
          c = 265;
          break;
        case 362:
          c = 266;
          break;
        case 385:
          c = 267;
          break;
        case 331:
          c = 268;
          break;
        case 330:
          c = 269;
          break;
        case 353:
          c = 271;
          break;
        case 410:
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "Got KEY_RESIZE, recent_sizechange so far is %d\n", recent_sizechange );
          }
          size_change( 0 );
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "Now recent_sizechange is %d\n", recent_sizechange );
          }
          if ( ( recent_sizechange & 255 ) != 0 )
            c = 270;
          else
          {
            recent_sizechange = 1;
          }
          break;
        case 409:
          if ( ( WWW_TraceFlag & 255 ) != 0 )
          {
            fprintf( TraceFP( ), "KEY_MOUSE\n" );
          }
          if ( code == 1 )
            c = 285;
          else
          {
            if ( code == 4 )
            {
              MEVENT event;
              getmouse( &event.id );
              c = 270;
            }
            else
            {
              MEVENT event;
              int err;
              int lac = 0;
              c = -1;
              mouse_link = -1;
              err = getmouse( &event.id );
              if ( err != 0 )
              {
                if ( ( WWW_TraceFlag & 255 ) != 0 )
                {
                  fprintf( TraceFP( ), "Mouse error: no event available!\n" );
                }
                return code == 0 ? 0 : 270;
              }
              else
              {
                levent.id = event.id;
                levent.x = event.x;
                levent.y = event.y;
                levent.z = event.z;
                levent.bstate = event.bstate;
                if ( ( event.bstate & 4 ) != 0 )
                {
                  c = set_clicked_link( event.x, event.y, code, 1 );
                }
                else
                if ( ( event.bstate & 8 ) != 0 )
                {
                  c = set_clicked_link( event.x, event.y, code, 2 );
                  if ( c == 2088 && code == 2 )
                    lac = 40;
                }
                else
                if ( ( event.bstate & 16384 ) != 0 )
                  c = 2085;
                else
                if ( code == 3 || ( event.bstate & 12483 ) != 0 )
                  continue;
                else
                if ( ( event.bstate & 256 ) != 0 )
                {
                  int atlink;
                  c = set_clicked_link( event.x, event.y, code, 1 );
                  atlink = c == 2087;
                  if ( atlink == 0 )
                    mouse_link = -1;
                  lac = LYmouse_menu( event.x, event.y, atlink, code );
                  if ( lac == 40 )
                  {
                    if ( mouse_link == -1 )
                      lac = 39;
                    else
                    if ( mouse_link >= 0 && ( textfields_need_activation & 255 ) != 0 && links[ mouse_link ].type == 1 && ( links[ mouse_link ].l_form->type == 1 || links[ mouse_link ].l_form->type == 12 || links[ mouse_link ].l_form->type == 2 || links[ mouse_link ].l_form->type == 11 || links[ mouse_link ].l_form->type == 9 ) )
                      lac = 39;
                  }
                  if ( lac == 39 && mouse_link == -1 )
                  {
                    HTAlert( gettext( "No link chosen" ) );
                    lac = 21;
                  }
                  c = LYReverseKeymap( lac ) < 0 ? mouse_link * 64 : LYReverseKeymap( lac );
                }
                if ( code == 2 && mouse_link == -1 && lac != 21 && lac != 40 )
                {
                  ungetmouse( &event.id );
                  wgetch( LYwin );
                  c = 285;
                }
                if ( c + 1 > 660 && ( c & 2048 ) != 0 )
                {
                  return c;
                }
              }
            }
          }
          break;
        default:
          break;
        }
      }
      if ( ( c & 34816 ) != 0 )
      {
        return c;
      }
      if ( c + 1 > 660 )
      {
        return 0;
      }
      return current_modifier | c;
    }
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "Got EOF with EINTR, recent_sizechange so far is %d\n", recent_sizechange );
  }
  if ( ( recent_sizechange & 255 ) == 0 )
  {
    size_change( 0 );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "Now recent_sizechange is %d\n", recent_sizechange );
    }
  }
  *(int*)(__errno_location( )) = 0;
  return 270;
}
int LYgetch( void )
{
  return LYReadCmdKey( 0 );
}
int LYgetch_choice( void )
{
  int ch = LYReadCmdKey( 1 );
  if ( ch == 3 )
  {
    ch = 7;
  }
  return ch;
}
int LYgetch_input( void )
{
  int ch = LYReadCmdKey( 2 );
  if ( ch == 3 )
  {
    ch = 7;
  }
  return ch;
}
int LYgetch_single( void )
{
  int ch = LYReadCmdKey( 4 );
  if ( ch == 3 )
  {
    ch = 7;
  }
  else
  if ( ch >= 1 && ch <= 255 )
  {
    ch = ( *(short*)(*(int*)(toupper( ch )) + ( ch * 2 )) & 512 ) == 0 ? ch : toupper( ch );
  }
  return ch;
}
void LYLowerCase( char *arg_buffer )
{
  unsigned char *buffer = (unsigned char*)arg_buffer;
  size_t i = 0;
  for ( ; ( buffer[ i ] & 255 ) != 0; i++ )
  {
    if ( buffer[ i ] < 0 && ( buffer[ i + 1 ] & 255 ) != 0 )
    {
      if ( kanji_code != SJIS || buffer[ i ] >= -96 || buffer[ i ] < -33 )
        i++;
    }
    else
    {
      buffer[ i ] = ( *(short*)(*(int*)(tolower( buffer[ i ] )) + ( buffer[ i ] * 2 )) & 256 ) == 0 ? buffer[ i ] : tolower( buffer[ i ] );
    }
    //i++;
  }
  return;
}
void LYUpperCase( char *arg_buffer )
{
  unsigned char *buffer = (unsigned char*)arg_buffer;
  size_t i = 0;
  for ( ; ( buffer[ i ] & 255 ) != 0; i++ )
  {
    if ( buffer[ i ] < 0 && ( buffer[ i + 1 ] & 255 ) != 0 )
    {
      if ( kanji_code != SJIS || buffer[ i ] >= -96 || buffer[ i ] < -33 )
        i++;
    }
    else
    {
      buffer[ i ] = ( *(short*)(*(int*)(toupper( buffer[ i ] )) + ( buffer[ i ] * 2 )) & 512 ) == 0 ? buffer[ i ] : toupper( buffer[ i ] );
    }
    //i++;
  }
  return;
}
BOOLEAN LYRemoveNewlines( char *buffer )
{
  if ( buffer != 0 )
  {
    char *buf = buffer;
    for ( ; ( buf[0] & 255 ) != 0 && buf[0] != 10 && buf[0] != 13; buf++ )
    {
      //buf++;
    }
    if ( ( buf[0] & 255 ) != 0 )
    {
      char *old = buf;
      for ( ; ( old[0] & 255 ) != 0; old++ )
      {
        if ( old[0] != 10 && old[0] != 13 )
        {
          buf[0] = old[0];
          buf++;
        }
        //old++;
      }
      buf[0] = 0;
      return 1;
    }
  }
  return 1;
}
char *LYReduceBlanks( char *buffer )
{
  if ( buffer != 0 && ( buffer[0] & 255 ) != 0 )
  {
    LYTrimLeading( buffer );
    LYTrimTrailing( buffer );
    convert_to_spaces( buffer, 1 );
  }
  return buffer;
}
char *LYRemoveBlanks( char *buffer )
{
  if ( buffer != 0 )
  {
    char *buf = buffer;
    for ( ; ( buf[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buf[0] * 2 )) & 8192 ) == 0; buf++ )
    {
      //buf++;
    }
    if ( ( buf[0] & 255 ) != 0 )
    {
      char *old = buf;
      for ( ; ( old[0] & 255 ) != 0; old++ )
      {
        if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( old[0] * 2 )) & 8192 ) == 0 )
        {
          buf[0] = old[0];
          buf++;
        }
        //old++;
      }
      buf[0] = 0;
    }
    return buf;
  }
  else
  {
    return 0;
  }
}
char *LYSkipBlanks( char *buffer )
{
  for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192 ) != 0; buffer++ )
  {
    //buffer++;
  }
  return buffer;
}
char *LYSkipNonBlanks( char *buffer )
{
  for ( ; ( buffer[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192 ) == 0; buffer++ )
  {
    //buffer++;
  }
  return buffer;
}
char *LYSkipCBlanks( char *buffer )
{
  for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192 ) != 0; buffer++ )
  {
    //buffer++;
  }
  return buffer;
}
char *LYSkipCNonBlanks( char *buffer )
{
  for ( ; ( buffer[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[0] * 2 )) & 8192 ) == 0; buffer++ )
  {
    //buffer++;
  }
  return buffer;
}
void LYTrimLeading( char *buffer )
{
  char *skipped = LYSkipBlanks( buffer );
  do
  {
    buffer[0] = skipped[0];
    buffer++;
    skipped++;
  }
  while ( ( ( ( buffer[0] & 255 ) != 0 ) & 255 ) != 0 );
  return;
}
char *LYTrimNewline( char *buffer )
{
  size_t i = strlen( buffer );
  for ( ; i != 0 && ( buffer[ i - 1 ] == 10 || buffer[ i - 1 ] == 13 ); buffer[ i ] = 0 )
  {
    i--;
    //buffer[ i ] = 0;
  }
  return buffer;
}
void LYTrimTrailing( char *buffer )
{
  size_t i = strlen( buffer );
  for ( ; i != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( buffer[ i - 1 ] * 2 )) & 8192 ) != 0; buffer[ i ] = 0 )
  {
    i--;
    //buffer[ i ] = 0;
  }
  return;
}
char *LYElideString( char *str, int cut_pos )
{
  static char s_str[1024];
  char buff[1024], *s, *d;
  int len;
  LYstrncpy( buff, str, 1023 );
  len = strlen( buff );
  if ( LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) - 9 < len )
  {
    buff[ cut_pos ] = '.';
    buff[ cut_pos + 1 ] = '.';
    s = 0;
    d = &buff[ cut_pos + 2 ];
    do
    {
      if ( s < buff[0] || d < buff[0] || buff[ LYcols ] <= d )
        break;
      else
      {
        d[0] = s[0];
        d++;
        s++;
      }
    }
    while ( ( ( ( d[0] & 255 ) != 0 ) & 255 ) != 0 );
    buff[ LYcols ] = 0;
  }
  strcpy( s_str, buff );
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return s_str;
}
BOOLEAN LYTrimStartfile( char *buffer )
{
  LYTrimHead( buffer );
  if ( ( ( buffer[0] == 'l' || buffer[0] == 'L' ) && strncasecomp( buffer, "lynxexec:", 9 ) == 0 ) || ( ( buffer[0] == 'l' || buffer[0] == 'L' ) && strncasecomp( buffer, "lynxprog:", 9 ) == 0 ) )
  {
    HTUnEscapeSome( buffer, " \r\n\t" );
    convert_to_spaces( buffer, 1 );
  }
  else
  {
  }
  return 0;
}
void LYEscapeStartfile( char **buffer )
{
  if ( ( LYTrimStartfile( buffer[0] ) & 255 ) == 0 )
  {
    char *escaped = HTEscapeUnsafe( buffer[0] );
    HTSACopy( buffer, escaped );
    if ( escaped != 0 )
    {
      free( escaped );
    }
  }
  return;
}
void LYTrimAllStartfile( char *buffer )
{
  if ( ( LYTrimStartfile( buffer ) & 255 ) == 0 )
  {
    LYRemoveBlanks( buffer );
  }
  return;
}
void LYSetupEdit( EditFieldData *edit, char *old, int maxstr, int maxdsp )
{
  edit->sy = LYwin == 0 ? -1 : LYwin->_cury;
  edit->sx = LYwin == 0 ? -1 : LYwin->_curx;
  edit->pad = ' ';
  edit->dirty = 1;
  edit->panon = 0;
  edit->current_modifiers = 0;
  edit->maxlen = maxstr;
  edit->dspwdth = maxdsp;
  edit->margin = 0;
  edit->pos = strlen( old );
  edit->mark = -1;
  edit->xpan = 0;
  if ( maxdsp < maxstr )
  {
    if ( edit->dspwdth > 4 )
      edit->panon = 1;
    edit->margin = edit->dspwdth / 4;
    if ( edit->margin > 10 )
      edit->margin = 10;
  }
  LYstrncpy( &edit->buffer[0], old, maxstr );
  edit->strlen = strlen( &edit->buffer[0] );
  return;
}
int mbcs_glyphs( char *s, int len )
{
  int glyphs = 0;
  int i;
  if ( LYCharSet_UC[ current_char_set ].enc == 7 )
  {
    i = 0;
    for ( ; ( s[ i ] & 255 ) != 0; i++ )
    {
      if ( len <= i )
      {
        break;
      }
      else
      {
        if ( ( s[ i ] & 192 ) != 128 )
          glyphs++;
        //i++;
      }
    }
  }
  else
  {
    if ( HTCJK != NOCJK )
    {
      i = 0;
      for ( ; ( s[ i ] & 255 ) != 0; glyphs++ )
      {
        if ( len <= i )
        {
          break;
        }
        else
        {
          if ( s[ i ] < 0 )
            i++;
          i++;
          //glyphs++;
        }
      }
    }
    else
    {
      glyphs = len;
    }
  }
  return glyphs;
}
int mbcs_skip( char *s, int pos )
{
  int p, i;
  if ( LYCharSet_UC[ current_char_set ].enc == 7 )
  {
    i = 0;
    p = 0;
    for ( ; ( s[ i ] & 255 ) != 0; i++ )
    {
      if ( ( s[ i ] & 192 ) != 128 )
        p++;
      if ( pos < p )
        break;
      //i++;
    }
  }
  else
  {
    if ( HTCJK != NOCJK )
    {
      i = 0;
      p = i;
      for ( ; ( s[ i ] & 255 ) != 0; i++ )
      {
        if ( pos <= p )
        {
          break;
        }
        else
        {
          if ( s[ i ] < 0 )
            i++;
          p++;
          //i++;
        }
      }
    }
    else
    {
      i = pos;
    }
  }
  return i;
}
int cell2char( char *s, int cells )
{
  int result = 0;
  int len = strlen( s );
  int pos = 0;
  int have;
  for ( ; pos <= len; pos++ )
  {
    have = LYstrExtent2( s, pos );
    if ( cells <= have )
      break;
    else
    {
      //pos++;
    }
  }
  if ( len < pos )
    pos = len;
  result = mbcs_glyphs( s, pos );
  return result;
}
int LYEditInsert( EditFieldData *edit, unsigned char *s, int len, int map, BOOLEAN maxMessage )
{
  int length = strlen( &edit->buffer[0] );
  int remains = edit->maxlen - ( length + len );
  int edited = 0, overflow = 0;
  if ( remains < 0 )
  {
    overflow = 1;
    len = 0;
    if ( length < edit->maxlen )
      len = edit->maxlen - length;
    else
    {
      edit->pos += len;
      edit->strlen += len;
      if ( edited != 0 )
        edit->dirty = 1;
      if ( overflow != 0 && maxMessage != 0 )
      {
        mustshow = 1;
        statusline( gettext( "Maximum length reached!  Delete text or move off field." ) );
      }
      if ( edit->pos < edit->mark )
        edit->mark += len;
      else
      if ( edit->mark < ~edit->pos )
        edit->mark -= len;
      if ( edit->mark >= 0 )
      {
        edit->mark = ~edit->mark;
      }
      return edited;
    }
  }
  edit->buffer[ length + len ] = 0;
  for ( ; edit->pos <= length; length-- )
  {
    edit->buffer[ length + len ] = edit->buffer[ length ];
    //length--;
  }
  strncpy( &edit->buffer[ edit->pos ], (char*)s, len );
  edited = 1;
  edit->pos += len;
  edit->strlen += len;
}
int LYEdit1( EditFieldData *edit, int ch, int action, BOOLEAN maxMessage )
{
  int i;
  int length;
  unsigned char uch;
  int offset;
  if ( edit->maxlen < 1 )
  {
    return 0;
  }
  edit->strlen = length = strlen( &edit->buffer[0] );
  switch ( action )
  {
  case 1:
    uch = ch;
    LYEditInsert( edit, &uch, 1, 0, maxMessage );
    return 0;
    break;
  case 32:
    ch &= 255;
    if ( LYlowest_eightbit[ current_char_set ] <= ch + 64 )
      ch += 64;
    if ( edit->pos <= edit->maxlen && edit->strlen < edit->maxlen )
    {
      if ( edit->pos < edit->mark )
        edit->mark++;
      else
      if ( edit->mark < ~edit->pos )
        edit->mark--;
      if ( edit->mark >= 0 )
        edit->mark = ~edit->mark;
      i = length;
      for ( ; edit->pos <= i; i-- )
      {
        edit->buffer[ i + 1 ] = edit->buffer[ i ];
        //i--;
      }
      edit->buffer[ length + 1 ] = 0;
      edit->buffer[ edit->pos ] = ch;
      edit->pos++;
    }
    else
    {
      if ( maxMessage != 0 )
      {
        mustshow = 1;
        statusline( gettext( "Maximum length reached!  Delete text or move off field." ) );
      }
      return ch;
    }
    break;
  case 20:
    for ( ; edit->pos != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( *(char*)(edit + ( edit->pos - 1 ) + 44) * 2 )) & 8 ) == 0; edit->pos-- )
    {
      if ( *(char*)(edit + ( edit->pos - 1 ) + 44) < 0 )
      {
        break;
      }
      else
      {
        //edit->pos--;
      }
    }
    while ( edit->pos != 0 )
    {
      if ( ( *(short*)(*(int*)(__ctype_b_loc( )) + ( *(char*)(edit + ( edit->pos - 1 ) + 44) * 2 )) & 8 ) == 0 && *(char*)(edit + ( edit->pos - 1 ) + 44) >= 0 )
      {
      }
      else
      {
        edit->pos--;
      }
    }
    break;
  case 19:
    for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( edit->buffer[ edit->pos ] * 2 )) & 8 ) != 0 || edit->buffer[ edit->pos ] < 0; edit->pos++ )
    {
      //edit->pos++;
    }
    for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( edit->buffer[ edit->pos ] * 2 )) & 8 ) == 0 && edit->buffer[ edit->pos ] >= 0; edit->pos++ )
    {
      if ( ( edit->buffer[ edit->pos ] & 255 ) == 0 )
      {
      }
      else
      {
        //edit->pos++;
      }
    }
    break;
  case 12:
    edit->buffer[0] = 0;
    edit->mark = -1;
  case 13:
    edit->pos = 0;
    break;
  case 14:
    edit->pos = length;
    break;
  case 10:
    offset = edit->pos;
    LYEdit1( edit, 0, 19, 0 );
    offset = edit->pos - offset;
    edit->pos -= offset;
    i = edit->pos;
    for ( ; i < ( length - offset ) + 1; i++ )
    {
      edit->buffer[ i ] = edit->buffer[ offset + i ];
      //i++;
    }
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos - offset )
      edit->mark += offset;
    if ( ~edit->pos - offset < edit->mark && edit->mark < ~edit->pos )
      edit->mark = ~edit->pos;
    break;
  case 11:
    offset = edit->pos;
    LYEdit1( edit, 0, 20, 0 );
    offset -= edit->pos;
    i = edit->pos;
    break;
  case 25:
    i = edit->pos;
    for ( ; i < length + 1; i++ )
    {
      edit->buffer[ i - edit->pos ] = edit->buffer[ i ];
      //i++;
    }
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos )
      edit->mark += edit->pos;
    else
      edit->mark = -1;
    edit->pos = 0;
    break;
  case 26:
    edit->buffer[ edit->pos ] = 0;
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark <= ~edit->pos )
      edit->mark = -1;
    break;
  case 7:
    if ( edit->pos < length )
    {
      edit->pos += mbcs_skip( &edit->buffer[ edit->pos ], 1 );
    }
  case 9:
    if ( length != 0 && edit->pos != 0 )
    {
      offset = edit->pos - mbcs_skip( &edit->buffer[0], mbcs_glyphs( &edit->buffer[0], edit->pos ) - 1 );
      edit->pos -= offset;
      i = edit->pos;
      for ( ; i < ( length - offset ) + 1; i++ )
      {
        edit->buffer[ i ] = edit->buffer[ offset + i ];
        //i++;
      }
      if ( edit->mark >= 0 )
        edit->mark = ~edit->mark;
      if ( edit->mark <= ~edit->pos )
        edit->mark += offset;
    }
    break;
  case 15:
  case 16:
    if ( edit->pos < length )
    {
      edit->pos += mbcs_skip( &edit->buffer[ edit->pos ], 1 );
    }
    else
    {
      if ( action == 16 )
      {
        return ch * -1;
      }
    }
    break;
  case 17:
  case 18:
    if ( edit->pos >= 1 )
    {
      edit->pos = mbcs_skip( &edit->buffer[0], mbcs_glyphs( &edit->buffer[0], edit->pos ) - 1 );
    }
    else
    {
      if ( action == 18 )
      {
        return ch * -1;
      }
    }
    break;
  case 28:
    if ( LYCharSet_UC[ current_char_set ].enc != 7 && HTCJK == NOCJK )
    {
      if ( length <= 1 || edit->pos == 0 )
      {
        return ch;
      }
      if ( edit->pos == length )
        edit->pos--;
      if ( edit->mark < 0 )
        edit->mark = ~edit->mark;
      if ( edit->mark == edit->pos || edit->mark == edit->pos + 1 )
        edit->mark = edit->pos - 1;
      if ( edit->mark >= 0 )
        edit->mark = ~edit->mark;
      if ( edit->buffer[ edit->pos ] == *(char*)(edit + ( edit->pos - 1 ) + 44) )
        edit->pos++;
      else
      {
        edit->buffer[ edit->pos ] = i = *(char*)(edit + ( edit->pos - 1 ) + 44);
        edit->pos++;
      }
    }
    break;
  case 33:
    edit->mark = edit->pos;
    return 0;
    break;
  case 34:
    if ( edit->mark < 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark == edit->pos )
    {
      return 0;
    }
    i = edit->pos;
    edit->pos = edit->mark;
    edit->mark = i;
    break;
  case 35:
    if ( edit->mark < 0 )
      edit->mark = ~edit->mark;
    if ( edit->mark == edit->pos )
    {
      killbuffer[0] = 0;
      return 0;
    }
    if ( edit->pos < edit->mark )
      LYEdit1( edit, 0, 34, 0 );
  {
    int reglen = edit->pos - edit->mark;
    LYstrncpy( killbuffer, &edit->buffer[ edit->mark ], reglen <= 1023 ? reglen : 1023 );
    i = edit->mark;
    for ( ; ( edit->buffer[ reglen + i ] & 255 ) != 0; i++ )
    {
      edit->buffer[ i ] = edit->buffer[ reglen + i ];
      //i++;
    }
    edit->buffer[ i ] = edit->buffer[ reglen + i ];
    edit->pos = edit->mark;
    if ( edit->mark >= 0 )
      edit->mark = ~edit->mark;
  }
    break;
  case 36:
    if ( ( killbuffer[0] & 255 ) == 0 )
    {
      edit->mark = ~edit->pos;
      return 0;
    }
  {
    int yanklen = strlen( killbuffer );
    if ( edit->pos + yanklen <= edit->maxlen && edit->strlen + yanklen <= edit->maxlen )
    {
      edit->mark = ~edit->pos;
      i = length;
      for ( ; edit->pos <= i; i-- )
      {
        edit->buffer[ yanklen + i ] = edit->buffer[ i ];
        //i--;
      }
      i = 0;
      for ( ; i < yanklen; i++ )
      {
        edit->buffer[ edit->pos ] = killbuffer[ i ];
        edit->pos++;
        //i++;
      }
    }
    else
    {
      if ( maxMessage != 0 )
      {
        mustshow = 1;
        statusline( gettext( "Maximum length reached!  Delete text or move off field." ) );
      }
    }
  }
    break;
  case 22:
    LYUpperCase( &edit->buffer[0] );
    break;
  case 21:
    LYLowerCase( &edit->buffer[0] );
    break;
  default:
    return ch;
    break;
  }
  edit->dirty = 1;
  edit->strlen = strlen( &edit->buffer[0] );
  return 0;
}
int get_popup_number( char *msg, int *c, int *rel )
{
  int eax;
  char temp[120];
  char *p = temp;
  int num;
  temp[0] = c[0];
  temp[1] = 0;
  mustshow = 1;
  statusline( msg );
  if ( LYgetstr( temp, 0, 120, 0 ) < 0 || ( temp[0] & 255 ) == 0 )
  {
    HTInfoMsg( gettext( "Cancelled!!!" ) );
    c[0] = 0;
    rel[0] = 0;
  }
  else
  {
    rel[0] = 0;
    num = atoi( p );
    for ( ; ( *(short*)(*(int*)(__ctype_b_loc( )) + ( p[0] * 2 )) & 2048 ) != 0; p++ )
    {
      //p++;
    }
    if ( p[0] != 43 && p[0] != 45 )
    {
      if ( p[0] != 0 )
      {
        c[0] = p[0];
        p++;
        rel[0] = p[0];
      }
    }
    else
    {
      rel[0] = p[0];
      p++;
      c[0] = p[0];
    }
    if ( p[0] == 'g' || p[0] == 'G' )
      c[0] = 103;
    else
    if ( p[0] == 'p' || p[0] == 'P' )
      c[0] = 112;
    else
      c[0] = 0;
    if ( rel[0] != 43 && rel[0] != 45 )
      rel[0] = 0;
  }
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return num;
}
void remember_column( EditFieldData *edit, int offset )
{
  int y0 = LYwin == 0 ? -1 : LYwin->_cury, x0 = LYwin == 0 ? -1 : LYwin->_curx;
  edit->offset2col[ offset ] = x0;
  return;
}
void fill_edited_line( int prompting, int length, int ch )
{
  int i;
  curses_style( prompting == 0 ? s_aedit_pad : s_prompt_edit_pad, 1 );
  i = 0;
  for ( ; i < length; i++ )
  {
    waddch( LYwin, &ch );
    //i++;
  }
  curses_style( prompting == 0 ? s_aedit_pad : s_prompt_edit_pad, 0 );
  return;
}
void LYRefreshEdit( EditFieldData *edit )
{
  int all_bytes;
  int pos_bytes = edit->pos;
  int dpy_bytes;
  int lft_bytes;
  int all_cells;
  int dpy_cells;
  int lft_cells;
  int pos_cells;
  int all_chars;
  int dpy_chars;
  int lft_chars;
  int pos_chars;
  int i;
  int padsize;
  char *str;
  int lft_shift = 0;
  int rgt_shift = 0;
  int estyle;
  int prompting = 0;
  if ( ( edit->dirty & 255 ) != 0 && edit->dspwdth != 0 )
  {
    edit->dirty = 0;
    edit->strlen = all_bytes = strlen( &edit->buffer[0] );
    all_cells = LYstrCells( &edit->buffer[0] );
    pos_cells = LYstrExtent2( &edit->buffer[0], edit->pos );
    lft_chars = mbcs_glyphs( &edit->buffer[0], edit->xpan );
    pos_chars = mbcs_glyphs( &edit->buffer[0], edit->pos );
    all_chars = mbcs_glyphs( &edit->buffer[0], all_bytes );
    lft_bytes = edit->xpan;
    lft_cells = LYstrExtent2( &edit->buffer[0], edit->xpan );
    if ( edit->dspwdth + lft_cells <= all_cells && ( edit->dspwdth + lft_cells ) - edit->margin <= pos_cells )
    {
      lft_cells = edit->margin + ( pos_cells - edit->dspwdth );
      lft_chars = cell2char( &edit->buffer[0], lft_cells );
      lft_bytes = mbcs_skip( &edit->buffer[0], lft_chars );
    }
    if ( pos_cells < edit->margin + lft_cells )
    {
      lft_cells = pos_cells - edit->margin;
      if ( lft_cells < 0 )
        lft_cells = 0;
      lft_chars = cell2char( &edit->buffer[0], lft_cells );
      lft_bytes = mbcs_skip( &edit->buffer[0], lft_chars );
    }
    LYmove( edit->sy, edit->sx );
    if ( ( edit->panon & 255 ) != 0 && lft_cells != 0 )
    {
      curses_style( prompting == 0 ? s_aedit_arr : s_prompt_edit_arr, 1 );
      LYmove( edit->sy, edit->sx );
      waddch( LYwin, *(int*)(135965648) );
      curses_style( prompting == 0 ? s_aedit_arr : s_prompt_edit_arr, 0 );
      lft_shift = 1;
    }
    str = &edit->buffer[ lft_bytes ];
    edit->xpan = lft_bytes;
    dpy_cells = all_cells - lft_cells;
    if ( edit->dspwdth - lft_shift < dpy_cells )
    {
      rgt_shift = 1;
      dpy_cells = edit->dspwdth - lft_shift - rgt_shift;
    }
    do
    {
      dpy_chars = cell2char( str, dpy_cells );
      dpy_bytes = mbcs_skip( str, dpy_chars );
      if ( rgt_shift != 0 )
      {
        int old_cells = dpy_cells;
        dpy_cells = LYstrExtent2( str, dpy_bytes );
        if ( old_cells < dpy_cells )
          dpy_cells = old_cells - 1;
      }
      else
      if ( edit->sy == LYlines - 1 )
        prompting = 1;
      if ( prompting != 0 )
        estyle = s_prompt_edit;
      else
        estyle = s_aedit;
      if ( ( WWW_TraceFlag & 255 ) != 0 && ( WWW_TraceMask & 2 ) != 0 )
      {
        fprintf( TraceFP( ), "STYLE.getstr: switching to &lt;edit.%s&gt;.\n", prompting == 0 ? "active" : "prompt" );
      }
      if ( estyle != -1 )
        curses_style( estyle, 1 );
      else
        LYwin->_attrs = 0;
      if ( ( edit->hidden & 255 ) != 0 )
      {
        BOOLEAN utf_flag = LYCharSet_UC[ current_char_set ].enc == 7;
        int cell = 0;
        fill_edited_line( 0, dpy_cells, 42 );
        i = 0;
      {
        do
        {
          char *last = &str[ i ];
          char *next;
          int j;
          next = LYmbcs_skip_glyphs( last, 1, utf_flag );
          j = next - str;
          for ( ; i < j; i++ )
          {
            edit->offset2col[ i ] = edit->sx + cell;
            //i++;
          }
          cell += LYstrExtent2( last, next - last );
        }
        while ( i < dpy_bytes );
        edit->offset2col[ i ] = edit->sx + cell;
      }
      }
      else
      {
        if ( edit->mark >= 0 && edit->mark < edit->xpan )
        {
          curses_style( prompting == 0 ? s_aedit_sel : s_prompt_sel, 1 );
        }
        remember_column( edit, 0 );
        i = 0;
        for ( ; i < dpy_bytes; i++ )
        {
          if ( edit->mark >= 0 && ( ( edit->mark == edit->xpan + i && edit->mark < edit->pos ) || ( edit->pos == edit->xpan + i && edit->pos < edit->mark ) ) )
          {
            curses_style( prompting == 0 ? s_aedit_sel : s_prompt_sel, 1 );
          }
          if ( edit->mark >= 0 && ( ( edit->mark == edit->xpan + i && edit->pos < edit->mark ) || ( edit->pos == edit->xpan + i && edit->mark < edit->pos ) ) )
          {
            curses_style( prompting == 0 ? s_aedit_sel : s_prompt_sel, 0 );
          }
          if ( str[ i ] == 1 || str[ i ] == 2 || ( str[ i ] == -96 && ( HTPassHighCtrlRaw & 255 ) == 0 && HTCJK == NOCJK && ( LYCharSet_UC[ current_char_set ].enc == 2 || ( LYCharSet_UC[ current_char_set ].like8859 & 128 ) != 0 ) ) )
          {
            waddch( LYwin, 32 );
          }
          if ( str[ i ] == 9 )
          {
            int col = edit->offset2col[ i ] - edit->sx;
            while ( col++, ( col & 7 ) != 0 )
            {
              waddch( LYwin, 32 );
            }
            waddch( LYwin, 32 );
          }
          else
          {
            waddch( LYwin, str[ i ] );
            remember_column( edit, i + 1 );
            //i++;
          }
        }
        if ( edit->mark >= 0 && ( ( edit->xpan + dpy_bytes <= edit->mark && edit->pos < edit->xpan + dpy_bytes ) || ( edit->mark < edit->xpan + dpy_bytes && edit->xpan + dpy_bytes <= edit->pos ) ) )
        {
          curses_style( prompting == 0 ? s_aedit_sel : s_prompt_sel, 0 );
        }
      }
      padsize = edit->dspwdth + ( edit->sx - edit->offset2col[ dpy_bytes ] );
      fill_edited_line( prompting, padsize, edit->pad );
      if ( ( edit->panon & 255 ) != 0 && dpy_bytes != 0 && rgt_shift != 0 )
      {
        if ( ( WWW_TraceFlag & 255 ) != 0 )
        {
          fprintf( TraceFP( ), "Draw right-scroller offset (%d + %d)\n", dpy_cells, lft_shift );
        }
        curses_style( prompting == 0 ? s_aedit_arr : s_prompt_edit_arr, 1 );
        LYmove( edit->sy, lft_shift + edit->sx + dpy_cells );
        waddch( LYwin, *(int*)(135965644) );
        curses_style( prompting == 0 ? s_aedit_arr : s_prompt_edit_arr, 0 );
      }
      LYmove( edit->sy, edit->offset2col[ edit->pos - edit->xpan ] );
      if ( estyle != -1 )
        curses_style( estyle, 0 );
      LYrefresh( );
      break;
    }
    while ( dpy_cells < old_cells );
  }
  else
  {
    return;
  }
}
void reinsertEdit( EditFieldData *edit, char *result )
{
  if ( result != 0 )
  {
    LYEdit1( edit, 0, 12, 0 );
  }
  return;
}
int caselessCmpList( void *a, void *b )
{
  return strcasecomp( &((int*)a)[0], &((int*)b)[0] );
}
int normalCmpList( void *a, void *b )
{
  return strcmp( &((int*)a)[0], &((int*)b)[0] );
}
char **sortedList( HTList *list, BOOLEAN ignorecase )
{
  unsigned int count = HTList_count( list );
  unsigned int j = 0;
  unsigned int k, jk;
  char **result = calloc( count + 1, sizeof( char* ) );
  if ( result == 0 )
  {
    outofmem( "./LYStrings.c", "sortedList" );
  }
  for ( ; list == 0 || list->next == 0; j++ )
  {
    if ( list != 0 )
    {
      list = list->next;
      result[ j ] = list == 0 ? 0 : (char*)list->object;
      //j++;
    }
    result[ j ] = list == 0 ? 0 : (char*)list->object;
    //j++;
  }
}
int LYarrayLength( char **list )
{
  int result = 0;
  while ( list++ )
  {
    result++;
  }
  return result;
}
int LYarrayWidth( char **list )
{
  int result = 0;
  int check;
  while ( list[0] != 0 )
  {
    check = strlen( list[0] );
    list++;
    if ( check <= result )
      continue;
    else
    {
      result = check;
    }
  }
  return result;
}
void FormatChoiceNum( char *dst, int num_choices, int choice, char *value )
{
  if ( num_choices >= 0 )
  {
    int digits = num_choices <= 9 ? 1 : 2;
    sprintf( dst, "%*d: %.*s", digits, choice + 1, 1015 - digits, value );
  }
  else
  {
    LYstrncpy( dst, value, 1023 );
    return;
  }
}
unsigned int options_width( char **list )
{
  unsigned int width = 0;
  int count = 0;
  for ( ; list[ count ] != 0; count++ )
  {
    if ( width < strlen( list[ count ] ) )
    {
      width = strlen( list[ count ] );
    }
    //count++;
  }
  return width;
}
void draw_option( WINDOW *win, int entry, int width, BOOLEAN reversed, int num_choices, int number, char *value )
{
  char Cnum[1024];
  FormatChoiceNum( Cnum, num_choices, number, "" );
  wmove( win, &entry, 1 );
  curses_w_style( win, s_menu_entry, 1 );
  waddch( win, 32 );
  curses_w_style( win, s_menu_entry, 0 );
  curses_w_style( win, s_menu_number, 1 );
  waddnstr( win, Cnum, -1 );
  curses_w_style( win, s_menu_number, 0 );
  curses_w_style( win, reversed == 0 ? s_menu_entry : s_menu_active, 1 );
  LYpaddstr( win, width, value );
  curses_w_style( win, reversed == 0 ? s_menu_entry : s_menu_active, 0 );
  curses_w_style( win, s_menu_entry, 1 );
  waddch( win, 32 );
  curses_w_style( win, s_menu_entry, 0 );
  if ( ( 0 ^ 0 ) != 0 )
  {
    __stack_chk_fail( );
  }
  return;
}
int LYhandlePopupList( int cur_choice, int ly, int lx, char **choices, int width, int i_length, int disabled, BOOLEAN for_mouse )
{
  int eax;
  static char prev_target[1024];
  static char prev_target_buffer[1024];
  static BOOLEAN first = 1;
  BOOLEAN numbered = keypad_mode != 0;
  int c = 0, cmd = 0, i = 0, j = 0, rel = 0;
  int orig_choice;
  WINDOW *form_window;
  int num_choices = 0;
  int max_choices = 0;
  int top, bottom, length = -1;
  int window_offset = 0;
  int lines_to_show;
  char Cnum[64];
  int Lnum;
  int npages;
  char *cp;
  int ch = 0;
  RecallType recall;
  int QueryTotal;
  int QueryNum;
  BOOLEAN FirstRecall = 1;
  BOOLEAN ReDraw = 0;
  int number;
  char buffer[1024];
  char *popup_status_msg = 0;
  char **Cptr = 0;
  int can_scroll = 0, can_scroll_was = 0;
  orig_choice = cur_choice;
  if ( cur_choice < 0 )
    cur_choice = 0;
  if ( ( first & 255 ) != 0 )
  {
    prev_target_buffer[0] = 0;
    first = 0;
  }
  prev_target[0] = 0;
  QueryTotal = search_queries == 0 ? 0 : HTList_count( search_queries );
  recall = ( QueryTotal < 1 ) ^ 1;
  QueryNum = QueryTotal;
  num_choices = LYarrayLength( choices ) - 1;
  if ( width < 1 )
  {
    width = options_width( choices );
  }
  if ( numbered != 0 )
  {
    sprintf( Cnum, "%d: ", num_choices );
    Lnum = strlen( Cnum );
    max_choices = num_choices;
  }
  else
  {
    Lnum = 0;
    max_choices = -1;
  }
  top = ly + ~cur_choice;
  if ( top < 0 )
    top = 0;
  if ( i_length < 1 )
    i_length = num_choices;
  else
    i_length--;
  bottom = top + i_length + 3;
  if ( user_mode == 0 )
    lines_to_show = LYlines - 4;
  else
    lines_to_show = LYlines - 2;
  if ( for_mouse != 0 && user_mode == 0 && lines_to_show > 2 )
    lines_to_show--;
  if ( lines_to_show < bottom )
  {
    if ( lines_to_show < i_length + 3 )
    {
      top = 0;
      bottom = top + i_length + 3;
      if ( lines_to_show < bottom )
        bottom = lines_to_show + 1;
    }
    else
    {
      top = lines_to_show + ( ( i_length * -1 ) - 3 ) + 1;
      bottom = lines_to_show + 1;
    }
  }
  length = bottom - top - 2;
  if ( length <= num_choices )
    can_scroll = 4;
  if ( bottom < ly + 2 )
  {
    bottom = ly + 2;
    if ( lines_to_show + 1 < bottom )
      bottom = lines_to_show + 1;
    top = bottom - length - 2;
  }
  if ( for_mouse != 0 )
  {
    int check = width + Lnum + 4;
    int limit = LYcols;
    if ( check < limit )
    {
      if ( limit < check + ( lx - 1 ) )
        lx = ( limit + 1 ) - check;
      else
      if ( lx < 1 )
        lx = 1;
    }
  }
  width += Lnum;
  bottom -= top;
  if ( num_choices >= 1 && cur_choice <= num_choices )
  {
    form_window = LYstartPopup( &top, &lx, &bottom, &width );
    if ( form_window == 0 )
    {
      if ( ( 0 ^ 0 ) != 0 )
      {
        __stack_chk_fail( );
        return disabled == 0 ? cur_choice : orig_choice;
      }
      else
      {
        return disabled == 0 ? cur_choice : orig_choice;
      }
    }
    else
    {
      width -= Lnum;
      bottom += top;
      if ( disabled != 0 )
      {
        popup_status_msg = gettext( "UNMODIFIABLE choice list.  Use return or arrow keys to review or leave." );
      }
      else
      if ( for_mouse == 0 )
      {
        popup_status_msg = gettext( "(Choice list) Hit return and use arrow keys and return to select option." );
      }
      else
      {
        popup_status_msg = gettext( "Left mouse button or return to select, arrow keys to scroll." );
      }
      mustshow = 1;
      statusline( popup_status_msg );
      if ( length <= cur_choice )
        window_offset = ( cur_choice - length ) + 1;
      npages = num_choices + 1 <= length ? 1 : ( num_choices + ( length - 1 ) + 1 ) / length;
      while ( 1 )
      {
        i = 0;
        for ( ; i <= num_choices; i++ )
        {
          if ( window_offset <= i && i - window_offset < length )
            draw_option( form_window, ( i + 1 ) - window_offset, width, 0, max_choices, i, choices[ i ] );
          //i++;
        }
        LYbox( form_window, numbered == 0 );
        Cptr = 0;
        while ( cmd != 39 )
        {
          int row = ( i + 1 ) - window_offset;
          if ( can_scroll != 0 )
          {
            can_scroll = ( window_offset == 0 ? 0 : 2 ) | ( ( num_choices - window_offset < length ) ^ 1 );
            if ( ( can_scroll_was & ~can_scroll ) != 0 )
            {
              LYbox( form_window, numbered == 0 );
              can_scroll_was = 0;
            }
            if ( ( can_scroll & ~can_scroll_was & 2 ) != 0 )
            {
              wmove( form_window, 1, width + Lnum + 3 );
              curses_w_style( form_window, s_menu_sb, 1 );
              waddch( form_window, *(int*)(135965652) );
              curses_w_style( form_window, s_menu_sb, 0 );
            }
            if ( ( can_scroll & ~can_scroll_was & 1 ) != 0 )
            {
              wmove( form_window, &length, width + Lnum + 3 );
              curses_w_style( form_window, s_menu_sb, 1 );
              waddch( form_window, *(int*)(135965656) );
              curses_w_style( form_window, s_menu_sb, 0 );
            }
          }
          if ( Cptr != 0 )
            draw_option( form_window, row, width, 0, max_choices, i, Cptr[ i ] );
          Cptr = choices;
          i = cur_choice;
          row = ( cur_choice + 1 ) - window_offset;
          draw_option( form_window, row, width, 1, max_choices, cur_choice, Cptr[ cur_choice ] );
          LYstowCursor( form_window, row, 1 );
          c = LYgetch_choice( );
          if ( ( term_options & 255 ) == 0 && c != 3 && c != 7 )
          {
            if ( c != -1 )
            {
              if ( ( c & 34816 ) != 0 )
              {
                if ( ( c & 255 ) != 47 )
                {
                }
              }
              else
              if ( keymap[ ( c & 2047 ) + 1 ] == 47 )
                goto B106;
            }
            else
            if ( keymap[0] != 47 )
            {
            }
            if ( c == 285 )
            {
              cmd = fancy_mouse( form_window, row, &cur_choice );
              if ( cmd < 0 )
                continue;
              else
              {
                if ( cmd != 39 )
                {
                  switch ( cmd )
                  {
                  default:
                    break;
                  case 80:
                    c = 0;
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                    number = get_popup_number( gettext( "Select option (or page) number: " ), &c, &rel );
                    if ( ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "got popup option number %d, ", number );
                    }
                    if ( ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "rel='%c', c='%c', cur_choice=%d\n", rel, c, cur_choice );
                    }
                    if ( c == 112 )
                    {
                      int curpage = cur_choice + 1 <= length ? 1 : ( cur_choice + ( length - 1 ) + 1 ) / length;
                      if ( ( WWW_TraceFlag & 255 ) != 0 )
                      {
                        fprintf( TraceFP( ), "  curpage=%d\n", curpage );
                      }
                      if ( rel == 43 )
                        number += curpage;
                      else
                      {
                        if ( rel == 45 )
                          number = curpage - number;
                      }
                    }
                    else
                    {
                      if ( rel == 43 )
                        number = number + cur_choice + 1;
                      else
                      {
                        if ( rel == 45 )
                          number = ( cur_choice - number ) + 1;
                      }
                    }
                    if ( rel != 0 && ( WWW_TraceFlag & 255 ) != 0 )
                    {
                      fprintf( TraceFP( ), "new number=%d\n", number );
                    }
                    if ( c == 112 )
                    {
                      if ( number <= 1 )
                      {
                        if ( window_offset == 0 )
                          gettext( "You are already at the beginning of this option list." );
                        else
                        {
                          window_offset = 0;
                          cur_choice = 0;
                          mustshow = 1;
                          statusline( popup_status_msg );
                        }
                        HTUserMsg( gettext( "You are already at the beginning of this option list." ) );
                        mustshow = 1;
                        statusline( popup_status_msg );
                      }
                      else
                      {
                        if ( npages <= number )
                        {
                          if ( ( num_choices - length ) + 1 <= window_offset )
                          {
                            HTUserMsg( gettext( "You are already at the end of this option list." ) );
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                          window_offset = length * ( npages - 1 );
                          if ( num_choices - length < window_offset )
                            window_offset = ( num_choices - length ) + 1;
                          if ( cur_choice < window_offset )
                            cur_choice = window_offset;
                          mustshow = 1;
                          statusline( popup_status_msg );
                        }
                        else
                        {
                          if ( window_offset == length * ( number - 1 ) )
                          {
                            char *msg = 0;
                            gettext( "You are already at page %d of this option list." );
                          }
                          else
                          {
                            cur_choice = window_offset = length * ( number - 1 );
                            mustshow = 1;
                            statusline( popup_status_msg );
                          }
                          HTSprintf0( &msg, gettext( "You are already at page %d of this option list." ), number );
                          HTUserMsg( msg );
                          if ( msg != 0 )
                          {
                            free( msg );
                            msg = 0;
                          }
                          mustshow = 1;
                          statusline( popup_status_msg );
                        }
                      }
                    }
                    else
                    {
                      if ( number >= 1 )
                      {
                        number--;
                        if ( num_choices < number || c != 0 )
                        {
                          if ( c == 103 )
                          {
                            if ( number == cur_choice )
                            {
                              char *msg = 0;
                              HTSprintf0( &msg, gettext( "Option number %d already is current." ), number + 1 );
                              HTUserMsg( msg );
                              if ( msg != 0 )
                              {
                                free( msg );
                                msg = 0;
                                mustshow = 1;
                                statusline( popup_status_msg );
                              }
                              else
                              {
                                mustshow = 1;
                                statusline( popup_status_msg );
                              }
                            }
                            else
                            {
                              if ( number <= num_choices )
                              {
                                j = number - cur_choice;
                                cur_choice = number;
                                if ( j >= 1 )
                                {
                                  if ( length <= cur_choice - window_offset )
                                  {
                                    window_offset += j;
                                    if ( ( num_choices - length ) + 1 < window_offset )
                                      window_offset = ( num_choices - length ) + 1;
                                      mustshow = 1;
                                      statusline( popup_status_msg );
                                  }
                                  else
                                  {
                                    if ( cur_choice - window_offset < 0 )
                                    {
                                      window_offset -= ( j ^ ( j >> 31 ) ) - ( j >> 31 );
                                      if ( window_offset < 0 )
                                        window_offset = 0;
                                    }
                                  }
                                }
                                else
                                {
                                }
                              }
                              else
                              {
                                HTUserMsg( gettext( "You have entered an invalid option number." ) );
                                mustshow = 1;
                                statusline( popup_status_msg );
                              }
                            }
                          }
                        }
                        else
                        {
                          cur_choice = number;
                          cmd = 39;
                        }
                      }
                    }
                    break;
                  case 26:
                  case 28:
                  case 30:
                  case 32:
                    if ( cur_choice >= 1 )
                      cur_choice--;
                    if ( cur_choice - window_offset >= 0 )
                      continue;
                    else
                    {
                      window_offset--;
                      break;
                    }
                    break;
                  case 27:
                  case 29:
                  case 31:
                  case 33:
                    if ( cur_choice < num_choices )
                      cur_choice++;
                    if ( cur_choice - window_offset < length )
                      continue;
                    else
                    {
                      window_offset++;
                    }
                    break;
                  case 15:
                    if ( window_offset != ( num_choices - length ) + 1 )
                    {
                      cur_choice -= window_offset;
                      window_offset += length;
                      if ( num_choices - length < window_offset )
                        window_offset = ( num_choices - length ) + 1;
                      cur_choice += window_offset;
                    }
                    else
                    {
                      if ( cur_choice < num_choices )
                      {
                        cur_choice = num_choices;
                      }
                    }
                    break;
                  case 16:
                    if ( window_offset != 0 )
                    {
                      cur_choice -= window_offset;
                      window_offset -= length;
                      if ( window_offset < 0 )
                        window_offset = 0;
                      cur_choice += window_offset;
                    }
                    else
                    {
                      if ( cur_choice >= 1 )
                      {
                        cur_choice = 0;
                      }
                    }
                    break;
                  case 22:
                    cur_choice = 0;
                    if ( window_offset < 1 )
                      continue;
                    else
                    {
                      window_offset = 0;
                    }
                    break;
                  case 23:
                    cur_choice = num_choices;
                    if ( window_offset == ( num_choices - length ) + 1 )
                      continue;
                    else
                    {
                      window_offset = ( num_choices - length ) + 1;
                    }
                    break;
                  case 18:
                    cur_choice += 2;
                    if ( num_choices < cur_choice )
                      cur_choice = num_choices;
                    if ( cur_choice - window_offset < length )
                      continue;
                    else
                    {
                      window_offset += 2;
                      if ( ( num_choices - length ) + 1 < window_offset )
                      {
                        window_offset = ( num_choices - length ) + 1;
                      }
                    }
                    break;
                  case 17:
                    cur_choice -= 2;
                    if ( cur_choice < 0 )
                      cur_choice = 0;
                    if ( cur_choice - window_offset >= 0 )
                      continue;
                    else
                    {
                      window_offset -= 2;
                      if ( window_offset < 0 )
                      {
                        window_offset = 0;
                      }
                    }
                    break;
                  case 20:
                    cur_choice += length / 2;
                    if ( num_choices < cur_choice )
                      cur_choice = num_choices;
                    if ( cur_choice - window_offset < length )
                      continue;
                    else
                    {
                      window_offset += length / 2;
                      if ( ( num_choices - length ) + 1 < window_offset )
                      {
                        window_offset = ( num_choices - length ) + 1;
                      }
                    }
                    break;
                  case 19:
                    cur_choice -= length / 2;
                    if ( cur_choice < 0 )
                      cur_choice = 0;
                    if ( cur_choice - window_offset >= 0 )
                      continue;
                    else
                    {
                      window_offset -= length / 2;
                      if ( window_offset < 0 )
                      {
                        window_offset = 0;
                      }
                    }
                    break;
                  case 21:
                    lynx_force_repaint( );
                    LYrefresh( );
                    break;
                  case 53:
                    if ( recall != NORECALL && ( prev_target_buffer[0] & 255 ) == 0 )
                    {
                      cp = HTList_objectAt( search_queries, 0 );
                      if ( cp != 0 )
                      {
                        LYstrncpy( prev_target_buffer, cp, 1023 );
                        QueryNum = 0;
                        FirstRecall = 0;
                      }
                    }
                    strcpy( prev_target, prev_target_buffer );
                  case 51:
                    if ( ( prev_target[0] & 255 ) == 0 )
                    {
                      mustshow = 1;
                      statusline( gettext( "Enter a whereis query: " ) );
                      ch = LYgetstr( prev_target, 0, 1024, recall );
                      if ( ch < 0 )
                      {
                        HTInfoMsg( gettext( "Cancelled!!!" ) );
                      }
                      do
                      {
                        if ( ( prev_target[0] & 255 ) == 0 && ( recall == NORECALL || ( ch != 256 && ch != 257 ) ) )
                        {
                          HTInfoMsg( gettext( "Cancelled!!!" ) );
                        }
                        if ( recall != NORECALL && ch == 256 )
                        {
                          if ( FirstRecall != 0 )
                          {
                            FirstRecall = 0;
                            if ( ( prev_target_buffer[0] & 255 ) != 0 )
                            {
                              QueryNum = QueryTotal - 1;
                              for ( ; QueryNum >= 1; QueryNum-- )
                              {
                                cp = HTList_objectAt( search_queries, QueryNum );
                                if ( cp != 0 && strcmp( prev_target_buffer, cp ) == 0 )
                                  goto B290;
                                else
                                {
                                  //QueryNum--;
                                }
                              }
                            }
                            else
                              QueryNum = 0;
                          }
                          else
                            QueryNum++;
B290:                          if ( QueryTotal <= QueryNum )
                            QueryNum = 0;
                          cp = HTList_objectAt( search_queries, QueryNum );
                          if ( cp != 0 )
                          {
                            LYstrncpy( prev_target, cp, 1023 );
                            if ( ( prev_target_buffer[0] & 255 ) != 0 && strcmp( prev_target_buffer, prev_target ) == 0 )
                            {
                              mustshow = 1;
                              statusline( gettext( "Edit the current query: " ) );
                            }
                            if ( ( ( prev_target_buffer[0] & 255 ) != 0 && QueryTotal == 2 ) || ( ( prev_target_buffer[0] & 255 ) == 0 && QueryTotal == 1 ) )
                            {
                              mustshow = 1;
                              statusline( gettext( "Edit the previous query: " ) );
                            }
                            mustshow = 1;
                            statusline( gettext( "Edit a previous query: " ) );
                            ch = LYgetstr( prev_target, 0, 1024, recall );
                            if ( ch >= 0 )
                              continue;
                            else
                            {
                              HTInfoMsg( gettext( "Cancelled!!!" ) );
                            }
                          }
                        }
                        else
                        {
                          if ( recall != NORECALL && ch == 257 )
                          {
                            if ( FirstRecall != 0 )
                            {
                              FirstRecall = 0;
                              if ( ( prev_target_buffer[0] & 255 ) != 0 )
                              {
                                QueryNum = 0;
                                for ( ; QueryNum < QueryTotal - 1; QueryNum++ )
                                {
                                  cp = HTList_objectAt( search_queries, QueryNum );
                                  if ( cp != 0 && strcmp( prev_target_buffer, cp ) == 0 )
                                    goto B314;
                                  else
                                  {
                                    //QueryNum++;
                                  }
                                }
                              }
                              else
                                QueryNum = QueryTotal - 1;
                            }
                            else
                              QueryNum--;
B314:                            if ( QueryNum < 0 )
                              QueryNum = QueryTotal - 1;
                            cp = HTList_objectAt( search_queries, QueryNum );
                            if ( cp != 0 )
                            {
                              LYstrncpy( prev_target, cp, 1023 );
                              if ( ( prev_target_buffer[0] & 255 ) != 0 && strcmp( prev_target_buffer, prev_target ) == 0 )
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit the current query: " ) );
                              }
                              if ( ( ( prev_target_buffer[0] & 255 ) != 0 && QueryTotal == 2 ) || ( ( prev_target_buffer[0] & 255 ) == 0 && QueryTotal == 1 ) )
                              {
                                mustshow = 1;
                                statusline( gettext( "Edit the previous query: " ) );
                              }
                              mustshow = 1;
                              statusline( gettext( "Edit a previous query: " ) );
                              ch = LYgetstr( prev_target, 0, 1024, recall );
                            }
                          }
                        }
                        strcpy( prev_target_buffer, prev_target );
                        HTAddSearchQuery( prev_target_buffer );
                        j = 1;
                        for ( ; Cptr[ j + i ] != 0; j++ )
                        {
                          FormatChoiceNum( buffer, max_choices, j + i, Cptr[ j + i ] );
                          if ( ( case_sensitive & 255 ) != 0 )
                          {
                            if ( strstr( buffer, prev_target_buffer ) == 0 )
                            {
                            }
                            else
                              break;
                          }
                          else
                          {
                            if ( LYstrstr( buffer, prev_target_buffer ) != 0 )
                              break;
                          }
                          //j++;
                        }
                        if ( Cptr[ j + i ] != 0 )
                        {
                          cur_choice += j;
                          if ( length <= cur_choice - window_offset )
                          {
                            window_offset += j;
                            if ( ( num_choices - length ) + 1 < window_offset )
                              window_offset = ( num_choices - length ) + 1;
                            ReDraw = 1;
                          }
                        }
                        else
                        if ( cur_choice == 0 )
                        {
                          HTUserMsg2( gettext( "'%s' not found!" ), prev_target_buffer );
                        }
                        j = 0;
                        for ( ; j < cur_choice; j++ )
                        {
                          FormatChoiceNum( buffer, max_choices, j + 1, Cptr[ j ] );
                          if ( ( case_sensitive & 255 ) != 0 )
                          {
                            if ( strstr( buffer, prev_target_buffer ) == 0 )
                            {
                            }
                            else
                              break;
                          }
                          else
                          {
                            if ( LYstrstr( buffer, prev_target_buffer ) != 0 )
                              break;
                          }
                          //j++;
                        }
                        if ( j < cur_choice )
                        {
                          j = cur_choice - j;
                          cur_choice -= j;
                          if ( cur_choice - window_offset < 0 )
                          {
                            window_offset -= j;
                            if ( window_offset < 0 )
                              window_offset = 0;
                            ReDraw = 1;
                          }
                        }
                        else
                        {
                          HTUserMsg2( gettext( "'%s' not found!" ), prev_target_buffer );
                        }
                        mustshow = 1;
                        statusline( popup_status_msg );
                        prev_target[0] = 0;
                        QueryTotal = search_queries == 0 ? 0 : HTList_count( search_queries );
                        recall = ( QueryTotal < 1 ) ^ 1;
                        QueryNum = QueryTotal;
                        if ( ReDraw != 1 )
                          continue;
                        else
                        {
                          ReDraw = 0;
                        }
                      }
                      while ( ch >= 0 );
                      HTInfoMsg( gettext( "Cancelled!!!" ) );
                    }
                    break;
                  case 13:
                  case 14:
                  case 37:
                  case 47:
                    cur_choice = orig_choice;
                    cmd = 39;
                    break;
                  }
                }
                else
                  break;
              }
            }
            else
            {
              cmd = c == -1 ? keymap[0] : ( c & 34816 ) == 0 ? keymap[ ( c & 2047 ) + 1 ] : c & 255;
            }
          }
B106:          cmd = 13;
        }
        LYsubwindow( 0 );
      }
    }
  }
  else
  {
  }
}
int LYgetstr( char *inputline, int hidden, size_t bufsize, RecallType recall )
{
  int eax;
  int ah;
  int x, y, MaxStringSize;
  int ch;
  int xlec = -2;
  int last_xlec = -1;
  int last_xlkc = -1;
  EditFieldData MyEdit;
  BOOLEAN refresh_mb = 1;
  y = LYwin == 0 ? -1 : LYwin->_cury;
  x = LYwin == 0 ? -1 : LYwin->_curx;
  MaxStringSize = bufsize <= 1023 ? bufsize - 1 : 1023;
  LYSetupEdit( &MyEdit, inputline, MaxStringSize, LYcols - ( ( LYShowScrollbar & 255 ) != 0 ) - x );
  MyEdit.hidden = hidden;
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "called LYgetstr\n" );
    while ( 1 )
      break;
  }
}
char *LYLineeditHelpURL( void )
{
  static int lasthelp_lineedit = -1;
  static char helpbuf[256];
  static char *phelp = helpbuf;
  if ( lasthelp_lineedit == current_lineedit )
  {
    return helpbuf;
  }
  if ( lasthelp_lineedit == -1 )
  {
    LYstrncpy( helpbuf, helpfilepath, 255 );
    phelp += strlen( helpbuf );
  }
  if ( LYLineeditHelpURLs[ current_lineedit ] != 0 && ( LYLineeditHelpURLs[ current_lineedit ][0] & 255 ) != 0 && strlen( LYLineeditHelpURLs[ current_lineedit ] ) <= helpbuf[256][ phelp * -1 ] )
  {
    LYstrncpy( phelp, LYLineeditHelpURLs[ current_lineedit ], helpbuf[ 255 - phelp ] );
    lasthelp_lineedit = current_lineedit;
    return helpbuf;
  }
  return 0;
}
char *LYstrsep( char **stringp, char *delim )
{
  char *tmp, *out;
  if ( stringp == 0 || stringp[0] == 0 )
  {
    return 0;
  }
  out = stringp[0];
  tmp = strpbrk( stringp[0], delim );
  if ( tmp != 0 )
  {
    tmp[0] = 0;
    tmp++;
    stringp[0] = tmp;
  }
  else
    stringp[0] = 0;
  return out;
}
char *LYstrstr( char *chptr, char *tarptr )
{
  int len = strlen( tarptr );
  for ( ; ( chptr[0] & 255 ) != 0; chptr++ )
  {
    if ( UPPER8( chptr[0], tarptr[0] ) == 0 && strncasecomp8( &chptr[1], &tarptr[1], len - 1 ) == 0 )
    {
      return chptr;
    }
    //chptr++;
  }
  return 0;
}
char *LYno_attr_char_case_strstr( char *chptr, char *tarptr )
{
  char *tmpchptr, *tmptarptr;
  if ( chptr == 0 )
  {
    return 0;
  }
  for ( ; chptr[0] > 2 && chptr[0] <= 8; chptr++ )
  {
    if ( ( chptr[0] & 255 ) == 0 )
    {
      break;
    }
    else
    {
      //chptr++;
    }
  }
  while ( ( chptr[0] & 255 ) != 0 )
  {
    if ( UPPER8( chptr[0], tarptr[0] ) == 0 )
    {
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( ( tmptarptr[0] & 255 ) == 0 )
      {
        return chptr;
      }
      do
      {
        if ( tmpchptr[0] <= 2 || tmpchptr[0] > 8 )
        {
          if ( UPPER8( tmpchptr[0], tmptarptr[0] ) != 0 )
            break;
          else
          {
            tmpchptr++;
            tmptarptr++;
          }
        }
        else
          tmpchptr++;
        if ( ( tmptarptr[0] & 255 ) == 0 )
        {
          return chptr;
        }
      }
      while ( ( tmpchptr[0] & 255 ) != 0 );
    }
    chptr++;
  }
  return 0;
}
char *LYno_attr_char_strstr( char *chptr, char *tarptr )
{
  char *tmpchptr, *tmptarptr;
  if ( chptr == 0 )
  {
    return 0;
  }
  for ( ; chptr[0] > 2 && chptr[0] <= 8; chptr++ )
  {
    if ( ( chptr[0] & 255 ) == 0 )
    {
      break;
    }
    else
    {
      //chptr++;
    }
  }
  while ( ( chptr[0] & 255 ) != 0 )
  {
    if ( tarptr[0] == chptr[0] )
    {
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( ( tmptarptr[0] & 255 ) == 0 )
      {
        return chptr;
      }
      do
      {
        if ( tmpchptr[0] <= 2 || tmpchptr[0] > 8 )
        {
          if ( tmptarptr[0] != tmpchptr[0] )
            break;
          else
          {
            tmpchptr++;
            tmptarptr++;
          }
        }
        else
          tmpchptr++;
        if ( ( tmptarptr[0] & 255 ) == 0 )
        {
          return chptr;
        }
      }
      while ( ( tmpchptr[0] & 255 ) != 0 );
    }
    chptr++;
  }
  return 0;
}
char *LYno_attr_mbcs_case_strstr( char *chptr, char *tarptr, BOOLEAN utf_flag, BOOLEAN count_gcells, int *nstartp, int *nendp )
{
  char *tmpchptr;
  char *tmptarptr;
  int len = 0;
  int offset;
  if ( chptr == 0 || tarptr == 0 )
  {
    return 0;
  }
  for ( ; chptr[0] > 2 && chptr[0] <= 8; chptr++ )
  {
    if ( ( chptr[0] & 255 ) == 0 )
    {
      break;
    }
    else
    {
      //chptr++;
    }
  }
  while ( ( chptr[0] & 255 ) != 0 )
  {
    if ( ( utf_flag == 0 && HTCJK != NOCJK && chptr[0] < 0 && tarptr[0] == chptr[0] && ( chptr[1] & 255 ) != 0 && ( chptr[1] <= 2 || chptr[1] > 8 ) ) || UPPER8( chptr[0], tarptr[0] ) == 0 )
    {
      int tarlen = 0;
      offset = len;
      len++;
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( ( tmptarptr[0] & 255 ) == 0 )
      {
        if ( nstartp != 0 )
          nstartp[0] = offset;
        if ( nendp != 0 )
          nendp[0] = len;
        return chptr;
      }
      else
      {
        if ( utf_flag == 0 && HTCJK != NOCJK && chptr[0] < 0 && tarptr[0] == chptr[0] && ( tmpchptr[0] & 255 ) != 0 && ( tmpchptr[0] <= 2 || tmpchptr[0] > 8 ) )
        {
          if ( tmptarptr[0] == tmpchptr[0] )
          {
            tmpchptr++;
            tmptarptr++;
            if ( count_gcells != 0 )
              tarlen++;
            if ( ( tmptarptr[0] & 255 ) == 0 )
            {
              if ( nstartp != 0 )
                nstartp[0] = offset;
              if ( nendp != 0 )
                nendp[0] = tarlen + len;
              return chptr;
            }
            else
            {
              while ( 1 )
              {
                if ( tmpchptr[0] <= 2 || tmpchptr[0] > 8 )
                {
                  if ( utf_flag == 0 && HTCJK != NOCJK && tmpchptr[0] < 0 )
                  {
                    if ( tmptarptr[0] == tmpchptr[0] && tmptarptr[1] == tmpchptr[1] && ( tmpchptr[1] <= 2 || tmpchptr[1] > 8 ) )
                    {
                      tmpchptr++;
                      tmptarptr++;
                      if ( count_gcells != 0 )
                        tarlen++;
                    }
                  }
                  else
                  {
                    if ( UPPER8( tmpchptr[0], tmptarptr[0] ) != 0 )
                      goto B45;
                  }
                  if ( utf_flag == 0 || ( tmptarptr[0] & 192 ) != 128 )
                    tarlen++;
                  tmpchptr++;
                  tmptarptr++;
                }
                else
                  tmpchptr++;
                if ( ( tmptarptr[0] & 255 ) == 0 )
                {
                  if ( nstartp != 0 )
                    nstartp[0] = offset;
                  if ( nendp != 0 )
                    nendp[0] = tarlen + len;
                  return chptr;
                }
                else
                {
                  if ( ( tmpchptr[0] & 255 ) != 0 )
                    continue;
                }
              }
            }
          }
          else
          {
            chptr++;
            if ( count_gcells != 0 )
              len++;
          }
        }
      }
    }
    else
    {
      if ( ( utf_flag == 0 || ( chptr[0] & 192 ) != 128 ) && ( chptr[0] <= 2 || chptr[0] > 8 ) )
      {
        if ( utf_flag == 0 && HTCJK != NOCJK && chptr[0] < 0 && ( chptr[1] & 255 ) != 0 && ( chptr[1] <= 2 || chptr[1] > 8 ) )
        {
          chptr++;
          if ( count_gcells != 0 )
            len++;
        }
        len++;
      }
    }
B45:    chptr++;
  }
  return 0;
}
char *LYno_attr_mbcs_strstr( char *chptr, char *tarptr, BOOLEAN utf_flag, BOOLEAN count_gcells, int *nstartp, int *nendp )
{
  char *tmpchptr;
  char *tmptarptr;
  int len = 0;
  int offset;
  if ( chptr == 0 || tarptr == 0 )
  {
    return 0;
  }
  for ( ; chptr[0] > 2 && chptr[0] <= 8; chptr++ )
  {
    if ( ( chptr[0] & 255 ) == 0 )
    {
      break;
    }
    else
    {
      //chptr++;
    }
  }
  while ( ( chptr[0] & 255 ) != 0 )
  {
    if ( tarptr[0] == chptr[0] )
    {
      int tarlen = 0;
      offset = len;
      len++;
      tmpchptr = &chptr[1];
      tmptarptr = &tarptr[1];
      if ( ( tmptarptr[0] & 255 ) == 0 )
      {
        if ( nstartp != 0 )
          nstartp[0] = offset;
        if ( nendp != 0 )
          nendp[0] = len;
        return chptr;
      }
      else
      {
        if ( utf_flag == 0 && HTCJK != NOCJK && chptr[0] < 0 && ( tmpchptr[0] & 255 ) != 0 && ( tmpchptr[0] <= 2 || tmpchptr[0] > 8 ) )
        {
          if ( tmptarptr[0] == tmpchptr[0] )
          {
            tmpchptr++;
            tmptarptr++;
            if ( count_gcells != 0 )
              tarlen++;
            if ( ( tmptarptr[0] & 255 ) == 0 )
            {
              if ( nstartp != 0 )
                nstartp[0] = offset;
              if ( nendp != 0 )
                nendp[0] = tarlen + len;
              return chptr;
            }
            else
            {
              while ( 1 )
              {
                if ( tmpchptr[0] <= 2 || tmpchptr[0] > 8 )
                {
                  if ( utf_flag == 0 && HTCJK != NOCJK && tmpchptr[0] < 0 )
                  {
                    if ( tmptarptr[0] == tmpchptr[0] && tmptarptr[1] == tmpchptr[1] && ( tmpchptr[1] <= 2 || tmpchptr[1] > 8 ) )
                    {
                      tmpchptr++;
                      tmptarptr++;
                      if ( count_gcells != 0 )
                        tarlen++;
                    }
                  }
                  else
                  if ( tmptarptr[0] != tmpchptr[0] )
                    goto B36;
                  if ( utf_flag == 0 || ( tmptarptr[0] & 192 ) != 128 )
                    tarlen++;
                  tmpchptr++;
                  tmptarptr++;
                }
                else
                  tmpchptr++;
                if ( ( tmptarptr[0] & 255 ) == 0 )
                {
                  if ( nstartp != 0 )
                    nstartp[0] = offset;
                  if ( nendp != 0 )
                    nendp[0] = tarlen + len;
                  return chptr;
                }
                else
                {
                  if ( ( tmpchptr[0] & 255 ) != 0 )
                    continue;
                }
              }
            }
          }
          else
          {
            chptr++;
            if ( count_gcells != 0 )
              len++;
          }
        }
      }
    }
    else
    {
      if ( ( utf_flag == 0 || ( chptr[0] & 192 ) != 128 ) && ( chptr[0] <= 2 || chptr[0] > 8 ) )
      {
        if ( utf_flag == 0 && HTCJK != NOCJK && chptr[0] < 0 && ( chptr[1] & 255 ) != 0 && ( chptr[1] <= 2 || chptr[1] > 8 ) )
        {
          chptr++;
          if ( count_gcells != 0 )
            len++;
        }
        len++;
      }
    }
B36:    chptr++;
  }
  return 0;
}
char *SNACopy( char **dest, char *src, int n )
{
  if ( dest[0] != 0 )
  {
    free( dest[0] );
    dest[0] = 0;
  }
  if ( src != 0 )
  {
    dest[0] = malloc( ( n + 1 ) * sizeof( char ) );
    if ( dest[0] == 0 )
    {
      if ( ( WWW_TraceFlag & 255 ) != 0 )
      {
        fprintf( TraceFP( ), "Tried to malloc %d bytes\n", n );
      }
      outofmem( "./LYStrings.c", "SNACopy" );
    }
    strncpy( dest[0], src, n );
    dest[0][ n ] = 0;
  }
  return dest[0];
}
char *SNACat( char **dest, char *src, int n )
{
  if ( src != 0 && ( src[0] & 255 ) != 0 )
  {
    if ( dest[0] != 0 )
    {
      int length = strlen( dest[0] );
      dest[0] = realloc( dest[0], ( n + length + 1 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "./LYStrings.c", "SNACat" );
      strncpy( &dest[0][ length ], src, n );
      dest[0][ n + length ] = 0;
    }
    else
    {
      dest[0] = malloc( ( n + 1 ) * sizeof( char ) );
      if ( dest[0] == 0 )
        outofmem( "./LYStrings.c", "SNACat" );
      memcpy( dest[0], src, n );
      dest[0][ n ] = 0;
    }
  }
  return dest[0];
}
long UniToLowerCase( long upper )
{
  size_t i;
  size_t high;
  size_t low;
  long diff = 0;
  if ( upper < 1 )
  {
    return upper;
  }
  low = 0;
  high = 705;
  do
  {
    if ( low < high )
    {
      i = low + ( ( high - low ) >> 1 );
      diff = unicode_to_lower_case[ i ].upper - upper;
      if ( diff < 0 )
        low = i + 1;
      if ( diff >= 1 )
        high = i;
    }
    else
    {
      return upper;
    }
  }
  while ( diff != 0 );
  return unicode_to_lower_case[ i ].lower;
}
int UPPER8( int ch1, int ch2 )
{
  if ( ch2 == ch1 )
  {
    return 0;
  }
  if ( ch2 == 0 )
  {
    return ch1;
  }
  if ( ch1 == 0 )
  {
    return ch2 * -1;
  }
  if ( !(bit)( ( ch1 >> 7 ) & 1 ) && !(bit)( ( ch2 >> 7 ) & 1 ) )
  {
    return ( ( *(short*)(*(int*)(toupper( ch2 )) + ( ch1 * 2 )) & 512 ) == 0 ? ch1 : toupper( ch2 ) ) - ( ( *(short*)(*(int*)(toupper( ch2 )) + ( ch2 * 2 )) & 512 ) == 0 ? ch2 : toupper( ch2 ) );
  }
  else
  if ( (bit)( ( ch1 >> 7 ) & 1 ) && (bit)( ( ch2 >> 7 ) & 1 ) )
  {
    if ( ( DisplayCharsetMatchLocale & 255 ) != 0 )
    {
      return ( ( *(short*)(*(int*)(toupper( ch2 )) + ( ch1 * 2 )) & 512 ) == 0 ? ch1 : toupper( ch2 ) ) - ( ( *(short*)(*(int*)(toupper( ch2 )) + ( ch2 * 2 )) & 512 ) == 0 ? ch2 : toupper( ch2 ) );
    }
    else
    {
      long uni_ch2 = UCTransToUni( ch2, current_char_set );
      long uni_ch1;
      if ( uni_ch2 < 0 )
      {
        return ch1;
      }
      uni_ch1 = UCTransToUni( ch1, current_char_set );
      return UniToLowerCase( uni_ch1 ) - UniToLowerCase( uni_ch2 );
    }
  }
  else
  {
    return -10;
  }
}
char *LYSafeGets( char **src, FILE *fp )
{
  int eax;
  char buffer[8192];
  char *result = 0;
  if ( src != 0 )
    result = src[0];
  if ( result != 0 )
  {
    result[0] = 0;
  }
  do
  {
    if ( fgets( buffer, 8192, fp ) != 0 )
    {
      if ( ( buffer[0] & 255 ) != 0 )
      {
        result = HTSACat( &result, buffer );
      }
    }
    else
    if ( ferror( fp ) != 0 )
    {
      if ( result != 0 )
      {
        free( result );
        result = 0;
      }
    }
    else
    {
      if ( feof( fp ) != 0 && result != 0 && ( result[0] & 255 ) == 0 && result != 0 )
      {
        free( result );
        result = 0;
      }
    }
    if ( src != 0 )
      return result;
    if ( ( 0 ^ 0 ) != 0 )
    {
      __stack_chk_fail( );
      break;
    }
  }
  while ( strchr( buffer, 10 ) != 0 );
}
void LYOpenCmdLogfile( int argc, char **argv )
{
  int n;
  if ( lynx_cmd_logfile != 0 )
  {
    cmd_logfile = LYNewTxtFile( lynx_cmd_logfile );
    if ( cmd_logfile != 0 )
    {
      fprintf( cmd_logfile, "# Command logfile created by %s %s (%s)\n", "Lynx", "2.8.7dev.11", LYVersionDate( ) );
      n = 0;
      for ( ; n < argc; n++ )
      {
        fprintf( cmd_logfile, "# Arg%d = %s\n", n, argv[ n ] );
        //n++;
      }
    }
  }
  return;
}
BOOLEAN LYHaveCmdScript( void )
{
  return cmd_script != 0;
}
void LYOpenCmdScript( void )
{
  if ( lynx_cmd_script != 0 )
  {
    cmd_script = fopen64( lynx_cmd_script, "r" );
    if ( ( WWW_TraceFlag & 255 ) != 0 )
    {
      fprintf( TraceFP( ), "LYOpenCmdScript(%s) %s\n", lynx_cmd_script, cmd_script == 0 ? "FAIL" : "SUCCESS" );
    }
  }
  return;
}
int LYReadCmdKey( int mode )
{
  int ch = -1;
  if ( cmd_script != 0 )
  {
    char *buffer = 0;
    char *src;
    char *tmp;
    unsigned int len;
    do
    {
      if ( ch < 0 && LYSafeGets( &buffer, cmd_script ) != 0 )
      {
        LYTrimTrailing( buffer );
        src = LYSkipBlanks( buffer );
        tmp = LYSkipNonBlanks( src );
        len = tmp - src;
        if ( len == 3 )
        {
          if ( strncasecomp( src, "key", 3 ) == 0 )
          {
            ch = LYStringToKeycode( LYSkipBlanks( tmp ) );
          }
          else
          {
            if ( strncasecomp( src, "set", 3 ) != 0 )
              continue;
            else
            {
              src = LYSkipBlanks( tmp );
              tmp = src;
              for ( ; ( tmp[0] & 255 ) != 0 && ( *(short*)(*(int*)(__ctype_b_loc( )) + ( tmp[0] * 2 )) & 8192 ) == 0 && tmp[0] != '='; tmp++ )
              {
                //tmp++;
              }
              if ( ( tmp[0] & 255 ) != 0 )
              {
                tmp[0] = 0;
                tmp++;
                tmp = LYSkipBlanks( tmp );
              }
              if ( ( WWW_TraceFlag & 255 ) != 0 )
              {
                fprintf( TraceFP( ), "LYSetConfigValue(%s, %s)\n", src, tmp );
              }
              LYSetConfigValue( src, tmp );
            }
          }
        }
        else
        {
        }
      }
      else
      {
        if ( feof( cmd_script ) != 0 )
        {
          fclose( cmd_script );
          cmd_script = 0;
        }
        if ( ch >= 0 )
        {
          LYSleepReplay( );
          LYrefresh( );
        }
        if ( buffer != 0 )
        {
          free( buffer );
          buffer = 0;
        }
      }
    }
    while ( len != 4 || strncasecomp( src, "exit", 4 ) != 0 );
    exit_immediately( 0 );
  }
  else
  {
    ch = LYgetch_for( mode );
  }
  if ( ( WWW_TraceFlag & 255 ) != 0 )
  {
    fprintf( TraceFP( ), "LYReadCmdKey(%d) -&gt;%s (%#x)\n", mode, LYKeycodeToString( ch, 1 ), ch );
  }
  LYWriteCmdKey( ch );
  return ch;
}
void LYWriteCmdKey( int ch )
{
  if ( cmd_logfile != 0 )
  {
    fprintf( cmd_logfile, "key %s\n", LYKeycodeToString( ch, 0 ) );
  }
  return;
}
void LYCloseCmdLogfile( void )
{
  if ( cmd_logfile != 0 )
  {
    LYCloseOutput( cmd_logfile );
    cmd_logfile = 0;
  }
  if ( cmd_script != 0 )
  {
    LYCloseInput( cmd_script );
    cmd_script = 0;
  }
  if ( lynx_cmd_logfile != 0 )
  {
    free( lynx_cmd_logfile );
    lynx_cmd_logfile = 0;
  }
  if ( lynx_cmd_script != 0 )
  {
    free( lynx_cmd_script );
    lynx_cmd_script = 0;
  }
  return;
}
