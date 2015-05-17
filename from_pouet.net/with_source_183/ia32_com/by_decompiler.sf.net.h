// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_183/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_88) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_147 (in bios_video_set_mode : ptr32)
Eq_7: (union ((ptr (struct (100 word16 w0100) (2100 word16 w2100))) u0) ((memptr Eq_7 (struct 0001 (0 Eq_20 t0000))) u1))
	T_7 (in bx_7 : word16)
	T_8 (in bx : word16)
	T_10 (in DPB(bx, 0x80, 8, 8) : word16)
	T_11 (in bx_17 : word16)
	T_32 (in bx_27 + 0x0001 : word16)
	T_46 (in bx_17 + 0x0001 : word16)
Eq_12: (fn Eq_14 (Eq_13))
	T_12 (in sin : ptr32)
Eq_13: (union (real16 u0) (real64 u1))
	T_13 (in rLoc2 : real64)
	T_19 (in sin(rLoc2) * (real64) Mem0[ds:0x014B:word16] : word16)
Eq_14: (union (real16 u0) (real64 u1))
	T_14 (in sin(rLoc2) : real64)
Eq_15: (segment (1 (arr Eq_150 10) a0001) (A Eq_43 t000A) (14B word16 w014B) (14C byte b014C) (16D byte b016D))
	T_15 (in ds : selector)
Eq_16: (struct (0 word16 w0000))
	T_16 (in 0x014B : word16)
Eq_18: (union (real16 u0) (real64 u1))
	T_18 (in (real64) Mem0[ds:0x014B:word16] : real64)
Eq_20: (union (int16 u0) (byte u1))
	T_20 (in (int16) rLoc2 : int16)
	T_23 (in Mem23[bx_7:bx_17 + 0x0000:int16] : int16)
	T_24 (in si : word16)
	T_27 (in Mem26[bx:bx_17 + 0x0000:word16] : word16)
	T_52 (in dl : byte)
	T_55 (in Mem236[bx:bx_17 + si_51:byte] : byte)
Eq_39: (fn bool (word16))
	T_39 (in OVERFLOW : ptr32)
Eq_43: (struct 0001 (0 word16 w0000))
	T_43 (in di_34 : word16)
	T_44 (in 0x000A : word16)
	T_65 (in di_71 - 0x0001 : word16)
Eq_49: (fn bool (Eq_7))
	T_49 (in OVERFLOW : ptr32)
Eq_74: (struct (0 word16 w0000))
	T_74 (in 0x0100 : word16)
Eq_77: (struct (0 word16 w0000))
	T_77 (in 0x2100 : word16)
Eq_81: (struct 0001 (0 byte b0000))
	T_81 (in di_110 : word16)
	T_82 (in 0x0000 : word16)
	T_89 (in di_152 : word16)
	T_94 (in di_152 + 0x0001 : word16)
	T_120 (in di_110 + 0x0140 : word16)
Eq_88: (segment)
	T_88 (in 0xA000 : selector)
Eq_102: (union (ui16 u0) ((memptr Eq_7 (struct (0 bcu8 b0000))) u1))
	T_102 (in bx_167 : word16)
	T_104 (in bx_167 * 0x0002 : word16)
	T_117 (in DPB(bx_158, SLICE(dx_154, byte, 8), 0, 8) : word16)
Eq_128: (struct (0 byte b0000))
	T_128 (in 0x014C : word16)
Eq_134: (struct (0 byte b0000))
	T_134 (in 0x016D : word16)
Eq_140: (fn byte ((ptr byte)))
	T_140 (in bios_kbd_check_keystroke : ptr32)
	T_141 (in signature of bios_kbd_check_keystroke : void)
