// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_301/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF90000 (ptr Eq_25) ptrFFF90000) (FFFA0000 (ptr Eq_184) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (1ED Eq_9 t01ED) (1F1 Eq_9 t01F1) (1F5 Eq_18 t01F5) (1F9 Eq_16 t01F9) (1FD Eq_123 t01FD) (201 Eq_132 t0201) (205 int16 w0205) (207 int16 w0207) (209 int16 w0209) (20B int16 w020B))
	T_7 (in ds : (ptr Eq_7))
Eq_9: (union "Eq_9" (real16 u0) (real32 u1))
	T_9 (in Mem0[ds:0x01F1:real32] : real32)
	T_11 (in Mem38[ds:0x01ED:real32] : real32)
	T_100 (in Mem103[ds:0x01ED:real32] : real32)
	T_102 (in Mem103[ds:0x01F1:real32] : real32)
	T_103 (in ds->t01ED + ds->t01F1 : word16)
	T_105 (in Mem112[ds:0x01ED:real32] : real32)
	T_120 (in Mem114[ds:0x01ED:real32] : real32)
	T_129 (in Mem121[ds:0x01ED:real32] : real32)
Eq_16: (union "Eq_16" (real16 u0) (real32 u1) (real64 u2))
	T_16 (in Mem39[ds:0x01F9:real32] : real32)
	T_19 (in ds->t01F9 + ds->t01F5 : word16)
	T_21 (in Mem42[ds:0x01F9:real32] : real32)
	T_111 (in rLoc1_115 : Eq_16)
	T_113 (in Mem114[ds:0x01F9:real32] : real32)
Eq_18: (union "Eq_18" (real16 u0) (real32 u1))
	T_18 (in Mem39[ds:0x01F5:real32] : real32)
Eq_25: (segment "Eq_25" (0 (arr Eq_198) a0000))
	T_25 (in 0x9000 : selector)
Eq_114: (union "Eq_114" (real16 u0) (real64 u1))
	T_114 (in rLoc1_117 : Eq_114)
	T_116 (in cos(rLoc1_115) : real64)
Eq_115: (fn Eq_114 (Eq_16))
	T_115 (in cos : ptr32)
Eq_117: (fn Eq_118 (Eq_16))
	T_117 (in sin : ptr32)
Eq_118: (union "Eq_118" (real16 u0) (real64 u1))
	T_118 (in sin(rLoc1_115) : real64)
Eq_123: (union "Eq_123" (real16 u0) (real32 u1))
	T_123 (in Mem114[ds:0x01FD:real32] : real32)
Eq_132: (union "Eq_132" (real16 u0) (real32 u1))
	T_132 (in Mem121[ds:0x0201:real32] : real32)
Eq_157: (segment "Eq_157")
	T_157 (in ss : selector)
Eq_158: (union "Eq_158" ((memptr (ptr Eq_157) Eq_204) u0) (Eq_206 u1))
	T_158 (in fp : ptr16)
Eq_173: (fn byte ((ptr byte)))
	T_173 (in bios_kbd_check_keystroke : ptr32)
	T_174 (in signature of bios_kbd_check_keystroke : void)
Eq_184: (segment "Eq_184" (0 (arr word16) a0000))
	T_184 (in 0xA000 : selector)
Eq_198: (union "Eq_198" (word16 u0) (Eq_207 u1))
	T_198
	T_199
	T_200
	T_201
	T_202
Eq_204: (struct "Eq_204" (FFFFFFFC word16 wFFFFFFFC))
	T_204
Eq_205: (struct "Eq_205" (FFFFFFFA word16 wFFFFFFFA))
	T_205
Eq_206: (union "Eq_206" (ptr16 u0) ((memptr (ptr Eq_157) Eq_205) u1))
	T_206
