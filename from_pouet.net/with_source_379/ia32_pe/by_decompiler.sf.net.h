// subject.h
// Generated on 5/4/2015 12:11:20 AM by decompiling from_pouet.net/with_source_379/ia32_pe/subject.exe
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
  DataType: (ptr (struct (0 T_122 t0000)))
  OrigDataType: (ptr (struct (0 T_122 t0000)))
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
T_96: (in eax_101 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in DPB(eax_101, bh_165, 0, 8) : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_98: (in P : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in atan : ptr32)
  Class: Eq_99
  DataType: (ptr (fn T_101 (T_100, T_92)))
  OrigDataType: (ptr (fn T_101 (T_100, T_92)))
T_100: (in rArg0 : real64)
  Class: Eq_100
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_101: (in atan(rArg0, rLoc1_99) : real64)
  Class: Eq_101
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_102: (in 0x0040213E : ptr32)
  Class: Eq_102
  DataType: (ptr (struct (0 T_103 t0000)))
  OrigDataType: (ptr (struct (0 T_103 t0000)))
T_103: (in Mem92[0x0040213E:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in (real64) Mem92[0x0040213E:word16] : real64)
  Class: Eq_104
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_105: (in atan(rArg0, rLoc1_99) * (real64) Mem92[0x0040213E:word16] : word32)
  Class: Eq_100
  DataType: real32
  OrigDataType: real32
T_106: (in (int16) rArg0 : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_107: (in 0x00402144 : ptr32)
  Class: Eq_107
  DataType: (ptr (struct (0 T_108 t0000)))
  OrigDataType: (ptr (struct (0 T_108 t0000)))
T_108: (in Mem110[0x00402144:int16] : int16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_109: (in ax_111 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_110: (in 0x00402144 : word32)
  Class: Eq_110
  DataType: (ptr (struct (0 T_111 t0000)))
  OrigDataType: (ptr (struct (0 T_111 t0000)))
T_111: (in Mem110[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_112: (in 0x00402144 : ptr32)
  Class: Eq_112
  DataType: (ptr (struct (0 T_113 t0000)))
  OrigDataType: (ptr (struct (0 T_113 t0000)))
T_113: (in Mem112[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_114: (in ax_113 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in 0x0040213F : ptr32)
  Class: Eq_115
  DataType: (ptr (struct (0 T_116 t0000)))
  OrigDataType: (ptr (struct (0 T_116 t0000)))
T_116: (in Mem112[0x0040213F:word16] : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in ax_111 + Mem112[0x0040213F:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_118: (in ax_120 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in DPB(ax_113, dh_97, 0, 8) : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_120: (in ah_114 : byte)
  Class: Eq_120
  DataType: uint8
  OrigDataType: uint8
T_121: (in SLICE(ax_113, byte, 8) : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_122: (in cl_116 : byte)
  Class: Eq_122
  DataType: (union (uint32 u0) (byte u1))
  OrigDataType: (union (uint32 u0) (byte u1))
T_123: (in 0x00 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_124: (in cx : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in 0x00 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in DPB(cx, 0x00, 0, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_127: (in DPB(eax_101, dh_97, 0, 8) : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_128: (in dh_130 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in 0x0707 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in ax_120 & 0x0707 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in (byte) (ax_120 & 0x0707) : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in ax_120 & 0x0707 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in SLICE(ax_120 & 0x0707, byte, 8) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in (byte) (ax_120 & 0x0707) + SLICE(ax_120 & 0x0707, byte, 8) : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in (byte) (ax_120 & 0x0707) + SLICE(ax_120 & 0x0707, byte, 8) + dh_97 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_136: (in 0xEC : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_137: (in dh_97 >u 0xEC : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in 0xE6 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_139: (in dh_97 >u 0xE6 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0xEB : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_141: (in dh_97 <u 0xEB : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in 0x01 : byte)
  Class: Eq_142
  DataType: uint8
  OrigDataType: uint8
T_143: (in ah_114 >>u 0x01 : word32)
  Class: Eq_122
  DataType: uint32
  OrigDataType: uint32
T_144: (in ah_114 >>u 0x01 : word32)
  Class: Eq_144
  DataType: uint32
  OrigDataType: uint32
T_145: (in DPB(cx, ah_114 >>u 0x01, 0, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_146: (in 0x00402144 : ptr32)
  Class: Eq_146
  DataType: (ptr (struct (0 T_147 t0000)))
  OrigDataType: (ptr (struct (0 T_147 t0000)))
T_147: (in Mem112[0x00402144:word16] : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0005 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in Mem112[0x00402144:word16] << 0x0005 : word16)
  Class: Eq_149
  DataType: ui16
  OrigDataType: ui16
T_150: (in SLICE(Mem112[0x00402144:word16] << 0x0005, byte, 8) : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in 0x60 : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in SLICE(Mem112[0x00402144:word16] << 0x0005, byte, 8) + 0x60 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_153: (in 0x0040211C : ptr32)
  Class: Eq_153
  DataType: (ptr (struct (0 T_154 t0000)))
  OrigDataType: (ptr (struct (0 T_154 t0000)))
T_154: (in Mem112[0x0040211C:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in ebx_163 + Mem112[0x0040211C:word32] : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in Mem157[ebx_163 + Mem112[0x0040211C:word32]:byte] : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_157: (in 0x80 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in dh_130 + 0x80 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_159: (in 0x00402120 : ptr32)
  Class: Eq_159
  DataType: (ptr (struct (0 T_160 t0000)))
  OrigDataType: (ptr (struct (0 T_160 t0000)))
T_160: (in Mem157[0x00402120:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in ebx_163 + Mem157[0x00402120:word32] : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in Mem161[ebx_163 + Mem157[0x00402120:word32]:byte] : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_163: (in 0x0001 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in bx_162 + 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_165: (in DPB(ebx_163, bx_162, 0, 16) : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_166: (in (byte) bx_162 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_167: (in SLICE(bx_162, byte, 8) : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_168: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_169: (in bx_162 != 0x0000 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in 0x1F : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in ah_114 & 0x1F : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in DPB(cx, ah_114 & 0x1F, 8, 8) : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_173: (in ah_114 & 0x1F : byte)
  Class: Eq_173
  DataType: bcu8
  OrigDataType: bcu8
T_174: (in 0x03 : byte)
  Class: Eq_173
  DataType: bcu8
  OrigDataType: bcu8
T_175: (in (ah_114 & 0x1F) >u 0x03 : bool)
  Class: Eq_175
  DataType: bool
  OrigDataType: bool
T_176: (in 0xB2 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_177: (in dh_97 >u 0xB2 : bool)
  Class: Eq_177
  DataType: bool
  OrigDataType: bool
T_178: (in 0xE5 : byte)
  Class: Eq_90
  DataType: bcu8
  OrigDataType: bcu8
T_179: (in dh_97 <u 0xE5 : bool)
  Class: Eq_179
  DataType: bool
  OrigDataType: bool
T_180: (in 0x14 : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in dh_130 - 0x14 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_182: (in __ror : ptr32)
  Class: Eq_182
  DataType: (ptr (fn T_184 (T_90, T_183)))
  OrigDataType: (ptr (fn T_184 (T_90, T_183)))
T_183: (in 0x03 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in __ror(dh_97, 0x03) : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185: (in 0x1E : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in __ror(dh_97, 0x03) + 0x1E : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_187: (in 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in cx - 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_189: (in cx - 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_191: (in DPB(eax_127, bl_164, 0, 8) : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_192: (in 0xF200 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_193: (in edi_168 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in 0x0003E800 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_195: (in si_170 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in 0x0064 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_197: (in eax_303 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in 0x00402104 : ptr32)
  Class: Eq_198
  DataType: (ptr (struct (0 T_199 t0000)))
  OrigDataType: (ptr (struct (0 T_199 t0000)))
T_199: (in Mem218[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: (ptr (struct (0 T_205 t0000)))
  OrigDataType: (ptr (struct (0 T_205 t0000)))
T_200: (in eax_242 : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in 0x000000FF : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in eax_242 & 0x000000FF : word32)
  Class: Eq_202
  DataType: ui32
  OrigDataType: ui32
T_203: (in 0x00000004 : word32)
  Class: Eq_203
  DataType: ui32
  OrigDataType: ui32
T_204: (in (eax_242 & 0x000000FF) * 0x00000004 : word32)
  Class: Eq_204
  DataType: ui32
  OrigDataType: ui32
T_205: (in Mem218[0x00402104:word32][(eax_242 & 0x000000FF) * 0x00000004] : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_206: (in esp_217 : word32)
  Class: Eq_206
  DataType: (ptr (struct (FFFFFFF4 T_401 tFFFFFFF4) (FFFFFFF8 T_396 tFFFFFFF8) (FFFFFFFC T_392 tFFFFFFFC) (0 T_193 t0000) (4 T_223 t0004) (8 T_378 t0008) (C T_374 t000C) (10 T_370 t0010) (14 T_366 t0014) (18 T_211 t0018) (1C T_357 t001C) (20 T_335 t0020) (24 T_330 t0024) (28 T_462 t0028)))
  OrigDataType: (ptr (struct (FFFFFFF4 T_401 tFFFFFFF4) (FFFFFFF8 T_396 tFFFFFFF8) (FFFFFFFC T_392 tFFFFFFFC) (0 T_193 t0000) (4 T_223 t0004) (8 T_378 t0008) (C T_374 t000C) (10 T_370 t0010) (14 T_366 t0014) (18 T_211 t0018) (1C T_357 t001C) (20 T_335 t0020) (24 T_330 t0024) (28 T_462 t0028)))
T_207: (in 0x00000000 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in esp_217 + 0x00000000 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in Mem218[esp_217 + 0x00000000:word32] : word32)
  Class: Eq_193
  DataType: (ptr (struct (0 T_213 t0000)))
  OrigDataType: (ptr (struct (0 T_213 t0000)))
T_210: (in 0x00402100 : ptr32)
  Class: Eq_210
  DataType: (ptr (struct (0 T_211 t0000)))
  OrigDataType: (ptr (struct (0 T_211 t0000)))
T_211: (in Mem218[0x00402100:word32] : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in Mem218[esp_217 + 0x00000000:word32] + Mem218[0x00402100:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in Mem304[Mem218[esp_217 + 0x00000000:word32] + Mem218[0x00402100:word32]:word32] : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_214: (in 0x00402142 : ptr32)
  Class: Eq_214
  DataType: (ptr (struct (0 T_215 t0000)))
  OrigDataType: (ptr (struct (0 T_215 t0000)))
T_215: (in Mem304[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in 0x0001 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in Mem304[0x00402142:word16] + 0x0001 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_218: (in Mem307[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_219: (in 0x00402142 : ptr32)
  Class: Eq_219
  DataType: (ptr (struct (0 T_220 t0000)))
  OrigDataType: (ptr (struct (0 T_220 t0000)))
T_220: (in Mem307[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_221: (in 0x00A0 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_222: (in Mem307[0x00402142:word16] != 0x00A0 : bool)
  Class: Eq_222
  DataType: bool
  OrigDataType: bool
T_223: (in edi_310 : word32)
  Class: Eq_223
  DataType: (ptr (struct (0 T_237 t0000)))
  OrigDataType: (ptr (struct (0 T_237 t0000)))
T_224: (in 0x00000004 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in esp_217 + 0x00000004 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in Mem307[esp_217 + 0x00000004:word32] : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_227: (in 0x00402104 : ptr32)
  Class: Eq_227
  DataType: (ptr (struct (0 T_228 t0000)))
  OrigDataType: (ptr (struct (0 T_228 t0000)))
T_228: (in Mem307[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: (ptr (struct (0 T_233 t0000)))
  OrigDataType: (ptr (struct (0 T_233 t0000)))
T_229: (in 0x000000FF : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in eax_303 & 0x000000FF : word32)
  Class: Eq_230
  DataType: ui32
  OrigDataType: ui32
T_231: (in 0x00000004 : word32)
  Class: Eq_231
  DataType: ui32
  OrigDataType: ui32
T_232: (in (eax_303 & 0x000000FF) * 0x00000004 : word32)
  Class: Eq_232
  DataType: ui32
  OrigDataType: ui32
T_233: (in Mem307[0x00402104:word32][(eax_303 & 0x000000FF) * 0x00000004] : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_234: (in 0x00402100 : ptr32)
  Class: Eq_234
  DataType: (ptr (struct (0 T_235 t0000)))
  OrigDataType: (ptr (struct (0 T_235 t0000)))
T_235: (in Mem307[0x00402100:word32] : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_236: (in edi_310 + Mem307[0x00402100:word32] : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in Mem320[edi_310 + Mem307[0x00402100:word32]:word32] : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_238: (in 0x00402142 : ptr32)
  Class: Eq_238
  DataType: (ptr (struct (0 T_215 t0000)))
  OrigDataType: (ptr (struct (0 T_215 t0000)))
T_239: (in Mem320[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_240: (in 0x0001 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in Mem320[0x00402142:word16] + 0x0001 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_242: (in Mem324[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_243: (in 0x00000008 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in esp_217 + 0x00000008 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_245: (in 0x00000004 : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_246: (in edi_310 - 0x00000004 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_247: (in 0x00402142 : ptr32)
  Class: Eq_247
  DataType: (ptr (struct (0 T_248 t0000)))
  OrigDataType: (ptr (struct (0 T_248 t0000)))
T_248: (in Mem324[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_249: (in 0x00A0 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_250: (in Mem324[0x00402142:word16] != 0x00A0 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in ah_276 : byte)
  Class: Eq_251
  DataType: byte
  OrigDataType: byte
T_252: (in 0x00 : byte)
  Class: Eq_251
  DataType: byte
  OrigDataType: byte
T_253: (in ah_276 == 0x00 : bool)
  Class: Eq_253
  DataType: bool
  OrigDataType: bool
T_254: (in dh_267 : byte)
  Class: Eq_254
  DataType: uint8
  OrigDataType: uint8
T_255: (in 0x46 : byte)
  Class: Eq_254
  DataType: bcu8
  OrigDataType: bcu8
T_256: (in dh_267 <=u 0x46 : bool)
  Class: Eq_256
  DataType: bool
  OrigDataType: bool
T_257: (in 0x01 : byte)
  Class: Eq_257
  DataType: uint8
  OrigDataType: uint8
T_258: (in dh_267 >>u 0x01 : word32)
  Class: Eq_258
  DataType: uint32
  OrigDataType: uint32
T_259: (in DPB(ebx_163, dh_267 >>u 0x01, 8, 8) : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_260: (in ah_460 : byte)
  Class: Eq_260
  DataType: byte
  OrigDataType: byte
T_261: (in 0x00402124 : ptr32)
  Class: Eq_261
  DataType: (ptr (struct (0 T_262 t0000)))
  OrigDataType: (ptr (struct (0 T_262 t0000)))
T_262: (in Mem218[0x00402124:word32] : word32)
  Class: Eq_31
  DataType: (ptr (struct (0 T_264 t0000)))
  OrigDataType: (ptr (struct (0 T_264 t0000)))
T_263: (in Mem218[0x00402124:word32] + ebx_163 : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in Mem218[Mem218[0x00402124:word32] + ebx_163:byte] : byte)
  Class: Eq_260
  DataType: byte
  OrigDataType: byte
T_265: (in DPB(eax_242, ah_460, 8, 8) : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_266: (in 0x00 : byte)
  Class: Eq_260
  DataType: byte
  OrigDataType: byte
T_267: (in ah_460 == 0x00 : bool)
  Class: Eq_267
  DataType: bool
  OrigDataType: bool
T_268: (in al_278 : byte)
  Class: Eq_268
  DataType: byte
  OrigDataType: byte
T_269: (in 0x80 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in al_278 + 0x80 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in DPB(eax_242, al_278 + 0x80, 0, 8) : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_272: (in 0x00000004 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in esp_200 - 0x00000004 : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_274: (in 0x00000000 : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in esp_217 + 0x00000000 : word32)
  Class: Eq_275
  DataType: word32
  OrigDataType: word32
T_276: (in Mem218[esp_217 + 0x00000000:word32] : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_277: (in dx_ax_227 : int32)
  Class: Eq_277
  DataType: int32
  OrigDataType: int32
T_278: (in 0x00402140 : word32)
  Class: Eq_278
  DataType: (ptr (struct (0 T_279 t0000)))
  OrigDataType: (ptr (struct (0 T_279 t0000)))
T_279: (in Mem218[0x00402140:word16] : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_280: (in 0x0001 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in Mem218[0x00402140:word16] << 0x0001 : word16)
  Class: Eq_281
  DataType: ui16
  OrigDataType: ui16
T_282: (in (byte) (Mem218[0x00402140:word16] << 0x0001) : byte)
  Class: Eq_282
  DataType: byte
  OrigDataType: byte
T_283: (in (int16) (byte) (Mem218[0x00402140:word16] << 0x0001) : int16)
  Class: Eq_283
  DataType: int16
  OrigDataType: int16
T_284: (in (int32) (int16) (byte) (Mem218[0x00402140:word16] << 0x0001) : int32)
  Class: Eq_277
  DataType: int32
  OrigDataType: int32
T_285: (in al_231 : byte)
  Class: Eq_285
  DataType: int8
  OrigDataType: int8
T_286: (in (byte) dx_ax_227 : byte)
  Class: Eq_286
  DataType: byte
  OrigDataType: byte
T_287: (in 0x7F : byte)
  Class: Eq_287
  DataType: byte
  OrigDataType: byte
T_288: (in (byte) dx_ax_227 & 0x7F : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_289: (in 0x40 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in ((byte) dx_ax_227 & 0x7F) - 0x40 : byte)
  Class: Eq_285
  DataType: byte
  OrigDataType: byte
T_291: (in ax_232 : word16)
  Class: Eq_291
  DataType: word16
  OrigDataType: word16
T_292: (in al_231 *s al_231 : int16)
  Class: Eq_291
  DataType: int16
  OrigDataType: int16
T_293: (in ax_235 : word16)
  Class: Eq_293
  DataType: ui16
  OrigDataType: ui16
T_294: (in SLICE(ax_232, byte, 8) : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in 0x10 : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in SLICE(ax_232, byte, 8) - 0x10 : byte)
  Class: Eq_296
  DataType: byte
  OrigDataType: byte
T_297: (in DPB(ax_232, SLICE(ax_232, byte, 8) - 0x10, 8, 8) : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_298: (in dx_236 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_299: (in SLICE(dx_ax_227, word16, 16) : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in SLICE(dx_ax_227, word16, 16) ^ ax_235 : word16)
  Class: Eq_298
  DataType: word16
  OrigDataType: word16
T_301: (in cx_219 : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_302: (in 0x7F40 : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_303: (in 0x0002 : word16)
  Class: Eq_303
  DataType: ui16
  OrigDataType: ui16
T_304: (in ax_235 * 0x0002 : word16)
  Class: Eq_304
  DataType: ui16
  OrigDataType: ui16
T_305: (in SLICE(ax_235 * 0x0002, byte, 8) : byte)
  Class: Eq_305
  DataType: byte
  OrigDataType: byte
T_306: (in 0x01 : byte)
  Class: Eq_306
  DataType: byte
  OrigDataType: byte
T_307: (in SLICE(ax_235 * 0x0002, byte, 8) - 0x01 : byte)
  Class: Eq_307
  DataType: byte
  OrigDataType: byte
T_308: (in DPB(eax_127, SLICE(ax_235 * 0x0002, byte, 8) - 0x01, 8, 8) : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_309: (in dx_246 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_310: (in SLICE(dx_236, byte, 8) : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_311: (in 0x20 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_312: (in SLICE(dx_236, byte, 8) + 0x20 : byte)
  Class: Eq_312
  DataType: byte
  OrigDataType: byte
T_313: (in DPB(dx_236, SLICE(dx_236, byte, 8) + 0x20, 8, 8) : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_314: (in si_327 : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in 0x0001 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in si_170 - 0x0001 : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_317: (in 0xFF9C : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_318: (in si_327 != 0xFF9C : bool)
  Class: Eq_318
  DataType: bool
  OrigDataType: bool
T_319: (in 0x0001 : word16)
  Class: Eq_319
  DataType: word16
  OrigDataType: word16
T_320: (in si_327 - 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_321: (in 0xFF9D : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_322: (in si_327 != 0xFF9D : bool)
  Class: Eq_322
  DataType: bool
  OrigDataType: bool
T_323: (in 0xFF60 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_324: (in 0x00402142 : ptr32)
  Class: Eq_324
  DataType: (ptr (struct (0 T_325 t0000)))
  OrigDataType: (ptr (struct (0 T_325 t0000)))
T_325: (in Mem201[0x00402142:word16] : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_326: (in ebx_341 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_327: (in 0x00000018 : word32)
  Class: Eq_327
  DataType: word32
  OrigDataType: word32
T_328: (in esp_217 + 0x00000018 : word32)
  Class: Eq_328
  DataType: word32
  OrigDataType: word32
T_329: (in Mem324[esp_217 + 0x00000018:word32] : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_330: (in 0x004020F0 : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_331: (in 0x00000024 : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_332: (in esp_217 + 0x00000024 : word32)
  Class: Eq_332
  DataType: word32
  OrigDataType: word32
T_333: (in Mem350[esp_217 + 0x00000024:word32] : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_334: (in 0x004020CC : ptr32)
  Class: Eq_334
  DataType: (ptr (struct (0 T_335 t0000)))
  OrigDataType: (ptr (struct (0 T_335 t0000)))
T_335: (in Mem350[0x004020CC:word32] : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_336: (in 0x00000020 : word32)
  Class: Eq_336
  DataType: word32
  OrigDataType: word32
T_337: (in esp_217 + 0x00000020 : word32)
  Class: Eq_337
  DataType: word32
  OrigDataType: word32
T_338: (in Mem352[esp_217 + 0x00000020:word32] : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_339: (in GetClientRect : ptr32)
  Class: Eq_339
  DataType: (ptr (fn T_348 (T_344, T_347)))
  OrigDataType: (ptr (fn T_348 (T_344, T_347)))
T_340: (in signature of GetClientRect : void)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_341: (in hWnd : HWND)
  Class: Eq_335
  DataType: HWND
  OrigDataType: HWND
T_342: (in lpRect : LPRECT)
  Class: Eq_330
  DataType: LPRECT
  OrigDataType: LPRECT
T_343: (in esp_217 + 0x00000020 : word32)
  Class: Eq_343
  DataType: word32
  OrigDataType: word32
T_344: (in Mem352[esp_217 + 0x00000020:HWND] : HWND)
  Class: Eq_335
  DataType: HWND
  OrigDataType: HWND
T_345: (in 36 : int32)
  Class: Eq_345
  DataType: int32
  OrigDataType: int32
T_346: (in esp_217 + 36 : word32)
  Class: Eq_346
  DataType: word32
  OrigDataType: word32
T_347: (in Mem352[esp_217 + 36:LPRECT] : LPRECT)
  Class: Eq_330
  DataType: LPRECT
  OrigDataType: LPRECT
T_348: (in GetClientRect(Mem352[esp_217 + 0x00000020:HWND], Mem352[esp_217 + 36:LPRECT]) : word32)
  Class: Eq_348
  DataType: word32
  OrigDataType: word32
T_349: (in 0x00CC0020 : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_350: (in 0x00000024 : word32)
  Class: Eq_350
  DataType: word32
  OrigDataType: word32
T_351: (in esp_217 + 0x00000024 : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_352: (in Mem356[esp_217 + 0x00000024:word32] : word32)
  Class: Eq_330
  DataType: word32
  OrigDataType: word32
T_353: (in 0x00000000 : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_354: (in 0x00000020 : word32)
  Class: Eq_354
  DataType: word32
  OrigDataType: word32
T_355: (in esp_217 + 0x00000020 : word32)
  Class: Eq_355
  DataType: word32
  OrigDataType: word32
T_356: (in Mem358[esp_217 + 0x00000020:word32] : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_357: (in 0x0040206C : word32)
  Class: Eq_357
  DataType: word32
  OrigDataType: word32
T_358: (in 0x0000001C : word32)
  Class: Eq_358
  DataType: word32
  OrigDataType: word32
T_359: (in esp_217 + 0x0000001C : word32)
  Class: Eq_359
  DataType: word32
  OrigDataType: word32
T_360: (in Mem360[esp_217 + 0x0000001C:word32] : word32)
  Class: Eq_357
  DataType: word32
  OrigDataType: word32
T_361: (in 0x00402100 : ptr32)
  Class: Eq_361
  DataType: (ptr (struct (0 T_362 t0000)))
  OrigDataType: (ptr (struct (0 T_362 t0000)))
T_362: (in Mem360[0x00402100:word32] : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_363: (in 0x00000018 : word32)
  Class: Eq_363
  DataType: word32
  OrigDataType: word32
T_364: (in esp_217 + 0x00000018 : word32)
  Class: Eq_364
  DataType: word32
  OrigDataType: word32
T_365: (in Mem362[esp_217 + 0x00000018:word32] : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_366: (in 0x000000C8 : word32)
  Class: Eq_366
  DataType: word32
  OrigDataType: word32
T_367: (in 0x00000014 : word32)
  Class: Eq_367
  DataType: word32
  OrigDataType: word32
T_368: (in esp_217 + 0x00000014 : word32)
  Class: Eq_368
  DataType: word32
  OrigDataType: word32
T_369: (in Mem364[esp_217 + 0x00000014:word32] : word32)
  Class: Eq_366
  DataType: word32
  OrigDataType: word32
T_370: (in 0x00000140 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_371: (in 0x00000010 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_372: (in esp_217 + 0x00000010 : word32)
  Class: Eq_372
  DataType: word32
  OrigDataType: word32
T_373: (in Mem366[esp_217 + 0x00000010:word32] : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_374: (in 0x00000000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_375: (in 0x0000000C : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_376: (in esp_217 + 0x0000000C : word32)
  Class: Eq_376
  DataType: word32
  OrigDataType: word32
T_377: (in Mem368[esp_217 + 0x0000000C:word32] : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_378: (in 0x00000000 : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_379: (in 0x00000008 : word32)
  Class: Eq_379
  DataType: word32
  OrigDataType: word32
T_380: (in esp_217 + 0x00000008 : word32)
  Class: Eq_380
  DataType: word32
  OrigDataType: word32
T_381: (in Mem370[esp_217 + 0x00000008:word32] : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_382: (in 0x004020FC : ptr32)
  Class: Eq_382
  DataType: (ptr (struct (0 T_383 t0000)))
  OrigDataType: (ptr (struct (0 T_383 t0000)))
T_383: (in Mem370[0x004020FC:word32] : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_384: (in 0x00000004 : word32)
  Class: Eq_384
  DataType: word32
  OrigDataType: word32
T_385: (in esp_217 + 0x00000004 : word32)
  Class: Eq_385
  DataType: word32
  OrigDataType: word32
T_386: (in Mem372[esp_217 + 0x00000004:word32] : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_387: (in 0x004020F8 : ptr32)
  Class: Eq_387
  DataType: (ptr (struct (0 T_388 t0000)))
  OrigDataType: (ptr (struct (0 T_388 t0000)))
T_388: (in Mem372[0x004020F8:word32] : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_389: (in 0x00000000 : word32)
  Class: Eq_389
  DataType: word32
  OrigDataType: word32
T_390: (in esp_217 + 0x00000000 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_391: (in Mem374[esp_217 + 0x00000000:word32] : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_392: (in 0x00000000 : word32)
  Class: Eq_392
  DataType: word32
  OrigDataType: word32
T_393: (in 0x00000004 : word32)
  Class: Eq_393
  DataType: word32
  OrigDataType: word32
T_394: (in esp_217 - 0x00000004 : word32)
  Class: Eq_394
  DataType: word32
  OrigDataType: word32
T_395: (in Mem376[esp_217 - 0x00000004:word32] : word32)
  Class: Eq_392
  DataType: word32
  OrigDataType: word32
T_396: (in 0x00000000 : word32)
  Class: Eq_396
  DataType: word32
  OrigDataType: word32
T_397: (in 0x00000008 : word32)
  Class: Eq_397
  DataType: word32
  OrigDataType: word32
T_398: (in esp_217 - 0x00000008 : word32)
  Class: Eq_398
  DataType: word32
  OrigDataType: word32
T_399: (in Mem378[esp_217 - 0x00000008:word32] : word32)
  Class: Eq_396
  DataType: word32
  OrigDataType: word32
T_400: (in 0x004020D0 : ptr32)
  Class: Eq_400
  DataType: (ptr (struct (0 T_401 t0000)))
  OrigDataType: (ptr (struct (0 T_401 t0000)))
T_401: (in Mem378[0x004020D0:word32] : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_402: (in 0x0000000C : word32)
  Class: Eq_402
  DataType: word32
  OrigDataType: word32
T_403: (in esp_217 - 0x0000000C : word32)
  Class: Eq_403
  DataType: word32
  OrigDataType: word32
T_404: (in Mem380[esp_217 - 0x0000000C:word32] : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_405: (in StretchDIBits : ptr32)
  Class: Eq_405
  DataType: (ptr (fn T_458 (T_421, T_424, T_427, T_430, T_433, T_436, T_439, T_442, T_445, T_448, T_451, T_454, T_457)))
  OrigDataType: (ptr (fn T_458 (T_421, T_424, T_427, T_430, T_433, T_436, T_439, T_442, T_445, T_448, T_451, T_454, T_457)))
T_406: (in signature of StretchDIBits : void)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_407: (in hdc : HDC)
  Class: Eq_401
  DataType: HDC
  OrigDataType: HDC
T_408: (in xDest : int32)
  Class: Eq_396
  DataType: int32
  OrigDataType: int32
T_409: (in yDest : int32)
  Class: Eq_392
  DataType: int32
  OrigDataType: int32
T_410: (in DestWidth : int32)
  Class: Eq_193
  DataType: int32
  OrigDataType: int32
T_411: (in DestHeight : int32)
  Class: Eq_223
  DataType: int32
  OrigDataType: int32
T_412: (in xSrc : int32)
  Class: Eq_378
  DataType: int32
  OrigDataType: int32
T_413: (in ySrc : int32)
  Class: Eq_374
  DataType: int32
  OrigDataType: int32
T_414: (in SrcWidth : int32)
  Class: Eq_370
  DataType: int32
  OrigDataType: int32
T_415: (in SrcHeight : int32)
  Class: Eq_366
  DataType: int32
  OrigDataType: int32
T_416: (in lpBits : (ptr void))
  Class: Eq_211
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_417: (in lpbmi : (ptr BITMAPINFO))
  Class: Eq_357
  DataType: (ptr BITMAPINFO)
  OrigDataType: (ptr BITMAPINFO)
T_418: (in iUsage : UINT)
  Class: Eq_335
  DataType: UINT
  OrigDataType: UINT
T_419: (in rop : DWORD)
  Class: Eq_330
  DataType: DWORD
  OrigDataType: DWORD
T_420: (in esp_217 - 0x0000000C : word32)
  Class: Eq_420
  DataType: word32
  OrigDataType: word32
T_421: (in Mem380[esp_217 - 0x0000000C:HDC] : HDC)
  Class: Eq_401
  DataType: HDC
  OrigDataType: HDC
T_422: (in 8 : int32)
  Class: Eq_422
  DataType: int32
  OrigDataType: int32
T_423: (in esp_217 - 8 : word32)
  Class: Eq_423
  DataType: word32
  OrigDataType: word32
T_424: (in Mem380[esp_217 - 8:int32] : int32)
  Class: Eq_396
  DataType: int32
  OrigDataType: int32
T_425: (in 4 : int32)
  Class: Eq_425
  DataType: int32
  OrigDataType: int32
T_426: (in esp_217 - 4 : word32)
  Class: Eq_426
  DataType: word32
  OrigDataType: word32
T_427: (in Mem380[esp_217 - 4:int32] : int32)
  Class: Eq_392
  DataType: int32
  OrigDataType: int32
T_428: (in 0x00000000 : word32)
  Class: Eq_428
  DataType: word32
  OrigDataType: word32
T_429: (in esp_217 + 0x00000000 : word32)
  Class: Eq_429
  DataType: word32
  OrigDataType: word32
T_430: (in Mem380[esp_217 + 0x00000000:int32] : int32)
  Class: Eq_193
  DataType: int32
  OrigDataType: int32
T_431: (in 4 : int32)
  Class: Eq_431
  DataType: int32
  OrigDataType: int32
T_432: (in esp_217 + 4 : word32)
  Class: Eq_432
  DataType: word32
  OrigDataType: word32
T_433: (in Mem380[esp_217 + 4:int32] : int32)
  Class: Eq_223
  DataType: int32
  OrigDataType: int32
T_434: (in 8 : int32)
  Class: Eq_434
  DataType: int32
  OrigDataType: int32
T_435: (in esp_217 + 8 : word32)
  Class: Eq_435
  DataType: word32
  OrigDataType: word32
T_436: (in Mem380[esp_217 + 8:int32] : int32)
  Class: Eq_378
  DataType: int32
  OrigDataType: int32
T_437: (in 12 : int32)
  Class: Eq_437
  DataType: int32
  OrigDataType: int32
T_438: (in esp_217 + 12 : word32)
  Class: Eq_438
  DataType: word32
  OrigDataType: word32
T_439: (in Mem380[esp_217 + 12:int32] : int32)
  Class: Eq_374
  DataType: int32
  OrigDataType: int32
T_440: (in 16 : int32)
  Class: Eq_440
  DataType: int32
  OrigDataType: int32
T_441: (in esp_217 + 16 : word32)
  Class: Eq_441
  DataType: word32
  OrigDataType: word32
T_442: (in Mem380[esp_217 + 16:int32] : int32)
  Class: Eq_370
  DataType: int32
  OrigDataType: int32
T_443: (in 20 : int32)
  Class: Eq_443
  DataType: int32
  OrigDataType: int32
T_444: (in esp_217 + 20 : word32)
  Class: Eq_444
  DataType: word32
  OrigDataType: word32
T_445: (in Mem380[esp_217 + 20:int32] : int32)
  Class: Eq_366
  DataType: int32
  OrigDataType: int32
T_446: (in 24 : int32)
  Class: Eq_446
  DataType: int32
  OrigDataType: int32
T_447: (in esp_217 + 24 : word32)
  Class: Eq_447
  DataType: word32
  OrigDataType: word32
T_448: (in Mem380[esp_217 + 24:(ptr void)] : (ptr void))
  Class: Eq_211
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_449: (in 28 : int32)
  Class: Eq_449
  DataType: int32
  OrigDataType: int32
T_450: (in esp_217 + 28 : word32)
  Class: Eq_450
  DataType: word32
  OrigDataType: word32
T_451: (in Mem380[esp_217 + 28:(ptr BITMAPINFO)] : (ptr BITMAPINFO))
  Class: Eq_357
  DataType: (ptr BITMAPINFO)
  OrigDataType: (ptr BITMAPINFO)
T_452: (in 32 : int32)
  Class: Eq_452
  DataType: int32
  OrigDataType: int32
T_453: (in esp_217 + 32 : word32)
  Class: Eq_453
  DataType: word32
  OrigDataType: word32
T_454: (in Mem380[esp_217 + 32:UINT] : UINT)
  Class: Eq_335
  DataType: UINT
  OrigDataType: UINT
T_455: (in 36 : int32)
  Class: Eq_455
  DataType: int32
  OrigDataType: int32
T_456: (in esp_217 + 36 : word32)
  Class: Eq_456
  DataType: word32
  OrigDataType: word32
T_457: (in Mem380[esp_217 + 36:DWORD] : DWORD)
  Class: Eq_330
  DataType: DWORD
  OrigDataType: DWORD
T_458: (in StretchDIBits(Mem380[esp_217 - 0x0000000C:HDC], Mem380[esp_217 - 8:int32], Mem380[esp_217 - 4:int32], Mem380[esp_217 + 0x00000000:int32], Mem380[esp_217 + 4:int32], Mem380[esp_217 + 8:int32], Mem380[esp_217 + 12:int32], Mem380[esp_217 + 16:int32], Mem380[esp_217 + 20:int32], Mem380[esp_217 + 24:(ptr void)], Mem380[esp_217 + 28:(ptr BITMAPINFO)], Mem380[esp_217 + 32:UINT], Mem380[esp_217 + 36:DWORD]) : word32)
  Class: Eq_458
  DataType: word32
  OrigDataType: word32
T_459: (in edi_383 : word32)
  Class: Eq_459
  DataType: word32
  OrigDataType: word32
T_460: (in 0x00000028 : word32)
  Class: Eq_460
  DataType: word32
  OrigDataType: word32
T_461: (in esp_217 + 0x00000028 : word32)
  Class: Eq_461
  DataType: word32
  OrigDataType: word32
T_462: (in Mem380[esp_217 + 0x00000028:word32] : word32)
  Class: Eq_462
  DataType: word32
  OrigDataType: word32
T_463: (in ediOut : ptr32)
  Class: Eq_463
  DataType: ptr32
  OrigDataType: ptr32
T_464: (in *ediOut : word32)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_465: (in esi_386 : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_466: (in 0x0000002C : word32)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in esp_217 + 0x0000002C : word32)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in Mem380[esp_217 + 0x0000002C:word32] : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in esiOut : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in *esiOut : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_471: (in ebp_389 : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in 0x00000030 : word32)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in esp_217 + 0x00000030 : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in Mem380[esp_217 + 0x00000030:word32] : word32)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in ebpOut : ptr32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in *ebpOut : word32)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_477: (in ebx_392 : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_478: (in 0x00000038 : word32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_479: (in esp_217 + 0x00000038 : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in Mem380[esp_217 + 0x00000038:word32] : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_481: (in 0x004020F0 : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in 0x00000044 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in esp_217 + 0x00000044 : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_484: (in Mem404[esp_217 + 0x00000044:word32] : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_485: (in 0x004020CC : ptr32)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_486: (in Mem404[0x004020CC:word32] : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in 0x00000040 : word32)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_488: (in esp_217 + 0x00000040 : word32)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in Mem406[esp_217 + 0x00000040:word32] : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_490: (in GetClientRect : ptr32)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_491: (in esp_217 + 0x00000040 : word32)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_492: (in Mem406[esp_217 + 0x00000040:HWND] : HWND)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_493: (in 68 : int32)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_494: (in esp_217 + 68 : word32)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_495: (in Mem406[esp_217 + 68:LPRECT] : LPRECT)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_496: (in GetClientRect(Mem406[esp_217 + 0x00000040:HWND], Mem406[esp_217 + 68:LPRECT]) : word32)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in 0x00CC0020 : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in 0x00000044 : word32)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in esp_217 + 0x00000044 : word32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in Mem410[esp_217 + 0x00000044:word32] : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_501: (in 0x00000000 : word32)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_502: (in 0x00000040 : word32)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in esp_217 + 0x00000040 : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_504: (in Mem412[esp_217 + 0x00000040:word32] : word32)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_505: (in 0x0040206C : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_506: (in 0x0000003C : word32)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_507: (in esp_217 + 0x0000003C : word32)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in Mem414[esp_217 + 0x0000003C:word32] : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_509: (in 0x00402100 : ptr32)
  Class: Eq_509
  DataType: 
  OrigDataType: 
T_510: (in Mem414[0x00402100:word32] : word32)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_511: (in 0x00000038 : word32)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in esp_217 + 0x00000038 : word32)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in Mem416[esp_217 + 0x00000038:word32] : word32)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_514: (in 0x000000C8 : word32)
  Class: Eq_514
  DataType: 
  OrigDataType: 
T_515: (in 0x00000034 : word32)
  Class: Eq_515
  DataType: 
  OrigDataType: 
T_516: (in esp_217 + 0x00000034 : word32)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_517: (in Mem418[esp_217 + 0x00000034:word32] : word32)
  Class: Eq_514
  DataType: 
  OrigDataType: 
T_518: (in 0x00000140 : word32)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in 0x00000030 : word32)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_520: (in esp_217 + 0x00000030 : word32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in Mem420[esp_217 + 0x00000030:word32] : word32)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_522: (in 0x00000000 : word32)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in 0x0000002C : word32)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in esp_217 + 0x0000002C : word32)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in Mem422[esp_217 + 0x0000002C:word32] : word32)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_526: (in 0x00000000 : word32)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in 0x00000028 : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in esp_217 + 0x00000028 : word32)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_529: (in Mem424[esp_217 + 0x00000028:word32] : word32)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_530: (in 0x004020FC : ptr32)
  Class: Eq_530
  DataType: 
  OrigDataType: 
T_531: (in Mem424[0x004020FC:word32] : word32)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in 0x00000024 : word32)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_533: (in esp_217 + 0x00000024 : word32)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in Mem426[esp_217 + 0x00000024:word32] : word32)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_535: (in 0x004020F8 : ptr32)
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_536: (in Mem426[0x004020F8:word32] : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in 0x00000020 : word32)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_538: (in esp_217 + 0x00000020 : word32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in Mem428[esp_217 + 0x00000020:word32] : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_540: (in 0x00000000 : word32)
  Class: Eq_540
  DataType: 
  OrigDataType: 
T_541: (in 0x0000001C : word32)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in esp_217 + 0x0000001C : word32)
  Class: Eq_542
  DataType: 
  OrigDataType: 
T_543: (in Mem430[esp_217 + 0x0000001C:word32] : word32)
  Class: Eq_540
  DataType: 
  OrigDataType: 
T_544: (in 0x00000000 : word32)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_545: (in 0x00000018 : word32)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in esp_217 + 0x00000018 : word32)
  Class: Eq_546
  DataType: 
  OrigDataType: 
T_547: (in Mem432[esp_217 + 0x00000018:word32] : word32)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_548: (in 0x004020D0 : ptr32)
  Class: Eq_548
  DataType: 
  OrigDataType: 
T_549: (in Mem432[0x004020D0:word32] : word32)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_550: (in 0x00000014 : word32)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_551: (in esp_217 + 0x00000014 : word32)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in Mem434[esp_217 + 0x00000014:word32] : word32)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_553: (in StretchDIBits : ptr32)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_554: (in esp_217 + 0x00000014 : word32)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in Mem434[esp_217 + 0x00000014:HDC] : HDC)
  Class: Eq_401
  DataType: 
  OrigDataType: 
T_556: (in 24 : int32)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_557: (in esp_217 + 24 : word32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in Mem434[esp_217 + 24:int32] : int32)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_559: (in 28 : int32)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_560: (in esp_217 + 28 : word32)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in Mem434[esp_217 + 28:int32] : int32)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_562: (in 32 : int32)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_563: (in esp_217 + 32 : word32)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in Mem434[esp_217 + 32:int32] : int32)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_565: (in 36 : int32)
  Class: Eq_565
  DataType: 
  OrigDataType: 
T_566: (in esp_217 + 36 : word32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in Mem434[esp_217 + 36:int32] : int32)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_568: (in 40 : int32)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_569: (in esp_217 + 40 : word32)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in Mem434[esp_217 + 40:int32] : int32)
  Class: Eq_378
  DataType: 
  OrigDataType: 
T_571: (in 44 : int32)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in esp_217 + 44 : word32)
  Class: Eq_572
  DataType: 
  OrigDataType: 
T_573: (in Mem434[esp_217 + 44:int32] : int32)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_574: (in 48 : int32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in esp_217 + 48 : word32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in Mem434[esp_217 + 48:int32] : int32)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_577: (in 52 : int32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in esp_217 + 52 : word32)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in Mem434[esp_217 + 52:int32] : int32)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_580: (in 56 : int32)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_581: (in esp_217 + 56 : word32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in Mem434[esp_217 + 56:(ptr void)] : (ptr void))
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_583: (in 60 : int32)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in esp_217 + 60 : word32)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in Mem434[esp_217 + 60:(ptr BITMAPINFO)] : (ptr BITMAPINFO))
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_586: (in 64 : int32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in esp_217 + 64 : word32)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in Mem434[esp_217 + 64:UINT] : UINT)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_589: (in 68 : int32)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in esp_217 + 68 : word32)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in Mem434[esp_217 + 68:DWORD] : DWORD)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_592: (in StretchDIBits(Mem434[esp_217 + 0x00000014:HDC], Mem434[esp_217 + 24:int32], Mem434[esp_217 + 28:int32], Mem434[esp_217 + 32:int32], Mem434[esp_217 + 36:int32], Mem434[esp_217 + 40:int32], Mem434[esp_217 + 44:int32], Mem434[esp_217 + 48:int32], Mem434[esp_217 + 52:int32], Mem434[esp_217 + 56:(ptr void)], Mem434[esp_217 + 60:(ptr BITMAPINFO)], Mem434[esp_217 + 64:UINT], Mem434[esp_217 + 68:DWORD]) : word32)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in 0x00402142 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in Mem218[0x00402142:word16] : word16)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in cx_219 + Mem218[0x00402142:word16] : word16)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_596: (in SLICE(cx_219, byte, 8) : byte)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in DPB(ebx_163, SLICE(cx_219, byte, 8), 0, 8) : word32)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_598: (in dx_246 + si_170 : word16)
  Class: Eq_309
  DataType: 
  OrigDataType: 
T_599: (in 0x00402120 : ptr32)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in Mem218[0x00402120:word32] : word32)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in Mem218[0x00402120:word32] + ebx_163 : word32)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in Mem218[Mem218[0x00402120:word32] + ebx_163:byte] : byte)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_603: (in SLICE(dx_246, byte, 8) : byte)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_604: (in 0x0040211C : ptr32)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in Mem218[0x0040211C:word32] : word32)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem218[0x0040211C:word32] + ebx_163 : word32)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in Mem218[Mem218[0x0040211C:word32] + ebx_163:byte] : byte)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_608: (in DPB(eax_242, al_278, 0, 8) : word32)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_609: (in 0x00 : byte)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_610: (in ah_276 < 0x00 : bool)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in 0x0001 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in cx - 0x0001 : word16)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_613: (in (byte) cx : byte)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_614: (in esp_147 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in eax_6 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in GlobalAlloc : ptr32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in signature of GlobalAlloc : void)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_618: (in uFlags : UINT)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in dwBytes : SIZE_T)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in 0x00000000 : word32)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_621: (in 0x000F4240 : word32)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_622: (in GlobalAlloc(0x00000000, 0x000F4240) : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_623: (in 0x00000000 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_624: (in eax_6 == 0x00000000 : bool)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in 0x0040204C : word32)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in fp : ptr32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_627: (in 0x0000000C : word32)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in fp - 0x0000000C : word32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in Mem143[fp - 0x0000000C:word32] : word32)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_630: (in 0x00000000 : word32)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in 0x00000010 : word32)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in fp - 0x00000010 : word32)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in Mem145[fp - 0x00000010:word32] : word32)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_634: (in MessageBoxW : ptr32)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in signature of MessageBoxW : void)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_636: (in hWnd : HWND)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in lpText : LPCWSTR)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in lpCaption : LPCWSTR)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in uType : UINT)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x00000000 : word32)
  Class: Eq_636
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
T_643: (in 0x00000010 : word32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_644: (in MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010) : word32)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in 0x0040210C : word32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in Mem150[0x0040210C:word32] : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_647: (in 0x00402104 : word32)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in Mem151[0x00402104:word32] : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_649: (in 0x000007D0 : word32)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in eax_6 + 0x000007D0 : word32)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in 0x00402100 : word32)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in Mem153[0x00402100:word32] : word32)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_653: (in 0x00062250 : word32)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in eax_6 + 0x00062250 : word32)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in 0x0040211C : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in Mem155[0x0040211C:word32] : word32)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_657: (in 0x00092F90 : word32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in eax_6 + 0x00092F90 : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in 0x00402120 : word32)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in Mem157[0x00402120:word32] : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_661: (in 0x000AB630 : word32)
  Class: Eq_661
  DataType: 
  OrigDataType: 
T_662: (in eax_6 + 0x000AB630 : word32)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in 0x00402124 : word32)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in Mem160[0x00402124:word32] : word32)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_665: (in 0x0007A11F : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_666: (in ebx : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_667: (in edi_164 : word32)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in 0x0040210C : ptr32)
  Class: Eq_668
  DataType: 
  OrigDataType: 
T_669: (in Mem160[0x0040210C:word32] : word32)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_670: (in 0x0000 : word16)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_671: (in 0x00000000 : word32)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in edi_164 + 0x00000000 : word32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in Mem165[edi_164 + 0x00000000:word16] : word16)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_674: (in 0x00000002 : word32)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in edi_164 + 0x00000002 : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in edi : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_677: (in 0x00000001 : word32)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in ebx - 0x00000001 : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_679: (in 0x00000000 : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_680: (in ebx != 0x00000000 : bool)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in 0x00000000 : word32)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in 0x00000004 : word32)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in fp - 0x00000004 : word32)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in Mem172[fp - 0x00000004:word32] : word32)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_685: (in GetModuleHandleW : ptr32)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_686: (in signature of GetModuleHandleW : void)
  Class: Eq_685
  DataType: 
  OrigDataType: 
T_687: (in lpModuleName : LPCWSTR)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_688: (in 0x000F4240 : word32)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_689: (in GetModuleHandleW(0x000F4240) : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in 0x004020B4 : word32)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in Mem175[0x004020B4:word32] : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_692: (in 0x00007F00 : word32)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in 0x00000004 : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in fp - 0x00000004 : word32)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in Mem177[fp - 0x00000004:word32] : word32)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_696: (in 0x00000000 : word32)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in 0x00000008 : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in fp - 0x00000008 : word32)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in Mem179[fp - 0x00000008:word32] : word32)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_700: (in LoadIconW : ptr32)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in signature of LoadIconW : void)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_702: (in hInstance : HINSTANCE)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_703: (in lpIconName : LPCWSTR)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_704: (in 0x00000000 : word32)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_705: (in LoadIconW(0x00000000, 0x000F4240) : word32)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in 0x004020B8 : word32)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in Mem182[0x004020B8:word32] : word32)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_708: (in 0x00007F00 : word32)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in 0x00000004 : word32)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in fp - 0x00000004 : word32)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in Mem184[fp - 0x00000004:word32] : word32)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_712: (in 0x00000000 : word32)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in 0x00000008 : word32)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in fp - 0x00000008 : word32)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in Mem186[fp - 0x00000008:word32] : word32)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_716: (in LoadCursorW : ptr32)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in signature of LoadCursorW : void)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_718: (in hInstance : HINSTANCE)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_719: (in lpCursorName : LPCWSTR)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_720: (in LoadCursorW(0x00000000, 0x000F4240) : word32)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in 0x004020BC : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in Mem189[0x004020BC:word32] : word32)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_723: (in 0x004020A4 : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in 0x00000004 : word32)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_725: (in fp - 0x00000004 : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in Mem191[fp - 0x00000004:word32] : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_727: (in RegisterClassW : ptr32)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in signature of RegisterClassW : void)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_729: (in lpWndClass : (ptr WNDCLASSW))
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_730: (in RegisterClassW(0x000F4240) : word32)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_731: (in 0x00000000 : word32)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_732: (in RegisterClassW(0x000F4240) == 0x00000000 : bool)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_733: (in 0x00000000 : word32)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in 0x00000004 : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in fp - 0x00000004 : word32)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in Mem198[fp - 0x00000004:word32] : word32)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_737: (in 0x004020B4 : ptr32)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in Mem198[0x004020B4:word32] : word32)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_739: (in 0x00000008 : word32)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in fp - 0x00000008 : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in Mem200[fp - 0x00000008:word32] : word32)
  Class: Eq_738
  DataType: 
  OrigDataType: 
T_742: (in eax_221 : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in CreateWindowExW : ptr32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in signature of CreateWindowExW : void)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_745: (in dwExStyle : DWORD)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in lpClassName : LPCWSTR)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in lpWindowName : LPCWSTR)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in dwStyle : DWORD)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in X : int32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in Y : int32)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in nWidth : int32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in nHeight : int32)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in hWndParent : HWND)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in hMenu : HMENU)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in hInstance : HINSTANCE)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_756: (in lpParam : LPVOID)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_757: (in 0x00000000 : word32)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_758: (in 0x00402000 : word32)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_759: (in 0x00402012 : word32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_760: (in 0x10CF0000 : word32)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_761: (in 0x00008000 : word32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_762: (in 0x00008000 : word32)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_763: (in 0x0000021C : word32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_764: (in 0x00000190 : word32)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_765: (in 0x00000000 : word32)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_766: (in 0x00000000 : word32)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_767: (in CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4) : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_768: (in 0x00000000 : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_769: (in eax_221 == 0x00000000 : bool)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_770: (in 0x004020CC : word32)
  Class: Eq_770
  DataType: 
  OrigDataType: 
T_771: (in Mem227[0x004020CC:word32] : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_772: (in 0x00000004 : word32)
  Class: Eq_772
  DataType: 
  OrigDataType: 
T_773: (in fp - 0x00000004 : word32)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in Mem229[fp - 0x00000004:word32] : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_775: (in GetDC : ptr32)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_776: (in signature of GetDC : void)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_777: (in hWnd : HWND)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_778: (in GetDC(0x00000000) : word32)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in 0x004020D0 : word32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in Mem232[0x004020D0:word32] : word32)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_781: (in fn00401000 : ptr32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_782: (in signature of fn00401000 : void)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_783: (in fn00401000() : void)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in fn00401020 : ptr32)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in signature of fn00401020 : void)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_786: (in fn00401020() : void)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in fn00401052 : ptr32)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in signature of fn00401052 : void)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_789: (in rArg0 : real64)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_790: (in ebp : word32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in out ebp : ptr32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_792: (in esi : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in out esi : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_794: (in out edi : ptr32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_795: (in fn00401052(rArg0, out ebp, out esi, out edi) : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_796: (in 0x00000004 : word32)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in 0x00000004 : word32)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in fp - 0x00000004 : word32)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in Mem239[fp - 0x00000004:word32] : word32)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_800: (in 0x004020D0 : ptr32)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in Mem239[0x004020D0:word32] : word32)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in 0x00000008 : word32)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in fp - 0x00000008 : word32)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_804: (in Mem241[fp - 0x00000008:word32] : word32)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_805: (in SetStretchBltMode : ptr32)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in signature of SetStretchBltMode : void)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_807: (in hdc : HDC)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in mode : int32)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in fp - 0x00000008 : word32)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in Mem241[fp - 0x00000008:HDC] : HDC)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_811: (in 4 : int32)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_812: (in fp - 4 : word32)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in Mem241[fp - 4:int32] : int32)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_814: (in SetStretchBltMode(Mem241[fp - 0x00000008:HDC], Mem241[fp - 4:int32]) : word32)
  Class: Eq_814
  DataType: 
  OrigDataType: 
T_815: (in esp_243 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_816: (in esp_45 : word32)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in 0x00000004 : word32)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in esp_147 - 0x00000004 : word32)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_819: (in 0x004020D0 : ptr32)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in Mem0[0x004020D0:word32] : word32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in 0x00000000 : word32)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in esp_45 + 0x00000000 : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in Mem47[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_824: (in 0x004020CC : ptr32)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in Mem47[0x004020CC:word32] : word32)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in 0x00000004 : word32)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in esp_45 - 0x00000004 : word32)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in Mem49[esp_45 - 0x00000004:word32] : word32)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_829: (in ReleaseDC : ptr32)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in signature of ReleaseDC : void)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_831: (in hWnd : HWND)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in hDC : HDC)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_833: (in esp_45 - 0x00000004 : word32)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in Mem49[esp_45 - 0x00000004:HWND] : HWND)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_835: (in 0x00000000 : word32)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in esp_45 + 0x00000000 : word32)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in Mem49[esp_45 + 0x00000000:HDC] : HDC)
  Class: Eq_832
  DataType: 
  OrigDataType: 
T_838: (in ReleaseDC(Mem49[esp_45 - 0x00000004:HWND], Mem49[esp_45 + 0x00000000:HDC]) : word32)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in 0x0040210C : ptr32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in Mem49[0x0040210C:word32] : word32)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in 0x00000000 : word32)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in esp_45 + 0x00000000 : word32)
  Class: Eq_842
  DataType: 
  OrigDataType: 
T_843: (in Mem53[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_844: (in GlobalFree : ptr32)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in signature of GlobalFree : void)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_846: (in hMem : HGLOBAL)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in 0x00000000 : word32)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in esp_45 + 0x00000000 : word32)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in Mem53[esp_45 + 0x00000000:HGLOBAL] : HGLOBAL)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_850: (in GlobalFree(Mem53[esp_45 + 0x00000000:HGLOBAL]) : word32)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in 0x004020DC : ptr32)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in Mem53[0x004020DC:word32] : word32)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in 0x00000000 : word32)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in esp_45 + 0x00000000 : word32)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in Mem57[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_856: (in ExitProcess : ptr32)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in signature of ExitProcess : void)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_858: (in uExitCode : UINT)
  Class: Eq_858
  DataType: 
  OrigDataType: 
T_859: (in 0x00000000 : word32)
  Class: Eq_859
  DataType: 
  OrigDataType: 
T_860: (in esp_45 + 0x00000000 : word32)
  Class: Eq_860
  DataType: 
  OrigDataType: 
T_861: (in Mem57[esp_45 + 0x00000000:UINT] : UINT)
  Class: Eq_858
  DataType: 
  OrigDataType: 
T_862: (in ExitProcess(Mem57[esp_45 + 0x00000000:UINT]) : void)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in 0x00000000 : word32)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in esp_45 + 0x00000000 : word32)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in Mem60[esp_45 + 0x00000000:word32] : word32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_866: (in 0x00000004 : word32)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in esp_45 - 0x00000004 : word32)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in Mem63[esp_45 - 0x00000004:word32] : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_869: (in 0x00000008 : word32)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in esp_45 - 0x00000008 : word32)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in Mem65[esp_45 - 0x00000008:word32] : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_872: (in 0x0000000C : word32)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in esp_45 - 0x0000000C : word32)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_874: (in Mem67[esp_45 - 0x0000000C:word32] : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_875: (in ebp_108 : word32)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_876: (in 0x0000000C : word32)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_877: (in esp_45 + 0x0000000C : word32)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in Mem67[esp_45 + 0x0000000C:word32] : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in 0x00000002 : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_880: (in Mem67[esp_45 + 0x0000000C:word32] == 0x00000002 : bool)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in 0x004020D4 : word32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in esp_250 : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in 0x00000000 : word32)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in esp_250 + 0x00000000 : word32)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in Mem265[esp_250 + 0x00000000:word32] : word32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_886: (in TranslateMessage : ptr32)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in signature of TranslateMessage : void)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_888: (in lpMsg : (ptr MSG))
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in 0x00000000 : word32)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in esp_250 + 0x00000000 : word32)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in Mem265[esp_250 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_892: (in TranslateMessage(Mem265[esp_250 + 0x00000000:(ptr MSG)]) : word32)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in 0x004020D4 : word32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in 0x00000000 : word32)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in esp_250 + 0x00000000 : word32)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in Mem269[esp_250 + 0x00000000:word32] : word32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_897: (in DispatchMessageW : ptr32)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in signature of DispatchMessageW : void)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_899: (in lpMsg : (ptr MSG))
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_900: (in 0x00000000 : word32)
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_901: (in esp_250 + 0x00000000 : word32)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in Mem269[esp_250 + 0x00000000:(ptr MSG)] : (ptr MSG))
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_903: (in DispatchMessageW(Mem269[esp_250 + 0x00000000:(ptr MSG)]) : word32)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in fn00401052 : ptr32)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_905: (in rArg1 : real64)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_906: (in out ebp : ptr32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_907: (in out esi : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_908: (in out edi : ptr32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_909: (in fn00401052(rArg1, out ebp, out esi, out edi) : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_910: (in 0x00402108 : ptr32)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in Mem269[0x00402108:word32] : word32)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in 0x00000001 : word32)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in Mem269[0x00402108:word32] + 0x00000001 : word32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in Mem277[0x00402108:word32] : word32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_915: (in 0x00000004 : word32)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in esp_250 + 0x00000004 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_917: (in 0x00000004 : word32)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in esp_243 - 0x00000004 : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_919: (in 0x00000001 : word32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in 0x00000000 : word32)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in esp_250 + 0x00000000 : word32)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in Mem251[esp_250 + 0x00000000:word32] : word32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_923: (in 0x00000000 : word32)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in 0x00000004 : word32)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in esp_250 - 0x00000004 : word32)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in Mem253[esp_250 - 0x00000004:word32] : word32)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_927: (in 0x00000000 : word32)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in 0x00000008 : word32)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in esp_250 - 0x00000008 : word32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in Mem255[esp_250 - 0x00000008:word32] : word32)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_931: (in 0x00000000 : word32)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in 0x0000000C : word32)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in esp_250 - 0x0000000C : word32)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in Mem257[esp_250 - 0x0000000C:word32] : word32)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_935: (in 0x004020D4 : word32)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in 0x00000010 : word32)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in esp_250 - 0x00000010 : word32)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in Mem259[esp_250 - 0x00000010:word32] : word32)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_939: (in PeekMessageW : ptr32)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in signature of PeekMessageW : void)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_941: (in lpMsg : LPMSG)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in hWnd : HWND)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in wMsgFilterMin : UINT)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in wMsgFilterMax : UINT)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in wRemoveMsg : UINT)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in esp_250 - 0x00000010 : word32)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in Mem259[esp_250 - 0x00000010:LPMSG] : LPMSG)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_948: (in 12 : int32)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in esp_250 - 12 : word32)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in Mem259[esp_250 - 12:HWND] : HWND)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_951: (in 8 : int32)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in esp_250 - 8 : word32)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in Mem259[esp_250 - 8:UINT] : UINT)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_954: (in 4 : int32)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in esp_250 - 4 : word32)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in Mem259[esp_250 - 4:UINT] : UINT)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_957: (in 0x00000000 : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in esp_250 + 0x00000000 : word32)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in Mem259[esp_250 + 0x00000000:UINT] : UINT)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_960: (in PeekMessageW(Mem259[esp_250 - 0x00000010:LPMSG], Mem259[esp_250 - 12:HWND], Mem259[esp_250 - 8:UINT], Mem259[esp_250 - 4:UINT], Mem259[esp_250 + 0x00000000:UINT]) : word32)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in 0x00000004 : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in esp_250 + 0x00000004 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_963: (in 0x004020D8 : ptr32)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in Mem259[0x004020D8:word32] : word32)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in 0x00000012 : word32)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_966: (in Mem259[0x004020D8:word32] == 0x00000012 : bool)
  Class: Eq_966
  DataType: 
  OrigDataType: 
