// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_379/ia32_pe/subject.exe
// using Decompiler version VERSION

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
T_31: (in edi_31 : word32)
  Class: Eq_31
  DataType: (ptr (struct 0001 (0 T_50 t0000)))
  OrigDataType: (ptr (struct 0001 (0 T_50 t0000)))
T_32: (in 0x00402124 : ptr32)
  Class: Eq_32
  DataType: (ptr (struct (0 T_33 t0000)))
  OrigDataType: (ptr (struct (0 T_33 t0000)))
T_33: (in Mem0[0x00402124:word32] : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_34: (in ch_32 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x02 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in cx_35 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x02 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(cx, 0x02, 8, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_40: (in (word16) ch_32 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0006 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in (word16) ch_32 << 0x0006 : word16)
  Class: Eq_42
  DataType: ui16
  OrigDataType: ui16
T_43: (in ((word16) ch_32 << 0x0006) + cx_35 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in (word32) (((word16) ch_32 << 0x0006) + cx_35) : word32)
  Class: Eq_44
  DataType: (ptr (struct (402146 T_47 t402146)))
  OrigDataType: (ptr (struct (402146 T_47 t402146)))
T_45: (in 0x00402146 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in (word32) (((word16) ch_32 << 0x0006) + cx_35) + 0x00402146 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in Mem0[(word32) (((word16) ch_32 << 0x0006) + cx_35) + 0x00402146:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in edi_31 + 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in Mem47[edi_31 + 0x00000000:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in cx_35 + 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_53: (in 0x00000001 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in edi_31 + 0x00000001 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_55: (in SLICE(cx_35, byte, 8) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_56: (in 0x0B00 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_57: (in cx_35 != 0x0B00 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in ebx : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in 0x00402140 : ptr32)
  Class: Eq_59
  DataType: (ptr (struct (0 T_60 t0000)))
  OrigDataType: (ptr (struct (0 T_60 t0000)))
T_60: (in Mem0[0x00402140:word16] : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem0[0x00402140:word16] + 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_63: (in Mem37[0x00402140:word16] : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_64: (in esp_200 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in fp : ptr32)
  Class: Eq_65
  DataType: ptr32
  OrigDataType: ptr32
T_66: (in 0x00000020 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in fp - 0x00000020 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_68: (in eax_127 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in 0x00000000 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_70: (in bx_162 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_72: (in ebx_163 : word32)
  Class: Eq_72
  DataType: (ptr (struct (0 T_123 t0000)))
  OrigDataType: (ptr (struct (0 T_123 t0000)))
T_73: (in 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_74: (in bl_164 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in 0x00 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_76: (in bh_165 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_77: (in 0x00 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_78: (in ax_90 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in al_100 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_80: (in 0x80 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in al_100 - 0x80 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in (int16) (al_100 - 0x80) : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_83: (in 0x00402144 : word32)
  Class: Eq_83
  DataType: (ptr (struct (0 T_84 t0000)))
  OrigDataType: (ptr (struct (0 T_84 t0000)))
T_84: (in Mem92[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_85: (in al_91 : byte)
  Class: Eq_85
  DataType: int8
  OrigDataType: int8
T_86: (in (byte) ax_90 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_87: (in dx_78 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_88: (in al_91 *s al_91 : int16)
  Class: Eq_88
  DataType: int16
  OrigDataType: int16
T_89: (in dx_78 - al_91 *s al_91 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_90: (in dh_97 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_91: (in SLICE(dx_78, byte, 8) : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_92: (in rLoc1_99 : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_93: (in 0x00402144 : ptr32)
  Class: Eq_93
  DataType: (ptr (struct (0 T_94 t0000)))
  OrigDataType: (ptr (struct (0 T_94 t0000)))
T_94: (in Mem92[0x00402144:int16] : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_95: (in (real64) Mem92[0x00402144:int16] : real64)
  Class: Eq_92
  DataType: real64
  OrigDataType: real64
T_96: (in eax_535 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in DPB(eax_535, bh_165, 0, 8) : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_98: (in eax_101 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_99: (in P : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in atan : ptr32)
  Class: Eq_100
  DataType: (ptr (fn T_102 (T_101, T_92)))
  OrigDataType: (ptr (fn T_102 (T_101, T_92)))
T_101: (in rArg0 : real64)
  Class: Eq_101
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_102: (in atan(rArg0, rLoc1_99) : real64)
  Class: Eq_102
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_103: (in 0x0040213E : ptr32)
  Class: Eq_103
  DataType: (ptr (struct (0 T_104 t0000)))
  OrigDataType: (ptr (struct (0 T_104 t0000)))
T_104: (in Mem92[0x0040213E:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in (real64) Mem92[0x0040213E:word16] : real64)
  Class: Eq_105
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_106: (in atan(rArg0, rLoc1_99) * (real64) Mem92[0x0040213E:word16] : word32)
  Class: Eq_101
  DataType: real32
  OrigDataType: real32
T_107: (in (int16) rArg0 : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_108: (in 0x00402144 : ptr32)
  Class: Eq_108
  DataType: (ptr (struct (0 T_109 t0000)))
  OrigDataType: (ptr (struct (0 T_109 t0000)))
T_109: (in Mem110[0x00402144:int16] : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_110: (in ax_111 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_111: (in 0x00402144 : word32)
  Class: Eq_111
  DataType: (ptr (struct (0 T_112 t0000)))
  OrigDataType: (ptr (struct (0 T_112 t0000)))
T_112: (in Mem110[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_113: (in 0x00402144 : ptr32)
  Class: Eq_113
  DataType: (ptr (struct (0 T_114 t0000)))
  OrigDataType: (ptr (struct (0 T_114 t0000)))
T_114: (in Mem112[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_115: (in ax_113 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0040213F : ptr32)
  Class: Eq_116
  DataType: (ptr (struct (0 T_117 t0000)))
  OrigDataType: (ptr (struct (0 T_117 t0000)))
T_117: (in Mem112[0x0040213F:word16] : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in ax_111 + Mem112[0x0040213F:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_119: (in ax_120 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in DPB(ax_113, dh_97, 0, 8) : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_121: (in ah_114 : byte)
  Class: Eq_121
  DataType: uint8
  OrigDataType: uint8
T_122: (in SLICE(ax_113, byte, 8) : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_123: (in cl_116 : byte)
  Class: Eq_123
  DataType: (union (uint32 u0) (byte u1))
  OrigDataType: (union (uint32 u0) (byte u1))
T_124: (in 0x00 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_125: (in cx : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in 0x00 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in DPB(cx, 0x00, 0, 8) : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_128: (in DPB(eax_535, dh_97, 0, 8) : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_129: (in dh_130 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0707 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in ax_120 & 0x0707 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in (byte) (ax_120 & 0x0707) : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in ax_120 & 0x0707 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in SLICE(ax_120 & 0x0707, byte, 8) : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in (byte) (ax_120 & 0x0707) + SLICE(ax_120 & 0x0707, byte, 8) : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in (byte) (ax_120 & 0x0707) + SLICE(ax_120 & 0x0707, byte, 8) + dh_97 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_137: (in 0xEC : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_138: (in dh_97 >u 0xEC : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in 0xE6 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_140: (in dh_97 >u 0xE6 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in 0xEB : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_142: (in dh_97 <u 0xEB : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 0x01 : byte)
  Class: Eq_143
  DataType: uint8
  OrigDataType: uint8
T_144: (in ah_114 >>u 0x01 : word32)
  Class: Eq_123
  DataType: uint32
  OrigDataType: uint32
T_145: (in ah_114 >>u 0x01 : word32)
  Class: Eq_145
  DataType: uint32
  OrigDataType: uint32
T_146: (in DPB(cx, ah_114 >>u 0x01, 0, 8) : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_147: (in 0x00402144 : ptr32)
  Class: Eq_147
  DataType: (ptr (struct (0 T_148 t0000)))
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_148: (in Mem112[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0005 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem112[0x00402144:word16] << 0x0005 : word16)
  Class: Eq_150
  DataType: ui16
  OrigDataType: ui16
T_151: (in SLICE(Mem112[0x00402144:word16] << 0x0005, byte, 8) : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in 0x60 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in SLICE(Mem112[0x00402144:word16] << 0x0005, byte, 8) + 0x60 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_154: (in 0x0040211C : ptr32)
  Class: Eq_154
  DataType: (ptr (struct (0 T_155 t0000)))
  OrigDataType: (ptr (struct (0 T_155 t0000)))
T_155: (in Mem112[0x0040211C:word32] : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in ebx_163 + Mem112[0x0040211C:word32] : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in Mem157[ebx_163 + Mem112[0x0040211C:word32]:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_158: (in 0x80 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in dh_130 + 0x80 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_160: (in 0x00402120 : ptr32)
  Class: Eq_160
  DataType: (ptr (struct (0 T_161 t0000)))
  OrigDataType: (ptr (struct (0 T_161 t0000)))
T_161: (in Mem157[0x00402120:word32] : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in ebx_163 + Mem157[0x00402120:word32] : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in Mem161[ebx_163 + Mem157[0x00402120:word32]:byte] : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_164: (in 0x0001 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in bx_162 + 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_166: (in DPB(ebx_163, bx_162, 0, 16) : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_167: (in (byte) bx_162 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_168: (in SLICE(bx_162, byte, 8) : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_169: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_170: (in bx_162 != 0x0000 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in 0x1F : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in ah_114 & 0x1F : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in DPB(cx, ah_114 & 0x1F, 8, 8) : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_174: (in ah_114 & 0x1F : byte)
  Class: Eq_174
  DataType: bcu8
  OrigDataType: bcu8
T_175: (in 0x03 : byte)
  Class: Eq_174
  DataType: bcu8
  OrigDataType: bcu8
T_176: (in (ah_114 & 0x1F) >u 0x03 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in 0xB2 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_178: (in dh_97 >u 0xB2 : bool)
  Class: Eq_178
  DataType: bool
  OrigDataType: bool
T_179: (in 0xE5 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_180: (in dh_97 <u 0xE5 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in 0x14 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in dh_130 - 0x14 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_183: (in __ror : ptr32)
  Class: Eq_183
  DataType: (ptr (fn T_185 (T_90, T_184)))
  OrigDataType: (ptr (fn T_185 (T_90, T_184)))
T_184: (in 0x03 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185: (in __ror(dh_97, 0x03) : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x1E : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in __ror(dh_97, 0x03) + 0x1E : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_188: (in 0x0001 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in cx - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_190: (in cx - 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_192: (in DPB(eax_127, bl_164, 0, 8) : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_193: (in 0xF200 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_194: (in edi_168 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in 0x0003E800 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_196: (in si_170 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in 0x0064 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_198: (in eax_303 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in 0x00402104 : ptr32)
  Class: Eq_199
  DataType: (ptr (struct (0 T_200 t0000)))
  OrigDataType: (ptr (struct (0 T_200 t0000)))
T_200: (in Mem218[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: (ptr (struct (0 T_206 t0000)))
  OrigDataType: (ptr (struct (0 T_206 t0000)))
T_201: (in eax_242 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in 0x000000FF : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in eax_242 & 0x000000FF : word32)
  Class: Eq_203
  DataType: ui32
  OrigDataType: ui32
T_204: (in 0x00000004 : word32)
  Class: Eq_204
  DataType: ui32
  OrigDataType: ui32
T_205: (in (eax_242 & 0x000000FF) * 0x00000004 : word32)
  Class: Eq_205
  DataType: ui32
  OrigDataType: ui32
T_206: (in Mem218[0x00402104:word32][(eax_242 & 0x000000FF) * 0x00000004] : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_207: (in esp_217 : word32)
  Class: Eq_207
  DataType: (ptr (struct (FFFFFFF4 T_402 tFFFFFFF4) (FFFFFFF8 T_397 tFFFFFFF8) (FFFFFFFC T_393 tFFFFFFFC) (0 T_194 t0000) (4 T_224 t0004) (8 T_379 t0008) (C T_375 t000C) (10 T_371 t0010) (14 T_367 t0014) (18 T_212 t0018) (1C T_358 t001C) (20 T_336 t0020) (24 T_331 t0024) (28 T_463 t0028)))
  OrigDataType: (ptr (struct (FFFFFFF4 T_402 tFFFFFFF4) (FFFFFFF8 T_397 tFFFFFFF8) (FFFFFFFC T_393 tFFFFFFFC) (0 T_194 t0000) (4 T_224 t0004) (8 T_379 t0008) (C T_375 t000C) (10 T_371 t0010) (14 T_367 t0014) (18 T_212 t0018) (1C T_358 t001C) (20 T_336 t0020) (24 T_331 t0024) (28 T_463 t0028)))
T_208: (in 0x00000000 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in esp_217 + 0x00000000 : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in Mem218[esp_217 + 0x00000000:word32] : word32)
  Class: Eq_194
  DataType: (ptr (struct (0 T_214 t0000)))
  OrigDataType: (ptr (struct (0 T_214 t0000)))
T_211: (in 0x00402100 : ptr32)
  Class: Eq_211
  DataType: (ptr (struct (0 T_212 t0000)))
  OrigDataType: (ptr (struct (0 T_212 t0000)))
T_212: (in Mem218[0x00402100:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in Mem218[esp_217 + 0x00000000:word32] + Mem218[0x00402100:word32] : word32)
  Class: Eq_213
  DataType: word32
  OrigDataType: word32
T_214: (in Mem304[Mem218[esp_217 + 0x00000000:word32] + Mem218[0x00402100:word32]:word32] : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_215: (in 0x00402142 : ptr32)
  Class: Eq_215
  DataType: (ptr (struct (0 T_216 t0000)))
  OrigDataType: (ptr (struct (0 T_216 t0000)))
T_216: (in Mem304[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in 0x0001 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in Mem304[0x00402142:word16] + 0x0001 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_219: (in Mem307[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_220: (in 0x00402142 : ptr32)
  Class: Eq_220
  DataType: (ptr (struct (0 T_221 t0000)))
  OrigDataType: (ptr (struct (0 T_221 t0000)))
T_221: (in Mem307[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_222: (in 0x00A0 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_223: (in Mem307[0x00402142:word16] != 0x00A0 : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224: (in edi_310 : word32)
  Class: Eq_224
  DataType: (ptr (struct (0 T_238 t0000)))
  OrigDataType: (ptr (struct (0 T_238 t0000)))
T_225: (in 0x00000004 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in esp_217 + 0x00000004 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in Mem307[esp_217 + 0x00000004:word32] : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_228: (in 0x00402104 : ptr32)
  Class: Eq_228
  DataType: (ptr (struct (0 T_229 t0000)))
  OrigDataType: (ptr (struct (0 T_229 t0000)))
T_229: (in Mem307[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: (ptr (struct (0 T_234 t0000)))
  OrigDataType: (ptr (struct (0 T_234 t0000)))
T_230: (in 0x000000FF : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_231: (in eax_303 & 0x000000FF : word32)
  Class: Eq_231
  DataType: ui32
  OrigDataType: ui32
T_232: (in 0x00000004 : word32)
  Class: Eq_232
  DataType: ui32
  OrigDataType: ui32
T_233: (in (eax_303 & 0x000000FF) * 0x00000004 : word32)
  Class: Eq_233
  DataType: ui32
  OrigDataType: ui32
T_234: (in Mem307[0x00402104:word32][(eax_303 & 0x000000FF) * 0x00000004] : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_235: (in 0x00402100 : ptr32)
  Class: Eq_235
  DataType: (ptr (struct (0 T_236 t0000)))
  OrigDataType: (ptr (struct (0 T_236 t0000)))
T_236: (in Mem307[0x00402100:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_237: (in edi_310 + Mem307[0x00402100:word32] : word32)
  Class: Eq_237
  DataType: word32
  OrigDataType: word32
T_238: (in Mem320[edi_310 + Mem307[0x00402100:word32]:word32] : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_239: (in 0x00402142 : ptr32)
  Class: Eq_239
  DataType: (ptr (struct (0 T_216 t0000)))
  OrigDataType: (ptr (struct (0 T_216 t0000)))
T_240: (in Mem320[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_241: (in 0x0001 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in Mem320[0x00402142:word16] + 0x0001 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_243: (in Mem324[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_244: (in 0x00000008 : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_245: (in esp_217 + 0x00000008 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_246: (in 0x00000004 : word32)
  Class: Eq_246
  DataType: word32
  OrigDataType: word32
T_247: (in edi_310 - 0x00000004 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_248: (in 0x00402142 : ptr32)
  Class: Eq_248
  DataType: (ptr (struct (0 T_249 t0000)))
  OrigDataType: (ptr (struct (0 T_249 t0000)))
T_249: (in Mem324[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_250: (in 0x00A0 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_251: (in Mem324[0x00402142:word16] != 0x00A0 : bool)
  Class: Eq_251
  DataType: bool
  OrigDataType: bool
T_252: (in ah_276 : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_253: (in 0x00 : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_254: (in ah_276 == 0x00 : bool)
  Class: Eq_254
  DataType: bool
  OrigDataType: bool
T_255: (in dh_267 : byte)
  Class: Eq_255
  DataType: uint8
  OrigDataType: uint8
T_256: (in 0x46 : byte)
  Class: Eq_255
  DataType: bcu8
  OrigDataType: bcu8
T_257: (in dh_267 <=u 0x46 : bool)
  Class: Eq_257
  DataType: bool
  OrigDataType: bool
T_258: (in 0x01 : byte)
  Class: Eq_258
  DataType: uint8
  OrigDataType: uint8
T_259: (in dh_267 >>u 0x01 : word32)
  Class: Eq_259
  DataType: uint32
  OrigDataType: uint32
T_260: (in DPB(ebx_163, dh_267 >>u 0x01, 8, 8) : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_261: (in ah_460 : byte)
  Class: Eq_261
  DataType: byte
  OrigDataType: byte
T_262: (in 0x00402124 : ptr32)
  Class: Eq_262
  DataType: (ptr (struct (0 T_263 t0000)))
  OrigDataType: (ptr (struct (0 T_263 t0000)))
T_263: (in Mem218[0x00402124:word32] : word32)
  Class: Eq_31
  DataType: (ptr (struct (0 T_265 t0000)))
  OrigDataType: (ptr (struct (0 T_265 t0000)))
T_264: (in Mem218[0x00402124:word32] + ebx_163 : word32)
  Class: Eq_264
  DataType: word32
  OrigDataType: word32
T_265: (in Mem218[Mem218[0x00402124:word32] + ebx_163:byte] : byte)
  Class: Eq_261
  DataType: byte
  OrigDataType: byte
T_266: (in DPB(eax_242, ah_460, 8, 8) : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_267: (in 0x00 : byte)
  Class: Eq_261
  DataType: byte
  OrigDataType: byte
T_268: (in ah_460 == 0x00 : bool)
  Class: Eq_268
  DataType: bool
  OrigDataType: bool
T_269: (in al_278 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in 0x80 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in al_278 + 0x80 : byte)
  Class: Eq_271
  DataType: byte
  OrigDataType: byte
T_272: (in DPB(eax_242, al_278 + 0x80, 0, 8) : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_273: (in 0x00000004 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in esp_200 - 0x00000004 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_275: (in 0x00000000 : word32)
  Class: Eq_275
  DataType: word32
  OrigDataType: word32
T_276: (in esp_217 + 0x00000000 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in Mem218[esp_217 + 0x00000000:word32] : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_278: (in dx_ax_227 : int32)
  Class: Eq_278
  DataType: int32
  OrigDataType: int32
T_279: (in 0x00402140 : word32)
  Class: Eq_279
  DataType: (ptr (struct (0 T_280 t0000)))
  OrigDataType: (ptr (struct (0 T_280 t0000)))
T_280: (in Mem218[0x00402140:word16] : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_281: (in 0x0001 : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in Mem218[0x00402140:word16] << 0x0001 : word16)
  Class: Eq_282
  DataType: ui16
  OrigDataType: ui16
T_283: (in (byte) (Mem218[0x00402140:word16] << 0x0001) : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in (int16) (byte) (Mem218[0x00402140:word16] << 0x0001) : int16)
  Class: Eq_284
  DataType: int16
  OrigDataType: int16
T_285: (in (int32) (int16) (byte) (Mem218[0x00402140:word16] << 0x0001) : int32)
  Class: Eq_278
  DataType: int32
  OrigDataType: int32
T_286: (in al_231 : byte)
  Class: Eq_286
  DataType: int8
  OrigDataType: int8
T_287: (in (byte) dx_ax_227 : byte)
  Class: Eq_287
  DataType: byte
  OrigDataType: byte
T_288: (in 0x7F : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_289: (in (byte) dx_ax_227 & 0x7F : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in 0x40 : byte)
  Class: Eq_290
  DataType: byte
  OrigDataType: byte
T_291: (in ((byte) dx_ax_227 & 0x7F) - 0x40 : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_292: (in ax_232 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in al_231 *s al_231 : int16)
  Class: Eq_292
  DataType: int16
  OrigDataType: int16
T_294: (in ax_235 : word16)
  Class: Eq_294
  DataType: ui16
  OrigDataType: ui16
T_295: (in SLICE(ax_232, byte, 8) : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in 0x10 : byte)
  Class: Eq_296
  DataType: byte
  OrigDataType: byte
T_297: (in SLICE(ax_232, byte, 8) - 0x10 : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_298: (in DPB(ax_232, SLICE(ax_232, byte, 8) - 0x10, 8, 8) : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_299: (in dx_236 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in SLICE(dx_ax_227, word16, 16) : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in SLICE(dx_ax_227, word16, 16) ^ ax_235 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_302: (in cx_219 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in 0x7F40 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_304: (in 0x0002 : word16)
  Class: Eq_304
  DataType: ui16
  OrigDataType: ui16
T_305: (in ax_235 * 0x0002 : word16)
  Class: Eq_305
  DataType: ui16
  OrigDataType: ui16
T_306: (in SLICE(ax_235 * 0x0002, byte, 8) : byte)
  Class: Eq_306
  DataType: byte
  OrigDataType: byte
T_307: (in 0x01 : byte)
  Class: Eq_307
  DataType: byte
  OrigDataType: byte
T_308: (in SLICE(ax_235 * 0x0002, byte, 8) - 0x01 : byte)
  Class: Eq_308
  DataType: byte
  OrigDataType: byte
T_309: (in DPB(eax_127, SLICE(ax_235 * 0x0002, byte, 8) - 0x01, 8, 8) : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_310: (in dx_246 : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in SLICE(dx_236, byte, 8) : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_312: (in 0x20 : byte)
  Class: Eq_312
  DataType: byte
  OrigDataType: byte
T_313: (in SLICE(dx_236, byte, 8) + 0x20 : byte)
  Class: Eq_313
  DataType: byte
  OrigDataType: byte
T_314: (in DPB(dx_236, SLICE(dx_236, byte, 8) + 0x20, 8, 8) : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_315: (in si_327 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in 0x0001 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_317: (in si_170 - 0x0001 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_318: (in 0xFF9C : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_319: (in si_327 != 0xFF9C : bool)
  Class: Eq_319
  DataType: bool
  OrigDataType: bool
T_320: (in 0x0001 : word16)
  Class: Eq_320
  DataType: word16
  OrigDataType: word16
T_321: (in si_327 - 0x0001 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_322: (in 0xFF9D : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_323: (in si_327 != 0xFF9D : bool)
  Class: Eq_323
  DataType: bool
  OrigDataType: bool
T_324: (in 0xFF60 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_325: (in 0x00402142 : ptr32)
  Class: Eq_325
  DataType: (ptr (struct (0 T_326 t0000)))
  OrigDataType: (ptr (struct (0 T_326 t0000)))
T_326: (in Mem201[0x00402142:word16] : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_327: (in ebx_341 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_328: (in 0x00000018 : word32)
  Class: Eq_328
  DataType: word32
  OrigDataType: word32
T_329: (in esp_217 + 0x00000018 : word32)
  Class: Eq_329
  DataType: word32
  OrigDataType: word32
T_330: (in Mem324[esp_217 + 0x00000018:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_331: (in 0x004020F0 : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_332: (in 0x00000024 : word32)
  Class: Eq_332
  DataType: word32
  OrigDataType: word32
T_333: (in esp_217 + 0x00000024 : word32)
  Class: Eq_333
  DataType: word32
  OrigDataType: word32
T_334: (in Mem350[esp_217 + 0x00000024:word32] : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_335: (in 0x004020CC : ptr32)
  Class: Eq_335
  DataType: (ptr (struct (0 T_336 t0000)))
  OrigDataType: (ptr (struct (0 T_336 t0000)))
T_336: (in Mem350[0x004020CC:word32] : word32)
  Class: Eq_336
  DataType: word32
  OrigDataType: word32
T_337: (in 0x00000020 : word32)
  Class: Eq_337
  DataType: word32
  OrigDataType: word32
T_338: (in esp_217 + 0x00000020 : word32)
  Class: Eq_338
  DataType: word32
  OrigDataType: word32
T_339: (in Mem352[esp_217 + 0x00000020:word32] : word32)
  Class: Eq_336
  DataType: word32
  OrigDataType: word32
T_340: (in GetClientRect : ptr32)
  Class: Eq_340
  DataType: (ptr (fn T_349 (T_345, T_348)))
  OrigDataType: (ptr (fn T_349 (T_345, T_348)))
T_341: (in signature of GetClientRect : void)
  Class: Eq_340
  DataType: 
  OrigDataType: 
T_342: (in hWnd : HWND)
  Class: Eq_336
  DataType: HWND
  OrigDataType: HWND
T_343: (in lpRect : LPRECT)
  Class: Eq_331
  DataType: LPRECT
  OrigDataType: LPRECT
T_344: (in esp_217 + 0x00000020 : word32)
  Class: Eq_344
  DataType: word32
  OrigDataType: word32
T_345: (in Mem352[esp_217 + 0x00000020:HWND] : HWND)
  Class: Eq_336
  DataType: HWND
  OrigDataType: HWND
T_346: (in 36 : int32)
  Class: Eq_346
  DataType: int32
  OrigDataType: int32
T_347: (in esp_217 + 36 : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_348: (in Mem352[esp_217 + 36:LPRECT] : LPRECT)
  Class: Eq_331
  DataType: LPRECT
  OrigDataType: LPRECT
T_349: (in GetClientRect(Mem352[esp_217 + 0x00000020:HWND], Mem352[esp_217 + 36:LPRECT]) : word32)
  Class: Eq_349
  DataType: word32
  OrigDataType: word32
T_350: (in 0x00CC0020 : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_351: (in 0x00000024 : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_352: (in esp_217 + 0x00000024 : word32)
  Class: Eq_352
  DataType: word32
  OrigDataType: word32
T_353: (in Mem356[esp_217 + 0x00000024:word32] : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_354: (in 0x00000000 : word32)
  Class: Eq_336
  DataType: word32
  OrigDataType: word32
T_355: (in 0x00000020 : word32)
  Class: Eq_355
  DataType: word32
  OrigDataType: word32
T_356: (in esp_217 + 0x00000020 : word32)
  Class: Eq_356
  DataType: word32
  OrigDataType: word32
T_357: (in Mem358[esp_217 + 0x00000020:word32] : word32)
  Class: Eq_336
  DataType: word32
  OrigDataType: word32
T_358: (in 0x0040206C : word32)
  Class: Eq_358
  DataType: word32
  OrigDataType: word32
T_359: (in 0x0000001C : word32)
  Class: Eq_359
  DataType: word32
  OrigDataType: word32
T_360: (in esp_217 + 0x0000001C : word32)
  Class: Eq_360
  DataType: word32
  OrigDataType: word32
T_361: (in Mem360[esp_217 + 0x0000001C:word32] : word32)
  Class: Eq_358
  DataType: word32
  OrigDataType: word32
T_362: (in 0x00402100 : ptr32)
  Class: Eq_362
  DataType: (ptr (struct (0 T_363 t0000)))
  OrigDataType: (ptr (struct (0 T_363 t0000)))
T_363: (in Mem360[0x00402100:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_364: (in 0x00000018 : word32)
  Class: Eq_364
  DataType: word32
  OrigDataType: word32
T_365: (in esp_217 + 0x00000018 : word32)
  Class: Eq_365
  DataType: word32
  OrigDataType: word32
T_366: (in Mem362[esp_217 + 0x00000018:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_367: (in 0x000000C8 : word32)
  Class: Eq_367
  DataType: word32
  OrigDataType: word32
T_368: (in 0x00000014 : word32)
  Class: Eq_368
  DataType: word32
  OrigDataType: word32
T_369: (in esp_217 + 0x00000014 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_370: (in Mem364[esp_217 + 0x00000014:word32] : word32)
  Class: Eq_367
  DataType: word32
  OrigDataType: word32
T_371: (in 0x00000140 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_372: (in 0x00000010 : word32)
  Class: Eq_372
  DataType: word32
  OrigDataType: word32
T_373: (in esp_217 + 0x00000010 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_374: (in Mem366[esp_217 + 0x00000010:word32] : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_375: (in 0x00000000 : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_376: (in 0x0000000C : word32)
  Class: Eq_376
  DataType: word32
  OrigDataType: word32
T_377: (in esp_217 + 0x0000000C : word32)
  Class: Eq_377
  DataType: word32
  OrigDataType: word32
T_378: (in Mem368[esp_217 + 0x0000000C:word32] : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_379: (in 0x00000000 : word32)
  Class: Eq_379
  DataType: word32
  OrigDataType: word32
T_380: (in 0x00000008 : word32)
  Class: Eq_380
  DataType: word32
  OrigDataType: word32
T_381: (in esp_217 + 0x00000008 : word32)
  Class: Eq_381
  DataType: word32
  OrigDataType: word32
T_382: (in Mem370[esp_217 + 0x00000008:word32] : word32)
  Class: Eq_379
  DataType: word32
  OrigDataType: word32
T_383: (in 0x004020FC : ptr32)
  Class: Eq_383
  DataType: (ptr (struct (0 T_384 t0000)))
  OrigDataType: (ptr (struct (0 T_384 t0000)))
T_384: (in Mem370[0x004020FC:word32] : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_385: (in 0x00000004 : word32)
  Class: Eq_385
  DataType: word32
  OrigDataType: word32
T_386: (in esp_217 + 0x00000004 : word32)
  Class: Eq_386
  DataType: word32
  OrigDataType: word32
T_387: (in Mem372[esp_217 + 0x00000004:word32] : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_388: (in 0x004020F8 : ptr32)
  Class: Eq_388
  DataType: (ptr (struct (0 T_389 t0000)))
  OrigDataType: (ptr (struct (0 T_389 t0000)))
T_389: (in Mem372[0x004020F8:word32] : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_390: (in 0x00000000 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_391: (in esp_217 + 0x00000000 : word32)
  Class: Eq_391
  DataType: word32
  OrigDataType: word32
T_392: (in Mem374[esp_217 + 0x00000000:word32] : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_393: (in 0x00000000 : word32)
  Class: Eq_393
  DataType: word32
  OrigDataType: word32
T_394: (in 0x00000004 : word32)
  Class: Eq_394
  DataType: word32
  OrigDataType: word32
T_395: (in esp_217 - 0x00000004 : word32)
  Class: Eq_395
  DataType: word32
  OrigDataType: word32
T_396: (in Mem376[esp_217 - 0x00000004:word32] : word32)
  Class: Eq_393
  DataType: word32
  OrigDataType: word32
T_397: (in 0x00000000 : word32)
  Class: Eq_397
  DataType: word32
  OrigDataType: word32
T_398: (in 0x00000008 : word32)
  Class: Eq_398
  DataType: word32
  OrigDataType: word32
T_399: (in esp_217 - 0x00000008 : word32)
  Class: Eq_399
  DataType: word32
  OrigDataType: word32
T_400: (in Mem378[esp_217 - 0x00000008:word32] : word32)
  Class: Eq_397
  DataType: word32
  OrigDataType: word32
T_401: (in 0x004020D0 : ptr32)
  Class: Eq_401
  DataType: (ptr (struct (0 T_402 t0000)))
  OrigDataType: (ptr (struct (0 T_402 t0000)))
T_402: (in Mem378[0x004020D0:word32] : word32)
  Class: Eq_402
  DataType: word32
  OrigDataType: word32
T_403: (in 0x0000000C : word32)
  Class: Eq_403
  DataType: word32
  OrigDataType: word32
T_404: (in esp_217 - 0x0000000C : word32)
  Class: Eq_404
  DataType: word32
  OrigDataType: word32
T_405: (in Mem380[esp_217 - 0x0000000C:word32] : word32)
  Class: Eq_402
  DataType: word32
  OrigDataType: word32
T_406: (in StretchDIBits : ptr32)
  Class: Eq_406
  DataType: (ptr (fn T_459 (T_422, T_425, T_428, T_431, T_434, T_437, T_440, T_443, T_446, T_449, T_452, T_455, T_458)))
  OrigDataType: (ptr (fn T_459 (T_422, T_425, T_428, T_431, T_434, T_437, T_440, T_443, T_446, T_449, T_452, T_455, T_458)))
T_407: (in signature of StretchDIBits : void)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_408: (in hdc : HDC)
  Class: Eq_402
  DataType: HDC
  OrigDataType: HDC
T_409: (in xDest : int32)
  Class: Eq_397
  DataType: int32
  OrigDataType: int32
T_410: (in yDest : int32)
  Class: Eq_393
  DataType: int32
  OrigDataType: int32
T_411: (in DestWidth : int32)
  Class: Eq_194
  DataType: int32
  OrigDataType: int32
T_412: (in DestHeight : int32)
  Class: Eq_224
  DataType: int32
  OrigDataType: int32
T_413: (in xSrc : int32)
  Class: Eq_379
  DataType: int32
  OrigDataType: int32
T_414: (in ySrc : int32)
  Class: Eq_375
  DataType: int32
  OrigDataType: int32
T_415: (in SrcWidth : int32)
  Class: Eq_371
  DataType: int32
  OrigDataType: int32
T_416: (in SrcHeight : int32)
  Class: Eq_367
  DataType: int32
  OrigDataType: int32
T_417: (in lpBits : (ptr void))
  Class: Eq_212
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_418: (in lpbmi : (ptr BITMAPINFO))
  Class: Eq_358
  DataType: (ptr BITMAPINFO)
  OrigDataType: (ptr BITMAPINFO)
T_419: (in iUsage : UINT)
  Class: Eq_336
  DataType: UINT
  OrigDataType: UINT
T_420: (in rop : DWORD)
  Class: Eq_331
  DataType: DWORD
  OrigDataType: DWORD
T_421: (in esp_217 - 0x0000000C : word32)
  Class: Eq_421
  DataType: word32
  OrigDataType: word32
T_422: (in Mem380[esp_217 - 0x0000000C:HDC] : HDC)
  Class: Eq_402
  DataType: HDC
  OrigDataType: HDC
T_423: (in 8 : int32)
  Class: Eq_423
  DataType: int32
  OrigDataType: int32
T_424: (in esp_217 - 8 : word32)
  Class: Eq_424
  DataType: word32
  OrigDataType: word32
T_425: (in Mem380[esp_217 - 8:int32] : int32)
  Class: Eq_397
  DataType: int32
  OrigDataType: int32
T_426: (in 4 : int32)
  Class: Eq_426
  DataType: int32
  OrigDataType: int32
T_427: (in esp_217 - 4 : word32)
  Class: Eq_427
  DataType: word32
  OrigDataType: word32
T_428: (in Mem380[esp_217 - 4:int32] : int32)
  Class: Eq_393
  DataType: int32
  OrigDataType: int32
T_429: (in 0x00000000 : word32)
  Class: Eq_429
  DataType: word32
  OrigDataType: word32
T_430: (in esp_217 + 0x00000000 : word32)
  Class: Eq_430
  DataType: word32
  OrigDataType: word32
T_431: (in Mem380[esp_217 + 0x00000000:int32] : int32)
  Class: Eq_194
  DataType: int32
  OrigDataType: int32
T_432: (in 4 : int32)
  Class: Eq_432
  DataType: int32
  OrigDataType: int32
T_433: (in esp_217 + 4 : word32)
  Class: Eq_433
  DataType: word32
  OrigDataType: word32
T_434: (in Mem380[esp_217 + 4:int32] : int32)
  Class: Eq_224
  DataType: int32
  OrigDataType: int32
T_435: (in 8 : int32)
  Class: Eq_435
  DataType: int32
  OrigDataType: int32
T_436: (in esp_217 + 8 : word32)
  Class: Eq_436
  DataType: word32
  OrigDataType: word32
T_437: (in Mem380[esp_217 + 8:int32] : int32)
  Class: Eq_379
  DataType: int32
  OrigDataType: int32
T_438: (in 12 : int32)
  Class: Eq_438
  DataType: int32
  OrigDataType: int32
T_439: (in esp_217 + 12 : word32)
  Class: Eq_439
  DataType: word32
  OrigDataType: word32
T_440: (in Mem380[esp_217 + 12:int32] : int32)
  Class: Eq_375
  DataType: int32
  OrigDataType: int32
T_441: (in 16 : int32)
  Class: Eq_441
  DataType: int32
  OrigDataType: int32
T_442: (in esp_217 + 16 : word32)
  Class: Eq_442
  DataType: word32
  OrigDataType: word32
T_443: (in Mem380[esp_217 + 16:int32] : int32)
  Class: Eq_371
  DataType: int32
  OrigDataType: int32
T_444: (in 20 : int32)
  Class: Eq_444
  DataType: int32
  OrigDataType: int32
T_445: (in esp_217 + 20 : word32)
  Class: Eq_445
  DataType: word32
  OrigDataType: word32
T_446: (in Mem380[esp_217 + 20:int32] : int32)
  Class: Eq_367
  DataType: int32
  OrigDataType: int32
T_447: (in 24 : int32)
  Class: Eq_447
  DataType: int32
  OrigDataType: int32
T_448: (in esp_217 + 24 : word32)
  Class: Eq_448
  DataType: word32
  OrigDataType: word32
T_449: (in Mem380[esp_217 + 24:(ptr void)] : (ptr void))
  Class: Eq_212
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_450: (in 28 : int32)
  Class: Eq_450
  DataType: int32
  OrigDataType: int32
T_451: (in esp_217 + 28 : word32)
  Class: Eq_451
  DataType: word32
  OrigDataType: word32
T_452: (in Mem380[esp_217 + 28:(ptr BITMAPINFO)] : (ptr BITMAPINFO))
  Class: Eq_358
  DataType: (ptr BITMAPINFO)
  OrigDataType: (ptr BITMAPINFO)
T_453: (in 32 : int32)
  Class: Eq_453
  DataType: int32
  OrigDataType: int32
T_454: (in esp_217 + 32 : word32)
  Class: Eq_454
  DataType: word32
  OrigDataType: word32
T_455: (in Mem380[esp_217 + 32:UINT] : UINT)
  Class: Eq_336
  DataType: UINT
  OrigDataType: UINT
T_456: (in 36 : int32)
  Class: Eq_456
  DataType: int32
  OrigDataType: int32
T_457: (in esp_217 + 36 : word32)
  Class: Eq_457
  DataType: word32
  OrigDataType: word32
T_458: (in Mem380[esp_217 + 36:DWORD] : DWORD)
  Class: Eq_331
  DataType: DWORD
  OrigDataType: DWORD
T_459: (in StretchDIBits(Mem380[esp_217 - 0x0000000C:HDC], Mem380[esp_217 - 8:int32], Mem380[esp_217 - 4:int32], Mem380[esp_217 + 0x00000000:int32], Mem380[esp_217 + 4:int32], Mem380[esp_217 + 8:int32], Mem380[esp_217 + 12:int32], Mem380[esp_217 + 16:int32], Mem380[esp_217 + 20:int32], Mem380[esp_217 + 24:(ptr void)], Mem380[esp_217 + 28:(ptr BITMAPINFO)], Mem380[esp_217 + 32:UINT], Mem380[esp_217 + 36:DWORD]) : word32)
  Class: Eq_459
  DataType: word32
  OrigDataType: word32
T_460: (in edi_383 : word32)
  Class: Eq_460
  DataType: word32
  OrigDataType: word32
T_461: (in 0x00000028 : word32)
  Class: Eq_461
  DataType: word32
  OrigDataType: word32
T_462: (in esp_217 + 0x00000028 : word32)
  Class: Eq_462
  DataType: word32
  OrigDataType: word32
T_463: (in Mem380[esp_217 + 0x00000028:word32] : word32)
  Class: Eq_463
  DataType: word32
  OrigDataType: word32
T_464: (in ediOut : ptr32)
  Class: Eq_464
  DataType: ptr32
  OrigDataType: ptr32
T_465: (in *ediOut : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_466: (in esi_386 : word32)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in 0x0000002C : word32)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in esp_217 + 0x0000002C : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in Mem380[esp_217 + 0x0000002C:word32] : word32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in esiOut : ptr32)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_471: (in *esiOut : word32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_472: (in ebp_389 : word32)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in 0x00000030 : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in esp_217 + 0x00000030 : word32)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in Mem380[esp_217 + 0x00000030:word32] : word32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in ebpOut : ptr32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in *ebpOut : word32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_478: (in ebx_392 : word32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_479: (in 0x00000038 : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in esp_217 + 0x00000038 : word32)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in Mem380[esp_217 + 0x00000038:word32] : word32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_482: (in 0x004020F0 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in 0x00000044 : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_484: (in esp_217 + 0x00000044 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_485: (in Mem404[esp_217 + 0x00000044:word32] : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_486: (in 0x004020CC : ptr32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in Mem404[0x004020CC:word32] : word32)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_488: (in 0x00000040 : word32)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in esp_217 + 0x00000040 : word32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_490: (in Mem406[esp_217 + 0x00000040:word32] : word32)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_491: (in GetClientRect : ptr32)
  Class: Eq_340
  DataType: 
  OrigDataType: 
T_492: (in esp_217 + 0x00000040 : word32)
  Class: Eq_492
  DataType: 
  OrigDataType: 
T_493: (in Mem406[esp_217 + 0x00000040:HWND] : HWND)
  Class: Eq_336
  DataType: 
  OrigDataType: 
T_494: (in 68 : int32)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_495: (in esp_217 + 68 : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in Mem406[esp_217 + 68:LPRECT] : LPRECT)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_497: (in GetClientRect(Mem406[esp_217 + 0x00000040:HWND], Mem406[esp_217 + 68:LPRECT]) : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in 0x00CC0020 : word32)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in 0x00000044 : word32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in esp_217 + 0x00000044 : word32)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in Mem410[esp_217 + 0x00000044:word32] : word32)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_502: (in 0x00000000 : word32)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in 0x00000040 : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_504: (in esp_217 + 0x00000040 : word32)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in Mem412[esp_217 + 0x00000040:word32] : word32)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_506: (in 0x0040206C : word32)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_507: (in 0x0000003C : word32)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in esp_217 + 0x0000003C : word32)
  Class: Eq_508
  DataType: 
  OrigDataType: 
T_509: (in Mem414[esp_217 + 0x0000003C:word32] : word32)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_510: (in 0x00402100 : ptr32)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_511: (in Mem414[0x00402100:word32] : word32)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in 0x00000038 : word32)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in esp_217 + 0x00000038 : word32)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_514: (in Mem416[esp_217 + 0x00000038:word32] : word32)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_515: (in 0x000000C8 : word32)
  Class: Eq_515
  DataType: 
  OrigDataType: 
T_516: (in 0x00000034 : word32)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_517: (in esp_217 + 0x00000034 : word32)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in Mem418[esp_217 + 0x00000034:word32] : word32)
  Class: Eq_515
  DataType: 
  OrigDataType: 
T_519: (in 0x00000140 : word32)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_520: (in 0x00000030 : word32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in esp_217 + 0x00000030 : word32)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in Mem420[esp_217 + 0x00000030:word32] : word32)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_523: (in 0x00000000 : word32)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in 0x0000002C : word32)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in esp_217 + 0x0000002C : word32)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in Mem422[esp_217 + 0x0000002C:word32] : word32)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_527: (in 0x00000000 : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in 0x00000028 : word32)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_529: (in esp_217 + 0x00000028 : word32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in Mem424[esp_217 + 0x00000028:word32] : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_531: (in 0x004020FC : ptr32)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in Mem424[0x004020FC:word32] : word32)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_533: (in 0x00000024 : word32)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in esp_217 + 0x00000024 : word32)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_535: (in Mem426[esp_217 + 0x00000024:word32] : word32)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_536: (in 0x004020F8 : ptr32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in Mem426[0x004020F8:word32] : word32)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_538: (in 0x00000020 : word32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in esp_217 + 0x00000020 : word32)
  Class: Eq_539
  DataType: 
  OrigDataType: 
T_540: (in Mem428[esp_217 + 0x00000020:word32] : word32)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_541: (in 0x00000000 : word32)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in 0x0000001C : word32)
  Class: Eq_542
  DataType: 
  OrigDataType: 
T_543: (in esp_217 + 0x0000001C : word32)
  Class: Eq_543
  DataType: 
  OrigDataType: 
T_544: (in Mem430[esp_217 + 0x0000001C:word32] : word32)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_545: (in 0x00000000 : word32)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in 0x00000018 : word32)
  Class: Eq_546
  DataType: 
  OrigDataType: 
T_547: (in esp_217 + 0x00000018 : word32)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_548: (in Mem432[esp_217 + 0x00000018:word32] : word32)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_549: (in 0x004020D0 : ptr32)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_550: (in Mem432[0x004020D0:word32] : word32)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_551: (in 0x00000014 : word32)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in esp_217 + 0x00000014 : word32)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_553: (in Mem434[esp_217 + 0x00000014:word32] : word32)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_554: (in StretchDIBits : ptr32)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_555: (in esp_217 + 0x00000014 : word32)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_556: (in Mem434[esp_217 + 0x00000014:HDC] : HDC)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_557: (in 24 : int32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in esp_217 + 24 : word32)
  Class: Eq_558
  DataType: 
  OrigDataType: 
T_559: (in Mem434[esp_217 + 24:int32] : int32)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_560: (in 28 : int32)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in esp_217 + 28 : word32)
  Class: Eq_561
  DataType: 
  OrigDataType: 
T_562: (in Mem434[esp_217 + 28:int32] : int32)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_563: (in 32 : int32)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in esp_217 + 32 : word32)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_565: (in Mem434[esp_217 + 32:int32] : int32)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_566: (in 36 : int32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in esp_217 + 36 : word32)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_568: (in Mem434[esp_217 + 36:int32] : int32)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_569: (in 40 : int32)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in esp_217 + 40 : word32)
  Class: Eq_570
  DataType: 
  OrigDataType: 
T_571: (in Mem434[esp_217 + 40:int32] : int32)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_572: (in 44 : int32)
  Class: Eq_572
  DataType: 
  OrigDataType: 
T_573: (in esp_217 + 44 : word32)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_574: (in Mem434[esp_217 + 44:int32] : int32)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_575: (in 48 : int32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in esp_217 + 48 : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in Mem434[esp_217 + 48:int32] : int32)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_578: (in 52 : int32)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in esp_217 + 52 : word32)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in Mem434[esp_217 + 52:int32] : int32)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_581: (in 56 : int32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in esp_217 + 56 : word32)
  Class: Eq_582
  DataType: 
  OrigDataType: 
T_583: (in Mem434[esp_217 + 56:(ptr void)] : (ptr void))
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_584: (in 60 : int32)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in esp_217 + 60 : word32)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in Mem434[esp_217 + 60:(ptr BITMAPINFO)] : (ptr BITMAPINFO))
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_587: (in 64 : int32)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in esp_217 + 64 : word32)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in Mem434[esp_217 + 64:UINT] : UINT)
  Class: Eq_336
  DataType: 
  OrigDataType: 
T_590: (in 68 : int32)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in esp_217 + 68 : word32)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in Mem434[esp_217 + 68:DWORD] : DWORD)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_593: (in StretchDIBits(Mem434[esp_217 + 0x00000014:HDC], Mem434[esp_217 + 24:int32], Mem434[esp_217 + 28:int32], Mem434[esp_217 + 32:int32], Mem434[esp_217 + 36:int32], Mem434[esp_217 + 40:int32], Mem434[esp_217 + 44:int32], Mem434[esp_217 + 48:int32], Mem434[esp_217 + 52:int32], Mem434[esp_217 + 56:(ptr void)], Mem434[esp_217 + 60:(ptr BITMAPINFO)], Mem434[esp_217 + 64:UINT], Mem434[esp_217 + 68:DWORD]) : word32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in 0x00402142 : ptr32)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in Mem218[0x00402142:word16] : word16)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in cx_219 + Mem218[0x00402142:word16] : word16)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_597: (in SLICE(cx_219, byte, 8) : byte)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in DPB(ebx_163, SLICE(cx_219, byte, 8), 0, 8) : word32)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_599: (in dx_246 + si_170 : word16)
  Class: Eq_310
  DataType: 
  OrigDataType: 
T_600: (in 0x00402120 : ptr32)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in Mem218[0x00402120:word32] : word32)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in Mem218[0x00402120:word32] + ebx_163 : word32)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in Mem218[Mem218[0x00402120:word32] + ebx_163:byte] : byte)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_604: (in SLICE(dx_246, byte, 8) : byte)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_605: (in 0x0040211C : ptr32)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem218[0x0040211C:word32] : word32)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in Mem218[0x0040211C:word32] + ebx_163 : word32)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in Mem218[Mem218[0x0040211C:word32] + ebx_163:byte] : byte)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_609: (in DPB(eax_242, al_278, 0, 8) : word32)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_610: (in 0x00 : byte)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_611: (in ah_276 < 0x00 : bool)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in 0x0001 : word16)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in cx - 0x0001 : word16)
  Class: Eq_125
  DataType: 
  OrigDataType: 
T_614: (in (byte) cx : byte)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_615: (in esp_147 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in eax_6 : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in GlobalAlloc : ptr32)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in signature of GlobalAlloc : void)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_619: (in uFlags : UINT)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in dwBytes : SIZE_T)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in 0x00000000 : word32)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_622: (in 0x000F4240 : word32)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_623: (in GlobalAlloc(0x00000000, 0x000F4240) : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_624: (in 0x00000000 : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_625: (in eax_6 == 0x00000000 : bool)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in 0x0040204C : word32)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in fp : ptr32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_628: (in 0x0000000C : word32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in fp - 0x0000000C : word32)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in Mem143[fp - 0x0000000C:word32] : word32)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_631: (in 0x00000000 : word32)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in 0x00000010 : word32)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in fp - 0x00000010 : word32)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in Mem145[fp - 0x00000010:word32] : word32)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_635: (in MessageBoxW : ptr32)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in signature of MessageBoxW : void)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_637: (in hWnd : HWND)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in lpText : LPCWSTR)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in lpCaption : LPCWSTR)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in uType : UINT)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in 0x00000000 : word32)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_642: (in 0x00000000 : word32)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_643: (in 0x00000000 : word32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_644: (in 0x00000010 : word32)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_645: (in MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010) : word32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in 0x0040210C : word32)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_647: (in Mem150[0x0040210C:word32] : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_648: (in 0x00402104 : word32)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in Mem151[0x00402104:word32] : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_650: (in 0x000007D0 : word32)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in eax_6 + 0x000007D0 : word32)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in 0x00402100 : word32)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in Mem153[0x00402100:word32] : word32)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_654: (in 0x00062250 : word32)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in eax_6 + 0x00062250 : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in 0x0040211C : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in Mem155[0x0040211C:word32] : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_658: (in 0x00092F90 : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in eax_6 + 0x00092F90 : word32)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in 0x00402120 : word32)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in Mem157[0x00402120:word32] : word32)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_662: (in 0x000AB630 : word32)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in eax_6 + 0x000AB630 : word32)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in 0x00402124 : word32)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_665: (in Mem160[0x00402124:word32] : word32)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_666: (in 0x0007A11F : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_667: (in ebx : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_668: (in edi_164 : word32)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in 0x0040210C : ptr32)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in Mem160[0x0040210C:word32] : word32)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_671: (in 0x0000 : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in 0x00000000 : word32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in edi_164 + 0x00000000 : word32)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in Mem165[edi_164 + 0x00000000:word16] : word16)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_675: (in 0x00000002 : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in edi_164 + 0x00000002 : word32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in edi : word32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_678: (in 0x00000001 : word32)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in ebx - 0x00000001 : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_680: (in 0x00000000 : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_681: (in ebx != 0x00000000 : bool)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in 0x00000000 : word32)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in 0x00000004 : word32)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in fp - 0x00000004 : word32)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in Mem172[fp - 0x00000004:word32] : word32)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_686: (in GetModuleHandleW : ptr32)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in signature of GetModuleHandleW : void)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_688: (in lpModuleName : LPCWSTR)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_689: (in 0x000F4240 : word32)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_690: (in GetModuleHandleW(0x000F4240) : word32)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in 0x004020B4 : word32)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in Mem175[0x004020B4:word32] : word32)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_693: (in 0x00007F00 : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in 0x00000004 : word32)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in fp - 0x00000004 : word32)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in Mem177[fp - 0x00000004:word32] : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_697: (in 0x00000000 : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in 0x00000008 : word32)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in fp - 0x00000008 : word32)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in Mem179[fp - 0x00000008:word32] : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_701: (in LoadIconW : ptr32)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in signature of LoadIconW : void)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_703: (in hInstance : HINSTANCE)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in lpIconName : LPCWSTR)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_705: (in 0x00000000 : word32)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_706: (in LoadIconW(0x00000000, 0x000F4240) : word32)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in 0x004020B8 : word32)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in Mem182[0x004020B8:word32] : word32)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_709: (in 0x00007F00 : word32)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in 0x00000004 : word32)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in fp - 0x00000004 : word32)
  Class: Eq_711
  DataType: 
  OrigDataType: 
T_712: (in Mem184[fp - 0x00000004:word32] : word32)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_713: (in 0x00000000 : word32)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in 0x00000008 : word32)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in fp - 0x00000008 : word32)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in Mem186[fp - 0x00000008:word32] : word32)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_717: (in LoadCursorW : ptr32)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_718: (in signature of LoadCursorW : void)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_719: (in hInstance : HINSTANCE)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_720: (in lpCursorName : LPCWSTR)
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_721: (in LoadCursorW(0x00000000, 0x000F4240) : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in 0x004020BC : word32)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in Mem189[0x004020BC:word32] : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_724: (in 0x004020A4 : word32)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_725: (in 0x00000004 : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in fp - 0x00000004 : word32)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in Mem191[fp - 0x00000004:word32] : word32)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_728: (in RegisterClassW : ptr32)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in signature of RegisterClassW : void)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_730: (in lpWndClass : (ptr WNDCLASSW))
  Class: Eq_688
  DataType: 
  OrigDataType: 
T_731: (in RegisterClassW(0x000F4240) : word32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in 0x00000000 : word32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_733: (in RegisterClassW(0x000F4240) == 0x00000000 : bool)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in 0x00000000 : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in 0x00000004 : word32)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in fp - 0x00000004 : word32)
  Class: Eq_736
  DataType: 
  OrigDataType: 
T_737: (in Mem198[fp - 0x00000004:word32] : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_738: (in 0x004020B4 : ptr32)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in Mem198[0x004020B4:word32] : word32)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in 0x00000008 : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in fp - 0x00000008 : word32)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in Mem200[fp - 0x00000008:word32] : word32)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_743: (in eax_221 : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in CreateWindowExW : ptr32)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_745: (in signature of CreateWindowExW : void)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_746: (in dwExStyle : DWORD)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in lpClassName : LPCWSTR)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in lpWindowName : LPCWSTR)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in dwStyle : DWORD)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in X : int32)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in Y : int32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in nWidth : int32)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in nHeight : int32)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in hWndParent : HWND)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in hMenu : HMENU)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in hInstance : HINSTANCE)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_757: (in lpParam : LPVOID)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_758: (in 0x00000000 : word32)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_759: (in 0x00402000 : word32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_760: (in 0x00402012 : word32)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_761: (in 0x10CF0000 : word32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_762: (in 0x00008000 : word32)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_763: (in 0x00008000 : word32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_764: (in 0x0000021C : word32)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_765: (in 0x00000190 : word32)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_766: (in 0x00000000 : word32)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_767: (in 0x00000000 : word32)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_768: (in CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4) : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_769: (in 0x00000000 : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_770: (in eax_221 == 0x00000000 : bool)
  Class: Eq_770
  DataType: 
  OrigDataType: 
T_771: (in 0x004020CC : word32)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in Mem227[0x004020CC:word32] : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_773: (in 0x00000004 : word32)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in fp - 0x00000004 : word32)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in Mem229[fp - 0x00000004:word32] : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_776: (in GetDC : ptr32)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in signature of GetDC : void)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_778: (in hWnd : HWND)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_779: (in GetDC(0x00000000) : word32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in 0x004020D0 : word32)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_781: (in Mem232[0x004020D0:word32] : word32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_782: (in fn00401000 : ptr32)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in signature of fn00401000 : void)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_784: (in fn00401000() : void)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in fn00401020 : ptr32)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_786: (in signature of fn00401020 : void)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_787: (in fn00401020() : void)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in fn00401052 : ptr32)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_789: (in signature of fn00401052 : void)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_790: (in rArg0 : real64)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_791: (in ebp : word32)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in out ebp : ptr32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_793: (in esi : word32)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in out esi : ptr32)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_795: (in out edi : ptr32)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_796: (in fn00401052(rArg0, out ebp, out esi, out edi) : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_797: (in 0x00000004 : word32)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in 0x00000004 : word32)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in fp - 0x00000004 : word32)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in Mem239[fp - 0x00000004:word32] : word32)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_801: (in 0x004020D0 : ptr32)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in Mem239[0x004020D0:word32] : word32)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in 0x00000008 : word32)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_804: (in fp - 0x00000008 : word32)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in Mem241[fp - 0x00000008:word32] : word32)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_806: (in SetStretchBltMode : ptr32)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_807: (in signature of SetStretchBltMode : void)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_808: (in hdc : HDC)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in mode : int32)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in fp - 0x00000008 : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_811: (in Mem241[fp - 0x00000008:HDC] : HDC)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_812: (in 4 : int32)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in fp - 4 : word32)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in Mem241[fp - 4:int32] : int32)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_815: (in SetStretchBltMode(Mem241[fp - 0x00000008:HDC], Mem241[fp - 4:int32]) : word32)
  Class: Eq_815
  DataType: 
  OrigDataType: 
T_816: (in esp_243 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_817: (in esp_45 : word32)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in 0x00000004 : word32)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in esp_147 - 0x00000004 : word32)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_820: (in 0x004020D0 : ptr32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in Mem0[0x004020D0:word32] : word32)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in 0x00000000 : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in esp_45 + 0x00000000 : word32)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in Mem47[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_825: (in 0x004020CC : ptr32)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in Mem47[0x004020CC:word32] : word32)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in 0x00000004 : word32)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in esp_45 - 0x00000004 : word32)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in Mem49[esp_45 - 0x00000004:word32] : word32)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_830: (in ReleaseDC : ptr32)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in signature of ReleaseDC : void)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_832: (in hWnd : HWND)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_833: (in hDC : HDC)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in esp_45 - 0x00000004 : word32)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in Mem49[esp_45 - 0x00000004:HWND] : HWND)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_836: (in 0x00000000 : word32)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in esp_45 + 0x00000000 : word32)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in Mem49[esp_45 + 0x00000000:HDC] : HDC)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_839: (in ReleaseDC(Mem49[esp_45 - 0x00000004:HWND], Mem49[esp_45 + 0x00000000:HDC]) : word32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in 0x0040210C : ptr32)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in Mem49[0x0040210C:word32] : word32)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in 0x00000000 : word32)
  Class: Eq_842
  DataType: 
  OrigDataType: 
T_843: (in esp_45 + 0x00000000 : word32)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in Mem53[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_845: (in GlobalFree : ptr32)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in signature of GlobalFree : void)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_847: (in hMem : HGLOBAL)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in 0x00000000 : word32)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in esp_45 + 0x00000000 : word32)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_850: (in Mem53[esp_45 + 0x00000000:HGLOBAL] : HGLOBAL)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_851: (in GlobalFree(Mem53[esp_45 + 0x00000000:HGLOBAL]) : word32)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in 0x004020DC : ptr32)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in Mem53[0x004020DC:word32] : word32)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in 0x00000000 : word32)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in esp_45 + 0x00000000 : word32)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_856: (in Mem57[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_857: (in ExitProcess : ptr32)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in signature of ExitProcess : void)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_859: (in uExitCode : UINT)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in 0x00000000 : word32)
  Class: Eq_860
  DataType: 
  OrigDataType: 
T_861: (in esp_45 + 0x00000000 : word32)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_862: (in Mem57[esp_45 + 0x00000000:UINT] : UINT)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_863: (in ExitProcess(Mem57[esp_45 + 0x00000000:UINT]) : void)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in 0x00000000 : word32)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in esp_45 + 0x00000000 : word32)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in Mem60[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_867: (in 0x00000004 : word32)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in esp_45 - 0x00000004 : word32)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in Mem63[esp_45 - 0x00000004:word32] : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_870: (in 0x00000008 : word32)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in esp_45 - 0x00000008 : word32)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in Mem65[esp_45 - 0x00000008:word32] : word32)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_873: (in 0x0000000C : word32)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_874: (in esp_45 - 0x0000000C : word32)
  Class: Eq_874
  DataType: 
  OrigDataType: 
T_875: (in Mem67[esp_45 - 0x0000000C:word32] : word32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_876: (in ebp_108 : word32)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_877: (in 0x0000000C : word32)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in esp_45 + 0x0000000C : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in Mem67[esp_45 + 0x0000000C:word32] : word32)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in 0x00000002 : word32)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_881: (in Mem67[esp_45 + 0x0000000C:word32] == 0x00000002 : bool)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in 0x004020D4 : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in esp_250 : word32)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in 0x00000000 : word32)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in esp_250 + 0x00000000 : word32)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_886: (in Mem265[esp_250 + 0x00000000:word32] : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_887: (in TranslateMessage : ptr32)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in signature of TranslateMessage : void)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_889: (in lpMsg : (ptr MSG))
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in 0x00000000 : word32)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in esp_250 + 0x00000000 : word32)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in Mem265[esp_250 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_893: (in TranslateMessage(Mem265[esp_250 + 0x00000000:(ptr MSG)]) : word32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in 0x004020D4 : word32)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in 0x00000000 : word32)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in esp_250 + 0x00000000 : word32)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in Mem269[esp_250 + 0x00000000:word32] : word32)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_898: (in DispatchMessageW : ptr32)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in signature of DispatchMessageW : void)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_900: (in lpMsg : (ptr MSG))
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_901: (in 0x00000000 : word32)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in esp_250 + 0x00000000 : word32)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in Mem269[esp_250 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_904: (in DispatchMessageW(Mem269[esp_250 + 0x00000000:(ptr MSG)]) : word32)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in fn00401052 : ptr32)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_906: (in rArg1 : real64)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_907: (in out ebp : ptr32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_908: (in out esi : ptr32)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_909: (in out edi : ptr32)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_910: (in fn00401052(rArg1, out ebp, out esi, out edi) : word32)
  Class: Eq_666
  DataType: 
  OrigDataType: 
T_911: (in 0x00402108 : ptr32)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in Mem269[0x00402108:word32] : word32)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in 0x00000001 : word32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in Mem269[0x00402108:word32] + 0x00000001 : word32)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in Mem277[0x00402108:word32] : word32)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_916: (in 0x00000004 : word32)
  Class: Eq_916
  DataType: 
  OrigDataType: 
T_917: (in esp_250 + 0x00000004 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_918: (in 0x00000004 : word32)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in esp_243 - 0x00000004 : word32)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_920: (in 0x00000001 : word32)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in 0x00000000 : word32)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in esp_250 + 0x00000000 : word32)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in Mem251[esp_250 + 0x00000000:word32] : word32)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_924: (in 0x00000000 : word32)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in 0x00000004 : word32)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in esp_250 - 0x00000004 : word32)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in Mem253[esp_250 - 0x00000004:word32] : word32)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_928: (in 0x00000000 : word32)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in 0x00000008 : word32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in esp_250 - 0x00000008 : word32)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in Mem255[esp_250 - 0x00000008:word32] : word32)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_932: (in 0x00000000 : word32)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in 0x0000000C : word32)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in esp_250 - 0x0000000C : word32)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in Mem257[esp_250 - 0x0000000C:word32] : word32)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_936: (in 0x004020D4 : word32)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in 0x00000010 : word32)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in esp_250 - 0x00000010 : word32)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in Mem259[esp_250 - 0x00000010:word32] : word32)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_940: (in PeekMessageW : ptr32)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_941: (in signature of PeekMessageW : void)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_942: (in lpMsg : LPMSG)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in hWnd : HWND)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in wMsgFilterMin : UINT)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in wMsgFilterMax : UINT)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in wRemoveMsg : UINT)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in esp_250 - 0x00000010 : word32)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in Mem259[esp_250 - 0x00000010:LPMSG] : LPMSG)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_949: (in 12 : int32)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in esp_250 - 12 : word32)
  Class: Eq_950
  DataType: 
  OrigDataType: 
T_951: (in Mem259[esp_250 - 12:HWND] : HWND)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_952: (in 8 : int32)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in esp_250 - 8 : word32)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in Mem259[esp_250 - 8:UINT] : UINT)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_955: (in 4 : int32)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in esp_250 - 4 : word32)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in Mem259[esp_250 - 4:UINT] : UINT)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_958: (in 0x00000000 : word32)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in esp_250 + 0x00000000 : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in Mem259[esp_250 + 0x00000000:UINT] : UINT)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_961: (in PeekMessageW(Mem259[esp_250 - 0x00000010:LPMSG], Mem259[esp_250 - 12:HWND], Mem259[esp_250 - 8:UINT], Mem259[esp_250 - 4:UINT], Mem259[esp_250 + 0x00000000:UINT]) : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in 0x00000004 : word32)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in esp_250 + 0x00000004 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_964: (in 0x004020D8 : ptr32)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in Mem259[0x004020D8:word32] : word32)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in 0x00000012 : word32)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_967: (in Mem259[0x004020D8:word32] == 0x00000012 : bool)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in 0x00000000 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in 0x00000010 : word32)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in esp_45 - 0x00000010 : word32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in Mem116[esp_45 - 0x00000010:word32] : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_972: (in PostQuitMessage : ptr32)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_973: (in signature of PostQuitMessage : void)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_974: (in nExitCode : int32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in esp_45 - 0x00000010 : word32)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in Mem116[esp_45 - 0x00000010:int32] : int32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_977: (in PostQuitMessage(Mem116[esp_45 - 0x00000010:int32]) : void)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_978: (in 0x0000000C : word32)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in esp_45 + 0x0000000C : word32)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in Mem67[esp_45 + 0x0000000C:word32] : word32)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in 0x00000005 : word32)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_982: (in Mem67[esp_45 + 0x0000000C:word32] == 0x00000005 : bool)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in 0x00402108 : ptr32)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in Mem67[0x00402108:word32] : word32)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_985: (in 0x0000000A : word32)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_986: (in Mem67[0x00402108:word32] <u 0x0000000A : bool)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in 0x00000014 : word32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in ebp_108 + 0x00000014 : word32)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in Mem67[ebp_108 + 0x00000014:word32] : word32)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_990: (in 0x00000010 : word32)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in esp_45 - 0x00000010 : word32)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in Mem95[esp_45 - 0x00000010:word32] : word32)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_993: (in 0x00000010 : word32)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in ebp_108 + 0x00000010 : word32)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in Mem95[ebp_108 + 0x00000010:word32] : word32)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in 0x00000014 : word32)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in esp_45 - 0x00000014 : word32)
  Class: Eq_997
  DataType: 
  OrigDataType: 
