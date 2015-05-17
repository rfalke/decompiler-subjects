// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_252/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_28) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, word16))
	T_7 (in __outw : ptr32)
Eq_13: (struct "Eq_13" 0001 (FFFFFFA0 word16 wFFFFFFA0) (400 byte b0400))
	T_13 (in bx_12 : (memptr (ptr Eq_28) Eq_13))
	T_14 (in 0x0000 : word16)
	T_35 (in DPB(bx_12, bl_13, 0, 8) : word16)
	T_112 (in bx_217 + 0x0001 : word16)
Eq_19: (union "Eq_19" (uint16 u0) (byte u1))
	T_19 (in al_15 : Eq_19)
	T_21 (in al_14 >>u 0x03 : word16)
Eq_28: (segment "Eq_28" (0 Eq_13 t0000) (19E ui16 w019E) (1A2 ui16 w01A2) (1A6 ui16 w01A6))
	T_28 (in ds : (ptr Eq_28))
	T_104 (in 0xA000 : selector)
Eq_38: (union "Eq_38" (int8 u0) (ui16 u1))
	T_38 (in al_184 : Eq_38)
	T_41 (in dh_135 << 0x03 : word16)
Eq_42: (union "Eq_42" (int8 u0) (ui16 u1))
	T_42 (in al_189 : Eq_42)
	T_45 (in ch_146 << 0x03 : word16)
Eq_185: (fn byte (byte))
	T_185 (in __inb : ptr32)
Eq_190: (fn int16 (word16))
	T_190 (in fn0C00_01EA : ptr32)
	T_191 (in signature of fn0C00_01EA : void)
	T_194 (in fn0C00_01EA : ptr32)
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
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x2013 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in __outw(0x03D4, 0x2013) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in al_14 : uint8)
  Class: Eq_11
  DataType: uint8
  OrigDataType: uint8
T_12: (in 0x13 : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_13: (in bx_12 : (memptr (ptr Eq_28) Eq_13))
  Class: Eq_13
  DataType: (memptr (ptr Eq_28) Eq_13)
  OrigDataType: (memptr T_28 (struct 0001 (FFFFFFA0 T_107 tFFFFFFA0) (400 T_31 t0400)))
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_28) Eq_13)
  OrigDataType: word16
