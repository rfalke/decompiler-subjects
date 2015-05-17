// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_218/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_32) ptrFFFA0000) (70000 (ptr Eq_32) ptr70000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union (int16 u0) (uint16 u1))
	T_7 (in ax_8 : word16)
	T_10 (in DPB(ax, 0x20, 8, 8) : word16)
	T_20 (in ax_102 : word16)
	T_26 (in dh_55 *s dh_55 + ax_73 : word16)
	T_101 (in ax_117 >>u 0x0002 : word16)
Eq_11: (fn void (word16, Eq_7))
	T_11 (in __outw : ptr32)
Eq_32: (segment (0 Eq_33 t0000))
	T_32 (in 0x7000 : selector)
	T_250 (in 0xA000 : selector)
Eq_33: (struct 0001 (0 bcu8 b0000) (64A0 byte b64A0))
	T_33 (in bx : word16)
	T_40 (in bx + 0x0001 : word16)
	T_45 (in 0x0000 : word16)
	T_78 (in DPB(bx, bl_115, 0, 8) : word16)
	T_151 (in bx_216 + 0x0001 : word16)
	T_255 (in bx + 0x0001 : word16)
	T_258 (in 0x0000 : word16)
Eq_70: (struct 0001 (0 byte b0000))
	T_70 (in cx_104 : word16)
	T_72 (in DPB(cx_20, 0x05, 0, 8) : word16)
	T_107 (in cx_104 - 0x0001 : word16)
	T_110 (in 0x0000 : word16)
	T_115 (in bp : word16)
	T_133 (in 0x0001 : word16)
	T_140 (in DPB(cx_104, 0xFF, 0, 8) : word16)
	T_173 (in DPB(cx_104, al_195, 8, 8) : word16)
	T_176 (in 0x0002 : word16)
	T_246 (in DPB(ax_315, dl_337, 0, 8) : word16)
	T_275 (in cx_104 - 0x0001 : word16)
Eq_74: (struct 0001 (FFFFFEFF int8 bFFFFFEFF) (FFFFFFFE byte bFFFFFFFE) (0 byte b0000) (FF byte b00FF))
	T_74 (in di : word16)
	T_103 (in di + 0x0001 : word16)
	T_104 (in 0x0000 : word16)
Eq_160: (struct (0 byte b0000))
	T_160 (in bx - 0x0001 : word16)
Eq_164: (struct (0 byte b0000))
	T_164 (in bx + 0x0001 : word16)
Eq_174: (struct 0001 (0 byte b0000))
	T_174 (in di_364 : word16)
	T_175 (in DPB(ax_194, bh_153, 8, 8) : word16)
	T_277 (in di_364 + 0x0001 : word16)
Eq_260: (fn byte (byte))
	T_260 (in __inb : ptr32)
