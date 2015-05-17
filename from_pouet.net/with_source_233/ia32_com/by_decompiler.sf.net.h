// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_233/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_61) ptrFFFA0000) (60000 (ptr Eq_61) ptr60000) (70000 (ptr Eq_61) ptr70000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (int16 u0) (uint16 u1))
	T_7 (in ax_118 : Eq_7)
	T_10 (in DPB(ax, 0x20, 8, 8) : word16)
	T_38 (in DPB(ax_118, ch_27 << 0x02, 0, 8) : word16)
	T_74 (in dx_108 : Eq_7)
	T_76 (in dx_108 + 0x0000 : word16)
	T_100 (in ax_62 + 0x0001 + 0x0001 : word16)
	T_134 (in ax_141 >>u 0x0002 : word16)
	T_166 (in (word16) dx_ax_271 : word16)
	T_197 (in DPB(ax_118, al_290 >>u 0x04, 0, 8) : word16)
	T_255 (in DPB(ax_207 & 0x0FF0, al_217 - 0x40, 8, 8) : word16)
	T_286 (in ax_262 - 0x0001 : word16)
Eq_11: (fn void (word16, Eq_7))
	T_11 (in __outw : ptr32)
Eq_16: (fn void (word16, ui16))
	T_16 (in __outb : ptr32)
Eq_21: (union "Eq_21" (uint16 u0) (byte u1))
	T_21 (in ch_27 : Eq_21)
	T_23 (in cl_17 >>u 0x04 : word16)
Eq_24: (fn void (word16, ui16))
	T_24 (in __outb : ptr32)
Eq_32: (fn void (word16, ui16))
	T_32 (in __outb : ptr32)
Eq_45: (union "Eq_45" (uint16 u0) (bcu8 u1))
	T_45 (in cl_124 : Eq_45)
	T_46 (in 0x28 : byte)
	T_65 (in Mem319[0x6000:bx + 0x0000:byte] : byte)
	T_68 (in Mem0[0x6000:bx + 0x0000:byte] : byte)
	T_70 (in Mem0[0x6000:bx + 0x0000:byte] + ~al_102 : byte)
	T_73 (in Mem106[0x6000:bx + 0x0000:byte] : byte)
	T_86 (in 0x26 : byte)
	T_90 (in (byte) cx_123 : byte)
	T_184 (in al_290 >>u 0x04 : word16)
	T_188 (in Mem294[0x7000:bx_212 + 0x0000:byte] : byte)
	T_243 (in (byte) (ax_207 & 0x0FF0) + SLICE(ax_207 & 0x0FF0, byte, 8) : byte)
	T_246 (in Mem216[0x7000:bx + 0x0000:byte] : byte)
	T_258 (in v35_249 : word16)
	T_261 (in Mem216[0x7000:bx + 0x0000:byte] : byte)
	T_262 (in 0x00 : byte)
	T_265 (in Mem250[0x7000:bx + 0x0000:byte] : byte)
	T_269 (in Mem254[0xA000:bx - 0x0060:byte] : byte)
Eq_61: (segment "Eq_61" (0 Eq_62 t0000))
	T_61 (in 0x6000 : selector)
	T_185 (in 0x7000 : selector)
	T_266 (in 0xA000 : selector)
Eq_62: (union "Eq_62" (Eq_289 u0) (Eq_290 u1))
	T_62 (in bx : (memptr (ptr Eq_61) Eq_62))
	T_78 (in bx + 0x0001 : word16)
	T_83 (in 0x0000 : word16)
	T_117 (in DPB(bx, bl_139, 0, 8) : word16)
	T_153 (in bx_212 : (memptr (ptr Eq_61) Eq_62))
	T_155 (in bx_212 + 0x0001 : word16)
	T_158 (in 0x0000 : word16)
	T_174 (in di_280 : (memptr (ptr Eq_61) Eq_62))
	T_199 (in di_280 - 0x0100 : word16)
	T_200 (in DPB(bx_212, bh_214, 8, 8) : word16)
	T_271 (in bx + 0x0001 : word16)
	T_276 (in 0x0000 : word16)
Eq_109: (struct "Eq_109" 0001 (FFFFFEFF byte bFFFFFEFF) (0 byte b0000) (1 byte b0001) (FF byte b00FF))
	T_109 (in di : (memptr (ptr Eq_61) Eq_109))
	T_136 (in di + 0x0001 : word16)
	T_137 (in 0x0000 : word16)