T_998: (in Mem97[esp_45 - 0x00000014:word32] : word32)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_999: (in 0x0000000C : word32)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in ebp_108 + 0x0000000C : word32)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in Mem97[ebp_108 + 0x0000000C:word32] : word32)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in 0x00000018 : word32)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in esp_45 - 0x00000018 : word32)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in Mem99[esp_45 - 0x00000018:word32] : word32)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1005: (in 0x00000008 : word32)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in ebp_108 + 0x00000008 : word32)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in Mem99[ebp_108 + 0x00000008:word32] : word32)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in 0x0000001C : word32)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in esp_45 - 0x0000001C : word32)
  Class: Eq_1009
  DataType: 
  OrigDataType: 
T_1010: (in Mem101[esp_45 - 0x0000001C:word32] : word32)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1011: (in DefWindowProcW : ptr32)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in signature of DefWindowProcW : void)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1013: (in hWnd : HWND)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in Msg : UINT)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in wParam : WPARAM)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in lParam : LPARAM)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in esp_45 - 0x0000001C : word32)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in Mem101[esp_45 - 0x0000001C:HWND] : HWND)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1019: (in 24 : int32)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in esp_45 - 24 : word32)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in Mem101[esp_45 - 24:UINT] : UINT)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1022: (in 20 : int32)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in esp_45 - 20 : word32)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in Mem101[esp_45 - 20:WPARAM] : WPARAM)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1025: (in 16 : int32)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in esp_45 - 16 : word32)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in Mem101[esp_45 - 16:LPARAM] : LPARAM)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1028: (in DefWindowProcW(Mem101[esp_45 - 0x0000001C:HWND], Mem101[esp_45 - 24:UINT], Mem101[esp_45 - 20:WPARAM], Mem101[esp_45 - 16:LPARAM]) : word32)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in esi_109 : word32)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in edi_110 : word32)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1031: (in fn00401052 : ptr32)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_1032: (in out ebp_108 : ptr32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_1033: (in out esi_109 : ptr32)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_1034: (in out edi_110 : ptr32)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_1035: (in fn00401052(rArg1, out ebp_108, out esi_109, out edi_110) : word32)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
*/
