// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_180/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_96) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_147 (in bios_video_set_mode : ptr32)
Eq_11: (struct "Eq_11" (0 Eq_24 t0000) (100 word16 w0100) (2100 word16 w2100))
	T_11 (in dx_8 : (ptr Eq_11))
	T_12 (in dx : (ptr Eq_11))
	T_14 (in DPB(dx, 0x80, 8, 8) : word16)
Eq_15: (fn Eq_17 (Eq_16))
	T_15 (in sin : ptr32)
Eq_16: (union "Eq_16" (real16 u0) (real64 u1))
	T_16 (in rLoc2 : real64)
	T_22 (in sin(rLoc2) * (real64) ds->w0146 : word16)
Eq_17: (union "Eq_17" (real16 u0) (real64 u1))
	T_17 (in sin(rLoc2) : real64)
Eq_18: (segment "Eq_18" (146 word16 w0146) (147 byte b0147) (164 byte b0164))
	T_18 (in ds : (ptr Eq_18))
Eq_21: (union "Eq_21" (real16 u0) (real64 u1))
	T_21 (in (real64) ds->w0146 : real64)
Eq_23: (union "Eq_23" (int16 u0) (byte u1) ((memptr (ptr Eq_18) word16) u2))
	T_23 (in (int16) rLoc2 : int16)
	T_27 (in Mem25[dx_8:bx + 0x0000:int16] : int16)
	T_28 (in si : Eq_23)
	T_31 (in Mem28[dx:bx + 0x0000:word16] : word16)
	T_52 (in dl : byte)
	T_55 (in Mem286[dx:bx + ax_58:byte] : byte)
	T_69 (in si + 0x0002 : word16)
Eq_24: (struct "Eq_24" 0001 (0 Eq_23 t0000))
	T_24 (in bx : (memptr (ptr Eq_11) Eq_24))
	T_36 (in bx_29 + 0x0001 : word16)
	T_47 (in bx + 0x0001 : word16)
	T_50 (in 0x0000 : word16)
Eq_84: (union "Eq_84" (ui16 u0) ((memptr (ptr Eq_11) bcu8) u1))
	T_84 (in bx_211 : Eq_84)
	T_86 (in bx_211 * 0x0002 : word16)
	T_117 (in DPB(bx_189, SLICE(dx_191, byte, 8), 0, 8) : word16)
Eq_96: (segment "Eq_96" (0 byte b0000))
	T_96 (in 0xA000 : selector)
Eq_140: (fn byte ((ptr byte)))
	T_140 (in bios_kbd_check_keystroke : ptr32)
	T_141 (in signature of bios_kbd_check_keystroke : void)
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
T_7: (in ax_4 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in dx_8 : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (struct (100 T_74 t0100) (2100 T_77 t2100)))
T_12: (in dx : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: word16
T_13: (in 0x80 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(dx, 0x80, 8, 8) : word16)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: word16
T_15: (in sin : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16)))
T_16: (in rLoc2 : real64)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: (union (real16 u0) (real64 u1))
T_17: (in sin(rLoc2) : real64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (real16 u0) (real64 u1))
T_18: (in ds : (ptr Eq_18))
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment (146 T_20 t0146) (147 T_129 t0147) (164 T_133 t0164)))
T_19: (in 0x0146 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_18) word16)
  OrigDataType: (memptr T_18 (struct (0 T_20 t0000)))
T_20: (in Mem0[ds:0x0146:word16] : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in (real64) ds->w0146 : real64)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in sin(rLoc2) * (real64) ds->w0146 : word16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: real16
T_23: (in (int16) rLoc2 : int16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: int16
T_24: (in bx : (memptr (ptr Eq_11) Eq_24))
  Class: Eq_24
  DataType: (memptr (ptr Eq_11) Eq_24)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_23 t0000)))
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bx + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem25[dx_8:bx + 0x0000:int16] : int16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: int16
T_28: (in si : Eq_23)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: (memptr T_18 (struct 0002 (0 word16 w0000)))
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem28[dx:bx + 0x0000:word16] : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_32: (in bx_29 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in bx + 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bx_29 + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_11) Eq_24)
  OrigDataType: word16
T_37: (in bl_31 : int8)
  Class: Eq_37
  DataType: int8
  OrigDataType: int8
T_38: (in bx_29 + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in (byte) (bx_29 + 0x0001) : byte)
  Class: Eq_37
  DataType: int8
  OrigDataType: byte
T_40: (in bh_32 : int8)
  Class: Eq_40
  DataType: int8
  OrigDataType: int8
T_41: (in bx_29 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in SLICE(bx_29 + 0x0001, byte, 8) : byte)
  Class: Eq_40
  DataType: int8
  OrigDataType: byte
T_43: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_44: (in bx_29 != 0x0001 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in cx_117 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in bx + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_11) Eq_24)
  OrigDataType: word16
T_48: (in (byte) bx : byte)
  Class: Eq_37
  DataType: int8
  OrigDataType: byte
T_49: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_40
  DataType: int8
  OrigDataType: byte
T_50: (in 0x0000 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_11) Eq_24)
  OrigDataType: word16