T_15: (in bl_13 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in bh_220 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x00 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_19: (in al_15 : Eq_19)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_20: (in 0x03 : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_21: (in al_14 >>u 0x03 : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: uint16
T_22: (in ax_17 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: word16
T_23: (in 0x05 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in al_15 << 0x05 : word16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in al_15 << 0x05 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in (al_15 << 0x05) *s (al_15 << 0x05) : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_27: (in SLICE(ax_17, byte, 8) : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in ds : (ptr Eq_28))
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment (19E T_159 t019E) (1A2 T_135 t01A2) (1A6 T_174 t01A6)))
T_29: (in 0x0400 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_12 + 0x0400 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem22[ds:bx_12 + 0x0400:byte] : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_32: (in 0x01 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in bl_13 + 0x01 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_34: (in (byte) ax_17 : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_35: (in DPB(bx_12, bl_13, 0, 8) : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_28) Eq_13)
  OrigDataType: word16
T_36: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_37: (in bl_13 != 0x00 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in al_184 : Eq_38)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: int8
T_39: (in dh_135 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x03 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in dh_135 << 0x03 : word16)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: ui16
T_42: (in al_189 : Eq_42)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: int8
T_43: (in ch_146 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x03 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in ch_146 << 0x03 : word16)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: ui16
T_46: (in ax_191 : uint16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in al_189 *s al_189 : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in al_184 *s al_184 : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_49: (in al_189 *s al_189 + al_184 *s al_184 : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: word16
T_50: (in ax_198 : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_51: (in 0x0007 : word16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in ax_191 >>u 0x0007 : word16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_53: (in ax_191 >>u 0x0007 : word16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: uint16
T_54: (in (byte) (ax_191 >>u 0x0007) : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in ~(byte) (ax_191 >>u 0x0007) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in DPB(ax_191 >>u 0x0007, ~(byte) (ax_191 >>u 0x0007), 0, 8) : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x00FF : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in DPB(ax_191 >>u 0x0007, ~(byte) (ax_191 >>u 0x0007), 0, 8) - 0x00FF : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di_154 : uint16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: uint16
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: uint16
  OrigDataType: uint16
T_61: (in di_154 >>u 0x0001 : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: uint16
T_62: (in DPB(ax_191 >>u 0x0007, ~(byte) (ax_191 >>u 0x0007), 0, 8) - 0x00FF + (di_154 >>u 0x0001) : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_63: (in al_199 : uint8)
  Class: Eq_63
  DataType: uint8
  OrigDataType: uint8
T_64: (in (byte) ax_198 : byte)
  Class: Eq_63
  DataType: uint8
  OrigDataType: byte
T_65: (in 0x0000 : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_66: (in ax_198 >= 0x0000 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in dx_133 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in 0xFFFF : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in dx_133 + 0xFFFF : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_70: (in cx_145 : ui16)
  Class: Eq_70
  DataType: ui16
  OrigDataType: word16
T_71: (in 0xFFFF : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in cx_145 + 0xFFFF : word16)
  Class: Eq_70
  DataType: ui16
  OrigDataType: word16
T_73: (in SLICE(dx_133, byte, 8) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_74: (in SLICE(cx_145, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_75: (in bp_151 : uint16)
  Class: Eq_75
  DataType: uint16
  OrigDataType: uint16
T_76: (in 0xFFFF : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in bp_151 + 0xFFFF : word16)
  Class: Eq_75
  DataType: uint16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di_154 - 0x0001 : word16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: word16
T_80: (in 0x0000 : word16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: word16
T_81: (in di_154 != 0x0000 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in bx_167 : (memptr (ptr Eq_28) byte))
  Class: Eq_82
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct (0 T_89 t0000)))
T_83: (in 0x0008 : word16)
  Class: Eq_83
  DataType: uint16
  OrigDataType: uint16
T_84: (in bp_151 >>u 0x0008 : word16)
  Class: Eq_84
  DataType: uint16
  OrigDataType: uint16
T_85: (in 0x04 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in DPB(bp_151 >>u 0x0008, 0x04, 8, 8) : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in bx_167 + 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem140[ds:bx_167 + 0x0000:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in bx_167 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem140[ds:bx_167 + 0x0000:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_93: (in ds->*bx_167 + ds->*bx_167 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in DPB(bx_167, dh_135, 0, 8) : word16)
  Class: Eq_94
  DataType: (memptr (ptr Eq_28) byte)
  OrigDataType: (memptr T_28 (struct (0 T_95 t0000)))
T_95: (in Mem140[ds:DPB(bx_167, dh_135, 0, 8):byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in Mem140[ds:bx_167 + 0x0000:byte] + Mem140[ds:bx_167 + 0x0000:byte] + Mem140[ds:DPB(bx_167, dh_135, 0, 8):byte] : byte)
  Class: Eq_96
  DataType: bcu8
  OrigDataType: bcu8
T_97: (in 0x65 : byte)
  Class: Eq_96
  DataType: bcu8
  OrigDataType: bcu8
T_98: (in Mem140[ds:bx_167 + 0x0000:byte] + Mem140[ds:bx_167 + 0x0000:byte] + Mem140[ds:DPB(bx_167, dh_135, 0, 8):byte] >u 0x65 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x04 : byte)
  Class: Eq_99
  DataType: uint8
  OrigDataType: uint8
T_100: (in al_199 >>u 0x04 : word16)
  Class: Eq_100
  DataType: uint16
  OrigDataType: uint16
T_101: (in 0x10 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in (al_199 >>u 0x04) + 0x10 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in DPB(ax_198, (al_199 >>u 0x04) + 0x10, 8, 8) : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in 0xA000 : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment))
T_105: (in 0x0060 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in bx_12 - 0x0060 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in Mem216[0xA000:bx_12 - 0x0060:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_108: (in bx_217 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in bx_12 + 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in bx_217 + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_28) Eq_13)
  OrigDataType: word16
T_113: (in bx_217 + 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in (byte) (bx_217 + 0x0001) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_115: (in bx_217 + 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in SLICE(bx_217 + 0x0001, byte, 8) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_117: (in wLoc02_244 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in wLoc02_144 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_119: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_120: (in bx_217 != 0x0001 : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in 0x0000 : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_122: (in 0x00 : byte)
  Class: Eq_63
  DataType: uint8
  OrigDataType: byte
T_123: (in ax_85 : int16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_124: (in (int16) bl_13 : int16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_125: (in ax_70 : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_126: (in ax_70 *s ax_85 : int32)
  Class: Eq_126
  DataType: int32
  OrigDataType: int32
T_127: (in (word16) (ax_70 *s ax_85) : word16)
  Class: Eq_127
  DataType: int16
  OrigDataType: int16
T_128: (in 0x0007 : word16)
  Class: Eq_128
  DataType: uint16
  OrigDataType: uint16
T_129: (in (word16) (ax_70 *s ax_85) >> 0x0007 : word16)
  Class: Eq_129
  DataType: int16
  OrigDataType: int16
T_130: (in bp_214 : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_131: (in ((word16) (ax_70 *s ax_85) >> 0x0007) + bp_214 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in ((word16) (ax_70 *s ax_85) >> 0x0007) + bp_214 << 0x0001 : word16)
  Class: Eq_133
  DataType: ui16
  OrigDataType: ui16
T_134: (in 0x01A2 : word16)
  Class: Eq_134
  DataType: (memptr (ptr Eq_28) ui16)
  OrigDataType: (memptr T_28 (struct (0 T_135 t0000)))
T_135: (in Mem93[ds:0x01A2:word16] : word16)
  Class: Eq_133
  DataType: ui16
  OrigDataType: word16
T_136: (in ax_104 : int16)
  Class: Eq_136
  DataType: int16
  OrigDataType: int16
T_137: (in 0x64 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in bh_220 - 0x64 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in (int16) (bh_220 - 0x64) : int16)
  Class: Eq_136
  DataType: int16
  OrigDataType: int16
T_140: (in ax_100 : int16)
  Class: Eq_140
  DataType: int16
  OrigDataType: int16
T_141: (in bp_214 *s ax_85 : int32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in (word16) (bp_214 *s ax_85) : word16)
  Class: Eq_142
  DataType: int16
  OrigDataType: int16
T_143: (in 0x0007 : word16)
  Class: Eq_143
  DataType: uint16
  OrigDataType: uint16
T_144: (in (word16) (bp_214 *s ax_85) >> 0x0007 : word16)
  Class: Eq_144
  DataType: int16
  OrigDataType: int16
T_145: (in -((word16) (bp_214 *s ax_85) >> 0x0007) : word16)
  Class: Eq_145
  DataType: int16
  OrigDataType: int16
T_146: (in -((word16) (bp_214 *s ax_85) >> 0x0007) + ax_70 : word16)
  Class: Eq_140
  DataType: int16
  OrigDataType: word16
T_147: (in bp_214 *s ax_100 : int32)
  Class: Eq_147
  DataType: int32
  OrigDataType: int32
T_148: (in (word16) (bp_214 *s ax_100) : word16)
  Class: Eq_148
  DataType: int16
  OrigDataType: int16
T_149: (in 0x0007 : word16)
  Class: Eq_149
  DataType: uint16
  OrigDataType: uint16
T_150: (in (word16) (bp_214 *s ax_100) >> 0x0007 : word16)
  Class: Eq_150
  DataType: int16
  OrigDataType: int16
T_151: (in ax_70 *s ax_104 : int32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_152: (in (word16) (ax_70 *s ax_104) : word16)
  Class: Eq_152
  DataType: int16
  OrigDataType: int16
T_153: (in 0x0007 : word16)
  Class: Eq_153
  DataType: uint16
  OrigDataType: uint16
T_154: (in (word16) (ax_70 *s ax_104) >> 0x0007 : word16)
  Class: Eq_154
  DataType: int16
  OrigDataType: int16
T_155: (in ((word16) (bp_214 *s ax_100) >> 0x0007) + ((word16) (ax_70 *s ax_104) >> 0x0007) : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in ((word16) (bp_214 *s ax_100) >> 0x0007) + ((word16) (ax_70 *s ax_104) >> 0x0007) << 0x0001 : word16)
  Class: Eq_157
  DataType: ui16
  OrigDataType: ui16
T_158: (in 0x019E : word16)
  Class: Eq_158
  DataType: (memptr (ptr Eq_28) ui16)
  OrigDataType: (memptr T_28 (struct (0 T_159 t0000)))
T_159: (in Mem122[ds:0x019E:word16] : word16)
  Class: Eq_157
  DataType: ui16
  OrigDataType: word16
T_160: (in dx_ax_132 : int32)
  Class: Eq_160
  DataType: int32
  OrigDataType: word32
T_161: (in ax_70 *s ax_100 : int32)
  Class: Eq_160
  DataType: int32
  OrigDataType: int32
T_162: (in (word16) dx_ax_132 : word16)
  Class: Eq_162
  DataType: int16
  OrigDataType: int16
T_163: (in 0x0007 : word16)
  Class: Eq_163
  DataType: uint16
  OrigDataType: uint16
T_164: (in (word16) dx_ax_132 >> 0x0007 : word16)
  Class: Eq_164
  DataType: int16
  OrigDataType: int16
T_165: (in bp_214 *s ax_104 : int32)
  Class: Eq_165
  DataType: int32
  OrigDataType: int32
T_166: (in (word16) (bp_214 *s ax_104) : word16)
  Class: Eq_166
  DataType: int16
  OrigDataType: int16
T_167: (in 0x0007 : word16)
  Class: Eq_167
  DataType: uint16
  OrigDataType: uint16
T_168: (in (word16) (bp_214 *s ax_104) >> 0x0007 : word16)
  Class: Eq_168
  DataType: int16
  OrigDataType: int16
T_169: (in -((word16) (bp_214 *s ax_104) >> 0x0007) : word16)
  Class: Eq_169
  DataType: int16
  OrigDataType: int16
T_170: (in ((word16) dx_ax_132 >> 0x0007) + -((word16) (bp_214 *s ax_104) >> 0x0007) : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0001 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in ((word16) dx_ax_132 >> 0x0007) + -((word16) (bp_214 *s ax_104) >> 0x0007) << 0x0001 : word16)
  Class: Eq_172
  DataType: ui16
  OrigDataType: ui16
T_173: (in 0x01A6 : word16)
  Class: Eq_173
  DataType: (memptr (ptr Eq_28) ui16)
  OrigDataType: (memptr T_28 (struct (0 T_174 t0000)))
T_174: (in Mem140[ds:0x01A6:word16] : word16)
  Class: Eq_172
  DataType: ui16
  OrigDataType: word16
T_175: (in 0x0009 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in wLoc02_244 << 0x0009 : word16)
  Class: Eq_70
  DataType: ui16
  OrigDataType: ui16
T_177: (in SLICE(dx_ax_132, word16, 16) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_178: (in SLICE(dx_ax_132, byte, 24) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_179: (in SLICE(cx_145, byte, 8) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_180: (in 0x0000 : word16)
  Class: Eq_75
  DataType: uint16
  OrigDataType: word16
T_181: (in 0x0200 : word16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: word16
T_182: (in 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in wLoc02_244 + 0x0001 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_184: (in si : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_185: (in __inb : ptr32)
  Class: Eq_185
  DataType: (ptr Eq_185)
  OrigDataType: (ptr (fn T_187 (T_186)))
T_186: (in 0x60 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in __inb(0x60) : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in 0x01 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_189: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_189
  DataType: bool
  OrigDataType: bool
T_190: (in fn0C00_01EA : ptr32)
  Class: Eq_190
  DataType: (ptr Eq_190)
  OrigDataType: (ptr (fn T_193 (T_184)))
T_191: (in signature of fn0C00_01EA : void)
  Class: Eq_190
  DataType: (ptr Eq_190)
  OrigDataType: 
T_192: (in si : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_193: (in fn0C00_01EA(si) : word16)
  Class: Eq_125
  DataType: int16
  OrigDataType: word16
T_194: (in fn0C00_01EA : ptr32)
  Class: Eq_190
  DataType: (ptr Eq_190)
  OrigDataType: (ptr (fn T_197 (T_196)))
T_195: (in 0x0040 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in si + 0x0040 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_197: (in fn0C00_01EA(si + 0x0040) : word16)
  Class: Eq_125
  DataType: int16
  OrigDataType: word16
T_198: (in ax : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in al_11 : int8)
  Class: Eq_199
  DataType: int8
  OrigDataType: int8
T_200: (in 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in si << 0x0001 : word16)
  Class: Eq_201
  DataType: ui16
  OrigDataType: ui16
T_202: (in (byte) (si << 0x0001) : byte)
  Class: Eq_199
  DataType: int8
  OrigDataType: byte
T_203: (in ax_12 : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: word16
T_204: (in al_11 *s al_11 : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: int16
T_205: (in SLICE(ax_12, byte, 8) : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in 0x40 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in SLICE(ax_12, byte, 8) - 0x40 : byte)
  Class: Eq_207
  DataType: byte
  OrigDataType: byte
T_208: (in DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in 0x0040 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in si + 0x0040 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in (byte) (si + 0x0040) : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in (int16) (byte) (si + 0x0040) : int16)
  Class: Eq_212
  DataType: int16
  OrigDataType: int16
T_213: (in (int32) (int16) (byte) (si + 0x0040) : int32)
  Class: Eq_213
  DataType: int32
  OrigDataType: int32
T_214: (in SLICE((int32) (int16) (byte) (si + 0x0040), word16, 16) : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (si + 0x0040))), word16, 16) : word16)
  Class: Eq_215
  DataType: int16
  OrigDataType: int16
T_216: (in 0x0007 : word16)
  Class: Eq_216
  DataType: uint16
  OrigDataType: uint16
T_217: (in (DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (si + 0x0040))), word16, 16)) >> 0x0007 : word16)
  Class: Eq_217
  DataType: int16
  OrigDataType: int16
*/
typedef Eq_28 Eq_1struct Globals {
	Eq_28 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, word16);

typedef struct Eq_13 {	// size: 1 1
	word16 wFFFFFFA0;	// FFFFFFA0
	byte b0400;	// 400
} Eq_13;

typedef union Eq_19 {
	uint16 u0;
	byte u1;
} Eq_19;

typedef Eq_13 Eq_28struct Eq_28 {
	Eq_13 t0000;	// 0
	ui16 w019E;	// 19E
	ui16 w01A2;	// 1A2
	ui16 w01A6;	// 1A6
} Eq_28;

typedef union Eq_38 {
	int8 u0;
	ui16 u1;
} Eq_38;

typedef union Eq_42 {
	int8 u0;
	ui16 u1;
} Eq_42;

typedef byte (Eq_185)(byte);

typedef int16 (Eq_190)(word16);