Eq_265: (union (uint16 u0) (byte u1))
	T_265 (in al_390 : byte)
	T_267 (in al_372 >>u 0x04 : word16)
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
T_7: (in ax_8 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x20 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03D4 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03D4, ax_8) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in dx_3 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_15: (in 0x03D4 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_16: (in cx_20 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x000F : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in cl_21 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: bcu8
T_19: (in 0x0F : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_20: (in ax_102 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (int16 u0) (uint16 u1))
T_21: (in ax_73 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: word16
T_22: (in dl_54 : byte)
  Class: Eq_22
  DataType: int8
  OrigDataType: int8
T_23: (in dl_54 *s dl_54 : int16)
  Class: Eq_21
  DataType: int16
  OrigDataType: int16
T_24: (in dh_55 : byte)
  Class: Eq_24
  DataType: int8
  OrigDataType: int8
T_25: (in dh_55 *s dh_55 : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in dh_55 *s dh_55 + ax_73 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_27: (in si_133 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: word16
T_28: (in ah_80 : byte)
  Class: Eq_28
  DataType: bcu8
  OrigDataType: bcu8
T_29: (in SLICE(ax_102, byte, 8) : byte)
  Class: Eq_28
  DataType: bcu8
  OrigDataType: byte
T_30: (in 0x3F : byte)
  Class: Eq_28
  DataType: bcu8
  OrigDataType: bcu8
T_31: (in ah_80 >u 0x3F : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x7000 : selector)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (segment))
T_33: (in bx : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: (memptr T_32 (struct 0001 (0 T_18 t0000) (64A0 T_253 t64A0)))
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem421[0x7000:bx + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in dx_3 + 0x0001 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bx + 0x0001 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: word16
T_41: (in (byte) dx_3 : byte)
  Class: Eq_22
  DataType: int8
  OrigDataType: byte
T_42: (in SLICE(dx_3, byte, 8) : byte)
  Class: Eq_24
  DataType: int8
  OrigDataType: byte
T_43: (in bh_153 : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: int8
T_44: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: word16
T_46: (in bx != 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem0[0x7000:bx + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_50: (in Mem0[0x7000:bx + 0x0000:byte] + ah_80 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in bx + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem419[0x7000:bx + 0x0000:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_54: (in 0x0D : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: bcu8
T_55: (in cl_21 <u 0x0D : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in cx_20 - 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_58: (in (byte) cx_20 : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_59: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_60: (in cx_20 != 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in ax_46 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in dx_3 *s ax_102 : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_63: (in (word16) (dx_3 *s ax_102) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in ax_46 + 0x0001 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_66: (in ax_46 + 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in (byte) (ax_46 + 0x0001) : byte)
  Class: Eq_22
  DataType: int8
  OrigDataType: byte
T_68: (in ax_46 + 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in SLICE(ax_46 + 0x0001, byte, 8) : byte)
  Class: Eq_24
  DataType: int8
  OrigDataType: byte
T_70: (in cx_104 : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_249 t0000)))
T_71: (in 0x05 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(cx_20, 0x05, 0, 8) : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_73: (in bl_115 : byte)
  Class: Eq_73
  DataType: int8
  OrigDataType: int8
T_74: (in di : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_32) Eq_74)
  OrigDataType: (memptr T_32 (struct 0001 (FFFFFEFF T_77 tFFFFFEFF) (FFFFFFFE T_82 tFFFFFFFE) (0 T_86 t0000) (FF T_91 t00FF)))
T_75: (in 0x0101 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in di - 0x0101 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in Mem0[0x7000:di - 0x0101:byte] : byte)
  Class: Eq_73
  DataType: int8
  OrigDataType: byte
T_78: (in DPB(bx, bl_115, 0, 8) : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: word16
T_79: (in ax_117 : word16)
  Class: Eq_79
  DataType: uint16
  OrigDataType: uint16
T_80: (in 0x0002 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in di - 0x0002 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in Mem0[0x7000:di - 0x0002:byte] : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in DPB(ax_102, Mem0[0x7000:di - 0x0002:byte], 0, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in di + 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in Mem0[0x7000:di + 0x0000:byte] : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in DPB(bx, Mem0[0x7000:di + 0x0000:byte], 0, 8) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in DPB(ax_102, Mem0[0x7000:di - 0x0002:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x0000:byte], 0, 8) : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in 0x00FF : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di + 0x00FF : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem0[0x7000:di + 0x00FF:byte] : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in DPB(bx, Mem0[0x7000:di + 0x00FF:byte], 0, 8) : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in DPB(ax_102, Mem0[0x7000:di - 0x0002:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x0000:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x00FF:byte], 0, 8) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in DPB(ax_102, Mem0[0x7000:di - 0x0002:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x0000:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x00FF:byte], 0, 8) + bx : word16)
  Class: Eq_79
  DataType: uint16
  OrigDataType: word16
T_95: (in 0x0002 : word16)
  Class: Eq_95
  DataType: uint16
  OrigDataType: uint16
T_96: (in ax_117 >>u 0x0002 : word16)
  Class: Eq_96
  DataType: uint16
  OrigDataType: uint16
T_97: (in (byte) (ax_117 >>u 0x0002) : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di + 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem123[0x7000:di + 0x0000:byte] : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_101: (in ax_117 >>u 0x0002 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint16
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in di + 0x0001 : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_32) Eq_74)
  OrigDataType: word16
T_104: (in 0x0000 : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_32) Eq_74)
  OrigDataType: word16
T_105: (in di != 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in cx_104 - 0x0001 : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_108: (in cl_128 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: bcu8
T_109: (in (byte) cx_104 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_110: (in 0x0000 : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_111: (in cx_104 != 0x0000 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in si_133 + 0x0001 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: word16
T_114: (in ax_188 : word16)
  Class: Eq_114
  DataType: ui16
  OrigDataType: word16
T_115: (in bp : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_249 t0000)))
T_116: (in bx + si_133 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem123[0x7000:bx + si_133:byte] : byte)
  Class: Eq_18
  DataType: bcu8
  OrigDataType: byte
T_118: (in DPB(bp, Mem123[0x7000:bx + si_133:byte], 0, 8) : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in 0x0040 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in DPB(bp, Mem123[0x7000:bx + si_133:byte], 0, 8) + 0x0040 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in 0x0006 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in DPB(bp, Mem123[0x7000:bx + si_133:byte], 0, 8) + 0x0040 << 0x0006 : word16)
  Class: Eq_114
  DataType: ui16
  OrigDataType: ui16
T_123: (in ax_194 : word16)
  Class: Eq_123
  DataType: uint16
  OrigDataType: cups16
T_124: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in SEQ(0x0000, ax_188) : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in SEQ(0x0000, ax_188) % 0x0001 : uint16)
  Class: Eq_127
  DataType: uint16
  OrigDataType: uint16
T_128: (in SEQ(SEQ(0x0000, ax_188) % 0x0001, ax_188) : word32)
  Class: Eq_128
  DataType: uint32
  OrigDataType: uint32
T_129: (in 0x0001 : word16)
  Class: Eq_129
  DataType: uint16
  OrigDataType: uint16
T_130: (in SEQ(SEQ(0x0000, ax_188) % 0x0001, ax_188) /u 0x0001 : uint16)
  Class: Eq_130
  DataType: uint16
  OrigDataType: uint16
T_131: (in 0x0003 : word16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: uint16
T_132: (in SEQ(SEQ(0x0000, ax_188) % 0x0001, ax_188) /u 0x0001 >>u 0x0003 : word16)
  Class: Eq_123
  DataType: uint16
  OrigDataType: uint16
T_133: (in 0x0001 : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_134: (in al_195 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: bcu8
T_135: (in (byte) ax_194 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_136: (in 0x00FF : word16)
  Class: Eq_123
  DataType: uint16
  OrigDataType: cups16
T_137: (in ax_194 <=u 0x00FF : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in 0xFF : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_139: (in 0xFF : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in DPB(cx_104, 0xFF, 0, 8) : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_141: (in al_195 >=u cl_128 : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in 0xFF : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_143: (in 0xFF : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in DPB(ax_194, 0xFF, 0, 8) : word16)
  Class: Eq_123
  DataType: uint16
  OrigDataType: word16
T_145: (in bx_216 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in bx + 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_149: (in bx_216 != 0x0000 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in bx_216 + 0x0001 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: word16
T_152: (in bx_216 + 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in (byte) (bx_216 + 0x0001) : byte)
  Class: Eq_73
  DataType: int8
  OrigDataType: byte
T_154: (in bx_216 + 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in SLICE(bx_216 + 0x0001, byte, 8) : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: byte
T_156: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_157: (in bx_216 != 0x0001 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in ax_370 : word16)
  Class: Eq_158
  DataType: int16
  OrigDataType: int16
T_159: (in 0x0001 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in bx - 0x0001 : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_32) Eq_160)
  OrigDataType: (memptr T_32 (struct (0 T_162 t0000)))
T_161: (in bx - 0x0001 + si_133 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in Mem123[0x7000:bx - 0x0001 + si_133:byte] : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x0001 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in bx + 0x0001 : word16)
  Class: Eq_164
  DataType: (memptr (ptr Eq_32) Eq_164)
  OrigDataType: (memptr T_32 (struct (0 T_166 t0000)))
T_165: (in bx + 0x0001 + si_133 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in Mem123[0x7000:bx + 0x0001 + si_133:byte] : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in Mem123[0x7000:bx - 0x0001 + si_133:byte] - Mem123[0x7000:(bx + 0x0001) + si_133:byte] : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in (int16) (Mem123[0x7000:bx - 0x0001 + si_133:byte] - Mem123[0x7000:(bx + 0x0001) + si_133:byte]) : int16)
  Class: Eq_168
  DataType: int16
  OrigDataType: int16
T_169: (in 0x0004 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in (int16) (Mem123[0x7000:bx - 0x0001 + si_133:byte] - Mem123[0x7000:(bx + 0x0001) + si_133:byte]) << 0x0004 : word16)
  Class: Eq_170
  DataType: ui16
  OrigDataType: ui16
T_171: (in 0x0002 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in ((int16) (Mem123[0x7000:bx - 0x0001 + si_133:byte] - Mem123[0x7000:(bx + 0x0001) + si_133:byte]) << 0x0004) - 0x0002 : word16)
  Class: Eq_158
  DataType: int16
  OrigDataType: word16
T_173: (in DPB(cx_104, al_195, 8, 8) : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_174: (in di_364 : word16)
  Class: Eq_174
  DataType: (memptr Eq_7 Eq_174)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_273 t0000)))
T_175: (in DPB(ax_194, bh_153, 8, 8) : word16)
  Class: Eq_174
  DataType: (memptr Eq_7 Eq_174)
  OrigDataType: word16
T_176: (in 0x0002 : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_177: (in al_372 : byte)
  Class: Eq_177
  DataType: uint8
  OrigDataType: uint8
T_178: (in 0x0080 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in ax_370 + 0x0080 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in (byte) (ax_370 + 0x0080) : byte)
  Class: Eq_177
  DataType: uint8
  OrigDataType: byte
T_181: (in ah_373 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in ax_370 + 0x0080 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in SLICE(ax_370 + 0x0080, byte, 8) : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_184: (in 0x0080 : word16)
  Class: Eq_158
  DataType: int16
  OrigDataType: int16
T_185: (in ax_370 >= 0x0080 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in 0x01 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in ah_373 - 0x01 : byte)
  Class: Eq_187
  DataType: int8
  OrigDataType: int8
T_188: (in 0x00 : byte)
  Class: Eq_187
  DataType: int8
  OrigDataType: int8
T_189: (in ah_373 - 0x01 < 0x00 : bool)
  Class: Eq_189
  DataType: bool
  OrigDataType: bool
T_190: (in 0x00 : byte)
  Class: Eq_177
  DataType: uint8
  OrigDataType: byte
T_191: (in 0x00 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_192: (in 0x00 : byte)
  Class: Eq_73
  DataType: int8
  OrigDataType: byte
T_193: (in bl_115 != 0x00 : bool)
  Class: Eq_193
  DataType: bool
  OrigDataType: bool
T_194: (in ax_279 : word16)
  Class: Eq_194
  DataType: int16
  OrigDataType: word16
T_195: (in (int16) bh_153 : int16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_196: (in ax_285 : word16)
  Class: Eq_196
  DataType: int16
  OrigDataType: word16
T_197: (in (byte) ax_279 : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in SLICE(ax_279, byte, 8) : byte)
  Class: Eq_198
  DataType: byte
  OrigDataType: byte
T_199: (in (byte) ax_279 ^ SLICE(ax_279, byte, 8) : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in (int16) ((byte) ax_279 ^ SLICE(ax_279, byte, 8)) : int16)
  Class: Eq_196
  DataType: int16
  OrigDataType: int16
T_201: (in ax_290 : word16)
  Class: Eq_201
  DataType: int16
  OrigDataType: word16
T_202: (in (int16) bl_115 : int16)
  Class: Eq_201
  DataType: int16
  OrigDataType: int16
T_203: (in cx_297 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in (byte) ax_285 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in (byte) ax_290 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in SLICE(ax_290, byte, 8) : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in (byte) ax_290 ^ SLICE(ax_290, byte, 8) : byte)
  Class: Eq_207
  DataType: byte
  OrigDataType: byte
T_208: (in (byte) ax_285 + ((byte) ax_290 ^ SLICE(ax_290, byte, 8)) : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in DPB(ax_285, (byte) ax_285 + ((byte) ax_290 ^ SLICE(ax_290, byte, 8)), 0, 8) : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_210: (in ah_310 : byte)
  Class: Eq_210
  DataType: uint8
  OrigDataType: uint8
T_211: (in SLICE(ax_279, byte, 8) : byte)
  Class: Eq_210
  DataType: uint8
  OrigDataType: byte
T_212: (in dx_ax_327 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in bh_153 *s bh_153 : int16)
  Class: Eq_213
  DataType: int16
  OrigDataType: int16
T_214: (in bl_115 *s bl_115 : int16)
  Class: Eq_214
  DataType: int16
  OrigDataType: int16
T_215: (in bh_153 *s bh_153 + bl_115 *s bl_115 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in (word32) (bh_153 *s bh_153 + bl_115 *s bl_115) : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_217: (in ax_315 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in 0x01 : byte)
  Class: Eq_218
  DataType: uint8
  OrigDataType: uint8
T_219: (in ah_310 >>u 0x01 : word16)
  Class: Eq_219
  DataType: uint16
  OrigDataType: uint16
T_220: (in 0x0006 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in ax_290 << 0x0006 : word16)
  Class: Eq_221
  DataType: ui16
  OrigDataType: ui16
T_222: (in (word32) (ax_290 << 0x0006) : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_223: (in 0x0001 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in cx_297 + 0x0001 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in (word32) (ax_290 << 0x0006) % (cx_297 + 0x0001) : int16)
  Class: Eq_225
  DataType: int16
  OrigDataType: int16
T_226: (in ax_290 << 0x0006 : word16)
  Class: Eq_226
  DataType: ui16
  OrigDataType: ui16
T_227: (in SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) : word32)
  Class: Eq_227
  DataType: int32
  OrigDataType: int32
T_228: (in cx_297 + 0x0001 : word16)
  Class: Eq_228
  DataType: int16
  OrigDataType: int16
T_229: (in SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) / (cx_297 + 0x0001) : int16)
  Class: Eq_229
  DataType: int16
  OrigDataType: int16
T_230: (in (byte) (SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) / (cx_297 + 0x0001)) : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_231: (in (byte) (SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) / (cx_297 + 0x0001)) ^ ah_310 : byte)
  Class: Eq_231
  DataType: byte
  OrigDataType: byte
T_232: (in (ah_310 >>u 0x01) + ((byte) (SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) / (cx_297 + 0x0001)) ^ ah_310) : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in DPB(ax_279, (ah_310 >>u 0x01) + ((byte) (SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) / (cx_297 + 0x0001)) ^ ah_310), 8, 8) : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_234: (in dx_329 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in SLICE(dx_ax_327, word16, 16) : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_236: (in ax_331 : word16)
  Class: Eq_236
  DataType: int16
  OrigDataType: int16
T_237: (in (word16) dx_ax_327 : word16)
  Class: Eq_236
  DataType: int16
  OrigDataType: word16
T_238: (in 0x0001 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in dx_329 + 0x0001 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_240: (in dl_337 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_241: (in (byte) dx_329 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_242: (in ax_331 - dx_329 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in ax_331 - dx_329 - dx_329 : word16)
  Class: Eq_236
  DataType: int16
  OrigDataType: word16
T_244: (in 0x0000 : word16)
  Class: Eq_236
  DataType: int16
  OrigDataType: int16
T_245: (in ax_331 >= 0x0000 : bool)
  Class: Eq_245
  DataType: bool
  OrigDataType: bool
T_246: (in DPB(ax_315, dl_337, 0, 8) : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_247: (in 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in cx_104 + 0x0000 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in Mem123[ax_8:cx_104 + 0x0000:byte] : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_250: (in 0xA000 : selector)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (segment))
T_251: (in 0x64A0 : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in bx + 0x64A0 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in Mem350[0xA000:bx + 0x64A0:byte] : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_254: (in 0x0001 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in bx + 0x0001 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: word16
T_256: (in (byte) bx : byte)
  Class: Eq_73
  DataType: int8
  OrigDataType: byte
T_257: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: byte
T_258: (in 0x0000 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_32) Eq_33)
  OrigDataType: word16
T_259: (in bx != 0x0000 : bool)
  Class: Eq_259
  DataType: bool
  OrigDataType: bool
T_260: (in __inb : ptr32)
  Class: Eq_260
  DataType: (ptr Eq_260)
  OrigDataType: (ptr (fn T_262 (T_261)))
T_261: (in 0x60 : byte)
  Class: Eq_261
  DataType: byte
  OrigDataType: byte
T_262: (in __inb(0x60) : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_263: (in 0x01 : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_264: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_264
  DataType: bool
  OrigDataType: bool
T_265: (in al_390 : byte)
  Class: Eq_265
  DataType: Eq_265
  OrigDataType: byte
T_266: (in 0x04 : byte)
  Class: Eq_266
  DataType: uint8
  OrigDataType: uint8
T_267: (in al_372 >>u 0x04 : word16)
  Class: Eq_265
  DataType: Eq_265
  OrigDataType: uint16
T_268: (in 0xFF : byte)
  Class: Eq_177
  DataType: uint8
  OrigDataType: byte
T_269: (in 0x10 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in al_390 + 0x10 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in di_364 + 0x0000 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in Mem397[ax_8:di_364 + 0x0000:byte] : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_274: (in 0x0001 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in cx_104 - 0x0001 : word16)
  Class: Eq_70
  DataType: (memptr Eq_7 Eq_70)
  OrigDataType: word16
T_276: (in 0x0001 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in di_364 + 0x0001 : word16)
  Class: Eq_174
  DataType: (memptr Eq_7 Eq_174)
  OrigDataType: word16
T_278: (in (byte) cx_104 : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: byte
T_279: (in SLICE(cx_104, byte, 8) : byte)
  Class: Eq_108
  DataType: bcu8
  OrigDataType: bcu8
T_280: (in SLICE(cx_104, byte, 8) <u cl_128 : bool)
  Class: Eq_280
  DataType: bool
  OrigDataType: bool
*/
typedef  Eq_1 Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
	 * ptr70000;	// 70000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union  {
	int16 u0;
	uint16 u1;
} Eq_7;

typedef void (Eq_11)(word16, );

typedef  Eq_32struct  {
	 t0000;	// 0
} Eq_32;

typedef struct  {	// size: 1 1
	bcu8 b0000;	// 0
	byte b64A0;	// 64A0
} Eq_33;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_70;

typedef struct  {	// size: 1 1
	int8 bFFFFFEFF;	// FFFFFEFF
	byte bFFFFFFFE;	// FFFFFFFE
	byte b0000;	// 0
	byte b00FF;	// FF
} Eq_74;

typedef struct  {
	byte b0000;	// 0
} Eq_160;

typedef struct  {
	byte b0000;	// 0
} Eq_164;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_174;

typedef byte (Eq_260)(byte);

typedef union  {
	uint16 u0;
	byte u1;
} Eq_265;

