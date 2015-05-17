// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_209/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_212) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_20: (segment "Eq_20" (1F8 (arr byte) a01F8))
	T_20 (in es : (ptr Eq_20))
	T_206 (in 0xA000 : word16)
Eq_31: (union "Eq_31" (byte u0) (word16 u1))
	T_31 (in ax_90 : word16)
	T_35 (in Mem0[ds:si_137 + 0x0000:word16] : word16)
	T_77 (in 0x0000 : word16)
	T_183 (in Mem0[ds:si_137 + 0x0000:byte] : byte)
Eq_32: (segment "Eq_32" (1BE Eq_31 t01BE) (1F8 (arr word16) a01F8))
	T_32 (in ds : (ptr Eq_32))
	T_202 (in Mem239[ss:fp - 0x0002:word16] : word16)
Eq_36: (struct "Eq_36" (FFFFFFFE byte bFFFFFFFE) (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (1 byte b0001) (2 byte b0002) (3 byte b0003))
	T_36 (in si_94 : word16)
	T_38 (in si_137 + 0x0002 : word16)
Eq_198: (segment "Eq_198")
	T_198 (in ss : selector)
Eq_199: (union "Eq_199" ((memptr (ptr Eq_198) Eq_259) u0) (Eq_261 u1))
	T_199 (in fp : ptr16)
Eq_212: (segment "Eq_212" (0 (arr word16) a0000))
	T_212 (in 0xA000 : selector)
Eq_224: (fn byte (word16))
	T_224 (in __inb : ptr32)
Eq_231: (fn byte (word16))
	T_231 (in __inb : ptr32)
Eq_244: (fn byte (byte))
	T_244 (in __inb : ptr32)
Eq_259: (struct "Eq_259" (FFFFFFFE (ptr Eq_32) ptrFFFFFFFE))
	T_259
Eq_260: (struct "Eq_260" (FFFFFFFE word16 wFFFFFFFE))
	T_260
Eq_261: (union "Eq_261" (ptr16 u0) ((memptr (ptr Eq_198) Eq_260) u1))
	T_261
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
T_7: (in dx_100 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x003F : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in dl_287 : bcu8)
  Class: Eq_9
  DataType: bcu8
  OrigDataType: bcu8
T_10: (in 0x3F : byte)
  Class: Eq_9
  DataType: bcu8
  OrigDataType: byte
T_11: (in si_137 : (memptr (ptr Eq_32) Eq_31))
  Class: Eq_11
  DataType: (memptr (ptr Eq_32) Eq_31)
  OrigDataType: (memptr T_32 (struct 0002 (0 T_31 t0000)))
T_12: (in 0x01BE : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_32) Eq_31)
  OrigDataType: word16
T_13: (in cx_212 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_14: (in cx_51 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x06 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(cx_51, 0x06, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_17: (in 0x06 : byte)
  Class: Eq_9
  DataType: bcu8
  OrigDataType: bcu8
T_18: (in dl_287 <=u 0x06 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in 0x00 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in es : (ptr Eq_20))
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (1F8 (arr T_256) a01F8)))
T_21: (in di_57 : (memptr (ptr Eq_20) byte))
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: (memptr T_20 (struct 0001 (0 T_24 t0000)))
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di_57 + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem62[es:di_57 + 0x0000:byte] : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in di_57 + 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_51 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_30: (in cx_51 == 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in ax_90 : word16)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: word16
T_32: (in ds : (ptr Eq_32))
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (segment (1F8 (arr T_257) a01F8)))
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in si_137 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem0[ds:si_137 + 0x0000:word16] : word16)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: word16
T_36: (in si_94 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_32) Eq_36)
  OrigDataType: (memptr T_32 (struct (FFFFFFFE T_133 tFFFFFFFE) (FFFFFFFF T_89 tFFFFFFFF) (0 T_54 t0000) (1 T_45 t0001) (2 T_65 t0002) (3 T_50 t0003)))
T_37: (in 0x0002 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in si_137 + 0x0002 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_32) Eq_36)
  OrigDataType: word16
