// subject.h
// Generated on 5/4/2015 12:10:55 AM by decompiling from_pouet.net/with_source_360/ia32_pe/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in edx_20 : word32)
  Class: Eq_2
  DataType: (ptr (struct 0001 (0 T_28 t0000)))
  OrigDataType: (ptr (struct 0001 (0 T_28 t0000)))
T_3: (in 0x00402104 : ptr32)
  Class: Eq_3
  DataType: (ptr (struct (0 T_4 t0000)))
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem0[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_5: (in bl_21 : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: bcu8
T_6: (in 0x00 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in edx_15 : word32)
  Class: Eq_7
  DataType: (ptr (struct (0 T_14 t0000) (1 T_18 t0001)))
  OrigDataType: (ptr (struct (0 T_14 t0000) (1 T_18 t0001)))
T_8: (in 0x00000001 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in edx_20 + 0x00000001 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_10: (in 0x01 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in bl_21 << 0x01 : word32)
  Class: Eq_11
  DataType: ui32
  OrigDataType: ui32
T_12: (in 0x00000000 : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in edx_15 + 0x00000000 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in Mem16[edx_15 + 0x00000000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_15: (in bl_21 << 0x01 : word32)
  Class: Eq_15
  DataType: ui32
  OrigDataType: ui32
T_16: (in 0x00000001 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in edx_15 + 0x00000001 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in Mem18[edx_15 + 0x00000001:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_19: (in 0x00000003 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in edx_15 + 0x00000003 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_21: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in bl_21 + 0x01 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_23: (in 0x00 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_24: (in bl_21 != 0x00 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in bl_21 << 0x01 : word32)
  Class: Eq_25
  DataType: ui32
  OrigDataType: ui32
T_26: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in edx_20 + 0x00000000 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in Mem24[edx_20 + 0x00000000:byte] : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_29: (in 0x80 : byte)
  Class: Eq_5
  DataType: bcu8
  OrigDataType: bcu8
T_30: (in bl_21 <u 0x80 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in ebx : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_32: (in 0x0040213C : ptr32)
  Class: Eq_32
  DataType: (ptr (struct (0 T_33 t0000)))
  OrigDataType: (ptr (struct (0 T_33 t0000)))
T_33: (in Mem0[0x0040213C:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem0[0x0040213C:word16] - 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_36: (in Mem37[0x0040213C:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_37: (in esp_199 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in fp : ptr32)
  Class: Eq_38
  DataType: ptr32
  OrigDataType: ptr32
T_39: (in 0x00000020 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in fp - 0x00000020 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_41: (in eax_128 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in 0x00000000 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_43: (in bx_159 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_45: (in ebx_160 : word32)
  Class: Eq_45
  DataType: (ptr (struct (0 T_92 t0000)))
  OrigDataType: (ptr (struct (0 T_92 t0000)))
T_46: (in 0x00000000 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_47: (in bl_161 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in bh_162 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_50: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_51: (in ax_92 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in al_102 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_53: (in 0x80 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in al_102 - 0x80 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in (int16) (al_102 - 0x80) : int16)
  Class: Eq_51
  DataType: int16
  OrigDataType: int16
T_56: (in 0x0040213E : word32)
  Class: Eq_56
  DataType: (ptr (struct (0 T_57 t0000)))
  OrigDataType: (ptr (struct (0 T_57 t0000)))
T_57: (in Mem94[0x0040213E:word16] : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_58: (in al_93 : byte)
  Class: Eq_58
  DataType: int8
  OrigDataType: int8
T_59: (in (byte) ax_92 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_60: (in dx_80 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in al_93 *s al_93 : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_62: (in dx_80 - al_93 *s al_93 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_63: (in dh_99 : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_64: (in SLICE(dx_80, byte, 8) : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in rLoc1_101 : real64)
  Class: Eq_65
  DataType: real64
  OrigDataType: real64
T_66: (in 0x0040213E : ptr32)
  Class: Eq_66
  DataType: (ptr (struct (0 T_67 t0000)))
  OrigDataType: (ptr (struct (0 T_67 t0000)))
T_67: (in Mem94[0x0040213E:int16] : int16)
  Class: Eq_51
  DataType: int16
  OrigDataType: int16
T_68: (in (real64) Mem94[0x0040213E:int16] : real64)
  Class: Eq_65
  DataType: real64
  OrigDataType: real64
T_69: (in eax_103 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in DPB(eax_103, bh_162, 0, 8) : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_71: (in P : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in atan : ptr32)
  Class: Eq_72
  DataType: (ptr (fn T_74 (T_73, T_65)))
  OrigDataType: (ptr (fn T_74 (T_73, T_65)))
T_73: (in rArg0 : real64)
  Class: Eq_73
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_74: (in atan(rArg0, rLoc1_101) : real64)
  Class: Eq_74
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_75: (in 0x0040213A : ptr32)
  Class: Eq_75
  DataType: (ptr (struct (0 T_76 t0000)))
  OrigDataType: (ptr (struct (0 T_76 t0000)))
T_76: (in Mem94[0x0040213A:word16] : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in (real64) Mem94[0x0040213A:word16] : real64)
  Class: Eq_77
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_78: (in atan(rArg0, rLoc1_101) * (real64) Mem94[0x0040213A:word16] : word32)
  Class: Eq_73
  DataType: real32
  OrigDataType: real32
T_79: (in (int16) rArg0 : int16)
  Class: Eq_51
  DataType: int16
  OrigDataType: int16
T_80: (in 0x0040213E : ptr32)
  Class: Eq_80
  DataType: (ptr (struct (0 T_81 t0000)))
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem112[0x0040213E:int16] : int16)
  Class: Eq_51
  DataType: int16
  OrigDataType: int16
T_82: (in ax_114 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0040213E : word32)
  Class: Eq_83
  DataType: (ptr (struct (0 T_84 t0000)))
  OrigDataType: (ptr (struct (0 T_84 t0000)))
T_84: (in Mem112[0x0040213E:word16] : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0040213B : ptr32)
  Class: Eq_85
  DataType: (ptr (struct (0 T_86 t0000)))
  OrigDataType: (ptr (struct (0 T_86 t0000)))
T_86: (in Mem112[0x0040213B:word16] : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem112[0x0040213E:word16] + Mem112[0x0040213B:word16] : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_88: (in ax_121 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in DPB(ax_114, dh_99, 0, 8) : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_90: (in ah_115 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in SLICE(ax_114, byte, 8) : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_92: (in cl_117 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in 0x00 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_94: (in cx : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x00 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in DPB(cx, 0x00, 0, 8) : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_97: (in DPB(eax_103, dh_99, 0, 8) : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_98: (in dh_131 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0x0707 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in ax_121 & 0x0707 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in (byte) (ax_121 & 0x0707) : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in ax_121 & 0x0707 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in SLICE(ax_121 & 0x0707, byte, 8) : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in (byte) (ax_121 & 0x0707) + SLICE(ax_121 & 0x0707, byte, 8) : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in (byte) (ax_121 & 0x0707) + SLICE(ax_121 & 0x0707, byte, 8) + dh_99 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_106: (in 0xEF : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_107: (in dh_99 <u 0xEF : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in 0xEA : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_109: (in dh_99 >u 0xEA : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x50 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_111: (in 0x50 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in DPB(cx, 0x50, 0, 8) : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_113: (in 0x0040211C : ptr32)
  Class: Eq_113
  DataType: (ptr (struct (0 T_114 t0000)))
  OrigDataType: (ptr (struct (0 T_114 t0000)))
T_114: (in Mem112[0x0040211C:word32] : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in ebx_160 + Mem112[0x0040211C:word32] : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in Mem153[ebx_160 + Mem112[0x0040211C:word32]:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_117: (in ebp_156 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in 0x00402120 : ptr32)
  Class: Eq_118
  DataType: (ptr (struct (0 T_119 t0000)))
  OrigDataType: (ptr (struct (0 T_119 t0000)))
T_119: (in Mem153[0x00402120:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_120: (in 0x80 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in dh_131 + 0x80 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_122: (in ebx_160 + ebp_156 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in Mem158[ebx_160 + ebp_156:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in bx_159 + 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_126: (in DPB(ebx_160, bx_159, 0, 16) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_127: (in (byte) bx_159 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_128: (in SLICE(bx_159, byte, 8) : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_129: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_130: (in bx_159 != 0x0000 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in 0x1F : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in ah_115 & 0x1F : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in DPB(cx, ah_115 & 0x1F, 8, 8) : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_134: (in ah_115 & 0x1F : byte)
  Class: Eq_134
  DataType: bcu8
  OrigDataType: bcu8
T_135: (in 0x03 : byte)
  Class: Eq_134
  DataType: bcu8
  OrigDataType: bcu8
T_136: (in (ah_115 & 0x1F) >u 0x03 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in 0xB4 : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_138: (in dh_99 >u 0xB4 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in 0xE9 : byte)
  Class: Eq_63
  DataType: bcu8
  OrigDataType: bcu8
T_140: (in dh_99 <u 0xE9 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in 0x14 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in dh_131 - 0x14 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_143: (in __ror : ptr32)
  Class: Eq_143
  DataType: (ptr (fn T_145 (T_63, T_144)))
  OrigDataType: (ptr (fn T_145 (T_63, T_144)))
T_144: (in 0x03 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in __ror(dh_99, 0x03) : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in 0x9B : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in __ror(dh_99, 0x03) + 0x9B : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_148: (in 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in cx - 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_150: (in cx - 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_152: (in DPB(eax_128, bl_161, 0, 8) : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_153: (in 0xF400 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_154: (in edi_165 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in 0x0003E800 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_156: (in si_167 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in 0xFF9C : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_158: (in eax_314 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in 0x00402104 : ptr32)
  Class: Eq_159
  DataType: (ptr (struct (0 T_160 t0000)))
  OrigDataType: (ptr (struct (0 T_160 t0000)))
T_160: (in Mem283[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: (ptr (struct (0 T_166 t0000)))
  OrigDataType: (ptr (struct (0 T_166 t0000)))
T_161: (in eax_249 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in 0x000000FF : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in eax_249 & 0x000000FF : word32)
  Class: Eq_163
  DataType: ui32
  OrigDataType: ui32
T_164: (in 0x00000004 : word32)
  Class: Eq_164
  DataType: ui32
  OrigDataType: ui32
T_165: (in (eax_249 & 0x000000FF) * 0x00000004 : word32)
  Class: Eq_165
  DataType: ui32
  OrigDataType: ui32
T_166: (in Mem283[0x00402104:word32][(eax_249 & 0x000000FF) * 0x00000004] : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_167: (in esp_282 : word32)
  Class: Eq_167
  DataType: (ptr (struct (0 T_117 t0000) (4 T_170 t0004) (8 T_177 t0008) (C T_181 t000C) (10 T_196 t0010) (14 T_362 t0014) (18 T_358 t0018) (1C T_354 t001C) (20 T_350 t0020) (24 T_172 t0024) (28 T_341 t0028) (2C T_319 t002C) (30 T_314 t0030) (34 T_447 t0034)))
  OrigDataType: (ptr (struct (0 T_117 t0000) (4 T_170 t0004) (8 T_177 t0008) (C T_181 t000C) (10 T_196 t0010) (14 T_362 t0014) (18 T_358 t0018) (1C T_354 t001C) (20 T_350 t0020) (24 T_172 t0024) (28 T_341 t0028) (2C T_319 t002C) (30 T_314 t0030) (34 T_447 t0034)))
T_168: (in 0x00000004 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in esp_282 + 0x00000004 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in Mem283[esp_282 + 0x00000004:word32] : word32)
  Class: Eq_170
  DataType: (ptr (struct (0 T_174 t0000)))
  OrigDataType: (ptr (struct (0 T_174 t0000)))
T_171: (in 0x00402100 : ptr32)
  Class: Eq_171
  DataType: (ptr (struct (0 T_172 t0000)))
  OrigDataType: (ptr (struct (0 T_172 t0000)))
T_172: (in Mem283[0x00402100:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_173: (in Mem283[esp_282 + 0x00000004:word32] + Mem283[0x00402100:word32] : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in Mem315[Mem283[esp_282 + 0x00000004:word32] + Mem283[0x00402100:word32]:word32] : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_175: (in 0x00000008 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in esp_282 + 0x00000008 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in Mem315[esp_282 + 0x00000008:word32] : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in (word16) Mem315[esp_282 + 0x00000008:word32] : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in 0xFF61 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_180: (in (word16) Mem315[esp_282 + 0x00000008:word32] != 0xFF61 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in edi_323 : word32)
  Class: Eq_181
  DataType: (ptr (struct (0 T_195 t0000)))
  OrigDataType: (ptr (struct (0 T_195 t0000)))
T_182: (in 0x0000000C : word32)
  Class: Eq_182
  DataType: word32
  OrigDataType: word32
T_183: (in esp_282 + 0x0000000C : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in Mem315[esp_282 + 0x0000000C:word32] : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_185: (in 0x00402104 : ptr32)
  Class: Eq_185
  DataType: (ptr (struct (0 T_186 t0000)))
  OrigDataType: (ptr (struct (0 T_186 t0000)))
T_186: (in Mem315[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: (ptr (struct (0 T_191 t0000)))
  OrigDataType: (ptr (struct (0 T_191 t0000)))
T_187: (in 0x000000FF : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_188: (in eax_314 & 0x000000FF : word32)
  Class: Eq_188
  DataType: ui32
  OrigDataType: ui32
T_189: (in 0x00000004 : word32)
  Class: Eq_189
  DataType: ui32
  OrigDataType: ui32
T_190: (in (eax_314 & 0x000000FF) * 0x00000004 : word32)
  Class: Eq_190
  DataType: ui32
  OrigDataType: ui32
T_191: (in Mem315[0x00402104:word32][(eax_314 & 0x000000FF) * 0x00000004] : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_192: (in 0x00402100 : ptr32)
  Class: Eq_192
  DataType: (ptr (struct (0 T_193 t0000)))
  OrigDataType: (ptr (struct (0 T_193 t0000)))
T_193: (in Mem315[0x00402100:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_194: (in edi_323 + Mem315[0x00402100:word32] : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in Mem333[edi_323 + Mem315[0x00402100:word32]:word32] : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_196: (in ebp_334 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in 0x00000010 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in esp_282 + 0x00000010 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in Mem333[esp_282 + 0x00000010:word32] : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_200: (in bp_335 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in (word16) ebp_334 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_202: (in 0x00000014 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in esp_282 + 0x00000014 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_204: (in 0x00000004 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in edi_323 - 0x00000004 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_206: (in 0x0001 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in bp_335 + 0x0001 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in bp_200 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_209: (in bp_335 + 0x0001 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in DPB(ebp_334, bp_335 + 0x0001, 0, 16) : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_211: (in 0xFF61 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_212: (in bp_335 != 0xFF61 : bool)
  Class: Eq_212
  DataType: bool
  OrigDataType: bool
T_213: (in ah_285 : byte)
  Class: Eq_92
  DataType: (union (int8 u0) (bcu8 u1))
  OrigDataType: (union (int8 u0) (bcu8 u1))
T_214: (in 0x00 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_215: (in ah_285 == 0x00 : bool)
  Class: Eq_215
  DataType: bool
  OrigDataType: bool
T_216: (in dh_274 : byte)
  Class: Eq_92
  DataType: (union (int8 u0) (bcu8 u1))
  OrigDataType: (union (int8 u0) (bcu8 u1))
T_217: (in 0x46 : byte)
  Class: Eq_92
  DataType: bcu8
  OrigDataType: bcu8
T_218: (in dh_274 <=u 0x46 : bool)
  Class: Eq_218
  DataType: bool
  OrigDataType: bool
T_219: (in dh_274 <u ah_285 : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in esp_220 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_221: (in 0x00000004 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in esp_220 - 0x00000004 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_223: (in 0x00000000 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in esp_282 + 0x00000000 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in Mem283[esp_282 + 0x00000000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_226: (in cx_222 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in cx_222 + bp_200 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_228: (in SLICE(cx_222, byte, 8) : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in DPB(ebx_160, SLICE(cx_222, byte, 8), 0, 8) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_230: (in dx_246 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in dx_246 + si_167 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_232: (in al_287 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_233: (in 0x00402120 : ptr32)
  Class: Eq_233
  DataType: (ptr (struct (0 T_234 t0000)))
  OrigDataType: (ptr (struct (0 T_234 t0000)))
T_234: (in Mem283[0x00402120:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_235: (in ebx_160 + Mem283[0x00402120:word32] : word32)
  Class: Eq_235
  DataType: word32
  OrigDataType: word32
T_236: (in Mem283[ebx_160 + Mem283[0x00402120:word32]:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_237: (in 0x00000000 : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in esp_282 + 0x00000000 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in Mem283[esp_282 + 0x00000000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_240: (in SLICE(dx_246, byte, 8) : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_241: (in 0x0040211C : ptr32)
  Class: Eq_241
  DataType: (ptr (struct (0 T_242 t0000)))
  OrigDataType: (ptr (struct (0 T_242 t0000)))
T_242: (in Mem283[0x0040211C:word32] : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_243: (in ebx_160 + Mem283[0x0040211C:word32] : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in Mem283[ebx_160 + Mem283[0x0040211C:word32]:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_245: (in DPB(eax_249, al_287, 0, 8) : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_246: (in (word16) ebp_156 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_247: (in esp_282 + 0x00000004 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_248: (in 0x00 : byte)
  Class: Eq_92
  DataType: int8
  OrigDataType: int8
T_249: (in ah_285 < 0x00 : bool)
  Class: Eq_249
  DataType: bool
  OrigDataType: bool
T_250: (in dh_274 < ah_285 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in al_287 + ah_285 : byte)
  Class: Eq_251
  DataType: byte
  OrigDataType: byte
T_252: (in DPB(eax_249, al_287 + ah_285, 0, 8) : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_253: (in esp_218 : word32)
  Class: Eq_253
  DataType: (ptr (struct (FFFFFFFC T_261 tFFFFFFFC) (0 T_258 t0000)))
  OrigDataType: (ptr (struct (FFFFFFFC T_261 tFFFFFFFC) (0 T_258 t0000)))
T_254: (in 0x00000004 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in esp_199 - 0x00000004 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_256: (in 0x00000000 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in esp_218 + 0x00000000 : word32)
  Class: Eq_257
  DataType: word32
  OrigDataType: word32
T_258: (in Mem219[esp_218 + 0x00000000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_259: (in 0x00000004 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in esp_218 - 0x00000004 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in Mem221[esp_218 - 0x00000004:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_262: (in dx_ax_230 : int32)
  Class: Eq_262
  DataType: int32
  OrigDataType: int32
T_263: (in 0x0040213C : word32)
  Class: Eq_263
  DataType: (ptr (struct (0 T_264 t0000)))
  OrigDataType: (ptr (struct (0 T_264 t0000)))
T_264: (in Mem221[0x0040213C:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_265: (in 0x0001 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in Mem221[0x0040213C:word16] << 0x0001 : word16)
  Class: Eq_266
  DataType: ui16
  OrigDataType: ui16
T_267: (in (byte) (Mem221[0x0040213C:word16] << 0x0001) : byte)
  Class: Eq_267
  DataType: byte
  OrigDataType: byte
T_268: (in (int16) (byte) (Mem221[0x0040213C:word16] << 0x0001) : int16)
  Class: Eq_268
  DataType: int16
  OrigDataType: int16
T_269: (in (int32) (int16) (byte) (Mem221[0x0040213C:word16] << 0x0001) : int32)
  Class: Eq_262
  DataType: int32
  OrigDataType: int32
T_270: (in al_234 : byte)
  Class: Eq_270
  DataType: int8
  OrigDataType: int8
T_271: (in (byte) dx_ax_230 : byte)
  Class: Eq_271
  DataType: byte
  OrigDataType: byte
T_272: (in 0x7F : byte)
  Class: Eq_272
  DataType: byte
  OrigDataType: byte
T_273: (in (byte) dx_ax_230 & 0x7F : byte)
  Class: Eq_273
  DataType: byte
  OrigDataType: byte
T_274: (in 0x40 : byte)
  Class: Eq_274
  DataType: byte
  OrigDataType: byte
T_275: (in ((byte) dx_ax_230 & 0x7F) - 0x40 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_276: (in ax_235 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in al_234 *s al_234 : int16)
  Class: Eq_276
  DataType: int16
  OrigDataType: int16
T_278: (in ax_238 : word16)
  Class: Eq_278
  DataType: ui16
  OrigDataType: ui16
T_279: (in SLICE(ax_235, byte, 8) : byte)
  Class: Eq_279
  DataType: byte
  OrigDataType: byte
T_280: (in 0x10 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_281: (in SLICE(ax_235, byte, 8) - 0x10 : byte)
  Class: Eq_281
  DataType: byte
  OrigDataType: byte
T_282: (in DPB(ax_235, SLICE(ax_235, byte, 8) - 0x10, 8, 8) : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_283: (in dx_239 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in SLICE(dx_ax_230, word16, 16) : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in SLICE(dx_ax_230, word16, 16) ^ ax_238 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_286: (in esp_218 - 0x00000004 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_287: (in 0x7F40 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_288: (in SLICE(dx_239, byte, 8) : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_289: (in 0x24 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in SLICE(dx_239, byte, 8) + 0x24 : byte)
  Class: Eq_290
  DataType: byte
  OrigDataType: byte
T_291: (in DPB(dx_239, SLICE(dx_239, byte, 8) + 0x24, 8, 8) : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_292: (in 0x0002 : word16)
  Class: Eq_292
  DataType: ui16
  OrigDataType: ui16
T_293: (in ax_238 * 0x0002 : word16)
  Class: Eq_293
  DataType: ui16
  OrigDataType: ui16
T_294: (in SLICE(ax_238 * 0x0002, byte, 8) : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in 0x01 : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in SLICE(ax_238 * 0x0002, byte, 8) - 0x01 : byte)
  Class: Eq_296
  DataType: byte
  OrigDataType: byte
T_297: (in DPB(eax_128, SLICE(ax_238 * 0x0002, byte, 8) - 0x01, 8, 8) : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_298: (in si_343 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in 0x0001 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in si_167 + 0x0001 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_301: (in 0x0064 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_302: (in si_343 != 0x0064 : bool)
  Class: Eq_302
  DataType: bool
  OrigDataType: bool
T_303: (in 0x0001 : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_304: (in si_343 + 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_305: (in 0xFF9D : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_306: (in si_343 != 0xFF9D : bool)
  Class: Eq_306
  DataType: bool
  OrigDataType: bool
T_307: (in 0xFF60 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_308: (in 0xFF60 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in DPB(ebp_156, 0xFF60, 0, 16) : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_310: (in ebx_358 : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_311: (in 0x00000024 : word32)
  Class: Eq_311
  DataType: word32
  OrigDataType: word32
T_312: (in esp_282 + 0x00000024 : word32)
  Class: Eq_312
  DataType: word32
  OrigDataType: word32
T_313: (in Mem333[esp_282 + 0x00000024:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_314: (in 0x004020F0 : word32)
  Class: Eq_314
  DataType: word32
  OrigDataType: word32
T_315: (in 0x00000030 : word32)
  Class: Eq_315
  DataType: word32
  OrigDataType: word32
T_316: (in esp_282 + 0x00000030 : word32)
  Class: Eq_316
  DataType: word32
  OrigDataType: word32
T_317: (in Mem367[esp_282 + 0x00000030:word32] : word32)
  Class: Eq_314
  DataType: word32
  OrigDataType: word32
T_318: (in 0x004020CC : ptr32)
  Class: Eq_318
  DataType: (ptr (struct (0 T_319 t0000)))
  OrigDataType: (ptr (struct (0 T_319 t0000)))
T_319: (in Mem367[0x004020CC:word32] : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_320: (in 0x0000002C : word32)
  Class: Eq_320
  DataType: word32
  OrigDataType: word32
T_321: (in esp_282 + 0x0000002C : word32)
  Class: Eq_321
  DataType: word32
  OrigDataType: word32
T_322: (in Mem369[esp_282 + 0x0000002C:word32] : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_323: (in GetClientRect : ptr32)
  Class: Eq_323
  DataType: (ptr (fn T_332 (T_328, T_331)))
  OrigDataType: (ptr (fn T_332 (T_328, T_331)))
T_324: (in signature of GetClientRect : void)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_325: (in hWnd : HWND)
  Class: Eq_319
  DataType: HWND
  OrigDataType: HWND
T_326: (in lpRect : LPRECT)
  Class: Eq_314
  DataType: LPRECT
  OrigDataType: LPRECT
T_327: (in esp_282 + 0x0000002C : word32)
  Class: Eq_327
  DataType: word32
  OrigDataType: word32
T_328: (in Mem369[esp_282 + 0x0000002C:HWND] : HWND)
  Class: Eq_319
  DataType: HWND
  OrigDataType: HWND
T_329: (in 48 : int32)
  Class: Eq_329
  DataType: int32
  OrigDataType: int32
T_330: (in esp_282 + 48 : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_331: (in Mem369[esp_282 + 48:LPRECT] : LPRECT)
  Class: Eq_314
  DataType: LPRECT
  OrigDataType: LPRECT
T_332: (in GetClientRect(Mem369[esp_282 + 0x0000002C:HWND], Mem369[esp_282 + 48:LPRECT]) : word32)
  Class: Eq_332
  DataType: word32
  OrigDataType: word32
T_333: (in 0x00CC0020 : word32)
  Class: Eq_314
  DataType: word32
  OrigDataType: word32
T_334: (in 0x00000030 : word32)
  Class: Eq_334
  DataType: word32
  OrigDataType: word32
T_335: (in esp_282 + 0x00000030 : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_336: (in Mem373[esp_282 + 0x00000030:word32] : word32)
  Class: Eq_314
  DataType: word32
  OrigDataType: word32
T_337: (in 0x00000000 : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_338: (in 0x0000002C : word32)
  Class: Eq_338
  DataType: word32
  OrigDataType: word32
T_339: (in esp_282 + 0x0000002C : word32)
  Class: Eq_339
  DataType: word32
  OrigDataType: word32
T_340: (in Mem375[esp_282 + 0x0000002C:word32] : word32)
  Class: Eq_319
  DataType: word32
  OrigDataType: word32
T_341: (in 0x0040206C : word32)
  Class: Eq_341
  DataType: word32
  OrigDataType: word32
T_342: (in 0x00000028 : word32)
  Class: Eq_342
  DataType: word32
  OrigDataType: word32
T_343: (in esp_282 + 0x00000028 : word32)
  Class: Eq_343
  DataType: word32
  OrigDataType: word32
T_344: (in Mem377[esp_282 + 0x00000028:word32] : word32)
  Class: Eq_341
  DataType: word32
  OrigDataType: word32
T_345: (in 0x00402100 : ptr32)
  Class: Eq_345
  DataType: (ptr (struct (0 T_346 t0000)))
  OrigDataType: (ptr (struct (0 T_346 t0000)))
T_346: (in Mem377[0x00402100:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_347: (in 0x00000024 : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_348: (in esp_282 + 0x00000024 : word32)
  Class: Eq_348
  DataType: word32
  OrigDataType: word32
T_349: (in Mem379[esp_282 + 0x00000024:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_350: (in 0x000000C8 : word32)
  Class: Eq_350
  DataType: word32
  OrigDataType: word32
T_351: (in 0x00000020 : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_352: (in esp_282 + 0x00000020 : word32)
  Class: Eq_352
  DataType: word32
  OrigDataType: word32
T_353: (in Mem381[esp_282 + 0x00000020:word32] : word32)
  Class: Eq_350
  DataType: word32
  OrigDataType: word32
T_354: (in 0x00000140 : word32)
  Class: Eq_354
  DataType: word32
  OrigDataType: word32
T_355: (in 0x0000001C : word32)
  Class: Eq_355
  DataType: word32
  OrigDataType: word32
T_356: (in esp_282 + 0x0000001C : word32)
  Class: Eq_356
  DataType: word32
  OrigDataType: word32
T_357: (in Mem383[esp_282 + 0x0000001C:word32] : word32)
  Class: Eq_354
  DataType: word32
  OrigDataType: word32
T_358: (in 0x00000000 : word32)
  Class: Eq_358
  DataType: word32
  OrigDataType: word32
T_359: (in 0x00000018 : word32)
  Class: Eq_359
  DataType: word32
  OrigDataType: word32
T_360: (in esp_282 + 0x00000018 : word32)
  Class: Eq_360
  DataType: word32
  OrigDataType: word32
T_361: (in Mem385[esp_282 + 0x00000018:word32] : word32)
  Class: Eq_358
  DataType: word32
  OrigDataType: word32
T_362: (in 0x00000000 : word32)
  Class: Eq_362
  DataType: word32
  OrigDataType: word32
T_363: (in 0x00000014 : word32)
  Class: Eq_363
  DataType: word32
  OrigDataType: word32
T_364: (in esp_282 + 0x00000014 : word32)
  Class: Eq_364
  DataType: word32
  OrigDataType: word32
T_365: (in Mem387[esp_282 + 0x00000014:word32] : word32)
  Class: Eq_362
  DataType: word32
  OrigDataType: word32
T_366: (in 0x004020FC : ptr32)
  Class: Eq_366
  DataType: (ptr (struct (0 T_367 t0000)))
  OrigDataType: (ptr (struct (0 T_367 t0000)))
T_367: (in Mem387[0x004020FC:word32] : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_368: (in 0x00000010 : word32)
  Class: Eq_368
  DataType: word32
  OrigDataType: word32
T_369: (in esp_282 + 0x00000010 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_370: (in Mem389[esp_282 + 0x00000010:word32] : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_371: (in 0x004020F8 : ptr32)
  Class: Eq_371
  DataType: (ptr (struct (0 T_372 t0000)))
  OrigDataType: (ptr (struct (0 T_372 t0000)))
T_372: (in Mem389[0x004020F8:word32] : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_373: (in 0x0000000C : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_374: (in esp_282 + 0x0000000C : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_375: (in Mem391[esp_282 + 0x0000000C:word32] : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_376: (in 0x00000000 : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_377: (in 0x00000008 : word32)
  Class: Eq_377
  DataType: word32
  OrigDataType: word32
T_378: (in esp_282 + 0x00000008 : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_379: (in Mem393[esp_282 + 0x00000008:word32] : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_380: (in 0x00000000 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_381: (in 0x00000004 : word32)
  Class: Eq_381
  DataType: word32
  OrigDataType: word32
T_382: (in esp_282 + 0x00000004 : word32)
  Class: Eq_382
  DataType: word32
  OrigDataType: word32
T_383: (in Mem395[esp_282 + 0x00000004:word32] : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_384: (in 0x004020D0 : ptr32)
  Class: Eq_384
  DataType: (ptr (struct (0 T_385 t0000)))
  OrigDataType: (ptr (struct (0 T_385 t0000)))
T_385: (in Mem395[0x004020D0:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_386: (in 0x00000000 : word32)
  Class: Eq_386
  DataType: word32
  OrigDataType: word32
T_387: (in esp_282 + 0x00000000 : word32)
  Class: Eq_387
  DataType: word32
  OrigDataType: word32
T_388: (in Mem397[esp_282 + 0x00000000:word32] : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_389: (in StretchDIBits : ptr32)
  Class: Eq_389
  DataType: (ptr (fn T_443 (T_406, T_409, T_412, T_415, T_418, T_421, T_424, T_427, T_430, T_433, T_436, T_439, T_442)))
  OrigDataType: (ptr (fn T_443 (T_406, T_409, T_412, T_415, T_418, T_421, T_424, T_427, T_430, T_433, T_436, T_439, T_442)))
T_390: (in signature of StretchDIBits : void)
  Class: Eq_389
  DataType: 
  OrigDataType: 
T_391: (in hdc : HDC)
  Class: Eq_117
  DataType: HDC
  OrigDataType: HDC
T_392: (in xDest : int32)
  Class: Eq_170
  DataType: int32
  OrigDataType: int32
T_393: (in yDest : int32)
  Class: Eq_177
  DataType: int32
  OrigDataType: int32
T_394: (in DestWidth : int32)
  Class: Eq_181
  DataType: int32
  OrigDataType: int32
T_395: (in DestHeight : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_396: (in xSrc : int32)
  Class: Eq_362
  DataType: int32
  OrigDataType: int32
T_397: (in ySrc : int32)
  Class: Eq_358
  DataType: int32
  OrigDataType: int32
T_398: (in SrcWidth : int32)
  Class: Eq_354
  DataType: int32
  OrigDataType: int32
T_399: (in SrcHeight : int32)
  Class: Eq_350
  DataType: int32
  OrigDataType: int32
T_400: (in lpBits : (ptr void))
  Class: Eq_172
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_401: (in lpbmi : (ptr BITMAPINFO))
  Class: Eq_341
  DataType: (ptr BITMAPINFO)
  OrigDataType: (ptr BITMAPINFO)
T_402: (in iUsage : UINT)
  Class: Eq_319
  DataType: UINT
  OrigDataType: UINT
T_403: (in rop : DWORD)
  Class: Eq_314
  DataType: DWORD
  OrigDataType: DWORD
T_404: (in 0x00000000 : word32)
  Class: Eq_404
  DataType: word32
  OrigDataType: word32
T_405: (in esp_282 + 0x00000000 : word32)
  Class: Eq_405
  DataType: word32
  OrigDataType: word32
T_406: (in Mem397[esp_282 + 0x00000000:HDC] : HDC)
  Class: Eq_117
  DataType: HDC
  OrigDataType: HDC
T_407: (in 4 : int32)
  Class: Eq_407
  DataType: int32
  OrigDataType: int32
T_408: (in esp_282 + 4 : word32)
  Class: Eq_408
  DataType: word32
  OrigDataType: word32
T_409: (in Mem397[esp_282 + 4:int32] : int32)
  Class: Eq_170
  DataType: int32
  OrigDataType: int32
T_410: (in 8 : int32)
  Class: Eq_410
  DataType: int32
  OrigDataType: int32
T_411: (in esp_282 + 8 : word32)
  Class: Eq_411
  DataType: word32
  OrigDataType: word32
T_412: (in Mem397[esp_282 + 8:int32] : int32)
  Class: Eq_177
  DataType: int32
  OrigDataType: int32
T_413: (in 12 : int32)
  Class: Eq_413
  DataType: int32
  OrigDataType: int32
T_414: (in esp_282 + 12 : word32)
  Class: Eq_414
  DataType: word32
  OrigDataType: word32
T_415: (in Mem397[esp_282 + 12:int32] : int32)
  Class: Eq_181
  DataType: int32
  OrigDataType: int32
T_416: (in 16 : int32)
  Class: Eq_416
  DataType: int32
  OrigDataType: int32
T_417: (in esp_282 + 16 : word32)
  Class: Eq_417
  DataType: word32
  OrigDataType: word32
T_418: (in Mem397[esp_282 + 16:int32] : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_419: (in 20 : int32)
  Class: Eq_419
  DataType: int32
  OrigDataType: int32
T_420: (in esp_282 + 20 : word32)
  Class: Eq_420
  DataType: word32
  OrigDataType: word32
T_421: (in Mem397[esp_282 + 20:int32] : int32)
  Class: Eq_362
  DataType: int32
  OrigDataType: int32
T_422: (in 24 : int32)
  Class: Eq_422
  DataType: int32
  OrigDataType: int32
T_423: (in esp_282 + 24 : word32)
  Class: Eq_423
  DataType: word32
  OrigDataType: word32
T_424: (in Mem397[esp_282 + 24:int32] : int32)
  Class: Eq_358
  DataType: int32
  OrigDataType: int32
T_425: (in 28 : int32)
  Class: Eq_425
  DataType: int32
  OrigDataType: int32
T_426: (in esp_282 + 28 : word32)
  Class: Eq_426
  DataType: word32
  OrigDataType: word32
T_427: (in Mem397[esp_282 + 28:int32] : int32)
  Class: Eq_354
  DataType: int32
  OrigDataType: int32
T_428: (in 32 : int32)
  Class: Eq_428
  DataType: int32
  OrigDataType: int32
T_429: (in esp_282 + 32 : word32)
  Class: Eq_429
  DataType: word32
  OrigDataType: word32
T_430: (in Mem397[esp_282 + 32:int32] : int32)
  Class: Eq_350
  DataType: int32
  OrigDataType: int32
T_431: (in 36 : int32)
  Class: Eq_431
  DataType: int32
  OrigDataType: int32
T_432: (in esp_282 + 36 : word32)
  Class: Eq_432
  DataType: word32
  OrigDataType: word32
T_433: (in Mem397[esp_282 + 36:(ptr void)] : (ptr void))
  Class: Eq_172
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_434: (in 40 : int32)
  Class: Eq_434
  DataType: int32
  OrigDataType: int32
T_435: (in esp_282 + 40 : word32)
  Class: Eq_435
  DataType: word32
  OrigDataType: word32
T_436: (in Mem397[esp_282 + 40:(ptr BITMAPINFO)] : (ptr BITMAPINFO))
  Class: Eq_341
  DataType: (ptr BITMAPINFO)
  OrigDataType: (ptr BITMAPINFO)
T_437: (in 44 : int32)
  Class: Eq_437
  DataType: int32
  OrigDataType: int32
T_438: (in esp_282 + 44 : word32)
  Class: Eq_438
  DataType: word32
  OrigDataType: word32
T_439: (in Mem397[esp_282 + 44:UINT] : UINT)
  Class: Eq_319
  DataType: UINT
  OrigDataType: UINT
T_440: (in 48 : int32)
  Class: Eq_440
  DataType: int32
  OrigDataType: int32
T_441: (in esp_282 + 48 : word32)
  Class: Eq_441
  DataType: word32
  OrigDataType: word32
T_442: (in Mem397[esp_282 + 48:DWORD] : DWORD)
  Class: Eq_314
  DataType: DWORD
  OrigDataType: DWORD
T_443: (in StretchDIBits(Mem397[esp_282 + 0x00000000:HDC], Mem397[esp_282 + 4:int32], Mem397[esp_282 + 8:int32], Mem397[esp_282 + 12:int32], Mem397[esp_282 + 16:int32], Mem397[esp_282 + 20:int32], Mem397[esp_282 + 24:int32], Mem397[esp_282 + 28:int32], Mem397[esp_282 + 32:int32], Mem397[esp_282 + 36:(ptr void)], Mem397[esp_282 + 40:(ptr BITMAPINFO)], Mem397[esp_282 + 44:UINT], Mem397[esp_282 + 48:DWORD]) : word32)
  Class: Eq_443
  DataType: word32
  OrigDataType: word32
T_444: (in edi_403 : word32)
  Class: Eq_444
  DataType: word32
  OrigDataType: word32
T_445: (in 0x00000034 : word32)
  Class: Eq_445
  DataType: word32
  OrigDataType: word32
T_446: (in esp_282 + 0x00000034 : word32)
  Class: Eq_446
  DataType: word32
  OrigDataType: word32
T_447: (in Mem397[esp_282 + 0x00000034:word32] : word32)
  Class: Eq_447
  DataType: word32
  OrigDataType: word32
T_448: (in ediOut : ptr32)
  Class: Eq_448
  DataType: ptr32
  OrigDataType: ptr32
T_449: (in *ediOut : word32)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_450: (in esi_406 : word32)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_451: (in 0x00000038 : word32)
  Class: Eq_451
  DataType: 
  OrigDataType: 
T_452: (in esp_282 + 0x00000038 : word32)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_453: (in Mem397[esp_282 + 0x00000038:word32] : word32)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_454: (in esiOut : ptr32)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_455: (in *esiOut : word32)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_456: (in ebp_409 : word32)
  Class: Eq_456
  DataType: 
  OrigDataType: 
T_457: (in 0x0000003C : word32)
  Class: Eq_457
  DataType: 
  OrigDataType: 
T_458: (in esp_282 + 0x0000003C : word32)
  Class: Eq_458
  DataType: 
  OrigDataType: 
T_459: (in Mem397[esp_282 + 0x0000003C:word32] : word32)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_460: (in ebpOut : ptr32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in *ebpOut : word32)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_462: (in ebx_413 : word32)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_463: (in 0x00000044 : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in esp_282 + 0x00000044 : word32)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in Mem397[esp_282 + 0x00000044:word32] : word32)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_466: (in 0x004020F0 : word32)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in 0x00000050 : word32)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in esp_282 + 0x00000050 : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in Mem425[esp_282 + 0x00000050:word32] : word32)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_470: (in 0x004020CC : ptr32)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_471: (in Mem425[0x004020CC:word32] : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in 0x0000004C : word32)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in esp_282 + 0x0000004C : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in Mem427[esp_282 + 0x0000004C:word32] : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_475: (in GetClientRect : ptr32)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_476: (in esp_282 + 0x0000004C : word32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in Mem427[esp_282 + 0x0000004C:HWND] : HWND)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_478: (in 80 : int32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_479: (in esp_282 + 80 : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in Mem427[esp_282 + 80:LPRECT] : LPRECT)
  Class: Eq_314
  DataType: 
  OrigDataType: 
T_481: (in GetClientRect(Mem427[esp_282 + 0x0000004C:HWND], Mem427[esp_282 + 80:LPRECT]) : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in 0x00CC0020 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in 0x00000050 : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_484: (in esp_282 + 0x00000050 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_485: (in Mem431[esp_282 + 0x00000050:word32] : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_486: (in 0x00000000 : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in 0x0000004C : word32)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_488: (in esp_282 + 0x0000004C : word32)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in Mem433[esp_282 + 0x0000004C:word32] : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_490: (in 0x0040206C : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in 0x00000048 : word32)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_492: (in esp_282 + 0x00000048 : word32)
  Class: Eq_492
  DataType: 
  OrigDataType: 
T_493: (in Mem435[esp_282 + 0x00000048:word32] : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_494: (in 0x00402100 : ptr32)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_495: (in Mem435[0x00402100:word32] : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in 0x00000044 : word32)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in esp_282 + 0x00000044 : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in Mem437[esp_282 + 0x00000044:word32] : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_499: (in 0x000000C8 : word32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in 0x00000040 : word32)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in esp_282 + 0x00000040 : word32)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_502: (in Mem439[esp_282 + 0x00000040:word32] : word32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_503: (in 0x00000140 : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_504: (in 0x0000003C : word32)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in esp_282 + 0x0000003C : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_506: (in Mem441[esp_282 + 0x0000003C:word32] : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_507: (in 0x00000000 : word32)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in 0x00000038 : word32)
  Class: Eq_508
  DataType: 
  OrigDataType: 
T_509: (in esp_282 + 0x00000038 : word32)
  Class: Eq_509
  DataType: 
  OrigDataType: 
T_510: (in Mem443[esp_282 + 0x00000038:word32] : word32)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_511: (in 0x00000000 : word32)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in 0x00000034 : word32)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in esp_282 + 0x00000034 : word32)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_514: (in Mem445[esp_282 + 0x00000034:word32] : word32)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_515: (in 0x004020FC : ptr32)
  Class: Eq_515
  DataType: 
  OrigDataType: 
T_516: (in Mem445[0x004020FC:word32] : word32)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_517: (in 0x00000030 : word32)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in esp_282 + 0x00000030 : word32)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in Mem447[esp_282 + 0x00000030:word32] : word32)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_520: (in 0x004020F8 : ptr32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in Mem447[0x004020F8:word32] : word32)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in 0x0000002C : word32)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in esp_282 + 0x0000002C : word32)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in Mem449[esp_282 + 0x0000002C:word32] : word32)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_525: (in 0x00000000 : word32)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in 0x00000028 : word32)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in esp_282 + 0x00000028 : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in Mem451[esp_282 + 0x00000028:word32] : word32)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_529: (in 0x00000000 : word32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in 0x00000024 : word32)
  Class: Eq_530
  DataType: 
  OrigDataType: 
T_531: (in esp_282 + 0x00000024 : word32)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in Mem453[esp_282 + 0x00000024:word32] : word32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_533: (in 0x004020D0 : ptr32)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in Mem453[0x004020D0:word32] : word32)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_535: (in 0x00000020 : word32)
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_536: (in esp_282 + 0x00000020 : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in Mem455[esp_282 + 0x00000020:word32] : word32)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_538: (in StretchDIBits : ptr32)
  Class: Eq_389
  DataType: 
  OrigDataType: 
T_539: (in esp_282 + 0x00000020 : word32)
  Class: Eq_539
  DataType: 
  OrigDataType: 
T_540: (in Mem455[esp_282 + 0x00000020:HDC] : HDC)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_541: (in 36 : int32)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in esp_282 + 36 : word32)
  Class: Eq_542
  DataType: 
  OrigDataType: 
T_543: (in Mem455[esp_282 + 36:int32] : int32)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_544: (in 40 : int32)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_545: (in esp_282 + 40 : word32)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in Mem455[esp_282 + 40:int32] : int32)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_547: (in 44 : int32)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_548: (in esp_282 + 44 : word32)
  Class: Eq_548
  DataType: 
  OrigDataType: 
T_549: (in Mem455[esp_282 + 44:int32] : int32)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_550: (in 48 : int32)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_551: (in esp_282 + 48 : word32)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in Mem455[esp_282 + 48:int32] : int32)
  Class: Eq_196
  DataType: 
  OrigDataType: 
T_553: (in 52 : int32)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in esp_282 + 52 : word32)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in Mem455[esp_282 + 52:int32] : int32)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_556: (in 56 : int32)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_557: (in esp_282 + 56 : word32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in Mem455[esp_282 + 56:int32] : int32)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_559: (in 60 : int32)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_560: (in esp_282 + 60 : word32)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in Mem455[esp_282 + 60:int32] : int32)
  Class: Eq_354
  DataType: 
  OrigDataType: 
T_562: (in 64 : int32)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_563: (in esp_282 + 64 : word32)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in Mem455[esp_282 + 64:int32] : int32)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_565: (in 68 : int32)
  Class: Eq_565
  DataType: 
  OrigDataType: 
T_566: (in esp_282 + 68 : word32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in Mem455[esp_282 + 68:(ptr void)] : (ptr void))
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_568: (in 72 : int32)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_569: (in esp_282 + 72 : word32)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in Mem455[esp_282 + 72:(ptr BITMAPINFO)] : (ptr BITMAPINFO))
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_571: (in 76 : int32)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in esp_282 + 76 : word32)
  Class: Eq_572
  DataType: 
  OrigDataType: 
T_573: (in Mem455[esp_282 + 76:UINT] : UINT)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_574: (in 80 : int32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in esp_282 + 80 : word32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in Mem455[esp_282 + 80:DWORD] : DWORD)
  Class: Eq_314
  DataType: 
  OrigDataType: 
T_577: (in StretchDIBits(Mem455[esp_282 + 0x00000020:HDC], Mem455[esp_282 + 36:int32], Mem455[esp_282 + 40:int32], Mem455[esp_282 + 44:int32], Mem455[esp_282 + 48:int32], Mem455[esp_282 + 52:int32], Mem455[esp_282 + 56:int32], Mem455[esp_282 + 60:int32], Mem455[esp_282 + 64:int32], Mem455[esp_282 + 68:(ptr void)], Mem455[esp_282 + 72:(ptr BITMAPINFO)], Mem455[esp_282 + 76:UINT], Mem455[esp_282 + 80:DWORD]) : word32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in 0x0001 : word16)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in cx - 0x0001 : word16)
  Class: Eq_94
  DataType: 
  OrigDataType: 
T_580: (in (byte) cx : byte)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_581: (in esp_138 : word32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in eax_6 : word32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in GlobalAlloc : ptr32)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in signature of GlobalAlloc : void)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_585: (in uFlags : UINT)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in dwBytes : SIZE_T)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in 0x00000000 : word32)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_588: (in 0x000F4240 : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_589: (in GlobalAlloc(0x00000000, 0x000F4240) : word32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_590: (in 0x00000000 : word32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_591: (in eax_6 == 0x00000000 : bool)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in 0x0040204C : word32)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in fp : ptr32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_594: (in 0x0000000C : word32)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in fp - 0x0000000C : word32)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in Mem134[fp - 0x0000000C:word32] : word32)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_597: (in 0x00000000 : word32)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in 0x00000010 : word32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in fp - 0x00000010 : word32)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in Mem136[fp - 0x00000010:word32] : word32)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_601: (in MessageBoxW : ptr32)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in signature of MessageBoxW : void)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_603: (in hWnd : HWND)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in lpText : LPCWSTR)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in lpCaption : LPCWSTR)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in uType : UINT)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in 0x00000000 : word32)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_608: (in 0x00000000 : word32)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_609: (in 0x00000000 : word32)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_610: (in 0x00000010 : word32)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_611: (in MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010) : word32)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in 0x0040210C : word32)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in Mem143[0x0040210C:word32] : word32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_614: (in 0x00402104 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in Mem144[0x00402104:word32] : word32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_616: (in 0x000007D0 : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in eax_6 + 0x000007D0 : word32)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in 0x00402100 : word32)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in Mem146[0x00402100:word32] : word32)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_620: (in 0x00062250 : word32)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in eax_6 + 0x00062250 : word32)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in 0x0040211C : word32)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in Mem148[0x0040211C:word32] : word32)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_624: (in 0x00092F90 : word32)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in eax_6 + 0x00092F90 : word32)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in 0x00402120 : word32)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in Mem150[0x00402120:word32] : word32)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_628: (in 0x00000000 : word32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in 0x00000004 : word32)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in fp - 0x00000004 : word32)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in Mem152[fp - 0x00000004:word32] : word32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_632: (in GetModuleHandleW : ptr32)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in signature of GetModuleHandleW : void)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_634: (in lpModuleName : LPCWSTR)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in 0x000F4240 : word32)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_636: (in GetModuleHandleW(0x000F4240) : word32)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in 0x004020B4 : word32)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in Mem155[0x004020B4:word32] : word32)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_639: (in 0x00007F00 : word32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x00000004 : word32)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in fp - 0x00000004 : word32)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in Mem157[fp - 0x00000004:word32] : word32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_643: (in 0x00000000 : word32)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in 0x00000008 : word32)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in fp - 0x00000008 : word32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in Mem159[fp - 0x00000008:word32] : word32)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_647: (in LoadIconW : ptr32)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in signature of LoadIconW : void)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_649: (in hInstance : HINSTANCE)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in lpIconName : LPCWSTR)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_651: (in 0x00000000 : word32)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_652: (in LoadIconW(0x00000000, 0x000F4240) : word32)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in 0x004020B8 : word32)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in Mem162[0x004020B8:word32] : word32)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_655: (in 0x00007F00 : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in 0x00000004 : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in fp - 0x00000004 : word32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in Mem164[fp - 0x00000004:word32] : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_659: (in 0x00000000 : word32)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in 0x00000008 : word32)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in fp - 0x00000008 : word32)
  Class: Eq_661
  DataType: 
  OrigDataType: 
T_662: (in Mem166[fp - 0x00000008:word32] : word32)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_663: (in LoadCursorW : ptr32)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in signature of LoadCursorW : void)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_665: (in hInstance : HINSTANCE)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_666: (in lpCursorName : LPCWSTR)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_667: (in LoadCursorW(0x00000000, 0x000F4240) : word32)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in 0x004020BC : word32)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in Mem169[0x004020BC:word32] : word32)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_670: (in 0x004020A4 : word32)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_671: (in 0x00000004 : word32)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in fp - 0x00000004 : word32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in Mem171[fp - 0x00000004:word32] : word32)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_674: (in RegisterClassW : ptr32)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in signature of RegisterClassW : void)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_676: (in lpWndClass : (ptr WNDCLASSW))
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_677: (in RegisterClassW(0x000F4240) : word32)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in 0x00000000 : word32)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_679: (in RegisterClassW(0x000F4240) == 0x00000000 : bool)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in 0x00000000 : word32)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in 0x00000004 : word32)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in fp - 0x00000004 : word32)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in Mem178[fp - 0x00000004:word32] : word32)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_684: (in 0x004020B4 : ptr32)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in Mem178[0x004020B4:word32] : word32)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_686: (in 0x00000008 : word32)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in fp - 0x00000008 : word32)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_688: (in Mem180[fp - 0x00000008:word32] : word32)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_689: (in eax_201 : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in CreateWindowExW : ptr32)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in signature of CreateWindowExW : void)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_692: (in dwExStyle : DWORD)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in lpClassName : LPCWSTR)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in lpWindowName : LPCWSTR)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in dwStyle : DWORD)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in X : int32)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in Y : int32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in nWidth : int32)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in nHeight : int32)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in hWndParent : HWND)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in hMenu : HMENU)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in hInstance : HINSTANCE)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_703: (in lpParam : LPVOID)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_704: (in 0x00000000 : word32)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_705: (in 0x00402000 : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_706: (in 0x00402012 : word32)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_707: (in 0x10CF0000 : word32)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_708: (in 0x00008000 : word32)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_709: (in 0x00008000 : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_710: (in 0x0000021C : word32)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_711: (in 0x00000190 : word32)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_712: (in 0x00000000 : word32)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_713: (in 0x00000000 : word32)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_714: (in CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4) : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_715: (in 0x00000000 : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_716: (in eax_201 == 0x00000000 : bool)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in 0x004020CC : word32)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_718: (in Mem206[0x004020CC:word32] : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_719: (in 0x00000004 : word32)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in fp - 0x00000004 : word32)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in Mem208[fp - 0x00000004:word32] : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_722: (in GetDC : ptr32)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in signature of GetDC : void)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_724: (in hWnd : HWND)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_725: (in GetDC(0x00000000) : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in 0x004020D0 : word32)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in Mem211[0x004020D0:word32] : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_728: (in fn00401000 : ptr32)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in signature of fn00401000 : void)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_730: (in fn00401000() : void)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_731: (in fn00401020 : ptr32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in signature of fn00401020 : void)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_733: (in rArg0 : real64)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_734: (in ebp : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in out ebp : ptr32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_736: (in esi : word32)
  Class: Eq_736
  DataType: 
  OrigDataType: 
T_737: (in out esi : ptr32)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_738: (in edi : word32)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in out edi : ptr32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_740: (in fn00401020(rArg0, out ebp, out esi, out edi) : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in ebx : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_742: (in 0x00000004 : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in 0x00000004 : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in fp - 0x00000004 : word32)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_745: (in Mem218[fp - 0x00000004:word32] : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_746: (in 0x004020D0 : ptr32)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in Mem218[0x004020D0:word32] : word32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in 0x00000008 : word32)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in fp - 0x00000008 : word32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in Mem220[fp - 0x00000008:word32] : word32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_751: (in SetStretchBltMode : ptr32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in signature of SetStretchBltMode : void)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_753: (in hdc : HDC)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in mode : int32)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in fp - 0x00000008 : word32)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in Mem220[fp - 0x00000008:HDC] : HDC)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_757: (in 4 : int32)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in fp - 4 : word32)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in Mem220[fp - 4:int32] : int32)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_760: (in SetStretchBltMode(Mem220[fp - 0x00000008:HDC], Mem220[fp - 4:int32]) : word32)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in esp_222 : word32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_762: (in esp_40 : word32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in 0x00000004 : word32)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in esp_138 - 0x00000004 : word32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_765: (in 0x004020D0 : ptr32)
  Class: Eq_765
  DataType: 
  OrigDataType: 
T_766: (in Mem0[0x004020D0:word32] : word32)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in 0x00000000 : word32)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in esp_40 + 0x00000000 : word32)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in Mem42[esp_40 + 0x00000000:word32] : word32)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_770: (in 0x004020CC : ptr32)
  Class: Eq_770
  DataType: 
  OrigDataType: 
T_771: (in Mem42[0x004020CC:word32] : word32)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in 0x00000004 : word32)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in esp_40 - 0x00000004 : word32)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in Mem44[esp_40 - 0x00000004:word32] : word32)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_775: (in ReleaseDC : ptr32)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_776: (in signature of ReleaseDC : void)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_777: (in hWnd : HWND)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_778: (in hDC : HDC)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in esp_40 - 0x00000004 : word32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in Mem44[esp_40 - 0x00000004:HWND] : HWND)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_781: (in 0x00000000 : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_782: (in esp_40 + 0x00000000 : word32)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in Mem44[esp_40 + 0x00000000:HDC] : HDC)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_784: (in ReleaseDC(Mem44[esp_40 - 0x00000004:HWND], Mem44[esp_40 + 0x00000000:HDC]) : word32)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in 0x0040210C : ptr32)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_786: (in Mem44[0x0040210C:word32] : word32)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in 0x00000000 : word32)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in esp_40 + 0x00000000 : word32)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_789: (in Mem48[esp_40 + 0x00000000:word32] : word32)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_790: (in GlobalFree : ptr32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in signature of GlobalFree : void)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_792: (in hMem : HGLOBAL)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in 0x00000000 : word32)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in esp_40 + 0x00000000 : word32)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in Mem48[esp_40 + 0x00000000:HGLOBAL] : HGLOBAL)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_796: (in GlobalFree(Mem48[esp_40 + 0x00000000:HGLOBAL]) : word32)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in 0x004020DC : ptr32)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in Mem48[0x004020DC:word32] : word32)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in 0x00000000 : word32)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in esp_40 + 0x00000000 : word32)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in Mem52[esp_40 + 0x00000000:word32] : word32)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_802: (in ExitProcess : ptr32)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in signature of ExitProcess : void)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_804: (in uExitCode : UINT)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in 0x00000000 : word32)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in esp_40 + 0x00000000 : word32)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_807: (in Mem52[esp_40 + 0x00000000:UINT] : UINT)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_808: (in ExitProcess(Mem52[esp_40 + 0x00000000:UINT]) : void)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in 0x00000000 : word32)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in esp_40 + 0x00000000 : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_811: (in Mem55[esp_40 + 0x00000000:word32] : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_812: (in 0x00000004 : word32)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in esp_40 - 0x00000004 : word32)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in Mem58[esp_40 - 0x00000004:word32] : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_815: (in 0x00000008 : word32)
  Class: Eq_815
  DataType: 
  OrigDataType: 
T_816: (in esp_40 - 0x00000008 : word32)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in Mem60[esp_40 - 0x00000008:word32] : word32)
  Class: Eq_736
  DataType: 
  OrigDataType: 
T_818: (in 0x0000000C : word32)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in esp_40 - 0x0000000C : word32)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in Mem62[esp_40 - 0x0000000C:word32] : word32)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_821: (in ebp_103 : word32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_822: (in 0x0000000C : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in esp_40 + 0x0000000C : word32)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in Mem62[esp_40 + 0x0000000C:word32] : word32)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in 0x00000002 : word32)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_826: (in Mem62[esp_40 + 0x0000000C:word32] == 0x00000002 : bool)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in 0x004020D4 : word32)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in esp_229 : word32)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in 0x00000000 : word32)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in esp_229 + 0x00000000 : word32)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in Mem244[esp_229 + 0x00000000:word32] : word32)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_832: (in TranslateMessage : ptr32)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_833: (in signature of TranslateMessage : void)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_834: (in lpMsg : (ptr MSG))
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in 0x00000000 : word32)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in esp_229 + 0x00000000 : word32)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in Mem244[esp_229 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_838: (in TranslateMessage(Mem244[esp_229 + 0x00000000:(ptr MSG)]) : word32)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in 0x004020D4 : word32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in 0x00000000 : word32)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in esp_229 + 0x00000000 : word32)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in Mem248[esp_229 + 0x00000000:word32] : word32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_843: (in DispatchMessageW : ptr32)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in signature of DispatchMessageW : void)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_845: (in lpMsg : (ptr MSG))
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in 0x00000000 : word32)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in esp_229 + 0x00000000 : word32)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in Mem248[esp_229 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_849: (in DispatchMessageW(Mem248[esp_229 + 0x00000000:(ptr MSG)]) : word32)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_850: (in fn00401020 : ptr32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_851: (in rArg1 : real64)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_852: (in out ebp : ptr32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_853: (in out esi : ptr32)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_854: (in out edi : ptr32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_855: (in fn00401020(rArg1, out ebp, out esi, out edi) : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_856: (in 0x00402108 : ptr32)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in Mem248[0x00402108:word32] : word32)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in 0x00000001 : word32)
  Class: Eq_858
  DataType: 
  OrigDataType: 
T_859: (in Mem248[0x00402108:word32] + 0x00000001 : word32)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in Mem256[0x00402108:word32] : word32)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_861: (in 0x00000004 : word32)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_862: (in esp_229 + 0x00000004 : word32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_863: (in 0x00000004 : word32)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in esp_222 - 0x00000004 : word32)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_865: (in 0x00000001 : word32)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in 0x00000000 : word32)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in esp_229 + 0x00000000 : word32)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in Mem230[esp_229 + 0x00000000:word32] : word32)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_869: (in 0x00000000 : word32)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in 0x00000004 : word32)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in esp_229 - 0x00000004 : word32)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in Mem232[esp_229 - 0x00000004:word32] : word32)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_873: (in 0x00000000 : word32)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_874: (in 0x00000008 : word32)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_875: (in esp_229 - 0x00000008 : word32)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in Mem234[esp_229 - 0x00000008:word32] : word32)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_877: (in 0x00000000 : word32)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in 0x0000000C : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in esp_229 - 0x0000000C : word32)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in Mem236[esp_229 - 0x0000000C:word32] : word32)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_881: (in 0x004020D4 : word32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in 0x00000010 : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in esp_229 - 0x00000010 : word32)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in Mem238[esp_229 - 0x00000010:word32] : word32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_885: (in PeekMessageW : ptr32)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_886: (in signature of PeekMessageW : void)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_887: (in lpMsg : LPMSG)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in hWnd : HWND)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in wMsgFilterMin : UINT)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in wMsgFilterMax : UINT)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in wRemoveMsg : UINT)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in esp_229 - 0x00000010 : word32)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in Mem238[esp_229 - 0x00000010:LPMSG] : LPMSG)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_894: (in 12 : int32)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in esp_229 - 12 : word32)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in Mem238[esp_229 - 12:HWND] : HWND)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_897: (in 8 : int32)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in esp_229 - 8 : word32)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in Mem238[esp_229 - 8:UINT] : UINT)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_900: (in 4 : int32)
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_901: (in esp_229 - 4 : word32)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in Mem238[esp_229 - 4:UINT] : UINT)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_903: (in 0x00000000 : word32)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in esp_229 + 0x00000000 : word32)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in Mem238[esp_229 + 0x00000000:UINT] : UINT)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_906: (in PeekMessageW(Mem238[esp_229 - 0x00000010:LPMSG], Mem238[esp_229 - 12:HWND], Mem238[esp_229 - 8:UINT], Mem238[esp_229 - 4:UINT], Mem238[esp_229 + 0x00000000:UINT]) : word32)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_907: (in 0x00000004 : word32)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in esp_229 + 0x00000004 : word32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_909: (in 0x004020D8 : ptr32)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in Mem238[0x004020D8:word32] : word32)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in 0x00000012 : word32)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_912: (in Mem238[0x004020D8:word32] == 0x00000012 : bool)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in 0x00000000 : word32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in 0x00000010 : word32)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in esp_40 - 0x00000010 : word32)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in Mem111[esp_40 - 0x00000010:word32] : word32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_917: (in PostQuitMessage : ptr32)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in signature of PostQuitMessage : void)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_919: (in nExitCode : int32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in esp_40 - 0x00000010 : word32)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in Mem111[esp_40 - 0x00000010:int32] : int32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_922: (in PostQuitMessage(Mem111[esp_40 - 0x00000010:int32]) : void)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in 0x0000000C : word32)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in esp_40 + 0x0000000C : word32)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in Mem62[esp_40 + 0x0000000C:word32] : word32)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in 0x00000005 : word32)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_927: (in Mem62[esp_40 + 0x0000000C:word32] == 0x00000005 : bool)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in 0x00402108 : ptr32)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in Mem62[0x00402108:word32] : word32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in 0x0000000A : word32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_931: (in Mem62[0x00402108:word32] <u 0x0000000A : bool)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in 0x00000014 : word32)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in ebp_103 + 0x00000014 : word32)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in Mem62[ebp_103 + 0x00000014:word32] : word32)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in 0x00000010 : word32)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in esp_40 - 0x00000010 : word32)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in Mem90[esp_40 - 0x00000010:word32] : word32)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_938: (in 0x00000010 : word32)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in ebp_103 + 0x00000010 : word32)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in Mem90[ebp_103 + 0x00000010:word32] : word32)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_941: (in 0x00000014 : word32)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in esp_40 - 0x00000014 : word32)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in Mem92[esp_40 - 0x00000014:word32] : word32)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_944: (in 0x0000000C : word32)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in ebp_103 + 0x0000000C : word32)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in Mem92[ebp_103 + 0x0000000C:word32] : word32)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in 0x00000018 : word32)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in esp_40 - 0x00000018 : word32)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in Mem94[esp_40 - 0x00000018:word32] : word32)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_950: (in 0x00000008 : word32)
  Class: Eq_950
  DataType: 
  OrigDataType: 