Eq_207: (struct "Eq_207" 0140 (0 byte b0000))
	T_207
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
T_7: (in ds : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment (1ED T_9 t01ED) (1F1 T_9 t01F1) (1F5 T_18 t01F5) (1F9 T_16 t01F9) (1FD T_123 t01FD) (201 T_132 t0201) (205 T_12 t0205) (207 T_39 t0207) (209 T_125 t0209) (20B T_41 t020B)))
T_8: (in 0x01F1 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_9 t0000)))
T_9: (in Mem0[ds:0x01F1:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: real32
T_10: (in 0x01ED : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_11 t0000)))
T_11: (in Mem38[ds:0x01ED:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: real32
T_12: (in 0x000A : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_13: (in 0x0205 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_14 t0000)))
T_14: (in Mem39[ds:0x0205:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_15: (in 0x01F9 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) Eq_16)
  OrigDataType: (memptr T_7 (struct (0 T_16 t0000)))
T_16: (in Mem39[ds:0x01F9:real32] : real32)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: (union (real16 u0) (real32 u1))
T_17: (in 0x01F5 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_7) Eq_18)
  OrigDataType: (memptr T_7 (struct (0 T_18 t0000)))
T_18: (in Mem39[ds:0x01F5:real32] : real32)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: (union (real16 u0) (real32 u1))
T_19: (in ds->t01F9 + ds->t01F5 : word16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: real16
T_20: (in 0x01F9 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_7) Eq_16)
  OrigDataType: (memptr T_7 (struct (0 T_21 t0000)))
T_21: (in Mem42[ds:0x01F9:real32] : real32)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: real32
T_22: (in cx_125 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0006 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x9000 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment (0 (arr T_198) a0000)))
T_26: (in di_24 : (memptr (ptr Eq_25) word16))
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: (memptr T_25 (struct 0002 (0 T_29 t0000)))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_24 + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem32[0x9000:di_24 + 0x0000:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0002 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_24 + 0x0002 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: word16
T_32: (in cx_27 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx_27 - 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_36: (in cx_27 == 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in bx_67 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0207 : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_39 t0000)))
T_39: (in Mem53[ds:0x0207:word16] : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: word16
T_40: (in 0x020B : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_41 t0000)))
T_41: (in Mem53[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_42: (in ds->w0207 - ds->w020B : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_43: (in cl_61 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in SEQ(0x9000, bx_67) : ptr32)
  Class: Eq_44
  DataType: ptr32
  OrigDataType: ptr32
T_45: (in ax_56 : ui16)
  Class: Eq_45
  DataType: ui16
  OrigDataType: ui16
T_46: (in 0x0140 : word16)
  Class: Eq_46
  DataType: ui16
  OrigDataType: ui16
T_47: (in ax_56 * 0x0140 : word16)
  Class: Eq_47
  DataType: ui16
  OrigDataType: ui16
T_48: (in SEQ(0x9000, bx_67)[ax_56 * 0x0140] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_49: (in 0x020B : word16)
  Class: Eq_49
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_50 t0000)))
T_50: (in Mem71[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_51: (in bx_67 + ds->w020B : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x020B : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_53 t0000)))
T_53: (in Mem71[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_54: (in bx_67 + ds->w020B + ds->w020B : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in SEQ(0x9000, bx_67 + Mem71[ds:0x020B:word16] + Mem71[ds:0x020B:word16]) : ptr32)
  Class: Eq_55
  DataType: ptr32
  OrigDataType: ptr32
T_56: (in 0x0140 : word16)
  Class: Eq_56
  DataType: ui16
  OrigDataType: ui16
T_57: (in ax_56 * 0x0140 : word16)
  Class: Eq_57
  DataType: ui16
  OrigDataType: ui16
T_58: (in SEQ(0x9000, bx_67 + Mem71[ds:0x020B:word16] + Mem71[ds:0x020B:word16])[ax_56 * 0x0140] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_59: (in 0x020B : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_60 t0000)))
T_60: (in Mem78[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in ds->w020B + 0x0001 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_63: (in 0x020B : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_64 t0000)))
T_64: (in Mem81[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_65: (in cx_60 : int16)
  Class: Eq_65
  DataType: int16
  OrigDataType: word16
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in cx_60 - 0x0001 : word16)
  Class: Eq_65
  DataType: int16
  OrigDataType: word16
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in ax_56 + 0x0001 : word16)
  Class: Eq_45
  DataType: ui16
  OrigDataType: word16
T_70: (in (byte) cx_60 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_65
  DataType: int16
  OrigDataType: word16
T_72: (in cx_60 != 0x0000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in cx_106 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x020B : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_75 t0000)))
T_75: (in Mem81[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_76: (in 0x0002 : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_77: (in ds->w020B *s 0x0002 : int16)
  Class: Eq_77
  DataType: int16
  OrigDataType: int16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in ds->w020B *s 0x0002 + 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_80: (in bx_104 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0207 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_82 t0000)))
T_82: (in Mem81[ds:0x0207:word16] : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: word16
T_83: (in 0x020B : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_84 t0000)))
T_84: (in Mem81[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_85: (in ds->w0207 + ds->w020B : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_86: (in cl_107 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_87: (in (byte) cx_106 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_88: (in SEQ(0x9000, bx_104) : ptr32)
  Class: Eq_88
  DataType: ptr32
  OrigDataType: ptr32
T_89: (in 0x0140 : word16)
  Class: Eq_89
  DataType: ui16
  OrigDataType: ui16
T_90: (in ax_56 * 0x0140 : word16)
  Class: Eq_90
  DataType: ui16
  OrigDataType: ui16
T_91: (in SEQ(0x9000, bx_104)[ax_56 * 0x0140] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in cx_106 - 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in bx_104 - 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_96: (in (byte) cx_106 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_97: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_98: (in cx_106 != 0x0000 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x01ED : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_100 t0000)))
T_100: (in Mem103[ds:0x01ED:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (real16 u0) (real32 u1))
T_101: (in 0x01F1 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_102 t0000)))
T_102: (in Mem103[ds:0x01F1:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (real16 u0) (real32 u1))
T_103: (in ds->t01ED + ds->t01F1 : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: real16
T_104: (in 0x01ED : word16)
  Class: Eq_104
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_105 t0000)))
T_105: (in Mem112[ds:0x01ED:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: real32
T_106: (in 0x0205 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_12 t0000)))
T_107: (in Mem112[ds:0x0205:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_108: (in 0x0004 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in ds->w0205 + 0x0004 : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_110: (in Mem114[ds:0x0205:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_111: (in rLoc1_115 : Eq_16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: real64
T_112: (in 0x01F9 : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_7) Eq_16)
  OrigDataType: (memptr T_7 (struct (0 T_113 t0000)))
T_113: (in Mem114[ds:0x01F9:real32] : real32)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: real32
T_114: (in rLoc1_117 : Eq_114)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: (union (real16 u0) (real64 u1))
T_115: (in cos : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_116 (T_111)))
T_116: (in cos(rLoc1_115) : real64)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: real64
T_117: (in sin : ptr32)
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (fn T_118 (T_111)))
T_118: (in sin(rLoc1_115) : real64)
  Class: Eq_118
  DataType: Eq_118
  OrigDataType: (union (real16 u0) (real64 u1))
T_119: (in 0x01ED : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_120 t0000)))
T_120: (in Mem114[ds:0x01ED:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (real16 u0) (real32 u1))
T_121: (in sin(rLoc1_115) * ds->t01ED : word16)
  Class: Eq_121
  DataType: real16
  OrigDataType: real16
T_122: (in 0x01FD : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_7) Eq_123)
  OrigDataType: (memptr T_7 (struct (0 T_123 t0000)))
T_123: (in Mem114[ds:0x01FD:real32] : real32)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: (union (real16 u0) (real32 u1))
T_124: (in sin(rLoc1_115) * ds->t01ED + ds->t01FD : word16)
  Class: Eq_124
  DataType: real16
  OrigDataType: real16
T_125: (in (int16) (sin(rLoc1_115) * ds->t01ED + ds->t01FD) : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_126: (in 0x0209 : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_127 t0000)))
T_127: (in Mem121[ds:0x0209:int16] : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_128: (in 0x01ED : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_7) Eq_9)
  OrigDataType: (memptr T_7 (struct (0 T_129 t0000)))
T_129: (in Mem121[ds:0x01ED:real32] : real32)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (real16 u0) (real32 u1))
T_130: (in rLoc1_117 * ds->t01ED : word16)
  Class: Eq_130
  DataType: real16
  OrigDataType: real16
T_131: (in 0x0201 : word16)
  Class: Eq_131
  DataType: (memptr (ptr Eq_7) Eq_132)
  OrigDataType: (memptr T_7 (struct (0 T_132 t0000)))
T_132: (in Mem121[ds:0x0201:real32] : real32)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: (union (real16 u0) (real32 u1))
T_133: (in rLoc1_117 * ds->t01ED + ds->t0201 : word16)
  Class: Eq_133
  DataType: real16
  OrigDataType: real16
T_134: (in (int16) (rLoc1_117 * ds->t01ED + ds->t0201) : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_135: (in 0x0207 : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_136 t0000)))
T_136: (in Mem124[ds:0x0207:int16] : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_137: (in 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in cx_125 - 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_140: (in cx_125 != 0x0000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in 0x0000 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_142: (in 0x020B : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_143 t0000)))
T_143: (in Mem53[ds:0x020B:word16] : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: word16
T_144: (in cx_59 : int16)
  Class: Eq_12
  DataType: int16
  OrigDataType: int16
T_145: (in 0x0205 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_146 t0000)))
T_146: (in Mem53[ds:0x0205:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_147: (in 0x0209 : word16)
  Class: Eq_147
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_148 t0000)))
T_148: (in Mem53[ds:0x0209:word16] : word16)
  Class: Eq_125
  DataType: int16
  OrigDataType: word16
T_149: (in 0x0205 : word16)
  Class: Eq_149
  DataType: (memptr (ptr Eq_7) int16)
  OrigDataType: (memptr T_7 (struct (0 T_150 t0000)))
T_150: (in Mem53[ds:0x0205:word16] : word16)
  Class: Eq_12
  DataType: int16
  OrigDataType: word16
T_151: (in ds->w0209 - ds->w0205 : word16)
  Class: Eq_45
  DataType: ui16
  OrigDataType: word16
T_152: (in 0x0002 : word16)
  Class: Eq_152
  DataType: int16
  OrigDataType: int16
T_153: (in cx_59 *s 0x0002 : int16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_154: (in cx_59 *s 0x0002 : int16)
  Class: Eq_154
  DataType: int16
  OrigDataType: int16
T_155: (in (byte) (cx_59 *s 0x0002) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_156: (in 0xA000 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in ss : selector)
  Class: Eq_157
  DataType: (ptr Eq_157)
  OrigDataType: (ptr (segment))
T_158: (in fp : ptr16)
  Class: Eq_158
  DataType: Eq_158
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_157 (struct (FFFFFFFA T_165 tFFFFFFFA))) u1)) u0) ((memptr T_157 (struct (FFFFFFFC T_161 tFFFFFFFC))) u1))
T_159: (in 0x0004 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in fp - 0x0004 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in Mem132[ss:fp - 0x0004:word16] : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_162: (in 0x9000 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in 0x0006 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in fp - 0x0006 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in Mem135[ss:fp - 0x0006:word16] : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_166: (in di_140 : (memptr (ptr Eq_184) word16))
  Class: Eq_166
  DataType: (memptr (ptr Eq_184) word16)
  OrigDataType: (memptr T_184 (struct 0002 (0 T_187 t0000)))
T_167: (in 0x0000 : word16)
  Class: Eq_166
  DataType: (memptr (ptr Eq_184) word16)
  OrigDataType: word16
T_168: (in si_141 : (memptr (ptr Eq_25) word16))
  Class: Eq_168
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: (memptr T_25 (struct 0002 (0 T_183 t0000)))
T_169: (in 0x0000 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: word16
T_170: (in cx_146 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in 0x7D00 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_172: (in al_160 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (fn T_177 (T_176)))
T_174: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: 
T_175: (in alOut : ptr16)
  Class: Eq_175
  DataType: (ptr byte)
  OrigDataType: ptr16
T_176: (in out al_160 : ptr16)
  Class: Eq_175
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_177: (in bios_kbd_check_keystroke(out al_160) : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_180: (in 0x0000 == 0x0000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in si_141 + 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in Mem135[0x9000:si_141 + 0x0000:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_184: (in 0xA000 : selector)
  Class: Eq_184
  DataType: (ptr Eq_184)
  OrigDataType: (ptr (segment (0 (arr T_203) a0000)))
T_185: (in 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in di_140 + 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in Mem153[0xA000:di_140 + 0x0000:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0002 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in si_141 + 0x0002 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: word16
T_190: (in 0x0002 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in di_140 + 0x0002 : word16)
  Class: Eq_166
  DataType: (memptr (ptr Eq_184) word16)
  OrigDataType: word16
T_192: (in 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in cx_146 - 0x0001 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_194: (in 0x0000 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_195: (in cx_146 == 0x0000 : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in 0x0000 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: word16
T_197: (in 0x7D00 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_198:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (struct 0002 (0 T_29 t0000))
T_199:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (struct 0140 (0 T_48 t0000))
T_200:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (struct 0140 (0 T_58 t0000))
T_201:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (struct 0140 (0 T_91 t0000))
T_202:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (struct 0002 (0 T_183 t0000))
T_203:
  Class: Eq_203
  DataType: word16
  OrigDataType: (struct 0002 (0 T_187 t0000))
T_204:
  Class: Eq_204
  DataType: Eq_204
  OrigDataType: 
T_205:
  Class: Eq_205
  DataType: Eq_205
  OrigDataType: 
T_206:
  Class: Eq_206
  DataType: Eq_206
  OrigDataType: 
T_207:
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: 
*/
typedef Eq_25 Eq_1Eq_184 Eq_1struct Globals {
	Eq_25 * ptrFFF90000;	// FFF90000
	Eq_184 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_9 Eq_7Eq_9 Eq_7Eq_18 Eq_7Eq_16 Eq_7Eq_123 Eq_7Eq_132 Eq_7struct Eq_7 {
	Eq_9 t01ED;	// 1ED
	Eq_9 t01F1;	// 1F1
	Eq_18 t01F5;	// 1F5
	Eq_16 t01F9;	// 1F9
	Eq_123 t01FD;	// 1FD
	Eq_132 t0201;	// 201
	int16 w0205;	// 205
	int16 w0207;	// 207
	int16 w0209;	// 209
	int16 w020B;	// 20B
} Eq_7;

typedef union Eq_9 {
	real16 u0;
	real32 u1;
} Eq_9;

typedef union Eq_16 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_16;

typedef union Eq_18 {
	real16 u0;
	real32 u1;
} Eq_18;

typedef Eq_198 Eq_25[]struct Eq_25 {
	Eq_198 a0000[];	// 0
} Eq_25;

typedef union Eq_114 {
	real16 u0;
	real64 u1;
} Eq_114;

typedef Eq_114 (Eq_115)(Eq_16);

typedef Eq_118 (Eq_117)(Eq_16);

typedef union Eq_118 {
	real16 u0;
	real64 u1;
} Eq_118;

typedef union Eq_123 {
	real16 u0;
	real32 u1;
} Eq_123;

typedef union Eq_132 {
	real16 u0;
	real32 u1;
} Eq_132;

typedef struct Eq_157 {
} Eq_157;

typedef union Eq_158 {
	Eq_204 Eq_157::* u0;
	Eq_206 u1;
} Eq_158;

typedef byte (Eq_173)(byte *);

typedef  Eq_184[]struct Eq_184 {
	word16 a0000[];	// 0
} Eq_184;

typedef union Eq_198 {
	word16 u0;
	Eq_207 u1;
} Eq_198;

typedef struct Eq_204 {
	word16 wFFFFFFFC;	// FFFFFFFC
} Eq_204;

typedef struct Eq_205 {
	word16 wFFFFFFFA;	// FFFFFFFA
} Eq_205;

typedef union Eq_206 {
	ptr16 u0;
	Eq_205 Eq_157::* u1;
} Eq_206;

typedef struct Eq_207 {	// size: 320 140
	byte b0000;	// 0
} Eq_207;

