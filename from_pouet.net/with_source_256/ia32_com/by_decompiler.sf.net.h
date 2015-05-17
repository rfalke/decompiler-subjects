// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_256/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_73) ptrFFF80000) (FFFA0000 (ptr Eq_232) ptrFFFA0000) (60000 (ptr Eq_152) ptr60000) (70000 (ptr Eq_114) ptr70000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, word16))
	T_7 (in __outw : ptr32)
Eq_17: (fn void (word16, int8))
	T_17 (in __outb : ptr32)
Eq_21: (union "Eq_21" (uint16 u0) ((memptr (ptr Eq_73) Eq_261) u1) ((memptr (ptr Eq_114) Eq_262) u2) ((memptr (ptr Eq_152) Eq_263) u3) ((memptr (ptr Eq_232) Eq_264) u4))
	T_21 (in bx_101 : Eq_21)
	T_23 (in bx_101 - 0x0001 : word16)
	T_26 (in 0x0000 : word16)
	T_51 (in 0x0030 : word16)
	T_81 (in bx_89 + 0x0001 : word16)
	T_119 (in bx_101 + 0x0001 : word16)
	T_122 (in 0x0000 : word16)
	T_167 (in DPB(bx_101, bl_189 + 0x01, 0, 8) : word16)
	T_174 (in DPB(bx_101, bh_103, 8, 8) : word16)
	T_237 (in bx_101 + 0x0001 : word16)
	T_240 (in 0x0000 : word16)
Eq_30: (fn int8 (byte, byte))
	T_30 (in __rol : ptr32)
Eq_73: (segment "Eq_73" (0 Eq_136 t0000))
	T_73 (in 0x8000 : selector)
Eq_91: (segment "Eq_91")
	T_91 (in ss : selector)
Eq_92: (union "Eq_92" ((memptr (ptr Eq_91) Eq_265) u0) (Eq_267 u1))
	T_92 (in fp : ptr16)
Eq_113: (union "Eq_113" (ui16 u0) (byte u1))
	T_113 (in SLICE(ax_130, byte, 8) << 0x01 : word16)
	T_117 (in Mem134[0x7000:bx_101 + 0x0000:byte] : byte)
Eq_114: (segment "Eq_114" (FFFF9CC0 byte bFFFF9CC0) (9CC0 byte b9CC0))
	T_114 (in 0x7000 : selector)
Eq_136: (struct "Eq_136" (0 word16 w0000) (80 byte b0080))
	T_136 (in si_148 : (memptr (ptr Eq_73) Eq_136))
	T_137 (in 0x0000 : word16)
	T_247 (in &si_148->w0000 + 0x0001 : word16)
Eq_149: (union "Eq_149" (byte u0) (word16 u1))
	T_149 (in ax_185 : Eq_149)
	T_151 (in DPB(ax_181, SLICE(ax_181, byte, 8), 0, 8) : word16)
	T_155 (in Mem186[0x6000:bx_101 + 0x0000:word16] : word16)
	T_158 (in Mem187[0x6000:bx_101 + 0x0100:word16] : word16)
	T_194 (in Mem187[0x6000:bx_101 + 0x0000:byte] : byte)
Eq_152: (segment "Eq_152")
	T_152 (in 0x6000 : selector)
Eq_177: (fn byte (word16))
	T_177 (in __inb : ptr32)
Eq_184: (fn byte (word16))
	T_184 (in __inb : ptr32)
Eq_232: (segment "Eq_232")
	T_232 (in 0xA000 : selector)
Eq_248: (fn byte (byte))
	T_248 (in __inb : ptr32)
Eq_261: (struct "Eq_261" 0001 (0 int16 w0000))
	T_261
Eq_262: (struct "Eq_262" 0001 (0 Eq_113 t0000))
	T_262
Eq_263: (struct "Eq_263" 0001 (FFFFFBFC byte bFFFFFBFC) (0 Eq_149 t0000) (100 Eq_149 t0100) (404 byte b0404))
	T_263
Eq_264: (struct "Eq_264" 0001 (20 byte b0020))
	T_264
Eq_265: (struct "Eq_265" (FFFFFFFE word16 wFFFFFFFE))
	T_265
