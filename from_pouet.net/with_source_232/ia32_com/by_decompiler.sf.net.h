// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_232/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_9) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9" (FFFFC800 (struct "Eq_117" 0001 (0 byte b0000) (209 byte b0209)) tFFFFC800) (FFFFF209 (arr byte 2561) aFFFFF209) (FFFFFC09 byte bFFFFFC09) (0 (arr byte 14335) a0000) (10F word16 w010F) (1DF word16 w01DF) (1E1 word16 w01E1) (1E3 Eq_73 t01E3) (1E7 Eq_84 t01E7) (1EB word16 w01EB) (1ED Eq_141 t01ED) (1FF int16 w01FF) (201 int16 w0201) (203 int16 w0203) (205 Eq_141 t0205) (209 (arr byte 14335) a0209) (DF7 byte b0DF7) (C800 Eq_117 tC800) (FC09 byte bFC09))
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
	T_23 (in 0xA000 : selector)
Eq_39: (struct "Eq_39" (7B29 byte b7B29) (7C69 byte b7C69) (7C6A byte b7C6A))
	T_39 (in bx_53 : (memptr (ptr Eq_9) Eq_39))
	T_46 (in ds->w0201 *s 0x013F + ds->w01FF : word16)
Eq_71: (fn Eq_74 (Eq_73))
	T_71 (in sin : ptr32)
Eq_73: (union "Eq_73" (real32 u0) (word16 u1))
	T_73 (in Mem59[ds:0x01E3:real32] : real32)
	T_94 (in Mem67[ds:0x01E3:word16] : word16)
	T_96 (in Mem67[ds:0x01E3:word16] + 0x005B : word16)
	T_97 (in Mem69[ds:0x01E3:word16] : word16)
	T_108 (in Mem71[ds:0x01E3:word16] : word16)
	T_110 (in ds->t01E3 - 0x18E3 : word16)
	T_111 (in Mem77[ds:0x01E3:word16] : word16)
Eq_74: (union "Eq_74" (real16 u0) (real64 u1))
	T_74 (in sin(ds->t01E3) : real64)
Eq_77: (union "Eq_77" (real16 u0) (real64 u1))
	T_77 (in (real64) ds->w01DF : real64)
Eq_82: (fn Eq_85 (Eq_84))
	T_82 (in cos : ptr32)
Eq_84: (union "Eq_84" (real32 u0) (word16 u1))
	T_84 (in Mem63[ds:0x01E7:real32] : real32)
	T_99 (in Mem69[ds:0x01E7:word16] : word16)
	T_101 (in Mem69[ds:0x01E7:word16] + 0x009E : word16)
	T_102 (in Mem71[ds:0x01E7:word16] : word16)
	T_113 (in Mem77[ds:0x01E7:word16] : word16)
	T_115 (in ds->t01E7 - 0x2B37 : word16)
	T_116 (in Mem79[ds:0x01E7:word16] : word16)
Eq_85: (union "Eq_85" (real16 u0) (real64 u1))
	T_85 (in cos(ds->t01E7) : real64)
Eq_88: (union "Eq_88" (real16 u0) (real64 u1))
	T_88 (in (real64) ds->w01E1 : real64)
Eq_117: (struct "Eq_117" 0001 (0 byte b0000) (209 byte b0209))
	T_117 (in bx_81 : (memptr (ptr Eq_9) Eq_117))
	T_118 (in 0xC800 : word16)
	T_120 (in bx_81 - 0x0001 : word16)
	T_125 (in 0x0000 : word16)
Eq_141: (union "Eq_141" (byte u0) (real32 u1) (word16 u2))
	T_141 (in Mem99[ds:0x01ED:word32] : word32)
	T_143 (in Mem101[ds:0x0205:word32] : word32)
	T_164 (in Mem130[ds:0x0205:word16] : word16)
	T_166 (in Mem130[ds:0x0205:word16] + 0x0001 : word16)
	T_167 (in Mem132[ds:0x0205:word16] : word16)
	T_178 (in Mem101[ds:0x0205:real32] : real32)
	T_192 (in Mem132[ds:0x01ED:word16] : word16)
	T_194 (in Mem132[ds:0x01ED:word16] + 0x0003 : word16)
	T_195 (in Mem141[ds:0x01ED:word16] : word16)
	T_197 (in Mem141[ds:0x01ED:byte] : byte)