Eq_144: (segment "Eq_144")
	T_144 (in ss : selector)
Eq_145: (union "Eq_145" ((memptr (ptr Eq_144) Eq_291) u0) (Eq_293 u1))
	T_145 (in fp : ptr16)
Eq_189: (union "Eq_189" (uint16 u0) (byte u1))
	T_189 (in al_290 >>u 0x04 : word16)
	T_192 (in Mem295[0x7000:di_280 + 0x0000:byte] : byte)
Eq_279: (fn byte (byte))
	T_279 (in __inb : ptr32)
Eq_289: (struct "Eq_289" 0001 (FFFFFFA0 Eq_45 tFFFFFFA0) (0 Eq_45 t0000))
	T_289
Eq_290: (struct "Eq_290" 0100 (0 Eq_189 t0000))
	T_290
Eq_291: (struct "Eq_291" (FFFFFFFE word16 wFFFFFFFE))
	T_291
Eq_292: (struct "Eq_292" (FFFFFFFE word16 wFFFFFFFE))
	T_292
Eq_293: (union "Eq_293" (ptr16 u0) ((memptr (ptr Eq_144) Eq_292) u1))
	T_293
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
T_7: (in ax_118 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (union (int16 u0) (uint16 u1))
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
T_13: (in __outw(0x03D4, ax_118) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in cl_17 : uint8)
  Class: Eq_14
  DataType: uint8
  OrigDataType: uint8
T_15: (in 0x00 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_20 (T_17, T_19)))
T_17: (in 0x03C9 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x02 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in cl_17 << 0x02 : word16)
  Class: Eq_19
  DataType: ui16
  OrigDataType: ui16
T_20: (in __outb(0x03C9, cl_17 << 0x02) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in ch_27 : Eq_21)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: byte
T_22: (in 0x04 : byte)
  Class: Eq_22
  DataType: uint8
  OrigDataType: uint8
T_23: (in cl_17 >>u 0x04 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: uint16
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_31 (T_25, T_30)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0F : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in cl_17 & 0x0F : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in (cl_17 & 0x0F) + ch_27 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0x01 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in (cl_17 & 0x0F) + ch_27 << 0x01 : word16)
  Class: Eq_30
  DataType: ui16
  OrigDataType: ui16
T_31: (in __outb(0x03C9, (cl_17 & 0x0F) + ch_27 << 0x01) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_36 (T_33, T_35)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x02 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in ch_27 << 0x02 : word16)
  Class: Eq_35
  DataType: ui16
  OrigDataType: ui16
T_36: (in __outb(0x03C9, ch_27 << 0x02) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in ch_27 << 0x02 : word16)
  Class: Eq_37
  DataType: ui16
  OrigDataType: ui16