Eq_266: (struct "Eq_266" (FFFFFFFE word16 wFFFFFFFE))
	T_266
Eq_267: (union "Eq_267" (ptr16 u0) ((memptr (ptr Eq_91) Eq_266) u1))
	T_267
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
T_7: (in __outw : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_12 (T_8, T_11)))
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x20 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in __outw(0x03D4, DPB(ax, 0x20, 8, 8)) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in cx_11 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0040 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in cl_12 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x40 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in al_273 : int8)
  Class: Eq_19
  DataType: int8
  OrigDataType: int8
T_20: (in __outb(0x03C9, al_273) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in bx_101 : Eq_21)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (uint16 u0) ((memptr T_73 (struct 0001 (0 T_76 t0000))) u1) ((memptr T_114 (struct 0001 (0 T_117 t0000))) u2) ((memptr T_152 (struct 0001 (FFFFFBFC T_214 tFFFFFBFC) (0 T_149 t0000) (100 T_158 t0100) (404 T_217 t0404))) u3) ((memptr T_232 (struct 0001 (20 T_235 t0020))) u4))
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in bx_101 - 0x0001 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_24: (in (byte) bx_101 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in bl_31 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_26: (in 0x0000 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_27: (in bx_101 != 0x0000 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in 0x00 : byte)
  Class: Eq_19
  DataType: int8
  OrigDataType: byte
T_29: (in al_42 : int8)
  Class: Eq_29
  DataType: int8
  OrigDataType: int8
T_30: (in __rol : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_25, T_31)))
T_31: (in 0x01 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __rol(bl_31, 0x01) : byte)
  Class: Eq_29
  DataType: int8
  OrigDataType: byte
T_33: (in al_42 *s al_42 : int16)
  Class: Eq_33
  DataType: int16
  OrigDataType: int16
T_34: (in (byte) (al_42 *s al_42) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x1F : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in (byte) (al_42 *s al_42) & 0x1F : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x20 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in ((byte) (al_42 *s al_42) & 0x1F) + 0x20 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in ((byte) (al_42 *s al_42) & 0x1F) + 0x20 - cl_12 : byte)
  Class: Eq_19
  DataType: int8
  OrigDataType: byte
T_40: (in 0x00 : byte)
  Class: Eq_19
  DataType: int8
  OrigDataType: int8