Eq_146: (struct "Eq_146" (FFFFEF81 byte bFFFFEF81))
	T_146 (in bx_124 : (memptr (ptr Eq_9) Eq_146))
	T_149 (in dx_105 *s 0x0141 + cx : word16)
Eq_176: (fn Eq_179 (Eq_141))
	T_176 (in sin : ptr32)
Eq_179: (union "Eq_179" (real16 u0) (real64 u1))
	T_179 (in sin(ds->t0205) : real64)
Eq_182: (union "Eq_182" (real16 u0) (real64 u1))
	T_182 (in (real64) ds->w01EB : real64)
Eq_203: (fn word16 (byte))
	T_203 (in __inw : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x13 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x13) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in msdos_display_string : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msdos_display_string : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (FFFFF209 (arr T_216 2561) aFFFFF209) (10F T_160 t010F) (1DF T_76 t01DF) (1E1 T_87 t01E1) (1E3 T_73 t01E3) (1E7 T_84 t01E7) (1EB T_181 t01EB) (1ED T_141 t01ED) (1FF T_45 t01FF) (201 T_41 t0201) (203 T_155 t0203) (205 T_141 t0205) (209 (arr T_218 14335) a0209)))
T_12: (in 0x01F1 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x01F1) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ax_148 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ax : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x09 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in DPB(ax, 0x09, 8, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_18: (in dx_105 : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_19: (in 0x01F1 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_20: (in bx_14 : (memptr (ptr Eq_9) byte))
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_22 t0000)))
T_21: (in 0xFC09 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_22: (in al_19 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0xA000 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (FFFFF209 (arr T_215 2561) aFFFFF209) (0 (arr T_217 14335) a0000)))
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in bx_14 + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem0[0xA000:bx_14 + 0x0000:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in bx_14 + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem22[ds:bx_14 + 0x0000:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_30: (in DPB(ax_148, al_19, 0, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in bx_14 - 0x0001 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_33: (in 0x0DF7 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_34: (in bx_14 != &Eq_9::b0DF7 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in cx_49 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0x46 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in DPB(cx, 0x46, 0, 8) : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_39: (in bx_53 : (memptr (ptr Eq_9) Eq_39))
  Class: Eq_39
  DataType: (memptr (ptr Eq_9) Eq_39)
  OrigDataType: (memptr T_11 (struct (7B29 T_65 t7B29) (7C69 T_49 t7C69) (7C6A T_57 t7C6A)))
T_40: (in 0x0201 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_11 (struct (0 T_41 t0000)))
T_41: (in Mem22[ds:0x0201:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in 0x013F : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in ds->w0201 *s 0x013F : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in 0x01FF : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_11 (struct (0 T_45 t0000)))
T_45: (in Mem22[ds:0x01FF:word16] : word16)
  Class: Eq_45
  DataType: int16
  OrigDataType: word16
T_46: (in ds->w0201 *s 0x013F + ds->w01FF : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_9) Eq_39)
  OrigDataType: word16
T_47: (in 0x7C69 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx_53 + 0x7C69 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem22[ds:bx_53 + 0x7C69:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x18 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in (ds->*bx_53).b7C69 + 0x18 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_52: (in 0x7C69 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in bx_53 + 0x7C69 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem55[ds:bx_53 + 0x7C69:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_55: (in 0x7C6A : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bx_53 + 0x7C6A : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem55[ds:bx_53 + 0x7C6A:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0x10 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in (ds->*bx_53).b7C6A + 0x10 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_60: (in 0x7C6A : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in bx_53 + 0x7C6A : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem57[ds:bx_53 + 0x7C6A:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_63: (in 0x7B29 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in bx_53 + 0x7B29 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem57[ds:bx_53 + 0x7B29:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x10 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in (ds->*bx_53).b7B29 + 0x10 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_68: (in 0x7B29 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in bx_53 + 0x7B29 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem59[ds:bx_53 + 0x7B29:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_71: (in sin : ptr32)
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: (ptr (fn T_74 (T_73)))
T_72: (in 0x01E3 : word16)
  Class: Eq_72
  DataType: (memptr (ptr Eq_9) Eq_73)
  OrigDataType: (memptr T_11 (struct (0 T_73 t0000)))
T_73: (in Mem59[ds:0x01E3:real32] : real32)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: real32
T_74: (in sin(ds->t01E3) : real64)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: (union (real16 u0) (real64 u1))
T_75: (in 0x01DF : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_76 t0000)))
T_76: (in Mem59[ds:0x01DF:word16] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in (real64) ds->w01DF : real64)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: (union (real16 u0) (real64 u1))
T_78: (in sin(ds->t01E3) * (real64) ds->w01DF : word16)
  Class: Eq_78
  DataType: real16
  OrigDataType: real16
T_79: (in (int16) (sin(ds->t01E3) * (real64) ds->w01DF) : int16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_80: (in 0x01FF : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_11 (struct (0 T_81 t0000)))
T_81: (in Mem63[ds:0x01FF:int16] : int16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_82: (in cos : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_85 (T_84)))
T_83: (in 0x01E7 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_9) Eq_84)
  OrigDataType: (memptr T_11 (struct (0 T_84 t0000)))
T_84: (in Mem63[ds:0x01E7:real32] : real32)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: real32
T_85: (in cos(ds->t01E7) : real64)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (real16 u0) (real64 u1))
T_86: (in 0x01E1 : word16)
  Class: Eq_86
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_87 t0000)))
T_87: (in Mem63[ds:0x01E1:word16] : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in (real64) ds->w01E1 : real64)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: (union (real16 u0) (real64 u1))
T_89: (in cos(ds->t01E7) * (real64) ds->w01E1 : word16)
  Class: Eq_89
  DataType: real16
  OrigDataType: real16
T_90: (in (int16) (cos(ds->t01E7) * (real64) ds->w01E1) : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_91: (in 0x0201 : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_11 (struct (0 T_92 t0000)))
T_92: (in Mem67[ds:0x0201:int16] : int16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_93: (in 0x01E3 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_9) Eq_73)
  OrigDataType: (memptr T_11 (struct (0 T_73 t0000)))
T_94: (in Mem67[ds:0x01E3:word16] : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_95: (in 0x005B : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem67[ds:0x01E3:word16] + 0x005B : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_97: (in Mem69[ds:0x01E3:word16] : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_98: (in 0x01E7 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_9) Eq_84)
  OrigDataType: (memptr T_11 (struct (0 T_84 t0000)))
T_99: (in Mem69[ds:0x01E7:word16] : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_100: (in 0x009E : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem69[ds:0x01E7:word16] + 0x009E : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_102: (in Mem71[ds:0x01E7:word16] : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_103: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in cx_49 - 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_106: (in cx_49 != 0x0000 : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in 0x01E3 : word16)
  Class: Eq_107
  DataType: (memptr (ptr Eq_9) Eq_73)
  OrigDataType: (memptr T_11 (struct (0 T_73 t0000)))
T_108: (in Mem71[ds:0x01E3:word16] : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_109: (in 0x18E3 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in ds->t01E3 - 0x18E3 : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_111: (in Mem77[ds:0x01E3:word16] : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: word16
T_112: (in 0x01E7 : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_9) Eq_84)
  OrigDataType: (memptr T_11 (struct (0 T_84 t0000)))
T_113: (in Mem77[ds:0x01E7:word16] : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_114: (in 0x2B37 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in ds->t01E7 - 0x2B37 : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_116: (in Mem79[ds:0x01E7:word16] : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_117: (in bx_81 : (memptr (ptr Eq_9) Eq_117))
  Class: Eq_117
  DataType: (memptr (ptr Eq_9) Eq_117)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_124 t0000) (209 T_121 t0209)))
T_118: (in 0xC800 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_9) Eq_117)
  OrigDataType: word16
T_119: (in 0x0001 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in bx_81 - 0x0001 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_9) Eq_117)
  OrigDataType: word16
T_121: (in al_157 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in bx_81 + 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem99[0xA000:bx_81 + 0x0000:byte] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_125: (in 0x0000 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_9) Eq_117)
  OrigDataType: word16
T_126: (in bx_81 != Eq_9::a0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in ax_148 - 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in (byte) (ax_148 - 0x0001) : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0209 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in bx_81 + 0x0209 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem161[ds:bx_81 + 0x0209:byte] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_133: (in ax_148 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_134: (in 0x0209 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in bx_81 + 0x0209 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in Mem79[ds:bx_81 + 0x0209:byte] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_137: (in DPB(ax_148, al_157, 0, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_138: (in 0x10 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_139: (in al_157 == 0x10 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0x01ED : word16)
  Class: Eq_140
  DataType: (memptr (ptr Eq_9) Eq_141)
  OrigDataType: (memptr T_11 (struct (0 T_141 t0000)))
T_141: (in Mem99[ds:0x01ED:word32] : word32)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word32
T_142: (in 0x0205 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_9) Eq_141)
  OrigDataType: (memptr T_11 (struct (0 T_143 t0000)))
T_143: (in Mem101[ds:0x0205:word32] : word32)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word32
T_144: (in 0xFF : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in DPB(cx_49, 0xFF, 0, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_146: (in bx_124 : (memptr (ptr Eq_9) Eq_146))
  Class: Eq_146
  DataType: (memptr (ptr Eq_9) Eq_146)
  OrigDataType: (memptr T_11 (struct (FFFFEF81 T_152 tFFFFEF81)))
T_147: (in 0x0141 : word16)
  Class: Eq_147
  DataType: int16
  OrigDataType: int16
T_148: (in dx_105 *s 0x0141 : int16)
  Class: Eq_148
  DataType: int16
  OrigDataType: int16
T_149: (in dx_105 *s 0x0141 + cx : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_9) Eq_146)
  OrigDataType: word16
T_150: (in 0xEF81 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in bx_124 + 0xEF81 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in Mem115[ds:bx_124 + 0xEF81:byte] : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in 0xE100 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in bx_124 + 0xE100 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in di_116 : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_156: (in 0x0142 : word16)
  Class: Eq_156
  DataType: int16
  OrigDataType: int16
T_157: (in di_116 *s 0x0142 : int16)
  Class: Eq_157
  DataType: int16
  OrigDataType: int16
T_158: (in &bx_124->bFFFFEF81 + di_116 *s 0x0142 : word16)
  Class: Eq_158
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_23 (struct (0 T_162 t0000)))
T_159: (in 0x010F : word16)
  Class: Eq_159
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_160 t0000)))
T_160: (in Mem115[ds:0x010F:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in bx_124 + 0xE100 + di_116 *s 0x0142 + Mem115[ds:0x010F:word16] : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in Mem130[0xA000:bx_124 + 0xE100 + di_116 *s 0x0142 + Mem115[ds:0x010F:word16]:byte] : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_163: (in 0x0205 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_9) Eq_141)
  OrigDataType: (memptr T_11 (struct (0 T_141 t0000)))
T_164: (in Mem130[ds:0x0205:word16] : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_165: (in 0x0001 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in Mem130[ds:0x0205:word16] + 0x0001 : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_167: (in Mem132[ds:0x0205:word16] : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_168: (in 0x0001 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in dx_105 - 0x0001 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_170: (in 0x0000 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_171: (in dx_105 != 0x0000 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in cx - 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_174: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_175: (in cx != 0x0000 : bool)
  Class: Eq_175
  DataType: bool
  OrigDataType: bool
T_176: (in sin : ptr32)
  Class: Eq_176
  DataType: (ptr Eq_176)
  OrigDataType: (ptr (fn T_179 (T_178)))
T_177: (in 0x0205 : word16)
  Class: Eq_177
  DataType: (memptr (ptr Eq_9) Eq_141)
  OrigDataType: (memptr T_11 (struct (0 T_178 t0000)))
T_178: (in Mem101[ds:0x0205:real32] : real32)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: real32
T_179: (in sin(ds->t0205) : real64)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: (union (real16 u0) (real64 u1))
T_180: (in 0x01EB : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_181 t0000)))
T_181: (in Mem101[ds:0x01EB:word16] : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in (real64) ds->w01EB : real64)
  Class: Eq_182
  DataType: Eq_182
  OrigDataType: (union (real16 u0) (real64 u1))
T_183: (in sin(ds->t0205) * (real64) ds->w01EB : word16)
  Class: Eq_183
  DataType: real16
  OrigDataType: real16
T_184: (in (int16) (sin(ds->t0205) * (real64) ds->w01EB) : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_185: (in 0x0203 : word16)
  Class: Eq_185
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_11 (struct (0 T_186 t0000)))
T_186: (in Mem115[ds:0x0203:int16] : int16)
  Class: Eq_155
  DataType: int16
  OrigDataType: int16
T_187: (in 0x0203 : word16)
  Class: Eq_187
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_11 (struct (0 T_188 t0000)))
T_188: (in Mem115[ds:0x0203:word16] : word16)
  Class: Eq_155
  DataType: int16
  OrigDataType: word16
T_189: (in 0x0B : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in DPB(dx_105, 0x0B, 0, 8) : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_191: (in 0x01ED : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_9) Eq_141)
  OrigDataType: (memptr T_11 (struct (0 T_141 t0000)))
T_192: (in Mem132[ds:0x01ED:word16] : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_193: (in 0x0003 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem132[ds:0x01ED:word16] + 0x0003 : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_195: (in Mem141[ds:0x01ED:word16] : word16)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: word16
T_196: (in 0x01ED : word16)
  Class: Eq_196
  DataType: (memptr (ptr Eq_9) Eq_141)
  OrigDataType: (memptr T_11 (struct (0 T_197 t0000)))
T_197: (in Mem141[ds:0x01ED:byte] : byte)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: byte
T_198: (in 0x07 : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in ds->t01ED & 0x07 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in 0x00 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_201: (in (ds->t01ED & 0x07) != 0x00 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in ax_147 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in __inw : ptr32)
  Class: Eq_203
  DataType: (ptr Eq_203)
  OrigDataType: (ptr (fn T_205 (T_204)))
T_204: (in 0x60 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in __inw(0x60) : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_206: (in 0x0001 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in ax_147 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_208: (in 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_209: (in ax_147 != 0x0001 : bool)
  Class: Eq_209
  DataType: bool
  OrigDataType: bool
T_210: (in 0x010F : word16)
  Class: Eq_210
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_160 t0000)))
T_211: (in Mem141[ds:0x010F:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_212: (in 0x0001 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in ds->w010F - 0x0001 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_214: (in Mem154[ds:0x010F:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_215:
  Class: Eq_215
  DataType: byte
  OrigDataType: (struct 0001 (0 T_26 t0000))
T_216:
  Class: Eq_215
  DataType: byte
  OrigDataType: (struct 0001 (0 T_29 t0000))
T_217:
  Class: Eq_217
  DataType: byte
  OrigDataType: (struct 0001 (0 T_124 t0000))
T_218:
  Class: Eq_218
  DataType: byte
  OrigDataType: (struct 0001 (0 T_132 t0000))
T_219:
  Class: Eq_218
  DataType: byte
  OrigDataType: (struct 0001 (0 T_136 t0000))
*/
typedef Eq_9 Eq_1struct Globals {
	Eq_9 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_117;
 Eq_9[2561][14335]Eq_73Eq_84Eq_141Eq_141[14335]Eq_117struct Eq_9 {
	struct Eq_117 tFFFFC800;	// FFFFC800
	byte aFFFFF209[2561];	// FFFFF209
	byte bFFFFFC09;	// FFFFFC09
	byte a0000[14335];	// 0
	word16 w010F;	// 10F
	word16 w01DF;	// 1DF
	word16 w01E1;	// 1E1
	Eq_73 t01E3;	// 1E3
	Eq_84 t01E7;	// 1E7
	word16 w01EB;	// 1EB
	Eq_141 t01ED;	// 1ED
	int16 w01FF;	// 1FF
	int16 w0201;	// 201
	int16 w0203;	// 203
	Eq_141 t0205;	// 205
	byte a0209[14335];	// 209
	byte b0DF7;	// DF7
	Eq_117 tC800;	// C800
	byte bFC09;	// FC09
} Eq_9;

typedef struct Eq_39 {
	byte b7B29;	// 7B29
	byte b7C69;	// 7C69
	byte b7C6A;	// 7C6A
} Eq_39;

typedef Eq_74 (Eq_71)(Eq_73);

typedef union Eq_73 {
	real32 u0;
	word16 u1;
} Eq_73;

typedef union Eq_74 {
	real16 u0;
	real64 u1;
} Eq_74;

typedef union Eq_77 {
	real16 u0;
	real64 u1;
} Eq_77;

typedef Eq_85 (Eq_82)(Eq_84);

typedef union Eq_84 {
	real32 u0;
	word16 u1;
} Eq_84;

typedef union Eq_85 {
	real16 u0;
	real64 u1;
} Eq_85;

typedef union Eq_88 {
	real16 u0;
	real64 u1;
} Eq_88;

typedef struct Eq_117 Eq_117;

typedef union Eq_141 {
	byte u0;
	real32 u1;
	word16 u2;
} Eq_141;

typedef struct Eq_146 {
	byte bFFFFEF81;	// FFFFEF81
} Eq_146;

typedef Eq_179 (Eq_176)(Eq_141);

typedef union Eq_179 {
	real16 u0;
	real64 u1;
} Eq_179;

typedef union Eq_182 {
	real16 u0;
	real64 u1;
} Eq_182;

typedef word16 (Eq_203)(byte);