Eq_150: (struct 0001 (0 word16 w0000))
	T_150
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
T_7: (in bx_7 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (ptr (struct (100 T_75 t0100) (2100 T_78 t2100)))
T_8: (in bx : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_9: (in 0x80 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0x80, 8, 8) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_11: (in bx_17 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (memptr T_7 (struct 0001 (0 Eq_20 t0000)))
T_12: (in sin : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_14 (T_13)))
T_13: (in rLoc2 : real64)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: (union (real16 u0) (real64 u1))
T_14: (in sin(rLoc2) : real64)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: (union (real16 u0) (real64 u1))
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (1 (arr T_150 10) a0001) (14B T_17 t014B) (14C T_129 t014C) (16D T_133 t016D)))
T_16: (in 0x014B : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_15) Eq_16)
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_17: (in Mem0[ds:0x014B:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in (real64) Mem0[ds:0x014B:word16] : real64)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: (union (real16 u0) (real64 u1))
T_19: (in sin(rLoc2) * (real64) Mem0[ds:0x014B:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: real16
T_20: (in (int16) rLoc2 : int16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: int16
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in bx_17 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem23[bx_7:bx_17 + 0x0000:int16] : int16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: int16
T_24: (in si : word16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bx_17 + 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem26[bx:bx_17 + 0x0000:word16] : word16)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: word16
T_28: (in bx_27 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_17 + 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in bx_27 + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_33: (in bh_29 : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: int8
T_34: (in bx_27 + 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in SLICE(bx_27 + 0x0001, byte, 8) : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: byte
T_36: (in bl_30 : byte)
  Class: Eq_36
  DataType: int8
  OrigDataType: int8
T_37: (in bx_27 + 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in (byte) (bx_27 + 0x0001) : byte)
  Class: Eq_36
  DataType: int8
  OrigDataType: byte
T_39: (in OVERFLOW : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_41 (T_40)))
T_40: (in bx_27 + 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in OVERFLOW(bx_27 + 0x0001) : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in !OVERFLOW(bx_27 + 0x0001) : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in di_34 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_15) Eq_43)
  OrigDataType: (memptr T_15 (struct 0001 (0 T_70 t0000)))
T_44: (in 0x000A : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_15) Eq_43)
  OrigDataType: word16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx_17 + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_47: (in SLICE(bx_17, byte, 8) : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: byte
T_48: (in (byte) bx_17 : byte)
  Class: Eq_36
  DataType: int8
  OrigDataType: byte
T_49: (in OVERFLOW : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_50 (T_11)))
T_50: (in OVERFLOW(bx_17) : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in !OVERFLOW(bx_17) : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in dl : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_53: (in si_51 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bx_17 + si_51 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem236[bx:bx_17 + si_51:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_56: (in bh_29 *s bh_29 : int16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_57: (in bl_30 *s bl_30 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_58: (in bh_29 *s bh_29 + bl_30 *s bl_30 : word16)
  Class: Eq_58
  DataType: cups16
  OrigDataType: cups16
T_59: (in 0x09C3 : word16)
  Class: Eq_58
  DataType: cups16
  OrigDataType: cups16
T_60: (in bh_29 *s bh_29 + bl_30 *s bl_30 >u 0x09C3 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in di_71 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di_34 - 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di_71 - 0x0001 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_15) Eq_43)
  OrigDataType: word16
T_66: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_67: (in di_71 != 0x0001 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in di_34 + 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem26[ds:di_34 + 0x0000:word16] : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_71: (in bx_102 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0100 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_73: (in si_105 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0100 : word16)
  Class: Eq_74
  DataType: (memptr Eq_7 Eq_74)
  OrigDataType: (memptr T_7 (struct (0 T_75 t0000)))
T_75: (in Mem26[bx_7:0x0100:word16] : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_76: (in bp_106 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x2100 : word16)
  Class: Eq_77
  DataType: (memptr Eq_7 Eq_77)
  OrigDataType: (memptr T_7 (struct (0 T_78 t0000)))
T_78: (in Mem26[bx_7:0x2100:word16] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_79: (in dx_107 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_81: (in di_110 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_88) Eq_81)
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_88) Eq_81)
  OrigDataType: word16
T_83: (in cx_113 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in 0x00C8 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_85: (in al_168 : byte)
  Class: Eq_85
  DataType: bcu8
  OrigDataType: bcu8
T_86: (in 0x10 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in al_168 + 0x10 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0xA000 : selector)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (segment))
T_89: (in di_152 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_88) Eq_81)
  OrigDataType: (memptr T_88 (struct 0001 (0 T_92 t0000)))
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in di_152 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem188[0xA000:di_152 + 0x0000:byte] : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di_152 + 0x0001 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_88) Eq_81)
  OrigDataType: word16
T_95: (in bx_158 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_96: (in bx_153 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_97: (in cx_149 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in cx_149 - 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_101: (in cx_149 != 0x0000 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in bx_167 : word16)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: (union (ui16 u0) ((memptr T_8 (struct (0 T_111 t0000))) u1))
T_103: (in 0x0002 : word16)
  Class: Eq_103
  DataType: ui16
  OrigDataType: ui16
T_104: (in bx_167 * 0x0002 : word16)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: ui16
T_105: (in 0x03 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in al_168 - 0x03 : byte)
  Class: Eq_85
  DataType: bcu8
  OrigDataType: byte
T_107: (in 0x00 : byte)
  Class: Eq_85
  DataType: bcu8
  OrigDataType: byte
T_108: (in al_168 != 0x00 : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in 0x0000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in bx_167 + 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem26[bx:bx_167 + 0x0000:byte] : byte)
  Class: Eq_85
  DataType: bcu8
  OrigDataType: bcu8
T_112: (in Mem26[bx:bx_167 + 0x0000:byte] >u al_168 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in dx_154 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_114: (in dx_154 + si_105 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_115: (in bx_153 + bp_106 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_116: (in SLICE(dx_154, byte, 8) : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in DPB(bx_158, SLICE(dx_154, byte, 8), 0, 8) : word16)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: word16
T_118: (in 0x0F : byte)
  Class: Eq_85
  DataType: bcu8
  OrigDataType: byte
T_119: (in 0x0140 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in di_110 + 0x0140 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_88) Eq_81)
  OrigDataType: word16
T_121: (in bx_102 - si_105 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_122: (in dx_107 + bp_106 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in cx_113 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_126: (in cx_113 != 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x0140 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_128: (in 0x014C : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_15) Eq_128)
  OrigDataType: (memptr T_15 (struct (0 T_129 t0000)))
T_129: (in Mem188[ds:0x014C:byte] : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in 0x01 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in Mem188[ds:0x014C:byte] + 0x01 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_132: (in Mem220[ds:0x014C:byte] : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_133: (in v31_221 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in 0x016D : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_15) Eq_134)
  OrigDataType: (memptr T_15 (struct (0 T_133 t0000)))
T_135: (in Mem220[ds:0x016D:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_136: (in 0x04 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in Mem220[ds:0x016D:byte] + 0x04 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_138: (in Mem222[ds:0x016D:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_139: (in al_225 : byte)
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
T_143: (in out al_225 : ptr16)
  Class: Eq_142
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_144: (in bios_kbd_check_keystroke(out al_225) : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in 0x00 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_146: (in v31_221 == 0x00 : bool)
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
T_150:
  Class: Eq_150
  DataType: Eq_150
  OrigDataType: (struct 0001 (0 T_70 t0000))
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union  {
	struct <anonymous>* u0;
	struct <anonymous> Eq_7::* u1;
} Eq_7;

typedef  (Eq_12)();

typedef union  {
	real16 u0;
	real64 u1;
} Eq_13;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_14;

typedef  Eq_15[10]struct  {
	 a0001[10];	// 1
	 t000A;	// A
	word16 w014B;	// 14B
	byte b014C;	// 14C
	byte b016D;	// 16D
} Eq_15;

typedef struct  {
	word16 w0000;	// 0
} Eq_16;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_18;

typedef union  {
	int16 u0;
	byte u1;
} Eq_20;

typedef bool (Eq_39)(word16);

typedef struct  {	// size: 1 1
	word16 w0000;	// 0
} Eq_43;

typedef bool (Eq_49)();

typedef struct  {
	word16 w0000;	// 0
} Eq_74;

typedef struct  {
	word16 w0000;	// 0
} Eq_77;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_81;

typedef struct  {
} Eq_88;

typedef union  {
	ui16 u0;
	struct <anonymous> Eq_7::* u1;
} Eq_102;

typedef struct  {
	byte b0000;	// 0
} Eq_128;

typedef struct  {
	byte b0000;	// 0
} Eq_134;

typedef byte (Eq_140)(byte *);

typedef struct  {	// size: 1 1
	word16 w0000;	// 0
} Eq_150;

