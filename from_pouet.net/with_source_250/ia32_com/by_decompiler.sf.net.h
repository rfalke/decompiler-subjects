// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_250/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_155) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8" (1000 (arr byte 1) a1000) (2000 (arr byte 1) a2000))
	T_8 (in cs : selector)
Eq_12: (union "Eq_12" (int8 u0) (ui16 u1))
	T_12 (in al_61 : Eq_12)
	T_14 (in al_228 << 0x02 : word16)
Eq_76: (union "Eq_76" (int16 u0) (cups16 u1))
	T_76 (in ax_167 : Eq_76)
	T_125 (in SEQ(SEQ(0x0000, ax_159 + 0x1900) % cx_131, ax_159 + 0x1900) / cx_131 : int16)
	T_130 (in 0x00C7 : word16)
Eq_99: (segment "Eq_99" (0 byte b0000) (140 byte b0140))
	T_99 (in ss : selector)
Eq_137: (fn int16 (word16))
	T_137 (in fn0C00_01E8 : ptr32)
	T_138 (in signature of fn0C00_01E8 : void)
	T_145 (in fn0C00_01E8 : ptr32)
Eq_155: (segment "Eq_155" (0 (arr Eq_234) a0000) (1C2 word16 w01C2) (1C6 word16 w01C6) (3E8 (arr Eq_232) a03E8))
	T_155 (in ds : (ptr Eq_155))
	T_187 (in 0xA000 : selector)
Eq_174: (struct "Eq_174" 0001 (0 Eq_179 t0000) (3E8 Eq_179 t03E8))
	T_174 (in di_204 : (memptr (ptr Eq_155) Eq_174))
	T_175 (in 0x0000 : word16)
	T_194 (in di_204 + 0x0001 : word16)
Eq_179: (union "Eq_179" (byte u0) (word16 u1))
	T_179 (in v34_216 : Eq_179)
	T_182 (in Mem129[ds:di_204 + 0x03E8:byte] : byte)
	T_183 (in 0x00 : byte)
	T_186 (in Mem217[ds:di_204 + 0x03E8:byte] : byte)
	T_190 (in Mem221[0xA000:di_204 + 0x0000:byte] : byte)
Eq_200: (fn byte (byte))
	T_200 (in __inb : ptr32)
Eq_232: (struct "Eq_232" 0001 (0 Eq_179 t0000))
	T_232
	T_233