T_38: (in DPB(ax_118, ch_27 << 0x02, 0, 8) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_39: (in 0x01 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in cl_17 + 0x01 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_41: (in 0x00 : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_42: (in cl_17 != 0x00 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in cx_123 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0028 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_45: (in cl_124 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: bcu8
T_46: (in 0x28 : byte)
  Class: Eq_45
  DataType: uint16
  OrigDataType: byte
T_47: (in ax_93 : uint16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in dh_111 : int8)
  Class: Eq_48
  DataType: int8
  OrigDataType: int8
T_49: (in dh_111 *s dh_111 : int16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_50: (in dl_110 : int8)
  Class: Eq_50
  DataType: int8
  OrigDataType: int8
T_51: (in dl_110 *s dl_110 : int16)
  Class: Eq_51
  DataType: int16
  OrigDataType: int16
T_52: (in dh_111 *s dh_111 + dl_110 *s dl_110 : word16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: word16
T_53: (in al_102 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x0004 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in ax_93 >>u 0x0004 : word16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in (byte) (ax_93 >>u 0x0004) : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_57: (in ax_93 >>u 0x0004 : word16)
  Class: Eq_57
  DataType: uint16
  OrigDataType: uint16
T_58: (in SLICE(ax_93 >>u 0x0004, byte, 8) : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in 0x00 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_60: (in SLICE(ax_93 >>u 0x0004, byte, 8) == 0x00 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x6000 : selector)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (segment))
T_62: (in bx : (memptr (ptr Eq_61) Eq_62))
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: (memptr T_61 (struct 0001 (FFFFFFA0 T_269 tFFFFFFA0) (0 T_45 t0000)))
T_63: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in bx + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem319[0x6000:bx + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in bx + 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in Mem0[0x6000:bx + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_69: (in ~al_102 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in Mem0[0x6000:bx + 0x0000:byte] + ~al_102 : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bx + 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in Mem106[0x6000:bx + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_74: (in dx_108 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in dx_108 + 0x0000 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in bx + 0x0001 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_79: (in (byte) dx_108 : byte)
  Class: Eq_50
  DataType: int8
  OrigDataType: byte
T_80: (in SLICE(dx_108, byte, 8) : byte)
  Class: Eq_48
  DataType: int8
  OrigDataType: byte
T_81: (in bh_114 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_83: (in 0x0000 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_84: (in bx != &Eq_61::t0000 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in 0xFF : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_86: (in 0x26 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_87: (in cl_124 <u 0x26 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in cx_123 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_90: (in (byte) cx_123 : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_91: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_92: (in cx_123 != 0x0000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in ax_62 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0x6261 : word16)
  Class: Eq_94
  DataType: int16
  OrigDataType: int16
T_95: (in ax_118 *s 0x6261 : int32)
  Class: Eq_95
  DataType: int32
  OrigDataType: int32
T_96: (in (word16) (ax_118 *s 0x6261) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in ax_62 + 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in ax_62 + 0x0001 + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_101: (in ax_62 + 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in (byte) (ax_62 + 0x0001) : byte)
  Class: Eq_50
  DataType: int8
  OrigDataType: byte
T_103: (in ax_62 + 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in SLICE(ax_62 + 0x0001, byte, 8) : byte)
  Class: Eq_48
  DataType: int8
  OrigDataType: byte
T_105: (in cx_127 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in 0x07 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in DPB(cx_123, 0x07, 0, 8) : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_108: (in bl_139 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in di : (memptr (ptr Eq_61) Eq_109))
  Class: Eq_109
  DataType: (memptr (ptr Eq_61) Eq_109)
  OrigDataType: (memptr T_61 (struct 0001 (FFFFFEFF T_115 tFFFFFEFF) (0 T_121 t0000) (1 T_124 t0001) (FF T_112 t00FF)))
T_110: (in 0x00FF : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di + 0x00FF : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in Mem106[0x6000:di + 0x00FF:byte] : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in 0x0101 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in di - 0x0101 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in Mem106[0x6000:di - 0x0101:byte] : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in (0x6000->*di).b00FF + (0x6000->*di).b00FF : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_117: (in DPB(bx, bl_139, 0, 8) : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_118: (in ax_141 : uint16)
  Class: Eq_118
  DataType: uint16
  OrigDataType: uint16
T_119: (in 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in di + 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem106[0x6000:di + 0x0000:byte] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in 0x0001 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in di + 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem106[0x6000:di + 0x0001:byte] : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in (0x6000->*di).b0000 + (0x6000->*di).b0001 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in DPB(ax_118, (0x6000->*di).b0000 + (0x6000->*di).b0001, 0, 8) : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in DPB(ax_118, (0x6000->*di).b0000 + (0x6000->*di).b0001, 0, 8) + bx : word16)
  Class: Eq_118
  DataType: uint16
  OrigDataType: word16
T_128: (in 0x0002 : word16)
  Class: Eq_128
  DataType: uint16
  OrigDataType: uint16
T_129: (in ax_141 >>u 0x0002 : word16)
  Class: Eq_129
  DataType: uint16
  OrigDataType: uint16
T_130: (in (byte) (ax_141 >>u 0x0002) : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_131: (in 0x0000 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in di + 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem147[0x6000:di + 0x0000:byte] : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_134: (in ax_141 >>u 0x0002 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint16
T_135: (in 0x0001 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in di + 0x0001 : word16)
  Class: Eq_109
  DataType: (memptr (ptr Eq_61) Eq_109)
  OrigDataType: word16
T_137: (in 0x0000 : word16)
  Class: Eq_109
  DataType: (memptr (ptr Eq_61) Eq_109)
  OrigDataType: word16
T_138: (in di != &Eq_61::t0000 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in 0x0001 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in cx_127 - 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_141: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_142: (in cx_127 != 0x0000 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 0xA000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in ss : selector)
  Class: Eq_144
  DataType: (ptr Eq_144)
  OrigDataType: (ptr (segment))
T_145: (in fp : ptr16)
  Class: Eq_145
  DataType: Eq_145
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_144 (struct (FFFFFFFE T_152 tFFFFFFFE))) u1)) u0) ((memptr T_144 (struct (FFFFFFFE T_148 tFFFFFFFE))) u1))
T_146: (in 0x0002 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in fp - 0x0002 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in Mem155[ss:fp - 0x0002:word16] : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_149: (in 0x7000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0002 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in fp - 0x0002 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in Mem160[ss:fp - 0x0002:word16] : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_153: (in bx_212 : (memptr (ptr Eq_61) Eq_62))
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: (memptr T_61 (struct 0001 (0 T_45 t0000)))
T_154: (in 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in bx_212 + 0x0001 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_156: (in (byte) bx : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_157: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_158: (in 0x0000 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_159: (in bx != &Eq_61::t0000 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in dx_ax_271 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in (word32) ax_118 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_162: (in dx_272 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in SLICE(dx_ax_271, word16, 16) : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_164: (in ah_273 : bcu8)
  Class: Eq_164
  DataType: bcu8
  OrigDataType: bcu8
T_165: (in SLICE(dx_ax_271, byte, 8) : byte)
  Class: Eq_164
  DataType: bcu8
  OrigDataType: byte
T_166: (in (word16) dx_ax_271 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_167: (in dh_275 : bcu8)
  Class: Eq_164
  DataType: bcu8
  OrigDataType: bcu8
T_168: (in SLICE(dx_ax_271, byte, 24) : byte)
  Class: Eq_164
  DataType: bcu8
  OrigDataType: byte
T_169: (in cl_278 : int8)
  Class: Eq_169
  DataType: int8
  OrigDataType: byte
T_170: (in ax_192 : (memptr (ptr Eq_61) int8))
  Class: Eq_170
  DataType: (memptr (ptr Eq_61) int8)
  OrigDataType: (memptr T_61 (struct (0 T_169 t0000)))
T_171: (in 0x0000 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in ax_192 + 0x0000 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in Mem216[0x6000:ax_192 + 0x0000:byte] : byte)
  Class: Eq_169
  DataType: int8
  OrigDataType: byte
T_174: (in di_280 : (memptr (ptr Eq_61) Eq_62))
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: (memptr T_185 (struct 0100 (0 T_192 t0000)))
T_175: (in ax_181 : uint16)
  Class: Eq_175
  DataType: uint16
  OrigDataType: word16
T_176: (in 0x0002 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in ax_181 << 0x0002 : word16)
  Class: Eq_177
  DataType: ui16
  OrigDataType: ui16
T_178: (in dx_272 + (ax_181 << 0x0002) : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_179: (in SLICE(dx_272, byte, 8) : byte)
  Class: Eq_164
  DataType: bcu8
  OrigDataType: byte
T_180: (in dh_275 <u ah_273 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in al_290 : uint8)
  Class: Eq_181
  DataType: uint8
  OrigDataType: uint8
T_182: (in dh_275 + cl_278 : byte)
  Class: Eq_181
  DataType: uint8
  OrigDataType: byte
T_183: (in 0x04 : byte)
  Class: Eq_183
  DataType: uint8
  OrigDataType: uint8
T_184: (in al_290 >>u 0x04 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: uint16
T_185: (in 0x7000 : selector)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (segment))
T_186: (in 0x0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in bx_212 + 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in Mem294[0x7000:bx_212 + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_189: (in al_290 >>u 0x04 : word16)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: uint16
T_190: (in 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in di_280 + 0x0000 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in Mem295[0x7000:di_280 + 0x0000:byte] : byte)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: byte
T_193: (in bh_214 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in 0x01 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in bh_214 + 0x01 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_196: (in al_290 >>u 0x04 : word16)
  Class: Eq_196
  DataType: uint16
  OrigDataType: uint16
T_197: (in DPB(ax_118, al_290 >>u 0x04, 0, 8) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_198: (in 0x0100 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in di_280 - 0x0100 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_200: (in DPB(bx_212, bh_214, 8, 8) : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_201: (in 0x00 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_202: (in bh_214 == 0x00 : bool)
  Class: Eq_202
  DataType: bool
  OrigDataType: bool
T_203: (in si_177 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in (word16) bh_114 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0000 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in SEQ(0x0000, ax_118) : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in 0x0020 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in si_177 + 0x0020 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in SEQ(0x0000, ax_118) % (si_177 + 0x0020) : uint16)
  Class: Eq_209
  DataType: uint16
  OrigDataType: uint16
T_210: (in SEQ(SEQ(0x0000, ax_118) % (si_177 + 0x0020), ax_118) : word32)
  Class: Eq_210
  DataType: uint32
  OrigDataType: uint32
T_211: (in si_177 + 0x0020 : word16)
  Class: Eq_211
  DataType: uint16
  OrigDataType: uint16
T_212: (in SEQ(SEQ(0x0000, ax_118) % (si_177 + 0x0020), ax_118) /u (si_177 + 0x0020) : uint16)
  Class: Eq_175
  DataType: uint16
  OrigDataType: uint16
T_213: (in ax_187 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in bp : (memptr (ptr Eq_61) byte))
  Class: Eq_214
  DataType: (memptr (ptr Eq_61) byte)
  OrigDataType: (memptr T_61 (struct (0 T_223 t0000)))
T_215: (in bp + ax_181 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_216: (in (byte) ax_187 : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in DPB(ax_187, (byte) ax_187, 8, 8) : word16)
  Class: Eq_170
  DataType: (memptr (ptr Eq_61) int8)
  OrigDataType: word16
T_218: (in al_198 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0000 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in ax_192 + 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem160[0x6000:ax_192 + 0x0000:byte] : byte)
  Class: Eq_169
  DataType: int8
  OrigDataType: byte
T_222: (in bp + ax_192 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in Mem160[0x6000:bp + ax_192:byte] : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_224: (in Mem160[0x6000:ax_192 + 0x0000:byte] + Mem160[0x6000:bp + ax_192:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_225: (in ax_200 : int16)
  Class: Eq_225
  DataType: int16
  OrigDataType: word16
T_226: (in 0x02 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in al_198 << 0x02 : word16)
  Class: Eq_227
  DataType: int16
  OrigDataType: int16
T_228: (in al_198 << 0x02 : word16)
  Class: Eq_228
  DataType: int16
  OrigDataType: int16
T_229: (in (al_198 << 0x02) *s (al_198 << 0x02) : int16)
  Class: Eq_225
  DataType: int16
  OrigDataType: int16
T_230: (in ax_207 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in SLICE(ax_200, byte, 8) : byte)
  Class: Eq_231
  DataType: uint8
  OrigDataType: uint8
T_232: (in 0x02 : byte)
  Class: Eq_232
  DataType: uint8
  OrigDataType: uint8
T_233: (in SLICE(ax_200, byte, 8) >>u 0x02 : word16)
  Class: Eq_233
  DataType: uint16
  OrigDataType: uint16
T_234: (in bl_139 + (SLICE(ax_200, byte, 8) >>u 0x02) : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in DPB(bx, bl_139 + (SLICE(ax_200, byte, 8) >>u 0x02), 0, 8) : word16)
  Class: Eq_235
  DataType: (memptr (ptr Eq_61) byte)
  OrigDataType: (memptr T_185 (struct (0 T_236 t0000)))
T_236: (in Mem160[0x7000:DPB(bx, bl_139 + (SLICE(ax_200, byte, 8) >>u 0x02), 0, 8):byte] : byte)
  Class: Eq_236
  DataType: byte
  OrigDataType: byte
T_237: (in DPB(ax_200, Mem160[0x7000:DPB(bx, bl_139 + (SLICE(ax_200, byte, 8) >>u 0x02), 0, 8):byte], 8, 8) : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_238: (in 0x0FF0 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in ax_207 & 0x0FF0 : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in (byte) (ax_207 & 0x0FF0) : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_241: (in ax_207 & 0x0FF0 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in SLICE(ax_207 & 0x0FF0, byte, 8) : byte)
  Class: Eq_242
  DataType: byte
  OrigDataType: byte
T_243: (in (byte) (ax_207 & 0x0FF0) + SLICE(ax_207 & 0x0FF0, byte, 8) : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_244: (in 0x0000 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in bx + 0x0000 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in Mem216[0x7000:bx + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_247: (in al_217 : int8)
  Class: Eq_169
  DataType: int8
  OrigDataType: int8
T_248: (in 0x0000 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in ax_192 + 0x0000 : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in Mem216[0x6000:ax_192 + 0x0000:byte] : byte)
  Class: Eq_169
  DataType: int8
  OrigDataType: byte
T_251: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_252: (in ax_207 & 0x0FF0 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in 0x40 : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_254: (in al_217 - 0x40 : byte)
  Class: Eq_254
  DataType: byte
  OrigDataType: byte
T_255: (in DPB(ax_207 & 0x0FF0, al_217 - 0x40, 8, 8) : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_256: (in 0x40 : byte)
  Class: Eq_169
  DataType: int8
  OrigDataType: int8
T_257: (in al_217 < 0x40 : bool)
  Class: Eq_257
  DataType: bool
  OrigDataType: bool
T_258: (in v35_249 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: word16
T_259: (in 0x0000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in bx + 0x0000 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in Mem216[0x7000:bx + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_262: (in 0x00 : byte)
  Class: Eq_45
  DataType: uint16
  OrigDataType: byte
T_263: (in 0x0000 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in bx + 0x0000 : word16)
  Class: Eq_264
  DataType: word16
  OrigDataType: word16
T_265: (in Mem250[0x7000:bx + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_266: (in 0xA000 : selector)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (segment))
T_267: (in 0x0060 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in bx - 0x0060 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in Mem254[0xA000:bx - 0x0060:byte] : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_270: (in 0x0001 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in bx + 0x0001 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_272: (in ax_252 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in (word16) v35_249 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_274: (in (byte) bx : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_275: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_276: (in 0x0000 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_61) Eq_62)
  OrigDataType: word16
T_277: (in bx != &Eq_61::t0000 : bool)
  Class: Eq_277
  DataType: bool
  OrigDataType: bool
T_278: (in ax_262 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in __inb : ptr32)
  Class: Eq_279
  DataType: (ptr Eq_279)
  OrigDataType: (ptr (fn T_281 (T_280)))
T_280: (in 0x60 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_281: (in __inb(0x60) : byte)
  Class: Eq_281
  DataType: byte
  OrigDataType: byte
T_282: (in DPB(ax_252, __inb(0x60), 0, 8) : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_283: (in 0x0001 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in bp + 0x0001 : word16)
  Class: Eq_214
  DataType: (memptr (ptr Eq_61) byte)
  OrigDataType: word16
T_285: (in 0x0001 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in ax_262 - 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_287: (in 0x0001 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_288: (in ax_262 != 0x0001 : bool)
  Class: Eq_288
  DataType: bool
  OrigDataType: bool
T_289:
  Class: Eq_289
  DataType: Eq_289
  OrigDataType: 
T_290:
  Class: Eq_290
  DataType: Eq_290
  OrigDataType: 
T_291:
  Class: Eq_291
  DataType: Eq_291
  OrigDataType: 
T_292:
  Class: Eq_292
  DataType: Eq_292
  OrigDataType: 
T_293:
  Class: Eq_293
  DataType: Eq_293
  OrigDataType: 
*/
typedef Eq_61 Eq_1Eq_61 Eq_1Eq_61 Eq_1struct Globals {
	Eq_61 * ptrFFFA0000;	// FFFA0000
	Eq_61 * ptr60000;	// 60000
	Eq_61 * ptr70000;	// 70000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	int16 u0;
	uint16 u1;
} Eq_7;

typedef void (Eq_11)(word16, Eq_7);

typedef void (Eq_16)(word16, ui16);

typedef union Eq_21 {
	uint16 u0;
	byte u1;
} Eq_21;

typedef void (Eq_24)(word16, ui16);

typedef void (Eq_32)(word16, ui16);

typedef union Eq_45 {
	uint16 u0;
	bcu8 u1;
} Eq_45;

typedef Eq_62 Eq_61struct Eq_61 {
	Eq_62 t0000;	// 0
} Eq_61;

typedef union Eq_62 {
	Eq_289 u0;
	Eq_290 u1;
} Eq_62;

typedef struct Eq_109 {	// size: 1 1
	byte bFFFFFEFF;	// FFFFFEFF
	byte b0000;	// 0
	byte b0001;	// 1
	byte b00FF;	// FF
} Eq_109;

typedef struct Eq_144 {
} Eq_144;

typedef union Eq_145 {
	Eq_291 Eq_144::* u0;
	Eq_293 u1;
} Eq_145;

typedef union Eq_189 {
	uint16 u0;
	byte u1;
} Eq_189;

typedef byte (Eq_279)(byte);

typedef Eq_45 Eq_289Eq_45 Eq_289struct Eq_289 {	// size: 1 1
	Eq_45 tFFFFFFA0;	// FFFFFFA0
	Eq_45 t0000;	// 0
} Eq_289;

typedef Eq_189 Eq_290struct Eq_290 {	// size: 256 100
	Eq_189 t0000;	// 0
} Eq_290;

typedef struct Eq_291 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_291;

typedef struct Eq_292 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_292;

typedef union Eq_293 {
	ptr16 u0;
	Eq_292 Eq_144::* u1;
} Eq_293;

