// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_244/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_194) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_261 (in bios_video_set_mode : ptr32)
Eq_14: (fn void (word16, uint8))
	T_14 (in __outb : ptr32)
Eq_17: (union "Eq_17" (uint8 u0) (uint16 u1))
	T_17 (in al_17 : Eq_17)
	T_19 (in cl_13 >>u 0x01 : word16)
Eq_20: (fn void (word16, Eq_17))
	T_20 (in __outb : ptr32)
Eq_29: (fn void (word16, ui8))
	T_29 (in __outb : ptr32)
Eq_32: (union "Eq_32" (byte u0) (word16 u1))
	T_32 (in al_24 : Eq_32)
	T_38 (in al_20 * 0x02 + (ax_18 >>u 0x0007 <u 0x0000) : word16)
Eq_39: (fn void (word16, Eq_32))
	T_39 (in __outb : ptr32)
Eq_52: (segment "Eq_52" (FFFFF9E0 word16 wFFFFF9E0) (0 byte b0000) (13E word16 w013E) (13F byte b013F) (15F word16 w015F) (160 int8 b0160) (17C word16 w017C) (18D int8 b018D) (18E int8 b018E) (1EC word16 w01EC) (1FE word16 w01FE) (F9E0 word16 wF9E0))
	T_52 (in ds : (ptr Eq_52))
	T_222 (in ds : (ptr Eq_52))
Eq_72: (union "Eq_72" (uint8 u0) (uint16 u1))
	T_72 (in cl_119 : Eq_72)
	T_73 (in 0x0C : byte)
	T_118 (in cl_191 >>u 0x01 : word16)
	T_130 (in (byte) cx_148 : byte)
Eq_82: (struct "Eq_82" 000A (0 byte b0000))
	T_82 (in 0x0000 : word16)
Eq_85: (union "Eq_85" (int8 u0) (int16 u1) (uint16 u2))
	T_85 (in bh_168 : Eq_85)
	T_87 (in bh_168 + 0x01 : byte)
	T_91 (in ch_146 >>u 0x01 : word16)
	T_150 (in -(ch_146 >>u 0x01) : byte)
Eq_102: (fn uint8 (Eq_72, byte))
	T_102 (in __xadd : ptr32)
Eq_105: (union "Eq_105" (int32 u0) (uint32 u1))
	T_105 (in SEQ(SEQ(dx_181, si_165) % cl_119, si_165) : int32)
Eq_113: (union "Eq_113" (int16 u0) (uint16 u1))
	T_113 (in cl_191 >>u 0x01 : word16)
Eq_144: (fn uint8 (uint8, byte))
	T_144 (in __xadd : ptr32)
Eq_145: (union "Eq_145" (int32 u0) (uint32 u1))
	T_145 (in SEQ(dx_142, dx_139) : int32)
Eq_149: (union "Eq_149" (int16 u0) (uint16 u1))
	T_149 (in ch_146 >>u 0x01 : word16)
Eq_176: (fn byte (word16))
	T_176 (in __inb : ptr32)
Eq_183: (union "Eq_183" (cups16 u0) ((memptr (ptr Eq_194) word16) u1))
	T_183 (in di_253 : Eq_183)
	T_184 (in 0xF9E0 : word16)
	T_188 (in di_253 - 0x0040 : word16)
	T_189 (in 0x0000 : word16)
	T_204 (in di_253 + 0x0002 : word16)
Eq_194: (segment "Eq_194")
	T_194 (in 0xA000 : selector)
Eq_217: (fn byte ((memptr (ptr Eq_52) int8), uint8, Eq_221, (ptr Eq_52)))
	T_217 (in fn0C00_01E7 : ptr32)
	T_218 (in signature of fn0C00_01E7 : void)
	T_238 (in fn0C00_01E7 : ptr32)
	T_264 (in fn0C00_01E7 : ptr32)