T_41: (in al_273 >= 0x00 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in cx_61 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in cx_11 - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0003 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in cx_61 - 0x0003 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_47: (in cx_61 - 0x0003 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in (byte) (cx_61 - 0x0003) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0003 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_50: (in cx_61 != 0x0003 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in 0x0030 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_52: (in 0x30 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_53: (in dx_ax_78 : int32)
  Class: Eq_53
  DataType: int32
  OrigDataType: int32
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in bx_101 >>u 0x0001 : word16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in 0x0040 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in (bx_101 >>u 0x0001) + 0x0040 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in (byte) ((bx_101 >>u 0x0001) + 0x0040) : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in (int16) (byte) ((bx_101 >>u 0x0001) + 0x0040) : int16)
  Class: Eq_59
  DataType: int16
  OrigDataType: int16
T_60: (in (int32) (int16) (byte) ((bx_101 >>u 0x0001) + 0x0040) : int32)
  Class: Eq_53
  DataType: int32
  OrigDataType: int32
T_61: (in al_79 : int8)
  Class: Eq_61
  DataType: int8
  OrigDataType: int8
T_62: (in (byte) dx_ax_78 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: byte
T_63: (in ax_81 : int16)
  Class: Eq_63
  DataType: int16
  OrigDataType: word16
T_64: (in al_79 *s al_79 : int16)
  Class: Eq_63
  DataType: int16
  OrigDataType: int16
T_65: (in SLICE(ax_81, byte, 8) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x40 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in SLICE(ax_81, byte, 8) - 0x40 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in DPB(ax_81, SLICE(ax_81, byte, 8) - 0x40, 8, 8) : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in SLICE(dx_ax_78, word16, 16) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in DPB(ax_81, SLICE(ax_81, byte, 8) - 0x40, 8, 8) ^ SLICE(dx_ax_78, word16, 16) : word16)
  Class: Eq_70
  DataType: int16
  OrigDataType: int16
T_71: (in 0x0008 : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in (DPB(ax_81, SLICE(ax_81, byte, 8) - 0x40, 8, 8) ^ SLICE(dx_ax_78, word16, 16)) >> 0x0008 : word16)
  Class: Eq_72
  DataType: int16
  OrigDataType: int16
T_73: (in 0x8000 : selector)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (segment))
T_74: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in bx_101 + 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem88[0x8000:bx_101 + 0x0000:word16] : word16)
  Class: Eq_72
  DataType: int16
  OrigDataType: word16
T_77: (in bx_89 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in bx_101 + 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in bx_89 + 0x0001 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_82: (in bl_102 : int8)
  Class: Eq_82
  DataType: int8
  OrigDataType: int8
T_83: (in bx_89 + 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in (byte) (bx_89 + 0x0001) : byte)
  Class: Eq_82
  DataType: int8
  OrigDataType: byte
T_85: (in bh_103 : int8)
  Class: Eq_85
  DataType: int8
  OrigDataType: int8
T_86: (in bx_89 + 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in SLICE(bx_89 + 0x0001, byte, 8) : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: byte
T_88: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_89: (in bx_89 != 0x0001 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in 0x7000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in ss : selector)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (segment))
T_92: (in fp : ptr16)
  Class: Eq_92
  DataType: Eq_92
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_91 (struct (FFFFFFFE T_131 tFFFFFFFE))) u1)) u0) ((union (ptr16 u0) ((memptr T_91 (struct (FFFFFFFE T_95 tFFFFFFFE))) u1)) u1) ((memptr T_91 (struct (FFFFFFFE T_135 tFFFFFFFE))) u2))
T_93: (in 0x0002 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in fp - 0x0002 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem96[ss:fp - 0x0002:word16] : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_96: (in ax_113 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in ax_113 + 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_99: (in al_122 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in (byte) ax_113 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_101: (in bp_112 : int16)
  Class: Eq_101
  DataType: int16
  OrigDataType: int16
T_102: (in bp_112 - ax_113 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in bp_112 - ax_113 - ax_113 : word16)
  Class: Eq_101
  DataType: int16
  OrigDataType: word16
T_104: (in 0x0000 : word16)
  Class: Eq_101
  DataType: int16
  OrigDataType: int16
T_105: (in bp_112 >= 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in ax_130 : int16)
  Class: Eq_106
  DataType: int16
  OrigDataType: int16
T_107: (in 0x02 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in al_122 << 0x02 : word16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_109: (in al_122 << 0x02 : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: int16
T_110: (in (al_122 << 0x02) *s (al_122 << 0x02) : int16)
  Class: Eq_106
  DataType: int16
  OrigDataType: int16
T_111: (in SLICE(ax_130, byte, 8) : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in 0x01 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in SLICE(ax_130, byte, 8) << 0x01 : word16)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: ui16
T_114: (in 0x7000 : selector)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (segment))
T_115: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in bx_101 + 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem134[0x7000:bx_101 + 0x0000:byte] : byte)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: byte
T_118: (in 0x0001 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in bx_101 + 0x0001 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_120: (in (byte) bx_101 : byte)
  Class: Eq_82
  DataType: int8
  OrigDataType: byte
T_121: (in SLICE(bx_101, byte, 8) : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: byte
T_122: (in 0x0000 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_123: (in bx_101 != 0x0000 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in bl_102 *s bl_102 : int16)
  Class: Eq_124
  DataType: int16
  OrigDataType: int16
T_125: (in bh_103 *s bh_103 : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_126: (in bl_102 *s bl_102 + bh_103 *s bh_103 : word16)
  Class: Eq_101
  DataType: int16
  OrigDataType: word16
T_127: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_128: (in 0xA000 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0002 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in fp - 0x0002 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem141[ss:fp - 0x0002:word16] : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_132: (in 0x6000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in 0x0002 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in fp - 0x0002 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in Mem145[ss:fp - 0x0002:word16] : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_136: (in si_148 : (memptr (ptr Eq_73) Eq_136))
  Class: Eq_136
  DataType: (memptr (ptr Eq_73) Eq_136)
  OrigDataType: (memptr T_73 (struct (0 T_259 t0000) (80 T_255 t0080)))
T_137: (in 0x0000 : word16)
  Class: Eq_136
  DataType: (memptr (ptr Eq_73) Eq_136)
  OrigDataType: word16
T_138: (in al_180 : int8)
  Class: Eq_138
  DataType: int8
  OrigDataType: int8
T_139: (in bp_174 : (memptr (ptr Eq_114) byte))
  Class: Eq_139
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: (memptr T_114 (struct (0 T_142 t0000)))
T_140: (in ax_169 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bp_174 + ax_169 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in Mem145[0x7000:bp_174 + ax_169:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in si_173 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in bp_174 + si_173 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in Mem145[0x7000:bp_174 + si_173:byte] : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_146: (in bp_174[ax_169] + bp_174[si_173] : byte)
  Class: Eq_138
  DataType: int8
  OrigDataType: byte
T_147: (in ax_181 : int16)
  Class: Eq_147
  DataType: int16
  OrigDataType: word16
T_148: (in al_180 *s al_180 : int16)
  Class: Eq_147
  DataType: int16
  OrigDataType: int16
T_149: (in ax_185 : Eq_149)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: word16
T_150: (in SLICE(ax_181, byte, 8) : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in DPB(ax_181, SLICE(ax_181, byte, 8), 0, 8) : word16)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: word16
T_152: (in 0x6000 : selector)
  Class: Eq_152
  DataType: (ptr Eq_152)
  OrigDataType: (ptr (segment))
T_153: (in 0x0000 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in bx_101 + 0x0000 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in Mem186[0x6000:bx_101 + 0x0000:word16] : word16)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: word16
T_156: (in 0x0100 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in bx_101 + 0x0100 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem187[0x6000:bx_101 + 0x0100:word16] : word16)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: word16
T_159: (in bl_189 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in 0x01 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in bl_102 + 0x01 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_162: (in 0x0001 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in bp_174 + 0x0001 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: word16
T_164: (in 0x01 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in bl_189 + 0x01 : byte)
  Class: Eq_82
  DataType: int8
  OrigDataType: byte
T_166: (in bl_189 + 0x01 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in DPB(bx_101, bl_189 + 0x01, 0, 8) : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_168: (in 0x01 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_169: (in bl_189 != 0x01 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in 0x01 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in bh_103 + 0x01 : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: byte
T_172: (in 0x0080 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in bp_174 + 0x0080 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: word16
T_174: (in DPB(bx_101, bh_103, 8, 8) : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_175: (in 0x00 : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: byte
T_176: (in bh_103 != 0x00 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in __inb : ptr32)
  Class: Eq_177
  DataType: (ptr Eq_177)
  OrigDataType: (ptr (fn T_179 (T_178)))
T_178: (in 0x03DA : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in __inb(0x03DA) : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in 0x08 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in 0x00 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_183: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_183
  DataType: bool
  OrigDataType: bool
T_184: (in __inb : ptr32)
  Class: Eq_184
  DataType: (ptr Eq_184)
  OrigDataType: (ptr (fn T_186 (T_185)))
T_185: (in 0x03DA : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in __inb(0x03DA) : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in 0x08 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in 0x00 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_190: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in cx_223 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in 0x0000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in bx_101 + 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem187[0x6000:bx_101 + 0x0000:byte] : byte)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: byte
T_195: (in DPB(cx_11, Mem187[0x6000:bx_101 + 0x0000:byte], 8, 8) : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in DPB(cx_11, Mem187[0x6000:bx_101 + 0x0000:byte], 8, 8) + bx_101 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_197: (in ch_225 : int8)
  Class: Eq_197
  DataType: int8
  OrigDataType: int8
T_198: (in SLICE(cx_223, byte, 8) : byte)
  Class: Eq_197
  DataType: int8
  OrigDataType: byte
T_199: (in cl_226 : int8)
  Class: Eq_199
  DataType: int8
  OrigDataType: int8
T_200: (in (byte) cx_223 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in (byte) cx_223 + ch_225 : byte)
  Class: Eq_199
  DataType: int8
  OrigDataType: byte
T_202: (in cl_238 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in cl_226 *s cl_226 : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: int16
T_204: (in SLICE(cl_226 *s cl_226, byte, 8) : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in ch_225 *s ch_225 : int16)
  Class: Eq_205
  DataType: int16
  OrigDataType: int16
T_206: (in SLICE(ch_225 *s ch_225, byte, 8) : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in SLICE(cl_226 *s cl_226, byte, 8) + SLICE(ch_225 *s ch_225, byte, 8) : byte)
  Class: Eq_207
  DataType: uint8
  OrigDataType: uint8
T_208: (in 0x02 : byte)
  Class: Eq_208
  DataType: uint8
  OrigDataType: uint8
T_209: (in SLICE(cl_226 *s cl_226, byte, 8) + SLICE(ch_225 *s ch_225, byte, 8) >>u 0x02 : word16)
  Class: Eq_209
  DataType: uint16
  OrigDataType: uint16
T_210: (in 0x0F : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in SLICE(cl_226 *s cl_226, byte, 8) + SLICE(ch_225 *s ch_225, byte, 8) >>u 0x02 & 0x0F : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_212: (in 0x0404 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in bx_101 - 0x0404 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Mem187[0x6000:bx_101 - 0x0404:byte] : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in 0x0404 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in bx_101 + 0x0404 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem187[0x6000:bx_101 + 0x0404:byte] : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in Mem187[0x6000:bx_101 - 0x0404:byte] - Mem187[0x6000:bx_101 + 0x0404:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in (int16) (Mem187[0x6000:bx_101 - 0x0404:byte] - Mem187[0x6000:bx_101 + 0x0404:byte]) : int16)
  Class: Eq_219
  DataType: int16
  OrigDataType: int16
T_220: (in 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in (int16) (Mem187[0x6000:bx_101 - 0x0404:byte] - Mem187[0x6000:bx_101 + 0x0404:byte]) << 0x0001 : word16)
  Class: Eq_221
  DataType: ui16
  OrigDataType: ui16
T_222: (in 0x0080 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in ((int16) (Mem187[0x6000:bx_101 - 0x0404:byte] - Mem187[0x6000:bx_101 + 0x0404:byte]) << 0x0001) + 0x0080 : word16)
  Class: Eq_106
  DataType: int16
  OrigDataType: word16
T_224: (in DPB(cx_223, cl_238, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_225: (in al_245 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_226: (in (byte) ax_130 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_227: (in 0x0000 : word16)
  Class: Eq_106
  DataType: int16
  OrigDataType: int16
T_228: (in ax_130 >= 0x0000 : bool)
  Class: Eq_228
  DataType: bool
  OrigDataType: bool
T_229: (in 0xF0 : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_230: (in al_245 & 0xF0 : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_231: (in (al_245 & 0xF0) + cl_238 : byte)
  Class: Eq_231
  DataType: byte
  OrigDataType: byte
T_232: (in 0xA000 : selector)
  Class: Eq_232
  DataType: (ptr Eq_232)
  OrigDataType: (ptr (segment))
T_233: (in 0x0020 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in bx_101 + 0x0020 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in Mem256[0xA000:bx_101 + 0x0020:byte] : byte)
  Class: Eq_231
  DataType: byte
  OrigDataType: byte
T_236: (in 0x0001 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in bx_101 + 0x0001 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_238: (in (byte) bx_101 : byte)
  Class: Eq_82
  DataType: int8
  OrigDataType: byte
T_239: (in SLICE(bx_101, byte, 8) : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: byte
T_240: (in 0x0000 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: word16
T_241: (in bx_101 != 0x0000 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in 0x0000 : word16)
  Class: Eq_106
  DataType: int16
  OrigDataType: word16
T_243: (in 0x00 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_244: (in 0x0001 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in si_148 + 0x0001 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in 0x0001 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in &si_148->w0000 + 0x0001 : word16)
  Class: Eq_136
  DataType: (memptr (ptr Eq_73) Eq_136)
  OrigDataType: word16
T_248: (in __inb : ptr32)
  Class: Eq_248
  DataType: (ptr Eq_248)
  OrigDataType: (ptr (fn T_250 (T_249)))
T_249: (in 0x60 : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_250: (in __inb(0x60) : byte)
  Class: Eq_250
  DataType: byte
  OrigDataType: byte
T_251: (in 0x01 : byte)
  Class: Eq_250
  DataType: byte
  OrigDataType: byte
T_252: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_252
  DataType: bool
  OrigDataType: bool
T_253: (in 0x0080 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in si_148 + 0x0080 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in Mem145[0x8000:si_148 + 0x0080:byte] : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_256: (in DPB(ax_130, (0x8000->*si_148).b0080, 0, 8) : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_257: (in 0x0000 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in si_148 + 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in Mem145[0x8000:si_148 + 0x0000:word16] : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_260: (in 0x9CC0 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: word16
T_261:
  Class: Eq_261
  DataType: Eq_261
  OrigDataType: 
T_262:
  Class: Eq_262
  DataType: Eq_262
  OrigDataType: 
T_263:
  Class: Eq_263
  DataType: Eq_263
  OrigDataType: 
T_264:
  Class: Eq_264
  DataType: Eq_264
  OrigDataType: 
T_265:
  Class: Eq_265
  DataType: Eq_265
  OrigDataType: 
T_266:
  Class: Eq_266
  DataType: Eq_266
  OrigDataType: 
T_267:
  Class: Eq_267
  DataType: Eq_267
  OrigDataType: 
*/
typedef Eq_73 Eq_1Eq_232 Eq_1Eq_152 Eq_1Eq_114 Eq_1struct Globals {
	Eq_73 * ptrFFF80000;	// FFF80000
	Eq_232 * ptrFFFA0000;	// FFFA0000
	Eq_152 * ptr60000;	// 60000
	Eq_114 * ptr70000;	// 70000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, word16);

typedef void (Eq_17)(word16, int8);

typedef union Eq_21 {
	uint16 u0;
	Eq_261 Eq_73::* u1;
	Eq_262 Eq_114::* u2;
	Eq_263 Eq_152::* u3;
	Eq_264 Eq_232::* u4;
} Eq_21;

typedef int8 (Eq_30)(byte, byte);

typedef Eq_136 Eq_73struct Eq_73 {
	Eq_136 t0000;	// 0
} Eq_73;

typedef struct Eq_91 {
} Eq_91;

typedef union Eq_92 {
	Eq_265 Eq_91::* u0;
	Eq_267 u1;
} Eq_92;

typedef union Eq_113 {
	ui16 u0;
	byte u1;
} Eq_113;

typedef struct Eq_114 {
	byte bFFFF9CC0;	// FFFF9CC0
	byte b9CC0;	// 9CC0
} Eq_114;

typedef struct Eq_136 {
	word16 w0000;	// 0
	byte b0080;	// 80
} Eq_136;

typedef union Eq_149 {
	byte u0;
	word16 u1;
} Eq_149;

typedef struct Eq_152 {
} Eq_152;

typedef byte (Eq_177)(word16);

typedef byte (Eq_184)(word16);

typedef struct Eq_232 {
} Eq_232;

typedef byte (Eq_248)(byte);

typedef struct Eq_261 {	// size: 1 1
	int16 w0000;	// 0
} Eq_261;

typedef Eq_113 Eq_262struct Eq_262 {	// size: 1 1
	Eq_113 t0000;	// 0
} Eq_262;

typedef Eq_149 Eq_263Eq_149 Eq_263struct Eq_263 {	// size: 1 1
	byte bFFFFFBFC;	// FFFFFBFC
	Eq_149 t0000;	// 0
	Eq_149 t0100;	// 100
	byte b0404;	// 404
} Eq_263;

typedef struct Eq_264 {	// size: 1 1
	byte b0020;	// 20
} Eq_264;

typedef struct Eq_265 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_265;

typedef struct Eq_266 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_266;

typedef union Eq_267 {
	ptr16 u0;
	Eq_266 Eq_91::* u1;
} Eq_267;