Eq_234: (struct "Eq_234" 0001 (0 Eq_179 t0000))
	T_234
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
T_7: (in al_228 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in cs : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in 0x2000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in cs + 0x2000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in (byte) &cs->a2000[0] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_12: (in al_61 : Eq_12)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: int8
T_13: (in 0x02 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in al_228 << 0x02 : word16)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: ui16
T_15: (in bh_60 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in di_54 : word16)
  Class: Eq_16
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: (memptr T_26 (struct 0001 (0 T_24 t0000)))
T_17: (in SLICE(di_54, byte, 8) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_18: (in 0x02 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in bh_60 << 0x02 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: int16
T_20: (in bh_60 << 0x02 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in (bh_60 << 0x02) *s (bh_60 << 0x02) : int16)
  Class: Eq_21
  DataType: int16
  OrigDataType: int16
T_22: (in al_61 *s al_61 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in (bh_60 << 0x02) *s (bh_60 << 0x02) + al_61 *s al_61 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in SLICE((bh_60 << 0x02) *s (bh_60 << 0x02) + al_61 *s al_61, byte, 8) : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x1000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cs + 0x1000 : word16)
  Class: Eq_26
  DataType: (ptr (arr byte 1))
  OrigDataType: (ptr (struct (0 (arr T_230 1) a0000)))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_54 + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem70[cs + 0x1000:di_54 + 0x0000:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_30: (in bx_71 : (memptr word16 byte))
  Class: Eq_30
  DataType: (memptr word16 byte)
  OrigDataType: (memptr T_34 (struct (0 T_37 t0000)))
T_31: (in 0xF8F8 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_54 & 0xF8F8 : word16)
  Class: Eq_30
  DataType: (memptr word16 byte)
  OrigDataType: word16
T_33: (in al_73 : int8)
  Class: Eq_33
  DataType: int8
  OrigDataType: int8
T_34: (in cs + 0x1000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bx_71 + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem70[cs + 0x1000:bx_71 + 0x0000:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in cs + 0x1000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_39: (in si : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bx_71 + si : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem70[cs + 0x1000:bx_71 + si:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_42: (in (cs + 0x1000)->*bx_71 + bx_71[si] : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: byte
T_43: (in ax_74 : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_44: (in al_73 *s al_73 : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_45: (in SLICE(ax_74, byte, 8) : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_46: (in cs + 0x2000 : word16)
  Class: Eq_26
  DataType: (ptr (arr byte 1))
  OrigDataType: (ptr (struct (0 (arr T_231 1) a0000)))
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di_54 + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem79[cs + 0x2000:di_54 + 0x0000:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_50: (in (byte) ax_74 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_54 + 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_16
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: word16
T_54: (in di_54 != 0x0000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in si + 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0040 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in si + 0x0001 + 0x0040 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_59: (in bp_201 : (memptr (ptr Eq_99) byte))
  Class: Eq_59
  DataType: (memptr (ptr Eq_99) byte)
  OrigDataType: (memptr T_99 (struct (0 T_101 t0000)))
T_60: (in 0x0140 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_99) byte)
  OrigDataType: word16
T_61: (in dx_122 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0xFFFF : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in dx_122 + 0xFFFF : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in SLICE(dx_122, byte, 8) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in dh_123 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in si_130 : ui16)
  Class: Eq_66
  DataType: ui16
  OrigDataType: word16
T_67: (in 0xFFFF : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in si_130 + 0xFFFF : word16)
  Class: Eq_66
  DataType: ui16
  OrigDataType: word16
T_69: (in ch_149 : bcu8)
  Class: Eq_69
  DataType: bcu8
  OrigDataType: bcu8
T_70: (in 0x02 : byte)
  Class: Eq_69
  DataType: bcu8
  OrigDataType: bcu8
T_71: (in ch_149 <u 0x02 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in al_168 : bcu8)
  Class: Eq_72
  DataType: bcu8
  OrigDataType: bcu8
T_73: (in bh_135 : bcu8)
  Class: Eq_72
  DataType: bcu8
  OrigDataType: bcu8
T_74: (in al_168 >=u bh_135 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in si_244 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in ax_167 : Eq_76)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: cups16
T_77: (in 0x0006 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in ax_167 << 0x0006 : word16)
  Class: Eq_78
  DataType: ui16
  OrigDataType: ui16
T_79: (in ah_169 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in DPB(ax_167, ah_169, 0, 8) : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in (ax_167 << 0x0006) + DPB(ax_167, ah_169, 0, 8) : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in 0x03E8 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in (ax_167 << 0x0006) + DPB(ax_167, ah_169, 0, 8) + 0x03E8 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_84: (in dl_245 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in bh_135 - al_168 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_86: (in bl_107 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in dh_171 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_88: (in bl_107 != dh_171 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in al_252 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in cs + 0x1000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in ax_152 : (memptr word16 uint8))
  Class: Eq_91
  DataType: (memptr word16 uint8)
  OrigDataType: (memptr T_90 (struct (0 T_94 t0000)))
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in ax_152 + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem129[cs + 0x1000:ax_152 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: uint8
  OrigDataType: uint8
T_95: (in 0x04 : byte)
  Class: Eq_95
  DataType: uint8
  OrigDataType: uint8
T_96: (in (cs + 0x1000)->*ax_152 >>u 0x04 : word16)
  Class: Eq_96
  DataType: uint16
  OrigDataType: uint16
T_97: (in 0x13 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in ((cs + 0x1000)->*ax_152 >>u 0x04) + 0x13 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_99: (in ss : selector)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (segment))
T_100: (in bp_201 + si_244 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem260[ss:bp_201 + si_244:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_102: (in 0x0140 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in si_244 + 0x0140 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_104: (in 0x01 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in dl_245 - 0x01 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_106: (in 0x00 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_107: (in dl_245 != 0x00 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in DPB(si_130, dh_123, 0, 8) : word16)
  Class: Eq_91
  DataType: (memptr word16 uint8)
  OrigDataType: word16
T_109: (in cx_131 : int16)
  Class: Eq_109
  DataType: int16
  OrigDataType: int16
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in cx_131 + 0x0001 : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: word16
T_112: (in ax_159 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in cs + 0x2000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_114: (in 0x0000 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in ax_152 + 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in Mem129[cs + 0x2000:ax_152 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: uint8
  OrigDataType: byte
T_117: (in DPB(ax_152, (cs + 0x2000)->*ax_152, 8, 8) : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in 0x1900 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in ax_159 + 0x1900 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in SEQ(0x0000, ax_159 + 0x1900) : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in SEQ(0x0000, ax_159 + 0x1900) % cx_131 : int16)
  Class: Eq_122
  DataType: int16
  OrigDataType: int16
T_123: (in ax_159 + 0x1900 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in SEQ(SEQ(0x0000, ax_159 + 0x1900) % cx_131, ax_159 + 0x1900) : word32)
  Class: Eq_124
  DataType: int32
  OrigDataType: int32
T_125: (in SEQ(SEQ(0x0000, ax_159 + 0x1900) % cx_131, ax_159 + 0x1900) / cx_131 : int16)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: int16
T_126: (in SLICE(ax_159, byte, 8) : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_127: (in SLICE(cx_131, byte, 8) : byte)
  Class: Eq_69
  DataType: bcu8
  OrigDataType: byte
T_128: (in (byte) ax_167 : byte)
  Class: Eq_72
  DataType: bcu8
  OrigDataType: byte
T_129: (in SLICE(ax_167, byte, 8) : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_130: (in 0x00C7 : word16)
  Class: Eq_76
  DataType: cups16
  OrigDataType: cups16
T_131: (in ax_167 >u 0x00C7 : bool)
  Class: Eq_131
  DataType: bool
  OrigDataType: bool
T_132: (in 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in bp_201 - 0x0001 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_99) byte)
  OrigDataType: word16
T_134: (in 0x0000 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_99) byte)
  OrigDataType: word16
T_135: (in bp_201 != &Eq_99::b0000 : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in ax_98 : int16)
  Class: Eq_136
  DataType: int16
  OrigDataType: int16
T_137: (in fn0C00_01E8 : ptr32)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: (ptr (fn T_140 (T_39)))
T_138: (in signature of fn0C00_01E8 : void)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: 
T_139: (in si : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_140: (in fn0C00_01E8(si) : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_141: (in si_102 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0000 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in si + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_144: (in ax_104 : int16)
  Class: Eq_136
  DataType: int16
  OrigDataType: int16
T_145: (in fn0C00_01E8 : ptr32)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: (ptr (fn T_146 (T_141)))
T_146: (in fn0C00_01E8(si_102) : word16)
  Class: Eq_136
  DataType: int16
  OrigDataType: word16
T_147: (in ax_109 : int16)
  Class: Eq_147
  DataType: int16
  OrigDataType: int16
T_148: (in 0x00A0 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in bp_201 - 0x00A0 : word16)
  Class: Eq_147
  DataType: int16
  OrigDataType: word16
T_150: (in ax_104 *s ax_109 : int32)
  Class: Eq_150
  DataType: int32
  OrigDataType: int32
T_151: (in (word16) (ax_104 *s ax_109) : word16)
  Class: Eq_151
  DataType: int16
  OrigDataType: int16
T_152: (in 0x0007 : word16)
  Class: Eq_152
  DataType: uint16
  OrigDataType: uint16
T_153: (in (word16) (ax_104 *s ax_109) >> 0x0007 : word16)
  Class: Eq_153
  DataType: int16
  OrigDataType: int16
T_154: (in ((word16) (ax_104 *s ax_109) >> 0x0007) + ax_98 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in ds : (ptr Eq_155))
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (segment (1C2 T_157 t01C2) (1C6 T_166 t01C6) (3E8 (arr T_232) a03E8)))
T_156: (in 0x01C2 : word16)
  Class: Eq_156
  DataType: (memptr (ptr Eq_155) word16)
  OrigDataType: (memptr T_155 (struct (0 T_157 t0000)))
T_157: (in Mem116[ds:0x01C2:word16] : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_158: (in dx_ax_120 : int32)
  Class: Eq_158
  DataType: int32
  OrigDataType: word32
T_159: (in ax_98 *s ax_109 : int32)
  Class: Eq_158
  DataType: int32
  OrigDataType: int32
T_160: (in (word16) dx_ax_120 : word16)
  Class: Eq_160
  DataType: int16
  OrigDataType: int16
T_161: (in 0x0007 : word16)
  Class: Eq_161
  DataType: uint16
  OrigDataType: uint16
T_162: (in (word16) dx_ax_120 >> 0x0007 : word16)
  Class: Eq_162
  DataType: int16
  OrigDataType: int16
T_163: (in -((word16) dx_ax_120 >> 0x0007) : word16)
  Class: Eq_163
  DataType: int16
  OrigDataType: int16
T_164: (in -((word16) dx_ax_120 >> 0x0007) + ax_104 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in 0x01C6 : word16)
  Class: Eq_165
  DataType: (memptr (ptr Eq_155) word16)
  OrigDataType: (memptr T_155 (struct (0 T_166 t0000)))
T_166: (in Mem129[ds:0x01C6:word16] : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_167: (in (byte) ax_104 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_168: (in SLICE(dx_ax_120, word16, 16) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_169: (in SLICE(dx_ax_120, byte, 24) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_170: (in 0x0009 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in si_102 << 0x0009 : word16)
  Class: Eq_66
  DataType: ui16
  OrigDataType: ui16
T_172: (in 0x0000 : word16)
  Class: Eq_109
  DataType: int16
  OrigDataType: word16
T_173: (in 0xC7 : byte)
  Class: Eq_72
  DataType: bcu8
  OrigDataType: byte
T_174: (in di_204 : (memptr (ptr Eq_155) Eq_174))
  Class: Eq_174
  DataType: (memptr (ptr Eq_155) Eq_174)
  OrigDataType: (memptr T_155 (struct 0001 (0 T_190 t0000) (3E8 T_179 t03E8)))
T_175: (in 0x0000 : word16)
  Class: Eq_174
  DataType: (memptr (ptr Eq_155) Eq_174)
  OrigDataType: word16
T_176: (in cx_208 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in 0xFA : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in DPB(cx_131, 0xFA, 8, 8) : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_179: (in v34_216 : Eq_179)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: word16
T_180: (in 0x03E8 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in di_204 + 0x03E8 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in Mem129[ds:di_204 + 0x03E8:byte] : byte)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: byte
T_183: (in 0x00 : byte)
  Class: Eq_179
  DataType: byte
  OrigDataType: byte
T_184: (in 0x03E8 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in di_204 + 0x03E8 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in Mem217[ds:di_204 + 0x03E8:byte] : byte)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: byte
T_187: (in 0xA000 : selector)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (segment (0 (arr T_234) a0000)))
T_188: (in 0x0000 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in di_204 + 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in Mem221[0xA000:di_204 + 0x0000:byte] : byte)
  Class: Eq_179
  DataType: Eq_179
  OrigDataType: byte
T_191: (in ax_219 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in (word16) v34_216 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0001 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in di_204 + 0x0001 : word16)
  Class: Eq_174
  DataType: (memptr (ptr Eq_155) Eq_174)
  OrigDataType: word16
T_195: (in 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in cx_208 - 0x0001 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_197: (in 0x0000 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_198: (in cx_208 != 0x0000 : bool)
  Class: Eq_198
  DataType: bool
  OrigDataType: bool
T_199: (in ax_226 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in __inb : ptr32)
  Class: Eq_200
  DataType: (ptr Eq_200)
  OrigDataType: (ptr (fn T_202 (T_201)))
T_201: (in 0x60 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in __inb(0x60) : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in DPB(ax_219, __inb(0x60), 0, 8) : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0001 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in ax_226 - 0x0001 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in (byte) (ax_226 - 0x0001) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_207: (in 0x0001 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_208: (in ax_226 != 0x0001 : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in 0x0000 : word16)
  Class: Eq_16
  DataType: (memptr (ptr (arr byte 1)) byte)
  OrigDataType: word16
T_210: (in ax : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in al_11 : int8)
  Class: Eq_211
  DataType: int8
  OrigDataType: int8
T_212: (in 0x0001 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in si << 0x0001 : word16)
  Class: Eq_213
  DataType: ui16
  OrigDataType: ui16
T_214: (in (byte) (si << 0x0001) : byte)
  Class: Eq_211
  DataType: int8
  OrigDataType: byte
T_215: (in ax_12 : int16)
  Class: Eq_215
  DataType: int16
  OrigDataType: word16
T_216: (in al_11 *s al_11 : int16)
  Class: Eq_215
  DataType: int16
  OrigDataType: int16
T_217: (in SLICE(ax_12, byte, 8) : byte)
  Class: Eq_217
  DataType: byte
  OrigDataType: byte
T_218: (in 0x40 : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in SLICE(ax_12, byte, 8) - 0x40 : byte)
  Class: Eq_219
  DataType: byte
  OrigDataType: byte
T_220: (in DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in 0x0040 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in si + 0x0040 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in (byte) (si + 0x0040) : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_224: (in (int16) (byte) (si + 0x0040) : int16)
  Class: Eq_224
  DataType: int16
  OrigDataType: int16
T_225: (in (int32) (int16) (byte) (si + 0x0040) : int32)
  Class: Eq_225
  DataType: int32
  OrigDataType: int32
T_226: (in SLICE((int32) (int16) (byte) (si + 0x0040), word16, 16) : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (si + 0x0040))), word16, 16) : word16)
  Class: Eq_227
  DataType: int16
  OrigDataType: int16
T_228: (in 0x0007 : word16)
  Class: Eq_228
  DataType: uint16
  OrigDataType: uint16
T_229: (in (DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (si + 0x0040))), word16, 16)) >> 0x0007 : word16)
  Class: Eq_229
  DataType: int16
  OrigDataType: int16
T_230:
  Class: Eq_230
  DataType: byte
  OrigDataType: (struct 0001 (0 T_29 t0000))
T_231:
  Class: Eq_230
  DataType: byte
  OrigDataType: (struct 0001 (0 T_49 t0000))
T_232:
  Class: Eq_232
  DataType: Eq_232
  OrigDataType: (struct 0001 (0 T_182 t0000))
T_233:
  Class: Eq_232
  DataType: Eq_232
  OrigDataType: (struct 0001 (0 T_186 t0000))
T_234:
  Class: Eq_234
  DataType: Eq_234
  OrigDataType: (struct 0001 (0 T_190 t0000))
*/
typedef Eq_155 Eq_1struct Globals {
	Eq_155 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_8[1][1]struct Eq_8 {
	byte a1000[1];	// 1000
	byte a2000[1];	// 2000
} Eq_8;

typedef union Eq_12 {
	int8 u0;
	ui16 u1;
} Eq_12;

typedef union Eq_76 {
	int16 u0;
	cups16 u1;
} Eq_76;

typedef struct Eq_99 {
	byte b0000;	// 0
	byte b0140;	// 140
} Eq_99;

typedef int16 (Eq_137)(word16);

typedef Eq_234 Eq_155[]Eq_232[]struct Eq_155 {
	Eq_234 a0000[];	// 0
	word16 w01C2;	// 1C2
	word16 w01C6;	// 1C6
	Eq_232 a03E8[];	// 3E8
} Eq_155;

typedef Eq_179 Eq_174Eq_179 Eq_174struct Eq_174 {	// size: 1 1
	Eq_179 t0000;	// 0
	Eq_179 t03E8;	// 3E8
} Eq_174;

typedef union Eq_179 {
	byte u0;
	word16 u1;
} Eq_179;

typedef byte (Eq_200)(byte);

typedef Eq_179 Eq_232struct Eq_232 {	// size: 1 1
	Eq_179 t0000;	// 0
} Eq_232;

typedef Eq_179 Eq_234struct Eq_234 {	// size: 1 1
	Eq_179 t0000;	// 0
} Eq_234;