T_951: (in ebp_103 + 0x00000008 : word32)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in Mem94[ebp_103 + 0x00000008:word32] : word32)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in 0x0000001C : word32)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in esp_40 - 0x0000001C : word32)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in Mem96[esp_40 - 0x0000001C:word32] : word32)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_956: (in DefWindowProcW : ptr32)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in signature of DefWindowProcW : void)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_958: (in hWnd : HWND)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in Msg : UINT)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in wParam : WPARAM)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in lParam : LPARAM)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in esp_40 - 0x0000001C : word32)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in Mem96[esp_40 - 0x0000001C:HWND] : HWND)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_964: (in 24 : int32)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in esp_40 - 24 : word32)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in Mem96[esp_40 - 24:UINT] : UINT)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_967: (in 20 : int32)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in esp_40 - 20 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in Mem96[esp_40 - 20:WPARAM] : WPARAM)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_970: (in 16 : int32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in esp_40 - 16 : word32)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in Mem96[esp_40 - 16:LPARAM] : LPARAM)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_973: (in DefWindowProcW(Mem96[esp_40 - 0x0000001C:HWND], Mem96[esp_40 - 24:UINT], Mem96[esp_40 - 20:WPARAM], Mem96[esp_40 - 16:LPARAM]) : word32)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in esi_104 : word32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in edi_105 : word32)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in fn00401020 : ptr32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_977: (in out ebp_103 : ptr32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_978: (in out esi_104 : ptr32)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_979: (in out edi_105 : ptr32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_980: (in fn00401020(rArg1, out ebp_103, out esi_104, out edi_105) : word32)
  Class: Eq_980
  DataType: 
  OrigDataType: 
*/