Eq_221: (union "Eq_221" (int16 u0) (byte u1))
	T_221 (in ah : Eq_221)
	T_226 (in ah_281 >> 0x02 : word16)
	T_243 (in SLICE(ax_297, byte, 8) >> 0x05 : word16)
	T_267 (in 0x00 : byte)
Eq_248: (fn byte (byte))
	T_248 (in __inb : ptr32)
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
T_7: (in cx : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_10: (in cl_13 : uint8)
  Class: Eq_10
  DataType: uint8
  OrigDataType: uint8
T_11: (in (byte) cx : byte)
  Class: Eq_10
  DataType: uint8
  OrigDataType: byte
T_12: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_13: (in cx != 0x0000 : bool)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 (T_15, T_10)))
T_15: (in 0x03C8 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in __outb(0x03C8, cl_13) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in al_17 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: uint8
T_18: (in 0x01 : byte)
  Class: Eq_18
  DataType: uint8
  OrigDataType: uint8
T_19: (in cl_13 >>u 0x01 : word16)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: uint16
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_17)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_17) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in ax_18 : uint16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_24: (in al_17 *u al_17 : uint16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_25: (in al_20 : ui8)
  Class: Eq_25
  DataType: ui8
  OrigDataType: ui8
T_26: (in 0x0007 : word16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in ax_18 >>u 0x0007 : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_28: (in (byte) (ax_18 >>u 0x0007) : byte)
  Class: Eq_25
  DataType: ui8
  OrigDataType: byte
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_31 (T_30, T_25)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in __outb(0x03C9, al_20) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in al_24 : Eq_32)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: byte
T_33: (in 0x02 : byte)
  Class: Eq_33
  DataType: ui8
  OrigDataType: ui8
T_34: (in al_20 * 0x02 : byte)
  Class: Eq_34
  DataType: ui8
  OrigDataType: ui8
T_35: (in ax_18 >>u 0x0007 : word16)
  Class: Eq_35
  DataType: uint16
  OrigDataType: uint16
T_36: (in 0x0000 : word16)
  Class: Eq_35
  DataType: uint16
  OrigDataType: cups16
T_37: (in ax_18 >>u 0x0007 <u 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in al_20 * 0x02 + (ax_18 >>u 0x0007 <u 0x0000) : word16)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: word16
T_39: (in __outb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_41 (T_40, T_32)))
T_40: (in 0x03C9 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in __outb(0x03C9, al_24) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_44: (in ax_104 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in ax_18 >>u 0x0007 : word16)
  Class: Eq_45
  DataType: uint16
  OrigDataType: uint16
T_46: (in DPB(ax_18 >>u 0x0007, al_24, 0, 8) : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_47: (in (byte) cx : byte)
  Class: Eq_10
  DataType: uint8
  OrigDataType: byte
T_48: (in ch_261 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_51: (in cx != 0x0000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in ds : (ptr Eq_52))
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (segment (13E T_212 t013E) (13F T_63 t013F) (15F T_235 t015F) (160 T_160 t0160) (17C T_170 t017C) (18E T_115 t018E)))
T_53: (in bx_79 : (memptr (ptr Eq_52) byte))
  Class: Eq_53
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: (memptr T_52 (struct 0001 (0 T_56 t0000)))
T_54: (in 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in bx_79 + 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem81[ds:bx_79 + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bx_79 + 0x0001 : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: word16
T_60: (in bx_79 != &Eq_52::b0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in dx_ax_111 : int32)
  Class: Eq_61
  DataType: int32
  OrigDataType: int32
T_62: (in 0x013F : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: (memptr T_52 (struct (0 T_63 t0000)))
T_63: (in Mem81[ds:0x013F:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in DPB(ax_104, ds->b013F, 0, 8) : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in (int32) DPB(ax_104, ds->b013F, 0, 8) : int32)
  Class: Eq_61
  DataType: int32
  OrigDataType: int32
T_66: (in bl_107 : int8)
  Class: Eq_66
  DataType: int8
  OrigDataType: int8
T_67: (in 0xE2 : byte)
  Class: Eq_66
  DataType: int8
  OrigDataType: byte
T_68: (in dx_113 : uint16)
  Class: Eq_68
  DataType: uint16
  OrigDataType: word16
T_69: (in SLICE(dx_ax_111, word16, 16) : word16)
  Class: Eq_68
  DataType: uint16
  OrigDataType: word16
T_70: (in cx_118 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0C0C : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_72: (in cl_119 : Eq_72)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_73: (in 0x0C : byte)
  Class: Eq_72
  DataType: uint8
  OrigDataType: byte
T_74: (in ch_120 : uint8)
  Class: Eq_74
  DataType: uint8
  OrigDataType: uint8
T_75: (in 0x0C : byte)
  Class: Eq_74
  DataType: uint8
  OrigDataType: byte
T_76: (in di_121 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_77: (in (byte) dx_ax_111 : byte)
  Class: Eq_77
  DataType: int8
  OrigDataType: int8
T_78: (in 0xE2 : byte)
  Class: Eq_78
  DataType: int8
  OrigDataType: int8
T_79: (in (byte) dx_ax_111 *s 0xE2 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_80: (in ah_199 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in bx_169 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_52) Eq_82)
  OrigDataType: (memptr T_52 (struct 000A (0 T_84 t0000)))
T_83: (in bx_169 + 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem207[ds:bx_169 + 0x0000:byte] : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_85: (in bh_168 : Eq_85)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: int8
T_86: (in 0x01 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in bh_168 + 0x01 : byte)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: byte
T_88: (in DPB(bx_169, bh_168, 8, 8) : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_89: (in ch_146 : uint8)
  Class: Eq_89
  DataType: uint8
  OrigDataType: uint8
T_90: (in 0x01 : byte)
  Class: Eq_90
  DataType: uint8
  OrigDataType: uint8
T_91: (in ch_146 >>u 0x01 : word16)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: (union (int8 u0) (int16 u1) (uint16 u2))
T_92: (in bh_168 < ch_146 >>u 0x01 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in cl_191 : uint8)
  Class: Eq_93
  DataType: uint8
  OrigDataType: uint8
T_94: (in 0x01 : byte)
  Class: Eq_94
  DataType: uint8
  OrigDataType: uint8
T_95: (in cl_191 >>u 0x01 : word16)
  Class: Eq_95
  DataType: uint16
  OrigDataType: uint16
T_96: (in ah_199 & cl_191 >>u 0x01 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_97: (in dx_181 : int16)
  Class: Eq_97
  DataType: int16
  OrigDataType: word16
T_98: (in (int16) bh_168 : int16)
  Class: Eq_97
  DataType: int16
  OrigDataType: int16
T_99: (in si_165 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in si_165 - dx_181 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in si_165 - dx_181 - dx_181 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_102: (in __xadd : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_108 (T_72, T_107)))
T_103: (in SEQ(dx_181, si_165) : int32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_104: (in SEQ(dx_181, si_165) % cl_119 : uint16)
  Class: Eq_104
  DataType: uint16
  OrigDataType: uint16
T_105: (in SEQ(SEQ(dx_181, si_165) % cl_119, si_165) : int32)
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: (union (int32 u0) (uint32 u1))
T_106: (in SEQ(SEQ(dx_181, si_165) % cl_119, si_165) /u cl_119 : uint16)
  Class: Eq_106
  DataType: uint16
  OrigDataType: uint16
T_107: (in (byte) (SEQ(SEQ(dx_181, si_165) % cl_119, si_165) /u cl_119) : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in __xadd(cl_119, (byte) (SEQ(SEQ(dx_181, si_165) % cl_119, si_165) /u cl_119)) : byte)
  Class: Eq_93
  DataType: uint8
  OrigDataType: byte
T_109: (in di_171 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in 0x0019 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in di_171 + 0x0019 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_112: (in ax_196 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in cl_191 >>u 0x01 : word16)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: (union (int16 u0) (uint16 u1))
T_114: (in 0x018E : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: (memptr T_52 (struct (0 T_115 t0000)))
T_115: (in Mem81[ds:0x018E:byte] : byte)
  Class: Eq_115
  DataType: int8
  OrigDataType: int8
T_116: (in (cl_191 >>u 0x01) *s ds->b018E : int16)
  Class: Eq_116
  DataType: int16
  OrigDataType: int16
T_117: (in (cl_191 >>u 0x01) *s ds->b018E + di_171 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_118: (in cl_191 >>u 0x01 : word16)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: uint16
T_119: (in 0x0003 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in ax_196 << 0x0003 : word16)
  Class: Eq_120
  DataType: ui16
  OrigDataType: ui16
T_121: (in SLICE(ax_196 << 0x0003, byte, 8) : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_122: (in ax_196 << 0x0003 : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: uint16
T_123: (in 0x0000 : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: cups16
T_124: (in ax_196 << 0x0003 >=u 0x0000 : bool)
  Class: Eq_124
  DataType: bool
  OrigDataType: bool
T_125: (in di_138 : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_126: (in si_320 : (memptr (ptr Eq_52) word16))
  Class: Eq_126
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: (memptr T_52 (struct (0 T_166 t0000)))
T_127: (in si_106 : (memptr (ptr Eq_52) word16))
  Class: Eq_126
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: word16
T_128: (in dx_142 : uint16)
  Class: Eq_68
  DataType: uint16
  OrigDataType: word16
T_129: (in cx_148 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_130: (in (byte) cx_148 : byte)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: byte
T_131: (in SLICE(cx_148, byte, 8) : byte)
  Class: Eq_74
  DataType: uint8
  OrigDataType: byte
T_132: (in bx_135 : int16)
  Class: Eq_132
  DataType: int16
  OrigDataType: word16
T_133: (in 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in bx_135 + 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in (byte) (bx_135 + 0x0001) : byte)
  Class: Eq_66
  DataType: int8
  OrigDataType: byte
T_136: (in 0x1E : byte)
  Class: Eq_66
  DataType: int8
  OrigDataType: int8
T_137: (in bl_107 < 0x1E : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in (int16) bl_107 : int16)
  Class: Eq_132
  DataType: int16
  OrigDataType: int16
T_139: (in dx_139 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in dx_113 - bx_135 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in dx_113 - bx_135 - bx_135 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_142: (in SEQ(dx_139, dx_139) : int32)
  Class: Eq_142
  DataType: int32
  OrigDataType: int32
T_143: (in SEQ(dx_139, dx_139) % ch_120 : uint16)
  Class: Eq_68
  DataType: uint16
  OrigDataType: uint16
T_144: (in __xadd : ptr32)
  Class: Eq_144
  DataType: (ptr Eq_144)
  OrigDataType: (ptr (fn T_148 (T_74, T_147)))
T_145: (in SEQ(dx_142, dx_139) : int32)
  Class: Eq_145
  DataType: Eq_145
  OrigDataType: (union (int32 u0) (uint32 u1))
T_146: (in SEQ(dx_142, dx_139) /u ch_120 : uint16)
  Class: Eq_146
  DataType: uint16
  OrigDataType: uint16
T_147: (in (byte) (SEQ(dx_142, dx_139) /u ch_120) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in __xadd(ch_120, (byte) (SEQ(dx_142, dx_139) /u ch_120)) : byte)
  Class: Eq_89
  DataType: uint8
  OrigDataType: byte
T_149: (in ch_146 >>u 0x01 : word16)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: (union (int16 u0) (uint16 u1))
T_150: (in -(ch_146 >>u 0x01) : byte)
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: int16
T_151: (in 0xFFF6 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in di_121 + 0xFFF6 : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_153: (in ch_146 >>u 0x01 : word16)
  Class: Eq_153
  DataType: uint16
  OrigDataType: uint16
T_154: (in DPB(cx_118, ch_146 >>u 0x01, 8, 8) : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_156: (in DPB(bx_135, bh_168, 8, 8) : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in 0x9660 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in DPB(bx_135, bh_168, 8, 8) + 0x9660 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0160 : word16)
  Class: Eq_159
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: (memptr T_52 (struct (0 T_160 t0000)))
T_160: (in Mem81[ds:0x0160:byte] : byte)
  Class: Eq_160
  DataType: int8
  OrigDataType: int8
T_161: (in bh_168 *s ds->b0160 : int16)
  Class: Eq_161
  DataType: int16
  OrigDataType: int16
T_162: (in di_138 + bh_168 *s ds->b0160 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_163: (in ax_235 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in 0x0000 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in si_320 + 0x0000 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in Mem207[ds:si_320 + 0x0000:word16] : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_167: (in 0x0CCE : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in ax_235 + 0x0CCE : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in 0x017C : word16)
  Class: Eq_169
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: (memptr T_52 (struct (0 T_170 t0000)))
T_170: (in Mem244[ds:0x017C:word16] : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0002 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in si_320 + 0x0002 : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: word16
T_173: (in ax_235 + 0x0CCE : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_174: (in 0x01EC : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: word16
T_175: (in si_106 != &Eq_52::w01EC : bool)
  Class: Eq_175
  DataType: bool
  OrigDataType: bool
T_176: (in __inb : ptr32)
  Class: Eq_176
  DataType: (ptr Eq_176)
  OrigDataType: (ptr (fn T_178 (T_177)))
T_177: (in 0x03DA : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in __inb(0x03DA) : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in 0x08 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_180: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in 0x00 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_182: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_182
  DataType: bool
  OrigDataType: bool
T_183: (in di_253 : Eq_183)
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: (union (cups16 u0) ((memptr T_194 (struct 0002 (0 T_197 t0000))) u1))
T_184: (in 0xF9E0 : word16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: word16
T_185: (in si_254 : (memptr (ptr Eq_52) word16))
  Class: Eq_185
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: (memptr T_52 (struct 0002 (0 T_193 t0000)))
T_186: (in 0xF9E0 : word16)
  Class: Eq_185
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: word16
T_187: (in 0x0040 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in di_253 - 0x0040 : word16)
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: word16
T_189: (in 0x0000 : word16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: cups16
T_190: (in di_253 >=u 0x0000 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in 0x0000 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in si_254 + 0x0000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in Mem244[ds:si_254 + 0x0000:word16] : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in 0xA000 : selector)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (segment))
T_195: (in 0x0000 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in di_253 + 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in Mem268[0xA000:di_253 + 0x0000:word16] : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_198: (in cx_259 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in 0x0001 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in cx_259 - 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_201: (in 0x0002 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in si_254 + 0x0002 : word16)
  Class: Eq_185
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: word16
T_203: (in 0x0002 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in di_253 + 0x0002 : word16)
  Class: Eq_183
  DataType: Eq_183
  OrigDataType: word16
T_205: (in SLICE(cx_259, byte, 8) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_206: (in 0x0000 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_207: (in cx_259 == 0x0000 : bool)
  Class: Eq_207
  DataType: bool
  OrigDataType: bool
T_208: (in 0x0080 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_209: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_210: (in ax_280 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in 0x013E : word16)
  Class: Eq_211
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: (memptr T_52 (struct (0 T_212 t0000)))
T_212: (in Mem244[ds:0x013E:word16] : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_213: (in ah_281 : int8)
  Class: Eq_213
  DataType: int8
  OrigDataType: int8
T_214: (in SLICE(ax_280, byte, 8) : byte)
  Class: Eq_213
  DataType: int8
  OrigDataType: byte
T_215: (in 0x03DA : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in DPB(0x03DA, ah_281, 0, 8) : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in fn0C00_01E7 : ptr32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: (ptr (fn T_227 (T_223, T_224, T_226, T_52)))
T_218: (in signature of fn0C00_01E7 : void)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: 
T_219: (in bx : (memptr (ptr Eq_52) int8))
  Class: Eq_219
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: (memptr T_222 (struct (0 T_272 t0000)))
T_220: (in cl : uint8)
  Class: Eq_220
  DataType: uint8
  OrigDataType: uint8
T_221: (in ah : Eq_221)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: byte
T_222: (in ds : (ptr Eq_52))
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (segment))
T_223: (in 0x018E : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: word16
T_224: (in 0x05 : byte)
  Class: Eq_220
  DataType: uint8
  OrigDataType: byte
T_225: (in 0x02 : byte)
  Class: Eq_225
  DataType: uint8
  OrigDataType: uint8
T_226: (in ah_281 >> 0x02 : word16)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: int16
T_227: (in fn0C00_01E7(&Eq_52::b018E, 0x05, ah_281 >> 0x02, ds) : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in DPB(ax_280, fn0C00_01E7(&Eq_52::b018E, 0x05, ah_281 >> 0x02, ds), 0, 8) : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in DPB(0x03DA, ah_281, 0, 8) - DPB(ax_280, fn0C00_01E7(&Eq_52::b018E, 0x05, ah_281 >> 0x02, ds), 0, 8) : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in (byte) (DPB(0x03DA, ah_281, 0, 8) - DPB(ax_280, fn0C00_01E7(&Eq_52::b018E, 0x05, ah_281 >> 0x02, ds), 0, 8)) : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_231: (in 0x013F : word16)
  Class: Eq_231
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: (memptr T_52 (struct (0 T_232 t0000)))
T_232: (in Mem293[ds:0x013F:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_233: (in ax_297 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in 0x015F : word16)
  Class: Eq_234
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: (memptr T_52 (struct (0 T_235 t0000)))
T_235: (in Mem293[ds:0x015F:word16] : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_236: (in 0x0160 : word16)
  Class: Eq_236
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: (memptr T_52 (struct (0 T_160 t0000)))
T_237: (in Mem293[ds:0x0160:byte] : byte)
  Class: Eq_160
  DataType: int8
  OrigDataType: byte
T_238: (in fn0C00_01E7 : ptr32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: (ptr (fn T_244 (T_239, T_240, T_243, T_52)))
T_239: (in 0x018D : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: word16
T_240: (in 0x05 : byte)
  Class: Eq_220
  DataType: uint8
  OrigDataType: byte
T_241: (in SLICE(ax_297, byte, 8) : byte)
  Class: Eq_241
  DataType: int8
  OrigDataType: int8
T_242: (in 0x05 : byte)
  Class: Eq_242
  DataType: uint8
  OrigDataType: uint8
T_243: (in SLICE(ax_297, byte, 8) >> 0x05 : word16)
  Class: Eq_221
  DataType: Eq_221
  OrigDataType: int16
T_244: (in fn0C00_01E7(&Eq_52::b018D, 0x05, SLICE(ax_297, byte, 8) >> 0x05, ds) : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_245: (in ds->b0160 - fn0C00_01E7(&Eq_52::b018D, 0x05, SLICE(ax_297, byte, 8) >> 0x05, ds) : byte)
  Class: Eq_160
  DataType: int8
  OrigDataType: byte
T_246: (in Mem303[ds:0x0160:byte] : byte)
  Class: Eq_160
  DataType: int8
  OrigDataType: byte
T_247: (in al_305 : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in __inb : ptr32)
  Class: Eq_248
  DataType: (ptr Eq_248)
  OrigDataType: (ptr (fn T_250 (T_249)))
T_249: (in 0x60 : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_250: (in __inb(0x60) : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_251: (in 0x018D : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in bx : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_253: (in 0x01 : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_254: (in al_305 - 0x01 : byte)
  Class: Eq_254
  DataType: byte
  OrigDataType: byte
T_255: (in DPB(ax_297, al_305 - 0x01, 0, 8) : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_256: (in 0x01 : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_257: (in al_305 != 0x01 : bool)
  Class: Eq_257
  DataType: bool
  OrigDataType: bool
T_258: (in 0x01FE : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_52) word16)
  OrigDataType: word16
T_259: (in 0x03 : byte)
  Class: Eq_259
  DataType: byte
  OrigDataType: byte
T_260: (in DPB(bx, 0x03, 8, 8) : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: word16
T_261: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_263 (T_262)))
T_262: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_263: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_264: (in fn0C00_01E7 : ptr32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: (ptr (fn T_268 (T_265, T_266, T_267, T_52)))
T_265: (in 0x018D : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_52) int8)
  OrigDataType: word16
T_266: (in 0x05 : byte)
  Class: Eq_220
  DataType: uint8
  OrigDataType: byte
T_267: (in 0x00 : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_268: (in fn0C00_01E7(&Eq_52::b018D, 0x05, 0x00, ds) : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_269: (in al : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in bx + 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in Mem0[ds:bx + 0x0000:byte] : byte)
  Class: Eq_272
  DataType: int8
  OrigDataType: byte
T_273: (in ds->*bx + ah : byte)
  Class: Eq_272
  DataType: int8
  OrigDataType: byte
T_274: (in 0x0000 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in bx + 0x0000 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in Mem7[ds:bx + 0x0000:byte] : byte)
  Class: Eq_272
  DataType: int8
  OrigDataType: byte
T_277: (in 0x0000 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in bx + 0x0000 : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in Mem7[ds:bx + 0x0000:byte] : byte)
  Class: Eq_272
  DataType: int8
  OrigDataType: int8
T_280: (in ds->*bx >> cl : word16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
*/
typedef Eq_194 Eq_1struct Globals {
	Eq_194 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_14)(word16, uint8);

typedef union Eq_17 {
	uint8 u0;
	uint16 u1;
} Eq_17;

typedef void (Eq_20)(word16, Eq_17);

typedef void (Eq_29)(word16, ui8);

typedef union Eq_32 {
	byte u0;
	word16 u1;
} Eq_32;

typedef void (Eq_39)(word16, Eq_32);

typedef struct Eq_52 {
	word16 wFFFFF9E0;	// FFFFF9E0
	byte b0000;	// 0
	word16 w013E;	// 13E
	byte b013F;	// 13F
	word16 w015F;	// 15F
	int8 b0160;	// 160
	word16 w017C;	// 17C
	int8 b018D;	// 18D
	int8 b018E;	// 18E
	word16 w01EC;	// 1EC
	word16 w01FE;	// 1FE
	word16 wF9E0;	// F9E0
} Eq_52;

typedef union Eq_72 {
	uint8 u0;
	uint16 u1;
} Eq_72;

typedef struct Eq_82 {	// size: 10 A
	byte b0000;	// 0
} Eq_82;

typedef union Eq_85 {
	int8 u0;
	int16 u1;
	uint16 u2;
} Eq_85;

typedef uint8 (Eq_102)(Eq_72, byte);

typedef union Eq_105 {
	int32 u0;
	uint32 u1;
} Eq_105;

typedef union Eq_113 {
	int16 u0;
	uint16 u1;
} Eq_113;

typedef uint8 (Eq_144)(uint8, byte);

typedef union Eq_145 {
	int32 u0;
	uint32 u1;
} Eq_145;

typedef union Eq_149 {
	int16 u0;
	uint16 u1;
} Eq_149;

typedef byte (Eq_176)(word16);

typedef union Eq_183 {
	cups16 u0;
	word16 Eq_194::* u1;
} Eq_183;

typedef struct Eq_194 {
} Eq_194;

typedef byte (Eq_217)(int8 Eq_52::*, uint8, Eq_221, Eq_52 *);

typedef union Eq_221 {
	int16 u0;
	byte u1;
} Eq_221;

typedef byte (Eq_248)(byte);