T_967: (in 0x00000000 : word32)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in 0x00000010 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in esp_45 - 0x00000010 : word32)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in Mem116[esp_45 - 0x00000010:word32] : word32)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_971: (in PostQuitMessage : ptr32)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in signature of PostQuitMessage : void)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_973: (in nExitCode : int32)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in esp_45 - 0x00000010 : word32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in Mem116[esp_45 - 0x00000010:int32] : int32)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_976: (in PostQuitMessage(Mem116[esp_45 - 0x00000010:int32]) : void)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in 0x0000000C : word32)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_978: (in esp_45 + 0x0000000C : word32)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in Mem67[esp_45 + 0x0000000C:word32] : word32)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in 0x00000005 : word32)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_981: (in Mem67[esp_45 + 0x0000000C:word32] == 0x00000005 : bool)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in 0x00402108 : ptr32)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in Mem67[0x00402108:word32] : word32)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in 0x0000000A : word32)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_985: (in Mem67[0x00402108:word32] <u 0x0000000A : bool)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in 0x00000014 : word32)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in ebp_108 + 0x00000014 : word32)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in Mem67[ebp_108 + 0x00000014:word32] : word32)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in 0x00000010 : word32)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_990: (in esp_45 - 0x00000010 : word32)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in Mem95[esp_45 - 0x00000010:word32] : word32)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_992: (in 0x00000010 : word32)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in ebp_108 + 0x00000010 : word32)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in Mem95[ebp_108 + 0x00000010:word32] : word32)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in 0x00000014 : word32)
  Class: Eq_995
  DataType: 
  OrigDataType: 