T_39: (in cx_212 != dx_100 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in dx_100 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_42: (in ax_122 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in si_94 + 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem0[ds:si_94 + 0x0001:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in (word16) (ds->*si_94).b0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_47: (in al_134 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0003 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si_94 + 0x0003 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem0[ds:si_94 + 0x0003:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_51: (in di_125 : (memptr (ptr Eq_20) byte))
  Class: Eq_51
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: (memptr T_20 (struct 0001 (0 T_114 t0000)))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si_94 + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem0[ds:si_94 + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in (word16) (ds->*si_94).b0000 : word16)
  Class: Eq_55
  DataType: uint16
  OrigDataType: uint16
T_56: (in 0x0140 : word16)
  Class: Eq_56
  DataType: uint16
  OrigDataType: uint16
T_57: (in (word16) (ds->*si_94).b0000 *u 0x0140 : uint32)
  Class: Eq_57
  DataType: uint32
  OrigDataType: uint32
T_58: (in (word16) ((word16) (ds->*si_94).b0000 *u 0x0140) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in (word16) ((word16) (ds->*si_94).b0000 *u 0x0140) + ax_122 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x01F8 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (word16) ((word16) (ds->*si_94).b0000 *u 0x0140) + ax_122 + 0x01F8 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_62: (in bx_132 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0002 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in si_94 + 0x0002 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem0[ds:si_94 + 0x0002:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(ax_122, (ds->*si_94).b0002, 0, 8) : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_67: (in ax_135 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0140 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in DPB(0x0140, al_134, 0, 8) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0004 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in si_94 + 0x0004 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in &si_94->b0003 + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_32) Eq_31)
  OrigDataType: word16
T_74: (in cx_148 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_75: (in al_325 : int8)
  Class: Eq_75
  DataType: int8
  OrigDataType: int8
T_76: (in (byte) ax_90 : byte)
  Class: Eq_75
  DataType: int8
  OrigDataType: byte
T_77: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_78: (in ax_90 != 0x0000 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in 0x0000 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si_94 + 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem0[ds:si_94 + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_82: (in 0x01 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in (ds->*si_94).b0000 + 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_84: (in 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in si_94 + 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in Mem335[ds:si_94 + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in si_94 - 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem335[ds:si_94 - 0x0001:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 0x01 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in (ds->*si_94).b0001 - 0x01 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in si_94 - 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem337[ds:si_94 - 0x0001:byte] : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_95: (in bl_338 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in 0x01 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_97: (in 0x00 : byte)
  Class: Eq_75
  DataType: int8
  OrigDataType: byte
T_98: (in al_325 == 0x00 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in dx_100 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_101: (in di_179 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in di_125 - bx_132 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0140 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in di_179 + 0x0140 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_105: (in cl_183 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in (byte) cx_148 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_107: (in ah_153 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in 0x10 : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in ah_153 & 0x10 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in 0x00 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_111: (in (ah_153 & 0x10) == 0x00 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in di_125 + 0x0000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem174[es:di_125 + 0x0000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_115: (in 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in di_125 + 0x0001 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_117: (in cx_167 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0001 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in cx_167 - 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_120: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_121: (in cx_167 == 0x0000 : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in 0x00 : byte)
  Class: Eq_75
  DataType: int8
  OrigDataType: int8
T_123: (in al_325 >= 0x00 : bool)
  Class: Eq_123
  DataType: bool
  OrigDataType: bool
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in si_94 + 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem337[ds:si_94 + 0x0001:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_127: (in (ds->*si_94).b0001 + bl_338 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in si_94 + 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in Mem351[ds:si_94 + 0x0001:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_131: (in 0x0002 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in si_94 - 0x0002 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem351[ds:si_94 - 0x0002:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in (ds->*si_94).b0002 - bl_338 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_135: (in 0x0002 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in si_94 - 0x0002 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem353[ds:si_94 - 0x0002:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_138: (in 0xFF : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_139: (in 0x01 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in ah_153 & 0x01 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in 0x00 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_142: (in (ah_153 & 0x01) == 0x00 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 0x0142 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in di_179 + 0x0142 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in bx_132 - 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in bx_132 - 0x0001 - 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_149: (in 0x01 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in cl_183 & 0x01 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in 0x00 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_152: (in (cl_183 & 0x01) == 0x00 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x0001 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in bx_132 + 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in bx_132 + 0x0001 + 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0001 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in cx_148 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_159: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_160: (in cx_148 != 0x0000 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in 0x02 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in ah_153 & 0x02 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x00 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_164: (in (ah_153 & 0x02) == 0x00 : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in 0x20 : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in ah_153 & 0x20 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in 0x00 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_168: (in (ah_153 & 0x20) == 0x00 : bool)
  Class: Eq_168
  DataType: bool
  OrigDataType: bool
T_169: (in 0x0001 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in bx_132 - 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_171: (in 0x80 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in ah_153 & 0x80 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in 0x00 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_174: (in (ah_153 & 0x80) != 0x00 : bool)
  Class: Eq_174
  DataType: bool
  OrigDataType: bool
T_175: (in si_152 : word16)
  Class: Eq_175
  DataType: (memptr (ptr Eq_32) byte)
  OrigDataType: (memptr T_32 (struct (0 T_180 t0000)))
T_176: (in 0x0000 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in si_137 + 0x0000 : word16)
  Class: Eq_175
  DataType: (memptr (ptr Eq_32) byte)
  OrigDataType: word16
T_178: (in 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in si_152 + 0x0000 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in Mem0[ds:si_152 + 0x0000:byte] : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_181: (in 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in si_137 + 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in Mem0[ds:si_137 + 0x0000:byte] : byte)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: byte
T_184: (in DPB(cx_148, Mem0[ds:si_137 + 0x0000:byte], 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_185: (in DPB(ax_135, ah_153, 8, 8) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_186: (in 0x0001 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in si_152 + 0x0001 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_32) Eq_31)
  OrigDataType: word16
T_188: (in 0x0001 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in cx_212 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_190: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_191: (in cx_212 != 0x0000 : bool)
  Class: Eq_191
  DataType: bool
  OrigDataType: bool
T_192: (in si_219 : (memptr (ptr Eq_32) word16))
  Class: Eq_192
  DataType: (memptr (ptr Eq_32) word16)
  OrigDataType: (memptr T_32 (struct 0002 (0 T_211 t0000)))
T_193: (in 0x01F8 : word16)
  Class: Eq_192
  DataType: (memptr (ptr Eq_32) word16)
  OrigDataType: word16
T_194: (in di_220 : (memptr (ptr Eq_212) word16))
  Class: Eq_194
  DataType: (memptr (ptr Eq_212) word16)
  OrigDataType: (memptr T_212 (struct 0002 (0 T_215 t0000)))
T_195: (in 0x0000 : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_212) word16)
  OrigDataType: word16
T_196: (in cx_223 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in 0x7D00 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_198: (in ss : selector)
  Class: Eq_198
  DataType: (ptr Eq_198)
  OrigDataType: (ptr (segment))
T_199: (in fp : ptr16)
  Class: Eq_199
  DataType: Eq_199
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_198 (struct (FFFFFFFE T_205 tFFFFFFFE))) u1)) u0) ((memptr T_198 (struct (FFFFFFFE T_202 tFFFFFFFE))) u1))
T_200: (in 0x0002 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in fp - 0x0002 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in Mem239[ss:fp - 0x0002:word16] : word16)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: word16
T_203: (in 0x0002 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in fp - 0x0002 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in Mem244[ss:fp - 0x0002:word16] : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_206: (in 0xA000 : word16)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: word16
T_207: (in cx_259 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in 0x0008 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_209: (in 0x0000 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in si_219 + 0x0000 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in Mem0[ds:si_219 + 0x0000:word16] : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in 0xA000 : selector)
  Class: Eq_212
  DataType: (ptr Eq_212)
  OrigDataType: (ptr (segment (0 (arr T_258) a0000)))
T_213: (in 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in di_220 + 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in Mem232[0xA000:di_220 + 0x0000:word16] : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_216: (in 0x0002 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in si_219 + 0x0002 : word16)
  Class: Eq_192
  DataType: (memptr (ptr Eq_32) word16)
  OrigDataType: word16
T_218: (in 0x0002 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in di_220 + 0x0002 : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_212) word16)
  OrigDataType: word16
T_220: (in 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in cx_223 - 0x0001 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_222: (in 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_223: (in cx_223 == 0x0000 : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224: (in __inb : ptr32)
  Class: Eq_224
  DataType: (ptr Eq_224)
  OrigDataType: (ptr (fn T_226 (T_225)))
T_225: (in 0x03DA : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in __inb(0x03DA) : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in 0x08 : byte)
  Class: Eq_227
  DataType: byte
  OrigDataType: byte
T_228: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in 0x00 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_230: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_230
  DataType: bool
  OrigDataType: bool
T_231: (in __inb : ptr32)
  Class: Eq_231
  DataType: (ptr Eq_231)
  OrigDataType: (ptr (fn T_233 (T_232)))
T_232: (in 0x03DA : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in __inb(0x03DA) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_234: (in 0x08 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_235
  DataType: byte
  OrigDataType: byte
T_236: (in 0x00 : byte)
  Class: Eq_235
  DataType: byte
  OrigDataType: byte
T_237: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_237
  DataType: bool
  OrigDataType: bool
T_238: (in 0x0001 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in cx_259 - 0x0001 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_240: (in 0x0000 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_241: (in cx_259 != 0x0000 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in (byte) dx_100 : byte)
  Class: Eq_9
  DataType: bcu8
  OrigDataType: byte
T_243: (in cx : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_244: (in __inb : ptr32)
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: (ptr (fn T_246 (T_245)))
T_245: (in 0x60 : byte)
  Class: Eq_245
  DataType: byte
  OrigDataType: byte
T_246: (in __inb(0x60) : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in 0x01 : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_248: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_248
  DataType: bool
  OrigDataType: bool
T_249: (in 0xFA : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_250: (in DPB(cx, 0xFA, 8, 8) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_251: (in 0x01F8 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_252: (in 0x0001 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in di_125 - 0x0001 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_20) byte)
  OrigDataType: word16
T_254: (in 0x0001 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in bx_132 + 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_256:
  Class: Eq_256
  DataType: byte
  OrigDataType: (struct 0001 (0 T_24 t0000))
T_257:
  Class: Eq_257
  DataType: word16
  OrigDataType: (struct 0002 (0 T_211 t0000))
T_258:
  Class: Eq_258
  DataType: word16
  OrigDataType: (struct 0002 (0 T_215 t0000))
T_259:
  Class: Eq_259
  DataType: Eq_259
  OrigDataType: 
T_260:
  Class: Eq_260
  DataType: Eq_260
  OrigDataType: 
T_261:
  Class: Eq_261
  DataType: Eq_261
  OrigDataType: 
*/
typedef Eq_212 Eq_1struct Globals {
	Eq_212 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_20[]struct Eq_20 {
	byte a01F8[];	// 1F8
} Eq_20;

typedef union Eq_31 {
	byte u0;
	word16 u1;
} Eq_31;

typedef Eq_31 Eq_32 Eq_32[]struct Eq_32 {
	Eq_31 t01BE;	// 1BE
	word16 a01F8[];	// 1F8
} Eq_32;

typedef struct Eq_36 {
	byte bFFFFFFFE;	// FFFFFFFE
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
	byte b0003;	// 3
} Eq_36;

typedef struct Eq_198 {
} Eq_198;

typedef union Eq_199 {
	Eq_259 Eq_198::* u0;
	Eq_261 u1;
} Eq_199;

typedef  Eq_212[]struct Eq_212 {
	word16 a0000[];	// 0
} Eq_212;

typedef byte (Eq_224)(word16);

typedef byte (Eq_231)(word16);

typedef byte (Eq_244)(byte);

typedef Eq_32 Eq_259struct Eq_259 {
	Eq_32 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_259;

typedef struct Eq_260 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_260;

typedef union Eq_261 {
	ptr16 u0;
	Eq_260 Eq_198::* u1;
} Eq_261;