T_51: (in bx != &Eq_11::t0000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in dl : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_53: (in ax_58 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bx + ax_58 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem286[dx:bx + ax_58:byte] : byte)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: byte
T_56: (in bh_32 *s bh_32 : int16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_57: (in bl_31 *s bl_31 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_58: (in bh_32 *s bh_32 + bl_31 *s bl_31 : word16)
  Class: Eq_58
  DataType: cups16
  OrigDataType: cups16
T_59: (in 0x0383 : word16)
  Class: Eq_58
  DataType: cups16
  OrigDataType: cups16
T_60: (in bh_32 *s bh_32 + bl_31 *s bl_31 >u 0x0383 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in cx_117 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_64: (in cx_117 != 0x0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si + 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem28[ds:si + 0x0000:word16] : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0002 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in si + 0x0002 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_70: (in bx_122 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0100 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_72: (in si_125 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0100 : word16)
  Class: Eq_73
  DataType: (memptr (ptr Eq_11) word16)
  OrigDataType: (memptr T_11 (struct (0 T_74 t0000)))
T_74: (in Mem28[dx_8:0x0100:word16] : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_75: (in bp_126 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in 0x2100 : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_11) word16)
  OrigDataType: (memptr T_11 (struct (0 T_77 t0000)))
T_77: (in Mem28[dx_8:0x2100:word16] : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_78: (in dx_127 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_80: (in di_130 : (memptr (ptr Eq_96) byte))
  Class: Eq_80
  DataType: (memptr (ptr Eq_96) byte)
  OrigDataType: word16
T_81: (in 0x0000 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_96) byte)
  OrigDataType: word16
T_82: (in 0xC8 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in DPB(cx_117, 0xC8, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_84: (in bx_211 : Eq_84)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: (union (ui16 u0) ((memptr T_12 (struct (0 T_92 t0000))) u1))
T_85: (in 0x0002 : word16)
  Class: Eq_85
  DataType: ui16
  OrigDataType: ui16
T_86: (in bx_211 * 0x0002 : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: ui16
T_87: (in al_213 : bcu8)
  Class: Eq_87
  DataType: bcu8
  OrigDataType: bcu8
T_88: (in 0x03 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in al_213 - 0x03 : byte)
  Class: Eq_87
  DataType: bcu8
  OrigDataType: byte
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in bx_211 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem28[dx:bx_211 + 0x0000:byte] : byte)
  Class: Eq_87
  DataType: bcu8
  OrigDataType: bcu8
T_93: (in Mem28[dx:bx_211 + 0x0000:byte] <u al_213 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x10 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in al_213 + 0x10 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in 0xA000 : selector)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (segment))
T_97: (in di_182 : (memptr (ptr Eq_96) byte))
  Class: Eq_80
  DataType: (memptr (ptr Eq_96) byte)
  OrigDataType: (memptr T_96 (struct 0001 (0 T_100 t0000)))
T_98: (in 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_182 + 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem227[0xA000:di_182 + 0x0000:byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_101: (in bx_189 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_102: (in bx_183 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_103: (in dx_191 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_104: (in dx_184 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in di_182 + 0x0001 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_96) byte)
  OrigDataType: word16
T_107: (in cx_176 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in cx_176 - 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_110: (in 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_111: (in cx_176 != 0x0000 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in si_180 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_113: (in bp_181 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_114: (in dx_184 + si_180 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_115: (in bx_183 + bp_181 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_116: (in SLICE(dx_191, byte, 8) : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in DPB(bx_189, SLICE(dx_191, byte, 8), 0, 8) : word16)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: word16
T_118: (in 0x12 : byte)
  Class: Eq_87
  DataType: bcu8
  OrigDataType: byte
T_119: (in 0x0140 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in di_130 + 0x0140 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_96) byte)
  OrigDataType: word16
T_121: (in bx_122 - si_125 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_122: (in dx_127 + bp_126 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in cx_117 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_126: (in cx_117 != 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x0140 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_128: (in 0x0147 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: (memptr T_18 (struct (0 T_129 t0000)))
T_129: (in Mem227[ds:0x0147:byte] : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in 0x01 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in ds->b0147 + 0x01 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_132: (in Mem277[ds:0x0147:byte] : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_133: (in v33_278 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in 0x0164 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: (memptr T_18 (struct (0 T_133 t0000)))
T_135: (in Mem277[ds:0x0164:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_136: (in 0x04 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in ds->b0164 + 0x04 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_138: (in Mem279[ds:0x0164:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_139: (in al_282 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_140
  DataType: (ptr Eq_140)
  OrigDataType: (ptr (fn T_144 (T_143)))
T_141: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_140
  DataType: (ptr Eq_140)
  OrigDataType: 
T_142: (in alOut : ptr16)
  Class: Eq_142
  DataType: (ptr byte)
  OrigDataType: ptr16
T_143: (in out al_282 : ptr16)
  Class: Eq_142
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_144: (in bios_kbd_check_keystroke(out al_282) : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x00 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_146: (in v33_278 == 0x00 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_149 (T_148)))
T_148: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_149: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef Eq_96 Eq_1struct Globals {
	Eq_96 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_24 Eq_11struct Eq_11 {
	Eq_24 t0000;	// 0
	word16 w0100;	// 100
	word16 w2100;	// 2100
} Eq_11;

typedef Eq_17 (Eq_15)(Eq_16);

typedef union Eq_16 {
	real16 u0;
	real64 u1;
} Eq_16;

typedef union Eq_17 {
	real16 u0;
	real64 u1;
} Eq_17;

typedef struct Eq_18 {
	word16 w0146;	// 146
	byte b0147;	// 147
	byte b0164;	// 164
} Eq_18;

typedef union Eq_21 {
	real16 u0;
	real64 u1;
} Eq_21;

typedef union Eq_23 {
	int16 u0;
	byte u1;
	word16 Eq_18::* u2;
} Eq_23;

typedef Eq_23 Eq_24struct Eq_24 {	// size: 1 1
	Eq_23 t0000;	// 0
} Eq_24;

typedef union Eq_84 {
	ui16 u0;
	bcu8 Eq_11::* u1;
} Eq_84;

typedef struct Eq_96 {
	byte b0000;	// 0
} Eq_96;

typedef byte (Eq_140)(byte *);