T_996: (in esp_45 - 0x00000014 : word32)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in Mem97[esp_45 - 0x00000014:word32] : word32)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_998: (in 0x0000000C : word32)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in ebp_108 + 0x0000000C : word32)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in Mem97[ebp_108 + 0x0000000C:word32] : word32)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in 0x00000018 : word32)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in esp_45 - 0x00000018 : word32)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in Mem99[esp_45 - 0x00000018:word32] : word32)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1004: (in 0x00000008 : word32)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in ebp_108 + 0x00000008 : word32)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in Mem99[ebp_108 + 0x00000008:word32] : word32)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in 0x0000001C : word32)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in esp_45 - 0x0000001C : word32)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in Mem101[esp_45 - 0x0000001C:word32] : word32)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1010: (in DefWindowProcW : ptr32)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in signature of DefWindowProcW : void)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1012: (in hWnd : HWND)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in Msg : UINT)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in wParam : WPARAM)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in lParam : LPARAM)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in esp_45 - 0x0000001C : word32)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in Mem101[esp_45 - 0x0000001C:HWND] : HWND)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1018: (in 24 : int32)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in esp_45 - 24 : word32)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in Mem101[esp_45 - 24:UINT] : UINT)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1021: (in 20 : int32)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in esp_45 - 20 : word32)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in Mem101[esp_45 - 20:WPARAM] : WPARAM)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1024: (in 16 : int32)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in esp_45 - 16 : word32)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in Mem101[esp_45 - 16:LPARAM] : LPARAM)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1027: (in DefWindowProcW(Mem101[esp_45 - 0x0000001C:HWND], Mem101[esp_45 - 24:UINT], Mem101[esp_45 - 20:WPARAM], Mem101[esp_45 - 16:LPARAM]) : word32)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in esi_109 : word32)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in edi_110 : word32)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in fn00401052 : ptr32)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_1031: (in out ebp_108 : ptr32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_1032: (in out esi_109 : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_1033: (in out edi_110 : ptr32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_1034: (in fn00401052(rArg1, out ebp_108, out esi_109, out edi_110) : word32)
  Class: Eq_1034
  DataType: 
  OrigDataType: 
*/
