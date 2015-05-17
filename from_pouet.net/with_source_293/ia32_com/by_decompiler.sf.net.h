// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_293/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in si_10 : word16)
  Class: Eq_2
  DataType: (memptr T_9 (struct 0001 (0 T_24 t0000) (204 T_12 t0204)))
  OrigDataType: (memptr T_9 (struct 0001 (0 T_24 t0000) (204 T_12 t0204)))
T_3: (in 0x32C8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_4: (in 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in si_10 - 0x0001 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x0204 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in si_10 - 0x0001 + 0x0204 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_8: (in 0x00 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment (1C0 T_154 t01C0) (1C2 T_128 t01C2) (1C4 (arr T_226) a01C4) (200 T_159 t0200) (202 T_51 t0202) (259 (arr T_232) a0259) (5F0 T_82 t05F0) (1598 T_88 t1598) (2534 T_85 t2534)))
  OrigDataType: (ptr (segment (1C0 T_154 t01C0) (1C2 T_128 t01C2) (1C4 (arr T_226) a01C4) (200 T_159 t0200) (202 T_51 t0202) (259 (arr T_232) a0259) (5F0 T_82 t05F0) (1598 T_88 t1598) (2534 T_85 t2534)))
T_10: (in 0x0204 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in si_10 + 0x0204 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem7[ds:si_10 + 0x0204:byte] : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_13: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_14: (in si_10 != 0x0000 : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in cx_11 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0055 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in bp_15 : word16)
  Class: Eq_17
  DataType: (memptr T_29 (struct (205 T_32 t0205)))
  OrigDataType: (memptr T_29 (struct (205 T_32 t0205)))
T_18: (in 0x0002 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in si_10 << 0x0002 : word16)
  Class: Eq_17
  DataType: ui16
  OrigDataType: ui16
T_20: (in 0x01C4 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in SEQ(ds, 0x01C4) : ptr32)
  Class: Eq_21
  DataType: ptr32
  OrigDataType: ptr32
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in si_10 + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem7[ds:si_10 + 0x0000:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in (word16) Mem7[ds:si_10 + 0x0000:byte] : word16)
  Class: Eq_25
  DataType: ui16
  OrigDataType: ui16
T_26: (in 0x0004 : word16)
  Class: Eq_26
  DataType: ui16
  OrigDataType: ui16
T_27: (in (word16) Mem7[ds:si_10 + 0x0000:byte] * 0x0004 : word16)
  Class: Eq_27
  DataType: ui16
  OrigDataType: ui16
T_28: (in SEQ(ds, 0x01C4)[(word16) Mem7[ds:si_10 + 0x0000:byte] * 0x0004] : real32)
  Class: Eq_28
  DataType: real32
  OrigDataType: real32
T_29: (in ss : selector)
  Class: Eq_29
  DataType: (ptr (segment (0 (arr T_228) a0000) (5EC (arr T_227) a05EC)))
  OrigDataType: (ptr (segment (0 (arr T_228) a0000) (5EC (arr T_227) a05EC)))
T_30: (in 0x0205 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in bp_15 + 0x0205 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem19[ss:bp_15 + 0x0205:real32] : real32)
  Class: Eq_28
  DataType: real32
  OrigDataType: real32
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in si_10 + 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx_11 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_38: (in cx_11 != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in ax_30 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in msdos_create_truncate_file : ptr32)
  Class: Eq_40
  DataType: (ptr (fn T_49 (T_46, T_9, T_47, T_48)))
  OrigDataType: (ptr (fn T_49 (T_46, T_9, T_47, T_48)))
T_41: (in signature of msdos_create_truncate_file : void)
  Class: Eq_40
  DataType: 
  OrigDataType: 
T_42: (in cx : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_44: (in dx : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in axOut : ptr16)
  Class: Eq_45
  DataType: ptr16
  OrigDataType: ptr16
T_46: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_47: (in 0x01BA : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_48: (in out ax_30 : ptr16)
  Class: Eq_45
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_49: (in msdos_create_truncate_file(0x0000, ds, 0x01BA, out ax_30) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0202 : word16)
  Class: Eq_50
  DataType: (memptr T_9 (struct (0 T_51 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_51 t0000)))
T_51: (in Mem32[ds:0x0202:word16] : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_52: (in dx_135 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x01D4 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_54: (in bh_38 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in bx_264 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in fn0C00_01B1 : ptr32)
  Class: Eq_56
  DataType: (ptr (fn T_65 (T_62, T_63, T_9, T_64)))
  OrigDataType: (ptr (fn T_65 (T_62, T_63, T_9, T_64)))
T_57: (in signature of fn0C00_01B1 : void)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_58: (in cx : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in dx : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment (202 T_211 t0202)))
  OrigDataType: (ptr (segment (202 T_211 t0202)))
T_61: (in bhOut : ptr16)
  Class: Eq_61
  DataType: ptr16
  OrigDataType: ptr16
T_62: (in 0x002C : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_63: (in 0x01D4 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_64: (in out bh_38 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_65: (in fn0C00_01B1(0x002C, 0x01D4, ds, out bh_38) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in DPB(ax_30, fn0C00_01B1(0x002C, 0x01D4, ds, out bh_38), 0, 8) : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_67: (in di_275 : word16)
  Class: Eq_67
  DataType: (memptr T_9 (struct 0001 (0 T_203 t0000)))
  OrigDataType: (memptr T_9 (struct 0001 (0 T_203 t0000)))
T_68: (in 0x0259 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_69: (in cx_100 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0100 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_71: (in 0x01D4 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in fp : ptr16)
  Class: Eq_72
  DataType: (union ((union (ptr16 u0) ((memptr T_29 (struct (FFFFFFDA T_92 tFFFFFFDA))) u1)) u0) ((memptr T_29 (struct (FFFFFFEA T_181 tFFFFFFEA))) u1) ((union (ptr16 u0) ((memptr T_29 (struct (FFFFFFFA T_75 tFFFFFFFA))) u1)) u2))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_29 (struct (FFFFFFDA T_92 tFFFFFFDA))) u1)) u0) ((memptr T_29 (struct (FFFFFFEA T_181 tFFFFFFEA))) u1) ((union (ptr16 u0) ((memptr T_29 (struct (FFFFFFFA T_75 tFFFFFFFA))) u1)) u2))
T_73: (in 0x0006 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in fp - 0x0006 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem110[ss:fp - 0x0006:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_76: (in cx_121 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x189C : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_78: (in bx_133 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_79: (in di_138 : word16)
  Class: Eq_67
  DataType: (memptr T_9 (struct (0 T_176 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_176 t0000)))
T_80: (in 1 : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_81: (in 0x05F0 : word16)
  Class: Eq_81
  DataType: (memptr T_9 (struct (0 T_82 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_82 t0000)))
T_82: (in Mem279[ds:0x05F0:real32] : real32)
  Class: Eq_80
  DataType: real32
  OrigDataType: real32
T_83: (in 1 : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_84: (in 0x2534 : word16)
  Class: Eq_84
  DataType: (memptr T_9 (struct (0 T_85 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_85 t0000)))
T_85: (in Mem280[ds:0x2534:real32] : real32)
  Class: Eq_83
  DataType: real32
  OrigDataType: real32
T_86: (in 1 : real64)
  Class: Eq_86
  DataType: real64
  OrigDataType: real64
T_87: (in 0x1598 : word16)
  Class: Eq_87
  DataType: (memptr T_9 (struct (0 T_88 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_88 t0000)))
T_88: (in Mem281[ds:0x1598:real32] : real32)
  Class: Eq_86
  DataType: real32
  OrigDataType: real32
T_89: (in 0x01D4 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0026 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in fp - 0x0026 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem183[ss:fp - 0x0026:word16] : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_93: (in si_194 : word16)
  Class: Eq_93
  DataType: ui16
  OrigDataType: ui16
T_94: (in bp_167 : word16)
  Class: Eq_94
  DataType: (memptr T_29 (struct 0FA0 (0 T_93 t0000)))
  OrigDataType: (memptr T_29 (struct 0FA0 (0 T_93 t0000)))
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bp_167 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem183[ss:bp_167 + 0x0000:word16] : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_98: (in rLoc2_197 : real64)
  Class: Eq_98
  DataType: real64
  OrigDataType: real64
T_99: (in 0x0004 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in bp_167 + 0x0004 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in SEQ(ss, bp_167 + 0x0004) : ptr32)
  Class: Eq_101
  DataType: ptr32
  OrigDataType: ptr32
T_102: (in 0x0004 : word16)
  Class: Eq_102
  DataType: ui16
  OrigDataType: ui16
T_103: (in si_194 * 0x0004 : word16)
  Class: Eq_103
  DataType: ui16
  OrigDataType: ui16
T_104: (in SEQ(ss, bp_167 + 0x0004)[si_194 * 0x0004] : real32)
  Class: Eq_98
  DataType: real32
  OrigDataType: real32
T_105: (in si_204 : word16)
  Class: Eq_93
  DataType: ui16
  OrigDataType: ui16
T_106: (in 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in si_194 + 0x0001 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in SEQ(dx_135, si_194 + 0x0001) : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in bl_148 : byte)
  Class: Eq_109
  DataType: (union (uint8 u0) (uint16 u1))
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_110: (in SEQ(dx_135, si_194 + 0x0001) % bl_148 : uint16)
  Class: Eq_110
  DataType: uint16
  OrigDataType: uint16
T_111: (in si_194 + 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in SEQ(SEQ(dx_135, si_194 + 0x0001) % bl_148, si_194 + 0x0001) : word32)
  Class: Eq_112
  DataType: uint32
  OrigDataType: uint32
T_113: (in SEQ(SEQ(dx_135, si_194 + 0x0001) % bl_148, si_194 + 0x0001) /u bl_148 : uint16)
  Class: Eq_113
  DataType: uint16
  OrigDataType: uint16
T_114: (in SLICE(SEQ(SEQ(dx_135, si_194 + 0x0001) % bl_148, si_194 + 0x0001) /u bl_148, byte, 8) : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in (word16) SLICE(SEQ(SEQ(dx_135, si_194 + 0x0001) % bl_148, si_194 + 0x0001) /u bl_148, byte, 8) : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in bp_167 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem205[ss:bp_167 + 0x0000:word16] : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_119: (in rLoc2_208 : real64)
  Class: Eq_119
  DataType: real64
  OrigDataType: real64
T_120: (in 0x0004 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in bp_167 + 0x0004 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in SEQ(ss, bp_167 + 0x0004) : ptr32)
  Class: Eq_122
  DataType: ptr32
  OrigDataType: ptr32
T_123: (in 0x0004 : word16)
  Class: Eq_123
  DataType: ui16
  OrigDataType: ui16
T_124: (in si_204 * 0x0004 : word16)
  Class: Eq_124
  DataType: ui16
  OrigDataType: ui16
T_125: (in SEQ(ss, bp_167 + 0x0004)[si_204 * 0x0004] : real32)
  Class: Eq_125
  DataType: real32
  OrigDataType: real32
T_126: (in rLoc2_197 - SEQ(ss, bp_167 + 0x0004)[si_204 * 0x0004] : word16)
  Class: Eq_126
  DataType: (union (real16 u0) (word16 u1))
  OrigDataType: (union (real16 u0) (word16 u1))
T_127: (in 0x01C2 : word16)
  Class: Eq_127
  DataType: (memptr T_9 (struct (0 T_128 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_128 t0000)))
T_128: (in Mem205[ds:0x01C2:word16] : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in (real64) Mem205[ds:0x01C2:word16] : real64)
  Class: Eq_129
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_130: (in (rLoc2_197 - SEQ(ss, bp_167 + 0x0004)[si_204 * 0x0004]) / (real64) Mem205[ds:0x01C2:word16] : word16)
  Class: Eq_119
  DataType: real16
  OrigDataType: real16
T_131: (in 0x0004 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in bp_167 + 0x0004 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in SEQ(ss, bp_167 + 0x0004) : ptr32)
  Class: Eq_133
  DataType: ptr32
  OrigDataType: ptr32
T_134: (in 0x0004 : word16)
  Class: Eq_134
  DataType: ui16
  OrigDataType: ui16
T_135: (in si_204 * 0x0004 : word16)
  Class: Eq_135
  DataType: ui16
  OrigDataType: ui16
T_136: (in SEQ(ss, bp_167 + 0x0004)[si_204 * 0x0004] : real32)
  Class: Eq_119
  DataType: real32
  OrigDataType: real32
T_137: (in bl_218 : byte)
  Class: Eq_137
  DataType: uint8
  OrigDataType: uint8
T_138: (in bx_147 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in (byte) bx_147 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_140: (in 0x0FA0 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bp_167 + 0x0FA0 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_142: (in 0x01 : byte)
  Class: Eq_142
  DataType: uint8
  OrigDataType: uint8
T_143: (in bl_218 >>u 0x01 : word16)
  Class: Eq_109
  DataType: uint16
  OrigDataType: uint16
T_144: (in bl_218 >>u 0x01 : word16)
  Class: Eq_144
  DataType: uint16
  OrigDataType: uint16
T_145: (in DPB(bx_147, bl_218 >>u 0x01, 0, 8) : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_146: (in rLoc1_166 : real64)
  Class: Eq_146
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_147: (in rLoc1_166 + rLoc2_208 : real64)
  Class: Eq_146
  DataType: real64
  OrigDataType: real64
T_148: (in cx_168 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0001 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in cx_168 - 0x0001 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_151: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_152: (in cx_168 != 0x0000 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x01C0 : word16)
  Class: Eq_153
  DataType: (memptr T_9 (struct (0 T_154 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_154 t0000)))
T_154: (in Mem209[ds:0x01C0:word16] : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in (real64) Mem209[ds:0x01C0:word16] : real64)
  Class: Eq_155
  DataType: (union (real16 u0) (real64 u1))
  OrigDataType: (union (real16 u0) (real64 u1))
T_156: (in rLoc1_166 * (real64) Mem209[ds:0x01C0:word16] : word16)
  Class: Eq_156
  DataType: real16
  OrigDataType: real16
T_157: (in (int16) (rLoc1_166 * (real64) Mem209[ds:0x01C0:word16]) : int16)
  Class: Eq_157
  DataType: int16
  OrigDataType: int16
T_158: (in 0x0200 : word16)
  Class: Eq_158
  DataType: (memptr T_9 (struct (0 T_159 t0000)))
  OrigDataType: (memptr T_9 (struct (0 T_159 t0000)))
T_159: (in Mem234[ds:0x0200:int16] : int16)
  Class: Eq_157
  DataType: int16
  OrigDataType: int16
T_160: (in bh_237 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in fn0C00_01B1 : ptr32)
  Class: Eq_56
  DataType: (ptr (fn T_165 (T_162, T_163, T_9, T_164)))
  OrigDataType: (ptr (fn T_165 (T_162, T_163, T_9, T_164)))
T_162: (in 0x0002 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_163: (in 0x0200 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_164: (in out bh_237 : ptr16)
  Class: Eq_61
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_165: (in fn0C00_01B1(0x0002, 0x0200, ds, out bh_237) : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in bx_145 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in 0x0001 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in bx_145 - 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_169: (in 0x0001 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in cx_121 - 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_172: (in cx_121 != 0x0000 : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in bx_141 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in 0x0000 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in di_138 + 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in Mem110[ds:di_138 + 0x0000:byte] : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in DPB(bx_133, Mem110[ds:di_138 + 0x0000:byte], 0, 8) : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_178: (in 0x01D4 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0016 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in fp - 0x0016 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem155[ss:fp - 0x0016:word16] : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_182: (in 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in bx_141 + 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in bx_141 + 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in (byte) (bx_141 + 0x0001) : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x06 : byte)
  Class: Eq_186
  DataType: byte
  OrigDataType: byte
T_187: (in (byte) (bx_141 + 0x0001) << 0x06 : word16)
  Class: Eq_187
  DataType: ui16
  OrigDataType: ui16
T_188: (in DPB(bx_141 + 0x0001, (byte) (bx_141 + 0x0001) << 0x06, 0, 8) : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_189: (in bx_145 - 0x0001 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_190: (in bx_145 - 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in (byte) (bx_145 - 0x0001) : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_192: (in 0 : real64)
  Class: Eq_146
  DataType: real64
  OrigDataType: real64
T_193: (in 0x05EC : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_194: (in 0x0003 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in di_275 + 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_197: (in 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in cx_100 - 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_199: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_200: (in cx_100 != 0x0000 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x0000 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in di_275 + 0x0000 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in Mem32[ds:di_275 + 0x0000:byte] : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0x01 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in Mem32[ds:di_275 + 0x0000:byte] & 0x01 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in 0x00 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_207: (in (Mem32[ds:di_275 + 0x0000:byte] & 0x01) == 0x00 : bool)
  Class: Eq_207
  DataType: bool
  OrigDataType: bool
T_208: (in bl : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in bx_7 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in 0x0202 : word16)
  Class: Eq_210
  DataType: (memptr T_60 (struct (0 T_211 t0000)))
  OrigDataType: (memptr T_60 (struct (0 T_211 t0000)))
T_211: (in Mem0[ds:0x0202:word16] : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_212: (in ax_12 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in msdos_write_file : ptr32)
  Class: Eq_213
  DataType: (ptr (fn T_221 (T_209, T_58, T_219, T_220)))
  OrigDataType: (ptr (fn T_221 (T_209, T_58, T_219, T_220)))
T_214: (in signature of msdos_write_file : void)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_215: (in bx : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_216: (in cx : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_217: (in ds_dx : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in axOut : ptr16)
  Class: Eq_218
  DataType: ptr16
  OrigDataType: ptr16
T_219: (in ds_dx : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_220: (in out ax_12 : ptr16)
  Class: Eq_218
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_221: (in msdos_write_file(bx_7, cx, ds_dx, out ax_12) : bool)
  Class: Eq_221
  DataType: bool
  OrigDataType: bool
T_222: (in bh_9 : byte)
  Class: Eq_222
  DataType: byte
  OrigDataType: byte
T_223: (in SLICE(bx_7, byte, 8) : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_224: (in *bhOut : byte)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_225: (in (byte) bx_7 : byte)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226:
  Class: Eq_226
  DataType: 
  OrigDataType: (struct 0004 (0 T_28 t0000))
T_227:
  Class: Eq_227
  DataType: 
  OrigDataType: (struct 0FA0 (0 T_97 t0000))
T_228:
  Class: Eq_228
  DataType: 
  OrigDataType: (struct 0004 (0 T_104 t0000))
T_229:
  Class: Eq_227
  DataType: 
  OrigDataType: (struct 0FA0 (0 T_118 t0000))
T_230:
  Class: Eq_228
  DataType: 
  OrigDataType: (struct 0004 (0 T_125 t0000))
T_231:
  Class: Eq_228
  DataType: 
  OrigDataType: (struct 0004 (0 T_136 t0000))
T_232:
  Class: Eq_232
  DataType: 
  OrigDataType: (struct 0001 (0 T_203 t0000))
*/
